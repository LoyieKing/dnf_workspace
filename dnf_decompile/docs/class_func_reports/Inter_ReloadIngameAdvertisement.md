# Inter_ReloadIngameAdvertisement

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c8d10 Inter_ReloadIngameAdvertisement::dispatch_sig  [0x084c8d10-0x84c8dc9] ===
 84c8d10:	55                   	push   %ebp
 84c8d11:	89 e5                	mov    %esp,%ebp
 84c8d13:	53                   	push   %ebx
 84c8d14:	83 ec 34             	sub    $0x34,%esp
 84c8d17:	8b 45 10             	mov    0x10(%ebp),%eax
 84c8d1a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c8d1d:	e8 c7 3c c3 ff       	call   80fc9e9 <_Z23InGameADManagerInstancev>
 84c8d22:	89 04 24             	mov    %eax,(%esp)
 84c8d25:	e8 f8 43 c3 ff       	call   80fd122 <_ZN27CInGameAdvertisementManager16InitADExposeInfoEv>
 84c8d2a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 84c8d31:	eb 3e                	jmp    84c8d71 <_ZN31Inter_ReloadIngameAdvertisement12dispatch_sigEP5CUserPci+0x61>
 84c8d33:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c8d36:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84c8d39:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 84c8d3f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 84c8d42:	05 10 02 00 00       	add    $0x210,%eax
 84c8d47:	8b 00                	mov    (%eax),%eax
 84c8d49:	83 f8 ff             	cmp    $0xffffffff,%eax
 84c8d4c:	74 33                	je     84c8d81 <_ZN31Inter_ReloadIngameAdvertisement12dispatch_sigEP5CUserPci+0x71>
 84c8d4e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c8d51:	69 c0 4c 08 00 00    	imul   $0x84c,%eax,%eax
 84c8d57:	89 c3                	mov    %eax,%ebx
 84c8d59:	03 5d f0             	add    -0x10(%ebp),%ebx
 84c8d5c:	e8 88 3c c3 ff       	call   80fc9e9 <_Z23InGameADManagerInstancev>
 84c8d61:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c8d65:	89 04 24             	mov    %eax,(%esp)
 84c8d68:	e8 77 4b c3 ff       	call   80fd8e4 <_ZN27CInGameAdvertisementManager18InsertADExposeInfoER25stInGameADExposeCondition>
 84c8d6d:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84c8d71:	81 7d f4 c7 00 00 00 	cmpl   $0xc7,-0xc(%ebp)
 84c8d78:	0f 9e c0             	setle  %al
 84c8d7b:	84 c0                	test   %al,%al
 84c8d7d:	75 b4                	jne    84c8d33 <_ZN31Inter_ReloadIngameAdvertisement12dispatch_sigEP5CUserPci+0x23>
 84c8d7f:	eb 01                	jmp    84c8d82 <_ZN31Inter_ReloadIngameAdvertisement12dispatch_sigEP5CUserPci+0x72>
 84c8d81:	90                   	nop
 84c8d82:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84c8d89:	00 
 84c8d8a:	c7 44 24 08 90 22 00 	movl   $0x2290,0x8(%esp)
 84c8d91:	00 
 84c8d92:	c7 44 24 04 a0 dc c8 	movl   $0x8c8dca0,0x4(%esp)
 84c8d99:	08 
 84c8d9a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c8d9d:	89 04 24             	mov    %eax,(%esp)
 84c8da0:	e8 73 69 08 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84c8da5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c8da8:	89 44 24 08          	mov    %eax,0x8(%esp)
 84c8dac:	c7 44 24 04 b8 78 c8 	movl   $0x8c878b8,0x4(%esp)
 84c8db3:	08 
 84c8db4:	8d 45 e0             	lea    -0x20(%ebp),%eax
 84c8db7:	89 04 24             	mov    %eax,(%esp)
 84c8dba:	e8 c9 69 08 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84c8dbf:	b8 00 00 00 00       	mov    $0x0,%eax
 84c8dc4:	83 c4 34             	add    $0x34,%esp
 84c8dc7:	5b                   	pop    %ebx
 84c8dc8:	5d                   	pop    %ebp
 84c8dc9:	c3                   	ret

```

```c
// Inter_ReloadIngameAdvertisement::dispatch_sig @ 0x84c8d10

/* Inter_ReloadIngameAdvertisement::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ReloadIngameAdvertisement::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CInGameAdvertisementManager *pCVar1;
  stInGameADExposeCondition *psVar2;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  local_14 = param_3;
  pCVar1 = (CInGameAdvertisementManager *)InGameADManagerInstance();
  CInGameAdvertisementManager::InitADExposeInfo(pCVar1);
  local_10 = 0;
  while ((local_10 < 200 && (*(int *)(local_14 + local_10 * 0x84c + 0x210) != -1))) {
    psVar2 = (stInGameADExposeCondition *)(local_10 * 0x84c + local_14);
    pCVar1 = (CInGameAdvertisementManager *)InGameADManagerInstance();
    CInGameAdvertisementManager::InsertADExposeInfo(pCVar1,psVar2);
    local_10 = local_10 + 1;
  }
  cMyTrace::cMyTrace(local_24,
                     "virtual int Inter_ReloadIngameAdvertisement::dispatch_sig(CUser*, char*, int)"
                     ,0x2290,0);
  cMyTrace::operator()(local_24,"In Game Advertisement condition Reload OK, count(%d)",local_10);
  return 0;
}

```

