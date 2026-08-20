# _read_packet

`_ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf`

`Dispatcher_Compound_ExtreamItem::_read_packet(PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_Compound_ExtreamItem` | `0x08225806` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08225806  _ZN31Dispatcher_Compound_ExtreamItem12_read_packetER9PacketBuf
#           Dispatcher_Compound_ExtreamItem::_read_packet(PacketBuf&)
# range [0x08225806, 0x08225a87]
08225806 +0x000:  push   %ebp
08225807 +0x001:  mov    %esp,%ebp
08225809 +0x003:  push   %edi
0822580a +0x004:  push   %esi
0822580b +0x005:  push   %ebx
0822580c +0x006:  sub    $0xac,%esp
08225812 +0x00c:  mov    0x8(%ebp),%eax
08225815 +0x00f:  mov    0xd0(%eax),%eax
0822581b +0x015:  test   %eax,%eax
0822581d +0x017:  jne    08225829 <+0x23>
0822581f +0x019:  mov    $0x0,%eax
08225824 +0x01e:  jmp    08225a7d <+0x277>
08225829 +0x023:  mov    0x8(%ebp),%eax
0822582c +0x026:  mov    %eax,(%esp)
0822582f +0x029:  call   0822577e <_ZN31Dispatcher_Compound_ExtreamItem6_resetEv>  ; Dispatcher_Compound_ExtreamItem::_reset()
08225834 +0x02e:  mov    0x8(%ebp),%eax
08225837 +0x031:  add    $0x4,%eax
0822583a +0x034:  mov    %eax,0x4(%esp)
0822583e +0x038:  mov    0xc(%ebp),%eax
08225841 +0x03b:  mov    %eax,(%esp)
08225844 +0x03e:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08225849 +0x043:  movl   $0x0,-0x1c(%ebp)
08225850 +0x04a:  jmp    0822599f <+0x199>
08225855 +0x04f:  mov    -0x1c(%ebp),%eax
08225858 +0x052:  add    %eax,%eax
0822585a +0x054:  add    0x8(%ebp),%eax
0822585d +0x057:  add    $0x8,%eax
08225860 +0x05a:  mov    %eax,0x4(%esp)
08225864 +0x05e:  mov    0xc(%ebp),%eax
08225867 +0x061:  mov    %eax,(%esp)
0822586a +0x064:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
0822586f +0x069:  mov    -0x1c(%ebp),%esi
08225872 +0x06c:  mov    -0x1c(%ebp),%edx
08225875 +0x06f:  mov    0x8(%ebp),%eax
08225878 +0x072:  movzwl 0x8(%eax,%edx,2),%eax
0822587d +0x077:  movzwl %ax,%edi
08225880 +0x07a:  mov    0x8(%ebp),%eax
08225883 +0x07d:  mov    0xd0(%eax),%eax
08225889 +0x083:  mov    %eax,(%esp)
0822588c +0x086:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08225891 +0x08b:  mov    0x8(%ebp),%ebx
08225894 +0x08e:  imul   $0x3d,%esi,%esi
08225897 +0x091:  lea    -0xa8(%ebp),%edx
0822589d +0x097:  mov    %edi,0xc(%esp)
082258a1 +0x09b:  movl   $0x1,0x8(%esp)
082258a9 +0x0a3:  mov    %eax,0x4(%esp)
082258ad +0x0a7:  mov    %edx,(%esp)
082258b0 +0x0aa:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
082258b5 +0x0af:  sub    $0x4,%esp
082258b8 +0x0b2:  mov    -0xa8(%ebp),%eax
082258be +0x0b8:  mov    %eax,0xc(%esi,%ebx,1)
082258c2 +0x0bc:  mov    -0xa4(%ebp),%eax
082258c8 +0x0c2:  mov    %eax,0x10(%esi,%ebx,1)
082258cc +0x0c6:  mov    -0xa0(%ebp),%eax
082258d2 +0x0cc:  mov    %eax,0x14(%esi,%ebx,1)
082258d6 +0x0d0:  mov    -0x9c(%ebp),%eax
082258dc +0x0d6:  mov    %eax,0x18(%esi,%ebx,1)
082258e0 +0x0da:  mov    -0x98(%ebp),%eax
082258e6 +0x0e0:  mov    %eax,0x1c(%esi,%ebx,1)
082258ea +0x0e4:  mov    -0x94(%ebp),%eax
082258f0 +0x0ea:  mov    %eax,0x20(%esi,%ebx,1)
082258f4 +0x0ee:  mov    -0x90(%ebp),%eax
082258fa +0x0f4:  mov    %eax,0x24(%esi,%ebx,1)
082258fe +0x0f8:  mov    -0x8c(%ebp),%eax
08225904 +0x0fe:  mov    %eax,0x28(%esi,%ebx,1)
08225908 +0x102:  mov    -0x88(%ebp),%eax
0822590e +0x108:  mov    %eax,0x2c(%esi,%ebx,1)
08225912 +0x10c:  mov    -0x84(%ebp),%eax
08225918 +0x112:  mov    %eax,0x30(%esi,%ebx,1)
0822591c +0x116:  mov    -0x80(%ebp),%eax
0822591f +0x119:  mov    %eax,0x34(%esi,%ebx,1)
08225923 +0x11d:  mov    -0x7c(%ebp),%eax
08225926 +0x120:  mov    %eax,0x38(%esi,%ebx,1)
0822592a +0x124:  mov    -0x78(%ebp),%eax
0822592d +0x127:  mov    %eax,0x3c(%esi,%ebx,1)
08225931 +0x12b:  mov    -0x74(%ebp),%eax
08225934 +0x12e:  mov    %eax,0x40(%esi,%ebx,1)
08225938 +0x132:  mov    -0x70(%ebp),%eax
0822593b +0x135:  mov    %eax,0x44(%esi,%ebx,1)
0822593f +0x139:  movzbl -0x6c(%ebp),%eax
08225943 +0x13d:  mov    %al,0x48(%esi,%ebx,1)
08225947 +0x141:  mov    -0x1c(%ebp),%eax
0822594a +0x144:  imul   $0x3d,%eax,%eax
0822594d +0x147:  add    0x8(%ebp),%eax
08225950 +0x14a:  add    $0xc,%eax
08225953 +0x14d:  mov    %eax,(%esp)
08225956 +0x150:  call   08150812 <_GLOBAL__I__ZN8WongWork10CBossStageC2Ev+0x147>  ; global constructors keyed to WongWork::CBossStage::CBossStage()+0x147
0822595b +0x155:  xor    $0x1,%eax
0822595e +0x158:  test   %al,%al
08225960 +0x15a:  je     0822596c <+0x166>
08225962 +0x15c:  mov    $0x0,%eax
08225967 +0x161:  jmp    08225a7d <+0x277>
0822596c +0x166:  mov    -0x1c(%ebp),%esi
0822596f +0x169:  mov    -0x1c(%ebp),%edx
08225972 +0x16c:  mov    0x8(%ebp),%eax
08225975 +0x16f:  imul   $0x3d,%edx,%edx
08225978 +0x172:  mov    0xe(%edx,%eax,1),%eax
0822597c +0x176:  mov    %eax,%ebx
0822597e +0x178:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08225983 +0x17d:  mov    %ebx,0x4(%esp)
08225987 +0x181:  mov    %eax,(%esp)
0822598a +0x184:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0822598f +0x189:  mov    %eax,%edx
08225991 +0x18b:  mov    0x8(%ebp),%eax
08225994 +0x18e:  lea    0x20(%esi),%ecx
08225997 +0x191:  mov    %edx,0x8(%eax,%ecx,4)
0822599b +0x195:  addl   $0x1,-0x1c(%ebp)
0822599f +0x199:  cmpl   $0x1,-0x1c(%ebp)
082259a3 +0x19d:  setle  %al
082259a6 +0x1a0:  test   %al,%al
082259a8 +0x1a2:  jne    08225855 <+0x4f>
082259ae +0x1a8:  mov    0x8(%ebp),%eax
082259b1 +0x1ab:  add    $0xcd,%eax
082259b6 +0x1b0:  mov    %eax,0x4(%esp)
082259ba +0x1b4:  mov    0xc(%ebp),%eax
082259bd +0x1b7:  mov    %eax,(%esp)
082259c0 +0x1ba:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
082259c5 +0x1bf:  mov    0x8(%ebp),%eax
082259c8 +0x1c2:  movzbl 0xcd(%eax),%eax
082259cf +0x1c9:  cmp    $0x2,%al
082259d1 +0x1cb:  jle    082259dd <+0x1d7>
082259d3 +0x1cd:  mov    $0x0,%eax
082259d8 +0x1d2:  jmp    08225a7d <+0x277>
082259dd +0x1d7:  mov    0x8(%ebp),%eax
082259e0 +0x1da:  movzwl 0x4(%eax),%eax
082259e4 +0x1de:  movzwl %ax,%ebx
082259e7 +0x1e1:  mov    0x8(%ebp),%eax
082259ea +0x1e4:  mov    0xd0(%eax),%eax
082259f0 +0x1ea:  mov    %eax,(%esp)
082259f3 +0x1ed:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
082259f8 +0x1f2:  lea    -0x59(%ebp),%edx
082259fb +0x1f5:  mov    %ebx,0xc(%esp)
082259ff +0x1f9:  movl   $0x1,0x8(%esp)
08225a07 +0x201:  mov    %eax,0x4(%esp)
08225a0b +0x205:  mov    %edx,(%esp)
08225a0e +0x208:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
08225a13 +0x20d:  sub    $0x4,%esp
08225a16 +0x210:  lea    -0x59(%ebp),%eax
08225a19 +0x213:  mov    %eax,(%esp)
08225a1c +0x216:  call   0811ed66 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x61>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x61
08225a21 +0x21b:  test   %al,%al
08225a23 +0x21d:  je     08225a2c <+0x226>
08225a25 +0x21f:  mov    $0x0,%eax
08225a2a +0x224:  jmp    08225a7d <+0x277>
08225a2c +0x226:  mov    -0x57(%ebp),%eax
08225a2f +0x229:  cmp    $0x4e3,%eax
08225a34 +0x22e:  jne    08225a42 <+0x23c>
08225a36 +0x230:  mov    0x8(%ebp),%eax
08225a39 +0x233:  movb   $0x0,0xd4(%eax)
08225a40 +0x23a:  jmp    08225a78 <+0x272>
08225a42 +0x23c:  mov    -0x57(%ebp),%eax
08225a45 +0x23f:  cmp    $0x4e4,%eax
08225a4a +0x244:  jne    08225a58 <+0x252>
08225a4c +0x246:  mov    0x8(%ebp),%eax
08225a4f +0x249:  movb   $0x1,0xd4(%eax)
08225a56 +0x250:  jmp    08225a78 <+0x272>
08225a58 +0x252:  mov    -0x57(%ebp),%eax
08225a5b +0x255:  cmp    $0x28becf,%eax
08225a60 +0x25a:  jne    08225a6e <+0x268>
08225a62 +0x25c:  mov    0x8(%ebp),%eax
08225a65 +0x25f:  movb   $0x3,0xd4(%eax)
08225a6c +0x266:  jmp    08225a78 <+0x272>
08225a6e +0x268:  mov    0x8(%ebp),%eax
08225a71 +0x26b:  movb   $0x2,0xd4(%eax)
08225a78 +0x272:  mov    $0x1,%eax
08225a7d +0x277:  lea    -0xc(%ebp),%esp
08225a80 +0x27a:  add    $0x0,%esp
08225a83 +0x27d:  pop    %ebx
08225a84 +0x27e:  pop    %esi
08225a85 +0x27f:  pop    %edi
08225a86 +0x280:  pop    %ebp
08225a87 +0x281:  ret
```

## 反编译 C

```c
// Dispatcher_Compound_ExtreamItem::_read_packet @ 0x8225806

/* Dispatcher_Compound_ExtreamItem::_read_packet(PacketBuf&) */

undefined4 __thiscall
Dispatcher_Compound_ExtreamItem::_read_packet
          (Dispatcher_Compound_ExtreamItem *this,PacketBuf *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  CDataManager *this_00;
  int iVar4;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  Dispatcher_Compound_ExtreamItem local_70;
  Inven_Item local_5d [2];
  int local_5b;
  int local_20;
  
  if (*(int *)(this + 0xd0) == 0) {
    uVar2 = 0;
  }
  else {
    _reset(this);
    PacketBuf::get_short(param_1,(ushort *)(this + 4));
    for (local_20 = 0; local_20 < 2; local_20 = local_20 + 1) {
      PacketBuf::get_short(param_1,(ushort *)(this + local_20 * 2 + 8));
      iVar4 = local_20;
      iVar3 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0xd0));
      iVar4 = iVar4 * 0x3d;
      CInventory::GetInvenSlot((int)&local_ac,iVar3);
      *(undefined4 *)(this + iVar4 + 0xc) = local_ac;
      *(undefined4 *)(this + iVar4 + 0x10) = local_a8;
      *(undefined4 *)(this + iVar4 + 0x14) = local_a4;
      *(undefined4 *)(this + iVar4 + 0x18) = local_a0;
      *(undefined4 *)(this + iVar4 + 0x1c) = local_9c;
      *(undefined4 *)(this + iVar4 + 0x20) = local_98;
      *(undefined4 *)(this + iVar4 + 0x24) = local_94;
      *(undefined4 *)(this + iVar4 + 0x28) = local_90;
      *(undefined4 *)(this + iVar4 + 0x2c) = local_8c;
      *(undefined4 *)(this + iVar4 + 0x30) = local_88;
      *(undefined4 *)(this + iVar4 + 0x34) = local_84;
      *(undefined4 *)(this + iVar4 + 0x38) = local_80;
      *(undefined4 *)(this + iVar4 + 0x3c) = local_7c;
      *(undefined4 *)(this + iVar4 + 0x40) = local_78;
      *(undefined4 *)(this + iVar4 + 0x44) = local_74;
      this[iVar4 + 0x48] = local_70;
      cVar1 = Inven_Item::isEquipableItemType((Inven_Item *)(this + local_20 * 0x3d + 0xc));
      iVar4 = local_20;
      if (cVar1 != '\x01') {
        return 0;
      }
      iVar3 = *(int *)(this + local_20 * 0x3d + 0xe);
      this_00 = (CDataManager *)G_CDataManager();
      uVar2 = CDataManager::find_item(this_00,iVar3);
      *(undefined4 *)(this + (iVar4 + 0x20) * 4 + 8) = uVar2;
    }
    PacketBuf::get_byte(param_1,(char *)(this + 0xcd));
    if ((char)this[0xcd] < '\x03') {
      iVar4 = CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)(this + 0xd0));
      CInventory::GetInvenSlot((int)local_5d,iVar4);
      cVar1 = Inven_Item::isEmpty(local_5d);
      if (cVar1 == '\0') {
        if (local_5b == 0x4e3) {
          this[0xd4] = (Dispatcher_Compound_ExtreamItem)0x0;
        }
        else if (local_5b == 0x4e4) {
          this[0xd4] = (Dispatcher_Compound_ExtreamItem)0x1;
        }
        else if (local_5b == 0x28becf) {
          this[0xd4] = (Dispatcher_Compound_ExtreamItem)0x3;
        }
        else {
          this[0xd4] = (Dispatcher_Compound_ExtreamItem)0x2;
        }
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
