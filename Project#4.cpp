//Created by Owen Martin
//Date: 5/14/25
//Description: Recreation of Project #1 that has been expanded to include functions, while loop for whole program itself, and if statement for a unique message *DRAFT*

#include <iostream>
using namespace std; //Below are all functions that do the math within int main, less cluttered code

int first(int pounds, double stone){ //Function for Part #1
    return pounds*stone;
}

int second(int feet, float centimeter){ //Function for Part #2
    return feet*centimeter;
}

int third(int football, float meters){ //Function for Part #3
    return football*meters;
}

int main (){

    int No = 0; //Technically start of program, integer is for while() at bottom to determine if user wants to end or repeat program
    do{

    cout<<"\n";
    cout<<"*START*\n"; //Adds space and an explicit message that the program started (mainly incase user does decide to restart loo)

    int pounds = 0;
    double stone = 0.07142857; //Variables for Part #1

    cout<<"Part #1 'How many stones now!?'\n"; //Part #1 intro
    cout<<"You left your weight scale on pounds to stones, and the scale refuses to revert itself to the proper measurements.\n";
    cout<<"Input the amount of pounds you weigh, to get your weight in stones.\n";
    cin>>pounds; //User input
    cout<<"You weigh about "<<first(pounds, stone)<<" stones.\n"; //Displays what user weighs in stones

    cout<<"____________________________________________________________________________________________________________________________________________________________\n";
    cout<<"\n"; //First line to separate Part #1 from Part #2

    int feet = 0;
    float centimeter = 30.48; //Variables for Part #2

    cout<<"Part #2 'How tall are you?'\n"; //Part #2 intro
    cout<<"You decided to fill out an application to your dream job, and for some reason you are tasked to measure your height.\n";
    cout<<"'That seems quite easy.'You said to yourself, but oddly enough you must input how tall you are in feet to have it be converted into centimeters.\n";
    cout<<"Input how tall you are in feet:\n";
    cin>>feet; //User input
    cout<<"You are "<<feet<<" feet tall, and measure roughly "<<second(feet, centimeter)<<" centimeters.\n"; //Displays how tall user is in feet and centimeters

    cout<<"____________________________________________________________________________________________________________________________________________________________\n";
    cout<<"\n"; //Second line to separate Part #2 from Part #3

    int football = 0;
    float meters = 91.44; //Variables for Part #3

    cout<<"Part #3 'Did I run that far?'\n"; //Intro to Part #3
    cout<<"It was nice day to take a run, however you aren't doing this for fun.\n";
    cout<<"You have been tasked to run as many american football field lengths as you can, which is 100 yards for this scenario.\n";
    cout<<"Once you entered the amount of football fields you have ran, it will be converted into meters.\n";
    cin>>football; //User input 

    if(football <=0){ //If statement, if user decides to enter 0 then they opted to skip the run (not exactly intended more incase if user decides to enter 0)
        cout<<"You decided to opt out of this task.\n";
    }else{
        cout<<"You ran "<<third(football, meters)<<" meters, impressive but do you think you can do better?\n";
    }

    cout<<"|RESULTS|\n"; //Start of results output, displays all previous parts into 1 whole sentence
    cout<<"All in all you weigh "<<first(pounds, stone)<<" stones, "<<second(feet, centimeter)<<" centimeters tall, and can run "<<third(football, meters)<<" meters.\n"; 
    cout<<"\n"; //space for separating last question
    cout<<"To end this program input 1, or to restart press 2.\n";
    cin>>No;
  }
  while(No > 1); //if user inputs a 1 while loop ends, but if user enters 2 then the loop restarts to beginning
  return 0;
}

