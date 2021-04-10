#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int x;
    cin>>x;
    int arr[x];
    for(int i=0; i<x; i++){
        cin>>arr[i];
    }
    for(int i=x-1; i>=0; i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}
