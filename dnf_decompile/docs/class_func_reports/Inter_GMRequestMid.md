# Inter_GMRequestMid

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d279e Inter_GMRequestMid::dispatch_sig  [0x084d279e-0x84d28bf] ===
 84d279e:	55                   	push   %ebp
 84d279f:	89 e5                	mov    %esp,%ebp
 84d27a1:	56                   	push   %esi
 84d27a2:	53                   	push   %ebx
 84d27a3:	83 ec 30             	sub    $0x30,%esp
 84d27a6:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d27a9:	89 04 24             	mov    %eax,(%esp)
 84d27ac:	e8 db 7b c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d27b1:	85 c0                	test   %eax,%eax
 84d27b3:	0f 94 c0             	sete   %al
 84d27b6:	84 c0                	test   %al,%al
 84d27b8:	74 0a                	je     84d27c4 <_ZN18Inter_GMRequestMid12dispatch_sigEP5CUserPci+0x26>
 84d27ba:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d27bf:	e9 f2 00 00 00       	jmp    84d28b6 <_ZN18Inter_GMRequestMid12dispatch_sigEP5CUserPci+0x118>
 84d27c4:	8b 45 10             	mov    0x10(%ebp),%eax
 84d27c7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d27ca:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d27cd:	89 04 24             	mov    %eax,(%esp)
 84d27d0:	e8 77 b5 0b 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84d27d5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d27d8:	89 04 24             	mov    %eax,(%esp)
 84d27db:	e8 06 91 bf ff       	call   80cb8e6 <_ZN18InterfacePacketBuf5clearEv>
 84d27e0:	c7 44 24 08 7e 00 00 	movl   $0x7e,0x8(%esp)
 84d27e7:	00 
 84d27e8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84d27ef:	00 
 84d27f0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d27f3:	89 04 24             	mov    %eax,(%esp)
 84d27f6:	e8 01 91 bf ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84d27fb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d27fe:	8b 40 0e             	mov    0xe(%eax),%eax
 84d2801:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2805:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d2808:	89 04 24             	mov    %eax,(%esp)
 84d280b:	e8 2c 91 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d2810:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d2813:	8b 40 12             	mov    0x12(%eax),%eax
 84d2816:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d281a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d281d:	89 04 24             	mov    %eax,(%esp)
 84d2820:	e8 17 91 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d2825:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d2828:	83 c0 16             	add    $0x16,%eax
 84d282b:	89 04 24             	mov    %eax,(%esp)
 84d282e:	e8 7d bb ba ff       	call   807e3b0 <strlen@plt>
 84d2833:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d2836:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2839:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d283d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d2840:	89 04 24             	mov    %eax,(%esp)
 84d2843:	e8 f4 90 bf ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 84d2848:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d284b:	8d 50 16             	lea    0x16(%eax),%edx
 84d284e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d2851:	89 44 24 08          	mov    %eax,0x8(%esp)
 84d2855:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d2859:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d285c:	89 04 24             	mov    %eax,(%esp)
 84d285f:	e8 80 4b ce ff       	call   81b73e4 <_ZN18InterfacePacketBuf7put_strEPci>
 84d2864:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84d286b:	00 
 84d286c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d286f:	89 04 24             	mov    %eax,(%esp)
 84d2872:	e8 e1 90 bf ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84d2877:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d287a:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d287e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d2881:	89 04 24             	mov    %eax,(%esp)
 84d2884:	e8 31 5d 17 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84d2889:	bb 00 00 00 00       	mov    $0x0,%ebx
 84d288e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d2891:	89 04 24             	mov    %eax,(%esp)
 84d2894:	e8 e7 b5 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d2899:	eb 1b                	jmp    84d28b6 <_ZN18Inter_GMRequestMid12dispatch_sigEP5CUserPci+0x118>
 84d289b:	89 d3                	mov    %edx,%ebx
 84d289d:	89 c6                	mov    %eax,%esi
 84d289f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84d28a2:	89 04 24             	mov    %eax,(%esp)
 84d28a5:	e8 d6 b5 0b 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84d28aa:	89 f0                	mov    %esi,%eax
 84d28ac:	89 da                	mov    %ebx,%edx
 84d28ae:	89 04 24             	mov    %eax,(%esp)
 84d28b1:	e8 9a 0e 61 00       	call   8ae3750 <_Unwind_Resume>
 84d28b6:	89 d8                	mov    %ebx,%eax
 84d28b8:	83 c4 30             	add    $0x30,%esp
 84d28bb:	5b                   	pop    %ebx
 84d28bc:	5e                   	pop    %esi
 84d28bd:	5d                   	pop    %ebp
 84d28be:	c3                   	ret
 84d28bf:	90                   	nop

```

```c
// Inter_GMRequestMid::dispatch_sig @ 0x84d279e

/* Inter_GMRequestMid::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_GMRequestMid::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  PacketGuard local_20 [12];
  int local_14;
  size_t local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (iVar1 != 0) {
    local_14 = param_3;
    PacketGuard::PacketGuard(local_20);
                    /* try { // try from 084d27db to 084d2888 has its CatchHandler @ 084d289b */
    InterfacePacketBuf::clear((InterfacePacketBuf *)local_20);
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_20,0,0x7e);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0xe));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,*(int *)(local_14 + 0x12));
    local_10 = strlen((char *)(local_14 + 0x16));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_20,local_10);
    InterfacePacketBuf::put_str((InterfacePacketBuf *)local_20,(char *)(local_14 + 0x16),local_10);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_20,true);
    CUser::Send((CUser *)param_2,local_20);
    PacketGuard::~PacketGuard(local_20);
  }
  return 0;
}

```

