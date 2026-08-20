# decide_growth_power_reward_system

`_ZN5CUser33decide_growth_power_reward_systemEv`

`CUser::decide_growth_power_reward_system()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0868d780` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868d780  _ZN5CUser33decide_growth_power_reward_systemEv
#           CUser::decide_growth_power_reward_system()
# range [0x0868d780, 0x0868dacd]
0868d780 +0x000:  push   %ebp
0868d781 +0x001:  mov    %esp,%ebp
0868d783 +0x003:  push   %esi
0868d784 +0x004:  push   %ebx
0868d785 +0x005:  sub    $0x40,%esp
0868d788 +0x008:  movb   $0x0,-0xe(%ebp)
0868d78c +0x00c:  movb   $0x0,-0xd(%ebp)
0868d790 +0x010:  mov    &_ZN10GlobalData15s_event_managerE,%eax
0868d795 +0x015:  movl   $0x5d,0x4(%esp)
0868d79d +0x01d:  mov    %eax,(%esp)
0868d7a0 +0x020:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
0868d7a5 +0x025:  mov    %eax,-0xc(%ebp)
0868d7a8 +0x028:  mov    -0xc(%ebp),%eax
0868d7ab +0x02b:  mov    (%eax),%eax
0868d7ad +0x02d:  add    $0x34,%eax
0868d7b0 +0x030:  mov    (%eax),%edx
0868d7b2 +0x032:  movl   $0x0,0x4(%esp)
0868d7ba +0x03a:  mov    -0xc(%ebp),%eax
0868d7bd +0x03d:  mov    %eax,(%esp)
0868d7c0 +0x040:  call   *%edx
0868d7c2 +0x042:  test   %al,%al
0868d7c4 +0x044:  je     0868d98c <+0x20c>
0868d7ca +0x04a:  mov    -0xc(%ebp),%eax
0868d7cd +0x04d:  mov    (%eax),%eax
0868d7cf +0x04f:  add    $0x34,%eax
0868d7d2 +0x052:  mov    (%eax),%edx
0868d7d4 +0x054:  movl   $0x0,0x4(%esp)
0868d7dc +0x05c:  mov    -0xc(%ebp),%eax
0868d7df +0x05f:  mov    %eax,(%esp)
0868d7e2 +0x062:  call   *%edx
0868d7e4 +0x064:  test   %al,%al
0868d7e6 +0x066:  je     0868d816 <+0x96>
0868d7e8 +0x068:  mov    0x8(%ebp),%eax
0868d7eb +0x06b:  mov    %eax,(%esp)
0868d7ee +0x06e:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0868d7f3 +0x073:  mov    %eax,%ebx
0868d7f5 +0x075:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868d7fa +0x07a:  add    $0x5094,%eax
0868d7ff +0x07f:  mov    %ebx,0x4(%esp)
0868d803 +0x083:  mov    %eax,(%esp)
0868d806 +0x086:  call   0822af22 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5cc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5cc
0868d80b +0x08b:  test   %al,%al
0868d80d +0x08d:  je     0868d816 <+0x96>
0868d80f +0x08f:  mov    $0x1,%eax
0868d814 +0x094:  jmp    0868d81b <+0x9b>
0868d816 +0x096:  mov    $0x0,%eax
0868d81b +0x09b:  test   %al,%al
0868d81d +0x09d:  je     0868d836 <+0xb6>
0868d81f +0x09f:  movb   $0x1,-0xd(%ebp)
0868d823 +0x0a3:  mov    0x8(%ebp),%eax
0868d826 +0x0a6:  movl   $0x1,0x4(%esp)
0868d82e +0x0ae:  mov    %eax,(%esp)
0868d831 +0x0b1:  call   0822fb50 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x51fa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x51fa
0868d836 +0x0b6:  mov    0x8(%ebp),%eax
0868d839 +0x0b9:  mov    %eax,(%esp)
0868d83c +0x0bc:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0868d841 +0x0c1:  mov    %eax,%ebx
0868d843 +0x0c3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868d848 +0x0c8:  lea    0x8710(%eax),%edx
0868d84e +0x0ce:  lea    -0x11(%ebp),%eax
0868d851 +0x0d1:  mov    %ebx,0x8(%esp)
0868d855 +0x0d5:  mov    %edx,0x4(%esp)
0868d859 +0x0d9:  mov    %eax,(%esp)
0868d85c +0x0dc:  call   0822b07e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x728>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x728
0868d861 +0x0e1:  sub    $0x4,%esp
0868d864 +0x0e4:  mov    0x8(%ebp),%eax
0868d867 +0x0e7:  mov    %eax,(%esp)
0868d86a +0x0ea:  call   0822fb00 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x51aa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x51aa
0868d86f +0x0ef:  movzbl -0x10(%ebp),%edx
0868d873 +0x0f3:  cmp    %dl,%al
0868d875 +0x0f5:  setb   %al
0868d878 +0x0f8:  test   %al,%al
0868d87a +0x0fa:  je     0868d880 <+0x100>
0868d87c +0x0fc:  movb   $0x1,-0xe(%ebp)
0868d880 +0x100:  cmpb   $0x0,-0xe(%ebp)
0868d884 +0x104:  jne    0868d890 <+0x110>
0868d886 +0x106:  cmpb   $0x0,-0xd(%ebp)
0868d88a +0x10a:  je     0868d96d <+0x1ed>
0868d890 +0x110:  lea    -0x20(%ebp),%eax
0868d893 +0x113:  mov    %eax,(%esp)
0868d896 +0x116:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868d89b +0x11b:  lea    -0x20(%ebp),%eax
0868d89e +0x11e:  mov    %eax,(%esp)
0868d8a1 +0x121:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0868d8a6 +0x126:  movl   $0x178,0x8(%esp)
0868d8ae +0x12e:  movl   $0x0,0x4(%esp)
0868d8b6 +0x136:  lea    -0x20(%ebp),%eax
0868d8b9 +0x139:  mov    %eax,(%esp)
0868d8bc +0x13c:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868d8c1 +0x141:  mov    0x8(%ebp),%eax
0868d8c4 +0x144:  mov    %eax,(%esp)
0868d8c7 +0x147:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0868d8cc +0x14c:  movsbl %al,%eax
0868d8cf +0x14f:  mov    %eax,0x4(%esp)
0868d8d3 +0x153:  lea    -0x20(%ebp),%eax
0868d8d6 +0x156:  mov    %eax,(%esp)
0868d8d9 +0x159:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868d8de +0x15e:  cmpb   $0x0,-0xe(%ebp)
0868d8e2 +0x162:  je     0868d8eb <+0x16b>
0868d8e4 +0x164:  mov    $0x1,%eax
0868d8e9 +0x169:  jmp    0868d8f0 <+0x170>
0868d8eb +0x16b:  mov    $0x0,%eax
0868d8f0 +0x170:  mov    %eax,0x4(%esp)
0868d8f4 +0x174:  lea    -0x20(%ebp),%eax
0868d8f7 +0x177:  mov    %eax,(%esp)
0868d8fa +0x17a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868d8ff +0x17f:  cmpb   $0x0,-0xd(%ebp)
0868d903 +0x183:  je     0868d90c <+0x18c>
0868d905 +0x185:  mov    $0x1,%eax
0868d90a +0x18a:  jmp    0868d911 <+0x191>
0868d90c +0x18c:  mov    $0x0,%eax
0868d911 +0x191:  mov    %eax,0x4(%esp)
0868d915 +0x195:  lea    -0x20(%ebp),%eax
0868d918 +0x198:  mov    %eax,(%esp)
0868d91b +0x19b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868d920 +0x1a0:  movl   $0x1,0x4(%esp)
0868d928 +0x1a8:  lea    -0x20(%ebp),%eax
0868d92b +0x1ab:  mov    %eax,(%esp)
0868d92e +0x1ae:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868d933 +0x1b3:  lea    -0x20(%ebp),%eax
0868d936 +0x1b6:  mov    %eax,0x4(%esp)
0868d93a +0x1ba:  mov    0x8(%ebp),%eax
0868d93d +0x1bd:  mov    %eax,(%esp)
0868d940 +0x1c0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868d945 +0x1c5:  jmp    0868d962 <+0x1e2>
0868d947 +0x1c7:  mov    %edx,%ebx
0868d949 +0x1c9:  mov    %eax,%esi
0868d94b +0x1cb:  lea    -0x20(%ebp),%eax
0868d94e +0x1ce:  mov    %eax,(%esp)
0868d951 +0x1d1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868d956 +0x1d6:  mov    %esi,%eax
0868d958 +0x1d8:  mov    %ebx,%edx
0868d95a +0x1da:  mov    %eax,(%esp)
0868d95d +0x1dd:  call   08ae3750 <_Unwind_Resume>
0868d962 +0x1e2:  lea    -0x20(%ebp),%eax
0868d965 +0x1e5:  mov    %eax,(%esp)
0868d968 +0x1e8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868d96d +0x1ed:  mov    0x8(%ebp),%eax
0868d970 +0x1f0:  mov    %eax,(%esp)
0868d973 +0x1f3:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0868d978 +0x1f8:  mov    %eax,0x4(%esp)
0868d97c +0x1fc:  mov    0x8(%ebp),%eax
0868d97f +0x1ff:  mov    %eax,(%esp)
0868d982 +0x202:  call   0868dace <_ZN5CUser27set_growth_power_exp_rewardEi>  ; CUser::set_growth_power_exp_reward(int)
0868d987 +0x207:  jmp    0868dac4 <+0x344>
0868d98c +0x20c:  mov    0x8(%ebp),%eax
0868d98f +0x20f:  mov    %eax,(%esp)
0868d992 +0x212:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0868d997 +0x217:  mov    %eax,%ebx
0868d999 +0x219:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0868d99e +0x21e:  lea    0x8710(%eax),%edx
0868d9a4 +0x224:  lea    -0x23(%ebp),%eax
0868d9a7 +0x227:  mov    %ebx,0x8(%esp)
0868d9ab +0x22b:  mov    %edx,0x4(%esp)
0868d9af +0x22f:  mov    %eax,(%esp)
0868d9b2 +0x232:  call   0822b07e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x728>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x728
0868d9b7 +0x237:  sub    $0x4,%esp
0868d9ba +0x23a:  mov    0x8(%ebp),%eax
0868d9bd +0x23d:  mov    %eax,(%esp)
0868d9c0 +0x240:  call   0822fb00 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x51aa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x51aa
0868d9c5 +0x245:  movzbl -0x22(%ebp),%edx
0868d9c9 +0x249:  cmp    %dl,%al
0868d9cb +0x24b:  setb   %al
0868d9ce +0x24e:  test   %al,%al
0868d9d0 +0x250:  je     0868daaa <+0x32a>
0868d9d6 +0x256:  lea    -0x30(%ebp),%eax
0868d9d9 +0x259:  mov    %eax,(%esp)
0868d9dc +0x25c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
0868d9e1 +0x261:  lea    -0x30(%ebp),%eax
0868d9e4 +0x264:  mov    %eax,(%esp)
0868d9e7 +0x267:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
0868d9ec +0x26c:  movl   $0x178,0x8(%esp)
0868d9f4 +0x274:  movl   $0x0,0x4(%esp)
0868d9fc +0x27c:  lea    -0x30(%ebp),%eax
0868d9ff +0x27f:  mov    %eax,(%esp)
0868da02 +0x282:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
0868da07 +0x287:  mov    0x8(%ebp),%eax
0868da0a +0x28a:  mov    %eax,(%esp)
0868da0d +0x28d:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0868da12 +0x292:  movsbl %al,%eax
0868da15 +0x295:  mov    %eax,0x4(%esp)
0868da19 +0x299:  lea    -0x30(%ebp),%eax
0868da1c +0x29c:  mov    %eax,(%esp)
0868da1f +0x29f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868da24 +0x2a4:  movl   $0x1,0x4(%esp)
0868da2c +0x2ac:  lea    -0x30(%ebp),%eax
0868da2f +0x2af:  mov    %eax,(%esp)
0868da32 +0x2b2:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868da37 +0x2b7:  movl   $0x1,0x4(%esp)
0868da3f +0x2bf:  lea    -0x30(%ebp),%eax
0868da42 +0x2c2:  mov    %eax,(%esp)
0868da45 +0x2c5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
0868da4a +0x2ca:  movl   $0x1,0x4(%esp)
0868da52 +0x2d2:  lea    -0x30(%ebp),%eax
0868da55 +0x2d5:  mov    %eax,(%esp)
0868da58 +0x2d8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0868da5d +0x2dd:  lea    -0x30(%ebp),%eax
0868da60 +0x2e0:  mov    %eax,0x4(%esp)
0868da64 +0x2e4:  mov    0x8(%ebp),%eax
0868da67 +0x2e7:  mov    %eax,(%esp)
0868da6a +0x2ea:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0868da6f +0x2ef:  mov    0x8(%ebp),%eax
0868da72 +0x2f2:  movl   $0x1,0x4(%esp)
0868da7a +0x2fa:  mov    %eax,(%esp)
0868da7d +0x2fd:  call   0822fb50 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x51fa>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x51fa
0868da82 +0x302:  lea    -0x30(%ebp),%eax
0868da85 +0x305:  mov    %eax,(%esp)
0868da88 +0x308:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868da8d +0x30d:  jmp    0868daaa <+0x32a>
0868da8f +0x30f:  mov    %edx,%ebx
0868da91 +0x311:  mov    %eax,%esi
0868da93 +0x313:  lea    -0x30(%ebp),%eax
0868da96 +0x316:  mov    %eax,(%esp)
0868da99 +0x319:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0868da9e +0x31e:  mov    %esi,%eax
0868daa0 +0x320:  mov    %ebx,%edx
0868daa2 +0x322:  mov    %eax,(%esp)
0868daa5 +0x325:  call   08ae3750 <_Unwind_Resume>
0868daaa +0x32a:  mov    0x8(%ebp),%eax
0868daad +0x32d:  mov    %eax,(%esp)
0868dab0 +0x330:  call   080da2b8 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x455>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x455
0868dab5 +0x335:  mov    %eax,0x4(%esp)
0868dab9 +0x339:  mov    0x8(%ebp),%eax
0868dabc +0x33c:  mov    %eax,(%esp)
0868dabf +0x33f:  call   0868dace <_ZN5CUser27set_growth_power_exp_rewardEi>  ; CUser::set_growth_power_exp_reward(int)
0868dac4 +0x344:  lea    -0x8(%ebp),%esp
0868dac7 +0x347:  add    $0x0,%esp
0868daca +0x34a:  pop    %ebx
0868dacb +0x34b:  pop    %esi
0868dacc +0x34c:  pop    %ebp
0868dacd +0x34d:  ret
```

## 反编译 C

```c
// CUser::decide_growth_power_reward_system @ 0x868d780

/* CUser::decide_growth_power_reward_system() */

void __thiscall CUser::decide_growth_power_reward_system(CUser *this)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  PacketGuard local_34 [13];
  undefined1 local_27;
  byte local_26;
  PacketGuard local_24 [15];
  undefined1 local_15;
  byte local_14;
  char local_12;
  char local_11;
  int *local_10;
  
  local_12 = '\0';
  local_11 = '\0';
  local_10 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x5d);
  cVar2 = (**(code **)(*local_10 + 0x34))(local_10,0);
  if (cVar2 == '\0') {
    CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    G_CDataManager();
    STGrowthPowerData::get_break_away_section_data((int)&local_27);
    bVar3 = CUserCharacInfo::get_growth_power_reward((CUserCharacInfo *)this);
    if (bVar3 < local_26) {
      PacketGuard::PacketGuard(local_34);
                    /* try { // try from 0868d9e7 to 0868da6e has its CatchHandler @ 0868da8f */
      InterfacePacketBuf::clear((InterfacePacketBuf *)local_34);
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0x178);
      cVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,(int)cVar2);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
      Send(this,local_34);
      CUserCharacInfo::set_growth_power_exp_reward_right((CUserCharacInfo *)this,true);
      PacketGuard::~PacketGuard(local_34);
    }
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    set_growth_power_exp_reward(this,iVar4);
    return;
  }
  cVar2 = (**(code **)(*local_10 + 0x34))(local_10,0);
  if (cVar2 != '\0') {
    iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    iVar5 = G_CDataManager();
    cVar2 = stSeriaBlessingScript::is_possible_lv((stSeriaBlessingScript *)(iVar5 + 0x5094),iVar4);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_0868d81b;
    }
  }
  bVar1 = false;
LAB_0868d81b:
  if (bVar1) {
    local_11 = '\x01';
    CUserCharacInfo::set_growth_power_exp_reward_right((CUserCharacInfo *)this,true);
  }
  CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  G_CDataManager();
  STGrowthPowerData::get_break_away_section_data((int)&local_15);
  bVar3 = CUserCharacInfo::get_growth_power_reward((CUserCharacInfo *)this);
  if (bVar3 < local_14) {
    local_12 = '\x01';
  }
  if ((local_12 != '\0') || (local_11 != '\0')) {
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 0868d8a1 to 0868d944 has its CatchHandler @ 0868d947 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_24);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x178);
    cVar2 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(int)cVar2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)(local_12 != '\0'));
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,(uint)(local_11 != '\0'));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    Send(this,local_24);
    PacketGuard::~PacketGuard(local_24);
  }
  iVar4 = CUserCharacInfo::get_charac_level((CUserCharacInfo *)this);
  set_growth_power_exp_reward(this,iVar4);
  return;
}
```
