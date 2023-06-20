//topo-bfs
//toposort using bfs (kahn's algo)

queue<int> q;
vector<int> in(n+1, 0), topo, visG(n+1, 0);
for(int i=1; i<=n; i++) for(auto child: adj[i]) in[child]++;
for(int i=1; i<=n; i++) if(in[i]==0) q.push(i); 
while(!q.empty()){
    int curr = q.front(); q.pop();
    topo.push_back(curr);
    for(auto i: g[curr]){
        if(!visG[i]) continue;
        in[i]--;
        if(in[i]==0) q.push(i);
    }
}
if(topo.size()==n) for(auto i: topo) cout<<i<<" ";
else cout<<"cycle in und graph";
