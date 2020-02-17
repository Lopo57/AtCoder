//https://atcoder.jp/contests/abc155/tasks/abc155_b

#include <iostream>
#include <vector>
#include <string>
#include <array>
#include <algorithm>

using namespace std;

int main ()
{

    int N;
    bool permission;
    cin >> N;

    vector <int> arrayNum(N);

    for (int i = 0; i < N; ++i)
    {
        cin >> arrayNum.at(i);
    }

    for (int i = 0; i < N; ++i)
    {
        if (arrayNum.at(i) % 2 == 0)
        {
            if (arrayNum.at(i) % 3 == 0 || arrayNum.at(i) % 5 == 0)
            {
                permission = true;
            } else
            {
                permission = false;
                break;
            }
        }
    }

    if (permission)
    {
        cout << "APPROVED" << endl;
    } else
    {
        cout << "DENIED" << endl;
    }
    

    return 0;
}