#include<iostream>

using namespace std;
main()
{
    cout<<"\n\t\tC A R  P A R K I N G  M A N A G E M E N T  S Y S T E M"<<endl<<endl;

    int enter;
    
    int car=0, bike=0, rikshaw=0;

    while (true)
    {

        cout<<"\n        ---------------------     New Data    ---------------------"<<endl;
        cout<<"\n\t\t\t\tPress 1 to enter Car"<<endl;

        cout<<"\t\t\t\tPress 2 to enter Bike"<<endl;

        cout<<"\t\t\t\tPress 3 to enter Rikshaw"<<endl;
        cout<<"\n        ---------------------     View Data    ---------------------"<<endl;


        cout<<"\n\t\t\t\tPress 4 to show the record"<<endl;
        cout<<"\n        ---------------------     Delete Data    ---------------------"<<endl;


        cout<<"\n\t\t\t\tPress 5 to delete the record"<<endl;

        cout<<"\n        ---------------------     Exit Operation    ---------------------"<<endl;
        

        cout<<"\n\t\t\t\tPress 6 to exit"<<endl;


        cin>>enter;

        if (enter==1)
        {

            car++;
            cout<<"Car is added"<<endl;
            /* code */
        }

        else if(enter==2)
        {
            bike++;
            cout<<"Bike is added"<<endl;
        }
        else if(enter==3)
        {
            rikshaw++;
            cout<<"Rikshaw is added"<<endl;
        }

        else if(enter==4)
        {
            cout<<"Total Cars Parked: "<<car<<endl;

            cout<<"Total Bikes Parked: "<<bike<<endl;

            cout<<"Total Rikshaws Parked: "<<rikshaw<<endl;
        }
        else if(enter==5)
        {
            car=0;

            bike=0;

            rikshaw=0;

            cout<<"\nYour All Record is Deleted"<<endl<<endl;
        }
        else if(enter==6)
        {
            exit(0);
        }
        
    
    }
    
}