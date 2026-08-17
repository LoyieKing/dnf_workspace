# Dispatcher_DisguiseCancel

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0821b496 Dispatcher_DisguiseCancel::dispatch_sig  [0x0821b496-0x821b609] ===
 821b496:	55                   	push   %ebp
 821b497:	89 e5                	mov    %esp,%ebp
 821b499:	56                   	push   %esi
 821b49a:	53                   	push   %ebx
 821b49b:	83 ec 20             	sub    $0x20,%esp
 821b49e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 821b4a2:	75 0a                	jne    821b4ae <_ZN25Dispatcher_DisguiseCancel12dispatch_sigEP5CUserR9PacketBuf+0x18>
 821b4a4:	bb 00 00 00 00       	mov    $0x0,%ebx
 821b4a9:	e9 53 01 00 00       	jmp    821b601 <_ZN25Dispatcher_DisguiseCancel12dispatch_sigEP5CUserR9PacketBuf+0x16b>
 821b4ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b4b1:	89 04 24             	mov    %eax,(%esp)
 821b4b4:	e8 d3 ee eb ff       	call   80da38c <_ZN5CUser9get_stateEv>
 821b4b9:	83 f8 03             	cmp    $0x3,%eax
 821b4bc:	0f 95 c0             	setne  %al
 821b4bf:	84 c0                	test   %al,%al
 821b4c1:	74 0a                	je     821b4cd <_ZN25Dispatcher_DisguiseCancel12dispatch_sigEP5CUserR9PacketBuf+0x37>
 821b4c3:	bb 00 00 00 00       	mov    $0x0,%ebx
 821b4c8:	e9 34 01 00 00       	jmp    821b601 <_ZN25Dispatcher_DisguiseCancel12dispatch_sigEP5CUserR9PacketBuf+0x16b>
 821b4cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b4d0:	89 04 24             	mov    %eax,(%esp)
 821b4d3:	e8 1e 44 01 00       	call   822f8f6 <_ZN15CUserCharacInfo16isDisguiseCharacEv>
 821b4d8:	83 f0 01             	xor    $0x1,%eax
 821b4db:	84 c0                	test   %al,%al
 821b4dd:	74 3e                	je     821b51d <_ZN25Dispatcher_DisguiseCancel12dispatch_sigEP5CUserR9PacketBuf+0x87>
 821b4df:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 821b4e6:	00 
 821b4e7:	c7 44 24 04 d7 00 00 	movl   $0xd7,0x4(%esp)
 821b4ee:	00 
 821b4ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b4f2:	89 04 24             	mov    %eax,(%esp)
 821b4f5:	e8 48 0a 46 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 821b4fa:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b4fd:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821b504:	00 
 821b505:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821b50c:	00 
 821b50d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821b514:	00 
 821b515:	89 04 24             	mov    %eax,(%esp)
 821b518:	e8 fd 43 01 00       	call   822f91a <_ZN15CUserCharacInfo17setDisguiseCharacEbht>
 821b51d:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b520:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 821b527:	00 
 821b528:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821b52f:	00 
 821b530:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821b537:	00 
 821b538:	89 04 24             	mov    %eax,(%esp)
 821b53b:	e8 da 43 01 00       	call   822f91a <_ZN15CUserCharacInfo17setDisguiseCharacEbht>
 821b540:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821b543:	89 04 24             	mov    %eax,(%esp)
 821b546:	e8 01 28 37 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 821b54b:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 821b552:	00 
 821b553:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821b55a:	00 
 821b55b:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821b55e:	89 04 24             	mov    %eax,(%esp)
 821b561:	e8 96 03 eb ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 821b566:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 821b56d:	00 
 821b56e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821b571:	89 04 24             	mov    %eax,(%esp)
 821b574:	e8 a7 03 eb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 821b579:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821b580:	00 
 821b581:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821b584:	89 04 24             	mov    %eax,(%esp)
 821b587:	e8 18 e9 eb ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 821b58c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821b58f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 821b596:	00 
 821b597:	89 44 24 04          	mov    %eax,0x4(%esp)
 821b59b:	8b 45 0c             	mov    0xc(%ebp),%eax
 821b59e:	89 04 24             	mov    %eax,(%esp)
 821b5a1:	e8 a8 ee 43 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 821b5a6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 821b5ad:	00 
 821b5ae:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821b5b1:	89 04 24             	mov    %eax,(%esp)
 821b5b4:	e8 9f 03 eb ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 821b5b9:	e8 e9 ed eb ff       	call   80da3a7 <_Z11G_GameWorldv>
 821b5be:	8b 55 0c             	mov    0xc(%ebp),%edx
 821b5c1:	89 54 24 08          	mov    %edx,0x8(%esp)
 821b5c5:	8d 55 ec             	lea    -0x14(%ebp),%edx
 821b5c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 821b5cc:	89 04 24             	mov    %eax,(%esp)
 821b5cf:	e8 88 93 f1 ff       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 821b5d4:	bb 00 00 00 00       	mov    $0x0,%ebx
 821b5d9:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821b5dc:	89 04 24             	mov    %eax,(%esp)
 821b5df:	e8 9c 28 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821b5e4:	eb 1b                	jmp    821b601 <_ZN25Dispatcher_DisguiseCancel12dispatch_sigEP5CUserR9PacketBuf+0x16b>
 821b5e6:	89 d3                	mov    %edx,%ebx
 821b5e8:	89 c6                	mov    %eax,%esi
 821b5ea:	8d 45 ec             	lea    -0x14(%ebp),%eax
 821b5ed:	89 04 24             	mov    %eax,(%esp)
 821b5f0:	e8 8b 28 37 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 821b5f5:	89 f0                	mov    %esi,%eax
 821b5f7:	89 da                	mov    %ebx,%edx
 821b5f9:	89 04 24             	mov    %eax,(%esp)
 821b5fc:	e8 4f 81 8c 00       	call   8ae3750 <_Unwind_Resume>
 821b601:	89 d8                	mov    %ebx,%eax
 821b603:	83 c4 20             	add    $0x20,%esp
 821b606:	5b                   	pop    %ebx
 821b607:	5e                   	pop    %esi
 821b608:	5d                   	pop    %ebp
 821b609:	c3                   	ret

```

```c
// Dispatcher_DisguiseCancel::dispatch_sig @ 0x821b496

/* Dispatcher_DisguiseCancel::dispatch_sig(CUser*, PacketBuf&) */

undefined4 Dispatcher_DisguiseCancel::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  char cVar1;
  int iVar2;
  GameWorld *this;
  PacketGuard local_18 [12];
  
  if ((param_2 != (PacketBuf *)0x0) && (iVar2 = CUser::get_state((CUser *)param_2), iVar2 == 3)) {
    cVar1 = CUserCharacInfo::isDisguiseCharac((CUserCharacInfo *)param_2);
    if (cVar1 != '\x01') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xd7,3);
      CUserCharacInfo::setDisguiseCharac((CUserCharacInfo *)param_2,false,'\0',0);
    }
    CUserCharacInfo::setDisguiseCharac((CUserCharacInfo *)param_2,false,'\0',0);
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 0821b561 to 0821b5d3 has its CatchHandler @ 0821b5e6 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    CUser::make_basic_info((CUser *)param_2,(char *)local_18,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    this = (GameWorld *)G_GameWorld();
    GameWorld::send_all(this,local_18,(CUser *)param_2);
    PacketGuard::~PacketGuard(local_18);
  }
  return 0;
}

```

