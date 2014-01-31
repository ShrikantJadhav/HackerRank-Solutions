//Jack wants to build an IDE on his own. Help him build a feature which identifies the comments, 
//in the source code of computer programs. Assume, that the programs are written either in C, C++ or Java. 
//The commenting conventions are displayed here, for your convenience. 

//At this point of time you only need to handle simple and common kinds of comments. 
//You don’t need to handle nested comments, or multi-line comments inside single comments or single-comments inside multi-line comments.

//Your task is to write a program, 
//which accepts as input, a C or C++ or Java program and outputs only the comments from those programs. 
//Your program will be tested on source codes of not more than 200 lines.

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char ch;
    char prevChar;
    bool singleLineComment = false;
    bool multiLineComment = false;
    
    std::string output;
    
    while(cin.get(ch)){
        
        if(singleLineComment){
            std::cout<<ch;            
            if(ch == '\n'){singleLineComment = false;
            }
            continue;
        } 
        
        if(multiLineComment){
            if(ch == '*'){
                prevChar = ch;
				std::cout<<ch;
                continue;
            }else{
                if(ch == '/' && prevChar == '*'){
                    multiLineComment = false;
                    std::cout<<"/\n";
                    continue;
                }
            }
            std::cout<<ch;
            continue;
        }        
        
        if(ch == '/'){
       
            char tempchar = ch;
            cin.get(ch);            
           
            if(ch == '/'){
                singleLineComment = true;
                std::cout<<"//";
                continue;
            }
            
            if(ch == '*'){
                    multiLineComment = true;
                    std::cout<<"/*";
                    continue;
            }                               
        }        
     }
    return 0;
}
