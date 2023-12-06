#include<iostream>
#include<fstream>
using namespace std;

int main(){

  string mytext;
  int sum=0,num;

  ifstream f("input.txt");

  while(getline(f,mytext)){
    for(int i=0;i<mytext.size();i++){
      if(isdigit(mytext[i])){
	num=int((mytext[i])-48)*10;
	
	break;
      }
    }
    for(int i=mytext.size()-1;i>=0;i--){
      if(isdigit(mytext[i])){
	num+=int(mytext[i])-48;
	
	break;
      }
    }

    sum+=num;
  }
  cout<<sum;
  f.close();
  
  return 0;
}
