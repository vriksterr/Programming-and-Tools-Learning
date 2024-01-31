import java.util.Scanner;

public class AverageCalculator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the number of elements: ");
        int n = scanner.nextInt();

        // Create an array to store the numbers
        double[] numbers = new double[n];

        // Read the numbers from the user
        for (int i = 0; i < n; i++) {
            System.out.print("Enter number " + (i + 1) + ": ");
            numbers[i] = scanner.nextDouble();
        }

        // Calculate the average
        double sum = 0;
        for (double num : numbers) {
            sum += num;
        }
        double average = sum / n;

        // Display the result
        System.out.println("The average is: " + average);

        // Close the scanner
        scanner.close();
    }
}
