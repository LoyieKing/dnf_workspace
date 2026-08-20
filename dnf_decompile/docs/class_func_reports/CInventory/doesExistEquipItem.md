# doesExistEquipItem

`_ZN10CInventory18doesExistEquipItemEii`

`CInventory::doesExistEquipItem(int, int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08503392` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08503392  _ZN10CInventory18doesExistEquipItemEii
#           CInventory::doesExistEquipItem(int, int)
# range [0x08503392, 0x08503417]
08503392 +0x00:  push   %ebp
08503393 +0x01:  mov    %esp,%ebp
08503395 +0x03:  sub    $0x10,%esp
08503398 +0x06:  movl   $0x3,-0x4(%ebp)
0850339f +0x0d:  jmp    08503403 <+0x71>
085033a1 +0x0f:  mov    0x8(%ebp),%eax
085033a4 +0x12:  mov    0x650(%eax),%edx
085033aa +0x18:  mov    -0x4(%ebp),%eax
085033ad +0x1b:  imul   $0x3d,%eax,%eax
085033b0 +0x1e:  lea    (%edx,%eax,1),%eax
085033b3 +0x21:  mov    0x2(%eax),%edx
085033b6 +0x24:  mov    0xc(%ebp),%eax
085033b9 +0x27:  cmp    %eax,%edx
085033bb +0x29:  jne    085033f8 <+0x66>
085033bd +0x2b:  mov    0x8(%ebp),%eax
085033c0 +0x2e:  mov    0x650(%eax),%edx
085033c6 +0x34:  mov    -0x4(%ebp),%eax
085033c9 +0x37:  imul   $0x3d,%eax,%eax
085033cc +0x3a:  lea    (%edx,%eax,1),%eax
085033cf +0x3d:  mov    0x7(%eax),%eax
085033d2 +0x40:  cmp    0x10(%ebp),%eax
085033d5 +0x43:  jne    085033fb <+0x69>
085033d7 +0x45:  mov    0x8(%ebp),%eax
085033da +0x48:  mov    0x650(%eax),%edx
085033e0 +0x4e:  mov    -0x4(%ebp),%eax
085033e3 +0x51:  imul   $0x3d,%eax,%eax
085033e6 +0x54:  lea    (%edx,%eax,1),%eax
085033e9 +0x57:  movzbl 0x1(%eax),%eax
085033ed +0x5b:  cmp    $0x1,%al
085033ef +0x5d:  jne    085033fe <+0x6c>
085033f1 +0x5f:  mov    $0x1,%eax
085033f6 +0x64:  jmp    08503416 <+0x84>
085033f8 +0x66:  nop
085033f9 +0x67:  jmp    085033ff <+0x6d>
085033fb +0x69:  nop
085033fc +0x6a:  jmp    085033ff <+0x6d>
085033fe +0x6c:  nop
085033ff +0x6d:  addl   $0x1,-0x4(%ebp)
08503403 +0x71:  cmpl   $0xc8,-0x4(%ebp)
0850340a +0x78:  setle  %al
0850340d +0x7b:  test   %al,%al
0850340f +0x7d:  jne    085033a1 <+0xf>
08503411 +0x7f:  mov    $0x0,%eax
08503416 +0x84:  leave
08503417 +0x85:  ret
```

## 反编译 C

```c
// CInventory::doesExistEquipItem @ 0x8503392

/* CInventory::doesExistEquipItem(int, int) */

undefined4 __thiscall CInventory::doesExistEquipItem(CInventory *this,int param_1,int param_2)

{
  int local_8;
  
  local_8 = 3;
  while( true ) {
    if (200 < local_8) {
      return 0;
    }
    if (((*(int *)(*(int *)(this + 0x650) + local_8 * 0x3d + 2) == param_1) &&
        (*(int *)(*(int *)(this + 0x650) + local_8 * 0x3d + 7) == param_2)) &&
       (*(char *)(*(int *)(this + 0x650) + local_8 * 0x3d + 1) == '\x01')) break;
    local_8 = local_8 + 1;
  }
  return 1;
}
```
