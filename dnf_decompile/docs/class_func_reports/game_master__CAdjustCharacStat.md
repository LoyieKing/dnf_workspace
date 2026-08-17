# game_master__CAdjustCharacStat

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084ac58c game_master::CAdjustCharacStat::execute  [0x084ac58c-0x84ac667] ===
 84ac58c:	55                   	push   %ebp
 84ac58d:	89 e5                	mov    %esp,%ebp
 84ac58f:	56                   	push   %esi
 84ac590:	53                   	push   %ebx
 84ac591:	83 ec 20             	sub    $0x20,%esp
 84ac594:	8b 45 08             	mov    0x8(%ebp),%eax
 84ac597:	89 04 24             	mov    %eax,(%esp)
 84ac59a:	e8 1b 7a 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84ac59f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84ac5a2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ac5a5:	89 04 24             	mov    %eax,(%esp)
 84ac5a8:	e8 b9 81 1b 00       	call   8664766 <_ZN5CUser18adjust_charac_statEv>
 84ac5ad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ac5b0:	89 04 24             	mov    %eax,(%esp)
 84ac5b3:	e8 94 17 0e 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84ac5b8:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 84ac5bf:	00 
 84ac5c0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84ac5c7:	00 
 84ac5c8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ac5cb:	89 04 24             	mov    %eax,(%esp)
 84ac5ce:	e8 29 f3 c1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84ac5d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ac5da:	00 
 84ac5db:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ac5de:	89 04 24             	mov    %eax,(%esp)
 84ac5e1:	e8 3a f3 c1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84ac5e6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ac5ed:	00 
 84ac5ee:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ac5f1:	89 04 24             	mov    %eax,(%esp)
 84ac5f4:	e8 ab d8 c2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84ac5f9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ac5fc:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84ac603:	00 
 84ac604:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac608:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ac60b:	89 04 24             	mov    %eax,(%esp)
 84ac60e:	e8 3b de 1a 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 84ac613:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84ac61a:	00 
 84ac61b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ac61e:	89 04 24             	mov    %eax,(%esp)
 84ac621:	e8 32 f3 c1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84ac626:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ac629:	89 44 24 04          	mov    %eax,0x4(%esp)
 84ac62d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84ac630:	89 04 24             	mov    %eax,(%esp)
 84ac633:	e8 82 bf 19 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84ac638:	eb 1b                	jmp    84ac655 <_ZN11game_master17CAdjustCharacStat7executeEv+0xc9>
 84ac63a:	89 d3                	mov    %edx,%ebx
 84ac63c:	89 c6                	mov    %eax,%esi
 84ac63e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ac641:	89 04 24             	mov    %eax,(%esp)
 84ac644:	e8 37 18 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ac649:	89 f0                	mov    %esi,%eax
 84ac64b:	89 da                	mov    %ebx,%edx
 84ac64d:	89 04 24             	mov    %eax,(%esp)
 84ac650:	e8 fb 70 63 00       	call   8ae3750 <_Unwind_Resume>
 84ac655:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84ac658:	89 04 24             	mov    %eax,(%esp)
 84ac65b:	e8 20 18 0e 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84ac660:	83 c4 20             	add    $0x20,%esp
 84ac663:	5b                   	pop    %ebx
 84ac664:	5e                   	pop    %esi
 84ac665:	5d                   	pop    %ebp
 84ac666:	c3                   	ret
 84ac667:	90                   	nop

```

```c
// game_master::CAdjustCharacStat::execute @ 0x84ac58c

/* game_master::CAdjustCharacStat::execute() */

void __thiscall game_master::CAdjustCharacStat::execute(CAdjustCharacStat *this)

{
  PacketGuard local_1c [12];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  CUser::adjust_charac_stat(local_10);
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084ac5ce to 084ac637 has its CatchHandler @ 084ac63a */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,2);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
  InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,1);
  CUser::make_basic_info(local_10,(char *)local_1c,'\x01');
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  CUser::Send(local_10,local_1c);
  PacketGuard::~PacketGuard(local_1c);
  return;
}

```

