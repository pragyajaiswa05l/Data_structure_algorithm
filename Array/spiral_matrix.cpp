class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int minr = 0 ;
        int minc = 0;
        int maxr = matrix.size()-1;
        int maxc = matrix[0].size()-1;

        vector<int>result;

        int tne = (maxr+1)*(maxc+1);
        int count = 0;
        while(count < tne){
            //top wall
            for(int i = minr,j = minc; j <= maxc && count <tne;j++){
                result.push_back(matrix[i][j]);
                count++;
            }
            minr++;
            //right wall
            for(int i = minr,j = maxc; i<=maxr && count <tne;i++){
                result.push_back(matrix[i][j]);
                count++;
            }
            maxc--;

            //bottom wall
            for(int i = maxr,j = maxc; j >= minc && count <tne;j--){
                result.push_back(matrix[i][j]);
                count++;
            }
            maxr--;
            //left wall
            for(int i = maxr,j = minc; i>=minr && count <tne;i--){
                result.push_back(matrix[i][j]);
                count++;
            }
            minc++;
        }
        return result;
    }
};
