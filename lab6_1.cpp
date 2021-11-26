#include<iostream>
using namespace std;

int main(){
    int N;
    int i = 0;
    int j = 0;
    while(N != 0){
        cout << "Enter an integer: ";
        cin >> N;
        
        if(N%2 ==0){
            i = i+1;
            if(N == 0){
                i = i-1; }
        } else{
            j = j+1;}
         }
    cout << "#Even numbers = " << i ;
    cout << "\n#Odd numbers = " << j ;
    return 0;
}

