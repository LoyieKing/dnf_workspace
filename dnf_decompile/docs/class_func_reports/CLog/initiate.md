# initiate

`_ZN4CLog8initiateEPcS0_i`

`CLog::initiate(char*, char*, int)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854e88c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854e88c  _ZN4CLog8initiateEPcS0_i
#           CLog::initiate(char*, char*, int)
# range [0x0854e88c, 0x0854ec6f]
0854e88c +0x000:  push   %ebp
0854e88d +0x001:  mov    %esp,%ebp
0854e88f +0x003:  sub    $0x88,%esp
0854e895 +0x009:  lea    -0x60(%ebp),%eax
0854e898 +0x00c:  mov    %eax,0x4(%esp)
0854e89c +0x010:  mov    0xc(%ebp),%eax
0854e89f +0x013:  mov    %eax,(%esp)
0854e8a2 +0x016:  call   08106b9a <_GLOBAL__I__ZN15CmmChannelProxyC2ESsi+0x1c>  ; global constructors keyed to CmmChannelProxy::CmmChannelProxy(std::basic_string<char, std::char_traits<char>, std::allocator<char> >, int)+0x1c
0854e8a7 +0x01b:  shr    $0x1f,%eax
0854e8aa +0x01e:  test   %al,%al
0854e8ac +0x020:  je     0854e8e0 <+0x54>
0854e8ae +0x022:  movl   $0x1fd,0x4(%esp)
0854e8b6 +0x02a:  mov    0xc(%ebp),%eax
0854e8b9 +0x02d:  mov    %eax,(%esp)
0854e8bc +0x030:  call   0807d800 <_init+0xf8>
0854e8c1 +0x035:  shr    $0x1f,%eax
0854e8c4 +0x038:  test   %al,%al
0854e8c6 +0x03a:  je     0854e8e0 <+0x54>
0854e8c8 +0x03c:  mov    0xc(%ebp),%eax
0854e8cb +0x03f:  mov    %eax,0x4(%esp)
0854e8cf +0x043:  movl   $"Fail To Make Directory, PATH[%s]\n",(%esp)
0854e8d6 +0x04a:  call   0807db60 <_init+0x458>
0854e8db +0x04f:  jmp    0854ec6d <+0x3e1>
0854e8e0 +0x054:  mov    0x8(%ebp),%eax
0854e8e3 +0x057:  mov    0x14(%ebp),%edx
0854e8e6 +0x05a:  mov    %edx,0x250(%eax)
0854e8ec +0x060:  mov    0x8(%ebp),%eax
0854e8ef +0x063:  movl   $0x1,0x254(%eax)
0854e8f9 +0x06d:  cmpl   $0x0,0x10(%ebp)
0854e8fd +0x071:  je     0854e921 <+0x95>
0854e8ff +0x073:  mov    0x8(%ebp),%eax
0854e902 +0x076:  lea    0x258(%eax),%edx
0854e908 +0x07c:  movl   $0x100,0x8(%esp)
0854e910 +0x084:  mov    0x10(%ebp),%eax
0854e913 +0x087:  mov    %eax,0x4(%esp)
0854e917 +0x08b:  mov    %edx,(%esp)
0854e91a +0x08e:  call   0807d8a0 <_init+0x198>
0854e91f +0x093:  jmp    0854e941 <+0xb5>
0854e921 +0x095:  mov    0x8(%ebp),%eax
0854e924 +0x098:  add    $0x258,%eax
0854e929 +0x09d:  movl   $0x4,0x8(%esp)
0854e931 +0x0a5:  movl   $"Log",0x4(%esp)
0854e939 +0x0ad:  mov    %eax,(%esp)
0854e93c +0x0b0:  call   0807d8a0 <_init+0x198>
0854e941 +0x0b5:  mov    0x8(%ebp),%eax
0854e944 +0x0b8:  add    $0x210,%eax
0854e949 +0x0bd:  mov    %eax,(%esp)
0854e94c +0x0c0:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0854e951 +0x0c5:  mov    0x8(%ebp),%eax
0854e954 +0x0c8:  add    $0x218,%eax
0854e959 +0x0cd:  mov    %eax,(%esp)
0854e95c +0x0d0:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0854e961 +0x0d5:  mov    0x8(%ebp),%eax
0854e964 +0x0d8:  add    $0x220,%eax
0854e969 +0x0dd:  mov    %eax,(%esp)
0854e96c +0x0e0:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0854e971 +0x0e5:  mov    0x8(%ebp),%eax
0854e974 +0x0e8:  add    $0x228,%eax
0854e979 +0x0ed:  mov    %eax,(%esp)
0854e97c +0x0f0:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0854e981 +0x0f5:  mov    0x8(%ebp),%eax
0854e984 +0x0f8:  add    $0x230,%eax
0854e989 +0x0fd:  mov    %eax,(%esp)
0854e98c +0x100:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0854e991 +0x105:  mov    0x8(%ebp),%eax
0854e994 +0x108:  add    $0x238,%eax
0854e999 +0x10d:  mov    %eax,(%esp)
0854e99c +0x110:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0854e9a1 +0x115:  mov    0x8(%ebp),%eax
0854e9a4 +0x118:  add    $0x240,%eax
0854e9a9 +0x11d:  mov    %eax,(%esp)
0854e9ac +0x120:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0854e9b1 +0x125:  mov    0x8(%ebp),%eax
0854e9b4 +0x128:  add    $0x248,%eax
0854e9b9 +0x12d:  mov    %eax,(%esp)
0854e9bc +0x130:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0854e9c1 +0x135:  cmpl   $0x0,0xc(%ebp)
0854e9c5 +0x139:  jne    0854ea35 <+0x1a9>
0854e9c7 +0x13b:  mov    &stdout,%edx
0854e9cd +0x141:  mov    0x8(%ebp),%eax
0854e9d0 +0x144:  mov    %edx,0xf0(%eax)
0854e9d6 +0x14a:  mov    &stdout,%edx
0854e9dc +0x150:  mov    0x8(%ebp),%eax
0854e9df +0x153:  mov    %edx,0xf4(%eax)
0854e9e5 +0x159:  mov    &stdout,%edx
0854e9eb +0x15f:  mov    0x8(%ebp),%eax
0854e9ee +0x162:  mov    %edx,0xf8(%eax)
0854e9f4 +0x168:  mov    &stdout,%edx
0854e9fa +0x16e:  mov    0x8(%ebp),%eax
0854e9fd +0x171:  mov    %edx,0xfc(%eax)
0854ea03 +0x177:  mov    &stdout,%edx
0854ea09 +0x17d:  mov    0x8(%ebp),%eax
0854ea0c +0x180:  mov    %edx,0x100(%eax)
0854ea12 +0x186:  mov    &stdout,%edx
0854ea18 +0x18c:  mov    0x8(%ebp),%eax
0854ea1b +0x18f:  mov    %edx,0x108(%eax)
0854ea21 +0x195:  mov    &stdout,%edx
0854ea27 +0x19b:  mov    0x8(%ebp),%eax
0854ea2a +0x19e:  mov    %edx,0x10c(%eax)
0854ea30 +0x1a4:  jmp    0854ec6d <+0x3e1>
0854ea35 +0x1a9:  mov    0x8(%ebp),%eax
0854ea38 +0x1ac:  lea    0x110(%eax),%edx
0854ea3e +0x1b2:  mov    0xc(%ebp),%eax
0854ea41 +0x1b5:  mov    %eax,0x4(%esp)
0854ea45 +0x1b9:  mov    %edx,(%esp)
0854ea48 +0x1bc:  call   0807def0 <_init+0x7e8>
0854ea4d +0x1c1:  mov    0x8(%ebp),%eax
0854ea50 +0x1c4:  mov    0x250(%eax),%eax
0854ea56 +0x1ca:  mov    0x8(%ebp),%edx
0854ea59 +0x1cd:  add    $0xf0,%edx
0854ea5f +0x1d3:  mov    %eax,0x14(%esp)
0854ea63 +0x1d7:  movl   $".log",0x10(%esp)
0854ea6b +0x1df:  mov    %edx,0xc(%esp)
0854ea6f +0x1e3:  mov    0x8(%ebp),%eax
0854ea72 +0x1e6:  mov    0x214(%eax),%edx
0854ea78 +0x1ec:  mov    0x210(%eax),%eax
0854ea7e +0x1f2:  mov    %eax,0x4(%esp)
0854ea82 +0x1f6:  mov    %edx,0x8(%esp)
0854ea86 +0x1fa:  mov    0x8(%ebp),%eax
0854ea89 +0x1fd:  mov    %eax,(%esp)
0854ea8c +0x200:  call   0854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>  ; CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int)
0854ea91 +0x205:  mov    0x8(%ebp),%eax
0854ea94 +0x208:  mov    0x250(%eax),%eax
0854ea9a +0x20e:  mov    0x8(%ebp),%edx
0854ea9d +0x211:  add    $0xf4,%edx
0854eaa3 +0x217:  mov    %eax,0x14(%esp)
0854eaa7 +0x21b:  movl   $".error",0x10(%esp)
0854eaaf +0x223:  mov    %edx,0xc(%esp)
0854eab3 +0x227:  mov    0x8(%ebp),%eax
0854eab6 +0x22a:  mov    0x21c(%eax),%edx
0854eabc +0x230:  mov    0x218(%eax),%eax
0854eac2 +0x236:  mov    %eax,0x4(%esp)
0854eac6 +0x23a:  mov    %edx,0x8(%esp)
0854eaca +0x23e:  mov    0x8(%ebp),%eax
0854eacd +0x241:  mov    %eax,(%esp)
0854ead0 +0x244:  call   0854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>  ; CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int)
0854ead5 +0x249:  mov    0x8(%ebp),%eax
0854ead8 +0x24c:  mov    0x250(%eax),%eax
0854eade +0x252:  mov    0x8(%ebp),%edx
0854eae1 +0x255:  add    $0xf8,%edx
0854eae7 +0x25b:  mov    %eax,0x14(%esp)
0854eaeb +0x25f:  movl   $".debug",0x10(%esp)
0854eaf3 +0x267:  mov    %edx,0xc(%esp)
0854eaf7 +0x26b:  mov    0x8(%ebp),%eax
0854eafa +0x26e:  mov    0x224(%eax),%edx
0854eb00 +0x274:  mov    0x220(%eax),%eax
0854eb06 +0x27a:  mov    %eax,0x4(%esp)
0854eb0a +0x27e:  mov    %edx,0x8(%esp)
0854eb0e +0x282:  mov    0x8(%ebp),%eax
0854eb11 +0x285:  mov    %eax,(%esp)
0854eb14 +0x288:  call   0854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>  ; CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int)
0854eb19 +0x28d:  mov    0x8(%ebp),%eax
0854eb1c +0x290:  mov    0x250(%eax),%eax
0854eb22 +0x296:  mov    0x8(%ebp),%edx
0854eb25 +0x299:  add    $0xfc,%edx
0854eb2b +0x29f:  mov    %eax,0x14(%esp)
0854eb2f +0x2a3:  movl   $".money",0x10(%esp)
0854eb37 +0x2ab:  mov    %edx,0xc(%esp)
0854eb3b +0x2af:  mov    0x8(%ebp),%eax
0854eb3e +0x2b2:  mov    0x22c(%eax),%edx
0854eb44 +0x2b8:  mov    0x228(%eax),%eax
0854eb4a +0x2be:  mov    %eax,0x4(%esp)
0854eb4e +0x2c2:  mov    %edx,0x8(%esp)
0854eb52 +0x2c6:  mov    0x8(%ebp),%eax
0854eb55 +0x2c9:  mov    %eax,(%esp)
0854eb58 +0x2cc:  call   0854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>  ; CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int)
0854eb5d +0x2d1:  mov    0x8(%ebp),%eax
0854eb60 +0x2d4:  mov    0x254(%eax),%eax
0854eb66 +0x2da:  mov    0x8(%ebp),%edx
0854eb69 +0x2dd:  add    $0x100,%edx
0854eb6f +0x2e3:  mov    %eax,0x14(%esp)
0854eb73 +0x2e7:  movl   $".history",0x10(%esp)
0854eb7b +0x2ef:  mov    %edx,0xc(%esp)
0854eb7f +0x2f3:  mov    0x8(%ebp),%eax
0854eb82 +0x2f6:  mov    0x234(%eax),%edx
0854eb88 +0x2fc:  mov    0x230(%eax),%eax
0854eb8e +0x302:  mov    %eax,0x4(%esp)
0854eb92 +0x306:  mov    %edx,0x8(%esp)
0854eb96 +0x30a:  mov    0x8(%ebp),%eax
0854eb99 +0x30d:  mov    %eax,(%esp)
0854eb9c +0x310:  call   0854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>  ; CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int)
0854eba1 +0x315:  mov    0x8(%ebp),%eax
0854eba4 +0x318:  mov    0x250(%eax),%eax
0854ebaa +0x31e:  mov    0x8(%ebp),%edx
0854ebad +0x321:  add    $0x108,%edx
0854ebb3 +0x327:  mov    %eax,0x14(%esp)
0854ebb7 +0x32b:  movl   $".init",0x10(%esp)
0854ebbf +0x333:  mov    %edx,0xc(%esp)
0854ebc3 +0x337:  mov    0x8(%ebp),%eax
0854ebc6 +0x33a:  mov    0x244(%eax),%edx
0854ebcc +0x340:  mov    0x240(%eax),%eax
0854ebd2 +0x346:  mov    %eax,0x4(%esp)
0854ebd6 +0x34a:  mov    %edx,0x8(%esp)
0854ebda +0x34e:  mov    0x8(%ebp),%eax
0854ebdd +0x351:  mov    %eax,(%esp)
0854ebe0 +0x354:  call   0854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>  ; CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int)
0854ebe5 +0x359:  mov    0x8(%ebp),%eax
0854ebe8 +0x35c:  mov    0x250(%eax),%eax
0854ebee +0x362:  mov    0x8(%ebp),%edx
0854ebf1 +0x365:  add    $0x104,%edx
0854ebf7 +0x36b:  mov    %eax,0x14(%esp)
0854ebfb +0x36f:  movl   $".cri",0x10(%esp)
0854ec03 +0x377:  mov    %edx,0xc(%esp)
0854ec07 +0x37b:  mov    0x8(%ebp),%eax
0854ec0a +0x37e:  mov    0x23c(%eax),%edx
0854ec10 +0x384:  mov    0x238(%eax),%eax
0854ec16 +0x38a:  mov    %eax,0x4(%esp)
0854ec1a +0x38e:  mov    %edx,0x8(%esp)
0854ec1e +0x392:  mov    0x8(%ebp),%eax
0854ec21 +0x395:  mov    %eax,(%esp)
0854ec24 +0x398:  call   0854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>  ; CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int)
0854ec29 +0x39d:  mov    0x8(%ebp),%eax
0854ec2c +0x3a0:  mov    0x250(%eax),%eax
0854ec32 +0x3a6:  mov    0x8(%ebp),%edx
0854ec35 +0x3a9:  add    $0x10c,%edx
0854ec3b +0x3af:  mov    %eax,0x14(%esp)
0854ec3f +0x3b3:  movl   $".snap",0x10(%esp)
0854ec47 +0x3bb:  mov    %edx,0xc(%esp)
0854ec4b +0x3bf:  mov    0x8(%ebp),%eax
0854ec4e +0x3c2:  mov    0x24c(%eax),%edx
0854ec54 +0x3c8:  mov    0x248(%eax),%eax
0854ec5a +0x3ce:  mov    %eax,0x4(%esp)
0854ec5e +0x3d2:  mov    %edx,0x8(%esp)
0854ec62 +0x3d6:  mov    0x8(%ebp),%eax
0854ec65 +0x3d9:  mov    %eax,(%esp)
0854ec68 +0x3dc:  call   0854ec70 <_ZN4CLog11openLogFileE8TimeLog_RP8_IO_FILEPci>  ; CLog::openLogFile(TimeLog_, _IO_FILE*&, char*, int)
0854ec6d +0x3e1:  leave
0854ec6e +0x3e2:  ret
0854ec6f +0x3e3:  nop
```

## 反编译 C

```c
// CLog::initiate @ 0x854e88c

/* CLog::initiate(char*, char*, int) */

void __thiscall CLog::initiate(CLog *this,char *param_1,char *param_2,int param_3)

{
  int iVar1;
  stat local_64;
  
  iVar1 = stat(param_1,&local_64);
  if ((iVar1 < 0) && (iVar1 = mkdir(param_1,0x1fd), iVar1 < 0)) {
    printf("Fail To Make Directory, PATH[%s]\n",param_1);
    return;
  }
  *(int *)(this + 0x250) = param_3;
  *(undefined4 *)(this + 0x254) = 1;
  if (param_2 == (char *)0x0) {
    memcpy(this + 600,&DAT_08c9ed72,4);
  }
  else {
    memcpy(this + 600,param_2,0x100);
  }
  TimeLog_::setTime((TimeLog_ *)(this + 0x210));
  TimeLog_::setTime((TimeLog_ *)(this + 0x218));
  TimeLog_::setTime((TimeLog_ *)(this + 0x220));
  TimeLog_::setTime((TimeLog_ *)(this + 0x228));
  TimeLog_::setTime((TimeLog_ *)(this + 0x230));
  TimeLog_::setTime((TimeLog_ *)(this + 0x238));
  TimeLog_::setTime((TimeLog_ *)(this + 0x240));
  TimeLog_::setTime((TimeLog_ *)(this + 0x248));
  if (param_1 == (char *)0x0) {
    *(undefined4 *)(this + 0xf0) = stdout;
    *(undefined4 *)(this + 0xf4) = stdout;
    *(undefined4 *)(this + 0xf8) = stdout;
    *(undefined4 *)(this + 0xfc) = stdout;
    *(undefined4 *)(this + 0x100) = stdout;
    *(undefined4 *)(this + 0x108) = stdout;
    *(undefined4 *)(this + 0x10c) = stdout;
  }
  else {
    strcpy((char *)(this + 0x110),param_1);
    openLogFile(this,*(undefined4 *)(this + 0x210),*(undefined4 *)(this + 0x214),this + 0xf0,
                &DAT_08c9ed76,*(undefined4 *)(this + 0x250));
    openLogFile(this,*(undefined4 *)(this + 0x218),*(undefined4 *)(this + 0x21c),this + 0xf4,
                ".error",*(undefined4 *)(this + 0x250));
    openLogFile(this,*(undefined4 *)(this + 0x220),*(undefined4 *)(this + 0x224),this + 0xf8,
                ".debug",*(undefined4 *)(this + 0x250));
    openLogFile(this,*(undefined4 *)(this + 0x228),*(undefined4 *)(this + 0x22c),this + 0xfc,
                ".money",*(undefined4 *)(this + 0x250));
    openLogFile(this,*(undefined4 *)(this + 0x230),*(undefined4 *)(this + 0x234),this + 0x100,
                ".history",*(undefined4 *)(this + 0x254));
    openLogFile(this,*(undefined4 *)(this + 0x240),*(undefined4 *)(this + 0x244),this + 0x108,
                ".init",*(undefined4 *)(this + 0x250));
    openLogFile(this,*(undefined4 *)(this + 0x238),*(undefined4 *)(this + 0x23c),this + 0x104,
                &DAT_08c9ed9f,*(undefined4 *)(this + 0x250));
    openLogFile(this,*(undefined4 *)(this + 0x248),*(undefined4 *)(this + 0x24c),this + 0x10c,
                ".snap",*(undefined4 *)(this + 0x250));
  }
  return;
}
```
