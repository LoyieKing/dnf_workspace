# dispatch_sig

`_ZN20Inter_CheckJoinGuild12dispatch_sigEP5CUserPci`

`Inter_CheckJoinGuild::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CheckJoinGuild` | `0x084e3790` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e3790  _ZN20Inter_CheckJoinGuild12dispatch_sigEP5CUserPci
#           Inter_CheckJoinGuild::dispatch_sig(CUser*, char*, int)
# range [0x084e3790, 0x084e3923]
084e3790 +0x000:  push   %ebp
084e3791 +0x001:  mov    %esp,%ebp
084e3793 +0x003:  push   %esi
084e3794 +0x004:  push   %ebx
084e3795 +0x005:  sub    $0x30,%esp
084e3798 +0x008:  mov    0xc(%ebp),%eax
084e379b +0x00b:  mov    %eax,(%esp)
084e379e +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e37a3 +0x013:  cmp    $0x2,%eax
084e37a6 +0x016:  setle  %al
084e37a9 +0x019:  test   %al,%al
084e37ab +0x01b:  je     084e37b7 <+0x27>
084e37ad +0x01d:  mov    $0x0,%eax
084e37b2 +0x022:  jmp    084e391d <+0x18d>
084e37b7 +0x027:  mov    0x10(%ebp),%eax
084e37ba +0x02a:  mov    %eax,-0x10(%ebp)
084e37bd +0x02d:  mov    -0x10(%ebp),%eax
084e37c0 +0x030:  mov    (%eax),%eax
084e37c2 +0x032:  test   %eax,%eax
084e37c4 +0x034:  je     084e37ea <+0x5a>
084e37c6 +0x036:  mov    -0x10(%ebp),%eax
084e37c9 +0x039:  mov    (%eax),%eax
084e37cb +0x03b:  movzbl %al,%eax
084e37ce +0x03e:  mov    %eax,0x8(%esp)
084e37d2 +0x042:  movl   $0x15c,0x4(%esp)
084e37da +0x04a:  mov    0xc(%ebp),%eax
084e37dd +0x04d:  mov    %eax,(%esp)
084e37e0 +0x050:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e37e5 +0x055:  jmp    084e3918 <+0x188>
084e37ea +0x05a:  lea    -0x1c(%ebp),%eax
084e37ed +0x05d:  mov    %eax,(%esp)
084e37f0 +0x060:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e37f5 +0x065:  movl   $0x15c,0x8(%esp)
084e37fd +0x06d:  movl   $0x1,0x4(%esp)
084e3805 +0x075:  lea    -0x1c(%ebp),%eax
084e3808 +0x078:  mov    %eax,(%esp)
084e380b +0x07b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e3810 +0x080:  movl   $0x1,0x4(%esp)
084e3818 +0x088:  lea    -0x1c(%ebp),%eax
084e381b +0x08b:  mov    %eax,(%esp)
084e381e +0x08e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e3823 +0x093:  mov    -0x10(%ebp),%eax
084e3826 +0x096:  add    $0x22,%eax
084e3829 +0x099:  mov    %eax,(%esp)
084e382c +0x09c:  call   0807e3b0 <_init+0xca8>
084e3831 +0x0a1:  mov    %eax,-0xc(%ebp)
084e3834 +0x0a4:  mov    -0xc(%ebp),%eax
084e3837 +0x0a7:  mov    %eax,0x4(%esp)
084e383b +0x0ab:  lea    -0x1c(%ebp),%eax
084e383e +0x0ae:  mov    %eax,(%esp)
084e3841 +0x0b1:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3846 +0x0b6:  mov    -0x10(%ebp),%eax
084e3849 +0x0b9:  lea    0x22(%eax),%edx
084e384c +0x0bc:  mov    -0xc(%ebp),%eax
084e384f +0x0bf:  mov    %eax,0x8(%esp)
084e3853 +0x0c3:  mov    %edx,0x4(%esp)
084e3857 +0x0c7:  lea    -0x1c(%ebp),%eax
084e385a +0x0ca:  mov    %eax,(%esp)
084e385d +0x0cd:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e3862 +0x0d2:  mov    -0x10(%ebp),%eax
084e3865 +0x0d5:  add    $0x4,%eax
084e3868 +0x0d8:  mov    %eax,(%esp)
084e386b +0x0db:  call   0807e3b0 <_init+0xca8>
084e3870 +0x0e0:  mov    %eax,-0xc(%ebp)
084e3873 +0x0e3:  mov    -0xc(%ebp),%eax
084e3876 +0x0e6:  mov    %eax,0x4(%esp)
084e387a +0x0ea:  lea    -0x1c(%ebp),%eax
084e387d +0x0ed:  mov    %eax,(%esp)
084e3880 +0x0f0:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3885 +0x0f5:  mov    -0x10(%ebp),%eax
084e3888 +0x0f8:  lea    0x4(%eax),%edx
084e388b +0x0fb:  mov    -0xc(%ebp),%eax
084e388e +0x0fe:  mov    %eax,0x8(%esp)
084e3892 +0x102:  mov    %edx,0x4(%esp)
084e3896 +0x106:  lea    -0x1c(%ebp),%eax
084e3899 +0x109:  mov    %eax,(%esp)
084e389c +0x10c:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e38a1 +0x111:  mov    -0x10(%ebp),%eax
084e38a4 +0x114:  mov    0x3c(%eax),%eax
084e38a7 +0x117:  mov    %eax,0x4(%esp)
084e38ab +0x11b:  lea    -0x1c(%ebp),%eax
084e38ae +0x11e:  mov    %eax,(%esp)
084e38b1 +0x121:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e38b6 +0x126:  mov    -0x10(%ebp),%eax
084e38b9 +0x129:  mov    0x40(%eax),%eax
084e38bc +0x12c:  mov    %eax,0x4(%esp)
084e38c0 +0x130:  lea    -0x1c(%ebp),%eax
084e38c3 +0x133:  mov    %eax,(%esp)
084e38c6 +0x136:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e38cb +0x13b:  movl   $0x1,0x4(%esp)
084e38d3 +0x143:  lea    -0x1c(%ebp),%eax
084e38d6 +0x146:  mov    %eax,(%esp)
084e38d9 +0x149:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e38de +0x14e:  lea    -0x1c(%ebp),%eax
084e38e1 +0x151:  mov    %eax,0x4(%esp)
084e38e5 +0x155:  mov    0xc(%ebp),%eax
084e38e8 +0x158:  mov    %eax,(%esp)
084e38eb +0x15b:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e38f0 +0x160:  jmp    084e390d <+0x17d>
084e38f2 +0x162:  mov    %edx,%ebx
084e38f4 +0x164:  mov    %eax,%esi
084e38f6 +0x166:  lea    -0x1c(%ebp),%eax
084e38f9 +0x169:  mov    %eax,(%esp)
084e38fc +0x16c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e3901 +0x171:  mov    %esi,%eax
084e3903 +0x173:  mov    %ebx,%edx
084e3905 +0x175:  mov    %eax,(%esp)
084e3908 +0x178:  call   08ae3750 <_Unwind_Resume>
084e390d +0x17d:  lea    -0x1c(%ebp),%eax
084e3910 +0x180:  mov    %eax,(%esp)
084e3913 +0x183:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e3918 +0x188:  mov    $0x0,%eax
084e391d +0x18d:  add    $0x30,%esp
084e3920 +0x190:  pop    %ebx
084e3921 +0x191:  pop    %esi
084e3922 +0x192:  pop    %ebp
084e3923 +0x193:  ret
```

## 反编译 C

```c
// Inter_CheckJoinGuild::dispatch_sig @ 0x84e3790

/* Inter_CheckJoinGuild::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CheckJoinGuild::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_14 = param_3;
    if (*(int *)param_3 == 0) {
      PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084e380b to 084e38ef has its CatchHandler @ 084e38f2 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x15c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      local_10 = strlen((char *)(local_14 + 0x22));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x22),local_10)
      ;
      local_10 = strlen((char *)(local_14 + 4));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 4),local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x3c));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x40));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x15c,*(uint *)param_3 & 0xff);
    }
  }
  return 0;
}
```
