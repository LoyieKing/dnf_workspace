# Inter_CreateAccountCargo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e23a2 Inter_CreateAccountCargo::dispatch_sig  [0x084e23a2-0x84e2439] ===
 84e23a2:	55                   	push   %ebp
 84e23a3:	89 e5                	mov    %esp,%ebp
 84e23a5:	83 ec 28             	sub    $0x28,%esp
 84e23a8:	8b 45 10             	mov    0x10(%ebp),%eax
 84e23ab:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e23ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e23b1:	89 04 24             	mov    %eax,(%esp)
 84e23b4:	e8 d3 7f bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e23b9:	83 f8 02             	cmp    $0x2,%eax
 84e23bc:	0f 9e c0             	setle  %al
 84e23bf:	84 c0                	test   %al,%al
 84e23c1:	74 07                	je     84e23ca <_ZN24Inter_CreateAccountCargo12dispatch_sigEP5CUserPci+0x28>
 84e23c3:	b8 00 00 00 00       	mov    $0x0,%eax
 84e23c8:	eb 6e                	jmp    84e2438 <_ZN24Inter_CreateAccountCargo12dispatch_sigEP5CUserPci+0x96>
 84e23ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e23cd:	0f b6 00             	movzbl (%eax),%eax
 84e23d0:	84 c0                	test   %al,%al
 84e23d2:	74 27                	je     84e23fb <_ZN24Inter_CreateAccountCargo12dispatch_sigEP5CUserPci+0x59>
 84e23d4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e23d7:	0f b6 00             	movzbl (%eax),%eax
 84e23da:	0f b6 c0             	movzbl %al,%eax
 84e23dd:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e23e1:	c7 44 24 04 32 01 00 	movl   $0x132,0x4(%esp)
 84e23e8:	00 
 84e23e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e23ec:	89 04 24             	mov    %eax,(%esp)
 84e23ef:	e8 4e 9b 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e23f4:	b8 00 00 00 00       	mov    $0x0,%eax
 84e23f9:	eb 3d                	jmp    84e2438 <_ZN24Inter_CreateAccountCargo12dispatch_sigEP5CUserPci+0x96>
 84e23fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e23fe:	8b 40 04             	mov    0x4(%eax),%eax
 84e2401:	89 44 24 0c          	mov    %eax,0xc(%esp)
 84e2405:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84e240c:	00 
 84e240d:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e2414:	00 
 84e2415:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2418:	89 04 24             	mov    %eax,(%esp)
 84e241b:	e8 4e b4 19 00       	call   867d86e <_ZN5CUser21SetAccountCargoDBDataEP10Inven_Itemjj>
 84e2420:	c7 44 24 04 32 01 00 	movl   $0x132,0x4(%esp)
 84e2427:	00 
 84e2428:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e242b:	89 04 24             	mov    %eax,(%esp)
 84e242e:	e8 6d 9a 19 00       	call   867bea0 <_ZN5CUser15SendCmdOkPacketE14ENUM_CMDPACKET>
 84e2433:	b8 00 00 00 00       	mov    $0x0,%eax
 84e2438:	c9                   	leave
 84e2439:	c3                   	ret

```

```c
// Inter_CreateAccountCargo::dispatch_sig @ 0x84e23a2

/* Inter_CreateAccountCargo::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_CreateAccountCargo::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    if (*(char *)param_3 == '\0') {
      CUser::SetAccountCargoDBData((CUser *)param_2,(Inven_Item *)0x0,0,*(uint *)(param_3 + 4));
      CUser::SendCmdOkPacket((CUser *)param_2,0x132);
    }
    else {
      CUser::SendCmdErrorPacket((CUser *)param_2,0x132,*(undefined1 *)param_3);
    }
  }
  return 0;
}

```

