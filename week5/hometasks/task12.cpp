#include<iostream>
using namespace std ;
main ( ){
    int choice  ;
    string name ;
    while( true ){
    cout<<"\n----LIBRARY SYSTEM----\n";
    cout<<"1 . Add books \n";
    cout<<"2 . view books \n";
    cout<<"3 . borrow books \n";
    cout<<"4 . issue books \n";
    cout<<"5 . Exit   \n";
    cout<<"Enter your choice (1-5): ";
    cin >> choice ;
    
    if ( choice ==1 ){
        cout<<"Enter a book name : ";cin>>name;
        cout<<"You added a book : "<<name;
    }
    else if ( choice == 2 ){
    
        cout <<" books : \n 1 . Computer science \n 2. physics \n 3. chemistry  ";
    }
    else if ( choice == 3 ){
        cout<<"Enter the book you want to borrow : ";cin>>name;
        cout <<"You borrowed the book "<<name;
    }
    else if ( choice == 4 ){
        cout<<"Enter the book you want to issue : ";cin>>name;
        cout <<"You issued  the book "<<name;
    }
    else if ( choice == 5 ){
       cout<<"Exiting the library system ! Goodbye ";
       break ;
    }
    else {
        cout<<" Invalid choice ";
      break ;
    }
}
return 0;
}