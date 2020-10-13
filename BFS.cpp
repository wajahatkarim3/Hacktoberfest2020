#include<bits/stdc++.h>
using namespace std;
class Graph 
{ 
	int V;  
	list<int> *adj; 
	 
public: 
	Graph(int V);
	void addEdge(int v, int w); 
	void BFS(int v); 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w); 
} 
void Graph::BFS(int v)
{
	bool*visited =new bool[v];
	for(int i=0; i<v; i++)
	visited[i]=false;
	list<int>q;
	q.push_back(v);
	visited[v]=true;
	while(!q.empty())
	{
		v=q.front();
		cout<<v<<" ";
		q.pop_front();
		list<int>::iterator i;
		for(i=adj[v].begin(); i!=adj[v].end(); ++i)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				q.push_back(*i);
			}
		}
		
	}
	
}
int main() 
{ 
	
	Graph g(4); 
	g.addEdge(0, 1); 
	g.addEdge(0, 2); 
	g.addEdge(1, 2); 
	g.addEdge(2, 0); 
	g.addEdge(2, 3); 
	g.addEdge(3, 3); 

	cout << "Following is Breadth First Traversal starting from vertex 1"<<endl; 
	g.BFS(1); 

	return 0; 
} 


