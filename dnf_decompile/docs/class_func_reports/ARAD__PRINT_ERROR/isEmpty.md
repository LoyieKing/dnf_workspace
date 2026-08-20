# isEmpty

`_ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert`

`ARAD::PRINT_ERROR::isEmpty(char*, CUser*, unsigned short)`

| 类 | 地址 |
|---|---|
| `ARAD::PRINT_ERROR` | `0x08197ba4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08197ba4  _ZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsert
#           ARAD::PRINT_ERROR::isEmpty(char*, CUser*, unsigned short)
# range [0x08197ba4, 0x08197bfc]
08197ba4 +0x00:  push   %ebp
08197ba5 +0x01:  mov    %esp,%ebp
08197ba7 +0x03:  sub    $0x38,%esp
08197baa +0x06:  mov    0x10(%ebp),%eax
08197bad +0x09:  mov    %ax,-0xc(%ebp)
08197bb1 +0x0d:  mov    0xc(%ebp),%eax
08197bb4 +0x10:  mov    %eax,(%esp)
08197bb7 +0x13:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08197bbc +0x18:  movzwl -0xc(%ebp),%edx
08197bc0 +0x1c:  mov    %eax,0x1c(%esp)
08197bc4 +0x20:  mov    %edx,0x18(%esp)
08197bc8 +0x24:  mov    0x8(%ebp),%eax
08197bcb +0x27:  mov    %eax,0x14(%esp)
08197bcf +0x2b:  movl   $"%s : isEmpty() [slot:%d] [charac_no:%d]",0x10(%esp)
08197bd7 +0x33:  movl   $0x29d,0xc(%esp)
08197bdf +0x3b:  movl   $&_ZZN4ARAD11PRINT_ERROR7isEmptyEPcP5CUsertE19__PRETTY_FUNCTION__,0x8(%esp)
08197be7 +0x43:  movl   $"localjapan/Arad_Function_Set.cpp",0x4(%esp)
08197bef +0x4b:  movl   $0x1,(%esp)
08197bf6 +0x52:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08197bfb +0x57:  leave
08197bfc +0x58:  ret
```

## 反编译 C

```c
// ARAD::PRINT_ERROR::isEmpty @ 0x8197ba4

/* ARAD::PRINT_ERROR::isEmpty(char*, CUser*, unsigned short) */

void ARAD::PRINT_ERROR::isEmpty(char *param_1,CUser *param_2,ushort param_3)

{
  undefined4 uVar1;
  
  uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  LogManager::logFormat
            (1,"localjapan/Arad_Function_Set.cpp",
             "void ARAD::PRINT_ERROR::isEmpty(char*, CUser*, short unsigned int)",0x29d,
             "%s : isEmpty() [slot:%d] [charac_no:%d]",param_1,(uint)param_3,uVar1);
  return;
}
```
