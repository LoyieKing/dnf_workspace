# CashInvenAdd

`_ZN15cUserHistoryLog12CashInvenAddE19eCashInvenAddReasonjjm`

`cUserHistoryLog::CashInvenAdd(eCashInvenAddReason, unsigned int, unsigned int, unsigned long)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868683a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868683a  _ZN15cUserHistoryLog12CashInvenAddE19eCashInvenAddReasonjjm
#           cUserHistoryLog::CashInvenAdd(eCashInvenAddReason, unsigned int, unsigned int, unsigned long)
# range [0x0868683a, 0x08686873]
0868683a +0x00:  push   %ebp
0868683b +0x01:  mov    %esp,%ebp
0868683d +0x03:  sub    $0x28,%esp
08686840 +0x06:  mov    0xc(%ebp),%edx
08686843 +0x09:  mov    0x8(%ebp),%eax
08686846 +0x0c:  mov    (%eax),%eax
08686848 +0x0e:  mov    0x18(%ebp),%ecx
0868684b +0x11:  mov    %ecx,0x14(%esp)
0868684f +0x15:  mov    0x14(%ebp),%ecx
08686852 +0x18:  mov    %ecx,0x10(%esp)
08686856 +0x1c:  mov    0x10(%ebp),%ecx
08686859 +0x1f:  mov    %ecx,0xc(%esp)
0868685d +0x23:  mov    %edx,0x8(%esp)
08686861 +0x27:  movl   $"CashInven+,%u,%u,%u,%u",0x4(%esp)
08686869 +0x2f:  mov    %eax,(%esp)
0868686c +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686871 +0x37:  leave
08686872 +0x38:  ret
08686873 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::CashInvenAdd @ 0x868683a

/* cUserHistoryLog::CashInvenAdd(eCashInvenAddReason, unsigned int, unsigned int, unsigned long) */

void __thiscall
cUserHistoryLog::CashInvenAdd
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"CashInven+,%u,%u,%u,%u",param_2,param_3,param_4,param_5);
  return;
}
```
