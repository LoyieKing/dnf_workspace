# dispatch_sig

`_ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci`

`Inter_TodayGuildMember::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_TodayGuildMember` | `0x084e358a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e358a  _ZN22Inter_TodayGuildMember12dispatch_sigEP5CUserPci
#           Inter_TodayGuildMember::dispatch_sig(CUser*, char*, int)
# range [0x084e358a, 0x084e378f]
084e358a +0x000:  push   %ebp
084e358b +0x001:  mov    %esp,%ebp
084e358d +0x003:  push   %esi
084e358e +0x004:  push   %ebx
084e358f +0x005:  sub    $0x30,%esp
084e3592 +0x008:  mov    0x10(%ebp),%eax
084e3595 +0x00b:  mov    %eax,-0x10(%ebp)
084e3598 +0x00e:  mov    0xc(%ebp),%eax
084e359b +0x011:  mov    %eax,(%esp)
084e359e +0x014:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e35a3 +0x019:  cmp    $0x2,%eax
084e35a6 +0x01c:  setle  %al
084e35a9 +0x01f:  test   %al,%al
084e35ab +0x021:  je     084e35b7 <+0x2d>
084e35ad +0x023:  mov    $0x0,%ebx
084e35b2 +0x028:  jmp    084e3787 <+0x1fd>
084e35b7 +0x02d:  mov    -0x10(%ebp),%eax
084e35ba +0x030:  mov    0xe(%eax),%ebx
084e35bd +0x033:  mov    0xc(%ebp),%eax
084e35c0 +0x036:  mov    %eax,(%esp)
084e35c3 +0x039:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e35c8 +0x03e:  cmp    %eax,%ebx
084e35ca +0x040:  setne  %al
084e35cd +0x043:  test   %al,%al
084e35cf +0x045:  je     084e35db <+0x51>
084e35d1 +0x047:  mov    $0x0,%ebx
084e35d6 +0x04c:  jmp    084e3787 <+0x1fd>
084e35db +0x051:  mov    -0x10(%ebp),%eax
084e35de +0x054:  mov    0x16(%eax),%eax
084e35e1 +0x057:  test   %eax,%eax
084e35e3 +0x059:  je     084e3601 <+0x77>
084e35e5 +0x05b:  mov    -0x10(%ebp),%eax
084e35e8 +0x05e:  mov    0x16(%eax),%ebx
084e35eb +0x061:  mov    0xc(%ebp),%eax
084e35ee +0x064:  mov    %eax,(%esp)
084e35f1 +0x067:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e35f6 +0x06c:  cmp    %eax,%ebx
084e35f8 +0x06e:  jne    084e3601 <+0x77>
084e35fa +0x070:  mov    $0x1,%eax
084e35ff +0x075:  jmp    084e3606 <+0x7c>
084e3601 +0x077:  mov    $0x0,%eax
084e3606 +0x07c:  test   %al,%al
084e3608 +0x07e:  je     084e361d <+0x93>
084e360a +0x080:  movl   $0x1,0x4(%esp)
084e3612 +0x088:  mov    0xc(%ebp),%eax
084e3615 +0x08b:  mov    %eax,(%esp)
084e3618 +0x08e:  call   084ecf10 <_GLOBAL__I__Z7getUserj+0x3ec2>  ; global constructors keyed to getUser(unsigned int)+0x3ec2
084e361d +0x093:  lea    -0x1c(%ebp),%eax
084e3620 +0x096:  mov    %eax,(%esp)
084e3623 +0x099:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e3628 +0x09e:  movl   $0x130,0x8(%esp)
084e3630 +0x0a6:  movl   $0x0,0x4(%esp)
084e3638 +0x0ae:  lea    -0x1c(%ebp),%eax
084e363b +0x0b1:  mov    %eax,(%esp)
084e363e +0x0b4:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e3643 +0x0b9:  mov    -0x10(%ebp),%eax
084e3646 +0x0bc:  mov    0x16(%eax),%eax
084e3649 +0x0bf:  test   %eax,%eax
084e364b +0x0c1:  je     084e3722 <+0x198>
084e3651 +0x0c7:  movl   $0x1,0x4(%esp)
084e3659 +0x0cf:  lea    -0x1c(%ebp),%eax
084e365c +0x0d2:  mov    %eax,(%esp)
084e365f +0x0d5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3664 +0x0da:  mov    -0x10(%ebp),%eax
084e3667 +0x0dd:  add    $0x1a,%eax
084e366a +0x0e0:  mov    %eax,(%esp)
084e366d +0x0e3:  call   0807e3b0 <_init+0xca8>
084e3672 +0x0e8:  mov    %eax,-0xc(%ebp)
084e3675 +0x0eb:  mov    -0xc(%ebp),%eax
084e3678 +0x0ee:  mov    %eax,0x4(%esp)
084e367c +0x0f2:  lea    -0x1c(%ebp),%eax
084e367f +0x0f5:  mov    %eax,(%esp)
084e3682 +0x0f8:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3687 +0x0fd:  mov    -0x10(%ebp),%eax
084e368a +0x100:  lea    0x1a(%eax),%edx
084e368d +0x103:  mov    -0xc(%ebp),%eax
084e3690 +0x106:  mov    %eax,0x8(%esp)
084e3694 +0x10a:  mov    %edx,0x4(%esp)
084e3698 +0x10e:  lea    -0x1c(%ebp),%eax
084e369b +0x111:  mov    %eax,(%esp)
084e369e +0x114:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e36a3 +0x119:  mov    -0x10(%ebp),%eax
084e36a6 +0x11c:  movzbl 0x38(%eax),%eax
084e36aa +0x120:  movsbl %al,%eax
084e36ad +0x123:  mov    %eax,0x4(%esp)
084e36b1 +0x127:  lea    -0x1c(%ebp),%eax
084e36b4 +0x12a:  mov    %eax,(%esp)
084e36b7 +0x12d:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e36bc +0x132:  mov    -0x10(%ebp),%eax
084e36bf +0x135:  movzbl 0x39(%eax),%eax
084e36c3 +0x139:  movsbl %al,%eax
084e36c6 +0x13c:  mov    %eax,0x4(%esp)
084e36ca +0x140:  lea    -0x1c(%ebp),%eax
084e36cd +0x143:  mov    %eax,(%esp)
084e36d0 +0x146:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e36d5 +0x14b:  mov    -0x10(%ebp),%eax
084e36d8 +0x14e:  movzbl 0x3a(%eax),%eax
084e36dc +0x152:  movsbl %al,%eax
084e36df +0x155:  mov    %eax,0x4(%esp)
084e36e3 +0x159:  lea    -0x1c(%ebp),%eax
084e36e6 +0x15c:  mov    %eax,(%esp)
084e36e9 +0x15f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e36ee +0x164:  mov    -0x10(%ebp),%eax
084e36f1 +0x167:  movzbl 0x3c(%eax),%eax
084e36f5 +0x16b:  movsbl %al,%eax
084e36f8 +0x16e:  mov    %eax,0x4(%esp)
084e36fc +0x172:  lea    -0x1c(%ebp),%eax
084e36ff +0x175:  mov    %eax,(%esp)
084e3702 +0x178:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3707 +0x17d:  mov    -0x10(%ebp),%eax
084e370a +0x180:  movzbl 0x3b(%eax),%eax
084e370e +0x184:  movsbl %al,%eax
084e3711 +0x187:  mov    %eax,0x4(%esp)
084e3715 +0x18b:  lea    -0x1c(%ebp),%eax
084e3718 +0x18e:  mov    %eax,(%esp)
084e371b +0x191:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3720 +0x196:  jmp    084e3735 <+0x1ab>
084e3722 +0x198:  movl   $0x0,0x4(%esp)
084e372a +0x1a0:  lea    -0x1c(%ebp),%eax
084e372d +0x1a3:  mov    %eax,(%esp)
084e3730 +0x1a6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3735 +0x1ab:  movl   $0x1,0x4(%esp)
084e373d +0x1b3:  lea    -0x1c(%ebp),%eax
084e3740 +0x1b6:  mov    %eax,(%esp)
084e3743 +0x1b9:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e3748 +0x1be:  lea    -0x1c(%ebp),%eax
084e374b +0x1c1:  mov    %eax,0x4(%esp)
084e374f +0x1c5:  mov    0xc(%ebp),%eax
084e3752 +0x1c8:  mov    %eax,(%esp)
084e3755 +0x1cb:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e375a +0x1d0:  mov    $0x0,%ebx
084e375f +0x1d5:  lea    -0x1c(%ebp),%eax
084e3762 +0x1d8:  mov    %eax,(%esp)
084e3765 +0x1db:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e376a +0x1e0:  jmp    084e3787 <+0x1fd>
084e376c +0x1e2:  mov    %edx,%ebx
084e376e +0x1e4:  mov    %eax,%esi
084e3770 +0x1e6:  lea    -0x1c(%ebp),%eax
084e3773 +0x1e9:  mov    %eax,(%esp)
084e3776 +0x1ec:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e377b +0x1f1:  mov    %esi,%eax
084e377d +0x1f3:  mov    %ebx,%edx
084e377f +0x1f5:  mov    %eax,(%esp)
084e3782 +0x1f8:  call   08ae3750 <_Unwind_Resume>
084e3787 +0x1fd:  mov    %ebx,%eax
084e3789 +0x1ff:  add    $0x30,%esp
084e378c +0x202:  pop    %ebx
084e378d +0x203:  pop    %esi
084e378e +0x204:  pop    %ebp
084e378f +0x205:  ret
```

## 反编译 C

```c
// Inter_TodayGuildMember::dispatch_sig @ 0x84e358a

/* Inter_TodayGuildMember::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_TodayGuildMember::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  local_14 = param_3;
  iVar2 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar2) &&
     (iVar2 = *(int *)(local_14 + 0xe),
     iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar2 == iVar3)) {
    if ((*(int *)(local_14 + 0x16) == 0) ||
       (iVar2 = *(int *)(local_14 + 0x16),
       iVar3 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2), iVar2 != iVar3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      CUser::SetTodayGuildMember((CUser *)param_2,true);
    }
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e363e to 084e3759 has its CatchHandler @ 084e376c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x130);
    if (*(int *)(local_14 + 0x16) == 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,0);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      local_10 = strlen((char *)(local_14 + 0x1a));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x1a),local_10)
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x38));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x39));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x3a));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x3c));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,(int)*(char *)(local_14 + 0x3b));
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}
```
