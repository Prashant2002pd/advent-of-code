#include<iostream>
#include<fstream>
using namespace std;

int main(){

  string mytext;
  int sum=0,num;

  ifstream f("input.txt");

  while(getline(f,mytext)){
    //this loop will get the first no.in the string
    for(int i=0;i<mytext.size();i++){
      if(isdigit(mytext[i])){
	num=int((mytext[i])-48)*10;
	
	break;
      }
    }
    //this loop will get the second no. in the string add the first no. to it to make it a full to digit no.
    for(int i=mytext.size()-1;i>=0;i--){
      if(isdigit(mytext[i])){
	num+=int(mytext[i])-48;
	
	break;
      }
    }
    //then just add the num to the final sum
    sum+=num;
  }
  cout<<sum;
  f.close();
  
  return 0;
}
