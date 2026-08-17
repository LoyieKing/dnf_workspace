# Inter_NpcLimitBuyItemChangeInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e6448 Inter_NpcLimitBuyItemChangeInfo::dispatch_sig  [0x084e6448-0x84e6501] ===
 84e6448:	55                   	push   %ebp
 84e6449:	89 e5                	mov    %esp,%ebp
 84e644b:	56                   	push   %esi
 84e644c:	53                   	push   %ebx
 84e644d:	83 ec 20             	sub    $0x20,%esp
 84e6450:	8b 45 10             	mov    0x10(%ebp),%eax
 84e6453:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e6456:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6459:	89 04 24             	mov    %eax,(%esp)
 84e645c:	e8 eb 78 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e6461:	c7 44 24 08 91 01 00 	movl   $0x191,0x8(%esp)
 84e6468:	00 
 84e6469:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e6470:	00 
 84e6471:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6474:	89 04 24             	mov    %eax,(%esp)
 84e6477:	e8 80 54 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e647c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e647f:	8b 40 0a             	mov    0xa(%eax),%eax
 84e6482:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e6486:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e6489:	89 04 24             	mov    %eax,(%esp)
 84e648c:	e8 ab 54 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e6491:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e6494:	8b 40 0e             	mov    0xe(%eax),%eax
 84e6497:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e649b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e649e:	89 04 24             	mov    %eax,(%esp)
 84e64a1:	e8 96 54 be ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84e64a6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e64ad:	00 
 84e64ae:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e64b1:	89 04 24             	mov    %eax,(%esp)
 84e64b4:	e8 9f 54 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e64b9:	e8 e9 3e bf ff       	call   80da3a7 <_Z11G_GameWorldv>
 84e64be:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84e64c1:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e64c5:	89 04 24             	mov    %eax,(%esp)
 84e64c8:	e8 47 27 1e 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84e64cd:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e64d2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e64d5:	89 04 24             	mov    %eax,(%esp)
 84e64d8:	e8 a3 79 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e64dd:	89 d8                	mov    %ebx,%eax
 84e64df:	83 c4 20             	add    $0x20,%esp
 84e64e2:	5b                   	pop    %ebx
 84e64e3:	5e                   	pop    %esi
 84e64e4:	5d                   	pop    %ebp
 84e64e5:	c3                   	ret
 84e64e6:	89 d3                	mov    %edx,%ebx
 84e64e8:	89 c6                	mov    %eax,%esi
 84e64ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e64ed:	89 04 24             	mov    %eax,(%esp)
 84e64f0:	e8 8b 79 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e64f5:	89 f0                	mov    %esi,%eax
 84e64f7:	89 da                	mov    %ebx,%edx
 84e64f9:	89 04 24             	mov    %eax,(%esp)
 84e64fc:	e8 4f d2 5f 00       	call   8ae3750 <_Unwind_Resume>
 84e6501:	90                   	nop

```

```c
// Inter_NpcLimitBuyItemChangeInfo::dispatch_sig @ 0x84e6448

/* Inter_NpcLimitBuyItemChangeInfo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_NpcLimitBuyItemChangeInfo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084e6477 to 084e64cc has its CatchHandler @ 084e64e6 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x191);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xe));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

