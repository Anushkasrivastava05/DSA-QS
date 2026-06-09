class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>mat(n, vector<int>(n, 0));
         
         int srow=0,scol=0,erow=n-1,ecol=n-1;
         int sq=1;
         while(srow<=erow && scol<=ecol){
         for(int j=scol;j<=ecol;j++){
            mat[srow][j]=sq;
            sq++;
         }
         for(int i=srow+1;i<=erow;i++){
            mat[i][ecol]=sq;
            sq++;
         }
         for(int j=ecol-1;j>=scol;j--){
            if(scol==ecol){
                break;
            }
            mat[erow][j]=sq;
            sq++;
         }
         for(int i=erow-1;i>=srow+1;i--){
            if(srow==erow){
                break;
            }
            mat[i][scol]=sq;
            sq++;
         }
         srow++;scol++;ecol--;erow--;
    }
    return mat;
    }
};