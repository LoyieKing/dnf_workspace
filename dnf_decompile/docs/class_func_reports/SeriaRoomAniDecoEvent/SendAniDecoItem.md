# SendAniDecoItem

`_ZN21SeriaRoomAniDecoEvent15SendAniDecoItemER5CUser`

`SeriaRoomAniDecoEvent::SendAniDecoItem(CUser&)`

| 类 | 地址 |
|---|---|
| `SeriaRoomAniDecoEvent` | `0x0827b75a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0827b75a  _ZN21SeriaRoomAniDecoEvent15SendAniDecoItemER5CUser
#           SeriaRoomAniDecoEvent::SendAniDecoItem(CUser&)
# range [0x0827b75a, 0x0827b999]
0827b75a +0x000:  push   %ebp
0827b75b +0x001:  mov    %esp,%ebp
0827b75d +0x003:  push   %edi
0827b75e +0x004:  push   %esi
0827b75f +0x005:  push   %ebx
0827b760 +0x006:  sub    $0x19c,%esp
0827b766 +0x00c:  mov    0xc(%ebp),%edx
0827b769 +0x00f:  lea    -0x24(%ebp),%eax
0827b76c +0x012:  mov    %edx,0x4(%esp)
0827b770 +0x016:  mov    %eax,(%esp)
0827b773 +0x019:  call   0822fb96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5240>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5240
0827b778 +0x01e:  sub    $0x4,%esp
0827b77b +0x021:  movzwl -0x24(%ebp),%ebx
0827b77f +0x025:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827b784 +0x02a:  mov    %eax,(%esp)
0827b787 +0x02d:  call   08365d0e <_ZN12CDataManager14maxAniDecoItemEv>  ; CDataManager::maxAniDecoItem()
0827b78c +0x032:  cmp    %ax,%bx
0827b78f +0x035:  setl   %al
0827b792 +0x038:  test   %al,%al
0827b794 +0x03a:  je     0827b98f <+0x235>
0827b79a +0x040:  mov    0xc(%ebp),%edx
0827b79d +0x043:  lea    -0x28(%ebp),%eax
0827b7a0 +0x046:  mov    %edx,0x4(%esp)
0827b7a4 +0x04a:  mov    %eax,(%esp)
0827b7a7 +0x04d:  call   0822fb96 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5240>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5240
0827b7ac +0x052:  sub    $0x4,%esp
0827b7af +0x055:  movzwl -0x28(%ebp),%eax
0827b7b3 +0x059:  movswl %ax,%ebx
0827b7b6 +0x05c:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827b7bb +0x061:  mov    %ebx,0x4(%esp)
0827b7bf +0x065:  mov    %eax,(%esp)
0827b7c2 +0x068:  call   08365de4 <_ZN12CDataManager23getSeriaRoomAniDecoItemEi>  ; CDataManager::getSeriaRoomAniDecoItem(int)
0827b7c7 +0x06d:  mov    %eax,-0x20(%ebp)
0827b7ca +0x070:  cmpl   $0x0,-0x20(%ebp)
0827b7ce +0x074:  je     0827b98b <+0x231>
0827b7d4 +0x07a:  lea    -0x65(%ebp),%eax
0827b7d7 +0x07d:  mov    %eax,(%esp)
0827b7da +0x080:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
0827b7df +0x085:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
0827b7e4 +0x08a:  mov    -0x20(%ebp),%edx
0827b7e7 +0x08d:  mov    %edx,0x4(%esp)
0827b7eb +0x091:  mov    %eax,(%esp)
0827b7ee +0x094:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
0827b7f3 +0x099:  mov    %eax,-0x1c(%ebp)
0827b7f6 +0x09c:  cmpl   $0x0,-0x1c(%ebp)
0827b7fa +0x0a0:  je     0827b98f <+0x235>
0827b800 +0x0a6:  mov    -0x1c(%ebp),%eax
0827b803 +0x0a9:  mov    %eax,(%esp)
0827b806 +0x0ac:  call   08110c48 <_GLOBAL__I__ZN13EventClassify12CEventEntityC2Ev+0x15a>  ; global constructors keyed to EventClassify::CEventEntity::CEventEntity()+0x15a
0827b80b +0x0b1:  mov    %eax,-0x63(%ebp)
0827b80e +0x0b4:  mov    -0x1c(%ebp),%eax
0827b811 +0x0b7:  mov    (%eax),%eax
0827b813 +0x0b9:  add    $0x8,%eax
0827b816 +0x0bc:  mov    (%eax),%edx
0827b818 +0x0be:  lea    -0x65(%ebp),%eax
0827b81b +0x0c1:  mov    %eax,0x4(%esp)
0827b81f +0x0c5:  mov    -0x1c(%ebp),%eax
0827b822 +0x0c8:  mov    %eax,(%esp)
0827b825 +0x0cb:  call   *%edx
0827b827 +0x0cd:  movl   $0x1,0x4(%esp)
0827b82f +0x0d5:  lea    -0x65(%ebp),%eax
0827b832 +0x0d8:  mov    %eax,(%esp)
0827b835 +0x0db:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
0827b83a +0x0e0:  movl   $0x0,0xc(%esp)
0827b842 +0x0e8:  movl   $"game_server_msg_290",0x8(%esp)
0827b84a +0x0f0:  movl   $0x4,0x4(%esp)
0827b852 +0x0f8:  movl   $&g_scriptStringManager_,(%esp)
0827b859 +0x0ff:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0827b85e +0x104:  movl   $0xff,0x8(%esp)
0827b866 +0x10c:  mov    %eax,0x4(%esp)
0827b86a +0x110:  lea    -0x165(%ebp),%eax
0827b870 +0x116:  mov    %eax,(%esp)
0827b873 +0x119:  call   0807d8d0 <_init+0x1c8>
0827b878 +0x11e:  mov    -0x63(%ebp),%eax
0827b87b +0x121:  test   %eax,%eax
0827b87d +0x123:  je     0827b98e <+0x234>
0827b883 +0x129:  mov    0xc(%ebp),%eax
0827b886 +0x12c:  mov    %eax,(%esp)
0827b889 +0x12f:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
0827b88e +0x134:  mov    %eax,%esi
0827b890 +0x136:  lea    -0x165(%ebp),%eax
0827b896 +0x13c:  mov    %eax,(%esp)
0827b899 +0x13f:  call   0807e3b0 <_init+0xca8>
0827b89e +0x144:  mov    %eax,%edi
0827b8a0 +0x146:  mov    0xc(%ebp),%eax
0827b8a3 +0x149:  mov    %eax,(%esp)
0827b8a6 +0x14c:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0827b8ab +0x151:  mov    %eax,%ebx
0827b8ad +0x153:  movl   $0x0,0xc(%esp)
0827b8b5 +0x15b:  movl   $"game_server_msg_289",0x8(%esp)
0827b8bd +0x163:  movl   $0x4,0x4(%esp)
0827b8c5 +0x16b:  movl   $&g_scriptStringManager_,(%esp)
0827b8cc +0x172:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
0827b8d1 +0x177:  movl   $0x0,0x24(%esp)
0827b8d9 +0x17f:  movl   $0x0,0x20(%esp)
0827b8e1 +0x187:  mov    %esi,0x1c(%esp)
0827b8e5 +0x18b:  movl   $0x0,0x18(%esp)
0827b8ed +0x193:  mov    %edi,0x14(%esp)
0827b8f1 +0x197:  lea    -0x165(%ebp),%edx
0827b8f7 +0x19d:  mov    %edx,0x10(%esp)
0827b8fb +0x1a1:  mov    %ebx,0xc(%esp)
0827b8ff +0x1a5:  movl   $0x0,0x8(%esp)
0827b907 +0x1ad:  lea    -0x65(%ebp),%edx
0827b90a +0x1b0:  mov    %edx,0x4(%esp)
0827b90e +0x1b4:  mov    %eax,(%esp)
0827b911 +0x1b7:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
0827b916 +0x1bc:  movzwl -0x28(%ebp),%eax
0827b91a +0x1c0:  add    $0x1,%eax
0827b91d +0x1c3:  mov    %ax,-0x28(%ebp)
0827b921 +0x1c7:  mov    0xc(%ebp),%eax
0827b924 +0x1ca:  mov    -0x28(%ebp),%edx
0827b927 +0x1cd:  mov    %edx,0x4(%esp)
0827b92b +0x1d1:  mov    %eax,(%esp)
0827b92e +0x1d4:  call   0822fb78 <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5222>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5222
0827b933 +0x1d9:  movzwl -0x26(%ebp),%eax
0827b937 +0x1dd:  cwtl
0827b938 +0x1de:  mov    %eax,-0x16c(%ebp)
0827b93e +0x1e4:  movzwl -0x28(%ebp),%eax
0827b942 +0x1e8:  movswl %ax,%edi
0827b945 +0x1eb:  mov    0xc(%ebp),%eax
0827b948 +0x1ee:  mov    %eax,(%esp)
0827b94b +0x1f1:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
0827b950 +0x1f6:  mov    %eax,%esi
0827b952 +0x1f8:  mov    0xc(%ebp),%eax
0827b955 +0x1fb:  mov    %eax,(%esp)
0827b958 +0x1fe:  call   0864a97c <_ZNK5CUser19GetServerGroupToPvPEv>  ; CUser::GetServerGroupToPvP() const
0827b95d +0x203:  movswl %ax,%ebx
0827b960 +0x206:  mov    0xc(%ebp),%eax
0827b963 +0x209:  mov    %eax,(%esp)
0827b966 +0x20c:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
0827b96b +0x211:  mov    -0x16c(%ebp),%edx
0827b971 +0x217:  mov    %edx,0x10(%esp)
0827b975 +0x21b:  mov    %edi,0xc(%esp)
0827b979 +0x21f:  mov    %esi,0x8(%esp)
0827b97d +0x223:  mov    %ebx,0x4(%esp)
0827b981 +0x227:  mov    %eax,(%esp)
0827b984 +0x22a:  call   0844af74 <_ZN31DB_UpdateSeriaRoomAnimationDeco11makeRequestEjsiss>  ; DB_UpdateSeriaRoomAnimationDeco::makeRequest(unsigned int, short, int, short, short)
0827b989 +0x22f:  jmp    0827b98f <+0x235>
0827b98b +0x231:  nop
0827b98c +0x232:  jmp    0827b98f <+0x235>
0827b98e +0x234:  nop
0827b98f +0x235:  lea    -0xc(%ebp),%esp
0827b992 +0x238:  add    $0x0,%esp
0827b995 +0x23b:  pop    %ebx
0827b996 +0x23c:  pop    %esi
0827b997 +0x23d:  pop    %edi
0827b998 +0x23e:  pop    %ebp
0827b999 +0x23f:  ret
```

## 反编译 C

```c
// SeriaRoomAniDecoEvent::SendAniDecoItem @ 0x827b75a

/* SeriaRoomAniDecoEvent::SendAniDecoItem(CUser&) */

void __thiscall SeriaRoomAniDecoEvent::SendAniDecoItem(SeriaRoomAniDecoEvent *this,CUser *param_1)

{
  short sVar1;
  short sVar2;
  short sVar3;
  CDataManager *pCVar4;
  int iVar5;
  char *__src;
  undefined4 uVar6;
  size_t sVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  char local_169 [256];
  Inven_Item local_69 [2];
  int local_67;
  undefined4 local_2c;
  short local_28;
  int local_24;
  CItem *local_20;
  
  CUserCharacInfo::getSeriaRoomAniDecoInfo();
  pCVar4 = (CDataManager *)G_CDataManager();
  sVar2 = CDataManager::maxAniDecoItem(pCVar4);
  if (local_28 < sVar2) {
    CUserCharacInfo::getSeriaRoomAniDecoInfo();
    iVar5 = G_CDataManager();
    local_24 = CDataManager::getSeriaRoomAniDecoItem(iVar5);
    if (local_24 != 0) {
      Inven_Item::Inven_Item(local_69);
      pCVar4 = (CDataManager *)G_CDataManager();
      local_20 = (CItem *)CDataManager::find_item(pCVar4,local_24);
      if (local_20 != (CItem *)0x0) {
        local_67 = CItem::get_index(local_20);
        (**(code **)(*(int *)local_20 + 8))(local_20,local_69);
        Inven_Item::set_add_info(local_69,1);
        __src = (char *)RDARScriptStringManager::findString
                                  ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                   "game_server_msg_290",(bool *)0x0);
        strncpy(local_169,__src,0xff);
        if (local_67 != 0) {
          uVar6 = CUser::GetServerGroupToPvP(param_1);
          sVar7 = strlen(local_169);
          uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          uVar9 = RDARScriptStringManager::findString
                            ((RDARScriptStringManager *)g_scriptStringManager_,4,
                             "game_server_msg_289",(bool *)0x0);
          WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                    (uVar9,local_69,0,uVar8,local_169,sVar7,0,uVar6,0,0);
          local_2c = CONCAT22(local_2c._2_2_,(short)local_2c + 1);
          CUserCharacInfo::setSeriaRoomAniDecoInfo((CUserCharacInfo *)param_1,local_2c);
          sVar1 = local_2c._2_2_;
          sVar2 = (short)local_2c;
          iVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
          sVar3 = CUser::GetServerGroupToPvP(param_1);
          uVar10 = CUser::get_acc_id(param_1);
          DB_UpdateSeriaRoomAnimationDeco::makeRequest(uVar10,sVar3,iVar5,sVar2,sVar1);
        }
      }
    }
  }
  return;
}
```
