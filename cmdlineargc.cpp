#include<iostream>
#include<string>

using namespace std;
int main(int argc, char *argv[])
{
int count;
string arg;
if(argc==1){

cout<<"No command "<<endl;
}
if(argc>=2){
cout<<"No of Arguments are -> "<<argc<<endl;
for(count=0;count<argc;count++){

cout<<"no of cmds -> "<<count<<" cmd -> "<<argv[count]<<endl;
}
}
return 0;
}
