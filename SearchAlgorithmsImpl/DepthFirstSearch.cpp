#include <iostream>
#include <vector> 

using namespace std;

class DepthFirstSearch {
	
	public:
		void dps(vector<vector<int>> vecz, bool visitedNodes[], int start, int target) {
		
			visitedNodes[start] = true;
			cout << "Visited node: " << start << endl;

			for (size_t i = 0; i <vecz[start].size() ; i++) {

				if (!visitedNodes[vecz[start][i]]) {
					dps(vecz, visitedNodes,vecz[start][i] , target);
				}					
			}
			
		} 
						
};

int main() {

	vector<vector<int>> vecz(7);

	vecz[0].push_back(1);
	vecz[0].push_back(2);
	vecz[1].push_back(3);
	vecz[1].push_back(4);
	vecz[2].push_back(5);
	vecz[2].push_back(6);
			
	bool visitedNodes[7];		
	int start = 0;
	int target = 4;
	
	DepthFirstSearch deptheFirstSearch;

	deptheFirstSearch.dps(vecz, visitedNodes, start, target);
}
