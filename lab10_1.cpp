#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
using namespace std ;

int main(){
    srand(time());
    cout << "Press Enter 3 times to reveal your future.";
    cin.get() ;
    cin.get() ;
    cin.get() ;
    string x[] = {"A","B+","B","C+","C","D+","D","F","W",} ;
    int i = rand()%9 ;
    cout << "You will get "<< x[i] <<" in this 261102.";
    return 0 ;
}