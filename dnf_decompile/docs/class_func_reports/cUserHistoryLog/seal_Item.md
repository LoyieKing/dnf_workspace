# seal_Item

`_ZN15cUserHistoryLog9seal_ItemEis15eSealItemReason`

`cUserHistoryLog::seal_Item(int, short, eSealItemReason)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x08686c36` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08686c36  _ZN15cUserHistoryLog9seal_ItemEis15eSealItemReason
#           cUserHistoryLog::seal_Item(int, short, eSealItemReason)
# range [0x08686c36, 0x08686c7b]
08686c36 +0x00:  push   %ebp
08686c37 +0x01:  mov    %esp,%ebp
08686c39 +0x03:  sub    $0x38,%esp
08686c3c +0x06:  mov    0x10(%ebp),%eax
08686c3f +0x09:  mov    %ax,-0xc(%ebp)
08686c43 +0x0d:  mov    0x8(%ebp),%eax
08686c46 +0x10:  mov    (%eax),%eax
08686c48 +0x12:  test   %eax,%eax
08686c4a +0x14:  je     08686c79 <+0x43>
08686c4c +0x16:  mov    0x14(%ebp),%ecx
08686c4f +0x19:  movswl -0xc(%ebp),%edx
08686c53 +0x1d:  mov    0x8(%ebp),%eax
08686c56 +0x20:  mov    (%eax),%eax
08686c58 +0x22:  mov    %ecx,0x10(%esp)
08686c5c +0x26:  mov    %edx,0xc(%esp)
08686c60 +0x2a:  mov    0xc(%ebp),%edx
08686c63 +0x2d:  mov    %edx,0x8(%esp)
08686c67 +0x31:  movl   $"SealItem ,%d,%d,%d",0x4(%esp)
08686c6f +0x39:  mov    %eax,(%esp)
08686c72 +0x3c:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08686c77 +0x41:  jmp    08686c7a <+0x44>
08686c79 +0x43:  nop
08686c7a +0x44:  leave
08686c7b +0x45:  ret
```

## 反编译 C

```c
// cUserHistoryLog::seal_Item @ 0x8686c36

/* cUserHistoryLog::seal_Item(int, short, eSealItemReason) */

void __thiscall
cUserHistoryLog::seal_Item
          (cUserHistoryLog *this,undefined4 param_1,short param_2,undefined4 param_4)

{
  if (*(int *)this != 0) {
    CUser::LogHistory(*(CUser **)this,"SealItem ,%d,%d,%d",param_1,(int)param_2,param_4);
  }
  return;
}
```
