# CacheCharacterMemory

`_ZN5CUser20CacheCharacterMemoryEv`

`CUser::CacheCharacterMemory()`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864c85a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864c85a  _ZN5CUser20CacheCharacterMemoryEv
#           CUser::CacheCharacterMemory()
# range [0x0864c85a, 0x0864cb65]
0864c85a +0x000:  push   %ebp
0864c85b +0x001:  mov    %esp,%ebp
0864c85d +0x003:  push   %ebx
0864c85e +0x004:  sub    $0x54,%esp
0864c861 +0x007:  mov    0x8(%ebp),%eax
0864c864 +0x00a:  mov    %eax,(%esp)
0864c867 +0x00d:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864c86c +0x012:  test   %eax,%eax
0864c86e +0x014:  setne  %al
0864c871 +0x017:  test   %al,%al
0864c873 +0x019:  je     0864cb5a <+0x300>
0864c879 +0x01f:  mov    0x8(%ebp),%eax
0864c87c +0x022:  mov    %eax,(%esp)
0864c87f +0x025:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
0864c884 +0x02a:  cmp    $0x2,%eax
0864c887 +0x02d:  setle  %al
0864c88a +0x030:  test   %al,%al
0864c88c +0x032:  je     0864c898 <+0x3e>
0864c88e +0x034:  mov    $0x0,%eax
0864c893 +0x039:  jmp    0864cb5f <+0x305>
0864c898 +0x03e:  mov    0x8(%ebp),%eax
0864c89b +0x041:  mov    %eax,(%esp)
0864c89e +0x044:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
0864c8a3 +0x049:  mov    (%eax),%eax
0864c8a5 +0x04b:  mov    %eax,-0x14(%ebp)
0864c8a8 +0x04e:  mov    -0x14(%ebp),%eax
0864c8ab +0x051:  mov    %eax,0x4(%esp)
0864c8af +0x055:  mov    0x8(%ebp),%eax
0864c8b2 +0x058:  mov    %eax,(%esp)
0864c8b5 +0x05b:  call   0864df12 <_ZNK5CUser14get_charac_idxEj>  ; CUser::get_charac_idx(unsigned int) const
0864c8ba +0x060:  mov    %eax,-0x10(%ebp)
0864c8bd +0x063:  cmpl   $0x0,-0x10(%ebp)
0864c8c1 +0x067:  jns    0864c90a <+0xb0>
0864c8c3 +0x069:  movl   $0x0,0xc(%esp)
0864c8cb +0x071:  movl   $0x113c,0x8(%esp)
0864c8d3 +0x079:  movl   $&_ZZN5CUser20CacheCharacterMemoryEvE19__PRETTY_FUNCTION__,0x4(%esp)
0864c8db +0x081:  lea    -0x44(%ebp),%eax
0864c8de +0x084:  mov    %eax,(%esp)
0864c8e1 +0x087:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864c8e6 +0x08c:  mov    -0x10(%ebp),%eax
0864c8e9 +0x08f:  mov    %eax,0x8(%esp)
0864c8ed +0x093:  movl   $"get_charac_idx() return = %d",0x4(%esp)
0864c8f5 +0x09b:  lea    -0x44(%ebp),%eax
0864c8f8 +0x09e:  mov    %eax,(%esp)
0864c8fb +0x0a1:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864c900 +0x0a6:  mov    $0x0,%eax
0864c905 +0x0ab:  jmp    0864cb5f <+0x305>
0864c90a +0x0b0:  mov    -0x14(%ebp),%eax
0864c90d +0x0b3:  mov    %eax,(%esp)
0864c910 +0x0b6:  call   0848f220 <_ZN15exchange_server22AcquireCharacterMemoryEi>  ; exchange_server::AcquireCharacterMemory(int)
0864c915 +0x0bb:  mov    %eax,-0xc(%ebp)
0864c918 +0x0be:  cmpl   $0x0,-0xc(%ebp)
0864c91c +0x0c2:  jne    0864c965 <+0x10b>
0864c91e +0x0c4:  movl   $0x0,0xc(%esp)
0864c926 +0x0cc:  movl   $0x1150,0x8(%esp)
0864c92e +0x0d4:  movl   $&_ZZN5CUser20CacheCharacterMemoryEvE19__PRETTY_FUNCTION__,0x4(%esp)
0864c936 +0x0dc:  lea    -0x34(%ebp),%eax
0864c939 +0x0df:  mov    %eax,(%esp)
0864c93c +0x0e2:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864c941 +0x0e7:  mov    -0x14(%ebp),%eax
0864c944 +0x0ea:  mov    %eax,0x8(%esp)
0864c948 +0x0ee:  movl   $"AcquireCharacterMemory() return = NULL, charac_no(%d)",0x4(%esp)
0864c950 +0x0f6:  lea    -0x34(%ebp),%eax
0864c953 +0x0f9:  mov    %eax,(%esp)
0864c956 +0x0fc:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864c95b +0x101:  mov    $0x0,%eax
0864c960 +0x106:  jmp    0864cb5f <+0x305>
0864c965 +0x10b:  mov    -0xc(%ebp),%eax
0864c968 +0x10e:  add    $0x703,%eax
0864c96d +0x113:  mov    %eax,0x4(%esp)
0864c971 +0x117:  mov    0x8(%ebp),%eax
0864c974 +0x11a:  mov    %eax,(%esp)
0864c977 +0x11d:  call   086769b4 <_ZN5CUser11GetRentInfoER18SIG_LOAD_INVENTORY>  ; CUser::GetRentInfo(SIG_LOAD_INVENTORY&)
0864c97c +0x122:  mov    -0xc(%ebp),%eax
0864c97f +0x125:  mov    %eax,0x4(%esp)
0864c983 +0x129:  mov    0x8(%ebp),%eax
0864c986 +0x12c:  mov    %eax,(%esp)
0864c989 +0x12f:  call   0864bc04 <_ZNK5CUser13GetCharacInfoEP15SIG_LOAD_CHARAC>  ; CUser::GetCharacInfo(SIG_LOAD_CHARAC*) const
0864c98e +0x134:  mov    -0xc(%ebp),%eax
0864c991 +0x137:  add    $0x703,%eax
0864c996 +0x13c:  mov    %eax,0x4(%esp)
0864c99a +0x140:  mov    0x8(%ebp),%eax
0864c99d +0x143:  mov    %eax,(%esp)
0864c9a0 +0x146:  call   0864d4ba <_ZN5CUser16GetInventoryInfoEP18SIG_LOAD_INVENTORY>  ; CUser::GetInventoryInfo(SIG_LOAD_INVENTORY*)
0864c9a5 +0x14b:  mov    -0xc(%ebp),%eax
0864c9a8 +0x14e:  lea    &_ZL14gUnicodeBuffer+0xb623(%eax),%ebx
0864c9ae +0x154:  mov    0x8(%ebp),%eax
0864c9b1 +0x157:  mov    %eax,(%esp)
0864c9b4 +0x15a:  call   0819a8a6 <_GLOBAL__I__ZN4ARAD10DISPATCHER23Arad_InternalDispatcherC2Ev+0x58c>  ; global constructors keyed to ARAD::DISPATCHER::Arad_InternalDispatcher::Arad_InternalDispatcher()+0x58c
0864c9b9 +0x15f:  mov    %ebx,0x4(%esp)
0864c9bd +0x163:  mov    %eax,(%esp)
0864c9c0 +0x166:  call   086abad6 <_ZNK9UserQuest9get_questEP14SIG_LOAD_QUEST>  ; UserQuest::get_quest(SIG_LOAD_QUEST*) const
0864c9c5 +0x16b:  mov    -0xc(%ebp),%eax
0864c9c8 +0x16e:  add    $&_ZL14gUnicodeBuffer+0x12c2b,%eax
0864c9cd +0x173:  mov    %eax,0x4(%esp)
0864c9d1 +0x177:  mov    0x8(%ebp),%eax
0864c9d4 +0x17a:  mov    %eax,(%esp)
0864c9d7 +0x17d:  call   0867846e <_ZNK5CUser9GetTicketEP15SIG_LOAD_TICKET>  ; CUser::GetTicket(SIG_LOAD_TICKET*) const
0864c9dc +0x182:  mov    -0xc(%ebp),%eax
0864c9df +0x185:  add    $&_ZL14gUnicodeBuffer+0x12dc7,%eax
0864c9e4 +0x18a:  mov    %eax,0x4(%esp)
0864c9e8 +0x18e:  mov    0x8(%ebp),%eax
0864c9eb +0x191:  mov    %eax,(%esp)
0864c9ee +0x194:  call   0864de58 <_ZNK5CUser15GetDungeonClearEP22SIG_LOAD_DUNGEON_CLEAR>  ; CUser::GetDungeonClear(SIG_LOAD_DUNGEON_CLEAR*) const
0864c9f3 +0x199:  mov    -0xc(%ebp),%eax
0864c9f6 +0x19c:  add    $&_ZL14gUnicodeBuffer+0x145d7,%eax
0864c9fb +0x1a1:  mov    %eax,0x4(%esp)
0864c9ff +0x1a5:  mov    0x8(%ebp),%eax
0864ca02 +0x1a8:  mov    %eax,(%esp)
0864ca05 +0x1ab:  call   0867f1d4 <_ZNK5CUser17GetBlackListCountEP19SIG_REQ_BLACK_COUNT>  ; CUser::GetBlackListCount(SIG_REQ_BLACK_COUNT*) const
0864ca0a +0x1b0:  mov    -0xc(%ebp),%eax
0864ca0d +0x1b3:  add    $&_ZL14gUnicodeBuffer+0x145e7,%eax
0864ca12 +0x1b8:  mov    %eax,0x4(%esp)
0864ca16 +0x1bc:  mov    0x8(%ebp),%eax
0864ca19 +0x1bf:  mov    %eax,(%esp)
0864ca1c +0x1c2:  call   08121616 <_ZN8APSystem24CDBAndExchangeServerProc24GetActionPointFromMemoryERK5CUserRNS_22_SIG_LOAD_ACTION_POINTE>  ; APSystem::CDBAndExchangeServerProc::GetActionPointFromMemory(CUser const&, APSystem::_SIG_LOAD_ACTION_POINT&)
0864ca21 +0x1c7:  movl   $0xc,0x4(%esp)
0864ca29 +0x1cf:  mov    0x8(%ebp),%eax
0864ca2c +0x1d2:  mov    %eax,(%esp)
0864ca2f +0x1d5:  call   0828b5de <_GLOBAL__I__ZN13CAccountCargoC2Ev+0x53>  ; global constructors keyed to CAccountCargo::CAccountCargo()+0x53
0864ca34 +0x1da:  mov    (%eax),%edx
0864ca36 +0x1dc:  add    $0x8,%edx
0864ca39 +0x1df:  mov    (%edx),%ecx
0864ca3b +0x1e1:  mov    -0xc(%ebp),%edx
0864ca3e +0x1e4:  add    $&_ZL12gTCharBuffer+0x2354,%edx
0864ca44 +0x1ea:  mov    %edx,0x4(%esp)
0864ca48 +0x1ee:  mov    %eax,(%esp)
0864ca4b +0x1f1:  call   *%ecx
0864ca4d +0x1f3:  mov    -0xc(%ebp),%eax
0864ca50 +0x1f6:  add    $&_ZL14gUnicodeBuffer+0x152d8,%eax
0864ca55 +0x1fb:  mov    %eax,0x4(%esp)
0864ca59 +0x1ff:  mov    0x8(%ebp),%eax
0864ca5c +0x202:  mov    %eax,(%esp)
0864ca5f +0x205:  call   0813394c <_ZN12advancealtar23DBAndExchangeServerProc13getFromMemoryERK5CUserRNS_25_CharacAdvanceAltarDbDataE>  ; advancealtar::DBAndExchangeServerProc::getFromMemory(CUser const&, advancealtar::_CharacAdvanceAltarDbData&)
0864ca64 +0x20a:  mov    -0xc(%ebp),%eax
0864ca67 +0x20d:  add    $&_ZL14gUnicodeBuffer+0x157f4,%eax
0864ca6c +0x212:  mov    %eax,0x4(%esp)
0864ca70 +0x216:  mov    0x8(%ebp),%eax
0864ca73 +0x219:  mov    %eax,(%esp)
0864ca76 +0x21c:  call   0867794c <_ZNK5CUser10GetEtcInfoEP12SIG_LOAD_ETC>  ; CUser::GetEtcInfo(SIG_LOAD_ETC*) const
0864ca7b +0x221:  mov    -0xc(%ebp),%eax
0864ca7e +0x224:  mov    0x686(%eax),%edx
0864ca84 +0x22a:  mov    -0xc(%ebp),%eax
0864ca87 +0x22d:  mov    %edx,&_ZL14gUnicodeBuffer+0x15800(%eax)
0864ca8d +0x233:  mov    -0xc(%ebp),%eax
0864ca90 +0x236:  mov    &_ZL14gUnicodeBuffer+0x15800(%eax),%edx
0864ca96 +0x23c:  mov    -0xc(%ebp),%eax
0864ca99 +0x23f:  mov    %edx,0x70b(%eax)
0864ca9f +0x245:  mov    0x8(%ebp),%eax
0864caa2 +0x248:  lea    0x8d0fd(%eax),%edx
0864caa8 +0x24e:  mov    -0xc(%ebp),%eax
0864caab +0x251:  add    $0x3f850,%eax
0864cab0 +0x256:  movl   $0xc,0x8(%esp)
0864cab8 +0x25e:  mov    %edx,0x4(%esp)
0864cabc +0x262:  mov    %eax,(%esp)
0864cabf +0x265:  call   0807d8a0 <_init+0x198>
0864cac4 +0x26a:  mov    -0xc(%ebp),%eax
0864cac7 +0x26d:  mov    %eax,0x4(%esp)
0864cacb +0x271:  mov    -0x14(%ebp),%eax
0864cace +0x274:  mov    %eax,(%esp)
0864cad1 +0x277:  call   0848f258 <_ZN15exchange_server20CacheCharacterMemoryEiP20CACHE_CHARACTER_TYPE>  ; exchange_server::CacheCharacterMemory(int, CACHE_CHARACTER_TYPE*)
0864cad6 +0x27c:  xor    $0x1,%eax
0864cad9 +0x27f:  test   %al,%al
0864cadb +0x281:  je     0864cb25 <+0x2cb>
0864cadd +0x283:  mov    -0xc(%ebp),%eax
0864cae0 +0x286:  mov    %eax,(%esp)
0864cae3 +0x289:  call   0848f23c <_ZN15exchange_server19FreeCharacterMemoryEP20CACHE_CHARACTER_TYPE>  ; exchange_server::FreeCharacterMemory(CACHE_CHARACTER_TYPE*)
0864cae8 +0x28e:  movl   $0x0,0xc(%esp)
0864caf0 +0x296:  movl   $0x1190,0x8(%esp)
0864caf8 +0x29e:  movl   $&_ZZN5CUser20CacheCharacterMemoryEvE19__PRETTY_FUNCTION__,0x4(%esp)
0864cb00 +0x2a6:  lea    -0x24(%ebp),%eax
0864cb03 +0x2a9:  mov    %eax,(%esp)
0864cb06 +0x2ac:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
0864cb0b +0x2b1:  movl   $"CacheCharacterMemory() return = false",0x4(%esp)
0864cb13 +0x2b9:  lea    -0x24(%ebp),%eax
0864cb16 +0x2bc:  mov    %eax,(%esp)
0864cb19 +0x2bf:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
0864cb1e +0x2c4:  mov    $0x0,%eax
0864cb23 +0x2c9:  jmp    0864cb5f <+0x305>
0864cb25 +0x2cb:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0864cb2a +0x2d0:  mov    %eax,(%esp)
0864cb2d +0x2d3:  call   0814aaca <_GLOBAL__I__ZN8WongWork9CBossPlay5resetEv+0x869>  ; global constructors keyed to WongWork::CBossPlay::reset()+0x869
0864cb32 +0x2d8:  mov    %eax,0x4(%esp)
0864cb36 +0x2dc:  mov    0x8(%ebp),%eax
0864cb39 +0x2df:  mov    %eax,(%esp)
0864cb3c +0x2e2:  call   0822fd6e <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5418>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5418
0864cb41 +0x2e7:  mov    -0x14(%ebp),%eax
0864cb44 +0x2ea:  mov    %eax,0x4(%esp)
0864cb48 +0x2ee:  mov    0x8(%ebp),%eax
0864cb4b +0x2f1:  mov    %eax,(%esp)
0864cb4e +0x2f4:  call   0822fd5c <_GLOBAL__I__ZN18DisPatcher_BuyItem4readER9PacketBufR8MSG_BASE+0x5406>  ; global constructors keyed to DisPatcher_BuyItem::read(PacketBuf&, MSG_BASE&)+0x5406
0864cb53 +0x2f9:  mov    $0x1,%eax
0864cb58 +0x2fe:  jmp    0864cb5f <+0x305>
0864cb5a +0x300:  mov    $0x0,%eax
0864cb5f +0x305:  add    $0x54,%esp
0864cb62 +0x308:  pop    %ebx
0864cb63 +0x309:  pop    %ebp
0864cb64 +0x30a:  ret
0864cb65 +0x30b:  nop
```

## 反编译 C

```c
// CUser::CacheCharacterMemory @ 0x864c85a

/* CUser::CacheCharacterMemory() */

undefined4 __thiscall CUser::CacheCharacterMemory(CUser *this)

{
  SIG_LOAD_QUEST *pSVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  UserQuest *this_00;
  int *piVar6;
  CEnvironment *this_01;
  cMyTrace local_48 [16];
  cMyTrace local_38 [16];
  cMyTrace local_28 [16];
  uint local_18;
  int local_14;
  SIG_LOAD_CHARAC *local_10;
  
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    iVar3 = get_state(this);
    if (iVar3 < 3) {
      uVar4 = 0;
    }
    else {
      puVar5 = (uint *)CUserCharacInfo::getCurCharacR((CUserCharacInfo *)this);
      local_18 = *puVar5;
      local_14 = get_charac_idx(this,local_18);
      if (local_14 < 0) {
        cMyTrace::cMyTrace(local_48,"bool CUser::CacheCharacterMemory()",0x113c,0);
        cMyTrace::operator()(local_48,"get_charac_idx() return = %d",local_14);
        uVar4 = 0;
      }
      else {
        local_10 = (SIG_LOAD_CHARAC *)exchange_server::AcquireCharacterMemory(local_18);
        if (local_10 == (SIG_LOAD_CHARAC *)0x0) {
          cMyTrace::cMyTrace(local_38,"bool CUser::CacheCharacterMemory()",0x1150,0);
          cMyTrace::operator()
                    (local_38,"AcquireCharacterMemory() return = NULL, charac_no(%d)",local_18);
          uVar4 = 0;
        }
        else {
          GetRentInfo(this,(SIG_LOAD_INVENTORY *)(local_10 + 0x703));
          GetCharacInfo(this,local_10);
          GetInventoryInfo(this,(SIG_LOAD_INVENTORY *)(local_10 + 0x703));
          pSVar1 = (SIG_LOAD_QUEST *)(local_10 + 0x15b4f);
          this_00 = (UserQuest *)getCurCharacQuestR(this);
          UserQuest::get_quest(this_00,pSVar1);
          GetTicket(this,(SIG_LOAD_TICKET *)(local_10 + 0x1d157));
          GetDungeonClear(this,(SIG_LOAD_DUNGEON_CLEAR *)(local_10 + 0x1d2f3));
          GetBlackListCount(this,(SIG_REQ_BLACK_COUNT *)(local_10 + 0x1eb03));
          APSystem::CDBAndExchangeServerProc::GetActionPointFromMemory
                    (this,(_SIG_LOAD_ACTION_POINT *)(local_10 + 0x1eb13));
          piVar6 = (int *)GetCharacExpandDataR(this,0xc);
          (**(code **)(*piVar6 + 8))(piVar6,local_10 + 0x34884);
          advancealtar::DBAndExchangeServerProc::getFromMemory
                    (this,(_CharacAdvanceAltarDbData *)(local_10 + 0x1f804));
          GetEtcInfo(this,(SIG_LOAD_ETC *)(local_10 + 0x1fd20));
          *(undefined4 *)(local_10 + 0x1fd2c) = *(undefined4 *)(local_10 + 0x686);
          *(undefined4 *)(local_10 + 0x70b) = *(undefined4 *)(local_10 + 0x1fd2c);
          memcpy(local_10 + 0x3f850,this + 0x8d0fd,0xc);
          cVar2 = exchange_server::CacheCharacterMemory(local_18,(CACHE_CHARACTER_TYPE *)local_10);
          if (cVar2 == '\x01') {
            this_01 = (CEnvironment *)G_CEnvironment();
            iVar3 = CEnvironment::get_channel_no(this_01);
            SetLastLoginChannelNo(this,iVar3);
            SetLastLoginCharacNo(this,local_18);
            uVar4 = 1;
          }
          else {
            exchange_server::FreeCharacterMemory((CACHE_CHARACTER_TYPE *)local_10);
            cMyTrace::cMyTrace(local_28,"bool CUser::CacheCharacterMemory()",0x1190,0);
            cMyTrace::operator()(local_28,"CacheCharacterMemory() return = false");
            uVar4 = 0;
          }
        }
      }
    }
  }
  return uVar4;
}
```
