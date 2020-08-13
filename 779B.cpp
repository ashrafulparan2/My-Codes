#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int k,z{0},n{0};
    string s;
    cin>>s>>k;
    if(k>=s.size())
    {
        cout<<s.size()-1<<endl;
    }
    else
    {
        z=0;n=0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]=='0')
            {
                z++;
            }
            else
            {
                n++;
            }
            if(z==k)
            {
                break;
            }
        }
        if(z!=k)
        {
            cout<<s.size()-1<<endl;
        }
        else
        {
            cout<<n<<endl;
        }
    }


    return 0;
}
