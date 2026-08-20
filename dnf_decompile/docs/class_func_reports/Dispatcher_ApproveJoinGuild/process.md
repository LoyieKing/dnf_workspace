# process

`_ZN27Dispatcher_ApproveJoinGuild7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_ApproveJoinGuild::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_ApproveJoinGuild` | `0x081d50b4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d50b4  _ZN27Dispatcher_ApproveJoinGuild7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_ApproveJoinGuild::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d50b4, 0x081d518f]
081d50b4 +0x00:  push   %ebp
081d50b5 +0x01:  mov    %esp,%ebp
081d50b7 +0x03:  push   %esi
081d50b8 +0x04:  push   %ebx
081d50b9 +0x05:  sub    $0x30,%esp
081d50bc +0x08:  mov    0x10(%ebp),%eax
081d50bf +0x0b:  mov    %eax,-0xc(%ebp)
081d50c2 +0x0e:  mov    0xc(%ebp),%eax
081d50c5 +0x11:  mov    %eax,(%esp)
081d50c8 +0x14:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
081d50cd +0x19:  cmp    $0x3,%eax
081d50d0 +0x1c:  setne  %al
081d50d3 +0x1f:  test   %al,%al
081d50d5 +0x21:  je     081d50e1 <+0x2d>
081d50d7 +0x23:  mov    $0x0,%eax
081d50dc +0x28:  jmp    081d5188 <+0xd4>
081d50e1 +0x2d:  mov    0xc(%ebp),%eax
081d50e4 +0x30:  mov    %eax,(%esp)
081d50e7 +0x33:  call   08230172 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x581c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x581c
081d50ec +0x38:  xor    $0x1,%eax
081d50ef +0x3b:  test   %al,%al
081d50f1 +0x3d:  je     081d510c <+0x58>
081d50f3 +0x3f:  mov    0xc(%ebp),%eax
081d50f6 +0x42:  mov    %eax,(%esp)
081d50f9 +0x45:  call   0866c414 <_ZN5CUser16IsSubGuildMasterEv>  ; CUser::IsSubGuildMaster()
081d50fe +0x4a:  xor    $0x1,%eax
081d5101 +0x4d:  test   %al,%al
081d5103 +0x4f:  je     081d510c <+0x58>
081d5105 +0x51:  mov    $0x1,%eax
081d510a +0x56:  jmp    081d5111 <+0x5d>
081d510c +0x58:  mov    $0x0,%eax
081d5111 +0x5d:  test   %al,%al
081d5113 +0x5f:  je     081d511c <+0x68>
081d5115 +0x61:  mov    $0x0,%eax
081d511a +0x66:  jmp    081d5188 <+0xd4>
081d511c +0x68:  lea    -0x22(%ebp),%eax
081d511f +0x6b:  mov    %eax,(%esp)
081d5122 +0x6e:  call   0822c342 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x19ec>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x19ec
081d5127 +0x73:  mov    0xc(%ebp),%eax
081d512a +0x76:  mov    %eax,(%esp)
081d512d +0x79:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d5132 +0x7e:  mov    %eax,-0x18(%ebp)
081d5135 +0x81:  mov    0xc(%ebp),%eax
081d5138 +0x84:  mov    %eax,(%esp)
081d513b +0x87:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d5140 +0x8c:  mov    %eax,-0x14(%ebp)
081d5143 +0x8f:  mov    -0xc(%ebp),%eax
081d5146 +0x92:  mov    0xd(%eax),%eax
081d5149 +0x95:  mov    %eax,-0x10(%ebp)
081d514c +0x98:  movzwl -0x20(%ebp),%eax
081d5150 +0x9c:  movzwl %ax,%esi
081d5153 +0x9f:  lea    -0x22(%ebp),%ebx
081d5156 +0xa2:  mov    0xc(%ebp),%eax
081d5159 +0xa5:  mov    %eax,(%esp)
081d515c +0xa8:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d5161 +0xad:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081d5167 +0xb3:  mov    %eax,0x4(%esp)
081d516b +0xb7:  mov    %edx,(%esp)
081d516e +0xba:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081d5173 +0xbf:  mov    %esi,0x8(%esp)
081d5177 +0xc3:  mov    %ebx,0x4(%esp)
081d517b +0xc7:  mov    %eax,(%esp)
081d517e +0xca:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
081d5183 +0xcf:  mov    $0x0,%eax
081d5188 +0xd4:  add    $0x30,%esp
081d518b +0xd7:  pop    %ebx
081d518c +0xd8:  pop    %esi
081d518d +0xd9:  pop    %ebp
081d518e +0xda:  ret
081d518f +0xdb:  nop
```

## 反编译 C

```c
// Dispatcher_ApproveJoinGuild::process @ 0x81d50b4

/* Dispatcher_ApproveJoinGuild::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 Dispatcher_ApproveJoinGuild::process(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CGuildServerProxy *this;
  Packet_Approve_Join_Guild local_26 [2];
  ushort local_24;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ParamBase *local_10;
  
  local_10 = param_3;
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 == 3) {
    cVar2 = CUser::IsGuildMaster((CUser *)param_2);
    if ((cVar2 == '\x01') || (cVar2 = CUser::IsSubGuildMaster((CUser *)param_2), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) {
      Packet_Approve_Join_Guild::Packet_Approve_Join_Guild(local_26);
      local_1c = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_2);
      local_18 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      local_14 = *(undefined4 *)(local_10 + 0xd);
      uVar4 = CUser::GetServerGroup((CUser *)param_2);
      this = (CGuildServerProxy *)
             CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,uVar4)
      ;
      CGuildServerProxy::SendTcpPacket(this,(char *)local_26,(uint)local_24);
    }
  }
  return 0;
}
```
