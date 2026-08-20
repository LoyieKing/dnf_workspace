# SendDungeonStatisticPartyJob

`_ZN6CParty28SendDungeonStatisticPartyJobEbP5CUser`

`CParty::SendDungeonStatisticPartyJob(bool, CUser*)`

| 类 | 地址 |
|---|---|
| `CParty` | `0x085b52a6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085b52a6  _ZN6CParty28SendDungeonStatisticPartyJobEbP5CUser
#           CParty::SendDungeonStatisticPartyJob(bool, CUser*)
# range [0x085b52a6, 0x085b53a9]
085b52a6 +0x000:  push   %ebp
085b52a7 +0x001:  mov    %esp,%ebp
085b52a9 +0x003:  push   %ebx
085b52aa +0x004:  sub    $0x44,%esp
085b52ad +0x007:  mov    0xc(%ebp),%eax
085b52b0 +0x00a:  mov    %al,-0x2c(%ebp)
085b52b3 +0x00d:  lea    -0x27(%ebp),%eax
085b52b6 +0x010:  mov    %eax,(%esp)
085b52b9 +0x013:  call   085bee0a <_GLOBAL__I__ZN6CParty7cMemberC2Ev+0x368>  ; global constructors keyed to CParty::cMember::cMember()+0x368
085b52be +0x018:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
085b52c3 +0x01d:  mov    %eax,(%esp)
085b52c6 +0x020:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
085b52cb +0x025:  mov    %ax,-0x1d(%ebp)
085b52cf +0x029:  mov    0x8(%ebp),%eax
085b52d2 +0x02c:  add    $0xb24,%eax
085b52d7 +0x031:  mov    %eax,(%esp)
085b52da +0x034:  call   0822d0d8 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x2782>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x2782
085b52df +0x039:  mov    %eax,-0x1b(%ebp)
085b52e2 +0x03c:  mov    0x8(%ebp),%eax
085b52e5 +0x03f:  add    $0xb24,%eax
085b52ea +0x044:  mov    %eax,(%esp)
085b52ed +0x047:  call   080f981c <_GLOBAL__I__ZN8WongWork13CHackAnalyzer8setUserPEP5CUser+0x28>  ; global constructors keyed to WongWork::CHackAnalyzer::setUserP(CUser*)+0x28
085b52f2 +0x04c:  mov    %al,-0x17(%ebp)
085b52f5 +0x04f:  mov    0x8(%ebp),%eax
085b52f8 +0x052:  movzbl 0x355(%eax),%eax
085b52ff +0x059:  mov    %al,-0x16(%ebp)
085b5302 +0x05c:  mov    0x8(%ebp),%eax
085b5305 +0x05f:  movzbl 0x356(%eax),%eax
085b530c +0x066:  mov    %al,-0x15(%ebp)
085b530f +0x069:  mov    0x8(%ebp),%eax
085b5312 +0x06c:  movzbl 0x357(%eax),%eax
085b5319 +0x073:  mov    %al,-0x14(%ebp)
085b531c +0x076:  movzbl -0x2c(%ebp),%eax
085b5320 +0x07a:  mov    %al,-0x13(%ebp)
085b5323 +0x07d:  mov    0x10(%ebp),%eax
085b5326 +0x080:  mov    %eax,(%esp)
085b5329 +0x083:  call   080fdf20 <_GLOBAL__I__ZN24CAdvertisementExposeInfo28advertisementExposeInfoPool_E+0x24c>  ; global constructors keyed to CAdvertisementExposeInfo::advertisementExposeInfoPool_+0x24c
085b532e +0x088:  mov    %eax,-0x11(%ebp)
085b5331 +0x08b:  mov    0x10(%ebp),%eax
085b5334 +0x08e:  mov    %eax,(%esp)
085b5337 +0x091:  call   0815741c <_GLOBAL__I__ZN23CBossDungeonEntranceLog23IncrementBossStageStartER5CUserhh+0x7b>  ; global constructors keyed to CBossDungeonEntranceLog::IncrementBossStageStart(CUser&, unsigned char, unsigned char)+0x7b
085b533c +0x096:  mov    %al,-0xd(%ebp)
085b533f +0x099:  mov    0x10(%ebp),%eax
085b5342 +0x09c:  mov    0x8e054(%eax),%eax
085b5348 +0x0a2:  mov    %al,-0x12(%ebp)
085b534b +0x0a5:  cmpb   $0x0,-0x2c(%ebp)
085b534f +0x0a9:  je     085b5363 <+0xbd>
085b5351 +0x0ab:  mov    0x8(%ebp),%eax
085b5354 +0x0ae:  movzwl 0x183c(%eax),%eax
085b535b +0x0b5:  movzwl %ax,%eax
085b535e +0x0b8:  mov    %eax,-0xc(%ebp)
085b5361 +0x0bb:  jmp    085b536a <+0xc4>
085b5363 +0x0bd:  movl   $0x0,-0xc(%ebp)
085b536a +0x0c4:  lea    -0x27(%ebp),%ebx
085b536d +0x0c7:  mov    0x10(%ebp),%eax
085b5370 +0x0ca:  mov    %eax,(%esp)
085b5373 +0x0cd:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
085b5378 +0x0d2:  mov    &_ZN10GlobalData21s_statistic_proxy_mgrE,%edx
085b537e +0x0d8:  mov    %eax,0x4(%esp)
085b5382 +0x0dc:  mov    %edx,(%esp)
085b5385 +0x0df:  call   08111cf8 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x120a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x120a
085b538a +0x0e4:  movl   $0x1f,0x8(%esp)
085b5392 +0x0ec:  mov    %ebx,0x4(%esp)
085b5396 +0x0f0:  mov    %eax,(%esp)
085b5399 +0x0f3:  call   08472044 <_ZN21CStatisticServerProxy10SendPacketEPci>  ; CStatisticServerProxy::SendPacket(char*, int)
085b539e +0x0f8:  mov    $0x1,%eax
085b53a3 +0x0fd:  add    $0x44,%esp
085b53a6 +0x100:  pop    %ebx
085b53a7 +0x101:  pop    %ebp
085b53a8 +0x102:  ret
085b53a9 +0x103:  nop
```

## 反编译 C

```c
// CParty::SendDungeonStatisticPartyJob @ 0x85b52a6

/* CParty::SendDungeonStatisticPartyJob(bool, CUser*) */

undefined4 __thiscall CParty::SendDungeonStatisticPartyJob(CParty *this,bool param_1,CUser *param_2)

{
  CEnvironment *this_00;
  undefined4 uVar1;
  CStatisticServerProxy *this_01;
  Packet_Dungeon_Statistic_Party_Job local_2b [10];
  undefined2 local_21;
  undefined4 local_1f;
  undefined1 local_1b;
  CParty local_1a;
  CParty local_19;
  CParty local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined4 local_15;
  undefined1 local_11;
  uint local_10;
  
  Packet_Dungeon_Statistic_Party_Job::Packet_Dungeon_Statistic_Party_Job(local_2b);
  this_00 = (CEnvironment *)G_CEnvironment();
  local_21 = CEnvironment::get_channel_no(this_00);
  local_1f = CBattle_Field::get_dungeon_index((CBattle_Field *)(this + 0xb24));
  local_1b = CBattle_Field::get_dungeon_diff((CBattle_Field *)(this + 0xb24));
  local_1a = this[0x355];
  local_19 = this[0x356];
  local_18 = this[0x357];
  local_17 = param_1;
  local_15 = CUserCharacInfo::get_charac_job((CUserCharacInfo *)param_2);
  local_11 = CUserCharacInfo::getCurCharacGrowType((CUserCharacInfo *)param_2);
  local_16 = (undefined1)*(undefined4 *)(param_2 + 0x8e054);
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
  CStatisticServerProxy::SendPacket(this_01,(char *)local_2b,0x1f);
  return 1;
}
```
