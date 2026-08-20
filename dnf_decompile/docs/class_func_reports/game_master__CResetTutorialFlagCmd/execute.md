# execute

`_ZN11game_master21CResetTutorialFlagCmd7executeEv`

`game_master::CResetTutorialFlagCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CResetTutorialFlagCmd` | `0x084a94c6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a94c6  _ZN11game_master21CResetTutorialFlagCmd7executeEv
#           game_master::CResetTutorialFlagCmd::execute()
# range [0x084a94c6, 0x084a971f]
084a94c6 +0x000:  push   %ebp
084a94c7 +0x001:  mov    %esp,%ebp
084a94c9 +0x003:  push   %edi
084a94ca +0x004:  push   %esi
084a94cb +0x005:  push   %ebx
084a94cc +0x006:  sub    $0x13c,%esp
084a94d2 +0x00c:  mov    0x8(%ebp),%eax
084a94d5 +0x00f:  mov    %eax,(%esp)
084a94d8 +0x012:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a94dd +0x017:  mov    %eax,(%esp)
084a94e0 +0x01a:  call   0864739a <_ZN15CUserCharacInfo23resetCharacTutorialFlagEv>  ; CUserCharacInfo::resetCharacTutorialFlag()
084a94e5 +0x01f:  lea    -0x1d(%ebp),%eax
084a94e8 +0x022:  mov    %eax,(%esp)
084a94eb +0x025:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
084a94f0 +0x02a:  lea    -0x1d(%ebp),%eax
084a94f3 +0x02d:  mov    %eax,0x8(%esp)
084a94f7 +0x031:  movl   $"tutorial flag : ",0x4(%esp)
084a94ff +0x039:  lea    -0x24(%ebp),%eax
084a9502 +0x03c:  mov    %eax,(%esp)
084a9505 +0x03f:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
084a950a +0x044:  jmp    084a9527 <+0x61>
084a950c +0x046:  mov    %edx,%ebx
084a950e +0x048:  mov    %eax,%esi
084a9510 +0x04a:  lea    -0x1d(%ebp),%eax
084a9513 +0x04d:  mov    %eax,(%esp)
084a9516 +0x050:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084a951b +0x055:  mov    %esi,%eax
084a951d +0x057:  mov    %ebx,%edx
084a951f +0x059:  mov    %eax,(%esp)
084a9522 +0x05c:  call   08ae3750 <_Unwind_Resume>
084a9527 +0x061:  lea    -0x1d(%ebp),%eax
084a952a +0x064:  mov    %eax,(%esp)
084a952d +0x067:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084a9532 +0x06c:  lea    -0x12f(%ebp),%edx
084a9538 +0x072:  mov    $0xff,%ebx
084a953d +0x077:  mov    $0x0,%eax
084a9542 +0x07c:  mov    %edx,%ecx
084a9544 +0x07e:  and    $0x1,%ecx
084a9547 +0x081:  test   %ecx,%ecx
084a9549 +0x083:  je     084a9553 <+0x8d>
084a954b +0x085:  mov    %al,(%edx)
084a954d +0x087:  add    $0x1,%edx
084a9550 +0x08a:  sub    $0x1,%ebx
084a9553 +0x08d:  mov    %edx,%ecx
084a9555 +0x08f:  and    $0x2,%ecx
084a9558 +0x092:  test   %ecx,%ecx
084a955a +0x094:  je     084a9565 <+0x9f>
084a955c +0x096:  mov    %ax,(%edx)
084a955f +0x099:  add    $0x2,%edx
084a9562 +0x09c:  sub    $0x2,%ebx
084a9565 +0x09f:  mov    %ebx,%ecx
084a9567 +0x0a1:  shr    $0x2,%ecx
084a956a +0x0a4:  mov    %edx,%edi
084a956c +0x0a6:  rep stos %eax,%es:(%edi)
084a956e +0x0a8:  mov    %edi,%edx
084a9570 +0x0aa:  mov    %ebx,%ecx
084a9572 +0x0ac:  and    $0x2,%ecx
084a9575 +0x0af:  test   %ecx,%ecx
084a9577 +0x0b1:  je     084a957f <+0xb9>
084a9579 +0x0b3:  mov    %ax,(%edx)
084a957c +0x0b6:  add    $0x2,%edx
084a957f +0x0b9:  mov    %ebx,%ecx
084a9581 +0x0bb:  and    $0x1,%ecx
084a9584 +0x0be:  test   %ecx,%ecx
084a9586 +0x0c0:  je     084a958d <+0xc7>
084a9588 +0x0c2:  mov    %al,(%edx)
084a958a +0x0c4:  add    $0x1,%edx
084a958d +0x0c7:  movl   $0x0,-0x1c(%ebp)
084a9594 +0x0ce:  jmp    084a95ef <+0x129>
084a9596 +0x0d0:  mov    -0x1c(%ebp),%ebx
084a9599 +0x0d3:  mov    0x8(%ebp),%eax
084a959c +0x0d6:  mov    %eax,(%esp)
084a959f +0x0d9:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a95a4 +0x0de:  mov    %ebx,0x4(%esp)
084a95a8 +0x0e2:  mov    %eax,(%esp)
084a95ab +0x0e5:  call   0864751e <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj>  ; CUserCharacInfo::getCurCharacEscaladeTutorialFlag(unsigned int)
084a95b0 +0x0ea:  test   %al,%al
084a95b2 +0x0ec:  setne  %al
084a95b5 +0x0ef:  test   %al,%al
084a95b7 +0x0f1:  je     084a95eb <+0x125>
084a95b9 +0x0f3:  mov    -0x1c(%ebp),%eax
084a95bc +0x0f6:  mov    %eax,0x8(%esp)
084a95c0 +0x0fa:  movl   $"(%d) ",0x4(%esp)
084a95c8 +0x102:  lea    -0x12f(%ebp),%eax
084a95ce +0x108:  mov    %eax,(%esp)
084a95d1 +0x10b:  call   0807e440 <_init+0xd38>
084a95d6 +0x110:  lea    -0x12f(%ebp),%eax
084a95dc +0x116:  mov    %eax,0x4(%esp)
084a95e0 +0x11a:  lea    -0x24(%ebp),%eax
084a95e3 +0x11d:  mov    %eax,(%esp)
084a95e6 +0x120:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
084a95eb +0x125:  addl   $0x1,-0x1c(%ebp)
084a95ef +0x129:  cmpl   $0x7f,-0x1c(%ebp)
084a95f3 +0x12d:  setle  %al
084a95f6 +0x130:  test   %al,%al
084a95f8 +0x132:  jne    084a9596 <+0xd0>
084a95fa +0x134:  lea    -0x30(%ebp),%eax
084a95fd +0x137:  mov    %eax,(%esp)
084a9600 +0x13a:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084a9605 +0x13f:  movl   $0xc,0x8(%esp)
084a960d +0x147:  movl   $0x0,0x4(%esp)
084a9615 +0x14f:  lea    -0x30(%ebp),%eax
084a9618 +0x152:  mov    %eax,(%esp)
084a961b +0x155:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084a9620 +0x15a:  movl   $0x0,0x4(%esp)
084a9628 +0x162:  lea    -0x30(%ebp),%eax
084a962b +0x165:  mov    %eax,(%esp)
084a962e +0x168:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a9633 +0x16d:  movl   $0x0,0x4(%esp)
084a963b +0x175:  lea    -0x30(%ebp),%eax
084a963e +0x178:  mov    %eax,(%esp)
084a9641 +0x17b:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084a9646 +0x180:  movl   $0x0,0x4(%esp)
084a964e +0x188:  lea    -0x30(%ebp),%eax
084a9651 +0x18b:  mov    %eax,(%esp)
084a9654 +0x18e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a9659 +0x193:  lea    -0x24(%ebp),%eax
084a965c +0x196:  mov    %eax,(%esp)
084a965f +0x199:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
084a9664 +0x19e:  mov    %eax,0x4(%esp)
084a9668 +0x1a2:  lea    -0x30(%ebp),%eax
084a966b +0x1a5:  mov    %eax,(%esp)
084a966e +0x1a8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a9673 +0x1ad:  lea    -0x24(%ebp),%eax
084a9676 +0x1b0:  mov    %eax,(%esp)
084a9679 +0x1b3:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
084a967e +0x1b8:  mov    %eax,%ebx
084a9680 +0x1ba:  lea    -0x24(%ebp),%eax
084a9683 +0x1bd:  mov    %eax,(%esp)
084a9686 +0x1c0:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084a968b +0x1c5:  mov    %ebx,0x8(%esp)
084a968f +0x1c9:  mov    %eax,0x4(%esp)
084a9693 +0x1cd:  lea    -0x30(%ebp),%eax
084a9696 +0x1d0:  mov    %eax,(%esp)
084a9699 +0x1d3:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084a969e +0x1d8:  movl   $0x1,0x4(%esp)
084a96a6 +0x1e0:  lea    -0x30(%ebp),%eax
084a96a9 +0x1e3:  mov    %eax,(%esp)
084a96ac +0x1e6:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084a96b1 +0x1eb:  mov    0x8(%ebp),%eax
084a96b4 +0x1ee:  mov    %eax,(%esp)
084a96b7 +0x1f1:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a96bc +0x1f6:  lea    -0x30(%ebp),%edx
084a96bf +0x1f9:  mov    %edx,0x4(%esp)
084a96c3 +0x1fd:  mov    %eax,(%esp)
084a96c6 +0x200:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084a96cb +0x205:  jmp    084a96e2 <+0x21c>
084a96cd +0x207:  mov    %edx,%ebx
084a96cf +0x209:  mov    %eax,%esi
084a96d1 +0x20b:  lea    -0x30(%ebp),%eax
084a96d4 +0x20e:  mov    %eax,(%esp)
084a96d7 +0x211:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a96dc +0x216:  mov    %esi,%eax
084a96de +0x218:  mov    %ebx,%edx
084a96e0 +0x21a:  jmp    084a96ef <+0x229>
084a96e2 +0x21c:  lea    -0x30(%ebp),%eax
084a96e5 +0x21f:  mov    %eax,(%esp)
084a96e8 +0x222:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a96ed +0x227:  jmp    084a970a <+0x244>
084a96ef +0x229:  mov    %edx,%ebx
084a96f1 +0x22b:  mov    %eax,%esi
084a96f3 +0x22d:  lea    -0x24(%ebp),%eax
084a96f6 +0x230:  mov    %eax,(%esp)
084a96f9 +0x233:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084a96fe +0x238:  mov    %esi,%eax
084a9700 +0x23a:  mov    %ebx,%edx
084a9702 +0x23c:  mov    %eax,(%esp)
084a9705 +0x23f:  call   08ae3750 <_Unwind_Resume>
084a970a +0x244:  lea    -0x24(%ebp),%eax
084a970d +0x247:  mov    %eax,(%esp)
084a9710 +0x24a:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084a9715 +0x24f:  add    $0x13c,%esp
084a971b +0x255:  pop    %ebx
084a971c +0x256:  pop    %esi
084a971d +0x257:  pop    %edi
084a971e +0x258:  pop    %ebp
084a971f +0x259:  ret
```

## 反编译 C

```c
// game_master::CResetTutorialFlagCmd::execute @ 0x84a94c6

/* game_master::CResetTutorialFlagCmd::execute() */

void __thiscall game_master::CResetTutorialFlagCmd::execute(CResetTutorialFlagCmd *this)

{
  char cVar1;
  CUserCharacInfo *pCVar2;
  int iVar3;
  CUser *this_00;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  char local_133;
  char local_132 [254];
  PacketGuard local_34 [12];
  string local_28 [7];
  allocator<char> local_21;
  uint local_20;
  
  bVar8 = 0;
  pCVar2 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  CUserCharacInfo::resetCharacTutorialFlag(pCVar2);
  std::allocator<char>::allocator();
                    /* try { // try from 084a9505 to 084a9509 has its CatchHandler @ 084a950c */
  std::string::string(local_28,"tutorial flag : ",(allocator *)&local_21);
  std::allocator<char>::~allocator(&local_21);
  pcVar5 = &local_133;
  uVar6 = 0xff;
  bVar7 = ((uint)pcVar5 & 1) != 0;
  if (bVar7) {
    local_133 = '\0';
    pcVar5 = local_132;
    uVar6 = 0xfe;
  }
  if (((uint)pcVar5 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
    uVar6 = uVar6 - 2;
  }
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5[2] = '\0';
    pcVar5[3] = '\0';
    pcVar5 = pcVar5 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if ((uVar6 & 2) != 0) {
    pcVar5[0] = '\0';
    pcVar5[1] = '\0';
    pcVar5 = pcVar5 + 2;
  }
  if (!bVar7) {
    *pcVar5 = '\0';
  }
  for (local_20 = 0; uVar6 = local_20, (int)local_20 < 0x80; local_20 = local_20 + 1) {
    pCVar2 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
                    /* try { // try from 084a95ab to 084a9604 has its CatchHandler @ 084a96ef */
    cVar1 = CUserCharacInfo::getCurCharacEscaladeTutorialFlag(pCVar2,uVar6);
    if (cVar1 != '\0') {
      sprintf(&local_133,"(%d) ",local_20);
      std::string::operator+=(local_28,&local_133);
    }
  }
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084a961b to 084a96ca has its CatchHandler @ 084a96cd */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
  iVar3 = std::string::size(local_28);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar3);
  iVar3 = std::string::size(local_28);
  pcVar5 = (char *)std::string::c_str(local_28);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_34,pcVar5,iVar3);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  this_00 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::Send(this_00,local_34);
                    /* try { // try from 084a96e8 to 084a96ec has its CatchHandler @ 084a96ef */
  PacketGuard::~PacketGuard(local_34);
  std::string::~string(local_28);
  return;
}
```
