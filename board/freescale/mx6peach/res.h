#ifndef __STRING_RES_H__
#define __STRING_RES_H__

#if defined(__ET050__)

#define WIN_W       (800*LCD_X_MAX/1000)
#define WIN_H   (550*WIN_W/1000)
#define BUTN_W      (718*718*WIN_W/(1000*1000))
#define BUTN1_y0    (WIN_y0+ (WIN_H - BUTN_H*4 - BUTN_INTERVAL*3 )/2 +10)
#define BUTN7_y1    (BUTN7_y0 + 20)

#else

#define WIN_W       (618*LCD_X_MAX/1000)
#define WIN_H   (618*WIN_W/1000)
#define BUTN_W      (618*618*WIN_W/(1000*1000))
#define BUTN1_y0    (WIN_y0+ (WIN_H - BUTN_H*4 - BUTN_INTERVAL*3 )/2)
#define BUTN7_y1    (BUTN7_y0 + 40)

#endif


#define WIN_x0       (LCD_X_MAX-WIN_W)/2
#define WIN_y0   (LCD_Y_MAX/2 -WIN_H/2)
#define WIN_x1       (WIN_x0+WIN_W)
#define WIN_y1   (WIN_y0+WIN_H)
#define TITLE_H 24


#define BUTN_H  (WIN_H/7)
#define BUTN_INTERVAL   (BUTN_H/3)

#define BUTN1_x0    (WIN_x0+ (WIN_W-BUTN_W)/2)

#define BUTN1_x1    (WIN_x0+ BUTN_W+((WIN_W-BUTN_W)/2))
#define BUTN1_y1    (BUTN1_y0+ BUTN_H)

#define BUTN2_x0    BUTN1_x0
#define BUTN2_y0    (BUTN1_y1 +BUTN_INTERVAL)
#define BUTN2_x1    BUTN1_x1
#define BUTN2_y1    (BUTN2_y0+ BUTN_H)

#define BUTN3_x0    BUTN2_x0
#define BUTN3_y0    (BUTN2_y1 +BUTN_INTERVAL)
#define BUTN3_x1    BUTN2_x1
#define BUTN3_y1    (BUTN3_y0+ BUTN_H)

#define BUTN4_x0    BUTN3_x0
#define BUTN4_y0    (BUTN3_y1 +BUTN_INTERVAL)
#define BUTN4_x1    BUTN3_x1
#define BUTN4_y1    (BUTN4_y0+ BUTN_H)

#define BUTN5_x0    (WIN_x1 - (20+4))
#define BUTN5_y0    (WIN_y0 + 2+4)
#define BUTN5_x1    (BUTN5_x0 + 20)
#define BUTN5_y1    (BUTN5_y0 + 20)

#define BUTN6_x0    (BUTN5_x0-5)
#define BUTN6_y0    (BUTN5_y0-5)
#define BUTN6_x1    (BUTN5_x1+5)
#define BUTN6_y1    (BUTN5_y1+5)

#define BUTN7_x0    (LCD_X_MAX - 150)
#define BUTN7_y0    (0)
#define BUTN7_x1    (BUTN7_x0+60)

#define BUTN8_x0    (BUTN7_x1)
#define BUTN8_y0    (BUTN7_y0)
#define BUTN8_x1    (BUTN8_x0+24)
#define BUTN8_y1    (BUTN7_y1)

#define BUTN9_x0    (BUTN8_x1)
#define BUTN9_y0    (BUTN8_y0)
#define BUTN9_x1    (BUTN9_x0+60)
#define BUTN9_y1    (BUTN8_y1)

typedef enum
{
    WINDOW0=0,
    BUTTON_1=1,
    BUTTON_2,
    BUTTON_3,
    BUTTON_4,
    BUTTON_5,
    BUTTON_6,
#if !defined(__MT4523V__)
    BUTTON_7,
    BUTTON_8,
    BUTTON_9,
#endif
    MAX_BUTTON,	//8
    OTHER_TCS=MAX_BUTTON,	//STR_CALIBRAT_SUCCESS ID=6
    OTHER_TC_HELP0,	
    OTHER_TC_HELP1,
    OTHER_TCV_FAILED,
    OTHER_TCV_VERIFY,
} BUTTON_ID;


extern char const *eng_res[] ;
extern char const *cn_res[] ;

#define    FONTHEIGHT                8
#define    FONTWIDTH                8

#define    CHS_FONTHEIGHT                16
#define    CHS_FONTWIDTH                16

#endif
