
//IN this program we are making many programs in different classes and call them according to user's choice
import java.util.Scanner;

public class manyprog {
    public static void main(String[] args) {
        demo aa = new demo();
        int choice;
        do {
            System.out.println(
                    "1. Sum of digits \t 2. Product of digits\n3. Reverse of number \t 4. Pallindrom Number\n5. Factorial of number \t 6. Fabonacci Series upto n terms\n7. Prime Number \t 8. Armstrong Number\n9. X to the power y \t 10.Table of a number\n11. Exit");
            System.out.println("Enter your choice :");
            Scanner sc = new Scanner(System.in);
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    aa.getdata();
                    aa.sumofdigits();
                    break;
                case 2:
                    aa.getdata();
                    aa.prodofdigits();
                    break;
                case 3:
                    aa.getdata();
                    aa.reverse();
                    break;
                case 4:
                    aa.getdata();
                    aa.pallindrom();
                    break;
                case 5:
                    aa.getdata();
                    aa.factorial();
                    break;
                case 6:
                    aa.getdata();
                    aa.fabonnaci();
                    break;
                case 7:
                    aa.getdata();
                    aa.prime();
                    break;
                case 8:
                    aa.getdata();
                    aa.armstrong();
                    ;
                    break;
                case 9:
                    aa.xtopowy();
                    break;
                case 10:
                    aa.getdata();
                    aa.table();
                    break;
                case 11:
                    System.out.println("Thanks!!");
                    break;
                default:
                    System.out.println("Invalid choice");
                    break;
            }

        } while (choice != 11);

    }
}

class demo {
    int i;

    void getdata() {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number : ");
        i = sc.nextInt();
    }

    void sumofdigits() {
        int sum = 0;
        while (i > 0) {
            sum = sum + (i % 10);
            i = i / 10;
        }
        System.out.println("Sum of digits = " + sum);
    }

    void prodofdigits() {
        int prod = 1;
        while (i > 1) {
            prod = prod * (i % 10);
            i = i / 10;
        }
        System.out.println("Product of digits = " + prod);
    }

    void reverse() {
        int rev = 0;
        while (i > 0) {
            rev = rev * 10 + i % 10;
            i = i / 10;
        }
        System.out.println("Reverse of a number = " + rev);
    }

    void pallindrom() {
        int temp, rev = 0;
        temp = i;
        while (i > 0) {
            rev = rev * 10 + i % 10;
            i = i / 10;
        }
        if (temp == rev) {
            System.out.println("Pallindrom Number");
        } else
            System.out.println("Not a Pallindrom Number");
    }

    void factorial() {
        int n = i;
        int fact = 1;
        while (i > 0) {
            fact = fact * i;
            i--;
        }
        System.out.println("Factorial of " + n + " is : " + fact);
    }

    void fabonnaci() {
        int n1 = 0, n2 = 1, n3;
        System.out.print("Fabonacci Series upto " + i + " no. of terms\n" + n1 + " " + n2);
        for (int n = 2; n < i; n++) {
            n3 = n1 + n2;
            System.out.print(" " + n3);
            n1 = n2;
            n2 = n3;
        }
        System.out.println("");
    }

    void prime() {
        int n = 1, count = 0;
        while (n <= i) {
            if (i % n == 0)
                count++;
            n++;
        }
        if (count == 2) {
            System.out.println("Prime Number");
        } else {
            System.out.println("Not a Prime Number");
        }
    }

    void armstrong() {
        int temp = i, sum = 0;
        while (i > 0) {
            sum = sum + (i % 10) * (i % 10) * (i % 10);
            i = i / 10;
        }
        if (temp == sum)
            System.out.println("Armstrong Number");
        else
            System.out.println("Not a Armstrong Number");
    }

    void xtopowy() {
        int x, y;
        int prod = 1;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter base : ");
        x = sc.nextInt();
        System.out.println("Enter power : ");
        y = sc.nextInt();
        while (y > 0) {
            prod = prod * x;
            y--;
        }
        System.out.println("Value = " + prod);
    }

    void table() {
        int n = 1;
        while (n <= 10) {
            System.out.println(i + " x " + n + " = " + (n * i));
            n++;
        }
    }
}
