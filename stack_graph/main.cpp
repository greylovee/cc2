#include <iostream>
#include "Stack.h"
#include "Graph.h"

using namespace std;

int main()
{
    Stack <int > a, b;
    a. push (1);
    a. push (2);
    b. push (3);
    b. push (4);
    Stack <int > c = a + b;

    vector<int> starts;
    starts.push_back(1);
    starts.push_back(1);
    starts.push_back(1);
    starts.push_back(5);
    starts.push_back(5);
    starts.push_back(4);
    vector<int> ends;
    ends.push_back(2);
    ends.push_back(3);
    ends.push_back(4);
    ends.push_back(4);
    ends.push_back(2);
    ends.push_back(2);

    Graph g(starts, ends);

    cout << g.numOutgoing(5) << endl;
    vector<int>::iterator it;

    vector<int> vec = g.adjacent(1);
    it = vec.begin();
    for(it = vec.begin(); it != vec.end(); it++)
        cout << " " << *it;
    cout << endl;
    return 0;
}
