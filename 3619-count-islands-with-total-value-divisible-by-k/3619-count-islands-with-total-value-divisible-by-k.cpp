class Solution {
public:
    int countIslands(vector<vector<int>>& grid, int k) {
        if (grid.empty()){
            return 0;
        }
        int m=grid.size();
        int n=grid[0].size();
        int output=0;
        int dr[4] = {-1, 1, 0, 0};
        int dc[4] = {0, 0, -1, 1};
        

        queue <pair<int,int>>q;
        int total_vertices=m *n;
        vector<bool> visited(total_vertices, false);

        for(int i=0;i<m;i++){
            for(int j=0; j<n;j++){
                
                if(grid[i][j]!=0 && !visited[i *n +j]){
                    long long result=grid[i][j];
                    visited[i *n +j]=true;
                    q.push({i,j});
                    
                    while(!q.empty()){
                        int r = q.front().first;
                         int c = q.front().second;
                        q.pop();


                        for(int d=0; d<4;d++){
                           int nr=r + dr[d];
                           int nc=c +dc[d];
                           if (nr >= 0 && nr < m &&
                                nc >= 0 && nc < n) {
                                    if(grid[nr][nc]!=0 && !visited[nr *n + nc]){
                                        visited[nr *n +nc]=true;
                                        q.push({nr,nc});
                                        result +=grid[nr][nc];
                                        
                                    }
    
    
                             }



                        
                         }
                        }
                        if(result%k==0){
                            output +=1;
                        }
                    }
                        
                    }
                    

                }
                return output;


            }
             
        
       
    
};