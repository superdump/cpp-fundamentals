// ISC License
//
// Copyright (c) 2017, Robert Swain <robert.swain@gmail.com>
//
// Permission to use, copy, modify, and/or distribute this software for any
// purpose with or without fee is hereby granted, provided that the above
// copyright notice and this permission notice appear in all copies.
//
// THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES WITH
// REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY
// AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT,
// INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM
// LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE
// OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
// PERFORMANCE OF THIS SOFTWARE.


#ifndef __GRAPH_HPP_INCLUDE__
#define __GRAPH_HPP_INCLUDE__

#include "node.hpp"

#include "tree.hpp"

#include <memory>
#include <vector>

using namespace std;

class WeightedGraph {
    vector<unique_ptr<WeightedNode> > nodes;
public:
    WeightedGraph():nodes(0) {}
    friend ostream& operator<<(ostream& out, const WeightedGraph& g);
    void generate(int n, double density, int maxWeight = 100);
    bool isConnected();
    shared_ptr<TreeNode> MSTPrim();
};

#endif // __GRAPH_HPP_INCLUDE__
