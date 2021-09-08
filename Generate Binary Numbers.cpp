vector<string> generate(int N)
{
	// method 1 
	// run a loop from 1 to N and for each print its binary representation.
	// t.c of method 1 is Nlog(N) and s.c = O(1)
	
	//method 2 - Interesting approach
	
	queue<string>q;
	q.push("1");
	
	vector<string>v;
	
	while(N--)
	{
	    string t=q.front();
	    q.pop();
	    v.push_back(t);
	    string t1=t;
	    q.push(t.append("0"));
	    q.push(t1.append("1"));
	}
	return v;
	
	//t.c=O(N)
	//s.c=O(1)
}
