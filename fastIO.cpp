ll read()
{
	bool negative=false;
	ll ans=0;
	char ch=getchar();
	
	while(true)
	{
		if(ch=='-')
		{
			negative=true;
			break;
		}
		else if(ch>='0'&&ch<='9')
		{
			ans=ch-'0';
			break;
		}
		ch=getchar();
	}
	
	while(true)
	{
		ch=getchar();
	    if(ch<'0'||ch>'9')
			break;
		ans*=10+(ch-'0');
	}
	
	if(negative)
		return -ans;
	else
		return ans;
}
