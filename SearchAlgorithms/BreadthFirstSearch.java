import java.util.*;

public class BreadthFirstSearch {

	BreadthFirstSearch() {}

	//Use queue
	public void search(List<List<Integer>> node, ) {

	}
	
	public static void main(String[] args) {

		List<List<Integer>> nodes = new ArrayList<>();
		
		for(int i = 0; i < 6; i++) {
			nodes.add(new ArrayList<Integer>());
		}
		
		nodes.get(0).add(1);
		nodes.get(1).add(2);
		nodes.get(1).add(3);
		nodes.get(2).add(4);
		nodes.get(2).add(5);

		
		int n = 6;
		boolean[] visited = new boolean[n];

		BreadthFirstSearch breadFirstSearch = new BreadthFirstSearch();
		breadFirstSearch.search(nodes, visited, 1);
														
	}
}
