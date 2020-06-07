//https://repl.it/@JoshuaBuckles/NotoriousRBJ

//  NotoriousRBJ
//  Pseudo Code
//  By Rigo Salazar, Brian Garcia, Joshua Buckles
//  CIS-7 Discreet Structures

Set up recursive function with base case for function to create shortestPath to find the shortest path from  Source, to destination, by way of stops.
Create  Base cases 
   if Stops is 0 and Source is Destination shortest path is 0 
   if Stops is 1 and graph[Source][Destination] does not equal 0 return graph[Source][Destination]; 
   if Stops are less than 0 then shortest path is 0

Create recursive function to go all the adjacents and print shortestPath 
  
Create graph using mutlidimisional array 

Graph[Node][Node]     //[0] [1] [2] [3]
Riverside = [0]         {0, 24, 33, 16
Perris = [1]            {24, 0, 30, 18}
Hemet = [2]             {33, 30, 0, 26}
Moreno Valley = [3]     {16, 18, 26, 0}

Create variable accessable to  recursive funtion and passed to shortestPath
Source , Destination, Stops, chosenSource,chosenDestination;

Print source menu
    cout<<"\t\t 1.Riverside"<<endl;
    cout<<"\t\t 2.Perris"<<endl;
    cout<<"\t\t 3.Hemet"<<endl;
    cout<<"\t\t 4.Moreno Valley"<<endl;
 
cin>>source
Validate input


Print Destination Menu
    cout<<"\n Please select your destination"<<endl;
    cout<<"\t\t 1.Riverside"<<endl;
    cout<<"\t\t 2.Perris"<<endl;
    cout<<"\t\t 3.Hemet"<<endl;
    cout<<"\t\t 4.Moreno Valley"<<endl;
    
cin>>chosenDestination;
Validate input

Print prompt to get stops
    cin>>Stops;
      validate input

 Print shortestPath

Print out adjacency matrix

Print receipt of trip
  create switch case to print the correct information.
