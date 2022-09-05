// 백준 알고리즘 	10950번 java 예전에 푼거라 자바로 풀었음.

import java.util.Scanner;

public class Main {
	public static void main(String args[]) {
		int T, A, B;
		Scanner scanner = new Scanner(System.in);
		T = scanner.nextInt();
		int[] sum = new int[T];
		for (int i = 0; i < T; i++) {
			A = scanner.nextInt();
			B = scanner.nextInt();
			sum[i] = A + B;
		}
		for (int i = 0; i < T; i++) {
			System.out.println(sum[i]);
		}

	}
}