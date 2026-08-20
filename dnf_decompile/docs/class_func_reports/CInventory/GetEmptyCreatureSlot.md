# GetEmptyCreatureSlot

`_ZNK10CInventory20GetEmptyCreatureSlotER10Inven_Item`

`CInventory::GetEmptyCreatureSlot(Inven_Item&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a436` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a436  _ZNK10CInventory20GetEmptyCreatureSlotER10Inven_Item
#           CInventory::GetEmptyCreatureSlot(Inven_Item&) const
# range [0x0850a436, 0x0850a4af]
0850a436 +0x00:  push   %ebp
0850a437 +0x01:  mov    %esp,%ebp
0850a439 +0x03:  sub    $0x28,%esp
0850a43c +0x06:  movl   $0x0,-0x10(%ebp)
0850a443 +0x0d:  movl   $0x0,-0x14(%ebp)
0850a44a +0x14:  mov    0xc(%ebp),%eax
0850a44d +0x17:  movzbl 0x1(%eax),%eax
0850a451 +0x1b:  movzbl %al,%eax
0850a454 +0x1e:  lea    -0x14(%ebp),%edx
0850a457 +0x21:  mov    %edx,0xc(%esp)
0850a45b +0x25:  lea    -0x10(%ebp),%edx
0850a45e +0x28:  mov    %edx,0x8(%esp)
0850a462 +0x2c:  mov    %eax,0x4(%esp)
0850a466 +0x30:  mov    0x8(%ebp),%eax
0850a469 +0x33:  mov    %eax,(%esp)
0850a46c +0x36:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
0850a471 +0x3b:  mov    -0x10(%ebp),%eax
0850a474 +0x3e:  mov    %eax,-0xc(%ebp)
0850a477 +0x41:  jmp    0850a49b <+0x65>
0850a479 +0x43:  mov    0x8(%ebp),%eax
0850a47c +0x46:  mov    0x6e4(%eax),%edx
0850a482 +0x4c:  mov    -0xc(%ebp),%eax
0850a485 +0x4f:  imul   $0x3d,%eax,%eax
0850a488 +0x52:  lea    (%edx,%eax,1),%eax
0850a48b +0x55:  mov    0x2(%eax),%eax
0850a48e +0x58:  test   %eax,%eax
0850a490 +0x5a:  jne    0850a497 <+0x61>
0850a492 +0x5c:  mov    -0xc(%ebp),%eax
0850a495 +0x5f:  jmp    0850a4ad <+0x77>
0850a497 +0x61:  addl   $0x1,-0xc(%ebp)
0850a49b +0x65:  mov    -0x14(%ebp),%eax
0850a49e +0x68:  cmp    %eax,-0xc(%ebp)
0850a4a1 +0x6b:  setle  %al
0850a4a4 +0x6e:  test   %al,%al
0850a4a6 +0x70:  jne    0850a479 <+0x43>
0850a4a8 +0x72:  mov    $0xffffffff,%eax
0850a4ad +0x77:  leave
0850a4ae +0x78:  ret
0850a4af +0x79:  nop
```

## 反编译 C

```c
// CInventory::GetEmptyCreatureSlot @ 0x850a436

/* CInventory::GetEmptyCreatureSlot(Inven_Item&) const */

int __thiscall CInventory::GetEmptyCreatureSlot(CInventory *this,Inven_Item *param_1)

{
  int local_18;
  int local_14;
  int local_10;
  
  local_14 = 0;
  local_18 = 0;
  StartEndPos(this,param_1[1],&local_14,&local_18);
  local_10 = local_14;
  while( true ) {
    if (local_18 < local_10) {
      return -1;
    }
    if (*(int *)(*(int *)(this + 0x6e4) + local_10 * 0x3d + 2) == 0) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}
```
