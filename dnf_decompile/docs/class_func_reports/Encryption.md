# Encryption

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Decrypt

```asm
// === 0848db5e Encryption::Decrypt  [0x0848db5e-0x848dc4b] ===
 848db5e:	55                   	push   %ebp
 848db5f:	89 e5                	mov    %esp,%ebp
 848db61:	57                   	push   %edi
 848db62:	56                   	push   %esi
 848db63:	53                   	push   %ebx
 848db64:	83 ec 2c             	sub    $0x2c,%esp
 848db67:	c7 45 e0 b5 3e 45 04 	movl   $0x4453eb5,-0x20(%ebp)
 848db6e:	8b 45 10             	mov    0x10(%ebp),%eax
 848db71:	8b 00                	mov    (%eax),%eax
 848db73:	85 c0                	test   %eax,%eax
 848db75:	74 0e                	je     848db85 <_ZN10Encryption7DecryptEPviRj+0x27>
 848db77:	8b 45 10             	mov    0x10(%ebp),%eax
 848db7a:	89 04 24             	mov    %eax,(%esp)
 848db7d:	e8 98 f9 ff ff       	call   848d51a <_ZN10Encryption8SeedRandERj>
 848db82:	89 45 e0             	mov    %eax,-0x20(%ebp)
 848db85:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 848db8c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 848db8f:	83 c0 01             	add    $0x1,%eax
 848db92:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 848db99:	00 
 848db9a:	89 44 24 04          	mov    %eax,0x4(%esp)
 848db9e:	8d 45 df             	lea    -0x21(%ebp),%eax
 848dba1:	89 04 24             	mov    %eax,(%esp)
 848dba4:	e8 f7 fc be ff       	call   807d8a0 <memcpy@plt>
 848dba9:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 848dbad:	83 e0 07             	and    $0x7,%eax
 848dbb0:	88 45 df             	mov    %al,-0x21(%ebp)
 848dbb3:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 848dbba:	eb 76                	jmp    848dc32 <_ZN10Encryption7DecryptEPviRj+0xd4>
 848dbbc:	8b 55 08             	mov    0x8(%ebp),%edx
 848dbbf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848dbc2:	01 c2                	add    %eax,%edx
 848dbc4:	8b 4d 08             	mov    0x8(%ebp),%ecx
 848dbc7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848dbca:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848dbcd:	0f b6 00             	movzbl (%eax),%eax
 848dbd0:	0f b6 d8             	movzbl %al,%ebx
 848dbd3:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 848dbd7:	0f b6 c0             	movzbl %al,%eax
 848dbda:	89 de                	mov    %ebx,%esi
 848dbdc:	89 c1                	mov    %eax,%ecx
 848dbde:	d3 e6                	shl    %cl,%esi
 848dbe0:	89 f0                	mov    %esi,%eax
 848dbe2:	89 c3                	mov    %eax,%ebx
 848dbe4:	8b 4d 08             	mov    0x8(%ebp),%ecx
 848dbe7:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848dbea:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848dbed:	0f b6 00             	movzbl (%eax),%eax
 848dbf0:	0f b6 f0             	movzbl %al,%esi
 848dbf3:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 848dbf7:	0f b6 c0             	movzbl %al,%eax
 848dbfa:	b9 08 00 00 00       	mov    $0x8,%ecx
 848dbff:	89 cf                	mov    %ecx,%edi
 848dc01:	29 c7                	sub    %eax,%edi
 848dc03:	89 f8                	mov    %edi,%eax
 848dc05:	89 f7                	mov    %esi,%edi
 848dc07:	89 c1                	mov    %eax,%ecx
 848dc09:	d3 ff                	sar    %cl,%edi
 848dc0b:	89 f8                	mov    %edi,%eax
 848dc0d:	09 d8                	or     %ebx,%eax
 848dc0f:	88 02                	mov    %al,(%edx)
 848dc11:	8b 55 08             	mov    0x8(%ebp),%edx
 848dc14:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848dc17:	01 c2                	add    %eax,%edx
 848dc19:	8b 4d 08             	mov    0x8(%ebp),%ecx
 848dc1c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848dc1f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848dc22:	0f b6 00             	movzbl (%eax),%eax
 848dc25:	89 c1                	mov    %eax,%ecx
 848dc27:	8b 45 e0             	mov    -0x20(%ebp),%eax
 848dc2a:	31 c8                	xor    %ecx,%eax
 848dc2c:	88 02                	mov    %al,(%edx)
 848dc2e:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 848dc32:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848dc35:	3b 45 0c             	cmp    0xc(%ebp),%eax
 848dc38:	0f 9c c0             	setl   %al
 848dc3b:	84 c0                	test   %al,%al
 848dc3d:	0f 85 79 ff ff ff    	jne    848dbbc <_ZN10Encryption7DecryptEPviRj+0x5e>
 848dc43:	83 c4 2c             	add    $0x2c,%esp
 848dc46:	5b                   	pop    %ebx
 848dc47:	5e                   	pop    %esi
 848dc48:	5f                   	pop    %edi
 848dc49:	5d                   	pop    %ebp
 848dc4a:	c3                   	ret
 848dc4b:	90                   	nop

```

```c
// Encryption::Decrypt @ 0x848db5e

/* Encryption::Decrypt(void*, int, unsigned int&) */

void Encryption::Decrypt(void *param_1,int param_2,uint *param_3)

{
  byte local_25;
  undefined4 local_24;
  int local_20;
  
  local_24 = 0x4453eb5;
  if (*param_3 != 0) {
    local_24 = SeedRand(param_3);
  }
  local_20 = 0;
  memcpy(&local_25,(void *)((int)&local_24 + 1),1);
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    *(byte *)((int)param_1 + local_20) =
         (byte)((int)(uint)*(byte *)((int)param_1 + local_20) >> (8 - (local_25 & 7) & 0x1f)) |
         *(char *)((int)param_1 + local_20) << (local_25 & 7);
    *(byte *)((int)param_1 + local_20) = (byte)local_24 ^ *(byte *)((int)param_1 + local_20);
  }
  return;
}

```

---

## DecryptBody

```asm
// === 0848dd0c Encryption::DecryptBody  [0x0848dd0c-0x848e08d] ===
 848dd0c:	55                   	push   %ebp
 848dd0d:	89 e5                	mov    %esp,%ebp
 848dd0f:	57                   	push   %edi
 848dd10:	56                   	push   %esi
 848dd11:	53                   	push   %ebx
 848dd12:	81 ec bc 05 00 00    	sub    $0x5bc,%esp
 848dd18:	8b 45 08             	mov    0x8(%ebp),%eax
 848dd1b:	66 89 85 54 fa ff ff 	mov    %ax,-0x5ac(%ebp)
 848dd22:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 848dd26:	0f 84 56 03 00 00    	je     848e082 <_ZN10Encryption11DecryptBodyEtPviRj+0x376>
 848dd2c:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
 848dd33:	c7 45 e0 05 00 00 00 	movl   $0x5,-0x20(%ebp)
 848dd3a:	83 7d e0 04          	cmpl   $0x4,-0x20(%ebp)
 848dd3e:	75 1e                	jne    848dd5e <_ZN10Encryption11DecryptBodyEtPviRj+0x52>
 848dd40:	8b 45 0c             	mov    0xc(%ebp),%eax
 848dd43:	8b 55 14             	mov    0x14(%ebp),%edx
 848dd46:	89 54 24 08          	mov    %edx,0x8(%esp)
 848dd4a:	8b 55 10             	mov    0x10(%ebp),%edx
 848dd4d:	89 54 24 04          	mov    %edx,0x4(%esp)
 848dd51:	89 04 24             	mov    %eax,(%esp)
 848dd54:	e8 f3 fe ff ff       	call   848dc4c <_ZN10Encryption14getOriginalBufEPciRj>
 848dd59:	e9 25 03 00 00       	jmp    848e083 <_ZN10Encryption11DecryptBodyEtPviRj+0x377>
 848dd5e:	83 7d e0 05          	cmpl   $0x5,-0x20(%ebp)
 848dd62:	75 50                	jne    848ddb4 <_ZN10Encryption11DecryptBodyEtPviRj+0xa8>
 848dd64:	e8 5d 04 00 00       	call   848e1c6 <_Z13G_EncryptToolv>
 848dd69:	8b 80 04 02 00 00    	mov    0x204(%eax),%eax
 848dd6f:	8b 10                	mov    (%eax),%edx
 848dd71:	83 c2 10             	add    $0x10,%edx
 848dd74:	8b 1a                	mov    (%edx),%ebx
 848dd76:	8b 4d 10             	mov    0x10(%ebp),%ecx
 848dd79:	8b 55 0c             	mov    0xc(%ebp),%edx
 848dd7c:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 848dd80:	8d 8d 63 fa ff ff    	lea    -0x59d(%ebp),%ecx
 848dd86:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 848dd8a:	89 54 24 04          	mov    %edx,0x4(%esp)
 848dd8e:	89 04 24             	mov    %eax,(%esp)
 848dd91:	ff d3                	call   *%ebx
 848dd93:	8b 45 10             	mov    0x10(%ebp),%eax
 848dd96:	89 44 24 08          	mov    %eax,0x8(%esp)
 848dd9a:	8d 85 63 fa ff ff    	lea    -0x59d(%ebp),%eax
 848dda0:	89 44 24 04          	mov    %eax,0x4(%esp)
 848dda4:	8b 45 0c             	mov    0xc(%ebp),%eax
 848dda7:	89 04 24             	mov    %eax,(%esp)
 848ddaa:	e8 f1 fa be ff       	call   807d8a0 <memcpy@plt>
 848ddaf:	e9 cf 02 00 00       	jmp    848e083 <_ZN10Encryption11DecryptBodyEtPviRj+0x377>
 848ddb4:	c7 45 dc b5 3e 45 04 	movl   $0x4453eb5,-0x24(%ebp)
 848ddbb:	8b 45 14             	mov    0x14(%ebp),%eax
 848ddbe:	8b 00                	mov    (%eax),%eax
 848ddc0:	85 c0                	test   %eax,%eax
 848ddc2:	74 0e                	je     848ddd2 <_ZN10Encryption11DecryptBodyEtPviRj+0xc6>
 848ddc4:	8b 45 14             	mov    0x14(%ebp),%eax
 848ddc7:	89 04 24             	mov    %eax,(%esp)
 848ddca:	e8 4b f7 ff ff       	call   848d51a <_ZN10Encryption8SeedRandERj>
 848ddcf:	89 45 dc             	mov    %eax,-0x24(%ebp)
 848ddd2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 848ddd9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 848dddc:	83 c0 01             	add    $0x1,%eax
 848dddf:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 848dde6:	00 
 848dde7:	89 44 24 04          	mov    %eax,0x4(%esp)
 848ddeb:	8d 45 db             	lea    -0x25(%ebp),%eax
 848ddee:	89 04 24             	mov    %eax,(%esp)
 848ddf1:	e8 aa fa be ff       	call   807d8a0 <memcpy@plt>
 848ddf6:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 848ddfa:	83 e0 07             	and    $0x7,%eax
 848ddfd:	88 45 db             	mov    %al,-0x25(%ebp)
 848de00:	8b 45 e0             	mov    -0x20(%ebp),%eax
 848de03:	83 f8 01             	cmp    $0x1,%eax
 848de06:	0f 84 ba 00 00 00    	je     848dec6 <_ZN10Encryption11DecryptBodyEtPviRj+0x1ba>
 848de0c:	83 f8 01             	cmp    $0x1,%eax
 848de0f:	7f 09                	jg     848de1a <_ZN10Encryption11DecryptBodyEtPviRj+0x10e>
 848de11:	85 c0                	test   %eax,%eax
 848de13:	74 1c                	je     848de31 <_ZN10Encryption11DecryptBodyEtPviRj+0x125>
 848de15:	e9 69 02 00 00       	jmp    848e083 <_ZN10Encryption11DecryptBodyEtPviRj+0x377>
 848de1a:	83 f8 02             	cmp    $0x2,%eax
 848de1d:	0f 84 38 01 00 00    	je     848df5b <_ZN10Encryption11DecryptBodyEtPviRj+0x24f>
 848de23:	83 f8 03             	cmp    $0x3,%eax
 848de26:	0f 84 c4 01 00 00    	je     848dff0 <_ZN10Encryption11DecryptBodyEtPviRj+0x2e4>
 848de2c:	e9 52 02 00 00       	jmp    848e083 <_ZN10Encryption11DecryptBodyEtPviRj+0x377>
 848de31:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 848de38:	eb 76                	jmp    848deb0 <_ZN10Encryption11DecryptBodyEtPviRj+0x1a4>
 848de3a:	8b 55 0c             	mov    0xc(%ebp),%edx
 848de3d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848de40:	01 c2                	add    %eax,%edx
 848de42:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848de45:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848de48:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848de4b:	0f b6 00             	movzbl (%eax),%eax
 848de4e:	89 c1                	mov    %eax,%ecx
 848de50:	8b 45 dc             	mov    -0x24(%ebp),%eax
 848de53:	31 c8                	xor    %ecx,%eax
 848de55:	88 02                	mov    %al,(%edx)
 848de57:	8b 55 0c             	mov    0xc(%ebp),%edx
 848de5a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848de5d:	01 c2                	add    %eax,%edx
 848de5f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848de62:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848de65:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848de68:	0f b6 00             	movzbl (%eax),%eax
 848de6b:	0f b6 d8             	movzbl %al,%ebx
 848de6e:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 848de72:	0f b6 c0             	movzbl %al,%eax
 848de75:	89 de                	mov    %ebx,%esi
 848de77:	89 c1                	mov    %eax,%ecx
 848de79:	d3 e6                	shl    %cl,%esi
 848de7b:	89 f0                	mov    %esi,%eax
 848de7d:	89 c3                	mov    %eax,%ebx
 848de7f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848de82:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848de85:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848de88:	0f b6 00             	movzbl (%eax),%eax
 848de8b:	0f b6 f0             	movzbl %al,%esi
 848de8e:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 848de92:	0f b6 c0             	movzbl %al,%eax
 848de95:	b9 08 00 00 00       	mov    $0x8,%ecx
 848de9a:	89 cf                	mov    %ecx,%edi
 848de9c:	29 c7                	sub    %eax,%edi
 848de9e:	89 f8                	mov    %edi,%eax
 848dea0:	89 f7                	mov    %esi,%edi
 848dea2:	89 c1                	mov    %eax,%ecx
 848dea4:	d3 ff                	sar    %cl,%edi
 848dea6:	89 f8                	mov    %edi,%eax
 848dea8:	09 d8                	or     %ebx,%eax
 848deaa:	88 02                	mov    %al,(%edx)
 848deac:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 848deb0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848deb3:	3b 45 10             	cmp    0x10(%ebp),%eax
 848deb6:	0f 9c c0             	setl   %al
 848deb9:	84 c0                	test   %al,%al
 848debb:	0f 85 79 ff ff ff    	jne    848de3a <_ZN10Encryption11DecryptBodyEtPviRj+0x12e>
 848dec1:	e9 bd 01 00 00       	jmp    848e083 <_ZN10Encryption11DecryptBodyEtPviRj+0x377>
 848dec6:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 848decd:	eb 76                	jmp    848df45 <_ZN10Encryption11DecryptBodyEtPviRj+0x239>
 848decf:	8b 55 0c             	mov    0xc(%ebp),%edx
 848ded2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848ded5:	01 c2                	add    %eax,%edx
 848ded7:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848deda:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848dedd:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848dee0:	0f b6 00             	movzbl (%eax),%eax
 848dee3:	0f b6 d8             	movzbl %al,%ebx
 848dee6:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 848deea:	0f b6 c0             	movzbl %al,%eax
 848deed:	89 de                	mov    %ebx,%esi
 848deef:	89 c1                	mov    %eax,%ecx
 848def1:	d3 fe                	sar    %cl,%esi
 848def3:	89 f0                	mov    %esi,%eax
 848def5:	89 c3                	mov    %eax,%ebx
 848def7:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848defa:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848defd:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848df00:	0f b6 00             	movzbl (%eax),%eax
 848df03:	0f b6 f0             	movzbl %al,%esi
 848df06:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 848df0a:	0f b6 c0             	movzbl %al,%eax
 848df0d:	b9 08 00 00 00       	mov    $0x8,%ecx
 848df12:	89 cf                	mov    %ecx,%edi
 848df14:	29 c7                	sub    %eax,%edi
 848df16:	89 f8                	mov    %edi,%eax
 848df18:	89 f7                	mov    %esi,%edi
 848df1a:	89 c1                	mov    %eax,%ecx
 848df1c:	d3 e7                	shl    %cl,%edi
 848df1e:	89 f8                	mov    %edi,%eax
 848df20:	09 d8                	or     %ebx,%eax
 848df22:	88 02                	mov    %al,(%edx)
 848df24:	8b 55 0c             	mov    0xc(%ebp),%edx
 848df27:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848df2a:	01 c2                	add    %eax,%edx
 848df2c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848df2f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848df32:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848df35:	0f b6 00             	movzbl (%eax),%eax
 848df38:	89 c1                	mov    %eax,%ecx
 848df3a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 848df3d:	31 c8                	xor    %ecx,%eax
 848df3f:	88 02                	mov    %al,(%edx)
 848df41:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 848df45:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848df48:	3b 45 10             	cmp    0x10(%ebp),%eax
 848df4b:	0f 9c c0             	setl   %al
 848df4e:	84 c0                	test   %al,%al
 848df50:	0f 85 79 ff ff ff    	jne    848decf <_ZN10Encryption11DecryptBodyEtPviRj+0x1c3>
 848df56:	e9 28 01 00 00       	jmp    848e083 <_ZN10Encryption11DecryptBodyEtPviRj+0x377>
 848df5b:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 848df62:	eb 76                	jmp    848dfda <_ZN10Encryption11DecryptBodyEtPviRj+0x2ce>
 848df64:	8b 55 0c             	mov    0xc(%ebp),%edx
 848df67:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848df6a:	01 c2                	add    %eax,%edx
 848df6c:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848df6f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848df72:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848df75:	0f b6 00             	movzbl (%eax),%eax
 848df78:	89 c1                	mov    %eax,%ecx
 848df7a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 848df7d:	31 c8                	xor    %ecx,%eax
 848df7f:	88 02                	mov    %al,(%edx)
 848df81:	8b 55 0c             	mov    0xc(%ebp),%edx
 848df84:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848df87:	01 c2                	add    %eax,%edx
 848df89:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848df8c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848df8f:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848df92:	0f b6 00             	movzbl (%eax),%eax
 848df95:	0f b6 d8             	movzbl %al,%ebx
 848df98:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 848df9c:	0f b6 c0             	movzbl %al,%eax
 848df9f:	89 de                	mov    %ebx,%esi
 848dfa1:	89 c1                	mov    %eax,%ecx
 848dfa3:	d3 fe                	sar    %cl,%esi
 848dfa5:	89 f0                	mov    %esi,%eax
 848dfa7:	89 c3                	mov    %eax,%ebx
 848dfa9:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848dfac:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848dfaf:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848dfb2:	0f b6 00             	movzbl (%eax),%eax
 848dfb5:	0f b6 f0             	movzbl %al,%esi
 848dfb8:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 848dfbc:	0f b6 c0             	movzbl %al,%eax
 848dfbf:	b9 08 00 00 00       	mov    $0x8,%ecx
 848dfc4:	89 cf                	mov    %ecx,%edi
 848dfc6:	29 c7                	sub    %eax,%edi
 848dfc8:	89 f8                	mov    %edi,%eax
 848dfca:	89 f7                	mov    %esi,%edi
 848dfcc:	89 c1                	mov    %eax,%ecx
 848dfce:	d3 e7                	shl    %cl,%edi
 848dfd0:	89 f8                	mov    %edi,%eax
 848dfd2:	09 d8                	or     %ebx,%eax
 848dfd4:	88 02                	mov    %al,(%edx)
 848dfd6:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 848dfda:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848dfdd:	3b 45 10             	cmp    0x10(%ebp),%eax
 848dfe0:	0f 9c c0             	setl   %al
 848dfe3:	84 c0                	test   %al,%al
 848dfe5:	0f 85 79 ff ff ff    	jne    848df64 <_ZN10Encryption11DecryptBodyEtPviRj+0x258>
 848dfeb:	e9 93 00 00 00       	jmp    848e083 <_ZN10Encryption11DecryptBodyEtPviRj+0x377>
 848dff0:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 848dff7:	eb 76                	jmp    848e06f <_ZN10Encryption11DecryptBodyEtPviRj+0x363>
 848dff9:	8b 55 0c             	mov    0xc(%ebp),%edx
 848dffc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848dfff:	01 c2                	add    %eax,%edx
 848e001:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848e004:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848e007:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848e00a:	0f b6 00             	movzbl (%eax),%eax
 848e00d:	0f b6 d8             	movzbl %al,%ebx
 848e010:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 848e014:	0f b6 c0             	movzbl %al,%eax
 848e017:	89 de                	mov    %ebx,%esi
 848e019:	89 c1                	mov    %eax,%ecx
 848e01b:	d3 e6                	shl    %cl,%esi
 848e01d:	89 f0                	mov    %esi,%eax
 848e01f:	89 c3                	mov    %eax,%ebx
 848e021:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848e024:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848e027:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848e02a:	0f b6 00             	movzbl (%eax),%eax
 848e02d:	0f b6 f0             	movzbl %al,%esi
 848e030:	0f b6 45 db          	movzbl -0x25(%ebp),%eax
 848e034:	0f b6 c0             	movzbl %al,%eax
 848e037:	b9 08 00 00 00       	mov    $0x8,%ecx
 848e03c:	89 cf                	mov    %ecx,%edi
 848e03e:	29 c7                	sub    %eax,%edi
 848e040:	89 f8                	mov    %edi,%eax
 848e042:	89 f7                	mov    %esi,%edi
 848e044:	89 c1                	mov    %eax,%ecx
 848e046:	d3 ff                	sar    %cl,%edi
 848e048:	89 f8                	mov    %edi,%eax
 848e04a:	09 d8                	or     %ebx,%eax
 848e04c:	88 02                	mov    %al,(%edx)
 848e04e:	8b 55 0c             	mov    0xc(%ebp),%edx
 848e051:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848e054:	01 c2                	add    %eax,%edx
 848e056:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848e059:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848e05c:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848e05f:	0f b6 00             	movzbl (%eax),%eax
 848e062:	89 c1                	mov    %eax,%ecx
 848e064:	8b 45 dc             	mov    -0x24(%ebp),%eax
 848e067:	31 c8                	xor    %ecx,%eax
 848e069:	88 02                	mov    %al,(%edx)
 848e06b:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 848e06f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848e072:	3b 45 10             	cmp    0x10(%ebp),%eax
 848e075:	0f 9c c0             	setl   %al
 848e078:	84 c0                	test   %al,%al
 848e07a:	0f 85 79 ff ff ff    	jne    848dff9 <_ZN10Encryption11DecryptBodyEtPviRj+0x2ed>
 848e080:	eb 01                	jmp    848e083 <_ZN10Encryption11DecryptBodyEtPviRj+0x377>
 848e082:	90                   	nop
 848e083:	81 c4 bc 05 00 00    	add    $0x5bc,%esp
 848e089:	5b                   	pop    %ebx
 848e08a:	5e                   	pop    %esi
 848e08b:	5f                   	pop    %edi
 848e08c:	5d                   	pop    %ebp
 848e08d:	c3                   	ret

```

```c
// Encryption::DecryptBody @ 0x848dd0c

/* WARNING: Removing unreachable block (ram,0x0848ddb4) */
/* WARNING: Removing unreachable block (ram,0x0848ddc4) */
/* WARNING: Removing unreachable block (ram,0x0848ddd2) */
/* WARNING: Removing unreachable block (ram,0x0848dec6) */
/* WARNING: Removing unreachable block (ram,0x0848df45) */
/* WARNING: Removing unreachable block (ram,0x0848decf) */
/* WARNING: Removing unreachable block (ram,0x0848df56) */
/* WARNING: Removing unreachable block (ram,0x0848de0c) */
/* WARNING: Removing unreachable block (ram,0x0848de1a) */
/* WARNING: Removing unreachable block (ram,0x0848df5b) */
/* WARNING: Removing unreachable block (ram,0x0848dfda) */
/* WARNING: Removing unreachable block (ram,0x0848df64) */
/* WARNING: Removing unreachable block (ram,0x0848dfeb) */
/* WARNING: Removing unreachable block (ram,0x0848de23) */
/* WARNING: Removing unreachable block (ram,0x0848dff0) */
/* WARNING: Removing unreachable block (ram,0x0848e06f) */
/* WARNING: Removing unreachable block (ram,0x0848dff9) */
/* WARNING: Removing unreachable block (ram,0x0848e080) */
/* WARNING: Removing unreachable block (ram,0x0848de2c) */
/* WARNING: Removing unreachable block (ram,0x0848de11) */
/* WARNING: Removing unreachable block (ram,0x0848de31) */
/* WARNING: Removing unreachable block (ram,0x0848deb0) */
/* WARNING: Removing unreachable block (ram,0x0848de3a) */
/* WARNING: Removing unreachable block (ram,0x0848dec1) */
/* WARNING: Removing unreachable block (ram,0x0848de15) */
/* WARNING: Removing unreachable block (ram,0x0848dd40) */
/* Encryption::DecryptBody(unsigned short, void*, int, unsigned int&) */

void Encryption::DecryptBody(ushort param_1,void *param_2,int param_3,uint *param_4)

{
  int iVar1;
  undefined1 local_5a1 [1405];
  undefined4 local_24;
  
  if (param_3 != 0) {
    local_24 = 5;
    iVar1 = G_EncryptTool();
    (**(code **)(**(int **)(iVar1 + 0x204) + 0x10))
              (*(int **)(iVar1 + 0x204),param_2,local_5a1,param_3);
    memcpy(param_2,local_5a1,param_3);
  }
  return;
}

```

---

## Encrypt

```asm
// === 0848da70 Encryption::Encrypt  [0x0848da70-0x848db5d] ===
 848da70:	55                   	push   %ebp
 848da71:	89 e5                	mov    %esp,%ebp
 848da73:	57                   	push   %edi
 848da74:	56                   	push   %esi
 848da75:	53                   	push   %ebx
 848da76:	83 ec 2c             	sub    $0x2c,%esp
 848da79:	c7 45 e0 b5 3e 45 04 	movl   $0x4453eb5,-0x20(%ebp)
 848da80:	8b 45 10             	mov    0x10(%ebp),%eax
 848da83:	8b 00                	mov    (%eax),%eax
 848da85:	85 c0                	test   %eax,%eax
 848da87:	74 0e                	je     848da97 <_ZN10Encryption7EncryptEPviRj+0x27>
 848da89:	8b 45 10             	mov    0x10(%ebp),%eax
 848da8c:	89 04 24             	mov    %eax,(%esp)
 848da8f:	e8 86 fa ff ff       	call   848d51a <_ZN10Encryption8SeedRandERj>
 848da94:	89 45 e0             	mov    %eax,-0x20(%ebp)
 848da97:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 848da9e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 848daa1:	83 c0 01             	add    $0x1,%eax
 848daa4:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 848daab:	00 
 848daac:	89 44 24 04          	mov    %eax,0x4(%esp)
 848dab0:	8d 45 df             	lea    -0x21(%ebp),%eax
 848dab3:	89 04 24             	mov    %eax,(%esp)
 848dab6:	e8 e5 fd be ff       	call   807d8a0 <memcpy@plt>
 848dabb:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 848dabf:	83 e0 07             	and    $0x7,%eax
 848dac2:	88 45 df             	mov    %al,-0x21(%ebp)
 848dac5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 848dacc:	eb 76                	jmp    848db44 <_ZN10Encryption7EncryptEPviRj+0xd4>
 848dace:	8b 55 08             	mov    0x8(%ebp),%edx
 848dad1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848dad4:	01 c2                	add    %eax,%edx
 848dad6:	8b 4d 08             	mov    0x8(%ebp),%ecx
 848dad9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848dadc:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848dadf:	0f b6 00             	movzbl (%eax),%eax
 848dae2:	89 c1                	mov    %eax,%ecx
 848dae4:	8b 45 e0             	mov    -0x20(%ebp),%eax
 848dae7:	31 c8                	xor    %ecx,%eax
 848dae9:	88 02                	mov    %al,(%edx)
 848daeb:	8b 55 08             	mov    0x8(%ebp),%edx
 848daee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848daf1:	01 c2                	add    %eax,%edx
 848daf3:	8b 4d 08             	mov    0x8(%ebp),%ecx
 848daf6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848daf9:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848dafc:	0f b6 00             	movzbl (%eax),%eax
 848daff:	0f b6 d8             	movzbl %al,%ebx
 848db02:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 848db06:	0f b6 c0             	movzbl %al,%eax
 848db09:	89 de                	mov    %ebx,%esi
 848db0b:	89 c1                	mov    %eax,%ecx
 848db0d:	d3 fe                	sar    %cl,%esi
 848db0f:	89 f0                	mov    %esi,%eax
 848db11:	89 c3                	mov    %eax,%ebx
 848db13:	8b 4d 08             	mov    0x8(%ebp),%ecx
 848db16:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848db19:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 848db1c:	0f b6 00             	movzbl (%eax),%eax
 848db1f:	0f b6 f0             	movzbl %al,%esi
 848db22:	0f b6 45 df          	movzbl -0x21(%ebp),%eax
 848db26:	0f b6 c0             	movzbl %al,%eax
 848db29:	b9 08 00 00 00       	mov    $0x8,%ecx
 848db2e:	89 cf                	mov    %ecx,%edi
 848db30:	29 c7                	sub    %eax,%edi
 848db32:	89 f8                	mov    %edi,%eax
 848db34:	89 f7                	mov    %esi,%edi
 848db36:	89 c1                	mov    %eax,%ecx
 848db38:	d3 e7                	shl    %cl,%edi
 848db3a:	89 f8                	mov    %edi,%eax
 848db3c:	09 d8                	or     %ebx,%eax
 848db3e:	88 02                	mov    %al,(%edx)
 848db40:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 848db44:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 848db47:	3b 45 0c             	cmp    0xc(%ebp),%eax
 848db4a:	0f 9c c0             	setl   %al
 848db4d:	84 c0                	test   %al,%al
 848db4f:	0f 85 79 ff ff ff    	jne    848dace <_ZN10Encryption7EncryptEPviRj+0x5e>
 848db55:	83 c4 2c             	add    $0x2c,%esp
 848db58:	5b                   	pop    %ebx
 848db59:	5e                   	pop    %esi
 848db5a:	5f                   	pop    %edi
 848db5b:	5d                   	pop    %ebp
 848db5c:	c3                   	ret
 848db5d:	90                   	nop

```

```c
// Encryption::Encrypt @ 0x848da70

/* Encryption::Encrypt(void*, int, unsigned int&) */

void Encryption::Encrypt(void *param_1,int param_2,uint *param_3)

{
  byte local_25;
  undefined4 local_24;
  int local_20;
  
  local_24 = 0x4453eb5;
  if (*param_3 != 0) {
    local_24 = SeedRand(param_3);
  }
  local_20 = 0;
  memcpy(&local_25,(void *)((int)&local_24 + 1),1);
  for (local_20 = 0; local_20 < param_2; local_20 = local_20 + 1) {
    *(byte *)((int)param_1 + local_20) = (byte)local_24 ^ *(byte *)((int)param_1 + local_20);
    *(byte *)((int)param_1 + local_20) =
         *(char *)((int)param_1 + local_20) << (8 - (local_25 & 7) & 0x1f) |
         (byte)((int)(uint)*(byte *)((int)param_1 + local_20) >> (local_25 & 7));
  }
  return;
}

```

---

## SeedRand

```asm
// === 0848d51a Encryption::SeedRand  [0x0848d51a-0x848d5af] ===
 848d51a:	55                   	push   %ebp
 848d51b:	89 e5                	mov    %esp,%ebp
 848d51d:	83 ec 10             	sub    $0x10,%esp
 848d520:	8b 45 08             	mov    0x8(%ebp),%eax
 848d523:	8b 00                	mov    (%eax),%eax
 848d525:	89 45 f8             	mov    %eax,-0x8(%ebp)
 848d528:	8b 45 f8             	mov    -0x8(%ebp),%eax
 848d52b:	69 c0 6d 4e c6 41    	imul   $0x41c64e6d,%eax,%eax
 848d531:	89 45 f8             	mov    %eax,-0x8(%ebp)
 848d534:	81 45 f8 39 30 00 00 	addl   $0x3039,-0x8(%ebp)
 848d53b:	8b 45 f8             	mov    -0x8(%ebp),%eax
 848d53e:	c1 e8 10             	shr    $0x10,%eax
 848d541:	25 ff 07 00 00       	and    $0x7ff,%eax
 848d546:	89 45 fc             	mov    %eax,-0x4(%ebp)
 848d549:	8b 45 f8             	mov    -0x8(%ebp),%eax
 848d54c:	69 c0 6d 4e c6 41    	imul   $0x41c64e6d,%eax,%eax
 848d552:	89 45 f8             	mov    %eax,-0x8(%ebp)
 848d555:	81 45 f8 39 30 00 00 	addl   $0x3039,-0x8(%ebp)
 848d55c:	c1 65 fc 0a          	shll   $0xa,-0x4(%ebp)
 848d560:	8b 45 f8             	mov    -0x8(%ebp),%eax
 848d563:	c1 e8 10             	shr    $0x10,%eax
 848d566:	89 c2                	mov    %eax,%edx
 848d568:	81 e2 ff 03 00 00    	and    $0x3ff,%edx
 848d56e:	8b 45 fc             	mov    -0x4(%ebp),%eax
 848d571:	31 d0                	xor    %edx,%eax
 848d573:	89 45 fc             	mov    %eax,-0x4(%ebp)
 848d576:	8b 45 f8             	mov    -0x8(%ebp),%eax
 848d579:	69 c0 6d 4e c6 41    	imul   $0x41c64e6d,%eax,%eax
 848d57f:	89 45 f8             	mov    %eax,-0x8(%ebp)
 848d582:	81 45 f8 39 30 00 00 	addl   $0x3039,-0x8(%ebp)
 848d589:	c1 65 fc 0a          	shll   $0xa,-0x4(%ebp)
 848d58d:	8b 45 f8             	mov    -0x8(%ebp),%eax
 848d590:	c1 e8 10             	shr    $0x10,%eax
 848d593:	89 c2                	mov    %eax,%edx
 848d595:	81 e2 ff 03 00 00    	and    $0x3ff,%edx
 848d59b:	8b 45 fc             	mov    -0x4(%ebp),%eax
 848d59e:	31 d0                	xor    %edx,%eax
 848d5a0:	89 45 fc             	mov    %eax,-0x4(%ebp)
 848d5a3:	8b 45 08             	mov    0x8(%ebp),%eax
 848d5a6:	8b 55 f8             	mov    -0x8(%ebp),%edx
 848d5a9:	89 10                	mov    %edx,(%eax)
 848d5ab:	8b 45 fc             	mov    -0x4(%ebp),%eax
 848d5ae:	c9                   	leave
 848d5af:	c3                   	ret

```

```c
// Encryption::SeedRand @ 0x848d51a

/* Encryption::SeedRand(unsigned int&) */

uint Encryption::SeedRand(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *param_1 * 0x41c64e6d + 0x3039;
  uVar2 = uVar1 * 0x41c64e6d + 0x3039;
  uVar3 = uVar2 * 0x41c64e6d + 0x3039;
  *param_1 = uVar3;
  return ((uVar1 >> 0x10 & 0x7ff) << 10 ^ uVar2 >> 0x10 & 0x3ff) << 10 ^ uVar3 >> 0x10 & 0x3ff;
}

```

---

## crc32

```asm
// === 0848d472 Encryption::crc32  [0x0848d472-0x848d4c7] ===
 848d472:	55                   	push   %ebp
 848d473:	89 e5                	mov    %esp,%ebp
 848d475:	a1 7c d9 43 09       	mov    0x943d97c,%eax
 848d47a:	85 c0                	test   %eax,%eax
 848d47c:	75 05                	jne    848d483 <_ZN10Encryption5crc32EjPKcj+0x11>
 848d47e:	e8 61 ff ff ff       	call   848d3e4 <_ZN10Encryption14make_crc_tableEv>
 848d483:	f7 55 08             	notl   0x8(%ebp)
 848d486:	eb 29                	jmp    848d4b1 <_ZN10Encryption5crc32EjPKcj+0x3f>
 848d488:	8b 45 08             	mov    0x8(%ebp),%eax
 848d48b:	89 c2                	mov    %eax,%edx
 848d48d:	c1 ea 08             	shr    $0x8,%edx
 848d490:	8b 45 0c             	mov    0xc(%ebp),%eax
 848d493:	0f b6 00             	movzbl (%eax),%eax
 848d496:	0f be c0             	movsbl %al,%eax
 848d499:	33 45 08             	xor    0x8(%ebp),%eax
 848d49c:	25 ff 00 00 00       	and    $0xff,%eax
 848d4a1:	8b 04 85 80 d5 43 09 	mov    0x943d580(,%eax,4),%eax
 848d4a8:	31 d0                	xor    %edx,%eax
 848d4aa:	89 45 08             	mov    %eax,0x8(%ebp)
 848d4ad:	83 45 0c 01          	addl   $0x1,0xc(%ebp)
 848d4b1:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 848d4b5:	0f 95 c0             	setne  %al
 848d4b8:	83 6d 10 01          	subl   $0x1,0x10(%ebp)
 848d4bc:	84 c0                	test   %al,%al
 848d4be:	75 c8                	jne    848d488 <_ZN10Encryption5crc32EjPKcj+0x16>
 848d4c0:	8b 45 08             	mov    0x8(%ebp),%eax
 848d4c3:	f7 d0                	not    %eax
 848d4c5:	5d                   	pop    %ebp
 848d4c6:	c3                   	ret
 848d4c7:	90                   	nop

```

```c
// Encryption::crc32 @ 0x848d472

/* Encryption::crc32(unsigned int, char const*, unsigned int) */

uint Encryption::crc32(uint param_1,char *param_2,uint param_3)

{
  bool bVar1;
  
  if (crc_table._1020_4_ == 0) {
    make_crc_table();
  }
  param_1 = ~param_1;
  while (bVar1 = param_3 != 0, param_3 = param_3 - 1, bVar1) {
    param_1 = *(uint *)(crc_table + (((int)*param_2 ^ param_1) & 0xff) * 4) ^ param_1 >> 8;
    param_2 = param_2 + 1;
  }
  return ~param_1;
}

```

---

## crc32N

```asm
// === 0848d4c8 Encryption::crc32N  [0x0848d4c8-0x848d519] ===
 848d4c8:	55                   	push   %ebp
 848d4c9:	89 e5                	mov    %esp,%ebp
 848d4cb:	83 ec 28             	sub    $0x28,%esp
 848d4ce:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 848d4d5:	00 
 848d4d6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 848d4dd:	00 
 848d4de:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 848d4e5:	e8 88 ff ff ff       	call   848d472 <_ZN10Encryption5crc32EjPKcj>
 848d4ea:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848d4ed:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 848d4f0:	8b 55 08             	mov    0x8(%ebp),%edx
 848d4f3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848d4f6:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 848d4fa:	89 54 24 04          	mov    %edx,0x4(%esp)
 848d4fe:	89 04 24             	mov    %eax,(%esp)
 848d501:	e8 6c ff ff ff       	call   848d472 <_ZN10Encryption5crc32EjPKcj>
 848d506:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848d509:	8d 45 f4             	lea    -0xc(%ebp),%eax
 848d50c:	89 04 24             	mov    %eax,(%esp)
 848d50f:	e8 03 f7 bf ff       	call   808cc17 <_Z30_NS_PI_2ND_MakeChecksumTo1BytePc>
 848d514:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848d517:	c9                   	leave
 848d518:	c3                   	ret
 848d519:	90                   	nop

```

```c
// Encryption::crc32N @ 0x848d4c8

/* Encryption::crc32N(void*, int) */

uint Encryption::crc32N(void *param_1,int param_2)

{
  uint local_10 [3];
  
  local_10[0] = crc32(0,(char *)0x0,0);
  local_10[0] = crc32(local_10[0],param_1,param_2);
  _NS_PI_2ND_MakeChecksumTo1Byte((char *)local_10);
  return local_10[0];
}

```

---

## getOriginalBuf

```asm
// === 0848dc4c Encryption::getOriginalBuf  [0x0848dc4c-0x848dd0b] ===
 848dc4c:	55                   	push   %ebp
 848dc4d:	89 e5                	mov    %esp,%ebp
 848dc4f:	81 ec 58 01 00 00    	sub    $0x158,%esp
 848dc55:	8b 45 10             	mov    0x10(%ebp),%eax
 848dc58:	8b 08                	mov    (%eax),%ecx
 848dc5a:	ba 1f 85 eb 51       	mov    $0x51eb851f,%edx
 848dc5f:	89 c8                	mov    %ecx,%eax
 848dc61:	f7 e2                	mul    %edx
 848dc63:	89 d0                	mov    %edx,%eax
 848dc65:	c1 e8 06             	shr    $0x6,%eax
 848dc68:	69 c0 c8 00 00 00    	imul   $0xc8,%eax,%eax
 848dc6e:	89 ca                	mov    %ecx,%edx
 848dc70:	29 c2                	sub    %eax,%edx
 848dc72:	89 d0                	mov    %edx,%eax
 848dc74:	89 45 ec             	mov    %eax,-0x14(%ebp)
 848dc77:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 848dc7e:	eb 61                	jmp    848dce1 <_ZN10Encryption14getOriginalBufEPciRj+0x95>
 848dc80:	8b 55 ec             	mov    -0x14(%ebp),%edx
 848dc83:	8b 45 f0             	mov    -0x10(%ebp),%eax
 848dc86:	69 d2 2c 01 00 00    	imul   $0x12c,%edx,%edx
 848dc8c:	8d 04 02             	lea    (%edx,%eax,1),%eax
 848dc8f:	8b 04 85 60 0f 37 09 	mov    0x9370f60(,%eax,4),%eax
 848dc96:	89 45 e8             	mov    %eax,-0x18(%ebp)
 848dc99:	8b 45 f0             	mov    -0x10(%ebp),%eax
 848dc9c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 848dc9f:	eb 1c                	jmp    848dcbd <_ZN10Encryption14getOriginalBufEPciRj+0x71>
 848dca1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848dca4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 848dca7:	83 ea 01             	sub    $0x1,%edx
 848dcaa:	0f b6 94 15 bc fe ff 	movzbl -0x144(%ebp,%edx,1),%edx
 848dcb1:	ff 
 848dcb2:	88 94 05 bc fe ff ff 	mov    %dl,-0x144(%ebp,%eax,1)
 848dcb9:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 848dcbd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 848dcc0:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 848dcc3:	0f 9c c0             	setl   %al
 848dcc6:	84 c0                	test   %al,%al
 848dcc8:	75 d7                	jne    848dca1 <_ZN10Encryption14getOriginalBufEPciRj+0x55>
 848dcca:	8b 45 e8             	mov    -0x18(%ebp),%eax
 848dccd:	8b 55 f0             	mov    -0x10(%ebp),%edx
 848dcd0:	03 55 08             	add    0x8(%ebp),%edx
 848dcd3:	0f b6 12             	movzbl (%edx),%edx
 848dcd6:	88 94 05 bc fe ff ff 	mov    %dl,-0x144(%ebp,%eax,1)
 848dcdd:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 848dce1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 848dce4:	3b 45 0c             	cmp    0xc(%ebp),%eax
 848dce7:	0f 9c c0             	setl   %al
 848dcea:	84 c0                	test   %al,%al
 848dcec:	75 92                	jne    848dc80 <_ZN10Encryption14getOriginalBufEPciRj+0x34>
 848dcee:	8b 45 0c             	mov    0xc(%ebp),%eax
 848dcf1:	89 44 24 08          	mov    %eax,0x8(%esp)
 848dcf5:	8d 85 bc fe ff ff    	lea    -0x144(%ebp),%eax
 848dcfb:	89 44 24 04          	mov    %eax,0x4(%esp)
 848dcff:	8b 45 08             	mov    0x8(%ebp),%eax
 848dd02:	89 04 24             	mov    %eax,(%esp)
 848dd05:	e8 96 fb be ff       	call   807d8a0 <memcpy@plt>
 848dd0a:	c9                   	leave
 848dd0b:	c3                   	ret

```

```c
// Encryption::getOriginalBuf @ 0x848dc4c

/* Encryption::getOriginalBuf(char*, int, unsigned int&) */

void Encryption::getOriginalBuf(char *param_1,int param_2,uint *param_3)

{
  char acStack_149 [301];
  int local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  local_18 = *param_3 % 200;
  for (local_14 = 0; local_14 < param_2; local_14 = local_14 + 1) {
    local_1c = *(int *)(index_array + (local_18 * 300 + local_14) * 4);
    for (local_10 = local_14; local_1c < local_10; local_10 = local_10 + -1) {
      acStack_149[local_10 + 1] = acStack_149[local_10];
    }
    acStack_149[local_1c + 1] = param_1[local_14];
  }
  memcpy(param_1,acStack_149 + 1,param_2);
  return;
}

```

---

## make_crc_table

```asm
// === 0848d3e4 Encryption::make_crc_table  [0x0848d3e4-0x848d471] ===
 848d3e4:	55                   	push   %ebp
 848d3e5:	89 e5                	mov    %esp,%ebp
 848d3e7:	83 ec 10             	sub    $0x10,%esp
 848d3ea:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
 848d3f1:	c7 05 80 d5 43 09 00 	movl   $0x0,0x943d580
 848d3f8:	00 00 00 
 848d3fb:	c7 45 f4 80 00 00 00 	movl   $0x80,-0xc(%ebp)
 848d402:	eb 60                	jmp    848d464 <_ZN10Encryption14make_crc_tableEv+0x80>
 848d404:	8b 45 fc             	mov    -0x4(%ebp),%eax
 848d407:	89 c2                	mov    %eax,%edx
 848d409:	d1 ea                	shr    $1,%edx
 848d40b:	8b 45 fc             	mov    -0x4(%ebp),%eax
 848d40e:	83 e0 01             	and    $0x1,%eax
 848d411:	84 c0                	test   %al,%al
 848d413:	74 07                	je     848d41c <_ZN10Encryption14make_crc_tableEv+0x38>
 848d415:	b8 29 91 b8 4d       	mov    $0x4db89129,%eax
 848d41a:	eb 05                	jmp    848d421 <_ZN10Encryption14make_crc_tableEv+0x3d>
 848d41c:	b8 00 00 00 00       	mov    $0x0,%eax
 848d421:	31 d0                	xor    %edx,%eax
 848d423:	89 45 fc             	mov    %eax,-0x4(%ebp)
 848d426:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 848d42d:	eb 24                	jmp    848d453 <_ZN10Encryption14make_crc_tableEv+0x6f>
 848d42f:	8b 45 f8             	mov    -0x8(%ebp),%eax
 848d432:	8b 55 f4             	mov    -0xc(%ebp),%edx
 848d435:	01 c2                	add    %eax,%edx
 848d437:	8b 45 f8             	mov    -0x8(%ebp),%eax
 848d43a:	8b 04 85 80 d5 43 09 	mov    0x943d580(,%eax,4),%eax
 848d441:	33 45 fc             	xor    -0x4(%ebp),%eax
 848d444:	89 04 95 80 d5 43 09 	mov    %eax,0x943d580(,%edx,4)
 848d44b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 848d44e:	01 c0                	add    %eax,%eax
 848d450:	01 45 f8             	add    %eax,-0x8(%ebp)
 848d453:	81 7d f8 ff 00 00 00 	cmpl   $0xff,-0x8(%ebp)
 848d45a:	0f 96 c0             	setbe  %al
 848d45d:	84 c0                	test   %al,%al
 848d45f:	75 ce                	jne    848d42f <_ZN10Encryption14make_crc_tableEv+0x4b>
 848d461:	d1 6d f4             	shrl   $1,-0xc(%ebp)
 848d464:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 848d468:	0f 95 c0             	setne  %al
 848d46b:	84 c0                	test   %al,%al
 848d46d:	75 95                	jne    848d404 <_ZN10Encryption14make_crc_tableEv+0x20>
 848d46f:	c9                   	leave
 848d470:	c3                   	ret
 848d471:	90                   	nop

```

```c
// Encryption::make_crc_table @ 0x848d3e4

/* Encryption::make_crc_table() */

void Encryption::make_crc_table(void)

{
  uint uVar1;
  uint local_10;
  uint local_c;
  uint local_8;
  
  local_8 = 1;
  crc_table._0_4_ = 0;
  for (local_10 = 0x80; local_10 != 0; local_10 = local_10 >> 1) {
    if ((local_8 & 1) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x4db89129;
    }
    local_8 = uVar1 ^ local_8 >> 1;
    for (local_c = 0; local_c < 0x100; local_c = local_c + local_10 * 2) {
      *(uint *)(crc_table + (local_10 + local_c) * 4) = *(uint *)(crc_table + local_c * 4) ^ local_8
      ;
    }
  }
  return;
}

```

