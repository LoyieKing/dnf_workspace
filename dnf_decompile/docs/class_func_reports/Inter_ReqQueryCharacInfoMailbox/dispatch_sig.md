# dispatch_sig

`_ZN31Inter_ReqQueryCharacInfoMailbox12dispatch_sigEP5CUserPci`

`Inter_ReqQueryCharacInfoMailbox::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ReqQueryCharacInfoMailbox` | `0x084e2a06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e2a06  _ZN31Inter_ReqQueryCharacInfoMailbox12dispatch_sigEP5CUserPci
#           Inter_ReqQueryCharacInfoMailbox::dispatch_sig(CUser*, char*, int)
# range [0x084e2a06, 0x084e2b93]
084e2a06 +0x000:  push   %ebp
084e2a07 +0x001:  mov    %esp,%ebp
084e2a09 +0x003:  push   %esi
084e2a0a +0x004:  push   %ebx
084e2a0b +0x005:  sub    $0x20,%esp
084e2a0e +0x008:  mov    0xc(%ebp),%eax
084e2a11 +0x00b:  mov    %eax,(%esp)
084e2a14 +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e2a19 +0x013:  cmp    $0x2,%eax
084e2a1c +0x016:  setle  %al
084e2a1f +0x019:  test   %al,%al
084e2a21 +0x01b:  je     084e2a2d <+0x27>
084e2a23 +0x01d:  mov    $0x0,%eax
084e2a28 +0x022:  jmp    084e2b8c <+0x186>
084e2a2d +0x027:  mov    0x10(%ebp),%eax
084e2a30 +0x02a:  mov    %eax,-0xc(%ebp)
084e2a33 +0x02d:  mov    -0xc(%ebp),%eax
084e2a36 +0x030:  mov    0x20(%eax),%eax
084e2a39 +0x033:  test   %eax,%eax
084e2a3b +0x035:  je     084e2a62 <+0x5c>
084e2a3d +0x037:  mov    -0xc(%ebp),%eax
084e2a40 +0x03a:  mov    0x20(%eax),%eax
084e2a43 +0x03d:  movzbl %al,%eax
084e2a46 +0x040:  mov    %eax,0x8(%esp)
084e2a4a +0x044:  movl   $0x145,0x4(%esp)
084e2a52 +0x04c:  mov    0xc(%ebp),%eax
084e2a55 +0x04f:  mov    %eax,(%esp)
084e2a58 +0x052:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
084e2a5d +0x057:  jmp    084e2b87 <+0x181>
084e2a62 +0x05c:  lea    -0x18(%ebp),%eax
084e2a65 +0x05f:  mov    %eax,(%esp)
084e2a68 +0x062:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e2a6d +0x067:  movl   $0x145,0x8(%esp)
084e2a75 +0x06f:  movl   $0x1,0x4(%esp)
084e2a7d +0x077:  lea    -0x18(%ebp),%eax
084e2a80 +0x07a:  mov    %eax,(%esp)
084e2a83 +0x07d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e2a88 +0x082:  movl   $0x1,0x4(%esp)
084e2a90 +0x08a:  lea    -0x18(%ebp),%eax
084e2a93 +0x08d:  mov    %eax,(%esp)
084e2a96 +0x090:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e2a9b +0x095:  mov    -0xc(%ebp),%eax
084e2a9e +0x098:  mov    %eax,(%esp)
084e2aa1 +0x09b:  call   0807e3b0 <_init+0xca8>
084e2aa6 +0x0a0:  mov    %eax,0x4(%esp)
084e2aaa +0x0a4:  lea    -0x18(%ebp),%eax
084e2aad +0x0a7:  mov    %eax,(%esp)
084e2ab0 +0x0aa:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e2ab5 +0x0af:  mov    -0xc(%ebp),%eax
084e2ab8 +0x0b2:  mov    %eax,(%esp)
084e2abb +0x0b5:  call   0807e3b0 <_init+0xca8>
084e2ac0 +0x0ba:  mov    %eax,%edx
084e2ac2 +0x0bc:  mov    -0xc(%ebp),%eax
084e2ac5 +0x0bf:  mov    %edx,0x8(%esp)
084e2ac9 +0x0c3:  mov    %eax,0x4(%esp)
084e2acd +0x0c7:  lea    -0x18(%ebp),%eax
084e2ad0 +0x0ca:  mov    %eax,(%esp)
084e2ad3 +0x0cd:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e2ad8 +0x0d2:  mov    -0xc(%ebp),%eax
084e2adb +0x0d5:  movzwl 0x2a(%eax),%eax
084e2adf +0x0d9:  cwtl
084e2ae0 +0x0da:  mov    %eax,0x4(%esp)
084e2ae4 +0x0de:  lea    -0x18(%ebp),%eax
084e2ae7 +0x0e1:  mov    %eax,(%esp)
084e2aea +0x0e4:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e2aef +0x0e9:  mov    -0xc(%ebp),%eax
084e2af2 +0x0ec:  movzbl 0x28(%eax),%eax
084e2af6 +0x0f0:  movsbl %al,%eax
084e2af9 +0x0f3:  mov    %eax,0x4(%esp)
084e2afd +0x0f7:  lea    -0x18(%ebp),%eax
084e2b00 +0x0fa:  mov    %eax,(%esp)
084e2b03 +0x0fd:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e2b08 +0x102:  mov    -0xc(%ebp),%eax
084e2b0b +0x105:  movzbl 0x2c(%eax),%eax
084e2b0f +0x109:  movsbl %al,%eax
084e2b12 +0x10c:  mov    %eax,0x4(%esp)
084e2b16 +0x110:  lea    -0x18(%ebp),%eax
084e2b19 +0x113:  mov    %eax,(%esp)
084e2b1c +0x116:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e2b21 +0x11b:  mov    -0xc(%ebp),%eax
084e2b24 +0x11e:  movzbl 0x2d(%eax),%eax
084e2b28 +0x122:  movsbl %al,%eax
084e2b2b +0x125:  mov    %eax,0x4(%esp)
084e2b2f +0x129:  lea    -0x18(%ebp),%eax
084e2b32 +0x12c:  mov    %eax,(%esp)
084e2b35 +0x12f:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e2b3a +0x134:  movl   $0x1,0x4(%esp)
084e2b42 +0x13c:  lea    -0x18(%ebp),%eax
084e2b45 +0x13f:  mov    %eax,(%esp)
084e2b48 +0x142:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e2b4d +0x147:  lea    -0x18(%ebp),%eax
084e2b50 +0x14a:  mov    %eax,0x4(%esp)
084e2b54 +0x14e:  mov    0xc(%ebp),%eax
084e2b57 +0x151:  mov    %eax,(%esp)
084e2b5a +0x154:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e2b5f +0x159:  jmp    084e2b7c <+0x176>
084e2b61 +0x15b:  mov    %edx,%ebx
084e2b63 +0x15d:  mov    %eax,%esi
084e2b65 +0x15f:  lea    -0x18(%ebp),%eax
084e2b68 +0x162:  mov    %eax,(%esp)
084e2b6b +0x165:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e2b70 +0x16a:  mov    %esi,%eax
084e2b72 +0x16c:  mov    %ebx,%edx
084e2b74 +0x16e:  mov    %eax,(%esp)
084e2b77 +0x171:  call   08ae3750 <_Unwind_Resume>
084e2b7c +0x176:  lea    -0x18(%ebp),%eax
084e2b7f +0x179:  mov    %eax,(%esp)
084e2b82 +0x17c:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e2b87 +0x181:  mov    $0x0,%eax
084e2b8c +0x186:  add    $0x20,%esp
084e2b8f +0x189:  pop    %ebx
084e2b90 +0x18a:  pop    %esi
084e2b91 +0x18b:  pop    %ebp
084e2b92 +0x18c:  ret
084e2b93 +0x18d:  nop
```

## 反编译 C

```c
// Inter_ReqQueryCharacInfoMailbox::dispatch_sig @ 0x84e2a06

/* Inter_ReqQueryCharacInfoMailbox::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReqQueryCharacInfoMailbox::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  PacketGuard local_1c [12];
  char *local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = (char *)param_3;
    if (*(int *)(param_3 + 0x20) == 0) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e2a83 to 084e2b5e has its CatchHandler @ 084e2b61 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x145);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      sVar2 = strlen(local_10);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,sVar2);
      sVar2 = strlen(local_10);
      InterfacePacketBuf::put_str((InterfacePacketBuf *)local_1c,local_10,sVar2);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(int)*(short *)(local_10 + 0x2a))
      ;
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x28]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x2c]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(int)local_10[0x2d]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x145,*(uint *)(param_3 + 0x20) & 0xff);
    }
  }
  return 0;
}
```
