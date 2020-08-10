#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    bool check;
    bool check1;
    
    string login;
    cout << "Your name :" << endl;
    getline(cin, login);
    string password;
    cout << "Your password :" << endl;
    getline(cin, password);
    
    
    string login_input;
    cout << "Your login :" << endl;
    getline(cin, login_input);
    string password_password;
    cout << "Your password :" << endl;
    getline(cin, password_password);

    vector <char> res2(login_input.begin(), login_input.end());
    vector <char> res(login.begin(), login.end());
    for(auto i=res.begin();i<res.end(); ++i){
        while(isupper(*i)){
                *i=tolower(*i);
            }
        for(auto j=res2.begin(); j<res2.end();++j){
            while(isupper(*j)){
                *j=tolower(*j);
            }
            if(*i == *j){
                check=true;
            }else{
                check=false;
            }
        }
    }

    vector <char> res4(password_input.begin(), password_input.end());
    vector <char> res3(password.begin(), password.end());
    for(auto i=res.begin();i<res.end(); ++i){
        while(isupper(*i)){
                *i=tolower(*i);
            }
        for(auto j=res2.begin(); j<res2.end();++j){
            while(isupper(*j)){
                *j=tolower(*j);
            }
            if(*i == *j){
                check1=true;
            }else{
                check1=false;
            }
        }
    }


    if(check ==false){
      for (int a = 0; a < 3; ++a))
        cout << "Access has restricted \n";
    }else{
        cout << "Access has granted\n";
    }

    if(check1 ==false){
      for (int a = 0; a < 3; ++a))
        cout << "Access has restricted \n";
    }else{
        cout << "Access has granted\n";
    }

    cout << check;
return 0;
}
