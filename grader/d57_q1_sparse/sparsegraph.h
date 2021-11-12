#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <set>
#include <algorithm>

using namespace std;

class SparseGraph{
public:
    SparseGraph() {
        // Your code here
        SparseGraph(3);
    }

    SparseGraph(int n_in) {
        // Your code here
        n_in = v;
    }

    SparseGraph(const SparseGraph& G) {
        // Your code here
        v = G.v;
        s = G.s;
        transpose = G.transpose;
    }

    void AddEdge(int a, int b) {
        // Your code here
        if (!transpose) s.insert({a,b});
        else s.insert({b,a});
    }

    void RemoveEdge(int a, int b) {
        // Your code here
        if (!transpose) s.erase({a,b});
        else s.erase({b,a});
    }

    bool DoesEdgeExist(int a, int b) const {
        // Your code here
        if (!transpose) return s.find({a,b}) != s.end();
        else return s.find({b,a}) != s.end();
    }

    SparseGraph Transpose() const {
        // Your code here
        SparseGraph sg(*this);
        sg.transpose = !sg.transpose;
        return sg;
    }

protected:
    // Your code here
    int v;
    bool transpose = false;
    set<pair<int,int>> s;
};
#endif // __SPARSE_GRAPH_H__
