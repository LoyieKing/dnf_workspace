# dispatch_sig

`_ZN18Inter_BroadcastMsg12dispatch_sigEP5CUserPci`

`Inter_BroadcastMsg::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_BroadcastMsg` | `0x084e4c2a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e4c2a  _ZN18Inter_BroadcastMsg12dispatch_sigEP5CUserPci
#           Inter_BroadcastMsg::dispatch_sig(CUser*, char*, int)
# range [0x084e4c2a, 0x084e4d4d]
084e4c2a +0x000:  push   %ebp
084e4c2b +0x001:  mov    %esp,%ebp
084e4c2d +0x003:  push   %esi
084e4c2e +0x004:  push   %ebx
084e4c2f +0x005:  sub    $0x30,%esp
084e4c32 +0x008:  mov    0x10(%ebp),%eax
084e4c35 +0x00b:  mov    %eax,-0xc(%ebp)
084e4c38 +0x00e:  mov    -0xc(%ebp),%eax
084e4c3b +0x011:  mov    0xa(%eax),%eax
084e4c3e +0x014:  test   %eax,%eax
084e4c40 +0x016:  jne    084e4d42 <+0x118>
084e4c46 +0x01c:  lea    -0x18(%ebp),%eax
084e4c49 +0x01f:  mov    %eax,(%esp)
084e4c4c +0x022:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
084e4c51 +0x027:  movl   $0xc,0x8(%esp)
084e4c59 +0x02f:  movl   $0x0,0x4(%esp)
084e4c61 +0x037:  lea    -0x18(%ebp),%eax
084e4c64 +0x03a:  mov    %eax,(%esp)
084e4c67 +0x03d:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
084e4c6c +0x042:  movl   $0x0,0x4(%esp)
084e4c74 +0x04a:  lea    -0x18(%ebp),%eax
084e4c77 +0x04d:  mov    %eax,(%esp)
084e4c7a +0x050:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e4c7f +0x055:  movl   $0x0,0x4(%esp)
084e4c87 +0x05d:  lea    -0x18(%ebp),%eax
084e4c8a +0x060:  mov    %eax,(%esp)
084e4c8d +0x063:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
084e4c92 +0x068:  movl   $0x0,0x4(%esp)
084e4c9a +0x070:  lea    -0x18(%ebp),%eax
084e4c9d +0x073:  mov    %eax,(%esp)
084e4ca0 +0x076:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
084e4ca5 +0x07b:  mov    -0xc(%ebp),%eax
084e4ca8 +0x07e:  movzbl 0xe(%eax),%eax
084e4cac +0x082:  movzbl %al,%eax
084e4caf +0x085:  mov    %eax,0x4(%esp)
084e4cb3 +0x089:  lea    -0x18(%ebp),%eax
084e4cb6 +0x08c:  mov    %eax,(%esp)
084e4cb9 +0x08f:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
084e4cbe +0x094:  mov    -0xc(%ebp),%eax
084e4cc1 +0x097:  movzbl 0xe(%eax),%eax
084e4cc5 +0x09b:  movzbl %al,%eax
084e4cc8 +0x09e:  mov    -0xc(%ebp),%edx
084e4ccb +0x0a1:  add    $0xf,%edx
084e4cce +0x0a4:  mov    %eax,0x8(%esp)
084e4cd2 +0x0a8:  mov    %edx,0x4(%esp)
084e4cd6 +0x0ac:  lea    -0x18(%ebp),%eax
084e4cd9 +0x0af:  mov    %eax,(%esp)
084e4cdc +0x0b2:  call   081b73e4 <_GLOBAL__I__ZN21GiveGrowCreatureEventC2Ev+0x63>  ; global constructors keyed to GiveGrowCreatureEvent::GiveGrowCreatureEvent()+0x63
084e4ce1 +0x0b7:  movl   $0x1,0x4(%esp)
084e4ce9 +0x0bf:  lea    -0x18(%ebp),%eax
084e4cec +0x0c2:  mov    %eax,(%esp)
084e4cef +0x0c5:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
084e4cf4 +0x0ca:  lea    -0x1c(%ebp),%eax
084e4cf7 +0x0cd:  mov    %eax,(%esp)
084e4cfa +0x0d0:  call   084f07d0 <_GLOBAL__I__Z7getUserj+0x7782>  ; global constructors keyed to getUser(unsigned int)+0x7782
084e4cff +0x0d5:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
084e4d04 +0x0da:  lea    -0x1c(%ebp),%edx
084e4d07 +0x0dd:  mov    %edx,0x8(%esp)
084e4d0b +0x0e1:  lea    -0x18(%ebp),%edx
084e4d0e +0x0e4:  mov    %edx,0x4(%esp)
084e4d12 +0x0e8:  mov    %eax,(%esp)
084e4d15 +0x0eb:  call   086c9234 <_ZN9GameWorld10send_groupER11PacketGuardP7CBelong>  ; GameWorld::send_group(PacketGuard&, CBelong*)
084e4d1a +0x0f0:  jmp    084e4d37 <+0x10d>
084e4d1c +0x0f2:  mov    %edx,%ebx
084e4d1e +0x0f4:  mov    %eax,%esi
084e4d20 +0x0f6:  lea    -0x18(%ebp),%eax
084e4d23 +0x0f9:  mov    %eax,(%esp)
084e4d26 +0x0fc:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e4d2b +0x101:  mov    %esi,%eax
084e4d2d +0x103:  mov    %ebx,%edx
084e4d2f +0x105:  mov    %eax,(%esp)
084e4d32 +0x108:  call   08ae3750 <_Unwind_Resume>
084e4d37 +0x10d:  lea    -0x18(%ebp),%eax
084e4d3a +0x110:  mov    %eax,(%esp)
084e4d3d +0x113:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
084e4d42 +0x118:  mov    $0x0,%eax
084e4d47 +0x11d:  add    $0x30,%esp
084e4d4a +0x120:  pop    %ebx
084e4d4b +0x121:  pop    %esi
084e4d4c +0x122:  pop    %ebp
084e4d4d +0x123:  ret
```

## 反编译 C

```c
// Inter_BroadcastMsg::dispatch_sig @ 0x84e4c2a

/* Inter_BroadcastMsg::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_BroadcastMsg::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  CUserTeen local_20 [4];
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  if (*(int *)(param_3 + 10) == 0) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e4c67 to 084e4d19 has its CatchHandler @ 084e4d1c */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0xc);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0xe));
    InterfacePacketBuf::put_str
              ((InterfacePacketBuf *)local_1c,(char *)(local_10 + 0xf),
               (uint)*(byte *)(local_10 + 0xe));
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUserTeen::CUserTeen(local_20);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_group(this,local_1c,(CBelong *)local_20);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}
```
