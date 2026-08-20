# SwapArtifact

`_ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii`

`user_creature::CCreatureMgr::SwapArtifact(Inven_Item*, int, int, Inven_Item*, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x08339752` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08339752  _ZN13user_creature12CCreatureMgr12SwapArtifactEP10Inven_ItemiiS2_ii
#           user_creature::CCreatureMgr::SwapArtifact(Inven_Item*, int, int, Inven_Item*, int, int)
# range [0x08339752, 0x0833989b]
08339752 +0x000:  push   %ebp
08339753 +0x001:  mov    %esp,%ebp
08339755 +0x003:  sub    $0x28,%esp
08339758 +0x006:  cmpl   $0x0,0x14(%ebp)
0833975c +0x00a:  je     08339768 <+0x16>
0833975e +0x00c:  cmpl   $0x0,0x20(%ebp)
08339762 +0x010:  jne    08339894 <+0x142>
08339768 +0x016:  movl   $0xffffffff,-0x18(%ebp)
0833976f +0x01d:  movl   $0x0,-0x14(%ebp)
08339776 +0x024:  movl   $0xffffffff,-0x10(%ebp)
0833977d +0x02b:  movl   $0x0,-0xc(%ebp)
08339784 +0x032:  mov    0x10(%ebp),%eax
08339787 +0x035:  mov    %eax,0x4(%esp)
0833978b +0x039:  mov    0x8(%ebp),%eax
0833978e +0x03c:  mov    %eax,(%esp)
08339791 +0x03f:  call   083393fc <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi>  ; user_creature::CCreatureMgr::IsArtifactEquipSlot(int)
08339796 +0x044:  test   %al,%al
08339798 +0x046:  je     083397d6 <+0x84>
0833979a +0x048:  mov    0x18(%ebp),%eax
0833979d +0x04b:  mov    %eax,(%esp)
083397a0 +0x04e:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
083397a5 +0x053:  xor    $0x1,%eax
083397a8 +0x056:  test   %al,%al
083397aa +0x058:  je     083397b8 <+0x66>
083397ac +0x05a:  mov    0x10(%ebp),%eax
083397af +0x05d:  mov    %eax,-0x18(%ebp)
083397b2 +0x060:  mov    0x18(%ebp),%eax
083397b5 +0x063:  mov    %eax,-0x14(%ebp)
083397b8 +0x066:  mov    0xc(%ebp),%eax
083397bb +0x069:  mov    %eax,(%esp)
083397be +0x06c:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
083397c3 +0x071:  xor    $0x1,%eax
083397c6 +0x074:  test   %al,%al
083397c8 +0x076:  je     083397d6 <+0x84>
083397ca +0x078:  mov    0x10(%ebp),%eax
083397cd +0x07b:  mov    %eax,-0x10(%ebp)
083397d0 +0x07e:  mov    0xc(%ebp),%eax
083397d3 +0x081:  mov    %eax,-0xc(%ebp)
083397d6 +0x084:  mov    0x1c(%ebp),%eax
083397d9 +0x087:  mov    %eax,0x4(%esp)
083397dd +0x08b:  mov    0x8(%ebp),%eax
083397e0 +0x08e:  mov    %eax,(%esp)
083397e3 +0x091:  call   083393fc <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi>  ; user_creature::CCreatureMgr::IsArtifactEquipSlot(int)
083397e8 +0x096:  test   %al,%al
083397ea +0x098:  je     08339828 <+0xd6>
083397ec +0x09a:  mov    0xc(%ebp),%eax
083397ef +0x09d:  mov    %eax,(%esp)
083397f2 +0x0a0:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
083397f7 +0x0a5:  xor    $0x1,%eax
083397fa +0x0a8:  test   %al,%al
083397fc +0x0aa:  je     0833980a <+0xb8>
083397fe +0x0ac:  mov    0x1c(%ebp),%eax
08339801 +0x0af:  mov    %eax,-0x18(%ebp)
08339804 +0x0b2:  mov    0xc(%ebp),%eax
08339807 +0x0b5:  mov    %eax,-0x14(%ebp)
0833980a +0x0b8:  mov    0x18(%ebp),%eax
0833980d +0x0bb:  mov    %eax,(%esp)
08339810 +0x0be:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08339815 +0x0c3:  xor    $0x1,%eax
08339818 +0x0c6:  test   %al,%al
0833981a +0x0c8:  je     08339828 <+0xd6>
0833981c +0x0ca:  mov    0x1c(%ebp),%eax
0833981f +0x0cd:  mov    %eax,-0x10(%ebp)
08339822 +0x0d0:  mov    0x18(%ebp),%eax
08339825 +0x0d3:  mov    %eax,-0xc(%ebp)
08339828 +0x0d6:  cmpl   $0xffffffff,-0x10(%ebp)
0833982c +0x0da:  je     0833985b <+0x109>
0833982e +0x0dc:  cmpl   $0x0,-0xc(%ebp)
08339832 +0x0e0:  je     0833985b <+0x109>
08339834 +0x0e2:  mov    -0xc(%ebp),%eax
08339837 +0x0e5:  mov    %eax,0x8(%esp)
0833983b +0x0e9:  mov    -0x10(%ebp),%eax
0833983e +0x0ec:  mov    %eax,0x4(%esp)
08339842 +0x0f0:  mov    0x8(%ebp),%eax
08339845 +0x0f3:  mov    %eax,(%esp)
08339848 +0x0f6:  call   08339718 <_ZN13user_creature12CCreatureMgr17DismantleArtifactEiP10Inven_Item>  ; user_creature::CCreatureMgr::DismantleArtifact(int, Inven_Item*)
0833984d +0x0fb:  xor    $0x1,%eax
08339850 +0x0fe:  test   %al,%al
08339852 +0x100:  je     0833985b <+0x109>
08339854 +0x102:  mov    $0x0,%eax
08339859 +0x107:  jmp    08339899 <+0x147>
0833985b +0x109:  cmpl   $0xffffffff,-0x18(%ebp)
0833985f +0x10d:  je     08339894 <+0x142>
08339861 +0x10f:  cmpl   $0x0,-0x14(%ebp)
08339865 +0x113:  je     08339894 <+0x142>
08339867 +0x115:  mov    -0x14(%ebp),%eax
0833986a +0x118:  mov    %eax,0x8(%esp)
0833986e +0x11c:  mov    -0x18(%ebp),%eax
08339871 +0x11f:  mov    %eax,0x4(%esp)
08339875 +0x123:  mov    0x8(%ebp),%eax
08339878 +0x126:  mov    %eax,(%esp)
0833987b +0x129:  call   083396c8 <_ZN13user_creature12CCreatureMgr13EquipArtifactEiP10Inven_Item>  ; user_creature::CCreatureMgr::EquipArtifact(int, Inven_Item*)
08339880 +0x12e:  xor    $0x1,%eax
08339883 +0x131:  test   %al,%al
08339885 +0x133:  je     0833988e <+0x13c>
08339887 +0x135:  mov    $0x0,%eax
0833988c +0x13a:  jmp    08339899 <+0x147>
0833988e +0x13c:  mov    -0x14(%ebp),%eax
08339891 +0x13f:  movb   $0x0,(%eax)
08339894 +0x142:  mov    $0x1,%eax
08339899 +0x147:  leave
0833989a +0x148:  ret
0833989b +0x149:  nop
```

## 反编译 C

```c
// user_creature::CCreatureMgr::SwapArtifact @ 0x8339752

/* user_creature::CCreatureMgr::SwapArtifact(Inven_Item*, int, int, Inven_Item*, int, int) */

undefined4 __thiscall
user_creature::CCreatureMgr::SwapArtifact
          (CCreatureMgr *this,Inven_Item *param_1,int param_2,int param_3,Inven_Item *param_4,
          int param_5,int param_6)

{
  char cVar1;
  int local_1c;
  Inven_Item *local_18;
  Inven_Item *local_14;
  Inven_Item *local_10;
  
  if ((param_3 == 0) || (param_6 == 0)) {
    local_1c = -1;
    local_18 = (Inven_Item *)0x0;
    local_14 = (Inven_Item *)0xffffffff;
    local_10 = (Inven_Item *)0x0;
    cVar1 = IsArtifactEquipSlot(this,param_2);
    if (cVar1 != '\0') {
      cVar1 = Inven_Item::isEmpty(param_4);
      if (cVar1 != '\x01') {
        local_1c = param_2;
        local_18 = param_4;
      }
      cVar1 = Inven_Item::isEmpty(param_1);
      if (cVar1 != '\x01') {
        local_14 = (Inven_Item *)param_2;
        local_10 = param_1;
      }
    }
    cVar1 = IsArtifactEquipSlot(this,param_5);
    if (cVar1 != '\0') {
      cVar1 = Inven_Item::isEmpty(param_1);
      if (cVar1 != '\x01') {
        local_1c = param_5;
        local_18 = param_1;
      }
      cVar1 = Inven_Item::isEmpty(param_4);
      if (cVar1 != '\x01') {
        local_14 = (Inven_Item *)param_5;
        local_10 = param_4;
      }
    }
    if (((local_14 != (Inven_Item *)0xffffffff) && (local_10 != (Inven_Item *)0x0)) &&
       (cVar1 = DismantleArtifact((int)this,local_14), cVar1 != '\x01')) {
      return 0;
    }
    if ((local_1c != -1) && (local_18 != (Inven_Item *)0x0)) {
      cVar1 = EquipArtifact(this,local_1c,local_18);
      if (cVar1 != '\x01') {
        return 0;
      }
      *local_18 = (Inven_Item)0x0;
    }
  }
  return 1;
}
```
