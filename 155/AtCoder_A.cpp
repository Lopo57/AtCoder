//https://atcoder.jp/contests/abc155/tasks/abc155_a

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

int main ()
{

    int A, B, C;

    cin >> A >> B >> C;

    if (A == B || A == C || B == C)
    {
        if (A != B || A != C || B != C)
        {
            cout << "Yes" << endl;
        } else 
        {
            cout << "No" << endl;
        }
    } else 
    {
        cout << "No" << endl;
    }

    return 0;
}