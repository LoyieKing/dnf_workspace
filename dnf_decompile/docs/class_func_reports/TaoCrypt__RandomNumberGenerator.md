# TaoCrypt__RandomNumberGenerator

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## GenerateBlock

```asm
// === 087678e0 TaoCrypt::RandomNumberGenerator::GenerateBlock  [0x087678e0-0x876793f] ===
 87678e0:	55                   	push   %ebp
 87678e1:	89 e5                	mov    %esp,%ebp
 87678e3:	83 ec 28             	sub    $0x28,%esp
 87678e6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87678e9:	e8 0a b5 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87678ee:	81 c3 aa 52 c0 00    	add    $0xc052aa,%ebx
 87678f4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87678f7:	8b 75 0c             	mov    0xc(%ebp),%esi
 87678fa:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87678fd:	8b 7d 10             	mov    0x10(%ebp),%edi
 8767900:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8767907:	00 
 8767908:	89 34 24             	mov    %esi,(%esp)
 876790b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 876790f:	e8 ac 63 91 ff       	call   807dcc0 <memset@plt>
 8767914:	8b 45 08             	mov    0x8(%ebp),%eax
 8767917:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 876791b:	89 74 24 08          	mov    %esi,0x8(%esp)
 876791f:	89 74 24 04          	mov    %esi,0x4(%esp)
 8767923:	83 c0 08             	add    $0x8,%eax
 8767926:	89 04 24             	mov    %eax,(%esp)
 8767929:	e8 f2 e0 03 00       	call   87a5a20 <_ZN8TaoCrypt4ARC47ProcessEPhPKhj>
 876792e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8767931:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8767934:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8767937:	89 ec                	mov    %ebp,%esp
 8767939:	5d                   	pop    %ebp
 876793a:	c3                   	ret
 876793b:	90                   	nop
 876793c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::RandomNumberGenerator::GenerateBlock @ 0x87678e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RandomNumberGenerator::GenerateBlock(unsigned char*, unsigned int) */

void __thiscall
TaoCrypt::RandomNumberGenerator::GenerateBlock
          (RandomNumberGenerator *this,uchar *param_1,uint param_2)

{
  memset(param_1,0,param_2);
  ARC4::Process((ARC4 *)(this + 8),param_1,param_1,param_2);
  return;
}

```

---

## GenerateByte

```asm
// === 08767940 TaoCrypt::RandomNumberGenerator::GenerateByte  [0x08767940-0x876797f] ===
 8767940:	55                   	push   %ebp
 8767941:	89 e5                	mov    %esp,%ebp
 8767943:	53                   	push   %ebx
 8767944:	e8 af b4 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767949:	81 c3 4f 52 c0 00    	add    $0xc0524f,%ebx
 876794f:	83 ec 24             	sub    $0x24,%esp
 8767952:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8767955:	89 44 24 04          	mov    %eax,0x4(%esp)
 8767959:	8b 45 08             	mov    0x8(%ebp),%eax
 876795c:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8767963:	00 
 8767964:	89 04 24             	mov    %eax,(%esp)
 8767967:	e8 74 ff ff ff       	call   87678e0 <_ZN8TaoCrypt21RandomNumberGenerator13GenerateBlockEPhj>
 876796c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8767970:	83 c4 24             	add    $0x24,%esp
 8767973:	5b                   	pop    %ebx
 8767974:	5d                   	pop    %ebp
 8767975:	c3                   	ret
 8767976:	8d 76 00             	lea    0x0(%esi),%esi
 8767979:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::RandomNumberGenerator::GenerateByte @ 0x8767940

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RandomNumberGenerator::GenerateByte() */

uchar __thiscall TaoCrypt::RandomNumberGenerator::GenerateByte(RandomNumberGenerator *this)

{
  uchar local_d [5];
  
  builtin_memcpy(local_d + 1,"Iyv\b",4);
  GenerateBlock(this,local_d,1);
  return local_d[0];
}

```

---

## RandomNumberGenerator

```asm
// === 08767980 TaoCrypt::RandomNumberGenerator::RandomNumberGenerator  [0x08767980-0x87679ff] ===
 8767980:	55                   	push   %ebp
 8767981:	89 e5                	mov    %esp,%ebp
 8767983:	81 ec 48 01 00 00    	sub    $0x148,%esp
 8767989:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 876798c:	e8 67 b4 fb ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8767991:	81 c3 07 52 c0 00    	add    $0xc05207,%ebx
 8767997:	89 75 f8             	mov    %esi,-0x8(%ebp)
 876799a:	8b 75 08             	mov    0x8(%ebp),%esi
 876799d:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87679a0:	8d 7d c8             	lea    -0x38(%ebp),%edi
 87679a3:	89 34 24             	mov    %esi,(%esp)
 87679a6:	e8 c5 fe ff ff       	call   8767870 <_ZN8TaoCrypt7OS_SeedC1Ev>
 87679ab:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87679af:	89 34 24             	mov    %esi,(%esp)
 87679b2:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 87679b9:	00 
 87679ba:	e8 11 fe ff ff       	call   87677d0 <_ZN8TaoCrypt7OS_Seed12GenerateSeedEPhj>
 87679bf:	8d 46 08             	lea    0x8(%esi),%eax
 87679c2:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87679c6:	89 04 24             	mov    %eax,(%esp)
 87679c9:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 87679d0:	00 
 87679d1:	e8 2a df 03 00       	call   87a5900 <_ZN8TaoCrypt4ARC46SetKeyEPKhj>
 87679d6:	8d 85 c8 fe ff ff    	lea    -0x138(%ebp),%eax
 87679dc:	89 34 24             	mov    %esi,(%esp)
 87679df:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 87679e6:	00 
 87679e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 87679eb:	e8 f0 fe ff ff       	call   87678e0 <_ZN8TaoCrypt21RandomNumberGenerator13GenerateBlockEPhj>
 87679f0:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87679f3:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87679f6:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87679f9:	89 ec                	mov    %ebp,%esp
 87679fb:	5d                   	pop    %ebp
 87679fc:	c3                   	ret
 87679fd:	90                   	nop
 87679fe:	90                   	nop
 87679ff:	90                   	nop

```

```c
// TaoCrypt::RandomNumberGenerator::RandomNumberGenerator @ 0x8767980

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::RandomNumberGenerator::RandomNumberGenerator() */

void __thiscall TaoCrypt::RandomNumberGenerator::RandomNumberGenerator(RandomNumberGenerator *this)

{
  uchar local_13c [256];
  uchar local_3c [44];
  
  OS_Seed::OS_Seed((OS_Seed *)this);
  OS_Seed::GenerateSeed((OS_Seed *)this,local_3c,0x20);
  ARC4::SetKey((ARC4 *)(this + 8),local_3c,0x20);
  GenerateBlock(this,local_13c,0x100);
  return;
}

```

