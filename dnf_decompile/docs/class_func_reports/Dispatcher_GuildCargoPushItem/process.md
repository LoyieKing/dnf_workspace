# process

`_ZN29Dispatcher_GuildCargoPushItem7processEP5CUserR8MSG_BASER9ParamBase`

`Dispatcher_GuildCargoPushItem::process(CUser*, MSG_BASE&, ParamBase&)`

| 类 | 地址 |
|---|---|
| `Dispatcher_GuildCargoPushItem` | `0x081d10d4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 081d10d4  _ZN29Dispatcher_GuildCargoPushItem7processEP5CUserR8MSG_BASER9ParamBase
#           Dispatcher_GuildCargoPushItem::process(CUser*, MSG_BASE&, ParamBase&)
# range [0x081d10d4, 0x081d1315]
081d10d4 +0x000:  push   %ebp
081d10d5 +0x001:  mov    %esp,%ebp
081d10d7 +0x003:  push   %edi
081d10d8 +0x004:  push   %esi
081d10d9 +0x005:  push   %ebx
081d10da +0x006:  sub    $0xcc,%esp
081d10e0 +0x00c:  mov    0x14(%ebp),%eax
081d10e3 +0x00f:  mov    %eax,-0x2c(%ebp)
081d10e6 +0x012:  mov    0x14(%ebp),%eax
081d10e9 +0x015:  mov    %eax,0xc(%esp)
081d10ed +0x019:  mov    0x10(%ebp),%eax
081d10f0 +0x01c:  mov    %eax,0x8(%esp)
081d10f4 +0x020:  mov    0xc(%ebp),%eax
081d10f7 +0x023:  mov    %eax,0x4(%esp)
081d10fb +0x027:  mov    0x8(%ebp),%eax
081d10fe +0x02a:  mov    %eax,(%esp)
081d1101 +0x02d:  call   081d0f64 <_ZN29Dispatcher_GuildCargoPushItem11check_errorEP5CUserR8MSG_BASER9ParamBase>  ; Dispatcher_GuildCargoPushItem::check_error(CUser*, MSG_BASE&, ParamBase&)
081d1106 +0x032:  mov    %eax,%edx
081d1108 +0x034:  mov    -0x2c(%ebp),%eax
081d110b +0x037:  mov    %edx,0x4(%eax)
081d110e +0x03a:  mov    -0x2c(%ebp),%eax
081d1111 +0x03d:  mov    0x4(%eax),%eax
081d1114 +0x040:  test   %eax,%eax
081d1116 +0x042:  jle    081d1122 <+0x4e>
081d1118 +0x044:  mov    $0x0,%eax
081d111d +0x049:  jmp    081d130a <+0x236>
081d1122 +0x04e:  mov    -0x2c(%ebp),%eax
081d1125 +0x051:  mov    0x4(%eax),%eax
081d1128 +0x054:  test   %eax,%eax
081d112a +0x056:  jns    081d1157 <+0x83>
081d112c +0x058:  mov    -0x2c(%ebp),%eax
081d112f +0x05b:  mov    0x4(%eax),%eax
081d1132 +0x05e:  movl   $0x0,0xc(%esp)
081d113a +0x066:  mov    %eax,0x8(%esp)
081d113e +0x06a:  movl   $&_ZZN29Dispatcher_GuildCargoPushItem7processEP5CUserR8MSG_BASER9ParamBaseE19__PRETTY_FUNCTION__,0x4(%esp)
081d1146 +0x072:  movl   $0x2cf0,(%esp)
081d114d +0x079:  call   085908d7 <_Z8LineFunciPKcij>  ; LineFunc(int, char const*, int, unsigned int)
081d1152 +0x07e:  jmp    081d130a <+0x236>
081d1157 +0x083:  mov    0x10(%ebp),%eax
081d115a +0x086:  mov    %eax,-0x28(%ebp)
081d115d +0x089:  mov    0xc(%ebp),%eax
081d1160 +0x08c:  mov    %eax,(%esp)
081d1163 +0x08f:  call   080da27e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x41b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x41b
081d1168 +0x094:  mov    %eax,-0x24(%ebp)
081d116b +0x097:  mov    -0x28(%ebp),%eax
081d116e +0x09a:  movzbl 0xd(%eax),%eax
081d1172 +0x09e:  movzbl %al,%eax
081d1175 +0x0a1:  mov    %eax,(%esp)
081d1178 +0x0a4:  call   080f7845 <_GLOBAL__I__ZN16GrowthEquipEventC2Ev+0x42>  ; global constructors keyed to GrowthEquipEvent::GrowthEquipEvent()+0x42
081d117d +0x0a9:  mov    %eax,-0x20(%ebp)
081d1180 +0x0ac:  mov    -0x28(%ebp),%eax
081d1183 +0x0af:  movzwl 0xe(%eax),%eax
081d1187 +0x0b3:  movzwl %ax,%ecx
081d118a +0x0b6:  mov    -0x20(%ebp),%edx
081d118d +0x0b9:  lea    -0x8f(%ebp),%eax
081d1193 +0x0bf:  mov    %ecx,0xc(%esp)
081d1197 +0x0c3:  mov    %edx,0x8(%esp)
081d119b +0x0c7:  mov    -0x24(%ebp),%edx
081d119e +0x0ca:  mov    %edx,0x4(%esp)
081d11a2 +0x0ce:  mov    %eax,(%esp)
081d11a5 +0x0d1:  call   084fb918 <_ZNK10CInventory12GetInvenSlotEii>  ; CInventory::GetInvenSlot(int, int) const
081d11aa +0x0d6:  sub    $0x4,%esp
081d11ad +0x0d9:  mov    -0x8d(%ebp),%eax
081d11b3 +0x0df:  mov    %eax,%ebx
081d11b5 +0x0e1:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
081d11ba +0x0e6:  mov    %ebx,0x4(%esp)
081d11be +0x0ea:  mov    %eax,(%esp)
081d11c1 +0x0ed:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
081d11c6 +0x0f2:  mov    %eax,-0x1c(%ebp)
081d11c9 +0x0f5:  lea    -0x52(%ebp),%eax
081d11cc +0x0f8:  mov    %eax,(%esp)
081d11cf +0x0fb:  call   0822bec2 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x156c>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x156c
081d11d4 +0x100:  mov    0xc(%ebp),%eax
081d11d7 +0x103:  mov    %eax,(%esp)
081d11da +0x106:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
081d11df +0x10b:  mov    %eax,-0x48(%ebp)
081d11e2 +0x10e:  mov    0xc(%ebp),%eax
081d11e5 +0x111:  mov    %eax,(%esp)
081d11e8 +0x114:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
081d11ed +0x119:  mov    %eax,-0x44(%ebp)
081d11f0 +0x11c:  mov    -0x28(%ebp),%eax
081d11f3 +0x11f:  mov    0x10(%eax),%eax
081d11f6 +0x122:  mov    %eax,-0x3c(%ebp)
081d11f9 +0x125:  mov    -0x28(%ebp),%eax
081d11fc +0x128:  movzwl 0x18(%eax),%eax
081d1200 +0x12c:  movzwl %ax,%eax
081d1203 +0x12f:  mov    %eax,-0x40(%ebp)
081d1206 +0x132:  mov    -0x28(%ebp),%eax
081d1209 +0x135:  mov    0x14(%eax),%eax
081d120c +0x138:  mov    %eax,-0x38(%ebp)
081d120f +0x13b:  mov    -0x28(%ebp),%eax
081d1212 +0x13e:  movzbl 0xd(%eax),%eax
081d1216 +0x142:  mov    %al,-0x2f(%ebp)
081d1219 +0x145:  mov    -0x28(%ebp),%eax
081d121c +0x148:  movzwl 0xe(%eax),%eax
081d1220 +0x14c:  mov    %ax,-0x2e(%ebp)
081d1224 +0x150:  mov    -0x1c(%ebp),%eax
081d1227 +0x153:  mov    %eax,(%esp)
081d122a +0x156:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081d122f +0x15b:  test   %al,%al
081d1231 +0x15d:  je     081d123a <+0x166>
081d1233 +0x15f:  mov    $0x1,%eax
081d1238 +0x164:  jmp    081d123f <+0x16b>
081d123a +0x166:  mov    $0x0,%eax
081d123f +0x16b:  mov    %al,-0x30(%ebp)
081d1242 +0x16e:  mov    -0x1c(%ebp),%eax
081d1245 +0x171:  mov    %eax,(%esp)
081d1248 +0x174:  call   080f12fa <_GLOBAL__I__ZN11eventReward13getSubKeyTypeERSs+0x37c>  ; global constructors keyed to eventReward::getSubKeyType(std::basic_string<char, std::char_traits<char>, std::allocator<char> >&)+0x37c
081d124d +0x179:  test   %al,%al
081d124f +0x17b:  je     081d1261 <+0x18d>
081d1251 +0x17d:  mov    -0x1c(%ebp),%eax
081d1254 +0x180:  mov    %eax,(%esp)
081d1257 +0x183:  call   0822c9fc <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x20a6>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x20a6
081d125c +0x188:  mov    %eax,-0x34(%ebp)
081d125f +0x18b:  jmp    081d1268 <+0x194>
081d1261 +0x18d:  movl   $0x1,-0x34(%ebp)
081d1268 +0x194:  movzwl -0x50(%ebp),%eax
081d126c +0x198:  movzwl %ax,%esi
081d126f +0x19b:  lea    -0x52(%ebp),%ebx
081d1272 +0x19e:  mov    0xc(%ebp),%eax
081d1275 +0x1a1:  mov    %eax,(%esp)
081d1278 +0x1a4:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
081d127d +0x1a9:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
081d1283 +0x1af:  mov    %eax,0x4(%esp)
081d1287 +0x1b3:  mov    %edx,(%esp)
081d128a +0x1b6:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
081d128f +0x1bb:  mov    %esi,0x8(%esp)
081d1293 +0x1bf:  mov    %ebx,0x4(%esp)
081d1297 +0x1c3:  mov    %eax,(%esp)
081d129a +0x1c6:  call   0846dcce <_ZN17CGuildServerProxy13SendTcpPacketEPci>  ; CGuildServerProxy::SendTcpPacket(char*, int)
081d129f +0x1cb:  movzbl -0x30(%ebp),%eax
081d12a3 +0x1cf:  movzbl %al,%eax
081d12a6 +0x1d2:  mov    %eax,-0x9c(%ebp)
081d12ac +0x1d8:  movzwl -0x2e(%ebp),%eax
081d12b0 +0x1dc:  movzwl %ax,%edi
081d12b3 +0x1df:  movzbl -0x2f(%ebp),%eax
081d12b7 +0x1e3:  movzbl %al,%esi
081d12ba +0x1e6:  mov    -0x38(%ebp),%ebx
081d12bd +0x1e9:  mov    -0x3c(%ebp),%ecx
081d12c0 +0x1ec:  mov    -0x40(%ebp),%edx
081d12c3 +0x1ef:  mov    0xc(%ebp),%eax
081d12c6 +0x1f2:  add    $0x79700,%eax
081d12cb +0x1f7:  mov    %eax,-0xac(%ebp)
081d12d1 +0x1fd:  mov    -0x9c(%ebp),%eax
081d12d7 +0x203:  mov    %eax,0x1c(%esp)
081d12db +0x207:  mov    %edi,0x18(%esp)
081d12df +0x20b:  mov    %esi,0x14(%esp)
081d12e3 +0x20f:  mov    %ebx,0x10(%esp)
081d12e7 +0x213:  mov    %ecx,0xc(%esp)
081d12eb +0x217:  mov    %edx,0x8(%esp)
081d12ef +0x21b:  movl   $0x5,0x4(%esp)
081d12f7 +0x223:  mov    -0xac(%ebp),%eax
081d12fd +0x229:  mov    %eax,(%esp)
081d1300 +0x22c:  call   0868659c <_ZN15cUserHistoryLog23GuildCargoCheckPushItemE31ENUM_GUILD_CARGO_HISTORY_REASONiiiiii>  ; cUserHistoryLog::GuildCargoCheckPushItem(ENUM_GUILD_CARGO_HISTORY_REASON, int, int, int, int, int, int)
081d1305 +0x231:  mov    $0x0,%eax
081d130a +0x236:  lea    -0xc(%ebp),%esp
081d130d +0x239:  add    $0x0,%esp
081d1310 +0x23c:  pop    %ebx
081d1311 +0x23d:  pop    %esi
081d1312 +0x23e:  pop    %edi
081d1313 +0x23f:  pop    %ebp
081d1314 +0x240:  ret
081d1315 +0x241:  nop
```

## 反编译 C

```c
// Dispatcher_GuildCargoPushItem::process @ 0x81d10d4

/* Dispatcher_GuildCargoPushItem::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_GuildCargoPushItem::process
          (Dispatcher_GuildCargoPushItem *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  char cVar1;
  undefined4 uVar2;
  CDataManager *this_00;
  CGuildServerProxy *this_01;
  CUser *pCVar3;
  MSG_BASE *pMVar4;
  undefined1 local_93 [2];
  int local_91;
  Packet_Guild_Check_Guild_Cargo_Push_Item local_56 [2];
  ushort local_54;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  MSG_BASE local_33;
  undefined2 local_32;
  ParamBase *local_30;
  MSG_BASE *local_2c;
  int local_28;
  undefined4 local_24;
  CItem *local_20;
  
  local_30 = param_3;
  pCVar3 = param_1;
  pMVar4 = param_2;
  uVar2 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(local_30 + 4) = uVar2;
  if (*(int *)(local_30 + 4) < 1) {
    if (*(int *)(local_30 + 4) < 0) {
      uVar2 = LineFunc(0x2cf0,
                       "virtual int Dispatcher_GuildCargoPushItem::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(local_30 + 4),0);
    }
    else {
      local_2c = param_2;
      local_28 = CUserCharacInfo::getCurCharacInvenR((CUserCharacInfo *)param_1);
      local_24 = GetInvenTypeFromItemSpace(local_2c[0xd],pCVar3,pMVar4,param_3);
      CInventory::GetInvenSlot((int)local_93,local_28);
      this_00 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(this_00,local_91);
      Packet_Guild_Check_Guild_Cargo_Push_Item::Packet_Guild_Check_Guild_Cargo_Push_Item(local_56);
      local_4c = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)param_1);
      local_48 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
      local_40 = *(undefined4 *)(local_2c + 0x10);
      local_44 = (uint)*(ushort *)(local_2c + 0x18);
      local_3c = *(undefined4 *)(local_2c + 0x14);
      local_33 = local_2c[0xd];
      local_32 = *(undefined2 *)(local_2c + 0xe);
      cVar1 = CItem::is_stackable(local_20);
      local_34 = cVar1 != '\0';
      cVar1 = CItem::is_stackable(local_20);
      if (cVar1 == '\0') {
        local_38 = 1;
      }
      else {
        local_38 = CStackableItem::getStackableLimit((CStackableItem *)local_20);
      }
      uVar2 = CUser::GetServerGroup(param_1);
      this_01 = (CGuildServerProxy *)
                CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                          (GlobalData::s_guild_proxy_mgr,uVar2);
      CGuildServerProxy::SendTcpPacket(this_01,(char *)local_56,(uint)local_54);
      cUserHistoryLog::GuildCargoCheckPushItem
                ((cUserHistoryLog *)(param_1 + 0x79700),5,local_44,local_40,local_3c,local_33,
                 local_32,local_34);
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
