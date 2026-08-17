# CNCryptoKasumi

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoKasumi

```asm
// === 0809a4b0 CNCryptoKasumi::CNCryptoKasumi  [0x0809a4b0-0x809a54d] ===
 809a4b0:	55                   	push   %ebp
 809a4b1:	89 e5                	mov    %esp,%ebp
 809a4b3:	56                   	push   %esi
 809a4b4:	53                   	push   %ebx
 809a4b5:	83 ec 30             	sub    $0x30,%esp
 809a4b8:	8b 45 08             	mov    0x8(%ebp),%eax
 809a4bb:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 809a4c2:	00 
 809a4c3:	89 04 24             	mov    %eax,(%esp)
 809a4c6:	e8 25 3a 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809a4cb:	8b 45 08             	mov    0x8(%ebp),%eax
 809a4ce:	c7 00 a8 37 b1 08    	movl   $0x8b137a8,(%eax)
 809a4d4:	8b 45 08             	mov    0x8(%ebp),%eax
 809a4d7:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809a4de:	c7 04 24 00 01 00 00 	movl   $0x100,(%esp)
 809a4e5:	e8 66 9f 68 00       	call   8724450 <_Znwj>
 809a4ea:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809a4ed:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809a4f1:	74 53                	je     809a546 <_ZN14CNCryptoKasumiC1Ev+0x96>
 809a4f3:	8b 45 08             	mov    0x8(%ebp),%eax
 809a4f6:	8b 55 f4             	mov    -0xc(%ebp),%edx
 809a4f9:	89 50 08             	mov    %edx,0x8(%eax)
 809a4fc:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 809a503:	00 
 809a504:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 809a507:	89 04 24             	mov    %eax,(%esp)
 809a50a:	e8 a3 41 00 00       	call   809e6b2 <_Z17GenerateRandomKeyPhi>
 809a50f:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 809a516:	00 
 809a517:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 809a51a:	89 44 24 04          	mov    %eax,0x4(%esp)
 809a51e:	8b 45 08             	mov    0x8(%ebp),%eax
 809a521:	89 04 24             	mov    %eax,(%esp)
 809a524:	e8 db 00 00 00       	call   809a604 <_ZN14CNCryptoKasumi10InitializeEPKhi>
 809a529:	eb 1b                	jmp    809a546 <_ZN14CNCryptoKasumiC1Ev+0x96>
 809a52b:	89 d3                	mov    %edx,%ebx
 809a52d:	89 c6                	mov    %eax,%esi
 809a52f:	8b 45 08             	mov    0x8(%ebp),%eax
 809a532:	89 04 24             	mov    %eax,(%esp)
 809a535:	e8 ce 39 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809a53a:	89 f0                	mov    %esi,%eax
 809a53c:	89 da                	mov    %ebx,%edx
 809a53e:	89 04 24             	mov    %eax,(%esp)
 809a541:	e8 0a 92 a4 00       	call   8ae3750 <_Unwind_Resume>
 809a546:	83 c4 30             	add    $0x30,%esp
 809a549:	5b                   	pop    %ebx
 809a54a:	5e                   	pop    %esi
 809a54b:	5d                   	pop    %ebp
 809a54c:	c3                   	ret
 809a54d:	90                   	nop

```

```c
// CNCryptoKasumi::CNCryptoKasumi @ 0x809a4b0

/* CNCryptoKasumi::CNCryptoKasumi() */

void __thiscall CNCryptoKasumi::CNCryptoKasumi(CNCryptoKasumi *this)

{
  uchar local_20 [16];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,6);
  *(undefined ***)this = &PTR__CNCryptoKasumi_08b137a8;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809a4e5 to 0809a528 has its CatchHandler @ 0809a52b */
  local_10 = operator_new(0x100);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_20,0x10);
    Initialize(this,local_20,0x10);
  }
  return;
}

```

---

## CNCryptoKasumi_0809a5c0

```asm
// === 0809a5c0 CNCryptoKasumi::CNCryptoKasumi  [0x0809a5c0-0x809a5e3] ===
 809a5c0:	55                   	push   %ebp
 809a5c1:	89 e5                	mov    %esp,%ebp
 809a5c3:	83 ec 18             	sub    $0x18,%esp
 809a5c6:	8b 45 08             	mov    0x8(%ebp),%eax
 809a5c9:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 809a5d0:	00 
 809a5d1:	89 04 24             	mov    %eax,(%esp)
 809a5d4:	e8 17 39 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809a5d9:	8b 45 08             	mov    0x8(%ebp),%eax
 809a5dc:	c7 00 a8 37 b1 08    	movl   $0x8b137a8,(%eax)
 809a5e2:	c9                   	leave
 809a5e3:	c3                   	ret

```

```c
// CNCryptoKasumi::CNCryptoKasumi @ 0x809a5c0

/* CNCryptoKasumi::CNCryptoKasumi(CNCryptoKasumi const&) */

void __thiscall CNCryptoKasumi::CNCryptoKasumi(CNCryptoKasumi *this,CNCryptoKasumi *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,6);
  *(undefined ***)this = &PTR__CNCryptoKasumi_08b137a8;
  return;
}

```

---

## Decrypt

```asm
// === 0809a784 CNCryptoKasumi::Decrypt  [0x0809a784-0x809a85b] ===
 809a784:	55                   	push   %ebp
 809a785:	89 e5                	mov    %esp,%ebp
 809a787:	83 ec 38             	sub    $0x38,%esp
 809a78a:	8b 45 08             	mov    0x8(%ebp),%eax
 809a78d:	8b 40 08             	mov    0x8(%eax),%eax
 809a790:	85 c0                	test   %eax,%eax
 809a792:	75 0a                	jne    809a79e <_ZN14CNCryptoKasumi7DecryptEPhi+0x1a>
 809a794:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809a799:	e9 bb 00 00 00       	jmp    809a859 <_ZN14CNCryptoKasumi7DecryptEPhi+0xd5>
 809a79e:	8b 45 08             	mov    0x8(%ebp),%eax
 809a7a1:	8b 00                	mov    (%eax),%eax
 809a7a3:	83 c0 24             	add    $0x24,%eax
 809a7a6:	8b 10                	mov    (%eax),%edx
 809a7a8:	8b 45 08             	mov    0x8(%ebp),%eax
 809a7ab:	89 04 24             	mov    %eax,(%esp)
 809a7ae:	ff d2                	call   *%edx
 809a7b0:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809a7b3:	8b 55 10             	mov    0x10(%ebp),%edx
 809a7b6:	89 d0                	mov    %edx,%eax
 809a7b8:	c1 fa 1f             	sar    $0x1f,%edx
 809a7bb:	f7 7d e0             	idivl  -0x20(%ebp)
 809a7be:	89 d0                	mov    %edx,%eax
 809a7c0:	85 c0                	test   %eax,%eax
 809a7c2:	0f 95 c0             	setne  %al
 809a7c5:	84 c0                	test   %al,%al
 809a7c7:	74 0a                	je     809a7d3 <_ZN14CNCryptoKasumi7DecryptEPhi+0x4f>
 809a7c9:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809a7ce:	e9 86 00 00 00       	jmp    809a859 <_ZN14CNCryptoKasumi7DecryptEPhi+0xd5>
 809a7d3:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809a7d7:	7f 07                	jg     809a7e0 <_ZN14CNCryptoKasumi7DecryptEPhi+0x5c>
 809a7d9:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809a7de:	eb 79                	jmp    809a859 <_ZN14CNCryptoKasumi7DecryptEPhi+0xd5>
 809a7e0:	8b 45 08             	mov    0x8(%ebp),%eax
 809a7e3:	8b 40 08             	mov    0x8(%eax),%eax
 809a7e6:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809a7e9:	8b 45 08             	mov    0x8(%ebp),%eax
 809a7ec:	8b 00                	mov    (%eax),%eax
 809a7ee:	83 c0 24             	add    $0x24,%eax
 809a7f1:	8b 10                	mov    (%eax),%edx
 809a7f3:	8b 45 08             	mov    0x8(%ebp),%eax
 809a7f6:	89 04 24             	mov    %eax,(%esp)
 809a7f9:	ff d2                	call   *%edx
 809a7fb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809a7fe:	8b 45 10             	mov    0x10(%ebp),%eax
 809a801:	89 c2                	mov    %eax,%edx
 809a803:	c1 fa 1f             	sar    $0x1f,%edx
 809a806:	f7 7d e4             	idivl  -0x1c(%ebp)
 809a809:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809a80c:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809a813:	eb 32                	jmp    809a847 <_ZN14CNCryptoKasumi7DecryptEPhi+0xc3>
 809a815:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809a818:	89 44 24 08          	mov    %eax,0x8(%esp)
 809a81c:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a81f:	89 44 24 04          	mov    %eax,0x4(%esp)
 809a823:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a826:	89 04 24             	mov    %eax,(%esp)
 809a829:	e8 5e 70 01 00       	call   80b188c <_Z18kasumi_ecb_decryptPKhPhP13symmetric_key>
 809a82e:	8b 45 08             	mov    0x8(%ebp),%eax
 809a831:	8b 00                	mov    (%eax),%eax
 809a833:	83 c0 24             	add    $0x24,%eax
 809a836:	8b 10                	mov    (%eax),%edx
 809a838:	8b 45 08             	mov    0x8(%ebp),%eax
 809a83b:	89 04 24             	mov    %eax,(%esp)
 809a83e:	ff d2                	call   *%edx
 809a840:	01 45 0c             	add    %eax,0xc(%ebp)
 809a843:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809a847:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809a84a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809a84d:	0f 9c c0             	setl   %al
 809a850:	84 c0                	test   %al,%al
 809a852:	75 c1                	jne    809a815 <_ZN14CNCryptoKasumi7DecryptEPhi+0x91>
 809a854:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809a859:	c9                   	leave
 809a85a:	c3                   	ret
 809a85b:	90                   	nop

```

```c
// CNCryptoKasumi::Decrypt @ 0x809a784

/* CNCryptoKasumi::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoKasumi::Decrypt(CNCryptoKasumi *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_2 < 1) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          kasumi_ecb_decrypt(param_1,param_1,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## Decrypt_0809a94e

```asm
// === 0809a94e CNCryptoKasumi::Decrypt  [0x0809a94e-0x809aa3f] ===
 809a94e:	55                   	push   %ebp
 809a94f:	89 e5                	mov    %esp,%ebp
 809a951:	83 ec 38             	sub    $0x38,%esp
 809a954:	8b 45 08             	mov    0x8(%ebp),%eax
 809a957:	8b 40 08             	mov    0x8(%eax),%eax
 809a95a:	85 c0                	test   %eax,%eax
 809a95c:	75 0a                	jne    809a968 <_ZN14CNCryptoKasumi7DecryptEPKhiPhi+0x1a>
 809a95e:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809a963:	e9 d5 00 00 00       	jmp    809aa3d <_ZN14CNCryptoKasumi7DecryptEPKhiPhi+0xef>
 809a968:	8b 45 08             	mov    0x8(%ebp),%eax
 809a96b:	8b 00                	mov    (%eax),%eax
 809a96d:	83 c0 24             	add    $0x24,%eax
 809a970:	8b 10                	mov    (%eax),%edx
 809a972:	8b 45 08             	mov    0x8(%ebp),%eax
 809a975:	89 04 24             	mov    %eax,(%esp)
 809a978:	ff d2                	call   *%edx
 809a97a:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809a97d:	8b 55 10             	mov    0x10(%ebp),%edx
 809a980:	89 d0                	mov    %edx,%eax
 809a982:	c1 fa 1f             	sar    $0x1f,%edx
 809a985:	f7 7d e0             	idivl  -0x20(%ebp)
 809a988:	89 d0                	mov    %edx,%eax
 809a98a:	85 c0                	test   %eax,%eax
 809a98c:	0f 95 c0             	setne  %al
 809a98f:	84 c0                	test   %al,%al
 809a991:	74 0a                	je     809a99d <_ZN14CNCryptoKasumi7DecryptEPKhiPhi+0x4f>
 809a993:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809a998:	e9 a0 00 00 00       	jmp    809aa3d <_ZN14CNCryptoKasumi7DecryptEPKhiPhi+0xef>
 809a99d:	8b 45 10             	mov    0x10(%ebp),%eax
 809a9a0:	3b 45 18             	cmp    0x18(%ebp),%eax
 809a9a3:	7e 0a                	jle    809a9af <_ZN14CNCryptoKasumi7DecryptEPKhiPhi+0x61>
 809a9a5:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809a9aa:	e9 8e 00 00 00       	jmp    809aa3d <_ZN14CNCryptoKasumi7DecryptEPKhiPhi+0xef>
 809a9af:	8b 45 08             	mov    0x8(%ebp),%eax
 809a9b2:	8b 40 08             	mov    0x8(%eax),%eax
 809a9b5:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809a9b8:	8b 45 08             	mov    0x8(%ebp),%eax
 809a9bb:	8b 00                	mov    (%eax),%eax
 809a9bd:	83 c0 24             	add    $0x24,%eax
 809a9c0:	8b 10                	mov    (%eax),%edx
 809a9c2:	8b 45 08             	mov    0x8(%ebp),%eax
 809a9c5:	89 04 24             	mov    %eax,(%esp)
 809a9c8:	ff d2                	call   *%edx
 809a9ca:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809a9cd:	8b 45 10             	mov    0x10(%ebp),%eax
 809a9d0:	89 c2                	mov    %eax,%edx
 809a9d2:	c1 fa 1f             	sar    $0x1f,%edx
 809a9d5:	f7 7d e4             	idivl  -0x1c(%ebp)
 809a9d8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809a9db:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809a9e2:	eb 47                	jmp    809aa2b <_ZN14CNCryptoKasumi7DecryptEPKhiPhi+0xdd>
 809a9e4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809a9e7:	89 44 24 08          	mov    %eax,0x8(%esp)
 809a9eb:	8b 45 14             	mov    0x14(%ebp),%eax
 809a9ee:	89 44 24 04          	mov    %eax,0x4(%esp)
 809a9f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a9f5:	89 04 24             	mov    %eax,(%esp)
 809a9f8:	e8 8f 6e 01 00       	call   80b188c <_Z18kasumi_ecb_decryptPKhPhP13symmetric_key>
 809a9fd:	8b 45 08             	mov    0x8(%ebp),%eax
 809aa00:	8b 00                	mov    (%eax),%eax
 809aa02:	83 c0 24             	add    $0x24,%eax
 809aa05:	8b 10                	mov    (%eax),%edx
 809aa07:	8b 45 08             	mov    0x8(%ebp),%eax
 809aa0a:	89 04 24             	mov    %eax,(%esp)
 809aa0d:	ff d2                	call   *%edx
 809aa0f:	01 45 0c             	add    %eax,0xc(%ebp)
 809aa12:	8b 45 08             	mov    0x8(%ebp),%eax
 809aa15:	8b 00                	mov    (%eax),%eax
 809aa17:	83 c0 24             	add    $0x24,%eax
 809aa1a:	8b 10                	mov    (%eax),%edx
 809aa1c:	8b 45 08             	mov    0x8(%ebp),%eax
 809aa1f:	89 04 24             	mov    %eax,(%esp)
 809aa22:	ff d2                	call   *%edx
 809aa24:	01 45 14             	add    %eax,0x14(%ebp)
 809aa27:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809aa2b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809aa2e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809aa31:	0f 9c c0             	setl   %al
 809aa34:	84 c0                	test   %al,%al
 809aa36:	75 ac                	jne    809a9e4 <_ZN14CNCryptoKasumi7DecryptEPKhiPhi+0x96>
 809aa38:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809aa3d:	c9                   	leave
 809aa3e:	c3                   	ret
 809aa3f:	90                   	nop

```

```c
// CNCryptoKasumi::Decrypt @ 0x809a94e

/* CNCryptoKasumi::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoKasumi::Decrypt(CNCryptoKasumi *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          kasumi_ecb_decrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x7000000a;
    }
  }
  return uVar2;
}

```

---

## Encrypt

```asm
// === 0809a6ac CNCryptoKasumi::Encrypt  [0x0809a6ac-0x809a783] ===
 809a6ac:	55                   	push   %ebp
 809a6ad:	89 e5                	mov    %esp,%ebp
 809a6af:	83 ec 38             	sub    $0x38,%esp
 809a6b2:	8b 45 08             	mov    0x8(%ebp),%eax
 809a6b5:	8b 40 08             	mov    0x8(%eax),%eax
 809a6b8:	85 c0                	test   %eax,%eax
 809a6ba:	75 0a                	jne    809a6c6 <_ZN14CNCryptoKasumi7EncryptEPhi+0x1a>
 809a6bc:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809a6c1:	e9 bb 00 00 00       	jmp    809a781 <_ZN14CNCryptoKasumi7EncryptEPhi+0xd5>
 809a6c6:	8b 45 08             	mov    0x8(%ebp),%eax
 809a6c9:	8b 00                	mov    (%eax),%eax
 809a6cb:	83 c0 24             	add    $0x24,%eax
 809a6ce:	8b 10                	mov    (%eax),%edx
 809a6d0:	8b 45 08             	mov    0x8(%ebp),%eax
 809a6d3:	89 04 24             	mov    %eax,(%esp)
 809a6d6:	ff d2                	call   *%edx
 809a6d8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809a6db:	8b 55 10             	mov    0x10(%ebp),%edx
 809a6de:	89 d0                	mov    %edx,%eax
 809a6e0:	c1 fa 1f             	sar    $0x1f,%edx
 809a6e3:	f7 7d e0             	idivl  -0x20(%ebp)
 809a6e6:	89 d0                	mov    %edx,%eax
 809a6e8:	85 c0                	test   %eax,%eax
 809a6ea:	0f 95 c0             	setne  %al
 809a6ed:	84 c0                	test   %al,%al
 809a6ef:	74 0a                	je     809a6fb <_ZN14CNCryptoKasumi7EncryptEPhi+0x4f>
 809a6f1:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809a6f6:	e9 86 00 00 00       	jmp    809a781 <_ZN14CNCryptoKasumi7EncryptEPhi+0xd5>
 809a6fb:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809a6ff:	7f 07                	jg     809a708 <_ZN14CNCryptoKasumi7EncryptEPhi+0x5c>
 809a701:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809a706:	eb 79                	jmp    809a781 <_ZN14CNCryptoKasumi7EncryptEPhi+0xd5>
 809a708:	8b 45 08             	mov    0x8(%ebp),%eax
 809a70b:	8b 40 08             	mov    0x8(%eax),%eax
 809a70e:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809a711:	8b 45 08             	mov    0x8(%ebp),%eax
 809a714:	8b 00                	mov    (%eax),%eax
 809a716:	83 c0 24             	add    $0x24,%eax
 809a719:	8b 10                	mov    (%eax),%edx
 809a71b:	8b 45 08             	mov    0x8(%ebp),%eax
 809a71e:	89 04 24             	mov    %eax,(%esp)
 809a721:	ff d2                	call   *%edx
 809a723:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809a726:	8b 45 10             	mov    0x10(%ebp),%eax
 809a729:	89 c2                	mov    %eax,%edx
 809a72b:	c1 fa 1f             	sar    $0x1f,%edx
 809a72e:	f7 7d e4             	idivl  -0x1c(%ebp)
 809a731:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809a734:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809a73b:	eb 32                	jmp    809a76f <_ZN14CNCryptoKasumi7EncryptEPhi+0xc3>
 809a73d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809a740:	89 44 24 08          	mov    %eax,0x8(%esp)
 809a744:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a747:	89 44 24 04          	mov    %eax,0x4(%esp)
 809a74b:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a74e:	89 04 24             	mov    %eax,(%esp)
 809a751:	e8 9c 6f 01 00       	call   80b16f2 <_Z18kasumi_ecb_encryptPKhPhP13symmetric_key>
 809a756:	8b 45 08             	mov    0x8(%ebp),%eax
 809a759:	8b 00                	mov    (%eax),%eax
 809a75b:	83 c0 24             	add    $0x24,%eax
 809a75e:	8b 10                	mov    (%eax),%edx
 809a760:	8b 45 08             	mov    0x8(%ebp),%eax
 809a763:	89 04 24             	mov    %eax,(%esp)
 809a766:	ff d2                	call   *%edx
 809a768:	01 45 0c             	add    %eax,0xc(%ebp)
 809a76b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809a76f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809a772:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809a775:	0f 9c c0             	setl   %al
 809a778:	84 c0                	test   %al,%al
 809a77a:	75 c1                	jne    809a73d <_ZN14CNCryptoKasumi7EncryptEPhi+0x91>
 809a77c:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809a781:	c9                   	leave
 809a782:	c3                   	ret
 809a783:	90                   	nop

```

```c
// CNCryptoKasumi::Encrypt @ 0x809a6ac

/* CNCryptoKasumi::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoKasumi::Encrypt(CNCryptoKasumi *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_2 < 1) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          kasumi_ecb_encrypt(param_1,param_1,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## Encrypt_0809a85c

```asm
// === 0809a85c CNCryptoKasumi::Encrypt  [0x0809a85c-0x809a94d] ===
 809a85c:	55                   	push   %ebp
 809a85d:	89 e5                	mov    %esp,%ebp
 809a85f:	83 ec 38             	sub    $0x38,%esp
 809a862:	8b 45 08             	mov    0x8(%ebp),%eax
 809a865:	8b 40 08             	mov    0x8(%eax),%eax
 809a868:	85 c0                	test   %eax,%eax
 809a86a:	75 0a                	jne    809a876 <_ZN14CNCryptoKasumi7EncryptEPKhiPhi+0x1a>
 809a86c:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809a871:	e9 d5 00 00 00       	jmp    809a94b <_ZN14CNCryptoKasumi7EncryptEPKhiPhi+0xef>
 809a876:	8b 45 08             	mov    0x8(%ebp),%eax
 809a879:	8b 00                	mov    (%eax),%eax
 809a87b:	83 c0 24             	add    $0x24,%eax
 809a87e:	8b 10                	mov    (%eax),%edx
 809a880:	8b 45 08             	mov    0x8(%ebp),%eax
 809a883:	89 04 24             	mov    %eax,(%esp)
 809a886:	ff d2                	call   *%edx
 809a888:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809a88b:	8b 55 10             	mov    0x10(%ebp),%edx
 809a88e:	89 d0                	mov    %edx,%eax
 809a890:	c1 fa 1f             	sar    $0x1f,%edx
 809a893:	f7 7d e0             	idivl  -0x20(%ebp)
 809a896:	89 d0                	mov    %edx,%eax
 809a898:	85 c0                	test   %eax,%eax
 809a89a:	0f 95 c0             	setne  %al
 809a89d:	84 c0                	test   %al,%al
 809a89f:	74 0a                	je     809a8ab <_ZN14CNCryptoKasumi7EncryptEPKhiPhi+0x4f>
 809a8a1:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809a8a6:	e9 a0 00 00 00       	jmp    809a94b <_ZN14CNCryptoKasumi7EncryptEPKhiPhi+0xef>
 809a8ab:	8b 45 10             	mov    0x10(%ebp),%eax
 809a8ae:	3b 45 18             	cmp    0x18(%ebp),%eax
 809a8b1:	7e 0a                	jle    809a8bd <_ZN14CNCryptoKasumi7EncryptEPKhiPhi+0x61>
 809a8b3:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809a8b8:	e9 8e 00 00 00       	jmp    809a94b <_ZN14CNCryptoKasumi7EncryptEPKhiPhi+0xef>
 809a8bd:	8b 45 08             	mov    0x8(%ebp),%eax
 809a8c0:	8b 40 08             	mov    0x8(%eax),%eax
 809a8c3:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809a8c6:	8b 45 08             	mov    0x8(%ebp),%eax
 809a8c9:	8b 00                	mov    (%eax),%eax
 809a8cb:	83 c0 24             	add    $0x24,%eax
 809a8ce:	8b 10                	mov    (%eax),%edx
 809a8d0:	8b 45 08             	mov    0x8(%ebp),%eax
 809a8d3:	89 04 24             	mov    %eax,(%esp)
 809a8d6:	ff d2                	call   *%edx
 809a8d8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809a8db:	8b 45 10             	mov    0x10(%ebp),%eax
 809a8de:	89 c2                	mov    %eax,%edx
 809a8e0:	c1 fa 1f             	sar    $0x1f,%edx
 809a8e3:	f7 7d e4             	idivl  -0x1c(%ebp)
 809a8e6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809a8e9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809a8f0:	eb 47                	jmp    809a939 <_ZN14CNCryptoKasumi7EncryptEPKhiPhi+0xdd>
 809a8f2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809a8f5:	89 44 24 08          	mov    %eax,0x8(%esp)
 809a8f9:	8b 45 14             	mov    0x14(%ebp),%eax
 809a8fc:	89 44 24 04          	mov    %eax,0x4(%esp)
 809a900:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a903:	89 04 24             	mov    %eax,(%esp)
 809a906:	e8 e7 6d 01 00       	call   80b16f2 <_Z18kasumi_ecb_encryptPKhPhP13symmetric_key>
 809a90b:	8b 45 08             	mov    0x8(%ebp),%eax
 809a90e:	8b 00                	mov    (%eax),%eax
 809a910:	83 c0 24             	add    $0x24,%eax
 809a913:	8b 10                	mov    (%eax),%edx
 809a915:	8b 45 08             	mov    0x8(%ebp),%eax
 809a918:	89 04 24             	mov    %eax,(%esp)
 809a91b:	ff d2                	call   *%edx
 809a91d:	01 45 0c             	add    %eax,0xc(%ebp)
 809a920:	8b 45 08             	mov    0x8(%ebp),%eax
 809a923:	8b 00                	mov    (%eax),%eax
 809a925:	83 c0 24             	add    $0x24,%eax
 809a928:	8b 10                	mov    (%eax),%edx
 809a92a:	8b 45 08             	mov    0x8(%ebp),%eax
 809a92d:	89 04 24             	mov    %eax,(%esp)
 809a930:	ff d2                	call   *%edx
 809a932:	01 45 14             	add    %eax,0x14(%ebp)
 809a935:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809a939:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809a93c:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809a93f:	0f 9c c0             	setl   %al
 809a942:	84 c0                	test   %al,%al
 809a944:	75 ac                	jne    809a8f2 <_ZN14CNCryptoKasumi7EncryptEPKhiPhi+0x96>
 809a946:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809a94b:	c9                   	leave
 809a94c:	c3                   	ret
 809a94d:	90                   	nop

```

```c
// CNCryptoKasumi::Encrypt @ 0x809a85c

/* CNCryptoKasumi::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoKasumi::Encrypt(CNCryptoKasumi *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar3 == 0) {
      if (param_4 < param_2) {
        uVar2 = 0x7000000a;
      }
      else {
        psVar1 = *(symmetric_key **)(this + 8);
        iVar3 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar3; local_10 = local_10 + 1) {
          kasumi_ecb_encrypt(param_1,param_3,psVar1);
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar4;
          iVar4 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar4;
        }
        uVar2 = 0x6fffffff;
      }
    }
    else {
      uVar2 = 0x70000006;
    }
  }
  return uVar2;
}

```

---

## GetBlockSize

```asm
// === 0809aa40 CNCryptoKasumi::GetBlockSize  [0x0809aa40-0x809aa49] ===
 809aa40:	55                   	push   %ebp
 809aa41:	89 e5                	mov    %esp,%ebp
 809aa43:	b8 08 00 00 00       	mov    $0x8,%eax
 809aa48:	5d                   	pop    %ebp
 809aa49:	c3                   	ret

```

```c
// CNCryptoKasumi::GetBlockSize @ 0x809aa40

/* CNCryptoKasumi::GetBlockSize() const */

undefined4 CNCryptoKasumi::GetBlockSize(void)

{
  return 8;
}

```

---

## GetKeySize

```asm
// === 0809aa4a CNCryptoKasumi::GetKeySize  [0x0809aa4a-0x809aa53] ===
 809aa4a:	55                   	push   %ebp
 809aa4b:	89 e5                	mov    %esp,%ebp
 809aa4d:	b8 10 00 00 00       	mov    $0x10,%eax
 809aa52:	5d                   	pop    %ebp
 809aa53:	c3                   	ret

```

```c
// CNCryptoKasumi::GetKeySize @ 0x809aa4a

/* CNCryptoKasumi::GetKeySize() const */

undefined4 CNCryptoKasumi::GetKeySize(void)

{
  return 0x10;
}

```

---

## Initialize

```asm
// === 0809a604 CNCryptoKasumi::Initialize  [0x0809a604-0x809a6ab] ===
 809a604:	55                   	push   %ebp
 809a605:	89 e5                	mov    %esp,%ebp
 809a607:	83 ec 28             	sub    $0x28,%esp
 809a60a:	8b 45 08             	mov    0x8(%ebp),%eax
 809a60d:	8b 40 08             	mov    0x8(%eax),%eax
 809a610:	85 c0                	test   %eax,%eax
 809a612:	75 0a                	jne    809a61e <_ZN14CNCryptoKasumi10InitializeEPKhi+0x1a>
 809a614:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809a619:	e9 8b 00 00 00       	jmp    809a6a9 <_ZN14CNCryptoKasumi10InitializeEPKhi+0xa5>
 809a61e:	8b 45 08             	mov    0x8(%ebp),%eax
 809a621:	8b 00                	mov    (%eax),%eax
 809a623:	83 c0 20             	add    $0x20,%eax
 809a626:	8b 10                	mov    (%eax),%edx
 809a628:	8b 45 08             	mov    0x8(%ebp),%eax
 809a62b:	89 04 24             	mov    %eax,(%esp)
 809a62e:	ff d2                	call   *%edx
 809a630:	3b 45 10             	cmp    0x10(%ebp),%eax
 809a633:	0f 9f c0             	setg   %al
 809a636:	84 c0                	test   %al,%al
 809a638:	74 07                	je     809a641 <_ZN14CNCryptoKasumi10InitializeEPKhi+0x3d>
 809a63a:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809a63f:	eb 68                	jmp    809a6a9 <_ZN14CNCryptoKasumi10InitializeEPKhi+0xa5>
 809a641:	8b 45 08             	mov    0x8(%ebp),%eax
 809a644:	8b 40 08             	mov    0x8(%eax),%eax
 809a647:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809a64a:	8b 45 08             	mov    0x8(%ebp),%eax
 809a64d:	8b 00                	mov    (%eax),%eax
 809a64f:	83 c0 20             	add    $0x20,%eax
 809a652:	8b 10                	mov    (%eax),%edx
 809a654:	8b 45 08             	mov    0x8(%ebp),%eax
 809a657:	89 04 24             	mov    %eax,(%esp)
 809a65a:	ff d2                	call   *%edx
 809a65c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 809a65f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 809a663:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 809a66a:	00 
 809a66b:	89 44 24 04          	mov    %eax,0x4(%esp)
 809a66f:	8b 45 0c             	mov    0xc(%ebp),%eax
 809a672:	89 04 24             	mov    %eax,(%esp)
 809a675:	e8 ad 73 01 00       	call   80b1a27 <_Z12kasumi_setupPKhiiP13symmetric_key>
 809a67a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809a67d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809a681:	75 07                	jne    809a68a <_ZN14CNCryptoKasumi10InitializeEPKhi+0x86>
 809a683:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809a688:	eb 1f                	jmp    809a6a9 <_ZN14CNCryptoKasumi10InitializeEPKhi+0xa5>
 809a68a:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 809a68e:	75 07                	jne    809a697 <_ZN14CNCryptoKasumi10InitializeEPKhi+0x93>
 809a690:	b8 02 00 00 70       	mov    $0x70000002,%eax
 809a695:	eb 12                	jmp    809a6a9 <_ZN14CNCryptoKasumi10InitializeEPKhi+0xa5>
 809a697:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 809a69b:	75 07                	jne    809a6a4 <_ZN14CNCryptoKasumi10InitializeEPKhi+0xa0>
 809a69d:	b8 1a 00 00 70       	mov    $0x7000001a,%eax
 809a6a2:	eb 05                	jmp    809a6a9 <_ZN14CNCryptoKasumi10InitializeEPKhi+0xa5>
 809a6a4:	b8 00 00 00 70       	mov    $0x70000000,%eax
 809a6a9:	c9                   	leave
 809a6aa:	c3                   	ret
 809a6ab:	90                   	nop

```

```c
// CNCryptoKasumi::Initialize @ 0x809a604

/* CNCryptoKasumi::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoKasumi::Initialize(CNCryptoKasumi *this,uchar *param_1,int param_2)

{
  symmetric_key *psVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(int *)(this + 8) == 0) {
    uVar2 = 0x7000000c;
  }
  else {
    iVar3 = (**(code **)(*(int *)this + 0x20))(this);
    if (param_2 < iVar3) {
      uVar2 = 0x7000000a;
    }
    else {
      psVar1 = *(symmetric_key **)(this + 8);
      iVar3 = (**(code **)(*(int *)this + 0x20))(this);
      iVar3 = kasumi_setup(param_1,iVar3,8,psVar1);
      if (iVar3 == 0) {
        uVar2 = 0x6fffffff;
      }
      else if (iVar3 == 3) {
        uVar2 = 0x70000002;
      }
      else if (iVar3 == 4) {
        uVar2 = 0x7000001a;
      }
      else {
        uVar2 = 0x70000000;
      }
    }
  }
  return uVar2;
}

```

---

## SetMode

```asm
// === 0809a5ec CNCryptoKasumi::SetMode  [0x0809a5ec-0x809a603] ===
 809a5ec:	55                   	push   %ebp
 809a5ed:	89 e5                	mov    %esp,%ebp
 809a5ef:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 809a5f3:	75 07                	jne    809a5fc <_ZN14CNCryptoKasumi7SetModeE16CRYPTO_MODE_TYPE+0x10>
 809a5f5:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809a5fa:	eb 05                	jmp    809a601 <_ZN14CNCryptoKasumi7SetModeE16CRYPTO_MODE_TYPE+0x15>
 809a5fc:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809a601:	5d                   	pop    %ebp
 809a602:	c3                   	ret
 809a603:	90                   	nop

```

```c
// CNCryptoKasumi::SetMode @ 0x809a5ec

/* CNCryptoKasumi::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoKasumi::SetMode(undefined4 this,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000017;
  }
  return uVar1;
}

```

---

## operator=

```asm
// === 0809a5e4 CNCryptoKasumi::operator=  [0x0809a5e4-0x809a5eb] ===
 809a5e4:	55                   	push   %ebp
 809a5e5:	89 e5                	mov    %esp,%ebp
 809a5e7:	8b 45 08             	mov    0x8(%ebp),%eax
 809a5ea:	5d                   	pop    %ebp
 809a5eb:	c3                   	ret

```

```c
// CNCryptoKasumi::operator= @ 0x809a5e4

/* CNCryptoKasumi::TEMPNAMEPLACEHOLDERVALUE(CNCryptoKasumi const&) */

CNCryptoKasumi * __thiscall CNCryptoKasumi::operator=(CNCryptoKasumi *this,CNCryptoKasumi *param_1)

{
  return this;
}

```

---

## ~CNCryptoKasumi

```asm
// === 0809a54e CNCryptoKasumi::~CNCryptoKasumi  [0x0809a54e-0x809a5a1] ===
 809a54e:	55                   	push   %ebp
 809a54f:	89 e5                	mov    %esp,%ebp
 809a551:	83 ec 28             	sub    $0x28,%esp
 809a554:	8b 45 08             	mov    0x8(%ebp),%eax
 809a557:	c7 00 a8 37 b1 08    	movl   $0x8b137a8,(%eax)
 809a55d:	8b 45 08             	mov    0x8(%ebp),%eax
 809a560:	8b 40 08             	mov    0x8(%eax),%eax
 809a563:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809a566:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809a56a:	74 15                	je     809a581 <_ZN14CNCryptoKasumiD1Ev+0x33>
 809a56c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809a56f:	89 04 24             	mov    %eax,(%esp)
 809a572:	e8 79 9f 68 00       	call   87244f0 <_ZdlPv>
 809a577:	8b 45 08             	mov    0x8(%ebp),%eax
 809a57a:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809a581:	8b 45 08             	mov    0x8(%ebp),%eax
 809a584:	89 04 24             	mov    %eax,(%esp)
 809a587:	e8 7c 39 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809a58c:	b8 00 00 00 00       	mov    $0x0,%eax
 809a591:	84 c0                	test   %al,%al
 809a593:	74 0b                	je     809a5a0 <_ZN14CNCryptoKasumiD1Ev+0x52>
 809a595:	8b 45 08             	mov    0x8(%ebp),%eax
 809a598:	89 04 24             	mov    %eax,(%esp)
 809a59b:	e8 50 9f 68 00       	call   87244f0 <_ZdlPv>
 809a5a0:	c9                   	leave
 809a5a1:	c3                   	ret

```

```c
// CNCryptoKasumi::~CNCryptoKasumi @ 0x809a54e

/* WARNING: Removing unreachable block (ram,0x0809a595) */
/* CNCryptoKasumi::~CNCryptoKasumi() */

void __thiscall CNCryptoKasumi::~CNCryptoKasumi(CNCryptoKasumi *this)

{
  *(undefined ***)this = &PTR__CNCryptoKasumi_08b137a8;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoKasumi_0809a5a2

```asm
// === 0809a5a2 CNCryptoKasumi::~CNCryptoKasumi  [0x0809a5a2-0x809a5bf] ===
 809a5a2:	55                   	push   %ebp
 809a5a3:	89 e5                	mov    %esp,%ebp
 809a5a5:	83 ec 18             	sub    $0x18,%esp
 809a5a8:	8b 45 08             	mov    0x8(%ebp),%eax
 809a5ab:	89 04 24             	mov    %eax,(%esp)
 809a5ae:	e8 9b ff ff ff       	call   809a54e <_ZN14CNCryptoKasumiD1Ev>
 809a5b3:	8b 45 08             	mov    0x8(%ebp),%eax
 809a5b6:	89 04 24             	mov    %eax,(%esp)
 809a5b9:	e8 32 9f 68 00       	call   87244f0 <_ZdlPv>
 809a5be:	c9                   	leave
 809a5bf:	c3                   	ret

```

```c
// CNCryptoKasumi::~CNCryptoKasumi @ 0x809a5a2

/* CNCryptoKasumi::~CNCryptoKasumi() */

void __thiscall CNCryptoKasumi::~CNCryptoKasumi(CNCryptoKasumi *this)

{
  ~CNCryptoKasumi(this);
  operator_delete(this);
  return;
}

```

