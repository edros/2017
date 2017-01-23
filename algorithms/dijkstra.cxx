#include <iostream>
#include <vector>
#include <set>
using namespace std;

std::vector<int> Distance;

// dummy comment for checkin std::vector<double> DD;

void dijkstra(std::vector<std::vector<std::pair<int, int> > >& G, int v)
{
	Distance.resize(G.size());
	Distance.assign(Distance.size(),1000);
	Distance[v] = 0;
	std::set<std::pair<int,int> > S;
	S.insert(std::make_pair(v,0));
	while(!S.empty())
	{
		int vert = S.begin()->second;
		S.erase(S.begin());
		for(int i = 0; i<G[vert].size(); ++i)
		{
			int to = G[vert][i].second;
			int dist = G[vert][i].first;
			if(Distance[to] > Distance[vert] + dist)
			{
				S.erase(std::make_pair(Distance[to], to));
				Distance[to] = Distance[vert] + dist;
				S.insert(std::make_pair(Distance[to], to));
			}
		}
	}
}

int main()
{

}
