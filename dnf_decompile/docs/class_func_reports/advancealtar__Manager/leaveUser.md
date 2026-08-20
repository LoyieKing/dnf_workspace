# leaveUser

`_ZN12advancealtar7Manager9leaveUserEP5CUser`

`advancealtar::Manager::leaveUser(CUser*)`

| 类 | 地址 |
|---|---|
| `advancealtar::Manager` | `0x081310b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081310b2  _ZN12advancealtar7Manager9leaveUserEP5CUser
#           advancealtar::Manager::leaveUser(CUser*)
# range [0x081310b2, 0x0813119d]
081310b2 +0x00:  push   %ebp
081310b3 +0x01:  mov    %esp,%ebp
081310b5 +0x03:  push   %esi
081310b6 +0x04:  push   %ebx
081310b7 +0x05:  sub    $0x20,%esp
081310ba +0x08:  cmpl   $0x0,0x8(%ebp)
081310be +0x0c:  je     08131196 <+0xe4>
081310c4 +0x12:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081310c9 +0x17:  mov    0x8(%ebp),%edx
081310cc +0x1a:  mov    %edx,0x4(%esp)
081310d0 +0x1e:  mov    %eax,(%esp)
081310d3 +0x21:  call   086c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>  ; GameWorld::out_from_dungeon(CUser*)
081310d8 +0x26:  lea    -0x14(%ebp),%eax
081310db +0x29:  mov    %eax,(%esp)
081310de +0x2c:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081310e3 +0x31:  movl   $0x2,0x8(%esp)
081310eb +0x39:  movl   $0x0,0x4(%esp)
081310f3 +0x41:  lea    -0x14(%ebp),%eax
081310f6 +0x44:  mov    %eax,(%esp)
081310f9 +0x47:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081310fe +0x4c:  movl   $0x0,0x4(%esp)
08131106 +0x54:  lea    -0x14(%ebp),%eax
08131109 +0x57:  mov    %eax,(%esp)
0813110c +0x5a:  call   080cb920 <_GLOBAL__I__ZN10BingoEventC2Ev+0x76d>  ; global constructors keyed to BingoEvent::BingoEvent()+0x76d
08131111 +0x5f:  movl   $0x1,0x4(%esp)
08131119 +0x67:  lea    -0x14(%ebp),%eax
0813111c +0x6a:  mov    %eax,(%esp)
0813111f +0x6d:  call   080d9ea4 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41
08131124 +0x72:  lea    -0x14(%ebp),%eax
08131127 +0x75:  movl   $0x0,0x8(%esp)
0813112f +0x7d:  mov    %eax,0x4(%esp)
08131133 +0x81:  mov    0x8(%ebp),%eax
08131136 +0x84:  mov    %eax,(%esp)
08131139 +0x87:  call   0865a44e <_ZN5CUser15make_basic_infoEPcc>  ; CUser::make_basic_info(char*, char)
0813113e +0x8c:  movl   $0x1,0x4(%esp)
08131146 +0x94:  lea    -0x14(%ebp),%eax
08131149 +0x97:  mov    %eax,(%esp)
0813114c +0x9a:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
08131151 +0x9f:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
08131156 +0xa4:  mov    0x8(%ebp),%edx
08131159 +0xa7:  mov    %edx,0x8(%esp)
0813115d +0xab:  lea    -0x14(%ebp),%edx
08131160 +0xae:  mov    %edx,0x4(%esp)
08131164 +0xb2:  mov    %eax,(%esp)
08131167 +0xb5:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0813116c +0xba:  jmp    08131189 <+0xd7>
0813116e +0xbc:  mov    %edx,%ebx
08131170 +0xbe:  mov    %eax,%esi
08131172 +0xc0:  lea    -0x14(%ebp),%eax
08131175 +0xc3:  mov    %eax,(%esp)
08131178 +0xc6:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
0813117d +0xcb:  mov    %esi,%eax
0813117f +0xcd:  mov    %ebx,%edx
08131181 +0xcf:  mov    %eax,(%esp)
08131184 +0xd2:  call   08ae3750 <_Unwind_Resume>
08131189 +0xd7:  lea    -0x14(%ebp),%eax
0813118c +0xda:  mov    %eax,(%esp)
0813118f +0xdd:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
08131194 +0xe2:  jmp    08131197 <+0xe5>
08131196 +0xe4:  nop
08131197 +0xe5:  add    $0x20,%esp
0813119a +0xe8:  pop    %ebx
0813119b +0xe9:  pop    %esi
0813119c +0xea:  pop    %ebp
0813119d +0xeb:  ret
```

## 反编译 C

```c
// advancealtar::Manager::leaveUser @ 0x81310b2

/* advancealtar::Manager::leaveUser(CUser*) */

void advancealtar::Manager::leaveUser(CUser *param_1)

{
  GameWorld *pGVar1;
  PacketGuard local_18 [12];
  
  if (param_1 != (CUser *)0x0) {
    pGVar1 = (GameWorld *)G_GameWorld();
    GameWorld::out_from_dungeon(pGVar1,param_1);
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081310f9 to 0813116b has its CatchHandler @ 0813116e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    CUser::make_basic_info(param_1,(char *)local_18,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    pGVar1 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar1,local_18,param_1);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}
```
