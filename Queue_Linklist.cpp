
#include <iostream>
using namespace std;

struct node{
	int data;
	node* next;
	
	node(int n){
		data = n;
	}
	
};
node* front;
node* rear;
node* tmp;

void enqueue(int a1){
	
   	node* nn = new node(a1);
   if(front == NULL){
   	
	front = nn;
	rear = nn;
	nn->next = NULL;
		
   } 
   else{
		rear->next = nn;
		rear = nn;
		rear->next = NULL;
   }
}


void dequeue(){
	if(front == NULL)
    {
        cout<<"List is already empty.";
    }
    else{
    	node* 
		tmp = front;
    	front = tmp->next;
    	delete(tmp);
    	cout << "First node has being deleted.\n";
	}
	
}


void display(){
   node* tmp = front;
   if((front == NULL) && (rear == NULL)){
   	
      cout << "Queue is empty" << endl;
      
   }
   else{
   
   cout << "Queue elements are:";
   
   while(tmp != NULL) {
      cout << tmp->data << " ";
      tmp = tmp->next;
   }
}
 
}

int main() {
   int ch;
   cout << "1: Insert element to queue\n";
   cout << "2: Delete element from queue\n";
   cout << "3: Display all the elements of queue\n";
   cout << "4: Exit\n";
   
   while(true){
   
      cout << "\nEnter your choice : " << endl;
      cin >> ch;
      
      switch(ch){
      	
         case 1:
		      
         	int a;
		cout << "enter a number:\n";
		cin >> a;
		      
		enqueue(a);
                cout << " ";
		      
                display();
         	break;
         	
         case 2: 
		      
		dequeue();
                cout << " ";
                display();
         	break;
         	
         case 3: 
		      
		display();
         	break;
         		
         case 4: 	
		exit(0);
         	break;
         		
         default: 
		cout << "Invalid choice\n";
      }
   } 
	
    return 0;
}
