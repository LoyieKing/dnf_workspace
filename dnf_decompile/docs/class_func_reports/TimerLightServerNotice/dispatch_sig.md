# dispatch_sig

`_ZN22TimerLightServerNotice12dispatch_sigEiij`

`TimerLightServerNotice::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerLightServerNotice` | `0x08636a7c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08636a7c  _ZN22TimerLightServerNotice12dispatch_sigEiij
#           TimerLightServerNotice::dispatch_sig(int, int, unsigned int)
# range [0x08636a7c, 0x08636c13]
08636a7c +0x000:  push   %ebp
08636a7d +0x001:  mov    %esp,%ebp
08636a7f +0x003:  push   %esi
08636a80 +0x004:  push   %ebx
08636a81 +0x005:  sub    $0x30,%esp
08636a84 +0x008:  cmpl   $0x0,0x10(%ebp)
08636a88 +0x00c:  js     08636aa3 <+0x27>
08636a8a +0x00e:  mov    0x10(%ebp),%ebx
08636a8d +0x011:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08636a92 +0x016:  add    $0xa4,%eax
08636a97 +0x01b:  mov    %eax,(%esp)
08636a9a +0x01e:  call   082b3ce6 <_GLOBAL__I__ZN4CLog5this_E+&_ZL14gUnicodeBuffer+0x5be1>  ; global constructors keyed to CLog::this_+&_ZL14gUnicodeBuffer+0x5be1
08636a9f +0x023:  cmp    %eax,%ebx
08636aa1 +0x025:  jb     08636aaa <+0x2e>
08636aa3 +0x027:  mov    $0x1,%eax
08636aa8 +0x02c:  jmp    08636aaf <+0x33>
08636aaa +0x02e:  mov    $0x0,%eax
08636aaf +0x033:  test   %al,%al
08636ab1 +0x035:  je     08636abd <+0x41>
08636ab3 +0x037:  mov    $0x0,%ebx
08636ab8 +0x03c:  jmp    08636c0a <+0x18e>
08636abd +0x041:  lea    -0x1c(%ebp),%eax
08636ac0 +0x044:  mov    %eax,(%esp)
08636ac3 +0x047:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08636ac8 +0x04c:  movl   $0xc,0x8(%esp)
08636ad0 +0x054:  movl   $0x0,0x4(%esp)
08636ad8 +0x05c:  lea    -0x1c(%ebp),%eax
08636adb +0x05f:  mov    %eax,(%esp)
08636ade +0x062:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08636ae3 +0x067:  movl   $0x0,0x4(%esp)
08636aeb +0x06f:  lea    -0x1c(%ebp),%eax
08636aee +0x072:  mov    %eax,(%esp)
08636af1 +0x075:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08636af6 +0x07a:  movl   $0x0,0x4(%esp)
08636afe +0x082:  lea    -0x1c(%ebp),%eax
08636b01 +0x085:  mov    %eax,(%esp)
08636b04 +0x088:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08636b09 +0x08d:  movl   $0x0,0x4(%esp)
08636b11 +0x095:  lea    -0x1c(%ebp),%eax
08636b14 +0x098:  mov    %eax,(%esp)
08636b17 +0x09b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08636b1c +0x0a0:  mov    0x10(%ebp),%ebx
08636b1f +0x0a3:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08636b24 +0x0a8:  add    $0xa4,%eax
08636b29 +0x0ad:  mov    %ebx,0x4(%esp)
08636b2d +0x0b1:  mov    %eax,(%esp)
08636b30 +0x0b4:  call   0863d292 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17a3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17a3
08636b35 +0x0b9:  add    $0x8,%eax
08636b38 +0x0bc:  mov    %eax,(%esp)
08636b3b +0x0bf:  call   08706660 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x270>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x270
08636b40 +0x0c4:  mov    %eax,-0x10(%ebp)
08636b43 +0x0c7:  mov    -0x10(%ebp),%eax
08636b46 +0x0ca:  mov    %eax,0x4(%esp)
08636b4a +0x0ce:  lea    -0x1c(%ebp),%eax
08636b4d +0x0d1:  mov    %eax,(%esp)
08636b50 +0x0d4:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08636b55 +0x0d9:  mov    0x10(%ebp),%ebx
08636b58 +0x0dc:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08636b5d +0x0e1:  add    $0xa4,%eax
08636b62 +0x0e6:  mov    %ebx,0x4(%esp)
08636b66 +0x0ea:  mov    %eax,(%esp)
08636b69 +0x0ed:  call   0863d292 <_GLOBAL__I__ZN10TimerQueue11InsertTimerER10TimerEntry+0x17a3>  ; global constructors keyed to TimerQueue::InsertTimer(TimerEntry&)+0x17a3
08636b6e +0x0f2:  add    $0x8,%eax
08636b71 +0x0f5:  mov    %eax,(%esp)
08636b74 +0x0f8:  call   087064f0 <_ZSt21__copy_streambufs_eofIwSt11char_traitsIwEEiPSt15basic_streambufIT_T0_ES6_Rb+0x100>  ; int std::__copy_streambufs_eof<wchar_t, std::char_traits<wchar_t> >(std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, std::basic_streambuf<wchar_t, std::char_traits<wchar_t> >*, bool&)+0x100
08636b79 +0x0fd:  mov    -0x10(%ebp),%edx
08636b7c +0x100:  mov    %edx,0x8(%esp)
08636b80 +0x104:  mov    %eax,0x4(%esp)
08636b84 +0x108:  lea    -0x1c(%ebp),%eax
08636b87 +0x10b:  mov    %eax,(%esp)
08636b8a +0x10e:  call   0822b770 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0xe1a>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0xe1a
08636b8f +0x113:  movl   $0x1,0x4(%esp)
08636b97 +0x11b:  lea    -0x1c(%ebp),%eax
08636b9a +0x11e:  mov    %eax,(%esp)
08636b9d +0x121:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08636ba2 +0x126:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08636ba7 +0x12b:  lea    -0x1c(%ebp),%edx
08636baa +0x12e:  mov    %edx,0x4(%esp)
08636bae +0x132:  mov    %eax,(%esp)
08636bb1 +0x135:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
08636bb6 +0x13a:  mov    0x10(%ebp),%eax
08636bb9 +0x13d:  mov    %eax,0x4(%esp)
08636bbd +0x141:  mov    0x8(%ebp),%eax
08636bc0 +0x144:  mov    %eax,(%esp)
08636bc3 +0x147:  call   08636c14 <_ZN22TimerLightServerNotice15RegistNextTimerEi>  ; TimerLightServerNotice::RegistNextTimer(int)
08636bc8 +0x14c:  mov    %al,-0x9(%ebp)
08636bcb +0x14f:  movzbl -0x9(%ebp),%eax
08636bcf +0x153:  xor    $0x1,%eax
08636bd2 +0x156:  test   %al,%al
08636bd4 +0x158:  je     08636bdd <+0x161>
08636bd6 +0x15a:  mov    $0x0,%ebx
08636bdb +0x15f:  jmp    08636bff <+0x183>
08636bdd +0x161:  mov    $0x1,%ebx
08636be2 +0x166:  jmp    08636bff <+0x183>
08636be4 +0x168:  mov    %edx,%ebx
08636be6 +0x16a:  mov    %eax,%esi
08636be8 +0x16c:  lea    -0x1c(%ebp),%eax
08636beb +0x16f:  mov    %eax,(%esp)
08636bee +0x172:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08636bf3 +0x177:  mov    %esi,%eax
08636bf5 +0x179:  mov    %ebx,%edx
08636bf7 +0x17b:  mov    %eax,(%esp)
08636bfa +0x17e:  call   08ae3750 <_Unwind_Resume>
08636bff +0x183:  lea    -0x1c(%ebp),%eax
08636c02 +0x186:  mov    %eax,(%esp)
08636c05 +0x189:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08636c0a +0x18e:  mov    %ebx,%eax
08636c0c +0x190:  add    $0x30,%esp
08636c0f +0x193:  pop    %ebx
08636c10 +0x194:  pop    %esi
08636c11 +0x195:  pop    %ebp
08636c12 +0x196:  ret
08636c13 +0x197:  nop
```

## 反编译 C

```c
// TimerLightServerNotice::dispatch_sig @ 0x8636a7c

/* TimerLightServerNotice::dispatch_sig(int, int, unsigned int) */

bool TimerLightServerNotice::dispatch_sig(int param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  GameWorld *this;
  bool bVar4;
  PacketGuard local_20 [12];
  int local_14;
  char local_d;
  
  if (-1 < (int)param_3) {
    iVar1 = G_CDataManager();
    uVar2 = std::vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>>::size
                      ((vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>> *)
                       (iVar1 + 0xa4));
    if (param_3 < uVar2) {
      bVar4 = false;
      goto LAB_08636aaf;
    }
  }
  bVar4 = true;
LAB_08636aaf:
  if (bVar4) {
    bVar4 = false;
  }
  else {
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 08636ade to 08636bc7 has its CatchHandler @ 08636be4 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_20,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    iVar1 = G_CDataManager();
    iVar1 = std::vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>>::operator[]
                      ((vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>> *)
                       (iVar1 + 0xa4),param_3);
    local_14 = std::string::size((string *)(iVar1 + 8));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_14);
    iVar1 = G_CDataManager();
    iVar1 = std::vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>>::operator[]
                      ((vector<stLightServerNotice_t,std::allocator<stLightServerNotice_t>> *)
                       (iVar1 + 0xa4),param_3);
    pcVar3 = (char *)std::string::c_str((string *)(iVar1 + 8));
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,pcVar3,local_14);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_20);
    local_d = RegistNextTimer((TimerLightServerNotice *)param_1,param_3);
    bVar4 = local_d == '\x01';
    PacketGuard::~PacketGuard(local_20);
  }
  return bVar4;
}
```
