#include <fstream>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;

int printWords(string str){
    char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    int counter=0;
    
   
        for(int b = 0; b < 5; b++)
        {
            if(str.at(0) == vowels[b])
            {
                counter++;
                break;
            }
        
    }
   return counter;
}
int aa(string str){
	int a=0;
    if(str.at(0) =='a')
               a++; 
            return a;
}
int ab(string str){
	int b=0;
    if(str.at(0) =='e')
               b++; 
            return b;
}
int ac(string str){
	int a=0;
    if(str.at(0) =='i')
               a++; 
            return a;
}
int ad(string str){
	int a=0;
    if(str.at(0) =='o')
               a++; 

            return a;
}
int ae(string str){
	int a=0;
    if(str.at(0) =='u')
               a++;             
            return a;
}
int main(){
    ifstream inFile("a.txt");
    string words;
    int x=0,a=0,b=0,c=0,d=0,e=0;
    while(inFile >> words)
    {
    	transform(words.begin(), words.end(), words.begin(),::tolower);
        x+=printWords(words);
        a+=aa(words);
         b+=ab(words);
          c+=ac(words);
           d+=ad(words);
            e+=ae(words);
    }
    inFile.close();
    cout<<"Total number of words begining with vowels = "<<x<<endl<<"a->"<<a<<endl<<"e->"<<b<<endl<<"i->"<<c<<endl<<"o->"<<d<<endl<<"u->"<<e;
    return 0;
}
