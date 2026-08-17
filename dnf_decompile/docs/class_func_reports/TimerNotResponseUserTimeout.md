# TimerNotResponseUserTimeout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863695a TimerNotResponseUserTimeout::dispatch_sig  [0x0863695a-0x8636a7b] ===
 863695a:	55                   	push   %ebp
 863695b:	89 e5                	mov    %esp,%ebp
 863695d:	53                   	push   %ebx
 863695e:	83 ec 44             	sub    $0x44,%esp
 8636961:	e8 28 58 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8636966:	c7 44 24 08 0c 00 00 	movl   $0xc,0x8(%esp)
 863696d:	00 
 863696e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8636971:	89 54 24 04          	mov    %edx,0x4(%esp)
 8636975:	89 04 24             	mov    %eax,(%esp)
 8636978:	e8 27 de c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 863697d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8636980:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8636984:	75 0a                	jne    8636990 <_ZN27TimerNotResponseUserTimeout12dispatch_sigEiij+0x36>
 8636986:	b8 00 00 00 00       	mov    $0x0,%eax
 863698b:	e9 e6 00 00 00       	jmp    8636a76 <_ZN27TimerNotResponseUserTimeout12dispatch_sigEiij+0x11c>
 8636990:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8636993:	89 04 24             	mov    %eax,(%esp)
 8636996:	e8 e1 39 aa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 863699b:	0f b7 c0             	movzwl %ax,%eax
 863699e:	3b 45 10             	cmp    0x10(%ebp),%eax
 86369a1:	0f 95 c0             	setne  %al
 86369a4:	84 c0                	test   %al,%al
 86369a6:	74 0a                	je     86369b2 <_ZN27TimerNotResponseUserTimeout12dispatch_sigEiij+0x58>
 86369a8:	b8 00 00 00 00       	mov    $0x0,%eax
 86369ad:	e9 c4 00 00 00       	jmp    8636a76 <_ZN27TimerNotResponseUserTimeout12dispatch_sigEiij+0x11c>
 86369b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86369b5:	89 04 24             	mov    %eax,(%esp)
 86369b8:	e8 d3 55 00 00       	call   863bf90 <_ZN5CUser11IsRecvEventEv>
 86369bd:	83 f0 01             	xor    $0x1,%eax
 86369c0:	84 c0                	test   %al,%al
 86369c2:	0f 84 a9 00 00 00    	je     8636a71 <_ZN27TimerNotResponseUserTimeout12dispatch_sigEiij+0x117>
 86369c8:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86369cf:	00 
 86369d0:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86369d7:	00 
 86369d8:	c7 44 24 04 1d 00 00 	movl   $0x1d,0x4(%esp)
 86369df:	00 
 86369e0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86369e3:	89 04 24             	mov    %eax,(%esp)
 86369e6:	e8 09 20 01 00       	call   86489f4 <_ZN5CUser10DisConnSigE11DISCONN_SIGbi>
 86369eb:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 86369f2:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 86369f9:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8636a00:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8636a07:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8636a0e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8636a11:	8d 90 e0 00 00 00    	lea    0xe0(%eax),%edx
 8636a17:	c7 44 24 08 14 00 00 	movl   $0x14,0x8(%esp)
 8636a1e:	00 
 8636a1f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8636a22:	89 44 24 04          	mov    %eax,0x4(%esp)
 8636a26:	89 14 24             	mov    %edx,(%esp)
 8636a29:	e8 00 be b2 ff       	call   816282e <_ZN8CNetworkILi4096ELi450000EE10GetPeerIP2EPci>
 8636a2e:	89 c3                	mov    %eax,%ebx
 8636a30:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8636a37:	00 
 8636a38:	c7 44 24 08 73 0b 00 	movl   $0xb73,0x8(%esp)
 8636a3f:	00 
 8636a40:	c7 44 24 04 a0 82 ce 	movl   $0x8ce82a0,0x4(%esp)
 8636a47:	08 
 8636a48:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636a4b:	89 04 24             	mov    %eax,(%esp)
 8636a4e:	e8 c5 8c f1 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8636a53:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8636a57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8636a5a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8636a5e:	c7 44 24 04 fc 6e ce 	movl   $0x8ce6efc,0x4(%esp)
 8636a65:	08 
 8636a66:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8636a69:	89 04 24             	mov    %eax,(%esp)
 8636a6c:	e8 17 8d f1 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8636a71:	b8 01 00 00 00       	mov    $0x1,%eax
 8636a76:	83 c4 44             	add    $0x44,%esp
 8636a79:	5b                   	pop    %ebx
 8636a7a:	5d                   	pop    %ebp
 8636a7b:	c3                   	ret

```

```c
// TimerNotResponseUserTimeout::dispatch_sig @ 0x863695a

/* TimerNotResponseUserTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerNotResponseUserTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char local_34 [20];
  cMyTrace local_20 [16];
  CUser *local_10;
  
  iVar2 = G_CGameManager();
  local_10 = (CUser *)CGameManager::getUser(iVar2,param_2);
  if (local_10 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_unique_id(local_10);
    if ((uVar4 & 0xffff) == param_3) {
      cVar1 = CUser::IsRecvEvent(local_10);
      if (cVar1 != '\x01') {
        CUser::DisConnSig(local_10,0x1d,0,0);
        local_34[0] = '\0';
        local_34[1] = '\0';
        local_34[2] = '\0';
        local_34[3] = '\0';
        local_34[4] = '\0';
        local_34[5] = '\0';
        local_34[6] = '\0';
        local_34[7] = '\0';
        local_34[8] = '\0';
        local_34[9] = '\0';
        local_34[10] = '\0';
        local_34[0xb] = '\0';
        local_34[0xc] = '\0';
        local_34[0xd] = '\0';
        local_34[0xe] = '\0';
        local_34[0xf] = '\0';
        local_34[0x10] = '\0';
        local_34[0x11] = '\0';
        local_34[0x12] = '\0';
        local_34[0x13] = '\0';
        uVar3 = CNetwork<4096,450000>::GetPeerIP2
                          ((CNetwork<4096,450000> *)(local_10 + 0xe0),local_34,0x14);
        cMyTrace::cMyTrace(local_20,
                           "virtual bool TimerNotResponseUserTimeout::dispatch_sig(int, int, memberIdentificationNumber_t)"
                           ,0xb73,0);
        cMyTrace::operator()(local_20,"Not response user timeout: idx(%d), IP(%s)",param_2,uVar3);
      }
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

