# WPAdd

`_ZN15cUserHistoryLog5WPAddEii12eWPAddReason`

`cUserHistoryLog::WPAdd(int, int, eWPAddReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08682c96` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682c96  _ZN15cUserHistoryLog5WPAddEii12eWPAddReason
#           cUserHistoryLog::WPAdd(int, int, eWPAddReason)
# range [0x08682c96, 0x08682cc7]
08682c96 +0x00:  push   %ebp
08682c97 +0x01:  mov    %esp,%ebp
08682c99 +0x03:  sub    $0x28,%esp
08682c9c +0x06:  mov    0x14(%ebp),%edx
08682c9f +0x09:  mov    0x8(%ebp),%eax
08682ca2 +0x0c:  mov    (%eax),%eax
08682ca4 +0x0e:  mov    %edx,0x10(%esp)
08682ca8 +0x12:  mov    0x10(%ebp),%edx
08682cab +0x15:  mov    %edx,0xc(%esp)
08682caf +0x19:  mov    0xc(%ebp),%edx
08682cb2 +0x1c:  mov    %edx,0x8(%esp)
08682cb6 +0x20:  movl   $"WP+,%d,%d,%d",0x4(%esp)
08682cbe +0x28:  mov    %eax,(%esp)
08682cc1 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08682cc6 +0x30:  leave
08682cc7 +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::WPAdd @ 0x8682c96

/* cUserHistoryLog::WPAdd(int, int, eWPAddReason) */

void __thiscall
cUserHistoryLog::WPAdd
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"WP+,%d,%d,%d",param_1,param_2,param_4);
  return;
}
```
