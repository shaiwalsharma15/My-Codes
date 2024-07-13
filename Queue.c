#include <stdio.h>
int MAX = 8;
int q[8];
int rear = -1;
int front = 0;

/* Check if the queue is empty */
int isempty(){
   if(front>rear)
      return 1;
   else
      return 0;
}

/* Check if the queue is full */
int isfull(){
   if(rear == MAX-1)
      return 1;
   else
      return 0;
}

/* Function to delete from the queue */
int delete(){
   int data;
   if(!isempty()) {
      data = q[front];
      front = front + 1;
      return data;
   } else {
      printf("Could not retrieve data, queue is empty.\n");
   }
}

/* Function to insert into the queue */
int insert(int data){
   if(!isfull()) {
      rear = rear + 1;
      q[rear] = data;
   } else {
      printf("Could not insert data, queue is full.\n");
   }
}

/* Main function */
int main(){
   insert(44);
   insert(10);
   insert(62);
   insert(123);
   insert(15);
   printf("Elements: \n");

   // print queue data
   while(!isempty()) {
      int data = delete();
      printf("%d\n",data);
   }
   printf("queue full: %s\n" , isfull()?"true":"false");
   printf("queue empty: %s\n" , isempty()?"true":"false");
   return 0;
}
