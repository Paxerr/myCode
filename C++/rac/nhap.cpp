#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tmp, n, ptu;
    cin >> n;
    vector<int> a;
    for(int i = 0 ; i < n ; i++)
    {
        cin >> tmp;
        if(tmp == 1) {cin >> ptu; a.push_back(ptu); }
        else a.pop_back();
    }
    if(a.empty()) cout << "EMPTY";
    else 
        for(int i = 0 ; i < a.size() ; i++) cout << i;
}
