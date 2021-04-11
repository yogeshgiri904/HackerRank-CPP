#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arrayCount, queryCount;
    cin>>arrayCount>>queryCount;
    vector<vector<int>> parentVec;
    while(arrayCount)
    {
        vector<int> childVec;
        int arraySize;
        cin>>arraySize;
        while(arraySize)
        {
            int val;
            cin>>val;
            childVec.push_back(val);
            arraySize--;
        }
        parentVec.push_back(childVec);
        arrayCount--;
    }
    while(queryCount)
    {
        int q1, q2;
        cin>>q1>>q2;
        queryCount--;
        cout<<parentVec[q1][q2]<<endl;
    }
    return 0;
}
