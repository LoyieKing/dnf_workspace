# process

`_ZN21Dispatcher_GuildCargo7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GuildCargo::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargo` | `0x081d0ae2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d0ae2  _ZN21Dispatcher_GuildCargo7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GuildCargo::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d0ae2, 0x081d0bf9]
081d0ae2 +0x000:  push   %ebp
081d0ae3 +0x001:  mov    %esp,%ebp
081d0ae5 +0x003:  push   %esi
081d0ae6 +0x004:  push   %ebx
081d0ae7 +0x005:  sub    $0x30,%esp
081d0aea +0x008:  mov    0x14(%ebp),%eax
081d0aed +0x00b:  mov    %eax,-0xc(%ebp)
081d0af0 +0x00e:  mov    0x14(%ebp),%eax
081d0af3 +0x011:  mov    %eax,0xc(%esp)
081d0af7 +0x015:  mov    0x10(%ebp),%eax
081d0afa +0x018:  mov    %eax,0x8(%esp)
081d0afe +0x01c:  mov    0xc(%ebp),%eax
081d0b01 +0x01f:  mov    %eax,0x4(%esp)
081d0b05 +0x023:  mov    0x8(%ebp),%eax
081d0b08 +0x026:  mov    %eax,(%esp)
081d0b0b +0x029:  call   081d0a6a <_ZN21Dispatcher_GuildCargo11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_GuildCargo::check_error(CUser*, MSG_BASE&, ParamBase&)
081d0b10 +0x02e:  mov    %eax,%edx
081d0b12 +0x030:  mov    -0xc(%ebp),%eax
081d0b15 +0x033:  mov    %edx,0x4(%eax)
081d0b18 +0x036:  mov    -0xc(%ebp),%eax
081d0b1b +0x039:  mov    0x4(%eax),%eax
081d0b1e +0x03c:  test   %eax,%eax
081d0b20 +0x03e:  jle    081d0b2c <+0x4a>
081d0b22 +0x040:  mov    $0x0,%eax
081d0b27 +0x045:  jmp    081d0bf3 <+0x111>
081d0b2c +0x04a:  mov    -0xc(%ebp),%eax
081d0b2f +0x04d:  mov    0x4(%eax),%eax
081d0b32 +0x050:  test   %eax,%eax
081d0b34 +0x052:  jns    081d0b68 <+0x86>
081d0b36 +0x054:  mov    0xc(%ebp),%eax
081d0b39 +0x057:  mov    %eax,(%esp)
081d0b3c +0x05a:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
081d0b41 +0x05f:  mov    -0xc(%ebp),%edx
081d0b44 +0x062:  mov    0x4(%edx),%edx
081d0b47 +0x065:  mov    %eax,0xc(%esp)
081d0b4b +0x069:  mov    %edx,0x8(%esp)
081d0b4f +0x06d:  movl   $&_ZZN21Dispatcher_GuildCargo7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d0b57 +0x075:  movl   $0x2c26,(%esp)
081d0b5e +0x07c:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d0b63 +0x081:  jmp    081d0bf3 <+0x111>
081d0b68 +0x086:  lea    -0x1e(%ebp),%eax
081d0b6b +0x089:  mov    %eax,(%esp)
081d0b6e +0x08c:  call   0822be52 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x14fc>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x14fc
081d0b73 +0x091:  mov    0xc(%ebp),%eax
081d0b76 +0x094:  mov    %eax,(%esp)
081d0b79 +0x097:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d0b7e +0x09c:  mov    %eax,-0x14(%ebp)
081d0b81 +0x09f:  mov    0xc(%ebp),%eax
081d0b84 +0x0a2:  mov    %eax,(%esp)
081d0b87 +0x0a5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d0b8c +0x0aa:  mov    %eax,-0x10(%ebp)
081d0b8f +0x0ad:  movzwl -0x1c(%ebp),%eax
081d0b93 +0x0b1:  movzwl %ax,%esi
081d0b96 +0x0b4:  lea    -0x1e(%ebp),%ebx
081d0b99 +0x0b7:  mov    0xc(%ebp),%eax
081d0b9c +0x0ba:  mov    %eax,(%esp)
081d0b9f +0x0bd:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d0ba4 +0x0c2:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081d0baa +0x0c8:  mov    %eax,0x4(%esp)
081d0bae +0x0cc:  mov    %edx,(%esp)
081d0bb1 +0x0cf:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081d0bb6 +0x0d4:  mov    %esi,0x8(%esp)
081d0bba +0x0d8:  mov    %ebx,0x4(%esp)
081d0bbe +0x0dc:  mov    %eax,(%esp)
081d0bc1 +0x0df:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
081d0bc6 +0x0e4:  mov    0xc(%ebp),%eax
081d0bc9 +0x0e7:  mov    %eax,(%esp)
081d0bcc +0x0ea:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d0bd1 +0x0ef:  mov    0xc(%ebp),%edx
081d0bd4 +0x0f2:  add    $0x79700,%edx
081d0bda +0x0f8:  mov    %eax,0x8(%esp)
081d0bde +0x0fc:  movl   $0x0,0x4(%esp)
081d0be6 +0x104:  mov    %edx,(%esp)
081d0be9 +0x107:  call   086864e6 <_ZN15cUserHistoryLog10GuildCargoE31ENUM_GUILD_CARGO_HISTORY_REASONi>  ; cUserHistoryLog::GuildCargo(ENUM_GUILD_CARGO_HISTORY_REASON, int)
081d0bee +0x10c:  mov    $0x0,%eax
081d0bf3 +0x111:  add    $0x30,%esp
081d0bf6 +0x114:  pop    %ebx
081d0bf7 +0x115:  pop    %esi
081d0bf8 +0x116:  pop    %ebp
081d0bf9 +0x117:  ret
```

## 反编译 C

```c
// Dispatcher_GuildCargo::process @ 0x81d0ae2

/* Dispatcher_GuildCargo::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GuildCargo::process
          (Dispatcher_GuildCargo *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CGuildServerProxy *this_00;
  Packet_Guild_Cargo_Requst local_22 [2];
  ushort local_20;
  undefined4 local_18;
  undefined4 local_14;
  ParamBase *local_10;
  
  local_10 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_10 + 4) = uVar1;
  if (*(int *)(local_10 + 4) < 1) {
    if (*(int *)(local_10 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x2c26,
                       "virtual int Dispatcher_GuildCargo::process(CUser*, MSG_BASE&, ParamBase&)",
                       *(int *)(local_10 + 4),uVar2);
    }
    else {
      Packet_Guild_Cargo_Requst::Packet_Guild_Cargo_Requst(local_22);
      local_18 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      local_14 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar1);
      CGuildServerProxy::SendTcpPacket(this_00,(char *)local_22,(uint)local_20);
      uVar1 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      cUserHistoryLog::GuildCargo((cUserHistoryLog *)(param_1 + 0x79700),0,uVar1);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
