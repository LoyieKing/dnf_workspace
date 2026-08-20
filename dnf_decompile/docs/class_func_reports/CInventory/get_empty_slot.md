# get_empty_slot

`_ZNK10CInventory14get_empty_slotE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE`

`CInventory::get_empty_slot(INVEN_TYPE, Inven_Item::ITEM_TYPE) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084fb824` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084fb824  _ZNK10CInventory14get_empty_slotE10INVEN_TYPEN10Inven_Item9ITEM_TYPEE
#           CInventory::get_empty_slot(INVEN_TYPE, Inven_Item::ITEM_TYPE) const
# range [0x084fb824, 0x084fb917]
084fb824 +0x00:  push   %ebp
084fb825 +0x01:  mov    %esp,%ebp
084fb827 +0x03:  sub    $0x38,%esp
084fb82a +0x06:  mov    0xc(%ebp),%eax
084fb82d +0x09:  cmp    $0x2,%eax
084fb830 +0x0c:  je     084fb8a0 <+0x7c>
084fb832 +0x0e:  cmp    $0x3,%eax
084fb835 +0x11:  je     084fb8d8 <+0xb4>
084fb83b +0x17:  cmp    $0x1,%eax
084fb83e +0x1a:  jne    084fb911 <+0xed>
084fb844 +0x20:  lea    -0x1c(%ebp),%eax
084fb847 +0x23:  mov    %eax,0xc(%esp)
084fb84b +0x27:  lea    -0x18(%ebp),%eax
084fb84e +0x2a:  mov    %eax,0x8(%esp)
084fb852 +0x2e:  mov    0x10(%ebp),%eax
084fb855 +0x31:  mov    %eax,0x4(%esp)
084fb859 +0x35:  mov    0x8(%ebp),%eax
084fb85c +0x38:  mov    %eax,(%esp)
084fb85f +0x3b:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
084fb864 +0x40:  mov    -0x18(%ebp),%eax
084fb867 +0x43:  mov    %eax,-0x14(%ebp)
084fb86a +0x46:  jmp    084fb891 <+0x6d>
084fb86c +0x48:  mov    0x8(%ebp),%eax
084fb86f +0x4b:  mov    0x650(%eax),%edx
084fb875 +0x51:  mov    -0x14(%ebp),%eax
084fb878 +0x54:  imul   $0x3d,%eax,%eax
084fb87b +0x57:  lea    (%edx,%eax,1),%eax
084fb87e +0x5a:  mov    0x2(%eax),%eax
084fb881 +0x5d:  test   %eax,%eax
084fb883 +0x5f:  jne    084fb88d <+0x69>
084fb885 +0x61:  mov    -0x14(%ebp),%eax
084fb888 +0x64:  jmp    084fb916 <+0xf2>
084fb88d +0x69:  addl   $0x1,-0x14(%ebp)
084fb891 +0x6d:  mov    -0x1c(%ebp),%eax
084fb894 +0x70:  cmp    %eax,-0x14(%ebp)
084fb897 +0x73:  setle  %al
084fb89a +0x76:  test   %al,%al
084fb89c +0x78:  jne    084fb86c <+0x48>
084fb89e +0x7a:  jmp    084fb911 <+0xed>
084fb8a0 +0x7c:  movl   $0x0,-0x10(%ebp)
084fb8a7 +0x83:  jmp    084fb8cb <+0xa7>
084fb8a9 +0x85:  mov    0x8(%ebp),%eax
084fb8ac +0x88:  mov    0x654(%eax),%edx
084fb8b2 +0x8e:  mov    -0x10(%ebp),%eax
084fb8b5 +0x91:  imul   $0x3d,%eax,%eax
084fb8b8 +0x94:  lea    (%edx,%eax,1),%eax
084fb8bb +0x97:  mov    0x2(%eax),%eax
084fb8be +0x9a:  test   %eax,%eax
084fb8c0 +0x9c:  jne    084fb8c7 <+0xa3>
084fb8c2 +0x9e:  mov    -0x10(%ebp),%eax
084fb8c5 +0xa1:  jmp    084fb916 <+0xf2>
084fb8c7 +0xa3:  addl   $0x1,-0x10(%ebp)
084fb8cb +0xa7:  cmpl   $0x68,-0x10(%ebp)
084fb8cf +0xab:  setle  %al
084fb8d2 +0xae:  test   %al,%al
084fb8d4 +0xb0:  jne    084fb8a9 <+0x85>
084fb8d6 +0xb2:  jmp    084fb911 <+0xed>
084fb8d8 +0xb4:  movl   $0x0,-0xc(%ebp)
084fb8df +0xbb:  jmp    084fb903 <+0xdf>
084fb8e1 +0xbd:  mov    0x8(%ebp),%eax
084fb8e4 +0xc0:  mov    0x6e4(%eax),%edx
084fb8ea +0xc6:  mov    -0xc(%ebp),%eax
084fb8ed +0xc9:  imul   $0x3d,%eax,%eax
084fb8f0 +0xcc:  lea    (%edx,%eax,1),%eax
084fb8f3 +0xcf:  mov    0x2(%eax),%eax
084fb8f6 +0xd2:  test   %eax,%eax
084fb8f8 +0xd4:  jne    084fb8ff <+0xdb>
084fb8fa +0xd6:  mov    -0xc(%ebp),%eax
084fb8fd +0xd9:  jmp    084fb916 <+0xf2>
084fb8ff +0xdb:  addl   $0x1,-0xc(%ebp)
084fb903 +0xdf:  cmpl   $0xf1,-0xc(%ebp)
084fb90a +0xe6:  setle  %al
084fb90d +0xe9:  test   %al,%al
084fb90f +0xeb:  jne    084fb8e1 <+0xbd>
084fb911 +0xed:  mov    $0xffffffff,%eax
084fb916 +0xf2:  leave
084fb917 +0xf3:  ret
```

## 反编译 C

```c
// CInventory::get_empty_slot @ 0x84fb824

/* CInventory::get_empty_slot(INVEN_TYPE, Inven_Item::ITEM_TYPE) const */

int __thiscall CInventory::get_empty_slot(CInventory *this,int param_2,undefined4 param_3)

{
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  if (param_2 == 2) {
    for (local_14 = 0; local_14 < 0x69; local_14 = local_14 + 1) {
      if (*(int *)(*(int *)(this + 0x654) + local_14 * 0x3d + 2) == 0) {
        return local_14;
      }
    }
  }
  else if (param_2 == 3) {
    for (local_10 = 0; local_10 < 0xf2; local_10 = local_10 + 1) {
      if (*(int *)(*(int *)(this + 0x6e4) + local_10 * 0x3d + 2) == 0) {
        return local_10;
      }
    }
  }
  else if (param_2 == 1) {
    StartEndPos(this,param_3,&local_1c,&local_20);
    for (local_18 = local_1c; local_18 <= local_20; local_18 = local_18 + 1) {
      if (*(int *)(*(int *)(this + 0x650) + local_18 * 0x3d + 2) == 0) {
        return local_18;
      }
    }
  }
  return -1;
}
```
