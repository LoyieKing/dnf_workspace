# process

`_ZN28Dispatcher_GuildCargoPopItem7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GuildCargoPopItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoPopItem` | `0x081d15b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d15b2  _ZN28Dispatcher_GuildCargoPopItem7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GuildCargoPopItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d15b2, 0x081d1747]
081d15b2 +0x000:  push   %ebp
081d15b3 +0x001:  mov    %esp,%ebp
081d15b5 +0x003:  push   %edi
081d15b6 +0x004:  push   %esi
081d15b7 +0x005:  push   %ebx
081d15b8 +0x006:  sub    $0x5c,%esp
081d15bb +0x009:  mov    0x14(%ebp),%eax
081d15be +0x00c:  mov    %eax,-0x24(%ebp)
081d15c1 +0x00f:  mov    0x14(%ebp),%eax
081d15c4 +0x012:  mov    %eax,0xc(%esp)
081d15c8 +0x016:  mov    0x10(%ebp),%eax
081d15cb +0x019:  mov    %eax,0x8(%esp)
081d15cf +0x01d:  mov    0xc(%ebp),%eax
081d15d2 +0x020:  mov    %eax,0x4(%esp)
081d15d6 +0x024:  mov    0x8(%ebp),%eax
081d15d9 +0x027:  mov    %eax,(%esp)
081d15dc +0x02a:  call   081d14aa <_ZN28Dispatcher_GuildCargoPopItem11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_GuildCargoPopItem::check_error(CUser*, MSG_BASE&, ParamBase&)
081d15e1 +0x02f:  mov    %eax,%edx
081d15e3 +0x031:  mov    -0x24(%ebp),%eax
081d15e6 +0x034:  mov    %edx,0x4(%eax)
081d15e9 +0x037:  mov    -0x24(%ebp),%eax
081d15ec +0x03a:  mov    0x4(%eax),%eax
081d15ef +0x03d:  test   %eax,%eax
081d15f1 +0x03f:  jle    081d15fd <+0x4b>
081d15f3 +0x041:  mov    $0x0,%eax
081d15f8 +0x046:  jmp    081d173f <+0x18d>
081d15fd +0x04b:  mov    -0x24(%ebp),%eax
081d1600 +0x04e:  mov    0x4(%eax),%eax
081d1603 +0x051:  test   %eax,%eax
081d1605 +0x053:  jns    081d1632 <+0x80>
081d1607 +0x055:  mov    -0x24(%ebp),%eax
081d160a +0x058:  mov    0x4(%eax),%eax
081d160d +0x05b:  movl   $0x0,0xc(%esp)
081d1615 +0x063:  mov    %eax,0x8(%esp)
081d1619 +0x067:  movl   $&_ZZN28Dispatcher_GuildCargoPopItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d1621 +0x06f:  movl   $0x2d8f,(%esp)
081d1628 +0x076:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d162d +0x07b:  jmp    081d173f <+0x18d>
081d1632 +0x080:  mov    0x10(%ebp),%eax
081d1635 +0x083:  mov    %eax,-0x20(%ebp)
081d1638 +0x086:  mov    -0x20(%ebp),%eax
081d163b +0x089:  mov    0xf(%eax),%ebx
081d163e +0x08c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d1643 +0x091:  mov    %ebx,0x4(%esp)
081d1647 +0x095:  mov    %eax,(%esp)
081d164a +0x098:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d164f +0x09d:  mov    %eax,-0x1c(%ebp)
081d1652 +0x0a0:  lea    -0x47(%ebp),%eax
081d1655 +0x0a3:  mov    %eax,(%esp)
081d1658 +0x0a6:  call   0822bf38 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x15e2>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x15e2
081d165d +0x0ab:  mov    0xc(%ebp),%eax
081d1660 +0x0ae:  mov    %eax,(%esp)
081d1663 +0x0b1:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d1668 +0x0b6:  mov    %eax,-0x3d(%ebp)
081d166b +0x0b9:  mov    0xc(%ebp),%eax
081d166e +0x0bc:  mov    %eax,(%esp)
081d1671 +0x0bf:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d1676 +0x0c4:  mov    %eax,-0x39(%ebp)
081d1679 +0x0c7:  mov    -0x20(%ebp),%eax
081d167c +0x0ca:  movzwl 0xd(%eax),%eax
081d1680 +0x0ce:  movzwl %ax,%eax
081d1683 +0x0d1:  mov    %eax,-0x35(%ebp)
081d1686 +0x0d4:  mov    -0x20(%ebp),%eax
081d1689 +0x0d7:  mov    0xf(%eax),%eax
081d168c +0x0da:  mov    %eax,-0x31(%ebp)
081d168f +0x0dd:  mov    -0x20(%ebp),%eax
081d1692 +0x0e0:  mov    0x13(%eax),%eax
081d1695 +0x0e3:  mov    %eax,-0x2d(%ebp)
081d1698 +0x0e6:  mov    -0x1c(%ebp),%eax
081d169b +0x0e9:  mov    %eax,(%esp)
081d169e +0x0ec:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081d16a3 +0x0f1:  test   %al,%al
081d16a5 +0x0f3:  je     081d16ae <+0xfc>
081d16a7 +0x0f5:  mov    $0x1,%eax
081d16ac +0x0fa:  jmp    081d16b3 <+0x101>
081d16ae +0x0fc:  mov    $0x0,%eax
081d16b3 +0x101:  mov    %al,-0x29(%ebp)
081d16b6 +0x104:  mov    -0x20(%ebp),%eax
081d16b9 +0x107:  movzbl 0x17(%eax),%eax
081d16bd +0x10b:  movzbl %al,%eax
081d16c0 +0x10e:  mov    %eax,-0x28(%ebp)
081d16c3 +0x111:  movzwl -0x45(%ebp),%eax
081d16c7 +0x115:  movzwl %ax,%esi
081d16ca +0x118:  lea    -0x47(%ebp),%ebx
081d16cd +0x11b:  mov    0xc(%ebp),%eax
081d16d0 +0x11e:  mov    %eax,(%esp)
081d16d3 +0x121:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d16d8 +0x126:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081d16de +0x12c:  mov    %eax,0x4(%esp)
081d16e2 +0x130:  mov    %edx,(%esp)
081d16e5 +0x133:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081d16ea +0x138:  mov    %esi,0x8(%esp)
081d16ee +0x13c:  mov    %ebx,0x4(%esp)
081d16f2 +0x140:  mov    %eax,(%esp)
081d16f5 +0x143:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
081d16fa +0x148:  mov    -0x28(%ebp),%esi
081d16fd +0x14b:  movzbl -0x29(%ebp),%eax
081d1701 +0x14f:  movzbl %al,%ebx
081d1704 +0x152:  mov    -0x2d(%ebp),%ecx
081d1707 +0x155:  mov    -0x31(%ebp),%edx
081d170a +0x158:  mov    -0x35(%ebp),%eax
081d170d +0x15b:  mov    0xc(%ebp),%edi
081d1710 +0x15e:  add    $0x79700,%edi
081d1716 +0x164:  mov    %esi,0x18(%esp)
081d171a +0x168:  mov    %ebx,0x14(%esp)
081d171e +0x16c:  mov    %ecx,0x10(%esp)
081d1722 +0x170:  mov    %edx,0xc(%esp)
081d1726 +0x174:  mov    %eax,0x8(%esp)
081d172a +0x178:  movl   $0xa,0x4(%esp)
081d1732 +0x180:  mov    %edi,(%esp)
081d1735 +0x183:  call   086866ea <_ZN15cUserHistoryLog17GuildCargoPopItemE31ENUM_GUILD_CARGO_HISTORY_REASONiiiii>  ; cUserHistoryLog::GuildCargoPopItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int)
081d173a +0x188:  mov    $0x0,%eax
081d173f +0x18d:  add    $0x5c,%esp
081d1742 +0x190:  pop    %ebx
081d1743 +0x191:  pop    %esi
081d1744 +0x192:  pop    %edi
081d1745 +0x193:  pop    %ebp
081d1746 +0x194:  ret
081d1747 +0x195:  nop
```

## 反编译 C

```c
// Dispatcher_GuildCargoPopItem::process @ 0x81d15b2

/* Dispatcher_GuildCargoPopItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GuildCargoPopItem::process
          (Dispatcher_GuildCargoPopItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  CDataManager *this_00;
  CGuildServerProxy *this_01;
  Packet_Guild_Guild_Cargo_Pop_Item local_4b [2];
  ushort local_49;
  undefined4 local_41;
  undefined4 local_3d;
  uint local_39;
  undefined4 local_35;
  undefined4 local_31;
  undefined1 local_2d;
  uint local_2c;
  ParamBase *local_28;
  MSG_BASE *local_24;
  CItem *local_20;
  
  local_28 = param_3;
  uVar3 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_28 + 4) = uVar3;
  if (*(int *)(local_28 + 4) < 1) {
    if (*(int *)(local_28 + 4) < 0) {
      uVar3 = LineFunc(0x2d8f,
                       "virtual int Dispatcher_GuildCargoPopItem::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_28 + 4),0);
    }
    else {
      local_24 = param_2;
      iVar1 = *(int *)(param_2 + 0xf);
      this_00 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(this_00,iVar1);
      Packet_Guild_Guild_Cargo_Pop_Item::Packet_Guild_Guild_Cargo_Pop_Item(local_4b);
      local_41 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      local_3d = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_39 = (uint)*(ushort *)(local_24 + 0xd);
      local_35 = *(undefined4 *)(local_24 + 0xf);
      local_31 = *(undefined4 *)(local_24 + 0x13);
      cVar2 = CItem::is_stackable(local_20);
      local_2d = cVar2 != '\0';
      local_2c = (uint)(byte)local_24[0x17];
      uVar3 = CUser::GetServerGroup(param_1);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar3);
      CGuildServerProxy::SendTcpPacket(this_01,(char *)local_4b,(uint)local_49);
      cUserHistoryLog::GuildCargoPopItem
                ((cUserHistoryLog *)(param_1 + 0x79700),10,local_39,local_35,local_31,local_2d,
                 local_2c);
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
