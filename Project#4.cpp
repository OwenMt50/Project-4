//Created by Owen Martin
//Date: 5/14/25
//Description: 

#include <iostream>
using namespace std;

int first(int pounds, double stone){
    return pounds*stone;
}

int second(int feet, float centimeter){
    return feet*centimeter;
}

int third(int football, float meters){
    return football*meters;
}

int main (){

    int Yes = 0;
    int No = 0;
    while(Yes = 1, No = 2){

    int pounds = 0;
    double stone = 0.07142857;

    cout<<"Part #1 'How many stones now!?'\n";
    
    cout<<"You left your weight scale on pounds to stones, and the scale refuses to revert itself to the proper measurements.\n";
    cout<<"Input the amount of pounds you weigh, to get your weight in stones.\n";
    cin>>pounds;
    cout<<"You weigh about "<<first(pounds, stone)<<" stones.\n";

    cout<<"____________________________________________________________________________________________________________________________________________________________\n";
    cout<<"\n";

    int feet = 0;
    float centimeter = 30.48;

    cout<<"Part #2 'How tall are you?'\n";
    cout<<"You decided to fill out an application to your dream job, and for some reason you are tasked to measure your height.\n";
    cout<<"'That seems quite easy.'You said to yourself, but oddly enough you must input how tall you are in feet to have it be converted into centimeters.\n";
    cout<<"Input how tall you are in feet:\n";
    cin>>feet;
    cout<<"You are "<<feet<<" feet tall, and measure roughly "<<second(feet, centimeter)<<" centimeters.\n";

    cout<<"____________________________________________________________________________________________________________________________________________________________\n";
    cout<<"\n";

    int football = 0;
    float meters = 91.44;

    cout<<"Part #3 'Did I run that far?'\n";
    cout<<"It was nice day to take a run, however you aren't doing this for fun.\n";
    cout<<"You have been tasked to run as many american football field lengths as you can, which is 100 yards for this scenario.\n";
    cout<<"Once you entered the amount of football fields you have ran, it will be converted into meters.\n";
    cin>>football;
    if(football <=0){
        cout<<"Sorry, you can't run 0 or negative football fields, please try again.\n";
    }else{
        cout<<"You ran "<<third(football, meters)<<" meters, impressive but do you think you can do better?\n";
    }
    cout<<"____________________________________________________________________________________________________________________________________________________________\n";
    
    }


}