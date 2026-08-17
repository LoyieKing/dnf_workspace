# CTEA

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CTEA

```asm
// === 080c32f4 CTEA::CTEA  [0x080c32f4-0x80c339b] ===
 80c32f4:	55                   	push   %ebp
 80c32f5:	89 e5                	mov    %esp,%ebp
 80c32f7:	83 ec 18             	sub    $0x18,%esp
 80c32fa:	8b 45 08             	mov    0x8(%ebp),%eax
 80c32fd:	89 04 24             	mov    %eax,(%esp)
 80c3300:	e8 8f 0f ff ff       	call   80b4294 <_ZN7IMethodC1Ev>
 80c3305:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3308:	c7 00 88 33 b2 08    	movl   $0x8b23388,(%eax)
 80c330e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3311:	c7 40 08 08 00 00 00 	movl   $0x8,0x8(%eax)
 80c3318:	8b 45 08             	mov    0x8(%ebp),%eax
 80c331b:	c7 40 0c 10 00 00 00 	movl   $0x10,0xc(%eax)
 80c3322:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3325:	83 c0 18             	add    $0x18,%eax
 80c3328:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 80c332f:	00 
 80c3330:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c3337:	00 
 80c3338:	89 04 24             	mov    %eax,(%esp)
 80c333b:	e8 80 a9 fb ff       	call   807dcc0 <memset@plt>
 80c3340:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3343:	83 c0 38             	add    $0x38,%eax
 80c3346:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 80c334d:	00 
 80c334e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c3355:	00 
 80c3356:	89 04 24             	mov    %eax,(%esp)
 80c3359:	e8 62 a9 fb ff       	call   807dcc0 <memset@plt>
 80c335e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3361:	83 c0 40             	add    $0x40,%eax
 80c3364:	c7 44 24 08 08 00 00 	movl   $0x8,0x8(%esp)
 80c336b:	00 
 80c336c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c3373:	00 
 80c3374:	89 04 24             	mov    %eax,(%esp)
 80c3377:	e8 44 a9 fb ff       	call   807dcc0 <memset@plt>
 80c337c:	8b 45 08             	mov    0x8(%ebp),%eax
 80c337f:	83 c0 28             	add    $0x28,%eax
 80c3382:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 80c3389:	00 
 80c338a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 80c3391:	00 
 80c3392:	89 04 24             	mov    %eax,(%esp)
 80c3395:	e8 26 a9 fb ff       	call   807dcc0 <memset@plt>
 80c339a:	c9                   	leave
 80c339b:	c3                   	ret

```

```c
// CTEA::CTEA @ 0x80c32f4

/* CTEA::CTEA() */

void __thiscall CTEA::CTEA(CTEA *this)

{
  IMethod::IMethod((IMethod *)this);
  *(undefined ***)this = &PTR__CTEA_08b23388;
  *(undefined4 *)(this + 8) = 8;
  *(undefined4 *)(this + 0xc) = 0x10;
  memset(this + 0x18,0,0x10);
  memset(this + 0x38,0,8);
  memset(this + 0x40,0,8);
  memset(this + 0x28,0,0x10);
  return;
}

```

---

## Decrypt

```asm
// === 080c3afe CTEA::Decrypt  [0x080c3afe-0x80c3d13] ===
 80c3afe:	55                   	push   %ebp
 80c3aff:	89 e5                	mov    %esp,%ebp
 80c3b01:	83 ec 38             	sub    $0x38,%esp
 80c3b04:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3b07:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80c3b0b:	83 f0 01             	xor    $0x1,%eax
 80c3b0e:	84 c0                	test   %al,%al
 80c3b10:	74 0a                	je     80c3b1c <_ZN4CTEA7DecryptEPKcPcj+0x1e>
 80c3b12:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80c3b17:	e9 f6 01 00 00       	jmp    80c3d12 <_ZN4CTEA7DecryptEPKcPcj+0x214>
 80c3b1c:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 80c3b20:	74 18                	je     80c3b3a <_ZN4CTEA7DecryptEPKcPcj+0x3c>
 80c3b22:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3b25:	8b 40 08             	mov    0x8(%eax),%eax
 80c3b28:	89 c1                	mov    %eax,%ecx
 80c3b2a:	8b 45 14             	mov    0x14(%ebp),%eax
 80c3b2d:	ba 00 00 00 00       	mov    $0x0,%edx
 80c3b32:	f7 f1                	div    %ecx
 80c3b34:	89 d0                	mov    %edx,%eax
 80c3b36:	85 c0                	test   %eax,%eax
 80c3b38:	74 0a                	je     80c3b44 <_ZN4CTEA7DecryptEPKcPcj+0x46>
 80c3b3a:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 80c3b3f:	e9 ce 01 00 00       	jmp    80c3d12 <_ZN4CTEA7DecryptEPKcPcj+0x214>
 80c3b44:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3b47:	8b 40 10             	mov    0x10(%eax),%eax
 80c3b4a:	83 f8 01             	cmp    $0x1,%eax
 80c3b4d:	0f 85 a6 00 00 00    	jne    80c3bf9 <_ZN4CTEA7DecryptEPKcPcj+0xfb>
 80c3b53:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80c3b5a:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c3b5d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c3b60:	8b 45 10             	mov    0x10(%ebp),%eax
 80c3b63:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c3b66:	eb 6a                	jmp    80c3bd2 <_ZN4CTEA7DecryptEPKcPcj+0xd4>
 80c3b68:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c3b6b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c3b6e:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c3b72:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3b76:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3b79:	89 04 24             	mov    %eax,(%esp)
 80c3b7c:	e8 83 fc ff ff       	call   80c3804 <_ZN4CTEA12DecryptBlockEPKhPh>
 80c3b81:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3b84:	8d 50 40             	lea    0x40(%eax),%edx
 80c3b87:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3b8a:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c3b8e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c3b91:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c3b95:	89 04 24             	mov    %eax,(%esp)
 80c3b98:	e8 79 07 ff ff       	call   80b4316 <_ZN7IMethod3XorEPcPKc>
 80c3b9d:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3ba0:	8b 40 08             	mov    0x8(%eax),%eax
 80c3ba3:	8b 55 08             	mov    0x8(%ebp),%edx
 80c3ba6:	83 c2 40             	add    $0x40,%edx
 80c3ba9:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c3bad:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c3bb0:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3bb4:	89 14 24             	mov    %edx,(%esp)
 80c3bb7:	e8 e4 9c fb ff       	call   807d8a0 <memcpy@plt>
 80c3bbc:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3bbf:	8b 40 08             	mov    0x8(%eax),%eax
 80c3bc2:	01 45 f0             	add    %eax,-0x10(%ebp)
 80c3bc5:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3bc8:	8b 40 08             	mov    0x8(%eax),%eax
 80c3bcb:	01 45 f4             	add    %eax,-0xc(%ebp)
 80c3bce:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80c3bd2:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3bd5:	8b 40 08             	mov    0x8(%eax),%eax
 80c3bd8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80c3bdb:	8b 45 14             	mov    0x14(%ebp),%eax
 80c3bde:	ba 00 00 00 00       	mov    $0x0,%edx
 80c3be3:	f7 75 e4             	divl   -0x1c(%ebp)
 80c3be6:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80c3be9:	0f 97 c0             	seta   %al
 80c3bec:	84 c0                	test   %al,%al
 80c3bee:	0f 85 74 ff ff ff    	jne    80c3b68 <_ZN4CTEA7DecryptEPKcPcj+0x6a>
 80c3bf4:	e9 14 01 00 00       	jmp    80c3d0d <_ZN4CTEA7DecryptEPKcPcj+0x20f>
 80c3bf9:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3bfc:	8b 40 10             	mov    0x10(%eax),%eax
 80c3bff:	83 f8 02             	cmp    $0x2,%eax
 80c3c02:	0f 85 a3 00 00 00    	jne    80c3cab <_ZN4CTEA7DecryptEPKcPcj+0x1ad>
 80c3c08:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80c3c0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c3c12:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c3c15:	8b 45 10             	mov    0x10(%ebp),%eax
 80c3c18:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c3c1b:	eb 6a                	jmp    80c3c87 <_ZN4CTEA7DecryptEPKcPcj+0x189>
 80c3c1d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c3c20:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3c23:	83 c0 40             	add    $0x40,%eax
 80c3c26:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c3c2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3c2e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3c31:	89 04 24             	mov    %eax,(%esp)
 80c3c34:	e8 eb fa ff ff       	call   80c3724 <_ZN4CTEA12EncryptBlockEPKhPh>
 80c3c39:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3c3c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80c3c3f:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c3c43:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c3c46:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c3c4a:	89 04 24             	mov    %eax,(%esp)
 80c3c4d:	e8 c4 06 ff ff       	call   80b4316 <_ZN7IMethod3XorEPcPKc>
 80c3c52:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3c55:	8b 40 08             	mov    0x8(%eax),%eax
 80c3c58:	8b 55 08             	mov    0x8(%ebp),%edx
 80c3c5b:	83 c2 40             	add    $0x40,%edx
 80c3c5e:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c3c62:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c3c65:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3c69:	89 14 24             	mov    %edx,(%esp)
 80c3c6c:	e8 2f 9c fb ff       	call   807d8a0 <memcpy@plt>
 80c3c71:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3c74:	8b 40 08             	mov    0x8(%eax),%eax
 80c3c77:	01 45 f0             	add    %eax,-0x10(%ebp)
 80c3c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3c7d:	8b 40 08             	mov    0x8(%eax),%eax
 80c3c80:	01 45 f4             	add    %eax,-0xc(%ebp)
 80c3c83:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80c3c87:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3c8a:	8b 40 08             	mov    0x8(%eax),%eax
 80c3c8d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80c3c90:	8b 45 14             	mov    0x14(%ebp),%eax
 80c3c93:	ba 00 00 00 00       	mov    $0x0,%edx
 80c3c98:	f7 75 e4             	divl   -0x1c(%ebp)
 80c3c9b:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80c3c9e:	0f 97 c0             	seta   %al
 80c3ca1:	84 c0                	test   %al,%al
 80c3ca3:	0f 85 74 ff ff ff    	jne    80c3c1d <_ZN4CTEA7DecryptEPKcPcj+0x11f>
 80c3ca9:	eb 62                	jmp    80c3d0d <_ZN4CTEA7DecryptEPKcPcj+0x20f>
 80c3cab:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80c3cb2:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c3cb5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c3cb8:	8b 45 10             	mov    0x10(%ebp),%eax
 80c3cbb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c3cbe:	eb 2f                	jmp    80c3cef <_ZN4CTEA7DecryptEPKcPcj+0x1f1>
 80c3cc0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c3cc3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c3cc6:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c3cca:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3cce:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3cd1:	89 04 24             	mov    %eax,(%esp)
 80c3cd4:	e8 2b fb ff ff       	call   80c3804 <_ZN4CTEA12DecryptBlockEPKhPh>
 80c3cd9:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3cdc:	8b 40 08             	mov    0x8(%eax),%eax
 80c3cdf:	01 45 f0             	add    %eax,-0x10(%ebp)
 80c3ce2:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3ce5:	8b 40 08             	mov    0x8(%eax),%eax
 80c3ce8:	01 45 f4             	add    %eax,-0xc(%ebp)
 80c3ceb:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80c3cef:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3cf2:	8b 40 08             	mov    0x8(%eax),%eax
 80c3cf5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80c3cf8:	8b 45 14             	mov    0x14(%ebp),%eax
 80c3cfb:	ba 00 00 00 00       	mov    $0x0,%edx
 80c3d00:	f7 75 e4             	divl   -0x1c(%ebp)
 80c3d03:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80c3d06:	0f 97 c0             	seta   %al
 80c3d09:	84 c0                	test   %al,%al
 80c3d0b:	75 b3                	jne    80c3cc0 <_ZN4CTEA7DecryptEPKcPcj+0x1c2>
 80c3d0d:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80c3d12:	c9                   	leave
 80c3d13:	c3                   	ret

```

```c
// CTEA::Decrypt @ 0x80c3afe

/* CTEA::Decrypt(char const*, char*, unsigned int) */

undefined4 __thiscall CTEA::Decrypt(CTEA *this,char *param_1,char *param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_18;
  uchar *local_14;
  uchar *local_10;
  
  if (this[4] == (CTEA)0x1) {
    if ((param_3 == 0) || (param_3 % *(uint *)(this + 8) != 0)) {
      uVar1 = 0x7000000a;
    }
    else {
      if (*(int *)(this + 0x10) == 1) {
        local_14 = (uchar *)param_1;
        local_10 = (uchar *)param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          DecryptBlock(this,local_14,local_10);
          IMethod::Xor((IMethod *)this,(char *)local_10,(char *)(this + 0x40));
          memcpy(this + 0x40,local_14,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else if (*(int *)(this + 0x10) == 2) {
        local_14 = (uchar *)param_1;
        local_10 = (uchar *)param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          EncryptBlock(this,(uchar *)(this + 0x40),local_10);
          IMethod::Xor((IMethod *)this,(char *)local_10,(char *)local_14);
          memcpy(this + 0x40,local_14,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else {
        local_14 = (uchar *)param_1;
        local_10 = (uchar *)param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          DecryptBlock(this,local_14,local_10);
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      uVar1 = 0x6fffffff;
    }
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}

```

---

## DecryptBlock

```asm
// === 080c3804 CTEA::DecryptBlock  [0x080c3804-0x80c38e3] ===
 80c3804:	55                   	push   %ebp
 80c3805:	89 e5                	mov    %esp,%ebp
 80c3807:	57                   	push   %edi
 80c3808:	56                   	push   %esi
 80c3809:	53                   	push   %ebx
 80c380a:	83 ec 3c             	sub    $0x3c,%esp
 80c380d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80c3810:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3814:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c3817:	89 04 24             	mov    %eax,(%esp)
 80c381a:	e8 7f 0d ff ff       	call   80b459e <_ZN7IMethod11BytesToWordEPKhRj>
 80c381f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c3822:	83 c0 04             	add    $0x4,%eax
 80c3825:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80c3828:	83 c2 04             	add    $0x4,%edx
 80c382b:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c382f:	89 04 24             	mov    %eax,(%esp)
 80c3832:	e8 67 0d ff ff       	call   80b459e <_ZN7IMethod11BytesToWordEPKhRj>
 80c3837:	8b 75 e0             	mov    -0x20(%ebp),%esi
 80c383a:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 80c383d:	bf 20 37 ef c6       	mov    $0xc6ef3720,%edi
 80c3842:	c7 45 d0 b9 79 37 9e 	movl   $0x9e3779b9,-0x30(%ebp)
 80c3849:	c7 45 d4 20 00 00 00 	movl   $0x20,-0x2c(%ebp)
 80c3850:	eb 4e                	jmp    80c38a0 <_ZN4CTEA12DecryptBlockEPKhPh+0x9c>
 80c3852:	89 f2                	mov    %esi,%edx
 80c3854:	c1 e2 04             	shl    $0x4,%edx
 80c3857:	89 f0                	mov    %esi,%eax
 80c3859:	c1 e8 05             	shr    $0x5,%eax
 80c385c:	31 d0                	xor    %edx,%eax
 80c385e:	8d 0c 30             	lea    (%eax,%esi,1),%ecx
 80c3861:	89 f8                	mov    %edi,%eax
 80c3863:	c1 e8 0b             	shr    $0xb,%eax
 80c3866:	83 e0 03             	and    $0x3,%eax
 80c3869:	8b 55 08             	mov    0x8(%ebp),%edx
 80c386c:	83 c0 08             	add    $0x8,%eax
 80c386f:	8b 44 82 08          	mov    0x8(%edx,%eax,4),%eax
 80c3873:	01 f8                	add    %edi,%eax
 80c3875:	31 c8                	xor    %ecx,%eax
 80c3877:	29 c3                	sub    %eax,%ebx
 80c3879:	2b 7d d0             	sub    -0x30(%ebp),%edi
 80c387c:	89 da                	mov    %ebx,%edx
 80c387e:	c1 e2 04             	shl    $0x4,%edx
 80c3881:	89 d8                	mov    %ebx,%eax
 80c3883:	c1 e8 05             	shr    $0x5,%eax
 80c3886:	31 d0                	xor    %edx,%eax
 80c3888:	8d 0c 18             	lea    (%eax,%ebx,1),%ecx
 80c388b:	89 f8                	mov    %edi,%eax
 80c388d:	83 e0 03             	and    $0x3,%eax
 80c3890:	8b 55 08             	mov    0x8(%ebp),%edx
 80c3893:	83 c0 08             	add    $0x8,%eax
 80c3896:	8b 44 82 08          	mov    0x8(%edx,%eax,4),%eax
 80c389a:	01 f8                	add    %edi,%eax
 80c389c:	31 c8                	xor    %ecx,%eax
 80c389e:	29 c6                	sub    %eax,%esi
 80c38a0:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 80c38a4:	0f 95 c0             	setne  %al
 80c38a7:	83 6d d4 01          	subl   $0x1,-0x2c(%ebp)
 80c38ab:	84 c0                	test   %al,%al
 80c38ad:	75 a3                	jne    80c3852 <_ZN4CTEA12DecryptBlockEPKhPh+0x4e>
 80c38af:	89 75 d8             	mov    %esi,-0x28(%ebp)
 80c38b2:	89 5d dc             	mov    %ebx,-0x24(%ebp)
 80c38b5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80c38b8:	8b 55 10             	mov    0x10(%ebp),%edx
 80c38bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c38bf:	89 04 24             	mov    %eax,(%esp)
 80c38c2:	e8 4f 0d ff ff       	call   80b4616 <_ZN7IMethod11WordToBytesEjPh>
 80c38c7:	8b 45 10             	mov    0x10(%ebp),%eax
 80c38ca:	8d 50 04             	lea    0x4(%eax),%edx
 80c38cd:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80c38d0:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c38d4:	89 04 24             	mov    %eax,(%esp)
 80c38d7:	e8 3a 0d ff ff       	call   80b4616 <_ZN7IMethod11WordToBytesEjPh>
 80c38dc:	83 c4 3c             	add    $0x3c,%esp
 80c38df:	5b                   	pop    %ebx
 80c38e0:	5e                   	pop    %esi
 80c38e1:	5f                   	pop    %edi
 80c38e2:	5d                   	pop    %ebp
 80c38e3:	c3                   	ret

```

```c
// CTEA::DecryptBlock @ 0x80c3804

/* CTEA::DecryptBlock(unsigned char const*, unsigned char*) */

void __thiscall CTEA::DecryptBlock(CTEA *this,uchar *param_1,uchar *param_2)

{
  uint uVar1;
  bool bVar2;
  int local_30;
  uint local_24;
  uint local_20 [4];
  
  IMethod::BytesToWord(param_1,&local_24);
  IMethod::BytesToWord(param_1 + 4,local_20);
  uVar1 = 0xc6ef3720;
  local_30 = 0x20;
  while (bVar2 = local_30 != 0, local_30 = local_30 + -1, bVar2) {
    local_20[0] = local_20[0] -
                  (*(int *)(this + ((uVar1 >> 0xb & 3) + 8) * 4 + 8) + uVar1 ^
                  (local_24 >> 5 ^ local_24 << 4) + local_24);
    uVar1 = uVar1 + 0x61c88647;
    local_24 = local_24 -
               (*(int *)(this + ((uVar1 & 3) + 8) * 4 + 8) + uVar1 ^
               (local_20[0] >> 5 ^ local_20[0] * 0x10) + local_20[0]);
  }
  IMethod::WordToBytes(local_24,param_2);
  IMethod::WordToBytes(local_20[0],param_2 + 4);
  return;
}

```

---

## Encrypt

```asm
// === 080c38e4 CTEA::Encrypt  [0x080c38e4-0x80c3afd] ===
 80c38e4:	55                   	push   %ebp
 80c38e5:	89 e5                	mov    %esp,%ebp
 80c38e7:	83 ec 38             	sub    $0x38,%esp
 80c38ea:	8b 45 08             	mov    0x8(%ebp),%eax
 80c38ed:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80c38f1:	83 f0 01             	xor    $0x1,%eax
 80c38f4:	84 c0                	test   %al,%al
 80c38f6:	74 0a                	je     80c3902 <_ZN4CTEA7EncryptEPKcPcj+0x1e>
 80c38f8:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80c38fd:	e9 f9 01 00 00       	jmp    80c3afb <_ZN4CTEA7EncryptEPKcPcj+0x217>
 80c3902:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 80c3906:	74 18                	je     80c3920 <_ZN4CTEA7EncryptEPKcPcj+0x3c>
 80c3908:	8b 45 08             	mov    0x8(%ebp),%eax
 80c390b:	8b 40 08             	mov    0x8(%eax),%eax
 80c390e:	89 c1                	mov    %eax,%ecx
 80c3910:	8b 45 14             	mov    0x14(%ebp),%eax
 80c3913:	ba 00 00 00 00       	mov    $0x0,%edx
 80c3918:	f7 f1                	div    %ecx
 80c391a:	89 d0                	mov    %edx,%eax
 80c391c:	85 c0                	test   %eax,%eax
 80c391e:	74 0a                	je     80c392a <_ZN4CTEA7EncryptEPKcPcj+0x46>
 80c3920:	b8 0a 00 00 70       	mov    $0x7000000a,%eax
 80c3925:	e9 d1 01 00 00       	jmp    80c3afb <_ZN4CTEA7EncryptEPKcPcj+0x217>
 80c392a:	8b 45 08             	mov    0x8(%ebp),%eax
 80c392d:	8b 40 10             	mov    0x10(%eax),%eax
 80c3930:	83 f8 01             	cmp    $0x1,%eax
 80c3933:	0f 85 a9 00 00 00    	jne    80c39e2 <_ZN4CTEA7EncryptEPKcPcj+0xfe>
 80c3939:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80c3940:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c3943:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c3946:	8b 45 10             	mov    0x10(%ebp),%eax
 80c3949:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c394c:	eb 6d                	jmp    80c39bb <_ZN4CTEA7EncryptEPKcPcj+0xd7>
 80c394e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3951:	8d 48 40             	lea    0x40(%eax),%ecx
 80c3954:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3957:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80c395a:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c395e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c3962:	89 04 24             	mov    %eax,(%esp)
 80c3965:	e8 ac 09 ff ff       	call   80b4316 <_ZN7IMethod3XorEPcPKc>
 80c396a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c396d:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3970:	83 c0 40             	add    $0x40,%eax
 80c3973:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c3977:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c397b:	8b 45 08             	mov    0x8(%ebp),%eax
 80c397e:	89 04 24             	mov    %eax,(%esp)
 80c3981:	e8 9e fd ff ff       	call   80c3724 <_ZN4CTEA12EncryptBlockEPKhPh>
 80c3986:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3989:	8b 40 08             	mov    0x8(%eax),%eax
 80c398c:	8b 55 08             	mov    0x8(%ebp),%edx
 80c398f:	83 c2 40             	add    $0x40,%edx
 80c3992:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c3996:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c3999:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c399d:	89 14 24             	mov    %edx,(%esp)
 80c39a0:	e8 fb 9e fb ff       	call   807d8a0 <memcpy@plt>
 80c39a5:	8b 45 08             	mov    0x8(%ebp),%eax
 80c39a8:	8b 40 08             	mov    0x8(%eax),%eax
 80c39ab:	01 45 f0             	add    %eax,-0x10(%ebp)
 80c39ae:	8b 45 08             	mov    0x8(%ebp),%eax
 80c39b1:	8b 40 08             	mov    0x8(%eax),%eax
 80c39b4:	01 45 f4             	add    %eax,-0xc(%ebp)
 80c39b7:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80c39bb:	8b 45 08             	mov    0x8(%ebp),%eax
 80c39be:	8b 40 08             	mov    0x8(%eax),%eax
 80c39c1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80c39c4:	8b 45 14             	mov    0x14(%ebp),%eax
 80c39c7:	ba 00 00 00 00       	mov    $0x0,%edx
 80c39cc:	f7 75 e4             	divl   -0x1c(%ebp)
 80c39cf:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80c39d2:	0f 97 c0             	seta   %al
 80c39d5:	84 c0                	test   %al,%al
 80c39d7:	0f 85 71 ff ff ff    	jne    80c394e <_ZN4CTEA7EncryptEPKcPcj+0x6a>
 80c39dd:	e9 14 01 00 00       	jmp    80c3af6 <_ZN4CTEA7EncryptEPKcPcj+0x212>
 80c39e2:	8b 45 08             	mov    0x8(%ebp),%eax
 80c39e5:	8b 40 10             	mov    0x10(%eax),%eax
 80c39e8:	83 f8 02             	cmp    $0x2,%eax
 80c39eb:	0f 85 a3 00 00 00    	jne    80c3a94 <_ZN4CTEA7EncryptEPKcPcj+0x1b0>
 80c39f1:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80c39f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c39fb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c39fe:	8b 45 10             	mov    0x10(%ebp),%eax
 80c3a01:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c3a04:	eb 6a                	jmp    80c3a70 <_ZN4CTEA7EncryptEPKcPcj+0x18c>
 80c3a06:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c3a09:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3a0c:	83 c0 40             	add    $0x40,%eax
 80c3a0f:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c3a13:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3a17:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3a1a:	89 04 24             	mov    %eax,(%esp)
 80c3a1d:	e8 02 fd ff ff       	call   80c3724 <_ZN4CTEA12EncryptBlockEPKhPh>
 80c3a22:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3a25:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80c3a28:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c3a2c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c3a2f:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c3a33:	89 04 24             	mov    %eax,(%esp)
 80c3a36:	e8 db 08 ff ff       	call   80b4316 <_ZN7IMethod3XorEPcPKc>
 80c3a3b:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3a3e:	8b 40 08             	mov    0x8(%eax),%eax
 80c3a41:	8b 55 08             	mov    0x8(%ebp),%edx
 80c3a44:	83 c2 40             	add    $0x40,%edx
 80c3a47:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c3a4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c3a4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3a52:	89 14 24             	mov    %edx,(%esp)
 80c3a55:	e8 46 9e fb ff       	call   807d8a0 <memcpy@plt>
 80c3a5a:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3a5d:	8b 40 08             	mov    0x8(%eax),%eax
 80c3a60:	01 45 f0             	add    %eax,-0x10(%ebp)
 80c3a63:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3a66:	8b 40 08             	mov    0x8(%eax),%eax
 80c3a69:	01 45 f4             	add    %eax,-0xc(%ebp)
 80c3a6c:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80c3a70:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3a73:	8b 40 08             	mov    0x8(%eax),%eax
 80c3a76:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80c3a79:	8b 45 14             	mov    0x14(%ebp),%eax
 80c3a7c:	ba 00 00 00 00       	mov    $0x0,%edx
 80c3a81:	f7 75 e4             	divl   -0x1c(%ebp)
 80c3a84:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80c3a87:	0f 97 c0             	seta   %al
 80c3a8a:	84 c0                	test   %al,%al
 80c3a8c:	0f 85 74 ff ff ff    	jne    80c3a06 <_ZN4CTEA7EncryptEPKcPcj+0x122>
 80c3a92:	eb 62                	jmp    80c3af6 <_ZN4CTEA7EncryptEPKcPcj+0x212>
 80c3a94:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80c3a9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c3a9e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 80c3aa1:	8b 45 10             	mov    0x10(%ebp),%eax
 80c3aa4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c3aa7:	eb 2f                	jmp    80c3ad8 <_ZN4CTEA7EncryptEPKcPcj+0x1f4>
 80c3aa9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 80c3aac:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c3aaf:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c3ab3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3ab7:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3aba:	89 04 24             	mov    %eax,(%esp)
 80c3abd:	e8 62 fc ff ff       	call   80c3724 <_ZN4CTEA12EncryptBlockEPKhPh>
 80c3ac2:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3ac5:	8b 40 08             	mov    0x8(%eax),%eax
 80c3ac8:	01 45 f0             	add    %eax,-0x10(%ebp)
 80c3acb:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3ace:	8b 40 08             	mov    0x8(%eax),%eax
 80c3ad1:	01 45 f4             	add    %eax,-0xc(%ebp)
 80c3ad4:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80c3ad8:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3adb:	8b 40 08             	mov    0x8(%eax),%eax
 80c3ade:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 80c3ae1:	8b 45 14             	mov    0x14(%ebp),%eax
 80c3ae4:	ba 00 00 00 00       	mov    $0x0,%edx
 80c3ae9:	f7 75 e4             	divl   -0x1c(%ebp)
 80c3aec:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80c3aef:	0f 97 c0             	seta   %al
 80c3af2:	84 c0                	test   %al,%al
 80c3af4:	75 b3                	jne    80c3aa9 <_ZN4CTEA7EncryptEPKcPcj+0x1c5>
 80c3af6:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80c3afb:	c9                   	leave
 80c3afc:	c3                   	ret
 80c3afd:	90                   	nop

```

```c
// CTEA::Encrypt @ 0x80c38e4

/* CTEA::Encrypt(char const*, char*, unsigned int) */

undefined4 __thiscall CTEA::Encrypt(CTEA *this,char *param_1,char *param_2,uint param_3)

{
  undefined4 uVar1;
  uint local_18;
  uchar *local_14;
  uchar *local_10;
  
  if (this[4] == (CTEA)0x1) {
    if ((param_3 == 0) || (param_3 % *(uint *)(this + 8) != 0)) {
      uVar1 = 0x7000000a;
    }
    else {
      if (*(int *)(this + 0x10) == 1) {
        local_14 = (uchar *)param_1;
        local_10 = (uchar *)param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          IMethod::Xor((IMethod *)this,(char *)(this + 0x40),(char *)local_14);
          EncryptBlock(this,(uchar *)(this + 0x40),local_10);
          memcpy(this + 0x40,local_10,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else if (*(int *)(this + 0x10) == 2) {
        local_14 = (uchar *)param_1;
        local_10 = (uchar *)param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          EncryptBlock(this,(uchar *)(this + 0x40),local_10);
          IMethod::Xor((IMethod *)this,(char *)local_10,(char *)local_14);
          memcpy(this + 0x40,local_10,*(size_t *)(this + 8));
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      else {
        local_14 = (uchar *)param_1;
        local_10 = (uchar *)param_2;
        for (local_18 = 0; local_18 < param_3 / *(uint *)(this + 8); local_18 = local_18 + 1) {
          EncryptBlock(this,local_14,local_10);
          local_14 = local_14 + *(int *)(this + 8);
          local_10 = local_10 + *(int *)(this + 8);
        }
      }
      uVar1 = 0x6fffffff;
    }
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}

```

---

## EncryptBlock

```asm
// === 080c3724 CTEA::EncryptBlock  [0x080c3724-0x80c3803] ===
 80c3724:	55                   	push   %ebp
 80c3725:	89 e5                	mov    %esp,%ebp
 80c3727:	57                   	push   %edi
 80c3728:	56                   	push   %esi
 80c3729:	53                   	push   %ebx
 80c372a:	83 ec 3c             	sub    $0x3c,%esp
 80c372d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 80c3730:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3734:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c3737:	89 04 24             	mov    %eax,(%esp)
 80c373a:	e8 5f 0e ff ff       	call   80b459e <_ZN7IMethod11BytesToWordEPKhRj>
 80c373f:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c3742:	83 c0 04             	add    $0x4,%eax
 80c3745:	8d 55 e0             	lea    -0x20(%ebp),%edx
 80c3748:	83 c2 04             	add    $0x4,%edx
 80c374b:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c374f:	89 04 24             	mov    %eax,(%esp)
 80c3752:	e8 47 0e ff ff       	call   80b459e <_ZN7IMethod11BytesToWordEPKhRj>
 80c3757:	8b 75 e0             	mov    -0x20(%ebp),%esi
 80c375a:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 80c375d:	bf 00 00 00 00       	mov    $0x0,%edi
 80c3762:	c7 45 d0 b9 79 37 9e 	movl   $0x9e3779b9,-0x30(%ebp)
 80c3769:	c7 45 d4 20 00 00 00 	movl   $0x20,-0x2c(%ebp)
 80c3770:	eb 4e                	jmp    80c37c0 <_ZN4CTEA12EncryptBlockEPKhPh+0x9c>
 80c3772:	89 da                	mov    %ebx,%edx
 80c3774:	c1 e2 04             	shl    $0x4,%edx
 80c3777:	89 d8                	mov    %ebx,%eax
 80c3779:	c1 e8 05             	shr    $0x5,%eax
 80c377c:	31 d0                	xor    %edx,%eax
 80c377e:	8d 0c 18             	lea    (%eax,%ebx,1),%ecx
 80c3781:	89 f8                	mov    %edi,%eax
 80c3783:	83 e0 03             	and    $0x3,%eax
 80c3786:	8b 55 08             	mov    0x8(%ebp),%edx
 80c3789:	83 c0 08             	add    $0x8,%eax
 80c378c:	8b 44 82 08          	mov    0x8(%edx,%eax,4),%eax
 80c3790:	01 f8                	add    %edi,%eax
 80c3792:	31 c8                	xor    %ecx,%eax
 80c3794:	01 c6                	add    %eax,%esi
 80c3796:	03 7d d0             	add    -0x30(%ebp),%edi
 80c3799:	89 f2                	mov    %esi,%edx
 80c379b:	c1 e2 04             	shl    $0x4,%edx
 80c379e:	89 f0                	mov    %esi,%eax
 80c37a0:	c1 e8 05             	shr    $0x5,%eax
 80c37a3:	31 d0                	xor    %edx,%eax
 80c37a5:	8d 0c 30             	lea    (%eax,%esi,1),%ecx
 80c37a8:	89 f8                	mov    %edi,%eax
 80c37aa:	c1 e8 0b             	shr    $0xb,%eax
 80c37ad:	83 e0 03             	and    $0x3,%eax
 80c37b0:	8b 55 08             	mov    0x8(%ebp),%edx
 80c37b3:	83 c0 08             	add    $0x8,%eax
 80c37b6:	8b 44 82 08          	mov    0x8(%edx,%eax,4),%eax
 80c37ba:	01 f8                	add    %edi,%eax
 80c37bc:	31 c8                	xor    %ecx,%eax
 80c37be:	01 c3                	add    %eax,%ebx
 80c37c0:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 80c37c4:	0f 95 c0             	setne  %al
 80c37c7:	83 6d d4 01          	subl   $0x1,-0x2c(%ebp)
 80c37cb:	84 c0                	test   %al,%al
 80c37cd:	75 a3                	jne    80c3772 <_ZN4CTEA12EncryptBlockEPKhPh+0x4e>
 80c37cf:	89 75 d8             	mov    %esi,-0x28(%ebp)
 80c37d2:	89 5d dc             	mov    %ebx,-0x24(%ebp)
 80c37d5:	8b 45 d8             	mov    -0x28(%ebp),%eax
 80c37d8:	8b 55 10             	mov    0x10(%ebp),%edx
 80c37db:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c37df:	89 04 24             	mov    %eax,(%esp)
 80c37e2:	e8 2f 0e ff ff       	call   80b4616 <_ZN7IMethod11WordToBytesEjPh>
 80c37e7:	8b 45 10             	mov    0x10(%ebp),%eax
 80c37ea:	8d 50 04             	lea    0x4(%eax),%edx
 80c37ed:	8b 45 dc             	mov    -0x24(%ebp),%eax
 80c37f0:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c37f4:	89 04 24             	mov    %eax,(%esp)
 80c37f7:	e8 1a 0e ff ff       	call   80b4616 <_ZN7IMethod11WordToBytesEjPh>
 80c37fc:	83 c4 3c             	add    $0x3c,%esp
 80c37ff:	5b                   	pop    %ebx
 80c3800:	5e                   	pop    %esi
 80c3801:	5f                   	pop    %edi
 80c3802:	5d                   	pop    %ebp
 80c3803:	c3                   	ret

```

```c
// CTEA::EncryptBlock @ 0x80c3724

/* CTEA::EncryptBlock(unsigned char const*, unsigned char*) */

void __thiscall CTEA::EncryptBlock(CTEA *this,uchar *param_1,uchar *param_2)

{
  uint uVar1;
  bool bVar2;
  int local_30;
  uint local_24;
  uint local_20 [4];
  
  IMethod::BytesToWord(param_1,&local_24);
  IMethod::BytesToWord(param_1 + 4,local_20);
  uVar1 = 0;
  local_30 = 0x20;
  while (bVar2 = local_30 != 0, local_30 = local_30 + -1, bVar2) {
    local_24 = local_24 +
               (*(int *)(this + ((uVar1 & 3) + 8) * 4 + 8) + uVar1 ^
               (local_20[0] >> 5 ^ local_20[0] << 4) + local_20[0]);
    uVar1 = uVar1 + 0x9e3779b9;
    local_20[0] = local_20[0] +
                  (*(int *)(this + ((uVar1 >> 0xb & 3) + 8) * 4 + 8) + uVar1 ^
                  (local_24 >> 5 ^ local_24 * 0x10) + local_24);
  }
  IMethod::WordToBytes(local_24,param_2);
  IMethod::WordToBytes(local_20[0],param_2 + 4);
  return;
}

```

---

## Initialize

```asm
// === 080c339c CTEA::Initialize  [0x080c339c-0x80c35a7] ===
 80c339c:	55                   	push   %ebp
 80c339d:	89 e5                	mov    %esp,%ebp
 80c339f:	83 ec 38             	sub    $0x38,%esp
 80c33a2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 80c33a6:	75 0a                	jne    80c33b2 <_ZN4CTEA10InitializeEPKciS1_ii+0x16>
 80c33a8:	b8 01 00 00 70       	mov    $0x70000001,%eax
 80c33ad:	e9 f4 01 00 00       	jmp    80c35a6 <_ZN4CTEA10InitializeEPKciS1_ii+0x20a>
 80c33b2:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 80c33b6:	7f 0a                	jg     80c33c2 <_ZN4CTEA10InitializeEPKciS1_ii+0x26>
 80c33b8:	b8 02 00 00 70       	mov    $0x70000002,%eax
 80c33bd:	e9 e4 01 00 00       	jmp    80c35a6 <_ZN4CTEA10InitializeEPKciS1_ii+0x20a>
 80c33c2:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 80c33c6:	78 06                	js     80c33ce <_ZN4CTEA10InitializeEPKciS1_ii+0x32>
 80c33c8:	83 7d 18 02          	cmpl   $0x2,0x18(%ebp)
 80c33cc:	7e 0a                	jle    80c33d8 <_ZN4CTEA10InitializeEPKciS1_ii+0x3c>
 80c33ce:	b8 03 00 00 70       	mov    $0x70000003,%eax
 80c33d3:	e9 ce 01 00 00       	jmp    80c35a6 <_ZN4CTEA10InitializeEPKciS1_ii+0x20a>
 80c33d8:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 80c33dc:	78 06                	js     80c33e4 <_ZN4CTEA10InitializeEPKciS1_ii+0x48>
 80c33de:	83 7d 1c 02          	cmpl   $0x2,0x1c(%ebp)
 80c33e2:	7e 0a                	jle    80c33ee <_ZN4CTEA10InitializeEPKciS1_ii+0x52>
 80c33e4:	b8 04 00 00 70       	mov    $0x70000004,%eax
 80c33e9:	e9 b8 01 00 00       	jmp    80c35a6 <_ZN4CTEA10InitializeEPKciS1_ii+0x20a>
 80c33ee:	8b 45 08             	mov    0x8(%ebp),%eax
 80c33f1:	8b 55 18             	mov    0x18(%ebp),%edx
 80c33f4:	89 50 10             	mov    %edx,0x10(%eax)
 80c33f7:	8b 45 08             	mov    0x8(%ebp),%eax
 80c33fa:	8b 55 1c             	mov    0x1c(%ebp),%edx
 80c33fd:	89 50 14             	mov    %edx,0x14(%eax)
 80c3400:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 80c3407:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 80c340e:	eb 25                	jmp    80c3435 <_ZN4CTEA10InitializeEPKciS1_ii+0x99>
 80c3410:	8b 45 ec             	mov    -0x14(%ebp),%eax
 80c3413:	8b 55 f0             	mov    -0x10(%ebp),%edx
 80c3416:	03 55 0c             	add    0xc(%ebp),%edx
 80c3419:	0f b6 12             	movzbl (%edx),%edx
 80c341c:	88 54 05 dc          	mov    %dl,-0x24(%ebp,%eax,1)
 80c3420:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 80c3424:	8b 45 f0             	mov    -0x10(%ebp),%eax
 80c3427:	83 c0 01             	add    $0x1,%eax
 80c342a:	89 c2                	mov    %eax,%edx
 80c342c:	c1 fa 1f             	sar    $0x1f,%edx
 80c342f:	f7 7d 10             	idivl  0x10(%ebp)
 80c3432:	89 55 f0             	mov    %edx,-0x10(%ebp)
 80c3435:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3438:	8b 40 0c             	mov    0xc(%eax),%eax
 80c343b:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 80c343e:	0f 9f c0             	setg   %al
 80c3441:	84 c0                	test   %al,%al
 80c3443:	75 cb                	jne    80c3410 <_ZN4CTEA10InitializeEPKciS1_ii+0x74>
 80c3445:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
 80c3449:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 80c344d:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3450:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80c3454:	84 c0                	test   %al,%al
 80c3456:	74 4e                	je     80c34a6 <_ZN4CTEA10InitializeEPKciS1_ii+0x10a>
 80c3458:	8b 45 08             	mov    0x8(%ebp),%eax
 80c345b:	8b 40 08             	mov    0x8(%eax),%eax
 80c345e:	8b 55 08             	mov    0x8(%ebp),%edx
 80c3461:	83 c2 38             	add    $0x38,%edx
 80c3464:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c3468:	8b 45 14             	mov    0x14(%ebp),%eax
 80c346b:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c346f:	89 14 24             	mov    %edx,(%esp)
 80c3472:	e8 19 a8 fb ff       	call   807dc90 <memcmp@plt>
 80c3477:	85 c0                	test   %eax,%eax
 80c3479:	75 04                	jne    80c347f <_ZN4CTEA10InitializeEPKciS1_ii+0xe3>
 80c347b:	c6 45 f7 01          	movb   $0x1,-0x9(%ebp)
 80c347f:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3482:	8b 40 0c             	mov    0xc(%eax),%eax
 80c3485:	8b 55 08             	mov    0x8(%ebp),%edx
 80c3488:	83 c2 18             	add    $0x18,%edx
 80c348b:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c348f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80c3492:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3496:	89 14 24             	mov    %edx,(%esp)
 80c3499:	e8 f2 a7 fb ff       	call   807dc90 <memcmp@plt>
 80c349e:	85 c0                	test   %eax,%eax
 80c34a0:	75 04                	jne    80c34a6 <_ZN4CTEA10InitializeEPKciS1_ii+0x10a>
 80c34a2:	c6 45 f6 01          	movb   $0x1,-0xa(%ebp)
 80c34a6:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 80c34aa:	74 24                	je     80c34d0 <_ZN4CTEA10InitializeEPKciS1_ii+0x134>
 80c34ac:	8b 45 08             	mov    0x8(%ebp),%eax
 80c34af:	8b 40 08             	mov    0x8(%eax),%eax
 80c34b2:	8b 55 08             	mov    0x8(%ebp),%edx
 80c34b5:	8d 4a 38             	lea    0x38(%edx),%ecx
 80c34b8:	8b 55 08             	mov    0x8(%ebp),%edx
 80c34bb:	83 c2 40             	add    $0x40,%edx
 80c34be:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c34c2:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c34c6:	89 14 24             	mov    %edx,(%esp)
 80c34c9:	e8 d2 a3 fb ff       	call   807d8a0 <memcpy@plt>
 80c34ce:	eb 3e                	jmp    80c350e <_ZN4CTEA10InitializeEPKciS1_ii+0x172>
 80c34d0:	8b 45 08             	mov    0x8(%ebp),%eax
 80c34d3:	8b 40 08             	mov    0x8(%eax),%eax
 80c34d6:	8b 55 08             	mov    0x8(%ebp),%edx
 80c34d9:	83 c2 38             	add    $0x38,%edx
 80c34dc:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c34e0:	8b 45 14             	mov    0x14(%ebp),%eax
 80c34e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c34e7:	89 14 24             	mov    %edx,(%esp)
 80c34ea:	e8 b1 a3 fb ff       	call   807d8a0 <memcpy@plt>
 80c34ef:	8b 45 08             	mov    0x8(%ebp),%eax
 80c34f2:	8b 40 08             	mov    0x8(%eax),%eax
 80c34f5:	8b 55 08             	mov    0x8(%ebp),%edx
 80c34f8:	83 c2 40             	add    $0x40,%edx
 80c34fb:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c34ff:	8b 45 14             	mov    0x14(%ebp),%eax
 80c3502:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3506:	89 14 24             	mov    %edx,(%esp)
 80c3509:	e8 92 a3 fb ff       	call   807d8a0 <memcpy@plt>
 80c350e:	80 7d f6 00          	cmpb   $0x0,-0xa(%ebp)
 80c3512:	74 0a                	je     80c351e <_ZN4CTEA10InitializeEPKciS1_ii+0x182>
 80c3514:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80c3519:	e9 88 00 00 00       	jmp    80c35a6 <_ZN4CTEA10InitializeEPKciS1_ii+0x20a>
 80c351e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3521:	8b 40 0c             	mov    0xc(%eax),%eax
 80c3524:	8b 55 08             	mov    0x8(%ebp),%edx
 80c3527:	83 c2 18             	add    $0x18,%edx
 80c352a:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c352e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80c3531:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c3535:	89 14 24             	mov    %edx,(%esp)
 80c3538:	e8 63 a3 fb ff       	call   807d8a0 <memcpy@plt>
 80c353d:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3540:	8d 50 28             	lea    0x28(%eax),%edx
 80c3543:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80c3546:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c354a:	89 04 24             	mov    %eax,(%esp)
 80c354d:	e8 4c 10 ff ff       	call   80b459e <_ZN7IMethod11BytesToWordEPKhRj>
 80c3552:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3555:	8d 50 2c             	lea    0x2c(%eax),%edx
 80c3558:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80c355b:	83 c0 04             	add    $0x4,%eax
 80c355e:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c3562:	89 04 24             	mov    %eax,(%esp)
 80c3565:	e8 34 10 ff ff       	call   80b459e <_ZN7IMethod11BytesToWordEPKhRj>
 80c356a:	8b 45 08             	mov    0x8(%ebp),%eax
 80c356d:	8d 50 30             	lea    0x30(%eax),%edx
 80c3570:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80c3573:	83 c0 08             	add    $0x8,%eax
 80c3576:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c357a:	89 04 24             	mov    %eax,(%esp)
 80c357d:	e8 1c 10 ff ff       	call   80b459e <_ZN7IMethod11BytesToWordEPKhRj>
 80c3582:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3585:	8d 50 34             	lea    0x34(%eax),%edx
 80c3588:	8d 45 dc             	lea    -0x24(%ebp),%eax
 80c358b:	83 c0 0c             	add    $0xc,%eax
 80c358e:	89 54 24 04          	mov    %edx,0x4(%esp)
 80c3592:	89 04 24             	mov    %eax,(%esp)
 80c3595:	e8 04 10 ff ff       	call   80b459e <_ZN7IMethod11BytesToWordEPKhRj>
 80c359a:	8b 45 08             	mov    0x8(%ebp),%eax
 80c359d:	c6 40 04 01          	movb   $0x1,0x4(%eax)
 80c35a1:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80c35a6:	c9                   	leave
 80c35a7:	c3                   	ret

```

```c
// CTEA::Initialize @ 0x80c339c

/* CTEA::Initialize(char const*, int, char const*, int, int) */

undefined4 __thiscall
CTEA::Initialize(CTEA *this,char *param_1,int param_2,char *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  uchar local_28 [4];
  uchar auStack_24 [4];
  uchar auStack_20 [4];
  uchar auStack_1c [4];
  int local_18;
  int local_14;
  char local_e;
  char local_d;
  
  if (param_1 == (char *)0x0) {
    uVar1 = 0x70000001;
  }
  else if (param_2 < 1) {
    uVar1 = 0x70000002;
  }
  else if ((param_4 < 0) || (2 < param_4)) {
    uVar1 = 0x70000003;
  }
  else if ((param_5 < 0) || (2 < param_5)) {
    uVar1 = 0x70000004;
  }
  else {
    *(int *)(this + 0x10) = param_4;
    *(int *)(this + 0x14) = param_5;
    local_14 = 0;
    for (local_18 = 0; local_18 < *(int *)(this + 0xc); local_18 = local_18 + 1) {
      local_28[local_18] = param_1[local_14];
      local_14 = (local_14 + 1) % param_2;
    }
    local_e = '\0';
    local_d = '\0';
    if (this[4] != (CTEA)0x0) {
      iVar2 = memcmp(this + 0x38,param_3,*(size_t *)(this + 8));
      if (iVar2 == 0) {
        local_d = '\x01';
      }
      iVar2 = memcmp(this + 0x18,local_28,*(size_t *)(this + 0xc));
      if (iVar2 == 0) {
        local_e = '\x01';
      }
    }
    if (local_d == '\0') {
      memcpy(this + 0x38,param_3,*(size_t *)(this + 8));
      memcpy(this + 0x40,param_3,*(size_t *)(this + 8));
    }
    else {
      memcpy(this + 0x40,this + 0x38,*(size_t *)(this + 8));
    }
    if (local_e == '\0') {
      memcpy(this + 0x18,local_28,*(size_t *)(this + 0xc));
      IMethod::BytesToWord(local_28,(uint *)(this + 0x28));
      IMethod::BytesToWord(auStack_24,(uint *)(this + 0x2c));
      IMethod::BytesToWord(auStack_20,(uint *)(this + 0x30));
      IMethod::BytesToWord(auStack_1c,(uint *)(this + 0x34));
      this[4] = (CTEA)0x1;
      uVar1 = 0x6fffffff;
    }
    else {
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}

```

---

## ResetChain

```asm
// === 080c35a8 CTEA::ResetChain  [0x080c35a8-0x80c35eb] ===
 80c35a8:	55                   	push   %ebp
 80c35a9:	89 e5                	mov    %esp,%ebp
 80c35ab:	83 ec 18             	sub    $0x18,%esp
 80c35ae:	8b 45 08             	mov    0x8(%ebp),%eax
 80c35b1:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 80c35b5:	83 f0 01             	xor    $0x1,%eax
 80c35b8:	84 c0                	test   %al,%al
 80c35ba:	74 07                	je     80c35c3 <_ZN4CTEA10ResetChainEv+0x1b>
 80c35bc:	b8 05 00 00 70       	mov    $0x70000005,%eax
 80c35c1:	eb 27                	jmp    80c35ea <_ZN4CTEA10ResetChainEv+0x42>
 80c35c3:	8b 45 08             	mov    0x8(%ebp),%eax
 80c35c6:	8b 40 08             	mov    0x8(%eax),%eax
 80c35c9:	8b 55 08             	mov    0x8(%ebp),%edx
 80c35cc:	8d 4a 38             	lea    0x38(%edx),%ecx
 80c35cf:	8b 55 08             	mov    0x8(%ebp),%edx
 80c35d2:	83 c2 40             	add    $0x40,%edx
 80c35d5:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c35d9:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c35dd:	89 14 24             	mov    %edx,(%esp)
 80c35e0:	e8 bb a2 fb ff       	call   807d8a0 <memcpy@plt>
 80c35e5:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 80c35ea:	c9                   	leave
 80c35eb:	c3                   	ret

```

```c
// CTEA::ResetChain @ 0x80c35a8

/* CTEA::ResetChain() */

undefined4 __thiscall CTEA::ResetChain(CTEA *this)

{
  undefined4 uVar1;
  
  if (this[4] == (CTEA)0x1) {
    memcpy(this + 0x40,this + 0x38,*(size_t *)(this + 8));
    uVar1 = 0x6fffffff;
  }
  else {
    uVar1 = 0x70000005;
  }
  return uVar1;
}

```

---

## Signature

```asm
// === 080c35ec CTEA::Signature  [0x080c35ec-0x80c3723] ===
 80c35ec:	55                   	push   %ebp
 80c35ed:	89 e5                	mov    %esp,%ebp
 80c35ef:	56                   	push   %esi
 80c35f0:	53                   	push   %ebx
 80c35f1:	81 ec a0 00 00 00    	sub    $0xa0,%esp
 80c35f7:	8d 45 dd             	lea    -0x23(%ebp),%eax
 80c35fa:	ba 17 00 00 00       	mov    $0x17,%edx
 80c35ff:	b9 00 00 00 00       	mov    $0x0,%ecx
 80c3604:	89 c3                	mov    %eax,%ebx
 80c3606:	83 e3 01             	and    $0x1,%ebx
 80c3609:	85 db                	test   %ebx,%ebx
 80c360b:	74 08                	je     80c3615 <_ZN4CTEA9SignatureEPc+0x29>
 80c360d:	88 08                	mov    %cl,(%eax)
 80c360f:	83 c0 01             	add    $0x1,%eax
 80c3612:	83 ea 01             	sub    $0x1,%edx
 80c3615:	89 c3                	mov    %eax,%ebx
 80c3617:	83 e3 02             	and    $0x2,%ebx
 80c361a:	85 db                	test   %ebx,%ebx
 80c361c:	74 09                	je     80c3627 <_ZN4CTEA9SignatureEPc+0x3b>
 80c361e:	66 89 08             	mov    %cx,(%eax)
 80c3621:	83 c0 02             	add    $0x2,%eax
 80c3624:	83 ea 02             	sub    $0x2,%edx
 80c3627:	89 d6                	mov    %edx,%esi
 80c3629:	83 e6 fc             	and    $0xfffffffc,%esi
 80c362c:	bb 00 00 00 00       	mov    $0x0,%ebx
 80c3631:	89 0c 18             	mov    %ecx,(%eax,%ebx,1)
 80c3634:	83 c3 04             	add    $0x4,%ebx
 80c3637:	39 f3                	cmp    %esi,%ebx
 80c3639:	72 f6                	jb     80c3631 <_ZN4CTEA9SignatureEPc+0x45>
 80c363b:	01 d8                	add    %ebx,%eax
 80c363d:	89 d3                	mov    %edx,%ebx
 80c363f:	83 e3 02             	and    $0x2,%ebx
 80c3642:	85 db                	test   %ebx,%ebx
 80c3644:	74 06                	je     80c364c <_ZN4CTEA9SignatureEPc+0x60>
 80c3646:	66 89 08             	mov    %cx,(%eax)
 80c3649:	83 c0 02             	add    $0x2,%eax
 80c364c:	83 e2 01             	and    $0x1,%edx
 80c364f:	85 d2                	test   %edx,%edx
 80c3651:	74 05                	je     80c3658 <_ZN4CTEA9SignatureEPc+0x6c>
 80c3653:	88 08                	mov    %cl,(%eax)
 80c3655:	83 c0 01             	add    $0x1,%eax
 80c3658:	c6 45 dd 54          	movb   $0x54,-0x23(%ebp)
 80c365c:	c6 45 de 45          	movb   $0x45,-0x22(%ebp)
 80c3660:	c6 45 df 41          	movb   $0x41,-0x21(%ebp)
 80c3664:	c6 45 e0 00          	movb   $0x0,-0x20(%ebp)
 80c3668:	8d 45 dd             	lea    -0x23(%ebp),%eax
 80c366b:	89 04 24             	mov    %eax,(%esp)
 80c366e:	e8 3d ad fb ff       	call   807e3b0 <strlen@plt>
 80c3673:	89 45 f4             	mov    %eax,-0xc(%ebp)
 80c3676:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3679:	8b 40 0c             	mov    0xc(%eax),%eax
 80c367c:	89 c2                	mov    %eax,%edx
 80c367e:	8b 45 08             	mov    0x8(%ebp),%eax
 80c3681:	8d 48 18             	lea    0x18(%eax),%ecx
 80c3684:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 80c3687:	8d 45 dd             	lea    -0x23(%ebp),%eax
 80c368a:	01 d8                	add    %ebx,%eax
 80c368c:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c3690:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 80c3694:	89 04 24             	mov    %eax,(%esp)
 80c3697:	e8 04 a2 fb ff       	call   807d8a0 <memcpy@plt>
 80c369c:	8b 45 08             	mov    0x8(%ebp),%eax
 80c369f:	8b 48 14             	mov    0x14(%eax),%ecx
 80c36a2:	8b 45 08             	mov    0x8(%ebp),%eax
 80c36a5:	8b 50 10             	mov    0x10(%eax),%edx
 80c36a8:	8b 45 08             	mov    0x8(%ebp),%eax
 80c36ab:	8b 40 0c             	mov    0xc(%eax),%eax
 80c36ae:	89 c3                	mov    %eax,%ebx
 80c36b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 80c36b3:	01 c3                	add    %eax,%ebx
 80c36b5:	8d 45 dd             	lea    -0x23(%ebp),%eax
 80c36b8:	01 d8                	add    %ebx,%eax
 80c36ba:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 80c36be:	89 54 24 08          	mov    %edx,0x8(%esp)
 80c36c2:	c7 44 24 04 70 33 b2 	movl   $0x8b23370,0x4(%esp)
 80c36c9:	08 
 80c36ca:	89 04 24             	mov    %eax,(%esp)
 80c36cd:	e8 6e ad fb ff       	call   807e440 <sprintf@plt>
 80c36d2:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 80c36d8:	89 04 24             	mov    %eax,(%esp)
 80c36db:	e8 bc 7f ff ff       	call   80bb69c <_ZN4CSHAC1Ev>
 80c36e0:	8d 45 dd             	lea    -0x23(%ebp),%eax
 80c36e3:	89 04 24             	mov    %eax,(%esp)
 80c36e6:	e8 c5 ac fb ff       	call   807e3b0 <strlen@plt>
 80c36eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 80c36ef:	8d 45 dd             	lea    -0x23(%ebp),%eax
 80c36f2:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c36f6:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 80c36fc:	89 04 24             	mov    %eax,(%esp)
 80c36ff:	e8 04 80 ff ff       	call   80bb708 <_ZN4CSHA7AddDataEPKci>
 80c3704:	8b 45 0c             	mov    0xc(%ebp),%eax
 80c3707:	89 44 24 04          	mov    %eax,0x4(%esp)
 80c370b:	8d 85 70 ff ff ff    	lea    -0x90(%ebp),%eax
 80c3711:	89 04 24             	mov    %eax,(%esp)
 80c3714:	e8 45 81 ff ff       	call   80bb85e <_ZN4CSHA11FinalDigestEPc>
 80c3719:	81 c4 a0 00 00 00    	add    $0xa0,%esp
 80c371f:	5b                   	pop    %ebx
 80c3720:	5e                   	pop    %esi
 80c3721:	5d                   	pop    %ebp
 80c3722:	c3                   	ret
 80c3723:	90                   	nop

```

```c
// CTEA::Signature @ 0x80c35ec

/* CTEA::Signature(char*) */

void __thiscall CTEA::Signature(CTEA *this,char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  CSHA local_94 [109];
  char local_27 [23];
  size_t local_10;
  
  pcVar2 = local_27;
  uVar4 = 0x17;
  bVar6 = ((uint)pcVar2 & 1) != 0;
  if (bVar6) {
    pcVar2 = local_27 + 1;
    uVar4 = 0x16;
  }
  if (((uint)pcVar2 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
    uVar4 = uVar4 - 2;
  }
  uVar5 = 0;
  do {
    pcVar1 = pcVar2 + uVar5;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    uVar5 = uVar5 + 4;
  } while (uVar5 < (uVar4 & 0xfffffffc));
  pcVar2 = pcVar2 + uVar5;
  if ((uVar4 & 2) != 0) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2 = pcVar2 + 2;
  }
  if (!bVar6) {
    *pcVar2 = '\0';
  }
  builtin_strncpy(local_27,"TEA",4);
  local_10 = strlen(local_27);
  memcpy(local_27 + local_10,this + 0x18,*(size_t *)(this + 0xc));
  sprintf(local_27 + *(int *)(this + 0xc) + local_10,"%d%d",*(undefined4 *)(this + 0x10),
          *(undefined4 *)(this + 0x14));
  CSHA::CSHA(local_94);
  sVar3 = strlen(local_27);
  CSHA::AddData(local_94,local_27,sVar3);
  CSHA::FinalDigest(local_94,param_1);
  return;
}

```

