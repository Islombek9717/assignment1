    #include<stdlib.h>
    #include<stdio.h>
    #include<conio.h>



    int add(int a, int b)
    {
        return a + b;
    }

    void Problem_1()
    {
        int n;
        int sum = 0;

        scanf("%d", &n);

        for (int i = 0; i <= n; i++)
            sum = add(sum, i);

        printf("%d\n", sum);
    }

    int sum(int n)
            {
                return n*(n+1)/2;
            }
    void Problem_2()

            {
                int n,m;
                scanf("%d %d",&n,&m);
                printf("%d\n",sum(m)-sum(n-1));
                return 0;
            }
    int cum(int x)
    {
        return x*(x+1)/2;
    }

    void Problem_3()
    {
        int a,m,s=0;
        scanf("%d",&a);
        for(m=1;m<=a;m++)

            s+=cum(m);

        printf("%d\n",s);
        return 0;

    }
    int n;
    int print_row1 ()
        {
          for (int i = 0; i < n; i++)
            printf ("%d", n);

          printf ("\n");
        }

     int print_row2 ()
        {
          printf ("%d", n);

          for (int i = 0; i < n - 2; i++)
            printf (" ");

          printf ("%d\n", n);
        }
    void Problem_4()
    {


         scanf("%d",&n);
          print_row1();

         for(int i=0;i<n-2;i++)
         print_row2();

         print_row1();
    }
    int print_star(int n)
    {
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
                printf("*");

            printf("\n");
        }
    }
    void Problem_5()
    {
        int n;
        while(1)
        {
            scanf("%d", &n);

            if(n>0)
                print_star(n);
            else
                break;
        }
        return 0;
    }
    int func(int x)
    {
        return (2*x*x - 5*x + 1);
    }
    void Problem_6()
    {
        int x;
        scanf("%d", &x);
        printf("%d\n", func(x));
        return 0;
    }
    int func1(int x,int a,int b,int c)
    {
        return a*x*x+b*x+c;
    }

    void Problem_7()
    {
        int x,a,b,c,f;
        scanf("%d %d %d %d",&x,&a,&b,&c);
        f=func1(x,a,b,c);
        printf("%d\n",f);
        return 0;
    }

    int func2(int x,int a,int b,int c)
    {
        return a*x*x+b*x+c;
    }

    void Problem_8()
    {
        int x,a,b,c,f,a1,b1,c1,s;
        scanf("%d",&x);
        scanf("%d %d %d",&a,&b,&c);
        scanf("%d %d %d",&a1,&b1,&c1);
        s=func2(x,a,b,c);
        f=func2(s,a1,b1,c1);
        printf("%d\n",f);
        return 0;
    }
    int max1,max2;
    void update(int n)
    {
        max2 = n > max2 ? n :max2;
        max2 = n > max1 ? max1:max2;
        max1 = n> max1 ? n: max1;

    }
    void Problem_9()
    {
        int n;
        scanf("%d",&n);
        max1=max2=n;
        while(1)
            {
                scanf("%d",&n);
                if(n)
                    update(n);
                else break;
            }
        printf("%d %d\n",max1,max2);
        return 0;
    }



    int main()
    {
        int p_num;  // to read the problem number each time;

        while (1)
        {
            scanf(" %d", &p_num);

            if (p_num > 0)	// if the number scanned is greater than 0, switch it
                            // else, just break the infinite loop
                switch (p_num)
                {
                case 1:
                    Problem_1();
                    break;
                case 2:
                    Problem_2();
                    break;
                case 3:
                    Problem_3();
                    break;
                case 4:
                    Problem_4();
                    break;
                case 5:
                    Problem_5();
                    break;
                case 6:
                    Problem_6();
                    break;
                case 7:
                    Problem_7();
                    break;
                case 8:
                    Problem_8();
                    break;
                case 9:
                    Problem_9();
                    break;
                default: break;
                }

            else
                break;
        }


        return 0;
    }
