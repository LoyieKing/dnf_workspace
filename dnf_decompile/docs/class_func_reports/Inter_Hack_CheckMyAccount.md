# Inter_Hack_CheckMyAccount

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084e08fc Inter_Hack_CheckMyAccount::dispatch_sig  [0x084e08fc-0x84e0971] ===
 84e08fc:	55                   	push   %ebp
 84e08fd:	89 e5                	mov    %esp,%ebp
 84e08ff:	53                   	push   %ebx
 84e0900:	83 ec 34             	sub    $0x34,%esp
 84e0903:	8b 45 10             	mov    0x10(%ebp),%eax
 84e0906:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84e0909:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e090c:	8b 00                	mov    (%eax),%eax
 84e090e:	85 c0                	test   %eax,%eax
 84e0910:	75 55                	jne    84e0967 <_ZN25Inter_Hack_CheckMyAccount12dispatch_sigEP5CUserPci+0x6b>
 84e0912:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84e0915:	8b 40 08             	mov    0x8(%eax),%eax
 84e0918:	89 44 24 08          	mov    %eax,0x8(%esp)
 84e091c:	c7 44 24 04 c5 02 00 	movl   $0x2c5,0x4(%esp)
 84e0923:	00 
 84e0924:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e0927:	89 04 24             	mov    %eax,(%esp)
 84e092a:	e8 39 90 c1 ff       	call   80f9968 <_ZN5CUser6SetETCEsi>
 84e092f:	89 c3                	mov    %eax,%ebx
 84e0931:	8b 45 0c             	mov    0xc(%ebp),%eax
 84e0934:	89 04 24             	mov    %eax,(%esp)
 84e0937:	e8 1e 90 c1 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84e093c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 84e0943:	00 
 84e0944:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84e0948:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 84e094f:	00 
 84e0950:	c7 44 24 08 c5 02 00 	movl   $0x2c5,0x8(%esp)
 84e0957:	00 
 84e0958:	8b 55 0c             	mov    0xc(%ebp),%edx
 84e095b:	89 54 24 04          	mov    %edx,0x4(%esp)
 84e095f:	89 04 24             	mov    %eax,(%esp)
 84e0962:	e8 17 83 c1 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 84e0967:	b8 00 00 00 00       	mov    $0x0,%eax
 84e096c:	83 c4 34             	add    $0x34,%esp
 84e096f:	5b                   	pop    %ebx
 84e0970:	5d                   	pop    %ebp
 84e0971:	c3                   	ret

```

```c
// Inter_Hack_CheckMyAccount::dispatch_sig @ 0x84e08fc

/* Inter_Hack_CheckMyAccount::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_Hack_CheckMyAccount::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  CHackAnalyzer *pCVar2;
  
  if (*(int *)param_3 == 0) {
    uVar1 = CUser::SetETC((CUser *)param_2,0x2c5,*(int *)(param_3 + 8));
    pCVar2 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
    WongWork::CHackAnalyzer::addServerHackCnt(pCVar2,param_2,0x2c5,1,uVar1,0);
  }
  return 0;
}

```

