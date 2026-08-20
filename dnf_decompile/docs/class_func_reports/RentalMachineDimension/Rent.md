# Rent

`_ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE`

`RentalMachineDimension::Rent(CUser&, InstanceRentalSystem::RentInput const&, InstanceRentalSystem::RentOutput&)`

| 类 | 地址 |
|---|---|
| `RentalMachineDimension` | `0x0826ec22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0826ec22  _ZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputE
#           RentalMachineDimension::Rent(CUser&, InstanceRentalSystem::RentInput const&, InstanceRentalSystem::RentOutput&)
# range [0x0826ec22, 0x0826ee93]
0826ec22 +0x000:  push   %ebp
0826ec23 +0x001:  mov    %esp,%ebp
0826ec25 +0x003:  push   %esi
0826ec26 +0x004:  push   %ebx
0826ec27 +0x005:  sub    $0x50,%esp
0826ec2a +0x008:  mov    0xc(%ebp),%eax
0826ec2d +0x00b:  mov    %eax,(%esp)
0826ec30 +0x00e:  call   08271032 <_ZN7pc_room37CheckRentableEnvironmentAtChannelTypeER5CUser>  ; pc_room::CheckRentableEnvironmentAtChannelType(CUser&)
0826ec35 +0x013:  xor    $0x1,%eax
0826ec38 +0x016:  test   %al,%al
0826ec3a +0x018:  je     0826ec46 <+0x24>
0826ec3c +0x01a:  mov    $0x7,%ebx
0826ec41 +0x01f:  jmp    0826ee87 <+0x265>
0826ec46 +0x024:  mov    0xc(%ebp),%eax
0826ec49 +0x027:  mov    %eax,(%esp)
0826ec4c +0x02a:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0826ec51 +0x02f:  mov    %eax,0x4(%esp)
0826ec55 +0x033:  mov    0x8(%ebp),%eax
0826ec58 +0x036:  mov    %eax,(%esp)
0826ec5b +0x039:  call   0826f7e4 <_ZN22RentalMachineDimension16checkRentalLevelEi>  ; RentalMachineDimension::checkRentalLevel(int)
0826ec60 +0x03e:  xor    $0x1,%eax
0826ec63 +0x041:  test   %al,%al
0826ec65 +0x043:  je     0826ec71 <+0x4f>
0826ec67 +0x045:  mov    $0xe,%ebx
0826ec6c +0x04a:  jmp    0826ee87 <+0x265>
0826ec71 +0x04f:  mov    0xc(%ebp),%eax
0826ec74 +0x052:  mov    %eax,(%esp)
0826ec77 +0x055:  call   08110c94 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x1a6>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x1a6
0826ec7c +0x05a:  movsbl %al,%eax
0826ec7f +0x05d:  mov    %eax,0x4(%esp)
0826ec83 +0x061:  mov    0x8(%ebp),%eax
0826ec86 +0x064:  mov    %eax,(%esp)
0826ec89 +0x067:  call   0826f7fc <_ZN22RentalMachineDimension18checkRentalGrowJobEi>  ; RentalMachineDimension::checkRentalGrowJob(int)
0826ec8e +0x06c:  xor    $0x1,%eax
0826ec91 +0x06f:  test   %al,%al
0826ec93 +0x071:  je     0826ec9f <+0x7d>
0826ec95 +0x073:  mov    $0xfe,%ebx
0826ec9a +0x078:  jmp    0826ee87 <+0x265>
0826ec9f +0x07d:  mov    0x10(%ebp),%eax
0826eca2 +0x080:  mov    %eax,0x8(%esp)
0826eca6 +0x084:  mov    0xc(%ebp),%eax
0826eca9 +0x087:  mov    %eax,0x4(%esp)
0826ecad +0x08b:  mov    0x8(%ebp),%eax
0826ecb0 +0x08e:  mov    %eax,(%esp)
0826ecb3 +0x091:  call   0826f52c <_ZN22RentalMachineDimension21CheckupAllRentalItemsER5CUserRKN20InstanceRentalSystem9RentInputE>  ; RentalMachineDimension::CheckupAllRentalItems(CUser&, InstanceRentalSystem::RentInput const&)
0826ecb8 +0x096:  mov    %eax,-0x10(%ebp)
0826ecbb +0x099:  cmpl   $0x0,-0x10(%ebp)
0826ecbf +0x09d:  je     0826ecc9 <+0xa7>
0826ecc1 +0x09f:  mov    -0x10(%ebp),%ebx
0826ecc4 +0x0a2:  jmp    0826ee87 <+0x265>
0826ecc9 +0x0a7:  mov    0x14(%ebp),%eax
0826eccc +0x0aa:  add    $0xc,%eax
0826eccf +0x0ad:  movl   $0x2,0x8(%esp)
0826ecd7 +0x0b5:  mov    %eax,0x4(%esp)
0826ecdb +0x0b9:  mov    0xc(%ebp),%eax
0826ecde +0x0bc:  mov    %eax,(%esp)
0826ece1 +0x0bf:  call   08271807 <_ZN7pc_room42DeleteAllRentalItemInSameSectionForNewRentER5CUserRSt6vectorIN20InstanceRentalSystem15DeletedRentItemESaIS4_EEi>  ; pc_room::DeleteAllRentalItemInSameSectionForNewRent(CUser&, std::vector<InstanceRentalSystem::DeletedRentItem, std::allocator<InstanceRentalSystem::DeletedRentItem> >&, int)
0826ece6 +0x0c4:  mov    0x10(%ebp),%edx
0826ece9 +0x0c7:  lea    -0x18(%ebp),%eax
0826ecec +0x0ca:  mov    %edx,0x4(%esp)
0826ecf0 +0x0ce:  mov    %eax,(%esp)
0826ecf3 +0x0d1:  call   0826fb4a <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x14c>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x14c
0826ecf8 +0x0d6:  sub    $0x4,%esp
0826ecfb +0x0d9:  jmp    0826ee53 <+0x231>
0826ed00 +0x0de:  lea    -0x18(%ebp),%eax
0826ed03 +0x0e1:  mov    %eax,(%esp)
0826ed06 +0x0e4:  call   0826fbe4 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1e6>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1e6
0826ed0b +0x0e9:  mov    %eax,-0xc(%ebp)
0826ed0e +0x0ec:  lea    -0x30(%ebp),%eax
0826ed11 +0x0ef:  mov    %eax,(%esp)
0826ed14 +0x0f2:  call   0891548a <_ZN19EventRewardItemInfoC1Ev>  ; EventRewardItemInfo::EventRewardItemInfo()
0826ed19 +0x0f7:  lea    -0x30(%ebp),%eax
0826ed1c +0x0fa:  mov    %eax,0xc(%esp)
0826ed20 +0x0fe:  mov    -0xc(%ebp),%eax
0826ed23 +0x101:  mov    %eax,0x8(%esp)
0826ed27 +0x105:  mov    0xc(%ebp),%eax
0826ed2a +0x108:  mov    %eax,0x4(%esp)
0826ed2e +0x10c:  mov    0x8(%ebp),%eax
0826ed31 +0x10f:  mov    %eax,(%esp)
0826ed34 +0x112:  call   0826f842 <_ZN22RentalMachineDimension15GetRentItemInfoER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemER19EventRewardItemInfo>  ; RentalMachineDimension::GetRentItemInfo(CUser&, InstanceRentalSystem::RentInput::RentInElem const&, EventRewardItemInfo&)
0826ed39 +0x117:  xor    $0x1,%eax
0826ed3c +0x11a:  test   %al,%al
0826ed3e +0x11c:  je     0826ed96 <+0x174>
0826ed40 +0x11e:  mov    -0xc(%ebp),%eax
0826ed43 +0x121:  movzbl 0x1(%eax),%eax
0826ed47 +0x125:  movsbl %al,%edx
0826ed4a +0x128:  mov    -0xc(%ebp),%eax
0826ed4d +0x12b:  movzbl (%eax),%eax
0826ed50 +0x12e:  movsbl %al,%eax
0826ed53 +0x131:  mov    %edx,0x18(%esp)
0826ed57 +0x135:  mov    %eax,0x14(%esp)
0826ed5b +0x139:  movl   $"Rent error. GetDimensionRentItemInfo return false. scriptSectionIndex(%d), scriptSeqIndex(%d)",0x10(%esp)
0826ed63 +0x141:  movl   $0x43,0xc(%esp)
0826ed6b +0x149:  movl   $&_ZZN22RentalMachineDimension4RentER5CUserRKN20InstanceRentalSystem9RentInputERNS2_10RentOutputEE19__PRETTY_FUNCTION__,0x8(%esp)
0826ed73 +0x151:  movl   $"RentalMachineDimension.cpp",0x4(%esp)
0826ed7b +0x159:  movl   $0x1,(%esp)
0826ed82 +0x160:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
0826ed87 +0x165:  mov    $0x1,%ebx
0826ed8c +0x16a:  mov    $0x0,%esi
0826ed91 +0x16f:  jmp    0826ee39 <+0x217>
0826ed96 +0x174:  mov    -0xc(%ebp),%eax
0826ed99 +0x177:  movzbl 0x2(%eax),%eax
0826ed9d +0x17b:  test   %al,%al
0826ed9f +0x17d:  je     0826edcb <+0x1a9>
0826eda1 +0x17f:  movl   $0x3e,0x10(%esp)
0826eda9 +0x187:  mov    0x14(%ebp),%eax
0826edac +0x18a:  mov    %eax,0xc(%esp)
0826edb0 +0x18e:  lea    -0x30(%ebp),%eax
0826edb3 +0x191:  mov    %eax,0x8(%esp)
0826edb7 +0x195:  mov    -0xc(%ebp),%eax
0826edba +0x198:  mov    %eax,0x4(%esp)
0826edbe +0x19c:  mov    0xc(%ebp),%eax
0826edc1 +0x19f:  mov    %eax,(%esp)
0826edc4 +0x1a2:  call   082714c5 <_ZN7pc_room16ProcessEquipItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi>  ; pc_room::ProcessEquipItem(CUser&, InstanceRentalSystem::RentInput::RentInElem const&, EventRewardItemInfo const&, InstanceRentalSystem::RentOutput&, int)
0826edc9 +0x1a7:  jmp    0826edf3 <+0x1d1>
0826edcb +0x1a9:  movl   $0x3e,0x10(%esp)
0826edd3 +0x1b1:  mov    0x14(%ebp),%eax
0826edd6 +0x1b4:  mov    %eax,0xc(%esp)
0826edda +0x1b8:  lea    -0x30(%ebp),%eax
0826eddd +0x1bb:  mov    %eax,0x8(%esp)
0826ede1 +0x1bf:  mov    -0xc(%ebp),%eax
0826ede4 +0x1c2:  mov    %eax,0x4(%esp)
0826ede8 +0x1c6:  mov    0xc(%ebp),%eax
0826edeb +0x1c9:  mov    %eax,(%esp)
0826edee +0x1cc:  call   08271666 <_ZN7pc_room17ProcessInsertItemER5CUserRKN20InstanceRentalSystem9RentInput10RentInElemERK19EventRewardItemInfoRNS2_10RentOutputEi>  ; pc_room::ProcessInsertItem(CUser&, InstanceRentalSystem::RentInput::RentInElem const&, EventRewardItemInfo const&, InstanceRentalSystem::RentOutput&, int)
0826edf3 +0x1d1:  mov    0x10(%ebp),%eax
0826edf6 +0x1d4:  movzbl 0x10(%eax),%eax
0826edfa +0x1d8:  test   %al,%al
0826edfc +0x1da:  je     0826ee17 <+0x1f5>
0826edfe +0x1dc:  mov    -0x30(%ebp),%eax
0826ee01 +0x1df:  mov    %eax,0x8(%esp)
0826ee05 +0x1e3:  mov    0xc(%ebp),%eax
0826ee08 +0x1e6:  mov    %eax,0x4(%esp)
0826ee0c +0x1ea:  mov    0x8(%ebp),%eax
0826ee0f +0x1ed:  mov    %eax,(%esp)
0826ee12 +0x1f0:  call   0826ef16 <_ZN22RentalMachineDimension3logER5CUseri>  ; RentalMachineDimension::log(CUser&, int)
0826ee17 +0x1f5:  mov    $0x1,%esi
0826ee1c +0x1fa:  jmp    0826ee39 <+0x217>
0826ee1e +0x1fc:  mov    %edx,%ebx
0826ee20 +0x1fe:  mov    %eax,%esi
0826ee22 +0x200:  lea    -0x30(%ebp),%eax
0826ee25 +0x203:  mov    %eax,(%esp)
0826ee28 +0x206:  call   0826faa0 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0xa2>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0xa2
0826ee2d +0x20b:  mov    %esi,%eax
0826ee2f +0x20d:  mov    %ebx,%edx
0826ee31 +0x20f:  mov    %eax,(%esp)
0826ee34 +0x212:  call   08ae3750 <_Unwind_Resume>
0826ee39 +0x217:  lea    -0x30(%ebp),%eax
0826ee3c +0x21a:  mov    %eax,(%esp)
0826ee3f +0x21d:  call   0826faa0 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0xa2>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0xa2
0826ee44 +0x222:  test   %esi,%esi
0826ee46 +0x224:  je     0826ee87 <+0x265>
0826ee48 +0x226:  lea    -0x18(%ebp),%eax
0826ee4b +0x229:  mov    %eax,(%esp)
0826ee4e +0x22c:  call   0826fbce <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1d0>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1d0
0826ee53 +0x231:  mov    0x10(%ebp),%edx
0826ee56 +0x234:  lea    -0x14(%ebp),%eax
0826ee59 +0x237:  mov    %edx,0x4(%esp)
0826ee5d +0x23b:  mov    %eax,(%esp)
0826ee60 +0x23e:  call   0826fb76 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x178>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x178
0826ee65 +0x243:  sub    $0x4,%esp
0826ee68 +0x246:  lea    -0x14(%ebp),%eax
0826ee6b +0x249:  mov    %eax,0x4(%esp)
0826ee6f +0x24d:  lea    -0x18(%ebp),%eax
0826ee72 +0x250:  mov    %eax,(%esp)
0826ee75 +0x253:  call   0826fba2 <_GLOBAL__I__ZN22RentalMachineDimensionC2Ev+0x1a4>  ; global constructors keyed to RentalMachineDimension::RentalMachineDimension()+0x1a4
0826ee7a +0x258:  test   %al,%al
0826ee7c +0x25a:  jne    0826ed00 <+0xde>
0826ee82 +0x260:  mov    $0x0,%ebx
0826ee87 +0x265:  mov    %ebx,%eax
0826ee89 +0x267:  lea    -0x8(%ebp),%esp
0826ee8c +0x26a:  add    $0x0,%esp
0826ee8f +0x26d:  pop    %ebx
0826ee90 +0x26e:  pop    %esi
0826ee91 +0x26f:  pop    %ebp
0826ee92 +0x270:  ret
0826ee93 +0x271:  nop
```

## 反编译 C

```c
// RentalMachineDimension::Rent @ 0x826ec22

/* RentalMachineDimension::Rent(CUser&, InstanceRentalSystem::RentInput const&,
   InstanceRentalSystem::RentOutput&) */

int __thiscall
RentalMachineDimension::Rent
          (RentalMachineDimension *this,CUser *param_1,RentInput *param_2,RentOutput *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int unaff_EBX;
  int local_34 [6];
  __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  int local_14;
  RentInElem *local_10;
  
  cVar1 = pc_room::CheckRentableEnvironmentAtChannelType(param_1);
  if (cVar1 == '\x01') {
    iVar3 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)param_1);
    cVar1 = checkRentalLevel(this,iVar3);
    if (cVar1 == '\x01') {
      cVar1 = CUserCharacInfo::getCurCharFirstGrowType((CUserCharacInfo *)param_1);
      cVar1 = checkRentalGrowJob(this,(int)cVar1);
      if (cVar1 == '\x01') {
        local_14 = CheckupAllRentalItems((CUser *)this,(RentInput *)param_1);
        if (local_14 == 0) {
          pc_room::DeleteAllRentalItemInSameSectionForNewRent(param_1,(vector *)(param_3 + 0xc),2);
          std::
          vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
          ::begin();
          while( true ) {
            std::
            vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
            ::end();
            bVar2 = __gnu_cxx::operator!=(local_1c,local_18);
            if (!bVar2) break;
            local_10 = (RentInElem *)
                       __gnu_cxx::
                       __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
                       ::operator*(local_1c);
            EventRewardItemInfo::EventRewardItemInfo((EventRewardItemInfo *)local_34);
                    /* try { // try from 0826ed34 to 0826ee16 has its CatchHandler @ 0826ee1e */
            cVar1 = GetRentItemInfo(this,param_1,local_10,(EventRewardItemInfo *)local_34);
            if (cVar1 == '\x01') {
              if (local_10[2] == (RentInElem)0x0) {
                pc_room::ProcessInsertItem
                          (param_1,local_10,(EventRewardItemInfo *)local_34,param_3,0x3e);
              }
              else {
                pc_room::ProcessEquipItem
                          (param_1,local_10,(EventRewardItemInfo *)local_34,param_3,0x3e);
              }
              if (param_2[0x10] != (RentInput)0x0) {
                log(this,param_1,local_34[0]);
              }
              bVar2 = true;
            }
            else {
              LogManager::logFormat
                        (1,"RentalMachineDimension.cpp",
                         "virtual ENUM_ERROR RentalMachineDimension::Rent(CUser&, const InstanceRentalSystem::RentInput&, InstanceRentalSystem::RentOutput&)"
                         ,0x43,
                         "Rent error. GetDimensionRentItemInfo return false. scriptSectionIndex(%d), scriptSeqIndex(%d)"
                         ,(int)(char)*local_10,(int)(char)local_10[1]);
              unaff_EBX = 1;
              bVar2 = false;
            }
            EventRewardItemInfo::~EventRewardItemInfo((EventRewardItemInfo *)local_34);
            if (!bVar2) {
              return unaff_EBX;
            }
            __gnu_cxx::
            __normal_iterator<InstanceRentalSystem::RentInput::RentInElem_const*,std::vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>>
            ::operator++(local_1c);
          }
          local_14 = 0;
        }
      }
      else {
        local_14 = 0xfe;
      }
    }
    else {
      local_14 = 0xe;
    }
  }
  else {
    local_14 = 7;
  }
  return local_14;
}
```
