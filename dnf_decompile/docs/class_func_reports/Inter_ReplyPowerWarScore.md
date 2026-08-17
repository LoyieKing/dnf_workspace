# Inter_ReplyPowerWarScore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d46fa Inter_ReplyPowerWarScore::dispatch_sig  [0x084d46fa-0x84d47d3] ===
 84d46fa:	55                   	push   %ebp
 84d46fb:	89 e5                	mov    %esp,%ebp
 84d46fd:	56                   	push   %esi
 84d46fe:	53                   	push   %ebx
 84d46ff:	83 ec 20             	sub    $0x20,%esp
 84d4702:	8b 45 10             	mov    0x10(%ebp),%eax
 84d4705:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d4708:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d470b:	89 04 24             	mov    %eax,(%esp)
 84d470e:	e8 39 96 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d4713:	c7 44 24 08 9b 00 00 	movl   $0x9b,0x8(%esp)
 84d471a:	00 
 84d471b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d4722:	00 
 84d4723:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4726:	89 04 24             	mov    %eax,(%esp)
 84d4729:	e8 ce 71 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d472e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4731:	8b 40 0a             	mov    0xa(%eax),%eax
 84d4734:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d4738:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d473b:	89 04 24             	mov    %eax,(%esp)
 84d473e:	e8 f9 71 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d4743:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4746:	8b 40 0e             	mov    0xe(%eax),%eax
 84d4749:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d474d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4750:	89 04 24             	mov    %eax,(%esp)
 84d4753:	e8 e4 71 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d4758:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d475f:	00 
 84d4760:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d4763:	89 04 24             	mov    %eax,(%esp)
 84d4766:	e8 ed 71 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d476b:	e8 37 5c c0 ff       	call   80da3a7 <_Z11G_GameWorldv>
 84d4770:	8d 55 e8             	lea    -0x18(%ebp),%edx
 84d4773:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d4777:	89 04 24             	mov    %eax,(%esp)
 84d477a:	e8 95 44 1f 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 84d477f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4782:	8b 48 0e             	mov    0xe(%eax),%ecx
 84d4785:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d4788:	8b 50 0a             	mov    0xa(%eax),%edx
 84d478b:	a1 50 be 40 09       	mov    0x940be50,%eax
 84d4790:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84d4794:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d4798:	89 04 24             	mov    %eax,(%esp)
 84d479b:	e8 8e 76 01 00       	call   84ebe2e <_ZN13CPowerManager16SetPowerWarPointEii>
 84d47a0:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d47a5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d47a8:	89 04 24             	mov    %eax,(%esp)
 84d47ab:	e8 d0 96 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d47b0:	89 d8                	mov    %ebx,%eax
 84d47b2:	83 c4 20             	add    $0x20,%esp
 84d47b5:	5b                   	pop    %ebx
 84d47b6:	5e                   	pop    %esi
 84d47b7:	5d                   	pop    %ebp
 84d47b8:	c3                   	ret
 84d47b9:	89 d3                	mov    %edx,%ebx
 84d47bb:	89 c6                	mov    %eax,%esi
 84d47bd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d47c0:	89 04 24             	mov    %eax,(%esp)
 84d47c3:	e8 b8 96 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d47c8:	89 f0                	mov    %esi,%eax
 84d47ca:	89 da                	mov    %ebx,%edx
 84d47cc:	89 04 24             	mov    %eax,(%esp)
 84d47cf:	e8 7c ef 60 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// Inter_ReplyPowerWarScore::dispatch_sig @ 0x84d46fa

/* Inter_ReplyPowerWarScore::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReplyPowerWarScore::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  GameWorld *this;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d4729 to 084d477e has its CatchHandler @ 084d47b9 */
  InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x9b);
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 10));
  InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,*(int *)(local_10 + 0xe));
  InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
  this = (GameWorld *)G_GameWorld();
  GameWorld::send_all(this,local_1c);
  CPowerManager::SetPowerWarPoint
            (GlobalData::s_power_manager,*(int *)(local_10 + 10),*(int *)(local_10 + 0xe));
  PacketGuard::~PacketGuard(local_1c);
  return 0;
}

```

