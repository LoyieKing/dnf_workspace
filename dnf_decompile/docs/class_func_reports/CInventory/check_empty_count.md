# check_empty_count

`_ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi`

`CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x08504f64` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08504f64  _ZNK10CInventory17check_empty_countEN10Inven_Item9ITEM_TYPEEi
#           CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const
# range [0x08504f64, 0x08505037]
08504f64 +0x00:  push   %ebp
08504f65 +0x01:  mov    %esp,%ebp
08504f67 +0x03:  sub    $0x38,%esp
08504f6a +0x06:  movl   $0x0,-0x14(%ebp)
08504f71 +0x0d:  lea    -0x1c(%ebp),%eax
08504f74 +0x10:  mov    %eax,0xc(%esp)
08504f78 +0x14:  lea    -0x18(%ebp),%eax
08504f7b +0x17:  mov    %eax,0x8(%esp)
08504f7f +0x1b:  mov    0xc(%ebp),%eax
08504f82 +0x1e:  mov    %eax,0x4(%esp)
08504f86 +0x22:  mov    0x8(%ebp),%eax
08504f89 +0x25:  mov    %eax,(%esp)
08504f8c +0x28:  call   08501886 <_ZNK10CInventory11StartEndPosEN10Inven_Item9ITEM_TYPEERiS2_>  ; CInventory::StartEndPos(Inven_Item::ITEM_TYPE, int&, int&) const
08504f91 +0x2d:  mov    0xc(%ebp),%eax
08504f94 +0x30:  mov    %eax,(%esp)
08504f97 +0x33:  call   0850d159 <_GLOBAL__I_g_emptySlot+0x8e>  ; global constructors keyed to g_emptySlot+0x8e
08504f9c +0x38:  test   %al,%al
08504f9e +0x3a:  je     08504fec <+0x88>
08504fa0 +0x3c:  mov    -0x18(%ebp),%eax
08504fa3 +0x3f:  mov    %eax,-0x10(%ebp)
08504fa6 +0x42:  jmp    08504fd8 <+0x74>
08504fa8 +0x44:  mov    0x8(%ebp),%eax
08504fab +0x47:  mov    0x6e4(%eax),%edx
08504fb1 +0x4d:  mov    -0x10(%ebp),%eax
08504fb4 +0x50:  imul   $0x3d,%eax,%eax
08504fb7 +0x53:  lea    (%edx,%eax,1),%eax
08504fba +0x56:  mov    0x2(%eax),%eax
08504fbd +0x59:  test   %eax,%eax
08504fbf +0x5b:  jne    08504fc5 <+0x61>
08504fc1 +0x5d:  addl   $0x1,-0x14(%ebp)
08504fc5 +0x61:  mov    -0x14(%ebp),%eax
08504fc8 +0x64:  cmp    0x10(%ebp),%eax
08504fcb +0x67:  jl     08504fd4 <+0x70>
08504fcd +0x69:  mov    $0x1,%eax
08504fd2 +0x6e:  jmp    08505036 <+0xd2>
08504fd4 +0x70:  addl   $0x1,-0x10(%ebp)
08504fd8 +0x74:  mov    -0x1c(%ebp),%eax
08504fdb +0x77:  cmp    %eax,-0x10(%ebp)
08504fde +0x7a:  setle  %al
08504fe1 +0x7d:  test   %al,%al
08504fe3 +0x7f:  jne    08504fa8 <+0x44>
08504fe5 +0x81:  mov    $0x0,%eax
08504fea +0x86:  jmp    08505036 <+0xd2>
08504fec +0x88:  mov    -0x18(%ebp),%eax
08504fef +0x8b:  mov    %eax,-0xc(%ebp)
08504ff2 +0x8e:  jmp    08505024 <+0xc0>
08504ff4 +0x90:  mov    0x8(%ebp),%eax
08504ff7 +0x93:  mov    0x650(%eax),%edx
08504ffd +0x99:  mov    -0xc(%ebp),%eax
08505000 +0x9c:  imul   $0x3d,%eax,%eax
08505003 +0x9f:  lea    (%edx,%eax,1),%eax
08505006 +0xa2:  mov    0x2(%eax),%eax
08505009 +0xa5:  test   %eax,%eax
0850500b +0xa7:  jne    08505011 <+0xad>
0850500d +0xa9:  addl   $0x1,-0x14(%ebp)
08505011 +0xad:  mov    -0x14(%ebp),%eax
08505014 +0xb0:  cmp    0x10(%ebp),%eax
08505017 +0xb3:  jl     08505020 <+0xbc>
08505019 +0xb5:  mov    $0x1,%eax
0850501e +0xba:  jmp    08505036 <+0xd2>
08505020 +0xbc:  addl   $0x1,-0xc(%ebp)
08505024 +0xc0:  mov    -0x1c(%ebp),%eax
08505027 +0xc3:  cmp    %eax,-0xc(%ebp)
0850502a +0xc6:  setle  %al
0850502d +0xc9:  test   %al,%al
0850502f +0xcb:  jne    08504ff4 <+0x90>
08505031 +0xcd:  mov    $0x0,%eax
08505036 +0xd2:  leave
08505037 +0xd3:  ret
```

## 反编译 C

```c
// CInventory::check_empty_count @ 0x8504f64

/* CInventory::check_empty_count(Inven_Item::ITEM_TYPE, int) const */

undefined4 __thiscall CInventory::check_empty_count(CInventory *this,int param_2,int param_3)

{
  char cVar1;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_18 = 0;
  StartEndPos(this,param_2,&local_1c,&local_20);
  cVar1 = IsCreatureItemType(param_2);
  if (cVar1 == '\0') {
    for (local_10 = local_1c; local_10 <= local_20; local_10 = local_10 + 1) {
      if (*(int *)(*(int *)(this + 0x650) + local_10 * 0x3d + 2) == 0) {
        local_18 = local_18 + 1;
      }
      if (param_3 <= local_18) {
        return 1;
      }
    }
  }
  else {
    for (local_14 = local_1c; local_14 <= local_20; local_14 = local_14 + 1) {
      if (*(int *)(*(int *)(this + 0x6e4) + local_14 * 0x3d + 2) == 0) {
        local_18 = local_18 + 1;
      }
      if (param_3 <= local_18) {
        return 1;
      }
    }
  }
  return 0;
}
```
