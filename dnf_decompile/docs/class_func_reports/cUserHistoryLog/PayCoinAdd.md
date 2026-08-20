# PayCoinAdd

`_ZN15cUserHistoryLog10PayCoinAddEii14eCoinAddReason`

`cUserHistoryLog::PayCoinAdd(int, int, eCoinAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08683bf4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08683bf4  _ZN15cUserHistoryLog10PayCoinAddEii14eCoinAddReason
#           cUserHistoryLog::PayCoinAdd(int, int, eCoinAddReason)
# range [0x08683bf4, 0x08683c25]
08683bf4 +0x00:  push   %ebp
08683bf5 +0x01:  mov    %esp,%ebp
08683bf7 +0x03:  sub    $0x28,%esp
08683bfa +0x06:  mov    0x14(%ebp),%edx
08683bfd +0x09:  mov    0x8(%ebp),%eax
08683c00 +0x0c:  mov    (%eax),%eax
08683c02 +0x0e:  mov    %edx,0x10(%esp)
08683c06 +0x12:  mov    0x10(%ebp),%edx
08683c09 +0x15:  mov    %edx,0xc(%esp)
08683c0d +0x19:  mov    0xc(%ebp),%edx
08683c10 +0x1c:  mov    %edx,0x8(%esp)
08683c14 +0x20:  movl   $"PCoin+,%d,%d,%d",0x4(%esp)
08683c1c +0x28:  mov    %eax,(%esp)
08683c1f +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08683c24 +0x30:  leave
08683c25 +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::PayCoinAdd @ 0x8683bf4

/* cUserHistoryLog::PayCoinAdd(int, int, eCoinAddReason) */

void __thiscall
cUserHistoryLog::PayCoinAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"PCoin+,%d,%d,%d",param_1,param_2,param_4);
  return;
}
```
