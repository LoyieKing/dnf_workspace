# dispatch_sig

`_ZN22Inter_RequestJoinGuild12dispatch_sigEP5CUserPci`

`Inter_RequestJoinGuild::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_RequestJoinGuild` | `0x084e3924` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e3924  _ZN22Inter_RequestJoinGuild12dispatch_sigEP5CUserPci
#           Inter_RequestJoinGuild::dispatch_sig(CUser*, char*, int)
# range [0x084e3924, 0x084e3acd]
084e3924 +0x000:  push   %ebp
084e3925 +0x001:  mov    %esp,%ebp
084e3927 +0x003:  push   %esi
084e3928 +0x004:  push   %ebx
084e3929 +0x005:  sub    $0x30,%esp
084e392c +0x008:  mov    0xc(%ebp),%eax
084e392f +0x00b:  mov    %eax,(%esp)
084e3932 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e3937 +0x013:  cmp    $0x2,%eax
084e393a +0x016:  setle  %al
084e393d +0x019:  test   %al,%al
084e393f +0x01b:  je     084e394b <+0x27>
084e3941 +0x01d:  mov    $0x0,%eax
084e3946 +0x022:  jmp    084e3ac6 <+0x1a2>
084e394b +0x027:  mov    0x10(%ebp),%eax
084e394e +0x02a:  mov    %eax,-0x10(%ebp)
084e3951 +0x02d:  mov    -0x10(%ebp),%eax
084e3954 +0x030:  mov    (%eax),%eax
084e3956 +0x032:  test   %eax,%eax
084e3958 +0x034:  je     084e397e <+0x5a>
084e395a +0x036:  mov    -0x10(%ebp),%eax
084e395d +0x039:  mov    (%eax),%eax
084e395f +0x03b:  movzbl %al,%eax
084e3962 +0x03e:  mov    %eax,0x8(%esp)
084e3966 +0x042:  movl   $0x15d,0x4(%esp)
084e396e +0x04a:  mov    0xc(%ebp),%eax
084e3971 +0x04d:  mov    %eax,(%esp)
084e3974 +0x050:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e3979 +0x055:  jmp    084e3ac1 <+0x19d>
084e397e +0x05a:  lea    -0x1c(%ebp),%eax
084e3981 +0x05d:  mov    %eax,(%esp)
084e3984 +0x060:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e3989 +0x065:  movl   $0x15d,0x8(%esp)
084e3991 +0x06d:  movl   $0x1,0x4(%esp)
084e3999 +0x075:  lea    -0x1c(%ebp),%eax
084e399c +0x078:  mov    %eax,(%esp)
084e399f +0x07b:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e39a4 +0x080:  movl   $0x1,0x4(%esp)
084e39ac +0x088:  lea    -0x1c(%ebp),%eax
084e39af +0x08b:  mov    %eax,(%esp)
084e39b2 +0x08e:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e39b7 +0x093:  mov    -0x10(%ebp),%eax
084e39ba +0x096:  mov    0x4(%eax),%eax
084e39bd +0x099:  mov    %eax,0x4(%esp)
084e39c1 +0x09d:  lea    -0x1c(%ebp),%eax
084e39c4 +0x0a0:  mov    %eax,(%esp)
084e39c7 +0x0a3:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e39cc +0x0a8:  mov    -0x10(%ebp),%eax
084e39cf +0x0ab:  add    $0x26,%eax
084e39d2 +0x0ae:  mov    %eax,(%esp)
084e39d5 +0x0b1:  call   0807e3b0 <_init+0xca8>
084e39da +0x0b6:  mov    %eax,-0xc(%ebp)
084e39dd +0x0b9:  mov    -0xc(%ebp),%eax
084e39e0 +0x0bc:  mov    %eax,0x4(%esp)
084e39e4 +0x0c0:  lea    -0x1c(%ebp),%eax
084e39e7 +0x0c3:  mov    %eax,(%esp)
084e39ea +0x0c6:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e39ef +0x0cb:  mov    -0x10(%ebp),%eax
084e39f2 +0x0ce:  lea    0x26(%eax),%edx
084e39f5 +0x0d1:  mov    -0xc(%ebp),%eax
084e39f8 +0x0d4:  mov    %eax,0x8(%esp)
084e39fc +0x0d8:  mov    %edx,0x4(%esp)
084e3a00 +0x0dc:  lea    -0x1c(%ebp),%eax
084e3a03 +0x0df:  mov    %eax,(%esp)
084e3a06 +0x0e2:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e3a0b +0x0e7:  mov    -0x10(%ebp),%eax
084e3a0e +0x0ea:  add    $0x8,%eax
084e3a11 +0x0ed:  mov    %eax,(%esp)
084e3a14 +0x0f0:  call   0807e3b0 <_init+0xca8>
084e3a19 +0x0f5:  mov    %eax,-0xc(%ebp)
084e3a1c +0x0f8:  mov    -0xc(%ebp),%eax
084e3a1f +0x0fb:  mov    %eax,0x4(%esp)
084e3a23 +0x0ff:  lea    -0x1c(%ebp),%eax
084e3a26 +0x102:  mov    %eax,(%esp)
084e3a29 +0x105:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3a2e +0x10a:  mov    -0x10(%ebp),%eax
084e3a31 +0x10d:  lea    0x8(%eax),%edx
084e3a34 +0x110:  mov    -0xc(%ebp),%eax
084e3a37 +0x113:  mov    %eax,0x8(%esp)
084e3a3b +0x117:  mov    %edx,0x4(%esp)
084e3a3f +0x11b:  lea    -0x1c(%ebp),%eax
084e3a42 +0x11e:  mov    %eax,(%esp)
084e3a45 +0x121:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e3a4a +0x126:  mov    -0x10(%ebp),%eax
084e3a4d +0x129:  mov    0x40(%eax),%eax
084e3a50 +0x12c:  mov    %eax,0x4(%esp)
084e3a54 +0x130:  lea    -0x1c(%ebp),%eax
084e3a57 +0x133:  mov    %eax,(%esp)
084e3a5a +0x136:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3a5f +0x13b:  mov    -0x10(%ebp),%eax
084e3a62 +0x13e:  mov    0x44(%eax),%eax
084e3a65 +0x141:  mov    %eax,0x4(%esp)
084e3a69 +0x145:  lea    -0x1c(%ebp),%eax
084e3a6c +0x148:  mov    %eax,(%esp)
084e3a6f +0x14b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e3a74 +0x150:  movl   $0x1,0x4(%esp)
084e3a7c +0x158:  lea    -0x1c(%ebp),%eax
084e3a7f +0x15b:  mov    %eax,(%esp)
084e3a82 +0x15e:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e3a87 +0x163:  lea    -0x1c(%ebp),%eax
084e3a8a +0x166:  mov    %eax,0x4(%esp)
084e3a8e +0x16a:  mov    0xc(%ebp),%eax
084e3a91 +0x16d:  mov    %eax,(%esp)
084e3a94 +0x170:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e3a99 +0x175:  jmp    084e3ab6 <+0x192>
084e3a9b +0x177:  mov    %edx,%ebx
084e3a9d +0x179:  mov    %eax,%esi
084e3a9f +0x17b:  lea    -0x1c(%ebp),%eax
084e3aa2 +0x17e:  mov    %eax,(%esp)
084e3aa5 +0x181:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e3aaa +0x186:  mov    %esi,%eax
084e3aac +0x188:  mov    %ebx,%edx
084e3aae +0x18a:  mov    %eax,(%esp)
084e3ab1 +0x18d:  call   08ae3750 <_Unwind_Resume>
084e3ab6 +0x192:  lea    -0x1c(%ebp),%eax
084e3ab9 +0x195:  mov    %eax,(%esp)
084e3abc +0x198:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e3ac1 +0x19d:  mov    $0x0,%eax
084e3ac6 +0x1a2:  add    $0x30,%esp
084e3ac9 +0x1a5:  pop    %ebx
084e3aca +0x1a6:  pop    %esi
084e3acb +0x1a7:  pop    %ebp
084e3acc +0x1a8:  ret
084e3acd +0x1a9:  nop
```

## 反编译 C

```c
// Inter_RequestJoinGuild::dispatch_sig @ 0x84e3924

/* Inter_RequestJoinGuild::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_RequestJoinGuild::dispatch_sig(CUser *param_1,char *param_2,int param_3)

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
                    /* try { // try from 084e399f to 084e3a98 has its CatchHandler @ 084e3a9b */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,1,0x15d);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_20,1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 4));
      local_10 = strlen((char *)(local_14 + 0x26));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x26),local_10)
      ;
      local_10 = strlen((char *)(local_14 + 8));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 8),local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x40));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x44));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
      CUser::Send((CUser *)param_2,local_20);
      PacketGuard::~PacketGuard(local_20);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x15d,*(uint *)param_3 & 0xff);
    }
  }
  return 0;
}
```
