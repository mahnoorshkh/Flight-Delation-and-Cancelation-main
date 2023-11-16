#include<iostream>
#include<string>
#include<fstream>
#include<vector>
#include<sstream>
#include <queue>
#include<windows.h>
#include<stdlib.h>

using namespace std;
class LLnode
{
	public: 
	
		string fl_date,carrier,origin,dest,fl_no,crs_dep,dep_tym,dep_del,taxi_out,wheels_off,wheels_on,taxi_in,crs_arr,arr_tym,arr_del,cancelled,cancellation_code,diverted,crs_elap_tym,actual_elap_tym,air_tym,dist,carrier_del,weath_del,nas_del,sec_del,aircraft_del;
		LLnode* next;
		LLnode* prev;
		
		LLnode (string fl_date= "\0",string carrier= "\0",string origin= "\0",string dest= "\0",string fl_no= "\0",string crs_dep= "\0",string dep_tym= "\0",string dep_del= "\0",string taxi_out= "\0",string wheels_off= "\0",string wheels_on= "\0",string taxi_in= "\0",string crs_arr= "\0",string arr_tym= "\0",string arr_del= "\0",string cancelled= "\0",string cancellation_code= "\0",string diverted= "\0",string crs_elap_tym= "\0",string actual_elap_tym= "\0",string air_tym= "\0",string dist= "\0",string carrier_del= "\0",string weath_del= "\0",string nas_del= "\0",string sec_del= "\0",string aircraft_del= "\0")
		{
			this-> fl_date= fl_date;
			this->carrier = carrier;
			this->origin = origin;
			this->dest = dest;
			this->fl_no = fl_no;
			this->crs_dep = crs_dep;
			this->dep_tym = dep_tym;
			this->dep_del = dep_del;
			this->taxi_out = taxi_out;
			this->wheels_off = wheels_off;
			this->wheels_on = wheels_on;
			this->taxi_in = taxi_in;
			this->crs_arr = crs_arr;
			this->arr_tym = arr_tym;
			this->arr_del = arr_del;
			this->cancelled = cancelled;
			this->cancellation_code = cancellation_code;
			this->diverted = diverted;
			this->crs_elap_tym = crs_elap_tym;
			this->actual_elap_tym = actual_elap_tym;
			this->air_tym = air_tym;
			this->dist = dist;
			this->carrier_del = carrier_del;
			this->weath_del = weath_del;
			this->nas_del = nas_del;
			this->sec_del = sec_del;
			this->aircraft_del = aircraft_del;
			next = NULL;
			prev = NULL;
		}
};

class dll
{
	LLnode* sorted;
	LLnode* head;
	LLnode* tail;
	int size;
	
	public:
		
	    dll()
		{
			head = NULL;
			tail = NULL;
		}
	    
		void push_back(string fl_date,string carrier,string origin,string dest,string fl_no,string crs_dep,string dep_tym,string dep_del,string taxi_out,string wheels_off,string wheels_on,string taxi_in,string crs_arr,string arr_tym,string arr_del,string cancelled,string cancellation_code,string diverted,string crs_elap_tym,string actual_elap_tym,string air_tym,string dist,string carrier_del,string weath_del,string nas_del,string sec_del,string aircraft_del)
		{
			LLnode* new_node = new LLnode(fl_date,carrier,origin,dest,fl_no,crs_dep,dep_tym,dep_del,taxi_out,wheels_off,wheels_on,taxi_in,crs_arr,arr_tym,arr_del,cancelled,cancellation_code,diverted,crs_elap_tym,actual_elap_tym,air_tym,dist,carrier_del,weath_del,nas_del,sec_del,aircraft_del);
		    
			if (head == NULL)
		    {
		        head = new_node;
		        tail = new_node;
		        return; 
		    }
		    
	  		tail->next = new_node;
	  		new_node->prev= tail;
	  		tail = new_node;
	  		
	  		size++;
		}
		
	
		void printList()
		{
	    	LLnode* temp = head;
	    	
		    while (temp != NULL)
			{
		        cout << temp->carrier<< " "<<temp->fl_no <<endl;
		        temp = temp->next;
		    }
		    
		    cout << "\n";
		}
		
		void sort_fl_no()// sorting the linked list
		{
				
	        LLnode* current = head;
	        sorted=NULL;
	        
	        while (current != NULL) 
			{
	            LLnode* nextt = current->next;
	            sortedInsert(current);
	            current = nextt;
	        }
	        
	        head = sorted;
	        LLnode* temp = head;
	        
        	while (temp != NULL)
			{
		        cout << temp->carrier<< " "<<temp->fl_no <<endl;
		        temp = temp->next;
		    }
	    
	    	cout << "\n";
			
		}
		
		void sortedInsert(LLnode* newnode)
	    {
	        if (sorted == NULL || sorted->fl_no >= newnode->fl_no)
			{
	            newnode->next = sorted;
	            sorted = newnode;
	        }
	        
	        else
			{
	            LLnode* current = sorted;

	            while (current->next != NULL && current->next->fl_no < newnode->fl_no) 
				{
	                current = current->next;
	            }
	            
	            newnode->next = current->next;
	            current->next = newnode;
	        }
	    }
};


class Node {
	public:
		
		string fl_date,carrier,origin,dest,fl_no,crs_dep,dep_tym,dep_del,taxi_out,wheels_off,wheels_on,taxi_in,crs_arr,arr_tym,arr_del,cancelled,cancellation_code,diverted,crs_elap_tym,actual_elap_tym,air_tym,dist,carrier_del,weath_del,nas_del,sec_del,aircraft_del;
		Node* left;
		Node* right;
		
		Node(string fl_date= "\0",string carrier= "\0",string origin= "\0",string dest= "\0",string fl_no= "\0",string crs_dep= "\0",string dep_tym= "\0",string dep_del= "\0",string taxi_out= "\0",string wheels_off= "\0",string wheels_on= "\0",string taxi_in= "\0",string crs_arr= "\0",string arr_tym= "\0",string arr_del= "\0",string cancelled= "\0",string cancellation_code= "\0",string diverted= "\0",string crs_elap_tym= "\0",string actual_elap_tym= "\0",string air_tym= "\0",string dist= "\0",string carrier_del= "\0",string weath_del= "\0",string nas_del= "\0",string sec_del= "\0",string aircraft_del= "\0")
		{
			this-> fl_date= fl_date;
			this->carrier = carrier;
			this->origin = origin;
			this->dest = dest;
			this->fl_no = fl_no;
			this->crs_dep = crs_dep;
			this->dep_tym = dep_tym;
			this->dep_del = dep_del;
			this->taxi_out = taxi_out;
			this->wheels_off = wheels_off;
			this->wheels_on = wheels_on;
			this->taxi_in = taxi_in;
			this->crs_arr = crs_arr;
			this->arr_tym = arr_tym;
			this->arr_del = arr_del;
			this->cancelled = cancelled;
			this->cancellation_code = cancellation_code;
			this->diverted = diverted;
			this->crs_elap_tym = crs_elap_tym;
			this->actual_elap_tym = actual_elap_tym;
			this->air_tym = air_tym;
			this->dist = dist;
			this->carrier_del = carrier_del;
			this->weath_del = weath_del;
			this->nas_del = nas_del;
			this->sec_del = sec_del;
			this->aircraft_del = aircraft_del;
			left = NULL;
			right = NULL;
		
		}
	};
	
	class Tree
	{
	public:
		
		Node* root;
		
		Tree()
		{
			root = NULL;
		}
		
		void insert(string fl_date,string carrier,string origin,string dest,string fl_no,string crs_dep,string dep_tym,string dep_del,string taxi_out,string wheels_off,string wheels_on,string taxi_in,string crs_arr,string arr_tym,string arr_del,string cancelled,string cancellation_code,string diverted,string crs_elap_tym,string actual_elap_tym,string air_tym,string dist,string carrier_del,string weath_del,string nas_del,string sec_del,string aircraft_del) 
		{
			int count=0;
			Node* newNode = new(nothrow)Node(fl_date,carrier,origin,dest,fl_no,crs_dep,dep_tym,dep_del,taxi_out,wheels_off,wheels_on,taxi_in,crs_arr,arr_tym,arr_del,cancelled,cancellation_code,diverted,crs_elap_tym,actual_elap_tym,air_tym,dist,carrier_del,weath_del,nas_del,sec_del,aircraft_del);
			
			if (root == NULL)
			{
				root = newNode;
				return;
			}
			
			else
			{
				Node* Current = root;
				Node* Parent = NULL;
				
				while (1) {
					Parent = Current;
	
					if (fl_no < Parent->fl_no)
					{
						Current = Current->left;
						
						if (Current == NULL)
						{
							Parent->left = newNode;
							return;
						}
					}
					
					else
					{
						Current = Current->right;
						
						if (Current == NULL)
						{
							Parent->right = newNode;
							return;
						}
					}
				}
			}
			count= count++;
			
		}
//	

  void BFS(Node* r)// bfs traversal
   {
        queue < Node* > qu;
        if (r != NULL) {
            qu.push(r);

            while (!qu.empty()) {
                r = qu.front();

                qu.pop();

                if (r->left != NULL) {
                    qu.push(r->left);
                }
                if (r->right != NULL) {
                    qu.push(r->right);
                }
            }
        }
    }

		void InOrderPrinting(Node* r)// inorder traversal
		{	
			if (r == NULL)
			{
				return;
			}
			
			cout << r->fl_no <<" "<< r->carrier<< endl;
			InOrderPrinting(r->left);
			InOrderPrinting(r->right);
		}
		
		
		void delation()
		{
			delation_tym(root);
		}
		void delation_tym(Node* root)
		{
			string flightno;
			system("CLS");
			cout<<"Please enter your flight number, THANK YOU"<<endl;
			fflush(stdin);
			cin>>flightno;
			cout<<"The delation time (departure) & (arrival) of flight no :"<<flightno;
			Node* temp= root;
			
			if(root==NULL)
			{
				cout<<"kch ni ";
			}
			
			while(temp!=NULL)
			{
				if(flightno==temp->fl_no)
				{
					cout<<temp->dep_del<<endl;
					
					cout<<temp->arr_del<<endl;
				}
				else if (flightno < temp->fl_no)
				{
				temp=temp->left;
				}
				else if(flightno > temp->fl_no)
				{
				temp=temp->right;
				}
			}
		    
		}
		
		
		void carrier()
		{
			carriers_name(root);
		}
		void carriers_name(Node* root)
		{
			string flightno;
			system("CLS");
			cout<<"Please enter your flight number, THANK YOU"<<endl;
			fflush(stdin);
			cin>>flightno;
			cout<<"The carrier's name of flight no :"<<flightno;
			
			Node* temp= root;
			
			if(root==NULL)
			{
				cout<<"kch ni ";
			}
			
			while(temp!=NULL)
			{
				if(flightno==temp->fl_no)
				{
					cout<<" is: ";
					cout<<temp->carrier;
				}
				else if (flightno < temp->fl_no)
				{
				temp=temp->left;
				}
				else if(flightno > temp->fl_no)
				{
				temp=temp->right;
				}
			}
		    
		}
		
		
		void departure()
		{
			departure_tym(root);
		}
		void departure_tym(Node* root)
		{
			string flightno;
			system("CLS");
			cout<<"Please enter your flight number, THANK YOU"<<endl;
			fflush(stdin);
			cin>>flightno;
			cout<<"The departure time of flight no :"<<flightno;
			Node* temp= root;
			
			if(root==NULL)
			{
				cout<<"kch ni ";
			}
			
			while(temp!=NULL)
			{
				if(flightno==temp->fl_no)
				{
					cout<<" is: ";
					cout<<temp->dep_tym;
				}
				else if (flightno < temp->fl_no)
				{
				temp=temp->left;
				}
				else if(flightno > temp->fl_no)
				{
				temp=temp->right;
				}
			}
		    
		}
		
		
		void arrival()
		{
			arrival_tym(root);
		}
		void arrival_tym(Node* root)
		{
			string flightno;
			system("CLS");
			cout<<"Please enter your flight number, THANK YOU"<<endl;
			fflush(stdin);
			cin>>flightno;
			cout<<"The arrival time of flight no :"<<flightno;
			Node* temp= root;
			
			if(root==NULL)
			{
				cout<<"kch ni ";
			}
			
			while(temp!=NULL)
			{
				if(flightno==temp->fl_no)
				{
					cout<<" is: ";
					cout<<temp->arr_tym;
				}
				else if (flightno < temp->fl_no)
				{
				temp=temp->left;
				}
				else if(flightno > temp->fl_no)
				{
				temp=temp->right;
				}
			}
		    
		}

};

void gotoxy(int x, int y){ //gotoxy function is used to move the cursor on the x/y axis

  static HANDLE h = NULL;
  if(!h)
  h = GetStdHandle(STD_OUTPUT_HANDLE);
  COORD c = { x, y };
  SetConsoleCursorPosition(h,c); //here h stands for x-axis while c stands for y axis
  
}

void Title()
{ 
 	
    int i;
    
    char p[]=" AIRLINE MANAGEMENT SYSTEM ";
    gotoxy(20,10); //20 spaces on x-axis and 10 on y-axis
    cout<<"\n"; 
    cout<<"\t";
    for(i=0;i<12;i++){
	
        Sleep(55); //sleep function is used to delay the timing for the appearance of colon(:)
        cout<<":";
    }
    
cout<<"\t";
    for(i=0;i<strlen(p);i++){
	
        Sleep(50);
        cout<<p[i];
    }
    
    cout<<"\t";
    
    for(i=0;i<12;i++){
	
        Sleep(55);
        cout<<":";
    }
    
    char d[]={"FINAL PROJECT BY"};
    gotoxy(49,0);
cout<<"\t";
    for(i=0;i<strlen(d);i++){
	
        Sleep(50);
        cout<<d[i];
    }

    //use of char to enter every element with a delay
    char I[]={"Fatima Malik....20k-1642"};

    gotoxy(50,1);

    for(i=0;i<strlen(I);i++)
	{

        Sleep(50);
        cout<<I[i]; 
    }

   
}

void menue()
{
	system("CLS");
	int i;
    char m[]="WELCOME TO AIRLINE MANAGEMENT SYSTEM";
	char c[]="NOW TELL US WHO YOU ARE hmmmmmmm????";
	gotoxy(20,10); 
    cout<<"\t";
    for(i=0;i<12;i++){
	
        Sleep(55); 
        cout<<":";
    }
cout<<"\t";
    for(i=0;i<strlen(m);i++){
	
        Sleep(50);
        cout<<m[i];
    }
    cout<<"\t";
    
    for(i=0;i<12;i++){
	
        Sleep(55);
        cout<<":";
    }
    gotoxy(20,10); 
    cout<<"\t";
    for(i=0;i<12;i++){
	
        Sleep(55); 
        cout<<":";
    }
cout<<"\t";
    for(i=0;i<strlen(c);i++){
	
        Sleep(50);
        cout<<c[i];
    }
    cout<<"\t";
    
    for(i=0;i<12;i++){
	
        Sleep(55);
        cout<<":";
    }

}
int main(){
	ifstream infile;
	    string fl_date,carrier,fl_no,origin,dest,crs_dep,dep_tym,dep_del,taxi_out,wheels_off,wheels_on,taxi_in,crs_arr,arr_tym,arr_del,cancelled,cancellation_code,diverted,crs_elap_tym,actual_elap_tym,air_tym,dist,carrier_del,weath_del,nas_del,sec_del,aircraft_del;
infile.open("hello.csv");
while(infile.good())
{
	getline(infile,fl_date,',');
	getline(infile,carrier,',');
	getline(infile,fl_no,',');
	getline(infile,origin,',');
	getline(infile,dest,',');
	getline(infile,crs_dep,',');
	getline(infile,dep_tym,',');
	getline(infile,dep_del,',');
	getline(infile,taxi_out,',');
	getline(infile,wheels_off,',');
	getline(infile,wheels_on,',');
	getline(infile,taxi_in,',');
	getline(infile,crs_arr,',');
	getline(infile,arr_tym,',');
	getline(infile,arr_del,',');
	getline(infile,cancelled,',');
	getline(infile,cancellation_code,',');
	getline(infile,diverted,',');
	getline(infile,crs_elap_tym,',');
	getline(infile,actual_elap_tym,',');
	getline(infile,air_tym,',');
	getline(infile,dist,',');
	getline(infile,carrier_del,',');
	getline(infile,weath_del,',');
	getline(infile,nas_del,',');
	getline(infile,sec_del,',');
	getline(infile,aircraft_del,',');
}

	system("color f5"); //setting color for console
    Title(); 
    menue();
    system("CLS");
	Node* r;
	Tree t;
	t.insert(fl_date,carrier,origin,dest,fl_no,crs_dep,dep_tym,dep_del,taxi_out,wheels_off,wheels_on,taxi_in,crs_arr,arr_tym,arr_del,cancelled,cancellation_code,diverted,crs_elap_tym,actual_elap_tym,air_tym,dist,carrier_del,weath_del,nas_del,sec_del,aircraft_del);
	
	int choice;
	do{
		system("CLS");
		
		cout<<endl<<"ARE YOU A Airline Manager OR Passenger?"<<endl<<"1- Airline Manager"<<endl<<"2- For Passenger"<<endl<<"0- To EXIT"<<endl;
		cin>>choice;
		
		if(choice==0)
		{
			exit(0);
		}
		
		else if(choice==1)
	{
			int manager_choice;
			do{
				cout<<endl<<endl<<"PLEASE ENTER YOUR CHOICE AS PER THE GIVEN OPTIONS: "<<endl<<"1- Departure time"<<endl<<"2- Arrival time"<<endl<<"0- To EXIT"<<endl;
				cin>>manager_choice;
				
				if(manager_choice==1)
				{
					t.departure();
					cout<<"is:";
					cout<< dep_tym;
				}
				else if(manager_choice==2)
				{
					t.arrival();
					cout<<"is:";
					cout<< arr_tym;
				}
				
			}while(manager_choice!=0);
		
		}
		
		else if(choice==2)
		{
			int pass_choice;
			do{
				cout<<endl<<endl<<"PLEASE ENTER YOUR CHOICE AS PER THE GIVEN OPTIONS: "<<endl<<"1- Delation of time"<<endl<<"2- Flight Carrier's Name"<<endl<<"0- To EXIT"<<endl;
				cin>>pass_choice;
				
				if(pass_choice==1)
				{
					t.delation();
					cout<<" is respectively: ";
					cout<< dep_del<<" "<<",";
					cout<< arr_del;
				}
				else if(pass_choice==2)
				{
					t.carrier();
					cout<<" is: ";
					cout<< carrier;
				}
				
			}while(pass_choice!=0);
			
		}
		
cout<<endl;
		
	}while(choice!=0);
	
	return 0;

}
