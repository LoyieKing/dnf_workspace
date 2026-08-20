# SPSub

`_ZN15cUserHistoryLog5SPSubEiii12eSPSubReason`

`cUserHistoryLog::SPSub(int, int, int, eSPSubReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08682be8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08682be8  _ZN15cUserHistoryLog5SPSubEiii12eSPSubReason
#           cUserHistoryLog::SPSub(int, int, int, eSPSubReason)
# range [0x08682be8, 0x08682c21]
08682be8 +0x00:  push   %ebp
08682be9 +0x01:  mov    %esp,%ebp
08682beb +0x03:  sub    $0x28,%esp
08682bee +0x06:  mov    0x18(%ebp),%edx
08682bf1 +0x09:  mov    0x8(%ebp),%eax
08682bf4 +0x0c:  mov    (%eax),%eax
08682bf6 +0x0e:  mov    0xc(%ebp),%ecx
08682bf9 +0x11:  mov    %ecx,0x14(%esp)
08682bfd +0x15:  mov    %edx,0x10(%esp)
08682c01 +0x19:  mov    0x14(%ebp),%edx
08682c04 +0x1c:  mov    %edx,0xc(%esp)
08682c08 +0x20:  mov    0x10(%ebp),%edx
08682c0b +0x23:  mov    %edx,0x8(%esp)
08682c0f +0x27:  movl   $"SP-,%d,%d,%d,%d",0x4(%esp)
08682c17 +0x2f:  mov    %eax,(%esp)
08682c1a +0x32:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08682c1f +0x37:  leave
08682c20 +0x38:  ret
08682c21 +0x39:  nop
```

## 反编译 C

```c
// cUserHistoryLog::SPSub @ 0x8682be8

/* cUserHistoryLog::SPSub(int, int, int, eSPSubReason) */

void __thiscall
cUserHistoryLog::SPSub
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_5)

{
  CUser::LogHistory(*(CUser **)this,"SP-,%d,%d,%d,%d",param_2,param_3,param_5,param_1);
  return;
}
```
