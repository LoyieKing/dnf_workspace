# tryStackInvenItemIntoQuickSlot

`_ZNK10CInventory30tryStackInvenItemIntoQuickSlotE10Inven_Item`

`CInventory::tryStackInvenItemIntoQuickSlot(Inven_Item) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08501bf6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08501bf6  _ZNK10CInventory30tryStackInvenItemIntoQuickSlotE10Inven_Item
#           CInventory::tryStackInvenItemIntoQuickSlot(Inven_Item) const
# range [0x08501bf6, 0x08501ce9]
08501bf6 +0x00:  push   %ebp
08501bf7 +0x01:  mov    %esp,%ebp
08501bf9 +0x03:  push   %ebx
08501bfa +0x04:  sub    $0x24,%esp
08501bfd +0x07:  movzbl 0xd(%ebp),%eax
08501c01 +0x0b:  cmp    $0x1,%al
08501c03 +0x0d:  jne    08501c0f <+0x19>
08501c05 +0x0f:  mov    $0xffffffff,%eax
08501c0a +0x14:  jmp    08501ce4 <+0xee>
08501c0f +0x19:  movl   $0x3,-0x10(%ebp)
08501c16 +0x20:  jmp    08501cd0 <+0xda>
08501c1b +0x25:  mov    0x8(%ebp),%eax
08501c1e +0x28:  mov    0x650(%eax),%edx
08501c24 +0x2e:  mov    -0x10(%ebp),%eax
08501c27 +0x31:  imul   $0x3d,%eax,%eax
08501c2a +0x34:  lea    (%edx,%eax,1),%eax
08501c2d +0x37:  mov    0x2(%eax),%edx
08501c30 +0x3a:  mov    0xe(%ebp),%eax
08501c33 +0x3d:  cmp    %eax,%edx
08501c35 +0x3f:  je     08501c40 <+0x4a>
08501c37 +0x41:  addl   $0x1,-0x10(%ebp)
08501c3b +0x45:  jmp    08501cd0 <+0xda>
08501c40 +0x4a:  lea    0xc(%ebp),%eax
08501c43 +0x4d:  mov    %eax,(%esp)
08501c46 +0x50:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08501c4b +0x55:  mov    $0x7fffffff,%edx
08501c50 +0x5a:  mov    %edx,%ebx
08501c52 +0x5c:  sub    %eax,%ebx
08501c54 +0x5e:  mov    0x8(%ebp),%eax
08501c57 +0x61:  mov    0x650(%eax),%edx
08501c5d +0x67:  mov    -0x10(%ebp),%eax
08501c60 +0x6a:  imul   $0x3d,%eax,%eax
08501c63 +0x6d:  lea    (%edx,%eax,1),%eax
08501c66 +0x70:  mov    %eax,(%esp)
08501c69 +0x73:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08501c6e +0x78:  cmp    %eax,%ebx
08501c70 +0x7a:  setle  %al
08501c73 +0x7d:  test   %al,%al
08501c75 +0x7f:  je     08501c7e <+0x88>
08501c77 +0x81:  mov    $0xfffffffe,%eax
08501c7c +0x86:  jmp    08501ce4 <+0xee>
08501c7e +0x88:  mov    0x8(%ebp),%eax
08501c81 +0x8b:  mov    0x650(%eax),%edx
08501c87 +0x91:  mov    -0x10(%ebp),%eax
08501c8a +0x94:  imul   $0x3d,%eax,%eax
08501c8d +0x97:  lea    (%edx,%eax,1),%eax
08501c90 +0x9a:  mov    %eax,(%esp)
08501c93 +0x9d:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08501c98 +0xa2:  mov    %eax,%ebx
08501c9a +0xa4:  lea    0xc(%ebp),%eax
08501c9d +0xa7:  mov    %eax,(%esp)
08501ca0 +0xaa:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08501ca5 +0xaf:  lea    (%ebx,%eax,1),%eax
08501ca8 +0xb2:  mov    %eax,-0xc(%ebp)
08501cab +0xb5:  mov    0xe(%ebp),%eax
08501cae +0xb8:  mov    -0xc(%ebp),%edx
08501cb1 +0xbb:  mov    %edx,0x4(%esp)
08501cb5 +0xbf:  mov    %eax,(%esp)
08501cb8 +0xc2:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
08501cbd +0xc7:  xor    $0x1,%eax
08501cc0 +0xca:  test   %al,%al
08501cc2 +0xcc:  je     08501ccb <+0xd5>
08501cc4 +0xce:  mov    $0xfffffff6,%eax
08501cc9 +0xd3:  jmp    08501ce4 <+0xee>
08501ccb +0xd5:  mov    -0x10(%ebp),%eax
08501cce +0xd8:  jmp    08501ce4 <+0xee>
08501cd0 +0xda:  cmpl   $0x8,-0x10(%ebp)
08501cd4 +0xde:  setle  %al
08501cd7 +0xe1:  test   %al,%al
08501cd9 +0xe3:  jne    08501c1b <+0x25>
08501cdf +0xe9:  mov    $0xfffffffc,%eax
08501ce4 +0xee:  add    $0x24,%esp
08501ce7 +0xf1:  pop    %ebx
08501ce8 +0xf2:  pop    %ebp
08501ce9 +0xf3:  ret
```

## 反编译 C

> （该函数反编译 C 未生成）
