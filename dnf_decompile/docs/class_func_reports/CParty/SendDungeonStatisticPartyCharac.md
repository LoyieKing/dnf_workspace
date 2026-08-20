# SendDungeonStatisticPartyCharac

`_ZN6CParty31SendDungeonStatisticPartyCharacEbP5CUser`

`CParty::SendDungeonStatisticPartyCharac(bool, CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b53aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b53aa  _ZN6CParty31SendDungeonStatisticPartyCharacEbP5CUser
#           CParty::SendDungeonStatisticPartyCharac(bool, CUser*)
# range [0x085b53aa, 0x085b5517]
085b53aa +0x000:  push   %ebp
085b53ab +0x001:  mov    %esp,%ebp
085b53ad +0x003:  push   %ebx
085b53ae +0x004:  sub    $0x74,%esp
085b53b1 +0x007:  mov    0xc(%ebp),%eax
085b53b4 +0x00a:  mov    %al,-0x5c(%ebp)
085b53b7 +0x00d:  lea    -0x4f(%ebp),%eax
085b53ba +0x010:  mov    %eax,(%esp)
085b53bd +0x013:  call   085bee2e <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x38c>  ; global constructors keyed to CParty::cMember::cMember()+0x38c
085b53c2 +0x018:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085b53c7 +0x01d:  mov    %eax,(%esp)
085b53ca +0x020:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
085b53cf +0x025:  mov    %ax,-0x45(%ebp)
085b53d3 +0x029:  mov    0x8(%ebp),%eax
085b53d6 +0x02c:  add    $0xb24,%eax
085b53db +0x031:  mov    %eax,(%esp)
085b53de +0x034:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085b53e3 +0x039:  mov    %eax,-0x43(%ebp)
085b53e6 +0x03c:  mov    0x8(%ebp),%eax
085b53e9 +0x03f:  add    $0xb24,%eax
085b53ee +0x044:  mov    %eax,(%esp)
085b53f1 +0x047:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085b53f6 +0x04c:  mov    %al,-0x3f(%ebp)
085b53f9 +0x04f:  mov    0x8(%ebp),%eax
085b53fc +0x052:  movzbl 0x354(%eax),%eax
085b5403 +0x059:  mov    %al,-0x3e(%ebp)
085b5406 +0x05c:  movzbl -0x5c(%ebp),%eax
085b540a +0x060:  mov    %al,-0x3d(%ebp)
085b540d +0x063:  mov    0x10(%ebp),%eax
085b5410 +0x066:  mov    %eax,(%esp)
085b5413 +0x069:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085b5418 +0x06e:  mov    %eax,-0x3c(%ebp)
085b541b +0x071:  mov    0x10(%ebp),%eax
085b541e +0x074:  mov    %eax,(%esp)
085b5421 +0x077:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
085b5426 +0x07c:  mov    %al,-0x38(%ebp)
085b5429 +0x07f:  mov    0x10(%ebp),%eax
085b542c +0x082:  mov    0x8e054(%eax),%eax
085b5432 +0x088:  mov    %al,-0x37(%ebp)
085b5435 +0x08b:  mov    0x10(%ebp),%eax
085b5438 +0x08e:  mov    0x8e034(%eax),%eax
085b543e +0x094:  mov    %eax,-0x36(%ebp)
085b5441 +0x097:  mov    0x10(%ebp),%eax
085b5444 +0x09a:  mov    0x8e038(%eax),%eax
085b544a +0x0a0:  mov    %eax,-0x32(%ebp)
085b544d +0x0a3:  mov    0x10(%ebp),%eax
085b5450 +0x0a6:  mov    0x8e03c(%eax),%eax
085b5456 +0x0ac:  mov    %eax,-0x2e(%ebp)
085b5459 +0x0af:  mov    0x10(%ebp),%eax
085b545c +0x0b2:  mov    0x8e040(%eax),%eax
085b5462 +0x0b8:  mov    %eax,-0x2a(%ebp)
085b5465 +0x0bb:  mov    0x10(%ebp),%eax
085b5468 +0x0be:  mov    0x8e044(%eax),%eax
085b546e +0x0c4:  mov    %eax,-0x26(%ebp)
085b5471 +0x0c7:  mov    0x10(%ebp),%eax
085b5474 +0x0ca:  mov    0x8e048(%eax),%eax
085b547a +0x0d0:  mov    %eax,-0x22(%ebp)
085b547d +0x0d3:  mov    0x10(%ebp),%eax
085b5480 +0x0d6:  mov    0x8e04c(%eax),%eax
085b5486 +0x0dc:  mov    %eax,-0x1e(%ebp)
085b5489 +0x0df:  mov    0x10(%ebp),%eax
085b548c +0x0e2:  mov    0x8e050(%eax),%eax
085b5492 +0x0e8:  mov    %eax,-0x1a(%ebp)
085b5495 +0x0eb:  mov    0x10(%ebp),%eax
085b5498 +0x0ee:  mov    0x8e068(%eax),%eax
085b549e +0x0f4:  mov    %eax,-0x16(%ebp)
085b54a1 +0x0f7:  mov    0x10(%ebp),%eax
085b54a4 +0x0fa:  mov    0x8e064(%eax),%eax
085b54aa +0x100:  mov    %eax,-0x12(%ebp)
085b54ad +0x103:  mov    0x10(%ebp),%eax
085b54b0 +0x106:  mov    0x8e058(%eax),%eax
085b54b6 +0x10c:  mov    %ax,-0xe(%ebp)
085b54ba +0x110:  cmpb   $0x0,-0x5c(%ebp)
085b54be +0x114:  je     085b54d2 <+0x128>
085b54c0 +0x116:  mov    0x8(%ebp),%eax
085b54c3 +0x119:  movzwl 0x183c(%eax),%eax
085b54ca +0x120:  movzwl %ax,%eax
085b54cd +0x123:  mov    %eax,-0xc(%ebp)
085b54d0 +0x126:  jmp    085b54d9 <+0x12f>
085b54d2 +0x128:  movl   $0x0,-0xc(%ebp)
085b54d9 +0x12f:  lea    -0x4f(%ebp),%ebx
085b54dc +0x132:  mov    0x10(%ebp),%eax
085b54df +0x135:  mov    %eax,(%esp)
085b54e2 +0x138:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085b54e7 +0x13d:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
085b54ed +0x143:  mov    %eax,0x4(%esp)
085b54f1 +0x147:  mov    %edx,(%esp)
085b54f4 +0x14a:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
085b54f9 +0x14f:  movl   $0x47,0x8(%esp)
085b5501 +0x157:  mov    %ebx,0x4(%esp)
085b5505 +0x15b:  mov    %eax,(%esp)
085b5508 +0x15e:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
085b550d +0x163:  mov    $0x1,%eax
085b5512 +0x168:  add    $0x74,%esp
085b5515 +0x16b:  pop    %ebx
085b5516 +0x16c:  pop    %ebp
085b5517 +0x16d:  ret
```

## 反编译 C

```c
// CParty::SendDungeonStatisticPartyCharac @ 0x85b53aa

/* CParty::SendDungeonStatisticPartyCharac(bool, CUser*) */

undefined4 __thiscall
CParty::SendDungeonStatisticPartyCharac(CParty *this,bool param_1,CUser *param_2)

{
  CEnvironment *this_00;
  undefined4 uVar1;
  CStatisticServerProxy *this_01;
  Packet_Dungeon_Statistic_Party_Charac local_53 [10];
  undefined2 local_49;
  undefined4 local_47;
  undefined1 local_43;
  CParty local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined4 local_3a;
  undefined4 local_36;
  undefined4 local_32;
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined4 local_1a;
  undefined4 local_16;
  undefined2 local_12;
  uint local_10;
  
  Packet_Dungeon_Statistic_Party_Charac::Packet_Dungeon_Statistic_Party_Charac(local_53);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_49 = CEnvironment::get_channel_no(this_00);
  local_47 = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
  local_43 = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
  local_42 = this[0x354];
  local_41 = param_1;
  local_40 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
  local_3c = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_2);
  local_3b = (undefined1)*(undefined4 *)(param_2 + 0x8e054);
  local_3a = *(undefined4 *)(param_2 + 0x8e034);
  local_36 = *(undefined4 *)(param_2 + 0x8e038);
  local_32 = *(undefined4 *)(param_2 + 0x8e03c);
  local_2e = *(undefined4 *)(param_2 + 0x8e040);
  local_2a = *(undefined4 *)(param_2 + 0x8e044);
  local_26 = *(undefined4 *)(param_2 + 0x8e048);
  local_22 = *(undefined4 *)(param_2 + 0x8e04c);
  local_1e = *(undefined4 *)(param_2 + 0x8e050);
  local_1a = *(undefined4 *)(param_2 + 0x8e068);
  local_16 = *(undefined4 *)(param_2 + 0x8e064);
  local_12 = (undefined2)*(undefined4 *)(param_2 + 0x8e058);
  if (param_1) {
    local_10 = (uint)*(ushort *)(this + 0x183c);
  }
  else {
    local_10 = 0;
  }
  uVar1 = CUser::GetServerGroup(param_2);
  this_01 = (CStatisticServerProxy *)
            CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                      (GlobalData::s_statistic_proxy_mgr,uVar1);
  CStatisticServerProxy::SendPacket(this_01,(char *)local_53,0x47);
  return 1;
}
```
