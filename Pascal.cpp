#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int numRows) 
    {
      vector<long long int> v = {1, 1};
      vector<vector<long long int>> ans;
      ans.push_back({});

      ans[0] = {1};
      if (numRows == 1)
          return ans;

      ans.push_back(v);
      numRows = numRows - 2;

      while (numRows)
       {
         vector<long long int> row;
          row.push_back(1);
          for (int i = 1; i < v.size(); i++) 
          {
              long long int element = v[i - 1] + v[i];
              row.push_back(element);
          }
          row.push_back(1);
          ans.push_back(row);
          numRows--;
          v = row;
      }
      return ans;    
  }