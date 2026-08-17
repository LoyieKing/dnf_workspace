# Dispatcher_GoblinPadRequestCryptKey

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821e58c Dispatcher_GoblinPadRequestCryptKey::dispatch_sig  [0x0821e58c-0x821e747] ===
 821e58c:	55                   	push   %ebp
 821e58d:	89 e5                	mov    %esp,%ebp
 821e58f:	56                   	push   %esi
 821e590:	53                   	push   %ebx
 821e591:	83 ec 20             	sub    $0x20,%esp
 821e594:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e597:	89 04 24             	mov    %eax,(%esp)
 821e59a:	e8 8f 17 01 00       	call   822fd2e <_ZN5CUser6getPadEv>
 821e59f:	89 04 24             	mov    %eax,(%esp)
 821e5a2:	e8 43 b3 37 00       	call   85998ea <_ZN8Sanicova4CPad18GenerateRandomDataEv>
 821e5a7:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e5aa:	89 04 24             	mov    %eax,(%esp)
 821e5ad:	e8 9a f7 36 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821e5b2:	c7 44 24 08 e2 00 00 	movl   $0xe2,0x8(%esp)
 821e5b9:	00 
 821e5ba:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821e5c1:	00 
 821e5c2:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e5c5:	89 04 24             	mov    %eax,(%esp)
 821e5c8:	e8 2f d3 ea ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821e5cd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821e5d4:	00 
 821e5d5:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e5d8:	89 04 24             	mov    %eax,(%esp)
 821e5db:	e8 40 d3 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e5e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e5e3:	89 04 24             	mov    %eax,(%esp)
 821e5e6:	e8 43 17 01 00       	call   822fd2e <_ZN5CUser6getPadEv>
 821e5eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821e5f2:	00 
 821e5f3:	89 04 24             	mov    %eax,(%esp)
 821e5f6:	e8 77 b2 37 00       	call   8599872 <_ZN8Sanicova4CPad9GetKeyIdxEi>
 821e5fb:	0f b7 c0             	movzwl %ax,%eax
 821e5fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e602:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e605:	89 04 24             	mov    %eax,(%esp)
 821e608:	e8 97 b8 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821e60d:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e610:	89 04 24             	mov    %eax,(%esp)
 821e613:	e8 16 17 01 00       	call   822fd2e <_ZN5CUser6getPadEv>
 821e618:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821e61f:	00 
 821e620:	89 04 24             	mov    %eax,(%esp)
 821e623:	e8 4a b2 37 00       	call   8599872 <_ZN8Sanicova4CPad9GetKeyIdxEi>
 821e628:	0f b7 c0             	movzwl %ax,%eax
 821e62b:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e62f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e632:	89 04 24             	mov    %eax,(%esp)
 821e635:	e8 6a b8 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821e63a:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e63d:	89 04 24             	mov    %eax,(%esp)
 821e640:	e8 e9 16 01 00       	call   822fd2e <_ZN5CUser6getPadEv>
 821e645:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821e64c:	00 
 821e64d:	89 04 24             	mov    %eax,(%esp)
 821e650:	e8 e1 b2 37 00       	call   8599936 <_ZN8Sanicova4CPad12GetShakeDataEi>
 821e655:	0f b6 c0             	movzbl %al,%eax
 821e658:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e65c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e65f:	89 04 24             	mov    %eax,(%esp)
 821e662:	e8 b9 d2 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e667:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e66a:	89 04 24             	mov    %eax,(%esp)
 821e66d:	e8 bc 16 01 00       	call   822fd2e <_ZN5CUser6getPadEv>
 821e672:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821e679:	00 
 821e67a:	89 04 24             	mov    %eax,(%esp)
 821e67d:	e8 b4 b2 37 00       	call   8599936 <_ZN8Sanicova4CPad12GetShakeDataEi>
 821e682:	0f b6 c0             	movzbl %al,%eax
 821e685:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e689:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e68c:	89 04 24             	mov    %eax,(%esp)
 821e68f:	e8 8c d2 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e694:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e697:	89 04 24             	mov    %eax,(%esp)
 821e69a:	e8 8f 16 01 00       	call   822fd2e <_ZN5CUser6getPadEv>
 821e69f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 821e6a6:	00 
 821e6a7:	89 04 24             	mov    %eax,(%esp)
 821e6aa:	e8 87 b2 37 00       	call   8599936 <_ZN8Sanicova4CPad12GetShakeDataEi>
 821e6af:	0f b6 c0             	movzbl %al,%eax
 821e6b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e6b6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e6b9:	89 04 24             	mov    %eax,(%esp)
 821e6bc:	e8 5f d2 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e6c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e6c4:	89 04 24             	mov    %eax,(%esp)
 821e6c7:	e8 62 16 01 00       	call   822fd2e <_ZN5CUser6getPadEv>
 821e6cc:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 821e6d3:	00 
 821e6d4:	89 04 24             	mov    %eax,(%esp)
 821e6d7:	e8 5a b2 37 00       	call   8599936 <_ZN8Sanicova4CPad12GetShakeDataEi>
 821e6dc:	0f b6 c0             	movzbl %al,%eax
 821e6df:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e6e3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e6e6:	89 04 24             	mov    %eax,(%esp)
 821e6e9:	e8 32 d2 ea ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821e6ee:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821e6f5:	00 
 821e6f6:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e6f9:	89 04 24             	mov    %eax,(%esp)
 821e6fc:	e8 57 d2 ea ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821e701:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e704:	89 44 24 04          	mov    %eax,0x4(%esp)
 821e708:	8b 45 0c             	mov    0xc(%ebp),%eax
 821e70b:	89 04 24             	mov    %eax,(%esp)
 821e70e:	e8 a7 9e 42 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 821e713:	bb 00 00 00 00       	mov    $0x0,%ebx
 821e718:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e71b:	89 04 24             	mov    %eax,(%esp)
 821e71e:	e8 5d f7 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821e723:	89 d8                	mov    %ebx,%eax
 821e725:	83 c4 20             	add    $0x20,%esp
 821e728:	5b                   	pop    %ebx
 821e729:	5e                   	pop    %esi
 821e72a:	5d                   	pop    %ebp
 821e72b:	c3                   	ret
 821e72c:	89 d3                	mov    %edx,%ebx
 821e72e:	89 c6                	mov    %eax,%esi
 821e730:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821e733:	89 04 24             	mov    %eax,(%esp)
 821e736:	e8 45 f7 36 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821e73b:	89 f0                	mov    %esi,%eax
 821e73d:	89 da                	mov    %ebx,%edx
 821e73f:	89 04 24             	mov    %eax,(%esp)
 821e742:	e8 09 50 8c 00       	call   8ae3750 <_Unwind_Resume>
 821e747:	90                   	nop

```

```c
// Dispatcher_GoblinPadRequestCryptKey::dispatch_sig @ 0x821e58c

/* Dispatcher_GoblinPadRequestCryptKey::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_GoblinPadRequestCryptKey::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  CPad *pCVar1;
  uint uVar2;
  PacketGuard local_18 [12];
  
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  Sanicova::CPad::GenerateRandomData(pCVar1);
  PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0821e5c8 to 0821e712 has its CatchHandler @ 0821e72c */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0xe2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,1);
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  uVar2 = Sanicova::CPad::GetKeyIdx(pCVar1,0);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar2 & 0xffff);
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  uVar2 = Sanicova::CPad::GetKeyIdx(pCVar1,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,uVar2 & 0xffff);
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  uVar2 = Sanicova::CPad::GetShakeData(pCVar1,0);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar2 & 0xff);
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  uVar2 = Sanicova::CPad::GetShakeData(pCVar1,1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar2 & 0xff);
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  uVar2 = Sanicova::CPad::GetShakeData(pCVar1,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar2 & 0xff);
  pCVar1 = (CPad *)CUser::getPad((CUser *)param_2);
  uVar2 = Sanicova::CPad::GetShakeData(pCVar1,3);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,uVar2 & 0xff);
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
  CUser::Send((CUser *)param_2,local_18);
  PacketGuard::~PacketGuard(local_18);
  return 0;
}

```

