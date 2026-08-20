# sendEffectPacket

`_ZN4ARAD23Arad_ServerStateManager16sendEffectPacketE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageP5CUser`

`ARAD::Arad_ServerStateManager::sendEffectPacket(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&, CUser*)`

| 类 | 地址 |
|---|---|
| `ARAD::Arad_ServerStateManager` | `0x081a9a1c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081a9a1c  _ZN4ARAD23Arad_ServerStateManager16sendEffectPacketE23ENUM_GLOBAL_EFFECT_ARADRK22AradServerStateMessageP5CUser
#           ARAD::Arad_ServerStateManager::sendEffectPacket(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage const&, CUser*)
# range [0x081a9a1c, 0x081a9af9]
081a9a1c +0x00:  push   %ebp
081a9a1d +0x01:  mov    %esp,%ebp
081a9a1f +0x03:  push   %esi
081a9a20 +0x04:  push   %ebx
081a9a21 +0x05:  sub    $0x20,%esp
081a9a24 +0x08:  lea    -0x14(%ebp),%eax
081a9a27 +0x0b:  mov    %eax,(%esp)
081a9a2a +0x0e:  call   0858dd4c <_ZN11PacketGuardC1Ev>  ; PacketGuard::PacketGuard()
081a9a2f +0x13:  movl   $0x21a,0x8(%esp)
081a9a37 +0x1b:  movl   $0x0,0x4(%esp)
081a9a3f +0x23:  lea    -0x14(%ebp),%eax
081a9a42 +0x26:  mov    %eax,(%esp)
081a9a45 +0x29:  call   080cb8fc <_GLOBAL__I__ZN10BingoEventC2Ev+0x749>  ; global constructors keyed to BingoEvent::BingoEvent()+0x749
081a9a4a +0x2e:  movl   $0x1,0x4(%esp)
081a9a52 +0x36:  lea    -0x14(%ebp),%eax
081a9a55 +0x39:  mov    %eax,(%esp)
081a9a58 +0x3c:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081a9a5d +0x41:  mov    0xc(%ebp),%eax
081a9a60 +0x44:  mov    %eax,0x4(%esp)
081a9a64 +0x48:  lea    -0x14(%ebp),%eax
081a9a67 +0x4b:  mov    %eax,(%esp)
081a9a6a +0x4e:  call   080cb93c <_GLOBAL__I__ZN10BingoEventC2Ev+0x789>  ; global constructors keyed to BingoEvent::BingoEvent()+0x789
081a9a6f +0x53:  mov    0x10(%ebp),%eax
081a9a72 +0x56:  movl   $0xc,0x8(%esp)
081a9a7a +0x5e:  mov    %eax,0x4(%esp)
081a9a7e +0x62:  lea    -0x14(%ebp),%eax
081a9a81 +0x65:  mov    %eax,(%esp)
081a9a84 +0x68:  call   0811df08 <_GLOBAL__I__ZN15CItemDictionaryC2Ev+0x48>  ; global constructors keyed to CItemDictionary::CItemDictionary()+0x48
081a9a89 +0x6d:  movl   $0x1,0x4(%esp)
081a9a91 +0x75:  lea    -0x14(%ebp),%eax
081a9a94 +0x78:  mov    %eax,(%esp)
081a9a97 +0x7b:  call   080cb958 <_GLOBAL__I__ZN10BingoEventC2Ev+0x7a5>  ; global constructors keyed to BingoEvent::BingoEvent()+0x7a5
081a9a9c +0x80:  cmpl   $0x0,0x14(%ebp)
081a9aa0 +0x84:  jne    081a9ab8 <+0x9c>
081a9aa2 +0x86:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081a9aa7 +0x8b:  lea    -0x14(%ebp),%edx
081a9aaa +0x8e:  mov    %edx,0x4(%esp)
081a9aae +0x92:  mov    %eax,(%esp)
081a9ab1 +0x95:  call   086c8c14 <_ZN9GameWorld8send_allER11PacketGuard>  ; GameWorld::send_all(PacketGuard&)
081a9ab6 +0x9a:  jmp    081a9ae7 <+0xcb>
081a9ab8 +0x9c:  lea    -0x14(%ebp),%eax
081a9abb +0x9f:  mov    %eax,0x4(%esp)
081a9abf +0xa3:  mov    0x14(%ebp),%eax
081a9ac2 +0xa6:  mov    %eax,(%esp)
081a9ac5 +0xa9:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
081a9aca +0xae:  jmp    081a9ae7 <+0xcb>
081a9acc +0xb0:  mov    %edx,%ebx
081a9ace +0xb2:  mov    %eax,%esi
081a9ad0 +0xb4:  lea    -0x14(%ebp),%eax
081a9ad3 +0xb7:  mov    %eax,(%esp)
081a9ad6 +0xba:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081a9adb +0xbf:  mov    %esi,%eax
081a9add +0xc1:  mov    %ebx,%edx
081a9adf +0xc3:  mov    %eax,(%esp)
081a9ae2 +0xc6:  call   08ae3750 <_Unwind_Resume>
081a9ae7 +0xcb:  lea    -0x14(%ebp),%eax
081a9aea +0xce:  mov    %eax,(%esp)
081a9aed +0xd1:  call   0858de80 <_ZN11PacketGuardD1Ev>  ; PacketGuard::~PacketGuard()
081a9af2 +0xd6:  add    $0x20,%esp
081a9af5 +0xd9:  pop    %ebx
081a9af6 +0xda:  pop    %esi
081a9af7 +0xdb:  pop    %ebp
081a9af8 +0xdc:  ret
081a9af9 +0xdd:  nop
```

## 反编译 C

```c
// ARAD::Arad_ServerStateManager::sendEffectPacket @ 0x81a9a1c

/* ARAD::Arad_ServerStateManager::sendEffectPacket(ENUM_GLOBAL_EFFECT_ARAD, AradServerStateMessage
   const&, CUser*) */

void __thiscall
ARAD::Arad_ServerStateManager::sendEffectPacket
          (undefined4 this,int param_2,char *param_3,CUser *param_4)

{
  GameWorld *this_00;
  PacketGuard local_18 [12];
  
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081a9a45 to 081a9ac9 has its CatchHandler @ 081a9acc */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,0x21a);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,1);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
  InterfacePacketBuf::put_binary((InterfacePacketBuf *)local_18,param_3,0xc);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  if (param_4 == (CUser *)0x0) {
    this_00 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this_00,local_18);
  }
  else {
    CUser::Send(param_4,local_18);
  }
  PacketGuard::~PacketGuard(local_18);
  return;
}
```
