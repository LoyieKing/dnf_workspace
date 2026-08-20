# send_teleport_effect

`_ZN8Teleport20send_teleport_effectEP5CUseri`

`Teleport::send_teleport_effect(CUser*, int)`

| 类 | 地址 |
|---|---|
| `Teleport` | `0x08283eba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08283eba  _ZN8Teleport20send_teleport_effectEP5CUseri
#           Teleport::send_teleport_effect(CUser*, int)
# range [0x08283eba, 0x08283fb7]
08283eba +0x00:  push   %ebp
08283ebb +0x01:  mov    %esp,%ebp
08283ebd +0x03:  push   %esi
08283ebe +0x04:  push   %ebx
08283ebf +0x05:  sub    $0x20,%esp
08283ec2 +0x08:  cmpl   $0x0,0xc(%ebp)
08283ec6 +0x0c:  je     08283fb0 <+0xf6>
08283ecc +0x12:  lea    -0x14(%ebp),%eax
08283ecf +0x15:  mov    %eax,(%esp)
08283ed2 +0x18:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
08283ed7 +0x1d:  movl   $0x17b,0x8(%esp)
08283edf +0x25:  movl   $0x0,0x4(%esp)
08283ee7 +0x2d:  lea    -0x14(%ebp),%eax
08283eea +0x30:  mov    %eax,(%esp)
08283eed +0x33:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
08283ef2 +0x38:  mov    0x10(%ebp),%eax
08283ef5 +0x3b:  movsbl %al,%eax
08283ef8 +0x3e:  mov    %eax,0x4(%esp)
08283efc +0x42:  lea    -0x14(%ebp),%eax
08283eff +0x45:  mov    %eax,(%esp)
08283f02 +0x48:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08283f07 +0x4d:  movl   $0x1,0x4(%esp)
08283f0f +0x55:  lea    -0x14(%ebp),%eax
08283f12 +0x58:  mov    %eax,(%esp)
08283f15 +0x5b:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08283f1a +0x60:  mov    0xc(%ebp),%eax
08283f1d +0x63:  mov    %eax,(%esp)
08283f20 +0x66:  call   080c8c96 <_GLOBAL__I__ZN13BestClearTimeC2Ev+0xee>  ; global constructors keyed to BestClearTime::BestClearTime()+0xee
08283f25 +0x6b:  mov    %eax,0x4(%esp)
08283f29 +0x6f:  lea    -0x14(%ebp),%eax
08283f2c +0x72:  mov    %eax,(%esp)
08283f2f +0x75:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08283f34 +0x7a:  movl   $0x1,0x4(%esp)
08283f3c +0x82:  lea    -0x14(%ebp),%eax
08283f3f +0x85:  mov    %eax,(%esp)
08283f42 +0x88:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08283f47 +0x8d:  movl   $0x0,0x4(%esp)
08283f4f +0x95:  mov    0xc(%ebp),%eax
08283f52 +0x98:  mov    %eax,(%esp)
08283f55 +0x9b:  call   086813be <_ZN5CUser8get_areaEb>  ; CUser::get_area(bool)
08283f5a +0xa0:  mov    %eax,%ebx
08283f5c +0xa2:  mov    0xc(%ebp),%eax
08283f5f +0xa5:  mov    %eax,(%esp)
08283f62 +0xa8:  call   08645564 <_ZNK15CUserCharacInfo16getCurCharacVillEv>  ; CUserCharacInfo::getCurCharacVill() const
08283f67 +0xad:  movsbl %al,%esi
08283f6a +0xb0:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08283f6f +0xb5:  lea    -0x14(%ebp),%edx
08283f72 +0xb8:  mov    %edx,0xc(%esp)
08283f76 +0xbc:  mov    %ebx,0x8(%esp)
08283f7a +0xc0:  mov    %esi,0x4(%esp)
08283f7e +0xc4:  mov    %eax,(%esp)
08283f81 +0xc7:  call   086c8168 <_ZN9GameWorld12send_to_areaEiiR11PacketGuard>  ; GameWorld::send_to_area(int, int, PacketGuard&)
08283f86 +0xcc:  jmp    08283fa3 <+0xe9>
08283f88 +0xce:  mov    %edx,%ebx
08283f8a +0xd0:  mov    %eax,%esi
08283f8c +0xd2:  lea    -0x14(%ebp),%eax
08283f8f +0xd5:  mov    %eax,(%esp)
08283f92 +0xd8:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08283f97 +0xdd:  mov    %esi,%eax
08283f99 +0xdf:  mov    %ebx,%edx
08283f9b +0xe1:  mov    %eax,(%esp)
08283f9e +0xe4:  call   08ae3750 <_Unwind_Resume>
08283fa3 +0xe9:  lea    -0x14(%ebp),%eax
08283fa6 +0xec:  mov    %eax,(%esp)
08283fa9 +0xef:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08283fae +0xf4:  jmp    08283fb1 <+0xf7>
08283fb0 +0xf6:  nop
08283fb1 +0xf7:  add    $0x20,%esp
08283fb4 +0xfa:  pop    %ebx
08283fb5 +0xfb:  pop    %esi
08283fb6 +0xfc:  pop    %ebp
08283fb7 +0xfd:  ret
```

## 反编译 C

```c
// Teleport::send_teleport_effect @ 0x8283eba

/* Teleport::send_teleport_effect(CUser*, int) */

void __thiscall Teleport::send_teleport_effect(Teleport *this,CUser *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  if (param_1 != (CUser *)0x0) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08283eed to 08283f85 has its CatchHandler @ 08283f88 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x17b);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,(int)(char)param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
    iVar2 = CUser::GetUID(param_1);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,iVar2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    iVar2 = CUser::get_area(param_1,false);
    cVar1 = CUserCharacInfo::getCurCharacVill((CUserCharacInfo *)param_1);
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_to_area(this_00,(int)cVar1,iVar2,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
