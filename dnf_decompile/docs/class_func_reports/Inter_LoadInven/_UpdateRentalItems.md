# _UpdateRentalItems

`_ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY`

`Inter_LoadInven::_UpdateRentalItems(CUser*, SIG_LOAD_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadInven` | `0x084c455c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c455c  _ZN15Inter_LoadInven18_UpdateRentalItemsEP5CUserP18SIG_LOAD_INVENTORY
#           Inter_LoadInven::_UpdateRentalItems(CUser*, SIG_LOAD_INVENTORY*)
# range [0x084c455c, 0x084c4857]
084c455c +0x000:  push   %ebp
084c455d +0x001:  mov    %esp,%ebp
084c455f +0x003:  push   %esi
084c4560 +0x004:  push   %ebx
084c4561 +0x005:  add    $0xffffff80,%esp
084c4564 +0x008:  cmpl   $0x0,0xc(%ebp)
084c4568 +0x00c:  je     084c4849 <+0x2ed>
084c456e +0x012:  cmpl   $0x0,0x10(%ebp)
084c4572 +0x016:  je     084c484c <+0x2f0>
084c4578 +0x01c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c457d +0x021:  mov    %eax,(%esp)
084c4580 +0x024:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084c4585 +0x029:  mov    %eax,-0x1c(%ebp)
084c4588 +0x02c:  cmpl   $0xf,-0x1c(%ebp)
084c458c +0x030:  je     084c4594 <+0x38>
084c458e +0x032:  cmpl   $0x10,-0x1c(%ebp)
084c4592 +0x036:  jne    084c45ac <+0x50>
084c4594 +0x038:  movl   $0x1,0x4(%esp)
084c459c +0x040:  mov    0xc(%ebp),%eax
084c459f +0x043:  mov    %eax,(%esp)
084c45a2 +0x046:  call   08677022 <_ZN5CUser20DeleteRentalItemInfoEi>  ; CUser::DeleteRentalItemInfo(int)
084c45a7 +0x04b:  jmp    084c484d <+0x2f1>
084c45ac +0x050:  lea    -0x34(%ebp),%eax
084c45af +0x053:  mov    %eax,(%esp)
084c45b2 +0x056:  call   0822f058 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4702>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4702
084c45b7 +0x05b:  movl   $0x1,-0x28(%ebp)
084c45be +0x062:  movb   $0x1,-0x23(%ebp)
084c45c2 +0x066:  mov    0xc(%ebp),%eax
084c45c5 +0x069:  mov    %eax,(%esp)
084c45c8 +0x06c:  call   084ec60e <_GLOBAL__I__Z7getUserj+0x35c0>  ; global constructors keyed to getUser(unsigned int)+0x35c0
084c45cd +0x071:  test   %al,%al
084c45cf +0x073:  je     084c4680 <+0x124>
084c45d5 +0x079:  lea    -0x3c(%ebp),%eax
084c45d8 +0x07c:  mov    %eax,(%esp)
084c45db +0x07f:  call   0822f02e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46d8
084c45e0 +0x084:  movl   $0x0,-0x18(%ebp)
084c45e7 +0x08b:  jmp    084c466c <+0x110>
084c45ec +0x090:  mov    -0x18(%ebp),%edx
084c45ef +0x093:  mov    %edx,%eax
084c45f1 +0x095:  add    %eax,%eax
084c45f3 +0x097:  add    %edx,%eax
084c45f5 +0x099:  shl    $0x2,%eax
084c45f8 +0x09c:  add    $&_ZL14gUnicodeBuffer+0xaeb4,%eax
084c45fd +0x0a1:  add    0x10(%ebp),%eax
084c4600 +0x0a4:  add    $0x4,%eax
084c4603 +0x0a7:  mov    %eax,-0x14(%ebp)
084c4606 +0x0aa:  mov    -0x14(%ebp),%eax
084c4609 +0x0ad:  mov    (%eax),%eax
084c460b +0x0af:  test   %eax,%eax
084c460d +0x0b1:  je     084c4667 <+0x10b>
084c460f +0x0b3:  mov    -0x14(%ebp),%eax
084c4612 +0x0b6:  movzbl 0x4(%eax),%eax
084c4616 +0x0ba:  mov    %al,-0x3c(%ebp)
084c4619 +0x0bd:  mov    -0x14(%ebp),%eax
084c461c +0x0c0:  movzbl 0x5(%eax),%eax
084c4620 +0x0c4:  mov    %al,-0x3b(%ebp)
084c4623 +0x0c7:  movb   $0x0,-0x3a(%ebp)
084c4627 +0x0cb:  mov    -0x18(%ebp),%edx
084c462a +0x0ce:  mov    0x10(%ebp),%ecx
084c462d +0x0d1:  mov    %edx,%eax
084c462f +0x0d3:  add    %eax,%eax
084c4631 +0x0d5:  add    %edx,%eax
084c4633 +0x0d7:  shl    $0x2,%eax
084c4636 +0x0da:  lea    (%ecx,%eax,1),%eax
084c4639 +0x0dd:  add    $&_ZL14gUnicodeBuffer+0xaeb4,%eax
084c463e +0x0e2:  movzbl 0xa(%eax),%eax
084c4642 +0x0e6:  test   %al,%al
084c4644 +0x0e8:  je     084c464a <+0xee>
084c4646 +0x0ea:  movb   $0x1,-0x3a(%ebp)
084c464a +0x0ee:  mov    -0x14(%ebp),%eax
084c464d +0x0f1:  mov    0x8(%eax),%eax
084c4650 +0x0f4:  mov    %eax,-0x38(%ebp)
084c4653 +0x0f7:  lea    -0x3c(%ebp),%eax
084c4656 +0x0fa:  mov    %eax,0x4(%esp)
084c465a +0x0fe:  lea    -0x34(%ebp),%eax
084c465d +0x101:  mov    %eax,(%esp)
084c4660 +0x104:  call   08237464 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcb0e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcb0e
084c4665 +0x109:  jmp    084c4668 <+0x10c>
084c4667 +0x10b:  nop
084c4668 +0x10c:  addl   $0x1,-0x18(%ebp)
084c466c +0x110:  cmpl   $0x0,-0x18(%ebp)
084c4670 +0x114:  setle  %al
084c4673 +0x117:  test   %al,%al
084c4675 +0x119:  jne    084c45ec <+0x90>
084c467b +0x11f:  jmp    084c477e <+0x222>
084c4680 +0x124:  lea    -0x48(%ebp),%eax
084c4683 +0x127:  mov    %eax,(%esp)
084c4686 +0x12a:  call   08236134 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7de
084c468b +0x12f:  movl   $0x1,0x8(%esp)
084c4693 +0x137:  lea    -0x48(%ebp),%eax
084c4696 +0x13a:  mov    %eax,0x4(%esp)
084c469a +0x13e:  mov    0xc(%ebp),%eax
084c469d +0x141:  mov    %eax,(%esp)
084c46a0 +0x144:  call   08677166 <_ZN5CUser26GetCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>  ; CUser::GetCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
084c46a5 +0x149:  test   %al,%al
084c46a7 +0x14b:  je     084c4773 <+0x217>
084c46ad +0x151:  lea    -0x4c(%ebp),%eax
084c46b0 +0x154:  lea    -0x48(%ebp),%edx
084c46b3 +0x157:  mov    %edx,0x4(%esp)
084c46b7 +0x15b:  mov    %eax,(%esp)
084c46ba +0x15e:  call   082375a6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc50>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc50
084c46bf +0x163:  sub    $0x4,%esp
084c46c2 +0x166:  jmp    084c472a <+0x1ce>
084c46c4 +0x168:  lea    -0x4c(%ebp),%eax
084c46c7 +0x16b:  mov    %eax,(%esp)
084c46ca +0x16e:  call   08271e4e <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x474>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x474
084c46cf +0x173:  mov    %eax,-0x10(%ebp)
084c46d2 +0x176:  lea    -0x54(%ebp),%eax
084c46d5 +0x179:  mov    %eax,(%esp)
084c46d8 +0x17c:  call   0822f02e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46d8
084c46dd +0x181:  mov    -0x10(%ebp),%eax
084c46e0 +0x184:  movzbl 0x8(%eax),%eax
084c46e4 +0x188:  mov    %al,-0x54(%ebp)
084c46e7 +0x18b:  mov    -0x10(%ebp),%eax
084c46ea +0x18e:  movzbl 0x9(%eax),%eax
084c46ee +0x192:  mov    %al,-0x53(%ebp)
084c46f1 +0x195:  movb   $0x0,-0x52(%ebp)
084c46f5 +0x199:  mov    -0x10(%ebp),%eax
084c46f8 +0x19c:  movzbl 0xa(%eax),%eax
084c46fc +0x1a0:  test   %al,%al
084c46fe +0x1a2:  je     084c4704 <+0x1a8>
084c4700 +0x1a4:  movb   $0x1,-0x52(%ebp)
084c4704 +0x1a8:  mov    -0x10(%ebp),%eax
084c4707 +0x1ab:  mov    0xc(%eax),%eax
084c470a +0x1ae:  mov    %eax,-0x50(%ebp)
084c470d +0x1b1:  lea    -0x54(%ebp),%eax
084c4710 +0x1b4:  mov    %eax,0x4(%esp)
084c4714 +0x1b8:  lea    -0x34(%ebp),%eax
084c4717 +0x1bb:  mov    %eax,(%esp)
084c471a +0x1be:  call   08237464 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcb0e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcb0e
084c471f +0x1c3:  lea    -0x4c(%ebp),%eax
084c4722 +0x1c6:  mov    %eax,(%esp)
084c4725 +0x1c9:  call   08271e38 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x45e>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x45e
084c472a +0x1ce:  lea    -0x20(%ebp),%eax
084c472d +0x1d1:  lea    -0x48(%ebp),%edx
084c4730 +0x1d4:  mov    %edx,0x4(%esp)
084c4734 +0x1d8:  mov    %eax,(%esp)
084c4737 +0x1db:  call   082375e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc8e
084c473c +0x1e0:  sub    $0x4,%esp
084c473f +0x1e3:  lea    -0x20(%ebp),%eax
084c4742 +0x1e6:  mov    %eax,0x4(%esp)
084c4746 +0x1ea:  lea    -0x4c(%ebp),%eax
084c4749 +0x1ed:  mov    %eax,(%esp)
084c474c +0x1f0:  call   08271e0b <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x431>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x431
084c4751 +0x1f5:  test   %al,%al
084c4753 +0x1f7:  jne    084c46c4 <+0x168>
084c4759 +0x1fd:  jmp    084c4773 <+0x217>
084c475b +0x1ff:  mov    %edx,%ebx
084c475d +0x201:  mov    %eax,%esi
084c475f +0x203:  lea    -0x48(%ebp),%eax
084c4762 +0x206:  mov    %eax,(%esp)
084c4765 +0x209:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
084c476a +0x20e:  mov    %esi,%eax
084c476c +0x210:  mov    %ebx,%edx
084c476e +0x212:  jmp    084c4821 <+0x2c5>
084c4773 +0x217:  lea    -0x48(%ebp),%eax
084c4776 +0x21a:  mov    %eax,(%esp)
084c4779 +0x21d:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
084c477e +0x222:  lea    -0x34(%ebp),%eax
084c4781 +0x225:  mov    %eax,(%esp)
084c4784 +0x228:  call   084f1602 <_GLOBAL__I__Z7getUserj+0x85b4>  ; global constructors keyed to getUser(unsigned int)+0x85b4
084c4789 +0x22d:  xor    $0x1,%eax
084c478c +0x230:  test   %al,%al
084c478e +0x232:  je     084c480c <+0x2b0>
084c4790 +0x234:  lea    -0x6c(%ebp),%eax
084c4793 +0x237:  mov    %eax,(%esp)
084c4796 +0x23a:  call   08231c4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x72f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x72f8
084c479b +0x23f:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
084c47a0 +0x244:  lea    -0x6c(%ebp),%edx
084c47a3 +0x247:  mov    %edx,0xc(%esp)
084c47a7 +0x24b:  lea    -0x34(%ebp),%edx
084c47aa +0x24e:  mov    %edx,0x8(%esp)
084c47ae +0x252:  mov    0xc(%ebp),%edx
084c47b1 +0x255:  mov    %edx,0x4(%esp)
084c47b5 +0x259:  mov    %eax,(%esp)
084c47b8 +0x25c:  call   08270288 <_ZN20InstanceRentalSystem4RentER5CUserRKNS_9RentInputERNS_10RentOutputE>  ; InstanceRentalSystem::Rent(CUser&, InstanceRentalSystem::RentInput const&, InstanceRentalSystem::RentOutput&)
084c47bd +0x261:  mov    %eax,-0xc(%ebp)
084c47c0 +0x264:  cmpl   $0x0,-0xc(%ebp)
084c47c4 +0x268:  jne    084c47ff <+0x2a3>
084c47c6 +0x26a:  movl   $0x1,0xc(%esp)
084c47ce +0x272:  movl   $0x1,0x8(%esp)
084c47d6 +0x27a:  lea    -0x6c(%ebp),%eax
084c47d9 +0x27d:  mov    %eax,0x4(%esp)
084c47dd +0x281:  mov    0xc(%ebp),%eax
084c47e0 +0x284:  mov    %eax,(%esp)
084c47e3 +0x287:  call   08676e3c <_ZN5CUser29UpdateCurrentCharacRentalInfoERKN20InstanceRentalSystem10RentOutputEib>  ; CUser::UpdateCurrentCharacRentalInfo(InstanceRentalSystem::RentOutput const&, int, bool)
084c47e8 +0x28c:  jmp    084c47ff <+0x2a3>
084c47ea +0x28e:  mov    %edx,%ebx
084c47ec +0x290:  mov    %eax,%esi
084c47ee +0x292:  lea    -0x6c(%ebp),%eax
084c47f1 +0x295:  mov    %eax,(%esp)
084c47f4 +0x298:  call   08231c94 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x733e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x733e
084c47f9 +0x29d:  mov    %esi,%eax
084c47fb +0x29f:  mov    %ebx,%edx
084c47fd +0x2a1:  jmp    084c4821 <+0x2c5>
084c47ff +0x2a3:  lea    -0x6c(%ebp),%eax
084c4802 +0x2a6:  mov    %eax,(%esp)
084c4805 +0x2a9:  call   08231c94 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x733e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x733e
084c480a +0x2ae:  jmp    084c483c <+0x2e0>
084c480c +0x2b0:  movl   $0x1,0x4(%esp)
084c4814 +0x2b8:  mov    0xc(%ebp),%eax
084c4817 +0x2bb:  mov    %eax,(%esp)
084c481a +0x2be:  call   08677050 <_ZN5CUser33DeleteCurrentCharacRentalItemInfoEi>  ; CUser::DeleteCurrentCharacRentalItemInfo(int)
084c481f +0x2c3:  jmp    084c483c <+0x2e0>
084c4821 +0x2c5:  mov    %edx,%ebx
084c4823 +0x2c7:  mov    %eax,%esi
084c4825 +0x2c9:  lea    -0x34(%ebp),%eax
084c4828 +0x2cc:  mov    %eax,(%esp)
084c482b +0x2cf:  call   082352b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa95c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa95c
084c4830 +0x2d4:  mov    %esi,%eax
084c4832 +0x2d6:  mov    %ebx,%edx
084c4834 +0x2d8:  mov    %eax,(%esp)
084c4837 +0x2db:  call   08ae3750 <_Unwind_Resume>
084c483c +0x2e0:  lea    -0x34(%ebp),%eax
084c483f +0x2e3:  mov    %eax,(%esp)
084c4842 +0x2e6:  call   082352b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa95c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa95c
084c4847 +0x2eb:  jmp    084c484d <+0x2f1>
084c4849 +0x2ed:  nop
084c484a +0x2ee:  jmp    084c484d <+0x2f1>
084c484c +0x2f0:  nop
084c484d +0x2f1:  lea    -0x8(%ebp),%esp
084c4850 +0x2f4:  add    $0x0,%esp
084c4853 +0x2f7:  pop    %ebx
084c4854 +0x2f8:  pop    %esi
084c4855 +0x2f9:  pop    %ebp
084c4856 +0x2fa:  ret
084c4857 +0x2fb:  nop
```

## 反编译 C

```c
// Inter_LoadInven::_UpdateRentalItems @ 0x84c455c

/* Inter_LoadInven::_UpdateRentalItems(CUser*, SIG_LOAD_INVENTORY*) */

void __thiscall
Inter_LoadInven::_UpdateRentalItems
          (Inter_LoadInven *this,CUser *param_1,SIG_LOAD_INVENTORY *param_2)

{
  char cVar1;
  bool bVar2;
  GameWorld *this_00;
  RentOutput local_70 [24];
  RentInElem local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined4 local_54;
  __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
  local_50 [4];
  vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
  local_4c [12];
  SIG_LOAD_INVENTORY local_40;
  SIG_LOAD_INVENTORY local_3f;
  undefined1 local_3e;
  undefined4 local_3c;
  RentInput local_38 [12];
  undefined4 local_2c;
  undefined1 local_27;
  __normal_iterator local_24 [4];
  int local_20;
  int local_1c;
  SIG_LOAD_INVENTORY *local_18;
  int local_14;
  int local_10;
  
  if ((param_1 != (CUser *)0x0) && (param_2 != (SIG_LOAD_INVENTORY *)0x0)) {
    this_00 = (GameWorld *)G_GameWorld();
    local_20 = GameWorld::GetChannelType(this_00);
    if ((local_20 == 0xf) || (local_20 == 0x10)) {
      CUser::DeleteRentalItemInfo(param_1,1);
    }
    else {
      InstanceRentalSystem::RentInput::RentInput(local_38);
      local_2c = 1;
      local_27 = 1;
      cVar1 = CUser::CheckLoadRentalInfoFromExchange(param_1);
      if (cVar1 == '\0') {
        std::
        vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
        vector(local_4c);
                    /* try { // try from 084c46a0 to 084c4750 has its CatchHandler @ 084c475b */
        cVar1 = CUser::GetCurrentCharacRentalInfo(param_1,(vector *)local_4c,1);
        if (cVar1 != '\0') {
          std::
          vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
          ::begin();
          while( true ) {
            std::
            vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
            ::end();
            bVar2 = __gnu_cxx::operator!=(local_50,local_24);
            if (!bVar2) break;
            local_14 = __gnu_cxx::
                       __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
                       ::operator*(local_50);
            InstanceRentalSystem::RentInput::RentInElem::RentInElem(&local_58);
            local_58 = *(RentInElem *)(local_14 + 8);
            local_57 = *(undefined1 *)(local_14 + 9);
            local_56 = *(char *)(local_14 + 10) != '\0';
            local_54 = *(undefined4 *)(local_14 + 0xc);
            std::
            vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
            ::push_back((vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
                         *)local_38,&local_58);
            __gnu_cxx::
            __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
            ::operator++(local_50);
          }
        }
                    /* try { // try from 084c4779 to 084c479a has its CatchHandler @ 084c4821 */
        std::
        vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
        ~vector(local_4c);
      }
      else {
        InstanceRentalSystem::RentInput::RentInElem::RentInElem((RentInElem *)&local_40);
        for (local_1c = 0; local_1c < 1; local_1c = local_1c + 1) {
          local_18 = param_2 + local_1c * 0xc + 0x153e4;
          if (*(int *)local_18 != 0) {
            local_40 = param_2[local_1c * 0xc + 0x153e8];
            local_3f = param_2[local_1c * 0xc + 0x153e9];
            local_3e = param_2[local_1c * 0xc + 0x153ea] != (SIG_LOAD_INVENTORY)0x0;
            local_3c = *(undefined4 *)(param_2 + local_1c * 0xc + 0x153ec);
                    /* try { // try from 084c4660 to 084c468a has its CatchHandler @ 084c4821 */
            std::
            vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
            ::push_back((vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
                         *)local_38,(RentInElem *)&local_40);
          }
        }
      }
      cVar1 = std::
              vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
              ::empty();
      if (cVar1 == '\x01') {
        CUser::DeleteCurrentCharacRentalItemInfo(param_1,1);
      }
      else {
        InstanceRentalSystem::RentOutput::RentOutput(local_70);
                    /* try { // try from 084c47b8 to 084c47e7 has its CatchHandler @ 084c47ea */
        local_10 = InstanceRentalSystem::Rent(GlobalData::s_rentalSystem,param_1,local_38,local_70);
        if (local_10 == 0) {
          CUser::UpdateCurrentCharacRentalInfo(param_1,local_70,1,true);
        }
                    /* try { // try from 084c4805 to 084c481e has its CatchHandler @ 084c4821 */
        InstanceRentalSystem::RentOutput::~RentOutput(local_70);
      }
      InstanceRentalSystem::RentInput::~RentInput(local_38);
    }
  }
  return;
}
```
