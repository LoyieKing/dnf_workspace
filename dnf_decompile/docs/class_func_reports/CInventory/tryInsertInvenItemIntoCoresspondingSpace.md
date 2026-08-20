# tryInsertInvenItemIntoCoresspondingSpace

`_ZNK10CInventory40tryInsertInvenItemIntoCoresspondingSpaceE10Inven_Item`

`CInventory::tryInsertInvenItemIntoCoresspondingSpace(Inven_Item) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08501e12` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08501e12  _ZNK10CInventory40tryInsertInvenItemIntoCoresspondingSpaceE10Inven_Item
#           CInventory::tryInsertInvenItemIntoCoresspondingSpace(Inven_Item) const
# range [0x08501e12, 0x08501ec9]
08501e12 +0x00:  push   %ebp
08501e13 +0x01:  mov    %esp,%ebp
08501e15 +0x03:  sub    $0x28,%esp
08501e18 +0x06:  lea    0xc(%ebp),%eax
08501e1b +0x09:  mov    %eax,(%esp)
08501e1e +0x0c:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
08501e23 +0x11:  xor    $0x1,%eax
08501e26 +0x14:  test   %al,%al
08501e28 +0x16:  je     08501e4a <+0x38>
08501e2a +0x18:  mov    0x13(%ebp),%edx
08501e2d +0x1b:  mov    0xe(%ebp),%eax
08501e30 +0x1e:  mov    %edx,0x4(%esp)
08501e34 +0x22:  mov    %eax,(%esp)
08501e37 +0x25:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
08501e3c +0x2a:  xor    $0x1,%eax
08501e3f +0x2d:  test   %al,%al
08501e41 +0x2f:  je     08501e4a <+0x38>
08501e43 +0x31:  mov    $0x1,%eax
08501e48 +0x36:  jmp    08501e4f <+0x3d>
08501e4a +0x38:  mov    $0x0,%eax
08501e4f +0x3d:  test   %al,%al
08501e51 +0x3f:  je     08501e5a <+0x48>
08501e53 +0x41:  mov    $0xfffffff6,%eax
08501e58 +0x46:  jmp    08501ec8 <+0xb6>
08501e5a +0x48:  movl   $0x0,-0x10(%ebp)
08501e61 +0x4f:  movl   $0x0,-0x14(%ebp)
08501e68 +0x56:  movzbl 0xd(%ebp),%eax
08501e6c +0x5a:  movzbl %al,%eax
08501e6f +0x5d:  lea    -0x14(%ebp),%edx
08501e72 +0x60:  mov    %edx,0xc(%esp)
08501e76 +0x64:  lea    -0x10(%ebp),%edx
08501e79 +0x67:  mov    %edx,0x8(%esp)
08501e7d +0x6b:  mov    %eax,0x4(%esp)
08501e81 +0x6f:  mov    0x8(%ebp),%eax
08501e84 +0x72:  mov    %eax,(%esp)
08501e87 +0x75:  call   0850185e <_ZNK10CInventory14getStartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::getStartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08501e8c +0x7a:  mov    -0x10(%ebp),%eax
08501e8f +0x7d:  mov    %eax,-0xc(%ebp)
08501e92 +0x80:  jmp    08501eb6 <+0xa4>
08501e94 +0x82:  mov    0x8(%ebp),%eax
08501e97 +0x85:  mov    0x650(%eax),%edx
08501e9d +0x8b:  mov    -0xc(%ebp),%eax
08501ea0 +0x8e:  imul   $0x3d,%eax,%eax
08501ea3 +0x91:  lea    (%edx,%eax,1),%eax
08501ea6 +0x94:  mov    0x2(%eax),%eax
08501ea9 +0x97:  test   %eax,%eax
08501eab +0x99:  jne    08501eb2 <+0xa0>
08501ead +0x9b:  mov    -0xc(%ebp),%eax
08501eb0 +0x9e:  jmp    08501ec8 <+0xb6>
08501eb2 +0xa0:  addl   $0x1,-0xc(%ebp)
08501eb6 +0xa4:  mov    -0x14(%ebp),%eax
08501eb9 +0xa7:  cmp    %eax,-0xc(%ebp)
08501ebc +0xaa:  setle  %al
08501ebf +0xad:  test   %al,%al
08501ec1 +0xaf:  jne    08501e94 <+0x82>
08501ec3 +0xb1:  mov    $0xfffffffe,%eax
08501ec8 +0xb6:  leave
08501ec9 +0xb7:  ret
```

## 反编译 C

> （该函数反编译 C 未生成）
