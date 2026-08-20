# SendPacket

`_ZN5CUser10SendPacketENS_11eSendTargetER11PacketGuard`

`CUser::SendPacket(CUser::eSendTarget, PacketGuard&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867b8fe` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867b8fe  _ZN5CUser10SendPacketENS_11eSendTargetER11PacketGuard
#           CUser::SendPacket(CUser::eSendTarget, PacketGuard&)
# range [0x0867b8fe, 0x0867b9d9]
0867b8fe +0x00:  push   %ebp
0867b8ff +0x01:  mov    %esp,%ebp
0867b901 +0x03:  sub    $0x28,%esp
0867b904 +0x06:  mov    0xc(%ebp),%eax
0867b907 +0x09:  cmp    $0x1,%eax
0867b90a +0x0c:  je     0867b949 <+0x4b>
0867b90c +0x0e:  cmp    $0x1,%eax
0867b90f +0x11:  jg     0867b91a <+0x1c>
0867b911 +0x13:  test   %eax,%eax
0867b913 +0x15:  je     0867b929 <+0x2b>
0867b915 +0x17:  jmp    0867b9d3 <+0xd5>
0867b91a +0x1c:  cmp    $0x2,%eax
0867b91d +0x1f:  je     0867b95d <+0x5f>
0867b91f +0x21:  cmp    $0x3,%eax
0867b922 +0x24:  je     0867b999 <+0x9b>
0867b924 +0x26:  jmp    0867b9d3 <+0xd5>
0867b929 +0x2b:  call   080da3a7 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x544>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x544
0867b92e +0x30:  mov    0x8(%ebp),%edx
0867b931 +0x33:  mov    %edx,0x8(%esp)
0867b935 +0x37:  mov    0x10(%ebp),%edx
0867b938 +0x3a:  mov    %edx,0x4(%esp)
0867b93c +0x3e:  mov    %eax,(%esp)
0867b93f +0x41:  call   0813495c <_GLOBAL__I__ZN12advancealtar7Manager12gmTimeSpeed_E+0x563>  ; global constructors keyed to advancealtar::Manager::gmTimeSpeed_+0x563
0867b944 +0x46:  jmp    0867b9d3 <+0xd5>
0867b949 +0x4b:  mov    0x10(%ebp),%eax
0867b94c +0x4e:  mov    %eax,0x4(%esp)
0867b950 +0x52:  mov    0x8(%ebp),%eax
0867b953 +0x55:  mov    %eax,(%esp)
0867b956 +0x58:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867b95b +0x5d:  jmp    0867b9d3 <+0xd5>
0867b95d +0x5f:  mov    0x8(%ebp),%eax
0867b960 +0x62:  mov    %eax,(%esp)
0867b963 +0x65:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
0867b968 +0x6a:  mov    %eax,-0x10(%ebp)
0867b96b +0x6d:  cmpl   $0x0,-0x10(%ebp)
0867b96f +0x71:  je     0867b985 <+0x87>
0867b971 +0x73:  mov    0x10(%ebp),%eax
0867b974 +0x76:  mov    %eax,0x4(%esp)
0867b978 +0x7a:  mov    -0x10(%ebp),%eax
0867b97b +0x7d:  mov    %eax,(%esp)
0867b97e +0x80:  call   0859d14e <_ZN6CParty13send_to_partyER11PacketGuard>  ; CParty::send_to_party(PacketGuard&)
0867b983 +0x85:  jmp    0867b9d3 <+0xd5>
0867b985 +0x87:  mov    0x10(%ebp),%eax
0867b988 +0x8a:  mov    %eax,0x4(%esp)
0867b98c +0x8e:  mov    0x8(%ebp),%eax
0867b98f +0x91:  mov    %eax,(%esp)
0867b992 +0x94:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867b997 +0x99:  jmp    0867b9d3 <+0xd5>
0867b999 +0x9b:  mov    0x8(%ebp),%eax
0867b99c +0x9e:  mov    %eax,(%esp)
0867b99f +0xa1:  call   086551de <_ZN5CUser10GetWarRoomEv>  ; CUser::GetWarRoom()
0867b9a4 +0xa6:  mov    %eax,-0xc(%ebp)
0867b9a7 +0xa9:  cmpl   $0x0,-0xc(%ebp)
0867b9ab +0xad:  je     0867b9c1 <+0xc3>
0867b9ad +0xaf:  mov    0x10(%ebp),%eax
0867b9b0 +0xb2:  mov    %eax,0x4(%esp)
0867b9b4 +0xb6:  mov    -0xc(%ebp),%eax
0867b9b7 +0xb9:  mov    %eax,(%esp)
0867b9ba +0xbc:  call   086be0cc <_ZN7WarRoom10SendToRoomER11PacketGuard>  ; WarRoom::SendToRoom(PacketGuard&)
0867b9bf +0xc1:  jmp    0867b9d3 <+0xd5>
0867b9c1 +0xc3:  mov    0x10(%ebp),%eax
0867b9c4 +0xc6:  mov    %eax,0x4(%esp)
0867b9c8 +0xca:  mov    0x8(%ebp),%eax
0867b9cb +0xcd:  mov    %eax,(%esp)
0867b9ce +0xd0:  call   086485ba <_ZN5CUser4SendER11PacketGuard>  ; CUser::Send(PacketGuard&)
0867b9d3 +0xd5:  mov    $0x1,%eax
0867b9d8 +0xda:  leave
0867b9d9 +0xdb:  ret
```

## 反编译 C

```c
// CUser::SendPacket @ 0x867b8fe

/* CUser::SendPacket(CUser::eSendTarget, PacketGuard&) */

undefined4 __thiscall CUser::SendPacket(CUser *this,int param_2,PacketGuard *param_3)

{
  GameWorld *this_00;
  CParty *this_01;
  WarRoom *this_02;
  
  if (param_2 == 1) {
    Send(this,param_3);
  }
  else if (param_2 < 2) {
    if (param_2 == 0) {
      this_00 = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this_00,param_3,this);
    }
  }
  else if (param_2 == 2) {
    this_01 = (CParty *)GetParty(this);
    if (this_01 == (CParty *)0x0) {
      Send(this,param_3);
    }
    else {
      CParty::send_to_party(this_01,param_3);
    }
  }
  else if (param_2 == 3) {
    this_02 = (WarRoom *)GetWarRoom(this);
    if (this_02 == (WarRoom *)0x0) {
      Send(this,param_3);
    }
    else {
      WarRoom::SendToRoom(this_02,param_3);
    }
  }
  return 1;
}
```
