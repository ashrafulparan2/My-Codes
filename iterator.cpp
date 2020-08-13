#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    vector <int> vc;
    vector <int>::iterator it;

    for(int i=1;i<=5;i++)
    {
        vc.push_back(i);
    }
    for(it=vc.begin();it!=vc.end();it++)
    {
        cout<<*it<<endl;
    }
}
