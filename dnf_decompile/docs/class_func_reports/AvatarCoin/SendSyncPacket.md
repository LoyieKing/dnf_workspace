# SendSyncPacket

`_ZN10AvatarCoin14SendSyncPacketEP5CUser`

`AvatarCoin::SendSyncPacket(CUser*)`

| 类 | 地址 |
|---|---|
| `AvatarCoin` | `0x0817ffe4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0817ffe4  _ZN10AvatarCoin14SendSyncPacketEP5CUser
#           AvatarCoin::SendSyncPacket(CUser*)
# range [0x0817ffe4, 0x081800d5]
0817ffe4 +0x00:  push   %ebp
0817ffe5 +0x01:  mov    %esp,%ebp
0817ffe7 +0x03:  push   %esi
0817ffe8 +0x04:  push   %ebx
0817ffe9 +0x05:  sub    $0x20,%esp
0817ffec +0x08:  cmpl   $0x0,0x8(%ebp)
0817fff0 +0x0c:  jne    0817fffc <+0x18>
0817fff2 +0x0e:  mov    $0x0,%ebx
0817fff7 +0x13:  jmp    081800cc <+0xe8>
0817fffc +0x18:  mov    0x8(%ebp),%eax
0817ffff +0x1b:  mov    %eax,(%esp)
08180002 +0x1e:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
08180007 +0x23:  test   %eax,%eax
08180009 +0x25:  sete   %al
0818000c +0x28:  test   %al,%al
0818000e +0x2a:  je     0818001a <+0x36>
08180010 +0x2c:  mov    $0x0,%ebx
08180015 +0x31:  jmp    081800cc <+0xe8>
0818001a +0x36:  lea    -0x14(%ebp),%eax
0818001d +0x39:  mov    %eax,(%esp)
08180020 +0x3c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08180025 +0x41:  movl   $0x24b,0x8(%esp)
0818002d +0x49:  movl   $0x1,0x4(%esp)
08180035 +0x51:  lea    -0x14(%ebp),%eax
08180038 +0x54:  mov    %eax,(%esp)
0818003b +0x57:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08180040 +0x5c:  movl   $0x1,0x4(%esp)
08180048 +0x64:  lea    -0x14(%ebp),%eax
0818004b +0x67:  mov    %eax,(%esp)
0818004e +0x6a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08180053 +0x6f:  mov    0x8(%ebp),%eax
08180056 +0x72:  mov    %eax,(%esp)
08180059 +0x75:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
0818005e +0x7a:  add    $0x658,%eax
08180063 +0x7f:  mov    %eax,(%esp)
08180066 +0x82:  call   0817fef0 <_ZNK10AvatarCoin3GetEv>  ; AvatarCoin::Get() const
0818006b +0x87:  mov    %eax,0x4(%esp)
0818006f +0x8b:  lea    -0x14(%ebp),%eax
08180072 +0x8e:  mov    %eax,(%esp)
08180075 +0x91:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
0818007a +0x96:  movl   $0x1,0x4(%esp)
08180082 +0x9e:  lea    -0x14(%ebp),%eax
08180085 +0xa1:  mov    %eax,(%esp)
08180088 +0xa4:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
0818008d +0xa9:  lea    -0x14(%ebp),%eax
08180090 +0xac:  mov    %eax,0x4(%esp)
08180094 +0xb0:  mov    0x8(%ebp),%eax
08180097 +0xb3:  mov    %eax,(%esp)
0818009a +0xb6:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0818009f +0xbb:  mov    $0x1,%ebx
081800a4 +0xc0:  lea    -0x14(%ebp),%eax
081800a7 +0xc3:  mov    %eax,(%esp)
081800aa +0xc6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081800af +0xcb:  jmp    081800cc <+0xe8>
081800b1 +0xcd:  mov    %edx,%ebx
081800b3 +0xcf:  mov    %eax,%esi
081800b5 +0xd1:  lea    -0x14(%ebp),%eax
081800b8 +0xd4:  mov    %eax,(%esp)
081800bb +0xd7:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081800c0 +0xdc:  mov    %esi,%eax
081800c2 +0xde:  mov    %ebx,%edx
081800c4 +0xe0:  mov    %eax,(%esp)
081800c7 +0xe3:  call   08ae3750 <_Unwind_Resume>
081800cc +0xe8:  mov    %ebx,%eax
081800ce +0xea:  add    $0x20,%esp
081800d1 +0xed:  pop    %ebx
081800d2 +0xee:  pop    %esi
081800d3 +0xef:  pop    %ebp
081800d4 +0xf0:  ret
081800d5 +0xf1:  nop
```

## 反编译 C

```c
// AvatarCoin::SendSyncPacket @ 0x817ffe4

/* AvatarCoin::SendSyncPacket(CUser*) */

undefined4 AvatarCoin::SendSyncPacket(CUser *param_1)

{
  int iVar1;
  undefined4 uVar2;
  PacketGuard local_18 [12];
  
  if (param_1 == (CUser *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0818003b to 0818009e has its CatchHandler @ 081800b1 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x24b);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
      iVar1 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      iVar1 = Get((AvatarCoin *)(iVar1 + 0x658));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,iVar1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
      CUser::Send(param_1,local_18);
      uVar2 = 1;
      PacketGuard::~PacketGuard(local_18);
    }
  }
  return uVar2;
}
```
