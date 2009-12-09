/*
--- DO NOT EDIT THIS FILE !!! ---

This file has been generated automatically with 'jsapigen'.

jsapigen is a glue-code generator for SpiderMonkey. It is distributed
under the conditions of version 3 of the GNU General Public License.
Please have a look at http://jsapigen.sourceforge.net.

This file is NOT part of jsapigen and is NOT necessarily covered by
jsapigen's license. For licensing information regarding this file,
please refer to the software package which it is part of.

*/
#include <string.h>
#include <wchar.h>
#include <jsapi.h>
#ifndef JS_THREADSAFE
#if JS_VERSION <= 170
#define jsrefcount int
#define JS_BeginRequest(cx)
#define JS_EndRequest(cx)
#define JS_SuspendRequest(cx)
#define JS_ResumeRequest(cx, saveDepth)
#endif
#endif
#ifndef JS_FS
#define JS_FS(name, call, nargs, flags, extra) {name, call, nargs, flags, extra}
#endif
#ifndef JS_FS_END
#define JS_FS_END {NULL, NULL, 0, 0, 0}
#endif
static JSBool
jjjsTestFacInt(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var2;
    void *var3;
    int var6;
    jsval var7;
    JSObject *var8;
    JSObject *var9;
    JSClass *var10;
    char *var12;
    JSBool var14;
    jsval var15;
    JSObject *var16;
    jsval var373;
    char *var20;
    JSBool var17;
    jsval var18;
    JSObject *var19;
    jsval var374;
    JSObject *var11;
    jsval var375;
    JSBool var1;
    var2 = NULL;
    var3 = NULL;
    var6 = 0;
    var7 = JSVAL_NULL;
    var8 = NULL;
    var9 = NULL;
    var10 = NULL;
    var12 = NULL;
    var14 = JS_FALSE;
    var15 = JSVAL_NULL;
    var16 = NULL;
    var373 = JSVAL_NULL;
    var20 = NULL;
    var17 = JS_FALSE;
    var18 = JSVAL_NULL;
    var19 = NULL;
    var374 = JSVAL_NULL;
    var11 = NULL;
    var375 = JSVAL_NULL;
    var1 = JS_FALSE;
    var2 = obj;
    var6 = argc;
    var3 = admFacInt();
    var9 = JS_GetGlobalObject(cx);
    var12 = "bool";
    var14 = JS_GetProperty(cx, var9, var12, &var15);
    if (JS_ValueToObject(cx, var15, &var16) != JS_TRUE) {
        goto do_return;
    }
    var373 = OBJECT_TO_JSVAL(var16);
    argv[argc+0] = var373;
    var20 = "prototype";
    var17 = JS_GetProperty(cx, var16, var20, &var18);
    if (JS_ValueToObject(cx, var18, &var19) != JS_TRUE) {
        goto do_return;
    }
    var374 = OBJECT_TO_JSVAL(var19);
    argv[argc+1] = var374;
    var10 = JS_GET_CLASS(cx, var19);
    var11 = NULL;
    var8 = JS_NewObject(cx, var10, var11, var9);
    var375 = OBJECT_TO_JSVAL(var8);
    argv[argc+2] = var375;
    if (JS_SetPrivate(cx, var8, var3) != JS_TRUE) {
        goto do_return;
    }
    var7 = OBJECT_TO_JSVAL(var8);
    if (rval) {
        *rval = var7;
    }
    var1 = JS_TRUE;
    do_return:
    return var1;
}
static JSBool
jjjsTestFacFloat(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var22;
    void *var23;
    int var26;
    jsval var27;
    JSObject *var28;
    JSObject *var29;
    JSClass *var30;
    char *var32;
    JSBool var34;
    jsval var35;
    JSObject *var36;
    jsval var376;
    char *var40;
    JSBool var37;
    jsval var38;
    JSObject *var39;
    jsval var377;
    JSObject *var31;
    jsval var378;
    JSBool var21;
    var22 = NULL;
    var23 = NULL;
    var26 = 0;
    var27 = JSVAL_NULL;
    var28 = NULL;
    var29 = NULL;
    var30 = NULL;
    var32 = NULL;
    var34 = JS_FALSE;
    var35 = JSVAL_NULL;
    var36 = NULL;
    var376 = JSVAL_NULL;
    var40 = NULL;
    var37 = JS_FALSE;
    var38 = JSVAL_NULL;
    var39 = NULL;
    var377 = JSVAL_NULL;
    var31 = NULL;
    var378 = JSVAL_NULL;
    var21 = JS_FALSE;
    var22 = obj;
    var26 = argc;
    var23 = admFacFloat();
    var29 = JS_GetGlobalObject(cx);
    var32 = "bool";
    var34 = JS_GetProperty(cx, var29, var32, &var35);
    if (JS_ValueToObject(cx, var35, &var36) != JS_TRUE) {
        goto do_return;
    }
    var376 = OBJECT_TO_JSVAL(var36);
    argv[argc+0] = var376;
    var40 = "prototype";
    var37 = JS_GetProperty(cx, var36, var40, &var38);
    if (JS_ValueToObject(cx, var38, &var39) != JS_TRUE) {
        goto do_return;
    }
    var377 = OBJECT_TO_JSVAL(var39);
    argv[argc+1] = var377;
    var30 = JS_GET_CLASS(cx, var39);
    var31 = NULL;
    var28 = JS_NewObject(cx, var30, var31, var29);
    var378 = OBJECT_TO_JSVAL(var28);
    argv[argc+2] = var378;
    if (JS_SetPrivate(cx, var28, var23) != JS_TRUE) {
        goto do_return;
    }
    var27 = OBJECT_TO_JSVAL(var28);
    if (rval) {
        *rval = var27;
    }
    var21 = JS_TRUE;
    do_return:
    return var21;
}
static JSBool
jjjsTestFacToggle(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var42;
    void *var43;
    int var46;
    jsval var47;
    JSObject *var48;
    JSObject *var49;
    JSClass *var50;
    char *var52;
    JSBool var54;
    jsval var55;
    JSObject *var56;
    jsval var379;
    char *var60;
    JSBool var57;
    jsval var58;
    JSObject *var59;
    jsval var380;
    JSObject *var51;
    jsval var381;
    JSBool var41;
    var42 = NULL;
    var43 = NULL;
    var46 = 0;
    var47 = JSVAL_NULL;
    var48 = NULL;
    var49 = NULL;
    var50 = NULL;
    var52 = NULL;
    var54 = JS_FALSE;
    var55 = JSVAL_NULL;
    var56 = NULL;
    var379 = JSVAL_NULL;
    var60 = NULL;
    var57 = JS_FALSE;
    var58 = JSVAL_NULL;
    var59 = NULL;
    var380 = JSVAL_NULL;
    var51 = NULL;
    var381 = JSVAL_NULL;
    var41 = JS_FALSE;
    var42 = obj;
    var46 = argc;
    var43 = admFacToggle();
    var49 = JS_GetGlobalObject(cx);
    var52 = "bool";
    var54 = JS_GetProperty(cx, var49, var52, &var55);
    if (JS_ValueToObject(cx, var55, &var56) != JS_TRUE) {
        goto do_return;
    }
    var379 = OBJECT_TO_JSVAL(var56);
    argv[argc+0] = var379;
    var60 = "prototype";
    var57 = JS_GetProperty(cx, var56, var60, &var58);
    if (JS_ValueToObject(cx, var58, &var59) != JS_TRUE) {
        goto do_return;
    }
    var380 = OBJECT_TO_JSVAL(var59);
    argv[argc+1] = var380;
    var50 = JS_GET_CLASS(cx, var59);
    var51 = NULL;
    var48 = JS_NewObject(cx, var50, var51, var49);
    var381 = OBJECT_TO_JSVAL(var48);
    argv[argc+2] = var381;
    if (JS_SetPrivate(cx, var48, var43) != JS_TRUE) {
        goto do_return;
    }
    var47 = OBJECT_TO_JSVAL(var48);
    if (rval) {
        *rval = var47;
    }
    var41 = JS_TRUE;
    do_return:
    return var41;
}
static JSBool
jjjsTestFacMenu(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var62;
    void *var63;
    int var66;
    jsval var67;
    JSObject *var68;
    JSObject *var69;
    JSClass *var70;
    char *var72;
    JSBool var74;
    jsval var75;
    JSObject *var76;
    jsval var382;
    char *var80;
    JSBool var77;
    jsval var78;
    JSObject *var79;
    jsval var383;
    JSObject *var71;
    jsval var384;
    JSBool var61;
    var62 = NULL;
    var63 = NULL;
    var66 = 0;
    var67 = JSVAL_NULL;
    var68 = NULL;
    var69 = NULL;
    var70 = NULL;
    var72 = NULL;
    var74 = JS_FALSE;
    var75 = JSVAL_NULL;
    var76 = NULL;
    var382 = JSVAL_NULL;
    var80 = NULL;
    var77 = JS_FALSE;
    var78 = JSVAL_NULL;
    var79 = NULL;
    var383 = JSVAL_NULL;
    var71 = NULL;
    var384 = JSVAL_NULL;
    var61 = JS_FALSE;
    var62 = obj;
    var66 = argc;
    var63 = admFacMenu();
    var69 = JS_GetGlobalObject(cx);
    var72 = "bool";
    var74 = JS_GetProperty(cx, var69, var72, &var75);
    if (JS_ValueToObject(cx, var75, &var76) != JS_TRUE) {
        goto do_return;
    }
    var382 = OBJECT_TO_JSVAL(var76);
    argv[argc+0] = var382;
    var80 = "prototype";
    var77 = JS_GetProperty(cx, var76, var80, &var78);
    if (JS_ValueToObject(cx, var78, &var79) != JS_TRUE) {
        goto do_return;
    }
    var383 = OBJECT_TO_JSVAL(var79);
    argv[argc+1] = var383;
    var70 = JS_GET_CLASS(cx, var79);
    var71 = NULL;
    var68 = JS_NewObject(cx, var70, var71, var69);
    var384 = OBJECT_TO_JSVAL(var68);
    argv[argc+2] = var384;
    if (JS_SetPrivate(cx, var68, var63) != JS_TRUE) {
        goto do_return;
    }
    var67 = OBJECT_TO_JSVAL(var68);
    if (rval) {
        *rval = var67;
    }
    var61 = JS_TRUE;
    do_return:
    return var61;
}
static JSBool
jjjsTestFacFile(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var82;
    void *var83;
    int var86;
    jsval var87;
    JSObject *var88;
    JSObject *var89;
    JSClass *var90;
    char *var92;
    JSBool var94;
    jsval var95;
    JSObject *var96;
    jsval var385;
    char *var100;
    JSBool var97;
    jsval var98;
    JSObject *var99;
    jsval var386;
    JSObject *var91;
    jsval var387;
    JSBool var81;
    var82 = NULL;
    var83 = NULL;
    var86 = 0;
    var87 = JSVAL_NULL;
    var88 = NULL;
    var89 = NULL;
    var90 = NULL;
    var92 = NULL;
    var94 = JS_FALSE;
    var95 = JSVAL_NULL;
    var96 = NULL;
    var385 = JSVAL_NULL;
    var100 = NULL;
    var97 = JS_FALSE;
    var98 = JSVAL_NULL;
    var99 = NULL;
    var386 = JSVAL_NULL;
    var91 = NULL;
    var387 = JSVAL_NULL;
    var81 = JS_FALSE;
    var82 = obj;
    var86 = argc;
    var83 = admFacFile();
    var89 = JS_GetGlobalObject(cx);
    var92 = "bool";
    var94 = JS_GetProperty(cx, var89, var92, &var95);
    if (JS_ValueToObject(cx, var95, &var96) != JS_TRUE) {
        goto do_return;
    }
    var385 = OBJECT_TO_JSVAL(var96);
    argv[argc+0] = var385;
    var100 = "prototype";
    var97 = JS_GetProperty(cx, var96, var100, &var98);
    if (JS_ValueToObject(cx, var98, &var99) != JS_TRUE) {
        goto do_return;
    }
    var386 = OBJECT_TO_JSVAL(var99);
    argv[argc+1] = var386;
    var90 = JS_GET_CLASS(cx, var99);
    var91 = NULL;
    var88 = JS_NewObject(cx, var90, var91, var89);
    var387 = OBJECT_TO_JSVAL(var88);
    argv[argc+2] = var387;
    if (JS_SetPrivate(cx, var88, var83) != JS_TRUE) {
        goto do_return;
    }
    var87 = OBJECT_TO_JSVAL(var88);
    if (rval) {
        *rval = var87;
    }
    var81 = JS_TRUE;
    do_return:
    return var81;
}
static JSBool
jjjsTestFacBitrate(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var102;
    void *var103;
    int var106;
    jsval var107;
    JSObject *var108;
    JSObject *var109;
    JSClass *var110;
    char *var112;
    JSBool var114;
    jsval var115;
    JSObject *var116;
    jsval var388;
    char *var120;
    JSBool var117;
    jsval var118;
    JSObject *var119;
    jsval var389;
    JSObject *var111;
    jsval var390;
    JSBool var101;
    var102 = NULL;
    var103 = NULL;
    var106 = 0;
    var107 = JSVAL_NULL;
    var108 = NULL;
    var109 = NULL;
    var110 = NULL;
    var112 = NULL;
    var114 = JS_FALSE;
    var115 = JSVAL_NULL;
    var116 = NULL;
    var388 = JSVAL_NULL;
    var120 = NULL;
    var117 = JS_FALSE;
    var118 = JSVAL_NULL;
    var119 = NULL;
    var389 = JSVAL_NULL;
    var111 = NULL;
    var390 = JSVAL_NULL;
    var101 = JS_FALSE;
    var102 = obj;
    var106 = argc;
    var103 = admFacBitrate();
    var109 = JS_GetGlobalObject(cx);
    var112 = "bool";
    var114 = JS_GetProperty(cx, var109, var112, &var115);
    if (JS_ValueToObject(cx, var115, &var116) != JS_TRUE) {
        goto do_return;
    }
    var388 = OBJECT_TO_JSVAL(var116);
    argv[argc+0] = var388;
    var120 = "prototype";
    var117 = JS_GetProperty(cx, var116, var120, &var118);
    if (JS_ValueToObject(cx, var118, &var119) != JS_TRUE) {
        goto do_return;
    }
    var389 = OBJECT_TO_JSVAL(var119);
    argv[argc+1] = var389;
    var110 = JS_GET_CLASS(cx, var119);
    var111 = NULL;
    var108 = JS_NewObject(cx, var110, var111, var109);
    var390 = OBJECT_TO_JSVAL(var108);
    argv[argc+2] = var390;
    if (JS_SetPrivate(cx, var108, var103) != JS_TRUE) {
        goto do_return;
    }
    var107 = OBJECT_TO_JSVAL(var108);
    if (rval) {
        *rval = var107;
    }
    var101 = JS_TRUE;
    do_return:
    return var101;
}
static JSBool
jjjsTestFacBar(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var122;
    void *var123;
    int var126;
    jsval var127;
    JSObject *var128;
    JSObject *var129;
    JSClass *var130;
    char *var132;
    JSBool var134;
    jsval var135;
    JSObject *var136;
    jsval var391;
    char *var140;
    JSBool var137;
    jsval var138;
    JSObject *var139;
    jsval var392;
    JSObject *var131;
    jsval var393;
    JSBool var121;
    var122 = NULL;
    var123 = NULL;
    var126 = 0;
    var127 = JSVAL_NULL;
    var128 = NULL;
    var129 = NULL;
    var130 = NULL;
    var132 = NULL;
    var134 = JS_FALSE;
    var135 = JSVAL_NULL;
    var136 = NULL;
    var391 = JSVAL_NULL;
    var140 = NULL;
    var137 = JS_FALSE;
    var138 = JSVAL_NULL;
    var139 = NULL;
    var392 = JSVAL_NULL;
    var131 = NULL;
    var393 = JSVAL_NULL;
    var121 = JS_FALSE;
    var122 = obj;
    var126 = argc;
    var123 = admFacBar();
    var129 = JS_GetGlobalObject(cx);
    var132 = "bool";
    var134 = JS_GetProperty(cx, var129, var132, &var135);
    if (JS_ValueToObject(cx, var135, &var136) != JS_TRUE) {
        goto do_return;
    }
    var391 = OBJECT_TO_JSVAL(var136);
    argv[argc+0] = var391;
    var140 = "prototype";
    var137 = JS_GetProperty(cx, var136, var140, &var138);
    if (JS_ValueToObject(cx, var138, &var139) != JS_TRUE) {
        goto do_return;
    }
    var392 = OBJECT_TO_JSVAL(var139);
    argv[argc+1] = var392;
    var130 = JS_GET_CLASS(cx, var139);
    var131 = NULL;
    var128 = JS_NewObject(cx, var130, var131, var129);
    var393 = OBJECT_TO_JSVAL(var128);
    argv[argc+2] = var393;
    if (JS_SetPrivate(cx, var128, var123) != JS_TRUE) {
        goto do_return;
    }
    var127 = OBJECT_TO_JSVAL(var128);
    if (rval) {
        *rval = var127;
    }
    var121 = JS_TRUE;
    do_return:
    return var121;
}
static JSBool
jjjsTestFacRoText(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var142;
    void *var143;
    int var146;
    jsval var147;
    JSObject *var148;
    JSObject *var149;
    JSClass *var150;
    char *var152;
    JSBool var154;
    jsval var155;
    JSObject *var156;
    jsval var394;
    char *var160;
    JSBool var157;
    jsval var158;
    JSObject *var159;
    jsval var395;
    JSObject *var151;
    jsval var396;
    JSBool var141;
    var142 = NULL;
    var143 = NULL;
    var146 = 0;
    var147 = JSVAL_NULL;
    var148 = NULL;
    var149 = NULL;
    var150 = NULL;
    var152 = NULL;
    var154 = JS_FALSE;
    var155 = JSVAL_NULL;
    var156 = NULL;
    var394 = JSVAL_NULL;
    var160 = NULL;
    var157 = JS_FALSE;
    var158 = JSVAL_NULL;
    var159 = NULL;
    var395 = JSVAL_NULL;
    var151 = NULL;
    var396 = JSVAL_NULL;
    var141 = JS_FALSE;
    var142 = obj;
    var146 = argc;
    var143 = admFacRoText();
    var149 = JS_GetGlobalObject(cx);
    var152 = "bool";
    var154 = JS_GetProperty(cx, var149, var152, &var155);
    if (JS_ValueToObject(cx, var155, &var156) != JS_TRUE) {
        goto do_return;
    }
    var394 = OBJECT_TO_JSVAL(var156);
    argv[argc+0] = var394;
    var160 = "prototype";
    var157 = JS_GetProperty(cx, var156, var160, &var158);
    if (JS_ValueToObject(cx, var158, &var159) != JS_TRUE) {
        goto do_return;
    }
    var395 = OBJECT_TO_JSVAL(var159);
    argv[argc+1] = var395;
    var150 = JS_GET_CLASS(cx, var159);
    var151 = NULL;
    var148 = JS_NewObject(cx, var150, var151, var149);
    var396 = OBJECT_TO_JSVAL(var148);
    argv[argc+2] = var396;
    if (JS_SetPrivate(cx, var148, var143) != JS_TRUE) {
        goto do_return;
    }
    var147 = OBJECT_TO_JSVAL(var148);
    if (rval) {
        *rval = var147;
    }
    var141 = JS_TRUE;
    do_return:
    return var141;
}
static JSBool
jjjsTestFacText(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var162;
    void *var163;
    int var166;
    jsval var167;
    JSObject *var168;
    JSObject *var169;
    JSClass *var170;
    char *var172;
    JSBool var174;
    jsval var175;
    JSObject *var176;
    jsval var397;
    char *var180;
    JSBool var177;
    jsval var178;
    JSObject *var179;
    jsval var398;
    JSObject *var171;
    jsval var399;
    JSBool var161;
    var162 = NULL;
    var163 = NULL;
    var166 = 0;
    var167 = JSVAL_NULL;
    var168 = NULL;
    var169 = NULL;
    var170 = NULL;
    var172 = NULL;
    var174 = JS_FALSE;
    var175 = JSVAL_NULL;
    var176 = NULL;
    var397 = JSVAL_NULL;
    var180 = NULL;
    var177 = JS_FALSE;
    var178 = JSVAL_NULL;
    var179 = NULL;
    var398 = JSVAL_NULL;
    var171 = NULL;
    var399 = JSVAL_NULL;
    var161 = JS_FALSE;
    var162 = obj;
    var166 = argc;
    var163 = admFacText();
    var169 = JS_GetGlobalObject(cx);
    var172 = "bool";
    var174 = JS_GetProperty(cx, var169, var172, &var175);
    if (JS_ValueToObject(cx, var175, &var176) != JS_TRUE) {
        goto do_return;
    }
    var397 = OBJECT_TO_JSVAL(var176);
    argv[argc+0] = var397;
    var180 = "prototype";
    var177 = JS_GetProperty(cx, var176, var180, &var178);
    if (JS_ValueToObject(cx, var178, &var179) != JS_TRUE) {
        goto do_return;
    }
    var398 = OBJECT_TO_JSVAL(var179);
    argv[argc+1] = var398;
    var170 = JS_GET_CLASS(cx, var179);
    var171 = NULL;
    var168 = JS_NewObject(cx, var170, var171, var169);
    var399 = OBJECT_TO_JSVAL(var168);
    argv[argc+2] = var399;
    if (JS_SetPrivate(cx, var168, var163) != JS_TRUE) {
        goto do_return;
    }
    var167 = OBJECT_TO_JSVAL(var168);
    if (rval) {
        *rval = var167;
    }
    var161 = JS_TRUE;
    do_return:
    return var161;
}
static JSBool
jjjsTestFacTab(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var182;
    void *var183;
    int var186;
    jsval var187;
    JSObject *var188;
    JSObject *var189;
    JSClass *var190;
    char *var192;
    JSBool var194;
    jsval var195;
    JSObject *var196;
    jsval var400;
    char *var200;
    JSBool var197;
    jsval var198;
    JSObject *var199;
    jsval var401;
    JSObject *var191;
    jsval var402;
    JSBool var181;
    var182 = NULL;
    var183 = NULL;
    var186 = 0;
    var187 = JSVAL_NULL;
    var188 = NULL;
    var189 = NULL;
    var190 = NULL;
    var192 = NULL;
    var194 = JS_FALSE;
    var195 = JSVAL_NULL;
    var196 = NULL;
    var400 = JSVAL_NULL;
    var200 = NULL;
    var197 = JS_FALSE;
    var198 = JSVAL_NULL;
    var199 = NULL;
    var401 = JSVAL_NULL;
    var191 = NULL;
    var402 = JSVAL_NULL;
    var181 = JS_FALSE;
    var182 = obj;
    var186 = argc;
    var183 = admFacTab();
    var189 = JS_GetGlobalObject(cx);
    var192 = "bool";
    var194 = JS_GetProperty(cx, var189, var192, &var195);
    if (JS_ValueToObject(cx, var195, &var196) != JS_TRUE) {
        goto do_return;
    }
    var400 = OBJECT_TO_JSVAL(var196);
    argv[argc+0] = var400;
    var200 = "prototype";
    var197 = JS_GetProperty(cx, var196, var200, &var198);
    if (JS_ValueToObject(cx, var198, &var199) != JS_TRUE) {
        goto do_return;
    }
    var401 = OBJECT_TO_JSVAL(var199);
    argv[argc+1] = var401;
    var190 = JS_GET_CLASS(cx, var199);
    var191 = NULL;
    var188 = JS_NewObject(cx, var190, var191, var189);
    var402 = OBJECT_TO_JSVAL(var188);
    argv[argc+2] = var402;
    if (JS_SetPrivate(cx, var188, var183) != JS_TRUE) {
        goto do_return;
    }
    var187 = OBJECT_TO_JSVAL(var188);
    if (rval) {
        *rval = var187;
    }
    var181 = JS_TRUE;
    do_return:
    return var181;
}
static JSBool
jjjsTestFrame(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var202;
    void *var203;
    int var206;
    jsval var207;
    JSObject *var208;
    JSObject *var209;
    JSClass *var210;
    char *var212;
    JSBool var214;
    jsval var215;
    JSObject *var216;
    jsval var403;
    char *var220;
    JSBool var217;
    jsval var218;
    JSObject *var219;
    jsval var404;
    JSObject *var211;
    jsval var405;
    JSBool var201;
    var202 = NULL;
    var203 = NULL;
    var206 = 0;
    var207 = JSVAL_NULL;
    var208 = NULL;
    var209 = NULL;
    var210 = NULL;
    var212 = NULL;
    var214 = JS_FALSE;
    var215 = JSVAL_NULL;
    var216 = NULL;
    var403 = JSVAL_NULL;
    var220 = NULL;
    var217 = JS_FALSE;
    var218 = JSVAL_NULL;
    var219 = NULL;
    var404 = JSVAL_NULL;
    var211 = NULL;
    var405 = JSVAL_NULL;
    var201 = JS_FALSE;
    var202 = obj;
    var206 = argc;
    var203 = admFacFrame();
    var209 = JS_GetGlobalObject(cx);
    var212 = "bool";
    var214 = JS_GetProperty(cx, var209, var212, &var215);
    if (JS_ValueToObject(cx, var215, &var216) != JS_TRUE) {
        goto do_return;
    }
    var403 = OBJECT_TO_JSVAL(var216);
    argv[argc+0] = var403;
    var220 = "prototype";
    var217 = JS_GetProperty(cx, var216, var220, &var218);
    if (JS_ValueToObject(cx, var218, &var219) != JS_TRUE) {
        goto do_return;
    }
    var404 = OBJECT_TO_JSVAL(var219);
    argv[argc+1] = var404;
    var210 = JS_GET_CLASS(cx, var219);
    var211 = NULL;
    var208 = JS_NewObject(cx, var210, var211, var209);
    var405 = OBJECT_TO_JSVAL(var208);
    argv[argc+2] = var405;
    if (JS_SetPrivate(cx, var208, var203) != JS_TRUE) {
        goto do_return;
    }
    var207 = OBJECT_TO_JSVAL(var208);
    if (rval) {
        *rval = var207;
    }
    var201 = JS_TRUE;
    do_return:
    return var201;
}
static JSBool
jjjsTestHex(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var222;
    void *var223;
    int var226;
    jsval var227;
    JSObject *var228;
    JSObject *var229;
    JSClass *var230;
    char *var232;
    JSBool var234;
    jsval var235;
    JSObject *var236;
    jsval var406;
    char *var240;
    JSBool var237;
    jsval var238;
    JSObject *var239;
    jsval var407;
    JSObject *var231;
    jsval var408;
    JSBool var221;
    var222 = NULL;
    var223 = NULL;
    var226 = 0;
    var227 = JSVAL_NULL;
    var228 = NULL;
    var229 = NULL;
    var230 = NULL;
    var232 = NULL;
    var234 = JS_FALSE;
    var235 = JSVAL_NULL;
    var236 = NULL;
    var406 = JSVAL_NULL;
    var240 = NULL;
    var237 = JS_FALSE;
    var238 = JSVAL_NULL;
    var239 = NULL;
    var407 = JSVAL_NULL;
    var231 = NULL;
    var408 = JSVAL_NULL;
    var221 = JS_FALSE;
    var222 = obj;
    var226 = argc;
    var223 = admFacHex();
    var229 = JS_GetGlobalObject(cx);
    var232 = "bool";
    var234 = JS_GetProperty(cx, var229, var232, &var235);
    if (JS_ValueToObject(cx, var235, &var236) != JS_TRUE) {
        goto do_return;
    }
    var406 = OBJECT_TO_JSVAL(var236);
    argv[argc+0] = var406;
    var240 = "prototype";
    var237 = JS_GetProperty(cx, var236, var240, &var238);
    if (JS_ValueToObject(cx, var238, &var239) != JS_TRUE) {
        goto do_return;
    }
    var407 = OBJECT_TO_JSVAL(var239);
    argv[argc+1] = var407;
    var230 = JS_GET_CLASS(cx, var239);
    var231 = NULL;
    var228 = JS_NewObject(cx, var230, var231, var229);
    var408 = OBJECT_TO_JSVAL(var228);
    argv[argc+2] = var408;
    if (JS_SetPrivate(cx, var228, var223) != JS_TRUE) {
        goto do_return;
    }
    var227 = OBJECT_TO_JSVAL(var228);
    if (rval) {
        *rval = var227;
    }
    var221 = JS_TRUE;
    do_return:
    return var221;
}
static JSBool
jjjsTestDirSel(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var242;
    void *var243;
    int var246;
    jsval var247;
    JSObject *var248;
    JSObject *var249;
    JSClass *var250;
    char *var252;
    JSBool var254;
    jsval var255;
    JSObject *var256;
    jsval var409;
    char *var260;
    JSBool var257;
    jsval var258;
    JSObject *var259;
    jsval var410;
    JSObject *var251;
    jsval var411;
    JSBool var241;
    var242 = NULL;
    var243 = NULL;
    var246 = 0;
    var247 = JSVAL_NULL;
    var248 = NULL;
    var249 = NULL;
    var250 = NULL;
    var252 = NULL;
    var254 = JS_FALSE;
    var255 = JSVAL_NULL;
    var256 = NULL;
    var409 = JSVAL_NULL;
    var260 = NULL;
    var257 = JS_FALSE;
    var258 = JSVAL_NULL;
    var259 = NULL;
    var410 = JSVAL_NULL;
    var251 = NULL;
    var411 = JSVAL_NULL;
    var241 = JS_FALSE;
    var242 = obj;
    var246 = argc;
    var243 = admFacDirSel();
    var249 = JS_GetGlobalObject(cx);
    var252 = "bool";
    var254 = JS_GetProperty(cx, var249, var252, &var255);
    if (JS_ValueToObject(cx, var255, &var256) != JS_TRUE) {
        goto do_return;
    }
    var409 = OBJECT_TO_JSVAL(var256);
    argv[argc+0] = var409;
    var260 = "prototype";
    var257 = JS_GetProperty(cx, var256, var260, &var258);
    if (JS_ValueToObject(cx, var258, &var259) != JS_TRUE) {
        goto do_return;
    }
    var410 = OBJECT_TO_JSVAL(var259);
    argv[argc+1] = var410;
    var250 = JS_GET_CLASS(cx, var259);
    var251 = NULL;
    var248 = JS_NewObject(cx, var250, var251, var249);
    var411 = OBJECT_TO_JSVAL(var248);
    argv[argc+2] = var411;
    if (JS_SetPrivate(cx, var248, var243) != JS_TRUE) {
        goto do_return;
    }
    var247 = OBJECT_TO_JSVAL(var248);
    if (rval) {
        *rval = var247;
    }
    var241 = JS_TRUE;
    do_return:
    return var241;
}
static JSBool
jjjsTestButton(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var262;
    void *var263;
    int var266;
    jsval var267;
    JSObject *var268;
    JSObject *var269;
    JSClass *var270;
    char *var272;
    JSBool var274;
    jsval var275;
    JSObject *var276;
    jsval var412;
    char *var280;
    JSBool var277;
    jsval var278;
    JSObject *var279;
    jsval var413;
    JSObject *var271;
    jsval var414;
    JSBool var261;
    var262 = NULL;
    var263 = NULL;
    var266 = 0;
    var267 = JSVAL_NULL;
    var268 = NULL;
    var269 = NULL;
    var270 = NULL;
    var272 = NULL;
    var274 = JS_FALSE;
    var275 = JSVAL_NULL;
    var276 = NULL;
    var412 = JSVAL_NULL;
    var280 = NULL;
    var277 = JS_FALSE;
    var278 = JSVAL_NULL;
    var279 = NULL;
    var413 = JSVAL_NULL;
    var271 = NULL;
    var414 = JSVAL_NULL;
    var261 = JS_FALSE;
    var262 = obj;
    var266 = argc;
    var263 = admFacButton();
    var269 = JS_GetGlobalObject(cx);
    var272 = "bool";
    var274 = JS_GetProperty(cx, var269, var272, &var275);
    if (JS_ValueToObject(cx, var275, &var276) != JS_TRUE) {
        goto do_return;
    }
    var412 = OBJECT_TO_JSVAL(var276);
    argv[argc+0] = var412;
    var280 = "prototype";
    var277 = JS_GetProperty(cx, var276, var280, &var278);
    if (JS_ValueToObject(cx, var278, &var279) != JS_TRUE) {
        goto do_return;
    }
    var413 = OBJECT_TO_JSVAL(var279);
    argv[argc+1] = var413;
    var270 = JS_GET_CLASS(cx, var279);
    var271 = NULL;
    var268 = JS_NewObject(cx, var270, var271, var269);
    var414 = OBJECT_TO_JSVAL(var268);
    argv[argc+2] = var414;
    if (JS_SetPrivate(cx, var268, var263) != JS_TRUE) {
        goto do_return;
    }
    var267 = OBJECT_TO_JSVAL(var268);
    if (rval) {
        *rval = var267;
    }
    var261 = JS_TRUE;
    do_return:
    return var261;
}
static JSBool
jjjsTestMatrix(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var282;
    void *var283;
    int var286;
    jsval var287;
    JSObject *var288;
    JSObject *var289;
    JSClass *var290;
    char *var292;
    JSBool var294;
    jsval var295;
    JSObject *var296;
    jsval var415;
    char *var300;
    JSBool var297;
    jsval var298;
    JSObject *var299;
    jsval var416;
    JSObject *var291;
    jsval var417;
    JSBool var281;
    var282 = NULL;
    var283 = NULL;
    var286 = 0;
    var287 = JSVAL_NULL;
    var288 = NULL;
    var289 = NULL;
    var290 = NULL;
    var292 = NULL;
    var294 = JS_FALSE;
    var295 = JSVAL_NULL;
    var296 = NULL;
    var415 = JSVAL_NULL;
    var300 = NULL;
    var297 = JS_FALSE;
    var298 = JSVAL_NULL;
    var299 = NULL;
    var416 = JSVAL_NULL;
    var291 = NULL;
    var417 = JSVAL_NULL;
    var281 = JS_FALSE;
    var282 = obj;
    var286 = argc;
    var283 = admFacMatrix();
    var289 = JS_GetGlobalObject(cx);
    var292 = "bool";
    var294 = JS_GetProperty(cx, var289, var292, &var295);
    if (JS_ValueToObject(cx, var295, &var296) != JS_TRUE) {
        goto do_return;
    }
    var415 = OBJECT_TO_JSVAL(var296);
    argv[argc+0] = var415;
    var300 = "prototype";
    var297 = JS_GetProperty(cx, var296, var300, &var298);
    if (JS_ValueToObject(cx, var298, &var299) != JS_TRUE) {
        goto do_return;
    }
    var416 = OBJECT_TO_JSVAL(var299);
    argv[argc+1] = var416;
    var290 = JS_GET_CLASS(cx, var299);
    var291 = NULL;
    var288 = JS_NewObject(cx, var290, var291, var289);
    var417 = OBJECT_TO_JSVAL(var288);
    argv[argc+2] = var417;
    if (JS_SetPrivate(cx, var288, var283) != JS_TRUE) {
        goto do_return;
    }
    var287 = OBJECT_TO_JSVAL(var288);
    if (rval) {
        *rval = var287;
    }
    var281 = JS_TRUE;
    do_return:
    return var281;
}
static JSBool
jjjsTestNotch(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var302;
    void *var303;
    int var306;
    jsval var307;
    JSObject *var308;
    JSObject *var309;
    JSClass *var310;
    char *var312;
    JSBool var314;
    jsval var315;
    JSObject *var316;
    jsval var418;
    char *var320;
    JSBool var317;
    jsval var318;
    JSObject *var319;
    jsval var419;
    JSObject *var311;
    jsval var420;
    JSBool var301;
    var302 = NULL;
    var303 = NULL;
    var306 = 0;
    var307 = JSVAL_NULL;
    var308 = NULL;
    var309 = NULL;
    var310 = NULL;
    var312 = NULL;
    var314 = JS_FALSE;
    var315 = JSVAL_NULL;
    var316 = NULL;
    var418 = JSVAL_NULL;
    var320 = NULL;
    var317 = JS_FALSE;
    var318 = JSVAL_NULL;
    var319 = NULL;
    var419 = JSVAL_NULL;
    var311 = NULL;
    var420 = JSVAL_NULL;
    var301 = JS_FALSE;
    var302 = obj;
    var306 = argc;
    var303 = admFacNotch();
    var309 = JS_GetGlobalObject(cx);
    var312 = "bool";
    var314 = JS_GetProperty(cx, var309, var312, &var315);
    if (JS_ValueToObject(cx, var315, &var316) != JS_TRUE) {
        goto do_return;
    }
    var418 = OBJECT_TO_JSVAL(var316);
    argv[argc+0] = var418;
    var320 = "prototype";
    var317 = JS_GetProperty(cx, var316, var320, &var318);
    if (JS_ValueToObject(cx, var318, &var319) != JS_TRUE) {
        goto do_return;
    }
    var419 = OBJECT_TO_JSVAL(var319);
    argv[argc+1] = var419;
    var310 = JS_GET_CLASS(cx, var319);
    var311 = NULL;
    var308 = JS_NewObject(cx, var310, var311, var309);
    var420 = OBJECT_TO_JSVAL(var308);
    argv[argc+2] = var420;
    if (JS_SetPrivate(cx, var308, var303) != JS_TRUE) {
        goto do_return;
    }
    var307 = OBJECT_TO_JSVAL(var308);
    if (rval) {
        *rval = var307;
    }
    var301 = JS_TRUE;
    do_return:
    return var301;
}
static JSBool
jjjsTestThreadCount(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var322;
    void *var323;
    int var326;
    jsval var327;
    JSObject *var328;
    JSObject *var329;
    JSClass *var330;
    char *var332;
    JSBool var334;
    jsval var335;
    JSObject *var336;
    jsval var421;
    char *var340;
    JSBool var337;
    jsval var338;
    JSObject *var339;
    jsval var422;
    JSObject *var331;
    jsval var423;
    JSBool var321;
    var322 = NULL;
    var323 = NULL;
    var326 = 0;
    var327 = JSVAL_NULL;
    var328 = NULL;
    var329 = NULL;
    var330 = NULL;
    var332 = NULL;
    var334 = JS_FALSE;
    var335 = JSVAL_NULL;
    var336 = NULL;
    var421 = JSVAL_NULL;
    var340 = NULL;
    var337 = JS_FALSE;
    var338 = JSVAL_NULL;
    var339 = NULL;
    var422 = JSVAL_NULL;
    var331 = NULL;
    var423 = JSVAL_NULL;
    var321 = JS_FALSE;
    var322 = obj;
    var326 = argc;
    var323 = admFacThreadCount();
    var329 = JS_GetGlobalObject(cx);
    var332 = "bool";
    var334 = JS_GetProperty(cx, var329, var332, &var335);
    if (JS_ValueToObject(cx, var335, &var336) != JS_TRUE) {
        goto do_return;
    }
    var421 = OBJECT_TO_JSVAL(var336);
    argv[argc+0] = var421;
    var340 = "prototype";
    var337 = JS_GetProperty(cx, var336, var340, &var338);
    if (JS_ValueToObject(cx, var338, &var339) != JS_TRUE) {
        goto do_return;
    }
    var422 = OBJECT_TO_JSVAL(var339);
    argv[argc+1] = var422;
    var330 = JS_GET_CLASS(cx, var339);
    var331 = NULL;
    var328 = JS_NewObject(cx, var330, var331, var329);
    var423 = OBJECT_TO_JSVAL(var328);
    argv[argc+2] = var423;
    if (JS_SetPrivate(cx, var328, var323) != JS_TRUE) {
        goto do_return;
    }
    var327 = OBJECT_TO_JSVAL(var328);
    if (rval) {
        *rval = var327;
    }
    var321 = JS_TRUE;
    do_return:
    return var321;
}
static JSBool
jjjsTestSlider(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var342;
    void *var343;
    int var346;
    jsval var347;
    JSObject *var348;
    JSObject *var349;
    JSClass *var350;
    char *var352;
    JSBool var354;
    jsval var355;
    JSObject *var356;
    jsval var424;
    char *var360;
    JSBool var357;
    jsval var358;
    JSObject *var359;
    jsval var425;
    JSObject *var351;
    jsval var426;
    JSBool var341;
    var342 = NULL;
    var343 = NULL;
    var346 = 0;
    var347 = JSVAL_NULL;
    var348 = NULL;
    var349 = NULL;
    var350 = NULL;
    var352 = NULL;
    var354 = JS_FALSE;
    var355 = JSVAL_NULL;
    var356 = NULL;
    var424 = JSVAL_NULL;
    var360 = NULL;
    var357 = JS_FALSE;
    var358 = JSVAL_NULL;
    var359 = NULL;
    var425 = JSVAL_NULL;
    var351 = NULL;
    var426 = JSVAL_NULL;
    var341 = JS_FALSE;
    var342 = obj;
    var346 = argc;
    var343 = admFacSlider();
    var349 = JS_GetGlobalObject(cx);
    var352 = "bool";
    var354 = JS_GetProperty(cx, var349, var352, &var355);
    if (JS_ValueToObject(cx, var355, &var356) != JS_TRUE) {
        goto do_return;
    }
    var424 = OBJECT_TO_JSVAL(var356);
    argv[argc+0] = var424;
    var360 = "prototype";
    var357 = JS_GetProperty(cx, var356, var360, &var358);
    if (JS_ValueToObject(cx, var358, &var359) != JS_TRUE) {
        goto do_return;
    }
    var425 = OBJECT_TO_JSVAL(var359);
    argv[argc+1] = var425;
    var350 = JS_GET_CLASS(cx, var359);
    var351 = NULL;
    var348 = JS_NewObject(cx, var350, var351, var349);
    var426 = OBJECT_TO_JSVAL(var348);
    argv[argc+2] = var426;
    if (JS_SetPrivate(cx, var348, var343) != JS_TRUE) {
        goto do_return;
    }
    var347 = OBJECT_TO_JSVAL(var348);
    if (rval) {
        *rval = var347;
    }
    var341 = JS_TRUE;
    do_return:
    return var341;
}
static JSBool
jjjsCrashTest(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var362;
    int var366;
    JSBool var361;
    var362 = NULL;
    var366 = 0;
    var361 = JS_FALSE;
    var362 = obj;
    var366 = argc;
    crashTest();
    var361 = JS_TRUE;
    return var361;
}
static JSBool
jjjsAssertTest(JSContext *cx, JSObject *obj, uintN argc, jsval *argv, jsval *rval)
{
    JSObject *var368;
    int var372;
    JSBool var367;
    var368 = NULL;
    var372 = 0;
    var367 = JS_FALSE;
    var368 = obj;
    var372 = argc;
    assertTest();
    var367 = JS_TRUE;
    return var367;
}
static JSPropertySpec jj_static_ps[] = {
    {NULL, 0, 0, NULL, NULL}
};
static JSPropertySpec jj_ps[] = {
    {NULL, 0, 0, NULL, NULL}
};
static JSFunctionSpec jj_static_fs[] = {
    JS_FS("jsTestFacInt", jjjsTestFacInt, 0, 0, 3),
    JS_FS("jsTestFacFloat", jjjsTestFacFloat, 0, 0, 3),
    JS_FS("jsTestFacToggle", jjjsTestFacToggle, 0, 0, 3),
    JS_FS("jsTestFacMenu", jjjsTestFacMenu, 0, 0, 3),
    JS_FS("jsTestFacFile", jjjsTestFacFile, 0, 0, 3),
    JS_FS("jsTestFacBitrate", jjjsTestFacBitrate, 0, 0, 3),
    JS_FS("jsTestFacBar", jjjsTestFacBar, 0, 0, 3),
    JS_FS("jsTestFacRoText", jjjsTestFacRoText, 0, 0, 3),
    JS_FS("jsTestFacText", jjjsTestFacText, 0, 0, 3),
    JS_FS("jsTestFacTab", jjjsTestFacTab, 0, 0, 3),
    JS_FS("jsTestFrame", jjjsTestFrame, 0, 0, 3),
    JS_FS("jsTestHex", jjjsTestHex, 0, 0, 3),
    JS_FS("jsTestDirSel", jjjsTestDirSel, 0, 0, 3),
    JS_FS("jsTestButton", jjjsTestButton, 0, 0, 3),
    JS_FS("jsTestMatrix", jjjsTestMatrix, 0, 0, 3),
    JS_FS("jsTestNotch", jjjsTestNotch, 0, 0, 3),
    JS_FS("jsTestThreadCount", jjjsTestThreadCount, 0, 0, 3),
    JS_FS("jsTestSlider", jjjsTestSlider, 0, 0, 3),
    JS_FS("jsCrashTest", jjjsCrashTest, 0, 0, 0),
    JS_FS("jsAssertTest", jjjsAssertTest, 0, 0, 0),
    JS_FS_END
};
static JSFunctionSpec jj_fs[] = {
    JS_FS("jsTestFacInt", jjjsTestFacInt, 0, 0, 3),
    JS_FS("jsTestFacFloat", jjjsTestFacFloat, 0, 0, 3),
    JS_FS("jsTestFacToggle", jjjsTestFacToggle, 0, 0, 3),
    JS_FS("jsTestFacMenu", jjjsTestFacMenu, 0, 0, 3),
    JS_FS("jsTestFacFile", jjjsTestFacFile, 0, 0, 3),
    JS_FS("jsTestFacBitrate", jjjsTestFacBitrate, 0, 0, 3),
    JS_FS("jsTestFacBar", jjjsTestFacBar, 0, 0, 3),
    JS_FS("jsTestFacRoText", jjjsTestFacRoText, 0, 0, 3),
    JS_FS("jsTestFacText", jjjsTestFacText, 0, 0, 3),
    JS_FS("jsTestFacTab", jjjsTestFacTab, 0, 0, 3),
    JS_FS("jsTestFrame", jjjsTestFrame, 0, 0, 3),
    JS_FS("jsTestHex", jjjsTestHex, 0, 0, 3),
    JS_FS("jsTestDirSel", jjjsTestDirSel, 0, 0, 3),
    JS_FS("jsTestButton", jjjsTestButton, 0, 0, 3),
    JS_FS("jsTestMatrix", jjjsTestMatrix, 0, 0, 3),
    JS_FS("jsTestNotch", jjjsTestNotch, 0, 0, 3),
    JS_FS("jsTestThreadCount", jjjsTestThreadCount, 0, 0, 3),
    JS_FS("jsTestSlider", jjjsTestSlider, 0, 0, 3),
    JS_FS("jsCrashTest", jjjsCrashTest, 0, 0, 0),
    JS_FS("jsAssertTest", jjjsAssertTest, 0, 0, 0),
    JS_FS_END
};
