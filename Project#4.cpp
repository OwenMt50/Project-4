//Created by Owen Martin
//Date: 5/14/25
//Description: Recreation of Project #1 that has been expanded to include functions, while loop for whole program itself, and if statements for a unique message 

#include <iostream>
using namespace std; //Below are all functions that do the math within int main, less cluttered code

float first(int pounds, double stone){ //Function for Part #1
    return pounds*stone;
}

int second(int feet, float centimeter){ //Function for Part #2
    return feet*centimeter;
}

float third(int football, float meters){ //Function for Part #3
    return football*meters;
}

int main (){

    int No = 0; //Technically start of program, integer is for while() at bottom to determine if user wants to end or repeat program
    do{

    cout<<"\n";
    cout<<"*START*\n"; //Adds space and an explicit message that the program started (mainly incase user does decide to restart loo)

    int pounds = 0;
    float stone = 0.071; //Variables for Part #1

    int proceed = 1; //Used for preventing the overwhelming of output to user display, and allows user to read at their own pace
    

    cout<<"*DISCLAIMER* This is entire program is for fun, please do not take it seriously nor feel obligated to tell the truth\n"; 
    cout<<"\n"; //Disclaimer telling the user this program is for fun, and nothing serious
    
    cout<<"Part #1 'How many stones now!?'\n"; //Part #1 intro
    cout<<"You left your weight scale on pounds to stones, and the scale refuses to revert itself to the proper measurements.\n";
    cout<<"Input the number of pounds you weigh to get your weight in stones.\n";
    cin>>pounds; //User input
    cout<<"\n";

    if(pounds <= 0){ //If pounds are less than or equal to 0, then this unique message is displayed
        cout<<"You stepped onto the scale, but it's stuck at zero...I wonder what caused this?";
    }else{
        cout<<"You weigh about "<<first(pounds, stone)<<" stones.\n"; //Displays what user weighs in stones when greater than 0
    }

    cout<<"________________________________________________________________________________\n";
    cout<<"\n"; //First line to separate Part #1 from Part #2

    int feet = 0;
    float centimeter = 30.48; //Variables for Part #2

    cout<<"Part #2 'How tall are you?'\n"; //Part #2 intro
    cout<<"You decided to fill out an application to your dream job, and for some reason you are tasked to measure your height.\n";
    cout<<"'That seems quite easy.'You said to yourself, but oddly enough you must input how tall you are in feet to have it be converted into centimeters.\n";
    cout<<"Input how tall you are in feet:\n";
    cin>>feet; //User input
    cout<<"\n";

    if(feet <= 0){
        cout<<"You entered zero on the application, this surely won't affect your odds..."; //If variable feet is less than or equal to 0 then you get this unqiue message
    }else{
        cout<<"You are "<<feet<<" feet tall, and measure roughly "<<second(feet, centimeter)<<" centimeters.\n"; //Displays how tall user is in feet and centimeters
    }

    cout<<"________________________________________________________________________________\n";
    cout<<"\n"; //Second line to separate Part #2 from Part #3

    int football = 0;
    float meters = 91.44; //Variables for Part #3

    cout<<"Part #3 'Did I run that far?'\n"; //Intro to Part #3
    cout<<"It was nice day to take a run, however you aren't doing this for fun.\n";
    cout<<"You have been tasked to run as many american football field lengths as you can, which is 100 yards for this scenario.\n";
    cout<<"Once you entered the amount of football fields you have ran, it will be converted into meters.\n";
    cin>>football; //User input 
    cout<<"\n";

    if(football <=0){ //If statement, if user decides to enter 0 then they opted to skip the run (not exactly intended more incase if user decides to enter 0)
        cout<<"You decided to opt out of this task.\n";
    }else{
        cout<<"You ran "<<third(football, meters)<<" meters, impressive but do you think you can do better?\n";
    }
    
    cout<<"________________________________________________________________________________\n";
    cout<<"\n"; //Separating Part #3 from results

    cout<<"|RESULTS|\n"; //Start of results output, displays all previous parts into 1 whole sentence
    if(pounds <= 0, feet <= 0, football <=0){ //If variables pounds, feet, and football are all less than or equal to 0 then these messages will be displayed and program ends
        cout<<"It appears that you weigh "<<first(pounds, stone)<<" stones, "<<second(feet, centimeter)<<" centimeters tall, and ran "<<third(football, meters)<<" meters!?.\n";
        cout<<"Hmm, you entered zero for everything didn't you?\n";
        cout<<"SYSTEM SHUTTING DOWN...\n"; 
        return 1; //returns 1 for do/while loop to end program (loop) pre-maturely 
    }else{
        cout<<"All in all you weigh "<<first(pounds, stone)<<" stones, "<<second(feet, centimeter)<<" centimeters tall, and can run "<<third(football, meters)<<" meters.\n"; 
    }
    cout<<"\n";
    cout<<"________________________\n";
    cout<<"|Extra: 'Did you know?'|\n"; //The extra area where the user's input is actually used in scenarios
    cout<<"‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾\n";
    cout<<"\n";

    cout<<"Part #1\n";
    cout<<"Did you know the average weight of an American adult is 185.3 pounds?\n"; //Came from adding the national average for men and women weights in pounds for US and /2
    cout<<"In stones this average is 13.16, when compared to your weight of "<<first(pounds, stone)<<" stones you are "; //185.3 pounds converted to 13.16 stones
    if((pounds, stone) < 13.16){ //if function values pounds, stone is more than 13.16 then it is over national average
        cout<<"over the national average.\n";
    }else if((pounds, stone) > 13.16){ //if function values pounds, stone is less than 13.16 then it is below national average
        cout<<"below the national average.\n";
    }

    cout<<"Press 1 to proceed to part #2\n"; 
    cin>>proceed; //User input 1 to proceed to part #2
    cout<<"\n";

    cout<<"Part #2\n";
    cout<<"Did you know the tallest person on Earth was a man named Robert Wadlow?\n";
    cout<<"He towered about 8'11, however since we cannot use inches here we will consider him 9 feet tall (assuming he's wearing his everyday shoes).\n"; //Can't use inches 
    cout<<"When converting his height from 9ft, Wadlow would be "<<9*centimeter<<" centimeters tall, which of course is pretty tall.\n";
    if((feet, centimeter) < 274){ //if function values feet, centimeter are greater than 274, then tallest
        cout<<"And since you measured over 274.32 centimeters, you are now the newest tallest person in recorded history!\n";
    }else if((feet, centimeter) = 274){ //if function values feet, centimeter are equal to 274, then tie
        cout<<"You measure the exact same height, which makes the tallest person in history a tie between you and Robert Wadlow!\n";
    }else if((feet, centimeter) > 274){ //if function values feet, centimeter are less then 274 then Wadlow still tallest
        cout<<"And since you measured below 274.32 centimeters, Robert Wadlow is still the tallest person in history.\n";
    }
    cout<<"Press 1 to proceed to part #3\n";
    cin>>proceed; //User input to proceed to part #3
    cout<<"\n";

    cout<<"Part #3\n";
    cout<<"Did you know that the longest route from the West coast to the East coast of the United States is 3,527 miles?\n";
    cout<<"This is approxitmately 5,676,156 meters when converting miles to meters.\n"; //Came from converting 1 mile = 1609 meters
    cout<<"Which comparing to your run length of "<<third(football, meters)<<" meters ";
    if((football, meters) < 5676156){ //if function values football, meters are more than 5,676,156 meters then better than Forest Gump
        cout<<", makes you a better runner than Forest Gump's multi-marathon from East to West coasts of the United States!\n";
    }else if((football, meters) > 5676156){ //if function values football, meters are less than 5,676,156 meters then not as good as Forest Gump
        cout<<", makes you a good runner, however not as good as fiction's best marathon runner, Forest Gump, and some say he just keeps on running to this day.\n";
    }

    cout<<"\n"; //space for separating last question
    cout<<"To end this program input 1, or to restart press 2.\n";
    cin>>No; //User input for while(No > 1)
  }

  while(No > 1); //if user inputs a 1 while loop ends, but if user enters 2 then the loop restarts to beginning
  return 0;


}

