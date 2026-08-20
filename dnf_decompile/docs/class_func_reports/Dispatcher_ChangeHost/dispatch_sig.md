# dispatch_sig

`_ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf`

`Dispatcher_ChangeHost::dispatch_sig(CUser*, PacketBuf&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ChangeHost` | `0x08204c1e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08204c1e  _ZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBuf
#           Dispatcher_ChangeHost::dispatch_sig(CUser*, PacketBuf&)
# range [0x08204c1e, 0x08204d8d]
08204c1e +0x000:  push   %ebp
08204c1f +0x001:  mov    %esp,%ebp
08204c21 +0x003:  sub    $0x28,%esp
08204c24 +0x006:  mov    0xc(%ebp),%eax
08204c27 +0x009:  mov    %eax,(%esp)
08204c2a +0x00c:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
08204c2f +0x011:  cmp    $0x2,%eax
08204c32 +0x014:  setle  %al
08204c35 +0x017:  test   %al,%al
08204c37 +0x019:  je     08204c62 <+0x44>
08204c39 +0x01b:  movl   $0x0,0xc(%esp)
08204c41 +0x023:  movl   $0x0,0x8(%esp)
08204c49 +0x02b:  movl   $&_ZZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204c51 +0x033:  movl   $0x9cbf,(%esp)
08204c58 +0x03a:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204c5d +0x03f:  jmp    08204d8c <+0x16e>
08204c62 +0x044:  lea    -0x11(%ebp),%eax
08204c65 +0x047:  mov    %eax,0x4(%esp)
08204c69 +0x04b:  mov    0x10(%ebp),%eax
08204c6c +0x04e:  mov    %eax,(%esp)
08204c6f +0x051:  call   0858cf22 <_ZN9PacketBuf8get_byteERc>  ; PacketBuf::get_byte(char&)
08204c74 +0x056:  xor    $0x1,%eax
08204c77 +0x059:  test   %al,%al
08204c79 +0x05b:  je     08204ca4 <+0x86>
08204c7b +0x05d:  movl   $0x0,0xc(%esp)
08204c83 +0x065:  movl   $0x0,0x8(%esp)
08204c8b +0x06d:  movl   $&_ZZN21Dispatcher_ChangeHost12dispatch_sigEP5CUserR9PacketBufE19__PRETTY_FUNCTION__,0x4(%esp)
08204c93 +0x075:  movl   $0x9cc2,(%esp)
08204c9a +0x07c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
08204c9f +0x081:  jmp    08204d8c <+0x16e>
08204ca4 +0x086:  movl   $0x0,-0x10(%ebp)
08204cab +0x08d:  mov    0xc(%ebp),%eax
08204cae +0x090:  mov    %eax,(%esp)
08204cb1 +0x093:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
08204cb6 +0x098:  mov    %eax,-0xc(%ebp)
08204cb9 +0x09b:  cmpl   $0x0,-0xc(%ebp)
08204cbd +0x09f:  jne    08204ce4 <+0xc6>
08204cbf +0x0a1:  movl   $0x13,0x8(%esp)
08204cc7 +0x0a9:  movl   $0x7c,0x4(%esp)
08204ccf +0x0b1:  mov    0xc(%ebp),%eax
08204cd2 +0x0b4:  mov    %eax,(%esp)
08204cd5 +0x0b7:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08204cda +0x0bc:  mov    $0x0,%eax
08204cdf +0x0c1:  jmp    08204d8c <+0x16e>
08204ce4 +0x0c6:  mov    -0xc(%ebp),%eax
08204ce7 +0x0c9:  mov    %eax,(%esp)
08204cea +0x0cc:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
08204cef +0x0d1:  mov    %eax,(%esp)
08204cf2 +0x0d4:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
08204cf7 +0x0d9:  test   %al,%al
08204cf9 +0x0db:  js     08204d19 <+0xfb>
08204cfb +0x0dd:  mov    -0xc(%ebp),%eax
08204cfe +0x0e0:  mov    %eax,(%esp)
08204d01 +0x0e3:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
08204d06 +0x0e8:  mov    %eax,(%esp)
08204d09 +0x0eb:  call   0822d7ee <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2e98>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2e98
08204d0e +0x0f0:  cmp    $0x3,%al
08204d10 +0x0f2:  jg     08204d19 <+0xfb>
08204d12 +0x0f4:  mov    $0x1,%eax
08204d17 +0x0f9:  jmp    08204d1e <+0x100>
08204d19 +0x0fb:  mov    $0x0,%eax
08204d1e +0x100:  test   %al,%al
08204d20 +0x102:  je     08204d44 <+0x126>
08204d22 +0x104:  movl   $0x9e,0x8(%esp)
08204d2a +0x10c:  movl   $0x7c,0x4(%esp)
08204d32 +0x114:  mov    0xc(%ebp),%eax
08204d35 +0x117:  mov    %eax,(%esp)
08204d38 +0x11a:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08204d3d +0x11f:  mov    $0x0,%eax
08204d42 +0x124:  jmp    08204d8c <+0x16e>
08204d44 +0x126:  movzbl -0x11(%ebp),%eax
08204d48 +0x12a:  movsbl %al,%eax
08204d4b +0x12d:  mov    %eax,0x8(%esp)
08204d4f +0x131:  mov    0xc(%ebp),%eax
08204d52 +0x134:  mov    %eax,0x4(%esp)
08204d56 +0x138:  mov    -0xc(%ebp),%eax
08204d59 +0x13b:  mov    %eax,(%esp)
08204d5c +0x13e:  call   0859c978 <_ZN6CParty14change_managerEP5CUseri>  ; CParty::change_manager(CUser*, int)
08204d61 +0x143:  mov    %eax,-0x10(%ebp)
08204d64 +0x146:  cmpl   $0x0,-0x10(%ebp)
08204d68 +0x14a:  jle    08204d87 <+0x169>
08204d6a +0x14c:  mov    -0x10(%ebp),%eax
08204d6d +0x14f:  movzbl %al,%eax
08204d70 +0x152:  mov    %eax,0x8(%esp)
08204d74 +0x156:  movl   $0x7c,0x4(%esp)
08204d7c +0x15e:  mov    0xc(%ebp),%eax
08204d7f +0x161:  mov    %eax,(%esp)
08204d82 +0x164:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
08204d87 +0x169:  mov    $0x0,%eax
08204d8c +0x16e:  leave
08204d8d +0x16f:  ret
```

## 反编译 C

```c
// Dispatcher_ChangeHost::dispatch_sig @ 0x8204c1e

/* Dispatcher_ChangeHost::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_ChangeHost::dispatch_sig(Dispatcher_ChangeHost *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CPartyTelePort *pCVar5;
  char local_15;
  uint local_14;
  CParty *local_10;
  
  iVar3 = CUser::get_state(param_1);
  if (iVar3 < 3) {
    uVar4 = LineFunc(0x9cbf,"virtual int Dispatcher_ChangeHost::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar4;
  }
  cVar2 = PacketBuf::get_byte(param_2,&local_15);
  if (cVar2 != '\x01') {
    uVar4 = LineFunc(0x9cc2,"virtual int Dispatcher_ChangeHost::dispatch_sig(CUser*, PacketBuf&)",0,
                     0);
    return uVar4;
  }
  local_14 = 0;
  local_10 = (CParty *)CUser::GetParty(param_1);
  if (local_10 == (CParty *)0x0) {
    CUser::SendCmdErrorPacket(param_1,0x7c,0x13);
    return 0;
  }
  pCVar5 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
  cVar2 = CPartyTelePort::get_teleport_state(pCVar5);
  if (-1 < cVar2) {
    pCVar5 = (CPartyTelePort *)CParty::GetPartyTelePort(local_10);
    cVar2 = CPartyTelePort::get_teleport_state(pCVar5);
    if (cVar2 < '\x04') {
      bVar1 = true;
      goto LAB_08204d1e;
    }
  }
  bVar1 = false;
LAB_08204d1e:
  if (bVar1) {
    CUser::SendCmdErrorPacket(param_1,0x7c,0x9e);
  }
  else {
    local_14 = CParty::change_manager(local_10,param_1,(int)local_15);
    if (0 < (int)local_14) {
      CUser::SendCmdErrorPacket(param_1,0x7c,local_14 & 0xff);
    }
  }
  return 0;
}
```
