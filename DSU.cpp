class DisjointSet{
public:
vector<int> rank, parent, size, maxi , mini;
DisjointSet(int n){
rank.resize(n+1,0);
parent.resize(n + 1, 0);
 size.resize(n + 1, 0);
maxi.resize(n+1 , 0) ;
mini.resize(n+1 , 0);
for(int i = 0 ; i <= n ; i++){
 parent[i] = i;
 size[i] = 1;
 maxi[i] = i ; mini[i] = i ;
}
};
int find(int node){
 if(parent[node] == node)return node;
else return parent[node] = find(parent[node]);
 };
 void unionbyrank(int x, int y){
 int ult_parent_x = find(x);
 int ult_parent_y = find(y);
 if(ult_parent_x == ult_parent_y)return;
 if(rank[ult_parent_x] > rank[ult_parent_y]){
 parent[ult_parent_y] = ult_parent_x;
 }else if(rank[ult_parent_x] < rank[ult_parent_y]){
parent[ult_parent_x] = ult_parent_y;
}else{
parent[ult_parent_x] = ult_parent_y;
rank[ult_parent_y] += 1;
}
 }
void unionbysize(int x, int y){
 int ult_parent_x = find(x);
 int ult_parent_y = find(y);
if(ult_parent_x == ult_parent_y)return;
if(size[ult_parent_x] > size[ult_parent_y]){
parent[ult_parent_y] = ult_parent_x;
 size[ult_parent_x] += size[ult_parent_y];
 int ma = max(maxi[ult_parent_y] , maxi[ult_parent_x]);
 maxi[ult_parent_x] = ma ;
 maxi[ult_parent_y] = ma ;
 int mi = min(mini[ult_parent_y] , mini[ult_parent_x]);
 mini[ult_parent_x] = mi ;
 mini[ult_parent_y] = mi ;
 }else{
 parent[ult_parent_x] = ult_parent_y;
 size[ult_parent_y] += size[ult_parent_x];
  int ma = max(maxi[ult_parent_y] , maxi[ult_parent_x]);
 maxi[ult_parent_x] = ma ;
 maxi[ult_parent_y] = ma ;
 int mi = min(mini[ult_parent_y] , mini[ult_parent_x]);
 mini[ult_parent_x] = mi ;
 mini[ult_parent_y] = mi ;
}
}};
