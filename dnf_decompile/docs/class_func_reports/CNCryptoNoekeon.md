# CNCryptoNoekeon

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoNoekeon

```asm
// === 0809b59c CNCryptoNoekeon::CNCryptoNoekeon  [0x0809b59c-0x809b639] ===
 809b59c:	55                   	push   %ebp
 809b59d:	89 e5                	mov    %esp,%ebp
 809b59f:	56                   	push   %esi
 809b5a0:	53                   	push   %ebx
 809b5a1:	83 ec 30             	sub    $0x30,%esp
 809b5a4:	8b 45 08             	mov    0x8(%ebp),%eax
 809b5a7:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 809b5ae:	00 
 809b5af:	89 04 24             	mov    %eax,(%esp)
 809b5b2:	e8 39 29 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809b5b7:	8b 45 08             	mov    0x8(%ebp),%eax
 809b5ba:	c7 00 c8 38 b1 08    	movl   $0x8b138c8,(%eax)
 809b5c0:	8b 45 08             	mov    0x8(%ebp),%eax
 809b5c3:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809b5ca:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 809b5d1:	e8 7a 8e 68 00       	call   8724450 <_Znwj>
 809b5d6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809b5d9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809b5dd:	74 53                	je     809b632 <_ZN15CNCryptoNoekeonC1Ev+0x96>
 809b5df:	8b 45 08             	mov    0x8(%ebp),%eax
 809b5e2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 809b5e5:	89 50 08             	mov    %edx,0x8(%eax)
 809b5e8:	c7 44 24 04 10 00 00 	movl   $0x10,0x4(%esp)
 809b5ef:	00 
 809b5f0:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 809b5f3:	89 04 24             	mov    %eax,(%esp)
 809b5f6:	e8 b7 30 00 00       	call   809e6b2 <_Z17GenerateRandomKeyPhi>
 809b5fb:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 809b602:	00 
 809b603:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 809b606:	89 44 24 04          	mov    %eax,0x4(%esp)
 809b60a:	8b 45 08             	mov    0x8(%ebp),%eax
 809b60d:	89 04 24             	mov    %eax,(%esp)
 809b610:	e8 db 00 00 00       	call   809b6f0 <_ZN15CNCryptoNoekeon10InitializeEPKhi>
 809b615:	eb 1b                	jmp    809b632 <_ZN15CNCryptoNoekeonC1Ev+0x96>
 809b617:	89 d3                	mov    %edx,%ebx
 809b619:	89 c6                	mov    %eax,%esi
 809b61b:	8b 45 08             	mov    0x8(%ebp),%eax
 809b61e:	89 04 24             	mov    %eax,(%esp)
 809b621:	e8 e2 28 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809b626:	89 f0                	mov    %esi,%eax
 809b628:	89 da                	mov    %ebx,%edx
 809b62a:	89 04 24             	mov    %eax,(%esp)
 809b62d:	e8 1e 81 a4 00       	call   8ae3750 <_Unwind_Resume>
 809b632:	83 c4 30             	add    $0x30,%esp
 809b635:	5b                   	pop    %ebx
 809b636:	5e                   	pop    %esi
 809b637:	5d                   	pop    %ebp
 809b638:	c3                   	ret
 809b639:	90                   	nop

```

```c
// CNCryptoNoekeon::CNCryptoNoekeon @ 0x809b59c

/* CNCryptoNoekeon::CNCryptoNoekeon() */

void __thiscall CNCryptoNoekeon::CNCryptoNoekeon(CNCryptoNoekeon *this)

{
  uchar local_20 [16];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,8);
  *(undefined ***)this = &PTR__CNCryptoNoekeon_08b138c8;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809b5d1 to 0809b614 has its CatchHandler @ 0809b617 */
  local_10 = operator_new(0x20);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_20,0x10);
    Initialize(this,local_20,0x10);
  }
  return;
}

```

---

## CNCryptoNoekeon_0809b6ac

```asm
// === 0809b6ac CNCryptoNoekeon::CNCryptoNoekeon  [0x0809b6ac-0x809b6cf] ===
 809b6ac:	55                   	push   %ebp
 809b6ad:	89 e5                	mov    %esp,%ebp
 809b6af:	83 ec 18             	sub    $0x18,%esp
 809b6b2:	8b 45 08             	mov    0x8(%ebp),%eax
 809b6b5:	c7 44 24 04 08 00 00 	movl   $0x8,0x4(%esp)
 809b6bc:	00 
 809b6bd:	89 04 24             	mov    %eax,(%esp)
 809b6c0:	e8 2b 28 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809b6c5:	8b 45 08             	mov    0x8(%ebp),%eax
 809b6c8:	c7 00 c8 38 b1 08    	movl   $0x8b138c8,(%eax)
 809b6ce:	c9                   	leave
 809b6cf:	c3                   	ret

```

```c
// CNCryptoNoekeon::CNCryptoNoekeon @ 0x809b6ac

/* CNCryptoNoekeon::CNCryptoNoekeon(CNCryptoNoekeon const&) */

void __thiscall CNCryptoNoekeon::CNCryptoNoekeon(CNCryptoNoekeon *this,CNCryptoNoekeon *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,8);
  *(undefined ***)this = &PTR__CNCryptoNoekeon_08b138c8;
  return;
}

```

---

## Decrypt

```asm
// === 0809b870 CNCryptoNoekeon::Decrypt  [0x0809b870-0x809b947] ===
 809b870:	55                   	push   %ebp
 809b871:	89 e5                	mov    %esp,%ebp
 809b873:	83 ec 38             	sub    $0x38,%esp
 809b876:	8b 45 08             	mov    0x8(%ebp),%eax
 809b879:	8b 40 08             	mov    0x8(%eax),%eax
 809b87c:	85 c0                	test   %eax,%eax
 809b87e:	75 0a                	jne    809b88a <_ZN15CNCryptoNoekeon7DecryptEPhi+0x1a>
 809b880:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809b885:	e9 bb 00 00 00       	jmp    809b945 <_ZN15CNCryptoNoekeon7DecryptEPhi+0xd5>
 809b88a:	8b 45 08             	mov    0x8(%ebp),%eax
 809b88d:	8b 00                	mov    (%eax),%eax
 809b88f:	83 c0 24             	add    $0x24,%eax
 809b892:	8b 10                	mov    (%eax),%edx
 809b894:	8b 45 08             	mov    0x8(%ebp),%eax
 809b897:	89 04 24             	mov    %eax,(%esp)
 809b89a:	ff d2                	call   *%edx
 809b89c:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809b89f:	8b 55 10             	mov    0x10(%ebp),%edx
 809b8a2:	89 d0                	mov    %edx,%eax
 809b8a4:	c1 fa 1f             	sar    $0x1f,%edx
 809b8a7:	f7 7d e0             	idivl  -0x20(%ebp)
 809b8aa:	89 d0                	mov    %edx,%eax
 809b8ac:	85 c0                	test   %eax,%eax
 809b8ae:	0f 95 c0             	setne  %al
 809b8b1:	84 c0                	test   %al,%al
 809b8b3:	74 0a                	je     809b8bf <_ZN15CNCryptoNoekeon7DecryptEPhi+0x4f>
 809b8b5:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809b8ba:	e9 86 00 00 00       	jmp    809b945 <_ZN15CNCryptoNoekeon7DecryptEPhi+0xd5>
 809b8bf:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809b8c3:	7f 07                	jg     809b8cc <_ZN15CNCryptoNoekeon7DecryptEPhi+0x5c>
 809b8c5:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809b8ca:	eb 79                	jmp    809b945 <_ZN15CNCryptoNoekeon7DecryptEPhi+0xd5>
 809b8cc:	8b 45 08             	mov    0x8(%ebp),%eax
 809b8cf:	8b 40 08             	mov    0x8(%eax),%eax
 809b8d2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809b8d5:	8b 45 08             	mov    0x8(%ebp),%eax
 809b8d8:	8b 00                	mov    (%eax),%eax
 809b8da:	83 c0 24             	add    $0x24,%eax
 809b8dd:	8b 10                	mov    (%eax),%edx
 809b8df:	8b 45 08             	mov    0x8(%ebp),%eax
 809b8e2:	89 04 24             	mov    %eax,(%esp)
 809b8e5:	ff d2                	call   *%edx
 809b8e7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809b8ea:	8b 45 10             	mov    0x10(%ebp),%eax
 809b8ed:	89 c2                	mov    %eax,%edx
 809b8ef:	c1 fa 1f             	sar    $0x1f,%edx
 809b8f2:	f7 7d e4             	idivl  -0x1c(%ebp)
 809b8f5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809b8f8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809b8ff:	eb 32                	jmp    809b933 <_ZN15CNCryptoNoekeon7DecryptEPhi+0xc3>
 809b901:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809b904:	89 44 24 08          	mov    %eax,0x8(%esp)
 809b908:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b90b:	89 44 24 04          	mov    %eax,0x4(%esp)
 809b90f:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b912:	89 04 24             	mov    %eax,(%esp)
 809b915:	e8 c8 a1 01 00       	call   80b5ae2 <_Z19noekeon_ecb_decryptPKhPhP13symmetric_key>
 809b91a:	8b 45 08             	mov    0x8(%ebp),%eax
 809b91d:	8b 00                	mov    (%eax),%eax
 809b91f:	83 c0 24             	add    $0x24,%eax
 809b922:	8b 10                	mov    (%eax),%edx
 809b924:	8b 45 08             	mov    0x8(%ebp),%eax
 809b927:	89 04 24             	mov    %eax,(%esp)
 809b92a:	ff d2                	call   *%edx
 809b92c:	01 45 0c             	add    %eax,0xc(%ebp)
 809b92f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809b933:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809b936:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809b939:	0f 9c c0             	setl   %al
 809b93c:	84 c0                	test   %al,%al
 809b93e:	75 c1                	jne    809b901 <_ZN15CNCryptoNoekeon7DecryptEPhi+0x91>
 809b940:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809b945:	c9                   	leave
 809b946:	c3                   	ret
 809b947:	90                   	nop

```

```c
// CNCryptoNoekeon::Decrypt @ 0x809b870

/* CNCryptoNoekeon::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoNoekeon::Decrypt(CNCryptoNoekeon *this,uchar *param_1,int param_2)

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
          noekeon_ecb_decrypt(param_1,param_1,psVar1);
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

## Decrypt_0809ba3a

```asm
// === 0809ba3a CNCryptoNoekeon::Decrypt  [0x0809ba3a-0x809bb2b] ===
 809ba3a:	55                   	push   %ebp
 809ba3b:	89 e5                	mov    %esp,%ebp
 809ba3d:	83 ec 38             	sub    $0x38,%esp
 809ba40:	8b 45 08             	mov    0x8(%ebp),%eax
 809ba43:	8b 40 08             	mov    0x8(%eax),%eax
 809ba46:	85 c0                	test   %eax,%eax
 809ba48:	75 0a                	jne    809ba54 <_ZN15CNCryptoNoekeon7DecryptEPKhiPhi+0x1a>
 809ba4a:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809ba4f:	e9 d5 00 00 00       	jmp    809bb29 <_ZN15CNCryptoNoekeon7DecryptEPKhiPhi+0xef>
 809ba54:	8b 45 08             	mov    0x8(%ebp),%eax
 809ba57:	8b 00                	mov    (%eax),%eax
 809ba59:	83 c0 24             	add    $0x24,%eax
 809ba5c:	8b 10                	mov    (%eax),%edx
 809ba5e:	8b 45 08             	mov    0x8(%ebp),%eax
 809ba61:	89 04 24             	mov    %eax,(%esp)
 809ba64:	ff d2                	call   *%edx
 809ba66:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809ba69:	8b 55 10             	mov    0x10(%ebp),%edx
 809ba6c:	89 d0                	mov    %edx,%eax
 809ba6e:	c1 fa 1f             	sar    $0x1f,%edx
 809ba71:	f7 7d e0             	idivl  -0x20(%ebp)
 809ba74:	89 d0                	mov    %edx,%eax
 809ba76:	85 c0                	test   %eax,%eax
 809ba78:	0f 95 c0             	setne  %al
 809ba7b:	84 c0                	test   %al,%al
 809ba7d:	74 0a                	je     809ba89 <_ZN15CNCryptoNoekeon7DecryptEPKhiPhi+0x4f>
 809ba7f:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809ba84:	e9 a0 00 00 00       	jmp    809bb29 <_ZN15CNCryptoNoekeon7DecryptEPKhiPhi+0xef>
 809ba89:	8b 45 10             	mov    0x10(%ebp),%eax
 809ba8c:	3b 45 18             	cmp    0x18(%ebp),%eax
 809ba8f:	7e 0a                	jle    809ba9b <_ZN15CNCryptoNoekeon7DecryptEPKhiPhi+0x61>
 809ba91:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809ba96:	e9 8e 00 00 00       	jmp    809bb29 <_ZN15CNCryptoNoekeon7DecryptEPKhiPhi+0xef>
 809ba9b:	8b 45 08             	mov    0x8(%ebp),%eax
 809ba9e:	8b 40 08             	mov    0x8(%eax),%eax
 809baa1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809baa4:	8b 45 08             	mov    0x8(%ebp),%eax
 809baa7:	8b 00                	mov    (%eax),%eax
 809baa9:	83 c0 24             	add    $0x24,%eax
 809baac:	8b 10                	mov    (%eax),%edx
 809baae:	8b 45 08             	mov    0x8(%ebp),%eax
 809bab1:	89 04 24             	mov    %eax,(%esp)
 809bab4:	ff d2                	call   *%edx
 809bab6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809bab9:	8b 45 10             	mov    0x10(%ebp),%eax
 809babc:	89 c2                	mov    %eax,%edx
 809babe:	c1 fa 1f             	sar    $0x1f,%edx
 809bac1:	f7 7d e4             	idivl  -0x1c(%ebp)
 809bac4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809bac7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809bace:	eb 47                	jmp    809bb17 <_ZN15CNCryptoNoekeon7DecryptEPKhiPhi+0xdd>
 809bad0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809bad3:	89 44 24 08          	mov    %eax,0x8(%esp)
 809bad7:	8b 45 14             	mov    0x14(%ebp),%eax
 809bada:	89 44 24 04          	mov    %eax,0x4(%esp)
 809bade:	8b 45 0c             	mov    0xc(%ebp),%eax
 809bae1:	89 04 24             	mov    %eax,(%esp)
 809bae4:	e8 f9 9f 01 00       	call   80b5ae2 <_Z19noekeon_ecb_decryptPKhPhP13symmetric_key>
 809bae9:	8b 45 08             	mov    0x8(%ebp),%eax
 809baec:	8b 00                	mov    (%eax),%eax
 809baee:	83 c0 24             	add    $0x24,%eax
 809baf1:	8b 10                	mov    (%eax),%edx
 809baf3:	8b 45 08             	mov    0x8(%ebp),%eax
 809baf6:	89 04 24             	mov    %eax,(%esp)
 809baf9:	ff d2                	call   *%edx
 809bafb:	01 45 0c             	add    %eax,0xc(%ebp)
 809bafe:	8b 45 08             	mov    0x8(%ebp),%eax
 809bb01:	8b 00                	mov    (%eax),%eax
 809bb03:	83 c0 24             	add    $0x24,%eax
 809bb06:	8b 10                	mov    (%eax),%edx
 809bb08:	8b 45 08             	mov    0x8(%ebp),%eax
 809bb0b:	89 04 24             	mov    %eax,(%esp)
 809bb0e:	ff d2                	call   *%edx
 809bb10:	01 45 14             	add    %eax,0x14(%ebp)
 809bb13:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809bb17:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809bb1a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809bb1d:	0f 9c c0             	setl   %al
 809bb20:	84 c0                	test   %al,%al
 809bb22:	75 ac                	jne    809bad0 <_ZN15CNCryptoNoekeon7DecryptEPKhiPhi+0x96>
 809bb24:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809bb29:	c9                   	leave
 809bb2a:	c3                   	ret
 809bb2b:	90                   	nop

```

```c
// CNCryptoNoekeon::Decrypt @ 0x809ba3a

/* CNCryptoNoekeon::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoNoekeon::Decrypt
          (CNCryptoNoekeon *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          noekeon_ecb_decrypt(param_1,param_3,psVar1);
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
// === 0809b798 CNCryptoNoekeon::Encrypt  [0x0809b798-0x809b86f] ===
 809b798:	55                   	push   %ebp
 809b799:	89 e5                	mov    %esp,%ebp
 809b79b:	83 ec 38             	sub    $0x38,%esp
 809b79e:	8b 45 08             	mov    0x8(%ebp),%eax
 809b7a1:	8b 40 08             	mov    0x8(%eax),%eax
 809b7a4:	85 c0                	test   %eax,%eax
 809b7a6:	75 0a                	jne    809b7b2 <_ZN15CNCryptoNoekeon7EncryptEPhi+0x1a>
 809b7a8:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809b7ad:	e9 bb 00 00 00       	jmp    809b86d <_ZN15CNCryptoNoekeon7EncryptEPhi+0xd5>
 809b7b2:	8b 45 08             	mov    0x8(%ebp),%eax
 809b7b5:	8b 00                	mov    (%eax),%eax
 809b7b7:	83 c0 24             	add    $0x24,%eax
 809b7ba:	8b 10                	mov    (%eax),%edx
 809b7bc:	8b 45 08             	mov    0x8(%ebp),%eax
 809b7bf:	89 04 24             	mov    %eax,(%esp)
 809b7c2:	ff d2                	call   *%edx
 809b7c4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809b7c7:	8b 55 10             	mov    0x10(%ebp),%edx
 809b7ca:	89 d0                	mov    %edx,%eax
 809b7cc:	c1 fa 1f             	sar    $0x1f,%edx
 809b7cf:	f7 7d e0             	idivl  -0x20(%ebp)
 809b7d2:	89 d0                	mov    %edx,%eax
 809b7d4:	85 c0                	test   %eax,%eax
 809b7d6:	0f 95 c0             	setne  %al
 809b7d9:	84 c0                	test   %al,%al
 809b7db:	74 0a                	je     809b7e7 <_ZN15CNCryptoNoekeon7EncryptEPhi+0x4f>
 809b7dd:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809b7e2:	e9 86 00 00 00       	jmp    809b86d <_ZN15CNCryptoNoekeon7EncryptEPhi+0xd5>
 809b7e7:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809b7eb:	7f 07                	jg     809b7f4 <_ZN15CNCryptoNoekeon7EncryptEPhi+0x5c>
 809b7ed:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809b7f2:	eb 79                	jmp    809b86d <_ZN15CNCryptoNoekeon7EncryptEPhi+0xd5>
 809b7f4:	8b 45 08             	mov    0x8(%ebp),%eax
 809b7f7:	8b 40 08             	mov    0x8(%eax),%eax
 809b7fa:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809b7fd:	8b 45 08             	mov    0x8(%ebp),%eax
 809b800:	8b 00                	mov    (%eax),%eax
 809b802:	83 c0 24             	add    $0x24,%eax
 809b805:	8b 10                	mov    (%eax),%edx
 809b807:	8b 45 08             	mov    0x8(%ebp),%eax
 809b80a:	89 04 24             	mov    %eax,(%esp)
 809b80d:	ff d2                	call   *%edx
 809b80f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809b812:	8b 45 10             	mov    0x10(%ebp),%eax
 809b815:	89 c2                	mov    %eax,%edx
 809b817:	c1 fa 1f             	sar    $0x1f,%edx
 809b81a:	f7 7d e4             	idivl  -0x1c(%ebp)
 809b81d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809b820:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809b827:	eb 32                	jmp    809b85b <_ZN15CNCryptoNoekeon7EncryptEPhi+0xc3>
 809b829:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809b82c:	89 44 24 08          	mov    %eax,0x8(%esp)
 809b830:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b833:	89 44 24 04          	mov    %eax,0x4(%esp)
 809b837:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b83a:	89 04 24             	mov    %eax,(%esp)
 809b83d:	e8 27 9e 01 00       	call   80b5669 <_Z19noekeon_ecb_encryptPKhPhP13symmetric_key>
 809b842:	8b 45 08             	mov    0x8(%ebp),%eax
 809b845:	8b 00                	mov    (%eax),%eax
 809b847:	83 c0 24             	add    $0x24,%eax
 809b84a:	8b 10                	mov    (%eax),%edx
 809b84c:	8b 45 08             	mov    0x8(%ebp),%eax
 809b84f:	89 04 24             	mov    %eax,(%esp)
 809b852:	ff d2                	call   *%edx
 809b854:	01 45 0c             	add    %eax,0xc(%ebp)
 809b857:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809b85b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809b85e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809b861:	0f 9c c0             	setl   %al
 809b864:	84 c0                	test   %al,%al
 809b866:	75 c1                	jne    809b829 <_ZN15CNCryptoNoekeon7EncryptEPhi+0x91>
 809b868:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809b86d:	c9                   	leave
 809b86e:	c3                   	ret
 809b86f:	90                   	nop

```

```c
// CNCryptoNoekeon::Encrypt @ 0x809b798

/* CNCryptoNoekeon::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoNoekeon::Encrypt(CNCryptoNoekeon *this,uchar *param_1,int param_2)

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
          noekeon_ecb_encrypt(param_1,param_1,psVar1);
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

## Encrypt_0809b948

```asm
// === 0809b948 CNCryptoNoekeon::Encrypt  [0x0809b948-0x809ba39] ===
 809b948:	55                   	push   %ebp
 809b949:	89 e5                	mov    %esp,%ebp
 809b94b:	83 ec 38             	sub    $0x38,%esp
 809b94e:	8b 45 08             	mov    0x8(%ebp),%eax
 809b951:	8b 40 08             	mov    0x8(%eax),%eax
 809b954:	85 c0                	test   %eax,%eax
 809b956:	75 0a                	jne    809b962 <_ZN15CNCryptoNoekeon7EncryptEPKhiPhi+0x1a>
 809b958:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809b95d:	e9 d5 00 00 00       	jmp    809ba37 <_ZN15CNCryptoNoekeon7EncryptEPKhiPhi+0xef>
 809b962:	8b 45 08             	mov    0x8(%ebp),%eax
 809b965:	8b 00                	mov    (%eax),%eax
 809b967:	83 c0 24             	add    $0x24,%eax
 809b96a:	8b 10                	mov    (%eax),%edx
 809b96c:	8b 45 08             	mov    0x8(%ebp),%eax
 809b96f:	89 04 24             	mov    %eax,(%esp)
 809b972:	ff d2                	call   *%edx
 809b974:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809b977:	8b 55 10             	mov    0x10(%ebp),%edx
 809b97a:	89 d0                	mov    %edx,%eax
 809b97c:	c1 fa 1f             	sar    $0x1f,%edx
 809b97f:	f7 7d e0             	idivl  -0x20(%ebp)
 809b982:	89 d0                	mov    %edx,%eax
 809b984:	85 c0                	test   %eax,%eax
 809b986:	0f 95 c0             	setne  %al
 809b989:	84 c0                	test   %al,%al
 809b98b:	74 0a                	je     809b997 <_ZN15CNCryptoNoekeon7EncryptEPKhiPhi+0x4f>
 809b98d:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809b992:	e9 a0 00 00 00       	jmp    809ba37 <_ZN15CNCryptoNoekeon7EncryptEPKhiPhi+0xef>
 809b997:	8b 45 10             	mov    0x10(%ebp),%eax
 809b99a:	3b 45 18             	cmp    0x18(%ebp),%eax
 809b99d:	7e 0a                	jle    809b9a9 <_ZN15CNCryptoNoekeon7EncryptEPKhiPhi+0x61>
 809b99f:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809b9a4:	e9 8e 00 00 00       	jmp    809ba37 <_ZN15CNCryptoNoekeon7EncryptEPKhiPhi+0xef>
 809b9a9:	8b 45 08             	mov    0x8(%ebp),%eax
 809b9ac:	8b 40 08             	mov    0x8(%eax),%eax
 809b9af:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809b9b2:	8b 45 08             	mov    0x8(%ebp),%eax
 809b9b5:	8b 00                	mov    (%eax),%eax
 809b9b7:	83 c0 24             	add    $0x24,%eax
 809b9ba:	8b 10                	mov    (%eax),%edx
 809b9bc:	8b 45 08             	mov    0x8(%ebp),%eax
 809b9bf:	89 04 24             	mov    %eax,(%esp)
 809b9c2:	ff d2                	call   *%edx
 809b9c4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809b9c7:	8b 45 10             	mov    0x10(%ebp),%eax
 809b9ca:	89 c2                	mov    %eax,%edx
 809b9cc:	c1 fa 1f             	sar    $0x1f,%edx
 809b9cf:	f7 7d e4             	idivl  -0x1c(%ebp)
 809b9d2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809b9d5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809b9dc:	eb 47                	jmp    809ba25 <_ZN15CNCryptoNoekeon7EncryptEPKhiPhi+0xdd>
 809b9de:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809b9e1:	89 44 24 08          	mov    %eax,0x8(%esp)
 809b9e5:	8b 45 14             	mov    0x14(%ebp),%eax
 809b9e8:	89 44 24 04          	mov    %eax,0x4(%esp)
 809b9ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b9ef:	89 04 24             	mov    %eax,(%esp)
 809b9f2:	e8 72 9c 01 00       	call   80b5669 <_Z19noekeon_ecb_encryptPKhPhP13symmetric_key>
 809b9f7:	8b 45 08             	mov    0x8(%ebp),%eax
 809b9fa:	8b 00                	mov    (%eax),%eax
 809b9fc:	83 c0 24             	add    $0x24,%eax
 809b9ff:	8b 10                	mov    (%eax),%edx
 809ba01:	8b 45 08             	mov    0x8(%ebp),%eax
 809ba04:	89 04 24             	mov    %eax,(%esp)
 809ba07:	ff d2                	call   *%edx
 809ba09:	01 45 0c             	add    %eax,0xc(%ebp)
 809ba0c:	8b 45 08             	mov    0x8(%ebp),%eax
 809ba0f:	8b 00                	mov    (%eax),%eax
 809ba11:	83 c0 24             	add    $0x24,%eax
 809ba14:	8b 10                	mov    (%eax),%edx
 809ba16:	8b 45 08             	mov    0x8(%ebp),%eax
 809ba19:	89 04 24             	mov    %eax,(%esp)
 809ba1c:	ff d2                	call   *%edx
 809ba1e:	01 45 14             	add    %eax,0x14(%ebp)
 809ba21:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809ba25:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809ba28:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809ba2b:	0f 9c c0             	setl   %al
 809ba2e:	84 c0                	test   %al,%al
 809ba30:	75 ac                	jne    809b9de <_ZN15CNCryptoNoekeon7EncryptEPKhiPhi+0x96>
 809ba32:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809ba37:	c9                   	leave
 809ba38:	c3                   	ret
 809ba39:	90                   	nop

```

```c
// CNCryptoNoekeon::Encrypt @ 0x809b948

/* CNCryptoNoekeon::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoNoekeon::Encrypt
          (CNCryptoNoekeon *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          noekeon_ecb_encrypt(param_1,param_3,psVar1);
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
// === 0809bb2c CNCryptoNoekeon::GetBlockSize  [0x0809bb2c-0x809bb35] ===
 809bb2c:	55                   	push   %ebp
 809bb2d:	89 e5                	mov    %esp,%ebp
 809bb2f:	b8 10 00 00 00       	mov    $0x10,%eax
 809bb34:	5d                   	pop    %ebp
 809bb35:	c3                   	ret

```

```c
// CNCryptoNoekeon::GetBlockSize @ 0x809bb2c

/* CNCryptoNoekeon::GetBlockSize() const */

undefined4 CNCryptoNoekeon::GetBlockSize(void)

{
  return 0x10;
}

```

---

## GetKeySize

```asm
// === 0809bb36 CNCryptoNoekeon::GetKeySize  [0x0809bb36-0x809bb3f] ===
 809bb36:	55                   	push   %ebp
 809bb37:	89 e5                	mov    %esp,%ebp
 809bb39:	b8 10 00 00 00       	mov    $0x10,%eax
 809bb3e:	5d                   	pop    %ebp
 809bb3f:	c3                   	ret

```

```c
// CNCryptoNoekeon::GetKeySize @ 0x809bb36

/* CNCryptoNoekeon::GetKeySize() const */

undefined4 CNCryptoNoekeon::GetKeySize(void)

{
  return 0x10;
}

```

---

## Initialize

```asm
// === 0809b6f0 CNCryptoNoekeon::Initialize  [0x0809b6f0-0x809b797] ===
 809b6f0:	55                   	push   %ebp
 809b6f1:	89 e5                	mov    %esp,%ebp
 809b6f3:	83 ec 28             	sub    $0x28,%esp
 809b6f6:	8b 45 08             	mov    0x8(%ebp),%eax
 809b6f9:	8b 40 08             	mov    0x8(%eax),%eax
 809b6fc:	85 c0                	test   %eax,%eax
 809b6fe:	75 0a                	jne    809b70a <_ZN15CNCryptoNoekeon10InitializeEPKhi+0x1a>
 809b700:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809b705:	e9 8b 00 00 00       	jmp    809b795 <_ZN15CNCryptoNoekeon10InitializeEPKhi+0xa5>
 809b70a:	8b 45 08             	mov    0x8(%ebp),%eax
 809b70d:	8b 00                	mov    (%eax),%eax
 809b70f:	83 c0 20             	add    $0x20,%eax
 809b712:	8b 10                	mov    (%eax),%edx
 809b714:	8b 45 08             	mov    0x8(%ebp),%eax
 809b717:	89 04 24             	mov    %eax,(%esp)
 809b71a:	ff d2                	call   *%edx
 809b71c:	3b 45 10             	cmp    0x10(%ebp),%eax
 809b71f:	0f 9f c0             	setg   %al
 809b722:	84 c0                	test   %al,%al
 809b724:	74 07                	je     809b72d <_ZN15CNCryptoNoekeon10InitializeEPKhi+0x3d>
 809b726:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809b72b:	eb 68                	jmp    809b795 <_ZN15CNCryptoNoekeon10InitializeEPKhi+0xa5>
 809b72d:	8b 45 08             	mov    0x8(%ebp),%eax
 809b730:	8b 40 08             	mov    0x8(%eax),%eax
 809b733:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809b736:	8b 45 08             	mov    0x8(%ebp),%eax
 809b739:	8b 00                	mov    (%eax),%eax
 809b73b:	83 c0 20             	add    $0x20,%eax
 809b73e:	8b 10                	mov    (%eax),%edx
 809b740:	8b 45 08             	mov    0x8(%ebp),%eax
 809b743:	89 04 24             	mov    %eax,(%esp)
 809b746:	ff d2                	call   *%edx
 809b748:	8b 55 f0             	mov    -0x10(%ebp),%edx
 809b74b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 809b74f:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 809b756:	00 
 809b757:	89 44 24 04          	mov    %eax,0x4(%esp)
 809b75b:	8b 45 0c             	mov    0xc(%ebp),%eax
 809b75e:	89 04 24             	mov    %eax,(%esp)
 809b761:	e8 90 97 01 00       	call   80b4ef6 <_Z13noekeon_setupPKhiiP13symmetric_key>
 809b766:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809b769:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809b76d:	75 07                	jne    809b776 <_ZN15CNCryptoNoekeon10InitializeEPKhi+0x86>
 809b76f:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809b774:	eb 1f                	jmp    809b795 <_ZN15CNCryptoNoekeon10InitializeEPKhi+0xa5>
 809b776:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 809b77a:	75 07                	jne    809b783 <_ZN15CNCryptoNoekeon10InitializeEPKhi+0x93>
 809b77c:	b8 02 00 00 70       	mov    $0x70000002,%eax
 809b781:	eb 12                	jmp    809b795 <_ZN15CNCryptoNoekeon10InitializeEPKhi+0xa5>
 809b783:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 809b787:	75 07                	jne    809b790 <_ZN15CNCryptoNoekeon10InitializeEPKhi+0xa0>
 809b789:	b8 1a 00 00 70       	mov    $0x7000001a,%eax
 809b78e:	eb 05                	jmp    809b795 <_ZN15CNCryptoNoekeon10InitializeEPKhi+0xa5>
 809b790:	b8 00 00 00 70       	mov    $0x70000000,%eax
 809b795:	c9                   	leave
 809b796:	c3                   	ret
 809b797:	90                   	nop

```

```c
// CNCryptoNoekeon::Initialize @ 0x809b6f0

/* CNCryptoNoekeon::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoNoekeon::Initialize(CNCryptoNoekeon *this,uchar *param_1,int param_2)

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
      iVar3 = noekeon_setup(param_1,iVar3,0x10,psVar1);
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
// === 0809b6d8 CNCryptoNoekeon::SetMode  [0x0809b6d8-0x809b6ef] ===
 809b6d8:	55                   	push   %ebp
 809b6d9:	89 e5                	mov    %esp,%ebp
 809b6db:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 809b6df:	75 07                	jne    809b6e8 <_ZN15CNCryptoNoekeon7SetModeE16CRYPTO_MODE_TYPE+0x10>
 809b6e1:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809b6e6:	eb 05                	jmp    809b6ed <_ZN15CNCryptoNoekeon7SetModeE16CRYPTO_MODE_TYPE+0x15>
 809b6e8:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809b6ed:	5d                   	pop    %ebp
 809b6ee:	c3                   	ret
 809b6ef:	90                   	nop

```

```c
// CNCryptoNoekeon::SetMode @ 0x809b6d8

/* CNCryptoNoekeon::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoNoekeon::SetMode(undefined4 this,int param_2)

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
// === 0809b6d0 CNCryptoNoekeon::operator=  [0x0809b6d0-0x809b6d7] ===
 809b6d0:	55                   	push   %ebp
 809b6d1:	89 e5                	mov    %esp,%ebp
 809b6d3:	8b 45 08             	mov    0x8(%ebp),%eax
 809b6d6:	5d                   	pop    %ebp
 809b6d7:	c3                   	ret

```

```c
// CNCryptoNoekeon::operator= @ 0x809b6d0

/* CNCryptoNoekeon::TEMPNAMEPLACEHOLDERVALUE(CNCryptoNoekeon const&) */

CNCryptoNoekeon * __thiscall
CNCryptoNoekeon::operator=(CNCryptoNoekeon *this,CNCryptoNoekeon *param_1)

{
  return this;
}

```

---

## ~CNCryptoNoekeon

```asm
// === 0809b63a CNCryptoNoekeon::~CNCryptoNoekeon  [0x0809b63a-0x809b68d] ===
 809b63a:	55                   	push   %ebp
 809b63b:	89 e5                	mov    %esp,%ebp
 809b63d:	83 ec 28             	sub    $0x28,%esp
 809b640:	8b 45 08             	mov    0x8(%ebp),%eax
 809b643:	c7 00 c8 38 b1 08    	movl   $0x8b138c8,(%eax)
 809b649:	8b 45 08             	mov    0x8(%ebp),%eax
 809b64c:	8b 40 08             	mov    0x8(%eax),%eax
 809b64f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809b652:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809b656:	74 15                	je     809b66d <_ZN15CNCryptoNoekeonD1Ev+0x33>
 809b658:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809b65b:	89 04 24             	mov    %eax,(%esp)
 809b65e:	e8 8d 8e 68 00       	call   87244f0 <_ZdlPv>
 809b663:	8b 45 08             	mov    0x8(%ebp),%eax
 809b666:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809b66d:	8b 45 08             	mov    0x8(%ebp),%eax
 809b670:	89 04 24             	mov    %eax,(%esp)
 809b673:	e8 90 28 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809b678:	b8 00 00 00 00       	mov    $0x0,%eax
 809b67d:	84 c0                	test   %al,%al
 809b67f:	74 0b                	je     809b68c <_ZN15CNCryptoNoekeonD1Ev+0x52>
 809b681:	8b 45 08             	mov    0x8(%ebp),%eax
 809b684:	89 04 24             	mov    %eax,(%esp)
 809b687:	e8 64 8e 68 00       	call   87244f0 <_ZdlPv>
 809b68c:	c9                   	leave
 809b68d:	c3                   	ret

```

```c
// CNCryptoNoekeon::~CNCryptoNoekeon @ 0x809b63a

/* WARNING: Removing unreachable block (ram,0x0809b681) */
/* CNCryptoNoekeon::~CNCryptoNoekeon() */

void __thiscall CNCryptoNoekeon::~CNCryptoNoekeon(CNCryptoNoekeon *this)

{
  *(undefined ***)this = &PTR__CNCryptoNoekeon_08b138c8;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoNoekeon_0809b68e

```asm
// === 0809b68e CNCryptoNoekeon::~CNCryptoNoekeon  [0x0809b68e-0x809b6ab] ===
 809b68e:	55                   	push   %ebp
 809b68f:	89 e5                	mov    %esp,%ebp
 809b691:	83 ec 18             	sub    $0x18,%esp
 809b694:	8b 45 08             	mov    0x8(%ebp),%eax
 809b697:	89 04 24             	mov    %eax,(%esp)
 809b69a:	e8 9b ff ff ff       	call   809b63a <_ZN15CNCryptoNoekeonD1Ev>
 809b69f:	8b 45 08             	mov    0x8(%ebp),%eax
 809b6a2:	89 04 24             	mov    %eax,(%esp)
 809b6a5:	e8 46 8e 68 00       	call   87244f0 <_ZdlPv>
 809b6aa:	c9                   	leave
 809b6ab:	c3                   	ret

```

```c
// CNCryptoNoekeon::~CNCryptoNoekeon @ 0x809b68e

/* CNCryptoNoekeon::~CNCryptoNoekeon() */

void __thiscall CNCryptoNoekeon::~CNCryptoNoekeon(CNCryptoNoekeon *this)

{
  ~CNCryptoNoekeon(this);
  operator_delete(this);
  return;
}

```

