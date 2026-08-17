# Inter_LoadDnfHackLog

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d41aa Inter_LoadDnfHackLog::dispatch_sig  [0x084d41aa-0x84d4229] ===
 84d41aa:	55                   	push   %ebp
 84d41ab:	89 e5                	mov    %esp,%ebp
 84d41ad:	56                   	push   %esi
 84d41ae:	53                   	push   %ebx
 84d41af:	83 ec 20             	sub    $0x20,%esp
 84d41b2:	8b 45 10             	mov    0x10(%ebp),%eax
 84d41b5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d41b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d41bb:	89 04 24             	mov    %eax,(%esp)
 84d41be:	e8 ab 61 c0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84d41c3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84d41c6:	8b 12                	mov    (%edx),%edx
 84d41c8:	39 d0                	cmp    %edx,%eax
 84d41ca:	0f 95 c0             	setne  %al
 84d41cd:	84 c0                	test   %al,%al
 84d41cf:	74 07                	je     84d41d8 <_ZN20Inter_LoadDnfHackLog12dispatch_sigEP5CUserPci+0x2e>
 84d41d1:	b8 00 00 00 00       	mov    $0x0,%eax
 84d41d6:	eb 4b                	jmp    84d4223 <_ZN20Inter_LoadDnfHackLog12dispatch_sigEP5CUserPci+0x79>
 84d41d8:	c7 45 f4 65 00 00 00 	movl   $0x65,-0xc(%ebp)
 84d41df:	eb 2f                	jmp    84d4210 <_ZN20Inter_LoadDnfHackLog12dispatch_sigEP5CUserPci+0x66>
 84d41e1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d41e4:	8d 50 9b             	lea    -0x65(%eax),%edx
 84d41e7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d41ea:	8b 74 90 04          	mov    0x4(%eax,%edx,4),%esi
 84d41ee:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84d41f1:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d41f4:	89 04 24             	mov    %eax,(%esp)
 84d41f7:	e8 5e 57 c2 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 84d41fc:	89 74 24 08          	mov    %esi,0x8(%esp)
 84d4200:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d4204:	89 04 24             	mov    %eax,(%esp)
 84d4207:	e8 70 73 01 00       	call   84eb57c <_ZN8WongWork13CHackAnalyzer27setServerHackAccumulatedCntENS_13ENUM_HACKTYPEEj>
 84d420c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 84d4210:	81 7d f4 a0 0f 00 00 	cmpl   $0xfa0,-0xc(%ebp)
 84d4217:	0f 9e c0             	setle  %al
 84d421a:	84 c0                	test   %al,%al
 84d421c:	75 c3                	jne    84d41e1 <_ZN20Inter_LoadDnfHackLog12dispatch_sigEP5CUserPci+0x37>
 84d421e:	b8 00 00 00 00       	mov    $0x0,%eax
 84d4223:	83 c4 20             	add    $0x20,%esp
 84d4226:	5b                   	pop    %ebx
 84d4227:	5e                   	pop    %esi
 84d4228:	5d                   	pop    %ebp
 84d4229:	c3                   	ret

```

```c
// Inter_LoadDnfHackLog::dispatch_sig @ 0x84d41aa

/* Inter_LoadDnfHackLog::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadDnfHackLog::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  CHackAnalyzer *pCVar3;
  undefined4 local_10;
  
  iVar2 = CUser::get_acc_id((CUser *)param_2);
  if (iVar2 == *(int *)param_3) {
    for (local_10 = 0x65; local_10 < 0xfa1; local_10 = local_10 + 1) {
      uVar1 = *(undefined4 *)(param_3 + 4 + (local_10 + -0x65) * 4);
      pCVar3 = (CHackAnalyzer *)CUser::getHackAnalyzer((CUser *)param_2);
      WongWork::CHackAnalyzer::setServerHackAccumulatedCnt(pCVar3,local_10,uVar1);
    }
  }
  return 0;
}

```

