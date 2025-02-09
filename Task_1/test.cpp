#include <iostream>
#include<vector>
std::vector<float> a;
std::vector<float> b;
std::vector<float> c;
std::vector<float> d;
std::vector<float> p;
std::vector<float> q;
std::vector<float> x;
int main(){
	int n;
	std::cin>>n;
	for (int i=0;i<n-1;++i){
		    a.push_back(i+1);
		        c.push_back(i+n+n);
			    d.push_back(3*(n+i));
			        }

	for (int i=0;i<n;++i){
		    b.push_back(i+n);
		        }
	std::cout<<"Start testing"<<std::endl;
	std::cout<<"a=[ ";
	for (int i=0;i<n-1;++i)
		    std::cout<<a[i]<<' ';
	std::cout<<']'<<std::endl;

	std::cout<<"b=[ ";
	for (int i=0;i<n;++i)
		    std::cout<<b[i]<<' ';
	std::cout<<']'<<std::endl;

	std::cout<<"c=[ ";
	for (int i=0;i<n-1;++i)
		    std::cout<<c[i]<<' ';
	std::cout<<']'<<std::endl;

	d.push_back(3*n-2);

	std::cout<<"d=[ ";
	for (int i=0;i<n;++i)
		    std::cout<<d[i]<<' ';
	std::cout<<']'<<std::endl;

	p.push_back(-c[0]/b[0]);
	q.push_back(d[0]/b[0]);
	for (int i=1;i<n-1;++i){
		    p.push_back(-c[i]/(a[i-1]*p[i-1]+b[i]));
		        q.push_back((d[i]-a[i-1]*q[i-1])/(a[i-1]*p[i-1]+b[i]));
	}
	for (int i=0;i<n;++i){
		    x.push_back(0);
	}
	x[n-1]=(d[n-1]-a[n-2]*q[n-2])/(a[n-2]*p[n-2]+b[n-1]);
	for (int i=n-2;i>=0;--i){
		    x[i]=p[i]*x[i+1]+q[i];
	}
	int g=0;
	for (int i=0;i<n;++i){
		    std::cout<<"x["<<i<<"]="<<(x[i])<<std::endl;
		        if(int(x[i]+0.1)==1)
				        g++;
	}
	if (g==n)
		    std::cout<<"Test successed";
	else
		    std::cout<<"Test failed";
}
