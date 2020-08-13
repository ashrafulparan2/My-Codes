#include <iostream>
using namespace std;

int main()
{
   char s[100],c;
    int n,cnt{0},cn{0};
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>c;
        s[i]=c;
        if(s[i]=='A')
        {
            cnt++;
        }

        else
            cn++;
    }

    if(cnt>cn)
        cout<<"Anton"<<endl;
    else if(cnt==cn)
        cout<<"Friendship"<<endl;
    else
        cout<<"Danik"<<endl;
}
