# use_equip

`_ZN10CInventory9use_equipEi`

`CInventory::use_equip(int)`

| 类 | 地址 |
|---|---|
| `CInventory` | `0x084ff762` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ff762  _ZN10CInventory9use_equipEi
#           CInventory::use_equip(int)
# range [0x084ff762, 0x084ff8b3]
084ff762 +0x000:  push   %ebp
084ff763 +0x001:  mov    %esp,%ebp
084ff765 +0x003:  push   %ebx
084ff766 +0x004:  sub    $0x24,%esp
084ff769 +0x007:  cmpl   $0x0,0xc(%ebp)
084ff76d +0x00b:  js     084ff775 <+0x13>
084ff76f +0x00d:  cmpl   $0x19,0xc(%ebp)
084ff773 +0x011:  jle    084ff77f <+0x1d>
084ff775 +0x013:  mov    $0x1,%eax
084ff77a +0x018:  jmp    084ff8ad <+0x14b>
084ff77f +0x01d:  mov    0xc(%ebp),%eax
084ff782 +0x020:  mov    0x8(%ebp),%edx
084ff785 +0x023:  imul   $0x3d,%eax,%eax
084ff788 +0x026:  lea    (%edx,%eax,1),%eax
084ff78b +0x029:  add    $0x10,%eax
084ff78e +0x02c:  movzbl 0xd(%eax),%eax
084ff792 +0x030:  cmp    $0x1,%al
084ff794 +0x032:  je     084ff7a0 <+0x3e>
084ff796 +0x034:  mov    $0x13,%eax
084ff79b +0x039:  jmp    084ff8ad <+0x14b>
084ff7a0 +0x03e:  mov    0xc(%ebp),%eax
084ff7a3 +0x041:  mov    0x8(%ebp),%edx
084ff7a6 +0x044:  imul   $0x3d,%eax,%eax
084ff7a9 +0x047:  lea    (%edx,%eax,1),%eax
084ff7ac +0x04a:  add    $0x10,%eax
084ff7af +0x04d:  mov    0xe(%eax),%eax
084ff7b2 +0x050:  mov    %eax,%ebx
084ff7b4 +0x052:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ff7b9 +0x057:  mov    %ebx,0x4(%esp)
084ff7bd +0x05b:  mov    %eax,(%esp)
084ff7c0 +0x05e:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084ff7c5 +0x063:  mov    %eax,-0xc(%ebp)
084ff7c8 +0x066:  cmpl   $0x0,-0xc(%ebp)
084ff7cc +0x06a:  jne    084ff7d8 <+0x76>
084ff7ce +0x06c:  mov    $0x11,%eax
084ff7d3 +0x071:  jmp    084ff8ad <+0x14b>
084ff7d8 +0x076:  mov    0xc(%ebp),%eax
084ff7db +0x079:  mov    0x8(%ebp),%edx
084ff7de +0x07c:  imul   $0x3d,%eax,%eax
084ff7e1 +0x07f:  lea    (%edx,%eax,1),%eax
084ff7e4 +0x082:  add    $0x10,%eax
084ff7e7 +0x085:  movzwl 0x17(%eax),%eax
084ff7eb +0x089:  test   %ax,%ax
084ff7ee +0x08c:  je     084ff7ff <+0x9d>
084ff7f0 +0x08e:  mov    -0xc(%ebp),%eax
084ff7f3 +0x091:  mov    %eax,(%esp)
084ff7f6 +0x094:  call   0811ed98 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x93>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x93
084ff7fb +0x099:  test   %eax,%eax
084ff7fd +0x09b:  jne    084ff806 <+0xa4>
084ff7ff +0x09d:  mov    $0x1,%eax
084ff804 +0x0a2:  jmp    084ff80b <+0xa9>
084ff806 +0x0a4:  mov    $0x0,%eax
084ff80b +0x0a9:  test   %al,%al
084ff80d +0x0ab:  je     084ff819 <+0xb7>
084ff80f +0x0ad:  mov    $0xb,%eax
084ff814 +0x0b2:  jmp    084ff8ad <+0x14b>
084ff819 +0x0b7:  mov    -0xc(%ebp),%eax
084ff81c +0x0ba:  mov    0x234(%eax),%eax
084ff822 +0x0c0:  cmp    $0x9,%eax
084ff825 +0x0c3:  jg     084ff82e <+0xcc>
084ff827 +0x0c5:  mov    $0xb,%eax
084ff82c +0x0ca:  jmp    084ff8ad <+0x14b>
084ff82e +0x0cc:  mov    0xc(%ebp),%eax
084ff831 +0x0cf:  mov    0x8(%ebp),%edx
084ff834 +0x0d2:  imul   $0x3d,%eax,%eax
084ff837 +0x0d5:  lea    (%edx,%eax,1),%eax
084ff83a +0x0d8:  add    $0x10,%eax
084ff83d +0x0db:  mov    0xe(%eax),%eax
084ff840 +0x0de:  test   %eax,%eax
084ff842 +0x0e0:  jne    084ff84b <+0xe9>
084ff844 +0x0e2:  mov    $0x11,%eax
084ff849 +0x0e7:  jmp    084ff8ad <+0x14b>
084ff84b +0x0e9:  mov    0xc(%ebp),%eax
084ff84e +0x0ec:  mov    0x8(%ebp),%edx
084ff851 +0x0ef:  imul   $0x3d,%eax,%eax
084ff854 +0x0f2:  lea    (%edx,%eax,1),%eax
084ff857 +0x0f5:  add    $0x10,%eax
084ff85a +0x0f8:  movzwl 0x17(%eax),%eax
084ff85e +0x0fc:  test   %ax,%ax
084ff861 +0x0ff:  jne    084ff86a <+0x108>
084ff863 +0x101:  mov    $0x16,%eax
084ff868 +0x106:  jmp    084ff8ad <+0x14b>
084ff86a +0x108:  mov    0xc(%ebp),%eax
084ff86d +0x10b:  mov    0x8(%ebp),%edx
084ff870 +0x10e:  imul   $0x3d,%eax,%eax
084ff873 +0x111:  lea    (%edx,%eax,1),%eax
084ff876 +0x114:  add    $0x10,%eax
084ff879 +0x117:  movzwl 0x17(%eax),%eax
084ff87d +0x11b:  test   %ax,%ax
084ff880 +0x11e:  je     084ff8a8 <+0x146>
084ff882 +0x120:  mov    0xc(%ebp),%eax
084ff885 +0x123:  mov    0x8(%ebp),%ecx
084ff888 +0x126:  imul   $0x3d,%eax,%edx
084ff88b +0x129:  lea    (%ecx,%edx,1),%edx
084ff88e +0x12c:  add    $0x10,%edx
084ff891 +0x12f:  movzwl 0x17(%edx),%edx
084ff895 +0x133:  sub    $0x1,%edx
084ff898 +0x136:  mov    0x8(%ebp),%ecx
084ff89b +0x139:  imul   $0x3d,%eax,%eax
084ff89e +0x13c:  lea    (%ecx,%eax,1),%eax
084ff8a1 +0x13f:  add    $0x10,%eax
084ff8a4 +0x142:  mov    %dx,0x17(%eax)
084ff8a8 +0x146:  mov    $0x0,%eax
084ff8ad +0x14b:  add    $0x24,%esp
084ff8b0 +0x14e:  pop    %ebx
084ff8b1 +0x14f:  pop    %ebp
084ff8b2 +0x150:  ret
084ff8b3 +0x151:  nop
```

## 反编译 C

```c
// CInventory::use_equip @ 0x84ff762

/* CInventory::use_equip(int) */

undefined4 __thiscall CInventory::use_equip(CInventory *this,int param_1)

{
  bool bVar1;
  CDataManager *this_00;
  CEquipItem *this_01;
  int iVar2;
  undefined4 uVar3;
  
  if ((param_1 < 0) || (0x19 < param_1)) {
    return 1;
  }
  if (this[param_1 * 0x3d + 0x1d] != (CInventory)0x1) {
    return 0x13;
  }
  iVar2 = *(int *)(this + param_1 * 0x3d + 0x1e);
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CEquipItem *)CDataManager::find_item(this_00,iVar2);
  if (this_01 != (CEquipItem *)0x0) {
    if ((*(short *)(this + param_1 * 0x3d + 0x27) == 0) ||
       (iVar2 = CEquipItem::get_endurance(this_01), iVar2 == 0)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      uVar3 = 0xb;
    }
    else if (*(int *)(this_01 + 0x234) < 10) {
      uVar3 = 0xb;
    }
    else if (*(int *)(this + param_1 * 0x3d + 0x1e) == 0) {
      uVar3 = 0x11;
    }
    else if (*(short *)(this + param_1 * 0x3d + 0x27) == 0) {
      uVar3 = 0x16;
    }
    else {
      if (*(short *)(this + param_1 * 0x3d + 0x27) != 0) {
        *(short *)(this + param_1 * 0x3d + 0x27) = *(short *)(this + param_1 * 0x3d + 0x27) + -1;
      }
      uVar3 = 0;
    }
    return uVar3;
  }
  return 0x11;
}
```
