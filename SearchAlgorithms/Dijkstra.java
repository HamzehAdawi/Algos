import java.util.*;

public class Dijkstra {

	static ArrayList<Integer> dijkstra(ArrayList<ArrayList<int[]>> adj, int src) {

	    int nodezSize = adj.size();
	    int[] dist = new int[nodezSize];
	    boolean[] visited = new boolean[nodezSize];
	
	    Arrays.fill(dist, Integer.MAX_VALUE);
	    dist[src] = 0;
	
	    for (int i = 0; i < nodezSize; i++) {
			
	        int u = -1;
	        int minDist = Integer.MAX_VALUE;
	
	        for (int j = 0; j < nodezSize; j++) {
	            if (!visited[j] && dist[j] < minDist) {
	                minDist = dist[j];
	                u = j;
	            }
	        }
	
	        if (u == -1) break;
	        visited[u] = true;
	
	        
	        for (int[] edge : adj.get(u)) {
	            int v = edge[0];
	            int w = edge[1];
	
	            if (!visited[v] && dist[u] + w < dist[v]) {
	                dist[v] = dist[u] + w;
	            }
	        }
	    }
	
	    ArrayList<Integer> result = new ArrayList<>();
	    for (int d : dist)
	        result.add(d);
	
	    return result;
	}
	
	
	public static void main(String[] args) {
		int nodezSize = 5; 

        ArrayList<ArrayList<int[]>> adj = new ArrayList<>();
        for (int i = 0; i < nodezSize; i++) {
            adj.add(new ArrayList<>());
        }

        adj.get(0).add(new int[]{1, 2});
        adj.get(0).add(new int[]{2, 4});
        adj.get(1).add(new int[]{2, 1});
        adj.get(1).add(new int[]{3, 7});
        adj.get(2).add(new int[]{4, 3});
        adj.get(3).add(new int[]{4, 1});

        int source = 0;

        ArrayList<Integer> shortestDistances = dijkstra(adj, source);

        System.out.println("Shortest distances from source " + source + ":");
        for (int i = 0; i < shortestDistances.size(); i++) {
            System.out.println("To node " + i + " → " + shortestDistances.get(i));
        }
	}
}
