# FPSub

`_ZN15cUserHistoryLog5FPSubEiii12eFPSubReason`

`cUserHistoryLog::FPSub(int, int, int, eFPSubReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08684b96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08684b96  _ZN15cUserHistoryLog5FPSubEiii12eFPSubReason
#           cUserHistoryLog::FPSub(int, int, int, eFPSubReason)
# range [0x08684b96, 0x08684bcf]
08684b96 +0x00:  push   %ebp
08684b97 +0x01:  mov    %esp,%ebp
08684b99 +0x03:  sub    $0x28,%esp
08684b9c +0x06:  mov    0x18(%ebp),%edx
08684b9f +0x09:  mov    0x8(%ebp),%eax
08684ba2 +0x0c:  mov    (%eax),%eax
08684ba4 +0x0e:  mov    %edx,0x14(%esp)
08684ba8 +0x12:  mov    0x14(%ebp),%edx
08684bab +0x15:  mov    %edx,0x10(%esp)
08684baf +0x19:  mov    0x10(%ebp),%edx
08684bb2 +0x1c:  mov    %edx,0xc(%esp)
08684bb6 +0x20:  mov    0xc(%ebp),%edx
08684bb9 +0x23:  mov    %edx,0x8(%esp)
08684bbd +0x27:  movl   $"FP-,%d,%d,%d,%d",0x4(%esp)
08684bc5 +0x2f:  mov    %eax,(%esp)
08684bc8 +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08684bcd +0x37:  leave
08684bce +0x38:  ret
08684bcf +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::FPSub @ 0x8684b96

/* cUserHistoryLog::FPSub(int, int, int, eFPSubReason) */

void __thiscall
cUserHistoryLog::FPSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"FP-,%d,%d,%d,%d",param_1,param_2,param_3,param_5);
  return;
}
```
