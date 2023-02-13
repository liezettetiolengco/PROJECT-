#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    
    int select;
    
    cout << "---------------------------------------------------------"<< endl;
    cout << " WELCOME TO STUDENT INFORMATION SYSTEM!" << endl;
   
    cout << "---------------------------------------------------------"<<endl;
    
    cout << " 1. Faculty Information"<< endl;
    cout << " 2. Student Information" <<endl;
    cout << " 3. Exit "<<endl;
    cout << "----------------------------------------------------------"<<endl;
    cout<<"Enter your option::";
    cin >> select;
    cout << endl;
    
    switch ( select) {
    case 1:  {
    
    string userName;
    string userPassword ;
    string Id;
    
    cout << "User ID number: ";
    cin >> Id;
    cin.ignore();
    cout << "Faculty Name: ";
    getline( cin, userName);
    cout << "Please enter your password: ";
        cin >> userPassword;
        
        cout << endl;

        if (userPassword == "141414" ) {
            cout << "WELCOME TO THE FACULTY INFORMATION!" << endl;
            
             cout << "Position: "<<endl;
             cout << "Address: " <<endl;
             cout << "Contact Number: " <<endl;               cout << "Email: "<< endl; }
            
            
                 
            break; }
           
          
           case 2:  {
            
            string Id1;
            string name1;
            string pass1; 
            string course, Level;
            int select1;
            
          cout << "Student ID number: ";
    cin >> Id1;
    cin.ignore();
    
    cout << "Student Name: ";
    getline( cin,name1);
    
    cout << "Course: ";
    getline(cin, course);
    
    cout << "Year Level: ";
    getline (cin, Level);
    
    cout << "Enter your user password: ";
        cin >> pass1;
        
         do{
        cout << endl;
           
            if ( pass1 == "Orobia") {
                cout << "WELCOME TO LIEZETTE T. OROBIA INFORMATION"<<endl;
                
    cout << endl;         
              
    cout << "----------------------------------------------------------"<<endl;
    cout << "Please Select an option that you want to see!"<< endl;
    cout << " 1. Personal Information"<< endl;
    cout << " 2. Grades" <<endl;
    cout << " 3. Class Schedule"<<endl;
    cout << " 4. Exit"<<endl;
    cout << "If you don't have any transactions please select exit"<<endl;
    cout << "----------------------------------------------------------"<<endl;
    cin >> select1; }
    
    else if (pass1 != "12345" ){
       cout << "INVALID PASSWORD!";
         exit(0);}
    
    
    switch (select1) {
    
    case 1: {
                cout << " My Personal Information" << endl;
           cout << endl;
           
           cout << "Name: Liezette T. Orobia"<< endl;
           cout << endl;
        
           cout << "Age: 20 yrs old"<< endl;
           cout << endl;
        
           cout << "Place of Birth: Brgy. Timbao Biñan City of Laguna" << endl;
           cout<<endl;
           
           cout << "Date of Birth: August 17, 2002"<< endl;
           cout << endl;
           
           cout << "Address:  BLK 40 LOT 1 Phase 1 Brgy. Timbao Binan City of Laguna" << endl;
           cout << endl;
                                                                             
           cout << "Contact Number: 0998-925-4788" << endl;
           cout<< endl;
           
           cout << "Email Address: liezettetiolengco@gmail.com" << endl;
           
            
                
                                                               
                break; }
                    
    case 2:  {
    
    
           cout << "Course Diploma in Computer Engineering Technology"<<endl;
                cout << endl; 
                cout << "Subject Grades"<< endl;
                cout<< "Computer Engineering Technology: 1.25" <<endl;
                cout << "Object-Oriented Programming: 1.75"<< endl;
                cout << "Physical Fitness: 1.75"<<endl;
                cout << "Computer Engineering Technology: 1.00" << endl;
                 
        
        
           
       break;   }    
       
     case 3: {
          
           cout << "CLASS SCHEDULE:" << endl<<endl;
           
          
        cout << "Subjects:"<< endl;
            cout<< "Consumer Electronics Servicing:" << endl;
            
            cout<<"TUESDAY (7:30AM - 9:00AM)" <<endl;
                
            cout << "Object-Oriented Programming:"<< endl;

            cout<<" MONDAY (3:00PM -9:00PM)"<< endl;
               
            cout << "Physical Fitness:" << endl;

            cout<<" WEDNESDAY (10:00AM - 12:00NN)"<<endl;
             
            cout << "Computer Engineering Technology:"<< endl;

            cout<<"TUESDAY (2:00PM - 5:00PM)" << endl;
                 
           
           break; }
           
           case 4: {
           
           cout<<  "Thank You For Using the System!"<<endl;
           exit(0);}
        
        
        }
        
        
        } while (select1 !=4); {
                exit(0);}
          
                
  
                 
                            
                break; }
                
      
               
  
    }
  
    
 
    
    return 0;
}