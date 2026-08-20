# find_item

`_ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri`

`ARAD::PRINT_ERROR::find_item(char*, CUser*, int)`

| 类 | 地址 |
|---|---|
| `ARAD::PRINT_ERROR` | `0x08197caf` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08197caf  _ZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseri
#           ARAD::PRINT_ERROR::find_item(char*, CUser*, int)
# range [0x08197caf, 0x08197cff]
08197caf +0x00:  push   %ebp
08197cb0 +0x01:  mov    %esp,%ebp
08197cb2 +0x03:  sub    $0x28,%esp
08197cb5 +0x06:  mov    0xc(%ebp),%eax
08197cb8 +0x09:  mov    %eax,(%esp)
08197cbb +0x0c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08197cc0 +0x11:  mov    %eax,0x1c(%esp)
08197cc4 +0x15:  mov    0x10(%ebp),%eax
08197cc7 +0x18:  mov    %eax,0x18(%esp)
08197ccb +0x1c:  mov    0x8(%ebp),%eax
08197cce +0x1f:  mov    %eax,0x14(%esp)
08197cd2 +0x23:  movl   $"%s : find_item() fail [item_id:%d] [charac_no:%d]",0x10(%esp)
08197cda +0x2b:  movl   $0x2ac,0xc(%esp)
08197ce2 +0x33:  movl   $&_ZZN4ARAD11PRINT_ERROR9find_itemEPcP5CUseriE19__PRETTY_FUNCTION__,0x8(%esp)
08197cea +0x3b:  movl   $"localjapan/Arad_Function_Set.cpp",0x4(%esp)
08197cf2 +0x43:  movl   $0x1,(%esp)
08197cf9 +0x4a:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08197cfe +0x4f:  leave
08197cff +0x50:  ret
```

## 反编译 C

```c
// ARAD::PRINT_ERROR::find_item @ 0x8197caf

/* ARAD::PRINT_ERROR::find_item(char*, CUser*, int) */

void ARAD::PRINT_ERROR::find_item(char *param_1,CUser *param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
  LogManager::logFormat
            (1,"localjapan/Arad_Function_Set.cpp",
             "void ARAD::PRINT_ERROR::find_item(char*, CUser*, int)",0x2ac,
             "%s : find_item() fail [item_id:%d] [charac_no:%d]",param_1,param_3,uVar1);
  return;
}
```
