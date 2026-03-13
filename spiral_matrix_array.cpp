class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        
        int n = matrix.size();       // row size
        int m = matrix[0].size();    // col size

        int top = 0;
        int bottom = n - 1;
        int left = 0;
        int right = m - 1;
        
        while(top <= bottom && left <= right) {
            
            for(int i = left; i <= right; i++)     // moves from left to right
                ans.push_back(matrix[top][i]);
            top++;
            
            for(int i = top; i <= bottom; i++)    // moves from top to bottom
                ans.push_back(matrix[i][right]);
            right--;
            
            if(top <= bottom) {
                for(int i = right; i >= left; i--)   // moves from right to left
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }
            
            if(left <= right) {
                for(int i = bottom; i >= top; i--)   // moves from bottom to top
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }
        
        return ans;
    }
};
