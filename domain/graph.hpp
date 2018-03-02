//
// Created by corina on 01.03.2018.
//

#ifndef GRAPH_GRAPH_HPP
#define GRAPH_GRAPH_HPP

#include <iostream>
#include <vector>
#include <algorithm>

namespace Graph
{
    class Edge
    {
        public:
            Edge(int _start = 0, int _stop = 0, int _cost = 0)
            {
                start = _start;
                stop = _stop;
                cost = _cost;
            }

            void SetStart(int _start)
            {
                start = _start;
            }

            int GetStart() const
            {
                return start;
            }

            void SetStop(int _stop)
            {
                stop = _stop;
            }

            int GetStop() const
            {
                return stop;
            }

            void SetCost(int _cost)
            {
                start = _cost;
            }

            int GetCost() const
            {
                return cost;
            }

            bool operator <(const Edge _edge) const
            {
                if( cost != _edge.GetCost())
                {
                    return cost < _edge.GetCost();
                }
                else if(start != _edge.GetStart())
                {
                    return start < _edge.GetStart();
                }
                else
                    return stop < _edge.GetStop();
            }

            bool operator ==(const Edge _edge) const
            {
                return (start == _edge.GetStart() && stop == _edge.GetStop() && cost == _edge.GetCost());
            }

            void Print() const
            {
                std::cout << start << " " << stop << " " << cost << '\n';
            }

        private:
                int start, stop, cost;
    };

    class Graph
    {
        public:
            Graph(int _nr_vertices)
            {
                nr_vertices = _nr_vertices;
                edges = std::vector<Edge>(0);
                nr_edges = 0;
            }

            int GetNrVertices() const
            {
                return nr_vertices;
            }

            int GetNrEdges() const
            {
                return nr_edges;
            }

            void AddEdge(const Edge _edge)
            {
                //Adds an edge at te end of the vector and icrements the no. of edges.
                //I: Edge type const
                nr_edges ++;
                edges.push_back(_edge);
            }

            void RemoveEdge(const Edge _edge)
            {
                //Removess an edge if that can be found in the vector and decrements the no. of edges.
                //I: Edge type const
                if(std::find(edges.begin(), edges.end(), _edge) != edges.end())
                {
                    edges.erase(std::find(edges.begin(), edges.end(), _edge));
                    nr_edges --;
                }

            }

            void Print() const
            {
                //Prints all the edges.
                for(Edge e : edges)
                    e.Print();
            }

        private:
            int nr_vertices, nr_edges;
            std::vector<Edge> edges;
    };
}

#endif //GRAPH_GRAPH_HPP
