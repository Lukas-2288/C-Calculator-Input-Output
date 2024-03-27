#include <iostream>
#include <cmath>

using namespace std;

void showChoices(){
    cout<<"MENU"<<endl;
    cout<<"1: Add"<<endl;
    cout<<"2: Subtract"<<endl;
    cout<<"3: Multiply"<<endl;
    cout<<"4: Divide"<<endl;
    cout<<"5: Exit"<<endl;

}

float ans;
float add (float num1, float num2){
    ans=num1 + num2;
    return ans;
}

float subtract (float num1,float num2){
    ans= num1 - num2;
    return ans;
}

float multiply (float num1,float num2){
    ans = num1 * num2;
    return ans;
}

float divide (float num1, float num2){
    ans = num1/num2;
    return ans;
}


int main()
{
    float num1, num2;
    int choice;
    do{
        showChoices();
        cin>>choice;
    switch (choice){
        case 1:
        cout<< "Enter two numbers:";
        cin>>num1>>num2;
        cout<< "Sum: "<< add(num1,num2)<<endl;
        break;
    }
    switch (choice){
        case 2:
        cout<< "Enter two numbers:";
        cin>>num1>>num2;
        cout<< "Difference: "<<subtract(num1,num2)<<endl;
        break;
    }
    switch (choice){
        case 3:
        cout<< "Enter two numbers:";
        cin>>num1>>num2;
        cout<< "Product: "<<multiply(num1,num2)<<endl;
        break;
    }
    switch (choice){
        case 4:
        cout<< "Enter two numbers:";
        cin>>num1>>num2;
        cout<< "Quoitent: "<<divide(num1,num2)<<endl;
        break;
    }
    switch (choice){
        case 5:
        break;
    }
    
    
        
    
    }
while(choice != 5);

    return 0;
}

