# quickslot_priority

`_ZN14CStackableItem18quickslot_priorityEv`

`CStackableItem::quickslot_priority()`

| 类 | 地址 |
|---|---|
| `CStackableItem` | `0x0850f732` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850f732  _ZN14CStackableItem18quickslot_priorityEv
#           CStackableItem::quickslot_priority()
# range [0x0850f732, 0x0850f75d]
0850f732 +0x00:  push   %ebp
0850f733 +0x01:  mov    %esp,%ebp
0850f735 +0x03:  mov    0x8(%ebp),%eax
0850f738 +0x06:  mov    0x2b0(%eax),%eax
0850f73e +0x0c:  test   %eax,%eax
0850f740 +0x0e:  je     0850f750 <+0x1e>
0850f742 +0x10:  mov    0x8(%ebp),%eax
0850f745 +0x13:  mov    0x2b0(%eax),%eax
0850f74b +0x19:  cmp    $0x4,%eax
0850f74e +0x1c:  jne    0850f757 <+0x25>
0850f750 +0x1e:  mov    $0x1,%eax
0850f755 +0x23:  jmp    0850f75c <+0x2a>
0850f757 +0x25:  mov    $0x0,%eax
0850f75c +0x2a:  pop    %ebp
0850f75d +0x2b:  ret
```

## 反编译 C

```c
// CStackableItem::quickslot_priority @ 0x850f732

/* CStackableItem::quickslot_priority() */

undefined4 __thiscall CStackableItem::quickslot_priority(CStackableItem *this)

{
  undefined4 uVar1;
  
  if ((*(int *)(this + 0x2b0) == 0) || (*(int *)(this + 0x2b0) == 4)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
