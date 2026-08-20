# _UpdateDimensionRentalItems

`_ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY`

`Inter_LoadInven::_UpdateDimensionRentalItems(CUser*, SIG_LOAD_INVENTORY*)`

| 类 | 地址 |
|---|---|
| `Inter_LoadInven` | `0x084c4858` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084c4858  _ZN15Inter_LoadInven27_UpdateDimensionRentalItemsEP5CUserP18SIG_LOAD_INVENTORY
#           Inter_LoadInven::_UpdateDimensionRentalItems(CUser*, SIG_LOAD_INVENTORY*)
# range [0x084c4858, 0x084c4b37]
084c4858 +0x000:  push   %ebp
084c4859 +0x001:  mov    %esp,%ebp
084c485b +0x003:  push   %esi
084c485c +0x004:  push   %ebx
084c485d +0x005:  add    $0xffffff80,%esp
084c4860 +0x008:  cmpl   $0x0,0xc(%ebp)
084c4864 +0x00c:  je     084c4b29 <+0x2d1>
084c486a +0x012:  cmpl   $0x0,0x10(%ebp)
084c486e +0x016:  je     084c4b2c <+0x2d4>
084c4874 +0x01c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084c4879 +0x021:  mov    %eax,(%esp)
084c487c +0x024:  call   08116b20 <_GLOBAL__I__ZN13CEventManagerC2Ev+0x235>  ; global constructors keyed to CEventManager::CEventManager()+0x235
084c4881 +0x029:  mov    %eax,-0x1c(%ebp)
084c4884 +0x02c:  cmpl   $0xf,-0x1c(%ebp)
084c4888 +0x030:  je     084c4890 <+0x38>
084c488a +0x032:  cmpl   $0x10,-0x1c(%ebp)
084c488e +0x036:  jne    084c48a8 <+0x50>
084c4890 +0x038:  movl   $0x2,0x4(%esp)
084c4898 +0x040:  mov    0xc(%ebp),%eax
084c489b +0x043:  mov    %eax,(%esp)
084c489e +0x046:  call   08677022 <_ZN5CUser20DeleteRentalItemInfoEi>  ; CUser::DeleteRentalItemInfo(int)
084c48a3 +0x04b:  jmp    084c4b2d <+0x2d5>
084c48a8 +0x050:  lea    -0x34(%ebp),%eax
084c48ab +0x053:  mov    %eax,(%esp)
084c48ae +0x056:  call   0822f058 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4702>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4702
084c48b3 +0x05b:  movl   $0x2,-0x28(%ebp)
084c48ba +0x062:  mov    0xc(%ebp),%eax
084c48bd +0x065:  mov    %eax,(%esp)
084c48c0 +0x068:  call   084ec60e <_GLOBAL__I__Z7getUserj+0x35c0>  ; global constructors keyed to getUser(unsigned int)+0x35c0
084c48c5 +0x06d:  test   %al,%al
084c48c7 +0x06f:  je     084c495f <+0x107>
084c48cd +0x075:  lea    -0x3c(%ebp),%eax
084c48d0 +0x078:  mov    %eax,(%esp)
084c48d3 +0x07b:  call   0822f02e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46d8
084c48d8 +0x080:  movl   $0x0,-0x18(%ebp)
084c48df +0x087:  jmp    084c494f <+0xf7>
084c48e1 +0x089:  mov    -0x18(%ebp),%eax
084c48e4 +0x08c:  add    $0x2a7e,%eax
084c48e9 +0x091:  shl    $0x3,%eax
084c48ec +0x094:  add    0x10(%ebp),%eax
084c48ef +0x097:  mov    %eax,-0x14(%ebp)
084c48f2 +0x09a:  mov    -0x14(%ebp),%eax
084c48f5 +0x09d:  mov    (%eax),%eax
084c48f7 +0x09f:  test   %eax,%eax
084c48f9 +0x0a1:  je     084c494a <+0xf2>
084c48fb +0x0a3:  mov    -0x14(%ebp),%eax
084c48fe +0x0a6:  movzbl 0x4(%eax),%eax
084c4902 +0x0aa:  mov    %al,-0x3c(%ebp)
084c4905 +0x0ad:  mov    -0x14(%ebp),%eax
084c4908 +0x0b0:  movzbl 0x5(%eax),%eax
084c490c +0x0b4:  mov    %al,-0x3b(%ebp)
084c490f +0x0b7:  movb   $0x0,-0x3a(%ebp)
084c4913 +0x0bb:  mov    -0x14(%ebp),%eax
084c4916 +0x0be:  movzbl 0x7(%eax),%eax
084c491a +0x0c2:  mov    %al,-0x39(%ebp)
084c491d +0x0c5:  mov    -0x18(%ebp),%edx
084c4920 +0x0c8:  mov    0x10(%ebp),%eax
084c4923 +0x0cb:  add    $0x2a7e,%edx
084c4929 +0x0d1:  movzbl 0x6(%eax,%edx,8),%eax
084c492e +0x0d6:  test   %al,%al
084c4930 +0x0d8:  je     084c4936 <+0xde>
084c4932 +0x0da:  movb   $0x1,-0x3a(%ebp)
084c4936 +0x0de:  lea    -0x3c(%ebp),%eax
084c4939 +0x0e1:  mov    %eax,0x4(%esp)
084c493d +0x0e5:  lea    -0x34(%ebp),%eax
084c4940 +0x0e8:  mov    %eax,(%esp)
084c4943 +0x0eb:  call   08237464 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcb0e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcb0e
084c4948 +0x0f0:  jmp    084c494b <+0xf3>
084c494a +0x0f2:  nop
084c494b +0x0f3:  addl   $0x1,-0x18(%ebp)
084c494f +0x0f7:  cmpl   $0xa,-0x18(%ebp)
084c4953 +0x0fb:  setle  %al
084c4956 +0x0fe:  test   %al,%al
084c4958 +0x100:  jne    084c48e1 <+0x89>
084c495a +0x102:  jmp    084c4a5e <+0x206>
084c495f +0x107:  lea    -0x48(%ebp),%eax
084c4962 +0x10a:  mov    %eax,(%esp)
084c4965 +0x10d:  call   08236134 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7de>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7de
084c496a +0x112:  movl   $0x2,0x8(%esp)
084c4972 +0x11a:  lea    -0x48(%ebp),%eax
084c4975 +0x11d:  mov    %eax,0x4(%esp)
084c4979 +0x121:  mov    0xc(%ebp),%eax
084c497c +0x124:  mov    %eax,(%esp)
084c497f +0x127:  call   08677166 <_ZN5CUser26GetCurrentCharacRentalInfoERSt6vectorIN20InstanceRentalSystem10RentalInfoESaIS2_EEi>  ; CUser::GetCurrentCharacRentalInfo(std::vector<InstanceRentalSystem::RentalInfo, std::allocator<InstanceRentalSystem::RentalInfo> >&, int)
084c4984 +0x12c:  test   %al,%al
084c4986 +0x12e:  je     084c4a53 <+0x1fb>
084c498c +0x134:  lea    -0x4c(%ebp),%eax
084c498f +0x137:  lea    -0x48(%ebp),%edx
084c4992 +0x13a:  mov    %edx,0x4(%esp)
084c4996 +0x13e:  mov    %eax,(%esp)
084c4999 +0x141:  call   082375a6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc50>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc50
084c499e +0x146:  sub    $0x4,%esp
084c49a1 +0x149:  jmp    084c4a0a <+0x1b2>
084c49a3 +0x14b:  lea    -0x4c(%ebp),%eax
084c49a6 +0x14e:  mov    %eax,(%esp)
084c49a9 +0x151:  call   08271e4e <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x474>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x474
084c49ae +0x156:  mov    %eax,-0x10(%ebp)
084c49b1 +0x159:  lea    -0x54(%ebp),%eax
084c49b4 +0x15c:  mov    %eax,(%esp)
084c49b7 +0x15f:  call   0822f02e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x46d8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x46d8
084c49bc +0x164:  mov    -0x10(%ebp),%eax
084c49bf +0x167:  movzbl 0x8(%eax),%eax
084c49c3 +0x16b:  mov    %al,-0x54(%ebp)
084c49c6 +0x16e:  mov    -0x10(%ebp),%eax
084c49c9 +0x171:  movzbl 0x9(%eax),%eax
084c49cd +0x175:  mov    %al,-0x53(%ebp)
084c49d0 +0x178:  movb   $0x0,-0x52(%ebp)
084c49d4 +0x17c:  mov    -0x10(%ebp),%eax
084c49d7 +0x17f:  movzbl 0xb(%eax),%eax
084c49db +0x183:  mov    %al,-0x51(%ebp)
084c49de +0x186:  mov    -0x10(%ebp),%eax
084c49e1 +0x189:  movzbl 0xa(%eax),%eax
084c49e5 +0x18d:  test   %al,%al
084c49e7 +0x18f:  je     084c49ed <+0x195>
084c49e9 +0x191:  movb   $0x1,-0x52(%ebp)
084c49ed +0x195:  lea    -0x54(%ebp),%eax
084c49f0 +0x198:  mov    %eax,0x4(%esp)
084c49f4 +0x19c:  lea    -0x34(%ebp),%eax
084c49f7 +0x19f:  mov    %eax,(%esp)
084c49fa +0x1a2:  call   08237464 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcb0e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcb0e
084c49ff +0x1a7:  lea    -0x4c(%ebp),%eax
084c4a02 +0x1aa:  mov    %eax,(%esp)
084c4a05 +0x1ad:  call   08271e38 <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x45e>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x45e
084c4a0a +0x1b2:  lea    -0x20(%ebp),%eax
084c4a0d +0x1b5:  lea    -0x48(%ebp),%edx
084c4a10 +0x1b8:  mov    %edx,0x4(%esp)
084c4a14 +0x1bc:  mov    %eax,(%esp)
084c4a17 +0x1bf:  call   082375e4 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xcc8e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xcc8e
084c4a1c +0x1c4:  sub    $0x4,%esp
084c4a1f +0x1c7:  lea    -0x20(%ebp),%eax
084c4a22 +0x1ca:  mov    %eax,0x4(%esp)
084c4a26 +0x1ce:  lea    -0x4c(%ebp),%eax
084c4a29 +0x1d1:  mov    %eax,(%esp)
084c4a2c +0x1d4:  call   08271e0b <_GLOBAL__I__ZN20InstanceRentalSystemC2Ev+0x431>  ; global constructors keyed to InstanceRentalSystem::InstanceRentalSystem()+0x431
084c4a31 +0x1d9:  test   %al,%al
084c4a33 +0x1db:  jne    084c49a3 <+0x14b>
084c4a39 +0x1e1:  jmp    084c4a53 <+0x1fb>
084c4a3b +0x1e3:  mov    %edx,%ebx
084c4a3d +0x1e5:  mov    %eax,%esi
084c4a3f +0x1e7:  lea    -0x48(%ebp),%eax
084c4a42 +0x1ea:  mov    %eax,(%esp)
084c4a45 +0x1ed:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
084c4a4a +0x1f2:  mov    %esi,%eax
084c4a4c +0x1f4:  mov    %ebx,%edx
084c4a4e +0x1f6:  jmp    084c4b01 <+0x2a9>
084c4a53 +0x1fb:  lea    -0x48(%ebp),%eax
084c4a56 +0x1fe:  mov    %eax,(%esp)
084c4a59 +0x201:  call   08236148 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xb7f2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xb7f2
084c4a5e +0x206:  lea    -0x34(%ebp),%eax
084c4a61 +0x209:  mov    %eax,(%esp)
084c4a64 +0x20c:  call   084f1602 <_GLOBAL__I__Z7getUserj+0x85b4>  ; global constructors keyed to getUser(unsigned int)+0x85b4
084c4a69 +0x211:  xor    $0x1,%eax
084c4a6c +0x214:  test   %al,%al
084c4a6e +0x216:  je     084c4aec <+0x294>
084c4a70 +0x218:  lea    -0x6c(%ebp),%eax
084c4a73 +0x21b:  mov    %eax,(%esp)
084c4a76 +0x21e:  call   08231c4e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x72f8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x72f8
084c4a7b +0x223:  mov    &_ZN10GlobalData14s_rentalSystemE,%eax
084c4a80 +0x228:  lea    -0x6c(%ebp),%edx
084c4a83 +0x22b:  mov    %edx,0xc(%esp)
084c4a87 +0x22f:  lea    -0x34(%ebp),%edx
084c4a8a +0x232:  mov    %edx,0x8(%esp)
084c4a8e +0x236:  mov    0xc(%ebp),%edx
084c4a91 +0x239:  mov    %edx,0x4(%esp)
084c4a95 +0x23d:  mov    %eax,(%esp)
084c4a98 +0x240:  call   08270288 <_ZN20InstanceRentalSystem4RentER5CUserRKNS_9RentInputERNS_10RentOutputE>  ; InstanceRentalSystem::Rent(CUser&, InstanceRentalSystem::RentInput const&, InstanceRentalSystem::RentOutput&)
084c4a9d +0x245:  mov    %eax,-0xc(%ebp)
084c4aa0 +0x248:  cmpl   $0x0,-0xc(%ebp)
084c4aa4 +0x24c:  jne    084c4adf <+0x287>
084c4aa6 +0x24e:  movl   $0x1,0xc(%esp)
084c4aae +0x256:  movl   $0x2,0x8(%esp)
084c4ab6 +0x25e:  lea    -0x6c(%ebp),%eax
084c4ab9 +0x261:  mov    %eax,0x4(%esp)
084c4abd +0x265:  mov    0xc(%ebp),%eax
084c4ac0 +0x268:  mov    %eax,(%esp)
084c4ac3 +0x26b:  call   08676e3c <_ZN5CUser29UpdateCurrentCharacRentalInfoERKN20InstanceRentalSystem10RentOutputEib>  ; CUser::UpdateCurrentCharacRentalInfo(InstanceRentalSystem::RentOutput const&, int, bool)
084c4ac8 +0x270:  jmp    084c4adf <+0x287>
084c4aca +0x272:  mov    %edx,%ebx
084c4acc +0x274:  mov    %eax,%esi
084c4ace +0x276:  lea    -0x6c(%ebp),%eax
084c4ad1 +0x279:  mov    %eax,(%esp)
084c4ad4 +0x27c:  call   08231c94 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x733e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x733e
084c4ad9 +0x281:  mov    %esi,%eax
084c4adb +0x283:  mov    %ebx,%edx
084c4add +0x285:  jmp    084c4b01 <+0x2a9>
084c4adf +0x287:  lea    -0x6c(%ebp),%eax
084c4ae2 +0x28a:  mov    %eax,(%esp)
084c4ae5 +0x28d:  call   08231c94 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x733e>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x733e
084c4aea +0x292:  jmp    084c4b1c <+0x2c4>
084c4aec +0x294:  movl   $0x2,0x4(%esp)
084c4af4 +0x29c:  mov    0xc(%ebp),%eax
084c4af7 +0x29f:  mov    %eax,(%esp)
084c4afa +0x2a2:  call   08677050 <_ZN5CUser33DeleteCurrentCharacRentalItemInfoEi>  ; CUser::DeleteCurrentCharacRentalItemInfo(int)
084c4aff +0x2a7:  jmp    084c4b1c <+0x2c4>
084c4b01 +0x2a9:  mov    %edx,%ebx
084c4b03 +0x2ab:  mov    %eax,%esi
084c4b05 +0x2ad:  lea    -0x34(%ebp),%eax
084c4b08 +0x2b0:  mov    %eax,(%esp)
084c4b0b +0x2b3:  call   082352b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa95c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa95c
084c4b10 +0x2b8:  mov    %esi,%eax
084c4b12 +0x2ba:  mov    %ebx,%edx
084c4b14 +0x2bc:  mov    %eax,(%esp)
084c4b17 +0x2bf:  call   08ae3750 <_Unwind_Resume>
084c4b1c +0x2c4:  lea    -0x34(%ebp),%eax
084c4b1f +0x2c7:  mov    %eax,(%esp)
084c4b22 +0x2ca:  call   082352b2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xa95c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xa95c
084c4b27 +0x2cf:  jmp    084c4b2d <+0x2d5>
084c4b29 +0x2d1:  nop
084c4b2a +0x2d2:  jmp    084c4b2d <+0x2d5>
084c4b2c +0x2d4:  nop
084c4b2d +0x2d5:  lea    -0x8(%ebp),%esp
084c4b30 +0x2d8:  add    $0x0,%esp
084c4b33 +0x2db:  pop    %ebx
084c4b34 +0x2dc:  pop    %esi
084c4b35 +0x2dd:  pop    %ebp
084c4b36 +0x2de:  ret
084c4b37 +0x2df:  nop
```

## 反编译 C

```c
// Inter_LoadInven::_UpdateDimensionRentalItems @ 0x84c4858

/* Inter_LoadInven::_UpdateDimensionRentalItems(CUser*, SIG_LOAD_INVENTORY*) */

void __thiscall
Inter_LoadInven::_UpdateDimensionRentalItems
          (Inter_LoadInven *this,CUser *param_1,SIG_LOAD_INVENTORY *param_2)

{
  char cVar1;
  bool bVar2;
  GameWorld *this_00;
  RentOutput local_70 [24];
  RentInElem local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
  local_50 [4];
  vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>
  local_4c [12];
  SIG_LOAD_INVENTORY local_40;
  SIG_LOAD_INVENTORY local_3f;
  undefined1 local_3e;
  SIG_LOAD_INVENTORY local_3d;
  RentInput local_38 [12];
  undefined4 local_2c;
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
      CUser::DeleteRentalItemInfo(param_1,2);
    }
    else {
      InstanceRentalSystem::RentInput::RentInput(local_38);
      local_2c = 2;
      cVar1 = CUser::CheckLoadRentalInfoFromExchange(param_1);
      if (cVar1 == '\0') {
        std::
        vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
        vector(local_4c);
                    /* try { // try from 084c497f to 084c4a30 has its CatchHandler @ 084c4a3b */
        cVar1 = CUser::GetCurrentCharacRentalInfo(param_1,(vector *)local_4c,2);
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
            local_55 = *(undefined1 *)(local_14 + 0xb);
            local_56 = *(char *)(local_14 + 10) != '\0';
            std::
            vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
            ::push_back((vector<InstanceRentalSystem::RentInput::RentInElem,std::allocator<InstanceRentalSystem::RentInput::RentInElem>>
                         *)local_38,&local_58);
            __gnu_cxx::
            __normal_iterator<InstanceRentalSystem::RentalInfo*,std::vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>>
            ::operator++(local_50);
          }
        }
                    /* try { // try from 084c4a59 to 084c4a7a has its CatchHandler @ 084c4b01 */
        std::
        vector<InstanceRentalSystem::RentalInfo,std::allocator<InstanceRentalSystem::RentalInfo>>::
        ~vector(local_4c);
      }
      else {
        InstanceRentalSystem::RentInput::RentInElem::RentInElem((RentInElem *)&local_40);
        for (local_1c = 0; local_1c < 0xb; local_1c = local_1c + 1) {
          local_18 = param_2 + (local_1c + 0x2a7e) * 8;
          if (*(int *)local_18 != 0) {
            local_40 = local_18[4];
            local_3f = local_18[5];
            local_3d = local_18[7];
            local_3e = param_2[(local_1c + 0x2a7e) * 8 + 6] != (SIG_LOAD_INVENTORY)0x0;
                    /* try { // try from 084c4943 to 084c4969 has its CatchHandler @ 084c4b01 */
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
        CUser::DeleteCurrentCharacRentalItemInfo(param_1,2);
      }
      else {
        InstanceRentalSystem::RentOutput::RentOutput(local_70);
                    /* try { // try from 084c4a98 to 084c4ac7 has its CatchHandler @ 084c4aca */
        local_10 = InstanceRentalSystem::Rent(GlobalData::s_rentalSystem,param_1,local_38,local_70);
        if (local_10 == 0) {
          CUser::UpdateCurrentCharacRentalInfo(param_1,local_70,2,true);
        }
                    /* try { // try from 084c4ae5 to 084c4afe has its CatchHandler @ 084c4b01 */
        InstanceRentalSystem::RentOutput::~RentOutput(local_70);
      }
      InstanceRentalSystem::RentInput::~RentInput(local_38);
    }
  }
  return;
}
```
