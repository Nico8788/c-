
#include <iostream>

using namespace std;

int main()
{
    int x;
    int a;
    
    cout<<"Press 1 to start the Fizz Bizz\n";
    cin>>x;

    switch (x)
    {
        case 1:
         for (a =0 ; a <=100; a++)
         {
           
            if ((a % 15) == 0)
                cout<<"fizzBuzz\n";
                
           
           else if ((a % 3) ==0 )
                cout<<"fizz\n";
              
                  else  if((a % 5) == 0)
                      cout<<"buzz\n";
                      
                  else    cout<<a<<"\n";
                
           
               
            //for 
             
             
             
         }//for
         
         break;
         
        
         
        
         
         
    }//switch


    return 0;
}