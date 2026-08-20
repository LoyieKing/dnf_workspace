# tryInsertAvatarIntoInventory

`_ZNK10CInventory28tryInsertAvatarIntoInventoryE10Inven_Item`

`CInventory::tryInsertAvatarIntoInventory(Inven_Item) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x085035f4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085035f4  _ZNK10CInventory28tryInsertAvatarIntoInventoryE10Inven_Item
#           CInventory::tryInsertAvatarIntoInventory(Inven_Item) const
# range [0x085035f4, 0x08503637]
085035f4 +0x00:  push   %ebp
085035f5 +0x01:  mov    %esp,%ebp
085035f7 +0x03:  sub    $0x10,%esp
085035fa +0x06:  movl   $0x0,-0x4(%ebp)
08503601 +0x0d:  jmp    08503625 <+0x31>
08503603 +0x0f:  mov    0x8(%ebp),%eax
08503606 +0x12:  mov    0x654(%eax),%edx
0850360c +0x18:  mov    -0x4(%ebp),%eax
0850360f +0x1b:  imul   $0x3d,%eax,%eax
08503612 +0x1e:  lea    (%edx,%eax,1),%eax
08503615 +0x21:  mov    0x2(%eax),%eax
08503618 +0x24:  test   %eax,%eax
0850361a +0x26:  jne    08503621 <+0x2d>
0850361c +0x28:  mov    -0x4(%ebp),%eax
0850361f +0x2b:  jmp    08503635 <+0x41>
08503621 +0x2d:  addl   $0x1,-0x4(%ebp)
08503625 +0x31:  cmpl   $0x68,-0x4(%ebp)
08503629 +0x35:  setle  %al
0850362c +0x38:  test   %al,%al
0850362e +0x3a:  jne    08503603 <+0xf>
08503630 +0x3c:  mov    $0xffffffff,%eax
08503635 +0x41:  leave
08503636 +0x42:  ret
08503637 +0x43:  nop
```

## 反编译 C

```c
// CInventory::tryInsertAvatarIntoInventory @ 0x85035f4

/* CInventory::tryInsertAvatarIntoInventory(Inven_Item) const */

int CInventory::tryInsertAvatarIntoInventory(int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x68 < local_8) {
      return -1;
    }
    if (*(int *)(*(int *)(param_1 + 0x654) + local_8 * 0x3d + 2) == 0) break;
    local_8 = local_8 + 1;
  }
  return local_8;
}
```
