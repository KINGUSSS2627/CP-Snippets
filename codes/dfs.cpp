//dfs
//weird ass dfs

map<int,int> dfs(int cur,int par,vi&a){
    // stuff
    for(auto child:adj[cur]){
        if(child==par)continue;
        // stuff
        dfs(child,cur,a);
        // or return smthing and use it
        auto smthing = dfs(child,cur,a);
        // stuff
    }
    // stuff and then return smthing or not, meh
    return cur_prime;
}
