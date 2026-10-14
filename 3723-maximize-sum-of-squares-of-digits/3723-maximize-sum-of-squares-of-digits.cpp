//gpt smarter solution
//greedy approach
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9 * num) return "";

        string result = "";

        for (int i = 0; i < num; i++) {
            int digit = min(9, sum);
            result += to_string(digit);
            sum -= digit;
        }

        if (sum > 0) return "";
        return result;
    }
};

// my original solution
/*class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
 

        vector<int> number_string;
        int number=-1;

       number_string.resize(num, 0);

       vector <int> sum_array;
        int j=0;

        int index=0;

        for(int i=pow(10,num-1);i<pow(10,num);i++){
     

            int test_sum=0;
            int temp=i;
            while (temp > 0) {
        test_sum += temp % 10;
        temp /= 10;
    }

    if (test_sum == sum) {
        sum_array.push_back(i);
        
    }
     else{
            cout<<"";

        }
        }


        int square_sum=-1;
        int size = sum_array.size();
        

         for(int i=0;i<size;i ++){
            int individual_sum=0;
            
                int temp = sum_array[i];

   while (temp > 0) {
    int digit = temp % 10;
    individual_sum += digit * digit;
    temp /= 10;

            }
            if (individual_sum > square_sum ||
    (individual_sum == square_sum && sum_array[i] > number)) {
    square_sum = individual_sum;
    number = sum_array[i];
}
        }
  if (number == -1) {
    return "";
}

return to_string(number);

        
    }
};
*/