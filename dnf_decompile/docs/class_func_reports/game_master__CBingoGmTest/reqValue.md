# reqValue

`_ZN11game_master12CBingoGmTest8reqValueEv`

`game_master::CBingoGmTest::reqValue()`

| 类 | 地址 |
|---|---|
| `game_master::CBingoGmTest` | `0x084b368a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084b368a  _ZN11game_master12CBingoGmTest8reqValueEv
#           game_master::CBingoGmTest::reqValue()
# range [0x084b368a, 0x084b388b]
084b368a +0x000:  push   %ebp
084b368b +0x001:  mov    %esp,%ebp
084b368d +0x003:  push   %esi
084b368e +0x004:  push   %ebx
084b368f +0x005:  sub    $0x40,%esp
084b3692 +0x008:  mov    0x8(%ebp),%eax
084b3695 +0x00b:  mov    %eax,(%esp)
084b3698 +0x00e:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084b369d +0x013:  mov    %eax,-0x20(%ebp)
084b36a0 +0x016:  cmpl   $0x0,-0x20(%ebp)
084b36a4 +0x01a:  je     084b387d <+0x1f3>
084b36aa +0x020:  mov    &_ZN10GlobalData15s_event_managerE,%eax
084b36af +0x025:  movl   $0x6a,0x4(%esp)
084b36b7 +0x02d:  mov    %eax,(%esp)
084b36ba +0x030:  call   08115998 <_ZN13CEventManager14GetRepeatEventEi>  ; CEventManager::GetRepeatEvent(int)
084b36bf +0x035:  mov    %eax,-0x1c(%ebp)
084b36c2 +0x038:  cmpl   $0x0,-0x1c(%ebp)
084b36c6 +0x03c:  je     084b3880 <+0x1f6>
084b36cc +0x042:  mov    -0x20(%ebp),%eax
084b36cf +0x045:  mov    %eax,(%esp)
084b36d2 +0x048:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
084b36d7 +0x04d:  movzbl 0x4(%eax),%eax
084b36db +0x051:  cmp    $0x2,%al
084b36dd +0x053:  setg   %al
084b36e0 +0x056:  test   %al,%al
084b36e2 +0x058:  jne    084b3883 <+0x1f9>
084b36e8 +0x05e:  mov    -0x20(%ebp),%eax
084b36eb +0x061:  mov    %eax,(%esp)
084b36ee +0x064:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
084b36f3 +0x069:  mov    (%eax),%eax
084b36f5 +0x06b:  mov    %eax,-0x18(%ebp)
084b36f8 +0x06e:  mov    0x8(%ebp),%eax
084b36fb +0x071:  mov    0x8(%eax),%esi
084b36fe +0x074:  mov    -0x20(%ebp),%eax
084b3701 +0x077:  mov    %eax,(%esp)
084b3704 +0x07a:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
084b3709 +0x07f:  mov    %eax,%ebx
084b370b +0x081:  mov    -0x1c(%ebp),%eax
084b370e +0x084:  mov    %eax,(%esp)
084b3711 +0x087:  call   080c9fea <_ZN10BingoEvent14getBingoSystemEv>  ; BingoEvent::getBingoSystem()
084b3716 +0x08c:  mov    %eax,(%esp)
084b3719 +0x08f:  call   080ce766 <_GLOBAL__I__ZN10BingoEventC2Ev+0x35b3>  ; global constructors keyed to BingoEvent::BingoEvent()+0x35b3
084b371e +0x094:  mov    %esi,0x8(%esp)
084b3722 +0x098:  mov    %ebx,0x4(%esp)
084b3726 +0x09c:  mov    %eax,(%esp)
084b3729 +0x09f:  call   080cad4c <_ZN6CBingo11calNewValueERji>  ; CBingo::calNewValue(unsigned int&, int)
084b372e +0x0a4:  mov    %eax,-0x14(%ebp)
084b3731 +0x0a7:  mov    -0x20(%ebp),%eax
084b3734 +0x0aa:  mov    %eax,(%esp)
084b3737 +0x0ad:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
084b373c +0x0b2:  mov    (%eax),%eax
084b373e +0x0b4:  cmp    -0x18(%ebp),%eax
084b3741 +0x0b7:  setne  %al
084b3744 +0x0ba:  test   %al,%al
084b3746 +0x0bc:  je     084b37cc <+0x142>
084b374c +0x0c2:  mov    -0x20(%ebp),%eax
084b374f +0x0c5:  mov    %eax,(%esp)
084b3752 +0x0c8:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
084b3757 +0x0cd:  movb   $0x1,0x6(%eax)
084b375b +0x0d1:  mov    -0x20(%ebp),%eax
084b375e +0x0d4:  mov    %eax,(%esp)
084b3761 +0x0d7:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
084b3766 +0x0dc:  movzbl 0x4(%eax),%eax
084b376a +0x0e0:  movsbl %al,%eax
084b376d +0x0e3:  mov    -0x14(%ebp),%edx
084b3770 +0x0e6:  mov    %edx,%ecx
084b3772 +0x0e8:  sub    %eax,%ecx
084b3774 +0x0ea:  mov    %ecx,%eax
084b3776 +0x0ec:  mov    %eax,-0x10(%ebp)
084b3779 +0x0ef:  cmpl   $0x0,-0x10(%ebp)
084b377d +0x0f3:  jle    084b37cc <+0x142>
084b377f +0x0f5:  mov    -0x10(%ebp),%eax
084b3782 +0x0f8:  cmp    $0x3,%eax
084b3785 +0x0fb:  jle    084b378c <+0x102>
084b3787 +0x0fd:  mov    $0x3,%eax
084b378c +0x102:  mov    %eax,-0x10(%ebp)
084b378f +0x105:  mov    -0x20(%ebp),%eax
084b3792 +0x108:  mov    %eax,(%esp)
084b3795 +0x10b:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
084b379a +0x110:  mov    -0x14(%ebp),%edx
084b379d +0x113:  mov    %dl,0x4(%eax)
084b37a0 +0x116:  movl   $0x0,-0xc(%ebp)
084b37a7 +0x11d:  jmp    084b37bf <+0x135>
084b37a9 +0x11f:  mov    -0x20(%ebp),%eax
084b37ac +0x122:  mov    %eax,0x4(%esp)
084b37b0 +0x126:  mov    -0x1c(%ebp),%eax
084b37b3 +0x129:  mov    %eax,(%esp)
084b37b6 +0x12c:  call   080ca3d4 <_ZN10BingoEvent22sendOneMatchLineRewardER5CUser>  ; BingoEvent::sendOneMatchLineReward(CUser&)
084b37bb +0x131:  addl   $0x1,-0xc(%ebp)
084b37bf +0x135:  mov    -0xc(%ebp),%eax
084b37c2 +0x138:  cmp    -0x10(%ebp),%eax
084b37c5 +0x13b:  setl   %al
084b37c8 +0x13e:  test   %al,%al
084b37ca +0x140:  jne    084b37a9 <+0x11f>
084b37cc +0x142:  lea    -0x2c(%ebp),%eax
084b37cf +0x145:  mov    %eax,(%esp)
084b37d2 +0x148:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084b37d7 +0x14d:  lea    -0x2c(%ebp),%eax
084b37da +0x150:  mov    %eax,(%esp)
084b37dd +0x153:  call   080cb8e6 <_GLOBAL__I__ZN10BingoEventC2Ev+0x733>  ; global constructors keyed to BingoEvent::BingoEvent()+0x733
084b37e2 +0x158:  movl   $0x1c3,0x8(%esp)
084b37ea +0x160:  movl   $0x0,0x4(%esp)
084b37f2 +0x168:  lea    -0x2c(%ebp),%eax
084b37f5 +0x16b:  mov    %eax,(%esp)
084b37f8 +0x16e:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084b37fd +0x173:  mov    0x8(%ebp),%eax
084b3800 +0x176:  mov    0x8(%eax),%eax
084b3803 +0x179:  mov    %eax,0x4(%esp)
084b3807 +0x17d:  lea    -0x2c(%ebp),%eax
084b380a +0x180:  mov    %eax,(%esp)
084b380d +0x183:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084b3812 +0x188:  mov    -0x20(%ebp),%eax
084b3815 +0x18b:  mov    %eax,(%esp)
084b3818 +0x18e:  call   086912b0 <_ZN5CUser12getBingoDataEv>  ; CUser::getBingoData()
084b381d +0x193:  mov    (%eax),%eax
084b381f +0x195:  mov    %eax,0x4(%esp)
084b3823 +0x199:  lea    -0x2c(%ebp),%eax
084b3826 +0x19c:  mov    %eax,(%esp)
084b3829 +0x19f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084b382e +0x1a4:  movl   $0x1,0x4(%esp)
084b3836 +0x1ac:  lea    -0x2c(%ebp),%eax
084b3839 +0x1af:  mov    %eax,(%esp)
084b383c +0x1b2:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084b3841 +0x1b7:  lea    -0x2c(%ebp),%eax
084b3844 +0x1ba:  mov    %eax,0x4(%esp)
084b3848 +0x1be:  mov    -0x20(%ebp),%eax
084b384b +0x1c1:  mov    %eax,(%esp)
084b384e +0x1c4:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084b3853 +0x1c9:  jmp    084b3870 <+0x1e6>
084b3855 +0x1cb:  mov    %edx,%ebx
084b3857 +0x1cd:  mov    %eax,%esi
084b3859 +0x1cf:  lea    -0x2c(%ebp),%eax
084b385c +0x1d2:  mov    %eax,(%esp)
084b385f +0x1d5:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b3864 +0x1da:  mov    %esi,%eax
084b3866 +0x1dc:  mov    %ebx,%edx
084b3868 +0x1de:  mov    %eax,(%esp)
084b386b +0x1e1:  call   08ae3750 <_Unwind_Resume>
084b3870 +0x1e6:  lea    -0x2c(%ebp),%eax
084b3873 +0x1e9:  mov    %eax,(%esp)
084b3876 +0x1ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084b387b +0x1f1:  jmp    084b3884 <+0x1fa>
084b387d +0x1f3:  nop
084b387e +0x1f4:  jmp    084b3884 <+0x1fa>
084b3880 +0x1f6:  nop
084b3881 +0x1f7:  jmp    084b3884 <+0x1fa>
084b3883 +0x1f9:  nop
084b3884 +0x1fa:  add    $0x40,%esp
084b3887 +0x1fd:  pop    %ebx
084b3888 +0x1fe:  pop    %esi
084b3889 +0x1ff:  pop    %ebp
084b388a +0x200:  ret
084b388b +0x201:  nop
```

## 反编译 C

```c
// game_master::CBingoGmTest::reqValue @ 0x84b368a

/* game_master::CBingoGmTest::reqValue() */

void __thiscall game_master::CBingoGmTest::reqValue(CBingoGmTest *this)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  shared_ptr<CBingo> *this_00;
  CBingo *this_01;
  PacketGuard local_30 [12];
  CUser *local_24;
  BingoEvent *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  local_24 = (CUser *)CCommand::GetUser((CCommand *)this);
  if (((local_24 != (CUser *)0x0) &&
      (local_20 = (BingoEvent *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x6a),
      local_20 != (BingoEvent *)0x0)) &&
     (iVar1 = CUser::getBingoData(local_24), *(char *)(iVar1 + 4) < '\x03')) {
    piVar2 = (int *)CUser::getBingoData(local_24);
    local_1c = *piVar2;
    iVar1 = *(int *)(this + 8);
    puVar3 = (uint *)CUser::getBingoData(local_24);
    this_00 = (shared_ptr<CBingo> *)BingoEvent::getBingoSystem(local_20);
    this_01 = (CBingo *)boost::shared_ptr<CBingo>::operator->(this_00);
    local_18 = CBingo::calNewValue(this_01,puVar3,iVar1);
    piVar2 = (int *)CUser::getBingoData(local_24);
    if (*piVar2 != local_1c) {
      iVar1 = CUser::getBingoData(local_24);
      *(undefined1 *)(iVar1 + 6) = 1;
      iVar1 = CUser::getBingoData(local_24);
      local_14 = local_18 - *(char *)(iVar1 + 4);
      if (0 < local_14) {
        if (3 < local_14) {
          local_14 = 3;
        }
        iVar1 = CUser::getBingoData(local_24);
        *(char *)(iVar1 + 4) = (char)local_18;
        for (local_10 = 0; local_10 < local_14; local_10 = local_10 + 1) {
          BingoEvent::sendOneMatchLineReward(local_20,local_24);
        }
      }
    }
    PacketGuard::PacketGuard(local_30);
                    /* try { // try from 084b37dd to 084b3852 has its CatchHandler @ 084b3855 */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_30);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_30,0,0x1c3);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_30,*(int *)(this + 8));
    piVar2 = (int *)CUser::getBingoData(local_24);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_30,*piVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_30,true);
    CUser::Send(local_24,local_30);
    PacketGuard::~PacketGuard(local_30);
  }
  return;
}
```
