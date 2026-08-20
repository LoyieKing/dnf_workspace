# GetRentItemInfo

`_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo`

`RentalMachineDimension::GetRentItemInfo(CUser&, InstanceRentalSystem::RentInput::RentInElem const&, EventRewardItemInfo&)`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826f842` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826f842  _ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo
#           RentalMachineDimension::GetRentItemInfo(CUser&, InstanceRentalSystem::RentInput::RentInElem const&, EventRewardItemInfo&)
# range [0x0826f842, 0x0826f9bd]
0826f842 +0x000:  push   %ebp
0826f843 +0x001:  mov    %esp,%ebp
0826f845 +0x003:  sub    $0x38,%esp
0826f848 +0x006:  movl   $0x0,-0x20(%ebp)
0826f84f +0x00d:  movl   $0x2,0x8(%esp)
0826f857 +0x015:  lea    -0x20(%ebp),%eax
0826f85a +0x018:  mov    %eax,0x4(%esp)
0826f85e +0x01c:  mov    0xc(%ebp),%eax
0826f861 +0x01f:  mov    %eax,(%esp)
0826f864 +0x022:  call   082711f7 <_ZN7pc_room17GetSelectionIndexER5CUserRii>  ; pc_room::GetSelectionIndex(CUser&, int&, int)
0826f869 +0x027:  xor    $0x1,%eax
0826f86c +0x02a:  test   %al,%al
0826f86e +0x02c:  je     0826f87a <+0x38>
0826f870 +0x02e:  mov    $0x0,%eax
0826f875 +0x033:  jmp    0826f9bc <+0x17a>
0826f87a +0x038:  movb   $0x0,-0x21(%ebp)
0826f87e +0x03c:  lea    -0x21(%ebp),%eax
0826f881 +0x03f:  mov    %eax,0x4(%esp)
0826f885 +0x043:  mov    0xc(%ebp),%eax
0826f888 +0x046:  mov    %eax,(%esp)
0826f88b +0x049:  call   082712a6 <_ZN7pc_room15GetCharacterJobER5CUserRc>  ; pc_room::GetCharacterJob(CUser&, char&)
0826f890 +0x04e:  xor    $0x1,%eax
0826f893 +0x051:  test   %al,%al
0826f895 +0x053:  je     0826f8a1 <+0x5f>
0826f897 +0x055:  mov    $0x0,%eax
0826f89c +0x05a:  jmp    0826f9bc <+0x17a>
0826f8a1 +0x05f:  mov    -0x20(%ebp),%edx
0826f8a4 +0x062:  movzbl -0x21(%ebp),%eax
0826f8a8 +0x066:  movsbl %al,%eax
0826f8ab +0x069:  mov    %edx,0x4(%esp)
0826f8af +0x06d:  mov    %eax,(%esp)
0826f8b2 +0x070:  call   088945ad <_Z30makeFairPVPEquipmentPackageKeyii>  ; makeFairPVPEquipmentPackageKey(int, int)
0826f8b7 +0x075:  mov    %eax,-0x1c(%ebp)
0826f8ba +0x078:  mov    0x10(%ebp),%eax
0826f8bd +0x07b:  movzbl 0x3(%eax),%eax
0826f8c1 +0x07f:  cmp    $0x1,%al
0826f8c3 +0x081:  jne    0826f8f2 <+0xb0>
0826f8c5 +0x083:  mov    0xc(%ebp),%eax
0826f8c8 +0x086:  mov    %eax,(%esp)
0826f8cb +0x089:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0826f8d0 +0x08e:  movsbl %al,%edx
0826f8d3 +0x091:  movzbl -0x21(%ebp),%eax
0826f8d7 +0x095:  movsbl %al,%eax
0826f8da +0x098:  mov    %edx,0x8(%esp)
0826f8de +0x09c:  mov    %eax,0x4(%esp)
0826f8e2 +0x0a0:  mov    0x8(%ebp),%eax
0826f8e5 +0x0a3:  mov    %eax,(%esp)
0826f8e8 +0x0a6:  call   0826f814 <_ZN22RentalMachineDimension21GetRewardItemGiveListEii>  ; RentalMachineDimension::GetRewardItemGiveList(int, int)
0826f8ed +0x0ab:  mov    %eax,-0x18(%ebp)
0826f8f0 +0x0ae:  jmp    0826f908 <+0xc6>
0826f8f2 +0x0b0:  movl   $0x2,0x4(%esp)
0826f8fa +0x0b8:  mov    -0x1c(%ebp),%eax
0826f8fd +0x0bb:  mov    %eax,(%esp)
0826f900 +0x0be:  call   082712da <_ZN7pc_room26GetRewardItemSelectionListEii>  ; pc_room::GetRewardItemSelectionList(int, int)
0826f905 +0x0c3:  mov    %eax,-0x18(%ebp)
0826f908 +0x0c6:  cmpl   $0x0,-0x18(%ebp)
0826f90c +0x0ca:  jne    0826f918 <+0xd6>
0826f90e +0x0cc:  mov    $0x0,%eax
0826f913 +0x0d1:  jmp    0826f9bc <+0x17a>
0826f918 +0x0d6:  mov    -0x18(%ebp),%eax
0826f91b +0x0d9:  mov    %eax,(%esp)
0826f91e +0x0dc:  call   0826fe58 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x45a>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x45a
0826f923 +0x0e1:  mov    %eax,-0x14(%ebp)
0826f926 +0x0e4:  mov    0x10(%ebp),%eax
0826f929 +0x0e7:  movzbl (%eax),%eax
0826f92c +0x0ea:  test   %al,%al
0826f92e +0x0ec:  js     0826f93e <+0xfc>
0826f930 +0x0ee:  mov    0x10(%ebp),%eax
0826f933 +0x0f1:  movzbl (%eax),%eax
0826f936 +0x0f4:  movsbl %al,%eax
0826f939 +0x0f7:  cmp    -0x14(%ebp),%eax
0826f93c +0x0fa:  jl     0826f945 <+0x103>
0826f93e +0x0fc:  mov    $0x0,%eax
0826f943 +0x101:  jmp    0826f9bc <+0x17a>
0826f945 +0x103:  mov    0x10(%ebp),%eax
0826f948 +0x106:  movzbl (%eax),%eax
0826f94b +0x109:  movsbl %al,%eax
0826f94e +0x10c:  mov    %eax,0x4(%esp)
0826f952 +0x110:  mov    -0x18(%ebp),%eax
0826f955 +0x113:  mov    %eax,(%esp)
0826f958 +0x116:  call   0826fe7a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x47c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x47c
0826f95d +0x11b:  mov    %eax,-0x10(%ebp)
0826f960 +0x11e:  mov    -0x10(%ebp),%eax
0826f963 +0x121:  mov    %eax,(%esp)
0826f966 +0x124:  call   08237656 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcd00>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcd00
0826f96b +0x129:  mov    %eax,-0xc(%ebp)
0826f96e +0x12c:  mov    0x10(%ebp),%eax
0826f971 +0x12f:  movzbl 0x1(%eax),%eax
0826f975 +0x133:  test   %al,%al
0826f977 +0x135:  js     0826f988 <+0x146>
0826f979 +0x137:  mov    0x10(%ebp),%eax
0826f97c +0x13a:  movzbl 0x1(%eax),%eax
0826f980 +0x13e:  movsbl %al,%eax
0826f983 +0x141:  cmp    -0xc(%ebp),%eax
0826f986 +0x144:  jl     0826f98f <+0x14d>
0826f988 +0x146:  mov    $0x0,%eax
0826f98d +0x14b:  jmp    0826f9bc <+0x17a>
0826f98f +0x14d:  mov    0x10(%ebp),%eax
0826f992 +0x150:  movzbl 0x1(%eax),%eax
0826f996 +0x154:  movsbl %al,%eax
0826f999 +0x157:  mov    %eax,0x4(%esp)
0826f99d +0x15b:  mov    -0x10(%ebp),%eax
0826f9a0 +0x15e:  mov    %eax,(%esp)
0826f9a3 +0x161:  call   0826fea6 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x4a8>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x4a8
0826f9a8 +0x166:  mov    %eax,0x4(%esp)
0826f9ac +0x16a:  mov    0x14(%ebp),%eax
0826f9af +0x16d:  mov    %eax,(%esp)
0826f9b2 +0x170:  call   0826fab6 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0xb8>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0xb8
0826f9b7 +0x175:  mov    $0x1,%eax
0826f9bc +0x17a:  leave
0826f9bd +0x17b:  ret
```

## 反编译 C

```c
// RentalMachineDimension::GetRentItemInfo @ 0x826f842

/* RentalMachineDimension::GetRentItemInfo(CUser&, InstanceRentalSystem::RentInput::RentInElem
   const&, EventRewardItemInfo&) */

undefined4 __thiscall
RentalMachineDimension::GetRentItemInfo
          (RentalMachineDimension *this,CUser *param_1,RentInElem *param_2,
          EventRewardItemInfo *param_3)

{
  char cVar1;
  undefined4 uVar2;
  EventRewardItemInfo *pEVar3;
  char local_25;
  int local_24;
  int local_20;
  vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
  *local_1c;
  int local_18;
  vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *local_14;
  int local_10;
  
  local_24 = 0;
  cVar1 = pc_room::GetSelectionIndex(param_1,&local_24,2);
  if (cVar1 == '\x01') {
    local_25 = '\0';
    cVar1 = pc_room::GetCharacterJob(param_1,&local_25);
    if (cVar1 == '\x01') {
      local_20 = makeFairPVPEquipmentPackageKey((int)local_25,local_24);
      if (param_2[3] == (RentInElem)0x1) {
        cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
        local_1c = (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                    *)GetRewardItemGiveList(this,(int)local_25,(int)cVar1);
      }
      else {
        local_1c = (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                    *)pc_room::GetRewardItemSelectionList(local_20,2);
      }
      if (local_1c ==
          (vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
           *)0x0) {
        uVar2 = 0;
      }
      else {
        local_18 = std::
                   vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                   ::size(local_1c);
        if (((char)*param_2 < '\0') || (local_18 <= (char)*param_2)) {
          uVar2 = 0;
        }
        else {
          local_14 = (vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>> *)
                     std::
                     vector<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>,std::allocator<std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>>>
                     ::at(local_1c,(int)(char)*param_2);
          local_10 = std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::size
                               (local_14);
          if (((char)param_2[1] < '\0') || (local_10 <= (char)param_2[1])) {
            uVar2 = 0;
          }
          else {
            pEVar3 = (EventRewardItemInfo *)
                     std::vector<EventRewardItemInfo,std::allocator<EventRewardItemInfo>>::
                     operator[](local_14,(int)(char)param_2[1]);
            EventRewardItemInfo::operator=(param_3,pEVar3);
            uVar2 = 1;
          }
        }
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
