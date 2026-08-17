# Dispatcher_BuyPrivateStoreItem

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08202322 Dispatcher_BuyPrivateStoreItem::dispatch_sig  [0x08202322-0x82025ad] ===
 8202322:	55                   	push   %ebp
 8202323:	89 e5                	mov    %esp,%ebp
 8202325:	53                   	push   %ebx
 8202326:	83 ec 24             	sub    $0x24,%esp
 8202329:	8b 45 0c             	mov    0xc(%ebp),%eax
 820232c:	89 04 24             	mov    %eax,(%esp)
 820232f:	e8 58 80 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8202334:	83 f8 03             	cmp    $0x3,%eax
 8202337:	75 0f                	jne    8202348 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x26>
 8202339:	8b 45 0c             	mov    0xc(%ebp),%eax
 820233c:	89 04 24             	mov    %eax,(%esp)
 820233f:	e8 ee e0 f1 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8202344:	85 c0                	test   %eax,%eax
 8202346:	75 07                	jne    820234f <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x2d>
 8202348:	b8 01 00 00 00       	mov    $0x1,%eax
 820234d:	eb 05                	jmp    8202354 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x32>
 820234f:	b8 00 00 00 00       	mov    $0x0,%eax
 8202354:	84 c0                	test   %al,%al
 8202356:	74 29                	je     8202381 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x5f>
 8202358:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820235f:	00 
 8202360:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202367:	00 
 8202368:	c7 44 24 04 20 f4 bc 	movl   $0x8bcf420,0x4(%esp)
 820236f:	08 
 8202370:	c7 04 24 91 98 00 00 	movl   $0x9891,(%esp)
 8202377:	e8 5b e5 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820237c:	e9 26 02 00 00       	jmp    82025a7 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x285>
 8202381:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8202385:	74 0f                	je     8202396 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x74>
 8202387:	8b 45 0c             	mov    0xc(%ebp),%eax
 820238a:	89 04 24             	mov    %eax,(%esp)
 820238d:	e8 6c 7f ed ff       	call   80da2fe <_ZN5CUser12CheckInTradeEv>
 8202392:	84 c0                	test   %al,%al
 8202394:	74 07                	je     820239d <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x7b>
 8202396:	b8 01 00 00 00       	mov    $0x1,%eax
 820239b:	eb 05                	jmp    82023a2 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x80>
 820239d:	b8 00 00 00 00       	mov    $0x0,%eax
 82023a2:	84 c0                	test   %al,%al
 82023a4:	74 0a                	je     82023b0 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x8e>
 82023a6:	b8 00 00 00 00       	mov    $0x0,%eax
 82023ab:	e9 f7 01 00 00       	jmp    82025a7 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x285>
 82023b0:	e8 31 02 f6 ff       	call   81625e6 <_ZN4ARAD9SingletonI22ServiceRestrictManagerE3GetEv>
 82023b5:	c7 44 24 0c 0b 00 00 	movl   $0xb,0xc(%esp)
 82023bc:	00 
 82023bd:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 82023c4:	00 
 82023c5:	8b 55 0c             	mov    0xc(%ebp),%edx
 82023c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 82023cc:	89 04 24             	mov    %eax,(%esp)
 82023cf:	e8 e4 c2 f6 ff       	call   816e6b8 <_ZN22ServiceRestrictManager12isRestrictedEP5CUserN16RestrictCategory4EnumEi>
 82023d4:	84 c0                	test   %al,%al
 82023d6:	74 25                	je     82023fd <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0xdb>
 82023d8:	c7 44 24 08 d1 00 00 	movl   $0xd1,0x8(%esp)
 82023df:	00 
 82023e0:	c7 44 24 04 55 00 00 	movl   $0x55,0x4(%esp)
 82023e7:	00 
 82023e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 82023eb:	89 04 24             	mov    %eax,(%esp)
 82023ee:	e8 4f 9b 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 82023f3:	b8 00 00 00 00       	mov    $0x0,%eax
 82023f8:	e9 aa 01 00 00       	jmp    82025a7 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x285>
 82023fd:	a1 cc f7 41 09       	mov    0x941f7cc,%eax
 8202402:	c7 44 24 08 3d 00 00 	movl   $0x3d,0x8(%esp)
 8202409:	00 
 820240a:	8b 55 0c             	mov    0xc(%ebp),%edx
 820240d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8202411:	89 04 24             	mov    %eax,(%esp)
 8202414:	e8 e9 65 08 00       	call   8288a02 <_ZN21CSecu_ProtectionField5CheckEP5CUser18SECURITY_PROTCTION>
 8202419:	89 45 f4             	mov    %eax,-0xc(%ebp)
 820241c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8202420:	74 27                	je     8202449 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x127>
 8202422:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8202425:	0f b6 c0             	movzbl %al,%eax
 8202428:	89 44 24 08          	mov    %eax,0x8(%esp)
 820242c:	c7 44 24 04 55 00 00 	movl   $0x55,0x4(%esp)
 8202433:	00 
 8202434:	8b 45 0c             	mov    0xc(%ebp),%eax
 8202437:	89 04 24             	mov    %eax,(%esp)
 820243a:	e8 03 9b 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 820243f:	b8 00 00 00 00       	mov    $0x0,%eax
 8202444:	e9 5e 01 00 00       	jmp    82025a7 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x285>
 8202449:	8b 45 0c             	mov    0xc(%ebp),%eax
 820244c:	89 04 24             	mov    %eax,(%esp)
 820244f:	e8 e8 d8 02 00       	call   822fd3c <_ZNK5CUser10isHackUserEv>
 8202454:	84 c0                	test   %al,%al
 8202456:	75 0f                	jne    8202467 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x145>
 8202458:	8b 45 0c             	mov    0xc(%ebp),%eax
 820245b:	89 04 24             	mov    %eax,(%esp)
 820245e:	e8 e9 d8 02 00       	call   822fd4c <_ZNK5CUser15isHackUserTimerEv>
 8202463:	84 c0                	test   %al,%al
 8202465:	74 07                	je     820246e <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x14c>
 8202467:	b8 01 00 00 00       	mov    $0x1,%eax
 820246c:	eb 05                	jmp    8202473 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x151>
 820246e:	b8 00 00 00 00       	mov    $0x0,%eax
 8202473:	84 c0                	test   %al,%al
 8202475:	74 25                	je     820249c <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x17a>
 8202477:	c7 44 24 08 11 00 00 	movl   $0x11,0x8(%esp)
 820247e:	00 
 820247f:	c7 44 24 04 55 00 00 	movl   $0x55,0x4(%esp)
 8202486:	00 
 8202487:	8b 45 0c             	mov    0xc(%ebp),%eax
 820248a:	89 04 24             	mov    %eax,(%esp)
 820248d:	e8 b0 9a 47 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 8202492:	b8 00 00 00 00       	mov    $0x0,%eax
 8202497:	e9 0b 01 00 00       	jmp    82025a7 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x285>
 820249c:	66 c7 45 f2 00 00    	movw   $0x0,-0xe(%ebp)
 82024a2:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 82024a9:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 82024b0:	8d 45 f2             	lea    -0xe(%ebp),%eax
 82024b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 82024b7:	8b 45 10             	mov    0x10(%ebp),%eax
 82024ba:	89 04 24             	mov    %eax,(%esp)
 82024bd:	e8 fe aa 38 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 82024c2:	83 f0 01             	xor    $0x1,%eax
 82024c5:	84 c0                	test   %al,%al
 82024c7:	74 29                	je     82024f2 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x1d0>
 82024c9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 82024d0:	00 
 82024d1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 82024d8:	00 
 82024d9:	c7 44 24 04 20 f4 bc 	movl   $0x8bcf420,0x4(%esp)
 82024e0:	08 
 82024e1:	c7 04 24 c8 98 00 00 	movl   $0x98c8,(%esp)
 82024e8:	e8 ea e3 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 82024ed:	e9 b5 00 00 00       	jmp    82025a7 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x285>
 82024f2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 82024f5:	89 44 24 04          	mov    %eax,0x4(%esp)
 82024f9:	8b 45 10             	mov    0x10(%ebp),%eax
 82024fc:	89 04 24             	mov    %eax,(%esp)
 82024ff:	e8 ec ab 38 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 8202504:	83 f0 01             	xor    $0x1,%eax
 8202507:	84 c0                	test   %al,%al
 8202509:	74 26                	je     8202531 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x20f>
 820250b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8202512:	00 
 8202513:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 820251a:	00 
 820251b:	c7 44 24 04 20 f4 bc 	movl   $0x8bcf420,0x4(%esp)
 8202522:	08 
 8202523:	c7 04 24 c9 98 00 00 	movl   $0x98c9,(%esp)
 820252a:	e8 a8 e3 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820252f:	eb 76                	jmp    82025a7 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x285>
 8202531:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8202534:	85 c0                	test   %eax,%eax
 8202536:	79 26                	jns    820255e <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x23c>
 8202538:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820253f:	00 
 8202540:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8202547:	00 
 8202548:	c7 44 24 04 20 f4 bc 	movl   $0x8bcf420,0x4(%esp)
 820254f:	08 
 8202550:	c7 04 24 ca 98 00 00 	movl   $0x98ca,(%esp)
 8202557:	e8 7b e3 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 820255c:	eb 49                	jmp    82025a7 <_ZN30Dispatcher_BuyPrivateStoreItem12dispatch_sigEP5CUserR9PacketBuf+0x285>
 820255e:	e8 85 26 3c 00       	call   85c4be8 <_ZN13private_store26GetInstancePrivateStoreMgrEv>
 8202563:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 820256a:	00 
 820256b:	8b 55 0c             	mov    0xc(%ebp),%edx
 820256e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8202572:	8d 55 e8             	lea    -0x18(%ebp),%edx
 8202575:	89 54 24 04          	mov    %edx,0x4(%esp)
 8202579:	89 04 24             	mov    %eax,(%esp)
 820257c:	e8 37 82 3c 00       	call   85ca7b8 <_ZN13private_store16CPrivateStoreMgr13GetStoreBuyerEPPNS_6IBuyerEP5CUserS5_>
 8202581:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8202584:	8b 00                	mov    (%eax),%eax
 8202586:	8b 18                	mov    (%eax),%ebx
 8202588:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 820258b:	0f b7 45 f2          	movzwl -0xe(%ebp),%eax
 820258f:	0f bf d0             	movswl %ax,%edx
 8202592:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8202595:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8202599:	89 54 24 04          	mov    %edx,0x4(%esp)
 820259d:	89 04 24             	mov    %eax,(%esp)
 82025a0:	ff d3                	call   *%ebx
 82025a2:	b8 00 00 00 00       	mov    $0x0,%eax
 82025a7:	83 c4 24             	add    $0x24,%esp
 82025aa:	5b                   	pop    %ebx
 82025ab:	5d                   	pop    %ebp
 82025ac:	c3                   	ret
 82025ad:	90                   	nop

```

```c
// Dispatcher_BuyPrivateStoreItem::dispatch_sig @ 0x8202322

/* Dispatcher_BuyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_BuyPrivateStoreItem::dispatch_sig
          (Dispatcher_BuyPrivateStoreItem *this,CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  ServiceRestrictManager *pSVar5;
  CPrivateStoreMgr *this_00;
  IBuyer *local_1c;
  int local_18;
  short local_12;
  uint local_10;
  
  iVar3 = CUser::get_state(param_1);
  if ((iVar3 == 3) &&
     (iVar3 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_1), iVar3 != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    uVar4 = LineFunc(0x9891,
                     "virtual int Dispatcher_BuyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)",
                     0,0);
    return uVar4;
  }
  if ((param_1 == (CUser *)0x0) || (cVar2 = CUser::CheckInTrade(param_1), cVar2 != '\0')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    pSVar5 = (ServiceRestrictManager *)ARAD::Singleton<ServiceRestrictManager>::Get();
    cVar2 = ServiceRestrictManager::isRestricted(pSVar5,param_1,1,0xb);
    if (cVar2 != '\0') {
      CUser::SendCmdErrorPacket(param_1,0x55,0xd1);
      return 0;
    }
    local_10 = CSecu_ProtectionField::Check(GlobalData::s_pSecuProtectionField,param_1,0x3d);
    if (local_10 == 0) {
      cVar2 = CUser::isHackUser(param_1);
      if ((cVar2 == '\0') && (cVar2 = CUser::isHackUserTimer(param_1), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        CUser::SendCmdErrorPacket(param_1,0x55,0x11);
        uVar4 = 0;
      }
      else {
        local_12 = 0;
        local_18 = 0;
        local_1c = (IBuyer *)0x0;
        cVar2 = PacketBuf::get_short(param_2,&local_12);
        if (cVar2 == '\x01') {
          cVar2 = PacketBuf::get_int(param_2,&local_18);
          if (cVar2 == '\x01') {
            if (local_18 < 0) {
              uVar4 = LineFunc(0x98ca,
                               "virtual int Dispatcher_BuyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
            }
            else {
              this_00 = (CPrivateStoreMgr *)private_store::GetInstancePrivateStoreMgr();
              private_store::CPrivateStoreMgr::GetStoreBuyer(this_00,&local_1c,param_1,(CUser *)0x0)
              ;
              (*(code *)**(undefined4 **)local_1c)(local_1c,(int)local_12,local_18);
              uVar4 = 0;
            }
          }
          else {
            uVar4 = LineFunc(0x98c9,
                             "virtual int Dispatcher_BuyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                             ,0,0);
          }
        }
        else {
          uVar4 = LineFunc(0x98c8,
                           "virtual int Dispatcher_BuyPrivateStoreItem::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
        }
      }
      return uVar4;
    }
    CUser::SendCmdErrorPacket(param_1,0x55,local_10 & 0xff);
    return 0;
  }
  return 0;
}

```

