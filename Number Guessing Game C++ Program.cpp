#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
    int num ,guess, tries=0;
    srand(time(0));
    num = rand () % 100+1;
    cout<<"Guess My Number Game\n\n";
    do
    {
        cout << " Enter a guess between 1 to 100 : ";
        cin >> guess;
        tries++;
        if (guess > num)
            cout << " Too high!\n\n";
        else if (guess < num)
           cout << " Too low!\n\n";
        else
           cout << "\ncorrect ! you got it in " << tries <<" guesses!\n";

        
    } while (guess != num);
    return 0;
    

}
