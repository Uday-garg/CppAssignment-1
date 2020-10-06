#include <iostream>

using namespace std;

int main()
{
    string sentence, word = "", translation = "";                               
    cout<<"Please enter the original sentence: ";                               
    getline(cin, sentence);                                                   
    for (unsigned int i=0; i<sentence.length(); i++) {                                     
        if(sentence[i] == ' '){                                              
            translation = translation + word.substr (1,string::npos)+ word[0] + "KPU ";   
            word = "";                                                          
        }
        else{                                                                 
            word = word + (char)toupper(sentence[i]);                          
        }
    }
    translation = translation + word.substr (1,string::npos)+ word[0] + "KPU ";   
    cout<<"\nTranslated: "<<translation;                                         
    
    return 0;
}
