#include<iostream>
#include<algorithm>
using namespace std;
struct dat {
    long long value;
    int type; // 0 Left 1 Point 2 Right
    int id;
}; 
dat Data[1000007];
int cnt = 0;

int result[50007]={0};

bool cmp(dat v1,dat v2){
    if (v1.value != v2.value) return v1.value < v2.value;
    else return v1.type < v2.type;
}

int main() {
    int s, p;
    int left,right,pt;
    cin >> s >> p;
    for (int i = 0; i < s; ++i){
        cin >> left >> right;
        Data[cnt++] = {value:left,type:0,id:-1};
        Data[cnt++] = {value:right,type:2,id:-1};
    }
    for (int i = 0; i < p; ++i){
        cin >> pt;
        Data[cnt++] = {value:pt,type:1,id:i};
    }
    sort(Data,Data+cnt,cmp);
    int cntLeft = 0;
    for (int i = 0; i < cnt;++i){
        if (Data[i].type == 0) cntLeft++;
        else if (Data[i].type == 2) cntLeft--;
        else if (Data[i].type == 1) result[Data[i].id] = cntLeft;
    }
    for (int i = 0; i < p; ++i) cout << result[i] << " ";
}