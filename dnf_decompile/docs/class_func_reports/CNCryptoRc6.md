# CNCryptoRc6

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 13

---

## CNCryptoRc6

```asm
// === 0809bb40 CNCryptoRc6::CNCryptoRc6  [0x0809bb40-0x809bbdd] ===
 809bb40:	55                   	push   %ebp
 809bb41:	89 e5                	mov    %esp,%ebp
 809bb43:	56                   	push   %esi
 809bb44:	53                   	push   %ebx
 809bb45:	83 ec 50             	sub    $0x50,%esp
 809bb48:	8b 45 08             	mov    0x8(%ebp),%eax
 809bb4b:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 809bb52:	00 
 809bb53:	89 04 24             	mov    %eax,(%esp)
 809bb56:	e8 95 23 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809bb5b:	8b 45 08             	mov    0x8(%ebp),%eax
 809bb5e:	c7 00 28 39 b1 08    	movl   $0x8b13928,(%eax)
 809bb64:	8b 45 08             	mov    0x8(%ebp),%eax
 809bb67:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809bb6e:	c7 04 24 4c 00 00 00 	movl   $0x4c,(%esp)
 809bb75:	e8 d6 88 68 00       	call   8724450 <_Znwj>
 809bb7a:	89 c2                	mov    %eax,%edx
 809bb7c:	8b 45 08             	mov    0x8(%ebp),%eax
 809bb7f:	89 50 08             	mov    %edx,0x8(%eax)
 809bb82:	8b 45 08             	mov    0x8(%ebp),%eax
 809bb85:	8b 40 08             	mov    0x8(%eax),%eax
 809bb88:	85 c0                	test   %eax,%eax
 809bb8a:	74 4a                	je     809bbd6 <_ZN11CNCryptoRc6C1Ev+0x96>
 809bb8c:	c7 44 24 04 3c 00 00 	movl   $0x3c,0x4(%esp)
 809bb93:	00 
 809bb94:	8d 45 bc             	lea    -0x44(%ebp),%eax
 809bb97:	89 04 24             	mov    %eax,(%esp)
 809bb9a:	e8 13 2b 00 00       	call   809e6b2 <_Z17GenerateRandomKeyPhi>
 809bb9f:	c7 44 24 08 3c 00 00 	movl   $0x3c,0x8(%esp)
 809bba6:	00 
 809bba7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 809bbaa:	89 44 24 04          	mov    %eax,0x4(%esp)
 809bbae:	8b 45 08             	mov    0x8(%ebp),%eax
 809bbb1:	89 04 24             	mov    %eax,(%esp)
 809bbb4:	e8 cb 00 00 00       	call   809bc84 <_ZN11CNCryptoRc610InitializeEPKhi>
 809bbb9:	eb 1b                	jmp    809bbd6 <_ZN11CNCryptoRc6C1Ev+0x96>
 809bbbb:	89 d3                	mov    %edx,%ebx
 809bbbd:	89 c6                	mov    %eax,%esi
 809bbbf:	8b 45 08             	mov    0x8(%ebp),%eax
 809bbc2:	89 04 24             	mov    %eax,(%esp)
 809bbc5:	e8 3e 23 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809bbca:	89 f0                	mov    %esi,%eax
 809bbcc:	89 da                	mov    %ebx,%edx
 809bbce:	89 04 24             	mov    %eax,(%esp)
 809bbd1:	e8 7a 7b a4 00       	call   8ae3750 <_Unwind_Resume>
 809bbd6:	83 c4 50             	add    $0x50,%esp
 809bbd9:	5b                   	pop    %ebx
 809bbda:	5e                   	pop    %esi
 809bbdb:	5d                   	pop    %ebp
 809bbdc:	c3                   	ret
 809bbdd:	90                   	nop

```

```c
// CNCryptoRc6::CNCryptoRc6 @ 0x809bb40

/* CNCryptoRc6::CNCryptoRc6() */

void __thiscall CNCryptoRc6::CNCryptoRc6(CNCryptoRc6 *this)

{
  void *pvVar1;
  uchar local_48 [60];
  
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,3);
  *(undefined ***)this = &PTR__CNCryptoRc6_08b13928;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 0809bb75 to 0809bbb8 has its CatchHandler @ 0809bbbb */
  pvVar1 = operator_new(0x4c);
  *(void **)(this + 8) = pvVar1;
  if (*(int *)(this + 8) != 0) {
    GenerateRandomKey(local_48,0x3c);
    Initialize(this,local_48,0x3c);
  }
  return;
}

```

---

## CNCryptoRc6_0809bc4e

```asm
// === 0809bc4e CNCryptoRc6::CNCryptoRc6  [0x0809bc4e-0x809bc71] ===
 809bc4e:	55                   	push   %ebp
 809bc4f:	89 e5                	mov    %esp,%ebp
 809bc51:	83 ec 18             	sub    $0x18,%esp
 809bc54:	8b 45 08             	mov    0x8(%ebp),%eax
 809bc57:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 809bc5e:	00 
 809bc5f:	89 04 24             	mov    %eax,(%esp)
 809bc62:	e8 89 22 00 00       	call   809def0 <_ZN12ICryptoGraphC1E17CRYPTO_GRAPH_TYPE>
 809bc67:	8b 45 08             	mov    0x8(%ebp),%eax
 809bc6a:	c7 00 28 39 b1 08    	movl   $0x8b13928,(%eax)
 809bc70:	c9                   	leave
 809bc71:	c3                   	ret

```

```c
// CNCryptoRc6::CNCryptoRc6 @ 0x809bc4e

/* CNCryptoRc6::CNCryptoRc6(CNCryptoRc6 const&) */

void __thiscall CNCryptoRc6::CNCryptoRc6(CNCryptoRc6 *this,CNCryptoRc6 *param_1)

{
  ICryptoGraph::ICryptoGraph((ICryptoGraph *)this,3);
  *(undefined ***)this = &PTR__CNCryptoRc6_08b13928;
  return;
}

```

---

## Decrypt

```asm
// === 0809bd10 CNCryptoRc6::Decrypt  [0x0809bd10-0x809bd19] ===
 809bd10:	55                   	push   %ebp
 809bd11:	89 e5                	mov    %esp,%ebp
 809bd13:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809bd18:	5d                   	pop    %ebp
 809bd19:	c3                   	ret

```

```c
// CNCryptoRc6::Decrypt @ 0x809bd10

/* CNCryptoRc6::Decrypt(unsigned char*, int) */

undefined4 CNCryptoRc6::Decrypt(uchar *param_1,int param_2)

{
  return 0x70000017;
}

```

---

## Decrypt_0809be06

```asm
// === 0809be06 CNCryptoRc6::Decrypt  [0x0809be06-0x809bef1] ===
 809be06:	55                   	push   %ebp
 809be07:	89 e5                	mov    %esp,%ebp
 809be09:	83 ec 38             	sub    $0x38,%esp
 809be0c:	8b 45 08             	mov    0x8(%ebp),%eax
 809be0f:	8b 40 08             	mov    0x8(%eax),%eax
 809be12:	85 c0                	test   %eax,%eax
 809be14:	75 0a                	jne    809be20 <_ZN11CNCryptoRc67DecryptEPKhiPhi+0x1a>
 809be16:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809be1b:	e9 cf 00 00 00       	jmp    809beef <_ZN11CNCryptoRc67DecryptEPKhiPhi+0xe9>
 809be20:	8b 45 08             	mov    0x8(%ebp),%eax
 809be23:	8b 00                	mov    (%eax),%eax
 809be25:	83 c0 24             	add    $0x24,%eax
 809be28:	8b 10                	mov    (%eax),%edx
 809be2a:	8b 45 08             	mov    0x8(%ebp),%eax
 809be2d:	89 04 24             	mov    %eax,(%esp)
 809be30:	ff d2                	call   *%edx
 809be32:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809be35:	8b 55 10             	mov    0x10(%ebp),%edx
 809be38:	89 d0                	mov    %edx,%eax
 809be3a:	c1 fa 1f             	sar    $0x1f,%edx
 809be3d:	f7 7d e0             	idivl  -0x20(%ebp)
 809be40:	89 d0                	mov    %edx,%eax
 809be42:	85 c0                	test   %eax,%eax
 809be44:	0f 95 c0             	setne  %al
 809be47:	84 c0                	test   %al,%al
 809be49:	74 0a                	je     809be55 <_ZN11CNCryptoRc67DecryptEPKhiPhi+0x4f>
 809be4b:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809be50:	e9 9a 00 00 00       	jmp    809beef <_ZN11CNCryptoRc67DecryptEPKhiPhi+0xe9>
 809be55:	8b 45 10             	mov    0x10(%ebp),%eax
 809be58:	3b 45 18             	cmp    0x18(%ebp),%eax
 809be5b:	7e 0a                	jle    809be67 <_ZN11CNCryptoRc67DecryptEPKhiPhi+0x61>
 809be5d:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809be62:	e9 88 00 00 00       	jmp    809beef <_ZN11CNCryptoRc67DecryptEPKhiPhi+0xe9>
 809be67:	8b 45 08             	mov    0x8(%ebp),%eax
 809be6a:	8b 00                	mov    (%eax),%eax
 809be6c:	83 c0 24             	add    $0x24,%eax
 809be6f:	8b 10                	mov    (%eax),%edx
 809be71:	8b 45 08             	mov    0x8(%ebp),%eax
 809be74:	89 04 24             	mov    %eax,(%esp)
 809be77:	ff d2                	call   *%edx
 809be79:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809be7c:	8b 45 10             	mov    0x10(%ebp),%eax
 809be7f:	89 c2                	mov    %eax,%edx
 809be81:	c1 fa 1f             	sar    $0x1f,%edx
 809be84:	f7 7d e4             	idivl  -0x1c(%ebp)
 809be87:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809be8a:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809be91:	eb 4a                	jmp    809bedd <_ZN11CNCryptoRc67DecryptEPKhiPhi+0xd7>
 809be93:	8b 4d 14             	mov    0x14(%ebp),%ecx
 809be96:	8b 55 0c             	mov    0xc(%ebp),%edx
 809be99:	8b 45 08             	mov    0x8(%ebp),%eax
 809be9c:	8b 40 08             	mov    0x8(%eax),%eax
 809be9f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 809bea3:	89 54 24 04          	mov    %edx,0x4(%esp)
 809bea7:	89 04 24             	mov    %eax,(%esp)
 809beaa:	e8 58 a0 01 00       	call   80b5f07 <_Z17rc6_block_decryptPK12RC6_ALG_INFOPKjPj>
 809beaf:	8b 45 08             	mov    0x8(%ebp),%eax
 809beb2:	8b 00                	mov    (%eax),%eax
 809beb4:	83 c0 24             	add    $0x24,%eax
 809beb7:	8b 10                	mov    (%eax),%edx
 809beb9:	8b 45 08             	mov    0x8(%ebp),%eax
 809bebc:	89 04 24             	mov    %eax,(%esp)
 809bebf:	ff d2                	call   *%edx
 809bec1:	01 45 0c             	add    %eax,0xc(%ebp)
 809bec4:	8b 45 08             	mov    0x8(%ebp),%eax
 809bec7:	8b 00                	mov    (%eax),%eax
 809bec9:	83 c0 24             	add    $0x24,%eax
 809becc:	8b 10                	mov    (%eax),%edx
 809bece:	8b 45 08             	mov    0x8(%ebp),%eax
 809bed1:	89 04 24             	mov    %eax,(%esp)
 809bed4:	ff d2                	call   *%edx
 809bed6:	01 45 14             	add    %eax,0x14(%ebp)
 809bed9:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809bedd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809bee0:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809bee3:	0f 9c c0             	setl   %al
 809bee6:	84 c0                	test   %al,%al
 809bee8:	75 a9                	jne    809be93 <_ZN11CNCryptoRc67DecryptEPKhiPhi+0x8d>
 809beea:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809beef:	c9                   	leave
 809bef0:	c3                   	ret
 809bef1:	90                   	nop

```

```c
// CNCryptoRc6::Decrypt @ 0x809be06

/* CNCryptoRc6::Decrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoRc6::Decrypt(CNCryptoRc6 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      if (param_4 < param_2) {
        uVar1 = 0x7000000a;
      }
      else {
        iVar2 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar2; local_10 = local_10 + 1) {
          rc6_block_decrypt(*(RC6_ALG_INFO **)(this + 8),(uint *)param_1,(uint *)param_3);
          iVar3 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar3;
          iVar3 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar3;
        }
        uVar1 = 0x6fffffff;
      }
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}

```

---

## Encrypt

```asm
// === 0809bd06 CNCryptoRc6::Encrypt  [0x0809bd06-0x809bd0f] ===
 809bd06:	55                   	push   %ebp
 809bd07:	89 e5                	mov    %esp,%ebp
 809bd09:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809bd0e:	5d                   	pop    %ebp
 809bd0f:	c3                   	ret

```

```c
// CNCryptoRc6::Encrypt @ 0x809bd06

/* CNCryptoRc6::Encrypt(unsigned char*, int) */

undefined4 CNCryptoRc6::Encrypt(uchar *param_1,int param_2)

{
  return 0x70000017;
}

```

---

## Encrypt_0809bd1a

```asm
// === 0809bd1a CNCryptoRc6::Encrypt  [0x0809bd1a-0x809be05] ===
 809bd1a:	55                   	push   %ebp
 809bd1b:	89 e5                	mov    %esp,%ebp
 809bd1d:	83 ec 38             	sub    $0x38,%esp
 809bd20:	8b 45 08             	mov    0x8(%ebp),%eax
 809bd23:	8b 40 08             	mov    0x8(%eax),%eax
 809bd26:	85 c0                	test   %eax,%eax
 809bd28:	75 0a                	jne    809bd34 <_ZN11CNCryptoRc67EncryptEPKhiPhi+0x1a>
 809bd2a:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809bd2f:	e9 cf 00 00 00       	jmp    809be03 <_ZN11CNCryptoRc67EncryptEPKhiPhi+0xe9>
 809bd34:	8b 45 08             	mov    0x8(%ebp),%eax
 809bd37:	8b 00                	mov    (%eax),%eax
 809bd39:	83 c0 24             	add    $0x24,%eax
 809bd3c:	8b 10                	mov    (%eax),%edx
 809bd3e:	8b 45 08             	mov    0x8(%ebp),%eax
 809bd41:	89 04 24             	mov    %eax,(%esp)
 809bd44:	ff d2                	call   *%edx
 809bd46:	89 45 e0             	mov    %eax,-0x20(%ebp)
 809bd49:	8b 55 10             	mov    0x10(%ebp),%edx
 809bd4c:	89 d0                	mov    %edx,%eax
 809bd4e:	c1 fa 1f             	sar    $0x1f,%edx
 809bd51:	f7 7d e0             	idivl  -0x20(%ebp)
 809bd54:	89 d0                	mov    %edx,%eax
 809bd56:	85 c0                	test   %eax,%eax
 809bd58:	0f 95 c0             	setne  %al
 809bd5b:	84 c0                	test   %al,%al
 809bd5d:	74 0a                	je     809bd69 <_ZN11CNCryptoRc67EncryptEPKhiPhi+0x4f>
 809bd5f:	b8 06 00 00 70       	mov    $0x70000006,%eax
 809bd64:	e9 9a 00 00 00       	jmp    809be03 <_ZN11CNCryptoRc67EncryptEPKhiPhi+0xe9>
 809bd69:	8b 45 10             	mov    0x10(%ebp),%eax
 809bd6c:	3b 45 18             	cmp    0x18(%ebp),%eax
 809bd6f:	7e 0a                	jle    809bd7b <_ZN11CNCryptoRc67EncryptEPKhiPhi+0x61>
 809bd71:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 809bd76:	e9 88 00 00 00       	jmp    809be03 <_ZN11CNCryptoRc67EncryptEPKhiPhi+0xe9>
 809bd7b:	8b 45 08             	mov    0x8(%ebp),%eax
 809bd7e:	8b 00                	mov    (%eax),%eax
 809bd80:	83 c0 24             	add    $0x24,%eax
 809bd83:	8b 10                	mov    (%eax),%edx
 809bd85:	8b 45 08             	mov    0x8(%ebp),%eax
 809bd88:	89 04 24             	mov    %eax,(%esp)
 809bd8b:	ff d2                	call   *%edx
 809bd8d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 809bd90:	8b 45 10             	mov    0x10(%ebp),%eax
 809bd93:	89 c2                	mov    %eax,%edx
 809bd95:	c1 fa 1f             	sar    $0x1f,%edx
 809bd98:	f7 7d e4             	idivl  -0x1c(%ebp)
 809bd9b:	89 45 f0             	mov    %eax,-0x10(%ebp)
 809bd9e:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 809bda5:	eb 4a                	jmp    809bdf1 <_ZN11CNCryptoRc67EncryptEPKhiPhi+0xd7>
 809bda7:	8b 4d 14             	mov    0x14(%ebp),%ecx
 809bdaa:	8b 55 0c             	mov    0xc(%ebp),%edx
 809bdad:	8b 45 08             	mov    0x8(%ebp),%eax
 809bdb0:	8b 40 08             	mov    0x8(%eax),%eax
 809bdb3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 809bdb7:	89 54 24 04          	mov    %edx,0x4(%esp)
 809bdbb:	89 04 24             	mov    %eax,(%esp)
 809bdbe:	e8 ab 9f 01 00       	call   80b5d6e <_Z17rc6_block_encryptPK12RC6_ALG_INFOPKjPj>
 809bdc3:	8b 45 08             	mov    0x8(%ebp),%eax
 809bdc6:	8b 00                	mov    (%eax),%eax
 809bdc8:	83 c0 24             	add    $0x24,%eax
 809bdcb:	8b 10                	mov    (%eax),%edx
 809bdcd:	8b 45 08             	mov    0x8(%ebp),%eax
 809bdd0:	89 04 24             	mov    %eax,(%esp)
 809bdd3:	ff d2                	call   *%edx
 809bdd5:	01 45 0c             	add    %eax,0xc(%ebp)
 809bdd8:	8b 45 08             	mov    0x8(%ebp),%eax
 809bddb:	8b 00                	mov    (%eax),%eax
 809bddd:	83 c0 24             	add    $0x24,%eax
 809bde0:	8b 10                	mov    (%eax),%edx
 809bde2:	8b 45 08             	mov    0x8(%ebp),%eax
 809bde5:	89 04 24             	mov    %eax,(%esp)
 809bde8:	ff d2                	call   *%edx
 809bdea:	01 45 14             	add    %eax,0x14(%ebp)
 809bded:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 809bdf1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 809bdf4:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 809bdf7:	0f 9c c0             	setl   %al
 809bdfa:	84 c0                	test   %al,%al
 809bdfc:	75 a9                	jne    809bda7 <_ZN11CNCryptoRc67EncryptEPKhiPhi+0x8d>
 809bdfe:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809be03:	c9                   	leave
 809be04:	c3                   	ret
 809be05:	90                   	nop

```

```c
// CNCryptoRc6::Encrypt @ 0x809bd1a

/* CNCryptoRc6::Encrypt(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNCryptoRc6::Encrypt(CNCryptoRc6 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_10;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else {
    iVar2 = (**(code **)(*(int *)this + 0x24))(this);
    if (param_2 % iVar2 == 0) {
      if (param_4 < param_2) {
        uVar1 = 0x7000000a;
      }
      else {
        iVar2 = (**(code **)(*(int *)this + 0x24))(this);
        for (local_10 = 0; local_10 < param_2 / iVar2; local_10 = local_10 + 1) {
          rc6_block_encrypt(*(RC6_ALG_INFO **)(this + 8),(uint *)param_1,(uint *)param_3);
          iVar3 = (**(code **)(*(int *)this + 0x24))(this);
          param_1 = param_1 + iVar3;
          iVar3 = (**(code **)(*(int *)this + 0x24))(this);
          param_3 = param_3 + iVar3;
        }
        uVar1 = 0x6fffffff;
      }
    }
    else {
      uVar1 = 0x70000006;
    }
  }
  return uVar1;
}

```

---

## GetBlockSize

```asm
// === 0809befc CNCryptoRc6::GetBlockSize  [0x0809befc-0x809bf07] ===
 809befc:	55                   	push   %ebp
 809befd:	89 e5                	mov    %esp,%ebp
 809beff:	b8 10 00 00 00       	mov    $0x10,%eax
 809bf04:	5d                   	pop    %ebp
 809bf05:	c3                   	ret
 809bf06:	90                   	nop
 809bf07:	90                   	nop

```

```c
// CNCryptoRc6::GetBlockSize @ 0x809befc

/* CNCryptoRc6::GetBlockSize() const */

undefined4 CNCryptoRc6::GetBlockSize(void)

{
  return 0x10;
}

```

---

## GetKeySize

```asm
// === 0809bef2 CNCryptoRc6::GetKeySize  [0x0809bef2-0x809befb] ===
 809bef2:	55                   	push   %ebp
 809bef3:	89 e5                	mov    %esp,%ebp
 809bef5:	b8 3c 00 00 00       	mov    $0x3c,%eax
 809befa:	5d                   	pop    %ebp
 809befb:	c3                   	ret

```

```c
// CNCryptoRc6::GetKeySize @ 0x809bef2

/* CNCryptoRc6::GetKeySize() const */

undefined4 CNCryptoRc6::GetKeySize(void)

{
  return 0x3c;
}

```

---

## Initialize

```asm
// === 0809bc84 CNCryptoRc6::Initialize  [0x0809bc84-0x809bd05] ===
 809bc84:	55                   	push   %ebp
 809bc85:	89 e5                	mov    %esp,%ebp
 809bc87:	83 ec 18             	sub    $0x18,%esp
 809bc8a:	8b 45 08             	mov    0x8(%ebp),%eax
 809bc8d:	8b 40 08             	mov    0x8(%eax),%eax
 809bc90:	85 c0                	test   %eax,%eax
 809bc92:	75 07                	jne    809bc9b <_ZN11CNCryptoRc610InitializeEPKhi+0x17>
 809bc94:	b8 0c 00 00 70       	mov    $0x7000000c,%eax
 809bc99:	eb 69                	jmp    809bd04 <_ZN11CNCryptoRc610InitializeEPKhi+0x80>
 809bc9b:	83 7d 10 3b          	cmpl   $0x3b,0x10(%ebp)
 809bc9f:	7f 07                	jg     809bca8 <_ZN11CNCryptoRc610InitializeEPKhi+0x24>
 809bca1:	b8 02 00 00 70       	mov    $0x70000002,%eax
 809bca6:	eb 5c                	jmp    809bd04 <_ZN11CNCryptoRc610InitializeEPKhi+0x80>
 809bca8:	8b 45 08             	mov    0x8(%ebp),%eax
 809bcab:	8b 40 08             	mov    0x8(%eax),%eax
 809bcae:	c7 44 24 08 20 00 00 	movl   $0x20,0x8(%esp)
 809bcb5:	00 
 809bcb6:	8b 55 0c             	mov    0xc(%ebp),%edx
 809bcb9:	89 54 24 04          	mov    %edx,0x4(%esp)
 809bcbd:	89 04 24             	mov    %eax,(%esp)
 809bcc0:	e8 db 1b fe ff       	call   807d8a0 <memcpy@plt>
 809bcc5:	83 45 0c 20          	addl   $0x20,0xc(%ebp)
 809bcc9:	8b 45 08             	mov    0x8(%ebp),%eax
 809bccc:	8b 40 08             	mov    0x8(%eax),%eax
 809bccf:	8d 50 20             	lea    0x20(%eax),%edx
 809bcd2:	c7 44 24 08 2c 00 00 	movl   $0x2c,0x8(%esp)
 809bcd9:	00 
 809bcda:	8b 45 0c             	mov    0xc(%ebp),%eax
 809bcdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 809bce1:	89 14 24             	mov    %edx,(%esp)
 809bce4:	e8 b7 1b fe ff       	call   807d8a0 <memcpy@plt>
 809bce9:	8b 45 08             	mov    0x8(%ebp),%eax
 809bcec:	8b 40 08             	mov    0x8(%eax),%eax
 809bcef:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 809bcf6:	00 
 809bcf7:	89 04 24             	mov    %eax,(%esp)
 809bcfa:	e8 49 9e 01 00       	call   80b5b48 <_Z13rc6_key_setupP12RC6_ALG_INFOi>
 809bcff:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 809bd04:	c9                   	leave
 809bd05:	c3                   	ret

```

```c
// CNCryptoRc6::Initialize @ 0x809bc84

/* CNCryptoRc6::Initialize(unsigned char const*, int) */

undefined4 __thiscall CNCryptoRc6::Initialize(CNCryptoRc6 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x7000000c;
  }
  else if (param_2 < 0x3c) {
    uVar1 = 0x70000002;
  }
  else {
    memcpy(*(void **)(this + 8),param_1,0x20);
    memcpy((void *)(*(int *)(this + 8) + 0x20),param_1 + 0x20,0x2c);
    rc6_key_setup(*(RC6_ALG_INFO **)(this + 8),0x20);
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## SetMode

```asm
// === 0809bc7a CNCryptoRc6::SetMode  [0x0809bc7a-0x809bc83] ===
 809bc7a:	55                   	push   %ebp
 809bc7b:	89 e5                	mov    %esp,%ebp
 809bc7d:	b8 17 00 00 70       	mov    $0x70000017,%eax
 809bc82:	5d                   	pop    %ebp
 809bc83:	c3                   	ret

```

```c
// CNCryptoRc6::SetMode @ 0x809bc7a

/* CNCryptoRc6::SetMode(CRYPTO_MODE_TYPE) */

undefined4 CNCryptoRc6::SetMode(void)

{
  return 0x70000017;
}

```

---

## operator=

```asm
// === 0809bc72 CNCryptoRc6::operator=  [0x0809bc72-0x809bc79] ===
 809bc72:	55                   	push   %ebp
 809bc73:	89 e5                	mov    %esp,%ebp
 809bc75:	8b 45 08             	mov    0x8(%ebp),%eax
 809bc78:	5d                   	pop    %ebp
 809bc79:	c3                   	ret

```

```c
// CNCryptoRc6::operator= @ 0x809bc72

/* CNCryptoRc6::TEMPNAMEPLACEHOLDERVALUE(CNCryptoRc6 const&) */

CNCryptoRc6 * __thiscall CNCryptoRc6::operator=(CNCryptoRc6 *this,CNCryptoRc6 *param_1)

{
  return this;
}

```

---

## ~CNCryptoRc6

```asm
// === 0809bbde CNCryptoRc6::~CNCryptoRc6  [0x0809bbde-0x809bc2f] ===
 809bbde:	55                   	push   %ebp
 809bbdf:	89 e5                	mov    %esp,%ebp
 809bbe1:	83 ec 18             	sub    $0x18,%esp
 809bbe4:	8b 45 08             	mov    0x8(%ebp),%eax
 809bbe7:	c7 00 28 39 b1 08    	movl   $0x8b13928,(%eax)
 809bbed:	8b 45 08             	mov    0x8(%ebp),%eax
 809bbf0:	8b 40 08             	mov    0x8(%eax),%eax
 809bbf3:	85 c0                	test   %eax,%eax
 809bbf5:	74 18                	je     809bc0f <_ZN11CNCryptoRc6D1Ev+0x31>
 809bbf7:	8b 45 08             	mov    0x8(%ebp),%eax
 809bbfa:	8b 40 08             	mov    0x8(%eax),%eax
 809bbfd:	89 04 24             	mov    %eax,(%esp)
 809bc00:	e8 eb 88 68 00       	call   87244f0 <_ZdlPv>
 809bc05:	8b 45 08             	mov    0x8(%ebp),%eax
 809bc08:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 809bc0f:	8b 45 08             	mov    0x8(%ebp),%eax
 809bc12:	89 04 24             	mov    %eax,(%esp)
 809bc15:	e8 ee 22 00 00       	call   809df08 <_ZN12ICryptoGraphD1Ev>
 809bc1a:	b8 00 00 00 00       	mov    $0x0,%eax
 809bc1f:	84 c0                	test   %al,%al
 809bc21:	74 0b                	je     809bc2e <_ZN11CNCryptoRc6D1Ev+0x50>
 809bc23:	8b 45 08             	mov    0x8(%ebp),%eax
 809bc26:	89 04 24             	mov    %eax,(%esp)
 809bc29:	e8 c2 88 68 00       	call   87244f0 <_ZdlPv>
 809bc2e:	c9                   	leave
 809bc2f:	c3                   	ret

```

```c
// CNCryptoRc6::~CNCryptoRc6 @ 0x809bbde

/* WARNING: Removing unreachable block (ram,0x0809bc23) */
/* CNCryptoRc6::~CNCryptoRc6() */

void __thiscall CNCryptoRc6::~CNCryptoRc6(CNCryptoRc6 *this)

{
  *(undefined ***)this = &PTR__CNCryptoRc6_08b13928;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  ICryptoGraph::~ICryptoGraph((ICryptoGraph *)this);
  return;
}

```

---

## ~CNCryptoRc6_0809bc30

```asm
// === 0809bc30 CNCryptoRc6::~CNCryptoRc6  [0x0809bc30-0x809bc4d] ===
 809bc30:	55                   	push   %ebp
 809bc31:	89 e5                	mov    %esp,%ebp
 809bc33:	83 ec 18             	sub    $0x18,%esp
 809bc36:	8b 45 08             	mov    0x8(%ebp),%eax
 809bc39:	89 04 24             	mov    %eax,(%esp)
 809bc3c:	e8 9d ff ff ff       	call   809bbde <_ZN11CNCryptoRc6D1Ev>
 809bc41:	8b 45 08             	mov    0x8(%ebp),%eax
 809bc44:	89 04 24             	mov    %eax,(%esp)
 809bc47:	e8 a4 88 68 00       	call   87244f0 <_ZdlPv>
 809bc4c:	c9                   	leave
 809bc4d:	c3                   	ret

```

```c
// CNCryptoRc6::~CNCryptoRc6 @ 0x809bc30

/* CNCryptoRc6::~CNCryptoRc6() */

void __thiscall CNCryptoRc6::~CNCryptoRc6(CNCryptoRc6 *this)

{
  ~CNCryptoRc6(this);
  operator_delete(this);
  return;
}

```

