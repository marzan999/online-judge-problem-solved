 #include<stdio.h>
 #include<math.h>


int  main()
{
    int a, b, c, ab, bc, max;
    scanf("%d%d%d", &a, &b, &c);

    ab = (a + b + abs(a - b)) / 2;
    bc = (b + c + abs(b - c)) / 2;

      if (ab>bc)
        {
           max=ab;
        }
      else
        {
           max=bc;
        }

    printf("%d eh o maior\n", max);
}
