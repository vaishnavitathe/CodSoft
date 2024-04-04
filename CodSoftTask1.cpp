#include<iostream>
#include <cstdlib>
#include<ctime>
using namespace std;
int main()
{
    int n, guess, tries=0;
    srand(time(0));
    cout << "Guess The Number\n\n";
    do{
        n=rand()%100+1;
		cout<<"Enter a number to guess between 1 and 100 \n";
        cin>> guess;
        tries++;
        {
		if (guess>n)
            cout<<"Too high!\n";
        else if(guess<n)
            cout<<"Too Low!\n";
        else
            cout<<"\n Correct! You got it in "<<tries<<"guesses\n";
        }
        cout<<"The number was "<<n<<"\n";
    }
    while(guess != n);
    return 0;
}
