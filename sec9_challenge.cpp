#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> v{};
    char c;
    int a;
    while(1)
    {
        cout<<"Enter your choice"<<endl;
        cin>>c;
        if(c=='p'||c=='P')
        {
            if(v.size()==0)
            {
                cout<<"[] empty list"<<endl;
            }
            else
            {
                cout<<"[";
                for(auto val:v)
                {
                    cout<<val<<" ";
                }
                cout<<"]"<<endl;
            }
        }
        else if(c=='a'||c=='A')
        {
            cin>>a;
            v.push_back(a);
        }
        else if(c=='q'||c=='Q')
        {
            cout<<"Goodbye"<<endl;
            return 0;
        }
        else if(c=='m'||c=='M')
        {
            if(v.size()==0)
            {
                cout<<"[] empty list"<<endl;
            }
            else
            {

                int sum=0;
                for(auto val:v)
                {
                    sum+=val;
                }
                cout<<(double)sum/v.size()<<endl;
            }
        }
        else if(c=='s'||c=='S')
        {
            if(v.size()==0)
            {
                cout<<"[] empty list"<<endl;
            }
            else
            {

                int s=100000000;
                for(auto val:v)
                {
                    if(val<s)
                    {
                        s=val;
                    }
                }
                cout<<s<<endl;
            }
        }
        else if(c=='l'||c=='L')
        {
            if(v.size()==0)
            {
                cout<<"[] empty list"<<endl;
            }
            else
            {
                int l=-100000000;
                for(auto val:v)
                {
                    if(val>l)
                    {
                        l=val;
                    }
                }
                cout<<l<<endl;
            }
        }
        else
        {
            cout<<"Invalid Choice"<<endl;
        }
    }

}
