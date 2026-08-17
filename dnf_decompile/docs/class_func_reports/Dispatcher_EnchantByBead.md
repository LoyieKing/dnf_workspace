# Dispatcher_EnchantByBead

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081d233a Dispatcher_EnchantByBead::check_error  [0x081d233a-0x81d24b7] ===
 81d233a:	55                   	push   %ebp
 81d233b:	89 e5                	mov    %esp,%ebp
 81d233d:	53                   	push   %ebx
 81d233e:	83 ec 34             	sub    $0x34,%esp
 81d2341:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2344:	89 04 24             	mov    %eax,(%esp)
 81d2347:	e8 40 80 f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81d234c:	83 f8 02             	cmp    $0x2,%eax
 81d234f:	0f 9e c0             	setle  %al
 81d2352:	84 c0                	test   %al,%al
 81d2354:	74 0a                	je     81d2360 <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0x26>
 81d2356:	b8 ff ff ff 7f       	mov    $0x7fffffff,%eax
 81d235b:	e9 53 01 00 00       	jmp    81d24b3 <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0x179>
 81d2360:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 81d2365:	c7 44 24 08 2b 00 00 	movl   $0x2b,0x8(%esp)
 81d236c:	00 
 81d236d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d2370:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d2374:	89 04 24             	mov    %eax,(%esp)
 81d2377:	e8 86 66 0b 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 81d237c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 81d237f:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 81d2383:	74 08                	je     81d238d <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0x53>
 81d2385:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 81d2388:	e9 26 01 00 00       	jmp    81d24b3 <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0x179>
 81d238d:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2390:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81d2393:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d2396:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81d239a:	0f bf d8             	movswl %ax,%ebx
 81d239d:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d23a0:	89 04 24             	mov    %eax,(%esp)
 81d23a3:	e8 e6 7e f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d23a8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d23ac:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d23b3:	00 
 81d23b4:	89 04 24             	mov    %eax,(%esp)
 81d23b7:	e8 f2 9e 32 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 81d23bc:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d23bf:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81d23c3:	75 0a                	jne    81d23cf <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0x95>
 81d23c5:	b8 11 00 00 00       	mov    $0x11,%eax
 81d23ca:	e9 e4 00 00 00       	jmp    81d24b3 <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0x179>
 81d23cf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81d23d2:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81d23d6:	0f bf d8             	movswl %ax,%ebx
 81d23d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d23dc:	89 04 24             	mov    %eax,(%esp)
 81d23df:	e8 aa 7e f0 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 81d23e4:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81d23e8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 81d23ef:	00 
 81d23f0:	89 04 24             	mov    %eax,(%esp)
 81d23f3:	e8 b6 9e 32 00       	call   84fc2ae <_ZN10CInventory11GetInvenRefEii>
 81d23f8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d23fb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 81d23ff:	75 0a                	jne    81d240b <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0xd1>
 81d2401:	b8 11 00 00 00       	mov    $0x11,%eax
 81d2406:	e9 a8 00 00 00       	jmp    81d24b3 <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0x179>
 81d240b:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d240e:	8b 40 02             	mov    0x2(%eax),%eax
 81d2411:	89 c3                	mov    %eax,%ebx
 81d2413:	e8 83 9d ef ff       	call   80cc19b <_Z14G_CDataManagerv>
 81d2418:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 81d241c:	89 04 24             	mov    %eax,(%esp)
 81d241f:	e8 0e d6 18 00       	call   835fa32 <_ZNK12CDataManager9find_itemEi>
 81d2424:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d2427:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d242b:	75 07                	jne    81d2434 <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0xfa>
 81d242d:	b8 11 00 00 00       	mov    $0x11,%eax
 81d2432:	eb 7f                	jmp    81d24b3 <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0x179>
 81d2434:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2437:	05 d8 03 00 00       	add    $0x3d8,%eax
 81d243c:	89 04 24             	mov    %eax,(%esp)
 81d243f:	e8 5e 4b 06 00       	call   8236fa2 <_ZNKSt3setIiSt4lessIiESaIiEE5emptyEv>
 81d2444:	83 f0 01             	xor    $0x1,%eax
 81d2447:	84 c0                	test   %al,%al
 81d2449:	74 63                	je     81d24ae <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0x174>
 81d244b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d244e:	8b 40 02             	mov    0x2(%eax),%eax
 81d2451:	89 45 dc             	mov    %eax,-0x24(%ebp)
 81d2454:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2457:	8d 88 d8 03 00 00    	lea    0x3d8(%eax),%ecx
 81d245d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d2460:	8d 55 dc             	lea    -0x24(%ebp),%edx
 81d2463:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d2467:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 81d246b:	89 04 24             	mov    %eax,(%esp)
 81d246e:	e8 f7 7f f0 ff       	call   80da46a <_ZNKSt3setIiSt4lessIiESaIiEE4findERKi>
 81d2473:	83 ec 04             	sub    $0x4,%esp
 81d2476:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2479:	8d 90 d8 03 00 00    	lea    0x3d8(%eax),%edx
 81d247f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81d2482:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d2486:	89 04 24             	mov    %eax,(%esp)
 81d2489:	e8 08 80 f0 ff       	call   80da496 <_ZNKSt3setIiSt4lessIiESaIiEE3endEv>
 81d248e:	83 ec 04             	sub    $0x4,%esp
 81d2491:	8d 45 e0             	lea    -0x20(%ebp),%eax
 81d2494:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d2498:	8d 45 d8             	lea    -0x28(%ebp),%eax
 81d249b:	89 04 24             	mov    %eax,(%esp)
 81d249e:	e8 0f 81 f0 ff       	call   80da5b2 <_ZNKSt23_Rb_tree_const_iteratorIiEeqERKS0_>
 81d24a3:	84 c0                	test   %al,%al
 81d24a5:	74 07                	je     81d24ae <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0x174>
 81d24a7:	b8 13 00 00 00       	mov    $0x13,%eax
 81d24ac:	eb 05                	jmp    81d24b3 <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase+0x179>
 81d24ae:	b8 00 00 00 00       	mov    $0x0,%eax
 81d24b3:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 81d24b6:	c9                   	leave
 81d24b7:	c3                   	ret

```

```c
// Dispatcher_EnchantByBead::check_error @ 0x81d233a

/* Dispatcher_EnchantByBead::check_error(CUser*, MSG_BASE&, ParamBase&) */

int Dispatcher_EnchantByBead::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  short sVar1;
  char cVar2;
  int iVar3;
  CInventory *pCVar4;
  CDataManager *this;
  _Rb_tree_const_iterator<int> local_2c [4];
  undefined4 local_28;
  set<int,std::less<int>,std::allocator<int>> local_24 [4];
  int local_20;
  ParamBase *local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 < 3) {
    local_20 = 0x7fffffff;
  }
  else {
    local_20 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_2,0x2b);
    if (local_20 == 0) {
      local_1c = param_3;
      sVar1 = *(short *)(param_3 + 0xe);
      pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
      local_18 = CInventory::GetInvenRef(pCVar4,1,(int)sVar1);
      if (local_18 == 0) {
        local_20 = 0x11;
      }
      else {
        sVar1 = *(short *)(local_1c + 0x12);
        pCVar4 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)param_2);
        local_14 = CInventory::GetInvenRef(pCVar4,1,(int)sVar1);
        if (local_14 == 0) {
          local_20 = 0x11;
        }
        else {
          iVar3 = *(int *)(local_18 + 2);
          this = (CDataManager *)G_CDataManager();
          local_10 = CDataManager::find_item(this,iVar3);
          if (local_10 == 0) {
            local_20 = 0x11;
          }
          else {
            cVar2 = std::set<int,std::less<int>,std::allocator<int>>::empty
                              ((set<int,std::less<int>,std::allocator<int>> *)(local_10 + 0x3d8));
            if (cVar2 != '\x01') {
              local_28 = *(undefined4 *)(local_14 + 2);
              std::set<int,std::less<int>,std::allocator<int>>::find((int *)local_2c);
              std::set<int,std::less<int>,std::allocator<int>>::end(local_24);
              cVar2 = std::_Rb_tree_const_iterator<int>::operator==
                                (local_2c,(_Rb_tree_const_iterator *)local_24);
              if (cVar2 != '\0') {
                return 0x13;
              }
            }
            local_20 = 0;
          }
        }
      }
    }
  }
  return local_20;
}

```

---

## process

```asm
// === 081d24b8 Dispatcher_EnchantByBead::process  [0x081d24b8-0x81d25af] ===
 81d24b8:	55                   	push   %ebp
 81d24b9:	89 e5                	mov    %esp,%ebp
 81d24bb:	56                   	push   %esi
 81d24bc:	53                   	push   %ebx
 81d24bd:	83 ec 30             	sub    $0x30,%esp
 81d24c0:	8b 45 14             	mov    0x14(%ebp),%eax
 81d24c3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81d24c6:	8b 45 14             	mov    0x14(%ebp),%eax
 81d24c9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81d24cd:	8b 45 10             	mov    0x10(%ebp),%eax
 81d24d0:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d24d4:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d24d7:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d24db:	8b 45 08             	mov    0x8(%ebp),%eax
 81d24de:	89 04 24             	mov    %eax,(%esp)
 81d24e1:	e8 54 fe ff ff       	call   81d233a <_ZN24Dispatcher_EnchantByBead11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81d24e6:	89 c2                	mov    %eax,%edx
 81d24e8:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d24eb:	89 50 04             	mov    %edx,0x4(%eax)
 81d24ee:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d24f1:	8b 40 04             	mov    0x4(%eax),%eax
 81d24f4:	85 c0                	test   %eax,%eax
 81d24f6:	7e 0a                	jle    81d2502 <_ZN24Dispatcher_EnchantByBead7processEP5CUserR8MSG_BASER9ParamBase+0x4a>
 81d24f8:	b8 00 00 00 00       	mov    $0x0,%eax
 81d24fd:	e9 a7 00 00 00       	jmp    81d25a9 <_ZN24Dispatcher_EnchantByBead7processEP5CUserR8MSG_BASER9ParamBase+0xf1>
 81d2502:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d2505:	8b 40 04             	mov    0x4(%eax),%eax
 81d2508:	85 c0                	test   %eax,%eax
 81d250a:	79 28                	jns    81d2534 <_ZN24Dispatcher_EnchantByBead7processEP5CUserR8MSG_BASER9ParamBase+0x7c>
 81d250c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d250f:	8b 40 04             	mov    0x4(%eax),%eax
 81d2512:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2519:	00 
 81d251a:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d251e:	c7 44 24 04 00 38 bd 	movl   $0x8bd3800,0x4(%esp)
 81d2525:	08 
 81d2526:	c7 04 24 61 2f 00 00 	movl   $0x2f61,(%esp)
 81d252d:	e8 a5 e3 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d2532:	eb 75                	jmp    81d25a9 <_ZN24Dispatcher_EnchantByBead7processEP5CUserR8MSG_BASER9ParamBase+0xf1>
 81d2534:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2537:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81d253a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81d2541:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d2544:	0f b7 40 12          	movzwl 0x12(%eax),%eax
 81d2548:	0f bf f0             	movswl %ax,%esi
 81d254b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d254e:	0f b6 40 10          	movzbl 0x10(%eax),%eax
 81d2552:	0f be d8             	movsbl %al,%ebx
 81d2555:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d2558:	0f b7 40 0e          	movzwl 0xe(%eax),%eax
 81d255c:	0f bf c8             	movswl %ax,%ecx
 81d255f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81d2562:	0f b6 40 0d          	movzbl 0xd(%eax),%eax
 81d2566:	0f be d0             	movsbl %al,%edx
 81d2569:	a1 68 f7 41 09       	mov    0x941f768,%eax
 81d256e:	89 74 24 14          	mov    %esi,0x14(%esp)
 81d2572:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 81d2576:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 81d257a:	89 54 24 08          	mov    %edx,0x8(%esp)
 81d257e:	8b 55 0c             	mov    0xc(%ebp),%edx
 81d2581:	89 54 24 04          	mov    %edx,0x4(%esp)
 81d2585:	89 04 24             	mov    %eax,(%esp)
 81d2588:	e8 8d c7 2c 00       	call   849ed1a <_ZN10expert_job13CExpertJobMgr15OnEnchantByBeadEP5CUseriiii>
 81d258d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d2590:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81d2594:	0f 95 c0             	setne  %al
 81d2597:	84 c0                	test   %al,%al
 81d2599:	74 09                	je     81d25a4 <_ZN24Dispatcher_EnchantByBead7processEP5CUserR8MSG_BASER9ParamBase+0xec>
 81d259b:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81d259e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81d25a1:	89 50 04             	mov    %edx,0x4(%eax)
 81d25a4:	b8 00 00 00 00       	mov    $0x0,%eax
 81d25a9:	83 c4 30             	add    $0x30,%esp
 81d25ac:	5b                   	pop    %ebx
 81d25ad:	5e                   	pop    %esi
 81d25ae:	5d                   	pop    %ebp
 81d25af:	c3                   	ret

```

```c
// Dispatcher_EnchantByBead::process @ 0x81d24b8

/* Dispatcher_EnchantByBead::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_EnchantByBead::process
          (Dispatcher_EnchantByBead *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar1 = LineFunc(0x2f61,
                       "virtual int Dispatcher_EnchantByBead::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),0);
    }
    else {
      iVar2 = expert_job::CExpertJobMgr::OnEnchantByBead
                        (GlobalData::s_ExpertJobMgr,param_1,(int)(char)param_2[0xd],
                         (int)*(short *)(param_2 + 0xe),(int)(char)param_2[0x10],
                         (int)*(short *)(param_2 + 0x12));
      if (iVar2 != 0) {
        *(int *)(param_3 + 4) = iVar2;
      }
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081d2218 Dispatcher_EnchantByBead::read  [0x081d2218-0x81d2339] ===
 81d2218:	55                   	push   %ebp
 81d2219:	89 e5                	mov    %esp,%ebp
 81d221b:	83 ec 28             	sub    $0x28,%esp
 81d221e:	8b 45 10             	mov    0x10(%ebp),%eax
 81d2221:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d2224:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d2227:	83 c0 0d             	add    $0xd,%eax
 81d222a:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d222e:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2231:	89 04 24             	mov    %eax,(%esp)
 81d2234:	e8 e9 ac 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d2239:	83 f0 01             	xor    $0x1,%eax
 81d223c:	84 c0                	test   %al,%al
 81d223e:	74 29                	je     81d2269 <_ZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASE+0x51>
 81d2240:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2247:	00 
 81d2248:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d224f:	00 
 81d2250:	c7 44 24 04 60 38 bd 	movl   $0x8bd3860,0x4(%esp)
 81d2257:	08 
 81d2258:	c7 04 24 1c 2f 00 00 	movl   $0x2f1c,(%esp)
 81d225f:	e8 73 e6 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d2264:	e9 ce 00 00 00       	jmp    81d2337 <_ZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASE+0x11f>
 81d2269:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d226c:	83 c0 0e             	add    $0xe,%eax
 81d226f:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d2273:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d2276:	89 04 24             	mov    %eax,(%esp)
 81d2279:	e8 42 ad 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d227e:	83 f0 01             	xor    $0x1,%eax
 81d2281:	84 c0                	test   %al,%al
 81d2283:	74 29                	je     81d22ae <_ZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASE+0x96>
 81d2285:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d228c:	00 
 81d228d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d2294:	00 
 81d2295:	c7 44 24 04 60 38 bd 	movl   $0x8bd3860,0x4(%esp)
 81d229c:	08 
 81d229d:	c7 04 24 1d 2f 00 00 	movl   $0x2f1d,(%esp)
 81d22a4:	e8 2e e6 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d22a9:	e9 89 00 00 00       	jmp    81d2337 <_ZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASE+0x11f>
 81d22ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d22b1:	83 c0 10             	add    $0x10,%eax
 81d22b4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d22b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d22bb:	89 04 24             	mov    %eax,(%esp)
 81d22be:	e8 5f ac 3b 00       	call   858cf22 <_ZN9PacketBuf8get_byteERc>
 81d22c3:	83 f0 01             	xor    $0x1,%eax
 81d22c6:	84 c0                	test   %al,%al
 81d22c8:	74 26                	je     81d22f0 <_ZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASE+0xd8>
 81d22ca:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d22d1:	00 
 81d22d2:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d22d9:	00 
 81d22da:	c7 44 24 04 60 38 bd 	movl   $0x8bd3860,0x4(%esp)
 81d22e1:	08 
 81d22e2:	c7 04 24 1f 2f 00 00 	movl   $0x2f1f,(%esp)
 81d22e9:	e8 e9 e5 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d22ee:	eb 47                	jmp    81d2337 <_ZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASE+0x11f>
 81d22f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d22f3:	83 c0 12             	add    $0x12,%eax
 81d22f6:	89 44 24 04          	mov    %eax,0x4(%esp)
 81d22fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d22fd:	89 04 24             	mov    %eax,(%esp)
 81d2300:	e8 bb ac 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81d2305:	83 f0 01             	xor    $0x1,%eax
 81d2308:	84 c0                	test   %al,%al
 81d230a:	74 26                	je     81d2332 <_ZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASE+0x11a>
 81d230c:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81d2313:	00 
 81d2314:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81d231b:	00 
 81d231c:	c7 44 24 04 60 38 bd 	movl   $0x8bd3860,0x4(%esp)
 81d2323:	08 
 81d2324:	c7 04 24 20 2f 00 00 	movl   $0x2f20,(%esp)
 81d232b:	e8 a7 e5 3b 00       	call   85908d7 <_Z8LineFunciPKcij>
 81d2330:	eb 05                	jmp    81d2337 <_ZN24Dispatcher_EnchantByBead4readER9PacketBufR8MSG_BASE+0x11f>
 81d2332:	b8 00 00 00 00       	mov    $0x0,%eax
 81d2337:	c9                   	leave
 81d2338:	c3                   	ret
 81d2339:	90                   	nop

```

```c
// Dispatcher_EnchantByBead::read @ 0x81d2218

/* Dispatcher_EnchantByBead::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_EnchantByBead::read(Dispatcher_EnchantByBead *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0xd));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0xe));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_byte(param_1,(char *)(param_2 + 0x10));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x12));
        if (cVar1 == '\x01') {
          uVar2 = 0;
        }
        else {
          uVar2 = LineFunc(0x2f20,
                           "virtual int Dispatcher_EnchantByBead::read(PacketBuf&, MSG_BASE&)",0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x2f1f,"virtual int Dispatcher_EnchantByBead::read(PacketBuf&, MSG_BASE&)",
                         0,0);
      }
    }
    else {
      uVar2 = LineFunc(0x2f1d,"virtual int Dispatcher_EnchantByBead::read(PacketBuf&, MSG_BASE&)",0,
                       0);
    }
  }
  else {
    uVar2 = LineFunc(0x2f1c,"virtual int Dispatcher_EnchantByBead::read(PacketBuf&, MSG_BASE&)",0,0)
    ;
  }
  return uVar2;
}

```

---

## send

```asm
// === 081d25b0 Dispatcher_EnchantByBead::send  [0x081d25b0-0x81d25f7] ===
 81d25b0:	55                   	push   %ebp
 81d25b1:	89 e5                	mov    %esp,%ebp
 81d25b3:	83 ec 28             	sub    $0x28,%esp
 81d25b6:	8b 45 10             	mov    0x10(%ebp),%eax
 81d25b9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81d25bc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d25bf:	8b 40 04             	mov    0x4(%eax),%eax
 81d25c2:	3d ff ff ff 7f       	cmp    $0x7fffffff,%eax
 81d25c7:	74 2c                	je     81d25f5 <_ZN24Dispatcher_EnchantByBead4sendEP5CUserR9ParamBase+0x45>
 81d25c9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d25cc:	8b 40 04             	mov    0x4(%eax),%eax
 81d25cf:	85 c0                	test   %eax,%eax
 81d25d1:	74 23                	je     81d25f6 <_ZN24Dispatcher_EnchantByBead4sendEP5CUserR9ParamBase+0x46>
 81d25d3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81d25d6:	8b 40 04             	mov    0x4(%eax),%eax
 81d25d9:	0f b6 c0             	movzbl %al,%eax
 81d25dc:	89 44 24 08          	mov    %eax,0x8(%esp)
 81d25e0:	c7 44 24 04 13 01 00 	movl   $0x113,0x4(%esp)
 81d25e7:	00 
 81d25e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 81d25eb:	89 04 24             	mov    %eax,(%esp)
 81d25ee:	e8 4f 99 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81d25f3:	eb 01                	jmp    81d25f6 <_ZN24Dispatcher_EnchantByBead4sendEP5CUserR9ParamBase+0x46>
 81d25f5:	90                   	nop
 81d25f6:	c9                   	leave
 81d25f7:	c3                   	ret

```

```c
// Dispatcher_EnchantByBead::send @ 0x81d25b0

/* Dispatcher_EnchantByBead::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_EnchantByBead::send(Dispatcher_EnchantByBead *this,CUser *param_1,ParamBase *param_2)

{
  if ((*(int *)(param_2 + 4) != 0x7fffffff) && (*(int *)(param_2 + 4) != 0)) {
    CUser::SendCmdErrorPacket(param_1,0x113,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

