#include <iostream>
#include <string>
using namespace std;

//struct booking{
//    string Name;
//    string service;
//
//   string date
//    double time
//}

class service {
public:
    string colouring;
    string cut;
    string styling;
    string extentions;
    string drying;
};

int main(){
    
    service time;
    time.colouring = " 45 minutes";
    time.cut = "1 hour 30 mins";
    time.styling = "1 hour";
    time. extentions = "2 hours";
    time.drying = " 30 minutes";
    
    service cost;
    cost.colouring = " £100";
    cost.cut = " £75";
    cost.styling = " £50";
    cost.extentions = " £150";
    cost.drying = " £25";

    string choice;
    string colouring;
    string bookingFirstName;
    string bookingSurname;
    string bookingDate;
    double bookingTime;
    char continueOption;
    
    //would you like to cancel or create a booking
    
    
    cout << "Enter your Firstname: ";
    cin >> bookingFirstName;
    
    cout << "Enter your surname: ";
    cin >> bookingSurname;
    
    cout << "What date would you like your booking (dd/mm/yy): " ;
    cin >> bookingDate;
    
    cout << "What time would you like your booking (hh.mm): " ;
    cin >> bookingTime;
    
    
    cout << endl << "Which of the following services would you like :" << endl << "colouring" << endl << "cut" << endl << "styling" << endl << "extentions" << endl << "or drying" << endl << endl << "enter here: ";
    cin >> choice;
    
    if(choice == ("colouring")){
        cout << "You have chosen colouring and this will take" << time.colouring << " and this will cost"<< cost.colouring << endl;
        cout << "enter y/n if you wish to continue: ";
        cin >> continueOption;
        
        if(continueOption == 'y'){
            cout << endl << "Your final booking is for " << bookingFirstName << " " << bookingSurname << " on the " << bookingDate << " at " << bookingTime << " for a cut which will cost " << cost.colouring << " and will take " << time.colouring << endl;
        }else{
            cout << "Your booking wasnt comfirmed please start again";
        }
        
    }else if(choice==("cut")){
        cout << "You have chosen a cut and this will take " << time.cut << " and this will cost" << cost.cut << endl;
        cout << "enter y/n if you wish to continue: ";
        cin >> continueOption;
        
        
        if(continueOption == 'y'){
            cout << endl << "Your final booking is for " << bookingFirstName << " " << bookingSurname  << " on the " << bookingDate << " at " << bookingTime << " for a cut which will cost " << cost.cut << " and will take " << time.cut << endl;
        }else{
            cout << "Your booking wasnt comfirmed please start again";
        }
        
        
    }else if(choice == ("styling")){
        cout << "You have chosen a styling,this will take " << time.styling << " and this will cost" << cost.styling << endl;
        cout << "enter y/n if you wish to continue: ";
        cin >> continueOption;
        
        
        if(continueOption == 'y'){
            cout << endl << "Your final booking is for " << bookingFirstName << " " << bookingSurname  << " on the " << bookingDate << " at " << bookingTime << " for a cut which will cost " << cost.styling << " and will take " << time.styling << endl;
        }else{
            cout << "Your booking wasnt comfirmed please start again";
        }
        
    }else if(choice ==("extentions")){
        cout << "You haven chosen extentions, this will take " << time.extentions << " and this will cost" << cost.extentions << endl;
        cout << "enter y/n if you wish to continue: ";
        cin >> continueOption;
        
        
        if(continueOption == 'y'){
            cout << endl << "Your final booking is for " << bookingFirstName << " " << bookingSurname  << " on the " << bookingDate << " at " << bookingTime << " for a cut which will cost " << cost.extentions << " and will take " << time.extentions << endl;
        }else{
            cout << "Your booking wasnt comfirmed please start again";
        }
        
    }else if(choice == ("drying")){
        cout << "You have chosen a drying, this will take " << time.drying << " and this will cost" << cost.drying << endl;
        cout << "enter y/n if you wish to continue: ";
        cin >> continueOption;
        
        
        if(continueOption == 'y'){
            cout << endl << "Your final booking is for " << bookingFirstName << " " << bookingSurname << " on the " << bookingDate << " at " << bookingTime << " for a cut which will cost " << cost.drying << " and will take " << time.drying << endl;
        }else{
            cout << "Your booking wasnt comfirmed please start again";
        }
        
    } else {
        cout << "Invalid choice try again" << endl;
        
    }
    
    

    return 0;
}

