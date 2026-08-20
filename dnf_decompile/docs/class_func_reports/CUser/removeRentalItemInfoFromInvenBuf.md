# removeRentalItemInfoFromInvenBuf

`_ZN5CUser32removeRentalItemInfoFromInvenBufEP18SIG_SAVE_INVENTORYi`

`CUser::removeRentalItemInfoFromInvenBuf(SIG_SAVE_INVENTORY*, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08677584` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08677584  _ZN5CUser32removeRentalItemInfoFromInvenBufEP18SIG_SAVE_INVENTORYi
#           CUser::removeRentalItemInfoFromInvenBuf(SIG_SAVE_INVENTORY*, int)
# range [0x08677584, 0x0867776b]
08677584 +0x000:  push   %ebp
08677585 +0x001:  mov    %esp,%ebp
08677587 +0x003:  push   %esi
08677588 +0x004:  push   %ebx
08677589 +0x005:  sub    $0x40,%esp
0867758c +0x008:  cmpl   $0x0,0xc(%ebp)
08677590 +0x00c:  jne    0867759c <+0x18>
08677592 +0x00e:  mov    $0x0,%ebx
08677597 +0x013:  jmp    0867775f <+0x1db>
0867759c +0x018:  lea    -0x1c(%ebp),%eax
0867759f +0x01b:  mov    %eax,(%esp)
086775a2 +0x01e:  call   08236134 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7de
086775a7 +0x023:  mov    0x10(%ebp),%eax
086775aa +0x026:  mov    %eax,0x8(%esp)
086775ae +0x02a:  lea    -0x1c(%ebp),%eax
086775b1 +0x02d:  mov    %eax,0x4(%esp)
086775b5 +0x031:  mov    0x8(%ebp),%eax
086775b8 +0x034:  mov    %eax,(%esp)
086775bb +0x037:  call   086773ea <_ZN5CUser26getCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>  ; CUser::getCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
086775c0 +0x03c:  xor    $0x1,%eax
086775c3 +0x03f:  test   %al,%al
086775c5 +0x041:  je     086775d1 <+0x4d>
086775c7 +0x043:  mov    $0x0,%ebx
086775cc +0x048:  jmp    08677754 <+0x1d0>
086775d1 +0x04d:  lea    -0x20(%ebp),%eax
086775d4 +0x050:  lea    -0x1c(%ebp),%edx
086775d7 +0x053:  mov    %edx,0x4(%esp)
086775db +0x057:  mov    %eax,(%esp)
086775de +0x05a:  call   082375a6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc50>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc50
086775e3 +0x05f:  sub    $0x4,%esp
086775e6 +0x062:  jmp    086776ea <+0x166>
086775eb +0x067:  lea    -0x20(%ebp),%eax
086775ee +0x06a:  mov    %eax,(%esp)
086775f1 +0x06d:  call   08271e4e <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x474>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x474
086775f6 +0x072:  mov    %eax,-0xc(%ebp)
086775f9 +0x075:  movb   $0x0,-0x21(%ebp)
086775fd +0x079:  movl   $0x0,-0x28(%ebp)
08677604 +0x080:  mov    -0xc(%ebp),%eax
08677607 +0x083:  mov    0x4(%eax),%eax
0867760a +0x086:  mov    %eax,%ebx
0867760c +0x088:  mov    0x8(%ebp),%eax
0867760f +0x08b:  mov    %eax,(%esp)
08677612 +0x08e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08677617 +0x093:  lea    -0x21(%ebp),%edx
0867761a +0x096:  mov    %edx,0xc(%esp)
0867761e +0x09a:  lea    -0x28(%ebp),%edx
08677621 +0x09d:  mov    %edx,0x8(%esp)
08677625 +0x0a1:  mov    %ebx,0x4(%esp)
08677629 +0x0a5:  mov    %eax,(%esp)
0867762c +0x0a8:  call   085052be <_ZNK10CInventory36CheckExistItemInInventoryOrEquipmentEiRiRb>  ; CInventory::CheckExistItemInInventoryOrEquipment(int, int&, bool&) const
08677631 +0x0ad:  xor    $0x1,%eax
08677634 +0x0b0:  test   %al,%al
08677636 +0x0b2:  je     08677692 <+0x10e>
08677638 +0x0b4:  mov    -0xc(%ebp),%eax
0867763b +0x0b7:  mov    0x4(%eax),%ebx
0867763e +0x0ba:  mov    0x8(%ebp),%eax
08677641 +0x0bd:  mov    %eax,(%esp)
08677644 +0x0c0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08677649 +0x0c5:  mov    %ebx,0x18(%esp)
0867764d +0x0c9:  mov    %eax,0x14(%esp)
08677651 +0x0cd:  movl   $"Rent error. CUser::removeRentalItemInfoFromInvenBuf return false. Acc(%d), itemIndex(%d)",0x10(%esp)
08677659 +0x0d5:  movl   $0x6d15,0xc(%esp)
08677661 +0x0dd:  movl   $&_ZZN5CUser32removeRentalItemInfoFromInvenBufEP18SIG_SAVE_INVENTORYiE19__PRETTY_FUNCTION__,0x8(%esp)
08677669 +0x0e5:  movl   $"user.cpp",0x4(%esp)
08677671 +0x0ed:  movl   $0x1,(%esp)
08677678 +0x0f4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0867767d +0x0f9:  mov    0x8(%ebp),%eax
08677680 +0x0fc:  mov    %eax,(%esp)
08677683 +0x0ff:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08677688 +0x104:  mov    %eax,(%esp)
0867768b +0x107:  call   0850542a <_ZNK10CInventory30ShowAllExistItemsForErrorCheckEv>  ; CInventory::ShowAllExistItemsForErrorCheck() const
08677690 +0x10c:  jmp    086776df <+0x15b>
08677692 +0x10e:  movzbl -0x21(%ebp),%edx
08677696 +0x112:  mov    -0xc(%ebp),%eax
08677699 +0x115:  mov    %dl,0xa(%eax)
0867769c +0x118:  movzbl -0x21(%ebp),%eax
086776a0 +0x11c:  test   %al,%al
086776a2 +0x11e:  je     086776c6 <+0x142>
086776a4 +0x120:  mov    -0x28(%ebp),%eax
086776a7 +0x123:  sub    $0xa,%eax
086776aa +0x126:  mov    %eax,-0x28(%ebp)
086776ad +0x129:  mov    -0x28(%ebp),%eax
086776b0 +0x12c:  imul   $0x3d,%eax,%eax
086776b3 +0x12f:  add    $0x10,%eax
086776b6 +0x132:  add    0xc(%ebp),%eax
086776b9 +0x135:  add    $0x9,%eax
086776bc +0x138:  mov    %eax,(%esp)
086776bf +0x13b:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
086776c4 +0x140:  jmp    086776df <+0x15b>
086776c6 +0x142:  mov    -0x28(%ebp),%eax
086776c9 +0x145:  imul   $0x3d,%eax,%eax
086776cc +0x148:  add    $0x550,%eax
086776d1 +0x14d:  add    0xc(%ebp),%eax
086776d4 +0x150:  add    $0x7,%eax
086776d7 +0x153:  mov    %eax,(%esp)
086776da +0x156:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
086776df +0x15b:  lea    -0x20(%ebp),%eax
086776e2 +0x15e:  mov    %eax,(%esp)
086776e5 +0x161:  call   08271e38 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x45e>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x45e
086776ea +0x166:  lea    -0x10(%ebp),%eax
086776ed +0x169:  lea    -0x1c(%ebp),%edx
086776f0 +0x16c:  mov    %edx,0x4(%esp)
086776f4 +0x170:  mov    %eax,(%esp)
086776f7 +0x173:  call   082375e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc8e
086776fc +0x178:  sub    $0x4,%esp
086776ff +0x17b:  lea    -0x10(%ebp),%eax
08677702 +0x17e:  mov    %eax,0x4(%esp)
08677706 +0x182:  lea    -0x20(%ebp),%eax
08677709 +0x185:  mov    %eax,(%esp)
0867770c +0x188:  call   08271e0b <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x431>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x431
08677711 +0x18d:  test   %al,%al
08677713 +0x18f:  jne    086775eb <+0x67>
08677719 +0x195:  mov    0x10(%ebp),%eax
0867771c +0x198:  mov    %eax,0x8(%esp)
08677720 +0x19c:  lea    -0x1c(%ebp),%eax
08677723 +0x19f:  mov    %eax,0x4(%esp)
08677727 +0x1a3:  mov    0x8(%ebp),%eax
0867772a +0x1a6:  mov    %eax,(%esp)
0867772d +0x1a9:  call   08677516 <_ZN5CUser26setCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>  ; CUser::setCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
08677732 +0x1ae:  mov    $0x1,%ebx
08677737 +0x1b3:  jmp    08677754 <+0x1d0>
08677739 +0x1b5:  mov    %edx,%ebx
0867773b +0x1b7:  mov    %eax,%esi
0867773d +0x1b9:  lea    -0x1c(%ebp),%eax
08677740 +0x1bc:  mov    %eax,(%esp)
08677743 +0x1bf:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
08677748 +0x1c4:  mov    %esi,%eax
0867774a +0x1c6:  mov    %ebx,%edx
0867774c +0x1c8:  mov    %eax,(%esp)
0867774f +0x1cb:  call   08ae3750 <_Unwind_Resume>
08677754 +0x1d0:  lea    -0x1c(%ebp),%eax
08677757 +0x1d3:  mov    %eax,(%esp)
0867775a +0x1d6:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
0867775f +0x1db:  mov    %ebx,%eax
08677761 +0x1dd:  lea    -0x8(%ebp),%esp
08677764 +0x1e0:  add    $0x0,%esp
08677767 +0x1e3:  pop    %ebx
08677768 +0x1e4:  pop    %esi
08677769 +0x1e5:  pop    %ebp
0867776a +0x1e6:  ret
0867776b +0x1e7:  nop
```

## 反编译 C

```c
// CUser::removeRentalItemInfoFromInvenBuf @ 0x8677584

/* CUser::removeRentalItemInfoFromInvenBuf(SIG_SAVE_INVENTORY*, int) */

undefined4 __thiscall
CUser::removeRentalItemInfoFromInvenBuf(CUser *this,SIG_SAVE_INVENTORY *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CInventory *pCVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int local_2c;
  bool local_25;
  __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
  local_24 [4];
  vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
  local_20 [12];
  __normal_iterator local_14 [4];
  int local_10;
  
  if (param_1 == (SIG_SAVE_INVENTORY *)0x0) {
    uVar6 = 0;
  }
  else {
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    vector(local_20);
                    /* try { // try from 086775bb to 08677731 has its CatchHandler @ 08677739 */
    cVar2 = getCurrentCharacRentalInfo(this,(vector *)local_20,param_2);
    if (cVar2 == '\x01') {
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::begin();
      while( true ) {
        std::
        vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
        end();
        bVar3 = __gnu_cxx::operator!=(local_24,local_14);
        if (!bVar3) break;
        local_10 = __gnu_cxx::
                   __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
                   ::operator*(local_24);
        local_25 = false;
        local_2c = 0;
        iVar1 = *(int *)(local_10 + 4);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
        cVar2 = CInventory::CheckExistItemInInventoryOrEquipment(pCVar4,iVar1,&local_2c,&local_25);
        if (cVar2 == '\x01') {
          *(bool *)(local_10 + 10) = local_25;
          if (local_25 == false) {
            Inven_Item::reset((Inven_Item *)(param_1 + local_2c * 0x3d + 0x557));
          }
          else {
            local_2c = local_2c + -10;
            Inven_Item::reset((Inven_Item *)(param_1 + local_2c * 0x3d + 0x19));
          }
        }
        else {
          uVar6 = *(undefined4 *)(local_10 + 4);
          uVar5 = get_acc_id(this);
          LogManager::logFormat
                    (1,"user.cpp",
                     "bool CUser::removeRentalItemInfoFromInvenBuf(SIG_SAVE_INVENTORY*, int)",0x6d15
                     ,
                     "Rent error. CUser::removeRentalItemInfoFromInvenBuf return false. Acc(%d), itemIndex(%d)"
                     ,uVar5,uVar6);
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
          CInventory::ShowAllExistItemsForErrorCheck(pCVar4);
        }
        __gnu_cxx::
        __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
        ::operator++(local_24);
      }
      setCurrentCharacRentalInfo(this,(vector *)local_20,param_2);
      uVar6 = 1;
    }
    else {
      uVar6 = 0;
    }
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    ~vector(local_20);
  }
  return uVar6;
}
```
