int SELF_RECURSION(int i);

int main() {

	if(SELF_RECURSION(2) != 1){
		return 1;
	}	
	
	return 0;
}
