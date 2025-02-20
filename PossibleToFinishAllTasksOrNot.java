import java.util.*;
public class Solution {
static class pair {
int rst, second;
pair(int rst, int second){
this.rst = rst;
this.second = second;
}
}
static ArrayList<ArrayList<Integer> >

make_graph(int numTasks, Vector<pair> prerequisites){
ArrayList<ArrayList<Integer> > graph
= new ArrayList<ArrayList<Integer> >(numTasks);
for (int i = 0; i < numTasks; i++) {
graph.add(new ArrayList<Integer>());
}
for (pair pre : prerequisites)
graph.get(pre.second).add(pre.rst);
return graph;
}
static int[] compute_indegree(
ArrayList<ArrayList<Integer> > graph)
{
int degrees[] = new int[graph.size()];
for (ArrayList<Integer> neighbors : graph)
for (int neigh : neighbors)
degrees[neigh]++;
return degrees;
}
static boolean canFinish(int numTasks,
Vector<pair> prerequisites){
ArrayList<ArrayList<Integer> > graph
= make_graph(numTasks, prerequisites);
int degrees[] = compute_indegree(graph);
for (int i = 0; i < numTasks; i++) {
int j = 0;
for (; j < numTasks; j++)
if (degrees[j] == 0)
break;
if (j == numTasks)
return false;

degrees[j] = -1;
for (int neigh : graph.get(j))
degrees[neigh]--;
}
return true;
}
public static void main(String args[]){
int numTasks = 4;
Vector<pair> prerequisites = new Vector<pair>();
prerequisites.add(new pair(1, 0));
prerequisites.add(new pair(2, 1));
prerequisites.add(new pair(3, 2));
if (canFinish(numTasks, prerequisites)) {
System.out.println(
"Possible to nish all tasks");
}
else {
System.out.println(
"Impossible to nish all tasks");
}
}
}
