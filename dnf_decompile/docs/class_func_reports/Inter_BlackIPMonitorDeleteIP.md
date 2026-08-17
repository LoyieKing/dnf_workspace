# Inter_BlackIPMonitorDeleteIP

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d87e8 Inter_BlackIPMonitorDeleteIP::dispatch_sig  [0x084d87e8-0x84d891b] ===
 84d87e8:	55                   	push   %ebp
 84d87e9:	89 e5                	mov    %esp,%ebp
 84d87eb:	56                   	push   %esi
 84d87ec:	53                   	push   %ebx
 84d87ed:	83 ec 40             	sub    $0x40,%esp
 84d87f0:	8b 45 10             	mov    0x10(%ebp),%eax
 84d87f3:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d87f6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d87fd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d8800:	8b 58 0a             	mov    0xa(%eax),%ebx
 84d8803:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d880a:	00 
 84d880b:	c7 44 24 08 6d 3f 00 	movl   $0x3f6d,0x8(%esp)
 84d8812:	00 
 84d8813:	c7 44 24 04 40 c1 c8 	movl   $0x8c8c140,0x4(%esp)
 84d881a:	08 
 84d881b:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d881e:	89 04 24             	mov    %eax,(%esp)
 84d8821:	e8 f2 6e 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d8826:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84d882a:	c7 44 24 04 5d 94 c8 	movl   $0x8c8945d,0x4(%esp)
 84d8831:	08 
 84d8832:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84d8835:	89 04 24             	mov    %eax,(%esp)
 84d8838:	e8 4b 6f 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d883d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84d8844:	e9 b3 00 00 00       	jmp    84d88fc <_ZN28Inter_BlackIPMonitorDeleteIP12dispatch_sigEP5CUserPci+0x114>
 84d8849:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d884c:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84d884f:	89 d0                	mov    %edx,%eax
 84d8851:	c1 e0 02             	shl    $0x2,%eax
 84d8854:	01 d0                	add    %edx,%eax
 84d8856:	c1 e0 02             	shl    $0x2,%eax
 84d8859:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d885c:	83 c0 10             	add    $0x10,%eax
 84d885f:	8b 48 0e             	mov    0xe(%eax),%ecx
 84d8862:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d8865:	89 d0                	mov    %edx,%eax
 84d8867:	c1 e0 02             	shl    $0x2,%eax
 84d886a:	01 d0                	add    %edx,%eax
 84d886c:	c1 e0 02             	shl    $0x2,%eax
 84d886f:	03 45 f0             	add    -0x10(%ebp),%eax
 84d8872:	8d 50 0e             	lea    0xe(%eax),%edx
 84d8875:	a1 d8 f7 41 09       	mov    0x941f7d8,%eax
 84d887a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 84d887e:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d8882:	89 04 24             	mov    %eax,(%esp)
 84d8885:	e8 44 32 01 00       	call   84ebace <_ZN8WongWork15CBlackIPMonitor8deleteIPEPKcj>
 84d888a:	84 c0                	test   %al,%al
 84d888c:	74 6a                	je     84d88f8 <_ZN28Inter_BlackIPMonitorDeleteIP12dispatch_sigEP5CUserPci+0x110>
 84d888e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d8891:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 84d8894:	89 d0                	mov    %edx,%eax
 84d8896:	c1 e0 02             	shl    $0x2,%eax
 84d8899:	01 d0                	add    %edx,%eax
 84d889b:	c1 e0 02             	shl    $0x2,%eax
 84d889e:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 84d88a1:	83 c0 10             	add    $0x10,%eax
 84d88a4:	8b 58 0e             	mov    0xe(%eax),%ebx
 84d88a7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d88aa:	89 d0                	mov    %edx,%eax
 84d88ac:	c1 e0 02             	shl    $0x2,%eax
 84d88af:	01 d0                	add    %edx,%eax
 84d88b1:	c1 e0 02             	shl    $0x2,%eax
 84d88b4:	03 45 f0             	add    -0x10(%ebp),%eax
 84d88b7:	8d 70 0e             	lea    0xe(%eax),%esi
 84d88ba:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84d88c1:	00 
 84d88c2:	c7 44 24 08 76 3f 00 	movl   $0x3f76,0x8(%esp)
 84d88c9:	00 
 84d88ca:	c7 44 24 04 40 c1 c8 	movl   $0x8c8c140,0x4(%esp)
 84d88d1:	08 
 84d88d2:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d88d5:	89 04 24             	mov    %eax,(%esp)
 84d88d8:	e8 3b 6e 07 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84d88dd:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84d88e1:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d88e5:	c7 44 24 04 70 94 c8 	movl   $0x8c89470,0x4(%esp)
 84d88ec:	08 
 84d88ed:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84d88f0:	89 04 24             	mov    %eax,(%esp)
 84d88f3:	e8 90 6e 07 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84d88f8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84d88fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d88ff:	8b 40 0a             	mov    0xa(%eax),%eax
 84d8902:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 84d8905:	0f 97 c0             	seta   %al
 84d8908:	84 c0                	test   %al,%al
 84d890a:	0f 85 39 ff ff ff    	jne    84d8849 <_ZN28Inter_BlackIPMonitorDeleteIP12dispatch_sigEP5CUserPci+0x61>
 84d8910:	b8 00 00 00 00       	mov    $0x0,%eax
 84d8915:	83 c4 40             	add    $0x40,%esp
 84d8918:	5b                   	pop    %ebx
 84d8919:	5e                   	pop    %esi
 84d891a:	5d                   	pop    %ebp
 84d891b:	c3                   	ret

```

```c
// Inter_BlackIPMonitorDeleteIP::dispatch_sig @ 0x84d87e8

/* Inter_BlackIPMonitorDeleteIP::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_BlackIPMonitorDeleteIP::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  uint local_10;
  
  local_14 = param_3;
  local_10 = 0;
  uVar1 = *(undefined4 *)(param_3 + 10);
  cMyTrace::cMyTrace(local_34,
                     "virtual int Inter_BlackIPMonitorDeleteIP::dispatch_sig(CUser*, char*, int)",
                     0x3f6d,0);
  cMyTrace::operator()(local_34,"Delete IP Cnt : %d",uVar1);
  for (local_10 = 0; local_10 < *(uint *)(local_14 + 10); local_10 = local_10 + 1) {
    cVar2 = WongWork::CBlackIPMonitor::deleteIP
                      (GlobalData::g_blackIPMonitor,(char *)(local_10 * 0x14 + local_14 + 0xe),
                       *(uint *)(local_14 + local_10 * 0x14 + 0x1e));
    if (cVar2 != '\0') {
      uVar1 = *(undefined4 *)(local_14 + local_10 * 0x14 + 0x1e);
      iVar3 = local_10 * 0x14 + local_14;
      cMyTrace::cMyTrace(local_24,
                         "virtual int Inter_BlackIPMonitorDeleteIP::dispatch_sig(CUser*, char*, int)"
                         ,0x3f76,0);
      cMyTrace::operator()(local_24,"Delete IP: %s, Type: %d",iVar3 + 0xe,uVar1);
    }
  }
  return 0;
}

```

