#include<iostream>
using namespace std;
int main(){
     int height[]={1,8,6,2,5,4,8,3,7};
     int size=9;
     int maxWater=0;
     for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            int w=j-i;
            int ht=min(height[i],height[j]);
            int currWater=w*ht;
            maxWater=max(maxWater,currWater);
        }
     }
     cout<<maxWater;
 
    return 0;
}


//This code takes o(n^2) time 