#include <iostream>
#include <string>
using namespace std;

int main()
{

    int number_to_guess = rand() % 1000;          //rand generates a random number; generates a random number between 0 and 999
    string userguess;
    int guesscount = 0;
    bool continue_game = true;

    while (continue_game)
    {
        cout << "Guess number b/w 0 and 999" << endl;
        cin >> userguess;
        guesscount++;
        int usernumber = stoi(userguess);


        if (usernumber == number_to_guess)
        {
            cout << "Congrats, You won" << endl;
            cout << "It took you " << guesscount << " guesses to get to the number"<<endl;
            cout << "Do you want ot play again (y/n)?" << endl;


            string play_again;
            cin >> play_again;

            if (play_again == "y")
            {
                number_to_guess = rand() % 1000;
                //continue_game = true;
            }

            else if(play_again == "n")
            {
                cout << "Thank you for playing" << endl;
                continue_game = false;
            }
        }

        else if(usernumber>number_to_guess)
        {
            cout << "Number is lower, try again" << endl;
        }        
        
        else if(usernumber<number_to_guess)
        {
            cout << "Number is higher, try again" << endl;
        }
    }

}
