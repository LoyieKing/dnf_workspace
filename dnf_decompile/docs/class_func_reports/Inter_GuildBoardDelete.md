# Inter_GuildBoardDelete

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084df2ac Inter_GuildBoardDelete::dispatch_sig  [0x084df2ac-0x84df3d5] ===
 84df2ac:	55                   	push   %ebp
 84df2ad:	89 e5                	mov    %esp,%ebp
 84df2af:	56                   	push   %esi
 84df2b0:	53                   	push   %ebx
 84df2b1:	83 ec 20             	sub    $0x20,%esp
 84df2b4:	8b 45 10             	mov    0x10(%ebp),%eax
 84df2b7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84df2ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 84df2bd:	89 04 24             	mov    %eax,(%esp)
 84df2c0:	e8 c7 b0 bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84df2c5:	83 f8 02             	cmp    $0x2,%eax
 84df2c8:	0f 9e c0             	setle  %al
 84df2cb:	84 c0                	test   %al,%al
 84df2cd:	74 0a                	je     84df2d9 <_ZN22Inter_GuildBoardDelete12dispatch_sigEP5CUserPci+0x2d>
 84df2cf:	bb 00 00 00 00       	mov    $0x0,%ebx
 84df2d4:	e9 f3 00 00 00       	jmp    84df3cc <_ZN22Inter_GuildBoardDelete12dispatch_sigEP5CUserPci+0x120>
 84df2d9:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 84df2e0:	ff 
 84df2e1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84df2e4:	89 04 24             	mov    %eax,(%esp)
 84df2e7:	e8 b4 ec 16 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 84df2ec:	89 c2                	mov    %eax,%edx
 84df2ee:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84df2f1:	8b 40 13             	mov    0x13(%eax),%eax
 84df2f4:	39 c2                	cmp    %eax,%edx
 84df2f6:	0f 95 c0             	setne  %al
 84df2f9:	84 c0                	test   %al,%al
 84df2fb:	74 0a                	je     84df307 <_ZN22Inter_GuildBoardDelete12dispatch_sigEP5CUserPci+0x5b>
 84df2fd:	bb 00 00 00 00       	mov    $0x0,%ebx
 84df302:	e9 c5 00 00 00       	jmp    84df3cc <_ZN22Inter_GuildBoardDelete12dispatch_sigEP5CUserPci+0x120>
 84df307:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df30a:	89 04 24             	mov    %eax,(%esp)
 84df30d:	e8 3a ea 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84df312:	c7 44 24 08 57 01 00 	movl   $0x157,0x8(%esp)
 84df319:	00 
 84df31a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84df321:	00 
 84df322:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df325:	89 04 24             	mov    %eax,(%esp)
 84df328:	e8 cf c5 be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84df32d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84df330:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84df334:	66 85 c0             	test   %ax,%ax
 84df337:	75 15                	jne    84df34e <_ZN22Inter_GuildBoardDelete12dispatch_sigEP5CUserPci+0xa2>
 84df339:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84df340:	00 
 84df341:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df344:	89 04 24             	mov    %eax,(%esp)
 84df347:	e8 d4 c5 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84df34c:	eb 2c                	jmp    84df37a <_ZN22Inter_GuildBoardDelete12dispatch_sigEP5CUserPci+0xce>
 84df34e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84df355:	00 
 84df356:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df359:	89 04 24             	mov    %eax,(%esp)
 84df35c:	e8 bf c5 be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84df361:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84df364:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84df368:	0f b7 c0             	movzwl %ax,%eax
 84df36b:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df36f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df372:	89 04 24             	mov    %eax,(%esp)
 84df375:	e8 2a ab bf ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 84df37a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84df381:	00 
 84df382:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df385:	89 04 24             	mov    %eax,(%esp)
 84df388:	e8 cb c5 be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84df38d:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df390:	89 44 24 04          	mov    %eax,0x4(%esp)
 84df394:	8b 45 0c             	mov    0xc(%ebp),%eax
 84df397:	89 04 24             	mov    %eax,(%esp)
 84df39a:	e8 1b 92 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84df39f:	bb 00 00 00 00       	mov    $0x0,%ebx
 84df3a4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df3a7:	89 04 24             	mov    %eax,(%esp)
 84df3aa:	e8 d1 ea 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84df3af:	eb 1b                	jmp    84df3cc <_ZN22Inter_GuildBoardDelete12dispatch_sigEP5CUserPci+0x120>
 84df3b1:	89 d3                	mov    %edx,%ebx
 84df3b3:	89 c6                	mov    %eax,%esi
 84df3b5:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84df3b8:	89 04 24             	mov    %eax,(%esp)
 84df3bb:	e8 c0 ea 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84df3c0:	89 f0                	mov    %esi,%eax
 84df3c2:	89 da                	mov    %ebx,%edx
 84df3c4:	89 04 24             	mov    %eax,(%esp)
 84df3c7:	e8 84 43 60 00       	call   8ae3750 <_Unwind_Resume>
 84df3cc:	89 d8                	mov    %ebx,%eax
 84df3ce:	83 c4 20             	add    $0x20,%esp
 84df3d1:	5b                   	pop    %ebx
 84df3d2:	5e                   	pop    %esi
 84df3d3:	5d                   	pop    %ebp
 84df3d4:	c3                   	ret
 84df3d5:	90                   	nop

```

```c
// Inter_GuildBoardDelete::dispatch_sig @ 0x84df2ac

/* Inter_GuildBoardDelete::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GuildBoardDelete::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_1c [12];
  int local_10;
  
  local_10 = param_3;
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((2 < iVar1) &&
     (iVar1 = CUser::get_charac_no((CUser *)param_2,-1), iVar1 == *(int *)(local_10 + 0x13))) {
    PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 084df328 to 084df39e has its CatchHandler @ 084df3b1 */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,1,0x157);
    if (*(short *)(local_10 + 10) == 0) {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,1);
    }
    else {
      InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::put_short((InterfacePacketBuf *)local_1c,(uint)*(ushort *)(local_10 + 10))
      ;
    }
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
    CUser::Send((CUser *)param_2,local_1c);
    PacketGuard::~PacketGuard(local_1c);
  }
  return 0;
}

```

