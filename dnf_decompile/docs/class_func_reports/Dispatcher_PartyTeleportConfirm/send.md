# send

`_ZN31Dispatcher_PartyTeleportConfirm4sendEP5CUserR9ParamBase`

`Dispatcher_PartyTeleportConfirm::send(CUser*, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_PartyTeleportConfirm` | `0x081dc830` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081dc830  _ZN31Dispatcher_PartyTeleportConfirm4sendEP5CUserR9ParamBase
#           Dispatcher_PartyTeleportConfirm::send(CUser*, ParamBase&)
# range [0x081dc830, 0x081dc8dd]
081dc830 +0x00:  push   %ebp
081dc831 +0x01:  mov    %esp,%ebp
081dc833 +0x03:  sub    $0x28,%esp
081dc836 +0x06:  mov    0x10(%ebp),%eax
081dc839 +0x09:  mov    %eax,-0x10(%ebp)
081dc83c +0x0c:  mov    -0x10(%ebp),%eax
081dc83f +0x0f:  mov    0x4(%eax),%eax
081dc842 +0x12:  test   %eax,%eax
081dc844 +0x14:  jne    081dc8bb <+0x8b>
081dc846 +0x16:  movl   $0x1b4,0x4(%esp)
081dc84e +0x1e:  mov    0xc(%ebp),%eax
081dc851 +0x21:  mov    %eax,(%esp)
081dc854 +0x24:  call   0867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>  ; CUser::SendCmdOkPacket(ENUM_CMDPACKET)
081dc859 +0x29:  mov    0xc(%ebp),%eax
081dc85c +0x2c:  mov    %eax,(%esp)
081dc85f +0x2f:  call   0865514c <_ZN5CUser8GetPartyEv>  ; CUser::GetParty()
081dc864 +0x34:  mov    %eax,-0xc(%ebp)
081dc867 +0x37:  cmpl   $0x0,-0xc(%ebp)
081dc86b +0x3b:  je     081dc8db <+0xab>
081dc86d +0x3d:  mov    -0xc(%ebp),%eax
081dc870 +0x40:  mov    %eax,(%esp)
081dc873 +0x43:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc878 +0x48:  movl   $0x0,0x4(%esp)
081dc880 +0x50:  mov    %eax,(%esp)
081dc883 +0x53:  call   085bb96e <_ZN14CPartyTelePort20send_teleport_statusEh>  ; CPartyTelePort::send_teleport_status(unsigned char)
081dc888 +0x58:  mov    -0xc(%ebp),%eax
081dc88b +0x5b:  mov    %eax,(%esp)
081dc88e +0x5e:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc893 +0x63:  mov    %eax,(%esp)
081dc896 +0x66:  call   085bbbb8 <_ZN14CPartyTelePort16process_teleportEv>  ; CPartyTelePort::process_teleport()
081dc89b +0x6b:  mov    -0x10(%ebp),%eax
081dc89e +0x6e:  movzbl 0x8(%eax),%eax
081dc8a2 +0x72:  cmp    $0x1,%al
081dc8a4 +0x74:  je     081dc8db <+0xab>
081dc8a6 +0x76:  mov    -0xc(%ebp),%eax
081dc8a9 +0x79:  mov    %eax,(%esp)
081dc8ac +0x7c:  call   0822d90e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2fb8>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2fb8
081dc8b1 +0x81:  mov    %eax,(%esp)
081dc8b4 +0x84:  call   085bc044 <_ZN14CPartyTelePort19reset_teleport_dataEv>  ; CPartyTelePort::reset_teleport_data()
081dc8b9 +0x89:  jmp    081dc8db <+0xab>
081dc8bb +0x8b:  mov    -0x10(%ebp),%eax
081dc8be +0x8e:  mov    0x4(%eax),%eax
081dc8c1 +0x91:  movzbl %al,%eax
081dc8c4 +0x94:  mov    %eax,0x8(%esp)
081dc8c8 +0x98:  movl   $0x1b4,0x4(%esp)
081dc8d0 +0xa0:  mov    0xc(%ebp),%eax
081dc8d3 +0xa3:  mov    %eax,(%esp)
081dc8d6 +0xa6:  call   0867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>  ; CUser::SendCmdErrorPacket(ENUM_CMDPACKET, unsigned char)
081dc8db +0xab:  leave
081dc8dc +0xac:  ret
081dc8dd +0xad:  nop
```

## 反编译 C

```c
// Dispatcher_PartyTeleportConfirm::send @ 0x81dc830

/* Dispatcher_PartyTeleportConfirm::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_PartyTeleportConfirm::send
          (Dispatcher_PartyTeleportConfirm *this,CUser *param_1,ParamBase *param_2)

{
  CParty *this_00;
  CPartyTelePort *pCVar1;
  
  if (*(int *)(param_2 + 4) == 0) {
    CUser::SendCmdOkPacket(param_1,0x1b4);
    this_00 = (CParty *)CUser::GetParty(param_1);
    if (this_00 != (CParty *)0x0) {
      pCVar1 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
      CPartyTelePort::send_teleport_status(pCVar1,'\0');
      pCVar1 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
      CPartyTelePort::process_teleport(pCVar1);
      if (param_2[8] != (ParamBase)0x1) {
        pCVar1 = (CPartyTelePort *)CParty::GetPartyTelePort(this_00);
        CPartyTelePort::reset_teleport_data(pCVar1);
      }
    }
  }
  else {
    CUser::SendCmdErrorPacket(param_1,0x1b4,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}
```
