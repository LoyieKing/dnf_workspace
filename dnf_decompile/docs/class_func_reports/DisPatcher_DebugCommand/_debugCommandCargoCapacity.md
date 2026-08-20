# _debugCommandCargoCapacity

`_ZN23DisPatcher_DebugCommand26_debugCommandCargoCapacityEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandCargoCapacity(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858fdc8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858fdc8  _ZN23DisPatcher_DebugCommand26_debugCommandCargoCapacityEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandCargoCapacity(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0858fdc8, 0x0858fe61]
0858fdc8 +0x00:  push   %ebp
0858fdc9 +0x01:  mov    %esp,%ebp
0858fdcb +0x03:  push   %esi
0858fdcc +0x04:  push   %ebx
0858fdcd +0x05:  sub    $0x30,%esp
0858fdd0 +0x08:  mov    0xc(%ebp),%eax
0858fdd3 +0x0b:  mov    %eax,(%esp)
0858fdd6 +0x0e:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858fddb +0x13:  xor    $0x1,%eax
0858fdde +0x16:  test   %al,%al
0858fde0 +0x18:  je     0858fde9 <+0x21>
0858fde2 +0x1a:  mov    $0x0,%eax
0858fde7 +0x1f:  jmp    0858fe5b <+0x93>
0858fde9 +0x21:  lea    -0x26(%ebp),%eax
0858fdec +0x24:  mov    %eax,(%esp)
0858fdef +0x27:  call   0822bfea <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1694>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1694
0858fdf4 +0x2c:  mov    0xc(%ebp),%eax
0858fdf7 +0x2f:  mov    %eax,(%esp)
0858fdfa +0x32:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0858fdff +0x37:  mov    %eax,-0x1c(%ebp)
0858fe02 +0x3a:  mov    0xc(%ebp),%eax
0858fe05 +0x3d:  mov    %eax,(%esp)
0858fe08 +0x40:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0858fe0d +0x45:  mov    %eax,-0x18(%ebp)
0858fe10 +0x48:  mov    0xc(%ebp),%eax
0858fe13 +0x4b:  mov    %eax,(%esp)
0858fe16 +0x4e:  call   082301ec <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5896>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5896
0858fe1b +0x53:  mov    %eax,-0x14(%ebp)
0858fe1e +0x56:  mov    0x10(%ebp),%eax
0858fe21 +0x59:  mov    0xe(%eax),%eax
0858fe24 +0x5c:  mov    %eax,-0x10(%ebp)
0858fe27 +0x5f:  movzwl -0x24(%ebp),%eax
0858fe2b +0x63:  movzwl %ax,%esi
0858fe2e +0x66:  lea    -0x26(%ebp),%ebx
0858fe31 +0x69:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0858fe36 +0x6e:  movl   $0x0,0x4(%esp)
0858fe3e +0x76:  mov    %eax,(%esp)
0858fe41 +0x79:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0858fe46 +0x7e:  mov    %esi,0x8(%esp)
0858fe4a +0x82:  mov    %ebx,0x4(%esp)
0858fe4e +0x86:  mov    %eax,(%esp)
0858fe51 +0x89:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
0858fe56 +0x8e:  mov    $0x1,%eax
0858fe5b +0x93:  add    $0x30,%esp
0858fe5e +0x96:  pop    %ebx
0858fe5f +0x97:  pop    %esi
0858fe60 +0x98:  pop    %ebp
0858fe61 +0x99:  ret
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandCargoCapacity @ 0x858fdc8

/* DisPatcher_DebugCommand::_debugCommandCargoCapacity(CUser*, MSG_DEBUG_COMMAND&) */

bool __thiscall
DisPatcher_DebugCommand::_debugCommandCargoCapacity
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  CGuildServerProxy *this_00;
  Packet_Guild_Guild_Cargo_Upgrade local_2a [2];
  ushort local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    Packet_Guild_Guild_Cargo_Upgrade::Packet_Guild_Guild_Cargo_Upgrade(local_2a);
    local_20 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
    local_1c = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
    local_18 = CUser::GetGuildCargoCapacity(param_1);
    local_14 = *(undefined4 *)(param_2 + 0xe);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
    CGuildServerProxy::SendTcpPacket(this_00,(char *)local_2a,(uint)local_28);
  }
  return cVar1 == '\x01';
}
```
