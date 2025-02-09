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
	std::cout<<"Enter the order of the matrix n"<<std::endl;
	int n;
	std::cin>>n;
	float g;
	std::cout<<"Enter vestor a"<<std::endl;
	for (int i=0;i<n-1;++i){
		    std::cin>>g;
		        a.push_back(g);
			    }
	std::cout<<"Enter vestor b"<<std::endl;
	for (int i=0;i<n;++i){
		    std::cin>>g;
		        b.push_back(g);
			    }
	std::cout<<"Enter vestor c"<<std::endl;
	for (int i=0;i<n-1;++i){
		    std::cin>>g;
		        c.push_back(g);
			    }
	std::cout<<"Enter vestor d"<<std::endl;
	for (int i=0;i<n;++i){
		    std::cin>>g;
		        d.push_back(g);
			    }
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
	for (int i=0;i<n;++i)
		    std::cout<<"x["<<i<<"]="<<x[i]<<std::endl;
}
