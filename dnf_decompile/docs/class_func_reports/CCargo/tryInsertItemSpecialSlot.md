# tryInsertItemSpecialSlot

`_ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi`

`CCargo::tryInsertItemSpecialSlot(Inven_Item const&, int) const`

| 类 | 地址 |
|---|---|
| `CCargo` | `0x0850b570` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0850b570  _ZNK6CCargo24tryInsertItemSpecialSlotERK10Inven_Itemi
#           CCargo::tryInsertItemSpecialSlot(Inven_Item const&, int) const
# range [0x0850b570, 0x0850b671]
0850b570 +0x000:  push   %ebp
0850b571 +0x001:  mov    %esp,%ebp
0850b573 +0x003:  sub    $0x28,%esp
0850b576 +0x006:  mov    0x10(%ebp),%eax
0850b579 +0x009:  mov    %eax,0x4(%esp)
0850b57d +0x00d:  mov    0x8(%ebp),%eax
0850b580 +0x010:  mov    %eax,(%esp)
0850b583 +0x013:  call   0850d39c <_GLOBAL__I_g_emptySlot+0x2d1>  ; global constructors keyed to g_emptySlot+0x2d1
0850b588 +0x018:  xor    $0x1,%eax
0850b58b +0x01b:  test   %al,%al
0850b58d +0x01d:  je     0850b599 <+0x29>
0850b58f +0x01f:  mov    $0xfffffffe,%eax
0850b594 +0x024:  jmp    0850b670 <+0x100>
0850b599 +0x029:  mov    0xc(%ebp),%eax
0850b59c +0x02c:  mov    %eax,(%esp)
0850b59f +0x02f:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0850b5a4 +0x034:  xor    $0x1,%eax
0850b5a7 +0x037:  test   %al,%al
0850b5a9 +0x039:  je     0850b650 <+0xe0>
0850b5af +0x03f:  mov    0x8(%ebp),%eax
0850b5b2 +0x042:  mov    0x4(%eax),%edx
0850b5b5 +0x045:  mov    0x10(%ebp),%eax
0850b5b8 +0x048:  imul   $0x3d,%eax,%eax
0850b5bb +0x04b:  lea    (%edx,%eax,1),%eax
0850b5be +0x04e:  mov    0x2(%eax),%edx
0850b5c1 +0x051:  mov    0xc(%ebp),%eax
0850b5c4 +0x054:  mov    0x2(%eax),%eax
0850b5c7 +0x057:  cmp    %eax,%edx
0850b5c9 +0x059:  je     0850b61c <+0xac>
0850b5cb +0x05b:  movl   $0x0,-0x14(%ebp)
0850b5d2 +0x062:  jmp    0850b60c <+0x9c>
0850b5d4 +0x064:  mov    -0x14(%ebp),%eax
0850b5d7 +0x067:  mov    %eax,0x8(%esp)
0850b5db +0x06b:  mov    0xc(%ebp),%eax
0850b5de +0x06e:  mov    %eax,0x4(%esp)
0850b5e2 +0x072:  mov    0x8(%ebp),%eax
0850b5e5 +0x075:  mov    %eax,(%esp)
0850b5e8 +0x078:  call   0850b4b0 <_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi>  ; CCargo::_tryAddStackItem(Inven_Item const&, int) const
0850b5ed +0x07d:  mov    %eax,-0x10(%ebp)
0850b5f0 +0x080:  cmpl   $0x0,-0x10(%ebp)
0850b5f4 +0x084:  js     0850b5fb <+0x8b>
0850b5f6 +0x086:  mov    -0x14(%ebp),%eax
0850b5f9 +0x089:  jmp    0850b670 <+0x100>
0850b5fb +0x08b:  cmpl   $0xfffffff6,-0x10(%ebp)
0850b5ff +0x08f:  jne    0850b608 <+0x98>
0850b601 +0x091:  mov    $0xffffffff,%eax
0850b606 +0x096:  jmp    0850b670 <+0x100>
0850b608 +0x098:  addl   $0x1,-0x14(%ebp)
0850b60c +0x09c:  cmpl   $0x97,-0x14(%ebp)
0850b613 +0x0a3:  setle  %al
0850b616 +0x0a6:  test   %al,%al
0850b618 +0x0a8:  jne    0850b5d4 <+0x64>
0850b61a +0x0aa:  jmp    0850b650 <+0xe0>
0850b61c +0x0ac:  mov    0x10(%ebp),%eax
0850b61f +0x0af:  mov    %eax,0x8(%esp)
0850b623 +0x0b3:  mov    0xc(%ebp),%eax
0850b626 +0x0b6:  mov    %eax,0x4(%esp)
0850b62a +0x0ba:  mov    0x8(%ebp),%eax
0850b62d +0x0bd:  mov    %eax,(%esp)
0850b630 +0x0c0:  call   0850b4b0 <_ZNK6CCargo16_tryAddStackItemERK10Inven_Itemi>  ; CCargo::_tryAddStackItem(Inven_Item const&, int) const
0850b635 +0x0c5:  mov    %eax,-0xc(%ebp)
0850b638 +0x0c8:  cmpl   $0x0,-0xc(%ebp)
0850b63c +0x0cc:  js     0850b643 <+0xd3>
0850b63e +0x0ce:  mov    0x10(%ebp),%eax
0850b641 +0x0d1:  jmp    0850b670 <+0x100>
0850b643 +0x0d3:  cmpl   $0xfffffff6,-0xc(%ebp)
0850b647 +0x0d7:  jne    0850b650 <+0xe0>
0850b649 +0x0d9:  mov    $0xffffffff,%eax
0850b64e +0x0de:  jmp    0850b670 <+0x100>
0850b650 +0x0e0:  mov    0x8(%ebp),%eax
0850b653 +0x0e3:  mov    0x4(%eax),%edx
0850b656 +0x0e6:  mov    0x10(%ebp),%eax
0850b659 +0x0e9:  imul   $0x3d,%eax,%eax
0850b65c +0x0ec:  lea    (%edx,%eax,1),%eax
0850b65f +0x0ef:  mov    0x2(%eax),%eax
0850b662 +0x0f2:  test   %eax,%eax
0850b664 +0x0f4:  jne    0850b66b <+0xfb>
0850b666 +0x0f6:  mov    0x10(%ebp),%eax
0850b669 +0x0f9:  jmp    0850b670 <+0x100>
0850b66b +0x0fb:  mov    $0xffffffff,%eax
0850b670 +0x100:  leave
0850b671 +0x101:  ret
```

## 反编译 C

```c
// CCargo::tryInsertItemSpecialSlot @ 0x850b570

/* CCargo::tryInsertItemSpecialSlot(Inven_Item const&, int) const */

int __thiscall CCargo::tryInsertItemSpecialSlot(CCargo *this,Inven_Item *param_1,int param_2)

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
      iVar2 = _tryAddStackItem(this,param_1,param_2);
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
  if (*(int *)(*(int *)(this + 4) + param_2 * 0x3d + 2) != 0) {
    param_2 = -1;
  }
  return param_2;
}
```
