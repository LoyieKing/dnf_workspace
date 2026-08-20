# SendDungeonStatisticParty

`_ZN6CParty25SendDungeonStatisticPartyEbP5CUser`

`CParty::SendDungeonStatisticParty(bool, CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b5158` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b5158  _ZN6CParty25SendDungeonStatisticPartyEbP5CUser
#           CParty::SendDungeonStatisticParty(bool, CUser*)
# range [0x085b5158, 0x085b52a5]
085b5158 +0x000:  push   %ebp
085b5159 +0x001:  mov    %esp,%ebp
085b515b +0x003:  push   %ebx
085b515c +0x004:  sub    $0x64,%esp
085b515f +0x007:  mov    0xc(%ebp),%eax
085b5162 +0x00a:  mov    %al,-0x4c(%ebp)
085b5165 +0x00d:  lea    -0x48(%ebp),%eax
085b5168 +0x010:  mov    %eax,(%esp)
085b516b +0x013:  call   085bede6 <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x344>  ; global constructors keyed to CParty::cMember::cMember()+0x344
085b5170 +0x018:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085b5175 +0x01d:  mov    %eax,(%esp)
085b5178 +0x020:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
085b517d +0x025:  mov    %ax,-0x3e(%ebp)
085b5181 +0x029:  mov    0x8(%ebp),%eax
085b5184 +0x02c:  add    $0xb24,%eax
085b5189 +0x031:  mov    %eax,(%esp)
085b518c +0x034:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085b5191 +0x039:  mov    %eax,-0x3c(%ebp)
085b5194 +0x03c:  mov    0x8(%ebp),%eax
085b5197 +0x03f:  add    $0xb24,%eax
085b519c +0x044:  mov    %eax,(%esp)
085b519f +0x047:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085b51a4 +0x04c:  mov    %al,-0x38(%ebp)
085b51a7 +0x04f:  mov    0x8(%ebp),%eax
085b51aa +0x052:  movzbl 0x355(%eax),%eax
085b51b1 +0x059:  mov    %al,-0x37(%ebp)
085b51b4 +0x05c:  mov    0x8(%ebp),%eax
085b51b7 +0x05f:  movzbl 0x356(%eax),%eax
085b51be +0x066:  mov    %al,-0x36(%ebp)
085b51c1 +0x069:  mov    0x8(%ebp),%eax
085b51c4 +0x06c:  movzbl 0x357(%eax),%eax
085b51cb +0x073:  mov    %al,-0x35(%ebp)
085b51ce +0x076:  movzbl -0x4c(%ebp),%eax
085b51d2 +0x07a:  mov    %al,-0x34(%ebp)
085b51d5 +0x07d:  mov    0x10(%ebp),%eax
085b51d8 +0x080:  mov    0x8e054(%eax),%eax
085b51de +0x086:  mov    %al,-0x33(%ebp)
085b51e1 +0x089:  mov    0x10(%ebp),%eax
085b51e4 +0x08c:  mov    0x8e034(%eax),%eax
085b51ea +0x092:  mov    %eax,-0x32(%ebp)
085b51ed +0x095:  mov    0x10(%ebp),%eax
085b51f0 +0x098:  mov    0x8e038(%eax),%eax
085b51f6 +0x09e:  mov    %eax,-0x2e(%ebp)
085b51f9 +0x0a1:  mov    0x10(%ebp),%eax
085b51fc +0x0a4:  mov    0x8e03c(%eax),%eax
085b5202 +0x0aa:  mov    %eax,-0x2a(%ebp)
085b5205 +0x0ad:  mov    0x10(%ebp),%eax
085b5208 +0x0b0:  mov    0x8e040(%eax),%eax
085b520e +0x0b6:  mov    %eax,-0x26(%ebp)
085b5211 +0x0b9:  mov    0x10(%ebp),%eax
085b5214 +0x0bc:  mov    0x8e044(%eax),%eax
085b521a +0x0c2:  mov    %eax,-0x22(%ebp)
085b521d +0x0c5:  mov    0x10(%ebp),%eax
085b5220 +0x0c8:  mov    0x8e048(%eax),%eax
085b5226 +0x0ce:  mov    %eax,-0x1e(%ebp)
085b5229 +0x0d1:  mov    0x10(%ebp),%eax
085b522c +0x0d4:  mov    0x8e04c(%eax),%eax
085b5232 +0x0da:  mov    %eax,-0x1a(%ebp)
085b5235 +0x0dd:  mov    0x10(%ebp),%eax
085b5238 +0x0e0:  mov    0x8e050(%eax),%eax
085b523e +0x0e6:  mov    %eax,-0x16(%ebp)
085b5241 +0x0e9:  mov    0x10(%ebp),%eax
085b5244 +0x0ec:  mov    0x8e068(%eax),%eax
085b524a +0x0f2:  mov    %eax,-0x12(%ebp)
085b524d +0x0f5:  mov    0x10(%ebp),%eax
085b5250 +0x0f8:  mov    0x8e064(%eax),%eax
085b5256 +0x0fe:  mov    %eax,-0xe(%ebp)
085b5259 +0x101:  mov    0x10(%ebp),%eax
085b525c +0x104:  mov    0x8e058(%eax),%eax
085b5262 +0x10a:  mov    %ax,-0xa(%ebp)
085b5266 +0x10e:  lea    -0x48(%ebp),%ebx
085b5269 +0x111:  mov    0x10(%ebp),%eax
085b526c +0x114:  mov    %eax,(%esp)
085b526f +0x117:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085b5274 +0x11c:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
085b527a +0x122:  mov    %eax,0x4(%esp)
085b527e +0x126:  mov    %edx,(%esp)
085b5281 +0x129:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
085b5286 +0x12e:  movl   $0x40,0x8(%esp)
085b528e +0x136:  mov    %ebx,0x4(%esp)
085b5292 +0x13a:  mov    %eax,(%esp)
085b5295 +0x13d:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
085b529a +0x142:  mov    $0x1,%eax
085b529f +0x147:  add    $0x64,%esp
085b52a2 +0x14a:  pop    %ebx
085b52a3 +0x14b:  pop    %ebp
085b52a4 +0x14c:  ret
085b52a5 +0x14d:  nop
```

## 反编译 C

```c
// CParty::SendDungeonStatisticParty @ 0x85b5158

/* CParty::SendDungeonStatisticParty(bool, CUser*) */

undefined4 __thiscall CParty::SendDungeonStatisticParty(CParty *this,bool param_1,CUser *param_2)

{
  CEnvironment *this_00;
  undefined4 uVar1;
  CStatisticServerProxy *this_01;
  Packet_Dungeon_Statistic_Party local_4c [10];
  undefined2 local_42;
  undefined4 local_40;
  undefined1 local_3c;
  CParty local_3b;
  CParty local_3a;
  CParty local_39;
  undefined1 local_38;
  undefined1 local_37;
  undefined4 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined4 local_12;
  undefined2 local_e;
  
  Packet_Dungeon_Statistic_Party::Packet_Dungeon_Statistic_Party(local_4c);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_42 = CEnvironment::get_channel_no(this_00);
  local_40 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
  local_3c = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
  local_3b = this[0x355];
  local_3a = this[0x356];
  local_39 = this[0x357];
  local_37 = (undefined1)*(undefined4 *)(param_2 + 0x8e054);
  local_36 = *(undefined4 *)(param_2 + 0x8e034);
  local_32 = *(undefined4 *)(param_2 + 0x8e038);
  local_2e = *(undefined4 *)(param_2 + 0x8e03c);
  local_2a = *(undefined4 *)(param_2 + 0x8e040);
  local_26 = *(undefined4 *)(param_2 + 0x8e044);
  local_22 = *(undefined4 *)(param_2 + 0x8e048);
  local_1e = *(undefined4 *)(param_2 + 0x8e04c);
  local_1a = *(undefined4 *)(param_2 + 0x8e050);
  local_16 = *(undefined4 *)(param_2 + 0x8e068);
  local_12 = *(undefined4 *)(param_2 + 0x8e064);
  local_e = (undefined2)*(undefined4 *)(param_2 + 0x8e058);
  local_38 = param_1;
  uVar1 = CUser::GetServerGroup(param_2);
  this_01 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,uVar1);
  CStatisticServerProxy::SendPacket(this_01,(char *)local_4c,0x40);
  return 1;
}
```
