# Inter_MemberExpLevelUp

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d1448 Inter_MemberExpLevelUp::dispatch_sig  [0x084d1448-0x84d14af] ===
 84d1448:	55                   	push   %ebp
 84d1449:	89 e5                	mov    %esp,%ebp
 84d144b:	83 ec 28             	sub    $0x28,%esp
 84d144e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1451:	89 04 24             	mov    %eax,(%esp)
 84d1454:	e8 33 8f c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d1459:	85 c0                	test   %eax,%eax
 84d145b:	0f 94 c0             	sete   %al
 84d145e:	84 c0                	test   %al,%al
 84d1460:	74 07                	je     84d1469 <_ZN22Inter_MemberExpLevelUp12dispatch_sigEP5CUserPci+0x21>
 84d1462:	b8 00 00 00 00       	mov    $0x0,%eax
 84d1467:	eb 45                	jmp    84d14ae <_ZN22Inter_MemberExpLevelUp12dispatch_sigEP5CUserPci+0x66>
 84d1469:	8b 45 10             	mov    0x10(%ebp),%eax
 84d146c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d146f:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d1472:	89 04 24             	mov    %eax,(%esp)
 84d1475:	e8 d4 a7 bf ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 84d147a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 84d147d:	8b 52 0e             	mov    0xe(%edx),%edx
 84d1480:	39 d0                	cmp    %edx,%eax
 84d1482:	0f 95 c0             	setne  %al
 84d1485:	84 c0                	test   %al,%al
 84d1487:	74 07                	je     84d1490 <_ZN22Inter_MemberExpLevelUp12dispatch_sigEP5CUserPci+0x48>
 84d1489:	b8 00 00 00 00       	mov    $0x0,%eax
 84d148e:	eb 1e                	jmp    84d14ae <_ZN22Inter_MemberExpLevelUp12dispatch_sigEP5CUserPci+0x66>
 84d1490:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d1493:	0f b6 40 12          	movzbl 0x12(%eax),%eax
 84d1497:	0f b6 d0             	movzbl %al,%edx
 84d149a:	8b 45 0c             	mov    0xc(%ebp),%eax
 84d149d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84d14a1:	89 04 24             	mov    %eax,(%esp)
 84d14a4:	e8 d7 46 17 00       	call   8645b80 <_ZN15CUserCharacInfo25set_uppermember_exp_levelEh>
 84d14a9:	b8 00 00 00 00       	mov    $0x0,%eax
 84d14ae:	c9                   	leave
 84d14af:	c3                   	ret

```

```c
// Inter_MemberExpLevelUp::dispatch_sig @ 0x84d1448

/* Inter_MemberExpLevelUp::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MemberExpLevelUp::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = CUser::get_state((CUser *)param_2);
  if ((iVar1 != 0) &&
     (iVar1 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_2),
     iVar1 == *(int *)(param_3 + 0xe))) {
    CUserCharacInfo::set_uppermember_exp_level
              ((CUserCharacInfo *)param_2,*(uchar *)(param_3 + 0x12));
  }
  return 0;
}

```

