#include<iostream>
using namespace std;

int main(){
    int evenN = 0;
    int oddN = 0;
    int i = 1;

    while(i != 0){
        cout << "Enter an integer: ";
        cin >> i;
        if(i%2 == 0 && i != 0){
            evenN += 1;
        }else if(i%2 != 0){
            oddN += 1;
        }
    }
    cout << "#Even numbers = " << evenN << "\n";
    cout << "#Odd numbers = " << oddN << "\n";
    return 0;
}