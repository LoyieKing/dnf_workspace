# removeRentalItemInfoFromInvenLoadBuf

`_ZN5CUser36removeRentalItemInfoFromInvenLoadBufEP18SIG_LOAD_INVENTORYi`

`CUser::removeRentalItemInfoFromInvenLoadBuf(SIG_LOAD_INVENTORY*, int)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867776c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867776c  _ZN5CUser36removeRentalItemInfoFromInvenLoadBufEP18SIG_LOAD_INVENTORYi
#           CUser::removeRentalItemInfoFromInvenLoadBuf(SIG_LOAD_INVENTORY*, int)
# range [0x0867776c, 0x0867794b]
0867776c +0x000:  push   %ebp
0867776d +0x001:  mov    %esp,%ebp
0867776f +0x003:  push   %esi
08677770 +0x004:  push   %ebx
08677771 +0x005:  sub    $0x40,%esp
08677774 +0x008:  cmpl   $0x0,0xc(%ebp)
08677778 +0x00c:  jne    08677784 <+0x18>
0867777a +0x00e:  mov    $0x0,%ebx
0867777f +0x013:  jmp    08677940 <+0x1d4>
08677784 +0x018:  lea    -0x1c(%ebp),%eax
08677787 +0x01b:  mov    %eax,(%esp)
0867778a +0x01e:  call   08236134 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7de
0867778f +0x023:  mov    0x10(%ebp),%eax
08677792 +0x026:  mov    %eax,0x8(%esp)
08677796 +0x02a:  lea    -0x1c(%ebp),%eax
08677799 +0x02d:  mov    %eax,0x4(%esp)
0867779d +0x031:  mov    0x8(%ebp),%eax
086777a0 +0x034:  mov    %eax,(%esp)
086777a3 +0x037:  call   086773ea <_ZN5CUser26getCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>  ; CUser::getCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
086777a8 +0x03c:  xor    $0x1,%eax
086777ab +0x03f:  test   %al,%al
086777ad +0x041:  je     086777b9 <+0x4d>
086777af +0x043:  mov    $0x0,%ebx
086777b4 +0x048:  jmp    08677935 <+0x1c9>
086777b9 +0x04d:  lea    -0x20(%ebp),%eax
086777bc +0x050:  lea    -0x1c(%ebp),%edx
086777bf +0x053:  mov    %edx,0x4(%esp)
086777c3 +0x057:  mov    %eax,(%esp)
086777c6 +0x05a:  call   082375a6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc50>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc50
086777cb +0x05f:  sub    $0x4,%esp
086777ce +0x062:  jmp    086778cb <+0x15f>
086777d3 +0x067:  lea    -0x20(%ebp),%eax
086777d6 +0x06a:  mov    %eax,(%esp)
086777d9 +0x06d:  call   08271e4e <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x474>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x474
086777de +0x072:  mov    %eax,-0xc(%ebp)
086777e1 +0x075:  movb   $0x0,-0x21(%ebp)
086777e5 +0x079:  movl   $0x0,-0x28(%ebp)
086777ec +0x080:  mov    -0xc(%ebp),%eax
086777ef +0x083:  mov    0x4(%eax),%eax
086777f2 +0x086:  mov    %eax,%ebx
086777f4 +0x088:  mov    0x8(%ebp),%eax
086777f7 +0x08b:  mov    %eax,(%esp)
086777fa +0x08e:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
086777ff +0x093:  lea    -0x21(%ebp),%edx
08677802 +0x096:  mov    %edx,0xc(%esp)
08677806 +0x09a:  lea    -0x28(%ebp),%edx
08677809 +0x09d:  mov    %edx,0x8(%esp)
0867780d +0x0a1:  mov    %ebx,0x4(%esp)
08677811 +0x0a5:  mov    %eax,(%esp)
08677814 +0x0a8:  call   085052be <_ZNK10CInventory36CheckExistItemInInventoryOrEquipmentEiRiRb>  ; CInventory::CheckExistItemInInventoryOrEquipment(int, int&, bool&) const
08677819 +0x0ad:  xor    $0x1,%eax
0867781c +0x0b0:  test   %al,%al
0867781e +0x0b2:  je     0867787a <+0x10e>
08677820 +0x0b4:  mov    -0xc(%ebp),%eax
08677823 +0x0b7:  mov    0x4(%eax),%ebx
08677826 +0x0ba:  mov    0x8(%ebp),%eax
08677829 +0x0bd:  mov    %eax,(%esp)
0867782c +0x0c0:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
08677831 +0x0c5:  mov    %ebx,0x18(%esp)
08677835 +0x0c9:  mov    %eax,0x14(%esp)
08677839 +0x0cd:  movl   $"Rent error. CUser::removeRentalItemInfoFromInvenLoadBuf return false. Acc(%d), itemIndex(%d)",0x10(%esp)
08677841 +0x0d5:  movl   $0x6d54,0xc(%esp)
08677849 +0x0dd:  movl   $&_ZZN5CUser36removeRentalItemInfoFromInvenLoadBufEP18SIG_LOAD_INVENTORYiE19__PRETTY_FUNCTION__,0x8(%esp)
08677851 +0x0e5:  movl   $"user.cpp",0x4(%esp)
08677859 +0x0ed:  movl   $0x1,(%esp)
08677860 +0x0f4:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
08677865 +0x0f9:  mov    0x8(%ebp),%eax
08677868 +0x0fc:  mov    %eax,(%esp)
0867786b +0x0ff:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08677870 +0x104:  mov    %eax,(%esp)
08677873 +0x107:  call   0850542a <_ZNK10CInventory30ShowAllExistItemsForErrorCheckEv>  ; CInventory::ShowAllExistItemsForErrorCheck() const
08677878 +0x10c:  jmp    086778c0 <+0x154>
0867787a +0x10e:  movzbl -0x21(%ebp),%edx
0867787e +0x112:  mov    -0xc(%ebp),%eax
08677881 +0x115:  mov    %dl,0xa(%eax)
08677884 +0x118:  movzbl -0x21(%ebp),%eax
08677888 +0x11c:  test   %al,%al
0867788a +0x11e:  je     086778a7 <+0x13b>
0867788c +0x120:  mov    -0x28(%ebp),%eax
0867788f +0x123:  imul   $0x3d,%eax,%eax
08677892 +0x126:  add    $0xa3a0,%eax
08677897 +0x12b:  add    0xc(%ebp),%eax
0867789a +0x12e:  add    $0x1,%eax
0867789d +0x131:  mov    %eax,(%esp)
086778a0 +0x134:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
086778a5 +0x139:  jmp    086778c0 <+0x154>
086778a7 +0x13b:  mov    -0x28(%ebp),%eax
086778aa +0x13e:  imul   $0x3d,%eax,%eax
086778ad +0x141:  add    $0x5940,%eax
086778b2 +0x146:  add    0xc(%ebp),%eax
086778b5 +0x149:  add    $0x9,%eax
086778b8 +0x14c:  mov    %eax,(%esp)
086778bb +0x14f:  call   080cb7d8 <_GLOBAL__I__ZN10BingoEventC2Ev+0x625>  ; global constructors keyed to BingoEvent::BingoEvent()+0x625
086778c0 +0x154:  lea    -0x20(%ebp),%eax
086778c3 +0x157:  mov    %eax,(%esp)
086778c6 +0x15a:  call   08271e38 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x45e>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x45e
086778cb +0x15f:  lea    -0x10(%ebp),%eax
086778ce +0x162:  lea    -0x1c(%ebp),%edx
086778d1 +0x165:  mov    %edx,0x4(%esp)
086778d5 +0x169:  mov    %eax,(%esp)
086778d8 +0x16c:  call   082375e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc8e
086778dd +0x171:  sub    $0x4,%esp
086778e0 +0x174:  lea    -0x10(%ebp),%eax
086778e3 +0x177:  mov    %eax,0x4(%esp)
086778e7 +0x17b:  lea    -0x20(%ebp),%eax
086778ea +0x17e:  mov    %eax,(%esp)
086778ed +0x181:  call   08271e0b <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x431>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x431
086778f2 +0x186:  test   %al,%al
086778f4 +0x188:  jne    086777d3 <+0x67>
086778fa +0x18e:  mov    0x10(%ebp),%eax
086778fd +0x191:  mov    %eax,0x8(%esp)
08677901 +0x195:  lea    -0x1c(%ebp),%eax
08677904 +0x198:  mov    %eax,0x4(%esp)
08677908 +0x19c:  mov    0x8(%ebp),%eax
0867790b +0x19f:  mov    %eax,(%esp)
0867790e +0x1a2:  call   08677516 <_ZN5CUser26setCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>  ; CUser::setCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
08677913 +0x1a7:  mov    $0x1,%ebx
08677918 +0x1ac:  jmp    08677935 <+0x1c9>
0867791a +0x1ae:  mov    %edx,%ebx
0867791c +0x1b0:  mov    %eax,%esi
0867791e +0x1b2:  lea    -0x1c(%ebp),%eax
08677921 +0x1b5:  mov    %eax,(%esp)
08677924 +0x1b8:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
08677929 +0x1bd:  mov    %esi,%eax
0867792b +0x1bf:  mov    %ebx,%edx
0867792d +0x1c1:  mov    %eax,(%esp)
08677930 +0x1c4:  call   08ae3750 <_Unwind_Resume>
08677935 +0x1c9:  lea    -0x1c(%ebp),%eax
08677938 +0x1cc:  mov    %eax,(%esp)
0867793b +0x1cf:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
08677940 +0x1d4:  mov    %ebx,%eax
08677942 +0x1d6:  lea    -0x8(%ebp),%esp
08677945 +0x1d9:  add    $0x0,%esp
08677948 +0x1dc:  pop    %ebx
08677949 +0x1dd:  pop    %esi
0867794a +0x1de:  pop    %ebp
0867794b +0x1df:  ret
```

## 反编译 C

```c
// CUser::removeRentalItemInfoFromInvenLoadBuf @ 0x867776c

/* CUser::removeRentalItemInfoFromInvenLoadBuf(SIG_LOAD_INVENTORY*, int) */

undefined4 __thiscall
CUser::removeRentalItemInfoFromInvenLoadBuf(CUser *this,SIG_LOAD_INVENTORY *param_1,int param_2)

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
  
  if (param_1 == (SIG_LOAD_INVENTORY *)0x0) {
    uVar6 = 0;
  }
  else {
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    vector(local_20);
                    /* try { // try from 086777a3 to 08677912 has its CatchHandler @ 0867791a */
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
            Inven_Item::reset((Inven_Item *)(param_1 + local_2c * 0x3d + 0x5949));
          }
          else {
            Inven_Item::reset((Inven_Item *)(param_1 + local_2c * 0x3d + 0xa3a1));
          }
        }
        else {
          uVar6 = *(undefined4 *)(local_10 + 4);
          uVar5 = get_acc_id(this);
          LogManager::logFormat
                    (1,"user.cpp",
                     "bool CUser::removeRentalItemInfoFromInvenLoadBuf(SIG_LOAD_INVENTORY*, int)",
                     0x6d54,
                     "Rent error. CUser::removeRentalItemInfoFromInvenLoadBuf return false. Acc(%d), itemIndex(%d)"
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
