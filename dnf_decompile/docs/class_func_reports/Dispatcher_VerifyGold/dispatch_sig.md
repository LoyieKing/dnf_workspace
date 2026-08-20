# dispatch_sig

`_ZN21Dispatcher_VerifyGold12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_VerifyGold::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_VerifyGold` | `0x08223bc0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08223bc0  _ZN21Dispatcher_VerifyGold12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_VerifyGold::dispatch_sig(CUser*, PacketBuf&)
# range [0x08223bc0, 0x08223cf5]
08223bc0 +0x000:  push   %ebp
08223bc1 +0x001:  mov    %esp,%ebp
08223bc3 +0x003:  push   %esi
08223bc4 +0x004:  push   %ebx
08223bc5 +0x005:  sub    $0x20,%esp
08223bc8 +0x008:  mov    0xc(%ebp),%eax
08223bcb +0x00b:  mov    %eax,(%esp)
08223bce +0x00e:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08223bd3 +0x013:  cmp    $0x2,%eax
08223bd6 +0x016:  setle  %al
08223bd9 +0x019:  test   %al,%al
08223bdb +0x01b:  je     08223be7 <+0x27>
08223bdd +0x01d:  mov    $0x0,%ebx
08223be2 +0x022:  jmp    08223cec <+0x12c>
08223be7 +0x027:  movw   $0x0,-0xa(%ebp)
08223bed +0x02d:  lea    -0xa(%ebp),%eax
08223bf0 +0x030:  mov    %eax,0x4(%esp)
08223bf4 +0x034:  mov    0x10(%ebp),%eax
08223bf7 +0x037:  mov    %eax,(%esp)
08223bfa +0x03a:  call   0858d0b0 <_ZN9PacketBuf9get_shortERt>  ; PacketBuf::get_short(unsigned short&)
08223bff +0x03f:  xor    $0x1,%eax
08223c02 +0x042:  test   %al,%al
08223c04 +0x044:  je     08223c31 <+0x71>
08223c06 +0x046:  movl   $0x0,0xc(%esp)
08223c0e +0x04e:  movl   $0x0,0x8(%esp)
08223c16 +0x056:  movl   $&_ZZN21Dispatcher_VerifyGold12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08223c1e +0x05e:  movl   $0xde71,(%esp)
08223c25 +0x065:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08223c2a +0x06a:  mov    %eax,%ebx
08223c2c +0x06c:  jmp    08223cec <+0x12c>
08223c31 +0x071:  lea    -0x18(%ebp),%eax
08223c34 +0x074:  mov    %eax,(%esp)
08223c37 +0x077:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08223c3c +0x07c:  movl   $0x11f,0x8(%esp)
08223c44 +0x084:  movl   $0x1,0x4(%esp)
08223c4c +0x08c:  lea    -0x18(%ebp),%eax
08223c4f +0x08f:  mov    %eax,(%esp)
08223c52 +0x092:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08223c57 +0x097:  movl   $0x1,0x4(%esp)
08223c5f +0x09f:  lea    -0x18(%ebp),%eax
08223c62 +0x0a2:  mov    %eax,(%esp)
08223c65 +0x0a5:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08223c6a +0x0aa:  movzwl -0xa(%ebp),%eax
08223c6e +0x0ae:  movzwl %ax,%eax
08223c71 +0x0b1:  mov    %eax,0x4(%esp)
08223c75 +0x0b5:  lea    -0x18(%ebp),%eax
08223c78 +0x0b8:  mov    %eax,(%esp)
08223c7b +0x0bb:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08223c80 +0x0c0:  mov    0xc(%ebp),%eax
08223c83 +0x0c3:  mov    %eax,(%esp)
08223c86 +0x0c6:  call   0817a188 <_GLOBAL__I__ZN18ItemVendingMachine14BuyAuctionItemEP5CUserRNS_15AuctionNeedInfoEibi+0x206>  ; global constructors keyed to ItemVendingMachine::BuyAuctionItem(CUser*, ItemVendingMachine::AuctionNeedInfo&, int, bool, int)+0x206
08223c8b +0x0cb:  mov    %eax,0x4(%esp)
08223c8f +0x0cf:  lea    -0x18(%ebp),%eax
08223c92 +0x0d2:  mov    %eax,(%esp)
08223c95 +0x0d5:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
08223c9a +0x0da:  movl   $0x1,0x4(%esp)
08223ca2 +0x0e2:  lea    -0x18(%ebp),%eax
08223ca5 +0x0e5:  mov    %eax,(%esp)
08223ca8 +0x0e8:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08223cad +0x0ed:  lea    -0x18(%ebp),%eax
08223cb0 +0x0f0:  mov    %eax,0x4(%esp)
08223cb4 +0x0f4:  mov    0xc(%ebp),%eax
08223cb7 +0x0f7:  mov    %eax,(%esp)
08223cba +0x0fa:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
08223cbf +0x0ff:  mov    $0x0,%ebx
08223cc4 +0x104:  lea    -0x18(%ebp),%eax
08223cc7 +0x107:  mov    %eax,(%esp)
08223cca +0x10a:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08223ccf +0x10f:  jmp    08223cec <+0x12c>
08223cd1 +0x111:  mov    %edx,%ebx
08223cd3 +0x113:  mov    %eax,%esi
08223cd5 +0x115:  lea    -0x18(%ebp),%eax
08223cd8 +0x118:  mov    %eax,(%esp)
08223cdb +0x11b:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08223ce0 +0x120:  mov    %esi,%eax
08223ce2 +0x122:  mov    %ebx,%edx
08223ce4 +0x124:  mov    %eax,(%esp)
08223ce7 +0x127:  call   08ae3750 <_Unwind_Resume>
08223cec +0x12c:  mov    %ebx,%eax
08223cee +0x12e:  add    $0x20,%esp
08223cf1 +0x131:  pop    %ebx
08223cf2 +0x132:  pop    %esi
08223cf3 +0x133:  pop    %ebp
08223cf4 +0x134:  ret
08223cf5 +0x135:  nop
```

## 反编译 C

```c
// Dispatcher_VerifyGold::dispatch_sig @ 0x8223bc0

/* Dispatcher_VerifyGold::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_VerifyGold::dispatch_sig(Dispatcher_VerifyGold *this,CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  PacketGuard local_1c [14];
  ushort local_e;
  
  iVar2 = CUser::get_state(param_1);
  if (iVar2 < 3) {
    uVar3 = 0;
  }
  else {
    local_e = 0;
    cVar1 = PacketBuf::get_short(param_2,&local_e);
    if (cVar1 == '\x01') {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08223c52 to 08223cbe has its CatchHandler @ 08223cd1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x11f);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)local_e);
      iVar2 = CUserCharacInfo::getCurCharacMoney((CUserCharacInfo *)param_1);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,iVar2);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      uVar3 = 0;
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar3 = LineFunc(0xde71,"virtual int Dispatcher_VerifyGold::dispatch_sig(CUser*, PacketBuf&)",
                       0,0);
    }
  }
  return uVar3;
}
```
