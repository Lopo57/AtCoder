//https://qiita.com/drken/items/a5e6fe22863b7992efdb
//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_B&lang=jp
//ナップサック法

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <map>
#include <algorithm>

using namespace std;

int main ()
{
    int N, W;       //品物の数、容量
    cin >> N >> W;

    vector< vector<int> > goods(2, vector<int>(N));
    
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            cin >> goods.at(i).at(j);
        }
    }

    return 0;
}