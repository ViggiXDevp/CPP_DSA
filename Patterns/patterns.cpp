#include<iostream>
using namespace std;

int main(){
    // Pattern 1
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl; 
    }


    // Pattern 2
    int n = 4;
    for (int i = 0; i <= n-1; i++)
    {
        for (int j = 0; j <= n-1; j++)            // 1 to n and 0 to n-1, both are same.
        {
             cout<<"*"<<" ";
        }
        cout<<endl;
    }



    // Pattern 3
    int n =26;
    for (int i = 0; i <= n-1; i++)
    {   
        char ch = 'A';
        for (char j = 0; j <= n-1; j++)
        {
            cout<<ch<<" ";
            ch += 1;
        }
        cout<<endl;
    }


    // Pattern 4
    int num = 1;
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }


    // Pattern 5
    int n = 3;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
         for (char j = 0; j < n; j++)
         {
             cout<<ch<<" ";
             ch++;
         }
         cout<<endl;
    }



    // Pattern 6
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }



    // Pattern 7
    int n = 4;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<i+1<<" ";
            num++;
        }
        cout<<endl;
    }


    
    // Pattern 8  (Floyd's triangle pattern)
    int n = 4;
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }


    // Pattern 9
    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (char j = 0; j < i+1; j++)
        {
            cout<<ch<<" ";
        }
        ch += 1;
        cout<<endl;
    }
    


    // Pattern 10
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i+1; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }



    // Pattern 11
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j >= 1; j--)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
    
    
    // Pattern 12
    int n = 5;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (char j = 0; j < i+1; j++)
        {
            cout<<ch<<" ";
            ch += 1;
        }
        cout<<endl;
    }
    
    
    // Pattern 13
    int n = 5;
    for (int i = 0; i < n; i++)
    {   
        char ch = 'A'+i;
        for (char j = i+1; j >= 1; j--)
        {
            cout<<ch<<" ";
            ch--;
        }
        cout<<endl;
    }



    // Pattern 14
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (int j = 0; j < n-i; j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }



    // Pattern 15
    int n = 4;
    char ch = 'A';
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        for (char j = 0; j < n-i; j++)
        {
            cout<<ch;
        }
        ch++;
        cout<<endl;
    }
    
    
    // Pattern 16
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i+1; j++)
        {
            cout<<j;
        }
        for (int j = i; j >=1; j--)
        {
            cout<<j;
        }
        cout<<endl;
    }



    // Pattern 17
    int n= 10;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i != 0){
            for (int j = 0; j < 2*i-1; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout<<" ";
        }
        cout<<"*";
        if(i != n-2){
            for (int j = 0; j < 2*(n-i)-5; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
    
    
    // Pattern 18  (Butterfly)
    int n = 4;
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= i ; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= 2*(n-i); j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;    
    }
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        for (int j = 1; j <= 2*(n-i); j++)
        {
            cout<<" ";
        }
        for (int j = 1; j <= i ; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}