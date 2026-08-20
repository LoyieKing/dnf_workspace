# WPSub

`_ZN15cUserHistoryLog5WPSubEii12eWPSubReason`

`cUserHistoryLog::WPSub(int, int, eWPSubReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08682cc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682cc8  _ZN15cUserHistoryLog5WPSubEii12eWPSubReason
#           cUserHistoryLog::WPSub(int, int, eWPSubReason)
# range [0x08682cc8, 0x08682cf9]
08682cc8 +0x00:  push   %ebp
08682cc9 +0x01:  mov    %esp,%ebp
08682ccb +0x03:  sub    $0x28,%esp
08682cce +0x06:  mov    0x14(%ebp),%edx
08682cd1 +0x09:  mov    0x8(%ebp),%eax
08682cd4 +0x0c:  mov    (%eax),%eax
08682cd6 +0x0e:  mov    %edx,0x10(%esp)
08682cda +0x12:  mov    0x10(%ebp),%edx
08682cdd +0x15:  mov    %edx,0xc(%esp)
08682ce1 +0x19:  mov    0xc(%ebp),%edx
08682ce4 +0x1c:  mov    %edx,0x8(%esp)
08682ce8 +0x20:  movl   $"WP-,%d,%d,%d",0x4(%esp)
08682cf0 +0x28:  mov    %eax,(%esp)
08682cf3 +0x2b:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08682cf8 +0x30:  leave
08682cf9 +0x31:  ret
```

## 反编译 C

```c
// cUserHistoryLog::WPSub @ 0x8682cc8

/* cUserHistoryLog::WPSub(int, int, eWPSubReason) */

void __thiscall
cUserHistoryLog::WPSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  CUser::LogHistory(*(CUser **)this,"WP-,%d,%d,%d",param_1,param_2,param_4);
  return;
}
```
