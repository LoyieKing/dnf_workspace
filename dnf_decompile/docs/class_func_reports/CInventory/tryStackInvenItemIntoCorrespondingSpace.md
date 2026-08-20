# tryStackInvenItemIntoCorrespondingSpace

`_ZNK10CInventory39tryStackInvenItemIntoCorrespondingSpaceE10Inven_Item`

`CInventory::tryStackInvenItemIntoCorrespondingSpace(Inven_Item) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08501cea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08501cea  _ZNK10CInventory39tryStackInvenItemIntoCorrespondingSpaceE10Inven_Item
#           CInventory::tryStackInvenItemIntoCorrespondingSpace(Inven_Item) const
# range [0x08501cea, 0x08501e11]
08501cea +0x000:  push   %ebp
08501ceb +0x001:  mov    %esp,%ebp
08501ced +0x003:  push   %ebx
08501cee +0x004:  sub    $0x24,%esp
08501cf1 +0x007:  movzbl 0xd(%ebp),%eax
08501cf5 +0x00b:  cmp    $0x1,%al
08501cf7 +0x00d:  jne    08501d03 <+0x19>
08501cf9 +0x00f:  mov    $0xffffffff,%eax
08501cfe +0x014:  jmp    08501e0b <+0x121>
08501d03 +0x019:  movl   $0x0,-0x14(%ebp)
08501d0a +0x020:  movl   $0x0,-0x18(%ebp)
08501d11 +0x027:  movzbl 0xd(%ebp),%eax
08501d15 +0x02b:  movzbl %al,%eax
08501d18 +0x02e:  lea    -0x18(%ebp),%edx
08501d1b +0x031:  mov    %edx,0xc(%esp)
08501d1f +0x035:  lea    -0x14(%ebp),%edx
08501d22 +0x038:  mov    %edx,0x8(%esp)
08501d26 +0x03c:  mov    %eax,0x4(%esp)
08501d2a +0x040:  mov    0x8(%ebp),%eax
08501d2d +0x043:  mov    %eax,(%esp)
08501d30 +0x046:  call   0850185e <_ZNK10CInventory14getStartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::getStartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08501d35 +0x04b:  mov    -0x14(%ebp),%eax
08501d38 +0x04e:  mov    %eax,-0x10(%ebp)
08501d3b +0x051:  jmp    08501df5 <+0x10b>
08501d40 +0x056:  mov    0x8(%ebp),%eax
08501d43 +0x059:  mov    0x650(%eax),%edx
08501d49 +0x05f:  mov    -0x10(%ebp),%eax
08501d4c +0x062:  imul   $0x3d,%eax,%eax
08501d4f +0x065:  lea    (%edx,%eax,1),%eax
08501d52 +0x068:  mov    0x2(%eax),%edx
08501d55 +0x06b:  mov    0xe(%ebp),%eax
08501d58 +0x06e:  cmp    %eax,%edx
08501d5a +0x070:  je     08501d65 <+0x7b>
08501d5c +0x072:  addl   $0x1,-0x10(%ebp)
08501d60 +0x076:  jmp    08501df5 <+0x10b>
08501d65 +0x07b:  lea    0xc(%ebp),%eax
08501d68 +0x07e:  mov    %eax,(%esp)
08501d6b +0x081:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08501d70 +0x086:  mov    $0x7fffffff,%edx
08501d75 +0x08b:  mov    %edx,%ebx
08501d77 +0x08d:  sub    %eax,%ebx
08501d79 +0x08f:  mov    0x8(%ebp),%eax
08501d7c +0x092:  mov    0x650(%eax),%edx
08501d82 +0x098:  mov    -0x10(%ebp),%eax
08501d85 +0x09b:  imul   $0x3d,%eax,%eax
08501d88 +0x09e:  lea    (%edx,%eax,1),%eax
08501d8b +0x0a1:  mov    %eax,(%esp)
08501d8e +0x0a4:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08501d93 +0x0a9:  cmp    %eax,%ebx
08501d95 +0x0ab:  setle  %al
08501d98 +0x0ae:  test   %al,%al
08501d9a +0x0b0:  je     08501da3 <+0xb9>
08501d9c +0x0b2:  mov    $0xfffffffe,%eax
08501da1 +0x0b7:  jmp    08501e0b <+0x121>
08501da3 +0x0b9:  mov    0x8(%ebp),%eax
08501da6 +0x0bc:  mov    0x650(%eax),%edx
08501dac +0x0c2:  mov    -0x10(%ebp),%eax
08501daf +0x0c5:  imul   $0x3d,%eax,%eax
08501db2 +0x0c8:  lea    (%edx,%eax,1),%eax
08501db5 +0x0cb:  mov    %eax,(%esp)
08501db8 +0x0ce:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08501dbd +0x0d3:  mov    %eax,%ebx
08501dbf +0x0d5:  lea    0xc(%ebp),%eax
08501dc2 +0x0d8:  mov    %eax,(%esp)
08501dc5 +0x0db:  call   080f783a <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x37>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x37
08501dca +0x0e0:  lea    (%ebx,%eax,1),%eax
08501dcd +0x0e3:  mov    %eax,-0xc(%ebp)
08501dd0 +0x0e6:  mov    0xe(%ebp),%eax
08501dd3 +0x0e9:  mov    -0xc(%ebp),%edx
08501dd6 +0x0ec:  mov    %edx,0x4(%esp)
08501dda +0x0f0:  mov    %eax,(%esp)
08501ddd +0x0f3:  call   08501a79 <_Z19checkStackableLimitmi>  ; checkStackableLimit(unsigned long, int)
08501de2 +0x0f8:  xor    $0x1,%eax
08501de5 +0x0fb:  test   %al,%al
08501de7 +0x0fd:  je     08501df0 <+0x106>
08501de9 +0x0ff:  mov    $0xfffffff6,%eax
08501dee +0x104:  jmp    08501e0b <+0x121>
08501df0 +0x106:  mov    -0x10(%ebp),%eax
08501df3 +0x109:  jmp    08501e0b <+0x121>
08501df5 +0x10b:  mov    -0x18(%ebp),%eax
08501df8 +0x10e:  cmp    %eax,-0x10(%ebp)
08501dfb +0x111:  setle  %al
08501dfe +0x114:  test   %al,%al
08501e00 +0x116:  jne    08501d40 <+0x56>
08501e06 +0x11c:  mov    $0xfffffffc,%eax
08501e0b +0x121:  add    $0x24,%esp
08501e0e +0x124:  pop    %ebx
08501e0f +0x125:  pop    %ebp
08501e10 +0x126:  ret
08501e11 +0x127:  nop
```

## 反编译 C

> （该函数反编译 C 未生成）
