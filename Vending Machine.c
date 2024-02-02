/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <time.h>

int main()
{
    int sel,sur;

/*
    if(time){
        printf("Kalhmera sas!\nEpilejte ena apo ta parakatw proionta, pieste ton antistoixo arithmo kai epeita pieste enter.");
    }
    else if(time){
        printf("Kalhspera sas!\nEpilejte ena apo ta parakatw proionta, pieste ton antistoixo arithmo kai epeita pieste enter.");
    }
*/
    printf("Kalhmera sas!\nEpilejte ena apo ta parakatw proionta, pieste ton antistoixo arithmo kai epeita pieste enter.\n\n");
    a:
    printf("1.Nero 500ml : 0,5$\n");
    printf("2.Nero 1l : 1$\n");
    printf("3.Coca cola 330ml : 1$\n");
    printf("4.Coca cola 500ml : 1,5$\n");
    printf("5.Fanta Orange 330ml : 1$\n");
    printf("6.Fanta Lemon 330ml : 1$\n");
    printf("7.Fanta Blue 330ml : 1$\n");
    printf("8.Lays Alati : 1,5$\n");
    printf("9.Lays Ketchup : 1,5$\n");
    printf("10.Lays BBQ : 1,5$\n");
    
    printf("\nEpilogh : ");
    scanf("%d",&sel);

    if(sel>=1 && sel<=10){}
    else{
        printf("H epilogh den yparxei.\nEpilejte ena apo ta parakatw proionta, pieste ton antistoixo arithmo kai epeita pieste enter.\n");
        goto a;
    }
    
    switch(sel){
        
        case 1:
        {
            b:
            printf("Epilejate 1.Nero 500ml : 0,5$\nEiste sigouros?Pieste 1 gia nai h 2 gia oxi kai epeita pieste enter.\n");
            scanf("%d",&sur);
            
            if(sur==1)
            {
                printf("H synallagh oloklhrothike");
            }
            else if(sur==2)
            {
                printf("H synallagh akyrothike");
            }
            else
            {
                printf("Lathos epilogh...\n");
                goto b;
            }

            
            break;
            
        }
        case 2:
        {
            c:
            printf("Epilejate 2.Nero 1l : 1$\nEiste sigouros?Pieste 1 gia nai h 2 gia oxi kai epeita pieste enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("H synallagh oloklhrothike");
            }
            else if(sur==2)
            {
                printf("H synallagh akyrothike");
            }
            else
            {
                printf("Lathos epilogh...\n");
                goto c;
            }
            break;
        }
        case 3:
        {
            d:
            printf("Epilejate Coca cola 330ml : 1$\nEiste sigouros?Pieste 1 gia nai h 2 gia oxi kai epeita pieste enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("H synallagh oloklhrothike");
            }
            else if(sur==2)
            {
                printf("H synallagh akyrothike");
            }
            else
            {
                printf("Lathos epilogh...\n");
                goto d;
            }
            break;
        }
        case 4:
        {
            e:
            printf("Epilejate 4.Coca cola 500ml : 1,5$\nEiste sigouros?Pieste 1 gia nai h 2 gia oxi kai epeita pieste enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("H synallagh oloklhrothike");
            }
            else if(sur==2)
            {
                printf("H synallagh akyrothike");
            }
            else
            {
                printf("Lathos epilogh...\n");
                goto e;
            }
            break;
        }
        case 5:
        {
            f:
            printf("Epilejate 5.Fanta Orange 330ml : 1$\nEiste sigouros?Pieste 1 gia nai h 2 gia oxi kai epeita pieste enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("H synallagh oloklhrothike");
            }
            else if(sur==2)
            {
                printf("H synallagh akyrothike");
            }
            else
            {
                printf("Lathos epilogh...\n");
                goto f;
            }
            break;
        }
        case 6:
        {
            printf("Epilejate 6.Fanta Lemon 330ml : 1$\nEiste sigouros?Pieste 1 gia nai h 2 gia oxi kai epeita pieste enter.\n");
            scanf("%d",&sur);
            g:
            if(sur==1)
            {
                printf("H synallagh oloklhrothike");
            }
            else if(sur==2)
            {
                printf("H synallagh akyrothike");
            }
            else 
            {
                printf("Lathos epilogh...\n");
                goto g;
            }
            break;
        }
        case 7:
        {
            h:
            printf("Epilejate 7.Fanta Blue 330ml : 1$\nEiste sigouros?Pieste 1 gia nai h 2 gia oxi kai epeita pieste enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("H synallagh oloklhrothike");
            }
            else if(sur==2)
            {
                printf("H synallagh akyrothike");
            }
            else
            {
                printf("Lathos epilogh...\n");
                goto h;
            }
            break;
        }
        case 8:
        {
            i:
            printf("Epilejate 8.Lays Alati : 1,5$\nEiste sigouros?Pieste 1 gia nai h 2 gia oxi kai epeita pieste enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("H synallagh oloklhrothike");
            }
            else if(sur==2)
            {
                printf("H synallagh akyrothike");
            }
            else 
            {
                printf("Lathos epilogh...\n");
                goto i;
            }
            break;
        }
        case 9:
        {
            j:
            printf("Epilejate 9.Lays Ketchup : 1,5$\nEiste sigouros?Pieste 1 gia nai h 2 gia oxi kai epeita pieste enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("H synallagh oloklhrothike");
            }
            else if(sur==2)
            {
                printf("H synallagh akyrothike");
            }
            else
            {
                printf("Lathos epilogh...\n");
                goto j;
            }
            break;
        }
        case 10:
        {
            k:
            printf("Epilejate 10.Lays BBQ : 1,5$\nEiste sigouros?Pieste 1 gia nai h 2 gia oxi kai epeita pieste enter.\n");
            scanf("%d",&sur);
            if(sur==1)
            {
                printf("H synallagh oloklhrothike");
            }
            else if(sur==2)
            {
                printf("H synallagh akyrothike");
            }
            else 
            {
                printf("Lathos epilogh...\n");
                goto k;
            }
            break;
        }
    }

    return 0;
}

