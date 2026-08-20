# RedeemItemAdd

`_ZN15cUserHistoryLog13RedeemItemAddEii`

`cUserHistoryLog::RedeemItemAdd(int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686990` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686990  _ZN15cUserHistoryLog13RedeemItemAddEii
#           cUserHistoryLog::RedeemItemAdd(int, int)
# range [0x08686990, 0x086869bb]
08686990 +0x00:  push   %ebp
08686991 +0x01:  mov    %esp,%ebp
08686993 +0x03:  sub    $0x18,%esp
08686996 +0x06:  mov    0x8(%ebp),%eax
08686999 +0x09:  mov    (%eax),%eax
0868699b +0x0b:  mov    0x10(%ebp),%edx
0868699e +0x0e:  mov    %edx,0xc(%esp)
086869a2 +0x12:  mov    0xc(%ebp),%edx
086869a5 +0x15:  mov    %edx,0x8(%esp)
086869a9 +0x19:  movl   $"RedeemItem+,%d,%d",0x4(%esp)
086869b1 +0x21:  mov    %eax,(%esp)
086869b4 +0x24:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086869b9 +0x29:  leave
086869ba +0x2a:  ret
086869bb +0x2b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::RedeemItemAdd @ 0x8686990

/* cUserHistoryLog::RedeemItemAdd(int, int) */

void __thiscall cUserHistoryLog::RedeemItemAdd(cUserHistoryLog *this,int param_1,int param_2)

{
  CUser::LogHistory(*(CUser **)this,"RedeemItem+,%d,%d",param_1,param_2);
  return;
}
```
