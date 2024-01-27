#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main(){
    
int number_trys = 0;
int max_number_trys;
int guess;
int lucky_number = 1+(rand()%100);


    string Name_of_player;
    cout << " What's your name? : ";

    cin >> Name_of_player;
    cout << "Welcome, " << Name_of_player;

        cout << " Input the max number of tries: ";
        cin >> max_number_trys;
    
    srand((unsigned) time(0));
    while(number_trys < max_number_trys){ 
    
     cout << " Guess the right number: ";
        cin >> guess;
           number_trys++;
   
     if( lucky_number > guess ){
       cout << "The lucky number is greater than: " << guess << endl;
     }else if( lucky_number < guess){
       cout << "The lucky number is less than: " << guess << endl;
     }else{
       cout << Name_of_player << " Congratulations, you got it right!" << endl;
       
     break;
    }
    if (number_trys == max_number_trys){
        cout << "You almost got it right " << Name_of_player << ", the correct number was " << lucky_number << "!" <<endl;
    }
    
    }
    cout << "The game is over!" << endl;
    return 0;
    }
