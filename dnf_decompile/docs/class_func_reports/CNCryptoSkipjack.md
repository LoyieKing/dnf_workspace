# CNCryptoSkipjack

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoSkipjack

```asm
// === 0809c8ac CNCryptoSkipjack::CNCryptoSkipjack  [0x0809c8ac-0x809c949] ===
 809c8ac:	55                   	push   %ebp
 809c8ad:	89 e5                	mov    %esp,%ebp
 809c8af:	56                   	push   %esi
 809c8b0:	53                   	push   %ebx
 809c8b1:	83 ec 20             	sub    $0x20,%esp
 809c8b4:	8b 45 08             	mov    0x8(%ebp),%eax
 809c8b7:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 809c8be:	00 
 809c8bf:	89 04 24             	mov    %eax,(%esp)
 809c8c2:	e8 29 16 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809c8c7:	8b 45 08             	mov    0x8(%ebp),%eax
 809c8ca:	c7 00 48 3a b1 08    	movl   $0x8b13a48,(%eax)
 809c8d0:	8b 45 08             	mov    0x8(%ebp),%eax
 809c8d3:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809c8da:	c7 04 24 10 00 00 00 	movl   $0x10,(%esp)
 809c8e1:	e8 6a 7b 68 00       	call   8724450 <_Znwj>
 809c8e6:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809c8e9:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809c8ed:	74 53                	je     809c942 <_ZN16CNCryptoSkipjackC1Ev+0x96>
 809c8ef:	8b 45 08             	mov    0x8(%ebp),%eax
 809c8f2:	8b 55 f4             	mov    -0xc(%ebp),%edx
 809c8f5:	89 50 08             	mov    %edx,0x8(%eax)
 809c8f8:	c7 44 24 04 0a 00 00 	movl   $0xa,0x4(%esp)
 809c8ff:	00 
 809c900:	8d 45 ea             	lea    -0x16(%ebp),%eax
 809c903:	89 04 24             	mov    %eax,(%esp)
 809c906:	e8 a7 1d 00 00       	call   809e6b2 <_Z17GenerateRandomKeyPhi>
 809c90b:	c7 44 24 08 0a 00 00 	movl   $0xa,0x8(%esp)
 809c912:	00 
 809c913:	8d 45 ea             	lea    -0x16(%ebp),%eax
 809c916:	89 44 24 04          	mov    %eax,0x4(%esp)
 809c91a:	8b 45 08             	mov    0x8(%ebp),%eax
 809c91d:	89 04 24             	mov    %eax,(%esp)
 809c920:	e8 db 00 00 00       	call   809ca00 <_ZN16CNCryptoSkipjack10InitializeEPKhi>
 809c925:	eb 1b                	jmp    809c942 <_ZN16CNCryptoSkipjackC1Ev+0x96>
 809c927:	89 d3                	mov    %edx,%ebx
 809c929:	89 c6                	mov    %eax,%esi
 809c92b:	8b 45 08             	mov    0x8(%ebp),%eax
 809c92e:	89 04 24             	mov    %eax,(%esp)
 809c931:	e8 d2 15 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809c936:	89 f0                	mov    %esi,%eax
 809c938:	89 da                	mov    %ebx,%edx
 809c93a:	89 04 24             	mov    %eax,(%esp)
 809c93d:	e8 0e 6e a4 00       	call   8ae3750 <_Unwind_Resume>
 809c942:	83 c4 20             	add    $0x20,%esp
 809c945:	5b                   	pop    %ebx
 809c946:	5e                   	pop    %esi
 809c947:	5d                   	pop    %ebp
 809c948:	c3                   	ret
 809c949:	90                   	nop

```

```c
// CNCryptoSkipjack::CNCryptoSkipjack @ 0x809c8ac

/* CNCryptoSkipjack::CNCryptoSkipjack() */

void __thiscall CNCryptoSkipjack::CNCryptoSkipjack(CNCryptoSkipjack *this)

{
  uchar local_1a [10];
  void *local_10;
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0xb);
  *(undefined ***)this = &PTR__CNCryptoSkipjack_08b13a48;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809c8e1 to 0809c924 has its CatchHandler @ 0809c927 */
  local_10 = operator_new(0x10);
  if (local_10 != (void *)0x0) {
    *(void **)(this + 8) = local_10;
    GenerateRandomKey(local_1a,10);
    Initialize(this,local_1a,10);
  }
  return;
}

```

---

## CNCryptoSkipjack_0809c9bc

```asm
// === 0809c9bc CNCryptoSkipjack::CNCryptoSkipjack  [0x0809c9bc-0x809c9df] ===
 809c9bc:	55                   	push   %ebp
 809c9bd:	89 e5                	mov    %esp,%ebp
 809c9bf:	83 ec 18             	sub    $0x18,%esp
 809c9c2:	8b 45 08             	mov    0x8(%ebp),%eax
 809c9c5:	c7 44 24 04 0b 00 00 	movl   $0xb,0x4(%esp)
 809c9cc:	00 
 809c9cd:	89 04 24             	mov    %eax,(%esp)
 809c9d0:	e8 1b 15 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809c9d5:	8b 45 08             	mov    0x8(%ebp),%eax
 809c9d8:	c7 00 48 3a b1 08    	movl   $0x8b13a48,(%eax)
 809c9de:	c9                   	leave
 809c9df:	c3                   	ret

```

```c
// CNCryptoSkipjack::CNCryptoSkipjack @ 0x809c9bc

/* CNCryptoSkipjack::CNCryptoSkipjack(CNCryptoSkipjack const&) */

void __thiscall CNCryptoSkipjack::CNCryptoSkipjack(CNCryptoSkipjack *this,CNCryptoSkipjack *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,0xb);
  *(undefined ***)this = &PTR__CNCryptoSkipjack_08b13a48;
  return;
}

```

---

## Decrypt

```asm
// === 0809cb80 CNCryptoSkipjack::Decrypt  [0x0809cb80-0x809cc57] ===
 809cb80:	55                   	push   %ebp
 809cb81:	89 e5                	mov    %esp,%ebp
 809cb83:	83 ec 38             	sub    $0x38,%esp
 809cb86:	8b 45 08             	mov    0x8(%ebp),%eax
 809cb89:	8b 40 08             	mov    0x8(%eax),%eax
 809cb8c:	85 c0                	test   %eax,%eax
 809cb8e:	75 0a                	jne    809cb9a <_ZN16CNCryptoSkipjack7DecryptEPhi+0x1a>
 809cb90:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809cb95:	e9 bb 00 00 00       	jmp    809cc55 <_ZN16CNCryptoSkipjack7DecryptEPhi+0xd5>
 809cb9a:	8b 45 08             	mov    0x8(%ebp),%eax
 809cb9d:	8b 00                	mov    (%eax),%eax
 809cb9f:	83 c0 24             	add    $0x24,%eax
 809cba2:	8b 10                	mov    (%eax),%edx
 809cba4:	8b 45 08             	mov    0x8(%ebp),%eax
 809cba7:	89 04 24             	mov    %eax,(%esp)
 809cbaa:	ff d2                	call   *%edx
 809cbac:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809cbaf:	8b 55 10             	mov    0x10(%ebp),%edx
 809cbb2:	89 d0                	mov    %edx,%eax
 809cbb4:	c1 fa 1f             	sar    $0x1f,%edx
 809cbb7:	f7 7d e0             	idivl  -0x20(%ebp)
 809cbba:	89 d0                	mov    %edx,%eax
 809cbbc:	85 c0                	test   %eax,%eax
 809cbbe:	0f 95 c0             	setne  %al
 809cbc1:	84 c0                	test   %al,%al
 809cbc3:	74 0a                	je     809cbcf <_ZN16CNCryptoSkipjack7DecryptEPhi+0x4f>
 809cbc5:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809cbca:	e9 86 00 00 00       	jmp    809cc55 <_ZN16CNCryptoSkipjack7DecryptEPhi+0xd5>
 809cbcf:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809cbd3:	7f 07                	jg     809cbdc <_ZN16CNCryptoSkipjack7DecryptEPhi+0x5c>
 809cbd5:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809cbda:	eb 79                	jmp    809cc55 <_ZN16CNCryptoSkipjack7DecryptEPhi+0xd5>
 809cbdc:	8b 45 08             	mov    0x8(%ebp),%eax
 809cbdf:	8b 40 08             	mov    0x8(%eax),%eax
 809cbe2:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809cbe5:	8b 45 08             	mov    0x8(%ebp),%eax
 809cbe8:	8b 00                	mov    (%eax),%eax
 809cbea:	83 c0 24             	add    $0x24,%eax
 809cbed:	8b 10                	mov    (%eax),%edx
 809cbef:	8b 45 08             	mov    0x8(%ebp),%eax
 809cbf2:	89 04 24             	mov    %eax,(%esp)
 809cbf5:	ff d2                	call   *%edx
 809cbf7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809cbfa:	8b 45 10             	mov    0x10(%ebp),%eax
 809cbfd:	89 c2                	mov    %eax,%edx
 809cbff:	c1 fa 1f             	sar    $0x1f,%edx
 809cc02:	f7 7d e4             	idivl  -0x1c(%ebp)
 809cc05:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809cc08:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809cc0f:	eb 32                	jmp    809cc43 <_ZN16CNCryptoSkipjack7DecryptEPhi+0xc3>
 809cc11:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809cc14:	89 44 24 08          	mov    %eax,0x8(%esp)
 809cc18:	8b 45 0c             	mov    0xc(%ebp),%eax
 809cc1b:	89 44 24 04          	mov    %eax,0x4(%esp)
 809cc1f:	8b 45 0c             	mov    0xc(%ebp),%eax
 809cc22:	89 04 24             	mov    %eax,(%esp)
 809cc25:	e8 62 66 02 00       	call   80c328c <_Z20skipjack_ecb_decryptPKhPhP13symmetric_key>
 809cc2a:	8b 45 08             	mov    0x8(%ebp),%eax
 809cc2d:	8b 00                	mov    (%eax),%eax
 809cc2f:	83 c0 24             	add    $0x24,%eax
 809cc32:	8b 10                	mov    (%eax),%edx
 809cc34:	8b 45 08             	mov    0x8(%ebp),%eax
 809cc37:	89 04 24             	mov    %eax,(%esp)
 809cc3a:	ff d2                	call   *%edx
 809cc3c:	01 45 0c             	add    %eax,0xc(%ebp)
 809cc3f:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809cc43:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809cc46:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809cc49:	0f 9c c0             	setl   %al
 809cc4c:	84 c0                	test   %al,%al
 809cc4e:	75 c1                	jne    809cc11 <_ZN16CNCryptoSkipjack7DecryptEPhi+0x91>
 809cc50:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809cc55:	c9                   	leave
 809cc56:	c3                   	ret
 809cc57:	90                   	nop

```

```c
// CNCryptoSkipjack::Decrypt @ 0x809cb80

/* CNCryptoSkipjack::Decrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoSkipjack::Decrypt(CNCryptoSkipjack *this,uchar *param_1,int param_2)

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
          skipjack_ecb_decrypt(param_1,param_1,psVar1);
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

## Decrypt_0809cd4a

```asm
// === 0809cd4a CNCryptoSkipjack::Decrypt  [0x0809cd4a-0x809ce3b] ===
 809cd4a:	55                   	push   %ebp
 809cd4b:	89 e5                	mov    %esp,%ebp
 809cd4d:	83 ec 38             	sub    $0x38,%esp
 809cd50:	8b 45 08             	mov    0x8(%ebp),%eax
 809cd53:	8b 40 08             	mov    0x8(%eax),%eax
 809cd56:	85 c0                	test   %eax,%eax
 809cd58:	75 0a                	jne    809cd64 <_ZN16CNCryptoSkipjack7DecryptEPKhiPhi+0x1a>
 809cd5a:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809cd5f:	e9 d5 00 00 00       	jmp    809ce39 <_ZN16CNCryptoSkipjack7DecryptEPKhiPhi+0xef>
 809cd64:	8b 45 08             	mov    0x8(%ebp),%eax
 809cd67:	8b 00                	mov    (%eax),%eax
 809cd69:	83 c0 24             	add    $0x24,%eax
 809cd6c:	8b 10                	mov    (%eax),%edx
 809cd6e:	8b 45 08             	mov    0x8(%ebp),%eax
 809cd71:	89 04 24             	mov    %eax,(%esp)
 809cd74:	ff d2                	call   *%edx
 809cd76:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809cd79:	8b 55 10             	mov    0x10(%ebp),%edx
 809cd7c:	89 d0                	mov    %edx,%eax
 809cd7e:	c1 fa 1f             	sar    $0x1f,%edx
 809cd81:	f7 7d e0             	idivl  -0x20(%ebp)
 809cd84:	89 d0                	mov    %edx,%eax
 809cd86:	85 c0                	test   %eax,%eax
 809cd88:	0f 95 c0             	setne  %al
 809cd8b:	84 c0                	test   %al,%al
 809cd8d:	74 0a                	je     809cd99 <_ZN16CNCryptoSkipjack7DecryptEPKhiPhi+0x4f>
 809cd8f:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809cd94:	e9 a0 00 00 00       	jmp    809ce39 <_ZN16CNCryptoSkipjack7DecryptEPKhiPhi+0xef>
 809cd99:	8b 45 10             	mov    0x10(%ebp),%eax
 809cd9c:	3b 45 18             	cmp    0x18(%ebp),%eax
 809cd9f:	7e 0a                	jle    809cdab <_ZN16CNCryptoSkipjack7DecryptEPKhiPhi+0x61>
 809cda1:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809cda6:	e9 8e 00 00 00       	jmp    809ce39 <_ZN16CNCryptoSkipjack7DecryptEPKhiPhi+0xef>
 809cdab:	8b 45 08             	mov    0x8(%ebp),%eax
 809cdae:	8b 40 08             	mov    0x8(%eax),%eax
 809cdb1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809cdb4:	8b 45 08             	mov    0x8(%ebp),%eax
 809cdb7:	8b 00                	mov    (%eax),%eax
 809cdb9:	83 c0 24             	add    $0x24,%eax
 809cdbc:	8b 10                	mov    (%eax),%edx
 809cdbe:	8b 45 08             	mov    0x8(%ebp),%eax
 809cdc1:	89 04 24             	mov    %eax,(%esp)
 809cdc4:	ff d2                	call   *%edx
 809cdc6:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809cdc9:	8b 45 10             	mov    0x10(%ebp),%eax
 809cdcc:	89 c2                	mov    %eax,%edx
 809cdce:	c1 fa 1f             	sar    $0x1f,%edx
 809cdd1:	f7 7d e4             	idivl  -0x1c(%ebp)
 809cdd4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809cdd7:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809cdde:	eb 47                	jmp    809ce27 <_ZN16CNCryptoSkipjack7DecryptEPKhiPhi+0xdd>
 809cde0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809cde3:	89 44 24 08          	mov    %eax,0x8(%esp)
 809cde7:	8b 45 14             	mov    0x14(%ebp),%eax
 809cdea:	89 44 24 04          	mov    %eax,0x4(%esp)
 809cdee:	8b 45 0c             	mov    0xc(%ebp),%eax
 809cdf1:	89 04 24             	mov    %eax,(%esp)
 809cdf4:	e8 93 64 02 00       	call   80c328c <_Z20skipjack_ecb_decryptPKhPhP13symmetric_key>
 809cdf9:	8b 45 08             	mov    0x8(%ebp),%eax
 809cdfc:	8b 00                	mov    (%eax),%eax
 809cdfe:	83 c0 24             	add    $0x24,%eax
 809ce01:	8b 10                	mov    (%eax),%edx
 809ce03:	8b 45 08             	mov    0x8(%ebp),%eax
 809ce06:	89 04 24             	mov    %eax,(%esp)
 809ce09:	ff d2                	call   *%edx
 809ce0b:	01 45 0c             	add    %eax,0xc(%ebp)
 809ce0e:	8b 45 08             	mov    0x8(%ebp),%eax
 809ce11:	8b 00                	mov    (%eax),%eax
 809ce13:	83 c0 24             	add    $0x24,%eax
 809ce16:	8b 10                	mov    (%eax),%edx
 809ce18:	8b 45 08             	mov    0x8(%ebp),%eax
 809ce1b:	89 04 24             	mov    %eax,(%esp)
 809ce1e:	ff d2                	call   *%edx
 809ce20:	01 45 14             	add    %eax,0x14(%ebp)
 809ce23:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809ce27:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809ce2a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809ce2d:	0f 9c c0             	setl   %al
 809ce30:	84 c0                	test   %al,%al
 809ce32:	75 ac                	jne    809cde0 <_ZN16CNCryptoSkipjack7DecryptEPKhiPhi+0x96>
 809ce34:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809ce39:	c9                   	leave
 809ce3a:	c3                   	ret
 809ce3b:	90                   	nop

```

```c
// CNCryptoSkipjack::Decrypt @ 0x809cd4a

/* CNCryptoSkipjack::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoSkipjack::Decrypt
          (CNCryptoSkipjack *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          skipjack_ecb_decrypt(param_1,param_3,psVar1);
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
// === 0809caa8 CNCryptoSkipjack::Encrypt  [0x0809caa8-0x809cb7f] ===
 809caa8:	55                   	push   %ebp
 809caa9:	89 e5                	mov    %esp,%ebp
 809caab:	83 ec 38             	sub    $0x38,%esp
 809caae:	8b 45 08             	mov    0x8(%ebp),%eax
 809cab1:	8b 40 08             	mov    0x8(%eax),%eax
 809cab4:	85 c0                	test   %eax,%eax
 809cab6:	75 0a                	jne    809cac2 <_ZN16CNCryptoSkipjack7EncryptEPhi+0x1a>
 809cab8:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809cabd:	e9 bb 00 00 00       	jmp    809cb7d <_ZN16CNCryptoSkipjack7EncryptEPhi+0xd5>
 809cac2:	8b 45 08             	mov    0x8(%ebp),%eax
 809cac5:	8b 00                	mov    (%eax),%eax
 809cac7:	83 c0 24             	add    $0x24,%eax
 809caca:	8b 10                	mov    (%eax),%edx
 809cacc:	8b 45 08             	mov    0x8(%ebp),%eax
 809cacf:	89 04 24             	mov    %eax,(%esp)
 809cad2:	ff d2                	call   *%edx
 809cad4:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809cad7:	8b 55 10             	mov    0x10(%ebp),%edx
 809cada:	89 d0                	mov    %edx,%eax
 809cadc:	c1 fa 1f             	sar    $0x1f,%edx
 809cadf:	f7 7d e0             	idivl  -0x20(%ebp)
 809cae2:	89 d0                	mov    %edx,%eax
 809cae4:	85 c0                	test   %eax,%eax
 809cae6:	0f 95 c0             	setne  %al
 809cae9:	84 c0                	test   %al,%al
 809caeb:	74 0a                	je     809caf7 <_ZN16CNCryptoSkipjack7EncryptEPhi+0x4f>
 809caed:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809caf2:	e9 86 00 00 00       	jmp    809cb7d <_ZN16CNCryptoSkipjack7EncryptEPhi+0xd5>
 809caf7:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 809cafb:	7f 07                	jg     809cb04 <_ZN16CNCryptoSkipjack7EncryptEPhi+0x5c>
 809cafd:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809cb02:	eb 79                	jmp    809cb7d <_ZN16CNCryptoSkipjack7EncryptEPhi+0xd5>
 809cb04:	8b 45 08             	mov    0x8(%ebp),%eax
 809cb07:	8b 40 08             	mov    0x8(%eax),%eax
 809cb0a:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809cb0d:	8b 45 08             	mov    0x8(%ebp),%eax
 809cb10:	8b 00                	mov    (%eax),%eax
 809cb12:	83 c0 24             	add    $0x24,%eax
 809cb15:	8b 10                	mov    (%eax),%edx
 809cb17:	8b 45 08             	mov    0x8(%ebp),%eax
 809cb1a:	89 04 24             	mov    %eax,(%esp)
 809cb1d:	ff d2                	call   *%edx
 809cb1f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809cb22:	8b 45 10             	mov    0x10(%ebp),%eax
 809cb25:	89 c2                	mov    %eax,%edx
 809cb27:	c1 fa 1f             	sar    $0x1f,%edx
 809cb2a:	f7 7d e4             	idivl  -0x1c(%ebp)
 809cb2d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809cb30:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809cb37:	eb 32                	jmp    809cb6b <_ZN16CNCryptoSkipjack7EncryptEPhi+0xc3>
 809cb39:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809cb3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 809cb40:	8b 45 0c             	mov    0xc(%ebp),%eax
 809cb43:	89 44 24 04          	mov    %eax,0x4(%esp)
 809cb47:	8b 45 0c             	mov    0xc(%ebp),%eax
 809cb4a:	89 04 24             	mov    %eax,(%esp)
 809cb4d:	e8 c8 64 02 00       	call   80c301a <_Z20skipjack_ecb_encryptPKhPhP13symmetric_key>
 809cb52:	8b 45 08             	mov    0x8(%ebp),%eax
 809cb55:	8b 00                	mov    (%eax),%eax
 809cb57:	83 c0 24             	add    $0x24,%eax
 809cb5a:	8b 10                	mov    (%eax),%edx
 809cb5c:	8b 45 08             	mov    0x8(%ebp),%eax
 809cb5f:	89 04 24             	mov    %eax,(%esp)
 809cb62:	ff d2                	call   *%edx
 809cb64:	01 45 0c             	add    %eax,0xc(%ebp)
 809cb67:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809cb6b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809cb6e:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809cb71:	0f 9c c0             	setl   %al
 809cb74:	84 c0                	test   %al,%al
 809cb76:	75 c1                	jne    809cb39 <_ZN16CNCryptoSkipjack7EncryptEPhi+0x91>
 809cb78:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809cb7d:	c9                   	leave
 809cb7e:	c3                   	ret
 809cb7f:	90                   	nop

```

```c
// CNCryptoSkipjack::Encrypt @ 0x809caa8

/* CNCryptoSkipjack::Encrypt(unsigned char*, int) */

undefined4 __thiscall CNCryptoSkipjack::Encrypt(CNCryptoSkipjack *this,uchar *param_1,int param_2)

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
          skipjack_ecb_encrypt(param_1,param_1,psVar1);
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

## Encrypt_0809cc58

```asm
// === 0809cc58 CNCryptoSkipjack::Encrypt  [0x0809cc58-0x809cd49] ===
 809cc58:	55                   	push   %ebp
 809cc59:	89 e5                	mov    %esp,%ebp
 809cc5b:	83 ec 38             	sub    $0x38,%esp
 809cc5e:	8b 45 08             	mov    0x8(%ebp),%eax
 809cc61:	8b 40 08             	mov    0x8(%eax),%eax
 809cc64:	85 c0                	test   %eax,%eax
 809cc66:	75 0a                	jne    809cc72 <_ZN16CNCryptoSkipjack7EncryptEPKhiPhi+0x1a>
 809cc68:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809cc6d:	e9 d5 00 00 00       	jmp    809cd47 <_ZN16CNCryptoSkipjack7EncryptEPKhiPhi+0xef>
 809cc72:	8b 45 08             	mov    0x8(%ebp),%eax
 809cc75:	8b 00                	mov    (%eax),%eax
 809cc77:	83 c0 24             	add    $0x24,%eax
 809cc7a:	8b 10                	mov    (%eax),%edx
 809cc7c:	8b 45 08             	mov    0x8(%ebp),%eax
 809cc7f:	89 04 24             	mov    %eax,(%esp)
 809cc82:	ff d2                	call   *%edx
 809cc84:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809cc87:	8b 55 10             	mov    0x10(%ebp),%edx
 809cc8a:	89 d0                	mov    %edx,%eax
 809cc8c:	c1 fa 1f             	sar    $0x1f,%edx
 809cc8f:	f7 7d e0             	idivl  -0x20(%ebp)
 809cc92:	89 d0                	mov    %edx,%eax
 809cc94:	85 c0                	test   %eax,%eax
 809cc96:	0f 95 c0             	setne  %al
 809cc99:	84 c0                	test   %al,%al
 809cc9b:	74 0a                	je     809cca7 <_ZN16CNCryptoSkipjack7EncryptEPKhiPhi+0x4f>
 809cc9d:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809cca2:	e9 a0 00 00 00       	jmp    809cd47 <_ZN16CNCryptoSkipjack7EncryptEPKhiPhi+0xef>
 809cca7:	8b 45 10             	mov    0x10(%ebp),%eax
 809ccaa:	3b 45 18             	cmp    0x18(%ebp),%eax
 809ccad:	7e 0a                	jle    809ccb9 <_ZN16CNCryptoSkipjack7EncryptEPKhiPhi+0x61>
 809ccaf:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809ccb4:	e9 8e 00 00 00       	jmp    809cd47 <_ZN16CNCryptoSkipjack7EncryptEPKhiPhi+0xef>
 809ccb9:	8b 45 08             	mov    0x8(%ebp),%eax
 809ccbc:	8b 40 08             	mov    0x8(%eax),%eax
 809ccbf:	89 45 ec             	mov    %eax,-0x14(%ebp)
 809ccc2:	8b 45 08             	mov    0x8(%ebp),%eax
 809ccc5:	8b 00                	mov    (%eax),%eax
 809ccc7:	83 c0 24             	add    $0x24,%eax
 809ccca:	8b 10                	mov    (%eax),%edx
 809cccc:	8b 45 08             	mov    0x8(%ebp),%eax
 809cccf:	89 04 24             	mov    %eax,(%esp)
 809ccd2:	ff d2                	call   *%edx
 809ccd4:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809ccd7:	8b 45 10             	mov    0x10(%ebp),%eax
 809ccda:	89 c2                	mov    %eax,%edx
 809ccdc:	c1 fa 1f             	sar    $0x1f,%edx
 809ccdf:	f7 7d e4             	idivl  -0x1c(%ebp)
 809cce2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809cce5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809ccec:	eb 47                	jmp    809cd35 <_ZN16CNCryptoSkipjack7EncryptEPKhiPhi+0xdd>
 809ccee:	8b 45 ec             	mov    -0x14(%ebp),%eax
 809ccf1:	89 44 24 08          	mov    %eax,0x8(%esp)
 809ccf5:	8b 45 14             	mov    0x14(%ebp),%eax
 809ccf8:	89 44 24 04          	mov    %eax,0x4(%esp)
 809ccfc:	8b 45 0c             	mov    0xc(%ebp),%eax
 809ccff:	89 04 24             	mov    %eax,(%esp)
 809cd02:	e8 13 63 02 00       	call   80c301a <_Z20skipjack_ecb_encryptPKhPhP13symmetric_key>
 809cd07:	8b 45 08             	mov    0x8(%ebp),%eax
 809cd0a:	8b 00                	mov    (%eax),%eax
 809cd0c:	83 c0 24             	add    $0x24,%eax
 809cd0f:	8b 10                	mov    (%eax),%edx
 809cd11:	8b 45 08             	mov    0x8(%ebp),%eax
 809cd14:	89 04 24             	mov    %eax,(%esp)
 809cd17:	ff d2                	call   *%edx
 809cd19:	01 45 0c             	add    %eax,0xc(%ebp)
 809cd1c:	8b 45 08             	mov    0x8(%ebp),%eax
 809cd1f:	8b 00                	mov    (%eax),%eax
 809cd21:	83 c0 24             	add    $0x24,%eax
 809cd24:	8b 10                	mov    (%eax),%edx
 809cd26:	8b 45 08             	mov    0x8(%ebp),%eax
 809cd29:	89 04 24             	mov    %eax,(%esp)
 809cd2c:	ff d2                	call   *%edx
 809cd2e:	01 45 14             	add    %eax,0x14(%ebp)
 809cd31:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809cd35:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809cd38:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809cd3b:	0f 9c c0             	setl   %al
 809cd3e:	84 c0                	test   %al,%al
 809cd40:	75 ac                	jne    809ccee <_ZN16CNCryptoSkipjack7EncryptEPKhiPhi+0x96>
 809cd42:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809cd47:	c9                   	leave
 809cd48:	c3                   	ret
 809cd49:	90                   	nop

```

```c
// CNCryptoSkipjack::Encrypt @ 0x809cc58

/* CNCryptoSkipjack::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoSkipjack::Encrypt
          (CNCryptoSkipjack *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
          skipjack_ecb_encrypt(param_1,param_3,psVar1);
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
// === 0809ce3c CNCryptoSkipjack::GetBlockSize  [0x0809ce3c-0x809ce45] ===
 809ce3c:	55                   	push   %ebp
 809ce3d:	89 e5                	mov    %esp,%ebp
 809ce3f:	b8 08 00 00 00       	mov    $0x8,%eax
 809ce44:	5d                   	pop    %ebp
 809ce45:	c3                   	ret

```

```c
// CNCryptoSkipjack::GetBlockSize @ 0x809ce3c

/* CNCryptoSkipjack::GetBlockSize() const */

undefined4 CNCryptoSkipjack::GetBlockSize(void)

{
  return 8;
}

```

---

## GetKeySize

```asm
// === 0809ce46 CNCryptoSkipjack::GetKeySize  [0x0809ce46-0x809ce4f] ===
 809ce46:	55                   	push   %ebp
 809ce47:	89 e5                	mov    %esp,%ebp
 809ce49:	b8 0a 00 00 00       	mov    $0xa,%eax
 809ce4e:	5d                   	pop    %ebp
 809ce4f:	c3                   	ret

```

```c
// CNCryptoSkipjack::GetKeySize @ 0x809ce46

/* CNCryptoSkipjack::GetKeySize() const */

undefined4 CNCryptoSkipjack::GetKeySize(void)

{
  return 10;
}

```

---

## Initialize

```asm
// === 0809ca00 CNCryptoSkipjack::Initialize  [0x0809ca00-0x809caa7] ===
 809ca00:	55                   	push   %ebp
 809ca01:	89 e5                	mov    %esp,%ebp
 809ca03:	83 ec 28             	sub    $0x28,%esp
 809ca06:	8b 45 08             	mov    0x8(%ebp),%eax
 809ca09:	8b 40 08             	mov    0x8(%eax),%eax
 809ca0c:	85 c0                	test   %eax,%eax
 809ca0e:	75 0a                	jne    809ca1a <_ZN16CNCryptoSkipjack10InitializeEPKhi+0x1a>
 809ca10:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809ca15:	e9 8b 00 00 00       	jmp    809caa5 <_ZN16CNCryptoSkipjack10InitializeEPKhi+0xa5>
 809ca1a:	8b 45 08             	mov    0x8(%ebp),%eax
 809ca1d:	8b 00                	mov    (%eax),%eax
 809ca1f:	83 c0 20             	add    $0x20,%eax
 809ca22:	8b 10                	mov    (%eax),%edx
 809ca24:	8b 45 08             	mov    0x8(%ebp),%eax
 809ca27:	89 04 24             	mov    %eax,(%esp)
 809ca2a:	ff d2                	call   *%edx
 809ca2c:	3b 45 10             	cmp    0x10(%ebp),%eax
 809ca2f:	0f 9f c0             	setg   %al
 809ca32:	84 c0                	test   %al,%al
 809ca34:	74 07                	je     809ca3d <_ZN16CNCryptoSkipjack10InitializeEPKhi+0x3d>
 809ca36:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809ca3b:	eb 68                	jmp    809caa5 <_ZN16CNCryptoSkipjack10InitializeEPKhi+0xa5>
 809ca3d:	8b 45 08             	mov    0x8(%ebp),%eax
 809ca40:	8b 40 08             	mov    0x8(%eax),%eax
 809ca43:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809ca46:	8b 45 08             	mov    0x8(%ebp),%eax
 809ca49:	8b 00                	mov    (%eax),%eax
 809ca4b:	83 c0 20             	add    $0x20,%eax
 809ca4e:	8b 10                	mov    (%eax),%edx
 809ca50:	8b 45 08             	mov    0x8(%ebp),%eax
 809ca53:	89 04 24             	mov    %eax,(%esp)
 809ca56:	ff d2                	call   *%edx
 809ca58:	8b 55 f0             	mov    -0x10(%ebp),%edx
 809ca5b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 809ca5f:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 809ca66:	00 
 809ca67:	89 44 24 04          	mov    %eax,0x4(%esp)
 809ca6b:	8b 45 0c             	mov    0xc(%ebp),%eax
 809ca6e:	89 04 24             	mov    %eax,(%esp)
 809ca71:	e8 56 61 02 00       	call   80c2bcc <_Z14skipjack_setupPKhiiP13symmetric_key>
 809ca76:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809ca79:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809ca7d:	75 07                	jne    809ca86 <_ZN16CNCryptoSkipjack10InitializeEPKhi+0x86>
 809ca7f:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809ca84:	eb 1f                	jmp    809caa5 <_ZN16CNCryptoSkipjack10InitializeEPKhi+0xa5>
 809ca86:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 809ca8a:	75 07                	jne    809ca93 <_ZN16CNCryptoSkipjack10InitializeEPKhi+0x93>
 809ca8c:	b8 02 00 00 70       	mov    $0x70000002,%eax
 809ca91:	eb 12                	jmp    809caa5 <_ZN16CNCryptoSkipjack10InitializeEPKhi+0xa5>
 809ca93:	83 7d f4 04          	cmpl   $0x4,-0xc(%ebp)
 809ca97:	75 07                	jne    809caa0 <_ZN16CNCryptoSkipjack10InitializeEPKhi+0xa0>
 809ca99:	b8 1a 00 00 70       	mov    $0x7000001a,%eax
 809ca9e:	eb 05                	jmp    809caa5 <_ZN16CNCryptoSkipjack10InitializeEPKhi+0xa5>
 809caa0:	b8 00 00 00 70       	mov    $0x70000000,%eax
 809caa5:	c9                   	leave
 809caa6:	c3                   	ret
 809caa7:	90                   	nop

```

```c
// CNCryptoSkipjack::Initialize @ 0x809ca00

/* CNCryptoSkipjack::Initialize(unsigned char const*, int) */

undefined4 __thiscall
CNCryptoSkipjack::Initialize(CNCryptoSkipjack *this,uchar *param_1,int param_2)

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
      iVar3 = skipjack_setup(param_1,iVar3,0x20,psVar1);
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
// === 0809c9e8 CNCryptoSkipjack::SetMode  [0x0809c9e8-0x809c9ff] ===
 809c9e8:	55                   	push   %ebp
 809c9e9:	89 e5                	mov    %esp,%ebp
 809c9eb:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 809c9ef:	75 07                	jne    809c9f8 <_ZN16CNCryptoSkipjack7SetModeE16CRYPTO_MODE_TYPE+0x10>
 809c9f1:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809c9f6:	eb 05                	jmp    809c9fd <_ZN16CNCryptoSkipjack7SetModeE16CRYPTO_MODE_TYPE+0x15>
 809c9f8:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809c9fd:	5d                   	pop    %ebp
 809c9fe:	c3                   	ret
 809c9ff:	90                   	nop

```

```c
// CNCryptoSkipjack::SetMode @ 0x809c9e8

/* CNCryptoSkipjack::SetMode(CRYPTO_MODE_TYPE) */

undefined4 __thiscall CNCryptoSkipjack::SetMode(undefined4 this,int param_2)

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
// === 0809c9e0 CNCryptoSkipjack::operator=  [0x0809c9e0-0x809c9e7] ===
 809c9e0:	55                   	push   %ebp
 809c9e1:	89 e5                	mov    %esp,%ebp
 809c9e3:	8b 45 08             	mov    0x8(%ebp),%eax
 809c9e6:	5d                   	pop    %ebp
 809c9e7:	c3                   	ret

```

```c
// CNCryptoSkipjack::operator= @ 0x809c9e0

/* CNCryptoSkipjack::TEMPNAMEPLACEHOLDERVALUE(CNCryptoSkipjack const&) */

CNCryptoSkipjack * __thiscall
CNCryptoSkipjack::operator=(CNCryptoSkipjack *this,CNCryptoSkipjack *param_1)

{
  return this;
}

```

---

## ~CNCryptoSkipjack

```asm
// === 0809c94a CNCryptoSkipjack::~CNCryptoSkipjack  [0x0809c94a-0x809c99d] ===
 809c94a:	55                   	push   %ebp
 809c94b:	89 e5                	mov    %esp,%ebp
 809c94d:	83 ec 28             	sub    $0x28,%esp
 809c950:	8b 45 08             	mov    0x8(%ebp),%eax
 809c953:	c7 00 48 3a b1 08    	movl   $0x8b13a48,(%eax)
 809c959:	8b 45 08             	mov    0x8(%ebp),%eax
 809c95c:	8b 40 08             	mov    0x8(%eax),%eax
 809c95f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 809c962:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 809c966:	74 15                	je     809c97d <_ZN16CNCryptoSkipjackD1Ev+0x33>
 809c968:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809c96b:	89 04 24             	mov    %eax,(%esp)
 809c96e:	e8 7d 7b 68 00       	call   87244f0 <_ZdlPv>
 809c973:	8b 45 08             	mov    0x8(%ebp),%eax
 809c976:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809c97d:	8b 45 08             	mov    0x8(%ebp),%eax
 809c980:	89 04 24             	mov    %eax,(%esp)
 809c983:	e8 80 15 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809c988:	b8 00 00 00 00       	mov    $0x0,%eax
 809c98d:	84 c0                	test   %al,%al
 809c98f:	74 0b                	je     809c99c <_ZN16CNCryptoSkipjackD1Ev+0x52>
 809c991:	8b 45 08             	mov    0x8(%ebp),%eax
 809c994:	89 04 24             	mov    %eax,(%esp)
 809c997:	e8 54 7b 68 00       	call   87244f0 <_ZdlPv>
 809c99c:	c9                   	leave
 809c99d:	c3                   	ret

```

```c
// CNCryptoSkipjack::~CNCryptoSkipjack @ 0x809c94a

/* WARNING: Removing unreachable block (ram,0x0809c991) */
/* CNCryptoSkipjack::~CNCryptoSkipjack() */

void __thiscall CNCryptoSkipjack::~CNCryptoSkipjack(CNCryptoSkipjack *this)

{
  *(undefined ***)this = &PTR__CNCryptoSkipjack_08b13a48;
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoSkipjack_0809c99e

```asm
// === 0809c99e CNCryptoSkipjack::~CNCryptoSkipjack  [0x0809c99e-0x809c9bb] ===
 809c99e:	55                   	push   %ebp
 809c99f:	89 e5                	mov    %esp,%ebp
 809c9a1:	83 ec 18             	sub    $0x18,%esp
 809c9a4:	8b 45 08             	mov    0x8(%ebp),%eax
 809c9a7:	89 04 24             	mov    %eax,(%esp)
 809c9aa:	e8 9b ff ff ff       	call   809c94a <_ZN16CNCryptoSkipjackD1Ev>
 809c9af:	8b 45 08             	mov    0x8(%ebp),%eax
 809c9b2:	89 04 24             	mov    %eax,(%esp)
 809c9b5:	e8 36 7b 68 00       	call   87244f0 <_ZdlPv>
 809c9ba:	c9                   	leave
 809c9bb:	c3                   	ret

```

```c
// CNCryptoSkipjack::~CNCryptoSkipjack @ 0x809c99e

/* CNCryptoSkipjack::~CNCryptoSkipjack() */

void __thiscall CNCryptoSkipjack::~CNCryptoSkipjack(CNCryptoSkipjack *this)

{
  ~CNCryptoSkipjack(this);
  operator_delete(this);
  return;
}

```

