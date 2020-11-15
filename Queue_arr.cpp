#include <iostream>
using namespace std;

int queue[100],n=100,front=- 1,rear=- 1;

void enqueue(){
		int a;
   		if (front==NULL)
   		{
   			cout<<"Queue Overflow"<<endl;
   		}
   		else {
     		 if (front==- 1)
      			front = 0;
      			cout<<"Insert the element in queue : "<<endl;
      			cin>>a;
      			rear++;
      			queue[rear]=a;
  		 }
}

void dequeue(){
   if (front==- 1 || front>rear) {
   	
      cout<<"Queue Underflow";
      
   } 
   else {
   		cout<<"Element deleted from queue is:"<< queue[front] <<endl;
      	front++;;
   }
}

void display() {
   if (front==-1)
   {
   		cout<<"\nQueue is empty"<<endl;
   }
   else {
      cout<<"Queue elements are:"<<endl;
      
      for (int i=front;i<=rear;i++)
      {
	  	cout<<queue[i]<<" ";
        cout<<endl;
   	  }
   }
}

int main() {
	
   int x;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
   
   while(true){
   
      cout<<"\nEnter choice:"<<endl;
      cin>>x;
      switch (x) {
      	
         case 1:
		  		enqueue();
		  		display();
         		break;
         		
         case 2: 
		 		dequeue();
		 		display();
         		break;
         		
         case 3: 
		 		display();
         		break;
         case 4: 

		 		exit(0);
         		
         default: 
		 		cout<<"Invalid choice"<<endl;
      
	  	}
   
   } 
   	
   return 0;
}