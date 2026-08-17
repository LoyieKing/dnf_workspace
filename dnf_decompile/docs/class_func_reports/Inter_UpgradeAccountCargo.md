# Inter_UpgradeAccountCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e243a Inter_UpgradeAccountCargo::dispatch_sig  [0x084e243a-0x84e24eb] ===
 84e243a:	55                   	push   %ebp
 84e243b:	89 e5                	mov    %esp,%ebp
 84e243d:	83 ec 28             	sub    $0x28,%esp
 84e2440:	8b 45 10             	mov    0x10(%ebp),%eax
 84e2443:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e2446:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2449:	89 04 24             	mov    %eax,(%esp)
 84e244c:	e8 3b 7f bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e2451:	83 f8 02             	cmp    $0x2,%eax
 84e2454:	0f 9e c0             	setle  %al
 84e2457:	84 c0                	test   %al,%al
 84e2459:	74 0a                	je     84e2465 <_ZN25Inter_UpgradeAccountCargo12dispatch_sigEP5CUserPci+0x2b>
 84e245b:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2460:	e9 85 00 00 00       	jmp    84e24ea <_ZN25Inter_UpgradeAccountCargo12dispatch_sigEP5CUserPci+0xb0>
 84e2465:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e2468:	0f b6 00             	movzbl (%eax),%eax
 84e246b:	84 c0                	test   %al,%al
 84e246d:	74 27                	je     84e2496 <_ZN25Inter_UpgradeAccountCargo12dispatch_sigEP5CUserPci+0x5c>
 84e246f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e2472:	0f b6 00             	movzbl (%eax),%eax
 84e2475:	0f b6 c0             	movzbl %al,%eax
 84e2478:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e247c:	c7 44 24 04 33 01 00 	movl   $0x133,0x4(%esp)
 84e2483:	00 
 84e2484:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2487:	89 04 24             	mov    %eax,(%esp)
 84e248a:	e8 b3 9a 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e248f:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2494:	eb 54                	jmp    84e24ea <_ZN25Inter_UpgradeAccountCargo12dispatch_sigEP5CUserPci+0xb0>
 84e2496:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2499:	89 04 24             	mov    %eax,(%esp)
 84e249c:	e8 8f d7 d4 ff       	call   822fc30 <_ZN5CUser19IsExistAccountCargoEv>
 84e24a1:	83 f0 01             	xor    $0x1,%eax
 84e24a4:	84 c0                	test   %al,%al
 84e24a6:	74 07                	je     84e24af <_ZN25Inter_UpgradeAccountCargo12dispatch_sigEP5CUserPci+0x75>
 84e24a8:	b8 00 00 00 00       	mov    $0x0,%eax
 84e24ad:	eb 3b                	jmp    84e24ea <_ZN25Inter_UpgradeAccountCargo12dispatch_sigEP5CUserPci+0xb0>
 84e24af:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e24b2:	89 04 24             	mov    %eax,(%esp)
 84e24b5:	e8 68 d7 d4 ff       	call   822fc22 <_ZN5CUser15GetAccountCargoEv>
 84e24ba:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e24bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e24c0:	8b 40 04             	mov    0x4(%eax),%eax
 84e24c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e24c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e24ca:	89 04 24             	mov    %eax,(%esp)
 84e24cd:	e8 74 99 00 00       	call   84ebe46 <_ZN13CAccountCargo11SetCapacityEj>
 84e24d2:	c7 44 24 04 33 01 00 	movl   $0x133,0x4(%esp)
 84e24d9:	00 
 84e24da:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e24dd:	89 04 24             	mov    %eax,(%esp)
 84e24e0:	e8 bb 99 19 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 84e24e5:	b8 00 00 00 00       	mov    $0x0,%eax
 84e24ea:	c9                   	leave
 84e24eb:	c3                   	ret

```

```c
// Inter_UpgradeAccountCargo::dispatch_sig @ 0x84e243a

/* Inter_UpgradeAccountCargo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_UpgradeAccountCargo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  CAccountCargo *this;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    if (*(char *)param_3 == '\0') {
      cVar1 = CUser::IsExistAccountCargo((CUser *)param_2);
      if (cVar1 == '\x01') {
        this = (CAccountCargo *)CUser::GetAccountCargo((CUser *)param_2);
        CAccountCargo::SetCapacity(this,*(uint *)(param_3 + 4));
        CUser::SendCmdOkPacket((CUser *)param_2,0x133);
      }
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x133,*(undefined1 *)param_3);
    }
  }
  return 0;
}

```

