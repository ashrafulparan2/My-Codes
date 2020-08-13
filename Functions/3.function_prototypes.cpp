#include <bits/stdc++.h>
#include <string>
#include <vector>
using namespace std;

void val1(int num);
void val2(string s);
void val3(vector<string> v);
void vc(vector<string> v);

void val1(int num)
{
    num=1000;
}

void val2(string s)
{
    s="Changed";
}

void val3(vector<string> v)
{
    v.clear();
}

void vc(vector<string> v)
{
    for(auto val:v)
        cout<<val<<" ";
    cout<<endl;
}

int main()
{
    int num{10};
    int num2{20};

    cout<<num<<endl;
    val1(num);
    cout<<num<<endl;

    string name{"Framk"};

    cout<<name<<endl;
    val2(name);
    cout<<name<<endl;

    vector<string> v{"INY","MINI","Tiny"};
    vc(v);
    val3(v);
    vc(v);
}
