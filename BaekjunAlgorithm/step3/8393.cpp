// 백준 알고리즘 8393번 자바로 풀었음
import java.util.Scanner;

public class Main {
	public static void main(String[] args) {
		int n;
		int sum = 0;
		Scanner scanner = new Scanner(System.in);
		n = scanner.nextInt();
		for (int i = 0; i <= n; i++) {
			sum += i;
		}
		System.out.println(sum);
	}
}