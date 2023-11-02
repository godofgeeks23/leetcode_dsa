bool checkArmstrong(int n){
	//Write your code here
	int length = to_string(n).length();
	int number = n;
	int sum = 0;
	while(n) {
		int digit = n%10;
		sum += pow(digit, length);
		n = n/10;
	}
	if(sum==number)
		return true;
	return false;
}
