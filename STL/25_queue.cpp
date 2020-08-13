#include <bits/stdc++.h>
using namespace std;

template <typename t>
void print(queue<t> s)
{
    while (s.empty() == 0)
    {
        cout << s.front() << " ";
        s.pop();
    }
    cout << endl;
}

int32_t main()
{

    queue<int> q; //deque

    queue<int, list<int>> q1; //list

    queue<int, deque<int>> q2; //deque

    q.push(10);

    q.push(20);

    q.push(30);

    print(q);

    q.pop();

    print(q);

    for(int i:{1,2,3,4,5})
    {
        q.push(i);
    }

    print(q);

    cout << q.front() << endl;
    cout << q.back() << endl;
    cout << q.size() << endl;

    //clearing a queue

    while (!q.empty())  
    {
        q.pop();
    }
    cout << q.size() << endl;
    

    return 0;
}
