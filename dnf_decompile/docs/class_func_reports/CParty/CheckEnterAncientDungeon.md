# CheckEnterAncientDungeon

`_ZN6CParty24CheckEnterAncientDungeonEPK8CDungeonRhP10Inven_ItemPi`

`CParty::CheckEnterAncientDungeon(CDungeon const*, unsigned char&, Inven_Item*, int*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x0859e528` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0859e528  _ZN6CParty24CheckEnterAncientDungeonEPK8CDungeonRhP10Inven_ItemPi
#           CParty::CheckEnterAncientDungeon(CDungeon const*, unsigned char&, Inven_Item*, int*)
# range [0x0859e528, 0x0859e7fd]
0859e528 +0x000:  push   %ebp
0859e529 +0x001:  mov    %esp,%ebp
0859e52b +0x003:  push   %esi
0859e52c +0x004:  push   %ebx
0859e52d +0x005:  sub    $0x70,%esp
0859e530 +0x008:  cmpl   $0x0,0xc(%ebp)
0859e534 +0x00c:  jne    0859e540 <+0x18>
0859e536 +0x00e:  mov    $0x1,%eax
0859e53b +0x013:  jmp    0859e7f3 <+0x2cb>
0859e540 +0x018:  mov    0xc(%ebp),%eax
0859e543 +0x01b:  mov    %eax,(%esp)
0859e546 +0x01e:  call   0822b4fa <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xba4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xba4
0859e54b +0x023:  test   %al,%al
0859e54d +0x025:  je     0859e559 <+0x31>
0859e54f +0x027:  mov    $0x1,%eax
0859e554 +0x02c:  jmp    0859e7f3 <+0x2cb>
0859e559 +0x031:  mov    0xc(%ebp),%eax
0859e55c +0x034:  movzbl 0x85c(%eax),%eax
0859e563 +0x03b:  test   %al,%al
0859e565 +0x03d:  je     0859e5a9 <+0x81>
0859e567 +0x03f:  mov    0x18(%ebp),%eax
0859e56a +0x042:  mov    %eax,0x10(%esp)
0859e56e +0x046:  mov    0x14(%ebp),%eax
0859e571 +0x049:  mov    %eax,0xc(%esp)
0859e575 +0x04d:  mov    0x10(%ebp),%eax
0859e578 +0x050:  mov    %eax,0x8(%esp)
0859e57c +0x054:  mov    0xc(%ebp),%eax
0859e57f +0x057:  mov    %eax,0x4(%esp)
0859e583 +0x05b:  mov    0x8(%ebp),%eax
0859e586 +0x05e:  mov    %eax,(%esp)
0859e589 +0x061:  call   0859ee66 <_ZN6CParty22CheckEnterEventDungeonEPK8CDungeonRhP10Inven_ItemPi>  ; CParty::CheckEnterEventDungeon(CDungeon const*, unsigned char&, Inven_Item*, int*)
0859e58e +0x066:  xor    $0x1,%eax
0859e591 +0x069:  test   %al,%al
0859e593 +0x06b:  je     0859e59f <+0x77>
0859e595 +0x06d:  mov    $0x0,%eax
0859e59a +0x072:  jmp    0859e7f3 <+0x2cb>
0859e59f +0x077:  mov    $0x1,%eax
0859e5a4 +0x07c:  jmp    0859e7f3 <+0x2cb>
0859e5a9 +0x081:  mov    0xc(%ebp),%eax
0859e5ac +0x084:  mov    0x7f4(%eax),%eax
0859e5b2 +0x08a:  cmp    $0xffffffff,%eax
0859e5b5 +0x08d:  jne    0859e5c1 <+0x99>
0859e5b7 +0x08f:  mov    $0x1,%eax
0859e5bc +0x094:  jmp    0859e7f3 <+0x2cb>
0859e5c1 +0x099:  mov    0xc(%ebp),%eax
0859e5c4 +0x09c:  movzbl 0x7fc(%eax),%eax
0859e5cb +0x0a3:  xor    $0x1,%eax
0859e5ce +0x0a6:  test   %al,%al
0859e5d0 +0x0a8:  je     0859e5dc <+0xb4>
0859e5d2 +0x0aa:  mov    $0x1,%eax
0859e5d7 +0x0af:  jmp    0859e7f3 <+0x2cb>
0859e5dc +0x0b4:  mov    0x8(%ebp),%eax
0859e5df +0x0b7:  mov    0xcd8(%eax),%eax
0859e5e5 +0x0bd:  cmp    $0x1,%eax
0859e5e8 +0x0c0:  jne    0859e5f4 <+0xcc>
0859e5ea +0x0c2:  mov    $0x1,%eax
0859e5ef +0x0c7:  jmp    0859e7f3 <+0x2cb>
0859e5f4 +0x0cc:  movl   $0x0,-0xc(%ebp)
0859e5fb +0x0d3:  movl   $0x0,-0xc(%ebp)
0859e602 +0x0da:  jmp    0859e7df <+0x2b7>
0859e607 +0x0df:  mov    -0xc(%ebp),%eax
0859e60a +0x0e2:  mov    %eax,0x4(%esp)
0859e60e +0x0e6:  mov    0x8(%ebp),%eax
0859e611 +0x0e9:  mov    %eax,(%esp)
0859e614 +0x0ec:  call   085b4d12 <_ZN6CParty15_checkValidUserEi>  ; CParty::_checkValidUser(int)
0859e619 +0x0f1:  xor    $0x1,%eax
0859e61c +0x0f4:  test   %al,%al
0859e61e +0x0f6:  jne    0859e7da <+0x2b2>
0859e624 +0x0fc:  mov    0xc(%ebp),%eax
0859e627 +0x0ff:  mov    %eax,(%esp)
0859e62a +0x102:  call   080fdcf0 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x1c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x1c
0859e62f +0x107:  cmp    $0x5dc,%eax
0859e634 +0x10c:  sete   %al
0859e637 +0x10f:  test   %al,%al
0859e639 +0x111:  je     0859e69c <+0x174>
0859e63b +0x113:  mov    -0xc(%ebp),%eax
0859e63e +0x116:  shl    $0x2,%eax
0859e641 +0x119:  mov    %eax,%ebx
0859e643 +0x11b:  add    0x18(%ebp),%ebx
0859e646 +0x11e:  mov    0xc(%ebp),%eax
0859e649 +0x121:  mov    0x7f4(%eax),%esi
0859e64f +0x127:  mov    -0xc(%ebp),%edx
0859e652 +0x12a:  mov    0x8(%ebp),%ecx
0859e655 +0x12d:  mov    %edx,%eax
0859e657 +0x12f:  add    %eax,%eax
0859e659 +0x131:  add    %edx,%eax
0859e65b +0x133:  shl    $0x3,%eax
0859e65e +0x136:  lea    (%ecx,%eax,1),%eax
0859e661 +0x139:  add    $0x78,%eax
0859e664 +0x13c:  mov    (%eax),%eax
0859e666 +0x13e:  mov    %eax,(%esp)
0859e669 +0x141:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0859e66e +0x146:  mov    %esi,0x4(%esp)
0859e672 +0x14a:  mov    %eax,(%esp)
0859e675 +0x14d:  call   0850552a <_ZNK10CInventory32check_vilmark_dungeon_item_existEi>  ; CInventory::check_vilmark_dungeon_item_exist(int) const
0859e67a +0x152:  mov    %eax,(%ebx)
0859e67c +0x154:  mov    (%ebx),%eax
0859e67e +0x156:  cmp    $0xffffffff,%eax
0859e681 +0x159:  sete   %al
0859e684 +0x15c:  test   %al,%al
0859e686 +0x15e:  je     0859e6fd <+0x1d5>
0859e688 +0x160:  mov    -0xc(%ebp),%eax
0859e68b +0x163:  mov    %eax,%edx
0859e68d +0x165:  mov    0x10(%ebp),%eax
0859e690 +0x168:  mov    %dl,(%eax)
0859e692 +0x16a:  mov    $0x0,%eax
0859e697 +0x16f:  jmp    0859e7f3 <+0x2cb>
0859e69c +0x174:  mov    -0xc(%ebp),%eax
0859e69f +0x177:  shl    $0x2,%eax
0859e6a2 +0x17a:  mov    %eax,%ebx
0859e6a4 +0x17c:  add    0x18(%ebp),%ebx
0859e6a7 +0x17f:  mov    0xc(%ebp),%eax
0859e6aa +0x182:  mov    0x7f4(%eax),%esi
0859e6b0 +0x188:  mov    -0xc(%ebp),%edx
0859e6b3 +0x18b:  mov    0x8(%ebp),%ecx
0859e6b6 +0x18e:  mov    %edx,%eax
0859e6b8 +0x190:  add    %eax,%eax
0859e6ba +0x192:  add    %edx,%eax
0859e6bc +0x194:  shl    $0x3,%eax
0859e6bf +0x197:  lea    (%ecx,%eax,1),%eax
0859e6c2 +0x19a:  add    $0x78,%eax
0859e6c5 +0x19d:  mov    (%eax),%eax
0859e6c7 +0x19f:  mov    %eax,(%esp)
0859e6ca +0x1a2:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0859e6cf +0x1a7:  mov    %esi,0x4(%esp)
0859e6d3 +0x1ab:  mov    %eax,(%esp)
0859e6d6 +0x1ae:  call   08505172 <_ZNK10CInventory16check_item_existEi>  ; CInventory::check_item_exist(int) const
0859e6db +0x1b3:  mov    %eax,(%ebx)
0859e6dd +0x1b5:  mov    (%ebx),%eax
0859e6df +0x1b7:  cmp    $0xffffffff,%eax
0859e6e2 +0x1ba:  sete   %al
0859e6e5 +0x1bd:  test   %al,%al
0859e6e7 +0x1bf:  je     0859e6fd <+0x1d5>
0859e6e9 +0x1c1:  mov    -0xc(%ebp),%eax
0859e6ec +0x1c4:  mov    %eax,%edx
0859e6ee +0x1c6:  mov    0x10(%ebp),%eax
0859e6f1 +0x1c9:  mov    %dl,(%eax)
0859e6f3 +0x1cb:  mov    $0x0,%eax
0859e6f8 +0x1d0:  jmp    0859e7f3 <+0x2cb>
0859e6fd +0x1d5:  mov    -0xc(%ebp),%eax
0859e700 +0x1d8:  imul   $0x3d,%eax,%eax
0859e703 +0x1db:  mov    %eax,%ebx
0859e705 +0x1dd:  add    0x14(%ebp),%ebx
0859e708 +0x1e0:  mov    -0xc(%ebp),%eax
0859e70b +0x1e3:  shl    $0x2,%eax
0859e70e +0x1e6:  add    0x18(%ebp),%eax
0859e711 +0x1e9:  mov    (%eax),%esi
0859e713 +0x1eb:  mov    -0xc(%ebp),%edx
0859e716 +0x1ee:  mov    0x8(%ebp),%ecx
0859e719 +0x1f1:  mov    %edx,%eax
0859e71b +0x1f3:  add    %eax,%eax
0859e71d +0x1f5:  add    %edx,%eax
0859e71f +0x1f7:  shl    $0x3,%eax
0859e722 +0x1fa:  lea    (%ecx,%eax,1),%eax
0859e725 +0x1fd:  add    $0x78,%eax
0859e728 +0x200:  mov    (%eax),%eax
0859e72a +0x202:  mov    %eax,(%esp)
0859e72d +0x205:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0859e732 +0x20a:  lea    -0x58(%ebp),%edx
0859e735 +0x20d:  mov    %esi,0xc(%esp)
0859e739 +0x211:  movl   $0x1,0x8(%esp)
0859e741 +0x219:  mov    %eax,0x4(%esp)
0859e745 +0x21d:  mov    %edx,(%esp)
0859e748 +0x220:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
0859e74d +0x225:  sub    $0x4,%esp
0859e750 +0x228:  mov    -0x58(%ebp),%eax
0859e753 +0x22b:  mov    %eax,(%ebx)
0859e755 +0x22d:  mov    -0x54(%ebp),%eax
0859e758 +0x230:  mov    %eax,0x4(%ebx)
0859e75b +0x233:  mov    -0x50(%ebp),%eax
0859e75e +0x236:  mov    %eax,0x8(%ebx)
0859e761 +0x239:  mov    -0x4c(%ebp),%eax
0859e764 +0x23c:  mov    %eax,0xc(%ebx)
0859e767 +0x23f:  mov    -0x48(%ebp),%eax
0859e76a +0x242:  mov    %eax,0x10(%ebx)
0859e76d +0x245:  mov    -0x44(%ebp),%eax
0859e770 +0x248:  mov    %eax,0x14(%ebx)
0859e773 +0x24b:  mov    -0x40(%ebp),%eax
0859e776 +0x24e:  mov    %eax,0x18(%ebx)
0859e779 +0x251:  mov    -0x3c(%ebp),%eax
0859e77c +0x254:  mov    %eax,0x1c(%ebx)
0859e77f +0x257:  mov    -0x38(%ebp),%eax
0859e782 +0x25a:  mov    %eax,0x20(%ebx)
0859e785 +0x25d:  mov    -0x34(%ebp),%eax
0859e788 +0x260:  mov    %eax,0x24(%ebx)
0859e78b +0x263:  mov    -0x30(%ebp),%eax
0859e78e +0x266:  mov    %eax,0x28(%ebx)
0859e791 +0x269:  mov    -0x2c(%ebp),%eax
0859e794 +0x26c:  mov    %eax,0x2c(%ebx)
0859e797 +0x26f:  mov    -0x28(%ebp),%eax
0859e79a +0x272:  mov    %eax,0x30(%ebx)
0859e79d +0x275:  mov    -0x24(%ebp),%eax
0859e7a0 +0x278:  mov    %eax,0x34(%ebx)
0859e7a3 +0x27b:  mov    -0x20(%ebp),%eax
0859e7a6 +0x27e:  mov    %eax,0x38(%ebx)
0859e7a9 +0x281:  movzbl -0x1c(%ebp),%eax
0859e7ad +0x285:  mov    %al,0x3c(%ebx)
0859e7b0 +0x288:  mov    -0xc(%ebp),%eax
0859e7b3 +0x28b:  imul   $0x3d,%eax,%eax
0859e7b6 +0x28e:  add    0x14(%ebp),%eax
0859e7b9 +0x291:  mov    0x7(%eax),%edx
0859e7bc +0x294:  mov    0xc(%ebp),%eax
0859e7bf +0x297:  mov    0x7f8(%eax),%eax
0859e7c5 +0x29d:  cmp    %eax,%edx
0859e7c7 +0x29f:  jge    0859e7db <+0x2b3>
0859e7c9 +0x2a1:  mov    -0xc(%ebp),%eax
0859e7cc +0x2a4:  mov    %eax,%edx
0859e7ce +0x2a6:  mov    0x10(%ebp),%eax
0859e7d1 +0x2a9:  mov    %dl,(%eax)
0859e7d3 +0x2ab:  mov    $0x0,%eax
0859e7d8 +0x2b0:  jmp    0859e7f3 <+0x2cb>
0859e7da +0x2b2:  nop
0859e7db +0x2b3:  addl   $0x1,-0xc(%ebp)
0859e7df +0x2b7:  cmpl   $0x3,-0xc(%ebp)
0859e7e3 +0x2bb:  setle  %al
0859e7e6 +0x2be:  test   %al,%al
0859e7e8 +0x2c0:  jne    0859e607 <+0xdf>
0859e7ee +0x2c6:  mov    $0x1,%eax
0859e7f3 +0x2cb:  lea    -0x8(%ebp),%esp
0859e7f6 +0x2ce:  add    $0x0,%esp
0859e7f9 +0x2d1:  pop    %ebx
0859e7fa +0x2d2:  pop    %esi
0859e7fb +0x2d3:  pop    %ebp
0859e7fc +0x2d4:  ret
0859e7fd +0x2d5:  nop
```

## 反编译 C

```c
// CParty::CheckEnterAncientDungeon @ 0x859e528

/* CParty::CheckEnterAncientDungeon(CDungeon const*, unsigned char&, Inven_Item*, int*) */

undefined4 __thiscall
CParty::CheckEnterAncientDungeon
          (CParty *this,CDungeon *param_1,uchar *param_2,Inven_Item *param_3,int *param_4)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CInventory *pCVar4;
  int *piVar5;
  Inven_Item *pIVar6;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  Inven_Item local_20;
  int local_10;
  
  if (param_1 == (CDungeon *)0x0) {
    uVar2 = 1;
  }
  else {
    cVar1 = CDungeon::isTowerOfDespairDungeon(param_1);
    if (cVar1 == '\0') {
      if (param_1[0x85c] == (CDungeon)0x0) {
        if (*(int *)(param_1 + 0x7f4) == -1) {
          uVar2 = 1;
        }
        else if (param_1[0x7fc] == (CDungeon)0x1) {
          if (*(int *)(this + 0xcd8) == 1) {
            uVar2 = 1;
          }
          else {
            for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
              cVar1 = _checkValidUser(this,local_10);
              if (cVar1 == '\x01') {
                iVar3 = CDungeon::get_index(param_1);
                if (iVar3 == 0x5dc) {
                  piVar5 = param_4 + local_10;
                  iVar3 = *(int *)(param_1 + 0x7f4);
                  pCVar4 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR
                                     (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
                  iVar3 = CInventory::check_vilmark_dungeon_item_exist(pCVar4,iVar3);
                  *piVar5 = iVar3;
                  if (*piVar5 == -1) {
                    *param_2 = (uchar)local_10;
                    return 0;
                  }
                }
                else {
                  piVar5 = param_4 + local_10;
                  iVar3 = *(int *)(param_1 + 0x7f4);
                  pCVar4 = (CInventory *)
                           CUserCharacInfo::getCurCharacInvenR
                                     (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
                  iVar3 = CInventory::check_item_exist(pCVar4,iVar3);
                  *piVar5 = iVar3;
                  if (*piVar5 == -1) {
                    *param_2 = (uchar)local_10;
                    return 0;
                  }
                }
                pIVar6 = param_3 + local_10 * 0x3d;
                iVar3 = CUserCharacInfo::getCurCharacInvenR
                                  (*(CUserCharacInfo **)(this + local_10 * 0x18 + 0x78));
                CInventory::GetInvenSlot((int)&local_5c,iVar3);
                *(undefined4 *)pIVar6 = local_5c;
                *(undefined4 *)(pIVar6 + 4) = local_58;
                *(undefined4 *)(pIVar6 + 8) = local_54;
                *(undefined4 *)(pIVar6 + 0xc) = local_50;
                *(undefined4 *)(pIVar6 + 0x10) = local_4c;
                *(undefined4 *)(pIVar6 + 0x14) = local_48;
                *(undefined4 *)(pIVar6 + 0x18) = local_44;
                *(undefined4 *)(pIVar6 + 0x1c) = local_40;
                *(undefined4 *)(pIVar6 + 0x20) = local_3c;
                *(undefined4 *)(pIVar6 + 0x24) = local_38;
                *(undefined4 *)(pIVar6 + 0x28) = local_34;
                *(undefined4 *)(pIVar6 + 0x2c) = local_30;
                *(undefined4 *)(pIVar6 + 0x30) = local_2c;
                *(undefined4 *)(pIVar6 + 0x34) = local_28;
                *(undefined4 *)(pIVar6 + 0x38) = local_24;
                pIVar6[0x3c] = local_20;
                if (*(int *)(param_3 + local_10 * 0x3d + 7) < *(int *)(param_1 + 0x7f8)) {
                  *param_2 = (uchar)local_10;
                  return 0;
                }
              }
            }
            uVar2 = 1;
          }
        }
        else {
          uVar2 = 1;
        }
      }
      else {
        cVar1 = CheckEnterEventDungeon(this,param_1,param_2,param_3,param_4);
        if (cVar1 == '\x01') {
          uVar2 = 1;
        }
        else {
          uVar2 = 0;
        }
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}
```
