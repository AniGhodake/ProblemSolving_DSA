import java.io.*;
import java.lang.*;
import java.util.*;
class Solution {
int V, E;

Edge edge[];
class Edge {
int src, dest;
};
Solution(int v, int e){
V = v;
E = e;
edge = new Edge[E];
for (int i = 0; i < e; ++i)
edge[i] = new Edge();
}
int nd(int parent[], int i){
if (parent[i] == i)
return i;
return nd(parent, parent[i]);
}
void Union(int parent[], int x, int y){
parent[x] = y;
}
int isCycle(Solution graph){
int parent[] = new int[graph.V];
for (int i = 0; i < graph.V; ++i)
parent[i] = i;
for (int i = 0; i < graph.E; ++i) {
int x = graph.nd(parent, graph.edge[i].src);
int y = graph.nd(parent, graph.edge[i].dest);
if (x == y)
return 1;
graph.Union(parent, x, y);
}
return 0;

}
public static void main(String[] args){
int V = 3, E = 3;
Solution graph = new Solution(V, E);
graph.edge[0].src = 0;
graph.edge[0].dest = 1;
graph.edge[1].src = 1;
graph.edge[1].dest = 2;
graph.edge[2].src = 0;
graph.edge[2].dest = 2;
if (graph.isCycle(graph) == 1)
System.out.println("Graph contains cycle");
else
System.out.println(
"Graph doesn't contain cycle");
}
}
