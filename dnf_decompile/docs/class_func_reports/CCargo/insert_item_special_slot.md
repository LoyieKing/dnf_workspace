# insert_item_special_slot

`_ZN6CCargo24insert_item_special_slotER10Inven_Itemi`

`CCargo::insert_item_special_slot(Inven_Item&, int)`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850b672` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850b672  _ZN6CCargo24insert_item_special_slotER10Inven_Itemi
#           CCargo::insert_item_special_slot(Inven_Item&, int)
# range [0x0850b672, 0x0850b793]
0850b672 +0x000:  push   %ebp
0850b673 +0x001:  mov    %esp,%ebp
0850b675 +0x003:  sub    $0x28,%esp
0850b678 +0x006:  mov    0x10(%ebp),%eax
0850b67b +0x009:  mov    %eax,0x4(%esp)
0850b67f +0x00d:  mov    0x8(%ebp),%eax
0850b682 +0x010:  mov    %eax,(%esp)
0850b685 +0x013:  call   0850d39c <_GLOBAL__I_g_emptySlot+0x2d1>  ; global constructors keyed to g_emptySlot+0x2d1
0850b68a +0x018:  xor    $0x1,%eax
0850b68d +0x01b:  test   %al,%al
0850b68f +0x01d:  je     0850b69b <+0x29>
0850b691 +0x01f:  mov    $0xfffffffe,%eax
0850b696 +0x024:  jmp    0850b791 <+0x11f>
0850b69b +0x029:  mov    0xc(%ebp),%eax
0850b69e +0x02c:  mov    %eax,(%esp)
0850b6a1 +0x02f:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0850b6a6 +0x034:  xor    $0x1,%eax
0850b6a9 +0x037:  test   %al,%al
0850b6ab +0x039:  je     0850b758 <+0xe6>
0850b6b1 +0x03f:  mov    0x8(%ebp),%eax
0850b6b4 +0x042:  mov    0x4(%eax),%edx
0850b6b7 +0x045:  mov    0x10(%ebp),%eax
0850b6ba +0x048:  imul   $0x3d,%eax,%eax
0850b6bd +0x04b:  lea    (%edx,%eax,1),%eax
0850b6c0 +0x04e:  mov    0x2(%eax),%edx
0850b6c3 +0x051:  mov    0xc(%ebp),%eax
0850b6c6 +0x054:  mov    0x2(%eax),%eax
0850b6c9 +0x057:  cmp    %eax,%edx
0850b6cb +0x059:  je     0850b724 <+0xb2>
0850b6cd +0x05b:  movl   $0x0,-0x14(%ebp)
0850b6d4 +0x062:  jmp    0850b714 <+0xa2>
0850b6d6 +0x064:  mov    -0x14(%ebp),%eax
0850b6d9 +0x067:  mov    %eax,0x8(%esp)
0850b6dd +0x06b:  mov    0xc(%ebp),%eax
0850b6e0 +0x06e:  mov    %eax,0x4(%esp)
0850b6e4 +0x072:  mov    0x8(%ebp),%eax
0850b6e7 +0x075:  mov    %eax,(%esp)
0850b6ea +0x078:  call   0850b4b0 <_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi>  ; CCargo::_tryAddStackItem(Inven_Item const&, int) const
0850b6ef +0x07d:  mov    %eax,-0x10(%ebp)
0850b6f2 +0x080:  cmpl   $0x0,-0x10(%ebp)
0850b6f6 +0x084:  js     0850b700 <+0x8e>
0850b6f8 +0x086:  mov    -0x14(%ebp),%eax
0850b6fb +0x089:  jmp    0850b791 <+0x11f>
0850b700 +0x08e:  cmpl   $0xfffffff6,-0x10(%ebp)
0850b704 +0x092:  jne    0850b710 <+0x9e>
0850b706 +0x094:  mov    $0xffffffff,%eax
0850b70b +0x099:  jmp    0850b791 <+0x11f>
0850b710 +0x09e:  addl   $0x1,-0x14(%ebp)
0850b714 +0x0a2:  cmpl   $0x97,-0x14(%ebp)
0850b71b +0x0a9:  setle  %al
0850b71e +0x0ac:  test   %al,%al
0850b720 +0x0ae:  jne    0850b6d6 <+0x64>
0850b722 +0x0b0:  jmp    0850b758 <+0xe6>
0850b724 +0x0b2:  mov    0x10(%ebp),%eax
0850b727 +0x0b5:  mov    %eax,0x8(%esp)
0850b72b +0x0b9:  mov    0xc(%ebp),%eax
0850b72e +0x0bc:  mov    %eax,0x4(%esp)
0850b732 +0x0c0:  mov    0x8(%ebp),%eax
0850b735 +0x0c3:  mov    %eax,(%esp)
0850b738 +0x0c6:  call   0850c546 <_ZN6CCargo13_AddStackItemERK10Inven_Itemi>  ; CCargo::_AddStackItem(Inven_Item const&, int)
0850b73d +0x0cb:  mov    %eax,-0xc(%ebp)
0850b740 +0x0ce:  cmpl   $0x0,-0xc(%ebp)
0850b744 +0x0d2:  js     0850b74b <+0xd9>
0850b746 +0x0d4:  mov    0x10(%ebp),%eax
0850b749 +0x0d7:  jmp    0850b791 <+0x11f>
0850b74b +0x0d9:  cmpl   $0xfffffff6,-0xc(%ebp)
0850b74f +0x0dd:  jne    0850b758 <+0xe6>
0850b751 +0x0df:  mov    $0xffffffff,%eax
0850b756 +0x0e4:  jmp    0850b791 <+0x11f>
0850b758 +0x0e6:  mov    0x8(%ebp),%eax
0850b75b +0x0e9:  mov    0x4(%eax),%edx
0850b75e +0x0ec:  mov    0x10(%ebp),%eax
0850b761 +0x0ef:  imul   $0x3d,%eax,%eax
0850b764 +0x0f2:  lea    (%edx,%eax,1),%eax
0850b767 +0x0f5:  mov    0x2(%eax),%eax
0850b76a +0x0f8:  test   %eax,%eax
0850b76c +0x0fa:  jne    0850b78c <+0x11a>
0850b76e +0x0fc:  mov    0x10(%ebp),%eax
0850b771 +0x0ff:  mov    %eax,0x8(%esp)
0850b775 +0x103:  mov    0xc(%ebp),%eax
0850b778 +0x106:  mov    %eax,0x4(%esp)
0850b77c +0x10a:  mov    0x8(%ebp),%eax
0850b77f +0x10d:  mov    %eax,(%esp)
0850b782 +0x110:  call   0850c4ba <_ZN6CCargo8_AddItemERK10Inven_Itemi>  ; CCargo::_AddItem(Inven_Item const&, int)
0850b787 +0x115:  mov    0x10(%ebp),%eax
0850b78a +0x118:  jmp    0850b791 <+0x11f>
0850b78c +0x11a:  mov    $0xffffffff,%eax
0850b791 +0x11f:  leave
0850b792 +0x120:  ret
0850b793 +0x121:  nop
```

## 反编译 C

```c
// CCargo::insert_item_special_slot @ 0x850b672

/* CCargo::insert_item_special_slot(Inven_Item&, int) */

int __thiscall CCargo::insert_item_special_slot(CCargo *this,Inven_Item *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int local_18;
  
  cVar1 = IsOperatorable(this,param_2);
  if (cVar1 != '\x01') {
    return -2;
  }
  cVar1 = Inven_Item::isEquipableItemType(param_1);
  if (cVar1 != '\x01') {
    if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == *(int *)(param_1 + 2)) {
      iVar2 = _AddStackItem(this,param_1,param_2);
      if (-1 < iVar2) {
        return param_2;
      }
      if (iVar2 == -10) {
        return -1;
      }
    }
    else {
      for (local_18 = 0; local_18 < 0x98; local_18 = local_18 + 1) {
        iVar2 = _tryAddStackItem(this,param_1,local_18);
        if (-1 < iVar2) {
          return local_18;
        }
        if (iVar2 == -10) {
          return -1;
        }
      }
    }
  }
  if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) == 0) {
    _AddItem(this,param_1,param_2);
  }
  else {
    param_2 = -1;
  }
  return param_2;
}
```
