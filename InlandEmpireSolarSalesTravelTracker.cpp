//https://repl.it/@JoshuaBuckles/NotoriousRBJ

//  NotoriousRBJ
//  Inland Empire Solar Sales Travel Tracker
//  By Rigo Salazar, Brian Garcia, Joshua Buckles
//  CIS-7 Discreet Structures

#include <bits/stdc++.h>
#include <fstream> 
using namespace std; 
  
// Creates the number of nodes and variable to check for error in return and base case values
#define Nodes 4 
#define MAX INT_MAX 

  
// recursive function to find the shortest path from Source, Destination and Stops 
int shortestPath(int graph[][Nodes], int Source, int Destination, int Stops) 
{ 
   // Base cases 
   if (Stops == 0 && Source == Destination)             return 0; 
   if (Stops == 1 && graph[Source][Destination] != MAX) return graph[Source][Destination]; 
   if (Stops <= 0)                       return MAX; 
  
   // Initialize result 
   int res = MAX; 
   
   // Subtracts the Displacement in selection
   
   // Go to all adjacents of u and recur 
   for (int i = 0; i < Nodes; i++) 
   { 
       if (graph[Source][i] != MAX && Source != i && Destination != i) 
       { 
           int rec_res = shortestPath(graph, i, Destination, Stops-1); 
           if (rec_res != MAX) 
              res = min(res, graph[Source][i] + rec_res); 
       } 
   } 
   return res; 
} 
  
// Values of the  program to test above function 
int main() 
{ 
    /* Lets us create the graph shown in Final Project File*/
     int graph[Nodes][Nodes] = { {0, 24, 33, 16}, 
                        {24, 0, 30, 18}, 
                        {33, 30, 0, 26}, 
                        {16, 18, 26, 0} 
                      }; 
    int Source , Destination, Stops, chosenSource,chosenDestination;

    ofstream receipt; //Opens receipt, lists our City lists.

    cout<< "Please select your starting Point"<<endl;
    cout<<"By entering a number from this list:"<<endl;

    cout<<"\t\t 1.Riverside"<<endl;
    cout<<"\t\t 2.Perris"<<endl;
    cout<<"\t\t 3.Hemet"<<endl;
    cout<<"\t\t 4.Moreno Valley"<<endl;

    
    cin>> chosenSource;
    receipt.open( "Reciept.txt", ios::out | ios::app);
        receipt << "\n\n\t Notorious RBJ \nMilage Tracker Service\n\nYou have decided to travel from";
          switch (chosenSource) //switch case for our Listed Cities.
          
        {
          
          if (Source == 1) // Record the option onto the Receipt
            {
          
          case 1: 
          
          receipt << "\n\tRiverside";

          break; 

          case 2: 
          
          receipt << "\n\tPerris";

          break; 

          case 3: 
          
          receipt << "\n\tHemet";
          
          break; 

          case 4: 
          
          receipt << "\n\tMoreno Valley";

          break; 
          
            }
           
        }            
   receipt << " to";       
 Source = chosenSource -1;
  if (Source < 0 || Source > 3) // If statement test for invalid input
  {
   cout<< "Please enter a correct City Selection\n" <<endl; 
   return main(); // Returns main, Source statement
  } 
    // Declare Destination point after Source input (to & fro)
    cout<<"\n Please select your destination"<<endl;
    cout<<"\t\t 1.Riverside"<<endl;
    cout<<"\t\t 2.Perris"<<endl;
    cout<<"\t\t 3.Hemet"<<endl;
    cout<<"\t\t 4.Moreno Valley"<<endl;
    cin>>chosenDestination;

    switch (chosenDestination) //similar switch case to "Source"
        {
          
          if (Destination == 1) //Record option onto Receipt
            {
          
          case 1: 
          
          receipt << " Riverside\n";

          break; 

          case 2: 
          
          receipt << " Perris\n";

          break; 

          case 3: 
          
          receipt << " Hemet\n";
          break; 

          case 4: 
          
          receipt << " Moreno Valley\n";

          break; 
            }
        }
    
    Destination= chosenDestination-1;
    if (Destination < 0 || Destination > 3) //Test for invalidation
  {
   cout<< "Please enter a correct City Selection\n" <<endl; 
   return main();
  } 
  // Declare STOPS for the travel distance for the Day
 cout<<"\nHow many stops do you want to make along your way?\n";
 cout<< setw(3)<< "(You must make at least 1 stop)\n";
    cin>>Stops;
    
    if (Stops <= 0) //If statement to check invalidation
    {
      cout<<"You must make at least 1 stop, please enter a valid number\n"; cin>>Stops;
      if (Stops <= 0) 
      {
        cout<<"You good bro?\n"; //Checks if the user is Ok.
        return 0;
      }
    }

    cout << "\nThe shortest path for your trip is " << 
          shortestPath(graph, Source, Destination, Stops)<<" Miles to destination"; 
      // Arithmetic Calculation fron given Matrix, etc.

          cout<< "\n\nAdjacency matrix \n\n";
      // Prints Adjancency matrix
      
    receipt << "\nThe shortest path for your trip is " << 
          shortestPath(graph, Source, Destination, Stops)<<" Miles to destination"; 
    receipt << "\nwith "<<Stops<< " stops on the way.";
    // Display Calculations & Messages onto Receipt.
    
          
  for (int i = 0; i < Nodes; i++) 
{ 
   for (int j = 0; j < Nodes; j++) 
   { 
      cout << graph[i][j] << " "; 
   } 
 
   cout << endl; 
}
cout << "\nPlease print reciept for accounting and reimbursment"<< endl;
receipt <<"\n\n\nPlease print for accounting to reimburse.";

receipt.close();
//3.	Create a C++ program to provide the representation of the trips, low cost or shortest paths, including matrices, adjacencies.

}
