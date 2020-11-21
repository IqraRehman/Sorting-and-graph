#include<iostream>
#include<string.h>
using namespace std;
class Postfix{
	int top, stack[50];
	char exp[];
	public:
		Postfix():top(-1){
		}
		void input(){
	            cout<<"\nEnter Expression space after every operand(2-digit number combine) and operator\n";
				cin.get(exp,100);
				cin.ignore();
		}
		void push(int a){
			stack[++top] = a;
		}
		int pop(){
			return stack[top--];
		}
		int scan(){
	   	int len = strlen(exp);
         for (int i =0; i<len; ++i)  
         {   
        if(exp[i] == ' ')continue;    
        else if (isdigit(exp[i]))  
        {  
            int num=0;    
            while(isdigit(exp[i]))  
            {  
            num = num * 10 + (int)(exp[i] - '0');  
                i++;  
            }  
            i--;  
            push(num);  
        }   
        else
        {  
            int val1 = pop();  
            int val2 = pop();  
              
            switch (exp[i])  
            {  
            case '+': push(val2 + val1); break;  
            case '-': push(val2 - val1); break;  
            case '*': push(val2 * val1); break;  
            case '/': push(val2/val1); break;  
              
            }  
        }  
    }  
    return pop(); 
} 
};
int main(){
	Postfix s;
	char ch;
	do
	{
	s.input();
    cout<<"\nExpression evaluate\n"<<s.scan()<<endl;
	cout<<"\nEnter another expression(y/n): ";
	cin>>ch;
	cin.ignore();
}
while(ch=='y');
	return 0;
	
}
