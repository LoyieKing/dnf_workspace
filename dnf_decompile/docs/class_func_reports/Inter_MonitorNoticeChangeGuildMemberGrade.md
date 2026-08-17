# Inter_MonitorNoticeChangeGuildMemberGrade

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084cc55e Inter_MonitorNoticeChangeGuildMemberGrade::dispatch_sig  [0x084cc55e-0x84cc64f] ===
 84cc55e:	55                   	push   %ebp
 84cc55f:	89 e5                	mov    %esp,%ebp
 84cc561:	56                   	push   %esi
 84cc562:	53                   	push   %ebx
 84cc563:	83 ec 20             	sub    $0x20,%esp
 84cc566:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc569:	89 04 24             	mov    %eax,(%esp)
 84cc56c:	e8 1b de c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84cc571:	85 c0                	test   %eax,%eax
 84cc573:	0f 94 c0             	sete   %al
 84cc576:	84 c0                	test   %al,%al
 84cc578:	74 0a                	je     84cc584 <_ZN41Inter_MonitorNoticeChangeGuildMemberGrade12dispatch_sigEP5CUserPci+0x26>
 84cc57a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc57f:	e9 c3 00 00 00       	jmp    84cc647 <_ZN41Inter_MonitorNoticeChangeGuildMemberGrade12dispatch_sigEP5CUserPci+0xe9>
 84cc584:	8b 45 10             	mov    0x10(%ebp),%eax
 84cc587:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84cc58a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cc58d:	8b 58 0e             	mov    0xe(%eax),%ebx
 84cc590:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84cc597:	ff 
 84cc598:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc59b:	89 04 24             	mov    %eax,(%esp)
 84cc59e:	e8 fd 19 18 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84cc5a3:	39 c3                	cmp    %eax,%ebx
 84cc5a5:	0f 95 c0             	setne  %al
 84cc5a8:	84 c0                	test   %al,%al
 84cc5aa:	74 0a                	je     84cc5b6 <_ZN41Inter_MonitorNoticeChangeGuildMemberGrade12dispatch_sigEP5CUserPci+0x58>
 84cc5ac:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc5b1:	e9 91 00 00 00       	jmp    84cc647 <_ZN41Inter_MonitorNoticeChangeGuildMemberGrade12dispatch_sigEP5CUserPci+0xe9>
 84cc5b6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc5b9:	89 04 24             	mov    %eax,(%esp)
 84cc5bc:	e8 8b 17 0c 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84cc5c1:	c7 44 24 08 8c 00 00 	movl   $0x8c,0x8(%esp)
 84cc5c8:	00 
 84cc5c9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84cc5d0:	00 
 84cc5d1:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc5d4:	89 04 24             	mov    %eax,(%esp)
 84cc5d7:	e8 20 f3 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84cc5dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84cc5df:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84cc5e3:	0f b6 c0             	movzbl %al,%eax
 84cc5e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc5ea:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc5ed:	89 04 24             	mov    %eax,(%esp)
 84cc5f0:	e8 2b f3 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84cc5f5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84cc5fc:	00 
 84cc5fd:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc600:	89 04 24             	mov    %eax,(%esp)
 84cc603:	e8 50 f3 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84cc608:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc60b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84cc60f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84cc612:	89 04 24             	mov    %eax,(%esp)
 84cc615:	e8 a0 bf 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84cc61a:	bb 00 00 00 00       	mov    $0x0,%ebx
 84cc61f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc622:	89 04 24             	mov    %eax,(%esp)
 84cc625:	e8 56 18 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cc62a:	eb 1b                	jmp    84cc647 <_ZN41Inter_MonitorNoticeChangeGuildMemberGrade12dispatch_sigEP5CUserPci+0xe9>
 84cc62c:	89 d3                	mov    %edx,%ebx
 84cc62e:	89 c6                	mov    %eax,%esi
 84cc630:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84cc633:	89 04 24             	mov    %eax,(%esp)
 84cc636:	e8 45 18 0c 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84cc63b:	89 f0                	mov    %esi,%eax
 84cc63d:	89 da                	mov    %ebx,%edx
 84cc63f:	89 04 24             	mov    %eax,(%esp)
 84cc642:	e8 09 71 61 00       	call   8ae3750 <_Unwind_Resume>
 84cc647:	89 d8                	mov    %ebx,%eax
 84cc649:	83 c4 20             	add    $0x20,%esp
 84cc64c:	5b                   	pop    %ebx
 84cc64d:	5e                   	pop    %esi
 84cc64e:	5d                   	pop    %ebp
 84cc64f:	c3                   	ret

```

```c
// Inter_MonitorNoticeChangeGuildMemberGrade::dispatch_sig @ 0x84cc55e

/* Inter_MonitorNoticeChangeGuildMemberGrade::dispatch_sig(CUser*, char*, int) */

undefined4
Inter_MonitorNoticeChangeGuildMemberGrade::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_10 = param_3;
    iVar1 = *(int *)(param_3 + 0xe);
    iVar2 = CUser::get_charac_no((CUser *)param_2,-1);
    if (iVar1 == iVar2) {
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084cc5d7 to 084cc619 has its CatchHandler @ 084cc62c */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x8c);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,(uint)*(byte *)(local_10 + 0x12));
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}

```

