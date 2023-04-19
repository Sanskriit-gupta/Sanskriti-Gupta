
#include<iostream>
using namespace std;
int main()
{
    char b;
    int isLowercaseVowel,isUppercaseVowel;
    cout<<"enter b: "<<endl;
    cin>>b;
    
    if((b=='a'|| b=='e' || b=='i' || b=='o' || b=='u'))
    { 
        cout<<"the letter is vowel"<<endl;
    }
    else
   {
        cout<<"the letter is consonants"<<endl;
   }
    return 0;

}
