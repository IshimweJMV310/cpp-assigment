#include <iostream>
using namespace std;
int main() {
	string gills,forests,convex,ring;
	cout<<"answer to the following questions by yes or no"<<endl;
	cout<<"Does your mushroom have gills?"<<endl;
	cin>>gills;
	cout<<"Does your mushroom grow in forests?"<<endl;
	cin>>forests;
	cout<<"Does your mushroom have a convex?"<<endl;
	cin>>convex;
	if(gills=="no" && forests=="yes" && convex=="no"){
		cout<<"The mushroom is a cepe de bordeau";
	} 
	else if(gills=="yes" && forests=="yes" && convex=="yes"){
		cout<<"Does your mushroom have a ring"<<endl;
		cin>>ring;
		if(ring=="no"){
			cout<<"The mushroom is a pied blueu"<<endl;
		}
	    else if(ring=="yes"){
	    	cout<<"The mushroom is an amanite tue-mouche"<<endl;
		}
	else{
		cout<<"The entered information is incorrect"<<endl;
	}		
	}
	else if(gills=="yes" && forests=="no" && convex=="yes"){
		cout<<"The mushroom is an agaric jaunissant"<<endl;
	}
	else if(gills=="yes" && forests=="no" && convex=="no"){
		cout<<"The mushroom is a corpin chevelu"<<endl;
	}
	else if(gills=="yes" && forests=="yes" && convex=="no"){
		cout<<"The mushroom is agirolle"<<endl;
	}
	else{
		cout<<"The information entered does not match any mushroom";
	}
	return 0;
}
