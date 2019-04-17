//Language : C++
//Codeforces - 1154A

#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int main()
{
  int i, a, b, c;
  int arr[4] = {};
  for(i = 0; i < 4; i++)
  {
    cin>>arr[i];
  }
  //sort the array elements in ascending order below.
  
  sort(arr, arr + 4);
  a = arr[3] - arr[0];
  b = arr[3] - arr[1];
  c = arr[3] - arr[2];
  
  cout<<a<<" ";
  cout<<b<<" ";
  cout<<c<<" ";
  return 0;
}

