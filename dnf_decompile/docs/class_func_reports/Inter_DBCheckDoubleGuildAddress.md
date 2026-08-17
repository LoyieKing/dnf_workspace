# Inter_DBCheckDoubleGuildAddress

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d358e Inter_DBCheckDoubleGuildAddress::dispatch_sig  [0x084d358e-0x84d3689] ===
 84d358e:	55                   	push   %ebp
 84d358f:	89 e5                	mov    %esp,%ebp
 84d3591:	56                   	push   %esi
 84d3592:	53                   	push   %ebx
 84d3593:	83 ec 20             	sub    $0x20,%esp
 84d3596:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d3599:	89 04 24             	mov    %eax,(%esp)
 84d359c:	e8 eb 6d c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d35a1:	83 f8 02             	cmp    $0x2,%eax
 84d35a4:	0f 9e c0             	setle  %al
 84d35a7:	84 c0                	test   %al,%al
 84d35a9:	74 0a                	je     84d35b5 <_ZN31Inter_DBCheckDoubleGuildAddress12dispatch_sigEP5CUserPci+0x27>
 84d35ab:	b8 00 00 00 00       	mov    $0x0,%eax
 84d35b0:	e9 ce 00 00 00       	jmp    84d3683 <_ZN31Inter_DBCheckDoubleGuildAddress12dispatch_sigEP5CUserPci+0xf5>
 84d35b5:	8b 45 10             	mov    0x10(%ebp),%eax
 84d35b8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d35bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d35be:	0f b6 00             	movzbl (%eax),%eax
 84d35c1:	3c 02                	cmp    $0x2,%al
 84d35c3:	75 20                	jne    84d35e5 <_ZN31Inter_DBCheckDoubleGuildAddress12dispatch_sigEP5CUserPci+0x57>
 84d35c5:	c7 44 24 08 6f 00 00 	movl   $0x6f,0x8(%esp)
 84d35cc:	00 
 84d35cd:	c7 44 24 04 a0 00 00 	movl   $0xa0,0x4(%esp)
 84d35d4:	00 
 84d35d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d35d8:	89 04 24             	mov    %eax,(%esp)
 84d35db:	e8 62 89 1a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84d35e0:	e9 99 00 00 00       	jmp    84d367e <_ZN31Inter_DBCheckDoubleGuildAddress12dispatch_sigEP5CUserPci+0xf0>
 84d35e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d35e8:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 84d35ef:	00 
 84d35f0:	89 04 24             	mov    %eax,(%esp)
 84d35f3:	e8 84 8a 01 00       	call   84ec07c <_ZN15CUserCharacInfo18setGuildCreateFlagEt>
 84d35f8:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d35fb:	89 04 24             	mov    %eax,(%esp)
 84d35fe:	e8 49 a7 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d3603:	c7 44 24 08 a0 00 00 	movl   $0xa0,0x8(%esp)
 84d360a:	00 
 84d360b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3612:	00 
 84d3613:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3616:	89 04 24             	mov    %eax,(%esp)
 84d3619:	e8 de 82 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d361e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3625:	00 
 84d3626:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3629:	89 04 24             	mov    %eax,(%esp)
 84d362c:	e8 ef 82 bf ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84d3631:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d3638:	00 
 84d3639:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d363c:	89 04 24             	mov    %eax,(%esp)
 84d363f:	e8 14 83 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d3644:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3647:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d364b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d364e:	89 04 24             	mov    %eax,(%esp)
 84d3651:	e8 64 4f 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d3656:	eb 1b                	jmp    84d3673 <_ZN31Inter_DBCheckDoubleGuildAddress12dispatch_sigEP5CUserPci+0xe5>
 84d3658:	89 d3                	mov    %edx,%ebx
 84d365a:	89 c6                	mov    %eax,%esi
 84d365c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d365f:	89 04 24             	mov    %eax,(%esp)
 84d3662:	e8 19 a8 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d3667:	89 f0                	mov    %esi,%eax
 84d3669:	89 da                	mov    %ebx,%edx
 84d366b:	89 04 24             	mov    %eax,(%esp)
 84d366e:	e8 dd 00 61 00       	call   8ae3750 <_Unwind_Resume>
 84d3673:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84d3676:	89 04 24             	mov    %eax,(%esp)
 84d3679:	e8 02 a8 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d367e:	b8 00 00 00 00       	mov    $0x0,%eax
 84d3683:	83 c4 20             	add    $0x20,%esp
 84d3686:	5b                   	pop    %ebx
 84d3687:	5e                   	pop    %esi
 84d3688:	5d                   	pop    %ebp
 84d3689:	c3                   	ret

```

```c
// Inter_DBCheckDoubleGuildAddress::dispatch_sig @ 0x84d358e

/* Inter_DBCheckDoubleGuildAddress::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_DBCheckDoubleGuildAddress::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_10 = param_3;
    if (*(char *)param_3 == '\x02') {
      CUser::SendCmdErrorPacket((CUser *)param_2,0xa0,0x6f);
    }
    else {
      CUserCharacInfo::setGuildCreateFlag((CUserCharacInfo *)param_2,4);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084d3619 to 084d3655 has its CatchHandler @ 084d3658 */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0xa0);
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send((CUser *)param_2,local_1c);
      PacketGuard::~PacketGuard(local_1c);
    }
  }
  return 0;
}

```

