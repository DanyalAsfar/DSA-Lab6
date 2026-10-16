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
                cout << "\nQueue Already Empty!!!\n\n";
            else{
                cout <<  "Removed: " << items[front] << endl;
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
                cout << "Front: " <<  items[front] << endl;
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

    cout << "Enqueing 10, 20, 30:\n";
    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    myQueue.Display();

    myQueue.dequeue();
    myQueue.Display();
    myQueue.peekFront();

    cout << "Emptiying the Queue:\n";
    myQueue.dequeue();
    myQueue.dequeue();

    cout << "Trying another removal: ";
    myQueue.dequeue();

    cout << "Inserting 40\n";
    myQueue.enqueue(40);
    myQueue.Display();
    return 0;
}