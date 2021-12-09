//Sacrifices were made
#include "sp.h"
// notes in the melody:
int melody[] = {

 //NOTE_DS6, NOTE_E6,  NOTE_FS6, NOTE_B6,  NOTE_DS6,   NOTE_E6,  NOTE_FS6, NOTE_B6,  NOTE_CS7, NOTE_DS7,   NOTE_CS7, NOTE_AS6, NOTE_B6,  NOTE_FS6, NOTE_DS6,   NOTE_E6,  NOTE_FS6, NOTE_B6,  NOTE_CS7, NOTE_AS6,   NOTE_B6,  NOTE_CS7, NOTE_E7,  NOTE_DS7, NOTE_E7,   NOTE_CS7, NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_DS6,0,NOTE_B0,   NOTE_D6,  NOTE_CS6, NOTE_B0,0,NOTE_B7,  NOTE_CS7, NOTE_D6,   NOTE_D6,  NOTE_CS6, NOTE_B0,  NOTE_CS6, NOTE_DS6,   NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6,   NOTE_DS6, NOTE_B0,  NOTE_CS6, NOTE_B0,  NOTE_DS6, NOTE_FS6,   NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6, NOTE_DS6, NOTE_B0,   NOTE_D6,  NOTE_DS6, NOTE_D6,  NOTE_CS6, NOTE_B0,   NOTE_CS6, NOTE_D6,  NOTE_B0,  NOTE_CS6, NOTE_DS6, NOTE_FS6,   NOTE_CS6, NOTE_DS6, NOTE_CS6, NOTE_B0,  NOTE_CS7, NOTE_B7,   NOTE_CS7, NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_DS6,0,NOTE_B0,   NOTE_D6,  NOTE_CS6, NOTE_B0,0,NOTE_B7,  NOTE_CS7, NOTE_D6,   NOTE_D6,  NOTE_CS6, NOTE_B0,  NOTE_CS6, NOTE_DS6,   NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6,   NOTE_DS6, NOTE_B0,  NOTE_CS6, NOTE_B0,  NOTE_DS6, NOTE_FS6,   NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6, NOTE_DS6, NOTE_B0,   NOTE_D6,  NOTE_DS6, NOTE_D6,  NOTE_CS6, NOTE_B0,   NOTE_CS6, NOTE_D6,  NOTE_B0,  NOTE_CS6, NOTE_DS6,   NOTE_FS6, NOTE_CS6, NOTE_DS6, NOTE_CS6, NOTE_B0,   NOTE_CS7, NOTE_B7,  NOTE_CS7, NOTE_B7,  NOTE_FS1,   NOTE_GS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B0,   NOTE_CS6, NOTE_DS6, NOTE_B0,  NOTE_E6,  NOTE_DS6, NOTE_E6,   NOTE_FS6, NOTE_B7,  NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B0, NOTE_FS1,   NOTE_E6,  NOTE_DS6, NOTE_CS6, NOTE_B0,  NOTE_FS1,   NOTE_DS1, NOTE_E0,  NOTE_FS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B7,   NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_B0,  NOTE_CS6, NOTE_DS6, NOTE_B0,   NOTE_FS1, NOTE_GS1, NOTE_FS1, NOTE_B7,  NOTE_B0,  NOTE_AS1, NOTE_B0,   NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_E6,  NOTE_DS6, NOTE_E6,   NOTE_FS6, NOTE_B7,  NOTE_AS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B7,   NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_CS6, NOTE_DS6, NOTE_B0,   NOTE_E6,  NOTE_DS6, NOTE_E6,  NOTE_FS6, NOTE_B7,  NOTE_B7,   NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_FS1, NOTE_E6,  NOTE_DS6,   NOTE_CS6, NOTE_B0,  NOTE_FS1, NOTE_DS1, NOTE_E0,  NOTE_FS1, NOTE_B7,   NOTE_FS1, NOTE_GS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B0, NOTE_B0,   NOTE_CS6, NOTE_DS6, NOTE_B0,  NOTE_FS1, NOTE_GS1,   NOTE_FS1, NOTE_B7,  NOTE_B0,  NOTE_AS1, NOTE_B0,  NOTE_FS1,   NOTE_GS1, NOTE_B0,  NOTE_E6,  NOTE_DS6, NOTE_E6,   NOTE_FS6, NOTE_B7,  NOTE_CS7,  NOTE_DS3, NOTE_E3
 NOTE_DS6, NOTE_E6,  NOTE_FS6, NOTE_B6,  NOTE_DS6,   NOTE_E6,  NOTE_FS6, NOTE_B6,  NOTE_CS7, NOTE_DS7,   NOTE_CS7, NOTE_AS6, NOTE_B6,  NOTE_FS6, NOTE_DS6,   NOTE_E6,  NOTE_FS6, NOTE_B6,  NOTE_CS7, NOTE_AS6,   NOTE_B6,  NOTE_CS7, NOTE_E7,  NOTE_DS7, NOTE_E7,   NOTE_CS7, NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_DS6,0,NOTE_B0,   NOTE_D6,  NOTE_CS6, NOTE_B0,0,NOTE_B7,  NOTE_CS7, NOTE_D6,   NOTE_D6,  NOTE_CS6, NOTE_B0,  NOTE_CS6, NOTE_DS6,   NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6,   NOTE_DS6, NOTE_B0,  NOTE_CS6, NOTE_B0,  NOTE_DS6, NOTE_FS6,   NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6, NOTE_DS6, NOTE_B0,   NOTE_D6,  NOTE_DS6, NOTE_D6,  NOTE_CS6, NOTE_B0,   NOTE_CS6, NOTE_D6,  NOTE_B0,  NOTE_CS6, NOTE_DS6, NOTE_FS6,   NOTE_CS6, NOTE_DS6, NOTE_CS6, NOTE_B0,  NOTE_CS7, NOTE_B7,   NOTE_CS7, NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_DS6,0,NOTE_B0,   NOTE_D6,  NOTE_CS6, NOTE_B0,0,NOTE_B7,  NOTE_CS7, NOTE_D6,   NOTE_D6,  NOTE_CS6, NOTE_B0//,  NOTE_CS6, NOTE_DS6,   NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6,   NOTE_DS6, NOTE_B0,  NOTE_CS6, NOTE_B0,  NOTE_DS6, NOTE_FS6,   NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6, NOTE_DS6, NOTE_B0,   NOTE_D6,  NOTE_DS6, NOTE_D6,  NOTE_CS6, NOTE_B0,   NOTE_CS6, NOTE_D6,  NOTE_B0,  NOTE_CS6, NOTE_DS6,   NOTE_FS6, NOTE_CS6, NOTE_DS6, NOTE_CS6, NOTE_B0,   NOTE_CS7, NOTE_B7,  NOTE_CS7, NOTE_B7,  NOTE_FS1,   NOTE_GS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B0,   NOTE_CS6, NOTE_DS6, NOTE_B0,  NOTE_E6,  NOTE_DS6, NOTE_E6,   NOTE_FS6, NOTE_B7,  NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B0, NOTE_FS1,   NOTE_E6,  NOTE_DS6, NOTE_CS6, NOTE_B0,  NOTE_FS1,   NOTE_DS1, NOTE_E0,  NOTE_FS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B7,   NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_B0,  NOTE_CS6, NOTE_DS6, NOTE_B0,   NOTE_FS1, NOTE_GS1, NOTE_FS1, NOTE_B7,  NOTE_B0,  NOTE_AS1, NOTE_B0,   NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_E6,  NOTE_DS6, NOTE_E6,   NOTE_FS6, NOTE_B7,  NOTE_AS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B7,   NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_CS6, NOTE_DS6, NOTE_B0,   NOTE_E6,  NOTE_DS6, NOTE_E6,  NOTE_FS6, NOTE_B7,  NOTE_B7,   NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_FS1, NOTE_E6,  NOTE_DS6,   NOTE_CS6, NOTE_B0,  NOTE_FS1, NOTE_DS1, NOTE_E0,  NOTE_FS1, NOTE_B7,   NOTE_FS1, NOTE_GS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B0, NOTE_B0,   NOTE_CS6, NOTE_DS6, NOTE_B0,  NOTE_FS1, NOTE_GS1,   NOTE_FS1, NOTE_B7,  NOTE_B0,  NOTE_AS1, NOTE_B0,  NOTE_FS1,   NOTE_GS1, NOTE_B0,  NOTE_E6,  NOTE_DS6, NOTE_E6,   NOTE_FS6, NOTE_B7,  NOTE_CS7,  NOTE_DS3, NOTE_E3
 //NOTE_DS6, NOTE_E6,  NOTE_FS6, NOTE_B6,  NOTE_DS6,   NOTE_E6,  NOTE_FS6, NOTE_B6,  NOTE_CS7, NOTE_DS7,   NOTE_CS7, NOTE_AS6, NOTE_B6,  NOTE_FS6, NOTE_DS6,   NOTE_E6,  NOTE_FS6, NOTE_B6,  NOTE_CS7, NOTE_AS6,   NOTE_B6,  NOTE_CS7, NOTE_E7,  NOTE_DS7, NOTE_E7,   NOTE_CS7, NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_DS6,0,NOTE_B0,   NOTE_D6,  NOTE_CS6, NOTE_B0,0,NOTE_B7,  NOTE_CS7, NOTE_D6,   NOTE_D6,  NOTE_CS6, NOTE_B0,  NOTE_CS6, NOTE_DS6,   NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6,   NOTE_DS6, NOTE_B0,  NOTE_CS6, NOTE_B0,  NOTE_DS6, NOTE_FS6,   NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6, NOTE_DS6, NOTE_B0,   NOTE_D6,  NOTE_DS6, NOTE_D6,  NOTE_CS6, NOTE_B0,   NOTE_CS6, NOTE_D6,  NOTE_B0,  NOTE_CS6, NOTE_DS6, NOTE_FS6,   NOTE_CS6, NOTE_DS6, NOTE_CS6, NOTE_B0,  NOTE_CS7, NOTE_B7,   NOTE_CS7, NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_DS6,0,NOTE_B0,   NOTE_D6,  NOTE_CS6, NOTE_B0,0,NOTE_B7,  NOTE_CS7, NOTE_D6,   NOTE_D6,  NOTE_CS6, NOTE_B0//,  NOTE_CS6, NOTE_DS6,   NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6,   NOTE_DS6, NOTE_B0,  NOTE_CS6, NOTE_B0,  NOTE_DS6, NOTE_FS6,   NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6, NOTE_DS6, NOTE_B0,   NOTE_D6,  NOTE_DS6, NOTE_D6,  NOTE_CS6, NOTE_B0,   NOTE_CS6, NOTE_D6,  NOTE_B0,  NOTE_CS6, NOTE_DS6,   NOTE_FS6, NOTE_CS6, NOTE_DS6, NOTE_CS6, NOTE_B0,   NOTE_CS7, NOTE_B7,  NOTE_CS7, NOTE_B7,  NOTE_FS1,   NOTE_GS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B0,   NOTE_CS6, NOTE_DS6, NOTE_B0,  NOTE_E6,  NOTE_DS6, NOTE_E6,   NOTE_FS6, NOTE_B7,  NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B0, NOTE_FS1,   NOTE_E6,  NOTE_DS6, NOTE_CS6, NOTE_B0,  NOTE_FS1,   NOTE_DS1, NOTE_E0,  NOTE_FS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B7,   NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_B0,  NOTE_CS6, NOTE_DS6, NOTE_B0,   NOTE_FS1, NOTE_GS1, NOTE_FS1, NOTE_B7,  NOTE_B0,  NOTE_AS1, NOTE_B0,   NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_E6,  NOTE_DS6, NOTE_E6,   NOTE_FS6, NOTE_B7,  NOTE_AS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B7,   NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_CS6, NOTE_DS6, NOTE_B0,   NOTE_E6,  NOTE_DS6, NOTE_E6,  NOTE_FS6, NOTE_B7,  NOTE_B7,   NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_FS1, NOTE_E6,  NOTE_DS6,   NOTE_CS6, NOTE_B0,  NOTE_FS1, NOTE_DS1, NOTE_E0,  NOTE_FS1, NOTE_B7,   NOTE_FS1, NOTE_GS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B0, NOTE_B0,   NOTE_CS6, NOTE_DS6, NOTE_B0,  NOTE_FS1, NOTE_GS1,   NOTE_FS1, NOTE_B7,  NOTE_B0,  NOTE_AS1, NOTE_B0,  NOTE_FS1,   NOTE_GS1, NOTE_B0,  NOTE_E6,  NOTE_DS6, NOTE_E6,   NOTE_FS6, NOTE_B7,  NOTE_CS7,  NOTE_DS3, NOTE_E3

};
void comments(){
  Serial.println("Comments in code lol");
//sharp frq formula: NS=N+(i*2)+(i-1)+1  (i=itteration starting at 1) its close, but not quiet right.
//58=55+(1*2)+(1-1)+1  == 58 //cool it works lol 
//117=110+(2*2)+(2-1)+1 ==116 !=117 hmmm
//233=220+(3*2)+(3-1)+1 ==229 !=233 

//durration Note (itteration?)  Number pause (looks like)
//ok I typoed  transcribing set NOTE_Note0==NOTE_Note1 where not otherwise defined
//now to underp the array see line abouve
  
//  char _NYANLIB_RTTTL_SONG_NYAN[] ="nyan cat:d=4,o=4,b=120:
//  NOTE_DS6, NOTE_E6,  NOTE_FS6, NOTE_B6,  NOTE_DS6, 
//  NOTE_E6,  NOTE_FS6, NOTE_B6,  NOTE_CS7, NOTE_DS7, 
//  NOTE_CS7, NOTE_AS6, NOTE_B6,  NOTE_FS6, NOTE_DS6, 
//  NOTE_E6,  NOTE_FS6, NOTE_B6,  NOTE_CS7, NOTE_AS6, 
//  NOTE_B6,  NOTE_CS7, NOTE_E7,  NOTE_DS7, NOTE_E7, 
//  NOTE_CS7, NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_DS6,0,NOTE_B0, 
//  NOTE_D6,  NOTE_CS6, NOTE_B0,0,NOTE_B7,  NOTE_CS7, NOTE_D6, 
//  NOTE_D6,  NOTE_CS6, NOTE_B0,  NOTE_CS6, NOTE_DS6, 
//  NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6, 
//  NOTE_DS6, NOTE_B0,  NOTE_CS6, NOTE_B0,  NOTE_DS6, NOTE_FS6, 
//  NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6, NOTE_DS6, NOTE_B0, 
//  NOTE_D6,  NOTE_DS6, NOTE_D6,  NOTE_CS6, NOTE_B0, 
//  NOTE_CS6, NOTE_D6,  NOTE_B0,  NOTE_CS6, NOTE_DS6, NOTE_FS6, 
//  NOTE_CS6, NOTE_DS6, NOTE_CS6, NOTE_B0,  NOTE_CS7, NOTE_B7, 

//  NOTE_CS7, NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_DS6,0,NOTE_B0, 
//  NOTE_D6,  NOTE_CS6, NOTE_B0,0,NOTE_B7,  NOTE_CS7, NOTE_D6, 
//  NOTE_D6,  NOTE_CS6, NOTE_B0,  NOTE_CS6, NOTE_DS6, 
//  NOTE_FS6, NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6, 
//  NOTE_DS6, NOTE_B0,  NOTE_CS6, NOTE_B0,  NOTE_DS6, NOTE_FS6, 
//  NOTE_GS6, NOTE_DS6, NOTE_FS6, NOTE_CS6, NOTE_DS6, NOTE_B0, 
//  NOTE_D6,  NOTE_DS6, NOTE_D6,  NOTE_CS6, NOTE_B0, 
//  NOTE_CS6, NOTE_D6,  NOTE_B0,  NOTE_CS6, NOTE_DS6, 
//  NOTE_FS6, NOTE_CS6, NOTE_DS6, NOTE_CS6, NOTE_B0, 

//  NOTE_CS7, NOTE_B7,  NOTE_CS7, NOTE_B7,  NOTE_FS1, 
//  NOTE_GS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B0, 
//  NOTE_CS6, NOTE_DS6, NOTE_B0,  NOTE_E6,  NOTE_DS6, NOTE_E6, 
//  NOTE_FS6, NOTE_B7,  NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B0, NOTE_FS1, 
//  NOTE_E6,  NOTE_DS6, NOTE_CS6, NOTE_B0,  NOTE_FS1, 
//  NOTE_DS1, NOTE_E0,  NOTE_FS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B7, 
//  NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_B0,  NOTE_CS6, NOTE_DS6, NOTE_B0, 
//  NOTE_FS1, NOTE_GS1, NOTE_FS1, NOTE_B7,  NOTE_B0,  NOTE_AS1, NOTE_B0, 
//  NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_E6,  NOTE_DS6, NOTE_E6, 
//  NOTE_FS6, NOTE_B7,  NOTE_AS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B7, 
//  NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_CS6, NOTE_DS6, NOTE_B0, 
//  NOTE_E6,  NOTE_DS6, NOTE_E6,  NOTE_FS6, NOTE_B7,  NOTE_B7, 
//  NOTE_FS1, NOTE_GS1, NOTE_B0,  NOTE_FS1, NOTE_E6,  NOTE_DS6, 
//  NOTE_CS6, NOTE_B0,  NOTE_FS1, NOTE_DS1, NOTE_E0,  NOTE_FS1, NOTE_B7, 
//  NOTE_FS1, NOTE_GS1, NOTE_B7,  NOTE_FS1, NOTE_GS1, NOTE_B0, NOTE_B0, 
//  NOTE_CS6, NOTE_DS6, NOTE_B0,  NOTE_FS1, NOTE_GS1, 
//  NOTE_FS1, NOTE_B7,  NOTE_B0,  NOTE_AS1, NOTE_B0,  NOTE_FS1, 
//  NOTE_GS1, NOTE_B0,  NOTE_E6,  NOTE_DS6, NOTE_E6, 
//  NOTE_FS6, NOTE_B7,  NOTE_CS7, NOTE_DS3, NOTE_E3
}

static unsigned int _nyan_frame =0;
static unsigned long long _nyan_taco =0;

// note durations: 4 = quarter note, 8 = eighth note, etc.:
int noteDurations[] = {
//needs work
  4, 8, 8, 4, 4, 4, 4, 4
  // 2, 10, 10, 5, 3, 5, 3, 7
};


void nyanclear(){
     Serial.write(12); //ascii form feed a line breaking character doesnt do what I want it to in the arduino terminal, but it may in the linux term
 }
 
void nyan(){
     for (int thisNote = 0; thisNote < 8; thisNote++) {

    // to calculate the note duration, take one second divided by the note type.
    //e.g. quarter note = 1000 / 4, eighth note = 1000/8, etc.

    int noteDuration = 1000*.6 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // to distinguish the notes, set a minimum time between them.
    // the note's duration + 30% seems to work well:

    int pauseBetweenNotes = noteDuration * 1.40;
    delay(pauseBetweenNotes);

    // stop the tone playing:
    noTone(8);
  }
}
void print_nyan(){

    //system("clear");
    Serial.write(12);  // will work on a standard terminal
    _nyan_frame++;
    _nyan_taco++;
    if(_nyan_frame>9)_nyan_frame=0;
   
    /* Inquiring mind(less) users want to know. */
    Serial.print("You've been NYANing for "); 
    Serial.print(_nyan_taco);  
    Serial.println(" frames and notes\n");
   
    /* Switch that piture, change the print up */
    switch (_nyan_frame){
        case 1:
            Serial.println("+     0         +           o     \n");
            Serial.println("    *          +        +       + \n");
            Serial.println("o          +                      \n");
            Serial.println("    o  +       o          *       \n");
            Serial.println("+        o     o       +        o \n");
            Serial.println(".~~~.___.~~~ ,-------.      o     \n");
            Serial.println("~~.___.~~~.__|    /\\_/\\           \n");
            Serial.println(".~~~.___.~~~ |___( ^ .^)  +     + \n");
            Serial.println("~~.___.~~~.___ \"\"  \"\"            \n");
            Serial.println("+      o         o     +       o  \n");
            Serial.println("       +         +                \n");
            Serial.println("o        o         o      o     + \n");
            Serial.println("     o          *                 \n");
            Serial.println("+       + o           o      +    \n");
            break;
        case 2:
            Serial.println("   o    *              o        +\n");
            Serial.println("+             o     +       *     \n");
            Serial.println("       +                          \n");
            Serial.println("o  +           +        +         \n");
            Serial.println("     o     o       *        O     \n");
            Serial.println(".~~~.___.~~~ ,-------.   o        \n");
            Serial.println("~~.___.~~~.__|    /\\_/\\           \n");
            Serial.println(".~~~.___.~~~ |___( ^ .^) +     +  \n");
            Serial.println("~~.___.~~~.___ \"\"  \"\"           o\n");
            Serial.println("   o         o   +       o        \n");
            Serial.println("+         *                       \n");
            Serial.println("     o         o      o     +     \n");
            Serial.println("o           +                     \n");
            Serial.println("   +      0        o      *       o\n");
            break;
        case 3:
            Serial.println("o     +              O        +   \n");
            Serial.println("           o     +       +      o \n");
            Serial.println("    +                             \n");
            Serial.println("+           +        +         +  \n");
            Serial.println("  o     o       +        o        \n");
            Serial.println("~~~.___.~~~. ,-------.      o     \n");
            Serial.println("~.___.~~~.___|    /\\_/\\        +  \n");
            Serial.println("~~~.___.~~~. |___( ^ .^)     +   o\n");
            Serial.println("~.___.~~~.___. \"\"  ``         o  \n");
            Serial.println("o         o   +       o           \n");
            Serial.println("       +                          \n");
            Serial.println("  O         o      o     +      * \n");
            Serial.println("         +                        \n");
            Serial.println("+     o        o      +       O   \n");
            break;
        case 4:
            Serial.println("o     +              o        +   \n");
            Serial.println("           o     +       +      o \n");
            Serial.println("    +                             \n");
            Serial.println("+           +        +         +  \n");
            Serial.println("  o     o       +        o        \n");
            Serial.println("~~.___.~~~._ ,-------.      o     \n");
            Serial.println(".___.~~~.___.|    /\\_/\\           \n");
            Serial.println("~~.___.~~~._ |___( ^ .^) +    o   \n");
            Serial.println(".___.~~~.___.~ \"\"  ``            \n");
            Serial.println("o         o   +       o           \n");
            Serial.println("       +                          \n");
            Serial.println("  o         o      o     +      + \n");
            Serial.println("          +                        \n");
            Serial.println("+     o        o      +       o   \n");
            break;
        case 5:
            Serial.println("   +              o        +      \n");
            Serial.println("        o     +       +      o    \n");
            Serial.println(" +                             +  \n");
            Serial.println("         +        +         +     \n");
            Serial.println("     o       +        o           \n");
            Serial.println("~.___.~~~.__ ,-------.   o        \n");
            Serial.println("___.~~~.___.~|    /\\_/\\         \n");
            Serial.println("~.___.~~~.__ |___( ^ .^)   o      +\n");
            Serial.println("___.~~~.___.~~ \"\"  ``            \n");
            Serial.println("       o   +       o              \n");
            Serial.println("    +                             \n");
            Serial.println("         o      o     +      +    \n");
            Serial.println("      +                           \n");
            Serial.println("   o        o      +       o      \n");
            break;
        case 6:           
           
            Serial.println("   +              o        +      \n");
            Serial.println("     o     +       +      o       \n");
            Serial.println(" +                     +          \n");
            Serial.println("         +        +         +     \n");
            Serial.println("     o       +        o           \n");
            Serial.println("~.___.~~~.__ ,-------.o           \n");
            Serial.println("__.~~~.___.~~|    /\\_/\\           \n");
            Serial.println(".___.~~~.___ |___( ^ .^)  +     + \n");
            Serial.println("__.~~~.___.~~~ ``   ``           \n");
            Serial.println("       o   +       o              \n");
            Serial.println("    +                             \n");
            Serial.println("         o      o     +      +    \n");
            Serial.println("      +                           \n");
            Serial.println("   o        o      +       o      \n");

            break;
        case 7:   
            Serial.println("+              o        +       o \n");
            Serial.println("     o     +       +      o     + \n");
            Serial.println("                               +\n");
            Serial.println("      +        +         +     \n");
            Serial.println("  o       +        o           \n");
            Serial.println("___.~~~.___. ,-------.      o     \n");
            Serial.println("_.~~~.___.~~~|    /\\_/\\           \n");
            Serial.println("___.~~~.___. |___( ^ .^)  +     + \n");
            Serial.println("_.~~~.___.~~~. \"\"  \"\"            \n");
            Serial.println("       o   +       o           \n");
            Serial.println("    +                          \n");
            Serial.println("         o      o     +      + \n");
            Serial.println("      +                        \n");
            Serial.println("   o        o      +       o   \n");

            break;
        case 8:   
            Serial.println("   +      o     +              o  \n");
            Serial.println("       +             o     +      \n");
            Serial.println("   o          +                   \n");
            Serial.println("       o  +           +        +  \n");
            Serial.println("   +        o     o       +       \n");
            Serial.println("__.~~~.___.~ ,-------.      o  \n");
            Serial.println(".~~~.___.~~~.|    /\\_/\\           \n");
            Serial.println("__.~~~.___.~ |___( ^ .^) o    +    \n");
            Serial.println(".~~~.___.~~~._ \"\"   ``        \n");
            Serial.println("   o         o   +       o        \n");
            Serial.println("          +                       \n");
            Serial.println("     o         o      o     +     \n");
            Serial.println("            +                     \n");
            Serial.println("   +     o        o      +       o\n");

            break;
        case 9:   
            Serial.println("+      o     +              o     \n");
            Serial.println("    +             o     +       + \n");
            Serial.println("o          +                      \n");
            Serial.println("    o  +           +        +     \n");
            Serial.println("+        o     o       +        o \n");
            Serial.println("_.~~~.___.~~ ,-------.   o        \n");
            Serial.println("~~~.___.~~~._|    /\\_/\\           \n");
            Serial.println("_.~~~.___.~~ |___( ^ .^) +     +  \n");
            Serial.println("~~~.___.~~~.__ ``  \"\"           o\n");
            Serial.println("o         o   +       o           \n");
            Serial.println("       +                          \n");
            Serial.println("  o         o      o     +      + \n");
            Serial.println("         +                        \n");
            Serial.println("+     o        o      +       o   \n");
            break;
        default:
            Serial.println("+      o     +              o     \n");
            Serial.println("    +             o     +       + \n");
            Serial.println("o          +                      \n");
            Serial.println("    o  +           +        +     \n");
            Serial.println("+        o     o       +        o \n");
            Serial.println("_.~~~.___.~~ ,-------.   o        \n");
            Serial.println("~~~.___.~~~._|    /\\_/\\           \n");
            Serial.println("_.~~~.___.~~ |___( ^ .^) +     +  \n");
            Serial.println("~~~.___.~~~.__ ``  \"\"           o\n");
            Serial.println("o         o   +       o           \n");
            Serial.println("       +                          \n");
            Serial.println("  o         o      o     +      + \n");
            Serial.println("         +                        \n");
            Serial.println("+     o        o      +       o   \n");
        }
   
}


void setup() {
Serial.begin(9600);

}

void loop() {
  print_nyan();
  //nyan();

  
}
