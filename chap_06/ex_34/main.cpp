#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

bool correct(int,int);
void guess();

int main()
{
    srand(time(0));
    guess();
}

void guess()
{
    int a,b;
    char response;

    do
    {
        a=1+rand()%1000;

        cout<<"I have a number between 1 and 1000.\n"<<"Can you guess my number?\n"
        <<"Please type your first guess."<<endl;
        cin>>b;

        while(!correct(b,a))
            cin>>b;

        cout<<"Excellent!You guessed the number!"<<"Would you like to play again(y or n)?";
        cin>>response;
        cout<<endl;
    }while(response=='y');
}

bool correct(int x,int y)
{
    if(x==y)
        return true;

    if(x<y)
        cout<<"Too low. Try again."<<endl;
    else
        cout<<"Too high. Try again."<<endl;

    return false;
}
