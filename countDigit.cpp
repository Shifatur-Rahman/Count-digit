#include <bits/stdc++.h>
using namespace std;

bool isNumber(char c){
   if(isdigit(c)){
	return true;
   }else{
    return false;
   }

}

int main(){

string str;
getline(cin, str);
int i, count, strLength;

strLength = str.length();

count=0;

for(i=0; i<strLength; i++){
   if(isNumber(str[i])){
	count++;
   }
}

cout<<count<<endl;


}
