# apply_Item

`_ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason`

`cUserHistoryLog::apply_Item(int, int, eApplyItemReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686c7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686c7c  _ZN15cUserHistoryLog10apply_ItemEii16eApplyItemReason
#           cUserHistoryLog::apply_Item(int, int, eApplyItemReason)
# range [0x08686c7c, 0x08686cb9]
08686c7c +0x00:  push   %ebp
08686c7d +0x01:  mov    %esp,%ebp
08686c7f +0x03:  sub    $0x28,%esp
08686c82 +0x06:  mov    0x8(%ebp),%eax
08686c85 +0x09:  mov    (%eax),%eax
08686c87 +0x0b:  test   %eax,%eax
08686c89 +0x0d:  je     08686cb7 <+0x3b>
08686c8b +0x0f:  mov    0x14(%ebp),%edx
08686c8e +0x12:  mov    0x8(%ebp),%eax
08686c91 +0x15:  mov    (%eax),%eax
08686c93 +0x17:  mov    %edx,0x10(%esp)
08686c97 +0x1b:  mov    0x10(%ebp),%edx
08686c9a +0x1e:  mov    %edx,0xc(%esp)
08686c9e +0x22:  mov    0xc(%ebp),%edx
08686ca1 +0x25:  mov    %edx,0x8(%esp)
08686ca5 +0x29:  movl   $"ApplyItem ,%d,%d,%d",0x4(%esp)
08686cad +0x31:  mov    %eax,(%esp)
08686cb0 +0x34:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686cb5 +0x39:  jmp    08686cb8 <+0x3c>
08686cb7 +0x3b:  nop
08686cb8 +0x3c:  leave
08686cb9 +0x3d:  ret
```

## 反编译 C

```c
// cUserHistoryLog::apply_Item @ 0x8686c7c

/* cUserHistoryLog::apply_Item(int, int, eApplyItemReason) */

void __thiscall
cUserHistoryLog::apply_Item
          (cUserHistoryLog *this,undefined4 param_1,undefined4 param_2,undefined4 param_4)

{
  if (*(int *)this != 0) {
    CUser::LogHistory(*(CUser **)this,"ApplyItem ,%d,%d,%d",param_1,param_2,param_4);
  }
  return;
}
```
