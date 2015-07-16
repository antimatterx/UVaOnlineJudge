import java.util.Scanner;

class Main {
	
	static int getNum(int n) {
		long count = 1;
		while(n != 1) {
			if((n % 2) != 0) {
				n = (3 * n) + 1;
			} else {
				n /= 2;
			}
			count++;
		}
		return (int) count;
	}
	
	static int getMax(int start, int end) {
		int maxCount = 0;
		int currCount = 0;
		int sign = (start > end) ? -1 : 1;
		end += sign;
		for(int i = start; i != end; i += sign) {
			currCount = getNum(i);
			if(currCount > maxCount) {
				maxCount = currCount;
			}
		}
		return maxCount;
	}
	
	
	public static void main(String args []) {
		Scanner sc = new Scanner(System.in);

		while(sc.hasNextInt()) {
			int i = sc.nextInt();
			int j = sc.nextInt();

			System.out.println(i + " " + j + " " + getMax(i, j));
		}
		
		sc.close();
	}
}