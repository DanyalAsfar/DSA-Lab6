// Danyal Asfar
// 552124
// BS-CS-15D
// Section D

#include <iostream>
using namespace std;

class Queue{
    public:
        int items[5];
        int front = -1;
        int rear = -1;

        void enqueue(int value){
            if (rear == 4)
                cout << "Queue Full!!!\nCouldn't Insert!!!\n\n";
            else{
                rear++;
                items[rear] = value;

                if (front == -1)
                front++;
            }

        }

        void dequeue(){
            if (front == -1)
                cout << "\nQueue is Empty!!!\n\n";
            else{
                cout <<  "\nServed: " << items[front] << endl;
                front++;

                // reset front and rear if queue becomes empty
                if (front > rear){
                    front = -1;
                    rear = -1;
                }
            }
        }

        void peekFront(){
            if (front == -1)
                cout << "\nQueue is Empty\n\n";
            else
                cout << "\nNext: " << items[front] << endl;
        }

        void Display(){
            if (front == -1){
                cout << "\nQueue is Empty\n\n";
                return;
            }
            for (int current = front; current <= rear; current++){
                cout << items[current] << endl;
            }
            cout << endl;
        }
};
int main(){
    Queue myQueue;

    int option = -1;
    int token;
    while (option != 5){
        cout << "\n1.Add Customer\n2.Serve Next\n3.View Next\n4.Display Queue\n5.Exit\nSelect Option:\n";
        cin >> option;

        switch (option){
            case 1:
                cout << "Enter Customer Token Number:\n";
                cin >> token;

                myQueue.enqueue(token);
                break;
            case 2:
                myQueue.dequeue();
                break;
            case 3:
                myQueue.peekFront();
                break;
            case 4:
                cout << "\nQueue Status:\n";
                myQueue.Display();
                break;
            case 5:
                cout << "\nExiting...";
                break;
            default:
                cout << "\nSelect Valid Option!!!\n";
                break;
        }
    }
    return 0;
}