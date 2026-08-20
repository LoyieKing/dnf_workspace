# dispatch_sig

`_ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci`

`Inter_Antibot_ProcessProtectMsg::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_Antibot_ProcessProtectMsg` | `0x084e48c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e48c2  _ZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPci
#           Inter_Antibot_ProcessProtectMsg::dispatch_sig(CUser*, char*, int)
# range [0x084e48c2, 0x084e4b01]
084e48c2 +0x000:  push   %ebp
084e48c3 +0x001:  mov    %esp,%ebp
084e48c5 +0x003:  push   %edi
084e48c6 +0x004:  push   %esi
084e48c7 +0x005:  push   %ebx
084e48c8 +0x006:  sub    $0x6c,%esp
084e48cb +0x009:  mov    0x10(%ebp),%eax
084e48ce +0x00c:  mov    %eax,-0x24(%ebp)
084e48d1 +0x00f:  mov    -0x24(%ebp),%eax
084e48d4 +0x012:  mov    0x2(%eax),%eax
084e48d7 +0x015:  mov    %eax,(%esp)
084e48da +0x018:  call   084bb9cf <_Z7getUserj>  ; getUser(unsigned int)
084e48df +0x01d:  mov    %eax,-0x20(%ebp)
084e48e2 +0x020:  cmpl   $0x0,-0x20(%ebp)
084e48e6 +0x024:  je     084e48f7 <+0x35>
084e48e8 +0x026:  mov    -0x20(%ebp),%eax
084e48eb +0x029:  mov    %eax,(%esp)
084e48ee +0x02c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084e48f3 +0x031:  test   %eax,%eax
084e48f5 +0x033:  jne    084e48fe <+0x3c>
084e48f7 +0x035:  mov    $0x1,%eax
084e48fc +0x03a:  jmp    084e4903 <+0x41>
084e48fe +0x03c:  mov    $0x0,%eax
084e4903 +0x041:  test   %al,%al
084e4905 +0x043:  je     084e4911 <+0x4f>
084e4907 +0x045:  mov    $0x0,%eax
084e490c +0x04a:  jmp    084e4af9 <+0x237>
084e4911 +0x04f:  movb   $0x0,-0x1b(%ebp)
084e4915 +0x053:  movw   $0x0,-0x1a(%ebp)
084e491b +0x059:  mov    -0x24(%ebp),%eax
084e491e +0x05c:  movzwl (%eax),%eax
084e4921 +0x05f:  movzwl %ax,%eax
084e4924 +0x062:  cmp    $0x13,%eax
084e4927 +0x065:  je     084e4963 <+0xa1>
084e4929 +0x067:  cmp    $0x14,%eax
084e492c +0x06a:  je     084e4935 <+0x73>
084e492e +0x06c:  cmp    $0x12,%eax
084e4931 +0x06f:  je     084e494c <+0x8a>
084e4933 +0x071:  jmp    084e4974 <+0xb2>
084e4935 +0x073:  mov    -0x24(%ebp),%eax
084e4938 +0x076:  movzbl 0x8(%eax),%eax
084e493c +0x07a:  mov    %al,-0x1b(%ebp)
084e493f +0x07d:  mov    -0x24(%ebp),%eax
084e4942 +0x080:  movzwl 0xa(%eax),%eax
084e4946 +0x084:  mov    %ax,-0x1a(%ebp)
084e494a +0x088:  jmp    084e497e <+0xbc>
084e494c +0x08a:  mov    -0x24(%ebp),%eax
084e494f +0x08d:  movzbl 0x8(%eax),%eax
084e4953 +0x091:  mov    %al,-0x1b(%ebp)
084e4956 +0x094:  mov    -0x24(%ebp),%eax
084e4959 +0x097:  movzwl 0xa(%eax),%eax
084e495d +0x09b:  mov    %ax,-0x1a(%ebp)
084e4961 +0x09f:  jmp    084e497e <+0xbc>
084e4963 +0x0a1:  movb   $0x0,-0x1b(%ebp)
084e4967 +0x0a5:  mov    -0x24(%ebp),%eax
084e496a +0x0a8:  movzwl 0x6(%eax),%eax
084e496e +0x0ac:  mov    %ax,-0x1a(%ebp)
084e4972 +0x0b0:  jmp    084e497e <+0xbc>
084e4974 +0x0b2:  movb   $0x0,-0x1b(%ebp)
084e4978 +0x0b6:  movw   $0x0,-0x1a(%ebp)
084e497e +0x0bc:  movzwl -0x1a(%ebp),%edi
084e4982 +0x0c0:  movsbl -0x1b(%ebp),%esi
084e4986 +0x0c4:  mov    -0x24(%ebp),%eax
084e4989 +0x0c7:  mov    0x2(%eax),%ebx
084e498c +0x0ca:  movl   $0x0,0xc(%esp)
084e4994 +0x0d2:  movl   $0x5f3b,0x8(%esp)
084e499c +0x0da:  movl   $&_ZZN31Inter_Antibot_ProcessProtectMsg12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e49a4 +0x0e2:  lea    -0x34(%ebp),%eax
084e49a7 +0x0e5:  mov    %eax,(%esp)
084e49aa +0x0e8:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e49af +0x0ed:  mov    %edi,0x10(%esp)
084e49b3 +0x0f1:  mov    %esi,0xc(%esp)
084e49b7 +0x0f5:  mov    %ebx,0x8(%esp)
084e49bb +0x0f9:  movl   $"[SAFEMODE]uid : %d    protstatLevel : %d    eventType : %d\n",0x4(%esp)
084e49c3 +0x101:  lea    -0x34(%ebp),%eax
084e49c6 +0x104:  mov    %eax,(%esp)
084e49c9 +0x107:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e49ce +0x10c:  cmpb   $0x1,-0x1b(%ebp)
084e49d2 +0x110:  je     084e49de <+0x11c>
084e49d4 +0x112:  cmpb   $0x8,-0x1b(%ebp)
084e49d8 +0x116:  jne    084e4a64 <+0x1a2>
084e49de +0x11c:  lea    -0x40(%ebp),%eax
084e49e1 +0x11f:  mov    %eax,(%esp)
084e49e4 +0x122:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e49e9 +0x127:  movl   $0x1ee,0x8(%esp)
084e49f1 +0x12f:  movl   $0x0,0x4(%esp)
084e49f9 +0x137:  lea    -0x40(%ebp),%eax
084e49fc +0x13a:  mov    %eax,(%esp)
084e49ff +0x13d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e4a04 +0x142:  movl   $0x1,0x4(%esp)
084e4a0c +0x14a:  lea    -0x40(%ebp),%eax
084e4a0f +0x14d:  mov    %eax,(%esp)
084e4a12 +0x150:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e4a17 +0x155:  movl   $0x1,0x4(%esp)
084e4a1f +0x15d:  lea    -0x40(%ebp),%eax
084e4a22 +0x160:  mov    %eax,(%esp)
084e4a25 +0x163:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e4a2a +0x168:  lea    -0x40(%ebp),%eax
084e4a2d +0x16b:  mov    %eax,0x4(%esp)
084e4a31 +0x16f:  mov    -0x20(%ebp),%eax
084e4a34 +0x172:  mov    %eax,(%esp)
084e4a37 +0x175:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e4a3c +0x17a:  jmp    084e4a59 <+0x197>
084e4a3e +0x17c:  mov    %edx,%ebx
084e4a40 +0x17e:  mov    %eax,%esi
084e4a42 +0x180:  lea    -0x40(%ebp),%eax
084e4a45 +0x183:  mov    %eax,(%esp)
084e4a48 +0x186:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e4a4d +0x18b:  mov    %esi,%eax
084e4a4f +0x18d:  mov    %ebx,%edx
084e4a51 +0x18f:  mov    %eax,(%esp)
084e4a54 +0x192:  call   08ae3750 <_Unwind_Resume>
084e4a59 +0x197:  lea    -0x40(%ebp),%eax
084e4a5c +0x19a:  mov    %eax,(%esp)
084e4a5f +0x19d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e4a64 +0x1a2:  cmpb   $0x0,-0x1b(%ebp)
084e4a68 +0x1a6:  jne    084e4af4 <+0x232>
084e4a6e +0x1ac:  lea    -0x4c(%ebp),%eax
084e4a71 +0x1af:  mov    %eax,(%esp)
084e4a74 +0x1b2:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e4a79 +0x1b7:  movl   $0x1ee,0x8(%esp)
084e4a81 +0x1bf:  movl   $0x0,0x4(%esp)
084e4a89 +0x1c7:  lea    -0x4c(%ebp),%eax
084e4a8c +0x1ca:  mov    %eax,(%esp)
084e4a8f +0x1cd:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e4a94 +0x1d2:  movl   $0x0,0x4(%esp)
084e4a9c +0x1da:  lea    -0x4c(%ebp),%eax
084e4a9f +0x1dd:  mov    %eax,(%esp)
084e4aa2 +0x1e0:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e4aa7 +0x1e5:  movl   $0x1,0x4(%esp)
084e4aaf +0x1ed:  lea    -0x4c(%ebp),%eax
084e4ab2 +0x1f0:  mov    %eax,(%esp)
084e4ab5 +0x1f3:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e4aba +0x1f8:  lea    -0x4c(%ebp),%eax
084e4abd +0x1fb:  mov    %eax,0x4(%esp)
084e4ac1 +0x1ff:  mov    -0x20(%ebp),%eax
084e4ac4 +0x202:  mov    %eax,(%esp)
084e4ac7 +0x205:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
084e4acc +0x20a:  jmp    084e4ae9 <+0x227>
084e4ace +0x20c:  mov    %edx,%ebx
084e4ad0 +0x20e:  mov    %eax,%esi
084e4ad2 +0x210:  lea    -0x4c(%ebp),%eax
084e4ad5 +0x213:  mov    %eax,(%esp)
084e4ad8 +0x216:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e4add +0x21b:  mov    %esi,%eax
084e4adf +0x21d:  mov    %ebx,%edx
084e4ae1 +0x21f:  mov    %eax,(%esp)
084e4ae4 +0x222:  call   08ae3750 <_Unwind_Resume>
084e4ae9 +0x227:  lea    -0x4c(%ebp),%eax
084e4aec +0x22a:  mov    %eax,(%esp)
084e4aef +0x22d:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e4af4 +0x232:  mov    $0x0,%eax
084e4af9 +0x237:  add    $0x6c,%esp
084e4afc +0x23a:  pop    %ebx
084e4afd +0x23b:  pop    %esi
084e4afe +0x23c:  pop    %edi
084e4aff +0x23d:  pop    %ebp
084e4b00 +0x23e:  ret
084e4b01 +0x23f:  nop
```

## 反编译 C

```c
// Inter_Antibot_ProcessProtectMsg::dispatch_sig @ 0x84e48c2

/* Inter_Antibot_ProcessProtectMsg::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Antibot_ProcessProtectMsg::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  short sVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  PacketGuard local_50 [12];
  PacketGuard local_44 [12];
  cMyTrace local_38 [16];
  short *local_28;
  CUser *local_24;
  char local_1f;
  ushort local_1e;
  
  local_28 = (short *)param_3;
  local_24 = (CUser *)getUser(*(uint *)(param_3 + 2));
  if ((local_24 == (CUser *)0x0) || (iVar4 = CUser::get_state(local_24), iVar4 == 0)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  if (!bVar3) {
    sVar1 = *local_28;
    if (sVar1 == 0x13) {
      local_1f = '\0';
      local_1e = local_28[3];
    }
    else if (sVar1 == 0x14) {
      local_1f = (char)local_28[4];
      local_1e = local_28[5];
    }
    else if (sVar1 == 0x12) {
      local_1f = (char)local_28[4];
      local_1e = local_28[5];
    }
    else {
      local_1f = '\0';
      local_1e = 0;
    }
    uVar5 = (uint)local_1e;
    iVar4 = (int)local_1f;
    uVar2 = *(undefined4 *)(local_28 + 1);
    cMyTrace::cMyTrace(local_38,
                       "virtual int Inter_Antibot_ProcessProtectMsg::dispatch_sig(CUser*, char*, int)"
                       ,0x5f3b,0);
    cMyTrace::operator()
              (local_38,"[SAFEMODE]uid : %d    protstatLevel : %d    eventType : %d\n",uVar2,iVar4,
               uVar5);
    if ((local_1f == '\x01') || (local_1f == '\b')) {
      PacketGuard::PacketGuard(local_44);
                    /* try { // try from 084e49ff to 084e4a3b has its CatchHandler @ 084e4a3e */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_44,0,0x1ee);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_44,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_44,true);
      CUser::Send(local_24,local_44);
      PacketGuard::~PacketGuard(local_44);
    }
    if (local_1f == '\0') {
      PacketGuard::PacketGuard(local_50);
                    /* try { // try from 084e4a8f to 084e4acb has its CatchHandler @ 084e4ace */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_50,0,0x1ee);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_50,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_50,true);
      CUser::Send(local_24,local_50);
      PacketGuard::~PacketGuard(local_50);
    }
  }
  return 0;
}
```
