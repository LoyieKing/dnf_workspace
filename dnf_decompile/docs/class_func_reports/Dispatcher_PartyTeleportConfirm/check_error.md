# check_error

`_ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE`

`Dispatcher_PartyTeleportConfirm::check_error(CUser*, MSG_BASE&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PartyTeleportConfirm` | `0x081dc75c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dc75c  _ZN31Dispatcher_PartyTeleportConfirm11check_errorEP5CUserR8MSG_BASE
#           Dispatcher_PartyTeleportConfirm::check_error(CUser*, MSG_BASE&)
# range [0x081dc75c, 0x081dc82f]
081dc75c +0x00:  push   %ebp
081dc75d +0x01:  mov    %esp,%ebp
081dc75f +0x03:  sub    $0x28,%esp
081dc762 +0x06:  cmpl   $0x0,0xc(%ebp)
081dc766 +0x0a:  jne    081dc772 <+0x16>
081dc768 +0x0c:  mov    $0xffffffff,%eax
081dc76d +0x11:  jmp    081dc82e <+0xd2>
081dc772 +0x16:  mov    0x10(%ebp),%eax
081dc775 +0x19:  mov    %eax,-0x10(%ebp)
081dc778 +0x1c:  mov    0xc(%ebp),%eax
081dc77b +0x1f:  mov    %eax,(%esp)
081dc77e +0x22:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081dc783 +0x27:  cmp    $0x3,%eax
081dc786 +0x2a:  setne  %al
081dc789 +0x2d:  test   %al,%al
081dc78b +0x2f:  je     081dc797 <+0x3b>
081dc78d +0x31:  mov    $0x13,%eax
081dc792 +0x36:  jmp    081dc82e <+0xd2>
081dc797 +0x3b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081dc79c +0x40:  mov    %eax,(%esp)
081dc79f +0x43:  call   081424e8 <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0x83c>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0x83c
081dc7a4 +0x48:  test   %al,%al
081dc7a6 +0x4a:  jne    081dc7b9 <+0x5d>
081dc7a8 +0x4c:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
081dc7ad +0x51:  mov    %eax,(%esp)
081dc7b0 +0x54:  call   0823441e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x9ac8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x9ac8
081dc7b5 +0x59:  test   %al,%al
081dc7b7 +0x5b:  je     081dc7c0 <+0x64>
081dc7b9 +0x5d:  mov    $0x1,%eax
081dc7be +0x62:  jmp    081dc7c5 <+0x69>
081dc7c0 +0x64:  mov    $0x0,%eax
081dc7c5 +0x69:  test   %al,%al
081dc7c7 +0x6b:  je     081dc7d0 <+0x74>
081dc7c9 +0x6d:  mov    $0x13,%eax
081dc7ce +0x72:  jmp    081dc82e <+0xd2>
081dc7d0 +0x74:  mov    0xc(%ebp),%eax
081dc7d3 +0x77:  mov    %eax,(%esp)
081dc7d6 +0x7a:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081dc7db +0x7f:  mov    %eax,-0xc(%ebp)
081dc7de +0x82:  cmpl   $0x0,-0xc(%ebp)
081dc7e2 +0x86:  je     081dc829 <+0xcd>
081dc7e4 +0x88:  mov    -0xc(%ebp),%eax
081dc7e7 +0x8b:  mov    %eax,(%esp)
081dc7ea +0x8e:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc7ef +0x93:  mov    %eax,(%esp)
081dc7f2 +0x96:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
081dc7f7 +0x9b:  cmp    $0xff,%al
081dc7f9 +0x9d:  jge    081dc819 <+0xbd>
081dc7fb +0x9f:  mov    -0xc(%ebp),%eax
081dc7fe +0xa2:  mov    %eax,(%esp)
081dc801 +0xa5:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc806 +0xaa:  mov    %eax,(%esp)
081dc809 +0xad:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
081dc80e +0xb2:  cmp    $0x3,%al
081dc810 +0xb4:  jle    081dc819 <+0xbd>
081dc812 +0xb6:  mov    $0x1,%eax
081dc817 +0xbb:  jmp    081dc81e <+0xc2>
081dc819 +0xbd:  mov    $0x0,%eax
081dc81e +0xc2:  test   %al,%al
081dc820 +0xc4:  je     081dc829 <+0xcd>
081dc822 +0xc6:  mov    $0x13,%eax
081dc827 +0xcb:  jmp    081dc82e <+0xd2>
081dc829 +0xcd:  mov    $0x0,%eax
081dc82e +0xd2:  leave
081dc82f +0xd3:  ret
```

## 反编译 C

```c
// Dispatcher_PartyTeleportConfirm::check_error @ 0x81dc75c

/* Dispatcher_PartyTeleportConfirm::check_error(CUser*, MSG_BASE&) */

undefined4 Dispatcher_PartyTeleportConfirm::check_error(CUser *param_1,MSG_BASE *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  GameWorld *pGVar4;
  CParty *this;
  CPartyTelePort *pCVar5;
  
  if (param_2 == (MSG_BASE *)0x0) {
    return 0xffffffff;
  }
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 3) {
    return 0x13;
  }
  pGVar4 = (GameWorld *)G_GameWorld();
  cVar2 = GameWorld::IsPVPChannel(pGVar4);
  if (cVar2 == '\0') {
    pGVar4 = (GameWorld *)G_GameWorld();
    cVar2 = GameWorld::IsPvPSkilTreeChannel(pGVar4);
    if (cVar2 != '\0') goto LAB_081dc7b9;
    bVar1 = false;
  }
  else {
LAB_081dc7b9:
    bVar1 = true;
  }
  if (bVar1) {
    return 0x13;
  }
  this = (CParty *)CUser::GetParty((CUser *)param_2);
  if (this == (CParty *)0x0) {
    return 0;
  }
  pCVar5 = (CPartyTelePort *)CParty::GetPartyTelePort(this);
  cVar2 = CPartyTelePort::get_teleport_state(pCVar5);
  if (cVar2 < -1) {
    pCVar5 = (CPartyTelePort *)CParty::GetPartyTelePort(this);
    cVar2 = CPartyTelePort::get_teleport_state(pCVar5);
    if ('\x03' < cVar2) {
      bVar1 = true;
      goto LAB_081dc81e;
    }
  }
  bVar1 = false;
LAB_081dc81e:
  if (!bVar1) {
    return 0;
  }
  return 0x13;
}
```
