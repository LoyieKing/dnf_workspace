# CashInvenDel

`_ZN15cUserHistoryLog12CashInvenDelE19eCashInvenDelReasonjjmj`

`cUserHistoryLog::CashInvenDel(eCashInvenDelReason, unsigned int, unsigned int, unsigned long, unsigned int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686874` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686874  _ZN15cUserHistoryLog12CashInvenDelE19eCashInvenDelReasonjjmj
#           cUserHistoryLog::CashInvenDel(eCashInvenDelReason, unsigned int, unsigned int, unsigned long, unsigned int)
# range [0x08686874, 0x086868b3]
08686874 +0x00:  push   %ebp
08686875 +0x01:  mov    %esp,%ebp
08686877 +0x03:  sub    $0x28,%esp
0868687a +0x06:  mov    0xc(%ebp),%edx
0868687d +0x09:  mov    0x8(%ebp),%eax
08686880 +0x0c:  mov    (%eax),%eax
08686882 +0x0e:  mov    0x1c(%ebp),%ecx
08686885 +0x11:  mov    %ecx,0x18(%esp)
08686889 +0x15:  mov    0x18(%ebp),%ecx
0868688c +0x18:  mov    %ecx,0x14(%esp)
08686890 +0x1c:  mov    0x14(%ebp),%ecx
08686893 +0x1f:  mov    %ecx,0x10(%esp)
08686897 +0x23:  mov    0x10(%ebp),%ecx
0868689a +0x26:  mov    %ecx,0xc(%esp)
0868689e +0x2a:  mov    %edx,0x8(%esp)
086868a2 +0x2e:  movl   $"CashInven-,%u,%u,%u,%u,%u",0x4(%esp)
086868aa +0x36:  mov    %eax,(%esp)
086868ad +0x39:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
086868b2 +0x3e:  leave
086868b3 +0x3f:  ret
```

## 反编译 C

```c
// cUserHistoryLog::CashInvenDel @ 0x8686874

/* cUserHistoryLog::CashInvenDel(eCashInvenDelReason, unsigned int, unsigned int, unsigned long,
   unsigned int) */

void __thiscall
cUserHistoryLog::CashInvenDel
          (cUserHistoryLog *this,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  CUser::LogHistory(*(CUser **)this,"CashInven-,%u,%u,%u,%u,%u",param_2,param_3,param_4,param_5,
                    param_6);
  return;
}
```
