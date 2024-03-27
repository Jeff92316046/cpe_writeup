#include<bits/stdc++.h>
using namespace std;
int times = 0;
int f1(int num){
    times++;
    if(num == 1)return 1;
    if(num%2 == 1)return f1(3*num+1);
    else return f1(num/2);
}
int main(){
    int i,j,max_t;
    while (cin>>i>>j){
        max_t = 0;
        for(int i1=min(i,j);i1<=max(i,j);i1++){
            times = 0;
            f1(i1);
            max_t = max_t > times ? max_t : times;
        }
        cout<<i<<" "<<j<<" "<<max_t<<"\n";
    }
    
    return 0;
}