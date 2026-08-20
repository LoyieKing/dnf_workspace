# processEvent

`_ZN21SeriaRoomAniDecoEvent12processEventER5CUser`

`SeriaRoomAniDecoEvent::processEvent(CUser&)`

| 类 | 地址 |
|---|---|
| `SeriaRoomAniDecoEvent` | `0x0827ba52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827ba52  _ZN21SeriaRoomAniDecoEvent12processEventER5CUser
#           SeriaRoomAniDecoEvent::processEvent(CUser&)
# range [0x0827ba52, 0x0827bbef]
0827ba52 +0x000:  push   %ebp
0827ba53 +0x001:  mov    %esp,%ebp
0827ba55 +0x003:  push   %edi
0827ba56 +0x004:  push   %esi
0827ba57 +0x005:  push   %ebx
0827ba58 +0x006:  sub    $0x18c,%esp
0827ba5e +0x00c:  mov    0xc(%ebp),%edx
0827ba61 +0x00f:  lea    -0x24(%ebp),%eax
0827ba64 +0x012:  mov    %edx,0x4(%esp)
0827ba68 +0x016:  mov    %eax,(%esp)
0827ba6b +0x019:  call   0822fb96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5240>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5240
0827ba70 +0x01e:  sub    $0x4,%esp
0827ba73 +0x021:  movzwl -0x22(%ebp),%eax
0827ba77 +0x025:  movswl %ax,%ebx
0827ba7a +0x028:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827ba7f +0x02d:  mov    %ebx,0x4(%esp)
0827ba83 +0x031:  mov    %eax,(%esp)
0827ba86 +0x034:  call   08365d26 <_ZN12CDataManager29getSeriaRoomAniDecoRewardItemEi>  ; CDataManager::getSeriaRoomAniDecoRewardItem(int)
0827ba8b +0x039:  mov    %eax,-0x20(%ebp)
0827ba8e +0x03c:  cmpl   $0x0,-0x20(%ebp)
0827ba92 +0x040:  jne    0827ba9e <+0x4c>
0827ba94 +0x042:  mov    $0x0,%eax
0827ba99 +0x047:  jmp    0827bbe5 <+0x193>
0827ba9e +0x04c:  lea    -0x61(%ebp),%eax
0827baa1 +0x04f:  mov    %eax,(%esp)
0827baa4 +0x052:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0827baa9 +0x057:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827baae +0x05c:  mov    -0x20(%ebp),%edx
0827bab1 +0x05f:  mov    %edx,0x4(%esp)
0827bab5 +0x063:  mov    %eax,(%esp)
0827bab8 +0x066:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0827babd +0x06b:  mov    %eax,-0x1c(%ebp)
0827bac0 +0x06e:  cmpl   $0x0,-0x1c(%ebp)
0827bac4 +0x072:  je     0827bbe0 <+0x18e>
0827baca +0x078:  mov    -0x1c(%ebp),%eax
0827bacd +0x07b:  mov    %eax,(%esp)
0827bad0 +0x07e:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0827bad5 +0x083:  mov    %eax,-0x5f(%ebp)
0827bad8 +0x086:  mov    -0x1c(%ebp),%eax
0827badb +0x089:  mov    (%eax),%eax
0827badd +0x08b:  add    $0x8,%eax
0827bae0 +0x08e:  mov    (%eax),%edx
0827bae2 +0x090:  lea    -0x61(%ebp),%eax
0827bae5 +0x093:  mov    %eax,0x4(%esp)
0827bae9 +0x097:  mov    -0x1c(%ebp),%eax
0827baec +0x09a:  mov    %eax,(%esp)
0827baef +0x09d:  call   *%edx
0827baf1 +0x09f:  movl   $0x1,0x4(%esp)
0827baf9 +0x0a7:  lea    -0x61(%ebp),%eax
0827bafc +0x0aa:  mov    %eax,(%esp)
0827baff +0x0ad:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0827bb04 +0x0b2:  movl   $0x0,0xc(%esp)
0827bb0c +0x0ba:  movl   $"game_server_msg_291",0x8(%esp)
0827bb14 +0x0c2:  movl   $0x4,0x4(%esp)
0827bb1c +0x0ca:  movl   $&g_scriptStringManager_,(%esp)
0827bb23 +0x0d1:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0827bb28 +0x0d6:  movl   $0xff,0x8(%esp)
0827bb30 +0x0de:  mov    %eax,0x4(%esp)
0827bb34 +0x0e2:  lea    -0x161(%ebp),%eax
0827bb3a +0x0e8:  mov    %eax,(%esp)
0827bb3d +0x0eb:  call   0807d8d0 <_init+0x1c8>
0827bb42 +0x0f0:  mov    -0x5f(%ebp),%eax
0827bb45 +0x0f3:  test   %eax,%eax
0827bb47 +0x0f5:  je     0827bbe0 <+0x18e>
0827bb4d +0x0fb:  mov    0xc(%ebp),%eax
0827bb50 +0x0fe:  mov    %eax,(%esp)
0827bb53 +0x101:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
0827bb58 +0x106:  mov    %eax,%esi
0827bb5a +0x108:  lea    -0x161(%ebp),%eax
0827bb60 +0x10e:  mov    %eax,(%esp)
0827bb63 +0x111:  call   0807e3b0 <_init+0xca8>
0827bb68 +0x116:  mov    %eax,%edi
0827bb6a +0x118:  mov    0xc(%ebp),%eax
0827bb6d +0x11b:  mov    %eax,(%esp)
0827bb70 +0x11e:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0827bb75 +0x123:  mov    %eax,%ebx
0827bb77 +0x125:  movl   $0x0,0xc(%esp)
0827bb7f +0x12d:  movl   $"game_server_msg_289",0x8(%esp)
0827bb87 +0x135:  movl   $0x4,0x4(%esp)
0827bb8f +0x13d:  movl   $&g_scriptStringManager_,(%esp)
0827bb96 +0x144:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0827bb9b +0x149:  movl   $0x0,0x24(%esp)
0827bba3 +0x151:  movl   $0x0,0x20(%esp)
0827bbab +0x159:  mov    %esi,0x1c(%esp)
0827bbaf +0x15d:  movl   $0x0,0x18(%esp)
0827bbb7 +0x165:  mov    %edi,0x14(%esp)
0827bbbb +0x169:  lea    -0x161(%ebp),%edx
0827bbc1 +0x16f:  mov    %edx,0x10(%esp)
0827bbc5 +0x173:  mov    %ebx,0xc(%esp)
0827bbc9 +0x177:  movl   $0x0,0x8(%esp)
0827bbd1 +0x17f:  lea    -0x61(%ebp),%edx
0827bbd4 +0x182:  mov    %edx,0x4(%esp)
0827bbd8 +0x186:  mov    %eax,(%esp)
0827bbdb +0x189:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0827bbe0 +0x18e:  mov    $0x0,%eax
0827bbe5 +0x193:  lea    -0xc(%ebp),%esp
0827bbe8 +0x196:  add    $0x0,%esp
0827bbeb +0x199:  pop    %ebx
0827bbec +0x19a:  pop    %esi
0827bbed +0x19b:  pop    %edi
0827bbee +0x19c:  pop    %ebp
0827bbef +0x19d:  ret
```

## 反编译 C

```c
// SeriaRoomAniDecoEvent::processEvent @ 0x827ba52

/* SeriaRoomAniDecoEvent::processEvent(CUser&) */

undefined4 __thiscall
SeriaRoomAniDecoEvent::processEvent(SeriaRoomAniDecoEvent *this,CUser *param_1)

{
  CDataManager *pCVar1;
  char *__src;
  undefined4 uVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char local_165 [256];
  Inven_Item local_65 [2];
  int local_63;
  short local_26;
  int local_24;
  CItem *local_20;
  
  CUserCharacInfo::getSeriaRoomAniDecoInfo();
  pCVar1 = (CDataManager *)G_CDataManager();
  local_24 = CDataManager::getSeriaRoomAniDecoRewardItem(pCVar1,(int)local_26);
  if (local_24 != 0) {
    Inven_Item::Inven_Item(local_65);
    pCVar1 = (CDataManager *)G_CDataManager();
    local_20 = (CItem *)CDataManager::find_item(pCVar1,local_24);
    if (local_20 != (CItem *)0x0) {
      local_63 = CItem::get_index(local_20);
      (**(code **)(*(int *)local_20 + 8))(local_20,local_65);
      Inven_Item::set_add_info(local_65,1);
      __src = (char *)RDARScriptStringManager::findString
                                ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                 "game_server_msg_291",(bool *)0x0);
      strncpy(local_165,__src,0xff);
      if (local_63 != 0) {
        uVar2 = CUser::GetServerGroupToPvP(param_1);
        sVar3 = strlen(local_165);
        uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
        uVar5 = RDARScriptStringManager::findString
                          ((RDARScriptStringManager *)g_scriptStringManager_,4,"game_server_msg_289"
                           ,(bool *)0x0);
        WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                  (uVar5,local_65,0,uVar4,local_165,sVar3,0,uVar2,0,0);
      }
    }
  }
  return 0;
}
```
