# RedeemItemDel

`_ZN15cUserHistoryLog13RedeemItemDelEii`

`cUserHistoryLog::RedeemItemDel(int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x086869bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086869bc  _ZN15cUserHistoryLog13RedeemItemDelEii
#           cUserHistoryLog::RedeemItemDel(int, int)
# range [0x086869bc, 0x086869e7]
086869bc +0x00:  push   %ebp
086869bd +0x01:  mov    %esp,%ebp
086869bf +0x03:  sub    $0x18,%esp
086869c2 +0x06:  mov    0x8(%ebp),%eax
086869c5 +0x09:  mov    (%eax),%eax
086869c7 +0x0b:  mov    0x10(%ebp),%edx
086869ca +0x0e:  mov    %edx,0xc(%esp)
086869ce +0x12:  mov    0xc(%ebp),%edx
086869d1 +0x15:  mov    %edx,0x8(%esp)
086869d5 +0x19:  movl   $"RedeemItem-,%d,%d",0x4(%esp)
086869dd +0x21:  mov    %eax,(%esp)
086869e0 +0x24:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086869e5 +0x29:  leave
086869e6 +0x2a:  ret
086869e7 +0x2b:  nop
```

## 反编译 C

```c
// cUserHistoryLog::RedeemItemDel @ 0x86869bc

/* cUserHistoryLog::RedeemItemDel(int, int) */

void __thiscall cUserHistoryLog::RedeemItemDel(cUserHistoryLog *this,int param_1,int param_2)

{
  CUser::LogHistory(*(CUser **)this,"RedeemItem-,%d,%d",param_1,param_2);
  return;
}
```
