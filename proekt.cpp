#include<iostream>
using namespace std;
int main ()
{
    cout<<"Titanic quiz"<<endl;
    cout<<"How long did it take to build Titanic?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1 is four years,2 is three years,3 is one year and 4 is two years"<<endl;
    int points=0;
    int choice;
    cin>>choice;
    if (choice==2)
    {
        cout<<"Correct!"<<endl;
        points=points+10;
    }
    else cout<<"The correct answer is three years."<<endl;
    cout<<"Which of the following was not on the ship?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1 is basketball court,2 is swimming pool,3 is squash court and 4 is operating room"<<endl;
    int person;
    cin>>person;
    if (person==1)
    {
        cout<<"Correct!"<<endl;
        points=points+10;
    }
    else cout<<"The correct answer is basketball court"<<endl;
    cout<<"How many bathtubs were available for third-class passengers?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1 is ten,2 is two,3 is fifteen and 4 is zero"<<endl;
    int izbor;
    cin>>izbor;
    if (izbor==2)
    {
        cout<<"Correct!"<<endl;
        points=points+10;
    }
    else cout<<"The correct answer is two bathtubs"<<endl;
    cout<<"How many live boats did the Titanic have?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1 is fourteen,2 is twenty four,3 is twenty seven and 4 is twenty"<<endl;
    int izberi;
    cin>>izberi;
    if (izberi==4)
    {
        cout<<"Correct!"<<endl;
        points=points+10;
    }
    else cout<<"The correct answer is twenty live boats"<<endl;
    cout<<"After the Titanic broke in two,how long did take for the bow to reach the bottom of the Atlantic Ocean?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1 is 6 minutes,2 is 1 minute,3 is 3 minutes and 4 is thirty seconds"<<endl;
    int a;
    cin>>a;
    if (a==1)
    {
        cout<<"Correct!"<<endl;
        points=points+10;
    }
    else cout<<"The correct answer is six minutes"<<endl;
    cout<<"What was the first boat to reach the scene of the Titanic's sinking?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1 is Olympic,2 is Frankfurt,3 is Carpathia and 4 is Californian"<<endl;
    int b;
    cin>>b;
    if (b==3)
    {
        cout<<"Correct!"<<endl;
        points=points+10;
    }
    else cout<<"The correct answer is Carpathia"<<endl;
    cout<<"When was the wreck of the Titanic discovered?"<<endl;
    cout<<"Enter a number between 1 and 4"<<endl;
    cout<<"1 is 1920,2 is 1991,3 is 1980 and 4 is 1985"<<endl;
    int c;
    cin>>c;
    if (c==4)
    {
        cout<<"Correct!"<<endl;
        points=points+10;
    }
    else cout<<"The correct answer is 1985"<<endl;
    cout<<"Points"<<" "<<points<<endl;
    return 0;



}
