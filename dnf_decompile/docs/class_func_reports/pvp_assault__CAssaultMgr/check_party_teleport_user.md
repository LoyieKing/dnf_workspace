# check_party_teleport_user

`_ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b`

`pvp_assault::CAssaultMgr::check_party_teleport_user(char, CUser*, CUser*, bool)`

| 类 | 地址 |
|---|---|
| `pvp_assault::CAssaultMgr` | `0x082efe14` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 082efe14  _ZN11pvp_assault11CAssaultMgr25check_party_teleport_userEcP5CUserS2_b
#           pvp_assault::CAssaultMgr::check_party_teleport_user(char, CUser*, CUser*, bool)
# range [0x082efe14, 0x082eff41]
082efe14 +0x000:  push   %ebp
082efe15 +0x001:  mov    %esp,%ebp
082efe17 +0x003:  sub    $0x38,%esp
082efe1a +0x006:  mov    0xc(%ebp),%edx
082efe1d +0x009:  mov    0x18(%ebp),%eax
082efe20 +0x00c:  mov    %dl,-0x1c(%ebp)
082efe23 +0x00f:  mov    %al,-0x20(%ebp)
082efe26 +0x012:  movl   $0x0,-0x10(%ebp)
082efe2d +0x019:  movl   $0x0,-0xc(%ebp)
082efe34 +0x020:  mov    0x10(%ebp),%eax
082efe37 +0x023:  mov    %eax,(%esp)
082efe3a +0x026:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
082efe3f +0x02b:  test   %al,%al
082efe41 +0x02d:  je     082efe51 <+0x3d>
082efe43 +0x02f:  mov    0x10(%ebp),%eax
082efe46 +0x032:  mov    %eax,(%esp)
082efe49 +0x035:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082efe4e +0x03a:  mov    %eax,-0xc(%ebp)
082efe51 +0x03d:  cmpl   $0x0,-0xc(%ebp)
082efe55 +0x041:  je     082efe9c <+0x88>
082efe57 +0x043:  mov    -0xc(%ebp),%eax
082efe5a +0x046:  mov    %eax,(%esp)
082efe5d +0x049:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
082efe62 +0x04e:  mov    %eax,(%esp)
082efe65 +0x051:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
082efe6a +0x056:  test   %al,%al
082efe6c +0x058:  js     082efe8c <+0x78>
082efe6e +0x05a:  mov    -0xc(%ebp),%eax
082efe71 +0x05d:  mov    %eax,(%esp)
082efe74 +0x060:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
082efe79 +0x065:  mov    %eax,(%esp)
082efe7c +0x068:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
082efe81 +0x06d:  cmp    $0x3,%al
082efe83 +0x06f:  jg     082efe8c <+0x78>
082efe85 +0x071:  mov    $0x1,%eax
082efe8a +0x076:  jmp    082efe91 <+0x7d>
082efe8c +0x078:  mov    $0x0,%eax
082efe91 +0x07d:  test   %al,%al
082efe93 +0x07f:  je     082efe9c <+0x88>
082efe95 +0x081:  movl   $0x9c,-0x10(%ebp)
082efe9c +0x088:  movl   $0x0,-0xc(%ebp)
082efea3 +0x08f:  mov    0x14(%ebp),%eax
082efea6 +0x092:  mov    %eax,(%esp)
082efea9 +0x095:  call   080da314 <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x4b1>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x4b1
082efeae +0x09a:  test   %al,%al
082efeb0 +0x09c:  je     082efec0 <+0xac>
082efeb2 +0x09e:  mov    0x14(%ebp),%eax
082efeb5 +0x0a1:  mov    %eax,(%esp)
082efeb8 +0x0a4:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
082efebd +0x0a9:  mov    %eax,-0xc(%ebp)
082efec0 +0x0ac:  cmpl   $0x0,-0xc(%ebp)
082efec4 +0x0b0:  je     082eff0b <+0xf7>
082efec6 +0x0b2:  mov    -0xc(%ebp),%eax
082efec9 +0x0b5:  mov    %eax,(%esp)
082efecc +0x0b8:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
082efed1 +0x0bd:  mov    %eax,(%esp)
082efed4 +0x0c0:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
082efed9 +0x0c5:  test   %al,%al
082efedb +0x0c7:  js     082efefb <+0xe7>
082efedd +0x0c9:  mov    -0xc(%ebp),%eax
082efee0 +0x0cc:  mov    %eax,(%esp)
082efee3 +0x0cf:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
082efee8 +0x0d4:  mov    %eax,(%esp)
082efeeb +0x0d7:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
082efef0 +0x0dc:  cmp    $0x3,%al
082efef2 +0x0de:  jg     082efefb <+0xe7>
082efef4 +0x0e0:  mov    $0x1,%eax
082efef9 +0x0e5:  jmp    082eff00 <+0xec>
082efefb +0x0e7:  mov    $0x0,%eax
082eff00 +0x0ec:  test   %al,%al
082eff02 +0x0ee:  je     082eff0b <+0xf7>
082eff04 +0x0f0:  movl   $0x9d,-0x10(%ebp)
082eff0b +0x0f7:  cmpb   $0x0,-0x20(%ebp)
082eff0f +0x0fb:  je     082eff3c <+0x128>
082eff11 +0x0fd:  cmpl   $0x0,-0x10(%ebp)
082eff15 +0x101:  je     082eff3c <+0x128>
082eff17 +0x103:  mov    -0x10(%ebp),%eax
082eff1a +0x106:  movzbl %al,%edx
082eff1d +0x109:  movsbl -0x1c(%ebp),%eax
082eff21 +0x10d:  mov    %edx,0xc(%esp)
082eff25 +0x111:  mov    %eax,0x8(%esp)
082eff29 +0x115:  movl   $0xa,0x4(%esp)
082eff31 +0x11d:  mov    0x10(%ebp),%eax
082eff34 +0x120:  mov    %eax,(%esp)
082eff37 +0x123:  call   0867be2e <_ZN5CUser22SendCmdPeerErrorPacketE14ENUM_CMDPACKET22ENUM_PEER_REQUEST_TYPEh>  ; CUser::SendCmdPeerErrorPacket(ENUM_CMDPACKET, ENUM_PEER_REQUEST_TYPE, unsigned char)
082eff3c +0x128:  mov    -0x10(%ebp),%eax
082eff3f +0x12b:  leave
082eff40 +0x12c:  ret
082eff41 +0x12d:  nop
```

## 反编译 C

```c
// pvp_assault::CAssaultMgr::check_party_teleport_user @ 0x82efe14

/* pvp_assault::CAssaultMgr::check_party_teleport_user(char, CUser*, CUser*, bool) */

int __thiscall
pvp_assault::CAssaultMgr::check_party_teleport_user
          (CAssaultMgr *this,char param_1,CUser *param_2,CUser *param_3,bool param_4)

{
  bool bVar1;
  char cVar2;
  CPartyTelePort *pCVar3;
  undefined4 local_14;
  undefined4 local_10;
  
  local_14 = 0;
  local_10 = (CParty *)0x0;
  cVar2 = CUser::CheckInParty(param_2);
  if (cVar2 != '\0') {
    local_10 = (CParty *)CUser::GetParty(param_2);
  }
  if (local_10 != (CParty *)0x0) {
    pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
    cVar2 = CPartyTelePort::get_teleport_state(pCVar3);
    if (cVar2 < '\0') {
LAB_082efe8c:
      bVar1 = false;
    }
    else {
      pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
      cVar2 = CPartyTelePort::get_teleport_state(pCVar3);
      if ('\x03' < cVar2) goto LAB_082efe8c;
      bVar1 = true;
    }
    if (bVar1) {
      local_14 = 0x9c;
    }
  }
  local_10 = (CParty *)0x0;
  cVar2 = CUser::CheckInParty(param_3);
  if (cVar2 != '\0') {
    local_10 = (CParty *)CUser::GetParty(param_3);
  }
  if (local_10 == (CParty *)0x0) goto LAB_082eff0b;
  pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
  cVar2 = CPartyTelePort::get_teleport_state(pCVar3);
  if (cVar2 < '\0') {
LAB_082efefb:
    bVar1 = false;
  }
  else {
    pCVar3 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
    cVar2 = CPartyTelePort::get_teleport_state(pCVar3);
    if ('\x03' < cVar2) goto LAB_082efefb;
    bVar1 = true;
  }
  if (bVar1) {
    local_14 = 0x9d;
  }
LAB_082eff0b:
  if ((param_4) && (local_14 != 0)) {
    CUser::SendCmdPeerErrorPacket(param_2,10,(int)param_1,local_14);
  }
  return local_14;
}
```
