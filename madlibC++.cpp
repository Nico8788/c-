#include <iostream>

using namespace std;

int main()
{
    
    int x;
    char noun [90];
    char holiday[90];
    char place[90];
    char adjective[90];
    char adjective2[90];
    char bp[90];
    char verb[90];
    char noun2[90];
    char food[90];
    char pluralnoun[90];
    char person[90];
    
    
    do{
    cout<<"\n\n\n Welcome to Madlibs Press 1 to Start Press 2 to exit\n";
    cin>>x;
    
    switch (x){
    
    case 1:
    cout<<"enter a holiday\n";
    cin>>holiday;
    cout<<"\n enter a noun\n";
    cin>>noun;
    cout<<"\n enter a place\n";
    cin>>place;
    cout<<"\n enter a name\n";
    cin>>person;
    cout<<"\n enter a adjective\n";
    cin>>adjective;
    cout<<"\nenter a body part\n";
    cin>>bp;
    cout<<"\nenter a verb\n";
    cin>>verb;
    cout<<"\n enter a adjective\n";
    cin>>adjective2;
    cout<<"\n enter a noun\n";
    cin>>noun2;
    cout<<"\n enter a food\n";
    cin>>food;
    cout<<"\n enter a plural noun\n";
    cin>>pluralnoun;
    
    cout<<"\nI cant believe its already "<<holiday<<"! i cant wait to put on my "<<noun<<" and vist every "<<place<<" in my neighbor hood. this year im gong to dress up as a "<<person<<" with "<<adjective<<" "<<bp<<". Before i "<<verb<<". I make sure to grab my "<<adjective2<<" "<<noun2<<"to hold all of my "<<food<<". Finally all of my "<< pluralnoun<<" are ready yo go!";
    
    
    break;
    
    
    case 2:
    
    cout<<"\nthank you for playing :)";
    break;
    
    }
    
    }while (x < 2);
    

    return 0;
}