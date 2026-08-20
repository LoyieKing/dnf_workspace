# logToFile

`_ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b`

`CLog::logToFile(_IO_FILE*&, TimeLog_&, bool, char*, char const*, char*, bool)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854edb0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854edb0  _ZN4CLog9logToFileERP8_IO_FILER8TimeLog_bPcPKcS5_b
#           CLog::logToFile(_IO_FILE*&, TimeLog_&, bool, char*, char const*, char*, bool)
# range [0x0854edb0, 0x0854ef55]
0854edb0 +0x000:  push   %ebp
0854edb1 +0x001:  mov    %esp,%ebp
0854edb3 +0x003:  push   %ebx
0854edb4 +0x004:  sub    $0x2044,%esp
0854edba +0x00a:  mov    0x14(%ebp),%edx
0854edbd +0x00d:  mov    0x24(%ebp),%eax
0854edc0 +0x010:  mov    %dl,-0x201c(%ebp)
0854edc6 +0x016:  mov    %al,-0x2020(%ebp)
0854edcc +0x01c:  cmpl   $0x0,0x8(%ebp)
0854edd0 +0x020:  jne    0854eddc <+0x2c>
0854edd2 +0x022:  mov    $0x0,%eax
0854edd7 +0x027:  jmp    0854ef4c <+0x19c>
0854eddc +0x02c:  mov    0xc(%ebp),%eax
0854eddf +0x02f:  mov    (%eax),%eax
0854ede1 +0x031:  test   %eax,%eax
0854ede3 +0x033:  jne    0854edef <+0x3f>
0854ede5 +0x035:  mov    $0x0,%eax
0854edea +0x03a:  jmp    0854ef4c <+0x19c>
0854edef +0x03f:  lea    -0x10(%ebp),%eax
0854edf2 +0x042:  mov    %eax,(%esp)
0854edf5 +0x045:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0854edfa +0x04a:  mov    0xc(%ebp),%eax
0854edfd +0x04d:  mov    (%eax),%edx
0854edff +0x04f:  mov    &stdout,%eax
0854ee04 +0x054:  cmp    %eax,%edx
0854ee06 +0x056:  je     0854ee54 <+0xa4>
0854ee08 +0x058:  mov    0x8(%ebp),%eax
0854ee0b +0x05b:  mov    0x250(%eax),%eax
0854ee11 +0x061:  mov    %eax,0x18(%esp)
0854ee15 +0x065:  mov    0x18(%ebp),%eax
0854ee18 +0x068:  mov    %eax,0x14(%esp)
0854ee1c +0x06c:  mov    0xc(%ebp),%eax
0854ee1f +0x06f:  mov    %eax,0x10(%esp)
0854ee23 +0x073:  mov    0x10(%ebp),%eax
0854ee26 +0x076:  mov    %eax,0xc(%esp)
0854ee2a +0x07a:  mov    -0x10(%ebp),%eax
0854ee2d +0x07d:  mov    -0xc(%ebp),%edx
0854ee30 +0x080:  mov    %eax,0x4(%esp)
0854ee34 +0x084:  mov    %edx,0x8(%esp)
0854ee38 +0x088:  mov    0x8(%ebp),%eax
0854ee3b +0x08b:  mov    %eax,(%esp)
0854ee3e +0x08e:  call   0854f594 <_ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci>  ; CLog::checkDay(TimeLog_, TimeLog_*, _IO_FILE*&, char*, int)
0854ee43 +0x093:  xor    $0x1,%eax
0854ee46 +0x096:  test   %al,%al
0854ee48 +0x098:  je     0854ee54 <+0xa4>
0854ee4a +0x09a:  mov    $0x0,%eax
0854ee4f +0x09f:  jmp    0854ef4c <+0x19c>
0854ee54 +0x0a4:  mov    0x20(%ebp),%eax
0854ee57 +0x0a7:  mov    %eax,0x8(%esp)
0854ee5b +0x0ab:  mov    0x1c(%ebp),%eax
0854ee5e +0x0ae:  mov    %eax,0x4(%esp)
0854ee62 +0x0b2:  lea    -0x2010(%ebp),%eax
0854ee68 +0x0b8:  mov    %eax,(%esp)
0854ee6b +0x0bb:  call   0807d7d0 <_init+0xc8>
0854ee70 +0x0c0:  cmpb   $0x0,-0x2020(%ebp)
0854ee77 +0x0c7:  je     0854eedb <+0x12b>
0854ee79 +0x0c9:  movzbl -0xa(%ebp),%eax
0854ee7d +0x0cd:  movsbl %al,%ecx
0854ee80 +0x0d0:  movzbl -0xb(%ebp),%eax
0854ee84 +0x0d4:  movsbl %al,%edx
0854ee87 +0x0d7:  movzbl -0xc(%ebp),%eax
0854ee8b +0x0db:  movsbl %al,%eax
0854ee8e +0x0de:  lea    -0x2010(%ebp),%ebx
0854ee94 +0x0e4:  mov    %ebx,0x14(%esp)
0854ee98 +0x0e8:  mov    %ecx,0x10(%esp)
0854ee9c +0x0ec:  mov    %edx,0xc(%esp)
0854eea0 +0x0f0:  mov    %eax,0x8(%esp)
0854eea4 +0x0f4:  movl   $"[%02d:%02d:%02d] %s",0x4(%esp)
0854eeac +0x0fc:  lea    -0x1010(%ebp),%eax
0854eeb2 +0x102:  mov    %eax,(%esp)
0854eeb5 +0x105:  call   0807e440 <_init+0xd38>
0854eeba +0x10a:  mov    0xc(%ebp),%eax
0854eebd +0x10d:  mov    (%eax),%eax
0854eebf +0x10f:  lea    -0x1010(%ebp),%edx
0854eec5 +0x115:  mov    %edx,0x8(%esp)
0854eec9 +0x119:  movl   $"%s\r\n",0x4(%esp)
0854eed1 +0x121:  mov    %eax,(%esp)
0854eed4 +0x124:  call   0807da90 <_init+0x388>
0854eed9 +0x129:  jmp    0854eefa <+0x14a>
0854eedb +0x12b:  mov    0xc(%ebp),%eax
0854eede +0x12e:  mov    (%eax),%eax
0854eee0 +0x130:  lea    -0x2010(%ebp),%edx
0854eee6 +0x136:  mov    %edx,0x8(%esp)
0854eeea +0x13a:  movl   $"%s\r\n",0x4(%esp)
0854eef2 +0x142:  mov    %eax,(%esp)
0854eef5 +0x145:  call   0807da90 <_init+0x388>
0854eefa +0x14a:  mov    0xc(%ebp),%eax
0854eefd +0x14d:  mov    (%eax),%eax
0854eeff +0x14f:  mov    %eax,(%esp)
0854ef02 +0x152:  call   0807e8d0 <_init+0x11c8>
0854ef07 +0x157:  cmpb   $0x0,-0x201c(%ebp)
0854ef0e +0x15e:  je     0854ef47 <+0x197>
0854ef10 +0x160:  cmpb   $0x0,-0x2020(%ebp)
0854ef17 +0x167:  je     0854ef31 <+0x181>
0854ef19 +0x169:  lea    -0x1010(%ebp),%eax
0854ef1f +0x16f:  mov    %eax,0x4(%esp)
0854ef23 +0x173:  movl   $"%s\r\n",(%esp)
0854ef2a +0x17a:  call   0807db60 <_init+0x458>
0854ef2f +0x17f:  jmp    0854ef47 <+0x197>
0854ef31 +0x181:  lea    -0x2010(%ebp),%eax
0854ef37 +0x187:  mov    %eax,0x4(%esp)
0854ef3b +0x18b:  movl   $"%s\r\n",(%esp)
0854ef42 +0x192:  call   0807db60 <_init+0x458>
0854ef47 +0x197:  mov    $0x1,%eax
0854ef4c +0x19c:  add    $0x2044,%esp
0854ef52 +0x1a2:  pop    %ebx
0854ef53 +0x1a3:  pop    %ebp
0854ef54 +0x1a4:  ret
0854ef55 +0x1a5:  nop
```

## 反编译 C

```c
// CLog::logToFile @ 0x854edb0

/* CLog::logToFile(_IO_FILE*&, TimeLog_&, bool, char*, char const*, char*, bool) */

undefined4 __thiscall
CLog::logToFile(CLog *this,_IO_FILE **param_1,TimeLog_ *param_2,bool param_3,char *param_4,
               char *param_5,char *param_6,bool param_7)

{
  char cVar1;
  undefined4 uVar2;
  char local_2014 [4096];
  char local_1014 [4096];
  undefined4 local_14;
  undefined4 local_10;
  
  if (this == (CLog *)0x0) {
    uVar2 = 0;
  }
  else if (*param_1 == (_IO_FILE *)0x0) {
    uVar2 = 0;
  }
  else {
    TimeLog_::setTime((TimeLog_ *)&local_14);
    if ((*param_1 != stdout) &&
       (cVar1 = checkDay(this,local_14,local_10,param_2,param_1,param_4,
                         *(undefined4 *)(this + 0x250)), cVar1 != '\x01')) {
      return 0;
    }
    vsprintf(local_2014,param_5,param_6);
    if (param_7) {
      sprintf(local_1014,"[%02d:%02d:%02d] %s",(int)(char)local_10,(int)local_10._1_1_,
              (int)local_10._2_1_,local_2014);
      fprintf(*param_1,"%s\r\n",local_1014);
    }
    else {
      fprintf(*param_1,"%s\r\n",local_2014);
    }
    fflush(*param_1);
    if (param_3) {
      if (param_7) {
        printf("%s\r\n",local_1014);
      }
      else {
        printf("%s\r\n",local_2014);
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}
```
