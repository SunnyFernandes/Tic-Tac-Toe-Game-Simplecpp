#include <iostream>
#include<simplecpp>

int ch;
int highs=0;

int x=0,y=0;
int Ca=0;
int Cb=0;
int Cc=0;
int Cz=0;
int Cq=0;
int Cf=0;
int Cg=0;
int Ch=0;

int Xa=0;
int Xb=0;
int Xc=0;
int Xz=0;
int Xq=0;
int Xf=0;
int Xg=0;
int Xh=0;
int num=0;

int check();
int user_1();
int user_2();
int win();
void menu();

int user_1()
{
        //Box Vertical Line
    Line L1(250,650,250,50); //2nd line col
    Line L2(450,650,450,50); //3rd line col
    Line L3(50,650,50,50);//1st line col
    Line L4(650,650,650,50);//4th line col

    //Box Horizontal Line
    Line L5(50,650,650,650);//4th line row
    Line L6(50,450,650,450);//3rd line row
    Line L7(50,250,650,250);//2nd line row
    Line L8(50,50,650,50);//1st line row

    XEvent e;
    int x1,y1;
    int num=0;

    while(1)
    {
        nextEvent(e);
        if(mouseButtonPressEvent(e))
        {
            int d=getClick();
            int x=d/65536;
            int y=d%65536;


            if(x>50 && x<250 && y>50 && y<250)
            {
                Circle C1(150,150,80);
                C1.imprint();
                Ca++;
                Cb++;
                Cc++;
                return Ca,Cb,Cc;
            }
            else if(x>250 && x<450 && y>50 && y<250)
            {
                Circle C2(350,150,80);
                C2.imprint();
                Cb++;
                Cg++;
                return Cb,Cg;
            }
            else if(x>450 && x<650 && y>50 && y<250)
            {
                Circle C3(550,150,80);
                C3.imprint();
                Cb++;
                Cf++;
                Ch++;
                return Cb,Cf,Ch;
            }
            else if(x>50 && x<250 && y>250 && y<450)
            {
                Circle C4(150,350,80);
                C4.imprint();
                Ca++;
                Cz++;
                return Ca,Cz;
            }
            else if(x>250 && x<450 && y>250 && y<450)
            {
                Circle C5(350,350,80);
                C5.imprint();
                Cz++;
                Cg++;
                Cf++;
                Cc++;
                return Cz,Cg,Cf,Cc;
            }
            else if(x>450 && x<650 && y>250 && y<450)
            {
                Circle C6(550,350,80);
                C6.imprint();
                Cz++;
                Ch++;
                return Cz,Ch;
            }
            else if(x>50 && x<250 && y>450 && y<650)
            {
                Circle C7(150,550,80);
                C7.imprint();
                Ca++;
                Cq++;
                Cf++;
                return Ca,Cq,Cf;
            }
            else if(x>250 && x<450 && y>450 && y<650)
            {
                Circle C8(350,550,80);
                C8.imprint();
                Cq++;
                Cg++;
                return Cq,Cg;
            }
            else if(x>450 && x<650 && y>450 && y<650)
            {
                Circle C9(550,550,80);
                C9.imprint();
                Cc++;
                Cq++;
                Ch++;
                return Cc,Cq,Ch;
            }
        }
    }
}

int user_2()
{
        //Box Vertical Line
    Line L1(250,650,250,50); //2nd line col
    Line L2(450,650,450,50); //3rd line col
    Line L3(50,650,50,50);//1st line col
    Line L4(650,650,650,50);//4th line col

    //Box Horizontal Line
    Line L5(50,650,650,650);//4th line row
    Line L6(50,450,650,450);//3rd line row
    Line L7(50,250,650,250);//2nd line row
    Line L8(50,50,650,50);//1st line row

    XEvent e;
    int x1,y1;
    int num=0;

    while(1)
    {
        nextEvent(e);
        if(mouseButtonPressEvent(e))
        {
            int d=getClick();
            int x=d/65536;
            int y=d%65536;

            if(x>50 && x<250 && y>50 && y<250)
            {
                Line L22(100,100,200,200);//Diagonal line top-right to bottom-left, left upper square
                Line L23(100,200,200,100);//Diagonal line top-left to bottom-right, left upper square
                L22.imprint();
                L23.imprint();
                Xa++;
                Xb++;
                Xc++;
                return Xa,Xb,Xc;
            }
            if(x>250 && x<450 && y>50 && y<250)
            {
                Line L26(300,100,400,200);//diagonal line top-right to bottom-left, centre up
                Line L27(300,200,400,100);//diagonal line top-left to bottom-right, centre up
                L26.imprint();
                L27.imprint();
                Xb++;
                Xg++;
                return Xb,Xg;
            }
            if(x>450 && x<650 && y>50 && y<250)
            {
                Line L30(500,100,600,200);//diagonal line top-left to bottom-right, right upper square
                Line L31(500,200,600,100);//diagonal line top-right to bottom-left, right upper square
                L30.imprint();
                L31.imprint();
                Xb++;
                Xf++;
                Xh++;
                return Xb,Xf,Xh;
            }
            if(x>50 && x<250 && y>250 && y<450)
            {
                Line L28(100,400,200,300);//Diagonal line top-right to bottom-left, left middle square
                Line L29(100,300,200,400);//Diagonal line top-left to bottom-right, left middle square
                L28.imprint();
                L29.imprint();
                Xa++;
                Xz++;
                return Xa,Xz;
            }
            if(x>250 && x<450 && y>250 && y<450)
            {
                Line L20(300,300,400,400);//diagonal line top-left to bottom-right, center
                Line L21(300,400,400,300);//diagonal line top-left to bottom-right, center
                L20.imprint();
                L21.imprint();
                Xz++;
                Xg++;
                Xf++;
                Xc++;
                return Xz,Xg,Xf,Xc;
            }
            if(x>450 && x<650 && y>250 && y<450)
            {
                Line L32(500,300,600,400);//Diagonal line top-left to bottom-right, right middle square
                Line L33(500,400,600,300);//Diagonal line top-right to bottom-left, right middle square
                L32.imprint();
                L33.imprint();
                Xz++;
                Xh++;
                return Xz,Xh;
            }
            if(x>50 && x<250 && y>450 && y<650)
            {
                Line L34(100,600,200,500);//Diagonal line top-right to bottom-left, left lower square
                Line L35(100,500,200,600);//Diagonal line top-left to bottom-right, left lower square
                L34.imprint();
                L35.imprint();
                Xa++;
                Xq++;
                Xf++;
                return Xa,Xq,Xf;
            }
            if(x>250 && x<450 && y>450 && y<650)
            {
                Line L36(300,600,400,500);//Diagonal line top-right to bottom-left, centre lower square
                Line L37(300,500,400,600);//Diagonal line top-left to bottom-right, centre lower square
                L36.imprint();
                L37.imprint();
                Xq++;
                Xg++;
                return Xq,Xg;
            }
            if(x>450 && x<650 && y>450 && y<650)
            {
                Line L24(500,500,600,600);//Diagonal line top-left to bottom-right ,right lower square
                Line L25(500,600,600,500);//Diagonal line top-right to bottom-left ,right lower square
                L24.imprint();
                L25.imprint();
                Xc++;
                Xq++;
                Xh++;
                return Xc,Xq,Xh;
            }
            //readimagefile("bgtictactoe.jpg",0,0,700,700);
        }
    }
}
int check()
{
    if(Ca==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Cb==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Cc==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Cz==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Cq==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Cf==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Cg==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Ch==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Xa==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Xb==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Xc==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Xz==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Xq==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Xf==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Xg==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
    if(Xh==3)
    {
        XEvent e4;
        num=1;
        Text T1(350,50,"WIN");
        wait(3);
        Text T2(350,50,"Press any key to go back!");
        nextEvent(e4);
        int an = charFromEvent(e4);
        if(an)
        {
            T2.~Text();
            menu();
        }
        return 0;
    }
}
int win()
{
    //Box Vertical Line
    Line L1(250,650,250,50); //2nd line col
    Line L2(450,650,450,50); //3rd line col
    Line L3(50,650,50,50);//1st line col
    Line L4(650,650,650,50);//4th line col

    //Box Horizontal Line
    Line L5(50,650,650,650);//4th line row
    Line L6(50,450,650,450);//3rd line row
    Line L7(50,250,650,250);//2nd line row
    Line L8(50,50,650,50);//1st line row

    if(Ca==3)
    {
        Line L14(150,550,150,150);
        L14.imprint();
        check();
    }
    if(Cb==3)
    {
        Line L11(150,150,550,150);
        L11.imprint();
        check();
    }
    if(Cc==3)
    {
        Line L9(50,50,650,650);
        L9.imprint();
        check();
    }
    if(Cz==3)
    {
        Line L12(150,350,550,350);
        L12.imprint();
        check();
    }
    if(Cq==3)
    {
        Line L13(150,550,550,550);
        L13.imprint();
        check();
    }
    if(Cf==3)
    {
        Line L10(50,650,650,50);
        L10.imprint();
        check();
    }
    if(Cg==3)
    {
        Line L15(350,550,350,150);
        L15.imprint();
        check();
    }
    if(Ch==3)
    {
        Line L16(550,550,550,150);
        L16.imprint();
        check();
    }


    if(Xa==3)
    {
        Line L14(150,550,150,150);
        L14.imprint();
        check();
    }
    if(Xb==3)
    {
        Line L11(150,150,550,150);
        L11.imprint();
        check();
    }
    if(Xc==3)
    {
        Line L9(50,50,650,650);
        L9.imprint();
        check();
    }
    if(Xz==3)
    {
        Line L12(150,350,550,350);
        L12.imprint();
        check();
    }
    if(Xq==3)
    {
        Line L13(150,550,550,550);
        L13.imprint();
        check();
    }
    if(Xf==3)
    {
        Line L10(50,650,650,50);
        L10.imprint();
        check();
    }
    if(Xg==3)
    {
        Line L15(350,550,350,150);
        L15.imprint();
        check();
    }
    if(Xh==3)
    {
        Line L16(550,550,550,150);
        L16.imprint();
        check();
    }
}
void menu()
{
    XEvent e;
    {
    Text T1(350,150,"TIC-TAC-TOE");
    Text T2(350,250,"1: START");
    Text T3(350,350,"2: ABOUT");
    Text T4(350,450,"3: CREDITS");
    Text T5(350,550,"4: EXIT");

    T2.setColor(COLOR(255,0,0));
    T3.setColor(COLOR(255,0,0));
    T4.setColor(COLOR(255,0,0));
    T5.setColor(COLOR(255,0,0));

    nextEvent(e);
        ch = charFromEvent(e);
    }
    while (1) {
        switch (ch) {
        case 49:
        {
            while(1){
            user_2();
            win();
            check();
            user_1();
            win();
            check();
            }
            break;
        }
        case 50: {
            XEvent e2;
            Text t1(350, 220, "ABOUT");
            Text t2(350, 265, "Tic-tac-toe or Xs and Os  is a game for two players");
            Text t3(350, 285, "who take turns marking the spaces in a three-by-three grid with X or O.");
            Text t4(350, 305, "The player who succeeds in placing three of their marks in a");
            Text t5(350, 325, "horizontal, vertical, or diagonal row is the winner.");
            Text t6(350, 345, "It is a solved game, with a forced draw assuming");
            Text t7(350, 365, "best play from both players.");
            Text t8(350, 400, "Press any key to go back!");
            t1.setColor(COLOR(255,0,0));
            t8.setColor(COLOR(0,0,255));
            nextEvent(e2);
            int an = charFromEvent(e2);
            if (an)
            {
                t1.~Text();
                t2.~Text();
                t3.~Text();
                t4.~Text();
                t5.~Text();
                t6.~Text();
                t7.~Text();
                t8.~Text();
                menu();
            }
        }
        case 51: {
            XEvent e2;
            Text t1(360, 220, "CREDITS");
            Text t2(390, 260, "Project Members: SUNNY FERNANDES, ABHISHEK NARU KUDALKAR,");
            Text t5(450,280,"JASON JESUS RODRIGUES, DUVAL FRANCO GOMES");
            Text t3(280, 300, "Teacher Incharge: Ma'am AMRITA NAIK");
            Text t4(260, 380, "Press any key to go back!");
            t1.setColor(COLOR(255,0,0));
            t4.setColor(COLOR(0,0,255));
            nextEvent(e2);
            int an = charFromEvent(e2);
            if (an) {
                t1.~Text();
                t2.~Text();
                t3.~Text();
                t4.~Text();
                t5.~Text();
                menu();
            }
        }
        break;
        case 52:
            closeCanvas();
            break;
        default:
            menu();
            break;
    }
}
}
main_program{
    initCanvas("TIC-TAC-TOE",700,700);
    menu();
}
