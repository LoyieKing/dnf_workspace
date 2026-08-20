# compoundGuildMessage

`_ZN5CUser20compoundGuildMessageERK10Inven_Item`

`CUser::compoundGuildMessage(Inven_Item const&)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0869304e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0869304e  _ZN5CUser20compoundGuildMessageERK10Inven_Item
#           CUser::compoundGuildMessage(Inven_Item const&)
# range [0x0869304e, 0x08693177]
0869304e +0x000:  push   %ebp
0869304f +0x001:  mov    %esp,%ebp
08693051 +0x003:  push   %edi
08693052 +0x004:  push   %esi
08693053 +0x005:  push   %ebx
08693054 +0x006:  sub    $0xac,%esp
0869305a +0x00c:  lea    -0x94(%ebp),%ebx
08693060 +0x012:  mov    $0x0,%eax
08693065 +0x017:  mov    $0x1e,%edx
0869306a +0x01c:  mov    %ebx,%edi
0869306c +0x01e:  mov    %edx,%ecx
0869306e +0x020:  rep stos %eax,%es:(%edi)
08693070 +0x022:  mov    0xc(%ebp),%eax
08693073 +0x025:  mov    %eax,(%esp)
08693076 +0x028:  call   0850d14e <_GLOBAL__I_g_emptySlot+0x83>  ; global constructors keyed to g_emptySlot+0x83
0869307b +0x02d:  mov    %eax,%ebx
0869307d +0x02f:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
08693082 +0x034:  mov    %ebx,0x4(%esp)
08693086 +0x038:  mov    %eax,(%esp)
08693089 +0x03b:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0869308e +0x040:  mov    %eax,-0x1c(%ebp)
08693091 +0x043:  cmpl   $0x0,-0x1c(%ebp)
08693095 +0x047:  je     0869316b <+0x11d>
0869309b +0x04d:  mov    0x8(%ebp),%eax
0869309e +0x050:  mov    %eax,(%esp)
086930a1 +0x053:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086930a6 +0x058:  mov    %eax,0x4(%esp)
086930aa +0x05c:  lea    -0x94(%ebp),%eax
086930b0 +0x062:  mov    %eax,(%esp)
086930b3 +0x065:  call   0807def0 <_init+0x7e8>
086930b8 +0x06a:  mov    -0x1c(%ebp),%eax
086930bb +0x06d:  mov    %eax,(%esp)
086930be +0x070:  call   0811ed82 <_GLOBAL__I__ZN8WongWork21CItemUpgrade_SeparateC2Ev+0x7d>  ; global constructors keyed to WongWork::CItemUpgrade_Separate::CItemUpgrade_Separate()+0x7d
086930c3 +0x075:  mov    %eax,%ebx
086930c5 +0x077:  mov    0xc(%ebp),%eax
086930c8 +0x07a:  mov    %eax,(%esp)
086930cb +0x07d:  call   080f506c <_GLOBAL__I__ZN17Event_Upgrade_JarC2Ev+0x1d>  ; global constructors keyed to Event_Upgrade_Jar::Event_Upgrade_Jar()+0x1d
086930d0 +0x082:  movzbl %al,%esi
086930d3 +0x085:  mov    0x8(%ebp),%eax
086930d6 +0x088:  mov    %eax,(%esp)
086930d9 +0x08b:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
086930de +0x090:  mov    %ebx,0x10(%esp)
086930e2 +0x094:  mov    %esi,0xc(%esp)
086930e6 +0x098:  mov    %eax,0x8(%esp)
086930ea +0x09c:  movl   $"%s님이 +%d %s 조합에 성공 하였습니다.",0x4(%esp)
086930f2 +0x0a4:  lea    -0x94(%ebp),%eax
086930f8 +0x0aa:  mov    %eax,(%esp)
086930fb +0x0ad:  call   0807e440 <_init+0xd38>
08693100 +0x0b2:  mov    0x8(%ebp),%eax
08693103 +0x0b5:  mov    %eax,(%esp)
08693106 +0x0b8:  call   0822f46c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x4b16>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x4b16
0869310b +0x0bd:  mov    %eax,%esi
0869310d +0x0bf:  mov    0x8(%ebp),%eax
08693110 +0x0c2:  mov    %eax,(%esp)
08693113 +0x0c5:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
08693118 +0x0ca:  mov    %eax,%ebx
0869311a +0x0cc:  mov    0x8(%ebp),%eax
0869311d +0x0cf:  mov    %eax,(%esp)
08693120 +0x0d2:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
08693125 +0x0d7:  mov    &_ZN10GlobalData17s_guild_proxy_mgrE,%edx
0869312b +0x0dd:  mov    %eax,0x4(%esp)
0869312f +0x0e1:  mov    %edx,(%esp)
08693132 +0x0e4:  call   0811d3b8 <_GLOBAL__I__ZN14CGuildWarEventC2Ev+0x1c>  ; global constructors keyed to CGuildWarEvent::CGuildWarEvent()+0x1c
08693137 +0x0e9:  mov    %esi,0x18(%esp)
0869313b +0x0ed:  movl   $0xffffffff,0x14(%esp)
08693143 +0x0f5:  movl   $0xffffffff,0x10(%esp)
0869314b +0x0fd:  mov    %ebx,0xc(%esp)
0869314f +0x101:  movl   $0x0,0x8(%esp)
08693157 +0x109:  lea    -0x94(%ebp),%edx
0869315d +0x10f:  mov    %edx,0x4(%esp)
08693161 +0x113:  mov    %eax,(%esp)
08693164 +0x116:  call   0846f01a <_ZN17CGuildServerProxy19SendGuildBoardWriteEPcjjicj>  ; CGuildServerProxy::SendGuildBoardWrite(char*, unsigned int, unsigned int, int, char, unsigned int)
08693169 +0x11b:  jmp    0869316c <+0x11e>
0869316b +0x11d:  nop
0869316c +0x11e:  add    $0xac,%esp
08693172 +0x124:  pop    %ebx
08693173 +0x125:  pop    %esi
08693174 +0x126:  pop    %edi
08693175 +0x127:  pop    %ebp
08693176 +0x128:  ret
08693177 +0x129:  nop
```

## 反编译 C

```c
// CUser::compoundGuildMessage @ 0x869304e

/* CUser::compoundGuildMessage(Inven_Item const&) */

void __thiscall CUser::compoundGuildMessage(CUser *this,Inven_Item *param_1)

{
  CDataManager *this_00;
  char *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  CGuildServerProxy *this_01;
  int iVar6;
  char local_98 [120];
  CItem *local_20;
  
  pcVar1 = local_98;
  for (iVar6 = 0x1e; iVar6 != 0; iVar6 = iVar6 + -1) {
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1 = pcVar1 + 4;
  }
  iVar6 = Inven_Item::getKey(param_1);
  this_00 = (CDataManager *)G_CDataManager();
  local_20 = (CItem *)CDataManager::find_item(this_00,iVar6);
  if (local_20 != (CItem *)0x0) {
    pcVar1 = (char *)CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
    strcpy(local_98,pcVar1);
    uVar2 = CItem::GetItemName(local_20);
    uVar3 = Inven_Item::GetUpgrade(param_1);
    uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)this);
    sprintf(local_98,&DAT_08cf14b4,uVar4,uVar3 & 0xff,uVar2);
    uVar3 = CUserCharacInfo::get_charac_guildkey((CUserCharacInfo *)this);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this);
    uVar2 = GetServerGroup(this);
    this_01 = (CGuildServerProxy *)
              CServerProxyMgr<CGuildServerProxy>::GetServerProxy
                        (GlobalData::s_guild_proxy_mgr,uVar2);
    CGuildServerProxy::SendGuildBoardWrite(this_01,local_98,0,uVar5,-1,-1,uVar3);
  }
  return;
}
```
