# DenySwapArtifact

`_ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii`

`user_creature::CCreatureMgr::DenySwapArtifact(Inven_Item*, int, int, Inven_Item*, int, int)`

| 类 | 地址 |
|---|---|
| `user_creature::CCreatureMgr` | `0x0833989c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0833989c  _ZN13user_creature12CCreatureMgr16DenySwapArtifactEP10Inven_ItemiiS2_ii
#           user_creature::CCreatureMgr::DenySwapArtifact(Inven_Item*, int, int, Inven_Item*, int, int)
# range [0x0833989c, 0x083399f9]
0833989c +0x000:  push   %ebp
0833989d +0x001:  mov    %esp,%ebp
0833989f +0x003:  sub    $0x18,%esp
083398a2 +0x006:  mov    0x8(%ebp),%eax
083398a5 +0x009:  mov    0x18(%eax),%eax
083398a8 +0x00c:  test   %eax,%eax
083398aa +0x00e:  je     08339974 <+0xd8>
083398b0 +0x014:  mov    0x10(%ebp),%eax
083398b3 +0x017:  mov    %eax,0x4(%esp)
083398b7 +0x01b:  mov    0x8(%ebp),%eax
083398ba +0x01e:  mov    %eax,(%esp)
083398bd +0x021:  call   083393fc <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi>  ; user_creature::CCreatureMgr::IsArtifactEquipSlot(int)
083398c2 +0x026:  test   %al,%al
083398c4 +0x028:  je     083398df <+0x43>
083398c6 +0x02a:  mov    0x18(%ebp),%eax
083398c9 +0x02d:  mov    %eax,(%esp)
083398cc +0x030:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
083398d1 +0x035:  xor    $0x1,%eax
083398d4 +0x038:  test   %al,%al
083398d6 +0x03a:  je     083398df <+0x43>
083398d8 +0x03c:  mov    $0x1,%eax
083398dd +0x041:  jmp    083398e4 <+0x48>
083398df +0x043:  mov    $0x0,%eax
083398e4 +0x048:  test   %al,%al
083398e6 +0x04a:  je     0833990e <+0x72>
083398e8 +0x04c:  mov    0x8(%ebp),%eax
083398eb +0x04f:  mov    0x18(%eax),%eax
083398ee +0x052:  mov    0x10(%ebp),%edx
083398f1 +0x055:  mov    %edx,0x4(%esp)
083398f5 +0x059:  mov    %eax,(%esp)
083398f8 +0x05c:  call   083376f6 <_ZN13user_creature9CCreature19IsAvailableArtifactEi>  ; user_creature::CCreature::IsAvailableArtifact(int)
083398fd +0x061:  xor    $0x1,%eax
08339900 +0x064:  test   %al,%al
08339902 +0x066:  je     0833990e <+0x72>
08339904 +0x068:  mov    $0x1,%eax
08339909 +0x06d:  jmp    083399f8 <+0x15c>
0833990e +0x072:  mov    0x1c(%ebp),%eax
08339911 +0x075:  mov    %eax,0x4(%esp)
08339915 +0x079:  mov    0x8(%ebp),%eax
08339918 +0x07c:  mov    %eax,(%esp)
0833991b +0x07f:  call   083393fc <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi>  ; user_creature::CCreatureMgr::IsArtifactEquipSlot(int)
08339920 +0x084:  test   %al,%al
08339922 +0x086:  je     0833993d <+0xa1>
08339924 +0x088:  mov    0xc(%ebp),%eax
08339927 +0x08b:  mov    %eax,(%esp)
0833992a +0x08e:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
0833992f +0x093:  xor    $0x1,%eax
08339932 +0x096:  test   %al,%al
08339934 +0x098:  je     0833993d <+0xa1>
08339936 +0x09a:  mov    $0x1,%eax
0833993b +0x09f:  jmp    08339942 <+0xa6>
0833993d +0x0a1:  mov    $0x0,%eax
08339942 +0x0a6:  test   %al,%al
08339944 +0x0a8:  je     083399f3 <+0x157>
0833994a +0x0ae:  mov    0x8(%ebp),%eax
0833994d +0x0b1:  mov    0x18(%eax),%eax
08339950 +0x0b4:  mov    0x10(%ebp),%edx
08339953 +0x0b7:  mov    %edx,0x4(%esp)
08339957 +0x0bb:  mov    %eax,(%esp)
0833995a +0x0be:  call   083376f6 <_ZN13user_creature9CCreature19IsAvailableArtifactEi>  ; user_creature::CCreature::IsAvailableArtifact(int)
0833995f +0x0c3:  xor    $0x1,%eax
08339962 +0x0c6:  test   %al,%al
08339964 +0x0c8:  je     083399f3 <+0x157>
0833996a +0x0ce:  mov    $0x1,%eax
0833996f +0x0d3:  jmp    083399f8 <+0x15c>
08339974 +0x0d8:  mov    0x10(%ebp),%eax
08339977 +0x0db:  mov    %eax,0x4(%esp)
0833997b +0x0df:  mov    0x8(%ebp),%eax
0833997e +0x0e2:  mov    %eax,(%esp)
08339981 +0x0e5:  call   083393fc <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi>  ; user_creature::CCreatureMgr::IsArtifactEquipSlot(int)
08339986 +0x0ea:  test   %al,%al
08339988 +0x0ec:  je     083399a0 <+0x104>
0833998a +0x0ee:  mov    0x18(%ebp),%eax
0833998d +0x0f1:  mov    %eax,(%esp)
08339990 +0x0f4:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08339995 +0x0f9:  test   %al,%al
08339997 +0x0fb:  je     083399a0 <+0x104>
08339999 +0x0fd:  mov    $0x1,%eax
0833999e +0x102:  jmp    083399a5 <+0x109>
083399a0 +0x104:  mov    $0x0,%eax
083399a5 +0x109:  test   %al,%al
083399a7 +0x10b:  je     083399b0 <+0x114>
083399a9 +0x10d:  mov    $0x0,%eax
083399ae +0x112:  jmp    083399f8 <+0x15c>
083399b0 +0x114:  mov    0x1c(%ebp),%eax
083399b3 +0x117:  mov    %eax,0x4(%esp)
083399b7 +0x11b:  mov    0x8(%ebp),%eax
083399ba +0x11e:  mov    %eax,(%esp)
083399bd +0x121:  call   083393fc <_ZN13user_creature12CCreatureMgr19IsArtifactEquipSlotEi>  ; user_creature::CCreatureMgr::IsArtifactEquipSlot(int)
083399c2 +0x126:  test   %al,%al
083399c4 +0x128:  je     083399dc <+0x140>
083399c6 +0x12a:  mov    0xc(%ebp),%eax
083399c9 +0x12d:  mov    %eax,(%esp)
083399cc +0x130:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
083399d1 +0x135:  test   %al,%al
083399d3 +0x137:  je     083399dc <+0x140>
083399d5 +0x139:  mov    $0x1,%eax
083399da +0x13e:  jmp    083399e1 <+0x145>
083399dc +0x140:  mov    $0x0,%eax
083399e1 +0x145:  test   %al,%al
083399e3 +0x147:  je     083399ec <+0x150>
083399e5 +0x149:  mov    $0x0,%eax
083399ea +0x14e:  jmp    083399f8 <+0x15c>
083399ec +0x150:  mov    $0x1,%eax
083399f1 +0x155:  jmp    083399f8 <+0x15c>
083399f3 +0x157:  mov    $0x0,%eax
083399f8 +0x15c:  leave
083399f9 +0x15d:  ret
```

## 反编译 C

```c
// user_creature::CCreatureMgr::DenySwapArtifact @ 0x833989c

/* user_creature::CCreatureMgr::DenySwapArtifact(Inven_Item*, int, int, Inven_Item*, int, int) */

undefined4
user_creature::CCreatureMgr::DenySwapArtifact
          (Inven_Item *param_1,int param_2,int param_3,Inven_Item *param_4,int param_5,int param_6)

{
  bool bVar1;
  char cVar2;
  
  if (*(int *)(param_1 + 0x18) != 0) {
    cVar2 = IsArtifactEquipSlot((CCreatureMgr *)param_1,param_3);
    if ((cVar2 == '\0') || (cVar2 = Inven_Item::isEmpty((Inven_Item *)param_5), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (cVar2 = CCreature::IsAvailableArtifact(*(CCreature **)(param_1 + 0x18),param_3),
       cVar2 != '\x01')) {
      return 1;
    }
    cVar2 = IsArtifactEquipSlot((CCreatureMgr *)param_1,param_6);
    if ((cVar2 == '\0') || (cVar2 = Inven_Item::isEmpty((Inven_Item *)param_2), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((bVar1) &&
       (cVar2 = CCreature::IsAvailableArtifact(*(CCreature **)(param_1 + 0x18),param_3),
       cVar2 != '\x01')) {
      return 1;
    }
    return 0;
  }
  cVar2 = IsArtifactEquipSlot((CCreatureMgr *)param_1,param_3);
  if ((cVar2 == '\0') || (cVar2 = Inven_Item::isEmpty((Inven_Item *)param_5), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  cVar2 = IsArtifactEquipSlot((CCreatureMgr *)param_1,param_6);
  if ((cVar2 == '\0') || (cVar2 = Inven_Item::isEmpty((Inven_Item *)param_2), cVar2 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    return 0;
  }
  return 1;
}
```
