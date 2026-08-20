# _debugCommandPowerwarPointUp

`_ZN23DisPatcher_DebugCommand28_debugCommandPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND`

`DisPatcher_DebugCommand::_debugCommandPowerwarPointUp(CUser*, MSG_DEBUG_COMMAND&)`

| 类 | 地址 |
|---|---|
| `DisPatcher_DebugCommand` | `0x0858fe62` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0858fe62  _ZN23DisPatcher_DebugCommand28_debugCommandPowerwarPointUpEP5CUserR17MSG_DEBUG_COMMAND
#           DisPatcher_DebugCommand::_debugCommandPowerwarPointUp(CUser*, MSG_DEBUG_COMMAND&)
# range [0x0858fe62, 0x0858fee7]
0858fe62 +0x00:  push   %ebp
0858fe63 +0x01:  mov    %esp,%ebp
0858fe65 +0x03:  sub    $0x48,%esp
0858fe68 +0x06:  mov    0xc(%ebp),%eax
0858fe6b +0x09:  mov    %eax,(%esp)
0858fe6e +0x0c:  call   0814589c <_GLOBAL__I__ZN8WongWork10CBossTowerC2Ev+0x31f>  ; global constructors keyed to WongWork::CBossTower::CBossTower()+0x31f
0858fe73 +0x11:  xor    $0x1,%eax
0858fe76 +0x14:  test   %al,%al
0858fe78 +0x16:  je     0858fe81 <+0x1f>
0858fe7a +0x18:  mov    $0x0,%eax
0858fe7f +0x1d:  jmp    0858fee6 <+0x84>
0858fe81 +0x1f:  lea    -0x35(%ebp),%eax
0858fe84 +0x22:  mov    %eax,(%esp)
0858fe87 +0x25:  call   082f070c <_GLOBAL__I__ZN11pvp_assault18GetDirectionByTeamE17ENUM_ASSAULT_TEAM+0x490>  ; global constructors keyed to pvp_assault::GetDirectionByTeam(ENUM_ASSAULT_TEAM)+0x490
0858fe8c +0x2a:  mov    0x10(%ebp),%eax
0858fe8f +0x2d:  mov    0xe(%eax),%eax
0858fe92 +0x30:  mov    %al,-0xa(%ebp)
0858fe95 +0x33:  movb   $0x0,-0x9(%ebp)
0858fe99 +0x37:  mov    0xc(%ebp),%eax
0858fe9c +0x3a:  mov    %eax,(%esp)
0858fe9f +0x3d:  call   0822fcc6 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5370>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5370
0858fea4 +0x42:  mov    %al,-0x2b(%ebp)
0858fea7 +0x45:  movl   $0xffffffff,0x4(%esp)
0858feaf +0x4d:  mov    0xc(%ebp),%eax
0858feb2 +0x50:  mov    %eax,(%esp)
0858feb5 +0x53:  call   0864dfa0 <_ZN5CUser13get_charac_noEi>  ; CUser::get_charac_no(int)
0858feba +0x58:  mov    %eax,-0x2a(%ebp)
0858febd +0x5b:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%eax
0858fec2 +0x60:  movl   $0x0,0x4(%esp)
0858feca +0x68:  mov    %eax,(%esp)
0858fecd +0x6b:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
0858fed2 +0x70:  lea    -0x35(%ebp),%edx
0858fed5 +0x73:  mov    %edx,0x4(%esp)
0858fed9 +0x77:  mov    %eax,(%esp)
0858fedc +0x7a:  call   0846e460 <_ZN17CGuildServerProxy17SendPowerWarPointER35Packet_Guild_Change_Power_War_Point>  ; CGuildServerProxy::SendPowerWarPoint(Packet_Guild_Change_Power_War_Point&)
0858fee1 +0x7f:  mov    $0x1,%eax
0858fee6 +0x84:  leave
0858fee7 +0x85:  ret
```

## 反编译 C

```c
// DisPatcher_DebugCommand::_debugCommandPowerwarPointUp @ 0x858fe62

/* DisPatcher_DebugCommand::_debugCommandPowerwarPointUp(CUser*, MSG_DEBUG_COMMAND&) */

bool __thiscall
DisPatcher_DebugCommand::_debugCommandPowerwarPointUp
          (DisPatcher_DebugCommand *this,CUser *param_1,MSG_DEBUG_COMMAND *param_2)

{
  char cVar1;
  CGuildServerProxy *this_00;
  Packet_Guild_Change_Power_War_Point local_39 [10];
  undefined1 local_2f;
  undefined4 local_2e;
  undefined1 local_e;
  undefined1 local_d;
  
  cVar1 = CUser::isGMUser(param_1);
  if (cVar1 == '\x01') {
    Packet_Guild_Change_Power_War_Point::Packet_Guild_Change_Power_War_Point(local_39);
    local_e = (undefined1)*(undefined4 *)(param_2 + 0xe);
    local_d = 0;
    local_2f = CUser::getPowerSide(param_1);
    local_2e = CUser::get_charac_no(param_1,-1);
    this_00 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy(GlobalData::s_guild_proxy_mgr,0);
    CGuildServerProxy::SendPowerWarPoint(this_00,local_39);
  }
  return cVar1 == '\x01';
}
```
