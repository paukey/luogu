#include<iostream>
using namespace std;
int K ,M;
int N=0;
//下次再也不用大写了
int main(){

    cin>>K;
    //
    for(int i=1;i<K;i++){

        M+=i*i;
        N+=i;
        //下面进行判断
        if(N>K){
            M-=i*(N-K);
            break;
        }
        if(N==K){
            break;
        }}
        
    cout<<M;
    return 0;


}