# GetExistCreatureSlot

`_ZNK10CInventory20GetExistCreatureSlotER10Inven_Item`

`CInventory::GetExistCreatureSlot(Inven_Item&) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a3b6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a3b6  _ZNK10CInventory20GetExistCreatureSlotER10Inven_Item
#           CInventory::GetExistCreatureSlot(Inven_Item&) const
# range [0x0850a3b6, 0x0850a435]
0850a3b6 +0x00:  push   %ebp
0850a3b7 +0x01:  mov    %esp,%ebp
0850a3b9 +0x03:  sub    $0x28,%esp
0850a3bc +0x06:  movl   $0x0,-0x10(%ebp)
0850a3c3 +0x0d:  movl   $0x0,-0x14(%ebp)
0850a3ca +0x14:  mov    0xc(%ebp),%eax
0850a3cd +0x17:  movzbl 0x1(%eax),%eax
0850a3d1 +0x1b:  movzbl %al,%eax
0850a3d4 +0x1e:  lea    -0x14(%ebp),%edx
0850a3d7 +0x21:  mov    %edx,0xc(%esp)
0850a3db +0x25:  lea    -0x10(%ebp),%edx
0850a3de +0x28:  mov    %edx,0x8(%esp)
0850a3e2 +0x2c:  mov    %eax,0x4(%esp)
0850a3e6 +0x30:  mov    0x8(%ebp),%eax
0850a3e9 +0x33:  mov    %eax,(%esp)
0850a3ec +0x36:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
0850a3f1 +0x3b:  mov    -0x10(%ebp),%eax
0850a3f4 +0x3e:  mov    %eax,-0xc(%ebp)
0850a3f7 +0x41:  jmp    0850a421 <+0x6b>
0850a3f9 +0x43:  mov    0x8(%ebp),%eax
0850a3fc +0x46:  mov    0x6e4(%eax),%edx
0850a402 +0x4c:  mov    -0xc(%ebp),%eax
0850a405 +0x4f:  imul   $0x3d,%eax,%eax
0850a408 +0x52:  lea    (%edx,%eax,1),%eax
0850a40b +0x55:  mov    0x2(%eax),%edx
0850a40e +0x58:  mov    0xc(%ebp),%eax
0850a411 +0x5b:  mov    0x2(%eax),%eax
0850a414 +0x5e:  cmp    %eax,%edx
0850a416 +0x60:  jne    0850a41d <+0x67>
0850a418 +0x62:  mov    -0xc(%ebp),%eax
0850a41b +0x65:  jmp    0850a433 <+0x7d>
0850a41d +0x67:  addl   $0x1,-0xc(%ebp)
0850a421 +0x6b:  mov    -0x14(%ebp),%eax
0850a424 +0x6e:  cmp    %eax,-0xc(%ebp)
0850a427 +0x71:  setle  %al
0850a42a +0x74:  test   %al,%al
0850a42c +0x76:  jne    0850a3f9 <+0x43>
0850a42e +0x78:  mov    $0xffffffff,%eax
0850a433 +0x7d:  leave
0850a434 +0x7e:  ret
0850a435 +0x7f:  nop
```

## 反编译 C

```c
// CInventory::GetExistCreatureSlot @ 0x850a3b6

/* CInventory::GetExistCreatureSlot(Inven_Item&) const */

int __thiscall CInventory::GetExistCreatureSlot(CInventory *this,Inven_Item *param_1)

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
    if (*(int *)(*(int *)(this + 0x6e4) + local_10 * 0x3d + 2) == *(int *)(param_1 + 2)) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}
```
