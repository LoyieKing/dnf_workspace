# CheckItemLock

`_ZN4ARAD11PRINT_ERROR13CheckItemLockEPcP5CUsert`

`ARAD::PRINT_ERROR::CheckItemLock(char*, CUser*, unsigned short)`

| 类 | 地址 |
|---|---|
| `ARAD::PRINT_ERROR` | `0x08197bfd` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08197bfd  _ZN4ARAD11PRINT_ERROR13CheckItemLockEPcP5CUsert
#           ARAD::PRINT_ERROR::CheckItemLock(char*, CUser*, unsigned short)
# range [0x08197bfd, 0x08197c55]
08197bfd +0x00:  push   %ebp
08197bfe +0x01:  mov    %esp,%ebp
08197c00 +0x03:  sub    $0x38,%esp
08197c03 +0x06:  mov    0x10(%ebp),%eax
08197c06 +0x09:  mov    %ax,-0xc(%ebp)
08197c0a +0x0d:  mov    0xc(%ebp),%eax
08197c0d +0x10:  mov    %eax,(%esp)
08197c10 +0x13:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08197c15 +0x18:  movzwl -0xc(%ebp),%edx
08197c19 +0x1c:  mov    %eax,0x1c(%esp)
08197c1d +0x20:  mov    %edx,0x18(%esp)
08197c21 +0x24:  mov    0x8(%ebp),%eax
08197c24 +0x27:  mov    %eax,0x14(%esp)
08197c28 +0x2b:  movl   $"%s : CheckItemLock() fail [slot:%d] [charac_no:%d]",0x10(%esp)
08197c30 +0x33:  movl   $0x2a2,0xc(%esp)
08197c38 +0x3b:  movl   $&_ZZN4ARAD11PRINT_ERROR13CheckItemLockEPcP5CUsertE19__PRETTY_FUNCTION__,0x8(%esp)
08197c40 +0x43:  movl   $"localjapan/Arad_Function_Set.cpp",0x4(%esp)
08197c48 +0x4b:  movl   $0x1,(%esp)
08197c4f +0x52:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08197c54 +0x57:  leave
08197c55 +0x58:  ret
```

## 反编译 C

```c
// ARAD::PRINT_ERROR::CheckItemLock @ 0x8197bfd

/* ARAD::PRINT_ERROR::CheckItemLock(char*, CUser*, unsigned short) */

void ARAD::PRINT_ERROR::CheckItemLock(char *param_1,CUser *param_2,ushort param_3)

{
  undefined4 uVar1;
  
  uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  LogManager::logFormat
            (1,"localjapan/Arad_Function_Set.cpp",
             "void ARAD::PRINT_ERROR::CheckItemLock(char*, CUser*, short unsigned int)",0x2a2,
             "%s : CheckItemLock() fail [slot:%d] [charac_no:%d]",param_1,(uint)param_3,uVar1);
  return;
}
```
