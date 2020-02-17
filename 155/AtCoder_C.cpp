//https://atcoder.jp/contests/abc155/tasks/abc155_c

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <map>
#include <algorithm>

using namespace std;

int main ()
{
    
    int N;
    cin >> N;
    vector <string> S(N);
    vector <string> ans;
    map<string, int> mapAns;
    int max = 0;
    
    for (int i = 0; i < N; ++i)
    {
        cin >> S.at(i);
    }

    for (int i = 0; i < N; ++i)
    {
        mapAns[S.at(i)]++;

        if (mapAns[S.at(i)] >= max)
        {
            max = mapAns[S.at(i)];
        }
    }

    for (auto const& mp : mapAns)
    {
        if (mp.second == max)
        {
            ans.push_back(mp.first);
        }
    }

    sort(ans.begin(), ans.end());

    for (string outS : ans)
    {
        cout << outS << endl;
    }
    


    return 0;
}