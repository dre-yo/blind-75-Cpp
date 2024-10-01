#include <iostream>
#include <vector>

std::vector<int> SpiralOrder(std::vector<std::vector<int>> &matrix){
  std::vector<int> result;
  int left = 0;                   // left bound
  int right = matrix[0].size();   // right bound
  int top = 0;                    // top bound
  int bottom = matrix.size();      // bottom bound
  
  while(left < right && top < bottom){
    // get top row first
    for(int i = left; i < right; i++){
      result.push_back(matrix[top][i]);
    }
    top++;      // move top down one
    
    // get rightmost column
    for (int i = top; i < bottom; i++){
      result.push_back(matrix[i][right- 1]);
    }
    right--;    //move right left one

    if(!(left < right && top < bottom)){
      break;
    }

    // get bottom row
    for(int i = right - 1; i >= left; i--){
      result.push_back(matrix[bottom - 1][i]);
    }
    bottom--;   // move bottom up one

    // get leftmost column  
    for(int i = bottom - 1; i >= top; i--){
      result.push_back(matrix[i][left]);
    }
    left++;     // move left right one
  }
  return result;
}
