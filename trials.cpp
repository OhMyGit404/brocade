#include <iostream>

using namespace std;

int main() {

    int num;
    int guess;
    int tries;

    srand (time(NULL)) ;
    num = (rand() % 100) + 1;

    cout<<"Enter guess: ";
    cin>>guess;
    while (guess != num){
        cout<<"Guess again: ";
        cin>>guess;
        tries++;
        if(guess>num){
            cout<<"Too high \n";
        }else if(guess<num){
            cout<<"Too low \n";
        }
        else{
            cout<<"correct, no of tries: "<<tries;
        }
    }

    return 0;
}