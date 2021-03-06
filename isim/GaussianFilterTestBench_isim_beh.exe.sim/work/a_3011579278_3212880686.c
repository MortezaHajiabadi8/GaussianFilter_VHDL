/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *STD_TEXTIO;
static const char *ng1 = "ramfile";
static const char *ng2 = "E:/Uni/term7/FPGA/Project/FPGA_FINAL_PROJECT/GaussianFilter.vhd";
extern char *IEEE_P_3620187407;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767632659_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


char *work_a_3011579278_3212880686_sub_370326582_3057020925(char *t1, char *t2, char *t3)
{
    char t4[208];
    char t5[24];
    char t17[32];
    char t26[131072];
    char t40[16];
    char *t0;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    int t35;
    int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t41;

LAB0:    t6 = ((STD_TEXTIO) + 3440);
    t7 = (t3 + 12U);
    t8 = *((unsigned int *)t7);
    t8 = (t8 * 1U);
    t9 = (t4 + 4U);
    t10 = xsi_create_file_variable_in_buffer(0, ng1, t6, t2, t8, 1);
    *((char **)t9) = t10;
    t11 = (t4 + 12U);
    t12 = ((STD_TEXTIO) + 3280);
    t13 = (t11 + 56U);
    *((char **)t13) = t12;
    t14 = (t11 + 40U);
    *((char **)t14) = 0;
    t15 = (t11 + 64U);
    *((int *)t15) = 1;
    t16 = (t11 + 48U);
    *((char **)t16) = 0;
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 16383;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (16383 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t17 + 16U);
    t22 = (t19 + 0U);
    *((int *)t22) = 7;
    t22 = (t19 + 4U);
    *((int *)t22) = 0;
    t22 = (t19 + 8U);
    *((int *)t22) = -1;
    t23 = (0 - 7);
    t21 = (t23 * -1);
    t21 = (t21 + 1);
    t22 = (t19 + 12U);
    *((unsigned int *)t22) = t21;
    t22 = (t4 + 84U);
    t24 = (t1 + 7400);
    t25 = (t22 + 88U);
    *((char **)t25) = t24;
    t27 = (t22 + 56U);
    *((char **)t27) = t26;
    xsi_type_set_default_value(t24, t26, 0);
    t28 = (t22 + 64U);
    t29 = (t24 + 80U);
    t30 = *((char **)t29);
    *((char **)t28) = t30;
    t31 = (t22 + 80U);
    *((unsigned int *)t31) = 131072U;
    t32 = (t5 + 4U);
    t33 = (t2 != 0);
    if (t33 == 1)
        goto LAB3;

LAB2:    t34 = (t5 + 12U);
    *((char **)t34) = t3;
    t35 = 0;
    t36 = 16383;

LAB4:    if (t35 <= t36)
        goto LAB5;

LAB7:    t6 = (t22 + 56U);
    t7 = *((char **)t6);
    t33 = (131072U != 131072U);
    if (t33 == 1)
        goto LAB9;

LAB10:    t0 = xsi_get_transient_memory(131072U);
    memcpy(t0, t7, 131072U);

LAB1:    xsi_access_variable_delete(t11);
    t6 = (t4 + 4U);
    t7 = *((char **)t6);
    xsi_delete_file_variable(t7);
    return t0;
LAB3:    *((char **)t32) = t2;
    goto LAB2;

LAB5:    t37 = (t4 + 4U);
    t38 = *((char **)t37);
    std_textio_readline(STD_TEXTIO, (char *)0, t38, t11);
    t6 = (t22 + 56U);
    t7 = *((char **)t6);
    t20 = (t35 - 0);
    t8 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t35);
    t21 = (8U * t8);
    t39 = (0 + t21);
    t6 = (t7 + t39);
    t9 = (t40 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 7;
    t10 = (t9 + 4U);
    *((int *)t10) = 0;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t23 = (0 - 7);
    t41 = (t23 * -1);
    t41 = (t41 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t41;
    std_textio_read4(STD_TEXTIO, (char *)0, t11, t6, t40);

LAB6:    if (t35 == t36)
        goto LAB7;

LAB8:    t20 = (t35 + 1);
    t35 = t20;
    goto LAB4;

LAB9:    xsi_size_not_matching(131072U, 131072U, 0);
    goto LAB10;

LAB11:;
}

static void work_a_3011579278_3212880686_p_0(char *t0)
{
    char t8[16];
    char t9[16];
    char t24[16];
    char t34[16];
    char t47[16];
    char t48[16];
    char t49[16];
    char t50[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    int t15;
    int t16;
    char *t17;
    int t18;
    int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned char t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;

LAB0:    xsi_set_current_line(81, ng2);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5480);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(82, ng2);
    t4 = (t0 + 1512U);
    t10 = *((char **)t4);
    t4 = (t0 + 2152U);
    t11 = *((char **)t4);
    t12 = *((int *)t11);
    t4 = (t0 + 1672U);
    t13 = *((char **)t4);
    t14 = *((int *)t13);
    t15 = (t12 - t14);
    t16 = (t15 - 1);
    t4 = (t0 + 1992U);
    t17 = *((char **)t4);
    t18 = *((int *)t17);
    t19 = (t16 + t18);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t19);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t4 = (t10 + t23);
    t25 = (t24 + 0U);
    t26 = (t25 + 0U);
    *((int *)t26) = 7;
    t26 = (t25 + 4U);
    *((int *)t26) = 0;
    t26 = (t25 + 8U);
    *((int *)t26) = -1;
    t27 = (0 - 7);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t26 = (t25 + 12U);
    *((unsigned int *)t26) = t28;
    t26 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t9, t4, t24);
    t29 = (t0 + 1352U);
    t30 = *((char **)t29);
    t31 = (0 - 0);
    t28 = (t31 * 1);
    t32 = (8U * t28);
    t33 = (0 + t32);
    t29 = (t30 + t33);
    t35 = (t34 + 0U);
    t36 = (t35 + 0U);
    *((int *)t36) = 7;
    t36 = (t35 + 4U);
    *((int *)t36) = 0;
    t36 = (t35 + 8U);
    *((int *)t36) = -1;
    t37 = (0 - 7);
    t38 = (t37 * -1);
    t38 = (t38 + 1);
    t36 = (t35 + 12U);
    *((unsigned int *)t36) = t38;
    t36 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t8, t26, t9, t29, t34);
    t39 = (t8 + 12U);
    t38 = *((unsigned int *)t39);
    t40 = (1U * t38);
    t41 = (16U != t40);
    if (t41 == 1)
        goto LAB8;

LAB9:    t42 = (t0 + 5576);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t36, 16U);
    xsi_driver_first_trans_fast(t42);
    xsi_set_current_line(83, ng2);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t2 = (t0 + 1672U);
    t10 = *((char **)t2);
    t14 = *((int *)t10);
    t15 = (t12 - t14);
    t2 = (t0 + 1992U);
    t11 = *((char **)t2);
    t16 = *((int *)t11);
    t18 = (t15 + t16);
    t19 = (t18 - 0);
    t21 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t18);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t2 = (t4 + t23);
    t13 = (t24 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 7;
    t17 = (t13 + 4U);
    *((int *)t17) = 0;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t20 = (0 - 7);
    t28 = (t20 * -1);
    t28 = (t28 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t28;
    t17 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t9, t2, t24);
    t25 = (t0 + 1352U);
    t26 = *((char **)t25);
    t27 = (1 - 0);
    t28 = (t27 * 1);
    t32 = (8U * t28);
    t33 = (0 + t32);
    t25 = (t26 + t33);
    t29 = (t34 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 7;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 7);
    t38 = (t31 * -1);
    t38 = (t38 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t38;
    t30 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t8, t17, t9, t25, t34);
    t35 = (t8 + 12U);
    t38 = *((unsigned int *)t35);
    t40 = (1U * t38);
    t1 = (16U != t40);
    if (t1 == 1)
        goto LAB10;

LAB11:    t36 = (t0 + 5640);
    t39 = (t36 + 56U);
    t42 = *((char **)t39);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t30, 16U);
    xsi_driver_first_trans_fast(t36);
    xsi_set_current_line(84, ng2);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t2 = (t0 + 1672U);
    t10 = *((char **)t2);
    t14 = *((int *)t10);
    t15 = (t12 - t14);
    t16 = (t15 + 1);
    t2 = (t0 + 1992U);
    t11 = *((char **)t2);
    t18 = *((int *)t11);
    t19 = (t16 + t18);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t19);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t2 = (t4 + t23);
    t13 = (t24 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 7;
    t17 = (t13 + 4U);
    *((int *)t17) = 0;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t27 = (0 - 7);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t28;
    t17 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t9, t2, t24);
    t25 = (t0 + 1352U);
    t26 = *((char **)t25);
    t31 = (2 - 0);
    t28 = (t31 * 1);
    t32 = (8U * t28);
    t33 = (0 + t32);
    t25 = (t26 + t33);
    t29 = (t34 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 7;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t37 = (0 - 7);
    t38 = (t37 * -1);
    t38 = (t38 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t38;
    t30 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t8, t17, t9, t25, t34);
    t35 = (t8 + 12U);
    t38 = *((unsigned int *)t35);
    t40 = (1U * t38);
    t1 = (16U != t40);
    if (t1 == 1)
        goto LAB12;

LAB13:    t36 = (t0 + 5704);
    t39 = (t36 + 56U);
    t42 = *((char **)t39);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t30, 16U);
    xsi_driver_first_trans_fast(t36);
    xsi_set_current_line(86, ng2);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t2 = (t0 + 1992U);
    t10 = *((char **)t2);
    t14 = *((int *)t10);
    t15 = (t12 + t14);
    t16 = (t15 - 1);
    t18 = (t16 - 0);
    t21 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t16);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t2 = (t4 + t23);
    t11 = (t24 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 7;
    t13 = (t11 + 4U);
    *((int *)t13) = 0;
    t13 = (t11 + 8U);
    *((int *)t13) = -1;
    t19 = (0 - 7);
    t28 = (t19 * -1);
    t28 = (t28 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t28;
    t13 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t9, t2, t24);
    t17 = (t0 + 1352U);
    t25 = *((char **)t17);
    t20 = (3 - 0);
    t28 = (t20 * 1);
    t32 = (8U * t28);
    t33 = (0 + t32);
    t17 = (t25 + t33);
    t26 = (t34 + 0U);
    t29 = (t26 + 0U);
    *((int *)t29) = 7;
    t29 = (t26 + 4U);
    *((int *)t29) = 0;
    t29 = (t26 + 8U);
    *((int *)t29) = -1;
    t27 = (0 - 7);
    t38 = (t27 * -1);
    t38 = (t38 + 1);
    t29 = (t26 + 12U);
    *((unsigned int *)t29) = t38;
    t29 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t8, t13, t9, t17, t34);
    t30 = (t8 + 12U);
    t38 = *((unsigned int *)t30);
    t40 = (1U * t38);
    t1 = (16U != t40);
    if (t1 == 1)
        goto LAB14;

LAB15:    t35 = (t0 + 5768);
    t36 = (t35 + 56U);
    t39 = *((char **)t36);
    t42 = (t39 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t29, 16U);
    xsi_driver_first_trans_fast(t35);
    xsi_set_current_line(87, ng2);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t2 = (t0 + 1992U);
    t10 = *((char **)t2);
    t14 = *((int *)t10);
    t15 = (t12 + t14);
    t16 = (t15 - 0);
    t21 = (t16 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t15);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t2 = (t4 + t23);
    t11 = (t24 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 7;
    t13 = (t11 + 4U);
    *((int *)t13) = 0;
    t13 = (t11 + 8U);
    *((int *)t13) = -1;
    t18 = (0 - 7);
    t28 = (t18 * -1);
    t28 = (t28 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t28;
    t13 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t9, t2, t24);
    t17 = (t0 + 1352U);
    t25 = *((char **)t17);
    t19 = (4 - 0);
    t28 = (t19 * 1);
    t32 = (8U * t28);
    t33 = (0 + t32);
    t17 = (t25 + t33);
    t26 = (t34 + 0U);
    t29 = (t26 + 0U);
    *((int *)t29) = 7;
    t29 = (t26 + 4U);
    *((int *)t29) = 0;
    t29 = (t26 + 8U);
    *((int *)t29) = -1;
    t20 = (0 - 7);
    t38 = (t20 * -1);
    t38 = (t38 + 1);
    t29 = (t26 + 12U);
    *((unsigned int *)t29) = t38;
    t29 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t8, t13, t9, t17, t34);
    t30 = (t8 + 12U);
    t38 = *((unsigned int *)t30);
    t40 = (1U * t38);
    t1 = (16U != t40);
    if (t1 == 1)
        goto LAB16;

LAB17:    t35 = (t0 + 5832);
    t36 = (t35 + 56U);
    t39 = *((char **)t36);
    t42 = (t39 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t29, 16U);
    xsi_driver_first_trans_fast(t35);
    xsi_set_current_line(88, ng2);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t14 = (t12 + 1);
    t2 = (t0 + 1992U);
    t10 = *((char **)t2);
    t15 = *((int *)t10);
    t16 = (t14 + t15);
    t18 = (t16 - 0);
    t21 = (t18 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t16);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t2 = (t4 + t23);
    t11 = (t24 + 0U);
    t13 = (t11 + 0U);
    *((int *)t13) = 7;
    t13 = (t11 + 4U);
    *((int *)t13) = 0;
    t13 = (t11 + 8U);
    *((int *)t13) = -1;
    t19 = (0 - 7);
    t28 = (t19 * -1);
    t28 = (t28 + 1);
    t13 = (t11 + 12U);
    *((unsigned int *)t13) = t28;
    t13 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t9, t2, t24);
    t17 = (t0 + 1352U);
    t25 = *((char **)t17);
    t20 = (5 - 0);
    t28 = (t20 * 1);
    t32 = (8U * t28);
    t33 = (0 + t32);
    t17 = (t25 + t33);
    t26 = (t34 + 0U);
    t29 = (t26 + 0U);
    *((int *)t29) = 7;
    t29 = (t26 + 4U);
    *((int *)t29) = 0;
    t29 = (t26 + 8U);
    *((int *)t29) = -1;
    t27 = (0 - 7);
    t38 = (t27 * -1);
    t38 = (t38 + 1);
    t29 = (t26 + 12U);
    *((unsigned int *)t29) = t38;
    t29 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t8, t13, t9, t17, t34);
    t30 = (t8 + 12U);
    t38 = *((unsigned int *)t30);
    t40 = (1U * t38);
    t1 = (16U != t40);
    if (t1 == 1)
        goto LAB18;

LAB19:    t35 = (t0 + 5896);
    t36 = (t35 + 56U);
    t39 = *((char **)t36);
    t42 = (t39 + 56U);
    t43 = *((char **)t42);
    memcpy(t43, t29, 16U);
    xsi_driver_first_trans_fast(t35);
    xsi_set_current_line(90, ng2);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t2 = (t0 + 1672U);
    t10 = *((char **)t2);
    t14 = *((int *)t10);
    t15 = (t12 + t14);
    t16 = (t15 - 1);
    t2 = (t0 + 1992U);
    t11 = *((char **)t2);
    t18 = *((int *)t11);
    t19 = (t16 + t18);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t19);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t2 = (t4 + t23);
    t13 = (t24 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 7;
    t17 = (t13 + 4U);
    *((int *)t17) = 0;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t27 = (0 - 7);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t28;
    t17 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t9, t2, t24);
    t25 = (t0 + 1352U);
    t26 = *((char **)t25);
    t31 = (6 - 0);
    t28 = (t31 * 1);
    t32 = (8U * t28);
    t33 = (0 + t32);
    t25 = (t26 + t33);
    t29 = (t34 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 7;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t37 = (0 - 7);
    t38 = (t37 * -1);
    t38 = (t38 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t38;
    t30 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t8, t17, t9, t25, t34);
    t35 = (t8 + 12U);
    t38 = *((unsigned int *)t35);
    t40 = (1U * t38);
    t1 = (16U != t40);
    if (t1 == 1)
        goto LAB20;

LAB21:    t36 = (t0 + 5960);
    t39 = (t36 + 56U);
    t42 = *((char **)t39);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t30, 16U);
    xsi_driver_first_trans_fast(t36);
    xsi_set_current_line(91, ng2);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t2 = (t0 + 1672U);
    t10 = *((char **)t2);
    t14 = *((int *)t10);
    t15 = (t12 + t14);
    t2 = (t0 + 1992U);
    t11 = *((char **)t2);
    t16 = *((int *)t11);
    t18 = (t15 + t16);
    t19 = (t18 - 0);
    t21 = (t19 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t18);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t2 = (t4 + t23);
    t13 = (t24 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 7;
    t17 = (t13 + 4U);
    *((int *)t17) = 0;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t20 = (0 - 7);
    t28 = (t20 * -1);
    t28 = (t28 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t28;
    t17 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t9, t2, t24);
    t25 = (t0 + 1352U);
    t26 = *((char **)t25);
    t27 = (7 - 0);
    t28 = (t27 * 1);
    t32 = (8U * t28);
    t33 = (0 + t32);
    t25 = (t26 + t33);
    t29 = (t34 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 7;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t31 = (0 - 7);
    t38 = (t31 * -1);
    t38 = (t38 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t38;
    t30 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t8, t17, t9, t25, t34);
    t35 = (t8 + 12U);
    t38 = *((unsigned int *)t35);
    t40 = (1U * t38);
    t1 = (16U != t40);
    if (t1 == 1)
        goto LAB22;

LAB23:    t36 = (t0 + 6024);
    t39 = (t36 + 56U);
    t42 = *((char **)t39);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t30, 16U);
    xsi_driver_first_trans_fast(t36);
    xsi_set_current_line(92, ng2);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t12 = *((int *)t5);
    t2 = (t0 + 1672U);
    t10 = *((char **)t2);
    t14 = *((int *)t10);
    t15 = (t12 + t14);
    t16 = (t15 + 1);
    t2 = (t0 + 1992U);
    t11 = *((char **)t2);
    t18 = *((int *)t11);
    t19 = (t16 + t18);
    t20 = (t19 - 0);
    t21 = (t20 * 1);
    xsi_vhdl_check_range_of_index(0, 16383, 1, t19);
    t22 = (8U * t21);
    t23 = (0 + t22);
    t2 = (t4 + t23);
    t13 = (t24 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 7;
    t17 = (t13 + 4U);
    *((int *)t17) = 0;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t27 = (0 - 7);
    t28 = (t27 * -1);
    t28 = (t28 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t28;
    t17 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t9, t2, t24);
    t25 = (t0 + 1352U);
    t26 = *((char **)t25);
    t31 = (8 - 0);
    t28 = (t31 * 1);
    t32 = (8U * t28);
    t33 = (0 + t32);
    t25 = (t26 + t33);
    t29 = (t34 + 0U);
    t30 = (t29 + 0U);
    *((int *)t30) = 7;
    t30 = (t29 + 4U);
    *((int *)t30) = 0;
    t30 = (t29 + 8U);
    *((int *)t30) = -1;
    t37 = (0 - 7);
    t38 = (t37 * -1);
    t38 = (t38 + 1);
    t30 = (t29 + 12U);
    *((unsigned int *)t30) = t38;
    t30 = ieee_p_3620187407_sub_767632659_3965413181(IEEE_P_3620187407, t8, t17, t9, t25, t34);
    t35 = (t8 + 12U);
    t38 = *((unsigned int *)t35);
    t40 = (1U * t38);
    t1 = (16U != t40);
    if (t1 == 1)
        goto LAB24;

LAB25:    t36 = (t0 + 6088);
    t39 = (t36 + 56U);
    t42 = *((char **)t39);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    memcpy(t44, t30, 16U);
    xsi_driver_first_trans_fast(t36);
    xsi_set_current_line(94, ng2);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 10860U);
    t5 = (t0 + 2472U);
    t10 = *((char **)t5);
    t5 = (t0 + 10860U);
    t11 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t50, t4, t2, t10, t5);
    t13 = (t0 + 2632U);
    t17 = *((char **)t13);
    t13 = (t0 + 10860U);
    t25 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t49, t11, t50, t17, t13);
    t26 = (t0 + 2792U);
    t29 = *((char **)t26);
    t26 = (t0 + 10860U);
    t30 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t48, t25, t49, t29, t26);
    t35 = (t0 + 2952U);
    t36 = *((char **)t35);
    t35 = (t0 + 10860U);
    t39 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t47, t30, t48, t36, t35);
    t42 = (t0 + 3112U);
    t43 = *((char **)t42);
    t42 = (t0 + 10860U);
    t44 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t34, t39, t47, t43, t42);
    t45 = (t0 + 3272U);
    t46 = *((char **)t45);
    t45 = (t0 + 10860U);
    t51 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t24, t44, t34, t46, t45);
    t52 = (t0 + 3432U);
    t53 = *((char **)t52);
    t52 = (t0 + 10860U);
    t54 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t9, t51, t24, t53, t52);
    t55 = (t0 + 3592U);
    t56 = *((char **)t55);
    t55 = (t0 + 10860U);
    t57 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t8, t54, t9, t56, t55);
    t58 = (t8 + 12U);
    t21 = *((unsigned int *)t58);
    t22 = (1U * t21);
    t1 = (16U != t22);
    if (t1 == 1)
        goto LAB26;

LAB27:    t59 = (t0 + 6152);
    t60 = (t59 + 56U);
    t61 = *((char **)t60);
    t62 = (t61 + 56U);
    t63 = *((char **)t62);
    memcpy(t63, t57, 16U);
    xsi_driver_first_trans_fast(t59);
    xsi_set_current_line(96, ng2);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t14 = (t12 + 1);
    t2 = (t0 + 6216);
    t5 = (t2 + 56U);
    t10 = *((char **)t5);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    *((int *)t13) = t14;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(97, ng2);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t12 = *((int *)t4);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t14 = *((int *)t5);
    t15 = (t14 - 2);
    t1 = (t12 >= t15);
    if (t1 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_size_not_matching(16U, t40, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(16U, t40, 0);
    goto LAB11;

LAB12:    xsi_size_not_matching(16U, t40, 0);
    goto LAB13;

LAB14:    xsi_size_not_matching(16U, t40, 0);
    goto LAB15;

LAB16:    xsi_size_not_matching(16U, t40, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(16U, t40, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(16U, t40, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(16U, t40, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(16U, t40, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(16U, t22, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(98, ng2);
    t2 = (t0 + 1992U);
    t10 = *((char **)t2);
    t16 = *((int *)t10);
    t2 = (t0 + 1672U);
    t11 = *((char **)t2);
    t18 = *((int *)t11);
    t19 = (t16 + t18);
    t2 = (t0 + 6280);
    t13 = (t2 + 56U);
    t17 = *((char **)t13);
    t25 = (t17 + 56U);
    t26 = *((char **)t25);
    *((int *)t26) = t19;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(99, ng2);
    t2 = (t0 + 6216);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t10 = (t5 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = 1;
    xsi_driver_first_trans_fast(t2);
    goto LAB29;

}

static void work_a_3011579278_3212880686_p_1(char *t0)
{
    char t9[16];
    char t11[16];
    char t16[16];
    char *t1;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t10;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(104, ng2);

LAB3:    t1 = (t0 + 142224);
    t3 = (t0 + 3752U);
    t4 = *((char **)t3);
    t5 = (15 - 15);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t10 = ((IEEE_P_2592010699) + 4024);
    t12 = (t11 + 0U);
    t13 = (t12 + 0U);
    *((int *)t13) = 0;
    t13 = (t12 + 4U);
    *((int *)t13) = 3;
    t13 = (t12 + 8U);
    *((int *)t13) = 1;
    t14 = (3 - 0);
    t15 = (t14 * 1);
    t15 = (t15 + 1);
    t13 = (t12 + 12U);
    *((unsigned int *)t13) = t15;
    t13 = (t16 + 0U);
    t17 = (t13 + 0U);
    *((int *)t17) = 15;
    t17 = (t13 + 4U);
    *((int *)t17) = 4;
    t17 = (t13 + 8U);
    *((int *)t17) = -1;
    t18 = (4 - 15);
    t15 = (t18 * -1);
    t15 = (t15 + 1);
    t17 = (t13 + 12U);
    *((unsigned int *)t17) = t15;
    t8 = xsi_base_array_concat(t8, t9, t10, (char)97, t1, t11, (char)97, t3, t16, (char)101);
    t15 = (4U + 12U);
    t19 = (16U != t15);
    if (t19 == 1)
        goto LAB5;

LAB6:    t17 = (t0 + 6344);
    t20 = (t17 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t8, 16U);
    xsi_driver_first_trans_fast_port(t17);

LAB2:    t24 = (t0 + 5496);
    *((int *)t24) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t15, 0);
    goto LAB6;

}


extern void work_a_3011579278_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3011579278_3212880686_p_0,(void *)work_a_3011579278_3212880686_p_1};
	static char *se[] = {(void *)work_a_3011579278_3212880686_sub_370326582_3057020925};
	xsi_register_didat("work_a_3011579278_3212880686", "isim/GaussianFilterTestBench_isim_beh.exe.sim/work/a_3011579278_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
