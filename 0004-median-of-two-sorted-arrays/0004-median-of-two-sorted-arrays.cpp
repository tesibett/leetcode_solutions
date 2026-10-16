class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        vector<int>MergedArray;
        int i=0;
        int j=0;
        double median;

        while(  i< nums1.size() &&  j<nums2.size()){
            if(nums1[i]<nums2[j]){
                MergedArray.push_back(nums1[i]);
                i++;
            }
            else{
                MergedArray.push_back(nums2[j]);
                j++;
            }
            
        }
        while(i<nums1.size()){
            MergedArray.push_back(nums1[i]);
            i++;
        }
        while(j<nums2.size()){
            MergedArray.push_back(nums2[j]);
            j++;
        }

        if(MergedArray.size()%2 !=0){
            int number=MergedArray.size()/2;
            median=MergedArray[number];

        }else{
            int number=MergedArray.size()/2;
            median=(MergedArray[number-1]+MergedArray[number])/2.0;
        }

        return median;


        
    }
};