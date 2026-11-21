#include<iostream>
#include<string>
#include<vector>
using namespace std;
struct Task{
    int id;
    string title;
    string description;
    bool completed;
};

int main(){
    vector<Task> tasks;
    
    int choice;
    do{
    cout<<"\n=============================="<<endl;
    cout<<"           TASKFLOW           "<<endl;
    cout<<"=============================="<<endl;

    cout<<"1. Add New Task\n";
    cout<<"2. View All Tasks\n";
    cout<<"3. Mark Task as Completed\n";
    cout<<"4. Delete Task\n";
    cout<<"5. Exit"<<endl;

    cout<<"Choose an option: ";
    cin>>choice;

    switch(choice) {
        case 1: {
            Task newTask;

            cout<<"\nEnter task ID: ";
            cin >> newTask.id;
            
            cin.ignore();

            cout<<"Enter Task Title: ";
            getline(cin,newTask.title);

            cout<<"\nEnter Task Description: ";
            getline(cin,newTask.description);
            newTask.completed = false;
            tasks.push_back(newTask);

            cout <<"\nTask added successfully!";
            break;
        }
        case 2:
        for (int i = 0; i < tasks.size(); i++) {
        cout << "\nTask ID: " << tasks[i].id << endl;
        cout << "Title: " << tasks[i].title << endl;
        cout << "Description: " << tasks[i].description << endl;
        cout << "Completed: " << boolalpha << tasks[i].completed << endl;
        }
        break;
        case 3: {
            int searchID;

            cout<<"Enter task ID: ";
            cin >> searchID;
             bool found = false;
            for(int i = 0; i< tasks.size(); i++){
                if(tasks[i].id == searchID){
                    tasks[i].completed =true;
                    found =true;
                    cout<<"Task marked as completed!";
                    break;
                } 
            }
            
            if(found == false){
                    cout<<"Task not found: ";
                }
                break;
            }
            
        case 4: {
            int deleteID;

            cout<<"Enter task ID to delete: ";
            cin >> deleteID;
            bool found = false;
            for (int i =0; i< tasks.size(); i++){
                if(tasks[i].id == deleteID){
                    tasks.erase(tasks.begin() + i);
                    found = true;
                    cout<<"Task deleted successfully";
                    break;
                }
            }
            if( found  == false) {
                cout<<"Task not found!";
            }
            break;
        }
        case 5:
            cout<<"Exited.";
            break;
        default:
            cout <<"Invalid choice";
            break;
    }
}while(choice !=5);
    return 0;
}
