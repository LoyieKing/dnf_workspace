# IsEquipAvatar

`_ZNK10CInventory13IsEquipAvatarEv`

`CInventory::IsEquipAvatar() const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fb638` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fb638  _ZNK10CInventory13IsEquipAvatarEv
#           CInventory::IsEquipAvatar() const
# range [0x084fb638, 0x084fb679]
084fb638 +0x00:  push   %ebp
084fb639 +0x01:  mov    %esp,%ebp
084fb63b +0x03:  sub    $0x10,%esp
084fb63e +0x06:  movl   $0x0,-0x4(%ebp)
084fb645 +0x0d:  jmp    084fb668 <+0x30>
084fb647 +0x0f:  mov    -0x4(%ebp),%eax
084fb64a +0x12:  mov    0x8(%ebp),%edx
084fb64d +0x15:  imul   $0x3d,%eax,%eax
084fb650 +0x18:  lea    (%edx,%eax,1),%eax
084fb653 +0x1b:  add    $0x10,%eax
084fb656 +0x1e:  mov    0xe(%eax),%eax
084fb659 +0x21:  test   %eax,%eax
084fb65b +0x23:  je     084fb664 <+0x2c>
084fb65d +0x25:  mov    $0x1,%eax
084fb662 +0x2a:  jmp    084fb678 <+0x40>
084fb664 +0x2c:  addl   $0x1,-0x4(%ebp)
084fb668 +0x30:  cmpl   $0x9,-0x4(%ebp)
084fb66c +0x34:  setle  %al
084fb66f +0x37:  test   %al,%al
084fb671 +0x39:  jne    084fb647 <+0xf>
084fb673 +0x3b:  mov    $0x0,%eax
084fb678 +0x40:  leave
084fb679 +0x41:  ret
```

## 反编译 C

```c
// CInventory::IsEquipAvatar @ 0x84fb638

/* CInventory::IsEquipAvatar() const */

undefined4 __thiscall CInventory::IsEquipAvatar(CInventory *this)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (9 < local_8) {
      return 0;
    }
    if (*(int *)(this + local_8 * 0x3d + 0x1e) != 0) break;
    local_8 = local_8 + 1;
  }
  return 1;
}
```
