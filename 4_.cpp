#include <bits/stdc++.h>
using namespace std;

// void setZeroes(vector<vector<int>> &matrix)
// {
//     vector<int> r;
//     vector<int> c;
//     for (int i = 0; i < matrix.size(); i++)
//     {
//         for (int j = 0; j < matrix[i].size(); j++)
//         {
//             if (matrix[i][j] == 0)
//             {
//                 r.push_back(i);
//                 c.push_back(j);
//             }
//         }
//     }

//     for (int i = 0;i<r.size();i++)
//     {
//         for (int j = 0;j<matrix.size();j++)
//     {
//         matrix[r[i]][j] = 0;
//     }
//     }
//     for (int i = 0;i<c.size();i++)
//     {
//         for (int j = 0;j<matrix.size();j++)
//     {
//         matrix[j][c[i]] = 0;
//     }
// }
// }

void setZeroes(vector<vector<int>> &matrix)
{
    bool row = false, col = false;
    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[0].size(); j++)
        {
            if (matrix[i][j] == 0)
            {
                if (i == 0)
                    row = true;
                if (j == 0)
                    col = true;
                matrix[0][j] = matrix[i][0] = 0;
            }
        }
    }
    for (int i = 1; i < matrix.size(); i++)
    {
        for (int j = 1; j < matrix[0].size(); j++)
        {
            if (matrix[i][0] == 0 || matrix[0][j] == 0)
                matrix[i][j] = 0;
        }
    }
    if (col)
    {
        for (int i = 0; i < matrix.size(); i++)
            matrix[i][0] = 0;
    }
    if (row)
    {
        for (int j = 0; j < matrix[0].size(); j++)
            matrix[0][j] = 0;
    }
}

int main()
{
    // [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
    vector<vector<int>> m{{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[i].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    cout << "++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    setZeroes(m);
    for (int i = 0; i < m.size(); i++)
    {
        for (int j = 0; j < m[i].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}