# Inter_DBCheckDoubleGuildName

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d347e Inter_DBCheckDoubleGuildName::dispatch_sig  [0x084d347e-0x84d358d] ===
 84d347e:	55                   	push   %ebp
 84d347f:	89 e5                	mov    %esp,%ebp
 84d3481:	56                   	push   %esi
 84d3482:	53                   	push   %ebx
 84d3483:	83 ec 20             	sub    $0x20,%esp
 84d3486:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3489:	89 04 24             	mov    %eax,(%esp)
 84d348c:	e8 fb 6e c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d3491:	83 f8 02             	cmp    $0x2,%eax
 84d3494:	0f 9e c0             	setle  %al
 84d3497:	84 c0                	test   %al,%al
 84d3499:	74 0a                	je     84d34a5 <_ZN28Inter_DBCheckDoubleGuildName12dispatch_sigEP5CUserPci+0x27>
 84d349b:	b8 00 00 00 00       	mov    $0x0,%eax
 84d34a0:	e9 e1 00 00 00       	jmp    84d3586 <_ZN28Inter_DBCheckDoubleGuildName12dispatch_sigEP5CUserPci+0x108>
 84d34a5:	8b 45 10             	mov    0x10(%ebp),%eax
 84d34a8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d34ab:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d34ae:	0f b6 00             	movzbl (%eax),%eax
 84d34b1:	3c 02                	cmp    $0x2,%al
 84d34b3:	75 20                	jne    84d34d5 <_ZN28Inter_DBCheckDoubleGuildName12dispatch_sigEP5CUserPci+0x57>
 84d34b5:	c7 44 24 08 6b 00 00 	movl   $0x6b,0x8(%esp)
 84d34bc:	00 
 84d34bd:	c7 44 24 04 9f 00 00 	movl   $0x9f,0x4(%esp)
 84d34c4:	00 
 84d34c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d34c8:	89 04 24             	mov    %eax,(%esp)
 84d34cb:	e8 72 8a 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d34d0:	e9 ac 00 00 00       	jmp    84d3581 <_ZN28Inter_DBCheckDoubleGuildName12dispatch_sigEP5CUserPci+0x103>
 84d34d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d34d8:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84d34df:	00 
 84d34e0:	89 04 24             	mov    %eax,(%esp)
 84d34e3:	e8 94 8b 01 00       	call   84ec07c <_ZN15CUserCharacInfo18setGuildCreateFlagEt>
 84d34e8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d34eb:	89 04 24             	mov    %eax,(%esp)
 84d34ee:	e8 59 a8 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d34f3:	c7 44 24 08 9f 00 00 	movl   $0x9f,0x8(%esp)
 84d34fa:	00 
 84d34fb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3502:	00 
 84d3503:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3506:	89 04 24             	mov    %eax,(%esp)
 84d3509:	e8 ee 83 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d350e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3515:	00 
 84d3516:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3519:	89 04 24             	mov    %eax,(%esp)
 84d351c:	e8 ff 83 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d3521:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3528:	00 
 84d3529:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d352c:	89 04 24             	mov    %eax,(%esp)
 84d352f:	e8 24 84 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d3534:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3537:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d353b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d353e:	89 04 24             	mov    %eax,(%esp)
 84d3541:	e8 74 50 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d3546:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3549:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84d3550:	00 
 84d3551:	89 04 24             	mov    %eax,(%esp)
 84d3554:	e8 23 8b 01 00       	call   84ec07c <_ZN15CUserCharacInfo18setGuildCreateFlagEt>
 84d3559:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d355c:	89 04 24             	mov    %eax,(%esp)
 84d355f:	e8 1c a9 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d3564:	eb 1b                	jmp    84d3581 <_ZN28Inter_DBCheckDoubleGuildName12dispatch_sigEP5CUserPci+0x103>
 84d3566:	89 d3                	mov    %edx,%ebx
 84d3568:	89 c6                	mov    %eax,%esi
 84d356a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d356d:	89 04 24             	mov    %eax,(%esp)
 84d3570:	e8 0b a9 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d3575:	89 f0                	mov    %esi,%eax
 84d3577:	89 da                	mov    %ebx,%edx
 84d3579:	89 04 24             	mov    %eax,(%esp)
 84d357c:	e8 cf 01 61 00       	call   8ae3750 <_Unwind_Resume>
 84d3581:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3586:	83 c4 20             	add    $0x20,%esp
 84d3589:	5b                   	pop    %ebx
 84d358a:	5e                   	pop    %esi
 84d358b:	5d                   	pop    %ebp
 84d358c:	c3                   	ret
 84d358d:	90                   	nop

```

```c
// Inter_DBCheckDoubleGuildName::dispatch_sig @ 0x84d347e

/* Inter_DBCheckDoubleGuildName::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DBCheckDoubleGuildName::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = param_3;
    if (*(char *)param_3 == '\x02') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x9f,0x6b);
    }
    else {
      CUserCharacInfo::setGuildCreateFlag((CUserCharacInfo *)param_2,2);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d3509 to 084d3545 has its CatchHandler @ 084d3566 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x9f);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      CUserCharacInfo::setGuildCreateFlag((CUserCharacInfo *)param_2,4);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}

```

