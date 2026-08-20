# SFPSub

`_ZN15cUserHistoryLog6SFPSubEiii12eSPSubReason`

`cUserHistoryLog::SFPSub(int, int, int, eSPSubReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08682c5c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682c5c  _ZN15cUserHistoryLog6SFPSubEiii12eSPSubReason
#           cUserHistoryLog::SFPSub(int, int, int, eSPSubReason)
# range [0x08682c5c, 0x08682c95]
08682c5c +0x00:  push   %ebp
08682c5d +0x01:  mov    %esp,%ebp
08682c5f +0x03:  sub    $0x28,%esp
08682c62 +0x06:  mov    0x18(%ebp),%edx
08682c65 +0x09:  mov    0x8(%ebp),%eax
08682c68 +0x0c:  mov    (%eax),%eax
08682c6a +0x0e:  mov    0xc(%ebp),%ecx
08682c6d +0x11:  mov    %ecx,0x14(%esp)
08682c71 +0x15:  mov    %edx,0x10(%esp)
08682c75 +0x19:  mov    0x14(%ebp),%edx
08682c78 +0x1c:  mov    %edx,0xc(%esp)
08682c7c +0x20:  mov    0x10(%ebp),%edx
08682c7f +0x23:  mov    %edx,0x8(%esp)
08682c83 +0x27:  movl   $"SFP-,%d,%d,%d,%d",0x4(%esp)
08682c8b +0x2f:  mov    %eax,(%esp)
08682c8e +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08682c93 +0x37:  leave
08682c94 +0x38:  ret
08682c95 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::SFPSub @ 0x8682c5c

/* cUserHistoryLog::SFPSub(int, int, int, eSPSubReason) */

void __thiscall
cUserHistoryLog::SFPSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"SFP-,%d,%d,%d,%d",param_2,param_3,param_5,param_1);
  return;
}
```
