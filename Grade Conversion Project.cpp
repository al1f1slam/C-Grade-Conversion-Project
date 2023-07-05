 #include<iostream>
 #include<conio.h>
        using namespace std;
               int marks[4],i;
                float sum=0,avg;

             int gradeGenerator(int avg)
             {
         if(avg >= 90 && avg <=100)
            {
                cout<<" Your Grade is: A+ "<<endl;
                cout<<" Your Cumulative Grade Points Average is: 4"<<endl;
            }
            else if(avg >= 85 && avg <90)
            {
                cout<<" Your Grade is: A "<<endl;
                cout<<" Your Cumulative Grade Points Average is: 3.75"<<endl;
            }
            else if(avg >= 80 && avg <85)
            {
                cout<<" Your Grade is: B+ "<<endl;
                cout<<" Your Cumulative Grade Points Average is: 3.5"<<endl;
            }
            else if(avg >= 75 && avg <80)
            {
                cout<<" Your Grade is: B "<<endl;
                cout<<" Your Cumulative Grade Points Average is: 3.25"<<endl;
            }
            else if(avg >= 70 && avg <75)
            {
                cout<<" Your Grade is: C+ "<<endl;
                cout<<" Your Cumulative Grade Points Average is: 3"<<endl;
            }
            else if(avg >= 65 && avg <70)
            {
                cout<<" Your Grade is: C "<<endl;
                cout<<" Your Cumulative Grade Points Average is: 2.75"<<endl;
            }
            else if(avg >= 60 && avg <65)
            {
                cout<<" Your Grade is: D+ "<<endl;
                cout<<" Your Cumulative Grade Points Average is: 2.50"<<endl;
            }
            else if(avg >= 50 && avg <60)
            {
                cout<<" Your Grade is: D "<<endl;
                cout<<" Your Cumulative Grade Points Average is: 2.25"<<endl;
            }
            else if(avg >= 0 && avg <50)
            {
                cout<<" Your Grade is: F "<<endl;
                cout<<" Your Cumulative Grade Points Average is: 0.00"<<endl;
            }
            else
            {
                cout<<" Wrong Input!"<<endl;
            }
         }



         int main()
         {

                cout<<"/This is a program for Grade Conversion/"<<endl;
                cout<<"------------------------------------"<<endl;
                cout<<"*Enter Marks of Student "<<endl;
                cout<<"------------------------------------"<<endl;
                cout<<" Programming : ";
                cin>>marks[0];
                cout<<" English : ";
                cin>>marks[1];
                cout<<" Maths : ";
                cin>>marks[2];
                cout<<" Physics : ";
                cin>>marks[3];

                for(i=0;i<4;i++)
                {
                        sum=sum+marks[i];
                }

                 cout<<"*Do you want individual or total"<<endl;
                 cout<<"*Press 1 for total"<<endl;
                 cout<<"*Press 2 for individual"<<endl;
                 cout<<"------------------------------------"<<endl;
                 int n, desiredSubject ;
                 cin >> n ;
                 if (n==1)
                    {
                     cout<<"------------------------------------"<<endl;
                cout<<" Total Marks of Student (Out of 400) = "<<sum<<endl;
                avg=sum/4;
                cout<<" Average = "<<avg<<endl;
                gradeGenerator(avg);
                }
                else if (n==2)
                 {
                     cout<< "*Press 0 for programming"<<endl;
                     cout<<"*Press 1 for English"<<endl;
                     cout<<"*Press 2 for Maths"<<endl;
                     cout<<"*Press 3 for physics"<<endl;
                     cout<<"------------------------------------"<<endl;
                     cin>> desiredSubject;
                     avg = marks[desiredSubject];
                      gradeGenerator(avg);
                 }
                 else
                 {
                     cout<<"/Invalid Input/"<<endl;
                         cout<<"/Please Check Your Input/"<<endl;
                 }

                 getch();
                 return 0 ;
        }
