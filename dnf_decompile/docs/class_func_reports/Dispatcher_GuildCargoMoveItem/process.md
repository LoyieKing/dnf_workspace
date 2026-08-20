# process

`_ZN29Dispatcher_GuildCargoMoveItem7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GuildCargoMoveItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoMoveItem` | `0x081d1954` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d1954  _ZN29Dispatcher_GuildCargoMoveItem7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GuildCargoMoveItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d1954, 0x081d1a95]
081d1954 +0x000:  push   %ebp
081d1955 +0x001:  mov    %esp,%ebp
081d1957 +0x003:  push   %esi
081d1958 +0x004:  push   %ebx
081d1959 +0x005:  sub    $0x40,%esp
081d195c +0x008:  mov    0x14(%ebp),%eax
081d195f +0x00b:  mov    %eax,-0x10(%ebp)
081d1962 +0x00e:  mov    0x14(%ebp),%eax
081d1965 +0x011:  mov    %eax,0xc(%esp)
081d1969 +0x015:  mov    0x10(%ebp),%eax
081d196c +0x018:  mov    %eax,0x8(%esp)
081d1970 +0x01c:  mov    0xc(%ebp),%eax
081d1973 +0x01f:  mov    %eax,0x4(%esp)
081d1977 +0x023:  mov    0x8(%ebp),%eax
081d197a +0x026:  mov    %eax,(%esp)
081d197d +0x029:  call   081d18dc <_ZN29Dispatcher_GuildCargoMoveItem11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_GuildCargoMoveItem::check_error(CUser*, MSG_BASE&, ParamBase&)
081d1982 +0x02e:  mov    %eax,%edx
081d1984 +0x030:  mov    -0x10(%ebp),%eax
081d1987 +0x033:  mov    %edx,0x4(%eax)
081d198a +0x036:  mov    -0x10(%ebp),%eax
081d198d +0x039:  mov    0x4(%eax),%eax
081d1990 +0x03c:  test   %eax,%eax
081d1992 +0x03e:  jle    081d199e <+0x4a>
081d1994 +0x040:  mov    $0x0,%eax
081d1999 +0x045:  jmp    081d1a8f <+0x13b>
081d199e +0x04a:  mov    -0x10(%ebp),%eax
081d19a1 +0x04d:  mov    0x4(%eax),%eax
081d19a4 +0x050:  test   %eax,%eax
081d19a6 +0x052:  jns    081d19d3 <+0x7f>
081d19a8 +0x054:  mov    -0x10(%ebp),%eax
081d19ab +0x057:  mov    0x4(%eax),%eax
081d19ae +0x05a:  movl   $0x0,0xc(%esp)
081d19b6 +0x062:  mov    %eax,0x8(%esp)
081d19ba +0x066:  movl   $&_ZZN29Dispatcher_GuildCargoMoveItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d19c2 +0x06e:  movl   $0x2dff,(%esp)
081d19c9 +0x075:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d19ce +0x07a:  jmp    081d1a8f <+0x13b>
081d19d3 +0x07f:  mov    0x10(%ebp),%eax
081d19d6 +0x082:  mov    %eax,-0xc(%ebp)
081d19d9 +0x085:  lea    -0x32(%ebp),%eax
081d19dc +0x088:  mov    %eax,(%esp)
081d19df +0x08b:  call   0822bf9e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x1648>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x1648
081d19e4 +0x090:  mov    0xc(%ebp),%eax
081d19e7 +0x093:  mov    %eax,(%esp)
081d19ea +0x096:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d19ef +0x09b:  mov    %eax,-0x28(%ebp)
081d19f2 +0x09e:  mov    0xc(%ebp),%eax
081d19f5 +0x0a1:  mov    %eax,(%esp)
081d19f8 +0x0a4:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d19fd +0x0a9:  mov    %eax,-0x24(%ebp)
081d1a00 +0x0ac:  mov    -0xc(%ebp),%eax
081d1a03 +0x0af:  movzwl 0xd(%eax),%eax
081d1a07 +0x0b3:  movzwl %ax,%eax
081d1a0a +0x0b6:  mov    %eax,-0x20(%ebp)
081d1a0d +0x0b9:  mov    -0xc(%ebp),%eax
081d1a10 +0x0bc:  movzwl 0xf(%eax),%eax
081d1a14 +0x0c0:  movzwl %ax,%eax
081d1a17 +0x0c3:  mov    %eax,-0x1c(%ebp)
081d1a1a +0x0c6:  mov    -0xc(%ebp),%eax
081d1a1d +0x0c9:  mov    0x11(%eax),%eax
081d1a20 +0x0cc:  mov    %eax,-0x18(%ebp)
081d1a23 +0x0cf:  mov    -0xc(%ebp),%eax
081d1a26 +0x0d2:  mov    0x15(%eax),%eax
081d1a29 +0x0d5:  mov    %eax,-0x14(%ebp)
081d1a2c +0x0d8:  movzwl -0x30(%ebp),%eax
081d1a30 +0x0dc:  movzwl %ax,%esi
081d1a33 +0x0df:  lea    -0x32(%ebp),%ebx
081d1a36 +0x0e2:  mov    0xc(%ebp),%eax
081d1a39 +0x0e5:  mov    %eax,(%esp)
081d1a3c +0x0e8:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d1a41 +0x0ed:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081d1a47 +0x0f3:  mov    %eax,0x4(%esp)
081d1a4b +0x0f7:  mov    %edx,(%esp)
081d1a4e +0x0fa:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081d1a53 +0x0ff:  mov    %esi,0x8(%esp)
081d1a57 +0x103:  mov    %ebx,0x4(%esp)
081d1a5b +0x107:  mov    %eax,(%esp)
081d1a5e +0x10a:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
081d1a63 +0x10f:  mov    -0x1c(%ebp),%edx
081d1a66 +0x112:  mov    -0x20(%ebp),%eax
081d1a69 +0x115:  mov    0xc(%ebp),%ecx
081d1a6c +0x118:  add    $0x79700,%ecx
081d1a72 +0x11e:  mov    %edx,0xc(%esp)
081d1a76 +0x122:  mov    %eax,0x8(%esp)
081d1a7a +0x126:  movl   $0xd,0x4(%esp)
081d1a82 +0x12e:  mov    %ecx,(%esp)
081d1a85 +0x131:  call   086867ce <_ZN15cUserHistoryLog18GuildCargoMoveItemE31ENUM_GUILD_CARGO_HISTORY_REASONii>  ; cUserHistoryLog::GuildCargoMoveItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int)
081d1a8a +0x136:  mov    $0x0,%eax
081d1a8f +0x13b:  add    $0x40,%esp
081d1a92 +0x13e:  pop    %ebx
081d1a93 +0x13f:  pop    %esi
081d1a94 +0x140:  pop    %ebp
081d1a95 +0x141:  ret
```

## 反编译 C

```c
// Dispatcher_GuildCargoMoveItem::process @ 0x81d1954

/* Dispatcher_GuildCargoMoveItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GuildCargoMoveItem::process
          (Dispatcher_GuildCargoMoveItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  CGuildServerProxy *this_00;
  Packet_Guild_Guild_Cargo_Move_Item local_36 [2];
  ushort local_34;
  undefined4 local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  ParamBase *local_14;
  MSG_BASE *local_10;
  
  local_14 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_14 + 4) = uVar1;
  if (*(int *)(local_14 + 4) < 1) {
    if (*(int *)(local_14 + 4) < 0) {
      uVar1 = LineFunc(0x2dff,
                       "virtual int Dispatcher_GuildCargoMoveItem::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_14 + 4),0);
    }
    else {
      local_10 = param_2;
      Packet_Guild_Guild_Cargo_Move_Item::Packet_Guild_Guild_Cargo_Move_Item(local_36);
      local_2c = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      local_28 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_24 = (uint)*(ushort *)(local_10 + 0xd);
      local_20 = (uint)*(ushort *)(local_10 + 0xf);
      local_1c = *(undefined4 *)(local_10 + 0x11);
      local_18 = *(undefined4 *)(local_10 + 0x15);
      uVar1 = CUser::GetServerGroup(param_1);
      this_00 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar1);
      CGuildServerProxy::SendTcpPacket(this_00,(char *)local_36,(uint)local_34);
      cUserHistoryLog::GuildCargoMoveItem
                ((cUserHistoryLog *)(param_1 + 0x79700),0xd,local_24,local_20);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}
```
