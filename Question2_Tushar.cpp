
#include<bits/stdc++.h> 

using namespace std;   

bool isValid(string password)  

{  
    if (!((password.length() >= 8) &&  

          (password.length() <= 15))) 

        return false;  

    if (password.find(" ") != 

        std::string::npos) 

        return false;  


    if (true) 

    {  

        int count = 0;  

        for(int i = 0; i <= 9; i++) 

        {    

            string str1 = to_string(i);  

            if (password.find(str1) !=  

                std::string::npos)  

                count = 1;  

        }  

        if (count == 0)  

            return false;  

    }    

    if (!((password.find("@") != std::string::npos) || 

          (password.find("#") != std::string::npos) || 

          (password.find("!") != std::string::npos) || 

          (password.find("~") != std::string::npos) || 

          (password.find("$") != std::string::npos) || 

          (password.find("%") != std::string::npos) || 

          (password.find("^") != std::string::npos) || 

          (password.find("&") != std::string::npos) || 

          (password.find("*") != std::string::npos) || 

          (password.find("(") != std::string::npos) || 

          (password.find(")") != std::string::npos) || 

          (password.find("-") != std::string::npos) || 

          (password.find("+") != std::string::npos) || 

          (password.find("/") != std::string::npos) || 

          (password.find(":") != std::string::npos) || 

          (password.find(".") != std::string::npos) || 

          (password.find(",") != std::string::npos) || 



if (true) 

    {  

        int count = 0;    

        for(int i = 65; i <= 90; i++)  

        {  

            char c = (char)i; 

            string str1(1, c); 

              

            if (password.find(str1) != 

                std::string::npos)  

                count = 1;  

        }  

        if (count == 0)  

            return false;  

    }  

  

    if (true) 

    {  

        int count = 0;  


        for(int i = 90; i <= 122; i++) 

        {  

             

            char c = (char)i;  

            string str1(1, c);  

  

            if (password.find(str1) !=  

                std::string::npos) 

                count = 1; 

        }  

        if (count == 0)  

            return false; 

    }  

  

    // If all conditions fails  

    return true;  

}  

  

// Driver code  

int main()  

{  

    string password1;  

      cout<<"Enter Password"<<password1;

    if (isValid(password1))  

        cout << "Strong password, good to go " << endl; 

    else 

        cout << "Invalid Password" << endl; 

  

} 




