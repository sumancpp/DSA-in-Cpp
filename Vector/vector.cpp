#include<iostream>
#include<vector>
using namespace std;
int main(){
  // vector<int>vec={1,2,3};
  //  for(int i : vec){
  //   cout<<i<<endl;
  //  }
  //  cout<<"Size is "<<vec.size();

  //push_back

  // vector<int>vec;
  // cout<<"The size is "<<vec.size()<<endl;
  // vec.push_back(20);
  // cout<<"After push_back the size is "<<vec.size();

  //pop_back

  // vector<int>vec={10,20,30};
  // cout<<"The size is "<<vec.size()<<endl;
  // vec.pop_back();
  // cout<<"After pop_back the size is "<<vec.size()<<endl;
  // for(int val : vec){
  //   cout<<val<<endl;
  // }


  // vector<int>vec={10,20,30};

  // cout<<vec.front()<<endl;
  // cout<<vec.back()<<endl;
  // cout<<vec.at(1)<<endl;

  vector<int>vec;
  vec.push_back(0);
  vec.push_back(1);
  vec.push_back(2);
  vec.push_back(3);
  vec.push_back(4);

  cout<<vec.size()<<endl;
  cout<<vec.capacity()<<endl;
    return 0;
}