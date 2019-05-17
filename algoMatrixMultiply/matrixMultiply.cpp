#include <iostream>

using namespace std;

int main()
{
    int m,n,p,q,a[30][30],b[30][30],c[30][30],flag = 0;
    
    //input
    
      cin>>m>>n;
      cin>>p>>q;
      for( int i = 0;i<m;i++) {
	    	for(int j = 0;j<n;j++) {
	    	    cin>>a[i][j];
	    	}
      }
      for( int i = 0;i<p;i++) {
	    	for(int j = 0;j<q;j++) {
	    	    cin>>b[i][j];
	    	}
      }
      
      //multiplication
      
      if(n == p) {
          flag = 1;
		for( int i = 0;i<m;i++) {
	    	for(int j = 0;j<q;j++) {
	    		c[i][j] = 0;
	    		for(int k = 0;k < n;k++) {
	    			c[i][j] += a[i][k] * b[k][j];
	    		}
	    	}
		}
      }
	  else{
		    flag = 0;
	  }
		
		//output
		
		if(flag){
		   for( int i = 0;i<m;i++) {
	    	 for(int j = 0;j<q;j++) {
	    	     cout<<c[i][j]<<" ";
	    	 }
	    	 cout<<"\n";
		   }
		}
		else{
		       cout<<"Matrices cannot be multiplied";
		}
		    
		

    return 0;
}

