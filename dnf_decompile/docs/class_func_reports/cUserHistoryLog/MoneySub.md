# MoneySub

`_ZN15cUserHistoryLog8MoneySubEii15eMoneySubReason`

`cUserHistoryLog::MoneySub(int, int, eMoneySubReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683a80` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683a80  _ZN15cUserHistoryLog8MoneySubEii15eMoneySubReason
#           cUserHistoryLog::MoneySub(int, int, eMoneySubReason)
# range [0x08683a80, 0x08683adf]
08683a80 +0x00:  push   %ebp
08683a81 +0x01:  mov    %esp,%ebp
08683a83 +0x03:  sub    $0x28,%esp
08683a86 +0x06:  cmpl   $0x2,0x14(%ebp)
08683a8a +0x0a:  je     08683a92 <+0x12>
08683a8c +0x0c:  cmpl   $0x3,0x14(%ebp)
08683a90 +0x10:  jne    08683ab4 <+0x34>
08683a92 +0x12:  mov    0x14(%ebp),%eax
08683a95 +0x15:  mov    %eax,0xc(%esp)
08683a99 +0x19:  mov    0x10(%ebp),%eax
08683a9c +0x1c:  mov    %eax,0x8(%esp)
08683aa0 +0x20:  mov    0xc(%ebp),%eax
08683aa3 +0x23:  mov    %eax,0x4(%esp)
08683aa7 +0x27:  mov    0x8(%ebp),%eax
08683aaa +0x2a:  mov    %eax,(%esp)
08683aad +0x2d:  call   08683b38 <_ZN15cUserHistoryLog13MoneySubTradeEii15eMoneySubReason>  ; cUserHistoryLog::MoneySubTrade(int, int, eMoneySubReason)
08683ab2 +0x32:  jmp    08683ade <+0x5e>
08683ab4 +0x34:  mov    0x14(%ebp),%edx
08683ab7 +0x37:  mov    0x8(%ebp),%eax
08683aba +0x3a:  mov    (%eax),%eax
08683abc +0x3c:  mov    %edx,0x10(%esp)
08683ac0 +0x40:  mov    0x10(%ebp),%edx
08683ac3 +0x43:  mov    %edx,0xc(%esp)
08683ac7 +0x47:  mov    0xc(%ebp),%edx
08683aca +0x4a:  mov    %edx,0x8(%esp)
08683ace +0x4e:  movl   $"Money-,%d,%d,%d",0x4(%esp)
08683ad6 +0x56:  mov    %eax,(%esp)
08683ad9 +0x59:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683ade +0x5e:  leave
08683adf +0x5f:  ret
```

## 反编译 C

```c
// cUserHistoryLog::MoneySub @ 0x8683a80

/* cUserHistoryLog::MoneySub(int, int, eMoneySubReason) */

void __thiscall
cUserHistoryLog::MoneySub(cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,int param_4)

{
  if ((param_4 == 2) || (param_4 == 3)) {
    MoneySubTrade(this,param_1,param_2,param_4);
  }
  else {
    CUser::LogHistory(*(CUser **)this,"Money-,%d,%d,%d",param_1,param_2,param_4);
  }
  return;
}
```
