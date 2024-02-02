#include <stdio.h>
#include <time.h>

int main()
{
    int sel,sur;

    printf("Hello!\nPlease choose one of the bellow products, press the corressponding number then press Enter.\n\n");
    a:
    printf("1.Water 500ml : 0,5$\n");
    printf("2.Water 1l : 1$\n");
    printf("3.Coca Cola 330ml : 1$\n");
    printf("4.Coca Cola 500ml : 1,5$\n");
    printf("5.Fanta Orange 330ml : 1$\n");
    printf("6.Fanta Lemon 330ml : 1$\n");
    printf("7.Fanta Blue 330ml : 1$\n");
    printf("8.Lays Salt : 1,5$\n");
    printf("9.Lays Ketchup : 1,5$\n");
    printf("10.Lays BBQ : 1,5$\n");
    
    printf("\nEpilogh : ");
    scanf("%d",&sel);

    if(sel>=1 && sel<=10){}
    else{
        printf("The product doesn't exist.\nPlease choose one of the bellow products, press the corressponding number then press Enter.\n");
        goto a;
    }
    
    switch(sel){
        
        case 1:
        {
            b:
            printf("You chose 1.Water 500ml : 0,5$\nAre you sure?Press 1 for yes, 2 for no then press Enter.\n");
            scanf("%d",&sur);
            
            if(sur==1)
            {
                printf("Transaction complete");
            }
            else if(sur==2)
            {
                printf("Transaction canceled");
            }
            else
            {
                printf("Wrong input...\n");
                goto b;
            }

            
            break;
            
        }
        case 2:
        {
            c:
            printf("You chose 2.Nero 1l : 1$\nAre you sure?Press 1 for yes, 2 for no then press Enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("Transaction complete");
            }
            else if(sur==2)
            {
                printf("Transaction canceled");
            }
            else
            {
                printf("Wrong input...\n");
                goto c;
            }

            break;
        }
        case 3:
        {
            d:
            printf("You chose Coca cola 330ml : 1$\nAre you sure?Press 1 for yes, 2 for no then press Enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("Transaction complete");
            }
            else if(sur==2)
            {
                printf("Transaction canceled");
            }
            else
            {
                printf("Wrong input...\n");
                goto d;
            }
            break;
        }
        case 4:
        {
            e:
            printf("You chose 4.Coca cola 500ml : 1,5$\nAre you sure?Press 1 for yes, 2 for no then press Enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("Transaction complete");
            }
            else if(sur==2)
            {
                printf("Transaction canceled");
            }
            else
            {
                printf("Wrong input...\n");
                goto e;
            }
            break;
        }
        case 5:
        {
            f:
            printf("You chose 5.Fanta Orange 330ml : 1$\nAre you sure?Press 1 for yes, 2 for no then press Enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("Transaction complete");
            }
            else if(sur==2)
            {
                printf("Transaction canceled");
            }
            else
            {
                printf("Wrong input...\n");
                goto f;
            }
            break;
        }
        case 6:
        {
            printf("You chose 6.Fanta Lemon 330ml : 1$\nAre you sure?Press 1 for yes, 2 for no then press Enter.\n");
            scanf("%d",&sur);
            g:
            if(sur==1)
            {
                printf("Transaction complete");
            }
            else if(sur==2)
            {
                printf("Transaction canceled");
            }
            else
            {
                printf("Wrong input...\n");
                goto g;
            }
            break;
        }
        case 7:
        {
            h:
            printf("You chose 7.Fanta Blue 330ml : 1$\nAre you sure?Press 1 for yes, 2 for no then press Enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("Transaction complete");
            }
            else if(sur==2)
            {
                printf("Transaction canceled");
            }
            else
            {
                printf("Wrong input...\n");
                goto h;
            }
            break;
        }
        case 8:
        {
            i:
            printf("You chose 8.Lays Alati : 1,5$\nAre you sure?Press 1 for yes, 2 for no then press Enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("Transaction complete");
            }
            else if(sur==2)
            {
                printf("Transaction canceled");
            }
            else
            {
                printf("Wrong input...\n");
                goto i;
            }
            break;
        }
        case 9:
        {
            j:
            printf("You chose 9.Lays Ketchup : 1,5$\nAre you sure?Press 1 for yes, 2 for no then press Enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("Transaction complete");
            }
            else if(sur==2)
            {
                printf("Transaction canceled");
            }
            else
            {
                printf("Wrong input...\n");
                goto j;
            }
            break;
        }
        case 10:
        {
            k:
            printf("You chose 10.Lays BBQ : 1,5$\nAre you sure?Press 1 for yes, 2 for no then press Enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("Transaction complete");
            }
            else if(sur==2)
            {
                printf("Transaction canceled");
            }
            else
            {
                printf("Wrong input...\n");
                goto k;
            }
            break;
        }
    }

    return 0;
}

