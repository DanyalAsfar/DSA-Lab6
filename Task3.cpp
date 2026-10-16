// Danyal Asfar
// 552124
// BS-CS-15D
// Section D

#include <iostream>
#include <string>

using namespace std;

class charStack{
    public:
        char *stack;
        int top = -1, length = 0;
        
        charStack(){
        }

        charStack(int plength){
            length = plength;
            stack = new char[length];
        }

        void Push(char character){
            if (top == length - 1)
                cout << "Stack Full!!\nCould Not Insert!!!\n";
            else{
                top++;
                stack[top] = character;
            }
        }

        char Pop(){
            if (top == -1){
                return '\0';
            }

            char returnChar = stack[top];
            top--;
            return returnChar;
        }
};

int main(){
    string str;
    int index = 0;
    cout << "Enter a String (Upto 20 characters):\n";
    getline(cin, str);

    charStack stack(str.length());

    for (int index = 0; index < str.length(); index++)
        stack.Push(str[index]);

    for (int index = 0; index < str.length(); index++)
        cout << stack.Pop();

    return 0;
}