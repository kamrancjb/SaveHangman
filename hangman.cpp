#include "graphics.h"
#include <stdio.h>      
#include <iostream>
#include <stdlib.h>
#include <time.h>  
using namespace std;

const char *img = "test.bmp";
const char *img1 = "test1.bmp";
const char *img2 = "test2.bmp";
const char *img3 = "test3.bmp";
const char *img4 = "test4.bmp";
const char *aimg = "alpha/a.bmp";
const char *bimg = "alpha/b.bmp";
const char *cimg = "alpha/c.bmp";
const char *dimg = "alpha/d.bmp";
const char *eimg = "alpha/e.bmp";
const char *fimg = "alpha/f.bmp";
const char *gimg = "alpha/g.bmp";
const char *himg = "alpha/h.bmp";
const char *iimg = "alpha/i.bmp";
const char *jimg = "alpha/j.bmp";
const char *kimg = "alpha/k.bmp";
const char *limg = "alpha/l.bmp";
const char *mimg = "alpha/m.bmp";
const char *nimg = "alpha/n.bmp";
const char *oimg = "alpha/o.bmp";
const char *pimg = "alpha/p.bmp";
const char *qimg = "alpha/q.bmp";
const char *rimg = "alpha/r.bmp";
const char *simg = "alpha/s.bmp";
const char *timg = "alpha/t.bmp";
const char *uimg = "alpha/u.bmp";
const char *vimg = "alpha/v.bmp";
const char *wimg = "alpha/w.bmp";
const char *ximg = "alpha/x.bmp";
const char *yimg = "alpha/y.bmp";
const char *zimg = "alpha/z.bmp";
const char *mystryimg = "alpha/mystry.bmp";
const char *life = "alpha/life.bmp";


 	int i;
    char c;
	int gameover = 0;
	int chances = 0;
	int size = 0;
char* get_random_word(char** words, int num_words);
void print(char* guessWord, int size, int gwc[]);
int main( )
{
   
    // Initialize the graphics window.
    initwindow(900, 530,"Save Hangman 1.0",200,50);
    char* my_words[] = {"apple", "banana", "cherry", "date", "elderberry","orange"};  // word array to hold different words
    int num_words = 6;
    char* guessWord = get_random_word(my_words, num_words);   // guess word variable to hold random guess word.
    int size = strlen(guessWord);
    int guessWordCopy[size];
	for(int i=0;i<size;i++){
		guessWordCopy[i]=0;
	}
	
	print(guessWord,size,guessWordCopy);
    while (!gameover&&chances<=4){
    	
    	char guessCharacter;
		guessCharacter = getch();
		
  		int flag=0;
		for(int i=0;i<size;i++){
			if(guessWordCopy[i]!=1)
			if(guessWord[i]==guessCharacter){
				guessWordCopy[i]=1;
				flag=1;
			}
		}
		if(!flag)
			chances++;
		gameover=1;
		for(int i=0;i<size;i++){
			if(guessWordCopy[i]==0)
				gameover=0;
		}
		
		print(guessWord,size,guessWordCopy);
    }
 	if(gameover&&chances<=4)
	outtextxy(300, 300, "YOU WIN - GAME OVER");
	getch();
	closegraph();
 }

char* get_random_word(char** words, int num_words) {
	    srand(time(NULL));
	    int random_index = rand() % num_words;
	    return words[random_index];
	}

void print(char* guessWord, int size, int guessWordCopy[]){
	switch(chances){
			case 0:
				readimagefile(img,10,10,885,500);
				readimagefile(life,700,10,730,40);
				readimagefile(life,730,10,760,40);
				readimagefile(life,760,10,790,40);
				readimagefile(life,790,10,820,40);
				break;
			case 1:
				readimagefile(img1,10,10,885,500);
				readimagefile(life,730,10,760,40);
				readimagefile(life,760,10,790,40);
				readimagefile(life,790,10,820,40);
				break;
			case 2:
				readimagefile(img2,10,10,885,500);
				readimagefile(life,770,10,800,40);
				readimagefile(life,800,10,830,40);
				break;
			case 3:
				readimagefile(img3,10,10,885,500);
				readimagefile(life,800,10,830,40);
				break;
			case 4:
				readimagefile(img4,10,10,885,500);
				outtextxy(300, 300, "YOU LOOSE - GAME OVER");
				break;	
		}
		
	outtextxy(20, 240, "WELCOME  TO  SAVE  HANGMAN");
	outtextxy(20, 280, "PRESS A GUESS CHARACTER");
  
    for(int i=0,x=10;i<size;i++,x+=50){
    	char sc = guessWord[i];
	    switch(sc){
	    	case 'a':
    			if(guessWordCopy[i]==1)
					readimagefile(aimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
    		case 'b':
    			if(guessWordCopy[i]==1)
					readimagefile(bimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
    		case 'c':
    			if(guessWordCopy[i]==1)
					readimagefile(cimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'd':
    			if(guessWordCopy[i]==1)
					readimagefile(dimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'e':
    			if(guessWordCopy[i]==1)
					readimagefile(eimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'f':
    			if(guessWordCopy[i]==1)
					readimagefile(fimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'g':
    			if(guessWordCopy[i]==1)
					readimagefile(gimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'h':
    			if(guessWordCopy[i]==1)
					readimagefile(himg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'i':
    			if(guessWordCopy[i]==1)
					readimagefile(iimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'j':
    			if(guessWordCopy[i]==1)
					readimagefile(jimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'k':
    			if(guessWordCopy[i]==1)
					readimagefile(kimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'l':
    			if(guessWordCopy[i]==1)
					readimagefile(limg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'm':
    			if(guessWordCopy[i]==1)
					readimagefile(mimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'n':
    			if(guessWordCopy[i]==1)
					readimagefile(nimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'o':
    			if(guessWordCopy[i]==1)
					readimagefile(oimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'p':
    			if(guessWordCopy[i]==1)
					readimagefile(pimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'q':
    			if(guessWordCopy[i]==1)
					readimagefile(qimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'r':
    			if(guessWordCopy[i]==1)
					readimagefile(rimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 's':
    			if(guessWordCopy[i]==1)
					readimagefile(simg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 't':
    			if(guessWordCopy[i]==1)
					readimagefile(timg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'u':
    			if(guessWordCopy[i]==1)
					readimagefile(uimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'v':
    			if(guessWordCopy[i]==1)
					readimagefile(vimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'w':
    			if(guessWordCopy[i]==1)
					readimagefile(wimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'x':
    			if(guessWordCopy[i]==1)
					readimagefile(ximg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'y':
    			if(guessWordCopy[i]==1)
					readimagefile(yimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			case 'z':
    			if(guessWordCopy[i]==1)
					readimagefile(zimg,x,10,x+50,60);
				else
					readimagefile(mystryimg,x,10,x+50,60);
    			break;
			}
		}
}	
