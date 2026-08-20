# execute

`_ZN11game_master20CViewTutorialFlagCmd7executeEv`

`game_master::CViewTutorialFlagCmd::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CViewTutorialFlagCmd` | `0x084a927e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084a927e  _ZN11game_master20CViewTutorialFlagCmd7executeEv
#           game_master::CViewTutorialFlagCmd::execute()
# range [0x084a927e, 0x084a94c5]
084a927e +0x000:  push   %ebp
084a927f +0x001:  mov    %esp,%ebp
084a9281 +0x003:  push   %edi
084a9282 +0x004:  push   %esi
084a9283 +0x005:  push   %ebx
084a9284 +0x006:  sub    $0x13c,%esp
084a928a +0x00c:  lea    -0x1d(%ebp),%eax
084a928d +0x00f:  mov    %eax,(%esp)
084a9290 +0x012:  call   086e00d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x30>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x30
084a9295 +0x017:  lea    -0x1d(%ebp),%eax
084a9298 +0x01a:  mov    %eax,0x8(%esp)
084a929c +0x01e:  movl   $"tutorial flag : ",0x4(%esp)
084a92a4 +0x026:  lea    -0x24(%ebp),%eax
084a92a7 +0x029:  mov    %eax,(%esp)
084a92aa +0x02c:  call   08707630 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1240>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1240
084a92af +0x031:  jmp    084a92cc <+0x4e>
084a92b1 +0x033:  mov    %edx,%ebx
084a92b3 +0x035:  mov    %eax,%esi
084a92b5 +0x037:  lea    -0x1d(%ebp),%eax
084a92b8 +0x03a:  mov    %eax,(%esp)
084a92bb +0x03d:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084a92c0 +0x042:  mov    %esi,%eax
084a92c2 +0x044:  mov    %ebx,%edx
084a92c4 +0x046:  mov    %eax,(%esp)
084a92c7 +0x049:  call   08ae3750 <_Unwind_Resume>
084a92cc +0x04e:  lea    -0x1d(%ebp),%eax
084a92cf +0x051:  mov    %eax,(%esp)
084a92d2 +0x054:  call   086e00f0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x50
084a92d7 +0x059:  lea    -0x12f(%ebp),%edx
084a92dd +0x05f:  mov    $0xff,%ebx
084a92e2 +0x064:  mov    $0x0,%eax
084a92e7 +0x069:  mov    %edx,%ecx
084a92e9 +0x06b:  and    $0x1,%ecx
084a92ec +0x06e:  test   %ecx,%ecx
084a92ee +0x070:  je     084a92f8 <+0x7a>
084a92f0 +0x072:  mov    %al,(%edx)
084a92f2 +0x074:  add    $0x1,%edx
084a92f5 +0x077:  sub    $0x1,%ebx
084a92f8 +0x07a:  mov    %edx,%ecx
084a92fa +0x07c:  and    $0x2,%ecx
084a92fd +0x07f:  test   %ecx,%ecx
084a92ff +0x081:  je     084a930a <+0x8c>
084a9301 +0x083:  mov    %ax,(%edx)
084a9304 +0x086:  add    $0x2,%edx
084a9307 +0x089:  sub    $0x2,%ebx
084a930a +0x08c:  mov    %ebx,%ecx
084a930c +0x08e:  shr    $0x2,%ecx
084a930f +0x091:  mov    %edx,%edi
084a9311 +0x093:  rep stos %eax,%es:(%edi)
084a9313 +0x095:  mov    %edi,%edx
084a9315 +0x097:  mov    %ebx,%ecx
084a9317 +0x099:  and    $0x2,%ecx
084a931a +0x09c:  test   %ecx,%ecx
084a931c +0x09e:  je     084a9324 <+0xa6>
084a931e +0x0a0:  mov    %ax,(%edx)
084a9321 +0x0a3:  add    $0x2,%edx
084a9324 +0x0a6:  mov    %ebx,%ecx
084a9326 +0x0a8:  and    $0x1,%ecx
084a9329 +0x0ab:  test   %ecx,%ecx
084a932b +0x0ad:  je     084a9332 <+0xb4>
084a932d +0x0af:  mov    %al,(%edx)
084a932f +0x0b1:  add    $0x1,%edx
084a9332 +0x0b4:  movl   $0x0,-0x1c(%ebp)
084a9339 +0x0bb:  jmp    084a9394 <+0x116>
084a933b +0x0bd:  mov    -0x1c(%ebp),%ebx
084a933e +0x0c0:  mov    0x8(%ebp),%eax
084a9341 +0x0c3:  mov    %eax,(%esp)
084a9344 +0x0c6:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9349 +0x0cb:  mov    %ebx,0x4(%esp)
084a934d +0x0cf:  mov    %eax,(%esp)
084a9350 +0x0d2:  call   0864751e <_ZN15CUserCharacInfo32getCurCharacEscaladeTutorialFlagEj>  ; CUserCharacInfo::getCurCharacEscaladeTutorialFlag(unsigned int)
084a9355 +0x0d7:  test   %al,%al
084a9357 +0x0d9:  setne  %al
084a935a +0x0dc:  test   %al,%al
084a935c +0x0de:  je     084a9390 <+0x112>
084a935e +0x0e0:  mov    -0x1c(%ebp),%eax
084a9361 +0x0e3:  mov    %eax,0x8(%esp)
084a9365 +0x0e7:  movl   $"(%d) ",0x4(%esp)
084a936d +0x0ef:  lea    -0x12f(%ebp),%eax
084a9373 +0x0f5:  mov    %eax,(%esp)
084a9376 +0x0f8:  call   0807e440 <_init+0xd38>
084a937b +0x0fd:  lea    -0x12f(%ebp),%eax
084a9381 +0x103:  mov    %eax,0x4(%esp)
084a9385 +0x107:  lea    -0x24(%ebp),%eax
084a9388 +0x10a:  mov    %eax,(%esp)
084a938b +0x10d:  call   08708030 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x1c40>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x1c40
084a9390 +0x112:  addl   $0x1,-0x1c(%ebp)
084a9394 +0x116:  cmpl   $0x7f,-0x1c(%ebp)
084a9398 +0x11a:  setle  %al
084a939b +0x11d:  test   %al,%al
084a939d +0x11f:  jne    084a933b <+0xbd>
084a939f +0x121:  lea    -0x30(%ebp),%eax
084a93a2 +0x124:  mov    %eax,(%esp)
084a93a5 +0x127:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084a93aa +0x12c:  movl   $0xc,0x8(%esp)
084a93b2 +0x134:  movl   $0x0,0x4(%esp)
084a93ba +0x13c:  lea    -0x30(%ebp),%eax
084a93bd +0x13f:  mov    %eax,(%esp)
084a93c0 +0x142:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084a93c5 +0x147:  movl   $0x0,0x4(%esp)
084a93cd +0x14f:  lea    -0x30(%ebp),%eax
084a93d0 +0x152:  mov    %eax,(%esp)
084a93d3 +0x155:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a93d8 +0x15a:  movl   $0x0,0x4(%esp)
084a93e0 +0x162:  lea    -0x30(%ebp),%eax
084a93e3 +0x165:  mov    %eax,(%esp)
084a93e6 +0x168:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084a93eb +0x16d:  movl   $0x0,0x4(%esp)
084a93f3 +0x175:  lea    -0x30(%ebp),%eax
084a93f6 +0x178:  mov    %eax,(%esp)
084a93f9 +0x17b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084a93fe +0x180:  lea    -0x24(%ebp),%eax
084a9401 +0x183:  mov    %eax,(%esp)
084a9404 +0x186:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
084a9409 +0x18b:  mov    %eax,0x4(%esp)
084a940d +0x18f:  lea    -0x30(%ebp),%eax
084a9410 +0x192:  mov    %eax,(%esp)
084a9413 +0x195:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084a9418 +0x19a:  lea    -0x24(%ebp),%eax
084a941b +0x19d:  mov    %eax,(%esp)
084a941e +0x1a0:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
084a9423 +0x1a5:  mov    %eax,%ebx
084a9425 +0x1a7:  lea    -0x24(%ebp),%eax
084a9428 +0x1aa:  mov    %eax,(%esp)
084a942b +0x1ad:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
084a9430 +0x1b2:  mov    %ebx,0x8(%esp)
084a9434 +0x1b6:  mov    %eax,0x4(%esp)
084a9438 +0x1ba:  lea    -0x30(%ebp),%eax
084a943b +0x1bd:  mov    %eax,(%esp)
084a943e +0x1c0:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
084a9443 +0x1c5:  movl   $0x1,0x4(%esp)
084a944b +0x1cd:  lea    -0x30(%ebp),%eax
084a944e +0x1d0:  mov    %eax,(%esp)
084a9451 +0x1d3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084a9456 +0x1d8:  mov    0x8(%ebp),%eax
084a9459 +0x1db:  mov    %eax,(%esp)
084a945c +0x1de:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084a9461 +0x1e3:  lea    -0x30(%ebp),%edx
084a9464 +0x1e6:  mov    %edx,0x4(%esp)
084a9468 +0x1ea:  mov    %eax,(%esp)
084a946b +0x1ed:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084a9470 +0x1f2:  jmp    084a9487 <+0x209>
084a9472 +0x1f4:  mov    %edx,%ebx
084a9474 +0x1f6:  mov    %eax,%esi
084a9476 +0x1f8:  lea    -0x30(%ebp),%eax
084a9479 +0x1fb:  mov    %eax,(%esp)
084a947c +0x1fe:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a9481 +0x203:  mov    %esi,%eax
084a9483 +0x205:  mov    %ebx,%edx
084a9485 +0x207:  jmp    084a9494 <+0x216>
084a9487 +0x209:  lea    -0x30(%ebp),%eax
084a948a +0x20c:  mov    %eax,(%esp)
084a948d +0x20f:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084a9492 +0x214:  jmp    084a94af <+0x231>
084a9494 +0x216:  mov    %edx,%ebx
084a9496 +0x218:  mov    %eax,%esi
084a9498 +0x21a:  lea    -0x24(%ebp),%eax
084a949b +0x21d:  mov    %eax,(%esp)
084a949e +0x220:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084a94a3 +0x225:  mov    %esi,%eax
084a94a5 +0x227:  mov    %ebx,%edx
084a94a7 +0x229:  mov    %eax,(%esp)
084a94aa +0x22c:  call   08ae3750 <_Unwind_Resume>
084a94af +0x231:  lea    -0x24(%ebp),%eax
084a94b2 +0x234:  mov    %eax,(%esp)
084a94b5 +0x237:  call   08707be0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x17f0>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x17f0
084a94ba +0x23c:  add    $0x13c,%esp
084a94c0 +0x242:  pop    %ebx
084a94c1 +0x243:  pop    %esi
084a94c2 +0x244:  pop    %edi
084a94c3 +0x245:  pop    %ebp
084a94c4 +0x246:  ret
084a94c5 +0x247:  nop
```

## 反编译 C

```c
// game_master::CViewTutorialFlagCmd::execute @ 0x84a927e

/* game_master::CViewTutorialFlagCmd::execute() */

void __thiscall game_master::CViewTutorialFlagCmd::execute(CViewTutorialFlagCmd *this)

{
  char cVar1;
  CUserCharacInfo *this_00;
  int iVar2;
  CUser *this_01;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  byte bVar7;
  char local_133;
  char local_132 [254];
  PacketGuard local_34 [12];
  string local_28 [7];
  allocator<char> local_21;
  uint local_20;
  
  bVar7 = 0;
  std::allocator<char>::allocator();
                    /* try { // try from 084a92aa to 084a92ae has its CatchHandler @ 084a92b1 */
  std::string::string(local_28,"tutorial flag : ",(allocator *)&local_21);
  std::allocator<char>::~allocator(&local_21);
  pcVar4 = &local_133;
  uVar5 = 0xff;
  bVar6 = ((uint)pcVar4 & 1) != 0;
  if (bVar6) {
    local_133 = '\0';
    pcVar4 = local_132;
    uVar5 = 0xfe;
  }
  if (((uint)pcVar4 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
    uVar5 = uVar5 - 2;
  }
  for (uVar3 = uVar5 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar7 * -2 + 1) * 4;
  }
  if ((uVar5 & 2) != 0) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4 = pcVar4 + 2;
  }
  if (!bVar6) {
    *pcVar4 = '\0';
  }
  for (local_20 = 0; uVar5 = local_20, (int)local_20 < 0x80; local_20 = local_20 + 1) {
    this_00 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
                    /* try { // try from 084a9350 to 084a93a9 has its CatchHandler @ 084a9494 */
    cVar1 = CUserCharacInfo::getCurCharacEscaladeTutorialFlag(this_00,uVar5);
    if (cVar1 != '\0') {
      sprintf(&local_133,"(%d) ",local_20);
      std::string::operator+=(local_28,&local_133);
    }
  }
  PacketGuard::PacketGuard(local_34);
                    /* try { // try from 084a93c0 to 084a946f has its CatchHandler @ 084a9472 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_34,0,0xc);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_34,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_34,0);
  iVar2 = std::string::size(local_28);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_34,iVar2);
  iVar2 = std::string::size(local_28);
  pcVar4 = (char *)std::string::c_str(local_28);
  InterfacePacketBuf::put_str((InterfacePacketBuf *)local_34,pcVar4,iVar2);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_34,true);
  this_01 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::Send(this_01,local_34);
                    /* try { // try from 084a948d to 084a9491 has its CatchHandler @ 084a9494 */
  PacketGuard::~PacketGuard(local_34);
  std::string::~string(local_28);
  return;
}
```
