#include <bits/stdc++.h>
using namespace std;

template <typename t>
void print(stack<t> s)
{
    while (s.empty() == 0)
    {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
}

int32_t main()
{

    stack<int> s; //will use deque

    stack<int, vector<int>> s1; //will use vector

    stack<int, list<int>> s2; //will use list

    stack<int, deque<int>> s3; //will use deque

    s.push(10);

    s.push(20);

    s.push(30);

    print(s);

    cout << s.top() << endl;
    cout << s.size() << endl;

    s.pop();

    cout << s.top() << endl;
    cout << s.size() << endl;

    for(auto i:{1,2,3,4,5})
    {
        s.push(i);
    }

    print(s);

    return 0;
}
