# _send_reward_item

`_ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii`

`Inter_VillageAttackedReward::_send_reward_item(CUser*, unsigned long, int, int)`

| 类 | 地址 |
|---|---|
| `Inter_VillageAttackedReward` | `0x084e0390` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e0390  _ZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermii
#           Inter_VillageAttackedReward::_send_reward_item(CUser*, unsigned long, int, int)
# range [0x084e0390, 0x084e05c1]
084e0390 +0x000:  push   %ebp
084e0391 +0x001:  mov    %esp,%ebp
084e0393 +0x003:  push   %edi
084e0394 +0x004:  push   %esi
084e0395 +0x005:  push   %ebx
084e0396 +0x006:  sub    $0x19c,%esp
084e039c +0x00c:  lea    -0x73(%ebp),%eax
084e039f +0x00f:  mov    %eax,(%esp)
084e03a2 +0x012:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084e03a7 +0x017:  mov    0x10(%ebp),%eax
084e03aa +0x01a:  mov    %eax,-0x71(%ebp)
084e03ad +0x01d:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084e03b2 +0x022:  mov    0xc(%eax),%eax
084e03b5 +0x025:  mov    0x14(%ebp),%edx
084e03b8 +0x028:  mov    %edx,0xc(%esp)
084e03bc +0x02c:  lea    -0x73(%ebp),%edx
084e03bf +0x02f:  mov    %edx,0x8(%esp)
084e03c3 +0x033:  movl   $0x0,0x4(%esp)
084e03cb +0x03b:  mov    %eax,(%esp)
084e03ce +0x03e:  call   08511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>  ; CItemList::create_item(ENUM_ITEM_CREATE_TYPE, Inven_Item&, int)
084e03d3 +0x043:  mov    -0x71(%ebp),%eax
084e03d6 +0x046:  cmp    $0xffffffff,%eax
084e03d9 +0x049:  jne    084e0413 <+0x83>
084e03db +0x04b:  mov    -0x71(%ebp),%eax
084e03de +0x04e:  mov    %eax,0x14(%esp)
084e03e2 +0x052:  movl   $"VillageAttackedReward Invalid Item Index [item:%u]",0x10(%esp)
084e03ea +0x05a:  movl   $0x4dbc,0xc(%esp)
084e03f2 +0x062:  movl   $&_ZZN27Inter_VillageAttackedReward17_send_reward_itemEP5CUsermiiE19__PRETTY_FUNCTION__,0x8(%esp)
084e03fa +0x06a:  movl   $"InterDispatcher.cpp",0x4(%esp)
084e0402 +0x072:  movl   $0x1,(%esp)
084e0409 +0x079:  call   08ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>  ; LogManager::logFormat(int, char const*, char const*, int, char const*, ...)
084e040e +0x07e:  jmp    084e05b7 <+0x227>
084e0413 +0x083:  mov    -0x71(%ebp),%eax
084e0416 +0x086:  cmp    $0x1,%eax
084e0419 +0x089:  jne    084e0421 <+0x91>
084e041b +0x08b:  movw   $0x1,-0x68(%ebp)
084e0421 +0x091:  lea    -0x173(%ebp),%edx
084e0427 +0x097:  mov    $0x100,%ebx
084e042c +0x09c:  mov    $0x0,%eax
084e0431 +0x0a1:  mov    %edx,%ecx
084e0433 +0x0a3:  and    $0x1,%ecx
084e0436 +0x0a6:  test   %ecx,%ecx
084e0438 +0x0a8:  je     084e0442 <+0xb2>
084e043a +0x0aa:  mov    %al,(%edx)
084e043c +0x0ac:  add    $0x1,%edx
084e043f +0x0af:  sub    $0x1,%ebx
084e0442 +0x0b2:  mov    %edx,%ecx
084e0444 +0x0b4:  and    $0x2,%ecx
084e0447 +0x0b7:  test   %ecx,%ecx
084e0449 +0x0b9:  je     084e0454 <+0xc4>
084e044b +0x0bb:  mov    %ax,(%edx)
084e044e +0x0be:  add    $0x2,%edx
084e0451 +0x0c1:  sub    $0x2,%ebx
084e0454 +0x0c4:  mov    %ebx,%ecx
084e0456 +0x0c6:  shr    $0x2,%ecx
084e0459 +0x0c9:  mov    %edx,%edi
084e045b +0x0cb:  rep stos %eax,%es:(%edi)
084e045d +0x0cd:  mov    %edi,%edx
084e045f +0x0cf:  mov    %ebx,%ecx
084e0461 +0x0d1:  and    $0x2,%ecx
084e0464 +0x0d4:  test   %ecx,%ecx
084e0466 +0x0d6:  je     084e046e <+0xde>
084e0468 +0x0d8:  mov    %ax,(%edx)
084e046b +0x0db:  add    $0x2,%edx
084e046e +0x0de:  mov    %ebx,%ecx
084e0470 +0x0e0:  and    $0x1,%ecx
084e0473 +0x0e3:  test   %ecx,%ecx
084e0475 +0x0e5:  je     084e047c <+0xec>
084e0477 +0x0e7:  mov    %al,(%edx)
084e0479 +0x0e9:  add    $0x1,%edx
084e047c +0x0ec:  lea    -0x36(%ebp),%eax
084e047f +0x0ef:  mov    $0x1e,%ebx
084e0484 +0x0f4:  mov    $0x0,%edx
084e0489 +0x0f9:  mov    %eax,%ecx
084e048b +0x0fb:  and    $0x2,%ecx
084e048e +0x0fe:  test   %ecx,%ecx
084e0490 +0x100:  je     084e049b <+0x10b>
084e0492 +0x102:  mov    %dx,(%eax)
084e0495 +0x105:  add    $0x2,%eax
084e0498 +0x108:  sub    $0x2,%ebx
084e049b +0x10b:  mov    %ebx,%esi
084e049d +0x10d:  and    $0xfffffffc,%esi
084e04a0 +0x110:  mov    $0x0,%ecx
084e04a5 +0x115:  mov    %edx,(%eax,%ecx,1)
084e04a8 +0x118:  add    $0x4,%ecx
084e04ab +0x11b:  cmp    %esi,%ecx
084e04ad +0x11d:  jb     084e04a5 <+0x115>
084e04af +0x11f:  add    %ecx,%eax
084e04b1 +0x121:  mov    %ebx,%ecx
084e04b3 +0x123:  and    $0x2,%ecx
084e04b6 +0x126:  test   %ecx,%ecx
084e04b8 +0x128:  je     084e04c0 <+0x130>
084e04ba +0x12a:  mov    %dx,(%eax)
084e04bd +0x12d:  add    $0x2,%eax
084e04c0 +0x130:  mov    %ebx,%ecx
084e04c2 +0x132:  and    $0x1,%ecx
084e04c5 +0x135:  test   %ecx,%ecx
084e04c7 +0x137:  je     084e04ce <+0x13e>
084e04c9 +0x139:  mov    %dl,(%eax)
084e04cb +0x13b:  add    $0x1,%eax
084e04ce +0x13e:  movl   $0x0,0xc(%esp)
084e04d6 +0x146:  movl   $"game_server_msg_124",0x8(%esp)
084e04de +0x14e:  movl   $0x4,0x4(%esp)
084e04e6 +0x156:  movl   $&g_scriptStringManager_,(%esp)
084e04ed +0x15d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e04f2 +0x162:  movl   $0x1d,0x8(%esp)
084e04fa +0x16a:  mov    %eax,0x4(%esp)
084e04fe +0x16e:  lea    -0x36(%ebp),%eax
084e0501 +0x171:  mov    %eax,(%esp)
084e0504 +0x174:  call   0807d8d0 <_init+0x1c8>
084e0509 +0x179:  movl   $0x0,0xc(%esp)
084e0511 +0x181:  movl   $"game_server_msg_125",0x8(%esp)
084e0519 +0x189:  movl   $0x4,0x4(%esp)
084e0521 +0x191:  movl   $&g_scriptStringManager_,(%esp)
084e0528 +0x198:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e052d +0x19d:  movl   $0xff,0x8(%esp)
084e0535 +0x1a5:  mov    %eax,0x4(%esp)
084e0539 +0x1a9:  lea    -0x173(%ebp),%eax
084e053f +0x1af:  mov    %eax,(%esp)
084e0542 +0x1b2:  call   0807d8d0 <_init+0x1c8>
084e0547 +0x1b7:  mov    0xc(%ebp),%eax
084e054a +0x1ba:  mov    %eax,(%esp)
084e054d +0x1bd:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084e0552 +0x1c2:  mov    %eax,%ebx
084e0554 +0x1c4:  lea    -0x173(%ebp),%eax
084e055a +0x1ca:  mov    %eax,(%esp)
084e055d +0x1cd:  call   0807e3b0 <_init+0xca8>
084e0562 +0x1d2:  mov    %eax,%esi
084e0564 +0x1d4:  mov    0xc(%ebp),%eax
084e0567 +0x1d7:  mov    %eax,(%esp)
084e056a +0x1da:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e056f +0x1df:  movl   $0x0,0x24(%esp)
084e0577 +0x1e7:  movl   $0x0,0x20(%esp)
084e057f +0x1ef:  mov    %ebx,0x1c(%esp)
084e0583 +0x1f3:  movl   $0xc,0x18(%esp)
084e058b +0x1fb:  mov    %esi,0x14(%esp)
084e058f +0x1ff:  lea    -0x173(%ebp),%edx
084e0595 +0x205:  mov    %edx,0x10(%esp)
084e0599 +0x209:  mov    %eax,0xc(%esp)
084e059d +0x20d:  movl   $0x0,0x8(%esp)
084e05a5 +0x215:  lea    -0x73(%ebp),%eax
084e05a8 +0x218:  mov    %eax,0x4(%esp)
084e05ac +0x21c:  lea    -0x36(%ebp),%eax
084e05af +0x21f:  mov    %eax,(%esp)
084e05b2 +0x222:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084e05b7 +0x227:  add    $0x19c,%esp
084e05bd +0x22d:  pop    %ebx
084e05be +0x22e:  pop    %esi
084e05bf +0x22f:  pop    %edi
084e05c0 +0x230:  pop    %ebp
084e05c1 +0x231:  ret
```

## 反编译 C

```c
// Inter_VillageAttackedReward::_send_reward_item @ 0x84e0390

/* WARNING: Removing unreachable block (ram,0x084e04c9) */
/* Inter_VillageAttackedReward::_send_reward_item(CUser*, unsigned long, int, int) */

void Inter_VillageAttackedReward::_send_reward_item
               (CUser *param_1,ulong param_2,int param_3,int param_4)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  size_t sVar4;
  undefined4 uVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  bool bVar9;
  byte bVar10;
  char local_177;
  char local_176 [255];
  Inven_Item local_77 [2];
  int local_75;
  undefined2 local_6c;
  char local_3a [42];
  
  bVar10 = 0;
  Inven_Item::Inven_Item(local_77);
  local_75 = param_3;
  iVar2 = G_CDataManager();
  CItemList::create_item(*(CItemList **)(iVar2 + 0xc),0,local_77,param_4);
  if (local_75 == -1) {
    LogManager::logFormat
              (1,"InterDispatcher.cpp",
               "void Inter_VillageAttackedReward::_send_reward_item(CUser*, itemIndexOnlyServer_t, int, int)"
               ,0x4dbc,"VillageAttackedReward Invalid Item Index [item:%u]",0xffffffff);
  }
  else {
    if (local_75 == 1) {
      local_6c = 1;
    }
    pcVar7 = &local_177;
    uVar8 = 0x100;
    bVar9 = ((uint)pcVar7 & 1) != 0;
    if (bVar9) {
      local_177 = '\0';
      pcVar7 = local_176;
      uVar8 = 0xff;
    }
    if (((uint)pcVar7 & 2) != 0) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7 = pcVar7 + 2;
      uVar8 = uVar8 - 2;
    }
    for (uVar6 = uVar8 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7 = pcVar7 + ((uint)bVar10 * -2 + 1) * 4;
    }
    if ((uVar8 & 2) != 0) {
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7 = pcVar7 + 2;
    }
    if (bVar9) {
      *pcVar7 = '\0';
    }
    pcVar7 = local_3a;
    uVar8 = 0x1e;
    bVar9 = ((uint)pcVar7 & 2) != 0;
    if (bVar9) {
      local_3a[0] = '\0';
      local_3a[1] = '\0';
      pcVar7 = local_3a + 2;
      uVar8 = 0x1c;
    }
    uVar6 = 0;
    do {
      pcVar1 = pcVar7 + uVar6;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar6 = uVar6 + 4;
    } while (uVar6 < (uVar8 & 0xfffffffc));
    if (!bVar9) {
      (pcVar7 + uVar6)[0] = '\0';
      (pcVar7 + uVar6)[1] = '\0';
    }
    pcVar7 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_124",(bool *)0x0);
    strncpy(local_3a,pcVar7,0x1d);
    pcVar7 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_125",(bool *)0x0);
    strncpy(&local_177,pcVar7,0xff);
    uVar3 = CUser::GetServerGroup((CUser *)param_2);
    sVar4 = strlen(&local_177);
    uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (local_3a,local_77,0,uVar5,&local_177,sVar4,0xc,uVar3,0,0);
  }
  return;
}
```
