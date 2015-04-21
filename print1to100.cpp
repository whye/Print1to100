#include<iostream>

/*
 Write a program that prints out the numbers 1 to 100 (inclusive). If the number is divisible by 3, print Crackle instead of the number. If it's divisible by 5, print Pop. If it's divisible by both 3 and 5, print CracklePop. You can use any language.
 */

using namespace std;


int main(){
    
    for(int i = 1; i <= 100; i++){
        if(i%3 == 0 && i%5 == 0)    cout <<  "CracklePop" << endl;
        else if(i%3 == 0) cout << "Crackle" << endl;
        else if(i%5 == 0) cout << "Pop" << endl;
        else cout << i << endl;
    }
    
    return 0;
}
