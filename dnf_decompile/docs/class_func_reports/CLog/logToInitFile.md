# logToInitFile

`_ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb`

`CLog::logToInitFile(_IO_FILE*&, TimeLog_&, char*, char const*, char*, bool, bool)`

| 类 | 地址 |
|---|---|
| `CLog` | `0x0854ef56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854ef56  _ZN4CLog13logToInitFileERP8_IO_FILER8TimeLog_PcPKcS5_bb
#           CLog::logToInitFile(_IO_FILE*&, TimeLog_&, char*, char const*, char*, bool, bool)
# range [0x0854ef56, 0x0854f161]
0854ef56 +0x000:  push   %ebp
0854ef57 +0x001:  mov    %esp,%ebp
0854ef59 +0x003:  push   %ebx
0854ef5a +0x004:  sub    $0x2054,%esp
0854ef60 +0x00a:  mov    0x20(%ebp),%edx
0854ef63 +0x00d:  mov    0x24(%ebp),%eax
0854ef66 +0x010:  mov    %dl,-0x202c(%ebp)
0854ef6c +0x016:  mov    %al,-0x2030(%ebp)
0854ef72 +0x01c:  cmpl   $0x0,0x8(%ebp)
0854ef76 +0x020:  jne    0854ef82 <+0x2c>
0854ef78 +0x022:  mov    $0x0,%eax
0854ef7d +0x027:  jmp    0854f158 <+0x202>
0854ef82 +0x02c:  mov    0xc(%ebp),%eax
0854ef85 +0x02f:  mov    (%eax),%eax
0854ef87 +0x031:  test   %eax,%eax
0854ef89 +0x033:  jne    0854ef95 <+0x3f>
0854ef8b +0x035:  mov    $0x0,%eax
0854ef90 +0x03a:  jmp    0854f158 <+0x202>
0854ef95 +0x03f:  movl   $0x1000,0x8(%esp)
0854ef9d +0x047:  movl   $0x0,0x4(%esp)
0854efa5 +0x04f:  lea    -0x1020(%ebp),%eax
0854efab +0x055:  mov    %eax,(%esp)
0854efae +0x058:  call   0807dcc0 <_init+0x5b8>
0854efb3 +0x05d:  movl   $0x1000,0x8(%esp)
0854efbb +0x065:  movl   $0x0,0x4(%esp)
0854efc3 +0x06d:  lea    -0x2020(%ebp),%eax
0854efc9 +0x073:  mov    %eax,(%esp)
0854efcc +0x076:  call   0807dcc0 <_init+0x5b8>
0854efd1 +0x07b:  lea    -0x10(%ebp),%eax
0854efd4 +0x07e:  mov    %eax,(%esp)
0854efd7 +0x081:  call   0854e228 <_ZN8TimeLog_7setTimeEv>  ; TimeLog_::setTime()
0854efdc +0x086:  mov    0xc(%ebp),%eax
0854efdf +0x089:  mov    (%eax),%edx
0854efe1 +0x08b:  mov    &stdout,%eax
0854efe6 +0x090:  cmp    %eax,%edx
0854efe8 +0x092:  je     0854f036 <+0xe0>
0854efea +0x094:  mov    0x8(%ebp),%eax
0854efed +0x097:  mov    0x250(%eax),%eax
0854eff3 +0x09d:  mov    %eax,0x18(%esp)
0854eff7 +0x0a1:  mov    0x14(%ebp),%eax
0854effa +0x0a4:  mov    %eax,0x14(%esp)
0854effe +0x0a8:  mov    0xc(%ebp),%eax
0854f001 +0x0ab:  mov    %eax,0x10(%esp)
0854f005 +0x0af:  mov    0x10(%ebp),%eax
0854f008 +0x0b2:  mov    %eax,0xc(%esp)
0854f00c +0x0b6:  mov    -0x10(%ebp),%eax
0854f00f +0x0b9:  mov    -0xc(%ebp),%edx
0854f012 +0x0bc:  mov    %eax,0x4(%esp)
0854f016 +0x0c0:  mov    %edx,0x8(%esp)
0854f01a +0x0c4:  mov    0x8(%ebp),%eax
0854f01d +0x0c7:  mov    %eax,(%esp)
0854f020 +0x0ca:  call   0854f594 <_ZN4CLog8checkDayE8TimeLog_PS0_RP8_IO_FILEPci>  ; CLog::checkDay(TimeLog_, TimeLog_*, _IO_FILE*&, char*, int)
0854f025 +0x0cf:  xor    $0x1,%eax
0854f028 +0x0d2:  test   %al,%al
0854f02a +0x0d4:  je     0854f036 <+0xe0>
0854f02c +0x0d6:  mov    $0x0,%eax
0854f031 +0x0db:  jmp    0854f158 <+0x202>
0854f036 +0x0e0:  mov    0x1c(%ebp),%eax
0854f039 +0x0e3:  mov    %eax,0x8(%esp)
0854f03d +0x0e7:  mov    0x18(%ebp),%eax
0854f040 +0x0ea:  mov    %eax,0x4(%esp)
0854f044 +0x0ee:  lea    -0x2020(%ebp),%eax
0854f04a +0x0f4:  mov    %eax,(%esp)
0854f04d +0x0f7:  call   0807d7d0 <_init+0xc8>
0854f052 +0x0fc:  movl   $0x0,-0x20(%ebp)
0854f059 +0x103:  movl   $0x0,-0x1c(%ebp)
0854f060 +0x10a:  movl   $0x0,-0x18(%ebp)
0854f067 +0x111:  movl   $0x0,-0x14(%ebp)
0854f06e +0x118:  cmpb   $0x0,-0x2030(%ebp)
0854f075 +0x11f:  je     0854f094 <+0x13e>
0854f077 +0x121:  movl   $0x5,0x8(%esp)
0854f07f +0x129:  movl   $"%s\r\n",0x4(%esp)
0854f087 +0x131:  lea    -0x20(%ebp),%eax
0854f08a +0x134:  mov    %eax,(%esp)
0854f08d +0x137:  call   0807d8a0 <_init+0x198>
0854f092 +0x13c:  jmp    0854f0af <+0x159>
0854f094 +0x13e:  movl   $0x3,0x8(%esp)
0854f09c +0x146:  movl   $"%s",0x4(%esp)
0854f0a4 +0x14e:  lea    -0x20(%ebp),%eax
0854f0a7 +0x151:  mov    %eax,(%esp)
0854f0aa +0x154:  call   0807d8a0 <_init+0x198>
0854f0af +0x159:  lea    -0x2020(%ebp),%eax
0854f0b5 +0x15f:  mov    %eax,0x4(%esp)
0854f0b9 +0x163:  lea    -0x20(%ebp),%eax
0854f0bc +0x166:  mov    %eax,(%esp)
0854f0bf +0x169:  call   0807db60 <_init+0x458>
0854f0c4 +0x16e:  cmpb   $0x0,-0x202c(%ebp)
0854f0cb +0x175:  je     0854f110 <+0x1ba>
0854f0cd +0x177:  movzbl -0xa(%ebp),%eax
0854f0d1 +0x17b:  movsbl %al,%ecx
0854f0d4 +0x17e:  movzbl -0xb(%ebp),%eax
0854f0d8 +0x182:  movsbl %al,%edx
0854f0db +0x185:  movzbl -0xc(%ebp),%eax
0854f0df +0x189:  movsbl %al,%eax
0854f0e2 +0x18c:  lea    -0x2020(%ebp),%ebx
0854f0e8 +0x192:  mov    %ebx,0x14(%esp)
0854f0ec +0x196:  mov    %ecx,0x10(%esp)
0854f0f0 +0x19a:  mov    %edx,0xc(%esp)
0854f0f4 +0x19e:  mov    %eax,0x8(%esp)
0854f0f8 +0x1a2:  movl   $"[%02d:%02d:%02d] %s",0x4(%esp)
0854f100 +0x1aa:  lea    -0x1020(%ebp),%eax
0854f106 +0x1b0:  mov    %eax,(%esp)
0854f109 +0x1b3:  call   0807e440 <_init+0xd38>
0854f10e +0x1b8:  jmp    0854f128 <+0x1d2>
0854f110 +0x1ba:  lea    -0x2020(%ebp),%eax
0854f116 +0x1c0:  mov    %eax,0x4(%esp)
0854f11a +0x1c4:  lea    -0x1020(%ebp),%eax
0854f120 +0x1ca:  mov    %eax,(%esp)
0854f123 +0x1cd:  call   0807def0 <_init+0x7e8>
0854f128 +0x1d2:  mov    0xc(%ebp),%eax
0854f12b +0x1d5:  mov    (%eax),%eax
0854f12d +0x1d7:  lea    -0x1020(%ebp),%edx
0854f133 +0x1dd:  mov    %edx,0x8(%esp)
0854f137 +0x1e1:  lea    -0x20(%ebp),%edx
0854f13a +0x1e4:  mov    %edx,0x4(%esp)
0854f13e +0x1e8:  mov    %eax,(%esp)
0854f141 +0x1eb:  call   0807da90 <_init+0x388>
0854f146 +0x1f0:  mov    0xc(%ebp),%eax
0854f149 +0x1f3:  mov    (%eax),%eax
0854f14b +0x1f5:  mov    %eax,(%esp)
0854f14e +0x1f8:  call   0807e8d0 <_init+0x11c8>
0854f153 +0x1fd:  mov    $0x1,%eax
0854f158 +0x202:  add    $0x2054,%esp
0854f15e +0x208:  pop    %ebx
0854f15f +0x209:  pop    %ebp
0854f160 +0x20a:  ret
0854f161 +0x20b:  nop
```

## 反编译 C

```c
// CLog::logToInitFile @ 0x854ef56

/* CLog::logToInitFile(_IO_FILE*&, TimeLog_&, char*, char const*, char*, bool, bool) */

undefined4 __thiscall
CLog::logToInitFile(CLog *this,_IO_FILE **param_1,TimeLog_ *param_2,char *param_3,char *param_4,
                   char *param_5,bool param_6,bool param_7)

{
  char cVar1;
  undefined4 uVar2;
  char local_2024 [4096];
  char local_1024 [4096];
  char local_24 [16];
  undefined4 local_14;
  undefined4 local_10;
  
  if (this == (CLog *)0x0) {
    uVar2 = 0;
  }
  else if (*param_1 == (_IO_FILE *)0x0) {
    uVar2 = 0;
  }
  else {
    memset(local_1024,0,0x1000);
    memset(local_2024,0,0x1000);
    TimeLog_::setTime((TimeLog_ *)&local_14);
    if ((*param_1 != stdout) &&
       (cVar1 = checkDay(this,local_14,local_10,param_2,param_1,param_3,
                         *(undefined4 *)(this + 0x250)), cVar1 != '\x01')) {
      return 0;
    }
    vsprintf(local_2024,param_4,param_5);
    local_24[0] = '\0';
    local_24[1] = '\0';
    local_24[2] = '\0';
    local_24[3] = '\0';
    local_24[4] = '\0';
    local_24[5] = '\0';
    local_24[6] = '\0';
    local_24[7] = '\0';
    local_24[8] = '\0';
    local_24[9] = '\0';
    local_24[10] = '\0';
    local_24[0xb] = '\0';
    local_24[0xc] = '\0';
    local_24[0xd] = '\0';
    local_24[0xe] = '\0';
    local_24[0xf] = '\0';
    if (param_7) {
      memcpy(local_24,&DAT_08c9ede4,5);
    }
    else {
      memcpy(local_24,&DAT_08c9ed4b,3);
    }
    printf(local_24,local_2024);
    if (param_6) {
      sprintf(local_1024,"[%02d:%02d:%02d] %s",(int)(char)local_10,(int)local_10._1_1_,
              (int)local_10._2_1_,local_2024);
    }
    else {
      strcpy(local_1024,local_2024);
    }
    fprintf(*param_1,local_24,local_1024);
    fflush(*param_1);
    uVar2 = 1;
  }
  return uVar2;
}
```
