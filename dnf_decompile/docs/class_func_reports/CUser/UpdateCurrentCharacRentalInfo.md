# UpdateCurrentCharacRentalInfo

`_ZN5CUser29UpdateCurrentCharacRentalInfoERKN20InstanceRentalSystem10RentOutputEib`

`CUser::UpdateCurrentCharacRentalInfo(InstanceRentalSystem::RentOutput const&, int, bool)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x08676e3c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08676e3c  _ZN5CUser29UpdateCurrentCharacRentalInfoERKN20InstanceRentalSystem10RentOutputEib
#           CUser::UpdateCurrentCharacRentalInfo(InstanceRentalSystem::RentOutput const&, int, bool)
# range [0x08676e3c, 0x08677021]
08676e3c +0x000:  push   %ebp
08676e3d +0x001:  mov    %esp,%ebp
08676e3f +0x003:  sub    $0x68,%esp
08676e42 +0x006:  mov    0x14(%ebp),%eax
08676e45 +0x009:  mov    %al,-0x4c(%ebp)
08676e48 +0x00c:  mov    0x8(%ebp),%eax
08676e4b +0x00f:  mov    %eax,(%esp)
08676e4e +0x012:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08676e53 +0x017:  mov    (%eax),%eax
08676e55 +0x019:  mov    %eax,-0x34(%ebp)
08676e58 +0x01c:  mov    -0x34(%ebp),%eax
08676e5b +0x01f:  test   %eax,%eax
08676e5d +0x021:  je     0867701e <+0x1e2>
08676e63 +0x027:  mov    0x10(%ebp),%eax
08676e66 +0x02a:  mov    %eax,-0x30(%ebp)
08676e69 +0x02d:  mov    0x8(%ebp),%eax
08676e6c +0x030:  lea    0x6ef78(%eax),%edx
08676e72 +0x036:  lea    -0x30(%ebp),%eax
08676e75 +0x039:  mov    %eax,0x4(%esp)
08676e79 +0x03d:  mov    %edx,(%esp)
08676e7c +0x040:  call   0869b49a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7cef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7cef
08676e81 +0x045:  lea    -0x34(%ebp),%edx
08676e84 +0x048:  mov    %edx,0x4(%esp)
08676e88 +0x04c:  mov    %eax,(%esp)
08676e8b +0x04f:  call   0869b5fc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7e51>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7e51
08676e90 +0x054:  mov    %eax,-0x10(%ebp)
08676e93 +0x057:  cmpb   $0x0,-0x4c(%ebp)
08676e97 +0x05b:  je     08676ea4 <+0x68>
08676e99 +0x05d:  mov    -0x10(%ebp),%eax
08676e9c +0x060:  mov    %eax,(%esp)
08676e9f +0x063:  call   0869b748 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7f9d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7f9d
08676ea4 +0x068:  mov    0xc(%ebp),%eax
08676ea7 +0x06b:  lea    0xc(%eax),%edx
08676eaa +0x06e:  lea    -0x38(%ebp),%eax
08676ead +0x071:  mov    %edx,0x4(%esp)
08676eb1 +0x075:  mov    %eax,(%esp)
08676eb4 +0x078:  call   0869b764 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7fb9>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7fb9
08676eb9 +0x07d:  sub    $0x4,%esp
08676ebc +0x080:  jmp    08676f83 <+0x147>
08676ec1 +0x085:  lea    -0x38(%ebp),%eax
08676ec4 +0x088:  mov    %eax,(%esp)
08676ec7 +0x08b:  call   0869b7fe <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8053>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8053
08676ecc +0x090:  mov    %eax,-0xc(%ebp)
08676ecf +0x093:  mov    -0xc(%ebp),%eax
08676ed2 +0x096:  mov    0x4(%eax),%eax
08676ed5 +0x099:  mov    %eax,0x4(%esp)
08676ed9 +0x09d:  lea    -0x28(%ebp),%eax
08676edc +0x0a0:  mov    %eax,(%esp)
08676edf +0x0a3:  call   08697d2c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x4581>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x4581
08676ee4 +0x0a8:  lea    -0x24(%ebp),%eax
08676ee7 +0x0ab:  mov    -0x10(%ebp),%edx
08676eea +0x0ae:  mov    %edx,0x4(%esp)
08676eee +0x0b2:  mov    %eax,(%esp)
08676ef1 +0x0b5:  call   082375e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc8e
08676ef6 +0x0ba:  sub    $0x4,%esp
08676ef9 +0x0bd:  lea    -0x20(%ebp),%eax
08676efc +0x0c0:  mov    -0x10(%ebp),%edx
08676eff +0x0c3:  mov    %edx,0x4(%esp)
08676f03 +0x0c7:  mov    %eax,(%esp)
08676f06 +0x0ca:  call   082375a6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc50>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc50
08676f0b +0x0cf:  sub    $0x4,%esp
08676f0e +0x0d2:  lea    -0x3c(%ebp),%eax
08676f11 +0x0d5:  mov    -0x28(%ebp),%edx
08676f14 +0x0d8:  mov    %edx,0xc(%esp)
08676f18 +0x0dc:  mov    -0x24(%ebp),%edx
08676f1b +0x0df:  mov    %edx,0x8(%esp)
08676f1f +0x0e3:  mov    -0x20(%ebp),%edx
08676f22 +0x0e6:  mov    %edx,0x4(%esp)
08676f26 +0x0ea:  mov    %eax,(%esp)
08676f29 +0x0ed:  call   0869b808 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x805d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x805d
08676f2e +0x0f2:  sub    $0x4,%esp
08676f31 +0x0f5:  lea    -0x1c(%ebp),%eax
08676f34 +0x0f8:  mov    -0x10(%ebp),%edx
08676f37 +0x0fb:  mov    %edx,0x4(%esp)
08676f3b +0x0ff:  mov    %eax,(%esp)
08676f3e +0x102:  call   082375e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc8e
08676f43 +0x107:  sub    $0x4,%esp
08676f46 +0x10a:  lea    -0x3c(%ebp),%eax
08676f49 +0x10d:  mov    %eax,0x4(%esp)
08676f4d +0x111:  lea    -0x1c(%ebp),%eax
08676f50 +0x114:  mov    %eax,(%esp)
08676f53 +0x117:  call   08271e0b <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x431>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x431
08676f58 +0x11c:  test   %al,%al
08676f5a +0x11e:  je     08676f78 <+0x13c>
08676f5c +0x120:  lea    -0x18(%ebp),%eax
08676f5f +0x123:  mov    -0x3c(%ebp),%edx
08676f62 +0x126:  mov    %edx,0x8(%esp)
08676f66 +0x12a:  mov    -0x10(%ebp),%edx
08676f69 +0x12d:  mov    %edx,0x4(%esp)
08676f6d +0x131:  mov    %eax,(%esp)
08676f70 +0x134:  call   0869b85c <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x80b1>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x80b1
08676f75 +0x139:  sub    $0x4,%esp
08676f78 +0x13c:  lea    -0x38(%ebp),%eax
08676f7b +0x13f:  mov    %eax,(%esp)
08676f7e +0x142:  call   0869b7e8 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x803d>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x803d
08676f83 +0x147:  mov    0xc(%ebp),%eax
08676f86 +0x14a:  lea    0xc(%eax),%edx
08676f89 +0x14d:  lea    -0x2c(%ebp),%eax
08676f8c +0x150:  mov    %edx,0x4(%esp)
08676f90 +0x154:  mov    %eax,(%esp)
08676f93 +0x157:  call   0869b790 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x7fe5>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x7fe5
08676f98 +0x15c:  sub    $0x4,%esp
08676f9b +0x15f:  lea    -0x2c(%ebp),%eax
08676f9e +0x162:  mov    %eax,0x4(%esp)
08676fa2 +0x166:  lea    -0x38(%ebp),%eax
08676fa5 +0x169:  mov    %eax,(%esp)
08676fa8 +0x16c:  call   0869b7bc <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8011>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8011
08676fad +0x171:  test   %al,%al
08676faf +0x173:  jne    08676ec1 <+0x85>
08676fb5 +0x179:  mov    0xc(%ebp),%edx
08676fb8 +0x17c:  lea    -0x40(%ebp),%eax
08676fbb +0x17f:  mov    %edx,0x4(%esp)
08676fbf +0x183:  mov    %eax,(%esp)
08676fc2 +0x186:  call   0869b942 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x8197>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x8197
08676fc7 +0x18b:  sub    $0x4,%esp
08676fca +0x18e:  jmp    08676ff1 <+0x1b5>
08676fcc +0x190:  lea    -0x40(%ebp),%eax
08676fcf +0x193:  mov    %eax,(%esp)
08676fd2 +0x196:  call   0823764c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xccf6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xccf6
08676fd7 +0x19b:  mov    %eax,0x4(%esp)
08676fdb +0x19f:  mov    -0x10(%ebp),%eax
08676fde +0x1a2:  mov    %eax,(%esp)
08676fe1 +0x1a5:  call   08271d98 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x3be>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x3be
08676fe6 +0x1aa:  lea    -0x40(%ebp),%eax
08676fe9 +0x1ad:  mov    %eax,(%esp)
08676fec +0x1b0:  call   08237636 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcce0>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcce0
08676ff1 +0x1b5:  mov    0xc(%ebp),%edx
08676ff4 +0x1b8:  lea    -0x14(%ebp),%eax
08676ff7 +0x1bb:  mov    %edx,0x4(%esp)
08676ffb +0x1bf:  mov    %eax,(%esp)
08676ffe +0x1c2:  call   0869b96e <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x81c3>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x81c3
08677003 +0x1c7:  sub    $0x4,%esp
08677006 +0x1ca:  lea    -0x14(%ebp),%eax
08677009 +0x1cd:  mov    %eax,0x4(%esp)
0867700d +0x1d1:  lea    -0x40(%ebp),%eax
08677010 +0x1d4:  mov    %eax,(%esp)
08677013 +0x1d7:  call   0869b99a <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x81ef>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x81ef
08677018 +0x1dc:  test   %al,%al
0867701a +0x1de:  jne    08676fcc <+0x190>
0867701c +0x1e0:  jmp    0867701f <+0x1e3>
0867701e +0x1e2:  nop
0867701f +0x1e3:  leave
08677020 +0x1e4:  ret
08677021 +0x1e5:  nop
```

## 反编译 C

```c
// CUser::UpdateCurrentCharacRentalInfo @ 0x8676e3c

/* CUser::UpdateCurrentCharacRentalInfo(InstanceRentalSystem::RentOutput const&, int, bool) */

void __thiscall
CUser::UpdateCurrentCharacRentalInfo(CUser *this,RentOutput *param_1,int param_2,bool param_3)

{
  bool bVar1;
  uint *puVar2;
  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
  *this_00;
  int iVar3;
  int *piVar4;
  int local_74 [2];
  undefined1 local_44 [4];
  int local_40;
  undefined1 local_3c [4];
  uint local_38;
  uint local_34;
  undefined1 local_30 [4];
  int local_2c;
  int local_28;
  undefined4 local_24;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
  *local_14;
  int local_10;
  
  puVar2 = (uint *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  local_38 = *puVar2;
  if (local_38 != 0) {
    local_34 = param_2;
    this_00 = (map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
               *)std::
                 map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
                 ::operator[]((map<unsigned_int,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>>>>
                               *)(this + 0x6ef78),&local_34);
    local_14 = (vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
                *)std::
                  map<unsigned_int,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>>>
                  ::operator[](this_00,&local_38);
    if (param_3) {
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::clear(local_14);
    }
    std::
    vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
    ::begin();
    piVar4 = (int *)&stack0xffffff94;
    while( true ) {
      piVar4[1] = (int)(param_1 + 0xc);
      *piVar4 = (int)local_30;
      piVar4[-1] = 0x8676f98;
      std::
      vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
      ::end();
      piVar4[1] = (int)local_30;
      *piVar4 = (int)local_3c;
      piVar4[-1] = 0x8676fad;
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)*piVar4,(__normal_iterator *)piVar4[1]);
      if (!bVar1) break;
      *piVar4 = (int)local_3c;
      piVar4[-1] = 0x8676ecc;
      local_10 = __gnu_cxx::
                 __normal_iterator<InstanceRentalSystem::DeletedRentItem_const*,std::vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>>
                 ::operator*((__normal_iterator<InstanceRentalSystem::DeletedRentItem_const*,std::vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>>
                              *)*piVar4);
      piVar4[1] = *(int *)(local_10 + 4);
      *piVar4 = (int)&local_2c;
      piVar4[-1] = 0x8676ee4;
      FindRentalInfoByItemIndex::FindRentalInfoByItemIndex
                ((FindRentalInfoByItemIndex *)*piVar4,piVar4[1]);
      piVar4[1] = (int)local_14;
      *piVar4 = (int)&local_28;
      piVar4[-1] = 0x8676ef6;
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::end();
      piVar4[1] = (int)local_14;
      *piVar4 = (int)&local_24;
      piVar4[-1] = 0x8676f0b;
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::begin();
      piVar4[3] = local_2c;
      piVar4[2] = local_28;
      piVar4[1] = local_24;
      *piVar4 = (int)&local_40;
      piVar4[-1] = 0x8676f2e;
      std::
      find_if<__gnu_cxx::__normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>,FindRentalInfoByItemIndex>
                ();
      *piVar4 = (int)local_14;
      piVar4[-1] = (int)local_20;
      piVar4[-2] = 0x8676f43;
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::end();
      *piVar4 = (int)&local_40;
      piVar4[-1] = (int)local_20;
      piVar4[-2] = 0x8676f58;
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)piVar4[-1],(__normal_iterator *)*piVar4);
      if (bVar1) {
        piVar4[1] = local_40;
        *piVar4 = (int)local_14;
        piVar4[-1] = (int)local_1c;
        piVar4[-2] = 0x8676f75;
        std::
        vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
        erase();
      }
      piVar4[-1] = (int)local_3c;
      piVar4[-2] = 0x8676f83;
      __gnu_cxx::
      __normal_iterator<InstanceRentalSystem::DeletedRentItem_const*,std::vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>>
      ::operator++((__normal_iterator<InstanceRentalSystem::DeletedRentItem_const*,std::vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>>
                    *)piVar4[-1]);
      piVar4 = piVar4 + -1;
    }
    piVar4[1] = (int)param_1;
    *piVar4 = (int)local_44;
    piVar4[-1] = 0x8676fc7;
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    begin();
    while( true ) {
      piVar4[1] = (int)param_1;
      *piVar4 = (int)local_18;
      piVar4[-1] = 0x8677003;
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::end();
      piVar4[1] = (int)local_18;
      *piVar4 = (int)local_44;
      piVar4[-1] = 0x8677018;
      bVar1 = __gnu_cxx::operator!=((__normal_iterator *)*piVar4,(__normal_iterator *)piVar4[1]);
      if (!bVar1) break;
      *piVar4 = (int)local_44;
      piVar4[-1] = 0x8676fd7;
      iVar3 = __gnu_cxx::
              __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
              ::operator*((__normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
                           *)*piVar4);
      piVar4[1] = iVar3;
      *piVar4 = (int)local_14;
      piVar4[-1] = 0x8676fe6;
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::push_back((vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
                   *)*piVar4,(RentalInfo *)piVar4[1]);
      *piVar4 = (int)local_44;
      piVar4[-1] = 0x8676ff1;
      __gnu_cxx::
      __normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
      ::operator++((__normal_iterator<InstanceRentalSystem::RentalInfo_const*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
                    *)*piVar4);
    }
  }
  return;
}
```
