# DeleteAllRentalItemInSameSectionForNewRent

`_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi`

`pc_room::DeleteAllRentalItemInSameSectionForNewRent(CUser&, std::vector<InstanceRentalSystem::DeletedRentItem, std::allocator<InstanceRentalSystem::DeletedRentItem> >&, int)`

| 类 | 地址 |
|---|---|
| `pc_room` | `0x08271807` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08271807  _ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi
#           pc_room::DeleteAllRentalItemInSameSectionForNewRent(CUser&, std::vector<InstanceRentalSystem::DeletedRentItem, std::allocator<InstanceRentalSystem::DeletedRentItem> >&, int)
# range [0x08271807, 0x08271999]
08271807 +0x000:  push   %ebp
08271808 +0x001:  mov    %esp,%ebp
0827180a +0x003:  push   %esi
0827180b +0x004:  push   %ebx
0827180c +0x005:  sub    $0x40,%esp
0827180f +0x008:  lea    -0x1c(%ebp),%eax
08271812 +0x00b:  mov    %eax,(%esp)
08271815 +0x00e:  call   08236134 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7de
0827181a +0x013:  mov    0x10(%ebp),%eax
0827181d +0x016:  mov    %eax,0x8(%esp)
08271821 +0x01a:  lea    -0x1c(%ebp),%eax
08271824 +0x01d:  mov    %eax,0x4(%esp)
08271828 +0x021:  mov    0x8(%ebp),%eax
0827182b +0x024:  mov    %eax,(%esp)
0827182e +0x027:  call   08677166 <_ZN5CUser26GetCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>  ; CUser::GetCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
08271833 +0x02c:  xor    $0x1,%eax
08271836 +0x02f:  test   %al,%al
08271838 +0x031:  jne    08271985 <+0x17e>
0827183e +0x037:  movb   $0x0,-0x1d(%ebp)
08271842 +0x03b:  movl   $0x0,-0x24(%ebp)
08271849 +0x042:  lea    -0x28(%ebp),%eax
0827184c +0x045:  lea    -0x1c(%ebp),%edx
0827184f +0x048:  mov    %edx,0x4(%esp)
08271853 +0x04c:  mov    %eax,(%esp)
08271856 +0x04f:  call   082375a6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc50>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc50
0827185b +0x054:  sub    $0x4,%esp
0827185e +0x057:  jmp    08271939 <+0x132>
08271863 +0x05c:  lea    -0x28(%ebp),%eax
08271866 +0x05f:  mov    %eax,(%esp)
08271869 +0x062:  call   08271e4e <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x474>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x474
0827186e +0x067:  mov    %eax,-0xc(%ebp)
08271871 +0x06a:  mov    -0xc(%ebp),%eax
08271874 +0x06d:  mov    0x4(%eax),%eax
08271877 +0x070:  mov    %eax,%ebx
08271879 +0x072:  mov    0x8(%ebp),%eax
0827187c +0x075:  mov    %eax,(%esp)
0827187f +0x078:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
08271884 +0x07d:  lea    -0x1d(%ebp),%edx
08271887 +0x080:  mov    %edx,0xc(%esp)
0827188b +0x084:  lea    -0x24(%ebp),%edx
0827188e +0x087:  mov    %edx,0x8(%esp)
08271892 +0x08b:  mov    %ebx,0x4(%esp)
08271896 +0x08f:  mov    %eax,(%esp)
08271899 +0x092:  call   085052be <_ZNK10CInventory36CheckExistItemInInventoryOrEquipmentEiRiRb>  ; CInventory::CheckExistItemInInventoryOrEquipment(int, int&, bool&) const
0827189e +0x097:  xor    $0x1,%eax
082718a1 +0x09a:  test   %al,%al
082718a3 +0x09c:  jne    0827192d <+0x126>
082718a9 +0x0a2:  movzbl -0x1d(%ebp),%eax
082718ad +0x0a6:  test   %al,%al
082718af +0x0a8:  je     082718d5 <+0xce>
082718b1 +0x0aa:  mov    -0x24(%ebp),%ebx
082718b4 +0x0ad:  mov    0x8(%ebp),%eax
082718b7 +0x0b0:  mov    %eax,(%esp)
082718ba +0x0b3:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082718bf +0x0b8:  mov    %ebx,0x8(%esp)
082718c3 +0x0bc:  movl   $0x0,0x4(%esp)
082718cb +0x0c4:  mov    %eax,(%esp)
082718ce +0x0c7:  call   084fb32a <_ZN10CInventory9ResetSlotEii>  ; CInventory::ResetSlot(int, int)
082718d3 +0x0cc:  jmp    082718f7 <+0xf0>
082718d5 +0x0ce:  mov    -0x24(%ebp),%ebx
082718d8 +0x0d1:  mov    0x8(%ebp),%eax
082718db +0x0d4:  mov    %eax,(%esp)
082718de +0x0d7:  call   080da28e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x42b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x42b
082718e3 +0x0dc:  mov    %ebx,0x8(%esp)
082718e7 +0x0e0:  movl   $0x1,0x4(%esp)
082718ef +0x0e8:  mov    %eax,(%esp)
082718f2 +0x0eb:  call   084fb32a <_ZN10CInventory9ResetSlotEii>  ; CInventory::ResetSlot(int, int)
082718f7 +0x0f0:  lea    -0x30(%ebp),%eax
082718fa +0x0f3:  mov    %eax,(%esp)
082718fd +0x0f6:  call   08271a3a <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x60>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x60
08271902 +0x0fb:  mov    -0x24(%ebp),%eax
08271905 +0x0fe:  mov    %ax,-0x2e(%ebp)
08271909 +0x102:  movzbl -0x1d(%ebp),%eax
0827190d +0x106:  mov    %al,-0x30(%ebp)
08271910 +0x109:  mov    -0xc(%ebp),%eax
08271913 +0x10c:  mov    0x4(%eax),%eax
08271916 +0x10f:  mov    %eax,-0x2c(%ebp)
08271919 +0x112:  lea    -0x30(%ebp),%eax
0827191c +0x115:  mov    %eax,0x4(%esp)
08271920 +0x119:  mov    0xc(%ebp),%eax
08271923 +0x11c:  mov    %eax,(%esp)
08271926 +0x11f:  call   08271e58 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x47e>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x47e
0827192b +0x124:  jmp    0827192e <+0x127>
0827192d +0x126:  nop
0827192e +0x127:  lea    -0x28(%ebp),%eax
08271931 +0x12a:  mov    %eax,(%esp)
08271934 +0x12d:  call   08271e38 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x45e>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x45e
08271939 +0x132:  lea    -0x10(%ebp),%eax
0827193c +0x135:  lea    -0x1c(%ebp),%edx
0827193f +0x138:  mov    %edx,0x4(%esp)
08271943 +0x13c:  mov    %eax,(%esp)
08271946 +0x13f:  call   082375e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc8e
0827194b +0x144:  sub    $0x4,%esp
0827194e +0x147:  lea    -0x10(%ebp),%eax
08271951 +0x14a:  mov    %eax,0x4(%esp)
08271955 +0x14e:  lea    -0x28(%ebp),%eax
08271958 +0x151:  mov    %eax,(%esp)
0827195b +0x154:  call   08271e0b <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x431>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x431
08271960 +0x159:  test   %al,%al
08271962 +0x15b:  jne    08271863 <+0x5c>
08271968 +0x161:  jmp    08271985 <+0x17e>
0827196a +0x163:  mov    %edx,%ebx
0827196c +0x165:  mov    %eax,%esi
0827196e +0x167:  lea    -0x1c(%ebp),%eax
08271971 +0x16a:  mov    %eax,(%esp)
08271974 +0x16d:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
08271979 +0x172:  mov    %esi,%eax
0827197b +0x174:  mov    %ebx,%edx
0827197d +0x176:  mov    %eax,(%esp)
08271980 +0x179:  call   08ae3750 <_Unwind_Resume>
08271985 +0x17e:  lea    -0x1c(%ebp),%eax
08271988 +0x181:  mov    %eax,(%esp)
0827198b +0x184:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
08271990 +0x189:  lea    -0x8(%ebp),%esp
08271993 +0x18c:  add    $0x0,%esp
08271996 +0x18f:  pop    %ebx
08271997 +0x190:  pop    %esi
08271998 +0x191:  pop    %ebp
08271999 +0x192:  ret
```

## 反编译 C

```c
// pc_room::DeleteAllRentalItemInSameSectionForNewRent @ 0x8271807

/* pc_room::DeleteAllRentalItemInSameSectionForNewRent(CUser&,
   std::vector<InstanceRentalSystem::DeletedRentItem,
   std::allocator<InstanceRentalSystem::DeletedRentItem> >&, int) */

void pc_room::DeleteAllRentalItemInSameSectionForNewRent(CUser *param_1,vector *param_2,int param_3)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  CInventory *pCVar4;
  DeletedRentItem local_34 [2];
  undefined2 local_32;
  undefined4 local_30;
  __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
  local_2c [4];
  int local_28;
  DeletedRentItem local_21;
  vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
  local_20 [12];
  __normal_iterator local_14 [4];
  int local_10;
  
  std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
  vector(local_20);
                    /* try { // try from 0827182e to 0827195f has its CatchHandler @ 0827196a */
  cVar2 = CUser::GetCurrentCharacRentalInfo(param_1,(vector *)local_20,param_3);
  if (cVar2 == '\x01') {
    local_21 = (DeletedRentItem)0x0;
    local_28 = 0;
    std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
    begin();
    while( true ) {
      std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
      ::end();
      bVar3 = __gnu_cxx::operator!=(local_2c,local_14);
      if (!bVar3) break;
      local_10 = __gnu_cxx::
                 __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
                 ::operator*(local_2c);
      iVar1 = *(int *)(local_10 + 4);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      cVar2 = CInventory::CheckExistItemInInventoryOrEquipment
                        (pCVar4,iVar1,&local_28,(bool *)&local_21);
      iVar1 = local_28;
      if (cVar2 == '\x01') {
        if (local_21 == (DeletedRentItem)0x0) {
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::ResetSlot(pCVar4,1,iVar1);
        }
        else {
          pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_1);
          CInventory::ResetSlot(pCVar4,0,iVar1);
        }
        InstanceRentalSystem::DeletedRentItem::DeletedRentItem(local_34);
        local_32 = (undefined2)local_28;
        local_34[0] = local_21;
        local_30 = *(undefined4 *)(local_10 + 4);
        std::
        vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
        ::push_back((vector<InstanceRentalSystem::DeletedRentItem,std::allocator<InstanceRentalSystem::DeletedRentItem>>
                     *)param_2,local_34);
      }
      __gnu_cxx::
      __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
      ::operator++(local_2c);
    }
  }
  std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
  ~vector(local_20);
  return;
}
```
