#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
typedef map<string,int> mapType;
mapType populationMap;
populationMap.insert(pair<string, int>("Tokyo", 37435191));
populationMap.insert(pair<string, int>("Delhi", 29399141));
populationMap.insert(pair<string, int>("Shanghai", 26317104));
populationMap.insert(pair<string, int>("Sao Paulo", 21846507));
populationMap.insert(pair<string, int>("Mexico City", 21671908));
populationMap.insert(pair<string, int>("Cairo", 20484965));
populationMap.insert(pair<string, int>("Dhaka", 20283552));
populationMap.insert(pair<string, int>("Mumbai", 20185064));
populationMap.insert(pair<string, int>("Beijing", 20035455));
populationMap.insert(pair<string, int>("Osaka", 19222665));
mapType::iterator iter;
cout<<"Cities population\n";
cout<<"\n Size of population"<<populationMap.size()<<"\n";
string state_name;
cout<<"\n Enter name of the City: ";
cin>>state_name;
iter = populationMap.find(state_name);
if( iter!= populationMap.end() )
 cout<<state_name<<"'s population is: "
 <<iter->second ;
else
cout<<"City not found"<<"\n";
populationMap.clear();
}

