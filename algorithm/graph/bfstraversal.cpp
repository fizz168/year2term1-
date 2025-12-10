#include<iostream>
#include<vector>
#include<list> // it doubly linkedlist
#include<queue>
using namespace std;
//this is undirected
class Graph{
    private:
    int v; // vertex
    list<int> *l; //int *arr
 public:
 Graph(int v){
    this->v = v;
    l = new list<int> [v]; // arr = new int[v]
      
    } 
 void addEdge(int u, int v){ // undirected graph so v  to u neighbor list 
    l[u].push_back(v);
    l[v].push_back(u);  
 }  
//  void printAdjency(){
//     for(int i =0; i < v; i++){
//         cout<< i << " : ";
//         for(int neigh : l[i]){
//             cout << neigh << " ";
//         }
//     }
//     cout<<endl;
//  }  
 void printAdjency(){
    cout << "\n--- Adjacency List (Total Vertices: " << v << ") ---\n";
    for(int i = 0; i < v; i++){
        // 1. Clearly label the node
        cout << "Node " << i << " connects to: "; 
        
        // 2. Print neighbors, separated by commas or arrows
        for(int neigh : l[i]){
            cout << neigh;
            // Add a comma and space unless it's the last neighbor
            if (neigh != l[i].back()) {
                cout << ", ";
            }
        }
        // 3. End with a clean newline and separator
        cout << "\n----------------------------------------\n";
    }
    cout << "\n--- Output Complete ---\n" << endl;
 }
 void bfs(){
    queue<int> q; // the queue hold node to be visited (fifo)
    vector<bool> vis(v, false); // prevent visit old node multiple time 
    q.push(0); //check from 0
    vis[0] = true; // mark the starting node visit 

    while(q.size() > 0){ //Loop continues as long as there are nodes waiting in the queue.
        int u = q.front();// Get the node at the front of the queue.
        q.pop();// remove node from the queue

        cout<<u<< " ";// Process the node (in this case, just printing its index).
        for(int v : l[u]){// 3. Look at all the neighbors ('v') of the current node ('u').
            if(!vis[v]){// Check if the neighbor 'v' has NOT been visited yet.
                vis[v] = true;// Mark the new neighbor 'v' as visited.
                q.push(v);// Add the new neighbor 'v' to the end of the queue.
                    // This ensures we visit all current neighbors' neighbors later (Layer-by-Layer).
            }
        }
    }

 }

};
int main(){
    Graph G(4);
    G.addEdge(1,2); 
    G.addEdge(2,3); 
    G.bfs();
   
    G.printAdjency();


    return 0;
}
