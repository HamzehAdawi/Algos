import java.util.*;

public class DepthFirstSearch {

	DepthFirstSearch() {}

	public void search(List<List<Integer>> graph, boolean[] visited, int node) {
		visited[node] = true;
		System.out.println(node);

		for (int neighbor: graph.get(node)) {
			if (!visited[neighbor]) {
				search(graph, visited, neighbor);
			}
		}
	}
	
	public static void main(String[] args) {

		DepthFirstSearch depthFirstSearch = new DepthFirstSearch();
		
		int n = 5;
		List<List<Integer>> graph = new ArrayList<>();
		
		for (int i = 0; i < n; i++) {
			graph.add(new ArrayList<>());
		}

		graph.get(0).add(1);
        graph.get(0).add(2);
        graph.get(1).add(3);
        graph.get(1).add(4);

        boolean[] visited = new boolean[n];
        depthFirstSearch.search(graph, visited, 0);
		
	}
}
