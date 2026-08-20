# insertItemIntoArtifactEquipment

`_ZN10CInventory31insertItemIntoArtifactEquipmentE10Inven_Item14eItemAddReasonb`

`CInventory::insertItemIntoArtifactEquipment(Inven_Item, eItemAddReason, bool)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x0850a7c4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850a7c4  _ZN10CInventory31insertItemIntoArtifactEquipmentE10Inven_Item14eItemAddReasonb
#           CInventory::insertItemIntoArtifactEquipment(Inven_Item, eItemAddReason, bool)
# range [0x0850a7c4, 0x0850a869]
0850a7c4 +0x00:  push   %ebp
0850a7c5 +0x01:  mov    %esp,%ebp
0850a7c7 +0x03:  sub    $0x48,%esp
0850a7ca +0x06:  mov    0x50(%ebp),%eax
0850a7cd +0x09:  mov    %al,-0x1c(%ebp)
0850a7d0 +0x0c:  mov    0xe(%ebp),%eax
0850a7d3 +0x0f:  test   %eax,%eax
0850a7d5 +0x11:  jne    0850a7e1 <+0x1d>
0850a7d7 +0x13:  mov    $0xffffffff,%eax
0850a7dc +0x18:  jmp    0850a868 <+0xa4>
0850a7e1 +0x1d:  lea    0xc(%ebp),%eax
0850a7e4 +0x20:  mov    %eax,0x4(%esp)
0850a7e8 +0x24:  mov    0x8(%ebp),%eax
0850a7eb +0x27:  mov    %eax,(%esp)
0850a7ee +0x2a:  call   0850a436 <_ZNK10CInventory20GetEmptyCreatureSlotER10Inven_Item>  ; CInventory::GetEmptyCreatureSlot(Inven_Item&) const
0850a7f3 +0x2f:  mov    %eax,-0xc(%ebp)
0850a7f6 +0x32:  cmpl   $0x0,-0xc(%ebp)
0850a7fa +0x36:  jns    0850a803 <+0x3f>
0850a7fc +0x38:  mov    $0xffffffff,%eax
0850a801 +0x3d:  jmp    0850a868 <+0xa4>
0850a803 +0x3f:  mov    0x8(%ebp),%eax
0850a806 +0x42:  mov    0x6e4(%eax),%edx
0850a80c +0x48:  mov    -0xc(%ebp),%eax
0850a80f +0x4b:  imul   $0x3d,%eax,%eax
0850a812 +0x4e:  add    %eax,%edx
0850a814 +0x50:  lea    0xc(%ebp),%eax
0850a817 +0x53:  mov    %eax,0x4(%esp)
0850a81b +0x57:  mov    %edx,(%esp)
0850a81e +0x5a:  call   0814a62e <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x3cd>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x3cd
0850a823 +0x5f:  cmpb   $0x0,-0x1c(%ebp)
0850a827 +0x63:  je     0850a865 <+0xa1>
0850a829 +0x65:  movzbl 0xd(%ebp),%eax
0850a82d +0x69:  movzbl %al,%edx
0850a830 +0x6c:  mov    0xe(%ebp),%eax
0850a833 +0x6f:  mov    0x4c(%ebp),%ecx
0850a836 +0x72:  mov    %ecx,0x18(%esp)
0850a83a +0x76:  mov    %edx,0x14(%esp)
0850a83e +0x7a:  movl   $0x1,0x10(%esp)
0850a846 +0x82:  movl   $0x1,0xc(%esp)
0850a84e +0x8a:  mov    %eax,0x8(%esp)
0850a852 +0x8e:  movl   $0x3,0x4(%esp)
0850a85a +0x96:  mov    0x8(%ebp),%eax
0850a85d +0x99:  mov    %eax,(%esp)
0850a860 +0x9c:  call   0850a4b0 <_ZNK10CInventory16WriteCreatureLogE10INVEN_TYPEiiii14eItemAddReason>  ; CInventory::WriteCreatureLog(INVEN_TYPE, int, int, int, int, eItemAddReason) const
0850a865 +0xa1:  mov    -0xc(%ebp),%eax
0850a868 +0xa4:  leave
0850a869 +0xa5:  ret
```

## 反编译 C

> （该函数反编译 C 未生成）
