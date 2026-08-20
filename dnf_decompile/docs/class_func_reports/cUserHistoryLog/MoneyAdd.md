# MoneyAdd

`_ZN15cUserHistoryLog8MoneyAddEii15eMoneyAddReason`

`cUserHistoryLog::MoneyAdd(int, int, eMoneyAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683a20` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683a20  _ZN15cUserHistoryLog8MoneyAddEii15eMoneyAddReason
#           cUserHistoryLog::MoneyAdd(int, int, eMoneyAddReason)
# range [0x08683a20, 0x08683a7f]
08683a20 +0x00:  push   %ebp
08683a21 +0x01:  mov    %esp,%ebp
08683a23 +0x03:  sub    $0x28,%esp
08683a26 +0x06:  cmpl   $0x1,0x14(%ebp)
08683a2a +0x0a:  je     08683a32 <+0x12>
08683a2c +0x0c:  cmpl   $0x2,0x14(%ebp)
08683a30 +0x10:  jne    08683a54 <+0x34>
08683a32 +0x12:  mov    0x14(%ebp),%eax
08683a35 +0x15:  mov    %eax,0xc(%esp)
08683a39 +0x19:  mov    0x10(%ebp),%eax
08683a3c +0x1c:  mov    %eax,0x8(%esp)
08683a40 +0x20:  mov    0xc(%ebp),%eax
08683a43 +0x23:  mov    %eax,0x4(%esp)
08683a47 +0x27:  mov    0x8(%ebp),%eax
08683a4a +0x2a:  mov    %eax,(%esp)
08683a4d +0x2d:  call   08683ae0 <_ZN15cUserHistoryLog13MoneyAddTradeEii15eMoneyAddReason>  ; cUserHistoryLog::MoneyAddTrade(int, int, eMoneyAddReason)
08683a52 +0x32:  jmp    08683a7e <+0x5e>
08683a54 +0x34:  mov    0x14(%ebp),%edx
08683a57 +0x37:  mov    0x8(%ebp),%eax
08683a5a +0x3a:  mov    (%eax),%eax
08683a5c +0x3c:  mov    %edx,0x10(%esp)
08683a60 +0x40:  mov    0x10(%ebp),%edx
08683a63 +0x43:  mov    %edx,0xc(%esp)
08683a67 +0x47:  mov    0xc(%ebp),%edx
08683a6a +0x4a:  mov    %edx,0x8(%esp)
08683a6e +0x4e:  movl   $"Money+,%d,%d,%d",0x4(%esp)
08683a76 +0x56:  mov    %eax,(%esp)
08683a79 +0x59:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683a7e +0x5e:  leave
08683a7f +0x5f:  ret
```

## 反编译 C

```c
// cUserHistoryLog::MoneyAdd @ 0x8683a20

/* cUserHistoryLog::MoneyAdd(int, int, eMoneyAddReason) */

void __thiscall
cUserHistoryLog::MoneyAdd(cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,int param_4)

{
  if ((param_4 == 1) || (param_4 == 2)) {
    MoneyAddTrade(this,param_1,param_2,param_4);
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Money+,%d,%d,%d",param_1,param_2,param_4);
  }
  return;
}
```
