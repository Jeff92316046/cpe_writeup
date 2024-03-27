#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n;
    map <int,int> h_map;
    h_map[0] = 0;
    h_map[1] = 1;
    h_map[2] = 1;
    h_map[3] = 2;
    h_map[4] = 1;
    h_map[5] = 2;
    h_map[6] = 2;
    h_map[7] = 3;
    h_map[8] = 1;
    h_map[9] = 2;
    for(int i=0;i<n;i++){
        cin>>m;
        int d_m = m,h_m = m;
        int d_c = 0,h_c = 0;
        for(;;){
            if(d_m%2 == 1){
                d_c ++;
            }
            d_m/=2;
            if(d_m == 0)break;
        }
        for(;;){
            h_c += h_map[h_m%10];
            h_m/=10;
            if(h_m == 0)break;
        }
        cout<<d_c<<" "<<h_c<<"\n";
    }
}