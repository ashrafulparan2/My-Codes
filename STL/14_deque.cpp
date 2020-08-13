#include <bits/stdc++.h>
using namespace std;

void print(deque<int> &d)
{
    for (auto val : d)
    {
        cout << val << " ";
    }
    cout << endl;
}

void print(deque<string> &d)
{
    for (auto val : d)
    {
        cout << val << " ";
    }
    cout << endl;
}

int32_t main()
{

    deque<int> d{1, 2, 3, 4, 5};
    deque<int> d1(10, 100); //ten 100s

    deque<string> s{
        "larry", "moe", "curly"};

    print(d1);
    print(s);
    print(d);

    d.push_back(10);

    print(d);

    d.push_front(0);

    print(d);

    s.push_front("mark");

    print(s);

    cout<<d.size()<<endl;
    cout<<d.max_size()<<endl;
    cout<<d.at(0)<<endl;
    cout<<d[1]<<endl;
    cout<<s.front()<<endl;
    cout<<d.back()<<endl;

    d.pop_back();

    print(d);

    d.pop_front();

    print(d);

    d.emplace_back(10);
    d.emplace_front(0);

    print(d);

    vector<int> v{1,2,3,4,5,6,7,8,9};
    deque<int> de;

    for(auto val:v)
    {
        if(val%2)
        {
            de.push_front(val);
        }
        else
        {
            de.push_back(val);
        }
        
    }

    print(de);

    de.clear();

    copy(v.begin(),v.end(),front_inserter(de));

    print(de);

    de.clear();

    copy(v.begin(),v.end(),back_inserter(de));

    print(de);

    return 0;
}
