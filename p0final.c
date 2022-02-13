gcc -g p4final.c
 ./a.out
enter the length of the array:
4
enter all values of the array:
1
2 
3
4
4
 gdb a.out
GNU gdb (Ubuntu 8.1.1-0ubuntu1) 8.1.1
Copyright (C) 2018 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.  Type "show copying"
and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
<http://www.gnu.org/software/gdb/documentation/>.
For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from a.out...done.
(gdb) b main
Breakpoint 1 at 0x8f8: file p4final.c, line 46.
(gdb) r
Starting program: /home/runner/IA2-Test1-Session2/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p4final.c:46
46  {
(gdb) n
47    int length = input_array_size();
(gdb) s
input_array_size () at p4final.c:4
4   {
(gdb) n
6     printf("enter the length of the array:\n");
(gdb) n
enter the length of the array:
7     scanf("%d", &length);
(gdb) n
4
8     return length;
(gdb) n
9   }
(gdb) n
main () at p4final.c:48
48    int data[length];
(gdb) s
49    input_array(length, data);
(gdb) n
enter all values of the array:
1
2
3
4
50    int res = sum_composite_numbers(length, data);
(gdb) s
sum_composite_numbers (n=4, a=0x7ffffd6584e0) at p4final.c:31
31    int sum = 0;
(gdb) n
32    for (int i = 0; i < n; i++)
(gdb) n
34        if(is_composite(a[i]))
(gdb) n
32    for (int i = 0; i < n; i++)
(gdb) n
34        if(is_composite(a[i]))
(gdb) n
32    for (int i = 0; i < n; i++)
(gdb) n
34        if(is_composite(a[i]))
(gdb) p a[i]
$1 = 3
(gdb) p i++
$2 = 2
(gdb) p sum
$3 = 0
(gdb) n
36          sum += a[i];
(gdb) n
32    for (int i = 0; i < n; i++)
(gdb) n
39    return sum;
(gdb) n
40  }
(gdb) n
main () at p4final.c:51
51    output(res);
(gdb) s
output (sum=4) at p4final.c:43
43    printf("%d\n", sum);
(gdb) n
4
44  }
(gdb) n
main () at p4final.c:52
52    return 0;
(gdb) n
53  }(gdb) 
