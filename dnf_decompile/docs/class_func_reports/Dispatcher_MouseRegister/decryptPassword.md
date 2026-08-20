# decryptPassword

`_ZN24Dispatcher_MouseRegister15decryptPasswordEPKcPcj`

`Dispatcher_MouseRegister::decryptPassword(char const*, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `Dispatcher_MouseRegister` | `0x0826333a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826333a  _ZN24Dispatcher_MouseRegister15decryptPasswordEPKcPcj
#           Dispatcher_MouseRegister::decryptPassword(char const*, char*, unsigned int)
# range [0x0826333a, 0x082633c5]
0826333a +0x00:  push   %ebp
0826333b +0x01:  mov    %esp,%ebp
0826333d +0x03:  sub    $0x38,%esp
08263340 +0x06:  mov    &_ZN10GlobalData26s_pcryptTEA_MousePassword_E,%eax
08263345 +0x0b:  mov    (%eax),%eax
08263347 +0x0d:  add    $0x10,%eax
0826334a +0x10:  mov    (%eax),%ecx
0826334c +0x12:  mov    &_ZN10GlobalData26s_pcryptTEA_MousePassword_E,%eax
08263351 +0x17:  mov    0x10(%ebp),%edx
08263354 +0x1a:  mov    %edx,0xc(%esp)
08263358 +0x1e:  mov    0xc(%ebp),%edx
0826335b +0x21:  mov    %edx,0x8(%esp)
0826335f +0x25:  mov    0x8(%ebp),%edx
08263362 +0x28:  mov    %edx,0x4(%esp)
08263366 +0x2c:  mov    %eax,(%esp)
08263369 +0x2f:  call   *%ecx
0826336b +0x31:  mov    %eax,-0xc(%ebp)
0826336e +0x34:  cmpl   $0x0,-0xc(%ebp)
08263372 +0x38:  jns    082633bf <+0x85>
08263374 +0x3a:  movl   $"Decrypt Fail",0x1c(%esp)
0826337c +0x42:  movl   $0x1b1,0x18(%esp)
08263384 +0x4a:  movl   $"PacketDispatcher_Secu.cpp",0x14(%esp)
0826338c +0x52:  movl   $"[%s][%d][%s]",0x10(%esp)
08263394 +0x5a:  movl   $0x1b1,0xc(%esp)
0826339c +0x62:  movl   $&_ZZN24Dispatcher_MouseRegister15decryptPasswordEPKcPcjE19__PRETTY_FUNCTION__,0x8(%esp)
082633a4 +0x6a:  movl   $"PacketDispatcher_Secu.cpp",0x4(%esp)
082633ac +0x72:  movl   $0x1,(%esp)
082633b3 +0x79:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
082633b8 +0x7e:  mov    $0x0,%eax
082633bd +0x83:  jmp    082633c4 <+0x8a>
082633bf +0x85:  mov    $0x1,%eax
082633c4 +0x8a:  leave
082633c5 +0x8b:  ret
```

## 反编译 C

```c
// Dispatcher_MouseRegister::decryptPassword @ 0x826333a

/* Dispatcher_MouseRegister::decryptPassword(char const*, char*, unsigned int) */

bool Dispatcher_MouseRegister::decryptPassword(char *param_1,char *param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = (**(code **)(*GlobalData::s_pcryptTEA_MousePassword_ + 0x10))
                    (GlobalData::s_pcryptTEA_MousePassword_,param_1,param_2,param_3);
  if (-1 >= iVar1) {
    LogManager::logFormat
              (1,"PacketDispatcher_Secu.cpp",
               "static bool Dispatcher_MouseRegister::decryptPassword(const char*, char*, size_t)",
               0x1b1,"[%s][%d][%s]","PacketDispatcher_Secu.cpp",0x1b1,"Decrypt Fail");
  }
  return -1 < iVar1;
}
```
