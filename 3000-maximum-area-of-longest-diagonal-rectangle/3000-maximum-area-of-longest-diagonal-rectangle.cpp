class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiagonal = -1;
        int maxArea = -1;
        for (int i = 0; i < dimensions.size(); i++) {
            int length = dimensions[i][0];
            int width = dimensions[i][1];
            int diagonal = length * length + width * width;
            int area = length * width;
            if (diagonal > maxDiagonal) {
                maxDiagonal = diagonal;
                maxArea = area;
            }
            else if (diagonal == maxDiagonal && area > maxArea) {
                maxArea = area;
            }
        }
        return maxArea;
    }
};