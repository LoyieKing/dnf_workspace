# CNChecksumSha256

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CNChecksumSha256

```asm
// === 080986b8 CNChecksumSha256::CNChecksumSha256  [0x080986b8-0x809871b] ===
 80986b8:	55                   	push   %ebp
 80986b9:	89 e5                	mov    %esp,%ebp
 80986bb:	56                   	push   %esi
 80986bc:	53                   	push   %ebx
 80986bd:	83 ec 10             	sub    $0x10,%esp
 80986c0:	8b 45 08             	mov    0x8(%ebp),%eax
 80986c3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 80986ca:	00 
 80986cb:	89 04 24             	mov    %eax,(%esp)
 80986ce:	e8 9d 57 00 00       	call   809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>
 80986d3:	8b 45 08             	mov    0x8(%ebp),%eax
 80986d6:	c7 00 68 35 b1 08    	movl   $0x8b13568,(%eax)
 80986dc:	8b 45 08             	mov    0x8(%ebp),%eax
 80986df:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 80986e6:	c7 04 24 70 00 00 00 	movl   $0x70,(%esp)
 80986ed:	e8 5e bd 68 00       	call   8724450 <_Znwj>
 80986f2:	89 c2                	mov    %eax,%edx
 80986f4:	8b 45 08             	mov    0x8(%ebp),%eax
 80986f7:	89 50 08             	mov    %edx,0x8(%eax)
 80986fa:	83 c4 10             	add    $0x10,%esp
 80986fd:	5b                   	pop    %ebx
 80986fe:	5e                   	pop    %esi
 80986ff:	5d                   	pop    %ebp
 8098700:	c3                   	ret
 8098701:	89 d3                	mov    %edx,%ebx
 8098703:	89 c6                	mov    %eax,%esi
 8098705:	8b 45 08             	mov    0x8(%ebp),%eax
 8098708:	89 04 24             	mov    %eax,(%esp)
 809870b:	e8 78 57 00 00       	call   809de88 <_ZN9IChecksumD1Ev>
 8098710:	89 f0                	mov    %esi,%eax
 8098712:	89 da                	mov    %ebx,%edx
 8098714:	89 04 24             	mov    %eax,(%esp)
 8098717:	e8 34 b0 a4 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CNChecksumSha256::CNChecksumSha256 @ 0x80986b8

/* CNChecksumSha256::CNChecksumSha256() */

void __thiscall CNChecksumSha256::CNChecksumSha256(CNChecksumSha256 *this)

{
  void *pvVar1;
  
  IChecksum::IChecksum((IChecksum *)this,1);
  *(undefined ***)this = &PTR__CNChecksumSha256_08b13568;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 080986ed to 080986f1 has its CatchHandler @ 08098701 */
  pvVar1 = operator_new(0x70);
  *(void **)(this + 8) = pvVar1;
  return;
}

```

---

## CNChecksumSha256_0809878c

```asm
// === 0809878c CNChecksumSha256::CNChecksumSha256  [0x0809878c-0x80987af] ===
 809878c:	55                   	push   %ebp
 809878d:	89 e5                	mov    %esp,%ebp
 809878f:	83 ec 18             	sub    $0x18,%esp
 8098792:	8b 45 08             	mov    0x8(%ebp),%eax
 8098795:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 809879c:	00 
 809879d:	89 04 24             	mov    %eax,(%esp)
 80987a0:	e8 cb 56 00 00       	call   809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>
 80987a5:	8b 45 08             	mov    0x8(%ebp),%eax
 80987a8:	c7 00 68 35 b1 08    	movl   $0x8b13568,(%eax)
 80987ae:	c9                   	leave
 80987af:	c3                   	ret

```

```c
// CNChecksumSha256::CNChecksumSha256 @ 0x809878c

/* CNChecksumSha256::CNChecksumSha256(CNChecksumSha256 const&) */

void __thiscall CNChecksumSha256::CNChecksumSha256(CNChecksumSha256 *this,CNChecksumSha256 *param_1)

{
  IChecksum::IChecksum((IChecksum *)this,1);
  *(undefined ***)this = &PTR__CNChecksumSha256_08b13568;
  return;
}

```

---

## ChecksumFinish

```asm
// === 08098a3c CNChecksumSha256::ChecksumFinish  [0x08098a3c-0x8098a91] ===
 8098a3c:	55                   	push   %ebp
 8098a3d:	89 e5                	mov    %esp,%ebp
 8098a3f:	83 ec 18             	sub    $0x18,%esp
 8098a42:	8b 45 08             	mov    0x8(%ebp),%eax
 8098a45:	8b 40 08             	mov    0x8(%eax),%eax
 8098a48:	85 c0                	test   %eax,%eax
 8098a4a:	75 07                	jne    8098a53 <_ZN16CNChecksumSha25614ChecksumFinishEPhi+0x17>
 8098a4c:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8098a51:	eb 3d                	jmp    8098a90 <_ZN16CNChecksumSha25614ChecksumFinishEPhi+0x54>
 8098a53:	8b 45 08             	mov    0x8(%ebp),%eax
 8098a56:	8b 00                	mov    (%eax),%eax
 8098a58:	83 c0 20             	add    $0x20,%eax
 8098a5b:	8b 10                	mov    (%eax),%edx
 8098a5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8098a60:	89 04 24             	mov    %eax,(%esp)
 8098a63:	ff d2                	call   *%edx
 8098a65:	3b 45 10             	cmp    0x10(%ebp),%eax
 8098a68:	0f 9f c0             	setg   %al
 8098a6b:	84 c0                	test   %al,%al
 8098a6d:	74 07                	je     8098a76 <_ZN16CNChecksumSha25614ChecksumFinishEPhi+0x3a>
 8098a6f:	b8 01 00 00 70       	mov    $0x70000001,%eax
 8098a74:	eb 1a                	jmp    8098a90 <_ZN16CNChecksumSha25614ChecksumFinishEPhi+0x54>
 8098a76:	8b 45 08             	mov    0x8(%ebp),%eax
 8098a79:	8b 40 08             	mov    0x8(%eax),%eax
 8098a7c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8098a7f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098a83:	89 04 24             	mov    %eax,(%esp)
 8098a86:	e8 46 57 02 00       	call   80be1d1 <_Z12SHA256_FinalP15SHA256_ALG_INFOPh>
 8098a8b:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8098a90:	c9                   	leave
 8098a91:	c3                   	ret

```

```c
// CNChecksumSha256::ChecksumFinish @ 0x8098a3c

/* CNChecksumSha256::ChecksumFinish(unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha256::ChecksumFinish(CNChecksumSha256 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_2 < iVar2) {
      uVar1 = 0x70000001;
    }
    else {
      SHA256_Final(*(SHA256_ALG_INFO **)(this + 8),param_1);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}

```

---

## ChecksumStart

```asm
// === 080989d6 CNChecksumSha256::ChecksumStart  [0x080989d6-0x8098a01] ===
 80989d6:	55                   	push   %ebp
 80989d7:	89 e5                	mov    %esp,%ebp
 80989d9:	83 ec 18             	sub    $0x18,%esp
 80989dc:	8b 45 08             	mov    0x8(%ebp),%eax
 80989df:	8b 40 08             	mov    0x8(%eax),%eax
 80989e2:	85 c0                	test   %eax,%eax
 80989e4:	75 07                	jne    80989ed <_ZN16CNChecksumSha25613ChecksumStartEv+0x17>
 80989e6:	b8 00 00 00 70       	mov    $0x70000000,%eax
 80989eb:	eb 13                	jmp    8098a00 <_ZN16CNChecksumSha25613ChecksumStartEv+0x2a>
 80989ed:	8b 45 08             	mov    0x8(%ebp),%eax
 80989f0:	8b 40 08             	mov    0x8(%eax),%eax
 80989f3:	89 04 24             	mov    %eax,(%esp)
 80989f6:	e8 25 56 02 00       	call   80be020 <_Z11SHA256_InitP15SHA256_ALG_INFO>
 80989fb:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8098a00:	c9                   	leave
 8098a01:	c3                   	ret

```

```c
// CNChecksumSha256::ChecksumStart @ 0x80989d6

/* CNChecksumSha256::ChecksumStart() */

undefined4 __thiscall CNChecksumSha256::ChecksumStart(CNChecksumSha256 *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    SHA256_Init(*(SHA256_ALG_INFO **)(this + 8));
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## ChecksumUpdate

```asm
// === 08098a02 CNChecksumSha256::ChecksumUpdate  [0x08098a02-0x8098a3b] ===
 8098a02:	55                   	push   %ebp
 8098a03:	89 e5                	mov    %esp,%ebp
 8098a05:	83 ec 18             	sub    $0x18,%esp
 8098a08:	8b 45 08             	mov    0x8(%ebp),%eax
 8098a0b:	8b 40 08             	mov    0x8(%eax),%eax
 8098a0e:	85 c0                	test   %eax,%eax
 8098a10:	75 07                	jne    8098a19 <_ZN16CNChecksumSha25614ChecksumUpdateEPKhi+0x17>
 8098a12:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8098a17:	eb 21                	jmp    8098a3a <_ZN16CNChecksumSha25614ChecksumUpdateEPKhi+0x38>
 8098a19:	8b 55 10             	mov    0x10(%ebp),%edx
 8098a1c:	8b 45 08             	mov    0x8(%ebp),%eax
 8098a1f:	8b 40 08             	mov    0x8(%eax),%eax
 8098a22:	89 54 24 08          	mov    %edx,0x8(%esp)
 8098a26:	8b 55 0c             	mov    0xc(%ebp),%edx
 8098a29:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098a2d:	89 04 24             	mov    %eax,(%esp)
 8098a30:	e8 55 56 02 00       	call   80be08a <_Z13SHA256_UpdateP15SHA256_ALG_INFOPhm>
 8098a35:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8098a3a:	c9                   	leave
 8098a3b:	c3                   	ret

```

```c
// CNChecksumSha256::ChecksumUpdate @ 0x8098a02

/* CNChecksumSha256::ChecksumUpdate(unsigned char const*, int) */

undefined4 __thiscall
CNChecksumSha256::ChecksumUpdate(CNChecksumSha256 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    SHA256_Update(*(SHA256_ALG_INFO **)(this + 8),param_1,param_2);
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## GetChecksumSize

```asm
// === 08098a92 CNChecksumSha256::GetChecksumSize  [0x08098a92-0x8098a9b] ===
 8098a92:	55                   	push   %ebp
 8098a93:	89 e5                	mov    %esp,%ebp
 8098a95:	b8 20 00 00 00       	mov    $0x20,%eax
 8098a9a:	5d                   	pop    %ebp
 8098a9b:	c3                   	ret

```

```c
// CNChecksumSha256::GetChecksumSize @ 0x8098a92

/* CNChecksumSha256::GetChecksumSize() const */

undefined4 CNChecksumSha256::GetChecksumSize(void)

{
  return 0x20;
}

```

---

## Initialize

```asm
// === 080987b8 CNChecksumSha256::Initialize  [0x080987b8-0x80987c1] ===
 80987b8:	55                   	push   %ebp
 80987b9:	89 e5                	mov    %esp,%ebp
 80987bb:	b8 17 00 00 70       	mov    $0x70000017,%eax
 80987c0:	5d                   	pop    %ebp
 80987c1:	c3                   	ret

```

```c
// CNChecksumSha256::Initialize @ 0x80987b8

/* CNChecksumSha256::Initialize(unsigned char const*, int) */

undefined4 CNChecksumSha256::Initialize(uchar *param_1,int param_2)

{
  return 0x70000017;
}

```

---

## MakeChecksumFromFile

```asm
// === 08098850 CNChecksumSha256::MakeChecksumFromFile  [0x08098850-0x80989d5] ===
 8098850:	55                   	push   %ebp
 8098851:	89 e5                	mov    %esp,%ebp
 8098853:	81 ec 28 04 00 00    	sub    $0x428,%esp
 8098859:	8b 45 08             	mov    0x8(%ebp),%eax
 809885c:	8b 40 08             	mov    0x8(%eax),%eax
 809885f:	85 c0                	test   %eax,%eax
 8098861:	75 0a                	jne    809886d <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0x1d>
 8098863:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8098868:	e9 66 01 00 00       	jmp    80989d3 <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0x183>
 809886d:	8b 45 08             	mov    0x8(%ebp),%eax
 8098870:	8b 00                	mov    (%eax),%eax
 8098872:	83 c0 20             	add    $0x20,%eax
 8098875:	8b 10                	mov    (%eax),%edx
 8098877:	8b 45 08             	mov    0x8(%ebp),%eax
 809887a:	89 04 24             	mov    %eax,(%esp)
 809887d:	ff d2                	call   *%edx
 809887f:	3b 45 14             	cmp    0x14(%ebp),%eax
 8098882:	0f 9f c0             	setg   %al
 8098885:	84 c0                	test   %al,%al
 8098887:	74 0a                	je     8098893 <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0x43>
 8098889:	b8 01 00 00 70       	mov    $0x70000001,%eax
 809888e:	e9 40 01 00 00       	jmp    80989d3 <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0x183>
 8098893:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8098897:	75 0a                	jne    80988a3 <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0x53>
 8098899:	b8 03 00 00 70       	mov    $0x70000003,%eax
 809889e:	e9 30 01 00 00       	jmp    80989d3 <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0x183>
 80988a3:	8b 45 08             	mov    0x8(%ebp),%eax
 80988a6:	8b 40 08             	mov    0x8(%eax),%eax
 80988a9:	89 04 24             	mov    %eax,(%esp)
 80988ac:	e8 6f 57 02 00       	call   80be020 <_Z11SHA256_InitP15SHA256_ALG_INFO>
 80988b1:	c7 44 24 04 48 35 b1 	movl   $0x8b13548,0x4(%esp)
 80988b8:	08 
 80988b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 80988bc:	89 04 24             	mov    %eax,(%esp)
 80988bf:	e8 ac 5e fe ff       	call   807e770 <fopen@plt>
 80988c4:	89 45 e8             	mov    %eax,-0x18(%ebp)
 80988c7:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 80988cb:	75 0a                	jne    80988d7 <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0x87>
 80988cd:	b8 02 00 00 70       	mov    $0x70000002,%eax
 80988d2:	e9 fc 00 00 00       	jmp    80989d3 <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0x183>
 80988d7:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 80988de:	00 
 80988df:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80988e6:	00 
 80988e7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80988ea:	89 04 24             	mov    %eax,(%esp)
 80988ed:	e8 be 57 fe ff       	call   807e0b0 <fseek@plt>
 80988f2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80988f5:	89 04 24             	mov    %eax,(%esp)
 80988f8:	e8 d3 50 fe ff       	call   807d9d0 <ftell@plt>
 80988fd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8098900:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8098904:	79 15                	jns    809891b <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0xcb>
 8098906:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8098909:	89 04 24             	mov    %eax,(%esp)
 809890c:	e8 8f 55 fe ff       	call   807dea0 <fclose@plt>
 8098911:	b8 03 00 00 70       	mov    $0x70000003,%eax
 8098916:	e9 b8 00 00 00       	jmp    80989d3 <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0x183>
 809891b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8098922:	00 
 8098923:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 809892a:	00 
 809892b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 809892e:	89 04 24             	mov    %eax,(%esp)
 8098931:	e8 7a 57 fe ff       	call   807e0b0 <fseek@plt>
 8098936:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 809893d:	eb 62                	jmp    80989a1 <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0x151>
 809893f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8098942:	2b 45 f0             	sub    -0x10(%ebp),%eax
 8098945:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8098948:	81 7d f4 00 04 00 00 	cmpl   $0x400,-0xc(%ebp)
 809894f:	76 07                	jbe    8098958 <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0x108>
 8098951:	c7 45 f4 00 04 00 00 	movl   $0x400,-0xc(%ebp)
 8098958:	8b 45 e8             	mov    -0x18(%ebp),%eax
 809895b:	89 44 24 0c          	mov    %eax,0xc(%esp)
 809895f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8098966:	00 
 8098967:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809896a:	89 44 24 04          	mov    %eax,0x4(%esp)
 809896e:	8d 85 e8 fb ff ff    	lea    -0x418(%ebp),%eax
 8098974:	89 04 24             	mov    %eax,(%esp)
 8098977:	e8 d4 53 fe ff       	call   807dd50 <fread@plt>
 809897c:	8b 45 08             	mov    0x8(%ebp),%eax
 809897f:	8b 40 08             	mov    0x8(%eax),%eax
 8098982:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8098985:	89 54 24 08          	mov    %edx,0x8(%esp)
 8098989:	8d 95 e8 fb ff ff    	lea    -0x418(%ebp),%edx
 809898f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098993:	89 04 24             	mov    %eax,(%esp)
 8098996:	e8 ef 56 02 00       	call   80be08a <_Z13SHA256_UpdateP15SHA256_ALG_INFOPhm>
 809899b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809899e:	01 45 f0             	add    %eax,-0x10(%ebp)
 80989a1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80989a4:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 80989a7:	0f 97 c0             	seta   %al
 80989aa:	84 c0                	test   %al,%al
 80989ac:	75 91                	jne    809893f <_ZN16CNChecksumSha25620MakeChecksumFromFileEPKcPhi+0xef>
 80989ae:	8b 45 08             	mov    0x8(%ebp),%eax
 80989b1:	8b 40 08             	mov    0x8(%eax),%eax
 80989b4:	8b 55 10             	mov    0x10(%ebp),%edx
 80989b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 80989bb:	89 04 24             	mov    %eax,(%esp)
 80989be:	e8 0e 58 02 00       	call   80be1d1 <_Z12SHA256_FinalP15SHA256_ALG_INFOPh>
 80989c3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 80989c6:	89 04 24             	mov    %eax,(%esp)
 80989c9:	e8 d2 54 fe ff       	call   807dea0 <fclose@plt>
 80989ce:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80989d3:	c9                   	leave
 80989d4:	c3                   	ret
 80989d5:	90                   	nop

```

```c
// CNChecksumSha256::MakeChecksumFromFile @ 0x8098850

/* CNChecksumSha256::MakeChecksumFromFile(char const*, unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha256::MakeChecksumFromFile
          (CNChecksumSha256 *this,char *param_1,uchar *param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uchar local_41c [1024];
  FILE *local_1c;
  uint local_18;
  uint local_14;
  size_t local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_3 < iVar2) {
      uVar1 = 0x70000001;
    }
    else if (param_1 == (char *)0x0) {
      uVar1 = 0x70000003;
    }
    else {
      SHA256_Init(*(SHA256_ALG_INFO **)(this + 8));
      local_1c = fopen(param_1,"rb");
      if (local_1c == (FILE *)0x0) {
        uVar1 = 0x70000002;
      }
      else {
        fseek(local_1c,0,2);
        local_18 = ftell(local_1c);
        if ((int)local_18 < 0) {
          fclose(local_1c);
          uVar1 = 0x70000003;
        }
        else {
          fseek(local_1c,0,0);
          for (local_14 = 0; local_14 < local_18; local_14 = local_14 + local_10) {
            local_10 = local_18 - local_14;
            if (0x400 < local_10) {
              local_10 = 0x400;
            }
            fread(local_41c,local_10,1,local_1c);
            SHA256_Update(*(SHA256_ALG_INFO **)(this + 8),local_41c,local_10);
          }
          SHA256_Final(*(SHA256_ALG_INFO **)(this + 8),param_2);
          fclose(local_1c);
          uVar1 = 0x6fffffff;
        }
      }
    }
  }
  return uVar1;
}

```

---

## MakeChecksumFromMemory

```asm
// === 080987c2 CNChecksumSha256::MakeChecksumFromMemory  [0x080987c2-0x809884f] ===
 80987c2:	55                   	push   %ebp
 80987c3:	89 e5                	mov    %esp,%ebp
 80987c5:	83 ec 18             	sub    $0x18,%esp
 80987c8:	8b 45 08             	mov    0x8(%ebp),%eax
 80987cb:	8b 40 08             	mov    0x8(%eax),%eax
 80987ce:	85 c0                	test   %eax,%eax
 80987d0:	75 07                	jne    80987d9 <_ZN16CNChecksumSha25622MakeChecksumFromMemoryEPKhiPhi+0x17>
 80987d2:	b8 00 00 00 70       	mov    $0x70000000,%eax
 80987d7:	eb 74                	jmp    809884d <_ZN16CNChecksumSha25622MakeChecksumFromMemoryEPKhiPhi+0x8b>
 80987d9:	8b 45 08             	mov    0x8(%ebp),%eax
 80987dc:	8b 00                	mov    (%eax),%eax
 80987de:	83 c0 20             	add    $0x20,%eax
 80987e1:	8b 10                	mov    (%eax),%edx
 80987e3:	8b 45 08             	mov    0x8(%ebp),%eax
 80987e6:	89 04 24             	mov    %eax,(%esp)
 80987e9:	ff d2                	call   *%edx
 80987eb:	3b 45 18             	cmp    0x18(%ebp),%eax
 80987ee:	0f 9f c0             	setg   %al
 80987f1:	84 c0                	test   %al,%al
 80987f3:	74 07                	je     80987fc <_ZN16CNChecksumSha25622MakeChecksumFromMemoryEPKhiPhi+0x3a>
 80987f5:	b8 01 00 00 70       	mov    $0x70000001,%eax
 80987fa:	eb 51                	jmp    809884d <_ZN16CNChecksumSha25622MakeChecksumFromMemoryEPKhiPhi+0x8b>
 80987fc:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8098800:	7f 07                	jg     8098809 <_ZN16CNChecksumSha25622MakeChecksumFromMemoryEPKhiPhi+0x47>
 8098802:	b8 05 00 00 70       	mov    $0x70000005,%eax
 8098807:	eb 44                	jmp    809884d <_ZN16CNChecksumSha25622MakeChecksumFromMemoryEPKhiPhi+0x8b>
 8098809:	8b 45 08             	mov    0x8(%ebp),%eax
 809880c:	8b 40 08             	mov    0x8(%eax),%eax
 809880f:	89 04 24             	mov    %eax,(%esp)
 8098812:	e8 09 58 02 00       	call   80be020 <_Z11SHA256_InitP15SHA256_ALG_INFO>
 8098817:	8b 55 10             	mov    0x10(%ebp),%edx
 809881a:	8b 45 08             	mov    0x8(%ebp),%eax
 809881d:	8b 40 08             	mov    0x8(%eax),%eax
 8098820:	89 54 24 08          	mov    %edx,0x8(%esp)
 8098824:	8b 55 0c             	mov    0xc(%ebp),%edx
 8098827:	89 54 24 04          	mov    %edx,0x4(%esp)
 809882b:	89 04 24             	mov    %eax,(%esp)
 809882e:	e8 57 58 02 00       	call   80be08a <_Z13SHA256_UpdateP15SHA256_ALG_INFOPhm>
 8098833:	8b 45 08             	mov    0x8(%ebp),%eax
 8098836:	8b 40 08             	mov    0x8(%eax),%eax
 8098839:	8b 55 14             	mov    0x14(%ebp),%edx
 809883c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098840:	89 04 24             	mov    %eax,(%esp)
 8098843:	e8 89 59 02 00       	call   80be1d1 <_Z12SHA256_FinalP15SHA256_ALG_INFOPh>
 8098848:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809884d:	c9                   	leave
 809884e:	c3                   	ret
 809884f:	90                   	nop

```

```c
// CNChecksumSha256::MakeChecksumFromMemory @ 0x80987c2

/* CNChecksumSha256::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha256::MakeChecksumFromMemory
          (CNChecksumSha256 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_4 < iVar2) {
      uVar1 = 0x70000001;
    }
    else if (param_2 < 1) {
      uVar1 = 0x70000005;
    }
    else {
      SHA256_Init(*(SHA256_ALG_INFO **)(this + 8));
      SHA256_Update(*(SHA256_ALG_INFO **)(this + 8),param_1,param_2);
      SHA256_Final(*(SHA256_ALG_INFO **)(this + 8),param_3);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}

```

---

## operator=

```asm
// === 080987b0 CNChecksumSha256::operator=  [0x080987b0-0x80987b7] ===
 80987b0:	55                   	push   %ebp
 80987b1:	89 e5                	mov    %esp,%ebp
 80987b3:	8b 45 08             	mov    0x8(%ebp),%eax
 80987b6:	5d                   	pop    %ebp
 80987b7:	c3                   	ret

```

```c
// CNChecksumSha256::operator= @ 0x80987b0

/* CNChecksumSha256::TEMPNAMEPLACEHOLDERVALUE(CNChecksumSha256 const&) */

CNChecksumSha256 * __thiscall
CNChecksumSha256::operator=(CNChecksumSha256 *this,CNChecksumSha256 *param_1)

{
  return this;
}

```

---

## ~CNChecksumSha256

```asm
// === 0809871c CNChecksumSha256::~CNChecksumSha256  [0x0809871c-0x809876d] ===
 809871c:	55                   	push   %ebp
 809871d:	89 e5                	mov    %esp,%ebp
 809871f:	83 ec 18             	sub    $0x18,%esp
 8098722:	8b 45 08             	mov    0x8(%ebp),%eax
 8098725:	c7 00 68 35 b1 08    	movl   $0x8b13568,(%eax)
 809872b:	8b 45 08             	mov    0x8(%ebp),%eax
 809872e:	8b 40 08             	mov    0x8(%eax),%eax
 8098731:	85 c0                	test   %eax,%eax
 8098733:	74 18                	je     809874d <_ZN16CNChecksumSha256D1Ev+0x31>
 8098735:	8b 45 08             	mov    0x8(%ebp),%eax
 8098738:	8b 40 08             	mov    0x8(%eax),%eax
 809873b:	89 04 24             	mov    %eax,(%esp)
 809873e:	e8 ad bd 68 00       	call   87244f0 <_ZdlPv>
 8098743:	8b 45 08             	mov    0x8(%ebp),%eax
 8098746:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809874d:	8b 45 08             	mov    0x8(%ebp),%eax
 8098750:	89 04 24             	mov    %eax,(%esp)
 8098753:	e8 30 57 00 00       	call   809de88 <_ZN9IChecksumD1Ev>
 8098758:	b8 00 00 00 00       	mov    $0x0,%eax
 809875d:	84 c0                	test   %al,%al
 809875f:	74 0b                	je     809876c <_ZN16CNChecksumSha256D1Ev+0x50>
 8098761:	8b 45 08             	mov    0x8(%ebp),%eax
 8098764:	89 04 24             	mov    %eax,(%esp)
 8098767:	e8 84 bd 68 00       	call   87244f0 <_ZdlPv>
 809876c:	c9                   	leave
 809876d:	c3                   	ret

```

```c
// CNChecksumSha256::~CNChecksumSha256 @ 0x809871c

/* WARNING: Removing unreachable block (ram,0x08098761) */
/* CNChecksumSha256::~CNChecksumSha256() */

void __thiscall CNChecksumSha256::~CNChecksumSha256(CNChecksumSha256 *this)

{
  *(undefined ***)this = &PTR__CNChecksumSha256_08b13568;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  IChecksum::~IChecksum((IChecksum *)this);
  return;
}

```

---

## ~CNChecksumSha256_0809876e

```asm
// === 0809876e CNChecksumSha256::~CNChecksumSha256  [0x0809876e-0x809878b] ===
 809876e:	55                   	push   %ebp
 809876f:	89 e5                	mov    %esp,%ebp
 8098771:	83 ec 18             	sub    $0x18,%esp
 8098774:	8b 45 08             	mov    0x8(%ebp),%eax
 8098777:	89 04 24             	mov    %eax,(%esp)
 809877a:	e8 9d ff ff ff       	call   809871c <_ZN16CNChecksumSha256D1Ev>
 809877f:	8b 45 08             	mov    0x8(%ebp),%eax
 8098782:	89 04 24             	mov    %eax,(%esp)
 8098785:	e8 66 bd 68 00       	call   87244f0 <_ZdlPv>
 809878a:	c9                   	leave
 809878b:	c3                   	ret

```

```c
// CNChecksumSha256::~CNChecksumSha256 @ 0x809876e

/* CNChecksumSha256::~CNChecksumSha256() */

void __thiscall CNChecksumSha256::~CNChecksumSha256(CNChecksumSha256 *this)

{
  ~CNChecksumSha256(this);
  operator_delete(this);
  return;
}

```

