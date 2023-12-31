# 0x02. C - Functions, nested loops

<h3> 0-putchar.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/0-putchar.c">&rarr;</a>

**<p>Write a program that prints <code>_putchar</code>, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x02$  gcc -Wall -pedantic -Werror -Wextra _putchar.c 0-putchar.c -o 0-putchar
julien@ubuntu:~/0x02$ ./0-putchar.c
Holberton
julien@ubuntu:~/0x02$ 
</code></pre>

<h3>1-alphabet.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/1-alphabet.c">&rarr;</a>

**<p>Function that prints the alphabet, in lowercase, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x02$ cat 1-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 1-main.c 1-alphabet.c -o 1-alphabet
julien@ubuntu:~/0x02$ ./1-alphabet 
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$
</code></pre>

<h3>2-print_alphabet_x10.c</h3>h3
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/2-print_alphabet_x10.c">&rarr;</a>

**<p>Function that prints 10 times the alphabet, in lowercase, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x02$ cat 2-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 2-main.c 2-print_alphabet_x10.c -o 2-alphabet_x10
julien@ubuntu:~/0x02$ ./2-alphabet_x10 
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
abcdefghijklmnopqrstuvwxyz
julien@ubuntu:~/0x02$ 
</code></pre>

<h3>3-islower.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/3-islower.c">&rarr;</a>

**<p>Function that checks for lowercase character. </p><p>FYI The standard library provides a similar function <code>islower</code>. Run <code>man islower</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x02$ cat 3-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _islower('H');
    _putchar(r + '0');
    r = _islower('o');
    _putchar(r + '0');
    r = _islower(108);
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 3-main.c 3-islower.c -o 3-islower
julien@ubuntu:~/0x02$ ./3-islower 
011
julien@ubuntu:~/0x02$ 
</code></pre>

<h3>4-isalpha.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/4-isalpha.c">&rarr;</a>

**<p>Function that checks for alphabetic character. </p><p>FYI The standard library provides a similar function <code>isalpha</code>. Run <code>man isalpha</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x02$ cat 4-main.c 
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _isalpha('H');
    _putchar(r + '0');
    r = _isalpha('o');
    _putchar(r + '0');
    r = _isalpha(108);
    _putchar(r + '0');
    r = _isalpha(';');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 4-main.c 4-isalpha.c -o 4-isalpha
julien@ubuntu:~/0x02$ ./4-isalpha 
1110
julien@ubuntu:~/0x02$ 
</code></pre>

<h3>5-sign.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/5-sign.c">&rarr;</a>

**<p>Function that prints the sign of a number.</p>**

<pre><code>julien@ubuntu:~/0x02$ cat 5-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = print_sign(98);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(0xff);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    r = print_sign(-1);
    _putchar(',');
    _putchar(' ');
    _putchar(r + '0');
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 5-main.c 5-sign.c -o 5-sign
julien@ubuntu:~/0x02$ ./5-sign 
+, 1
0, 0
+, 1
-, /
julien@ubuntu:~/0x02$ 
</code></pre>

<h3>6-abs.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/6-abs.c">&rarr;</a>

**<p>Function that computes the absolute value of an integer.</p><p>FYI The standard library provides a similar function <code>abs</code>. Run <code>man abs</code> to learn more.</p>**

<pre><code>julien@ubuntu:~/0x02$ cat 6-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    r = _abs(-1);
    printf("%d\n", r);
    r = _abs(0);
    printf("%d\n", r);
    r = _abs(1);
    printf("%d\n", r);
    r = _abs(-98);
    printf("%d\n", r);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 6-main.c 6-abs.c -o 6-abs
julien@ubuntu:~/0x02$ ./6-abs 
1
0
1
98
julien@ubuntu:~/0x02$ 
</code></pre>

<h3> 7-print_last_digit.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/7-print_last_digit.c">&rarr;</a>

**<p>Function that prints the last digit of a number.</p>**

<pre><code>julien@ubuntu:~/0x02$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 7-main.c 7-print_last_digit.c -o 7-last_digit
julien@ubuntu:~/0x02$ ./7-last_digit 
8044
julien@ubuntu:~/0x02$ 
</code></pre>

<h3>8-24_hours.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/8-24_hours.c">&rarr;</a>

**<p>Function that prints every minute of the day of Jack Bauer, starting from 0000 to 2359.</p>**

<pre><code>julien@ubuntu:~/0x02$ cat 8-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    jack_bauer();
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 8-main.c 8-24_hours.c -o 8-24
julien@ubuntu:~/0x02$ ./8-24 | head
00:00
00:01
00:02
00:03
00:04
00:05
00:06
00:07
00:08
00:09
julien@ubuntu:~/0x02$ ./8-24 | tail
23:50
23:51
23:52
23:53
23:54
23:55
23:56
23:57
23:58
23:59
julien@ubuntu:~/0x02$ ./8-24 | wc -l
1440
julien@ubuntu:~/0x02$ 
</code></pre>

<h3>9-times_table.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/9-times_table.c">&rarr;</a>

**<p>Function that prints the 9 times table, starting with 0.</p>**

<pre><code>julien@ubuntu:~/0x02$ cat 9-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    times_table();
    return (0);
}
julien@ubuntu:~/c/curriculum_by_julien/holbertonschool-low_level_programming/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 9-main.c 9-times_table.c -o 9-times_table
ulien@ubuntu:~/0x02$ ./9-times_table | cat -e
0,  0,  0,  0,  0,  0,  0,  0,  0,  0$
0,  1,  2,  3,  4,  5,  6,  7,  8,  9$
0,  2,  4,  6,  8, 10, 12, 14, 16, 18$
0,  3,  6,  9, 12, 15, 18, 21, 24, 27$
0,  4,  8, 12, 16, 20, 24, 28, 32, 36$
0,  5, 10, 15, 20, 25, 30, 35, 40, 45$
0,  6, 12, 18, 24, 30, 36, 42, 48, 54$
0,  7, 14, 21, 28, 35, 42, 49, 56, 63$
0,  8, 16, 24, 32, 40, 48, 56, 64, 72$
0,  9, 18, 27, 36, 45, 54, 63, 72, 81$
julien@ubuntu:~/0x02$ ./9-times_table | tr ' ' . | cat -e
0,..0,..0,..0,..0,..0,..0,..0,..0,..0$
0,..1,..2,..3,..4,..5,..6,..7,..8,..9$
0,..2,..4,..6,..8,.10,.12,.14,.16,.18$
0,..3,..6,..9,.12,.15,.18,.21,.24,.27$
0,..4,..8,.12,.16,.20,.24,.28,.32,.36$
0,..5,.10,.15,.20,.25,.30,.35,.40,.45$
0,..6,.12,.18,.24,.30,.36,.42,.48,.54$
0,..7,.14,.21,.28,.35,.42,.49,.56,.63$
0,..8,.16,.24,.32,.40,.48,.56,.64,.72$
0,..9,.18,.27,.36,.45,.54,.63,.72,.81$
julien@ubuntu:~/0x02$ 
</code></pre>

<h3>10-add.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/10-add.c">&rarr;</a>

**<p>Function that adds two integers and returns the result.</p>**

<pre><code>julien@ubuntu:~/$ cat 10-main.c
#include "main.h"
#include &lt;stdio.h&gt;

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 10-main.c 10-add.c -o 10-add
julien@ubuntu:~/0x02$ ./10-add 
98
julien@ubuntu:~/0x02$ 
</code></pre>

<h3> 11-print_to_98.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/11-print_to_98.c">&rarr;</a>

**<p>Function that prints all natural numbers from <code>n</code> to <code>98</code>, followed by a new line.</p>**

<pre><code>julien@ubuntu:~/0x02$ cat 11-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_to_98(0);
    print_to_98(98);
    print_to_98(111);
    print_to_98(81);
    print_to_98(-10);
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 11-main.c 11-print_to_98.c -o 11-98
julien@ubuntu:~/0x02$ ./11-98 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
98
111, 110, 109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98
81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
-10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98
julien@ubuntu:~/0x02$ 
</code></pre>

<h3>100-times_table.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/100-times_table.c">&rarr;</a>

**<p>Function that prints the <code>n</code> times table, starting with 0.</p>**

<pre><code>julien@ubuntu:~/0x02$ cat 100-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_times_table(3);
    _putchar('\n');
    print_times_table(5);
    _putchar('\n');
    print_times_table(98);
    _putchar('\n');
    print_times_table(12);  
    return (0);
}
julien@ubuntu:~/0x02$ gcc -Wall -pedantic -Werror -Wextra _putchar.c 100-main.c 100-times_table.c -o 100-times_table
julien@ubuntu:~/0x02$ ./100-times_table 
0,   0,   0,   0
0,   1,   2,   3
0,   2,   4,   6
0,   3,   6,   9

0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5
0,   2,   4,   6,   8,  10
0,   3,   6,   9,  12,  15
0,   4,   8,  12,  16,  20
0,   5,  10,  15,  20,  25


0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0,   0
0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12
0,   2,   4,   6,   8,  10,  12,  14,  16,  18,  20,  22,  24
0,   3,   6,   9,  12,  15,  18,  21,  24,  27,  30,  33,  36
0,   4,   8,  12,  16,  20,  24,  28,  32,  36,  40,  44,  48
0,   5,  10,  15,  20,  25,  30,  35,  40,  45,  50,  55,  60
0,   6,  12,  18,  24,  30,  36,  42,  48,  54,  60,  66,  72
0,   7,  14,  21,  28,  35,  42,  49,  56,  63,  70,  77,  84
0,   8,  16,  24,  32,  40,  48,  56,  64,  72,  80,  88,  96
0,   9,  18,  27,  36,  45,  54,  63,  72,  81,  90,  99, 108
0,  10,  20,  30,  40,  50,  60,  70,  80,  90, 100, 110, 120
0,  11,  22,  33,  44,  55,  66,  77,  88,  99, 110, 121, 132
0,  12,  24,  36,  48,  60,  72,  84,  96, 108, 120, 132, 144
julien@ubuntu:~/0x02$ ./100-times_table | tr ' ' . | cat -e
0,...0,...0,...0$
0,...1,...2,...3$
0,...2,...4,...6$
0,...3,...6,...9$
$
0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5$
0,...2,...4,...6,...8,..10$
0,...3,...6,...9,..12,..15$
0,...4,...8,..12,..16,..20$
0,...5,..10,..15,..20,..25$
$
$
0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0,...0$
0,...1,...2,...3,...4,...5,...6,...7,...8,...9,..10,..11,..12$
0,...2,...4,...6,...8,..10,..12,..14,..16,..18,..20,..22,..24$
0,...3,...6,...9,..12,..15,..18,..21,..24,..27,..30,..33,..36$
0,...4,...8,..12,..16,..20,..24,..28,..32,..36,..40,..44,..48$
0,...5,..10,..15,..20,..25,..30,..35,..40,..45,..50,..55,..60$
0,...6,..12,..18,..24,..30,..36,..42,..48,..54,..60,..66,..72$
0,...7,..14,..21,..28,..35,..42,..49,..56,..63,..70,..77,..84$
0,...8,..16,..24,..32,..40,..48,..56,..64,..72,..80,..88,..96$
0,...9,..18,..27,..36,..45,..54,..63,..72,..81,..90,..99,.108$
0,..10,..20,..30,..40,..50,..60,..70,..80,..90,.100,.110,.120$
0,..11,..22,..33,..44,..55,..66,..77,..88,..99,.110,.121,.132$
0,..12,..24,..36,..48,..60,..72,..84,..96,.108,.120,.132,.144$
julien@ubuntu:~/0x02$ 
</code></pre>

<h3> 101-natural.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/101-natural.c">&rarr;</a>

**<p>If we list all the natural numbers below <code>10</code> that are multiples of <code>3</code> or <code>5</code>, we get <code>3</code>, <code>5</code>, <code>6</code> and <code>9</code>. The sum of these multiples is <code>23</code>. program that computes and prints the sum of all the multiples of <code>3</code> or <code>5</code> below <code>1024</code> (excluded), followed by a new line.</p>**

<ul>
    <li>You are allowed to use the standard library</li>
</ul>

<h3> 102-fibonacci.c </h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/102-fibonacci.c">&rarr;</a>

**<p>Program that prints the first 50 Fibonacci numbers, starting with <code>1</code> and <code>2</code>, followed by a new line.</p>**

<ul>
    <li>The numbers must be separated by comma, followed by a space <code>,</code> </li>
    <li>You are allowed to use the standard library</li>
</ul>

<h3>103-fibonacci.c</h3>
<a href="https://github.com/hopemumbi/alx-low_level_programming/blob/main/0x02-functions_nested_loops/103-fibonacci.c">&rarr;</a>

**<p>Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with <code>1</code> and <code>2</code>, the first 10 terms will be <code>1, 2, 3, 5, 8, 13, 21, 34, 55, 89</code>. By considering the terms in the Fibonacci sequence whose values do not exceed 4,000,000, write a program that finds and prints the sum of the even-valued terms, followed by a new line.</p>**

<ul>
    <li>You are allowed to use the standard library</li>
</ul>
