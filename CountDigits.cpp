int countDigits(int n){
	// Write your code here.	
	int number = n;
	int count = 0;
	while(n) {
		int digit = n%10;
		if(digit && number%digit==0) 
			count++;
		n = n/10; 
	}
	return count;
}
