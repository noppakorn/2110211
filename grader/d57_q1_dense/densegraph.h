#ifndef __DENSE_GRAPH_H__
#define __DENSE_GRAPH_H__

// Your code here
#include <set>
#include <vector>
using namespace std;
class DenseGraph{
public:
    DenseGraph() {
        // Your code here
        DenseGraph(3);
    }

    DenseGraph(int n_in) {
        // Your code here
        n = n_in;
        t = false;
    }

    DenseGraph(const DenseGraph& G) {
        // Your code here
        n = G.n;
        t = G.t;
        s = G.s;
    }

    void AddEdge(int a, int b) {
        // Your code here
        if (!t) s.insert({a,b});
        else s.insert({b,a});
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        if (!t) s.erase({a,b});
        else s.erase({b,a});
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        if (!t) return s.find({a,b}) != s.end();
        else return s.find({b,a}) != s.end();
    }

    DenseGraph Transpose() const {
        // Your code here
        DenseGraph d(*this);
        d.t = !d.t;
        return d;
    }

protected:
    int n;
    bool t;
    set<pair<int,int>> s;
};
#endif // __DENSE_GRAPH_H__
