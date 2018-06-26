#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
struct Point{
    int x;
    int y;
};
int orientation(Point p, Point q, Point r)
{
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);
 
    if (val == 0) return 0;  
    return (val > 0)? 1: 2;
}

bool operator<(const Point& a, const Point& b){
	if(a.x !=b.x)
		return a.x < b.x;
	else if (a.x==b.x)
		return a.y<b.y;
}

void convexHull(Point points[], int n)
{
    // There must be at least 3 points
    if(n<3){
		cout<<"-1";
        return;
    }
    
    if(n==3){
        int h=0; int flag=0;
        for(h=1;h<3;h++){
            if(points[h].x==points[0].x && points[h].y==points[0].y ){
                flag=1; break;
            }
        }
        if(flag){
            cout<<"-1";
            return;
        }
    }
    
    // Initialize Result
    set<Point> hull;
 
    // Find the leftmost point
    int l = 0;
    for (int i = 1; i < n; i++)
        if (points[i].x < points[l].x)
            l = i;

    int p = l, q;
    do{
        // Add current point to result
        hull.insert(points[p]);

        q = (p+1)%n;
        // If i is more counterclockwise than current q, then update q
        for (int i = 0; i < n; i++)
           if (orientation(points[p], points[i], points[q]) == 2)
               q = i;
        
        p = q;
    } while (p != l); 
	 
	vector<Point> hull2;
	set<Point> :: iterator it;
    for(it=hull.begin();it!=hull.end();it++)
        hull2.push_back(*it);
        
	sort(hull2.begin(),hull2.end());
    // Print Result
    for (int i = 0; i < hull2.size(); i++){
        cout << hull2[i].x <<" "<< hull2[i].y;
        if(i!=hull2.size()-1)
          cout<<", ";
    }
}
int main() {
	int t,i,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    Point points[n];
	    for(i=0;i<n;i++)
	        cin>>points[i].x>>points[i].y;
	    
	    convexHull(points, n);
	    cout<<"\n";
	}
	return 0;
}
