 #include <iostream>
 using namespace std;
 int main(){
    int stack[5]={1,2,3,4,};
    int n=5 ;
    top = n-1;
    cout<<"top"<<stack[top];
 return 0;
 }





#include <iostream>
using namespace std;


// this is the code for queue using array.
#define max 5
int QUEUE[max], Front = 0, Rear = -1, count =0;


// function to insert an element in the queue
void Enqueue(int item  ){
    if (count == max )
    {
        cout<< "overflow ";
        return;
    }
    // Rear = Rear + 1;
   Rear = (Rear + 1) % max;
   QUEUE[Rear] = item;
   count++;
}

// function to delete an element from the queue
void Dequeue(){
    if (count == 0){
        cout<< "underflow ";
        return;
    }
    cout<<"The value is deleted from the queue "<<QUEUE[Front]<<endl;
    //  Front = Front + 1;
    Front = (Front + 1) % max;
    count--;
}

int main(){
    // inserting values in the queue
    Enqueue(10);
    Enqueue(20);
    Enqueue(30);
    Enqueue(40);
   
// deleting values from the queue
    Dequeue();
    Dequeue();
    Dequeue();
    Dequeue();

    return 0;

}

























this is partice code for find the max and min and index.
#include <iostream>

using namespace std;

int main()
{
    int arr[11] = {12, 23, 21, 2, 6, 3, 17, 1, 98, 11, 63};

    int n = 11;
    int k = 0;

    int max = arr[0];
    int min = arr[0];

    int maxloc = 0;
    int minloc = 0;

    while (k < n)
    {
        if (max < arr[k])
        {
            max = arr[k];
            maxloc = k;
        }

        if (min > arr[k])
        {
            min = arr[k];
            minloc = k;
        }

        k++;
    }


    cout << "Maximum value : " << max << endl;
    cout << "Maximum location : " << maxloc << endl;
    cout << "Minimum value : " << min << endl;
    cout << "Minimum location : " << minloc << endl;


    return 0;
}





































#include<iostream>
using namespace std;
int main(){
  
    int Q [6];
    int F=-1;
    int R=-1;

    if(R==-1)
    {
        R=R+1;
        F=F+1;
        Q[R]=10;
    }

    // inserting 20 at index 1

    R=((R+1)%6);
    Q[R]=20;

    R=((R+1)%6);
    Q[R]=30;

    R=((R+1)%6);
    Q[R]=40;

    R=((R+1)%6);
    Q[R]=50;

    cout<<"The frint is "<<Q[F]<<endl;
    cout<<"The index is "<<F<<endl;

    F=F+1;

    R=((R+1)%6);
    Q[R]=60;

    R=((R+1)%6);
    Q[R]=70;

     


    cout<<endl<<endl;
    cout<<"The frint is "<<Q[F]<<endl;
    cout<<"The index is "<<F<<endl;

    cout<<"The frint is "<<Q[R]<<endl;
    cout<<"The index is "<<F<<endl;
    
    
    cout<<"The Queue is created"<<endl;

    cout<<"The frint is "<<Q[R]<<Q[F]<<endl;

}














































#include<iostream>
using namespace std;
int main(){
    int Queue[5];
    int rear=0;
    int front=0;

    Queue[rear]=10;

    cout<<"The value of Front is "<<Queue[front]<<endl;
    cout<<"The value of Rear is "<<Queue[rear]<<endl<<endl;


    rear=rear+1;
    Queue[rear]=20;

    cout<<"After inserting value t rear opstion"<<endl<<endl;
    cout<<"The value of Front is "<<Queue[front]<<endl;
    cout<<"The value of Rear is "<<Queue[rear]<<endl;
    


    
    rear=rear+1;
    Queue[rear]=30;

     cout<<"After 2nd inserting value rear opstion"<<endl<<endl;
    cout<<"The value of Front is "<<Queue[front]<<endl;
    cout<<"The value of Rear is "<<Queue[rear]<<endl;


    front=front+1;


    cout<<"After delecting value Front Position"<<endl<<endl;
    cout<<"The value of Front is "<<Queue[front]<<endl;
    cout<<"The value of Rear is "<<Queue[rear]<<endl;

    cout<<"The Queue is created"<<endl;


}



