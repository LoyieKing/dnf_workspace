# handleUseStackable

`_ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt`

`WongWork::CDeathTower::handleUseStackable(CUser*, ENUM_ITEMSPACE, unsigned short)`

| 类 | 地址 |
|---|---|
| `WongWork::CDeathTower` | `0x084662cc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084662cc  _ZN8WongWork11CDeathTower18handleUseStackableEP5CUser14ENUM_ITEMSPACEt
#           WongWork::CDeathTower::handleUseStackable(CUser*, ENUM_ITEMSPACE, unsigned short)
# range [0x084662cc, 0x0846638b]
084662cc +0x00:  push   %ebp
084662cd +0x01:  mov    %esp,%ebp
084662cf +0x03:  push   %esi
084662d0 +0x04:  push   %ebx
084662d1 +0x05:  sub    $0x30,%esp
084662d4 +0x08:  mov    0x14(%ebp),%eax
084662d7 +0x0b:  mov    %ax,-0x1c(%ebp)
084662db +0x0f:  movzwl -0x1c(%ebp),%esi
084662df +0x13:  mov    0x10(%ebp),%eax
084662e2 +0x16:  mov    %eax,(%esp)
084662e5 +0x19:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
084662ea +0x1e:  mov    %eax,%ebx
084662ec +0x20:  mov    0xc(%ebp),%eax
084662ef +0x23:  mov    %eax,(%esp)
084662f2 +0x26:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
084662f7 +0x2b:  mov    %esi,0x8(%esp)
084662fb +0x2f:  mov    %ebx,0x4(%esp)
084662ff +0x33:  mov    %eax,(%esp)
08466302 +0x36:  call   084fc1de <_ZNK10CInventory11GetInvenRefEii>  ; CInventory::GetInvenRef(int, int) const
08466307 +0x3b:  mov    %eax,-0xc(%ebp)
0846630a +0x3e:  cmpl   $0x0,-0xc(%ebp)
0846630e +0x42:  jne    08466317 <+0x4b>
08466310 +0x44:  mov    $0x0,%eax
08466315 +0x49:  jmp    08466384 <+0xb8>
08466317 +0x4b:  mov    0x8(%ebp),%eax
0846631a +0x4e:  add    $0xc,%eax
0846631d +0x51:  mov    %eax,(%esp)
08466320 +0x54:  call   082345f0 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9c9a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9c9a
08466325 +0x59:  mov    %eax,(%esp)
08466328 +0x5c:  call   0822b4ce <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb78>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb78
0846632d +0x61:  test   %al,%al
0846632f +0x63:  je     0846637f <+0xb3>
08466331 +0x65:  mov    -0xc(%ebp),%eax
08466334 +0x68:  mov    0x2(%eax),%eax
08466337 +0x6b:  cmp    $0x1963,%eax
0846633c +0x70:  jbe    0846634b <+0x7f>
0846633e +0x72:  mov    -0xc(%ebp),%eax
08466341 +0x75:  mov    0x2(%eax),%eax
08466344 +0x78:  cmp    $0x1b57,%eax
08466349 +0x7d:  jbe    0846637f <+0xb3>
0846634b +0x7f:  mov    -0xc(%ebp),%eax
0846634e +0x82:  mov    0x2(%eax),%eax
08466351 +0x85:  cmp    $0x18,%eax
08466354 +0x88:  je     08466375 <+0xa9>
08466356 +0x8a:  cmp    $0x18,%eax
08466359 +0x8d:  ja     08466362 <+0x96>
0846635b +0x8f:  cmp    $0xa,%eax
0846635e +0x92:  je     08466378 <+0xac>
08466360 +0x94:  jmp    0846636e <+0xa2>
08466362 +0x96:  cmp    $0x33,%eax
08466365 +0x99:  je     0846637b <+0xaf>
08466367 +0x9b:  cmp    $0x28978a,%eax
0846636c +0xa0:  je     0846637e <+0xb2>
0846636e +0xa2:  mov    $0x0,%eax
08466373 +0xa7:  jmp    08466384 <+0xb8>
08466375 +0xa9:  nop
08466376 +0xaa:  jmp    0846637f <+0xb3>
08466378 +0xac:  nop
08466379 +0xad:  jmp    0846637f <+0xb3>
0846637b +0xaf:  nop
0846637c +0xb0:  jmp    0846637f <+0xb3>
0846637e +0xb2:  nop
0846637f +0xb3:  mov    $0x1,%eax
08466384 +0xb8:  add    $0x30,%esp
08466387 +0xbb:  pop    %ebx
08466388 +0xbc:  pop    %esi
08466389 +0xbd:  pop    %ebp
0846638a +0xbe:  ret
0846638b +0xbf:  nop
```

## 反编译 C

```c
// WongWork::CDeathTower::handleUseStackable @ 0x84662cc

/* WongWork::CDeathTower::handleUseStackable(CUser*, ENUM_ITEMSPACE, unsigned short) */

undefined4 __thiscall
WongWork::CDeathTower::handleUseStackable
          (CDeathTower *this,CUserCharacInfo *param_1,undefined4 param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  CInventory *this_00;
  CDungeon *this_01;
  
  iVar3 = GetInvenTypeFromItemSpace(param_3);
  this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(param_1);
  iVar3 = CInventory::GetInvenRef(this_00,iVar3,param_4 & 0xffff);
  if (iVar3 == 0) {
    return 0;
  }
  this_01 = (CDungeon *)CDungeonMgr::getDungeon((CDungeonMgr *)(this + 0xc));
  cVar2 = CDungeon::limitOfStackableItemInTower(this_01);
  if ((cVar2 != '\0') &&
     (((*(uint *)(iVar3 + 2) < 0x1964 || (6999 < *(uint *)(iVar3 + 2))) &&
      (uVar1 = *(uint *)(iVar3 + 2), uVar1 != 0x18)))) {
    if (uVar1 < 0x19) {
      if (uVar1 != 10) {
        return 0;
      }
    }
    else if ((uVar1 != 0x33) && (uVar1 != 0x28978a)) {
      return 0;
    }
  }
  return 1;
}
```
