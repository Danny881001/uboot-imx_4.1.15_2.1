#if defined (__ARM__)
#include <common.h>
#else
#include <stdio.h>
#define ARRAY_SIZE(x) (sizeof(x) / sizeof((x)[0]))
#endif

#if defined (__ARM__)
//English
const char STR_BOOTMENU[] = "Boot Menu";
const char STR_SYSSETING[] =  "System Setting";
const char STR_FUPDATE[] =  "Firmware Update";
const char STR_TOUCHCAL[] =  "Touch Calibration";
const char STR_STOPCD[] =  "Stop Countdown";
const char STR_LANGG[] =  "English";
const char STR_LANGG_[] =  "|";
const char STR_CALIBRAT_SUCCESS[]="Calibrate Successful,touch any area to boot continue";
const char STR_CALIBRAT_HELP0[]="Carefully press and hold stylus on the center of the target. ";
const char STR_CALIBRAT_HELP1[]="repeat as the target moves around the screen.";

const char STR_VERIFY_FAILED[]="verify failed,calibrate again";
const char STR_VERIFY[]="verify";
char const *eng_res[] =
{
    STR_BOOTMENU,
    STR_SYSSETING,
    STR_FUPDATE,
    STR_TOUCHCAL,
    STR_STOPCD,
    NULL,
    NULL,
#if !defined(__MT4523V__)
    STR_LANGG,
    STR_LANGG_,
    NULL,
#endif
    STR_CALIBRAT_SUCCESS,
    STR_CALIBRAT_HELP0,
    STR_CALIBRAT_HELP1,
    STR_VERIFY_FAILED,
    STR_VERIFY
};
#endif

//Chinese
#if !defined(__MT4523V__)

const unsigned char STR_CN_BOOTMENU[] =  "启动菜单";
const unsigned char STR_CN_SYSSETING[] =  "系统设置";
const unsigned char STR_CN_FUPDATE[] =  "固件更新";
const unsigned char STR_CN_TOUCHCAL[] =  "触控校正";
const unsigned char STR_CN_STOPCD[] =  "停止倒计时";
const unsigned char STR_CN_LANGG[] =  "中文";
const unsigned char STR_CN_CALIBRAT_SUCCESS[] =  "校正成功，触摸任意位置，继续启动";
const char STR_CN_CALIBRAT_HELP0[]="用指尖按住十字的中心";
const char STR_CN_CALIBRAT_HELP1[]="当十字移动时，重复上述动作";
const char STR_CN_VERIFY_FAILED[]="校验失败，重新校正";
const char STR_CN_VERIFY[]="校验";
unsigned char const *cn_res[] =
{
    STR_CN_BOOTMENU,
    STR_CN_SYSSETING,
    STR_CN_FUPDATE,
    STR_CN_TOUCHCAL,
    STR_CN_STOPCD,
    NULL,
    NULL,
    STR_CN_LANGG,
    NULL,
    NULL,
    STR_CN_CALIBRAT_SUCCESS,
    STR_CN_CALIBRAT_HELP0,
    STR_CN_CALIBRAT_HELP1,
    STR_CN_VERIFY_FAILED,
    STR_CN_VERIFY
};
#endif
#define S_NUMBER ARRAY_SIZE(cn_res)
//unsigned short S_NUMBER=__S_NUMBER;
