#include "std_lib_facilities.h"
int main(){
    
    string first_name;
        cout << "Enter the name of the person you want to write to" << endl;  
        cin >> first_name;
        cout << "Dear " << first_name << ","<< endl;
        cout << "How have you been? I am doing fine. I miss you." << endl;
        cout << "What's the weather like there? Here a bit cloudy and colder than usual."<< endl;
        cout << "Did you enjoy your holiday? You told me last time you will go in August." << endl;
   
    string friend_name; 
        cout << "Have you seen " << friend_name << "lately?" << endl;;
   
    char friend_sex='0';
        cout << "Please enter the sex of your friend" << endl;
        cin >> friend_sex;
        if (friend_sex =='m')
            cout << "If you see" << friend_name << "please ask him to call me." << endl;
        if (friend_sex == 'f')
            cout << "If you see" << friend_name << "please ask her to call me." << endl;
  
        cout << "Please enter the age of the recipient!" << endl;
    int age;
        cin >> age;
        cout << "I hear you just had your birthday and you are " << age << " years old." << endl;
        if (age <= 0 || age >= 110)
            simple_error("you 're kidding!");
       
        else if(age < 12)
            cout << "Next year you will be " << (age+1)<< "." << endl;
        else if(age == 17)
            cout << "Next year will be able to vote." << endl;
        else if(age > 70 && age < 110)
            cout << "I hope you are enjoying retirement." << endl;
        
        cout << "Yours sincerely," << endl;
        cout << "__" << endl;
        cout << "Biró Nándor" << endl;
return 0;
}