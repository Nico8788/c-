#include <iostream>
 #include <cstddef>
 #include <string>
 using namespace std;


int main()
{
    
    string place;
    cout<<" type your url here \n ";
    cin>>place;
    
  string url= place;
  size_t found = url.find_first_of(":");
  string protocol=url.substr(0,found); 

 string url_new=url.substr(found+3); 
 size_t found1 =url_new.find_first_of(":");
 string host =url_new.substr(0,found1);

 size_t found2 = url_new.find_first_of("/");
 string port =url_new.substr(found1+1,found2-found1-1);
 string path =url_new.substr(found2);

  cout<<"scheme = "<<protocol<<endl;
 cout<<"authority = "<<host<<endl;
 cout<<"path = "<<path;
 return 0;
 }