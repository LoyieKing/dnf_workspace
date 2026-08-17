# Inter_MultiMailBoxReqSend

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e27b8 Inter_MultiMailBoxReqSend::dispatch_sig  [0x084e27b8-0x84e2a05] ===
 84e27b8:	55                   	push   %ebp
 84e27b9:	89 e5                	mov    %esp,%ebp
 84e27bb:	56                   	push   %esi
 84e27bc:	53                   	push   %ebx
 84e27bd:	81 ec 80 01 00 00    	sub    $0x180,%esp
 84e27c3:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e27c6:	89 04 24             	mov    %eax,(%esp)
 84e27c9:	e8 be 7b bf ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84e27ce:	83 f8 02             	cmp    $0x2,%eax
 84e27d1:	0f 9e c0             	setle  %al
 84e27d4:	84 c0                	test   %al,%al
 84e27d6:	74 0a                	je     84e27e2 <_ZN25Inter_MultiMailBoxReqSend12dispatch_sigEP5CUserPci+0x2a>
 84e27d8:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e27dd:	e9 17 02 00 00       	jmp    84e29f9 <_ZN25Inter_MultiMailBoxReqSend12dispatch_sigEP5CUserPci+0x241>
 84e27e2:	8b 45 10             	mov    0x10(%ebp),%eax
 84e27e5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84e27e8:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 84e27ef:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84e27f6:	e9 5b 01 00 00       	jmp    84e2956 <_ZN25Inter_MultiMailBoxReqSend12dispatch_sigEP5CUserPci+0x19e>
 84e27fb:	c7 44 24 08 45 01 00 	movl   $0x145,0x8(%esp)
 84e2802:	00 
 84e2803:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84e280a:	00 
 84e280b:	8d 85 9b fe ff ff    	lea    -0x165(%ebp),%eax
 84e2811:	89 04 24             	mov    %eax,(%esp)
 84e2814:	e8 a7 b4 b9 ff       	call   807dcc0 <memset@plt>
 84e2819:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e281c:	8b 40 42             	mov    0x42(%eax),%eax
 84e281f:	89 85 a8 fe ff ff    	mov    %eax,-0x158(%ebp)
 84e2825:	8b 85 a8 fe ff ff    	mov    -0x158(%ebp),%eax
 84e282b:	89 c2                	mov    %eax,%edx
 84e282d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e2830:	83 c0 46             	add    $0x46,%eax
 84e2833:	89 54 24 08          	mov    %edx,0x8(%esp)
 84e2837:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e283b:	8d 85 9b fe ff ff    	lea    -0x165(%ebp),%eax
 84e2841:	83 c0 11             	add    $0x11,%eax
 84e2844:	89 04 24             	mov    %eax,(%esp)
 84e2847:	e8 84 b0 b9 ff       	call   807d8d0 <strncpy@plt>
 84e284c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e284f:	8b 40 64             	mov    0x64(%eax),%eax
 84e2852:	89 85 c9 fe ff ff    	mov    %eax,-0x137(%ebp)
 84e2858:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e285b:	c7 40 64 00 00 00 00 	movl   $0x0,0x64(%eax)
 84e2862:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e2865:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84e2868:	89 d0                	mov    %edx,%eax
 84e286a:	c1 e0 02             	shl    $0x2,%eax
 84e286d:	01 d0                	add    %edx,%eax
 84e286f:	01 c0                	add    %eax,%eax
 84e2871:	01 d0                	add    %edx,%eax
 84e2873:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84e2876:	83 c0 69             	add    $0x69,%eax
 84e2879:	0f b6 00             	movzbl (%eax),%eax
 84e287c:	88 85 d1 fe ff ff    	mov    %al,-0x12f(%ebp)
 84e2882:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e2885:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84e2888:	89 d0                	mov    %edx,%eax
 84e288a:	c1 e0 02             	shl    $0x2,%eax
 84e288d:	01 d0                	add    %edx,%eax
 84e288f:	01 c0                	add    %eax,%eax
 84e2891:	01 d0                	add    %edx,%eax
 84e2893:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84e2896:	83 c0 60             	add    $0x60,%eax
 84e2899:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 84e289d:	66 89 85 d2 fe ff ff 	mov    %ax,-0x12e(%ebp)
 84e28a4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e28a7:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84e28aa:	89 d0                	mov    %edx,%eax
 84e28ac:	c1 e0 02             	shl    $0x2,%eax
 84e28af:	01 d0                	add    %edx,%eax
 84e28b1:	01 c0                	add    %eax,%eax
 84e28b3:	01 d0                	add    %edx,%eax
 84e28b5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84e28b8:	83 c0 60             	add    $0x60,%eax
 84e28bb:	8b 40 0c             	mov    0xc(%eax),%eax
 84e28be:	89 85 d4 fe ff ff    	mov    %eax,-0x12c(%ebp)
 84e28c4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84e28c7:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 84e28ca:	89 d0                	mov    %edx,%eax
 84e28cc:	c1 e0 02             	shl    $0x2,%eax
 84e28cf:	01 d0                	add    %edx,%eax
 84e28d1:	01 c0                	add    %eax,%eax
 84e28d3:	01 d0                	add    %edx,%eax
 84e28d5:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84e28d8:	83 c0 60             	add    $0x60,%eax
 84e28db:	8b 40 10             	mov    0x10(%eax),%eax
 84e28de:	89 85 d8 fe ff ff    	mov    %eax,-0x128(%ebp)
 84e28e4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e28e7:	8b 88 bd 3f 00 00    	mov    0x3fbd(%eax),%ecx
 84e28ed:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e28f0:	8b 50 29             	mov    0x29(%eax),%edx
 84e28f3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e28f6:	8b 40 1d             	mov    0x1d(%eax),%eax
 84e28f9:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 84e28fd:	89 54 24 10          	mov    %edx,0x10(%esp)
 84e2901:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e2908:	00 
 84e2909:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e290d:	8d 85 9b fe ff ff    	lea    -0x165(%ebp),%eax
 84e2913:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e2917:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e291a:	89 04 24             	mov    %eax,(%esp)
 84e291d:	e8 f2 31 07 00       	call   8555b14 <_ZN8WongWork14CMailBoxHelper16ReqDBSendNewMailEP5CUserP16MSG_MAILBOX_SENDjbji>
 84e2922:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84e2925:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 84e2929:	74 27                	je     84e2952 <_ZN25Inter_MultiMailBoxReqSend12dispatch_sigEP5CUserPci+0x19a>
 84e292b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84e292e:	0f b6 c0             	movzbl %al,%eax
 84e2931:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e2935:	c7 44 24 04 3c 01 00 	movl   $0x13c,0x4(%esp)
 84e293c:	00 
 84e293d:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e2940:	89 04 24             	mov    %eax,(%esp)
 84e2943:	e8 fa 95 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e2948:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e294d:	e9 a7 00 00 00       	jmp    84e29f9 <_ZN25Inter_MultiMailBoxReqSend12dispatch_sigEP5CUserPci+0x241>
 84e2952:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84e2956:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84e2959:	0f b6 40 68          	movzbl 0x68(%eax),%eax
 84e295d:	0f b6 c0             	movzbl %al,%eax
 84e2960:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84e2963:	0f 9f c0             	setg   %al
 84e2966:	84 c0                	test   %al,%al
 84e2968:	0f 85 8d fe ff ff    	jne    84e27fb <_ZN25Inter_MultiMailBoxReqSend12dispatch_sigEP5CUserPci+0x43>
 84e296e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e2971:	89 04 24             	mov    %eax,(%esp)
 84e2974:	e8 d3 b3 0a 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 84e2979:	c7 44 24 08 3c 01 00 	movl   $0x13c,0x8(%esp)
 84e2980:	00 
 84e2981:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e2988:	00 
 84e2989:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e298c:	89 04 24             	mov    %eax,(%esp)
 84e298f:	e8 68 8f be ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 84e2994:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e299b:	00 
 84e299c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e299f:	89 04 24             	mov    %eax,(%esp)
 84e29a2:	e8 79 8f be ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 84e29a7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84e29ae:	00 
 84e29af:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e29b2:	89 04 24             	mov    %eax,(%esp)
 84e29b5:	e8 9e 8f be ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 84e29ba:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e29bd:	89 44 24 04          	mov    %eax,0x4(%esp)
 84e29c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e29c4:	89 04 24             	mov    %eax,(%esp)
 84e29c7:	e8 ee 5b 16 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 84e29cc:	bb 00 00 00 00       	mov    $0x0,%ebx
 84e29d1:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e29d4:	89 04 24             	mov    %eax,(%esp)
 84e29d7:	e8 a4 b4 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e29dc:	eb 1b                	jmp    84e29f9 <_ZN25Inter_MultiMailBoxReqSend12dispatch_sigEP5CUserPci+0x241>
 84e29de:	89 d3                	mov    %edx,%ebx
 84e29e0:	89 c6                	mov    %eax,%esi
 84e29e2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84e29e5:	89 04 24             	mov    %eax,(%esp)
 84e29e8:	e8 93 b4 0a 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 84e29ed:	89 f0                	mov    %esi,%eax
 84e29ef:	89 da                	mov    %ebx,%edx
 84e29f1:	89 04 24             	mov    %eax,(%esp)
 84e29f4:	e8 57 0d 60 00       	call   8ae3750 <_Unwind_Resume>
 84e29f9:	89 d8                	mov    %ebx,%eax
 84e29fb:	81 c4 80 01 00 00    	add    $0x180,%esp
 84e2a01:	5b                   	pop    %ebx
 84e2a02:	5e                   	pop    %esi
 84e2a03:	5d                   	pop    %ebp
 84e2a04:	c3                   	ret
 84e2a05:	90                   	nop

```

```c
// Inter_MultiMailBoxReqSend::dispatch_sig @ 0x84e27b8

/* Inter_MultiMailBoxReqSend::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MultiMailBoxReqSend::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  MSG_MAILBOX_SEND local_169 [13];
  size_t local_15c;
  char acStack_158 [29];
  undefined4 local_13b;
  undefined1 local_133;
  undefined2 local_132;
  undefined4 local_130;
  undefined4 local_12c;
  PacketGuard local_24 [12];
  int local_18;
  uint local_14;
  int local_10;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if (2 < iVar1) {
    local_18 = param_3;
    for (local_10 = 0; local_14 = 0, local_10 < (int)(uint)*(byte *)(local_18 + 0x68);
        local_10 = local_10 + 1) {
      memset(local_169,0,0x145);
      local_15c = *(size_t *)(local_18 + 0x42);
      strncpy(acStack_158,(char *)(local_18 + 0x46),local_15c);
      local_13b = *(undefined4 *)(local_18 + 100);
      *(undefined4 *)(local_18 + 100) = 0;
      local_133 = *(undefined1 *)(local_18 + local_10 * 0xb + 0x69);
      local_132 = *(undefined2 *)(local_18 + local_10 * 0xb + 0x6a);
      local_130 = *(undefined4 *)(local_18 + local_10 * 0xb + 0x6c);
      local_12c = *(undefined4 *)(local_18 + local_10 * 0xb + 0x70);
      local_14 = WongWork::CMailBoxHelper::ReqDBSendNewMail
                           ((CUser *)param_2,local_169,*(uint *)(local_18 + 0x1d),false,
                            *(uint *)(local_18 + 0x29),*(int *)(local_18 + 0x3fbd));
      if (local_14 != 0) {
        CUser::SendCmdErrorPacket((CUser *)param_2,0x13c,local_14 & 0xff);
        return 0;
      }
    }
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 084e298f to 084e29cb has its CatchHandler @ 084e29de */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,1,0x13c);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,1);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send((CUser *)param_2,local_24);
    PacketGuard::~PacketGuard(local_24);
  }
  return 0;
}

```

