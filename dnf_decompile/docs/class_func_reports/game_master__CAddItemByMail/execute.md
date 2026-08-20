# execute

`_ZN11game_master14CAddItemByMail7executeEv`

`game_master::CAddItemByMail::execute()`

| 类 | 地址 |
|---|---|
| `game_master::CAddItemByMail` | `0x084ac2e2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084ac2e2  _ZN11game_master14CAddItemByMail7executeEv
#           game_master::CAddItemByMail::execute()
# range [0x084ac2e2, 0x084ac58b]
084ac2e2 +0x000:  push   %ebp
084ac2e3 +0x001:  mov    %esp,%ebp
084ac2e5 +0x003:  push   %edi
084ac2e6 +0x004:  push   %esi
084ac2e7 +0x005:  push   %ebx
084ac2e8 +0x006:  sub    $0x1ac,%esp
084ac2ee +0x00c:  mov    0x8(%ebp),%eax
084ac2f1 +0x00f:  mov    %eax,(%esp)
084ac2f4 +0x012:  call   084b3fba <_GLOBAL__I__ZN11game_master6CMacro5ResetEv+0x6d>  ; global constructors keyed to game_master::CMacro::Reset()+0x6d
084ac2f9 +0x017:  mov    %eax,-0x30(%ebp)
084ac2fc +0x01a:  mov    0x8(%ebp),%eax
084ac2ff +0x01d:  mov    0x8(%eax),%ebx
084ac302 +0x020:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ac307 +0x025:  mov    %ebx,0x4(%esp)
084ac30b +0x029:  mov    %eax,(%esp)
084ac30e +0x02c:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084ac313 +0x031:  mov    %eax,-0x2c(%ebp)
084ac316 +0x034:  cmpl   $0x0,-0x2c(%ebp)
084ac31a +0x038:  je     084ac57d <+0x29b>
084ac320 +0x03e:  movl   $0x0,-0x28(%ebp)
084ac327 +0x045:  lea    -0x182(%ebp),%edx
084ac32d +0x04b:  mov    $0x100,%ebx
084ac332 +0x050:  mov    $0x0,%eax
084ac337 +0x055:  mov    %edx,%ecx
084ac339 +0x057:  and    $0x2,%ecx
084ac33c +0x05a:  test   %ecx,%ecx
084ac33e +0x05c:  je     084ac349 <+0x67>
084ac340 +0x05e:  mov    %ax,(%edx)
084ac343 +0x061:  add    $0x2,%edx
084ac346 +0x064:  sub    $0x2,%ebx
084ac349 +0x067:  mov    %ebx,%ecx
084ac34b +0x069:  shr    $0x2,%ecx
084ac34e +0x06c:  mov    %edx,%edi
084ac350 +0x06e:  rep stos %eax,%es:(%edi)
084ac352 +0x070:  mov    %edi,%edx
084ac354 +0x072:  mov    %ebx,%ecx
084ac356 +0x074:  and    $0x2,%ecx
084ac359 +0x077:  test   %ecx,%ecx
084ac35b +0x079:  je     084ac363 <+0x81>
084ac35d +0x07b:  mov    %ax,(%edx)
084ac360 +0x07e:  add    $0x2,%edx
084ac363 +0x081:  mov    %ebx,%ecx
084ac365 +0x083:  and    $0x1,%ecx
084ac368 +0x086:  test   %ecx,%ecx
084ac36a +0x088:  je     084ac371 <+0x8f>
084ac36c +0x08a:  mov    %al,(%edx)
084ac36e +0x08c:  add    $0x1,%edx
084ac371 +0x08f:  lea    -0x45(%ebp),%eax
084ac374 +0x092:  mov    $0x15,%edx
084ac379 +0x097:  mov    $0x0,%ecx
084ac37e +0x09c:  mov    %eax,%ebx
084ac380 +0x09e:  and    $0x1,%ebx
084ac383 +0x0a1:  test   %ebx,%ebx
084ac385 +0x0a3:  je     084ac38f <+0xad>
084ac387 +0x0a5:  mov    %cl,(%eax)
084ac389 +0x0a7:  add    $0x1,%eax
084ac38c +0x0aa:  sub    $0x1,%edx
084ac38f +0x0ad:  mov    %eax,%ebx
084ac391 +0x0af:  and    $0x2,%ebx
084ac394 +0x0b2:  test   %ebx,%ebx
084ac396 +0x0b4:  je     084ac3a1 <+0xbf>
084ac398 +0x0b6:  mov    %cx,(%eax)
084ac39b +0x0b9:  add    $0x2,%eax
084ac39e +0x0bc:  sub    $0x2,%edx
084ac3a1 +0x0bf:  mov    %edx,%esi
084ac3a3 +0x0c1:  and    $0xfffffffc,%esi
084ac3a6 +0x0c4:  mov    $0x0,%ebx
084ac3ab +0x0c9:  mov    %ecx,(%eax,%ebx,1)
084ac3ae +0x0cc:  add    $0x4,%ebx
084ac3b1 +0x0cf:  cmp    %esi,%ebx
084ac3b3 +0x0d1:  jb     084ac3ab <+0xc9>
084ac3b5 +0x0d3:  add    %ebx,%eax
084ac3b7 +0x0d5:  mov    %edx,%ebx
084ac3b9 +0x0d7:  and    $0x2,%ebx
084ac3bc +0x0da:  test   %ebx,%ebx
084ac3be +0x0dc:  je     084ac3c6 <+0xe4>
084ac3c0 +0x0de:  mov    %cx,(%eax)
084ac3c3 +0x0e1:  add    $0x2,%eax
084ac3c6 +0x0e4:  and    $0x1,%edx
084ac3c9 +0x0e7:  test   %edx,%edx
084ac3cb +0x0e9:  je     084ac3d2 <+0xf0>
084ac3cd +0x0eb:  mov    %cl,(%eax)
084ac3cf +0x0ed:  add    $0x1,%eax
084ac3d2 +0x0f0:  movl   $0x0,0xc(%esp)
084ac3da +0x0f8:  movl   $"game_server_msg_144",0x8(%esp)
084ac3e2 +0x100:  movl   $0x4,0x4(%esp)
084ac3ea +0x108:  movl   $&g_scriptStringManager_,(%esp)
084ac3f1 +0x10f:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084ac3f6 +0x114:  movl   $0xff,0x8(%esp)
084ac3fe +0x11c:  mov    %eax,0x4(%esp)
084ac402 +0x120:  lea    -0x182(%ebp),%eax
084ac408 +0x126:  mov    %eax,(%esp)
084ac40b +0x129:  call   0807d8d0 <_init+0x1c8>
084ac410 +0x12e:  movl   $0x0,0xc(%esp)
084ac418 +0x136:  movl   $"game_server_msg_143",0x8(%esp)
084ac420 +0x13e:  movl   $0x4,0x4(%esp)
084ac428 +0x146:  movl   $&g_scriptStringManager_,(%esp)
084ac42f +0x14d:  call   08aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>  ; RDARScriptStringManager::findString(int, char const*, bool*) const
084ac434 +0x152:  movl   $0x14,0x8(%esp)
084ac43c +0x15a:  mov    %eax,0x4(%esp)
084ac440 +0x15e:  lea    -0x45(%ebp),%eax
084ac443 +0x161:  mov    %eax,(%esp)
084ac446 +0x164:  call   0807d8d0 <_init+0x1c8>
084ac44b +0x169:  mov    0x8(%ebp),%eax
084ac44e +0x16c:  mov    0x8(%eax),%eax
084ac451 +0x16f:  mov    %eax,-0x28(%ebp)
084ac454 +0x172:  movl   $0x1,-0x24(%ebp)
084ac45b +0x179:  lea    -0x82(%ebp),%eax
084ac461 +0x17f:  mov    %eax,(%esp)
084ac464 +0x182:  call   080cb854 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6a1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6a1
084ac469 +0x187:  movl   $0x0,-0x20(%ebp)
084ac470 +0x18e:  cmpl   $0x0,-0x28(%ebp)
084ac474 +0x192:  jne    084ac481 <+0x19f>
084ac476 +0x194:  mov    -0x24(%ebp),%eax
084ac479 +0x197:  mov    %eax,-0x20(%ebp)
084ac47c +0x19a:  jmp    084ac509 <+0x227>
084ac481 +0x19f:  cmpl   $0x1,-0x28(%ebp)
084ac485 +0x1a3:  jne    084ac4b1 <+0x1cf>
084ac487 +0x1a5:  movl   $0x1,-0x80(%ebp)
084ac48e +0x1ac:  movb   $0x2,-0x81(%ebp)
084ac495 +0x1b3:  mov    -0x24(%ebp),%eax
084ac498 +0x1b6:  mov    %eax,-0x7b(%ebp)
084ac49b +0x1b9:  movw   $0x1,-0x77(%ebp)
084ac4a1 +0x1bf:  lea    -0x82(%ebp),%eax
084ac4a7 +0x1c5:  mov    %eax,(%esp)
084ac4aa +0x1c8:  call   080cb892 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6df>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6df
084ac4af +0x1cd:  jmp    084ac509 <+0x227>
084ac4b1 +0x1cf:  mov    -0x28(%ebp),%ebx
084ac4b4 +0x1d2:  call   080cc19b <_GLOBAL__I__ZN10BingoEventC2Ev+0xfe8>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfe8
084ac4b9 +0x1d7:  mov    %ebx,0x4(%esp)
084ac4bd +0x1db:  mov    %eax,(%esp)
084ac4c0 +0x1de:  call   0835fa32 <_ZNK12CDataManager9find_itemEi>  ; CDataManager::find_item(int) const
084ac4c5 +0x1e3:  mov    %eax,-0x1c(%ebp)
084ac4c8 +0x1e6:  cmpl   $0x0,-0x1c(%ebp)
084ac4cc +0x1ea:  je     084ac580 <+0x29e>
084ac4d2 +0x1f0:  mov    -0x28(%ebp),%eax
084ac4d5 +0x1f3:  mov    %eax,-0x80(%ebp)
084ac4d8 +0x1f6:  mov    -0x1c(%ebp),%eax
084ac4db +0x1f9:  mov    (%eax),%eax
084ac4dd +0x1fb:  add    $0x8,%eax
084ac4e0 +0x1fe:  mov    (%eax),%edx
084ac4e2 +0x200:  lea    -0x82(%ebp),%eax
084ac4e8 +0x206:  mov    %eax,0x4(%esp)
084ac4ec +0x20a:  mov    -0x1c(%ebp),%eax
084ac4ef +0x20d:  mov    %eax,(%esp)
084ac4f2 +0x210:  call   *%edx
084ac4f4 +0x212:  mov    -0x24(%ebp),%eax
084ac4f7 +0x215:  mov    %eax,0x4(%esp)
084ac4fb +0x219:  lea    -0x82(%ebp),%eax
084ac501 +0x21f:  mov    %eax,(%esp)
084ac504 +0x222:  call   080cb884 <_GLOBAL__I__ZN10BingoEventC2Ev+0x6d1>  ; global constructors keyed to BingoEvent::BingoEvent()+0x6d1
084ac509 +0x227:  mov    -0x30(%ebp),%eax
084ac50c +0x22a:  mov    %eax,(%esp)
084ac50f +0x22d:  call   080cbc90 <_GLOBAL__I__ZN10BingoEventC2Ev+0xadd>  ; global constructors keyed to BingoEvent::BingoEvent()+0xadd
084ac514 +0x232:  mov    %eax,%ebx
084ac516 +0x234:  lea    -0x182(%ebp),%eax
084ac51c +0x23a:  mov    %eax,(%esp)
084ac51f +0x23d:  call   0807e3b0 <_init+0xca8>
084ac524 +0x242:  mov    %eax,%esi
084ac526 +0x244:  mov    -0x30(%ebp),%eax
084ac529 +0x247:  mov    %eax,(%esp)
084ac52c +0x24a:  call   080cbc4e <_GLOBAL__I__ZN10BingoEventC2Ev+0xa9b>  ; global constructors keyed to BingoEvent::BingoEvent()+0xa9b
084ac531 +0x24f:  mov    -0x20(%ebp),%edx
084ac534 +0x252:  movl   $0x0,0x24(%esp)
084ac53c +0x25a:  movl   $0x0,0x20(%esp)
084ac544 +0x262:  mov    %ebx,0x1c(%esp)
084ac548 +0x266:  movl   $0x0,0x18(%esp)
084ac550 +0x26e:  mov    %esi,0x14(%esp)
084ac554 +0x272:  lea    -0x182(%ebp),%ecx
084ac55a +0x278:  mov    %ecx,0x10(%esp)
084ac55e +0x27c:  mov    %eax,0xc(%esp)
084ac562 +0x280:  mov    %edx,0x8(%esp)
084ac566 +0x284:  lea    -0x82(%ebp),%eax
084ac56c +0x28a:  mov    %eax,0x4(%esp)
084ac570 +0x28e:  lea    -0x45(%ebp),%eax
084ac573 +0x291:  mov    %eax,(%esp)
084ac576 +0x294:  call   085555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>  ; WongWork::CMailBoxHelper::ReqDBSendNewSystemMail(char const*, Inven_Item const&, unsigned int, unsigned int, char const*, int, unsigned int, ENUM_SERVER_GROUP, bool, bool)
084ac57b +0x299:  jmp    084ac581 <+0x29f>
084ac57d +0x29b:  nop
084ac57e +0x29c:  jmp    084ac581 <+0x29f>
084ac580 +0x29e:  nop
084ac581 +0x29f:  add    $0x1ac,%esp
084ac587 +0x2a5:  pop    %ebx
084ac588 +0x2a6:  pop    %esi
084ac589 +0x2a7:  pop    %edi
084ac58a +0x2a8:  pop    %ebp
084ac58b +0x2a9:  ret
```

## 反编译 C

```c
// game_master::CAddItemByMail::execute @ 0x84ac2e2

/* WARNING: Removing unreachable block (ram,0x084ac36c) */
/* game_master::CAddItemByMail::execute() */

void __thiscall game_master::CAddItemByMail::execute(CAddItemByMail *this)

{
  char *pcVar1;
  int iVar2;
  CDataManager *pCVar3;
  char *pcVar4;
  undefined4 uVar5;
  size_t sVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  byte bVar11;
  char local_186 [256];
  Inven_Item local_86;
  undefined1 local_85;
  int local_84;
  int local_7f;
  undefined2 local_7b;
  char local_49;
  char local_48 [20];
  CUser *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int *local_20;
  
  bVar11 = 0;
  local_34 = (CUser *)CCommand::GetUser((CCommand *)this);
  iVar2 = *(int *)(this + 8);
  pCVar3 = (CDataManager *)G_CDataManager();
  local_30 = CDataManager::find_item(pCVar3,iVar2);
  if (local_30 != 0) {
    local_2c = 0;
    pcVar4 = local_186;
    uVar8 = 0x100;
    bVar10 = ((uint)pcVar4 & 2) != 0;
    if (bVar10) {
      local_186[0] = '\0';
      local_186[1] = '\0';
      pcVar4 = local_186 + 2;
      uVar8 = 0xfe;
    }
    for (uVar8 = uVar8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4 = pcVar4 + ((uint)bVar11 * -2 + 1) * 4;
    }
    if (bVar10) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
    }
    pcVar4 = &local_49;
    uVar8 = 0x15;
    bVar10 = ((uint)pcVar4 & 1) != 0;
    if (bVar10) {
      local_49 = '\0';
      pcVar4 = local_48;
      uVar8 = 0x14;
    }
    if (((uint)pcVar4 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
      uVar8 = uVar8 - 2;
    }
    uVar9 = 0;
    do {
      pcVar1 = pcVar4 + uVar9;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar9 = uVar9 + 4;
    } while (uVar9 < (uVar8 & 0xfffffffc));
    pcVar4 = pcVar4 + uVar9;
    if ((uVar8 & 2) != 0) {
      pcVar4[0] = '\0';
      pcVar4[1] = '\0';
      pcVar4 = pcVar4 + 2;
    }
    if (!bVar10) {
      *pcVar4 = '\0';
    }
    pcVar4 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_144",(bool *)0x0);
    strncpy(local_186,pcVar4,0xff);
    pcVar4 = (char *)RDARScriptStringManager::findString
                               ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                "game_server_msg_143",(bool *)0x0);
    strncpy(&local_49,pcVar4,0x14);
    local_2c = *(int *)(this + 8);
    local_28 = 1;
    Inven_Item::Inven_Item(&local_86);
    iVar2 = local_2c;
    local_24 = 0;
    if (local_2c == 0) {
      local_24 = local_28;
    }
    else if (local_2c == 1) {
      local_84 = 1;
      local_85 = 2;
      local_7f = local_28;
      local_7b = 1;
      Inven_Item::ResetItemAttr(&local_86);
    }
    else {
      pCVar3 = (CDataManager *)G_CDataManager();
      local_20 = (int *)CDataManager::find_item(pCVar3,iVar2);
      if (local_20 == (int *)0x0) {
        return;
      }
      local_84 = local_2c;
      (**(code **)(*local_20 + 8))(local_20,&local_86);
      Inven_Item::set_add_info(&local_86,local_28);
    }
    uVar5 = CUser::GetServerGroup(local_34);
    sVar6 = strlen(local_186);
    uVar7 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)local_34);
    WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
              (&local_49,&local_86,local_24,uVar7,local_186,sVar6,0,uVar5,0,0);
  }
  return;
}
```
