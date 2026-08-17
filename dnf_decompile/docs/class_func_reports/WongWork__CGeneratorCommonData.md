# WongWork__CGeneratorCommonData

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## getGoldGenTable

```asm
// === 08533424 WongWork::CGeneratorCommonData::getGoldGenTable  [0x08533424-0x85334a3] ===
 8533424:	55                   	push   %ebp
 8533425:	89 e5                	mov    %esp,%ebp
 8533427:	56                   	push   %esi
 8533428:	53                   	push   %ebx
 8533429:	83 ec 20             	sub    $0x20,%esp
 853342c:	8b 45 0c             	mov    0xc(%ebp),%eax
 853342f:	88 45 f4             	mov    %al,-0xc(%ebp)
 8533432:	80 7d f4 c8          	cmpb   $0xc8,-0xc(%ebp)
 8533436:	76 19                	jbe    8533451 <_ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x2d>
 8533438:	8b 45 08             	mov    0x8(%ebp),%eax
 853343b:	8b 50 04             	mov    0x4(%eax),%edx
 853343e:	8b 00                	mov    (%eax),%eax
 8533440:	a3 d0 de 43 09       	mov    %eax,0x943ded0
 8533445:	89 15 d4 de 43 09    	mov    %edx,0x943ded4
 853344b:	c6 45 f4 00          	movb   $0x0,-0xc(%ebp)
 853344f:	eb 1a                	jmp    853346b <_ZN8WongWork20CGeneratorCommonData15getGoldGenTableEh+0x47>
 8533451:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 8533455:	8b 45 08             	mov    0x8(%ebp),%eax
 8533458:	8d 14 d0             	lea    (%eax,%edx,8),%edx
 853345b:	8b 02                	mov    (%edx),%eax
 853345d:	8b 52 04             	mov    0x4(%edx),%edx
 8533460:	a3 d0 de 43 09       	mov    %eax,0x943ded0
 8533465:	89 15 d4 de 43 09    	mov    %edx,0x943ded4
 853346b:	8b 35 d0 de 43 09    	mov    0x943ded0,%esi
 8533471:	0f b6 5d f4          	movzbl -0xc(%ebp),%ebx
 8533475:	e8 21 8d b9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 853347a:	89 04 24             	mov    %eax,(%esp)
 853347d:	e8 7a 5e fb ff       	call   84e92fc <_ZN12CDataManager30GetAutoMarketContitionsControlEv>
 8533482:	89 74 24 08          	mov    %esi,0x8(%esp)
 8533486:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 853348a:	89 04 24             	mov    %eax,(%esp)
 853348d:	e8 2a 55 dc ff       	call   82f89bc <_ZN28CAutoMarketConditionsControl21GetGoldDropAmountRateEii>
 8533492:	a3 d0 de 43 09       	mov    %eax,0x943ded0
 8533497:	b8 d0 de 43 09       	mov    $0x943ded0,%eax
 853349c:	83 c4 20             	add    $0x20,%esp
 853349f:	5b                   	pop    %ebx
 85334a0:	5e                   	pop    %esi
 85334a1:	5d                   	pop    %ebp
 85334a2:	c3                   	ret
 85334a3:	90                   	nop

```

```c
// WongWork::CGeneratorCommonData::getGoldGenTable @ 0x8533424

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WongWork::CGeneratorCommonData::getGoldGenTable(unsigned char) */

undefined4 * __thiscall
WongWork::CGeneratorCommonData::getGoldGenTable(CGeneratorCommonData *this,uchar param_1)

{
  int iVar1;
  CDataManager *this_00;
  CAutoMarketConditionsControl *this_01;
  byte local_10;
  
  local_10 = param_1;
  if (param_1 < 0xc9) {
    getGoldGenTable(unsigned_char)::ret = *(int *)(this + (uint)param_1 * 8);
    _DAT_0943ded4 = *(int *)(this + (uint)param_1 * 8 + 4);
  }
  else {
    _DAT_0943ded4 = *(int *)(this + 4);
    getGoldGenTable(unsigned_char)::ret = *(int *)this;
    local_10 = 0;
  }
  iVar1 = getGoldGenTable(unsigned_char)::ret;
  this_00 = (CDataManager *)G_CDataManager();
  this_01 = (CAutoMarketConditionsControl *)CDataManager::GetAutoMarketContitionsControl(this_00);
  getGoldGenTable(unsigned_char)::ret =
       CAutoMarketConditionsControl::GetGoldDropAmountRate(this_01,(uint)local_10,iVar1);
  return &getGoldGenTable(unsigned_char)::ret;
}

```

---

## loadScript

```asm
// === 08534456 WongWork::CGeneratorCommonData::loadScript  [0x08534456-0x85345b5] ===
 8534456:	55                   	push   %ebp
 8534457:	89 e5                	mov    %esp,%ebp
 8534459:	56                   	push   %esi
 853445a:	53                   	push   %ebx
 853445b:	83 ec 20             	sub    $0x20,%esp
 853445e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8534461:	89 44 24 04          	mov    %eax,0x4(%esp)
 8534465:	c7 04 24 00 95 c9 08 	movl   $0x8c99500,(%esp)
 853446c:	e8 b8 78 38 00       	call   88bbd29 <_Z18loadRDARScriptFilePKcS0_>
 8534471:	83 f0 01             	xor    $0x1,%eax
 8534474:	84 c0                	test   %al,%al
 8534476:	74 0a                	je     8534482 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x2c>
 8534478:	bb d8 01 00 00       	mov    $0x1d8,%ebx
 853447d:	e9 2b 01 00 00       	jmp    85345ad <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x157>
 8534482:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8534485:	89 04 24             	mov    %eax,(%esp)
 8534488:	e8 43 21 1d 00       	call   87065d0 <_ZNSsC1Ev>
 853448d:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8534494:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 8534498:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 853449f:	00 
 85344a0:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85344a3:	89 04 24             	mov    %eax,(%esp)
 85344a6:	e8 b4 83 38 00       	call   88bc85f <_Z8ScanTypeRSsb>
 85344ab:	83 f0 01             	xor    $0x1,%eax
 85344ae:	84 c0                	test   %al,%al
 85344b0:	0f 85 c9 00 00 00    	jne    853457f <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x129>
 85344b6:	c7 44 24 04 8b 95 c9 	movl   $0x8c9958b,0x4(%esp)
 85344bd:	08 
 85344be:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85344c1:	89 04 24             	mov    %eax,(%esp)
 85344c4:	e8 d8 c4 b4 ff       	call   80809a1 <_ZSteqIcSt11char_traitsIcESaIcEEbRKSbIT_T0_T1_EPKS3_>
 85344c9:	84 c0                	test   %al,%al
 85344cb:	0f 84 a7 00 00 00    	je     8534578 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x122>
 85344d1:	8b 45 08             	mov    0x8(%ebp),%eax
 85344d4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 85344da:	8b 45 08             	mov    0x8(%ebp),%eax
 85344dd:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 85344e4:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 85344eb:	eb 74                	jmp    8534561 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x10b>
 85344ed:	8d 45 eb             	lea    -0x15(%ebp),%eax
 85344f0:	89 04 24             	mov    %eax,(%esp)
 85344f3:	e8 83 7e 38 00       	call   88bc37b <_Z7ScanIntPb>
 85344f8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85344fb:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 85344ff:	83 f0 01             	xor    $0x1,%eax
 8534502:	84 c0                	test   %al,%al
 8534504:	74 0a                	je     8534510 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0xba>
 8534506:	bb ec 01 00 00       	mov    $0x1ec,%ebx
 853450b:	e9 92 00 00 00       	jmp    85345a2 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x14c>
 8534510:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8534513:	8d 45 eb             	lea    -0x15(%ebp),%eax
 8534516:	89 04 24             	mov    %eax,(%esp)
 8534519:	e8 5d 7e 38 00       	call   88bc37b <_Z7ScanIntPb>
 853451e:	8b 55 08             	mov    0x8(%ebp),%edx
 8534521:	89 04 da             	mov    %eax,(%edx,%ebx,8)
 8534524:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8534528:	83 f0 01             	xor    $0x1,%eax
 853452b:	84 c0                	test   %al,%al
 853452d:	74 07                	je     8534536 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0xe0>
 853452f:	bb f0 01 00 00       	mov    $0x1f0,%ebx
 8534534:	eb 6c                	jmp    85345a2 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x14c>
 8534536:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 8534539:	8d 45 eb             	lea    -0x15(%ebp),%eax
 853453c:	89 04 24             	mov    %eax,(%esp)
 853453f:	e8 37 7e 38 00       	call   88bc37b <_Z7ScanIntPb>
 8534544:	8b 55 08             	mov    0x8(%ebp),%edx
 8534547:	89 44 da 04          	mov    %eax,0x4(%edx,%ebx,8)
 853454b:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 853454f:	83 f0 01             	xor    $0x1,%eax
 8534552:	84 c0                	test   %al,%al
 8534554:	74 07                	je     853455d <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x107>
 8534556:	bb f4 01 00 00       	mov    $0x1f4,%ebx
 853455b:	eb 45                	jmp    85345a2 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x14c>
 853455d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8534561:	81 7d f4 c8 00 00 00 	cmpl   $0xc8,-0xc(%ebp)
 8534568:	0f 9e c0             	setle  %al
 853456b:	84 c0                	test   %al,%al
 853456d:	0f 85 7a ff ff ff    	jne    85344ed <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x97>
 8534573:	e9 20 ff ff ff       	jmp    8534498 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x42>
 8534578:	bb f8 01 00 00       	mov    $0x1f8,%ebx
 853457d:	eb 23                	jmp    85345a2 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x14c>
 853457f:	90                   	nop
 8534580:	bb 00 00 00 00       	mov    $0x0,%ebx
 8534585:	eb 1b                	jmp    85345a2 <_ZN8WongWork20CGeneratorCommonData10loadScriptEPKc+0x14c>
 8534587:	89 d3                	mov    %edx,%ebx
 8534589:	89 c6                	mov    %eax,%esi
 853458b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 853458e:	89 04 24             	mov    %eax,(%esp)
 8534591:	e8 4a 36 1d 00       	call   8707be0 <_ZNSsD1Ev>
 8534596:	89 f0                	mov    %esi,%eax
 8534598:	89 da                	mov    %ebx,%edx
 853459a:	89 04 24             	mov    %eax,(%esp)
 853459d:	e8 ae f1 5a 00       	call   8ae3750 <_Unwind_Resume>
 85345a2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 85345a5:	89 04 24             	mov    %eax,(%esp)
 85345a8:	e8 33 36 1d 00       	call   8707be0 <_ZNSsD1Ev>
 85345ad:	89 d8                	mov    %ebx,%eax
 85345af:	83 c4 20             	add    $0x20,%esp
 85345b2:	5b                   	pop    %ebx
 85345b3:	5e                   	pop    %esi
 85345b4:	5d                   	pop    %ebp
 85345b5:	c3                   	ret

```

```c
// WongWork::CGeneratorCommonData::loadScript @ 0x8534456

/* WongWork::CGeneratorCommonData::loadScript(char const*) */

undefined4 __thiscall
WongWork::CGeneratorCommonData::loadScript(CGeneratorCommonData *this,char *param_1)

{
  int iVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  bool local_19;
  string local_18;
  int local_14;
  int local_10;
  
  cVar2 = loadRDARScriptFile("",param_1);
  if (cVar2 == '\x01') {
    std::string::string((string *)&local_18);
    local_14 = 0;
    local_19 = false;
                    /* try { // try from 085344a6 to 08534543 has its CatchHandler @ 08534587 */
    while (cVar2 = ScanType((string *)&local_18,true), cVar2 == '\x01') {
      bVar3 = std::operator==(&local_18,"[gold drop ref table]");
      if (!bVar3) {
        uVar5 = 0x1f8;
        goto LAB_085345a2;
      }
      *(undefined4 *)this = 0;
      *(undefined4 *)(this + 4) = 0;
      for (local_10 = 1; local_10 < 0xc9; local_10 = local_10 + 1) {
        iVar4 = ScanInt(&local_19);
        local_14 = iVar4;
        if (local_19 != true) {
          uVar5 = 0x1ec;
          goto LAB_085345a2;
        }
        uVar5 = ScanInt(&local_19);
        iVar1 = local_14;
        *(undefined4 *)(this + iVar4 * 8) = uVar5;
        if (local_19 != true) {
          uVar5 = 0x1f0;
          goto LAB_085345a2;
        }
        uVar5 = ScanInt(&local_19);
        *(undefined4 *)(this + iVar1 * 8 + 4) = uVar5;
        if (local_19 != true) {
          uVar5 = 500;
          goto LAB_085345a2;
        }
      }
    }
    uVar5 = 0;
LAB_085345a2:
    std::string::~string((string *)&local_18);
  }
  else {
    uVar5 = 0x1d8;
  }
  return uVar5;
}

```

