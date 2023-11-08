
#include<stdio.h>
#include<string.h>
#include<ctype.h>

void shopping(char str[100])
{
    int totalCost= 0;
     int i,choice,c=1,a[10],cost[10];
     for(i=0;i<9;i++)
     a[i]=0;
     
     char items[10][100]={"Sandisk 16 GB",
     "Logitech Mouse",
     "Pendrve 16 GB",
     "Adidas",
     "Nike",
     "Leecooper",
     "Mi Note 3",
     "Nokia 3",
     "Samsung",
     "Iphone 14"
     };
    
     printf("Hello %s, Welcome to our Online Shopping.\n",str);
     do{
      if(c==1){
      printf("Enter\n1 - Computer Accessories\n2 - Shoes\n3 - Mobiles\nAny other number to exit\n");
      scanf("%d",&choice);
      switch(choice)
      {
       case 1:
       {
        int accessoriesChoice;
        printf("Enter\n1 - Sandisk 16 GB - Rs.355\n2 - Logitech Mouse- Rs.500\n3 - Pendrive 16 GB - Rs.550\nAny other number to exit\n");
        scanf("%d",&accessoriesChoice);
        cost[0]=355;
        cost[1]=500;
        cost[2]=550;
        switch(accessoriesChoice)
        {
         case 1:
         {
          int num;
          printf("You chose Sandisk 16GB with Rs.355.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
          scanf("%d",&num);
          if(num==1)
          {
           a[0]++;
           totalCost+=355;
          }
          else printf("Item not added!\n");
          printf("Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 2:
         {
          int num;
          printf("You chose Logitech Mouse with Rs.500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
          scanf("%d",&num);
          if(num==1)
          {
           a[1]++;
           totalCost+=500;
          }
          else printf("Item not added!\n");
          printf("Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 3:
         {
          int num;
          printf("You chose Pendrive 16GB with Rs.550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
          scanf("%d",&num);
          if(num==1)
          {
           a[2]++;
           totalCost+=550;
          }
          else printf("Item not added!\n");
          printf("Your Cost in Cart is %d\n",totalCost);
          break;
         }
         default:{
          printf("Exit from Computer Accesories\n");
          break;
         }
        }
        break;
       }
       case 2:
       {
        int shoesChoice;
        printf("Enter\n1 - Adidas - Rs.3550\n2 - Nike - Rs.5000\n3 - Leecooper - Rs.2800\nAny other number to exit\n");
        scanf("%d",&shoesChoice);
        cost[3]=3550;
        cost[4]=5000;
        cost[5]=2800;
        switch(shoesChoice)
        {
         case 1:
         {
          int num;
          printf("You chose Adidas Shoes for Rs.3550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
          scanf("%d",&num);
          if(num==1)
          {
           a[3]++;
           totalCost+=3550;
          }
          else printf("Item not added!\n");
          printf("Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 2:
         {
          int num;
          printf("You chose Nike Shoes for Rs.5000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
          scanf("%d",&num);
          if(num==1)
          {
           a[4]++;
           totalCost+=5000;
          }
          else printf("Item not added!\n");
          printf("Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 3:
         {
          int num;
          printf("You chose Leecooper Shoes for Rs.2800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
          scanf("%d",&num);
          if(num==1)
          {
           a[5]++;
           totalCost+=2800;
          }
          else printf("Item not added!\n");
          printf("Your Cost in Cart is %d\n",totalCost);
          break;
         }
         default:{
          printf("Exit from Shoes Category\n");
          break;
         }
        }
        break;
       }
       case 3:
       {
        int mobileChoice;
        printf("Enter\n1 - Mi Note 3 - Rs.11000\n2 - Nokia 3 - Rs.9866\n3 - Samsung - Rs.12800\n4 - Iphone 14 - Rs.100000\nAny other number to exit\n");
        scanf("%d",&mobileChoice);
        cost[6]=11000;
        cost[7]=9866;
        cost[8]=12800;
        cost[9]=100000;
        switch(mobileChoice)
        {
         case 1:
         {
          int num;
          printf("You chose to buy Mi Note 3 for Rs.11000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
          scanf("%d",&num);
          if(num==1)
          {
           a[6]++;
           totalCost+=11000;
          }
          else printf("Item not added!\n");
          printf("Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 2:
         {
          int num;
          printf("You chose to buy Nokia 3 for Rs.9866.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
          scanf("%d",&num);
          if(num==1)
          {
           a[7]++;
           totalCost+=9866;
          }
          else printf("Item not added!\n");
          printf("Your Cost in Cart is %d\n",totalCost);
          break;
         }
         case 3:
         {
          int num;
          printf("You chose to buy Samsung for Rs.12800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
          scanf("%d",&num);
          if(num==1)
          {
           a[8]++;
           totalCost+=12800;
          }
          else printf("Item not added!\n");
          printf("Your Cost in Cart is %d\n",totalCost);
          break;
         }
        case 4:
        {
            int num;
            printf("You chose to buy Iphone 14 for Rs.100000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
            scanf("%d",&num);
            if(num==1)
            {
                a[9]++;
                totalCost+=100000;
            }
            else printf("Item not added!\n");
            printf("Your Cost in Cart is %d\n",totalCost);
            break;
            }
         default:{
          printf("Exit from Mobile Category\n");
          break;
         }
        }
        break;
       }
       default:
       {
        printf("Enter Valid Categories Choice\n");
        break;
       }
      }
      printf("%s's cart\n",str);
      printf("Id\tItems\t\tQuantity\tCost\n");
      for(i=0;i<10;i++)
      {
       if(a[i]!=0)
       {
        printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
       }
      }
      printf("Total Cost\t\t\t\t\t%d\n",totalCost);
      printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
      scanf("%d",&c);
     }
      if(c==2)
      {
       int id;
       printf("Enter id to delete item\n");
       scanf("%d",&id);
       if(id<10&&id>=0){
       totalCost=totalCost-(cost[id]*a[id]);
       a[id]=0;
       }
       else{
        printf("Enter Valid id\n");
       }
           printf("Revised Items \n");
           printf("Id\tItems\t\tQuantity\tCost\n");
                for(i=0;i<10;i++)
          {
         if(a[i]!=0)
          {
        printf("%d\t%s\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
          }
         }
            printf("Total Cost\t\t\t\t\t%d\n",totalCost);
            printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
         scanf("%d",&c);
      }
      if(c==3)
      {
       int id,quantity;
       printf("Enter id to Change quantity of an item\n");
       scanf("%d",&id);
       printf("Enter quantity to be changed of an item\n");
       scanf("%d",&quantity);
       if(id<10&&id>=0){
        if(quantity>0 && a[id]>0){
            if(quantity<a[id])
         {
          int dec=a[id]-quantity;
          a[id]=quantity;
           totalCost=totalCost-(cost[id]*dec);
         }
         if(quantity>a[id])
         {
          int inc=quantity-a[id];
          a[id]=quantity;
           totalCost=totalCost+(cost[id]*inc);
         }
         if(quantity==a[id])
         {
          a[id]=quantity;
           totalCost=totalCost+0;
         }
               
        }
        else{
           printf("Item has no Quantity.Please Try again\n");
        }
         }
         else{
        printf("Enter Valid id\n");
       }
           printf("Revised Items \n");
           printf("Id\tItems\t\tQuantity\tCost\n");
                for(i=0;i<9;i++)
          {
         if(a[i]!=0)
          {
        printf("%d\t%s\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
          }
         }
            printf("Total Cost\t\t\t\t\t%d\n",totalCost);
            printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
         scanf("%d",&c);
      }
     }while(c==1 || c==2 ||c==3);
     printf("Your Final Cost is %d\n",totalCost);
     printf("Thanks %s for Choosing Us and Visit us again.\n",str);
     
    }

void booking(char str[100]){
    int totalCost=0;
    int choice,c=1,a[10],cost[10];
    int i;
    for(i=0;i<10;i++)
    a[i]=0;
    char items[10][100]={"Indigo 00:00",
    "GoFirst 15:00",
    "Virgin 21:00",
    "Ant Man and the Wasp Quantumania 12:00",
    "Deadpool 3 15:00",
    "Oppenheimer 18:00",
    "50 Cent Jaipur 5/5/23",
    "Martin Garix Pune 10/3/23",
    "Paradox Delhi 29/4/23",
    "Sunburn Goa for 4 31/12/23"
    };
    printf("Welcome %s to the Ticket Booking System.\n",str);
    do{
        if(c==1){
            printf("Enter\n1 - Flight\n2 - Movies\n3 - Entertainment\nAny other number to exit\n");
            scanf("%d",&choice);
            switch(choice)
            {
             case 1:
             {
              int flightChoice,date;
                 char from[10],to[10],month[10];
                 printf("Enter departure destination:");
                 scanf("%s",from);
                 printf("Enter arrival destination:");
                 scanf("%s",to);
                 printf("Enter month of departure:");
                 scanf("%s",month);
                 printf("Enter date of departure:");
                 scanf("%d",&date);
              printf("Choice from available flights\n1 - Indigo 00:00 - Rs.3555\n2 - GoFirst 15:00- Rs.5000\n3 - Virgin 21:00 - Rs.6500\nAny other number to exit\n");
              scanf("%d",&flightChoice);
              cost[0]=3555;
              cost[1]=5050;
              cost[2]=6500;
              switch(flightChoice)
              {
               case 1:
               {
                int num;
                printf("You chose Indigo 00:00 from %s to %s on %d of %s for Rs.3555.Are you sure you want to book.If 'Yes' Enter 1 else any number\n",from,to,date,month);
                scanf("%d",&num);
                if(num==1)
                {
                 a[0]++;
                 totalCost+=3555;
                }
                else printf("Item not added!\n");
                printf("Your Cost in Cart is %d\n",totalCost);
                break;
               }
               case 2:
               {
                int num;
                printf("You chose GoFirst 15:00 from %s to %s on %d of %s for Rs.5000.Are you sure you want to book.If 'Yes' Enter 1 else any number\n",from,to,date,month);
                scanf("%d",&num);
                if(num==1)
                {
                 a[1]++;
                 totalCost+=5000;
                }
                else printf("Item not added!\n");
                printf("Your Cost in Cart is %d\n",totalCost);
                break;
               }
               case 3:
               {
                int num;
                printf("You chose Virgin 21:00 from %s to %s on %d of %s for Rs.6500.Are you sure you want to book.If 'Yes' Enter 1 else any number\n",from,to,date,month);
                scanf("%d",&num);
                if(num==1)
                {
                 a[2]++;
                 totalCost+=6500;
                }
                else printf("Item not added!\n");
                printf("Your Cost in Cart is %d\n",totalCost);
                break;
               }
               default:{
                printf("Exiting from Flight Booking\n");
                break;
               }
              }
              break;
             }
                case 2:
                {
                 int movieChoice;
                    int date;
                    printf("Enter date for booking:");
                    scanf("%d",&date);
                 printf("Enter\n1 - Ant Man and the Wasp Quantumania 12:00\n2 - Deadpool 3 15:00\n3 - Oppenheimer 18:00\nAny other number to exit\n");
                 scanf("%d",&movieChoice);
                 cost[3]=355;
                 cost[4]=500;
                 cost[5]=280;
                 switch(movieChoice)
                 {
                  case 1:
                  {
                   int num;
                   printf("You chose Ant Man and the Wasp Quantumania 12:00 for Rs.3550 on %d.Are you sure to buy.If 'Yes' Enter 1 else any number\n",date);
                   scanf("%d",&num);
                   if(num==1)
                   {
                    a[3]++;
                    totalCost+=355;
                   }
                   else printf("Item not added!\n");
                   printf("Your Cost in Cart is %d\n",totalCost);
                   break;
                  }
                  case 2:
                  {
                   int num;
                   printf("You chose Deadpool 3 15:00 for Rs.500 on %d.Are you sure to buy.If 'Yes' Enter 1 else any number\n",date);
                   scanf("%d",&num);
                   if(num==1)
                   {
                    a[4]++;
                    totalCost+=500;
                   }
                   else printf("Item not added!\n");
                   printf("Your Cost in Cart is %d\n",totalCost);
                   break;
                  }
                  case 3:
                  {
                   int num;
                   printf("You chose Oppenheimer 18:00 for Rs.280 on %d.Are you sure to buy.If 'Yes' Enter 1 else any number\n",date);
                   scanf("%d",&num);
                   if(num==1)
                   {
                    a[5]++;
                    totalCost+=280;
                   }
                   else printf("Item not added!\n");
                   printf("Your Cost in Cart is %d\n",totalCost);
                   break;
                  }
                  default:{
                   printf("Exiting from Movie Booking\n");
                   break;
                  }
                 }
                 break;
                }
                case 3:
                {
                 int entertainmentChoice;
                 printf("Enter\n1 - 50 Cent Jaipur 5/5/23 - Rs.11000\n2 - Martin Garix Pune 10/3/23 - Rs.9866\n3 - Paradox Delhi 29/4/23 - Rs.12800\n4 - Sunburn Goa for 4 31/12/23 - Rs.100000\nAny other number to exit\n");
                 scanf("%d",&entertainmentChoice);
                 cost[6]=11000;
                 cost[7]=9866;
                 cost[8]=12800;
                 cost[9]=100000;
                 switch(entertainmentChoice)
                 {
                  case 1:
                  {
                   int num;
                   printf("You chose to book ticket for 50 Cent Jaipur on 5/5/23 for Rs.11000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                   scanf("%d",&num);
                   if(num==1)
                   {
                    a[6]++;
                    totalCost+=11000;
                   }
                   else printf("Item not added!\n");
                   printf("Your Cost in Cart is %d\n",totalCost);
                   break;
                  }
                  case 2:
                  {
                   int num;
                   printf("You chose to book ticket for Martin Garix Pune on 10/3/23 for Rs.9866.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                   scanf("%d",&num);
                   if(num==1)
                   {
                    a[7]++;
                    totalCost+=9866;
                   }
                   else printf("Item not added!\n");
                   printf("Your Cost in Cart is %d\n",totalCost);
                   break;
                  }
                  case 3:
                  {
                   int num;
                   printf("You chose to book ticket for Paradox Delhi on 29/4/23 for Rs.12800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                   scanf("%d",&num);
                   if(num==1)
                   {
                    a[8]++;
                    totalCost+=12800;
                   }
                   else printf("Item not added!\n");
                   printf("Your Cost in Cart is %d\n",totalCost);
                   break;
                  }
                 case 4:
                 {
                     int num;
                     printf("You chose to book ticket for Sunburn Goa for 4 on 31/12/23 for Rs.100000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
                     scanf("%d",&num);
                     if(num==1)
                     {
                         a[9]++;
                         totalCost+=100000;
                     }
                     else printf("Item not added!\n");
                     printf("Your Cost in Cart is %d\n",totalCost);
                     break;
                     }
                  default:{
                   printf("Exiting from Entertainment Booking\n");
                   break;
                  }
                 }
                 break;
                }
                default:
                {
                 printf("Enter Valid Categories Choice\n");
                 break;
                }
               }
            printf("%s's cart\n",str);
            printf("Id\tItems\t\tQuantity\tCost\n");
            for(i=0;i<10;i++)
            {
             if(a[i]!=0)
             {
              printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
             }
            }
            printf("Total Cost\t\t\t\t\t%d\n",totalCost);
            printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
            scanf("%d",&c);
           }
            if(c==2)
            {
             int id;
             printf("Enter id to delete item\n");
             scanf("%d",&id);
             if(id<10&&id>=0){
             totalCost=totalCost-(cost[id]*a[id]);
             a[id]=0;
             }
             else{
              printf("Enter Valid id\n");
             }
                 printf("Revised Items \n");
                 printf("Id\tItems\t\tQuantity\tCost\n");
                      for(i=0;i<10;i++)
                {
               if(a[i]!=0)
                {
              printf("%d\t%s\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
                }
               }
                  printf("Total Cost\t\t\t\t\t%d\n",totalCost);
                  printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
               scanf("%d",&c);
            }
            if(c==3)
            {
             int id,quantity;
             printf("Enter id to Change quantity of an item\n");
             scanf("%d",&id);
             printf("Enter quantity to be changed of an item\n");
             scanf("%d",&quantity);
             if(id<10&&id>=0){
              if(quantity>0 && a[id]>0){
                  if(quantity<a[id])
               {
                int dec=a[id]-quantity;
                a[id]=quantity;
                 totalCost=totalCost-(cost[id]*dec);
               }
               if(quantity>a[id])
               {
                int inc=quantity-a[id];
                a[id]=quantity;
                 totalCost=totalCost+(cost[id]*inc);
               }
               if(quantity==a[id])
               {
                a[id]=quantity;
                 totalCost=totalCost+0;
               }
                     
              }
              else{
                 printf("Item has no Quantity.Please Try again\n");
              }
               }
               else{
              printf("Enter Valid id\n");
             }
                 printf("Revised Items \n");
                 printf("Id\tItems\t\tQuantity\tCost\n");
                      for(i=0;i<10;i++)
                      {
                          if(a[i]!=0)
                          {
                              printf("%d\t%s\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
                          }
                      }
                    printf("Total Cost\t\t\t\t\t%d\n",totalCost);
                    printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items\n3 to Change Quantity \nAny other number to Exit\n");
                    scanf("%d",&c);
            }
           }while(c==1 || c==2 ||c==3);
           printf("Your Final Cost is %d\n",totalCost);
           printf("Thanks %s for Choosing Us and Visit us again.\n",str);
           
          }

void bookAppointment(char str[100]){

    char person[100];
    char* hairstyleName;
    int price;
    char* facialHairName;
    int facialHairPrice;
    char* facialname;
    int facialnameprice;
    int hairstylePrice = 0;
    int Massage;
    int MassagePrice = 0;


    int day, time;
    int hairstyle, facialHair, facialtype;


    printf("Hello %s, Thank you for choosing NILE grooming services.\nWe are so delighted to be at your service!! \n",str);

    printf("Enter the day you would like to book the appointment (1-31): ");
    scanf("%d", &day);

    printf("Enter the time of the day(0-23): ");
    scanf("%d", &time);
    
    // print menu of hairstyles and prices
    printf("Select a hairstyle:\n");
    printf("1. Buzz Cut (INR 100)\n");
    printf("2. Crew Cut (INR 150)\n");
    printf("3. French Crop (INR 200)\n");
    printf("4. Quiff (INR 250)\n");
    printf("5. Pompadour (INR 300)\n");
    
    // get input for hairstyle selection
    printf("Enter the number of the selected hairstyle: ");
    scanf("%d", &hairstyle);
    
    switch (hairstyle) {
        case 1:
            hairstyleName = "Buzz Cut";
            price = 100;
            hairstylePrice+=100;
            break;
        case 2:
            hairstyleName = "Crew Cut";
            price = 150;
            hairstylePrice+=150;
            break;
        case 3:
            hairstyleName = "French Crop";
            price = 200;
            hairstylePrice+=200;
            break;
        case 4:
            hairstyleName = "Quiff";
            price = 250;
            hairstylePrice+=250;
            break;
        case 5:
            hairstyleName = "Pompadour";
            price = 300;
            hairstylePrice+=300;
            break;
        default:
            printf("Invalid hairstyle selection.\n");
            
            printf("\n");

    }
    
    // print menu of facial hairstyles and prices
    printf("Select a facial Hair style:\n");
    printf("1. Clean Shave (INR 50)\n");
    printf("2. Moustache (INR 100) \n");
    printf("3. Beard (INR 100)\n");
    printf("4. Goatee (INR 100)\n");
    printf("5. Soul Patch (INR 100)\n");
    printf("6. No Thanks \n");
    
    // get input for facial hairstyle selection
    printf("Enter the number of the selected facial hairstyle: ");
    scanf("%d", &facialHair);
    
    switch (facialHair) {
            case 1:
                facialHairName = "Clean Shave";
                facialHairPrice = 50;
                break;
            case 2:
                facialHairName = "Moustache";
                facialHairPrice = 100;
                break;
            case 3:
                facialHairName = "Beard";
                facialHairPrice = 100;
                break;
            case 4:
                facialHairName = "Goatee";
                facialHairPrice = 100;
                break;
            case 5:
                facialHairName = "Soul Patch";
                facialHairPrice = 100;
                break;
            case 6:
                printf("No Facial Hair style selected.");
                facialHairPrice=0;
                break;
            default:
                printf("Invalid facial hair selection.\n");
                printf("\n");

        }
    
    // print menu of facial type
    printf("Select the type of facial: \n");
    printf("1. Gold (INR 500)\n");
    printf("2. Silver (INR 400)\n");
    printf("3. Platinum (INR 700)\n");
    printf("4. No Thanks \n");
    
    // get input for type of facial
    printf("Enter the number of facial opted : ");
    scanf("%d", &facialtype);
    int facialPrice=0;
    switch (facialtype) {
            case 1:
                facialtype = "Gold";
                facialPrice = 500;
                break;
            
            
            case 2:
                facialtype = "Silver";
                facialPrice = 400;
                break;
            
            
            case 3:
                facialtype = "Platinum";
                facialPrice = 700;
                break;
            
            
            case 4:
                facialtype = "No Thanks";
                facialPrice = 0;
                break;
            
            
            printf("\n");

    }

    int b;
   
    printf("1. Oil Massage ( INR 160 )\n");

    printf("2. Cream Massage ( INR 180 )\n");

    printf("3. Powder Massage ( INR 200 )\n");

    printf("Select the Massage type you want :\n");
    scanf("%d",&b);

    switch (b)
    {
    case 1:
        
        MassagePrice = 160;

        break;
    
    case 2:
   
        MassagePrice = 180;

        break;

    case 3:
    
        MassagePrice = 200;

        break;
    case 4:
    printf("No Thanks\n");

    default:
    printf("Invalid option! Please try again select number from( 1 to 3 )\n");

        break;

        printf("\n");

    }
    char ch[1];
    printf("Do you want to add Appointments?  (y or n) \n");
    scanf("%ch",&ch);

    if( ch == 'y'){
        printf("alright I will add your appointments\n");
        printf("Booking appointment on day %d and time %d\n",day,time);
     printf("\n");
    }
    else if( ch == 'n'){
        printf("ok I will not add appointments\n");
    }
   

    

     

     printf("****Thanks for visiting!*****");


        // code to actually book the appointment would go here
        
        // calculate total cost of appointment
    int totalCost = (hairstylePrice + facialHairPrice  + MassagePrice + facialPrice);

        // print billing information
        printf("\nBilling Information:\n");
        printf("Haircut cost: %d INR\n", hairstylePrice);

        printf("Facial hair cost: %d INR\n", facialHairPrice);

        printf("MassagePrice cost: %d INR\n", MassagePrice);

        printf("Facial Price cost: %d INR\n",facialPrice);

        printf("Total cost: %d INR\n", totalCost);

    }
    


void weddingbook(char str[100])
{
int totalCost=0;
int i,j,choice,c=1,a[22],cost[22];
for(i=0;i<22;i++)
a[i]=0;

char city[22][100]={"Nagpur",
 "Mumbai",
"Raigad",
"Ratnagiri",
"Le Meridien",
"Hotel Siddhartha",
"Luxe Nimantran",
"Tusi Hotel",
"Mumbaimetro",
"Hotel Kohinoor Continental",
"VITS Hotel",
"Goldfinch Hotel",
"Majestic Banquets",
"Citizen Hotel"};
    int nagpurweddinghotelChoice;
    int num1;
    int num2;
    int num3;
    int num4;
    int mumbaiweddinghotelChoice;
    int raigadweddinghotel;
    int num5;
    int num6;
    int num7;
    int num8;
    int num9;
    int num10;
    int num11;
    int num12;
    int num13;
    int num14;
    int ratnagiriweddinghotel;
    int num15;
    int num16;
    int num17;
    int num18;
    
printf("Hello %s, Welcome to our Lover's Paradise App.\n",str);
  
do{
    if(c==1){
 printf("Choose the city:");
 printf("Enter\n1 - Nagpur\n2 - Mumbai\n3 - Raigad\n4 - Ratnagiri\nAny other number to exit\n");
 scanf("%d",&choice);
 switch(choice)
 {
  case 1:
         
   printf("These are the option to Choose your wedding place:\n1 -Le Meridien - Rs125000 per day \n2 - Hotel Siddhartha - Rs.95000 per day\n3 - Luxe Nimantran - Rs.98000 per day\n4 - Tuli Hotel -Rs.140000\nAny other number to exit\n");
   scanf("%d",&nagpurweddinghotelChoice);
   int num_days;
   printf("How many days you want to booked this wedding place: ");
   scanf("%d", &num_days);
   cost[0]=125000*num_days;
   cost[1]=95000*num_days;
   cost[2]=98000*num_days;
   cost[3]=140000*num_days;
   switch(nagpurweddinghotelChoice)
   {
    case 1:
    
     
     printf("You chose Le Meridien with Rs.125000 per day.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num1);
     if(num1==1)
     {
      a[0]++;
      totalCost+=125000*num_days;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;

     break;
    
    case 2:
    
     
     printf("You chose Hotel Siddhartha with Rs.95000 per day.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num2);
     if(num2==1)
     {
      a[1]++;
      totalCost+=95000*num_days;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;

     break;
    
    case 3:
    
     
     printf("You chose Luxe Nimantran with Rs.98000.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num3);
     if(num3==1)
     {
      a[2]++;
      totalCost+=98000*num_days;
     
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;

     break;
    
     case 4:
    
     
     printf("You chose Tusi Hotel with Rs.140000.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num4);
     if(num4==1)
     {
      a[3]++;
      totalCost+=140000*num_days;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;

     break;
    
    default:{
     printf("Exit from nagpurweddinghotelChoice\n");
   }
   }
   break;
  
  case 2:
  
   
   printf("These are the option to Choose your wedding place:\n1 - Mumbaimetro - Rs150000 per day\n2 - Hotel Kohinoor Continental - Rs.125000 per day\n3 - VITS Hotel - Rs.105000 per day\n4 - Goldfinch Hotel - Rs.95000\n5 - Majestic Banquets - Rs.98800 per day\n6 - Citizen Hotel - Rs.115000\nAny other number to exit\n");
   scanf("%d",&mumbaiweddinghotelChoice);
    int num_days1;
   printf("How many days you want to booked this wedding place: ");
   scanf("%d", &num_days1);
   cost[4]=150000*num_days1;
   cost[5]=125000*num_days1;
   cost[6]=105000*num_days1;
   cost[7]=95000*num_days1;
   cost[8]=98800*num_days1;
   cost[9]=115000*num_days1;
   switch(mumbaiweddinghotelChoice)
   {
    case 1:
    
     
     printf("You chose Mumbaimetro for Rs150000.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num5);
     if(num5==1)
     {
      a[4]++;
      totalCost+=150000*num_days1;
     
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;

     break;
    
    case 2:
    
     
     printf("You chose Hotel Kohinoor Continent for Rs.125000.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num6);
     if(num6==1)
     {
      a[5]++;
      totalCost+=125000*num_days1;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;

     break;
    
    case 3:
    
     
     printf("You chose VITS Hotel for Rs.105000.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num7);
     if(num7==1)
     {
      a[6]++;
      totalCost+=105000*num_days1;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;

     break;
    
    case 4:
    
     
     printf("You chose Goldfinch Hotel for Rs.105000.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num8);
     if(num8==1)
     {
      a[7]++;
      totalCost+=95000*num_days1;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;

     break;
    
    case 5:
    
     
     printf("You chose Majestic Banquets for Rs.98800.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num9);
     if(num9==1)
     {
      a[8]++;
      totalCost+=98800*num_days1;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;

     break;
    
     case 6:
    
     
     printf("You chose Citizen Hotel for Rs.115000.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num10);
     if(num10==1)
     {
      a[9]++;
      totalCost+=115000*num_days1;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;

     break;
    
    default:
     printf("Exit from mumbaiweddinghotel\n");
     
    
   }
   break;
  
  case 3:
  
   
   printf("These are the option to Choose your wedding place:\n1 - Anand Happy Hall - Rs.110000 per day\n2 - Parnakuti Cottage - Rs.155000 per day\n3 - Sanman Beach Resort - Rs.105000 per day\n4 - Rudra Resort - Rs.140000 per day\nAny other number to exit\n");
   scanf("%d",&raigadweddinghotel);
    int num_days2;
   printf("How many days you want to booked this wedding place: ");
   scanf("%d", &num_days2);
   cost[10]=110000*num_days2;
   cost[11]=155500*num_days2;
   cost[12]=105000*num_days2;
   cost[13]=140000*num_days2;
   switch(raigadweddinghotel)
   {
    case 1:
    
     
     printf("You chose to Anand Happy Hall for Rs.110000.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num11);
     if(num11==1)
     {
      a[10]++;
      totalCost+=110000*num_days2;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;

     break;
    
    case 2:
    
    
     printf("You chose to Parnakuti Cottage for Rs.155500 per day.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num12);
     if(num12==1)
     {
      a[11]++;
      totalCost+=155500*num_days2;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;
     break;
    
    case 3:
    
     
     printf("You chose to Sanman Beach Resort for Rs.105000 per day.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num13);
     if(num13==1)
     {
      a[12]++;
      totalCost+=105000*num_days2;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;
     break;
    
       case 4:
    
     
     printf("You chose to  Rudra Resort for Rs.140000.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num14);
     if(num14==1)
     {
      a[13]++;
      totalCost+=140000*num_days2;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;
     break;
    
    default:
     printf("Exit from raigadweddinghptel\n");
     
    
   }
   break;
    case 4:
  
   printf("These are the option to Choose your wedding place:\n1 - Happy Hall - Rs.110000 per day\n2 - Parnakuti Cottage - Rs.155500 per day\n3 - Sanman Beach Resort - Rs.105000 per day\n4 - Rudra Resort - Rs.160000 per day\nAny other number to exit\n");
   scanf("%d",&ratnagiriweddinghotel);
   int num_days3;
         
   printf("How many days you want to booked this wedding place: ");
   scanf("%d", &num_days3);
         
   cost[14]=110000*num_days3;
   cost[15]=155500*num_days3;
   cost[16]=105000*num_days3;
   cost[17]=160000*num_days3;
   switch(ratnagiriweddinghotel)
   {
    case 1:
    
    
     printf("You chose to Anand Happy Hall for Rs.110000.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num15);
     if(num15==1)
     {
      a[14]++;
      totalCost+=110000*num_days3;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;
     break;
    
    case 2:
    
   
           
     printf("You chose to Parnakuti Cottage for Rs.155500 per day.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num16);
     if(num16==1)
     {
      a[15]++;
      totalCost+=155500*num_days3;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;
     break;
    
    case 3:
    
     
     printf("You chose to Sanman Beach Resort for Rs.105000 per day.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num17);
     if(num17==1)
     {
      a[16]++;
      totalCost+=105000*num_days3;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;
     break;
    
       case 4:
    
   
     printf("You chose to  Rudra Resort for Rs.160000.Are you sure to booked.If 'Yes' Enter 1 else any number for other option\n");
     scanf("%d",&num18);
     if(num18==1)
     {
      a[17]++;
      totalCost+=160000*num_days3;
     printf("Congratulation your wedding hall has been booked\nyour total amount is %d\n",totalCost);
     break;
     }
     else
     continue;
     break;
    
    default:
     printf("Exit from ratnagiriweddinghptel\n");
     
    
   }
   break;
  default:
   printf("Enter Valid Categories Choice\n");
 }
 }
 printf("enter 0 for exit\n");
 scanf("%d",&c);

} while(c!=0);
 printf("Thanks %s for Choosing Us and Visit us again.\n",str);
  
}

int nile(char str[100]){
    int choice;
    
    for (; ; ) {
        printf("Welcome %s to NILE\n",str);
        printf("Enter choice for service required:");
        printf("Services available:\n1: Online Shopping\n2: Ticket Booking\n3: Wedding Place Reservation\n4: Gromming appointment \n0: Exit\n");
        scanf("%d",&choice);
        if(choice==0){
            printf("Thank you for your patronage");
            break;}
        switch (choice) {
            case 1:
                shopping(str);
                break;
            case 2:
                booking(str);
                break;
            case 3:
                weddingbook(str);
                break;
            case 4:
                bookAppointment(str);
                break;
            default:
                printf("Invalid choice.");
                continue;
                
        }
        return choice;
       
    }
   
    
}


int main(){
    char str[100];
    printf("Please Enter Your Name\n");
    scanf("%s",str);
    if(str[0]>90)
    str[0]=str[0]-32;
    for(;;){
       int choice = nile(str);
        int c;
        if(choice!=0){
            printf("Enter 1 if you wish to access another service.\n");
            printf("Enter 0 if you wish to exit Nile.\n");
            scanf("%d",&c);
            if(c==1)
            continue;
            else
            break;}
        break;
    }
     
    printf("\nThank you for using Nile!");
    
    
}
