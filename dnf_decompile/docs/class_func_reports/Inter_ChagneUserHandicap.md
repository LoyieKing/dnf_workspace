# Inter_ChagneUserHandicap

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084d271e Inter_ChagneUserHandicap::dispatch_sig  [0x084d271e-0x84d279d] ===
 84d271e:	55                   	push   %ebp
 84d271f:	89 e5                	mov    %esp,%ebp
 84d2721:	53                   	push   %ebx
 84d2722:	83 ec 24             	sub    $0x24,%esp
 84d2725:	8b 45 10             	mov    0x10(%ebp),%eax
 84d2728:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84d272b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d272e:	8b 58 0a             	mov    0xa(%eax),%ebx
 84d2731:	e8 58 9a bf ff       	call   80cc18e <_Z14G_CGameManagerv>
 84d2736:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84d273a:	89 04 24             	mov    %eax,(%esp)
 84d273d:	e8 84 21 dc ff       	call   82948c6 <_ZN12CGameManager14GetUserByAccIdEj>
 84d2742:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84d2745:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84d2749:	74 10                	je     84d275b <_ZN24Inter_ChagneUserHandicap12dispatch_sigEP5CUserPci+0x3d>
 84d274b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d274e:	89 04 24             	mov    %eax,(%esp)
 84d2751:	e8 36 7c c0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84d2756:	83 f8 01             	cmp    $0x1,%eax
 84d2759:	7f 07                	jg     84d2762 <_ZN24Inter_ChagneUserHandicap12dispatch_sigEP5CUserPci+0x44>
 84d275b:	b8 01 00 00 00       	mov    $0x1,%eax
 84d2760:	eb 05                	jmp    84d2767 <_ZN24Inter_ChagneUserHandicap12dispatch_sigEP5CUserPci+0x49>
 84d2762:	b8 00 00 00 00       	mov    $0x0,%eax
 84d2767:	84 c0                	test   %al,%al
 84d2769:	74 07                	je     84d2772 <_ZN24Inter_ChagneUserHandicap12dispatch_sigEP5CUserPci+0x54>
 84d276b:	b8 00 00 00 00       	mov    $0x0,%eax
 84d2770:	eb 25                	jmp    84d2797 <_ZN24Inter_ChagneUserHandicap12dispatch_sigEP5CUserPci+0x79>
 84d2772:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d2775:	8b 40 0e             	mov    0xe(%eax),%eax
 84d2778:	83 f8 01             	cmp    $0x1,%eax
 84d277b:	75 15                	jne    84d2792 <_ZN24Inter_ChagneUserHandicap12dispatch_sigEP5CUserPci+0x74>
 84d277d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84d2780:	8b 40 12             	mov    0x12(%eax),%eax
 84d2783:	89 44 24 04          	mov    %eax,0x4(%esp)
 84d2787:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84d278a:	89 04 24             	mov    %eax,(%esp)
 84d278d:	e8 ca 49 db ff       	call   828715c <_ZN5CUser14setStdDropRateEi>
 84d2792:	b8 00 00 00 00       	mov    $0x0,%eax
 84d2797:	83 c4 24             	add    $0x24,%esp
 84d279a:	5b                   	pop    %ebx
 84d279b:	5d                   	pop    %ebp
 84d279c:	c3                   	ret
 84d279d:	90                   	nop

```

```c
// Inter_ChagneUserHandicap::dispatch_sig @ 0x84d271e

/* Inter_ChagneUserHandicap::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ChagneUserHandicap::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  CGameManager *this;
  CUser *this_00;
  int iVar3;
  
  uVar1 = *(uint *)(param_3 + 10);
  this = (CGameManager *)G_CGameManager();
  this_00 = (CUser *)CGameManager::GetUserByAccId(this,uVar1);
  if ((this_00 == (CUser *)0x0) || (iVar3 = CUser::get_state(this_00), iVar3 < 2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((!bVar2) && (*(int *)(param_3 + 0xe) == 1)) {
    CUser::setStdDropRate(this_00,*(int *)(param_3 + 0x12));
  }
  return 0;
}

```

