#include<bits/stdc++.h>
using namespace std;
struct Info
{
    long long int DOB,contact;
	string enrollment_number,address,name;
};
int t=0;
struct Info e[150]; //creating Array of Structures of size 150
// making funtion which store the data of students
void studentdata(){
    
	int cnt=0;
	
	cout<<"Enter the number of Student?"<<'\n';

	cin>>cnt;

	for(int i=0;i<cnt;i++){

		cout<<"Enter data of Student "<<i+1<<'\n'<<'\n';

		cout<<"Enter Student name: ";

		cin>>e[i].name;
	
		cout<<"Enter DOB: ";

		cin>>e[i].DOB;

        cout<<"Enter Enrollment Number : ";

		cin>>e[i].enrollment_number;

		cout<<"Enter address: ";

		cin>>e[i].address;

		cout<<"Enter contact: ";

		cin>>e[i].contact;
	}
  t = t+cnt;
}
//this function show the data of student
void show(){
	if(t!=0){
	for(int i=0;i<t;i++){

		cout<<"Data of Student "<<i+1<<'\n';

		cout<<"Name: "<<e[i].name<<'\n';

        cout<<"DOB: "<<e[i].DOB<<'\n';
        	
		cout<<"Enrollment_number :"<<e[i].enrollment_number<<'\n';

		cout<<"Address: "<<e[i].address<<'\n';

		cout<<"Contact: "<<e[i].contact<<'\n';
	}
    }
    else{

    	cout<<"Data is not entered"<<'\n';
	}
}
//for finding the data of student
void search(){

	if(t!=0){

	string enrollment_number;

	cout<<"Enter enrollment_number of Student which you want to search"<<'\n';

	cin>>enrollment_number;

	for(int i=0;i<t;i++){

		if(e[i].enrollment_number==enrollment_number){

		cout<<"Data of Student "<<i+1<<'\n';

		cout<<"Name: "<<e[i].name<<'\n';

        cout<<"DOB: "<<e[i].DOB<<'\n';
        
		cout<<"Enrollment_number: "<<e[i].enrollment_number<<'\n';

		cout<<"Address: "<<e[i].address<<'\n';

		cout<<"Contact: "<<e[i].contact<<'\n';

		break;

		}

		if(i==t-1){

			cout<<"Student record not found"<<'\n';
		}
	}

}else{

	cout<<"No data is entered"<<'\n';

}
}
//FUNCTION FOR UPDATING THE DATA OF STUDENT
void update(){

	if(t!=0){

	string enrollment_number;

	cout<<"Enter enrollment_number of Student which you want to update"<<'\n';

	cin>>enrollment_number;

	for(int i=0;i<t;i++){

		if(e[i].enrollment_number==enrollment_number){

		cout<<"Old data of Student "<<i+1<<'\n';

		cout<<"Name: "<<e[i].name<<'\n';

		cout<<"Enrollment_number: "<<e[i].enrollment_number<<'\n';

		cout<<"Address: "<<e[i].address<<'\n';

		cout<<"Contact: "<<e[i].contact<<'\n';

		cout<<"DOB: "<<e[i].DOB<<'\n';

		cout<<"\nEnter new data"<<'\n';

		cout<<"Enter Student name: ";

		cin>>e[i].name;

		cout<<"Enter Enrollment_number: ";

		cin>>e[i].enrollment_number;

		cout<<"Enter address: ";

		cin>>e[i].address;

		cout<<"Enter contacts: ";

		cin>>e[i].contact;

		cout<<"Enter DOB: ";

		cin>>e[i].DOB;

		break;
		}
		if(i==t-1){

			cout<<"No such record found"<<'\n';
		}
	}
}
else{

	cout<<"No data is entered"<<'\n';
}
}
//function for remove the data 
void rem(){

	if(t!=0){
	int press;
	cout<<"Press 1 to delete the specific student record"<<'\n';
	cout<<"Press 2 to delete full record"<<'\n';
	cin>>press;

	if(press==1){

		string enrollment_number;
		cout<<"Enter enrollment_number of Student which you want to delete"<<'\n';
		cin>>enrollment_number;
		for(int i=0;i<t;i++){
			if(e[i].enrollment_number==enrollment_number){

				e[i].name=e[i+1].name;

				e[i].enrollment_number=e[i+1].enrollment_number;

				e[i].address=e[i+1].address;

				e[i].contact=e[i+1].contact;

				e[i].DOB=e[i+1].DOB;
				t--;
				cout<<"Your required record is deleted"<<'\n';
				break;
			}

			if(i==t-1){
			cout<<"No such record found"<<'\n';
		}
		}
	}
	else if(press==2){
		t=0;
		cout<<"All record is deleted"<<'\n';
	}
	else{

		cout<<"Invalid Input"<<'\n';
	}
}
    else{
	cout<<"No data is entered"<<'\n';

}
}

int main(){
    
	cout<<"\nStudent Management System  "<<"\n\n";
	  string username,password;
    cout<<"REGISTER"<<'\n'<<'\n';
	cout<<"Enter username: ";
	cin>>username;
    char x;
	cout<<"Create a Strong password: ";
	cin>>password;
	cout<<"\nNice..Your ID Created Successfully!!!\n";
	set_go:     // goto  used
	string cspt,uname,pword,capt="AQWSR";
	cout<<"\nLogin to Student Management System\n"<<'\n';
	cout<<"\nEnter your username: ";
	cin>>uname;
	cout<<"Enter password: ";
	cin>>pword;
	cout<<"Captcha : AQWSR \n";
	cout<<"Enter captcha = ";
	cin>>cspt;
	if(cspt==capt&&pword==password&&uname==username)
	{
	while(1){
	cout<<"Choose the key carefully!!!"<<'\n';
	cout<<"Press key 1 for Data Entry of Student"<<'\n';
	cout<<"Press key 2 for Show the Data of Student"<<'\n';
	cout<<"Press key 3 for Search the Data of Student"<<'\n';
	cout<<"Press key 4 for Update data of Student"<<'\n';
	cout<<"Press key 5 for Delete data of Student"<<'\n';
	cout<<"Press key L for Logout"<<'\n';
	cout<<"Press key Q for Quit"<<'\n';
	
	cin>>x;
	switch(x){
		case '1':
		    studentdata();
			break;
		case '2':
			show();
			break;
		case '3':
			search();
			break;
		case '4':
			update();
			break;
		case '5':
			rem();
			break;
		case 'L':
			goto set_go;
			break;
		case 'l':
		    goto set_go;
	     	break;
		case 'Q':
			exit(0);
			break;
		case 'q':
			exit(0);
			break;	
		default:
			cout<<"Invalid Input!!!Please check you choose Input from Above Only."<<'\n';
			break;
	}
}
}
  else if(uname!=username)
  {
  	cout<<"Username not match please Try again ";
  	goto set_go; //using goto statement
  }
  else{
  	cout<<"Invalid Username or password";//if password or captcha  not match
  	goto set_go;
  }
  return 0;
}
