#include <map>
#include <vector>
#include <stdexcept>

class Graph {
	protected:
	map<int,vector<int>> m;
	
	
	public :
		Graph(const vector &starts, const vector &ends);
		
		int numOutgoing(const int nodeID) const;
		
		const vector<int> &adjacent(const int nodeID) const;
}
