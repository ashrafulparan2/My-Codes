#include <bits/stdc++.h>
using namespace std;

template <typename t1, typename t2>

void print(map<t1, t2> &m)
{
    for (auto x : m)
    {
        cout << x.first << " => ";
        cout << x.second << endl;
    }
    cout << endl;
}

int32_t main()
{

    map<string, int> m1{
        {"larry", 28},
        {"Moe", 25}};

    map<string, string> m{
        {"Bob", "Butcher"},
        {"Anne", "Baker"},
        {"Alice", "Maker"}};

    cout << m.size() << endl;
    cout << m.max_size() << endl;

    // front or back unavailable

    m.insert(make_pair("Roger", "Ranger"));
    cout << m.size() << endl;

    m["Frank"] = "Teacher"; //insert

    m["Frank"] = "Singer";    //update
    m.at("Frank") = "Doctor"; //update

    print(m);

    m.erase("Anne");

    print(m);

    if(m.find("Bob")!=m.end())
    {
        cout<<"Found"<<endl;
    }

    auto it=m.find("George");
    if(it!=m.end())
    {
        m.erase(it);
    }

    print(m);

    cout<<m.count("Bob")<<endl;
    
    cout<<m.empty()<<endl;

    m.clear();

    cout<<m.empty()<<endl;

    return 0;
}
