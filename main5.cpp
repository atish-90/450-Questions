#include<bits/stdc++.h>
using namespace std;
const int MAX = 1e4 + 5;
int nodes,edges;
pair <long long, pair<int, int> > p[MAX];


long long kruskal(pair<long long, pair<int, int> > p[])
{
    int x,y;
    long long cost, minimumCost = 0;
    set<int> s;
    for(int i = 0;i < edges;++i)
    {

    x=p[i].second.first;
    y=p[i].second.second;
    if(s.count(x)==0 || s.count(y)==0)
    {
     minimumCost+=p[i].first;
     s.insert(x);
     s.insert(y);
    }
    }
    for(int i = 0;i < edges;++i)
  }
int main(){
  return 0;
}
