class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {

        if (strs.empty()) {
        return "";
    }

        int size=strs[0].size();
        int vector_size=strs.size();
         string results="";

         for(int i=0;i<size;i++){
            char c =strs[0][i];
            for (int j=1;j<vector_size;j++){
                if(i>=strs[j].size() || strs[j][i] !=c){
                    return results;
                }
                
                }
                results.push_back(c);
            }
         

        return results;
    };
};