#include <vector>

void dfs(int r, int c, int rows, int cols,
         std::vector<std::vector<bool>>& visited,  // pass visited by reference
         int prevHeight, std::vector<std::vector<int>>& heights) {
  if (r < 0 || r >= rows || c < 0 || c >= cols || visited[r][c] ||
      prevHeight > heights[r][c]) {
    return;
  }
  visited[r][c] = true;
  dfs(r + 1, c, rows, cols, visited, heights[r][c], heights);
  dfs(r - 1, c, rows, cols, visited, heights[r][c], heights);
  dfs(r, c + 1, rows, cols, visited, heights[r][c], heights);
  dfs(r, c - 1, rows, cols, visited, heights[r][c], heights);
}

std::vector<std::vector<int>> PacificAtlantic(
    std::vector<std::vector<int>>& heights) {
  int ROWS = heights.size();
  int COLS = heights[0].size();

  std::vector<std::vector<bool>> pacific(ROWS, std::vector<bool>(COLS, false));
  std::vector<std::vector<bool>> atlantic(ROWS, std::vector<bool>(COLS, false));

  // Perform DFS for each ocean, starting from the borders
  for (int c = 0; c < COLS; c++) {
    dfs(0, c, ROWS, COLS, pacific, heights[0][c], heights);  // Pacific top row
    dfs(ROWS - 1, c, ROWS, COLS, atlantic, heights[ROWS - 1][c],
        heights);  // Atlantic bottom row
  }

  for (int r = 0; r < ROWS; r++) {
    dfs(r, 0, ROWS, COLS, pacific, heights[r][0],
        heights);  // Pacific left column
    dfs(r, COLS - 1, ROWS, COLS, atlantic, heights[r][COLS - 1],
        heights);  // Atlantic right column
  }

  std::vector<std::vector<int>> ans;
  for (int r = 0; r < ROWS; r++) {
    for (int c = 0; c < COLS; c++) {
      if (pacific[r][c] && atlantic[r][c]) {
        ans.push_back({r, c});
      }
    }
  }
  return ans;
}
