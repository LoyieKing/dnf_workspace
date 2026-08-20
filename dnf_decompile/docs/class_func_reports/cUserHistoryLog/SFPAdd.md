# SFPAdd

`_ZN15cUserHistoryLog6SFPAddEiii12eSPAddReason`

`cUserHistoryLog::SFPAdd(int, int, int, eSPAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08682c22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682c22  _ZN15cUserHistoryLog6SFPAddEiii12eSPAddReason
#           cUserHistoryLog::SFPAdd(int, int, int, eSPAddReason)
# range [0x08682c22, 0x08682c5b]
08682c22 +0x00:  push   %ebp
08682c23 +0x01:  mov    %esp,%ebp
08682c25 +0x03:  sub    $0x28,%esp
08682c28 +0x06:  mov    0x18(%ebp),%edx
08682c2b +0x09:  mov    0x8(%ebp),%eax
08682c2e +0x0c:  mov    (%eax),%eax
08682c30 +0x0e:  mov    0xc(%ebp),%ecx
08682c33 +0x11:  mov    %ecx,0x14(%esp)
08682c37 +0x15:  mov    %edx,0x10(%esp)
08682c3b +0x19:  mov    0x14(%ebp),%edx
08682c3e +0x1c:  mov    %edx,0xc(%esp)
08682c42 +0x20:  mov    0x10(%ebp),%edx
08682c45 +0x23:  mov    %edx,0x8(%esp)
08682c49 +0x27:  movl   $"SFP+,%d,%d,%d,%d",0x4(%esp)
08682c51 +0x2f:  mov    %eax,(%esp)
08682c54 +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08682c59 +0x37:  leave
08682c5a +0x38:  ret
08682c5b +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::SFPAdd @ 0x8682c22

/* cUserHistoryLog::SFPAdd(int, int, int, eSPAddReason) */

void __thiscall
cUserHistoryLog::SFPAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"SFP+,%d,%d,%d,%d",param_2,param_3,param_5,param_1);
  return;
}
```
