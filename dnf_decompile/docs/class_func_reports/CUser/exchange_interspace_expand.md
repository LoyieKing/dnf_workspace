# exchange_interspace_expand

`_ZN5CUser26exchange_interspace_expandEiimiiimPicc`

`CUser::exchange_interspace_expand(int, int, unsigned long, int, int, int, unsigned long, int*, char, char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0865f614` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0865f614  _ZN5CUser26exchange_interspace_expandEiimiiimPicc
#           CUser::exchange_interspace_expand(int, int, unsigned long, int, int, int, unsigned long, int*, char, char)
# range [0x0865f614, 0x0865f7af]
0865f614 +0x000:  push   %ebp
0865f615 +0x001:  mov    %esp,%ebp
0865f617 +0x003:  sub    $0x48,%esp
0865f61a +0x006:  mov    0x2c(%ebp),%edx
0865f61d +0x009:  mov    0x30(%ebp),%eax
0865f620 +0x00c:  mov    %dl,-0x1c(%ebp)
0865f623 +0x00f:  mov    %al,-0x20(%ebp)
0865f626 +0x012:  mov    0x1c(%ebp),%eax
0865f629 +0x015:  mov    %eax,-0x10(%ebp)
0865f62c +0x018:  mov    0x8(%ebp),%eax
0865f62f +0x01b:  mov    %eax,(%esp)
0865f632 +0x01e:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
0865f637 +0x023:  cmp    $0x1,%al
0865f639 +0x025:  sete   %al
0865f63c +0x028:  test   %al,%al
0865f63e +0x02a:  je     0865f65c <+0x48>
0865f640 +0x02c:  cmpl   $0x3,0x1c(%ebp)
0865f644 +0x030:  jne    0865f64f <+0x3b>
0865f646 +0x032:  movl   $0x12,-0x10(%ebp)
0865f64d +0x039:  jmp    0865f65c <+0x48>
0865f64f +0x03b:  cmpl   $0x12,0x1c(%ebp)
0865f653 +0x03f:  jne    0865f65c <+0x48>
0865f655 +0x041:  movl   $0x3,-0x10(%ebp)
0865f65c +0x048:  mov    -0x10(%ebp),%edx
0865f65f +0x04b:  mov    0xc(%ebp),%eax
0865f662 +0x04e:  mov    0x24(%ebp),%ecx
0865f665 +0x051:  mov    %ecx,0x18(%esp)
0865f669 +0x055:  mov    0x20(%ebp),%ecx
0865f66c +0x058:  mov    %ecx,0x14(%esp)
0865f670 +0x05c:  mov    %edx,0x10(%esp)
0865f674 +0x060:  mov    0x14(%ebp),%edx
0865f677 +0x063:  mov    %edx,0xc(%esp)
0865f67b +0x067:  mov    0x10(%ebp),%edx
0865f67e +0x06a:  mov    %edx,0x8(%esp)
0865f682 +0x06e:  mov    %eax,0x4(%esp)
0865f686 +0x072:  mov    0x8(%ebp),%eax
0865f689 +0x075:  mov    %eax,(%esp)
0865f68c +0x078:  call   0865f1e1 <_Z17_checkItemMovablePK5CUser14ENUM_ITEMSPACEimS2_im>  ; _checkItemMovable(CUser const*, ENUM_ITEMSPACE, int, unsigned long, ENUM_ITEMSPACE, int, unsigned long)
0865f691 +0x07d:  xor    $0x1,%eax
0865f694 +0x080:  test   %al,%al
0865f696 +0x082:  je     0865f6ab <+0x97>
0865f698 +0x084:  mov    0x28(%ebp),%eax
0865f69b +0x087:  movl   $0xffffffff,(%eax)
0865f6a1 +0x08d:  mov    $0x15,%eax
0865f6a6 +0x092:  jmp    0865f7ad <+0x199>
0865f6ab +0x097:  mov    0x8(%ebp),%eax
0865f6ae +0x09a:  mov    %eax,(%esp)
0865f6b1 +0x09d:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
0865f6b6 +0x0a2:  cmp    -0x1c(%ebp),%al
0865f6b9 +0x0a5:  jne    0865f6cb <+0xb7>
0865f6bb +0x0a7:  mov    0x8(%ebp),%eax
0865f6be +0x0aa:  mov    %eax,(%esp)
0865f6c1 +0x0ad:  call   0822faa0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x514a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x514a
0865f6c6 +0x0b2:  cmp    -0x20(%ebp),%al
0865f6c9 +0x0b5:  je     0865f6d2 <+0xbe>
0865f6cb +0x0b7:  mov    $0x1,%eax
0865f6d0 +0x0bc:  jmp    0865f6d7 <+0xc3>
0865f6d2 +0x0be:  mov    $0x0,%eax
0865f6d7 +0x0c3:  test   %al,%al
0865f6d9 +0x0c5:  je     0865f6e5 <+0xd1>
0865f6db +0x0c7:  mov    $0x1,%eax
0865f6e0 +0x0cc:  jmp    0865f7ad <+0x199>
0865f6e5 +0x0d1:  movl   $0x0,-0xc(%ebp)
0865f6ec +0x0d8:  mov    0x8(%ebp),%eax
0865f6ef +0x0db:  mov    %eax,(%esp)
0865f6f2 +0x0de:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
0865f6f7 +0x0e3:  test   %al,%al
0865f6f9 +0x0e5:  jne    0865f711 <+0xfd>
0865f6fb +0x0e7:  mov    0x8(%ebp),%eax
0865f6fe +0x0ea:  mov    %eax,(%esp)
0865f701 +0x0ed:  call   0822faa0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x514a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x514a
0865f706 +0x0f2:  test   %al,%al
0865f708 +0x0f4:  jne    0865f711 <+0xfd>
0865f70a +0x0f6:  mov    $0x1,%eax
0865f70f +0x0fb:  jmp    0865f716 <+0x102>
0865f711 +0x0fd:  mov    $0x0,%eax
0865f716 +0x102:  test   %al,%al
0865f718 +0x104:  je     0865f74a <+0x136>
0865f71a +0x106:  mov    0x28(%ebp),%eax
0865f71d +0x109:  mov    %eax,0x14(%esp)
0865f721 +0x10d:  mov    0x20(%ebp),%eax
0865f724 +0x110:  mov    %eax,0x10(%esp)
0865f728 +0x114:  mov    0x1c(%ebp),%eax
0865f72b +0x117:  mov    %eax,0xc(%esp)
0865f72f +0x11b:  mov    0x10(%ebp),%eax
0865f732 +0x11e:  mov    %eax,0x8(%esp)
0865f736 +0x122:  mov    0xc(%ebp),%eax
0865f739 +0x125:  mov    %eax,0x4(%esp)
0865f73d +0x129:  mov    0x8(%ebp),%eax
0865f740 +0x12c:  mov    %eax,(%esp)
0865f743 +0x12f:  call   0865f382 <_ZN5CUser19change_equip_expandEiiiiPi>  ; CUser::change_equip_expand(int, int, int, int, int*)
0865f748 +0x134:  jmp    0865f7ad <+0x199>
0865f74a +0x136:  mov    0x8(%ebp),%eax
0865f74d +0x139:  mov    %eax,(%esp)
0865f750 +0x13c:  call   0822fa7c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5126>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5126
0865f755 +0x141:  cmp    $0x1,%al
0865f757 +0x143:  jne    0865f76f <+0x15b>
0865f759 +0x145:  mov    0x8(%ebp),%eax
0865f75c +0x148:  mov    %eax,(%esp)
0865f75f +0x14b:  call   0822faa0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x514a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x514a
0865f764 +0x150:  test   %al,%al
0865f766 +0x152:  jne    0865f76f <+0x15b>
0865f768 +0x154:  mov    $0x1,%eax
0865f76d +0x159:  jmp    0865f774 <+0x160>
0865f76f +0x15b:  mov    $0x0,%eax
0865f774 +0x160:  test   %al,%al
0865f776 +0x162:  je     0865f7a8 <+0x194>
0865f778 +0x164:  mov    0x28(%ebp),%eax
0865f77b +0x167:  mov    %eax,0x14(%esp)
0865f77f +0x16b:  mov    0x20(%ebp),%eax
0865f782 +0x16e:  mov    %eax,0x10(%esp)
0865f786 +0x172:  mov    -0x10(%ebp),%eax
0865f789 +0x175:  mov    %eax,0xc(%esp)
0865f78d +0x179:  mov    0x10(%ebp),%eax
0865f790 +0x17c:  mov    %eax,0x8(%esp)
0865f794 +0x180:  mov    0xc(%ebp),%eax
0865f797 +0x183:  mov    %eax,0x4(%esp)
0865f79b +0x187:  mov    0x8(%ebp),%eax
0865f79e +0x18a:  mov    %eax,(%esp)
0865f7a1 +0x18d:  call   0865f382 <_ZN5CUser19change_equip_expandEiiiiPi>  ; CUser::change_equip_expand(int, int, int, int, int*)
0865f7a6 +0x192:  jmp    0865f7ad <+0x199>
0865f7a8 +0x194:  mov    $0x1,%eax
0865f7ad +0x199:  leave
0865f7ae +0x19a:  ret
0865f7af +0x19b:  nop
```

## 反编译 C

```c
// CUser::exchange_interspace_expand @ 0x865f614

/* CUser::exchange_interspace_expand(int, int, unsigned long, int, int, int, unsigned long, int*,
   char, char) */

undefined4 __thiscall
CUser::exchange_interspace_expand
          (CUser *this,int param_1,int param_2,ulong param_3,int param_4,int param_5,int param_6,
          ulong param_7,int *param_8,char param_9,char param_10)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  
  local_14 = param_5;
  cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)this);
  if (cVar2 == '\x01') {
    if (param_5 == 3) {
      local_14 = 0x12;
    }
    else if (param_5 == 0x12) {
      local_14 = 3;
    }
  }
  cVar2 = _checkItemMovable(this,param_1,param_2,param_3,local_14,param_6,param_7);
  if (cVar2 != '\x01') {
    *param_8 = -1;
    return 0x15;
  }
  cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)this);
  if ((cVar2 == param_9) &&
     (cVar2 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)this),
     cVar2 == param_10)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)this);
    if ((cVar2 == '\0') &&
       (cVar2 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)this), cVar2 == '\0'
       )) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      cVar2 = CUserCharacInfo::getCurChannelEquipslotSwitch((CUserCharacInfo *)this);
      if ((cVar2 == '\x01') &&
         (cVar2 = CUserCharacInfo::getCurExpandEquipslotSwitch((CUserCharacInfo *)this),
         cVar2 == '\0')) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (bVar1) {
        uVar3 = change_equip_expand(this,param_1,param_2,local_14,param_6,param_8);
      }
      else {
        uVar3 = 1;
      }
      return uVar3;
    }
    uVar3 = change_equip_expand(this,param_1,param_2,param_5,param_6,param_8);
    return uVar3;
  }
  return 1;
}
```
