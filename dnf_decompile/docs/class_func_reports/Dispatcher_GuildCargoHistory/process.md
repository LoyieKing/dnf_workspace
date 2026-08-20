# process

`_ZN28Dispatcher_GuildCargoHistory7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GuildCargoHistory::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoHistory` | `0x081d0cb4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d0cb4  _ZN28Dispatcher_GuildCargoHistory7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GuildCargoHistory::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d0cb4, 0x081d0dc5]
081d0cb4 +0x000:  push   %ebp
081d0cb5 +0x001:  mov    %esp,%ebp
081d0cb7 +0x003:  push   %esi
081d0cb8 +0x004:  push   %ebx
081d0cb9 +0x005:  sub    $0x30,%esp
081d0cbc +0x008:  mov    0x14(%ebp),%eax
081d0cbf +0x00b:  mov    %eax,-0xc(%ebp)
081d0cc2 +0x00e:  mov    0x14(%ebp),%eax
081d0cc5 +0x011:  mov    %eax,0xc(%esp)
081d0cc9 +0x015:  mov    0x10(%ebp),%eax
081d0ccc +0x018:  mov    %eax,0x8(%esp)
081d0cd0 +0x01c:  mov    0xc(%ebp),%eax
081d0cd3 +0x01f:  mov    %eax,0x4(%esp)
081d0cd7 +0x023:  mov    0x8(%ebp),%eax
081d0cda +0x026:  mov    %eax,(%esp)
081d0cdd +0x029:  call   081d0c3c <_ZN28Dispatcher_GuildCargoHistory11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_GuildCargoHistory::check_error(CUser*, MSG_BASE&, ParamBase&)
081d0ce2 +0x02e:  mov    %eax,%edx
081d0ce4 +0x030:  mov    -0xc(%ebp),%eax
081d0ce7 +0x033:  mov    %edx,0x4(%eax)
081d0cea +0x036:  mov    -0xc(%ebp),%eax
081d0ced +0x039:  mov    0x4(%eax),%eax
081d0cf0 +0x03c:  test   %eax,%eax
081d0cf2 +0x03e:  jle    081d0cfe <+0x4a>
081d0cf4 +0x040:  mov    $0x0,%eax
081d0cf9 +0x045:  jmp    081d0dbe <+0x10a>
081d0cfe +0x04a:  mov    -0xc(%ebp),%eax
081d0d01 +0x04d:  mov    0x4(%eax),%eax
081d0d04 +0x050:  test   %eax,%eax
081d0d06 +0x052:  jns    081d0d33 <+0x7f>
081d0d08 +0x054:  mov    -0xc(%ebp),%eax
081d0d0b +0x057:  mov    0x4(%eax),%eax
081d0d0e +0x05a:  movl   $0x0,0xc(%esp)
081d0d16 +0x062:  mov    %eax,0x8(%esp)
081d0d1a +0x066:  movl   $&_ZZN28Dispatcher_GuildCargoHistory7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d0d22 +0x06e:  movl   $0x2c6d,(%esp)
081d0d29 +0x075:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d0d2e +0x07a:  jmp    081d0dbe <+0x10a>
081d0d33 +0x07f:  lea    -0x1e(%ebp),%eax
081d0d36 +0x082:  mov    %eax,(%esp)
081d0d39 +0x085:  call   0822be8a <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1534>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1534
081d0d3e +0x08a:  mov    0xc(%ebp),%eax
081d0d41 +0x08d:  mov    %eax,(%esp)
081d0d44 +0x090:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d0d49 +0x095:  mov    %eax,-0x14(%ebp)
081d0d4c +0x098:  mov    0xc(%ebp),%eax
081d0d4f +0x09b:  mov    %eax,(%esp)
081d0d52 +0x09e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d0d57 +0x0a3:  mov    %eax,-0x10(%ebp)
081d0d5a +0x0a6:  movzwl -0x1c(%ebp),%eax
081d0d5e +0x0aa:  movzwl %ax,%esi
081d0d61 +0x0ad:  lea    -0x1e(%ebp),%ebx
081d0d64 +0x0b0:  mov    0xc(%ebp),%eax
081d0d67 +0x0b3:  mov    %eax,(%esp)
081d0d6a +0x0b6:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d0d6f +0x0bb:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081d0d75 +0x0c1:  mov    %eax,0x4(%esp)
081d0d79 +0x0c5:  mov    %edx,(%esp)
081d0d7c +0x0c8:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081d0d81 +0x0cd:  mov    %esi,0x8(%esp)
081d0d85 +0x0d1:  mov    %ebx,0x4(%esp)
081d0d89 +0x0d5:  mov    %eax,(%esp)
081d0d8c +0x0d8:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
081d0d91 +0x0dd:  mov    0xc(%ebp),%eax
081d0d94 +0x0e0:  mov    %eax,(%esp)
081d0d97 +0x0e3:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d0d9c +0x0e8:  mov    0xc(%ebp),%edx
081d0d9f +0x0eb:  add    $0x79700,%edx
081d0da5 +0x0f1:  mov    %eax,0x8(%esp)
081d0da9 +0x0f5:  movl   $0x3,0x4(%esp)
081d0db1 +0x0fd:  mov    %edx,(%esp)
081d0db4 +0x100:  call   08686544 <_ZN15cUserHistoryLog17GuildCargoHistoryE31ENUM_GUILD_CARGO_HISTORY_REASONi>  ; cUserHistoryLog::GuildCargoHistory(ENUM_GUILD_CARGO_HISTORY_REASON, int)
081d0db9 +0x105:  mov    $0x0,%eax
081d0dbe +0x10a:  add    $0x30,%esp
081d0dc1 +0x10d:  pop    %ebx
081d0dc2 +0x10e:  pop    %esi
081d0dc3 +0x10f:  pop    %ebp
081d0dc4 +0x110:  ret
081d0dc5 +0x111:  nop
```

## 反编译 C

```c
// Dispatcher_GuildCargoHistory::process @ 0x81d0cb4

/* Dispatcher_GuildCargoHistory::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GuildCargoHistory::process
          (Dispatcher_GuildCargoHistory *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  CGuildServerProxy *this_00;
  Packet_Guild_Cargo_History_Request local_22 [2];
  ushort local_20;
  undefined4 local_18;
  undefined4 local_14;
  ParamBase *local_10;
  
  local_10 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_10 + 4) = uVar1;
  if (*(int *)(local_10 + 4) < 1) {
    if (*(int *)(local_10 + 4) < 0) {
      uVar1 = LineFunc(0x2c6d,
                       "virtual int Dispatcher_GuildCargoHistory::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_10 + 4),0);
    }
    else {
      Packet_Guild_Cargo_History_Request::Packet_Guild_Cargo_History_Request(local_22);
      local_18 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      local_14 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar1);
      CGuildServerProxy::SendTcpPacket(this_00,(char *)local_22,(uint)local_20);
      uVar1 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      cUserHistoryLog::GuildCargoHistory((cUserHistoryLog *)(param_1 + 0x79700),3,uVar1);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
