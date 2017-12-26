//
//  main.cpp
//  LinkList
//
//  Created by Kiarash on 12/18/17.
//  Copyright © 2017 Kiarash. All rights reserved.
//

#include <iostream>
#include "LinkList.h"

using namespace std;

int main(int argc, const char * argv[]) {
    list<int> obj;
    obj.append(25);
    obj.append(50);
    obj.append(90);
    obj.append(40);
    cout<<obj.length()<<endl;
    cout<<"\n--------------------------------------------------\n";
    cout<<"---------------Displaying All nodes---------------";
    cout<<"\n--------------------------------------------------\n";
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"-----------------Inserting At End-----------------";
    cout<<"\n--------------------------------------------------\n";
    obj.append(55);
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"----------------Inserting At Start----------------";
    cout<<"\n--------------------------------------------------\n";
    obj.insertStart(50);
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"-------------Inserting At Particular--------------";
    cout<<"\n--------------------------------------------------\n";
    obj.addNewValueAtIndex(5,60);
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"----------------Deleting At Start-----------------";
    cout<<"\n--------------------------------------------------\n";
    obj.deleteFirst();
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"-----------------Deleing At End-------------------";
    cout<<"\n--------------------------------------------------\n";
    obj.deleteLast();
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"--------------Deleting At Particular--------------";
    cout<<"\n--------------------------------------------------\n";
    obj.deleteValueAtIndex(3);
    obj.display();
    cout<<"\n--------------------------------------------------\n";
    cout<<"-------------changing value At Particular-------------";
    cout<<"\n--------------------------------------------------\n";
    obj.setValueForIndex(0, 11);
    obj.display();
    cout<< "fap: " <<obj.valueForIndex(3)<<endl;
    cout<<"\n--------------------------------------------------\n";
    system("pause");
    return 0;
}
