#include "stdio.h"
#include "iostream"
using namespace std;

void replaceSpace(char *str,int length) {
        int spaceCount,afterLength,tempCount;       
        for(int i=0;i<length;i++){
            if(str[i]== ' ') spaceCount++;
            afterLength = length + spaceCount*2;            
        }
        tempCount = length;
        while(tempCount>0 && afterLength>0){
            if(str[tempCount]!= ' '){
                str[afterLength--] = str[tempCount--];
            }
            else if(str[tempCount] == ' '){
                str[afterLength--] = '0';
                str[afterLength--] = '2';
                str[afterLength--] = '%';
                tempCount--;
            }   
        }
        cout<< *str <<endl;
    }
        
int main(int argc,char *argv[])
{
	char *str = "We are happy!";
	int length = 12;
	replaceSpace(str,length);
}
	

	
	

