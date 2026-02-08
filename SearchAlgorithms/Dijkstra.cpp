#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Dijkstra {

	public:
		vector<int> dij(vector<vector<vector<int>>> nodeList, int source, int nodeSize) {

			vector<int> finalDist;
			bool seen[nodeSize] = {false};
			int distances[nodeSize]; 

			// fill the array with distances of infinity bc they are unknown atm, exception is source
			fill(distances, distances + nodeSize, INT_MAX);
			distances[source] = 0;

			for (int i = 0; i < nodeSize; i++) {

				int u = -1; 
				int minDistance = INT_MAX;

				for (int j = 0; j < nodeSize; j++) {

					if (!seen[j] && distances[j] < minDistance) {
						minDistance = distances[j];
						u = j;
					}
				}


				if (u == -1) {break;}
				seen[u] = true;

				//Main algo here
				for (size_t i = 0; i < nodeList[u].size(); i++) {
					int node = nodeList[u][i][0];
					int dist = nodeList[u][i][1];

					if (!seen[node] && distances[u] + dist < distances[node]) {
						distances[node] = distances[u] + dist;
					}
				}											
			}

			for (int x = 0; x < nodeSize; x++) {
				finalDist.push_back(distances[x]);
			}


			return finalDist;
			
		}
};

int main() {

	int nodeSize = 5;
	int source = 0; 
	
	vector<vector<vector<int>>> nodeList(nodeSize);
	
    nodeList[0].push_back({1, 2});
    nodeList[0].push_back({2, 4});
    nodeList[1].push_back({2, 1});
    nodeList[1].push_back({3, 7});
    nodeList[2].push_back({4, 3});
    nodeList[3].push_back({4, 1});


  	Dijkstra dijkstra;

  	vector<int> vec =  dijkstra.dij(nodeList, source, nodeSize);  
	
	for (size_t i = 0; i < vec.size(); i++) {
		cout << vec[i] << endl;
	}	
}
