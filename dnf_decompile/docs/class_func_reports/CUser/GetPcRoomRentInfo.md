# GetPcRoomRentInfo

`_ZN5CUser17GetPcRoomRentInfoEP26SIG_SAVE_PC_ROOM_RENT_ITEM`

`CUser::GetPcRoomRentInfo(SIG_SAVE_PC_ROOM_RENT_ITEM*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x086769ea` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 086769ea  _ZN5CUser17GetPcRoomRentInfoEP26SIG_SAVE_PC_ROOM_RENT_ITEM
#           CUser::GetPcRoomRentInfo(SIG_SAVE_PC_ROOM_RENT_ITEM*)
# range [0x086769ea, 0x08676beb]
086769ea +0x000:  push   %ebp
086769eb +0x001:  mov    %esp,%ebp
086769ed +0x003:  push   %esi
086769ee +0x004:  push   %ebx
086769ef +0x005:  sub    $0x40,%esp
086769f2 +0x008:  cmpl   $0x0,0xc(%ebp)
086769f6 +0x00c:  jne    08676a02 <+0x18>
086769f8 +0x00e:  mov    $0x0,%ebx
086769fd +0x013:  jmp    08676be0 <+0x1f6>
08676a02 +0x018:  mov    0xc(%ebp),%eax
08676a05 +0x01b:  mov    %eax,(%esp)
08676a08 +0x01e:  call   08694c9a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x14ef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x14ef
08676a0d +0x023:  mov    0x8(%ebp),%eax
08676a10 +0x026:  movzbl 0x6ef90(%eax),%eax
08676a17 +0x02d:  xor    $0x1,%eax
08676a1a +0x030:  test   %al,%al
08676a1c +0x032:  je     08676a28 <+0x3e>
08676a1e +0x034:  mov    $0x1,%ebx
08676a23 +0x039:  jmp    08676be0 <+0x1f6>
08676a28 +0x03e:  lea    -0x24(%ebp),%eax
08676a2b +0x041:  mov    %eax,(%esp)
08676a2e +0x044:  call   08236134 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7de
08676a33 +0x049:  movl   $0x1,0x8(%esp)
08676a3b +0x051:  lea    -0x24(%ebp),%eax
08676a3e +0x054:  mov    %eax,0x4(%esp)
08676a42 +0x058:  mov    0x8(%ebp),%eax
08676a45 +0x05b:  mov    %eax,(%esp)
08676a48 +0x05e:  call   086773ea <_ZN5CUser26getCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>  ; CUser::getCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
08676a4d +0x063:  xor    $0x1,%eax
08676a50 +0x066:  test   %al,%al
08676a52 +0x068:  je     08676a5e <+0x74>
08676a54 +0x06a:  mov    $0x1,%ebx
08676a59 +0x06f:  jmp    08676bd5 <+0x1eb>
08676a5e +0x074:  movl   $0x0,-0x10(%ebp)
08676a65 +0x07b:  lea    -0x18(%ebp),%eax
08676a68 +0x07e:  lea    -0x24(%ebp),%edx
08676a6b +0x081:  mov    %edx,0x4(%esp)
08676a6f +0x085:  mov    %eax,(%esp)
08676a72 +0x088:  call   082375a6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc50>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc50
08676a77 +0x08d:  sub    $0x4,%esp
08676a7a +0x090:  lea    -0x18(%ebp),%eax
08676a7d +0x093:  mov    %eax,0x4(%esp)
08676a81 +0x097:  lea    -0x28(%ebp),%eax
08676a84 +0x09a:  mov    %eax,(%esp)
08676a87 +0x09d:  call   082375ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc74>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc74
08676a8c +0x0a2:  jmp    08676b84 <+0x19a>
08676a91 +0x0a7:  lea    -0x28(%ebp),%eax
08676a94 +0x0aa:  mov    %eax,(%esp)
08676a97 +0x0ad:  call   0823764c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xccf6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xccf6
08676a9c +0x0b2:  mov    %eax,-0xc(%ebp)
08676a9f +0x0b5:  movb   $0x0,-0x29(%ebp)
08676aa3 +0x0b9:  movl   $0x0,-0x30(%ebp)
08676aaa +0x0c0:  mov    -0xc(%ebp),%eax
08676aad +0x0c3:  mov    0x4(%eax),%eax
08676ab0 +0x0c6:  mov    %eax,%ebx
08676ab2 +0x0c8:  mov    0x8(%ebp),%eax
08676ab5 +0x0cb:  mov    %eax,(%esp)
08676ab8 +0x0ce:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08676abd +0x0d3:  lea    -0x29(%ebp),%edx
08676ac0 +0x0d6:  mov    %edx,0xc(%esp)
08676ac4 +0x0da:  lea    -0x30(%ebp),%edx
08676ac7 +0x0dd:  mov    %edx,0x8(%esp)
08676acb +0x0e1:  mov    %ebx,0x4(%esp)
08676acf +0x0e5:  mov    %eax,(%esp)
08676ad2 +0x0e8:  call   085052be <_ZNK10CInventory36CheckExistItemInInventoryOrEquipmentEiRiRb>  ; CInventory::CheckExistItemInInventoryOrEquipment(int, int&, bool&) const
08676ad7 +0x0ed:  xor    $0x1,%eax
08676ada +0x0f0:  test   %al,%al
08676adc +0x0f2:  jne    08676b78 <+0x18e>
08676ae2 +0x0f8:  mov    -0x10(%ebp),%edx
08676ae5 +0x0fb:  mov    -0xc(%ebp),%eax
08676ae8 +0x0fe:  mov    0x4(%eax),%ebx
08676aeb +0x101:  mov    0xc(%ebp),%ecx
08676aee +0x104:  mov    %edx,%eax
08676af0 +0x106:  add    %eax,%eax
08676af2 +0x108:  add    %edx,%eax
08676af4 +0x10a:  shl    $0x2,%eax
08676af7 +0x10d:  mov    %ebx,(%eax,%ecx,1)
08676afa +0x110:  mov    -0x10(%ebp),%edx
08676afd +0x113:  mov    -0xc(%ebp),%eax
08676b00 +0x116:  movzbl 0x8(%eax),%ebx
08676b04 +0x11a:  mov    0xc(%ebp),%ecx
08676b07 +0x11d:  mov    %edx,%eax
08676b09 +0x11f:  add    %eax,%eax
08676b0b +0x121:  add    %edx,%eax
08676b0d +0x123:  shl    $0x2,%eax
08676b10 +0x126:  mov    %bl,0x4(%eax,%ecx,1)
08676b14 +0x12a:  mov    -0x10(%ebp),%edx
08676b17 +0x12d:  mov    -0xc(%ebp),%eax
08676b1a +0x130:  movzbl 0x9(%eax),%ebx
08676b1e +0x134:  mov    0xc(%ebp),%ecx
08676b21 +0x137:  mov    %edx,%eax
08676b23 +0x139:  add    %eax,%eax
08676b25 +0x13b:  add    %edx,%eax
08676b27 +0x13d:  shl    $0x2,%eax
08676b2a +0x140:  mov    %bl,0x5(%eax,%ecx,1)
08676b2e +0x144:  mov    -0x10(%ebp),%edx
08676b31 +0x147:  movzbl -0x29(%ebp),%ebx
08676b35 +0x14b:  mov    0xc(%ebp),%ecx
08676b38 +0x14e:  mov    %edx,%eax
08676b3a +0x150:  add    %eax,%eax
08676b3c +0x152:  add    %edx,%eax
08676b3e +0x154:  shl    $0x2,%eax
08676b41 +0x157:  mov    %bl,0x6(%eax,%ecx,1)
08676b45 +0x15b:  mov    -0x10(%ebp),%edx
08676b48 +0x15e:  mov    -0xc(%ebp),%eax
08676b4b +0x161:  mov    0xc(%eax),%ecx
08676b4e +0x164:  mov    0xc(%ebp),%ebx
08676b51 +0x167:  mov    %edx,%eax
08676b53 +0x169:  add    %eax,%eax
08676b55 +0x16b:  add    %edx,%eax
08676b57 +0x16d:  shl    $0x2,%eax
08676b5a +0x170:  lea    (%ebx,%eax,1),%eax
08676b5d +0x173:  add    $0x8,%eax
08676b60 +0x176:  mov    %ecx,(%eax)
08676b62 +0x178:  addl   $0x1,-0x10(%ebp)
08676b66 +0x17c:  cmpl   $0x1,-0x10(%ebp)
08676b6a +0x180:  setg   %al
08676b6d +0x183:  test   %al,%al
08676b6f +0x185:  je     08676b79 <+0x18f>
08676b71 +0x187:  mov    $0x0,%ebx
08676b76 +0x18c:  jmp    08676bd5 <+0x1eb>
08676b78 +0x18e:  nop
08676b79 +0x18f:  lea    -0x28(%ebp),%eax
08676b7c +0x192:  mov    %eax,(%esp)
08676b7f +0x195:  call   08237636 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcce0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcce0
08676b84 +0x19a:  lea    -0x14(%ebp),%eax
08676b87 +0x19d:  lea    -0x24(%ebp),%edx
08676b8a +0x1a0:  mov    %edx,0x4(%esp)
08676b8e +0x1a4:  mov    %eax,(%esp)
08676b91 +0x1a7:  call   082375e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc8e
08676b96 +0x1ac:  sub    $0x4,%esp
08676b99 +0x1af:  lea    -0x14(%ebp),%eax
08676b9c +0x1b2:  mov    %eax,0x4(%esp)
08676ba0 +0x1b6:  lea    -0x28(%ebp),%eax
08676ba3 +0x1b9:  mov    %eax,(%esp)
08676ba6 +0x1bc:  call   0823760a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xccb4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xccb4
08676bab +0x1c1:  test   %al,%al
08676bad +0x1c3:  jne    08676a91 <+0xa7>
08676bb3 +0x1c9:  mov    $0x1,%ebx
08676bb8 +0x1ce:  jmp    08676bd5 <+0x1eb>
08676bba +0x1d0:  mov    %edx,%ebx
08676bbc +0x1d2:  mov    %eax,%esi
08676bbe +0x1d4:  lea    -0x24(%ebp),%eax
08676bc1 +0x1d7:  mov    %eax,(%esp)
08676bc4 +0x1da:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
08676bc9 +0x1df:  mov    %esi,%eax
08676bcb +0x1e1:  mov    %ebx,%edx
08676bcd +0x1e3:  mov    %eax,(%esp)
08676bd0 +0x1e6:  call   08ae3750 <_Unwind_Resume>
08676bd5 +0x1eb:  lea    -0x24(%ebp),%eax
08676bd8 +0x1ee:  mov    %eax,(%esp)
08676bdb +0x1f1:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
08676be0 +0x1f6:  mov    %ebx,%eax
08676be2 +0x1f8:  lea    -0x8(%ebp),%esp
08676be5 +0x1fb:  add    $0x0,%esp
08676be8 +0x1fe:  pop    %ebx
08676be9 +0x1ff:  pop    %esi
08676bea +0x200:  pop    %ebp
08676beb +0x201:  ret
```

## 反编译 C

```c
// CUser::GetPcRoomRentInfo @ 0x86769ea

/* CUser::GetPcRoomRentInfo(SIG_SAVE_PC_ROOM_RENT_ITEM*) */

undefined4 __thiscall CUser::GetPcRoomRentInfo(CUser *this,SIG_SAVE_PC_ROOM_RENT_ITEM *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CInventory *this_00;
  undefined4 uVar4;
  int local_34;
  SIG_SAVE_PC_ROOM_RENT_ITEM local_2d;
  __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
  local_2c [4];
  vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
  local_28 [12];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  int local_10;
  
  if (param_1 == (SIG_SAVE_PC_ROOM_RENT_ITEM *)0x0) {
    uVar4 = 0;
  }
  else {
    SIG_SAVE_PC_ROOM_RENT_ITEM::clear(param_1);
    if (this[0x6ef90] == (CUser)0x1) {
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::vector(local_28);
                    /* try { // try from 08676a48 to 08676baa has its CatchHandler @ 08676bba */
      cVar2 = getCurrentCharacRentalInfo(this,(vector *)local_28,1);
      if (cVar2 == '\x01') {
        local_14 = 0;
        std::
        vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
        begin();
        __gnu_cxx::
        __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
        ::__normal_iterator<InstanceRentalSystem::RentalInfo*>(local_2c,local_1c);
        while( true ) {
          std::
          vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
          ::end();
          bVar3 = __gnu_cxx::operator!=(local_2c,local_18);
          if (!bVar3) break;
          local_10 = __gnu_cxx::
                     __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
                     ::operator*(local_2c);
          local_2d = (SIG_SAVE_PC_ROOM_RENT_ITEM)0x0;
          local_34 = 0;
          iVar1 = *(int *)(local_10 + 4);
          this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
          cVar2 = CInventory::CheckExistItemInInventoryOrEquipment
                            (this_00,iVar1,&local_34,(bool *)&local_2d);
          if (cVar2 == '\x01') {
            *(undefined4 *)(param_1 + local_14 * 0xc) = *(undefined4 *)(local_10 + 4);
            param_1[local_14 * 0xc + 4] = *(SIG_SAVE_PC_ROOM_RENT_ITEM *)(local_10 + 8);
            param_1[local_14 * 0xc + 5] = *(SIG_SAVE_PC_ROOM_RENT_ITEM *)(local_10 + 9);
            param_1[local_14 * 0xc + 6] = local_2d;
            *(undefined4 *)(param_1 + local_14 * 0xc + 8) = *(undefined4 *)(local_10 + 0xc);
            local_14 = local_14 + 1;
            if (1 < local_14) {
              uVar4 = 0;
              goto LAB_08676bd5;
            }
          }
          __gnu_cxx::
          __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
          ::operator++(local_2c);
        }
        uVar4 = 1;
      }
      else {
        uVar4 = 1;
      }
LAB_08676bd5:
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::~vector(local_28);
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4;
}
```
