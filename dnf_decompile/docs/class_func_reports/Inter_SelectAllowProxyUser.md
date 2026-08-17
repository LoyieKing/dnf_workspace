# Inter_SelectAllowProxyUser

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e8f68 Inter_SelectAllowProxyUser::dispatch_sig  [0x084e8f68-0x84e9003] ===
 84e8f68:	55                   	push   %ebp
 84e8f69:	89 e5                	mov    %esp,%ebp
 84e8f6b:	83 ec 28             	sub    $0x28,%esp
 84e8f6e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 84e8f72:	74 06                	je     84e8f7a <_ZN26Inter_SelectAllowProxyUser12dispatch_sigEP5CUserPci+0x12>
 84e8f74:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 84e8f78:	75 45                	jne    84e8fbf <_ZN26Inter_SelectAllowProxyUser12dispatch_sigEP5CUserPci+0x57>
 84e8f7a:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84e8f81:	00 
 84e8f82:	c7 44 24 08 1e 6e 00 	movl   $0x6e1e,0x8(%esp)
 84e8f89:	00 
 84e8f8a:	c7 44 24 04 a0 b2 c8 	movl   $0x8c8b2a0,0x4(%esp)
 84e8f91:	08 
 84e8f92:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e8f95:	89 04 24             	mov    %eax,(%esp)
 84e8f98:	e8 7b 67 06 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84e8f9d:	c7 44 24 08 a0 b2 c8 	movl   $0x8c8b2a0,0x8(%esp)
 84e8fa4:	08 
 84e8fa5:	c7 44 24 04 b0 a4 c8 	movl   $0x8c8a4b0,0x4(%esp)
 84e8fac:	08 
 84e8fad:	8d 45 e8             	lea    -0x18(%ebp),%eax
 84e8fb0:	89 04 24             	mov    %eax,(%esp)
 84e8fb3:	e8 d0 67 06 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84e8fb8:	b8 1f 6e 00 00       	mov    $0x6e1f,%eax
 84e8fbd:	eb 43                	jmp    84e9002 <_ZN26Inter_SelectAllowProxyUser12dispatch_sigEP5CUserPci+0x9a>
 84e8fbf:	c7 44 24 08 07 00 00 	movl   $0x7,0x8(%esp)
 84e8fc6:	00 
 84e8fc7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84e8fce:	00 
 84e8fcf:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8fd2:	89 04 24             	mov    %eax,(%esp)
 84e8fd5:	e8 68 2f 19 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 84e8fda:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84e8fe1:	00 
 84e8fe2:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 84e8fe9:	00 
 84e8fea:	c7 44 24 04 1e 00 00 	movl   $0x1e,0x4(%esp)
 84e8ff1:	00 
 84e8ff2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e8ff5:	89 04 24             	mov    %eax,(%esp)
 84e8ff8:	e8 f7 f9 15 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 84e8ffd:	b8 00 00 00 00       	mov    $0x0,%eax
 84e9002:	c9                   	leave
 84e9003:	c3                   	ret

```

```c
// Inter_SelectAllowProxyUser::dispatch_sig @ 0x84e8f68

/* Inter_SelectAllowProxyUser::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_SelectAllowProxyUser::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  cMyTrace local_1c [24];
  
  if ((param_2 == (char *)0x0) || (param_3 == 0)) {
    cMyTrace::cMyTrace(local_1c,
                       "virtual int Inter_SelectAllowProxyUser::dispatch_sig(CUser*, char*, int)",
                       0x6e1e,5);
    cMyTrace::operator()
              (local_1c,"[%s] pUser or p is null.",
               "virtual int Inter_SelectAllowProxyUser::dispatch_sig(CUser*, char*, int)");
    uVar1 = 0x6e1f;
  }
  else {
    CUser::SendCmdErrorPacket((CUser *)param_2,2,7);
    CUser::DisConnSig((CUser *)param_2,0x1e,1,0);
    uVar1 = 0;
  }
  return uVar1;
}

```

