#include "domain/graph.hpp"

int main()
{
    /*int n;
    std::cin >> n;*/

    Graph::Graph g(5);

    g.AddEdge(Graph::Edge(1, 3, 0));
    g.AddEdge(Graph::Edge(2, 0, 5));
    g.AddEdge(Graph::Edge(2, 4, 2));

    g.RemoveEdge(Graph::Edge(2, 0, 5));

    g.Print();
    std::cout << g.GetNrVertices() << " " << g.GetNrEdges() << '\n';

return 0;
}