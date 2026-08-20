# InvenEmptycount

`_ZNK10CInventory15InvenEmptycountEN10Inven_Item9ITEM_TYPEE`

`CInventory::InvenEmptycount(Inven_Item::ITEM_TYPE) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08505080` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08505080  _ZNK10CInventory15InvenEmptycountEN10Inven_Item9ITEM_TYPEE
#           CInventory::InvenEmptycount(Inven_Item::ITEM_TYPE) const
# range [0x08505080, 0x08505171]
08505080 +0x00:  push   %ebp
08505081 +0x01:  mov    %esp,%ebp
08505083 +0x03:  sub    $0x38,%esp
08505086 +0x06:  movl   $0x0,-0x18(%ebp)
0850508d +0x0d:  lea    -0x20(%ebp),%eax
08505090 +0x10:  mov    %eax,0xc(%esp)
08505094 +0x14:  lea    -0x1c(%ebp),%eax
08505097 +0x17:  mov    %eax,0x8(%esp)
0850509b +0x1b:  mov    0xc(%ebp),%eax
0850509e +0x1e:  mov    %eax,0x4(%esp)
085050a2 +0x22:  mov    0x8(%ebp),%eax
085050a5 +0x25:  mov    %eax,(%esp)
085050a8 +0x28:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
085050ad +0x2d:  mov    0xc(%ebp),%eax
085050b0 +0x30:  mov    %eax,(%esp)
085050b3 +0x33:  call   0850d159 <_GLOBAL__I_g_emptySlot+0x8e>  ; global constructors keyed to g_emptySlot+0x8e
085050b8 +0x38:  test   %al,%al
085050ba +0x3a:  je     085050f7 <+0x77>
085050bc +0x3c:  mov    -0x1c(%ebp),%eax
085050bf +0x3f:  mov    %eax,-0x14(%ebp)
085050c2 +0x42:  jmp    085050e5 <+0x65>
085050c4 +0x44:  mov    0x8(%ebp),%eax
085050c7 +0x47:  mov    0x6e4(%eax),%edx
085050cd +0x4d:  mov    -0x14(%ebp),%eax
085050d0 +0x50:  imul   $0x3d,%eax,%eax
085050d3 +0x53:  lea    (%edx,%eax,1),%eax
085050d6 +0x56:  mov    0x2(%eax),%eax
085050d9 +0x59:  test   %eax,%eax
085050db +0x5b:  jne    085050e1 <+0x61>
085050dd +0x5d:  addl   $0x1,-0x18(%ebp)
085050e1 +0x61:  addl   $0x1,-0x14(%ebp)
085050e5 +0x65:  mov    -0x20(%ebp),%eax
085050e8 +0x68:  cmp    %eax,-0x14(%ebp)
085050eb +0x6b:  setle  %al
085050ee +0x6e:  test   %al,%al
085050f0 +0x70:  jne    085050c4 <+0x44>
085050f2 +0x72:  mov    -0x18(%ebp),%eax
085050f5 +0x75:  jmp    08505170 <+0xf0>
085050f7 +0x77:  cmpl   $0x8,0xc(%ebp)
085050fb +0x7b:  jne    08505137 <+0xb7>
085050fd +0x7d:  movl   $0x0,-0x10(%ebp)
08505104 +0x84:  jmp    08505127 <+0xa7>
08505106 +0x86:  mov    0x8(%ebp),%eax
08505109 +0x89:  mov    0x654(%eax),%edx
0850510f +0x8f:  mov    -0x10(%ebp),%eax
08505112 +0x92:  imul   $0x3d,%eax,%eax
08505115 +0x95:  lea    (%edx,%eax,1),%eax
08505118 +0x98:  mov    0x2(%eax),%eax
0850511b +0x9b:  test   %eax,%eax
0850511d +0x9d:  jne    08505123 <+0xa3>
0850511f +0x9f:  addl   $0x1,-0x18(%ebp)
08505123 +0xa3:  addl   $0x1,-0x10(%ebp)
08505127 +0xa7:  cmpl   $0x68,-0x10(%ebp)
0850512b +0xab:  setle  %al
0850512e +0xae:  test   %al,%al
08505130 +0xb0:  jne    08505106 <+0x86>
08505132 +0xb2:  mov    -0x18(%ebp),%eax
08505135 +0xb5:  jmp    08505170 <+0xf0>
08505137 +0xb7:  mov    -0x1c(%ebp),%eax
0850513a +0xba:  mov    %eax,-0xc(%ebp)
0850513d +0xbd:  jmp    08505160 <+0xe0>
0850513f +0xbf:  mov    0x8(%ebp),%eax
08505142 +0xc2:  mov    0x650(%eax),%edx
08505148 +0xc8:  mov    -0xc(%ebp),%eax
0850514b +0xcb:  imul   $0x3d,%eax,%eax
0850514e +0xce:  lea    (%edx,%eax,1),%eax
08505151 +0xd1:  mov    0x2(%eax),%eax
08505154 +0xd4:  test   %eax,%eax
08505156 +0xd6:  jne    0850515c <+0xdc>
08505158 +0xd8:  addl   $0x1,-0x18(%ebp)
0850515c +0xdc:  addl   $0x1,-0xc(%ebp)
08505160 +0xe0:  mov    -0x20(%ebp),%eax
08505163 +0xe3:  cmp    %eax,-0xc(%ebp)
08505166 +0xe6:  setle  %al
08505169 +0xe9:  test   %al,%al
0850516b +0xeb:  jne    0850513f <+0xbf>
0850516d +0xed:  mov    -0x18(%ebp),%eax
08505170 +0xf0:  leave
08505171 +0xf1:  ret
```

## 反编译 C

```c
// CInventory::InvenEmptycount @ 0x8505080

/* CInventory::InvenEmptycount(Inven_Item::ITEM_TYPE) const */

int __thiscall CInventory::InvenEmptycount(CInventory *this,int param_2)

{
  char cVar1;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_1c = 0;
  StartEndPos(this,param_2,&local_20,&local_24);
  cVar1 = IsCreatureItemType(param_2);
  if (cVar1 == '\0') {
    if (param_2 == 8) {
      for (local_14 = 0; local_14 < 0x69; local_14 = local_14 + 1) {
        if (*(int *)(*(int *)(this + 0x654) + local_14 * 0x3d + 2) == 0) {
          local_1c = local_1c + 1;
        }
      }
    }
    else {
      for (local_10 = local_20; local_10 <= local_24; local_10 = local_10 + 1) {
        if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) == 0) {
          local_1c = local_1c + 1;
        }
      }
    }
  }
  else {
    for (local_18 = local_20; local_18 <= local_24; local_18 = local_18 + 1) {
      if (*(int *)(*(int *)(this + 0x6e4) + local_18 * 0x3d + 2) == 0) {
        local_1c = local_1c + 1;
      }
    }
  }
  return local_1c;
}
```
