# QuickEmptyCount

`_ZNK10CInventory15QuickEmptyCountEv`

`CInventory::QuickEmptyCount() const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08505038` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08505038  _ZNK10CInventory15QuickEmptyCountEv
#           CInventory::QuickEmptyCount() const
# range [0x08505038, 0x0850507f]
08505038 +0x00:  push   %ebp
08505039 +0x01:  mov    %esp,%ebp
0850503b +0x03:  sub    $0x10,%esp
0850503e +0x06:  movl   $0x0,-0x8(%ebp)
08505045 +0x0d:  movl   $0x3,-0x4(%ebp)
0850504c +0x14:  jmp    0850506f <+0x37>
0850504e +0x16:  mov    0x8(%ebp),%eax
08505051 +0x19:  mov    0x650(%eax),%edx
08505057 +0x1f:  mov    -0x4(%ebp),%eax
0850505a +0x22:  imul   $0x3d,%eax,%eax
0850505d +0x25:  lea    (%edx,%eax,1),%eax
08505060 +0x28:  mov    0x2(%eax),%eax
08505063 +0x2b:  test   %eax,%eax
08505065 +0x2d:  jne    0850506b <+0x33>
08505067 +0x2f:  addl   $0x1,-0x8(%ebp)
0850506b +0x33:  addl   $0x1,-0x4(%ebp)
0850506f +0x37:  cmpl   $0x8,-0x4(%ebp)
08505073 +0x3b:  setle  %al
08505076 +0x3e:  test   %al,%al
08505078 +0x40:  jne    0850504e <+0x16>
0850507a +0x42:  mov    -0x8(%ebp),%eax
0850507d +0x45:  leave
0850507e +0x46:  ret
0850507f +0x47:  nop
```

## 反编译 C

```c
// CInventory::QuickEmptyCount @ 0x8505038

/* CInventory::QuickEmptyCount() const */

int __thiscall CInventory::QuickEmptyCount(CInventory *this)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  for (local_8 = 3; local_8 < 9; local_8 = local_8 + 1) {
    if (*(int *)(*(int *)(this + 0x650) + local_8 * 0x3d + 2) == 0) {
      local_c = local_c + 1;
    }
  }
  return local_c;
}
```
