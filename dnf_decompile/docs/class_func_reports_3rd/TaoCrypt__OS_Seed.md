# TaoCrypt__OS_Seed

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## GenerateSeed

```asm
// === 087677d0 TaoCrypt::OS_Seed::GenerateSeed  [0x087677d0-0x876783f] ===
 87677d0:	55                   	push   %ebp
 87677d1:	89 e5                	mov    %esp,%ebp
 87677d3:	57                   	push   %edi
 87677d4:	56                   	push   %esi
 87677d5:	53                   	push   %ebx
 87677d6:	83 ec 1c             	sub    $0x1c,%esp
 87677d9:	8b 75 10             	mov    0x10(%ebp),%esi
 87677dc:	e8 17 b6 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87677e1:	81 c3 b7 53 c0 00    	add    $0xc053b7,%ebx
 87677e7:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87677ea:	85 f6                	test   %esi,%esi
 87677ec:	74 1e                	je     876780c <_ZN8TaoCrypt7OS_Seed12GenerateSeedEPhj+0x3c>
 87677ee:	8b 55 08             	mov    0x8(%ebp),%edx
 87677f1:	89 74 24 08          	mov    %esi,0x8(%esp)
 87677f5:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87677f9:	8b 02                	mov    (%edx),%eax
 87677fb:	89 04 24             	mov    %eax,(%esp)
 87677fe:	e8 5d 66 91 ff       	call   807de60 <read@plt>
 8767803:	83 f8 ff             	cmp    $0xffffffff,%eax
 8767806:	74 20                	je     8767828 <_ZN8TaoCrypt7OS_Seed12GenerateSeedEPhj+0x58>
 8767808:	29 c6                	sub    %eax,%esi
 876780a:	75 0c                	jne    8767818 <_ZN8TaoCrypt7OS_Seed12GenerateSeedEPhj+0x48>
 876780c:	83 c4 1c             	add    $0x1c,%esp
 876780f:	5b                   	pop    %ebx
 8767810:	5e                   	pop    %esi
 8767811:	5f                   	pop    %edi
 8767812:	5d                   	pop    %ebp
 8767813:	c3                   	ret
 8767814:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8767818:	01 c7                	add    %eax,%edi
 876781a:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8767821:	e8 ea 67 91 ff       	call   807e010 <sleep@plt>
 8767826:	eb c6                	jmp    87677ee <_ZN8TaoCrypt7OS_Seed12GenerateSeedEPhj+0x1e>
 8767828:	8b 45 08             	mov    0x8(%ebp),%eax
 876782b:	c7 40 04 ec 03 00 00 	movl   $0x3ec,0x4(%eax)
 8767832:	83 c4 1c             	add    $0x1c,%esp
 8767835:	5b                   	pop    %ebx
 8767836:	5e                   	pop    %esi
 8767837:	5f                   	pop    %edi
 8767838:	5d                   	pop    %ebp
 8767839:	c3                   	ret
 876783a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TaoCrypt::OS_Seed::GenerateSeed @ 0x87677d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::OS_Seed::GenerateSeed(unsigned char*, unsigned int) */

void __thiscall TaoCrypt::OS_Seed::GenerateSeed(OS_Seed *this,uchar *param_1,uint param_2)

{
  ssize_t sVar1;
  
  if (param_2 != 0) {
    while( true ) {
      sVar1 = ::read(*(int *)this,param_1,param_2);
      if (sVar1 == -1) {
        *(undefined4 *)(this + 4) = 0x3ec;
        return;
      }
      param_2 = param_2 - sVar1;
      if (param_2 == 0) break;
      param_1 = param_1 + sVar1;
      sleep(1);
    }
  }
  return;
}

```

---

## OS_Seed

```asm
// === 08767870 TaoCrypt::OS_Seed::OS_Seed  [0x08767870-0x87678df] ===
 8767870:	55                   	push   %ebp
 8767871:	89 e5                	mov    %esp,%ebp
 8767873:	83 ec 18             	sub    $0x18,%esp
 8767876:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8767879:	e8 7a b5 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876787e:	81 c3 1a 53 c0 00    	add    $0xc0531a,%ebx
 8767884:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8767887:	8b 75 08             	mov    0x8(%ebp),%esi
 876788a:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 8767891:	8d 83 95 88 99 ff    	lea    -0x66776b(%ebx),%eax
 8767897:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 876789e:	00 
 876789f:	89 04 24             	mov    %eax,(%esp)
 87678a2:	e8 59 60 91 ff       	call   807d900 <open@plt>
 87678a7:	83 f8 ff             	cmp    $0xffffffff,%eax
 87678aa:	89 06                	mov    %eax,(%esi)
 87678ac:	74 0a                	je     87678b8 <_ZN8TaoCrypt7OS_SeedC1Ev+0x48>
 87678ae:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87678b1:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87678b4:	89 ec                	mov    %ebp,%esp
 87678b6:	5d                   	pop    %ebp
 87678b7:	c3                   	ret
 87678b8:	8d 83 a2 88 99 ff    	lea    -0x66775e(%ebx),%eax
 87678be:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 87678c5:	00 
 87678c6:	89 04 24             	mov    %eax,(%esp)
 87678c9:	e8 32 60 91 ff       	call   807d900 <open@plt>
 87678ce:	83 f8 ff             	cmp    $0xffffffff,%eax
 87678d1:	89 06                	mov    %eax,(%esi)
 87678d3:	75 d9                	jne    87678ae <_ZN8TaoCrypt7OS_SeedC1Ev+0x3e>
 87678d5:	c7 46 04 eb 03 00 00 	movl   $0x3eb,0x4(%esi)
 87678dc:	eb d0                	jmp    87678ae <_ZN8TaoCrypt7OS_SeedC1Ev+0x3e>
 87678de:	66 90                	xchg   %ax,%ax

```

```c
// TaoCrypt::OS_Seed::OS_Seed @ 0x8767870

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::OS_Seed::OS_Seed() */

void __thiscall TaoCrypt::OS_Seed::OS_Seed(OS_Seed *this)

{
  int iVar1;
  
  *(undefined4 *)(this + 4) = 0;
  iVar1 = ::open("/dev/urandom",0);
  *(int *)this = iVar1;
  if (iVar1 == -1) {
    iVar1 = ::open("/dev/random",0);
    *(int *)this = iVar1;
    if (iVar1 == -1) {
      *(undefined4 *)(this + 4) = 0x3eb;
    }
  }
  return;
}

```

---

## ~OS_Seed

```asm
// === 08767840 TaoCrypt::OS_Seed::~OS_Seed  [0x08767840-0x876786f] ===
 8767840:	55                   	push   %ebp
 8767841:	89 e5                	mov    %esp,%ebp
 8767843:	53                   	push   %ebx
 8767844:	83 ec 14             	sub    $0x14,%esp
 8767847:	8b 45 08             	mov    0x8(%ebp),%eax
 876784a:	e8 a9 b5 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 876784f:	81 c3 49 53 c0 00    	add    $0xc05349,%ebx
 8767855:	8b 00                	mov    (%eax),%eax
 8767857:	89 04 24             	mov    %eax,(%esp)
 876785a:	e8 01 60 91 ff       	call   807d860 <close@plt>
 876785f:	83 c4 14             	add    $0x14,%esp
 8767862:	5b                   	pop    %ebx
 8767863:	5d                   	pop    %ebp
 8767864:	c3                   	ret
 8767865:	90                   	nop
 8767866:	8d 76 00             	lea    0x0(%esi),%esi
 8767869:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::OS_Seed::~OS_Seed @ 0x8767840

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::OS_Seed::~OS_Seed() */

void __thiscall TaoCrypt::OS_Seed::~OS_Seed(OS_Seed *this)

{
  close(*(int *)this);
  return;
}

```

