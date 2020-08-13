#include <iostream>
#include <vector>
using namespace std;

void print(vector <int> v);
void add(vector <int> &v);
void quit();
void mean(vector <int> v);
void small(vector <int> v);
void large(vector <int> v);

void print(vector <int> v)
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

void add(vector <int> &v)
{
    int a;
    cin>>a;
    v.push_back(a);
}

void quit()
{
    cout<<"Goodbye"<<endl;
}

void mean(vector <int> v)
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

void small(vector <int> v)
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

void large(vector <int> v)
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

void solve();


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
            print(v);
        }
        else if(c=='a'||c=='A')
        {
            add(v);
        }
        else if(c=='q'||c=='Q')
        {
            quit();
            return 0;
        }
        else if(c=='m'||c=='M')
        {
            mean(v);
        }
        else if(c=='s'||c=='S')
        {
            small(v);
        }
        else if(c=='l'||c=='L')
        {
            large(v);
        }
        else
        {
            cout<<"Invalid Choice"<<endl;
        }
    }

}

