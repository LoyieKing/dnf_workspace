# CObfuscator

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CObfuscator

```asm
// === 08585888 CObfuscator::CObfuscator  [0x08585888-0x85858d5] ===
 8585888:	55                   	push   %ebp
 8585889:	89 e5                	mov    %esp,%ebp
 858588b:	56                   	push   %esi
 858588c:	53                   	push   %ebx
 858588d:	83 ec 20             	sub    $0x20,%esp
 8585890:	8b 45 08             	mov    0x8(%ebp),%eax
 8585893:	89 04 24             	mov    %eax,(%esp)
 8585896:	e8 01 68 d9 ff       	call   831c09c <_ZN11CBitManagerC1Ev>
 858589b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858589e:	89 04 24             	mov    %eax,(%esp)
 85858a1:	e8 f6 67 d9 ff       	call   831c09c <_ZN11CBitManagerC1Ev>
 85858a6:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85858a9:	89 04 24             	mov    %eax,(%esp)
 85858ac:	e8 17 68 d9 ff       	call   831c0c8 <_ZN11CBitManagerD1Ev>
 85858b1:	eb 1b                	jmp    85858ce <_ZN11CObfuscatorC1Ev+0x46>
 85858b3:	89 d3                	mov    %edx,%ebx
 85858b5:	89 c6                	mov    %eax,%esi
 85858b7:	8b 45 08             	mov    0x8(%ebp),%eax
 85858ba:	89 04 24             	mov    %eax,(%esp)
 85858bd:	e8 06 68 d9 ff       	call   831c0c8 <_ZN11CBitManagerD1Ev>
 85858c2:	89 f0                	mov    %esi,%eax
 85858c4:	89 da                	mov    %ebx,%edx
 85858c6:	89 04 24             	mov    %eax,(%esp)
 85858c9:	e8 82 de 55 00       	call   8ae3750 <_Unwind_Resume>
 85858ce:	83 c4 20             	add    $0x20,%esp
 85858d1:	5b                   	pop    %ebx
 85858d2:	5e                   	pop    %esi
 85858d3:	5d                   	pop    %ebp
 85858d4:	c3                   	ret
 85858d5:	90                   	nop

```

```c
// CObfuscator::CObfuscator @ 0x8585888

/* CObfuscator::CObfuscator() */

void __thiscall CObfuscator::CObfuscator(CObfuscator *this)

{
  CBitManager local_1c [16];
  
  CBitManager::CBitManager((CBitManager *)this);
                    /* try { // try from 085858a1 to 085858b0 has its CatchHandler @ 085858b3 */
  CBitManager::CBitManager(local_1c);
  CBitManager::~CBitManager(local_1c);
  return;
}

```

---

## Deobfuscate1

```asm
// === 08585aaa CObfuscator::Deobfuscate1  [0x08585aaa-0x8585be3] ===
 8585aaa:	55                   	push   %ebp
 8585aab:	89 e5                	mov    %esp,%ebp
 8585aad:	83 ec 28             	sub    $0x28,%esp
 8585ab0:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8585ab7:	8b 45 08             	mov    0x8(%ebp),%eax
 8585aba:	8b 40 08             	mov    0x8(%eax),%eax
 8585abd:	c1 e0 03             	shl    $0x3,%eax
 8585ac0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8585ac3:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8585ac6:	ba 93 24 49 92       	mov    $0x92492493,%edx
 8585acb:	89 c8                	mov    %ecx,%eax
 8585acd:	f7 ea                	imul   %edx
 8585acf:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 8585ad2:	89 c2                	mov    %eax,%edx
 8585ad4:	c1 fa 02             	sar    $0x2,%edx
 8585ad7:	89 c8                	mov    %ecx,%eax
 8585ad9:	c1 f8 1f             	sar    $0x1f,%eax
 8585adc:	89 d1                	mov    %edx,%ecx
 8585ade:	29 c1                	sub    %eax,%ecx
 8585ae0:	89 c8                	mov    %ecx,%eax
 8585ae2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8585ae5:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 8585ae8:	ba 93 24 49 92       	mov    $0x92492493,%edx
 8585aed:	89 c8                	mov    %ecx,%eax
 8585aef:	f7 ea                	imul   %edx
 8585af1:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 8585af4:	89 c2                	mov    %eax,%edx
 8585af6:	c1 fa 02             	sar    $0x2,%edx
 8585af9:	89 c8                	mov    %ecx,%eax
 8585afb:	c1 f8 1f             	sar    $0x1f,%eax
 8585afe:	29 c2                	sub    %eax,%edx
 8585b00:	89 d0                	mov    %edx,%eax
 8585b02:	c1 e0 03             	shl    $0x3,%eax
 8585b05:	29 d0                	sub    %edx,%eax
 8585b07:	89 ca                	mov    %ecx,%edx
 8585b09:	29 c2                	sub    %eax,%edx
 8585b0b:	8b 45 08             	mov    0x8(%ebp),%eax
 8585b0e:	89 50 0c             	mov    %edx,0xc(%eax)
 8585b11:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8585b18:	e9 ac 00 00 00       	jmp    8585bc9 <_ZN11CObfuscator12Deobfuscate1Ev+0x11f>
 8585b1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8585b20:	8b 40 0c             	mov    0xc(%eax),%eax
 8585b23:	85 c0                	test   %eax,%eax
 8585b25:	75 0c                	jne    8585b33 <_ZN11CObfuscator12Deobfuscate1Ev+0x89>
 8585b27:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8585b2a:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8585b2d:	0f 84 a9 00 00 00    	je     8585bdc <_ZN11CObfuscator12Deobfuscate1Ev+0x132>
 8585b33:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8585b37:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8585b3b:	75 24                	jne    8585b61 <_ZN11CObfuscator12Deobfuscate1Ev+0xb7>
 8585b3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8585b40:	8b 40 0c             	mov    0xc(%eax),%eax
 8585b43:	85 c0                	test   %eax,%eax
 8585b45:	74 1a                	je     8585b61 <_ZN11CObfuscator12Deobfuscate1Ev+0xb7>
 8585b47:	8b 45 08             	mov    0x8(%ebp),%eax
 8585b4a:	8b 50 0c             	mov    0xc(%eax),%edx
 8585b4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8585b50:	89 54 24 04          	mov    %edx,0x4(%esp)
 8585b54:	89 04 24             	mov    %eax,(%esp)
 8585b57:	e8 04 66 d9 ff       	call   831c160 <_ZN11CBitManager13GetBitFromLSBEi>
 8585b5c:	88 45 f7             	mov    %al,-0x9(%ebp)
 8585b5f:	eb 16                	jmp    8585b77 <_ZN11CObfuscator12Deobfuscate1Ev+0xcd>
 8585b61:	8b 45 08             	mov    0x8(%ebp),%eax
 8585b64:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8585b6b:	00 
 8585b6c:	89 04 24             	mov    %eax,(%esp)
 8585b6f:	e8 ec 65 d9 ff       	call   831c160 <_ZN11CBitManager13GetBitFromLSBEi>
 8585b74:	88 45 f7             	mov    %al,-0x9(%ebp)
 8585b77:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8585b7b:	7e 1d                	jle    8585b9a <_ZN11CObfuscator12Deobfuscate1Ev+0xf0>
 8585b7d:	8b 45 08             	mov    0x8(%ebp),%eax
 8585b80:	8b 50 04             	mov    0x4(%eax),%edx
 8585b83:	8b 45 08             	mov    0x8(%ebp),%eax
 8585b86:	89 54 24 08          	mov    %edx,0x8(%esp)
 8585b8a:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8585b91:	00 
 8585b92:	89 04 24             	mov    %eax,(%esp)
 8585b95:	e8 cc 66 d9 ff       	call   831c266 <_ZN11CBitManager9ShiftLeftEiPh>
 8585b9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8585b9d:	8b 50 04             	mov    0x4(%eax),%edx
 8585ba0:	8b 45 08             	mov    0x8(%ebp),%eax
 8585ba3:	8b 40 08             	mov    0x8(%eax),%eax
 8585ba6:	83 e8 01             	sub    $0x1,%eax
 8585ba9:	01 c2                	add    %eax,%edx
 8585bab:	8b 45 08             	mov    0x8(%ebp),%eax
 8585bae:	8b 48 04             	mov    0x4(%eax),%ecx
 8585bb1:	8b 45 08             	mov    0x8(%ebp),%eax
 8585bb4:	8b 40 08             	mov    0x8(%eax),%eax
 8585bb7:	83 e8 01             	sub    $0x1,%eax
 8585bba:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8585bbd:	0f b6 00             	movzbl (%eax),%eax
 8585bc0:	0a 45 f7             	or     -0x9(%ebp),%al
 8585bc3:	88 02                	mov    %al,(%edx)
 8585bc5:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8585bc9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8585bcc:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8585bcf:	0f 9e c0             	setle  %al
 8585bd2:	84 c0                	test   %al,%al
 8585bd4:	0f 85 43 ff ff ff    	jne    8585b1d <_ZN11CObfuscator12Deobfuscate1Ev+0x73>
 8585bda:	eb 01                	jmp    8585bdd <_ZN11CObfuscator12Deobfuscate1Ev+0x133>
 8585bdc:	90                   	nop
 8585bdd:	b8 00 00 00 00       	mov    $0x0,%eax
 8585be2:	c9                   	leave
 8585be3:	c3                   	ret

```

```c
// CObfuscator::Deobfuscate1 @ 0x8585aaa

/* CObfuscator::Deobfuscate1() */

undefined4 __thiscall CObfuscator::Deobfuscate1(CObfuscator *this)

{
  int iVar1;
  int local_1c;
  byte local_d;
  
  iVar1 = (*(int *)(this + 8) * 8) / 7;
  *(int *)(this + 0xc) = (*(int *)(this + 8) * 8) % 7;
  for (local_1c = 0; (local_1c <= iVar1 && ((*(int *)(this + 0xc) != 0 || (local_1c != iVar1))));
      local_1c = local_1c + 1) {
    if ((local_1c == 0) && (*(int *)(this + 0xc) != 0)) {
      local_d = CBitManager::GetBitFromLSB((CBitManager *)this,*(int *)(this + 0xc));
    }
    else {
      local_d = CBitManager::GetBitFromLSB((CBitManager *)this,7);
    }
    if (0 < local_1c) {
      CBitManager::ShiftLeft((CBitManager *)this,7,*(uchar **)(this + 4));
    }
    *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) =
         *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) | local_d;
  }
  return 0;
}

```

---

## Deobfuscate2

```asm
// === 08585d2e CObfuscator::Deobfuscate2  [0x08585d2e-0x8585ec2] ===
 8585d2e:	55                   	push   %ebp
 8585d2f:	89 e5                	mov    %esp,%ebp
 8585d31:	53                   	push   %ebx
 8585d32:	83 ec 34             	sub    $0x34,%esp
 8585d35:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8585d3c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8585d43:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8585d4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8585d4d:	8b 40 08             	mov    0x8(%eax),%eax
 8585d50:	c1 e0 03             	shl    $0x3,%eax
 8585d53:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8585d56:	8b 45 08             	mov    0x8(%ebp),%eax
 8585d59:	8b 48 08             	mov    0x8(%eax),%ecx
 8585d5c:	ba 93 24 49 92       	mov    $0x92492493,%edx
 8585d61:	89 c8                	mov    %ecx,%eax
 8585d63:	f7 ea                	imul   %edx
 8585d65:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 8585d68:	89 c2                	mov    %eax,%edx
 8585d6a:	c1 fa 02             	sar    $0x2,%edx
 8585d6d:	89 c8                	mov    %ecx,%eax
 8585d6f:	c1 f8 1f             	sar    $0x1f,%eax
 8585d72:	89 d3                	mov    %edx,%ebx
 8585d74:	29 c3                	sub    %eax,%ebx
 8585d76:	89 d8                	mov    %ebx,%eax
 8585d78:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8585d7b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8585d7e:	89 d0                	mov    %edx,%eax
 8585d80:	c1 e0 03             	shl    $0x3,%eax
 8585d83:	29 d0                	sub    %edx,%eax
 8585d85:	89 ca                	mov    %ecx,%edx
 8585d87:	29 c2                	sub    %eax,%edx
 8585d89:	89 d0                	mov    %edx,%eax
 8585d8b:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8585d8e:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8585d92:	75 09                	jne    8585d9d <_ZN11CObfuscator12Deobfuscate2Ev+0x6f>
 8585d94:	c7 45 ec 06 00 00 00 	movl   $0x6,-0x14(%ebp)
 8585d9b:	eb 04                	jmp    8585da1 <_ZN11CObfuscator12Deobfuscate2Ev+0x73>
 8585d9d:	83 6d ec 01          	subl   $0x1,-0x14(%ebp)
 8585da1:	8b 45 08             	mov    0x8(%ebp),%eax
 8585da4:	8b 40 08             	mov    0x8(%eax),%eax
 8585da7:	83 e8 01             	sub    $0x1,%eax
 8585daa:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8585dad:	e9 f6 00 00 00       	jmp    8585ea8 <_ZN11CObfuscator12Deobfuscate2Ev+0x17a>
 8585db2:	8b 45 08             	mov    0x8(%ebp),%eax
 8585db5:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8585db8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8585dbc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8585dc3:	00 
 8585dc4:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8585dc7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8585dcb:	89 04 24             	mov    %eax,(%esp)
 8585dce:	e8 29 65 d9 ff       	call   831c2fc <_ZN11CBitManager6GetBitEiii>
 8585dd3:	88 45 f7             	mov    %al,-0x9(%ebp)
 8585dd6:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
 8585dda:	b8 07 00 00 00       	mov    $0x7,%eax
 8585ddf:	2b 45 ec             	sub    -0x14(%ebp),%eax
 8585de2:	89 d3                	mov    %edx,%ebx
 8585de4:	89 c1                	mov    %eax,%ecx
 8585de6:	d3 e3                	shl    %cl,%ebx
 8585de8:	89 d8                	mov    %ebx,%eax
 8585dea:	88 45 f7             	mov    %al,-0x9(%ebp)
 8585ded:	8b 45 08             	mov    0x8(%ebp),%eax
 8585df0:	8b 50 04             	mov    0x4(%eax),%edx
 8585df3:	8b 45 08             	mov    0x8(%ebp),%eax
 8585df6:	8b 40 08             	mov    0x8(%eax),%eax
 8585df9:	83 e8 01             	sub    $0x1,%eax
 8585dfc:	01 c2                	add    %eax,%edx
 8585dfe:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8585e02:	88 02                	mov    %al,(%edx)
 8585e04:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8585e07:	8d 50 01             	lea    0x1(%eax),%edx
 8585e0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8585e0d:	c7 44 24 0c 07 00 00 	movl   $0x7,0xc(%esp)
 8585e14:	00 
 8585e15:	89 54 24 08          	mov    %edx,0x8(%esp)
 8585e19:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8585e1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8585e20:	89 04 24             	mov    %eax,(%esp)
 8585e23:	e8 d4 64 d9 ff       	call   831c2fc <_ZN11CBitManager6GetBitEiii>
 8585e28:	88 45 f7             	mov    %al,-0x9(%ebp)
 8585e2b:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
 8585e2f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8585e32:	83 c0 01             	add    $0x1,%eax
 8585e35:	89 d3                	mov    %edx,%ebx
 8585e37:	89 c1                	mov    %eax,%ecx
 8585e39:	d3 fb                	sar    %cl,%ebx
 8585e3b:	89 d8                	mov    %ebx,%eax
 8585e3d:	88 45 f7             	mov    %al,-0x9(%ebp)
 8585e40:	8b 45 08             	mov    0x8(%ebp),%eax
 8585e43:	8b 50 04             	mov    0x4(%eax),%edx
 8585e46:	8b 45 08             	mov    0x8(%ebp),%eax
 8585e49:	8b 40 08             	mov    0x8(%eax),%eax
 8585e4c:	83 e8 01             	sub    $0x1,%eax
 8585e4f:	01 c2                	add    %eax,%edx
 8585e51:	8b 45 08             	mov    0x8(%ebp),%eax
 8585e54:	8b 48 04             	mov    0x4(%eax),%ecx
 8585e57:	8b 45 08             	mov    0x8(%ebp),%eax
 8585e5a:	8b 40 08             	mov    0x8(%eax),%eax
 8585e5d:	83 e8 01             	sub    $0x1,%eax
 8585e60:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8585e63:	0f b6 00             	movzbl (%eax),%eax
 8585e66:	0a 45 f7             	or     -0x9(%ebp),%al
 8585e69:	88 02                	mov    %al,(%edx)
 8585e6b:	8b 45 08             	mov    0x8(%ebp),%eax
 8585e6e:	8b 50 04             	mov    0x4(%eax),%edx
 8585e71:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8585e74:	01 c2                	add    %eax,%edx
 8585e76:	8b 45 08             	mov    0x8(%ebp),%eax
 8585e79:	8b 48 04             	mov    0x4(%eax),%ecx
 8585e7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8585e7f:	8b 40 08             	mov    0x8(%eax),%eax
 8585e82:	83 e8 01             	sub    $0x1,%eax
 8585e85:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8585e88:	0f b6 00             	movzbl (%eax),%eax
 8585e8b:	88 02                	mov    %al,(%edx)
 8585e8d:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8585e91:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8585e95:	75 09                	jne    8585ea0 <_ZN11CObfuscator12Deobfuscate2Ev+0x172>
 8585e97:	c7 45 ec 06 00 00 00 	movl   $0x6,-0x14(%ebp)
 8585e9e:	eb 04                	jmp    8585ea4 <_ZN11CObfuscator12Deobfuscate2Ev+0x176>
 8585ea0:	83 6d ec 01          	subl   $0x1,-0x14(%ebp)
 8585ea4:	83 6d e4 01          	subl   $0x1,-0x1c(%ebp)
 8585ea8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8585eab:	f7 d0                	not    %eax
 8585ead:	c1 e8 1f             	shr    $0x1f,%eax
 8585eb0:	84 c0                	test   %al,%al
 8585eb2:	0f 85 fa fe ff ff    	jne    8585db2 <_ZN11CObfuscator12Deobfuscate2Ev+0x84>
 8585eb8:	b8 00 00 00 00       	mov    $0x0,%eax
 8585ebd:	83 c4 34             	add    $0x34,%esp
 8585ec0:	5b                   	pop    %ebx
 8585ec1:	5d                   	pop    %ebp
 8585ec2:	c3                   	ret

```

```c
// CObfuscator::Deobfuscate2 @ 0x8585d2e

/* CObfuscator::Deobfuscate2() */

undefined4 __thiscall CObfuscator::Deobfuscate2(CObfuscator *this)

{
  char cVar1;
  byte bVar2;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  if (*(int *)(this + 8) % 7 == 0) {
    local_18 = 6;
  }
  else {
    local_18 = *(int *)(this + 8) % 7 + -1;
  }
  local_20 = *(int *)(this + 8);
  while (local_20 = local_20 + -1, -1 < local_20) {
    cVar1 = CBitManager::GetBit((CBitManager *)this,local_20,0,local_18);
    *(char *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) = cVar1 << (7U - (char)local_18 & 0x1f);
    bVar2 = CBitManager::GetBit((CBitManager *)this,local_20,local_18 + 1,7);
    *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) =
         *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) |
         (byte)((int)(uint)bVar2 >> ((char)local_18 + 1U & 0x1f));
    *(undefined1 *)(*(int *)(this + 4) + local_1c) =
         *(undefined1 *)(*(int *)(this + 4) + *(int *)(this + 8) + -1);
    local_1c = local_1c + 1;
    if (local_18 == 0) {
      local_18 = 6;
    }
    else {
      local_18 = local_18 + -1;
    }
  }
  return 0;
}

```

---

## DeobfuscatePacket

```asm
// === 08585938 CObfuscator::DeobfuscatePacket  [0x08585938-0x8585985] ===
 8585938:	55                   	push   %ebp
 8585939:	89 e5                	mov    %esp,%ebp
 858593b:	83 ec 18             	sub    $0x18,%esp
 858593e:	8b 45 08             	mov    0x8(%ebp),%eax
 8585941:	8b 55 10             	mov    0x10(%ebp),%edx
 8585944:	89 54 24 08          	mov    %edx,0x8(%esp)
 8585948:	8b 55 0c             	mov    0xc(%ebp),%edx
 858594b:	89 54 24 04          	mov    %edx,0x4(%esp)
 858594f:	89 04 24             	mov    %eax,(%esp)
 8585952:	e8 bf 67 d9 ff       	call   831c116 <_ZN11CBitManager8ReadDataEPhi>
 8585957:	8b 45 14             	mov    0x14(%ebp),%eax
 858595a:	83 f8 01             	cmp    $0x1,%eax
 858595d:	74 07                	je     8585966 <_ZN11CObfuscator17DeobfuscatePacketEPhii+0x2e>
 858595f:	83 f8 02             	cmp    $0x2,%eax
 8585962:	74 0f                	je     8585973 <_ZN11CObfuscator17DeobfuscatePacketEPhii+0x3b>
 8585964:	eb 18                	jmp    858597e <_ZN11CObfuscator17DeobfuscatePacketEPhii+0x46>
 8585966:	8b 45 08             	mov    0x8(%ebp),%eax
 8585969:	89 04 24             	mov    %eax,(%esp)
 858596c:	e8 39 01 00 00       	call   8585aaa <_ZN11CObfuscator12Deobfuscate1Ev>
 8585971:	eb 0b                	jmp    858597e <_ZN11CObfuscator17DeobfuscatePacketEPhii+0x46>
 8585973:	8b 45 08             	mov    0x8(%ebp),%eax
 8585976:	89 04 24             	mov    %eax,(%esp)
 8585979:	e8 b0 03 00 00       	call   8585d2e <_ZN11CObfuscator12Deobfuscate2Ev>
 858597e:	8b 45 08             	mov    0x8(%ebp),%eax
 8585981:	8b 40 04             	mov    0x4(%eax),%eax
 8585984:	c9                   	leave
 8585985:	c3                   	ret

```

```c
// CObfuscator::DeobfuscatePacket @ 0x8585938

/* CObfuscator::DeobfuscatePacket(unsigned char*, int, int) */

undefined4 __thiscall
CObfuscator::DeobfuscatePacket(CObfuscator *this,uchar *param_1,int param_2,int param_3)

{
  CBitManager::ReadData((CBitManager *)this,param_1,param_2);
  if (param_3 == 1) {
    Deobfuscate1(this);
  }
  else if (param_3 == 2) {
    Deobfuscate2(this);
  }
  return *(undefined4 *)(this + 4);
}

```

---

## Obfuscate1

```asm
// === 08585986 CObfuscator::Obfuscate1  [0x08585986-0x8585aa9] ===
 8585986:	55                   	push   %ebp
 8585987:	89 e5                	mov    %esp,%ebp
 8585989:	83 ec 28             	sub    $0x28,%esp
 858598c:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8585993:	8b 45 08             	mov    0x8(%ebp),%eax
 8585996:	8b 40 08             	mov    0x8(%eax),%eax
 8585999:	c1 e0 03             	shl    $0x3,%eax
 858599c:	89 45 ec             	mov    %eax,-0x14(%ebp)
 858599f:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 85859a2:	ba 93 24 49 92       	mov    $0x92492493,%edx
 85859a7:	89 c8                	mov    %ecx,%eax
 85859a9:	f7 ea                	imul   %edx
 85859ab:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 85859ae:	89 c2                	mov    %eax,%edx
 85859b0:	c1 fa 02             	sar    $0x2,%edx
 85859b3:	89 c8                	mov    %ecx,%eax
 85859b5:	c1 f8 1f             	sar    $0x1f,%eax
 85859b8:	89 d1                	mov    %edx,%ecx
 85859ba:	29 c1                	sub    %eax,%ecx
 85859bc:	89 c8                	mov    %ecx,%eax
 85859be:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85859c1:	8b 4d ec             	mov    -0x14(%ebp),%ecx
 85859c4:	ba 93 24 49 92       	mov    $0x92492493,%edx
 85859c9:	89 c8                	mov    %ecx,%eax
 85859cb:	f7 ea                	imul   %edx
 85859cd:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 85859d0:	89 c2                	mov    %eax,%edx
 85859d2:	c1 fa 02             	sar    $0x2,%edx
 85859d5:	89 c8                	mov    %ecx,%eax
 85859d7:	c1 f8 1f             	sar    $0x1f,%eax
 85859da:	29 c2                	sub    %eax,%edx
 85859dc:	89 d0                	mov    %edx,%eax
 85859de:	c1 e0 03             	shl    $0x3,%eax
 85859e1:	29 d0                	sub    %edx,%eax
 85859e3:	89 ca                	mov    %ecx,%edx
 85859e5:	29 c2                	sub    %eax,%edx
 85859e7:	8b 45 08             	mov    0x8(%ebp),%eax
 85859ea:	89 50 0c             	mov    %edx,0xc(%eax)
 85859ed:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 85859f4:	e9 99 00 00 00       	jmp    8585a92 <_ZN11CObfuscator10Obfuscate1Ev+0x10c>
 85859f9:	8b 45 08             	mov    0x8(%ebp),%eax
 85859fc:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8585a03:	00 
 8585a04:	89 04 24             	mov    %eax,(%esp)
 8585a07:	e8 54 67 d9 ff       	call   831c160 <_ZN11CBitManager13GetBitFromLSBEi>
 8585a0c:	88 45 f7             	mov    %al,-0x9(%ebp)
 8585a0f:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8585a13:	7e 27                	jle    8585a3c <_ZN11CObfuscator10Obfuscate1Ev+0xb6>
 8585a15:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8585a18:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8585a1b:	7d 1f                	jge    8585a3c <_ZN11CObfuscator10Obfuscate1Ev+0xb6>
 8585a1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8585a20:	8b 50 04             	mov    0x4(%eax),%edx
 8585a23:	8b 45 08             	mov    0x8(%ebp),%eax
 8585a26:	89 54 24 08          	mov    %edx,0x8(%esp)
 8585a2a:	c7 44 24 04 07 00 00 	movl   $0x7,0x4(%esp)
 8585a31:	00 
 8585a32:	89 04 24             	mov    %eax,(%esp)
 8585a35:	e8 2c 68 d9 ff       	call   831c266 <_ZN11CBitManager9ShiftLeftEiPh>
 8585a3a:	eb 27                	jmp    8585a63 <_ZN11CObfuscator10Obfuscate1Ev+0xdd>
 8585a3c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8585a3f:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8585a42:	75 1f                	jne    8585a63 <_ZN11CObfuscator10Obfuscate1Ev+0xdd>
 8585a44:	8b 45 08             	mov    0x8(%ebp),%eax
 8585a47:	8b 48 04             	mov    0x4(%eax),%ecx
 8585a4a:	8b 45 08             	mov    0x8(%ebp),%eax
 8585a4d:	8b 50 0c             	mov    0xc(%eax),%edx
 8585a50:	8b 45 08             	mov    0x8(%ebp),%eax
 8585a53:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8585a57:	89 54 24 04          	mov    %edx,0x4(%esp)
 8585a5b:	89 04 24             	mov    %eax,(%esp)
 8585a5e:	e8 03 68 d9 ff       	call   831c266 <_ZN11CBitManager9ShiftLeftEiPh>
 8585a63:	8b 45 08             	mov    0x8(%ebp),%eax
 8585a66:	8b 50 04             	mov    0x4(%eax),%edx
 8585a69:	8b 45 08             	mov    0x8(%ebp),%eax
 8585a6c:	8b 40 08             	mov    0x8(%eax),%eax
 8585a6f:	83 e8 01             	sub    $0x1,%eax
 8585a72:	01 c2                	add    %eax,%edx
 8585a74:	8b 45 08             	mov    0x8(%ebp),%eax
 8585a77:	8b 48 04             	mov    0x4(%eax),%ecx
 8585a7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8585a7d:	8b 40 08             	mov    0x8(%eax),%eax
 8585a80:	83 e8 01             	sub    $0x1,%eax
 8585a83:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8585a86:	0f b6 00             	movzbl (%eax),%eax
 8585a89:	0a 45 f7             	or     -0x9(%ebp),%al
 8585a8c:	88 02                	mov    %al,(%edx)
 8585a8e:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8585a92:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8585a95:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8585a98:	0f 9e c0             	setle  %al
 8585a9b:	84 c0                	test   %al,%al
 8585a9d:	0f 85 56 ff ff ff    	jne    85859f9 <_ZN11CObfuscator10Obfuscate1Ev+0x73>
 8585aa3:	b8 00 00 00 00       	mov    $0x0,%eax
 8585aa8:	c9                   	leave
 8585aa9:	c3                   	ret

```

```c
// CObfuscator::Obfuscate1 @ 0x8585986

/* CObfuscator::Obfuscate1() */

undefined4 __thiscall CObfuscator::Obfuscate1(CObfuscator *this)

{
  int iVar1;
  byte bVar2;
  int local_1c;
  
  iVar1 = (*(int *)(this + 8) * 8) / 7;
  *(int *)(this + 0xc) = (*(int *)(this + 8) * 8) % 7;
  for (local_1c = 0; local_1c <= iVar1; local_1c = local_1c + 1) {
    bVar2 = CBitManager::GetBitFromLSB((CBitManager *)this,7);
    if ((local_1c < 1) || (iVar1 <= local_1c)) {
      if (local_1c == iVar1) {
        CBitManager::ShiftLeft((CBitManager *)this,*(int *)(this + 0xc),*(uchar **)(this + 4));
      }
    }
    else {
      CBitManager::ShiftLeft((CBitManager *)this,7,*(uchar **)(this + 4));
    }
    *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) =
         *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) | bVar2;
  }
  return 0;
}

```

---

## Obfuscate2

```asm
// === 08585be4 CObfuscator::Obfuscate2  [0x08585be4-0x8585d2d] ===
 8585be4:	55                   	push   %ebp
 8585be5:	89 e5                	mov    %esp,%ebp
 8585be7:	53                   	push   %ebx
 8585be8:	83 ec 34             	sub    $0x34,%esp
 8585beb:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8585bf2:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 8585bf9:	c7 45 ec 06 00 00 00 	movl   $0x6,-0x14(%ebp)
 8585c00:	8b 45 08             	mov    0x8(%ebp),%eax
 8585c03:	8b 40 08             	mov    0x8(%eax),%eax
 8585c06:	c1 e0 03             	shl    $0x3,%eax
 8585c09:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8585c0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8585c0f:	8b 40 08             	mov    0x8(%eax),%eax
 8585c12:	83 e8 01             	sub    $0x1,%eax
 8585c15:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8585c18:	e9 f6 00 00 00       	jmp    8585d13 <_ZN11CObfuscator10Obfuscate2Ev+0x12f>
 8585c1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8585c20:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8585c23:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8585c27:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8585c2e:	00 
 8585c2f:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8585c32:	89 54 24 04          	mov    %edx,0x4(%esp)
 8585c36:	89 04 24             	mov    %eax,(%esp)
 8585c39:	e8 be 66 d9 ff       	call   831c2fc <_ZN11CBitManager6GetBitEiii>
 8585c3e:	88 45 f7             	mov    %al,-0x9(%ebp)
 8585c41:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
 8585c45:	b8 07 00 00 00       	mov    $0x7,%eax
 8585c4a:	2b 45 ec             	sub    -0x14(%ebp),%eax
 8585c4d:	89 d3                	mov    %edx,%ebx
 8585c4f:	89 c1                	mov    %eax,%ecx
 8585c51:	d3 e3                	shl    %cl,%ebx
 8585c53:	89 d8                	mov    %ebx,%eax
 8585c55:	88 45 f7             	mov    %al,-0x9(%ebp)
 8585c58:	8b 45 08             	mov    0x8(%ebp),%eax
 8585c5b:	8b 50 04             	mov    0x4(%eax),%edx
 8585c5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8585c61:	8b 40 08             	mov    0x8(%eax),%eax
 8585c64:	83 e8 01             	sub    $0x1,%eax
 8585c67:	01 c2                	add    %eax,%edx
 8585c69:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8585c6d:	88 02                	mov    %al,(%edx)
 8585c6f:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8585c72:	8d 50 01             	lea    0x1(%eax),%edx
 8585c75:	8b 45 08             	mov    0x8(%ebp),%eax
 8585c78:	c7 44 24 0c 07 00 00 	movl   $0x7,0xc(%esp)
 8585c7f:	00 
 8585c80:	89 54 24 08          	mov    %edx,0x8(%esp)
 8585c84:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8585c87:	89 54 24 04          	mov    %edx,0x4(%esp)
 8585c8b:	89 04 24             	mov    %eax,(%esp)
 8585c8e:	e8 69 66 d9 ff       	call   831c2fc <_ZN11CBitManager6GetBitEiii>
 8585c93:	88 45 f7             	mov    %al,-0x9(%ebp)
 8585c96:	0f b6 55 f7          	movzbl -0x9(%ebp),%edx
 8585c9a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8585c9d:	83 c0 01             	add    $0x1,%eax
 8585ca0:	89 d3                	mov    %edx,%ebx
 8585ca2:	89 c1                	mov    %eax,%ecx
 8585ca4:	d3 fb                	sar    %cl,%ebx
 8585ca6:	89 d8                	mov    %ebx,%eax
 8585ca8:	88 45 f7             	mov    %al,-0x9(%ebp)
 8585cab:	8b 45 08             	mov    0x8(%ebp),%eax
 8585cae:	8b 50 04             	mov    0x4(%eax),%edx
 8585cb1:	8b 45 08             	mov    0x8(%ebp),%eax
 8585cb4:	8b 40 08             	mov    0x8(%eax),%eax
 8585cb7:	83 e8 01             	sub    $0x1,%eax
 8585cba:	01 c2                	add    %eax,%edx
 8585cbc:	8b 45 08             	mov    0x8(%ebp),%eax
 8585cbf:	8b 48 04             	mov    0x4(%eax),%ecx
 8585cc2:	8b 45 08             	mov    0x8(%ebp),%eax
 8585cc5:	8b 40 08             	mov    0x8(%eax),%eax
 8585cc8:	83 e8 01             	sub    $0x1,%eax
 8585ccb:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8585cce:	0f b6 00             	movzbl (%eax),%eax
 8585cd1:	0a 45 f7             	or     -0x9(%ebp),%al
 8585cd4:	88 02                	mov    %al,(%edx)
 8585cd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8585cd9:	8b 50 04             	mov    0x4(%eax),%edx
 8585cdc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8585cdf:	01 c2                	add    %eax,%edx
 8585ce1:	8b 45 08             	mov    0x8(%ebp),%eax
 8585ce4:	8b 48 04             	mov    0x4(%eax),%ecx
 8585ce7:	8b 45 08             	mov    0x8(%ebp),%eax
 8585cea:	8b 40 08             	mov    0x8(%eax),%eax
 8585ced:	83 e8 01             	sub    $0x1,%eax
 8585cf0:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8585cf3:	0f b6 00             	movzbl (%eax),%eax
 8585cf6:	88 02                	mov    %al,(%edx)
 8585cf8:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8585cfc:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8585d00:	75 09                	jne    8585d0b <_ZN11CObfuscator10Obfuscate2Ev+0x127>
 8585d02:	c7 45 ec 06 00 00 00 	movl   $0x6,-0x14(%ebp)
 8585d09:	eb 04                	jmp    8585d0f <_ZN11CObfuscator10Obfuscate2Ev+0x12b>
 8585d0b:	83 6d ec 01          	subl   $0x1,-0x14(%ebp)
 8585d0f:	83 6d e4 01          	subl   $0x1,-0x1c(%ebp)
 8585d13:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8585d16:	f7 d0                	not    %eax
 8585d18:	c1 e8 1f             	shr    $0x1f,%eax
 8585d1b:	84 c0                	test   %al,%al
 8585d1d:	0f 85 fa fe ff ff    	jne    8585c1d <_ZN11CObfuscator10Obfuscate2Ev+0x39>
 8585d23:	b8 00 00 00 00       	mov    $0x0,%eax
 8585d28:	83 c4 34             	add    $0x34,%esp
 8585d2b:	5b                   	pop    %ebx
 8585d2c:	5d                   	pop    %ebp
 8585d2d:	c3                   	ret

```

```c
// CObfuscator::Obfuscate2 @ 0x8585be4

/* CObfuscator::Obfuscate2() */

undefined4 __thiscall CObfuscator::Obfuscate2(CObfuscator *this)

{
  char cVar1;
  byte bVar2;
  int local_20;
  int local_1c;
  int local_18;
  
  local_1c = 0;
  local_18 = 6;
  local_20 = *(int *)(this + 8);
  while (local_20 = local_20 + -1, -1 < local_20) {
    cVar1 = CBitManager::GetBit((CBitManager *)this,local_20,0,local_18);
    *(char *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) = cVar1 << (7U - (char)local_18 & 0x1f);
    bVar2 = CBitManager::GetBit((CBitManager *)this,local_20,local_18 + 1,7);
    *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) =
         *(byte *)(*(int *)(this + 4) + *(int *)(this + 8) + -1) |
         (byte)((int)(uint)bVar2 >> ((char)local_18 + 1U & 0x1f));
    *(undefined1 *)(*(int *)(this + 4) + local_1c) =
         *(undefined1 *)(*(int *)(this + 4) + *(int *)(this + 8) + -1);
    local_1c = local_1c + 1;
    if (local_18 == 0) {
      local_18 = 6;
    }
    else {
      local_18 = local_18 + -1;
    }
  }
  return 0;
}

```

---

## ObfuscatePacket

```asm
// === 085858ea CObfuscator::ObfuscatePacket  [0x085858ea-0x8585937] ===
 85858ea:	55                   	push   %ebp
 85858eb:	89 e5                	mov    %esp,%ebp
 85858ed:	83 ec 18             	sub    $0x18,%esp
 85858f0:	8b 45 08             	mov    0x8(%ebp),%eax
 85858f3:	8b 55 10             	mov    0x10(%ebp),%edx
 85858f6:	89 54 24 08          	mov    %edx,0x8(%esp)
 85858fa:	8b 55 0c             	mov    0xc(%ebp),%edx
 85858fd:	89 54 24 04          	mov    %edx,0x4(%esp)
 8585901:	89 04 24             	mov    %eax,(%esp)
 8585904:	e8 0d 68 d9 ff       	call   831c116 <_ZN11CBitManager8ReadDataEPhi>
 8585909:	8b 45 14             	mov    0x14(%ebp),%eax
 858590c:	83 f8 01             	cmp    $0x1,%eax
 858590f:	74 07                	je     8585918 <_ZN11CObfuscator15ObfuscatePacketEPhii+0x2e>
 8585911:	83 f8 02             	cmp    $0x2,%eax
 8585914:	74 0f                	je     8585925 <_ZN11CObfuscator15ObfuscatePacketEPhii+0x3b>
 8585916:	eb 18                	jmp    8585930 <_ZN11CObfuscator15ObfuscatePacketEPhii+0x46>
 8585918:	8b 45 08             	mov    0x8(%ebp),%eax
 858591b:	89 04 24             	mov    %eax,(%esp)
 858591e:	e8 63 00 00 00       	call   8585986 <_ZN11CObfuscator10Obfuscate1Ev>
 8585923:	eb 0b                	jmp    8585930 <_ZN11CObfuscator15ObfuscatePacketEPhii+0x46>
 8585925:	8b 45 08             	mov    0x8(%ebp),%eax
 8585928:	89 04 24             	mov    %eax,(%esp)
 858592b:	e8 b4 02 00 00       	call   8585be4 <_ZN11CObfuscator10Obfuscate2Ev>
 8585930:	8b 45 08             	mov    0x8(%ebp),%eax
 8585933:	8b 40 04             	mov    0x4(%eax),%eax
 8585936:	c9                   	leave
 8585937:	c3                   	ret

```

```c
// CObfuscator::ObfuscatePacket @ 0x85858ea

/* CObfuscator::ObfuscatePacket(unsigned char*, int, int) */

undefined4 __thiscall
CObfuscator::ObfuscatePacket(CObfuscator *this,uchar *param_1,int param_2,int param_3)

{
  CBitManager::ReadData((CBitManager *)this,param_1,param_2);
  if (param_3 == 1) {
    Obfuscate1(this);
  }
  else if (param_3 == 2) {
    Obfuscate2(this);
  }
  return *(undefined4 *)(this + 4);
}

```

---

## ~CObfuscator

```asm
// === 085858d6 CObfuscator::~CObfuscator  [0x085858d6-0x85858e9] ===
 85858d6:	55                   	push   %ebp
 85858d7:	89 e5                	mov    %esp,%ebp
 85858d9:	83 ec 18             	sub    $0x18,%esp
 85858dc:	8b 45 08             	mov    0x8(%ebp),%eax
 85858df:	89 04 24             	mov    %eax,(%esp)
 85858e2:	e8 e1 67 d9 ff       	call   831c0c8 <_ZN11CBitManagerD1Ev>
 85858e7:	c9                   	leave
 85858e8:	c3                   	ret
 85858e9:	90                   	nop

```

```c
// CObfuscator::~CObfuscator @ 0x85858d6

/* CObfuscator::~CObfuscator() */

void __thiscall CObfuscator::~CObfuscator(CObfuscator *this)

{
  CBitManager::~CBitManager((CBitManager *)this);
  return;
}

```

