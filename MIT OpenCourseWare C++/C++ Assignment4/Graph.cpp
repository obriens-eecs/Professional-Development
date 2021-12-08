#include <stdexcept>

class Graph {
	protected:
	map<int,vector<int>> m;
	
	
	public :
		Graph(const vector &starts, const vector &ends) {
			if (starts.size != ends.size)
				throw invalid_argument("Size mismatch");
			for (unsigned i = 0; i < starts.size(); i++){
				int start = starts[i]
				int end = ends[i];
				m[start].push_back(end);
				m[end];
			}
		}
		
		int numOutgoing(const int nodeID) const {
			return adjacent(nodeID).size();
		}
		
		const vector<int> &adjacent(const int nodeID) const{
			map<int, vector<int>>::const_iterator i = m.find(nodeID);
			
			if(i == m.end()) 
				throw invalid_argument("Invalid node ID");
				
			return i->second;
		}
}
