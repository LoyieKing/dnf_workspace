# _SendVictoryBonus

`_ZN11pvp_assault13CAssaultPlace17_SendVictoryBonusEP5CUseriiii`

`pvp_assault::CAssaultPlace::_SendVictoryBonus(CUser*, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultPlace` | `0x082ecdbc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082ecdbc  _ZN11pvp_assault13CAssaultPlace17_SendVictoryBonusEP5CUseriiii
#           pvp_assault::CAssaultPlace::_SendVictoryBonus(CUser*, int, int, int, int)
# range [0x082ecdbc, 0x082eceb1]
082ecdbc +0x00:  push   %ebp
082ecdbd +0x01:  mov    %esp,%ebp
082ecdbf +0x03:  push   %esi
082ecdc0 +0x04:  push   %ebx
082ecdc1 +0x05:  sub    $0x20,%esp
082ecdc4 +0x08:  lea    -0x18(%ebp),%eax
082ecdc7 +0x0b:  mov    %eax,(%esp)
082ecdca +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
082ecdcf +0x13:  movl   $0x108,0x8(%esp)
082ecdd7 +0x1b:  movl   $0x0,0x4(%esp)
082ecddf +0x23:  lea    -0x18(%ebp),%eax
082ecde2 +0x26:  mov    %eax,(%esp)
082ecde5 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
082ecdea +0x2e:  mov    0x10(%ebp),%eax
082ecded +0x31:  add    $0x1,%eax
082ecdf0 +0x34:  mov    %eax,0x4(%esp)
082ecdf4 +0x38:  lea    -0x18(%ebp),%eax
082ecdf7 +0x3b:  mov    %eax,(%esp)
082ecdfa +0x3e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ecdff +0x43:  mov    0x14(%ebp),%eax
082ece02 +0x46:  mov    %eax,0x4(%esp)
082ece06 +0x4a:  lea    -0x18(%ebp),%eax
082ece09 +0x4d:  mov    %eax,(%esp)
082ece0c +0x50:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ece11 +0x55:  mov    0x18(%ebp),%eax
082ece14 +0x58:  mov    %eax,0x4(%esp)
082ece18 +0x5c:  lea    -0x18(%ebp),%eax
082ece1b +0x5f:  mov    %eax,(%esp)
082ece1e +0x62:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ece23 +0x67:  mov    0x1c(%ebp),%eax
082ece26 +0x6a:  mov    %eax,0x4(%esp)
082ece2a +0x6e:  lea    -0x18(%ebp),%eax
082ece2d +0x71:  mov    %eax,(%esp)
082ece30 +0x74:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
082ece35 +0x79:  movl   $0x1,0x4(%esp)
082ece3d +0x81:  lea    -0x18(%ebp),%eax
082ece40 +0x84:  mov    %eax,(%esp)
082ece43 +0x87:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
082ece48 +0x8c:  mov    0xc(%ebp),%eax
082ece4b +0x8f:  mov    %eax,(%esp)
082ece4e +0x92:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082ece53 +0x97:  mov    %eax,-0xc(%ebp)
082ece56 +0x9a:  cmpl   $0x0,-0xc(%ebp)
082ece5a +0x9e:  je     082ece70 <+0xb4>
082ece5c +0xa0:  lea    -0x18(%ebp),%eax
082ece5f +0xa3:  mov    %eax,0x4(%esp)
082ece63 +0xa7:  mov    -0xc(%ebp),%eax
082ece66 +0xaa:  mov    %eax,(%esp)
082ece69 +0xad:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
082ece6e +0xb2:  jmp    082ece9f <+0xe3>
082ece70 +0xb4:  lea    -0x18(%ebp),%eax
082ece73 +0xb7:  mov    %eax,0x4(%esp)
082ece77 +0xbb:  mov    0xc(%ebp),%eax
082ece7a +0xbe:  mov    %eax,(%esp)
082ece7d +0xc1:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
082ece82 +0xc6:  jmp    082ece9f <+0xe3>
082ece84 +0xc8:  mov    %edx,%ebx
082ece86 +0xca:  mov    %eax,%esi
082ece88 +0xcc:  lea    -0x18(%ebp),%eax
082ece8b +0xcf:  mov    %eax,(%esp)
082ece8e +0xd2:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082ece93 +0xd7:  mov    %esi,%eax
082ece95 +0xd9:  mov    %ebx,%edx
082ece97 +0xdb:  mov    %eax,(%esp)
082ece9a +0xde:  call   08ae3750 <_Unwind_Resume>
082ece9f +0xe3:  lea    -0x18(%ebp),%eax
082ecea2 +0xe6:  mov    %eax,(%esp)
082ecea5 +0xe9:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
082eceaa +0xee:  add    $0x20,%esp
082ecead +0xf1:  pop    %ebx
082eceae +0xf2:  pop    %esi
082eceaf +0xf3:  pop    %ebp
082eceb0 +0xf4:  ret
082eceb1 +0xf5:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultPlace::_SendVictoryBonus @ 0x82ecdbc

/* pvp_assault::CAssaultPlace::_SendVictoryBonus(CUser*, int, int, int, int) */

void __thiscall
pvp_assault::CAssaultPlace::_SendVictoryBonus
          (CAssaultPlace *this,CUser *param_1,int param_2,int param_3,int param_4,int param_5)

{
  PacketGuard local_1c [12];
  CParty *local_10;
  
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 082ecde5 to 082ece81 has its CatchHandler @ 082ece84 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x108);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_2 + 1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_3);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_4);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,param_5);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  local_10 = (CParty *)CUser::GetParty(param_1);
  if (local_10 == (CParty *)0x0) {
    CUser::Send(param_1,local_1c);
  }
  else {
    CParty::send_to_party(local_10,local_1c);
  }
  PacketGuard::~PacketGuard(local_1c);
  return;
}
```
