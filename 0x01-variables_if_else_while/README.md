# 0x01. C - Variables, if, else, while

### 0-positive_or_negative.c

**<p>This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print whether the number stored in the variable <code>n</code> is positive or negative.</p>**
<ul>
	<li>You can find the source code <a href="https://github.com/alx-tools/0x01.c/blob/master/0-positive_or_negative_c">here</a></li>
	<li>The variable <code>n</code> will store a different value every time you will run this program</li>
	<li>The output of the program should be:</li>
	<ul><li>The number, followed by</li>
	<ul>
		<li>if the number is greater than 0: is positive</li>
		<li>if the number is 0: is zero</li>
		<li>if the number is less than 0: is negative</li>
	</ul>
		<li>followed by a new line</li>
</ul>
</ul>

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 0-positive_or_negative.c -o 0-positive_or_negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-520693284 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-973398895 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-199220452 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
561319348 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
266853958 is positive
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
-48147767 is negative
julien@ubuntu:~/0x01$ ./0-positive_or_negative 
0 is zero
julien@ubuntu:~/0x01$ 
</code></pre>

### 1-last_digit.c

**<p>This program will assign a random number to the variable <code>n</code> each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable <code>n</code>.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 1-last_digit.c -o 1-last_digit
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 629438752 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -748255693 is -3 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -1052791662 is -2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -284805734 is -4 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 491506926 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 954249937 is 7 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 652334952 is 2 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of -729688197 is -7 and is less than 6 and not 0
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 45528266 is 6 and is greater than 5
julien@ubuntu:~/0x01$ ./1-last_digit 
Last digit of 809065140 is 0 and is 0
julien@ubuntu:~/0x01$
</code></pre>

### 2-print_alphabet.c

**<p>Program that prints the alphabet in lowercase, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 2-print_alphabet.c -o 2-print_alphabet
julien@ubuntu:~/0x01$ ./2-print_alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x01$
</code></pre>

### 3-print_alphabets.c

**<p>Program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 3-print_alphabets.c -o 3-print_alphabets
julien@ubuntu:~/0x01$ ./3-print_alphabets | cat -e
abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ$
julien@ubuntu:~/0x01$ 
</code></pre>

### 4-print_alphabt.c

**<p>Program that prints the alphabet in lowercase, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 4-print_alphabt.c -o 4-print_alphabt
julien@ubuntu:~/0x01$ ./4-print_alphabt 
abcdfghijklmnoprstuvwxyz
julien@ubuntu:~/0x01$ ./4-print_alphabt | grep [eq]
julien@ubuntu:~/0x01$ 
</code></pre>

### 5-print_numbers.c

**<p>Program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 5-print_numbers.c -o 5-print_numbers
julien@ubuntu:~/0x01$ ./5-print_numbers 
0123456789
julien@ubuntu:~/0x01$ 
</code></pre>

### 6-print_numberz.c

**<p>Program that prints all single digit numbers of base 10 starting from <code>0</code>, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 6-print_numberz.c -o 6-print_numberz
julien@ubuntu:~/0x01$ ./6-print_numberz 
0123456789
julien@ubuntu:~/0x01$ 
</code></pre>

### 7-print_tebahpla.c

**<p>Program that prints the lowercase alphabet in reverse, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 7-print_tebahpla.c -o 7-print_tebahpla
julien@ubuntu:~/0x01$ ./7-print_tebahpla
zyxwvutsrqponmlkjihgfedcba
julien@ubuntu:~/0x01$
</code></pre>

### 8-print_base16.c

**<p>Program that prints all the numbers of base 16 in lowercase, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 8-print_base16.c -o 8-print_base16
julien@ubuntu:~/0x01$ ./8-print_base16
0123456789abcdef
julien@ubuntu:~/0x01$
</code></pre>

### 9-print_comb.c

**<p>Program that prints all possible combinations of single-digit numbers.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 9-print_comb.c -o 9-print_comb
julien@ubuntu:~/0x01$ ./9-print_comb | cat -e
0, 1, 2, 3, 4, 5, 6, 7, 8, 9$
julien@ubuntu:~/0x01$ 
</code></pre>

### 100-print_comb3.c

**<p>Program that prints all possible different combinations of two digits.</p>**

<pre><code>julien@ubuntu:~/0x01$ gcc -Wall -pedantic -Werror -Wextra 100-print_comb3.c -o 100-print_comb3
julien@ubuntu:~/0x01$ ./100-print_comb3
01, 02, 03, 04, 05, 06, 07, 08, 09, 12, 13, 14, 15, 16, 17, 18, 19, 23, 24, 25, 26, 27, 28, 29, 34, 35, 36, 37, 38, 39, 45, 46, 47, 48, 49, 56, 57, 58, 59, 67, 68, 69, 78, 79, 89
julien@ubuntu:~/0x01$ 
</code></pre>

### 102-print_comb5.c

**<p>Program that prints all possible combinations of two two-digit numbers.</p>**

<pre><code>julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x01$ gcc -Wall -pedantic -Werror -Wextra 102-print_comb5.c -o 102-print_comb5
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x01$ ./102-print_comb5
00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07, 00 08, 00 09, 00 10, 00 11, [...] 40 91, 40 92, 40 93, 40 94, 40 95, 40 96, 40 97, 40 98, 40 99, 41 42, 41 43, 41 44, 41 45, 41 46, 41 47, 41 48, 41 49, 41 50, 41 51, 41 52, 41 53 [...] 93 95, 93 96, 93 97, 93 98, 93 99, 94 95, 94 96, 94 97, 94 98, 94 99, 95 96, 95 97, 95 98, 95 99, 96 97, 96 98, 96 99, 97 98, 97 99, 98 99
</code></pre>
