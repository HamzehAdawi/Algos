import java.util.*;

public class Dijkstra {

	static ArrayList<Integer> dijkstra(ArrayList<ArrayList<int[]>> adj, int src) {

	    int V = adj.size();
	    int[] dist = new int[V];
	    boolean[] visited = new boolean[V];
	
	    Arrays.fill(dist, Integer.MAX_VALUE);
	    dist[src] = 0;
	
	    for (int i = 0; i < V; i++) {
	
	        int u = -1;
	        int minDist = Integer.MAX_VALUE;
	
	        for (int j = 0; j < V; j++) {
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
		
	}
}
