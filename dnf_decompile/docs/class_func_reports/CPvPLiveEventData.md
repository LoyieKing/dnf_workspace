# CPvPLiveEventData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## CPvPLiveEventData

```asm
// === 08269054 CPvPLiveEventData::CPvPLiveEventData  [0x08269054-0x826906f] ===
 8269054:	55                   	push   %ebp
 8269055:	89 e5                	mov    %esp,%ebp
 8269057:	83 ec 18             	sub    $0x18,%esp
 826905a:	8b 45 08             	mov    0x8(%ebp),%eax
 826905d:	89 04 24             	mov    %eax,(%esp)
 8269060:	e8 55 fc e5 ff       	call   80c8cba <_ZN13charac_expand5CDataC1Ev>
 8269065:	8b 45 08             	mov    0x8(%ebp),%eax
 8269068:	c7 00 28 53 bf 08    	movl   $0x8bf5328,(%eax)
 826906e:	c9                   	leave
 826906f:	c3                   	ret

```

```c
// CPvPLiveEventData::CPvPLiveEventData @ 0x8269054

/* CPvPLiveEventData::CPvPLiveEventData() */

void __thiscall CPvPLiveEventData::CPvPLiveEventData(CPvPLiveEventData *this)

{
  charac_expand::CData::CData((CData *)this);
  *(undefined ***)this = &PTR_ResetDailyMidnight_08bf5328;
  return;
}

```

---

## IncreasePlayCount

```asm
// === 0826921c CPvPLiveEventData::IncreasePlayCount  [0x0826921c-0x826948d] ===
 826921c:	55                   	push   %ebp
 826921d:	89 e5                	mov    %esp,%ebp
 826921f:	56                   	push   %esi
 8269220:	53                   	push   %ebx
 8269221:	81 ec a0 01 00 00    	sub    $0x1a0,%esp
 8269227:	8b 45 0c             	mov    0xc(%ebp),%eax
 826922a:	89 04 24             	mov    %eax,(%esp)
 826922d:	e8 00 72 eb ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8269232:	85 c0                	test   %eax,%eax
 8269234:	0f 94 c0             	sete   %al
 8269237:	84 c0                	test   %al,%al
 8269239:	0f 85 44 02 00 00    	jne    8269483 <_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser+0x267>
 826923f:	8b 45 08             	mov    0x8(%ebp),%eax
 8269242:	89 04 24             	mov    %eax,(%esp)
 8269245:	e8 7a f9 e5 ff       	call   80c8bc4 <_ZN13charac_expand5CData5alterEv>
 826924a:	8b 45 08             	mov    0x8(%ebp),%eax
 826924d:	8b 40 08             	mov    0x8(%eax),%eax
 8269250:	8d 50 01             	lea    0x1(%eax),%edx
 8269253:	8b 45 08             	mov    0x8(%ebp),%eax
 8269256:	89 50 08             	mov    %edx,0x8(%eax)
 8269259:	8b 45 08             	mov    0x8(%ebp),%eax
 826925c:	8b 58 08             	mov    0x8(%eax),%ebx
 826925f:	e8 37 2f e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8269264:	83 c0 68             	add    $0x68,%eax
 8269267:	89 04 24             	mov    %eax,(%esp)
 826926a:	e8 99 02 00 00       	call   8269508 <_ZN21ServerParameterScript24GetPvPLiveEventPlayCountEv>
 826926f:	39 c3                	cmp    %eax,%ebx
 8269271:	0f 94 c0             	sete   %al
 8269274:	84 c0                	test   %al,%al
 8269276:	0f 84 08 02 00 00    	je     8269484 <_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser+0x268>
 826927c:	e8 1a 2f e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8269281:	83 c0 68             	add    $0x68,%eax
 8269284:	89 04 24             	mov    %eax,(%esp)
 8269287:	e8 6e 02 00 00       	call   82694fa <_ZN21ServerParameterScript21GetPvPLiveEventRewardEv>
 826928c:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 826928f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269293:	89 14 24             	mov    %edx,(%esp)
 8269296:	e8 17 43 e7 ff       	call   80dd5b2 <_ZNSt6vectorISt4pairIiiESaIS1_EE5beginEv>
 826929b:	83 ec 04             	sub    $0x4,%esp
 826929e:	e9 a2 01 00 00       	jmp    8269445 <_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser+0x229>
 82692a3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82692a6:	89 04 24             	mov    %eax,(%esp)
 82692a9:	e8 4e 43 e7 ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 82692ae:	8b 00                	mov    (%eax),%eax
 82692b0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 82692b3:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 82692b6:	89 04 24             	mov    %eax,(%esp)
 82692b9:	e8 3e 43 e7 ff       	call   80dd5fc <_ZNK9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEdeEv>
 82692be:	8b 40 04             	mov    0x4(%eax),%eax
 82692c1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 82692c4:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 82692c7:	e8 cf 2e e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82692cc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82692d0:	89 04 24             	mov    %eax,(%esp)
 82692d3:	e8 5a 67 0f 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 82692d8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 82692db:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 82692df:	0f 84 55 01 00 00    	je     826943a <_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser+0x21e>
 82692e5:	8d 45 92             	lea    -0x6e(%ebp),%eax
 82692e8:	89 04 24             	mov    %eax,(%esp)
 82692eb:	e8 64 25 e6 ff       	call   80cb854 <_ZN10Inven_ItemC1Ev>
 82692f0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 82692f3:	89 45 94             	mov    %eax,-0x6c(%ebp)
 82692f6:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 82692f9:	e8 9d 2e e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 82692fe:	8b 40 0c             	mov    0xc(%eax),%eax
 8269301:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8269305:	8d 55 92             	lea    -0x6e(%ebp),%edx
 8269308:	89 54 24 08          	mov    %edx,0x8(%esp)
 826930c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8269313:	00 
 8269314:	89 04 24             	mov    %eax,(%esp)
 8269317:	e8 9c 8c 2a 00       	call   8511fb8 <_ZN9CItemList11create_itemE21ENUM_ITEM_CREATE_TYPER10Inven_Itemi>
 826931c:	8b 45 94             	mov    -0x6c(%ebp),%eax
 826931f:	85 c0                	test   %eax,%eax
 8269321:	75 0f                	jne    8269332 <_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser+0x116>
 8269323:	8d 45 92             	lea    -0x6e(%ebp),%eax
 8269326:	89 04 24             	mov    %eax,(%esp)
 8269329:	e8 0c e5 e8 ff       	call   80f783a <_ZNK10Inven_Item12get_add_infoEv>
 826932e:	85 c0                	test   %eax,%eax
 8269330:	74 07                	je     8269339 <_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser+0x11d>
 8269332:	b8 01 00 00 00       	mov    $0x1,%eax
 8269337:	eb 05                	jmp    826933e <_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser+0x122>
 8269339:	b8 00 00 00 00       	mov    $0x0,%eax
 826933e:	84 c0                	test   %al,%al
 8269340:	0f 84 f4 00 00 00    	je     826943a <_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser+0x21e>
 8269346:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 826934d:	00 
 826934e:	c7 44 24 08 f5 46 bf 	movl   $0x8bf46f5,0x8(%esp)
 8269355:	08 
 8269356:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 826935d:	00 
 826935e:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 8269365:	e8 94 c4 83 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 826936a:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8269371:	00 
 8269372:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269376:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8269379:	89 04 24             	mov    %eax,(%esp)
 826937c:	e8 4f 45 e1 ff       	call   807d8d0 <strncpy@plt>
 8269381:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8269388:	00 
 8269389:	c7 44 24 08 09 47 bf 	movl   $0x8bf4709,0x8(%esp)
 8269390:	08 
 8269391:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8269398:	00 
 8269399:	c7 04 24 40 b1 49 09 	movl   $0x949b140,(%esp)
 82693a0:	e8 59 c4 83 00       	call   8aa57fe <_ZNK23RDARScriptStringManager10findStringEiPKcPb>
 82693a5:	c7 44 24 08 ff 00 00 	movl   $0xff,0x8(%esp)
 82693ac:	00 
 82693ad:	89 44 24 04          	mov    %eax,0x4(%esp)
 82693b1:	8d 85 92 fe ff ff    	lea    -0x16e(%ebp),%eax
 82693b7:	89 04 24             	mov    %eax,(%esp)
 82693ba:	e8 11 45 e1 ff       	call   807d8d0 <strncpy@plt>
 82693bf:	8b 45 0c             	mov    0xc(%ebp),%eax
 82693c2:	89 04 24             	mov    %eax,(%esp)
 82693c5:	e8 c6 28 e6 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 82693ca:	89 c3                	mov    %eax,%ebx
 82693cc:	8d 85 92 fe ff ff    	lea    -0x16e(%ebp),%eax
 82693d2:	89 04 24             	mov    %eax,(%esp)
 82693d5:	e8 d6 4f e1 ff       	call   807e3b0 <strlen@plt>
 82693da:	89 c6                	mov    %eax,%esi
 82693dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 82693df:	89 04 24             	mov    %eax,(%esp)
 82693e2:	e8 67 28 e6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 82693e7:	c7 44 24 24 00 00 00 	movl   $0x0,0x24(%esp)
 82693ee:	00 
 82693ef:	c7 44 24 20 00 00 00 	movl   $0x0,0x20(%esp)
 82693f6:	00 
 82693f7:	89 5c 24 1c          	mov    %ebx,0x1c(%esp)
 82693fb:	c7 44 24 18 00 00 00 	movl   $0x0,0x18(%esp)
 8269402:	00 
 8269403:	89 74 24 14          	mov    %esi,0x14(%esp)
 8269407:	8d 95 92 fe ff ff    	lea    -0x16e(%ebp),%edx
 826940d:	89 54 24 10          	mov    %edx,0x10(%esp)
 8269411:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8269415:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 826941c:	00 
 826941d:	8d 45 92             	lea    -0x6e(%ebp),%eax
 8269420:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269424:	8d 45 cf             	lea    -0x31(%ebp),%eax
 8269427:	89 04 24             	mov    %eax,(%esp)
 826942a:	e8 b9 c1 2e 00       	call   85555e8 <_ZN8WongWork14CMailBoxHelper22ReqDBSendNewSystemMailEPKcRK10Inven_ItemjjS2_ij17ENUM_SERVER_GROUPbb>
 826942f:	8d 45 92             	lea    -0x6e(%ebp),%eax
 8269432:	89 04 24             	mov    %eax,(%esp)
 8269435:	e8 9e 23 e6 ff       	call   80cb7d8 <_ZN10Inven_Item5resetEv>
 826943a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 826943d:	89 04 24             	mov    %eax,(%esp)
 8269440:	e8 c5 7d ea ff       	call   811120a <_ZN9__gnu_cxx17__normal_iteratorIPSt4pairIiiESt6vectorIS2_SaIS2_EEEppEv>
 8269445:	e8 51 2d e6 ff       	call   80cc19b <_Z14G_CDataManagerv>
 826944a:	83 c0 68             	add    $0x68,%eax
 826944d:	89 04 24             	mov    %eax,(%esp)
 8269450:	e8 a5 00 00 00       	call   82694fa <_ZN21ServerParameterScript21GetPvPLiveEventRewardEv>
 8269455:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8269458:	89 44 24 04          	mov    %eax,0x4(%esp)
 826945c:	89 14 24             	mov    %edx,(%esp)
 826945f:	e8 72 41 e7 ff       	call   80dd5d6 <_ZNSt6vectorISt4pairIiiESaIS1_EE3endEv>
 8269464:	83 ec 04             	sub    $0x4,%esp
 8269467:	8d 45 e8             	lea    -0x18(%ebp),%eax
 826946a:	89 44 24 04          	mov    %eax,0x4(%esp)
 826946e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8269471:	89 04 24             	mov    %eax,(%esp)
 8269474:	e8 65 7d ea ff       	call   81111de <_ZN9__gnu_cxxneIPSt4pairIiiESt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8269479:	84 c0                	test   %al,%al
 826947b:	0f 85 22 fe ff ff    	jne    82692a3 <_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser+0x87>
 8269481:	eb 01                	jmp    8269484 <_ZN17CPvPLiveEventData17IncreasePlayCountEP5CUser+0x268>
 8269483:	90                   	nop
 8269484:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8269487:	83 c4 00             	add    $0x0,%esp
 826948a:	5b                   	pop    %ebx
 826948b:	5e                   	pop    %esi
 826948c:	5d                   	pop    %ebp
 826948d:	c3                   	ret

```

```c
// CPvPLiveEventData::IncreasePlayCount @ 0x826921c

/* CPvPLiveEventData::IncreasePlayCount(CUser*) */

void __thiscall CPvPLiveEventData::IncreasePlayCount(CPvPLiveEventData *this,CUser *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  CDataManager *this_00;
  char *pcVar5;
  undefined4 uVar6;
  size_t sVar7;
  undefined4 uVar8;
  char local_172 [256];
  Inven_Item local_72 [2];
  int local_70;
  char local_35 [21];
  __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
  local_20 [4];
  __normal_iterator local_1c [4];
  int local_18;
  undefined4 local_14;
  int local_10;
  
  iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1);
  if (iVar2 != 0) {
    charac_expand::CData::alter((CData *)this);
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    iVar2 = *(int *)(this + 8);
    iVar3 = G_CDataManager();
    iVar3 = ServerParameterScript::GetPvPLiveEventPlayCount((ServerParameterScript *)(iVar3 + 0x68))
    ;
    if (iVar2 == iVar3) {
      iVar2 = G_CDataManager();
      ServerParameterScript::GetPvPLiveEventReward((ServerParameterScript *)(iVar2 + 0x68));
      std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::begin();
      while( true ) {
        iVar2 = G_CDataManager();
        ServerParameterScript::GetPvPLiveEventReward((ServerParameterScript *)(iVar2 + 0x68));
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::end();
        bVar1 = __gnu_cxx::operator!=(local_20,local_1c);
        if (!bVar1) break;
        piVar4 = (int *)__gnu_cxx::
                        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                        ::operator*(local_20);
        local_18 = *piVar4;
        iVar3 = __gnu_cxx::
                __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
                ::operator*(local_20);
        iVar2 = local_18;
        local_14 = *(undefined4 *)(iVar3 + 4);
        this_00 = (CDataManager *)G_CDataManager();
        local_10 = CDataManager::find_item(this_00,iVar2);
        if (local_10 != 0) {
          Inven_Item::Inven_Item(local_72);
          uVar6 = local_14;
          local_70 = local_18;
          iVar2 = G_CDataManager();
          CItemList::create_item(*(CItemList **)(iVar2 + 0xc),0,local_72,uVar6);
          if ((local_70 == 0) && (iVar2 = Inven_Item::get_add_info(local_72), iVar2 == 0)) {
            bVar1 = false;
          }
          else {
            bVar1 = true;
          }
          if (bVar1) {
            pcVar5 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_140",(bool *)0x0);
            strncpy(local_35,pcVar5,0x14);
            pcVar5 = (char *)RDARScriptStringManager::findString
                                       ((RDARScriptStringManager *)g_scriptStringManager_,4,
                                        "game_server_msg_141",(bool *)0x0);
            strncpy(local_172,pcVar5,0xff);
            uVar6 = CUser::GetServerGroup(param_1);
            sVar7 = strlen(local_172);
            uVar8 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
            WongWork::CMailBoxHelper::ReqDBSendNewSystemMail
                      (local_35,local_72,0,uVar8,local_172,sVar7,0,uVar6,0,0);
            Inven_Item::reset(local_72);
          }
        }
        __gnu_cxx::
        __normal_iterator<std::pair<int,int>*,std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>>
        ::operator++(local_20);
      }
    }
  }
  return;
}

```

---

## ResetDailyMidnight

```asm
// === 0826948e CPvPLiveEventData::ResetDailyMidnight  [0x0826948e-0x826949c] ===
 826948e:	55                   	push   %ebp
 826948f:	89 e5                	mov    %esp,%ebp
 8269491:	8b 45 08             	mov    0x8(%ebp),%eax
 8269494:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 826949b:	5d                   	pop    %ebp
 826949c:	c3                   	ret

```

```c
// CPvPLiveEventData::ResetDailyMidnight @ 0x826948e

/* CPvPLiveEventData::ResetDailyMidnight() */

void __thiscall CPvPLiveEventData::ResetDailyMidnight(CPvPLiveEventData *this)

{
  *(undefined4 *)(this + 8) = 0;
  return;
}

```

---

## _reset

```asm
// === 0826920c CPvPLiveEventData::_reset  [0x0826920c-0x826921b] ===
 826920c:	55                   	push   %ebp
 826920d:	89 e5                	mov    %esp,%ebp
 826920f:	8b 45 08             	mov    0x8(%ebp),%eax
 8269212:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8269219:	5d                   	pop    %ebp
 826921a:	c3                   	ret
 826921b:	90                   	nop

```

```c
// CPvPLiveEventData::_reset @ 0x826920c

/* CPvPLiveEventData::_reset() */

void __thiscall CPvPLiveEventData::_reset(CPvPLiveEventData *this)

{
  *(undefined4 *)(this + 8) = 0;
  return;
}

```

---

## _saveData

```asm
// === 082690d4 CPvPLiveEventData::_saveData  [0x082690d4-0x8269205] ===
 82690d4:	55                   	push   %ebp
 82690d5:	89 e5                	mov    %esp,%ebp
 82690d7:	56                   	push   %esi
 82690d8:	53                   	push   %ebx
 82690d9:	83 ec 20             	sub    $0x20,%esp
 82690dc:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 82690e1:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 82690e8:	00 
 82690e9:	c7 44 24 04 e0 46 bf 	movl   $0x8bf46e0,0x4(%esp)
 82690f0:	08 
 82690f1:	89 04 24             	mov    %eax,(%esp)
 82690f4:	e8 8d 69 02 00       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 82690f9:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8269100:	00 
 8269101:	89 44 24 04          	mov    %eax,0x4(%esp)
 8269105:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8269108:	89 04 24             	mov    %eax,(%esp)
 826910b:	e8 16 fb e5 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 8269110:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8269113:	89 04 24             	mov    %eax,(%esp)
 8269116:	e8 2b fb e5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 826911b:	c7 44 24 04 e1 01 00 	movl   $0x1e1,0x4(%esp)
 8269122:	00 
 8269123:	89 04 24             	mov    %eax,(%esp)
 8269126:	e8 2b fb e5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 826912b:	8b 45 0c             	mov    0xc(%ebp),%eax
 826912e:	89 04 24             	mov    %eax,(%esp)
 8269131:	e8 60 fb e5 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8269136:	89 c3                	mov    %eax,%ebx
 8269138:	8d 45 f0             	lea    -0x10(%ebp),%eax
 826913b:	89 04 24             	mov    %eax,(%esp)
 826913e:	e8 03 fb e5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8269143:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8269147:	89 04 24             	mov    %eax,(%esp)
 826914a:	e8 07 fb e5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 826914f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8269152:	89 04 24             	mov    %eax,(%esp)
 8269155:	e8 36 2b e6 ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 826915a:	0f be d8             	movsbl %al,%ebx
 826915d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8269160:	89 04 24             	mov    %eax,(%esp)
 8269163:	e8 de fa e5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8269168:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 826916c:	89 04 24             	mov    %eax,(%esp)
 826916f:	e8 90 7e e9 ff       	call   8101004 <_ZN12CStreamGuardlsEc>
 8269174:	8b 45 0c             	mov    0xc(%ebp),%eax
 8269177:	89 04 24             	mov    %eax,(%esp)
 826917a:	e8 cf 2a e6 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 826917f:	89 c3                	mov    %eax,%ebx
 8269181:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8269184:	89 04 24             	mov    %eax,(%esp)
 8269187:	e8 ba fa e5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 826918c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8269190:	89 04 24             	mov    %eax,(%esp)
 8269193:	e8 fa 90 e7 ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8269198:	8b 45 08             	mov    0x8(%ebp),%eax
 826919b:	8b 58 08             	mov    0x8(%eax),%ebx
 826919e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82691a1:	89 04 24             	mov    %eax,(%esp)
 82691a4:	e8 9d fa e5 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 82691a9:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 82691ad:	89 04 24             	mov    %eax,(%esp)
 82691b0:	e8 a1 fa e5 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 82691b5:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 82691ba:	8d 55 f0             	lea    -0x10(%ebp),%edx
 82691bd:	89 54 24 08          	mov    %edx,0x8(%esp)
 82691c1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 82691c8:	00 
 82691c9:	89 04 24             	mov    %eax,(%esp)
 82691cc:	e8 0d 7e 30 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 82691d1:	bb 01 00 00 00       	mov    $0x1,%ebx
 82691d6:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82691d9:	89 04 24             	mov    %eax,(%esp)
 82691dc:	e8 f1 36 3b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82691e1:	89 d8                	mov    %ebx,%eax
 82691e3:	83 c4 20             	add    $0x20,%esp
 82691e6:	5b                   	pop    %ebx
 82691e7:	5e                   	pop    %esi
 82691e8:	5d                   	pop    %ebp
 82691e9:	c3                   	ret
 82691ea:	89 d3                	mov    %edx,%ebx
 82691ec:	89 c6                	mov    %eax,%esi
 82691ee:	8d 45 f0             	lea    -0x10(%ebp),%eax
 82691f1:	89 04 24             	mov    %eax,(%esp)
 82691f4:	e8 d9 36 3b 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 82691f9:	89 f0                	mov    %esi,%eax
 82691fb:	89 da                	mov    %ebx,%edx
 82691fd:	89 04 24             	mov    %eax,(%esp)
 8269200:	e8 4b a5 87 00       	call   8ae3750 <_Unwind_Resume>
 8269205:	90                   	nop

```

```c
// CPvPLiveEventData::_saveData @ 0x82690d4

/* CPvPLiveEventData::_saveData(CUser*) */

undefined4 __thiscall CPvPLiveEventData::_saveData(CPvPLiveEventData *this,CUser *param_1)

{
  char cVar1;
  Stream *pSVar2;
  CStreamGuard *pCVar3;
  int iVar4;
  uint uVar5;
  CStreamGuard local_14 [8];
  
  pSVar2 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"PvPLiveEventData.cpp",0x1e);
  CStreamGuard::CStreamGuard(local_14,pSVar2,true);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08269126 to 082691d0 has its CatchHandler @ 082691ea */
  CStreamGuard::operator<<(pCVar3,0x1e1);
  iVar4 = CUser::GetUID(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar3,iVar4);
  cVar1 = CUser::GetServerGroup(param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar3,cVar1);
  uVar5 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_1);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar3,uVar5);
  iVar4 = *(int *)(this + 8);
  pCVar3 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar3,iVar4);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return 1;
}

```

---

## getData

```asm
// === 08269206 CPvPLiveEventData::getData  [0x08269206-0x826920b] ===
 8269206:	55                   	push   %ebp
 8269207:	89 e5                	mov    %esp,%ebp
 8269209:	5d                   	pop    %ebp
 826920a:	c3                   	ret
 826920b:	90                   	nop

```

```c
// CPvPLiveEventData::getData @ 0x8269206

/* CPvPLiveEventData::getData(char*) const */

void CPvPLiveEventData::getData(char *param_1)

{
  return;
}

```

---

## loadData

```asm
// === 082690be CPvPLiveEventData::loadData  [0x082690be-0x82690d3] ===
 82690be:	55                   	push   %ebp
 82690bf:	89 e5                	mov    %esp,%ebp
 82690c1:	8b 45 10             	mov    0x10(%ebp),%eax
 82690c4:	8b 10                	mov    (%eax),%edx
 82690c6:	8b 45 08             	mov    0x8(%ebp),%eax
 82690c9:	89 50 08             	mov    %edx,0x8(%eax)
 82690cc:	b8 01 00 00 00       	mov    $0x1,%eax
 82690d1:	5d                   	pop    %ebp
 82690d2:	c3                   	ret
 82690d3:	90                   	nop

```

```c
// CPvPLiveEventData::loadData @ 0x82690be

/* CPvPLiveEventData::loadData(CUser*, char*) */

undefined4 __thiscall
CPvPLiveEventData::loadData(CPvPLiveEventData *this,CUser *param_1,char *param_2)

{
  *(undefined4 *)(this + 8) = *(undefined4 *)param_2;
  return 1;
}

```

---

## ~CPvPLiveEventData

```asm
// === 08269070 CPvPLiveEventData::~CPvPLiveEventData  [0x08269070-0x826909f] ===
 8269070:	55                   	push   %ebp
 8269071:	89 e5                	mov    %esp,%ebp
 8269073:	83 ec 18             	sub    $0x18,%esp
 8269076:	8b 45 08             	mov    0x8(%ebp),%eax
 8269079:	c7 00 28 53 bf 08    	movl   $0x8bf5328,(%eax)
 826907f:	8b 45 08             	mov    0x8(%ebp),%eax
 8269082:	89 04 24             	mov    %eax,(%esp)
 8269085:	e8 58 fb e5 ff       	call   80c8be2 <_ZN13charac_expand5CDataD1Ev>
 826908a:	b8 00 00 00 00       	mov    $0x0,%eax
 826908f:	84 c0                	test   %al,%al
 8269091:	74 0b                	je     826909e <_ZN17CPvPLiveEventDataD1Ev+0x2e>
 8269093:	8b 45 08             	mov    0x8(%ebp),%eax
 8269096:	89 04 24             	mov    %eax,(%esp)
 8269099:	e8 52 b4 4b 00       	call   87244f0 <_ZdlPv>
 826909e:	c9                   	leave
 826909f:	c3                   	ret

```

```c
// CPvPLiveEventData::~CPvPLiveEventData @ 0x8269070

/* WARNING: Removing unreachable block (ram,0x08269093) */
/* CPvPLiveEventData::~CPvPLiveEventData() */

void __thiscall CPvPLiveEventData::~CPvPLiveEventData(CPvPLiveEventData *this)

{
  *(undefined ***)this = &PTR_ResetDailyMidnight_08bf5328;
  charac_expand::CData::~CData((CData *)this);
  return;
}

```

---

## ~CPvPLiveEventData_082690a0

```asm
// === 082690a0 CPvPLiveEventData::~CPvPLiveEventData  [0x082690a0-0x82690bd] ===
 82690a0:	55                   	push   %ebp
 82690a1:	89 e5                	mov    %esp,%ebp
 82690a3:	83 ec 18             	sub    $0x18,%esp
 82690a6:	8b 45 08             	mov    0x8(%ebp),%eax
 82690a9:	89 04 24             	mov    %eax,(%esp)
 82690ac:	e8 bf ff ff ff       	call   8269070 <_ZN17CPvPLiveEventDataD1Ev>
 82690b1:	8b 45 08             	mov    0x8(%ebp),%eax
 82690b4:	89 04 24             	mov    %eax,(%esp)
 82690b7:	e8 34 b4 4b 00       	call   87244f0 <_ZdlPv>
 82690bc:	c9                   	leave
 82690bd:	c3                   	ret

```

```c
// CPvPLiveEventData::~CPvPLiveEventData @ 0x82690a0

/* CPvPLiveEventData::~CPvPLiveEventData() */

void __thiscall CPvPLiveEventData::~CPvPLiveEventData(CPvPLiveEventData *this)

{
  ~CPvPLiveEventData(this);
  operator_delete(this);
  return;
}

```

