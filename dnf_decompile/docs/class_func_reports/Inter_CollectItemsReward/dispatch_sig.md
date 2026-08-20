# dispatch_sig

`_ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci`

`Inter_CollectItemsReward::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_CollectItemsReward` | `0x084e71ee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084e71ee  _ZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPci
#           Inter_CollectItemsReward::dispatch_sig(CUser*, char*, int)
# range [0x084e71ee, 0x084e7597]
084e71ee +0x000:  push   %ebp
084e71ef +0x001:  mov    %esp,%ebp
084e71f1 +0x003:  push   %edi
084e71f2 +0x004:  push   %esi
084e71f3 +0x005:  push   %ebx
084e71f4 +0x006:  sub    $0x1bc,%esp
084e71fa +0x00c:  mov    0x10(%ebp),%eax
084e71fd +0x00f:  mov    %eax,-0x20(%ebp)
084e7200 +0x012:  mov    0xc(%ebp),%eax
084e7203 +0x015:  mov    %eax,(%esp)
084e7206 +0x018:  call   08120432 <_GLOBAL__I__Z23DecreaseTradeLimitCountR10Inven_Item+0x58>  ; global constructors keyed to DecreaseTradeLimitCount(Inven_Item&)+0x58
084e720b +0x01d:  test   %eax,%eax
084e720d +0x01f:  sete   %al
084e7210 +0x022:  test   %al,%al
084e7212 +0x024:  je     084e721e <+0x30>
084e7214 +0x026:  mov    $0x0,%eax
084e7219 +0x02b:  jmp    084e758d <+0x39f>
084e721e +0x030:  lea    -0x8b(%ebp),%eax
084e7224 +0x036:  mov    %eax,(%esp)
084e7227 +0x039:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084e722c +0x03e:  movl   $0x0,-0x1c(%ebp)
084e7233 +0x045:  lea    -0x18b(%ebp),%edx
084e7239 +0x04b:  mov    $0x100,%ebx
084e723e +0x050:  mov    $0x0,%eax
084e7243 +0x055:  mov    %edx,%ecx
084e7245 +0x057:  and    $0x1,%ecx
084e7248 +0x05a:  test   %ecx,%ecx
084e724a +0x05c:  je     084e7254 <+0x66>
084e724c +0x05e:  mov    %al,(%edx)
084e724e +0x060:  add    $0x1,%edx
084e7251 +0x063:  sub    $0x1,%ebx
084e7254 +0x066:  mov    %edx,%ecx
084e7256 +0x068:  and    $0x2,%ecx
084e7259 +0x06b:  test   %ecx,%ecx
084e725b +0x06d:  je     084e7266 <+0x78>
084e725d +0x06f:  mov    %ax,(%edx)
084e7260 +0x072:  add    $0x2,%edx
084e7263 +0x075:  sub    $0x2,%ebx
084e7266 +0x078:  mov    %ebx,%ecx
084e7268 +0x07a:  shr    $0x2,%ecx
084e726b +0x07d:  mov    %edx,%edi
084e726d +0x07f:  rep stos %eax,%es:(%edi)
084e726f +0x081:  mov    %edi,%edx
084e7271 +0x083:  mov    %ebx,%ecx
084e7273 +0x085:  and    $0x2,%ecx
084e7276 +0x088:  test   %ecx,%ecx
084e7278 +0x08a:  je     084e7280 <+0x92>
084e727a +0x08c:  mov    %ax,(%edx)
084e727d +0x08f:  add    $0x2,%edx
084e7280 +0x092:  mov    %ebx,%ecx
084e7282 +0x094:  and    $0x1,%ecx
084e7285 +0x097:  test   %ecx,%ecx
084e7287 +0x099:  je     084e728e <+0xa0>
084e7289 +0x09b:  mov    %al,(%edx)
084e728b +0x09d:  add    $0x1,%edx
084e728e +0x0a0:  lea    -0x4e(%ebp),%eax
084e7291 +0x0a3:  mov    $0x1e,%ebx
084e7296 +0x0a8:  mov    $0x0,%edx
084e729b +0x0ad:  mov    %eax,%ecx
084e729d +0x0af:  and    $0x2,%ecx
084e72a0 +0x0b2:  test   %ecx,%ecx
084e72a2 +0x0b4:  je     084e72ad <+0xbf>
084e72a4 +0x0b6:  mov    %dx,(%eax)
084e72a7 +0x0b9:  add    $0x2,%eax
084e72aa +0x0bc:  sub    $0x2,%ebx
084e72ad +0x0bf:  mov    %ebx,%esi
084e72af +0x0c1:  and    $0xfffffffc,%esi
084e72b2 +0x0c4:  mov    $0x0,%ecx
084e72b7 +0x0c9:  mov    %edx,(%eax,%ecx,1)
084e72ba +0x0cc:  add    $0x4,%ecx
084e72bd +0x0cf:  cmp    %esi,%ecx
084e72bf +0x0d1:  jb     084e72b7 <+0xc9>
084e72c1 +0x0d3:  add    %ecx,%eax
084e72c3 +0x0d5:  mov    %ebx,%ecx
084e72c5 +0x0d7:  and    $0x2,%ecx
084e72c8 +0x0da:  test   %ecx,%ecx
084e72ca +0x0dc:  je     084e72d2 <+0xe4>
084e72cc +0x0de:  mov    %dx,(%eax)
084e72cf +0x0e1:  add    $0x2,%eax
084e72d2 +0x0e4:  mov    %ebx,%ecx
084e72d4 +0x0e6:  and    $0x1,%ecx
084e72d7 +0x0e9:  test   %ecx,%ecx
084e72d9 +0x0eb:  je     084e72e0 <+0xf2>
084e72db +0x0ed:  mov    %dl,(%eax)
084e72dd +0x0ef:  add    $0x1,%eax
084e72e0 +0x0f2:  mov    -0x20(%ebp),%eax
084e72e3 +0x0f5:  movzbl 0x12(%eax),%eax
084e72e7 +0x0f9:  movzbl %al,%eax
084e72ea +0x0fc:  cmp    $0x1,%eax
084e72ed +0x0ff:  je     084e7368 <+0x17a>
084e72ef +0x101:  cmp    $0x2,%eax
084e72f2 +0x104:  je     084e73cd <+0x1df>
084e72f8 +0x10a:  test   %eax,%eax
084e72fa +0x10c:  jne    084e7430 <+0x242>
084e7300 +0x112:  movl   $0x21d7,-0x89(%ebp)
084e730a +0x11c:  movl   $0x1,-0x84(%ebp)
084e7314 +0x126:  mov    0xc(%ebp),%eax
084e7317 +0x129:  mov    %eax,(%esp)
084e731a +0x12c:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084e731f +0x131:  mov    %eax,%ebx
084e7321 +0x133:  movl   $0x0,0xc(%esp)
084e7329 +0x13b:  movl   $"game_server_msg_258",0x8(%esp)
084e7331 +0x143:  movl   $0x4,0x4(%esp)
084e7339 +0x14b:  movl   $&g_scriptStringManager_,(%esp)
084e7340 +0x152:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e7345 +0x157:  mov    %ebx,0xc(%esp)
084e7349 +0x15b:  mov    %eax,0x8(%esp)
084e734d +0x15f:  movl   $0xff,0x4(%esp)
084e7355 +0x167:  lea    -0x18b(%ebp),%eax
084e735b +0x16d:  mov    %eax,(%esp)
084e735e +0x170:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084e7363 +0x175:  jmp    084e7430 <+0x242>
084e7368 +0x17a:  movl   $0x21d7,-0x89(%ebp)
084e7372 +0x184:  movl   $0x1,-0x84(%ebp)
084e737c +0x18e:  mov    0xc(%ebp),%eax
084e737f +0x191:  mov    %eax,(%esp)
084e7382 +0x194:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084e7387 +0x199:  mov    %eax,%ebx
084e7389 +0x19b:  movl   $0x0,0xc(%esp)
084e7391 +0x1a3:  movl   $"game_server_msg_257",0x8(%esp)
084e7399 +0x1ab:  movl   $0x4,0x4(%esp)
084e73a1 +0x1b3:  movl   $&g_scriptStringManager_,(%esp)
084e73a8 +0x1ba:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e73ad +0x1bf:  mov    %ebx,0xc(%esp)
084e73b1 +0x1c3:  mov    %eax,0x8(%esp)
084e73b5 +0x1c7:  movl   $0xff,0x4(%esp)
084e73bd +0x1cf:  lea    -0x18b(%ebp),%eax
084e73c3 +0x1d5:  mov    %eax,(%esp)
084e73c6 +0x1d8:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084e73cb +0x1dd:  jmp    084e7430 <+0x242>
084e73cd +0x1df:  movl   $0x68c8,-0x89(%ebp)
084e73d7 +0x1e9:  movl   $0x1,-0x84(%ebp)
084e73e1 +0x1f3:  mov    0xc(%ebp),%eax
084e73e4 +0x1f6:  mov    %eax,(%esp)
084e73e7 +0x1f9:  call   08101028 <_GLOBAL__I__ZN8WongWork3IPG10CIPGHelper12getIPGStatusERNS0_13stIPGStatus_tE+0x4a>  ; global constructors keyed to WongWork::IPG::CIPGHelper::getIPGStatus(WongWork::IPG::stIPGStatus_t&)+0x4a
084e73ec +0x1fe:  mov    %eax,%ebx
084e73ee +0x200:  movl   $0x0,0xc(%esp)
084e73f6 +0x208:  movl   $"game_server_msg_259",0x8(%esp)
084e73fe +0x210:  movl   $0x4,0x4(%esp)
084e7406 +0x218:  movl   $&g_scriptStringManager_,(%esp)
084e740d +0x21f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e7412 +0x224:  mov    %ebx,0xc(%esp)
084e7416 +0x228:  mov    %eax,0x8(%esp)
084e741a +0x22c:  movl   $0xff,0x4(%esp)
084e7422 +0x234:  lea    -0x18b(%ebp),%eax
084e7428 +0x23a:  mov    %eax,(%esp)
084e742b +0x23d:  call   0858c81c <_ZN6OS_API8snprintfEPcjPKcz>  ; OS_API::snprintf(char*, unsigned int, char const*, ...)
084e7430 +0x242:  movl   $0x0,0xc(%esp)
084e7438 +0x24a:  movl   $"game_server_msg_256",0x8(%esp)
084e7440 +0x252:  movl   $0x4,0x4(%esp)
084e7448 +0x25a:  movl   $&g_scriptStringManager_,(%esp)
084e744f +0x261:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084e7454 +0x266:  movl   $0x1d,0x8(%esp)
084e745c +0x26e:  mov    %eax,0x4(%esp)
084e7460 +0x272:  lea    -0x4e(%ebp),%eax
084e7463 +0x275:  mov    %eax,(%esp)
084e7466 +0x278:  call   0807d8d0 <_init+0x1c8>
084e746b +0x27d:  mov    -0x89(%ebp),%eax
084e7471 +0x283:  mov    %eax,%ebx
084e7473 +0x285:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084e7478 +0x28a:  mov    %ebx,0x4(%esp)
084e747c +0x28e:  mov    %eax,(%esp)
084e747f +0x291:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084e7484 +0x296:  mov    %eax,-0x1c(%ebp)
084e7487 +0x299:  cmpl   $0x0,-0x1c(%ebp)
084e748b +0x29d:  jne    084e7497 <+0x2a9>
084e748d +0x29f:  mov    $0x0,%eax
084e7492 +0x2a4:  jmp    084e758d <+0x39f>
084e7497 +0x2a9:  mov    -0x1c(%ebp),%eax
084e749a +0x2ac:  mov    (%eax),%eax
084e749c +0x2ae:  add    $0x8,%eax
084e749f +0x2b1:  mov    (%eax),%edx
084e74a1 +0x2b3:  lea    -0x8b(%ebp),%eax
084e74a7 +0x2b9:  mov    %eax,0x4(%esp)
084e74ab +0x2bd:  mov    -0x1c(%ebp),%eax
084e74ae +0x2c0:  mov    %eax,(%esp)
084e74b1 +0x2c3:  call   *%edx
084e74b3 +0x2c5:  mov    0xc(%ebp),%eax
084e74b6 +0x2c8:  mov    %eax,(%esp)
084e74b9 +0x2cb:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084e74be +0x2d0:  mov    %eax,%ebx
084e74c0 +0x2d2:  lea    -0x18b(%ebp),%eax
084e74c6 +0x2d8:  mov    %eax,(%esp)
084e74c9 +0x2db:  call   0807e3b0 <_init+0xca8>
084e74ce +0x2e0:  mov    %eax,%esi
084e74d0 +0x2e2:  mov    0xc(%ebp),%eax
084e74d3 +0x2e5:  mov    %eax,(%esp)
084e74d6 +0x2e8:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e74db +0x2ed:  movl   $0x0,0x24(%esp)
084e74e3 +0x2f5:  movl   $0x1,0x20(%esp)
084e74eb +0x2fd:  mov    %ebx,0x1c(%esp)
084e74ef +0x301:  movl   $0x0,0x18(%esp)
084e74f7 +0x309:  mov    %esi,0x14(%esp)
084e74fb +0x30d:  lea    -0x18b(%ebp),%edx
084e7501 +0x313:  mov    %edx,0x10(%esp)
084e7505 +0x317:  mov    %eax,0xc(%esp)
084e7509 +0x31b:  movl   $0x0,0x8(%esp)
084e7511 +0x323:  lea    -0x8b(%ebp),%eax
084e7517 +0x329:  mov    %eax,0x4(%esp)
084e751b +0x32d:  lea    -0x4e(%ebp),%eax
084e751e +0x330:  mov    %eax,(%esp)
084e7521 +0x333:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084e7526 +0x338:  mov    -0x89(%ebp),%edi
084e752c +0x33e:  mov    0xc(%ebp),%eax
084e752f +0x341:  mov    %eax,(%esp)
084e7532 +0x344:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084e7537 +0x349:  mov    %eax,%esi
084e7539 +0x34b:  mov    0xc(%ebp),%eax
084e753c +0x34e:  mov    %eax,(%esp)
084e753f +0x351:  call   080da36e <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x50b>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x50b
084e7544 +0x356:  mov    %eax,%ebx
084e7546 +0x358:  movl   $0x0,0xc(%esp)
084e754e +0x360:  movl   $0x69c0,0x8(%esp)
084e7556 +0x368:  movl   $&_ZZN24Inter_CollectItemsReward12dispatch_sigEP5CUserPciE19__PRETTY_FUNCTION__,0x4(%esp)
084e755e +0x370:  lea    -0x30(%ebp),%eax
084e7561 +0x373:  mov    %eax,(%esp)
084e7564 +0x376:  call   0854f718 <_ZN8cMyTraceC1EPKcii>  ; cMyTrace::cMyTrace(char const*, int, int)
084e7569 +0x37b:  mov    %edi,0x10(%esp)
084e756d +0x37f:  mov    %esi,0xc(%esp)
084e7571 +0x383:  mov    %ebx,0x8(%esp)
084e7575 +0x387:  movl   $"[collect items]reward: m_id(), charac_no(), reward()",0x4(%esp)
084e757d +0x38f:  lea    -0x30(%ebp),%eax
084e7580 +0x392:  mov    %eax,(%esp)
084e7583 +0x395:  call   0854f788 <_ZN8cMyTraceclEPKcz>  ; cMyTrace::operator()(char const*, ...)
084e7588 +0x39a:  mov    $0x0,%eax
084e758d +0x39f:  add    $0x1bc,%esp
084e7593 +0x3a5:  pop    %ebx
084e7594 +0x3a6:  pop    %esi
084e7595 +0x3a7:  pop    %edi
084e7596 +0x3a8:  pop    %ebp
084e7597 +0x3a9:  ret
```

## 反编译 C

```c
// Inter_CollectItemsReward::dispatch_sig @ 0x84e71ee

/* WARNING: Removing unreachable block (ram,0x084e72db) */
/* Inter_CollectItemsReward::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CollectItemsReward::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  CDataManager *this;
  size_t sVar5;
  undefined4 uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_18f;
  char local_18e [255];
  Inven_Item local_8f [2];
  int local_8d;
  undefined4 local_88;
  char local_52 [30];
  cMyTrace local_34 [16];
  int local_24;
  int *local_20;
  
  bVar11 = 0;
  local_24 = param_3;
  iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
  if (iVar3 != 0) {
    Inven_Item::Inven_Item(local_8f);
    local_20 = (int *)0x0;
    pcVar8 = &local_18f;
    uVar9 = 0x100;
    bVar10 = ((uint)pcVar8 & 1) != 0;
    if (bVar10) {
      local_18f = '\0';
      pcVar8 = local_18e;
      uVar9 = 0xff;
    }
    if (((uint)pcVar8 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
      uVar9 = uVar9 - 2;
    }
    for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8[2] = '\0';
      pcVar8[3] = '\0';
      pcVar8 = pcVar8 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if ((uVar9 & 2) != 0) {
      pcVar8[0] = '\0';
      pcVar8[1] = '\0';
      pcVar8 = pcVar8 + 2;
    }
    if (bVar10) {
      *pcVar8 = '\0';
    }
    pcVar8 = local_52;
    uVar9 = 0x1e;
    bVar10 = ((uint)pcVar8 & 2) != 0;
    if (bVar10) {
      local_52[0] = '\0';
      local_52[1] = '\0';
      pcVar8 = local_52 + 2;
      uVar9 = 0x1c;
    }
    uVar7 = 0;
    do {
      pcVar1 = pcVar8 + uVar7;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar7 = uVar7 + 4;
    } while (uVar7 < (uVar9 & 0xfffffffc));
    if (!bVar10) {
      (pcVar8 + uVar7)[0] = '\0';
      (pcVar8 + uVar7)[1] = '\0';
    }
    cVar2 = *(char *)(local_24 + 0x12);
    if (cVar2 == '\x01') {
      local_8d = 0x21d7;
      local_88 = 1;
      uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      pcVar8 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_257",(bool *)0x0);
      OS_API::snprintf(&local_18f,0xff,pcVar8,uVar4);
    }
    else if (cVar2 == '\x02') {
      local_8d = 0x68c8;
      local_88 = 1;
      uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      pcVar8 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_259",(bool *)0x0);
      OS_API::snprintf(&local_18f,0xff,pcVar8,uVar4);
    }
    else if (cVar2 == '\0') {
      local_8d = 0x21d7;
      local_88 = 1;
      uVar4 = CUserCharacInfo::getCurCharacName((CUserCharacInfo *)param_2);
      pcVar8 = (char *)RDARScriptStringManager::findString
                                 ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                  "game_server_msg_258",(bool *)0x0);
      OS_API::snprintf(&local_18f,0xff,pcVar8,uVar4);
    }
    pcVar8 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_256",(bool *)0x0);
    strncpy(local_52,pcVar8,0x1d);
    iVar3 = local_8d;
    this = (CDataManager *)G_CDataManager();
    local_20 = (int *)CDataManager::find_item(this,iVar3);
    if (local_20 != (int *)0x0) {
      (**(code **)(*local_20 + 8))(local_20,local_8f);
      uVar4 = CUser::GetServerGroup((CUser *)param_2);
      sVar5 = strlen(&local_18f);
      uVar6 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                (local_52,local_8f,0,uVar6,&local_18f,sVar5,0,uVar4,1,0);
      iVar3 = local_8d;
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2);
      uVar6 = CUser::get_acc_id((CUser *)param_2);
      cMyTrace::cMyTrace(local_34,
                         "virtual int Inter_CollectItemsReward::dispatch_sig(CUser*, char*, int)",
                         0x69c0,0);
      cMyTrace::operator()
                (local_34,"[collect items]reward: m_id(), charac_no(), reward()",uVar6,uVar4,iVar3);
    }
  }
  return 0;
}
```
