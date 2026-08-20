# check_vilmark_dungeon_item_exist

`_ZNK10CInventory32check_vilmark_dungeon_item_existEi`

`CInventory::check_vilmark_dungeon_item_exist(int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850552a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850552a  _ZNK10CInventory32check_vilmark_dungeon_item_existEi
#           CInventory::check_vilmark_dungeon_item_exist(int) const
# range [0x0850552a, 0x08505629]
0850552a +0x00:  push   %ebp
0850552b +0x01:  mov    %esp,%ebp
0850552d +0x03:  sub    $0x28,%esp
08505530 +0x06:  movl   $0x3,-0xc(%ebp)
08505537 +0x0d:  jmp    08505561 <+0x37>
08505539 +0x0f:  mov    0x8(%ebp),%eax
0850553c +0x12:  mov    0x650(%eax),%edx
08505542 +0x18:  mov    -0xc(%ebp),%eax
08505545 +0x1b:  imul   $0x3d,%eax,%eax
08505548 +0x1e:  lea    (%edx,%eax,1),%eax
0850554b +0x21:  mov    0x2(%eax),%edx
0850554e +0x24:  mov    0xc(%ebp),%eax
08505551 +0x27:  cmp    %eax,%edx
08505553 +0x29:  jne    0850555d <+0x33>
08505555 +0x2b:  mov    -0xc(%ebp),%eax
08505558 +0x2e:  jmp    08505627 <+0xfd>
0850555d +0x33:  addl   $0x1,-0xc(%ebp)
08505561 +0x37:  cmpl   $0x8,-0xc(%ebp)
08505565 +0x3b:  setle  %al
08505568 +0x3e:  test   %al,%al
0850556a +0x40:  jne    08505539 <+0xf>
0850556c +0x42:  lea    -0x14(%ebp),%eax
0850556f +0x45:  mov    %eax,0xc(%esp)
08505573 +0x49:  lea    -0x10(%ebp),%eax
08505576 +0x4c:  mov    %eax,0x8(%esp)
0850557a +0x50:  movl   $0x3,0x4(%esp)
08505582 +0x58:  mov    0x8(%ebp),%eax
08505585 +0x5b:  mov    %eax,(%esp)
08505588 +0x5e:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
0850558d +0x63:  mov    -0x10(%ebp),%eax
08505590 +0x66:  mov    %eax,-0xc(%ebp)
08505593 +0x69:  jmp    085055ba <+0x90>
08505595 +0x6b:  mov    0x8(%ebp),%eax
08505598 +0x6e:  mov    0x650(%eax),%edx
0850559e +0x74:  mov    -0xc(%ebp),%eax
085055a1 +0x77:  imul   $0x3d,%eax,%eax
085055a4 +0x7a:  lea    (%edx,%eax,1),%eax
085055a7 +0x7d:  mov    0x2(%eax),%edx
085055aa +0x80:  mov    0xc(%ebp),%eax
085055ad +0x83:  cmp    %eax,%edx
085055af +0x85:  jne    085055b6 <+0x8c>
085055b1 +0x87:  mov    -0xc(%ebp),%eax
085055b4 +0x8a:  jmp    08505627 <+0xfd>
085055b6 +0x8c:  addl   $0x1,-0xc(%ebp)
085055ba +0x90:  mov    -0x14(%ebp),%eax
085055bd +0x93:  cmp    %eax,-0xc(%ebp)
085055c0 +0x96:  setle  %al
085055c3 +0x99:  test   %al,%al
085055c5 +0x9b:  jne    08505595 <+0x6b>
085055c7 +0x9d:  lea    -0x14(%ebp),%eax
085055ca +0xa0:  mov    %eax,0xc(%esp)
085055ce +0xa4:  lea    -0x10(%ebp),%eax
085055d1 +0xa7:  mov    %eax,0x8(%esp)
085055d5 +0xab:  movl   $0x4,0x4(%esp)
085055dd +0xb3:  mov    0x8(%ebp),%eax
085055e0 +0xb6:  mov    %eax,(%esp)
085055e3 +0xb9:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
085055e8 +0xbe:  mov    -0x10(%ebp),%eax
085055eb +0xc1:  mov    %eax,-0xc(%ebp)
085055ee +0xc4:  jmp    08505615 <+0xeb>
085055f0 +0xc6:  mov    0x8(%ebp),%eax
085055f3 +0xc9:  mov    0x650(%eax),%edx
085055f9 +0xcf:  mov    -0xc(%ebp),%eax
085055fc +0xd2:  imul   $0x3d,%eax,%eax
085055ff +0xd5:  lea    (%edx,%eax,1),%eax
08505602 +0xd8:  mov    0x2(%eax),%edx
08505605 +0xdb:  mov    0xc(%ebp),%eax
08505608 +0xde:  cmp    %eax,%edx
0850560a +0xe0:  jne    08505611 <+0xe7>
0850560c +0xe2:  mov    -0xc(%ebp),%eax
0850560f +0xe5:  jmp    08505627 <+0xfd>
08505611 +0xe7:  addl   $0x1,-0xc(%ebp)
08505615 +0xeb:  mov    -0x14(%ebp),%eax
08505618 +0xee:  cmp    %eax,-0xc(%ebp)
0850561b +0xf1:  setle  %al
0850561e +0xf4:  test   %al,%al
08505620 +0xf6:  jne    085055f0 <+0xc6>
08505622 +0xf8:  mov    $0xffffffff,%eax
08505627 +0xfd:  leave
08505628 +0xfe:  ret
08505629 +0xff:  nop
```

## 反编译 C

```c
// CInventory::check_vilmark_dungeon_item_exist @ 0x850552a

/* CInventory::check_vilmark_dungeon_item_exist(int) const */

int __thiscall CInventory::check_vilmark_dungeon_item_exist(CInventory *this,int param_1)

{
  int local_18;
  int local_14;
  int local_10;
  
  for (local_10 = 3; local_10 < 9; local_10 = local_10 + 1) {
    if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) == param_1) {
      return local_10;
    }
  }
  StartEndPos(this,3,&local_14,&local_18);
  for (local_10 = local_14; local_10 <= local_18; local_10 = local_10 + 1) {
    if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) == param_1) {
      return local_10;
    }
  }
  StartEndPos(this,4,&local_14,&local_18);
  local_10 = local_14;
  while( true ) {
    if (local_18 < local_10) {
      return -1;
    }
    if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) == param_1) break;
    local_10 = local_10 + 1;
  }
  return local_10;
}
```
