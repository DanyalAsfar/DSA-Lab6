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

        void Display(){
            if (front == -1){
                cout << "\nQueue Empty\n\n";
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

    cout << "Dispalying Empty Queue:\n";
    myQueue.Display();

    cout << "Enqueing 10, 20, 30:\n";
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    myQueue.Display();

    cout << "Filling the Queue with 40, 50, then attempting to enqueue 60:\n";
    myQueue.enqueue(40);
    myQueue.enqueue(50);
    myQueue.enqueue(60);

    myQueue.Display();
    return 0;
}