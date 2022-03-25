#include <iostream>
#include <string>
#include <cstring> 
using namespace std;

int main()
{
int choice;  
string text;  
cout<<"please enter a text  "<< "\n";
getline(cin, text);

cout<< "1-encrpthion "<<"\n"<< "2-decrpthion"<< "\n";   
cin>> choice;
while (choice > 2 || choice < 0)
{
    cout << "invalid choice" <<"\n";
    cout<< "1-encrpthion "<<"\n"<< "2-decrpthion"<< "\n";   
    cin>> choice;
}

    if (choice == 1)
    {
        string direction ;
        int shift_value;

        
        cout<<"please enter if you want to shift right or left "<< "\n";
        cin>> direction;
       

        if (direction == "right")
        {
            string result = "";
            char x;
            cout<<"please enter the shift value ";
            cin>> shift_value;

            for (int i = 0 ; i < text.length() ; i++)
            {
                char letter = text[i];
                
                if ((int)letter <= 90)
                    x = ((int)letter - 65 + shift_value) % 26 + 65;
                else
                    x = ((int)letter - 97 + shift_value) % 26 + 97;
                result += x;
                
            }
            cout << "letter is " << result << "\n";
                    
        }
        else if(direction == "left")   
            {
            string result = "";
            char x;
            cout<<"please enter the shift value ";
            cin>> shift_value;
            for (int i = 0 ; i < text.length() ; i++)
            {
                char letter = text[i];
                
                if ((int)letter <= 90)
                    x = ((int)letter - 65 + (26-shift_value)) % 26 + 65;
                else
                    x = ((int)letter - 97 + (26-shift_value)) % 26 + 97;
                result += x;
                
            }
            cout << "the encrpthion is " << result << "\n";
                    
            }
        else
        cout<< "you have to choose right or left " <<"\n";     
    }
    else if (choice == 2)
    {
        
        string direction ;
        int shift_value;

        
        cout<<"please enter if you want to shift right or left "<< "\n";
        cin>> direction;

         if (direction == "right")
        {
            string result = "";
            char x;
            cout<<"please enter the shift value ";
            cin>> shift_value;

            for (int i = 0 ; i < text.length() ; i++)
            {
                char letter = text[i];
                
                if ((int)letter <= 90)
                    x = ((int)letter - 65 + shift_value) % 26 + 65;
                else
                    x = ((int)letter - 97 + shift_value) % 26 + 97;
                result += x;
                
            }
            cout << "letter is " << result << "\n";
                    
        }
        else if(direction == "left")   
            {
            string result = "";
            char x;
            cout<<"please enter the shift value ";
            cin>> shift_value;
            for (int i = 0 ; i < text.length() ; i++)
            {
                char letter = text[i];
                
                if ((int)letter <= 90)
                    x = ((int)letter - 65 + (26-shift_value)) % 26 + 65;
                else
                    x = ((int)letter - 97 + (26-shift_value)) % 26 + 97;
                result += x;
                
            }
            cout << "the decrpthion is " << result << "\n";
                    
            }
        else
        cout<< "you have to choose right or left " <<"\n";   
    }


}