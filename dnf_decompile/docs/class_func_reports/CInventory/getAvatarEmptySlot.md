# getAvatarEmptySlot

`_ZNK10CInventory18getAvatarEmptySlotEii`

`CInventory::getAvatarEmptySlot(int, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08503638` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08503638  _ZNK10CInventory18getAvatarEmptySlotEii
#           CInventory::getAvatarEmptySlot(int, int) const
# range [0x08503638, 0x0850367b]
08503638 +0x00:  push   %ebp
08503639 +0x01:  mov    %esp,%ebp
0850363b +0x03:  sub    $0x10,%esp
0850363e +0x06:  mov    0xc(%ebp),%eax
08503641 +0x09:  mov    %eax,-0x4(%ebp)
08503644 +0x0c:  jmp    08503668 <+0x30>
08503646 +0x0e:  mov    0x8(%ebp),%eax
08503649 +0x11:  mov    0x654(%eax),%edx
0850364f +0x17:  mov    -0x4(%ebp),%eax
08503652 +0x1a:  imul   $0x3d,%eax,%eax
08503655 +0x1d:  lea    (%edx,%eax,1),%eax
08503658 +0x20:  mov    0x2(%eax),%eax
0850365b +0x23:  test   %eax,%eax
0850365d +0x25:  jne    08503664 <+0x2c>
0850365f +0x27:  mov    -0x4(%ebp),%eax
08503662 +0x2a:  jmp    0850367a <+0x42>
08503664 +0x2c:  addl   $0x1,-0x4(%ebp)
08503668 +0x30:  mov    -0x4(%ebp),%eax
0850366b +0x33:  cmp    0x10(%ebp),%eax
0850366e +0x36:  setle  %al
08503671 +0x39:  test   %al,%al
08503673 +0x3b:  jne    08503646 <+0xe>
08503675 +0x3d:  mov    $0xffffffff,%eax
0850367a +0x42:  leave
0850367b +0x43:  ret
```

## 反编译 C

```c
// CInventory::getAvatarEmptySlot @ 0x8503638

/* CInventory::getAvatarEmptySlot(int, int) const */

int __thiscall CInventory::getAvatarEmptySlot(CInventory *this,int param_1,int param_2)

{
  int local_8;
  
  local_8 = param_1;
  while( true ) {
    if (param_2 < local_8) {
      return -1;
    }
    if (*(int *)(*(int *)(this + 0x654) + local_8 * 0x3d + 2) == 0) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```
