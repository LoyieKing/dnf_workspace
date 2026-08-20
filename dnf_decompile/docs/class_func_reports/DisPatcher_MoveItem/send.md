# send

`_ZN19DisPatcher_MoveItem4sendEP5CUserR9ParamBase`

`DisPatcher_MoveItem::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_MoveItem` | `0x081c5b76` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081c5b76  _ZN19DisPatcher_MoveItem4sendEP5CUserR9ParamBase
#           DisPatcher_MoveItem::send(CUser*, ParamBase&)
# range [0x081c5b76, 0x081c5d77]
081c5b76 +0x000:  push   %ebp
081c5b77 +0x001:  mov    %esp,%ebp
081c5b79 +0x003:  push   %edi
081c5b7a +0x004:  push   %esi
081c5b7b +0x005:  push   %ebx
081c5b7c +0x006:  sub    $0x4c,%esp
081c5b7f +0x009:  mov    0x10(%ebp),%eax
081c5b82 +0x00c:  mov    %eax,-0x1c(%ebp)
081c5b85 +0x00f:  lea    -0x28(%ebp),%eax
081c5b88 +0x012:  mov    %eax,(%esp)
081c5b8b +0x015:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081c5b90 +0x01a:  mov    -0x1c(%ebp),%eax
081c5b93 +0x01d:  mov    0x4(%eax),%eax
081c5b96 +0x020:  cmp    $0x7fffffff,%eax
081c5b9b +0x025:  je     081c5d64 <+0x1ee>
081c5ba1 +0x02b:  movl   $0x13,0x8(%esp)
081c5ba9 +0x033:  movl   $0x1,0x4(%esp)
081c5bb1 +0x03b:  lea    -0x28(%ebp),%eax
081c5bb4 +0x03e:  mov    %eax,(%esp)
081c5bb7 +0x041:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081c5bbc +0x046:  mov    -0x1c(%ebp),%eax
081c5bbf +0x049:  mov    0x4(%eax),%eax
081c5bc2 +0x04c:  test   %eax,%eax
081c5bc4 +0x04e:  je     081c5c4e <+0xd8>
081c5bca +0x054:  movl   $0x0,0x4(%esp)
081c5bd2 +0x05c:  lea    -0x28(%ebp),%eax
081c5bd5 +0x05f:  mov    %eax,(%esp)
081c5bd8 +0x062:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c5bdd +0x067:  mov    -0x1c(%ebp),%eax
081c5be0 +0x06a:  mov    0x4(%eax),%eax
081c5be3 +0x06d:  mov    %eax,0x4(%esp)
081c5be7 +0x071:  lea    -0x28(%ebp),%eax
081c5bea +0x074:  mov    %eax,(%esp)
081c5bed +0x077:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c5bf2 +0x07c:  mov    -0x1c(%ebp),%eax
081c5bf5 +0x07f:  movzbl 0x8(%eax),%eax
081c5bf9 +0x083:  movsbl %al,%eax
081c5bfc +0x086:  mov    %eax,0x4(%esp)
081c5c00 +0x08a:  lea    -0x28(%ebp),%eax
081c5c03 +0x08d:  mov    %eax,(%esp)
081c5c06 +0x090:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c5c0b +0x095:  mov    -0x1c(%ebp),%eax
081c5c0e +0x098:  movzbl 0x10(%eax),%eax
081c5c12 +0x09c:  movsbl %al,%eax
081c5c15 +0x09f:  mov    %eax,0x4(%esp)
081c5c19 +0x0a3:  lea    -0x28(%ebp),%eax
081c5c1c +0x0a6:  mov    %eax,(%esp)
081c5c1f +0x0a9:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c5c24 +0x0ae:  movl   $0x1,0x4(%esp)
081c5c2c +0x0b6:  lea    -0x28(%ebp),%eax
081c5c2f +0x0b9:  mov    %eax,(%esp)
081c5c32 +0x0bc:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c5c37 +0x0c1:  lea    -0x28(%ebp),%eax
081c5c3a +0x0c4:  mov    %eax,0x4(%esp)
081c5c3e +0x0c8:  mov    0xc(%ebp),%eax
081c5c41 +0x0cb:  mov    %eax,(%esp)
081c5c44 +0x0ce:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c5c49 +0x0d3:  jmp    081c5d64 <+0x1ee>
081c5c4e +0x0d8:  movl   $0x1,0x4(%esp)
081c5c56 +0x0e0:  lea    -0x28(%ebp),%eax
081c5c59 +0x0e3:  mov    %eax,(%esp)
081c5c5c +0x0e6:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c5c61 +0x0eb:  mov    -0x1c(%ebp),%eax
081c5c64 +0x0ee:  movzbl 0x8(%eax),%eax
081c5c68 +0x0f2:  movsbl %al,%eax
081c5c6b +0x0f5:  mov    %eax,0x4(%esp)
081c5c6f +0x0f9:  lea    -0x28(%ebp),%eax
081c5c72 +0x0fc:  mov    %eax,(%esp)
081c5c75 +0x0ff:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c5c7a +0x104:  mov    -0x1c(%ebp),%eax
081c5c7d +0x107:  movzwl 0xa(%eax),%eax
081c5c81 +0x10b:  cwtl
081c5c82 +0x10c:  mov    %eax,0x4(%esp)
081c5c86 +0x110:  lea    -0x28(%ebp),%eax
081c5c89 +0x113:  mov    %eax,(%esp)
081c5c8c +0x116:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081c5c91 +0x11b:  mov    -0x1c(%ebp),%eax
081c5c94 +0x11e:  mov    0xc(%eax),%eax
081c5c97 +0x121:  mov    %eax,0x4(%esp)
081c5c9b +0x125:  lea    -0x28(%ebp),%eax
081c5c9e +0x128:  mov    %eax,(%esp)
081c5ca1 +0x12b:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081c5ca6 +0x130:  mov    -0x1c(%ebp),%eax
081c5ca9 +0x133:  movzbl 0x10(%eax),%eax
081c5cad +0x137:  movsbl %al,%eax
081c5cb0 +0x13a:  mov    %eax,0x4(%esp)
081c5cb4 +0x13e:  lea    -0x28(%ebp),%eax
081c5cb7 +0x141:  mov    %eax,(%esp)
081c5cba +0x144:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
081c5cbf +0x149:  mov    -0x1c(%ebp),%eax
081c5cc2 +0x14c:  mov    0x14(%eax),%eax
081c5cc5 +0x14f:  mov    %eax,0x4(%esp)
081c5cc9 +0x153:  lea    -0x28(%ebp),%eax
081c5ccc +0x156:  mov    %eax,(%esp)
081c5ccf +0x159:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
081c5cd4 +0x15e:  movl   $0x1,0x4(%esp)
081c5cdc +0x166:  lea    -0x28(%ebp),%eax
081c5cdf +0x169:  mov    %eax,(%esp)
081c5ce2 +0x16c:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081c5ce7 +0x171:  lea    -0x28(%ebp),%eax
081c5cea +0x174:  mov    %eax,0x4(%esp)
081c5cee +0x178:  mov    0xc(%ebp),%eax
081c5cf1 +0x17b:  mov    %eax,(%esp)
081c5cf4 +0x17e:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081c5cf9 +0x183:  mov    -0x1c(%ebp),%eax
081c5cfc +0x186:  mov    0x14(%eax),%eax
081c5cff +0x189:  mov    %eax,-0x2c(%ebp)
081c5d02 +0x18c:  mov    -0x1c(%ebp),%eax
081c5d05 +0x18f:  movzbl 0x10(%eax),%eax
081c5d09 +0x193:  movsbl %al,%edi
081c5d0c +0x196:  mov    -0x1c(%ebp),%eax
081c5d0f +0x199:  movzwl 0xa(%eax),%eax
081c5d13 +0x19d:  movswl %ax,%esi
081c5d16 +0x1a0:  mov    -0x1c(%ebp),%eax
081c5d19 +0x1a3:  movzbl 0x8(%eax),%eax
081c5d1d +0x1a7:  movsbl %al,%ebx
081c5d20 +0x1aa:  call   081935a2 <_GLOBAL__I__ZN20AvatarRechargeServerC2Ev+0x20a>  ; global constructors keyed to AvatarRechargeServer::AvatarRechargeServer()+0x20a
081c5d25 +0x1af:  mov    -0x2c(%ebp),%edx
081c5d28 +0x1b2:  mov    %edx,0x14(%esp)
081c5d2c +0x1b6:  mov    %edi,0x10(%esp)
081c5d30 +0x1ba:  mov    %esi,0xc(%esp)
081c5d34 +0x1be:  mov    %ebx,0x8(%esp)
081c5d38 +0x1c2:  mov    0xc(%ebp),%edx
081c5d3b +0x1c5:  mov    %edx,0x4(%esp)
081c5d3f +0x1c9:  mov    %eax,(%esp)
081c5d42 +0x1cc:  call   08190416 <_ZN20AvatarRechargeServer14SendDurabilityEP5CUsercsci>  ; AvatarRechargeServer::SendDurability(CUser*, char, short, char, int)
081c5d47 +0x1d1:  jmp    081c5d64 <+0x1ee>
081c5d49 +0x1d3:  mov    %edx,%ebx
081c5d4b +0x1d5:  mov    %eax,%esi
081c5d4d +0x1d7:  lea    -0x28(%ebp),%eax
081c5d50 +0x1da:  mov    %eax,(%esp)
081c5d53 +0x1dd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c5d58 +0x1e2:  mov    %esi,%eax
081c5d5a +0x1e4:  mov    %ebx,%edx
081c5d5c +0x1e6:  mov    %eax,(%esp)
081c5d5f +0x1e9:  call   08ae3750 <_Unwind_Resume>
081c5d64 +0x1ee:  lea    -0x28(%ebp),%eax
081c5d67 +0x1f1:  mov    %eax,(%esp)
081c5d6a +0x1f4:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081c5d6f +0x1f9:  add    $0x4c,%esp
081c5d72 +0x1fc:  pop    %ebx
081c5d73 +0x1fd:  pop    %esi
081c5d74 +0x1fe:  pop    %edi
081c5d75 +0x1ff:  pop    %ebp
081c5d76 +0x200:  ret
081c5d77 +0x201:  nop
```

## 反编译 C

```c
// DisPatcher_MoveItem::send @ 0x81c5b76

/* DisPatcher_MoveItem::send(CUser*, ParamBase&) */

void __thiscall
DisPatcher_MoveItem::send(DisPatcher_MoveItem *this,CUser *param_1,ParamBase *param_2)

{
  ParamBase PVar1;
  ParamBase PVar2;
  short sVar3;
  int iVar4;
  AvatarRechargeServer *this_00;
  PacketGuard local_2c [12];
  ParamBase *local_20;
  
  local_20 = param_2;
  PacketGuard::PacketGuard(local_2c);
  if (*(int *)(local_20 + 4) != 0x7fffffff) {
                    /* try { // try from 081c5bb7 to 081c5d46 has its CatchHandler @ 081c5d49 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_2c,1,0x13);
    if (*(int *)(local_20 + 4) == 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,1);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)(char)local_20[8]);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,(int)*(short *)(local_20 + 10));
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 0xc));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)(char)local_20[0x10]);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 0x14));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send(param_1,local_2c);
      iVar4 = *(int *)(local_20 + 0x14);
      PVar1 = local_20[0x10];
      sVar3 = *(short *)(local_20 + 10);
      PVar2 = local_20[8];
      this_00 = (AvatarRechargeServer *)ARAD::Singleton<AvatarRechargeServer>::Get();
      AvatarRechargeServer::SendDurability(this_00,param_1,(char)PVar2,sVar3,(char)PVar1,iVar4);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,*(int *)(local_20 + 4));
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)(char)local_20[8]);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_2c,(int)(char)local_20[0x10]);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_2c,true);
      CUser::Send(param_1,local_2c);
    }
  }
  PacketGuard::~PacketGuard(local_2c);
  return;
}
```
