# GetDimensionRentInfo

`_ZN5CUser20GetDimensionRentInfoEP28SIG_SAVE_DIMENSION_RENT_ITEM`

`CUser::GetDimensionRentInfo(SIG_SAVE_DIMENSION_RENT_ITEM*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08676bec` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08676bec  _ZN5CUser20GetDimensionRentInfoEP28SIG_SAVE_DIMENSION_RENT_ITEM
#           CUser::GetDimensionRentInfo(SIG_SAVE_DIMENSION_RENT_ITEM*)
# range [0x08676bec, 0x08676db9]
08676bec +0x000:  push   %ebp
08676bed +0x001:  mov    %esp,%ebp
08676bef +0x003:  push   %esi
08676bf0 +0x004:  push   %ebx
08676bf1 +0x005:  sub    $0x40,%esp
08676bf4 +0x008:  cmpl   $0x0,0xc(%ebp)
08676bf8 +0x00c:  jne    08676c04 <+0x18>
08676bfa +0x00e:  mov    $0x0,%ebx
08676bff +0x013:  jmp    08676dae <+0x1c2>
08676c04 +0x018:  mov    0xc(%ebp),%eax
08676c07 +0x01b:  mov    %eax,(%esp)
08676c0a +0x01e:  call   08694cd2 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x1527>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x1527
08676c0f +0x023:  mov    0x8(%ebp),%eax
08676c12 +0x026:  movzbl 0x6ef90(%eax),%eax
08676c19 +0x02d:  xor    $0x1,%eax
08676c1c +0x030:  test   %al,%al
08676c1e +0x032:  je     08676c2a <+0x3e>
08676c20 +0x034:  mov    $0x1,%ebx
08676c25 +0x039:  jmp    08676dae <+0x1c2>
08676c2a +0x03e:  lea    -0x24(%ebp),%eax
08676c2d +0x041:  mov    %eax,(%esp)
08676c30 +0x044:  call   08236134 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7de
08676c35 +0x049:  movl   $0x2,0x8(%esp)
08676c3d +0x051:  lea    -0x24(%ebp),%eax
08676c40 +0x054:  mov    %eax,0x4(%esp)
08676c44 +0x058:  mov    0x8(%ebp),%eax
08676c47 +0x05b:  mov    %eax,(%esp)
08676c4a +0x05e:  call   086773ea <_ZN5CUser26getCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>  ; CUser::getCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
08676c4f +0x063:  xor    $0x1,%eax
08676c52 +0x066:  test   %al,%al
08676c54 +0x068:  je     08676c60 <+0x74>
08676c56 +0x06a:  mov    $0x1,%ebx
08676c5b +0x06f:  jmp    08676da3 <+0x1b7>
08676c60 +0x074:  movl   $0x0,-0x10(%ebp)
08676c67 +0x07b:  lea    -0x18(%ebp),%eax
08676c6a +0x07e:  lea    -0x24(%ebp),%edx
08676c6d +0x081:  mov    %edx,0x4(%esp)
08676c71 +0x085:  mov    %eax,(%esp)
08676c74 +0x088:  call   082375a6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc50>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc50
08676c79 +0x08d:  sub    $0x4,%esp
08676c7c +0x090:  lea    -0x18(%ebp),%eax
08676c7f +0x093:  mov    %eax,0x4(%esp)
08676c83 +0x097:  lea    -0x28(%ebp),%eax
08676c86 +0x09a:  mov    %eax,(%esp)
08676c89 +0x09d:  call   082375ca <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc74>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc74
08676c8e +0x0a2:  jmp    08676d52 <+0x166>
08676c93 +0x0a7:  lea    -0x28(%ebp),%eax
08676c96 +0x0aa:  mov    %eax,(%esp)
08676c99 +0x0ad:  call   0823764c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xccf6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xccf6
08676c9e +0x0b2:  mov    %eax,-0xc(%ebp)
08676ca1 +0x0b5:  movb   $0x0,-0x29(%ebp)
08676ca5 +0x0b9:  movl   $0x0,-0x30(%ebp)
08676cac +0x0c0:  mov    -0xc(%ebp),%eax
08676caf +0x0c3:  mov    0x4(%eax),%eax
08676cb2 +0x0c6:  mov    %eax,%ebx
08676cb4 +0x0c8:  mov    0x8(%ebp),%eax
08676cb7 +0x0cb:  mov    %eax,(%esp)
08676cba +0x0ce:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08676cbf +0x0d3:  lea    -0x29(%ebp),%edx
08676cc2 +0x0d6:  mov    %edx,0xc(%esp)
08676cc6 +0x0da:  lea    -0x30(%ebp),%edx
08676cc9 +0x0dd:  mov    %edx,0x8(%esp)
08676ccd +0x0e1:  mov    %ebx,0x4(%esp)
08676cd1 +0x0e5:  mov    %eax,(%esp)
08676cd4 +0x0e8:  call   085052be <_ZNK10CInventory36CheckExistItemInInventoryOrEquipmentEiRiRb>  ; CInventory::CheckExistItemInInventoryOrEquipment(int, int&, bool&) const
08676cd9 +0x0ed:  xor    $0x1,%eax
08676cdc +0x0f0:  test   %al,%al
08676cde +0x0f2:  jne    08676d46 <+0x15a>
08676ce0 +0x0f4:  mov    -0x10(%ebp),%edx
08676ce3 +0x0f7:  mov    -0xc(%ebp),%eax
08676ce6 +0x0fa:  mov    0x4(%eax),%ecx
08676ce9 +0x0fd:  mov    0xc(%ebp),%eax
08676cec +0x100:  mov    %ecx,(%eax,%edx,8)
08676cef +0x103:  mov    -0x10(%ebp),%edx
08676cf2 +0x106:  mov    -0xc(%ebp),%eax
08676cf5 +0x109:  movzbl 0x8(%eax),%ecx
08676cf9 +0x10d:  mov    0xc(%ebp),%eax
08676cfc +0x110:  mov    %cl,0x4(%eax,%edx,8)
08676d00 +0x114:  mov    -0x10(%ebp),%edx
08676d03 +0x117:  mov    -0xc(%ebp),%eax
08676d06 +0x11a:  movzbl 0x9(%eax),%ecx
08676d0a +0x11e:  mov    0xc(%ebp),%eax
08676d0d +0x121:  mov    %cl,0x5(%eax,%edx,8)
08676d11 +0x125:  mov    -0x10(%ebp),%edx
08676d14 +0x128:  movzbl -0x29(%ebp),%ecx
08676d18 +0x12c:  mov    0xc(%ebp),%eax
08676d1b +0x12f:  mov    %cl,0x6(%eax,%edx,8)
08676d1f +0x133:  mov    -0x10(%ebp),%edx
08676d22 +0x136:  mov    -0xc(%ebp),%eax
08676d25 +0x139:  movzbl 0xb(%eax),%ecx
08676d29 +0x13d:  mov    0xc(%ebp),%eax
08676d2c +0x140:  mov    %cl,0x7(%eax,%edx,8)
08676d30 +0x144:  addl   $0x1,-0x10(%ebp)
08676d34 +0x148:  cmpl   $0xb,-0x10(%ebp)
08676d38 +0x14c:  setg   %al
08676d3b +0x14f:  test   %al,%al
08676d3d +0x151:  je     08676d47 <+0x15b>
08676d3f +0x153:  mov    $0x0,%ebx
08676d44 +0x158:  jmp    08676da3 <+0x1b7>
08676d46 +0x15a:  nop
08676d47 +0x15b:  lea    -0x28(%ebp),%eax
08676d4a +0x15e:  mov    %eax,(%esp)
08676d4d +0x161:  call   08237636 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcce0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcce0
08676d52 +0x166:  lea    -0x14(%ebp),%eax
08676d55 +0x169:  lea    -0x24(%ebp),%edx
08676d58 +0x16c:  mov    %edx,0x4(%esp)
08676d5c +0x170:  mov    %eax,(%esp)
08676d5f +0x173:  call   082375e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc8e
08676d64 +0x178:  sub    $0x4,%esp
08676d67 +0x17b:  lea    -0x14(%ebp),%eax
08676d6a +0x17e:  mov    %eax,0x4(%esp)
08676d6e +0x182:  lea    -0x28(%ebp),%eax
08676d71 +0x185:  mov    %eax,(%esp)
08676d74 +0x188:  call   0823760a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xccb4>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xccb4
08676d79 +0x18d:  test   %al,%al
08676d7b +0x18f:  jne    08676c93 <+0xa7>
08676d81 +0x195:  mov    $0x1,%ebx
08676d86 +0x19a:  jmp    08676da3 <+0x1b7>
08676d88 +0x19c:  mov    %edx,%ebx
08676d8a +0x19e:  mov    %eax,%esi
08676d8c +0x1a0:  lea    -0x24(%ebp),%eax
08676d8f +0x1a3:  mov    %eax,(%esp)
08676d92 +0x1a6:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
08676d97 +0x1ab:  mov    %esi,%eax
08676d99 +0x1ad:  mov    %ebx,%edx
08676d9b +0x1af:  mov    %eax,(%esp)
08676d9e +0x1b2:  call   08ae3750 <_Unwind_Resume>
08676da3 +0x1b7:  lea    -0x24(%ebp),%eax
08676da6 +0x1ba:  mov    %eax,(%esp)
08676da9 +0x1bd:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
08676dae +0x1c2:  mov    %ebx,%eax
08676db0 +0x1c4:  lea    -0x8(%ebp),%esp
08676db3 +0x1c7:  add    $0x0,%esp
08676db6 +0x1ca:  pop    %ebx
08676db7 +0x1cb:  pop    %esi
08676db8 +0x1cc:  pop    %ebp
08676db9 +0x1cd:  ret
```

## 反编译 C

```c
// CUser::GetDimensionRentInfo @ 0x8676bec

/* CUser::GetDimensionRentInfo(SIG_SAVE_DIMENSION_RENT_ITEM*) */

undefined4 __thiscall CUser::GetDimensionRentInfo(CUser *this,SIG_SAVE_DIMENSION_RENT_ITEM *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CInventory *this_00;
  undefined4 uVar4;
  int local_34;
  SIG_SAVE_DIMENSION_RENT_ITEM local_2d;
  __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
  local_2c [4];
  vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
  local_28 [12];
  __normal_iterator local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  int local_10;
  
  if (param_1 == (SIG_SAVE_DIMENSION_RENT_ITEM *)0x0) {
    uVar4 = 0;
  }
  else {
    SIG_SAVE_DIMENSION_RENT_ITEM::clear(param_1);
    if (this[0x6ef90] == (CUser)0x1) {
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::vector(local_28);
                    /* try { // try from 08676c4a to 08676d78 has its CatchHandler @ 08676d88 */
      cVar2 = getCurrentCharacRentalInfo(this,(vector *)local_28,2);
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
          local_2d = (SIG_SAVE_DIMENSION_RENT_ITEM)0x0;
          local_34 = 0;
          iVar1 = *(int *)(local_10 + 4);
          this_00 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)this);
          cVar2 = CInventory::CheckExistItemInInventoryOrEquipment
                            (this_00,iVar1,&local_34,(bool *)&local_2d);
          if (cVar2 == '\x01') {
            *(undefined4 *)(param_1 + local_14 * 8) = *(undefined4 *)(local_10 + 4);
            param_1[local_14 * 8 + 4] = *(SIG_SAVE_DIMENSION_RENT_ITEM *)(local_10 + 8);
            param_1[local_14 * 8 + 5] = *(SIG_SAVE_DIMENSION_RENT_ITEM *)(local_10 + 9);
            param_1[local_14 * 8 + 6] = local_2d;
            param_1[local_14 * 8 + 7] = *(SIG_SAVE_DIMENSION_RENT_ITEM *)(local_10 + 0xb);
            local_14 = local_14 + 1;
            if (0xb < local_14) {
              uVar4 = 0;
              goto LAB_08676da3;
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
LAB_08676da3:
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
