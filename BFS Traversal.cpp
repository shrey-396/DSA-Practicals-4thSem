#include <iostream>
#include <queue>
#include <vector>
using namespace std;

const int MAXN = 100; // maximum number of nodes
vector<int> adj[MAXN]; // adjacency list of graph
bool vis[MAXN]; // visited array to keep track of which nodes have been visited

void bfs(int startNode) {
    queue<int> q;
    q.push(startNode);
    vis[startNode] = true;
    while (!q.empty()) {
        int currNode = q.front();
        q.pop();
        cout << currNode << " ";
        for (int i = 0; i < adj[currNode].size(); i++) {
            int nextNode = adj[currNode][i];
            if (!vis[nextNode]) {
                q.push(nextNode);
                vis[nextNode] = true;
            }
        }
    }
}

int main() {
    // initialize graph
    adj[0].push_back(2);
    adj[0].push_back(3);
    adj[1].push_back(3);
    adj[2].push_back(1);
    adj[2].push_back(4);
    adj[3].push_back(4);

    // run bfs from node 2
    bfs(2);

    return 0;
}
