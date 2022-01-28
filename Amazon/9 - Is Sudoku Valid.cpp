class Solution {
public:
  int isValid(vector<vector<int>> mat) {
    // code here
    for (int i = 0; i < 9; i++)
    {
      vector<bool> vis(10, false);
      for (int j = 0; j < 9; j++)
      {
        if (mat[i][j] == 0)
          continue;

        else if (vis[mat[i][j]] == false)
          vis[mat[i][j]] = mat[i][j];

        else
          return 0;
      }
    }

    for (int j = 0; j < 9; j++)
    {
      vector<bool> vis(10, false);
      for (int i = 0; i < 9; i++)
      {
        if (mat[i][j] == 0)
          continue;

        else if (vis[mat[i][j]] == false)
          vis[mat[i][j]] = mat[i][j];

        else
          return 0;
      }
    }

    for (int i = 0; i < 9; i += 3) // 9 sub sqaures check of 3x3
    {
      for (int j = 0; j < 9; j += 3)
      {
        vector<int>arr(10, -1);
        for (int a = 0; a < 3; a++)
        {
          for (int b = 0; b < 3; b++)
          {
            if (mat[i + a][j + b] == 0)
              continue;

            else if (arr[mat[i + a][j + b]] == -1)
              arr[mat[i + a][j + b]] = mat[i + a][j + b];

            else
              return 0;
          }
        }
      }
    }
    return 1;
  }
};