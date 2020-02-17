//https://qiita.com/drken/items/a5e6fe22863b7992efdb
//DP法

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <map>
#include <algorithm>

using namespace std;

int main ()
{
    int n;                  //入力
    array<int, 10010> a;    //入力配列。少し多めに確保
    array<int, 10010> dp;   //DPテーブル

    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a.at(i);
    
    dp.at(0) = 0;
    for (int i = 0; i < n; ++i)
    {
        dp[i + 1] = max(dp.at(i), dp.at(i) + a.at(i));
        cout << dp.at(i + 1) << " ";
    }
    cout << endl;


    return 0;
}