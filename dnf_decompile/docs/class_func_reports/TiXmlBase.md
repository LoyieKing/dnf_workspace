# TiXmlBase

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## ConvertUTF32ToUTF8

```asm
// === 087e5ef0 TiXmlBase::ConvertUTF32ToUTF8  [0x087e5ef0-0x87e5fef] ===
 87e5ef0:	55                   	push   %ebp
 87e5ef1:	89 e5                	mov    %esp,%ebp
 87e5ef3:	83 ec 2c             	sub    $0x2c,%esp
 87e5ef6:	8b 45 08             	mov    0x8(%ebp),%eax
 87e5ef9:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87e5efc:	8b 55 10             	mov    0x10(%ebp),%edx
 87e5eff:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87e5f02:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e5f05:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87e5f08:	83 f8 7f             	cmp    $0x7f,%eax
 87e5f0b:	77 23                	ja     87e5f30 <_ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi+0x40>
 87e5f0d:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 87e5f13:	8d 5f 01             	lea    0x1(%edi),%ebx
 87e5f16:	31 d2                	xor    %edx,%edx
 87e5f18:	09 d0                	or     %edx,%eax
 87e5f1a:	88 43 ff             	mov    %al,-0x1(%ebx)
 87e5f1d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87e5f20:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87e5f23:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87e5f26:	89 ec                	mov    %ebp,%esp
 87e5f28:	5d                   	pop    %ebp
 87e5f29:	c3                   	ret
 87e5f2a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e5f30:	3d ff 07 00 00       	cmp    $0x7ff,%eax
 87e5f35:	77 59                	ja     87e5f90 <_ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi+0xa0>
 87e5f37:	c7 02 02 00 00 00    	movl   $0x2,(%edx)
 87e5f3d:	8d 77 02             	lea    0x2(%edi),%esi
 87e5f40:	89 c1                	mov    %eax,%ecx
 87e5f42:	83 e1 3f             	and    $0x3f,%ecx
 87e5f45:	83 c9 80             	or     $0xffffff80,%ecx
 87e5f48:	88 4e ff             	mov    %cl,-0x1(%esi)
 87e5f4b:	8b 12                	mov    (%edx),%edx
 87e5f4d:	8d 5e ff             	lea    -0x1(%esi),%ebx
 87e5f50:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 87e5f57:	c1 e8 06             	shr    $0x6,%eax
 87e5f5a:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 87e5f61:	c7 45 e0 c0 00 00 00 	movl   $0xc0,-0x20(%ebp)
 87e5f68:	c7 45 e4 e0 00 00 00 	movl   $0xe0,-0x1c(%ebp)
 87e5f6f:	c7 45 e8 f0 00 00 00 	movl   $0xf0,-0x18(%ebp)
 87e5f76:	c7 45 ec f8 00 00 00 	movl   $0xf8,-0x14(%ebp)
 87e5f7d:	c7 45 f0 fc 00 00 00 	movl   $0xfc,-0x10(%ebp)
 87e5f84:	0f b6 54 95 d8       	movzbl -0x28(%ebp,%edx,4),%edx
 87e5f89:	eb 8d                	jmp    87e5f18 <_ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi+0x28>
 87e5f8b:	90                   	nop
 87e5f8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e5f90:	3d ff ff 00 00       	cmp    $0xffff,%eax
 87e5f95:	76 39                	jbe    87e5fd0 <_ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi+0xe0>
 87e5f97:	3d ff ff 1f 00       	cmp    $0x1fffff,%eax
 87e5f9c:	77 42                	ja     87e5fe0 <_ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi+0xf0>
 87e5f9e:	89 c1                	mov    %eax,%ecx
 87e5fa0:	83 e1 3f             	and    $0x3f,%ecx
 87e5fa3:	89 ce                	mov    %ecx,%esi
 87e5fa5:	83 ce 80             	or     $0xffffff80,%esi
 87e5fa8:	89 f1                	mov    %esi,%ecx
 87e5faa:	c7 02 04 00 00 00    	movl   $0x4,(%edx)
 87e5fb0:	8d 5f 03             	lea    0x3(%edi),%ebx
 87e5fb3:	88 4f 03             	mov    %cl,0x3(%edi)
 87e5fb6:	c1 e8 06             	shr    $0x6,%eax
 87e5fb9:	89 c1                	mov    %eax,%ecx
 87e5fbb:	83 e1 3f             	and    $0x3f,%ecx
 87e5fbe:	83 c9 80             	or     $0xffffff80,%ecx
 87e5fc1:	8d 73 ff             	lea    -0x1(%ebx),%esi
 87e5fc4:	88 4b ff             	mov    %cl,-0x1(%ebx)
 87e5fc7:	c1 e8 06             	shr    $0x6,%eax
 87e5fca:	e9 71 ff ff ff       	jmp    87e5f40 <_ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi+0x50>
 87e5fcf:	90                   	nop
 87e5fd0:	c7 02 03 00 00 00    	movl   $0x3,(%edx)
 87e5fd6:	8d 5f 03             	lea    0x3(%edi),%ebx
 87e5fd9:	eb de                	jmp    87e5fb9 <_ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi+0xc9>
 87e5fdb:	90                   	nop
 87e5fdc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e5fe0:	c7 02 00 00 00 00    	movl   $0x0,(%edx)
 87e5fe6:	e9 32 ff ff ff       	jmp    87e5f1d <_ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi+0x2d>
 87e5feb:	90                   	nop
 87e5fec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlBase::ConvertUTF32ToUTF8 @ 0x87e5ef0

/* TiXmlBase::ConvertUTF32ToUTF8(unsigned long, char*, int*) */

void TiXmlBase::ConvertUTF32ToUTF8(ulong param_1,char *param_2,int *param_3)

{
  byte bVar1;
  byte local_2c [28];
  
  if (param_1 < 0x80) {
    *param_3 = 1;
    bVar1 = 0;
  }
  else {
    if (param_1 < 0x800) {
      *param_3 = 2;
    }
    else {
      if (param_1 < 0x10000) {
        *param_3 = 3;
      }
      else {
        if (0x1fffff < param_1) {
          *param_3 = 0;
          return;
        }
        *param_3 = 4;
        param_2[3] = (byte)param_1 & 0x3f | 0x80;
        param_1 = param_1 >> 6;
      }
      param_2[2] = (byte)param_1 & 0x3f | 0x80;
      param_1 = param_1 >> 6;
    }
    param_2[1] = (byte)param_1 & 0x3f | 0x80;
    local_2c[0] = 0;
    local_2c[1] = 0;
    local_2c[2] = 0;
    local_2c[3] = 0;
    param_1 = param_1 >> 6;
    local_2c[4] = 0;
    local_2c[5] = 0;
    local_2c[6] = 0;
    local_2c[7] = 0;
    local_2c[8] = 0xc0;
    local_2c[9] = 0;
    local_2c[10] = 0;
    local_2c[0xb] = 0;
    local_2c[0xc] = 0xe0;
    local_2c[0xd] = 0;
    local_2c[0xe] = 0;
    local_2c[0xf] = 0;
    local_2c[0x10] = 0xf0;
    local_2c[0x11] = 0;
    local_2c[0x12] = 0;
    local_2c[0x13] = 0;
    local_2c[0x14] = 0xf8;
    local_2c[0x15] = 0;
    local_2c[0x16] = 0;
    local_2c[0x17] = 0;
    local_2c[0x18] = 0xfc;
    local_2c[0x19] = 0;
    local_2c[0x1a] = 0;
    local_2c[0x1b] = 0;
    bVar1 = local_2c[*param_3 * 4];
  }
  *param_2 = (byte)param_1 | bVar1;
  return;
}

```

---

## EncodeString

```asm
// === 087e0c60 TiXmlBase::EncodeString  [0x087e0c60-0x87e0ebf] ===
 87e0c60:	55                   	push   %ebp
 87e0c61:	89 e5                	mov    %esp,%ebp
 87e0c63:	57                   	push   %edi
 87e0c64:	56                   	push   %esi
 87e0c65:	53                   	push   %ebx
 87e0c66:	31 db                	xor    %ebx,%ebx
 87e0c68:	83 ec 5c             	sub    $0x5c,%esp
 87e0c6b:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e0c6e:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e0c71:	8d 45 c8             	lea    -0x38(%ebp),%eax
 87e0c74:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 87e0c77:	8b 17                	mov    (%edi),%edx
 87e0c79:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e0c7c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e0c80:	39 cb                	cmp    %ecx,%ebx
 87e0c82:	0f 8d af 00 00 00    	jge    87e0d37 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0xd7>
 87e0c88:	0f b6 04 1a          	movzbl (%edx,%ebx,1),%eax
 87e0c8c:	3c 26                	cmp    $0x26,%al
 87e0c8e:	0f 84 ac 00 00 00    	je     87e0d40 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0xe0>
 87e0c94:	3c 3c                	cmp    $0x3c,%al
 87e0c96:	0f 84 5c 01 00 00    	je     87e0df8 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x198>
 87e0c9c:	3c 3e                	cmp    $0x3e,%al
 87e0c9e:	0f 84 6c 01 00 00    	je     87e0e10 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x1b0>
 87e0ca4:	3c 22                	cmp    $0x22,%al
 87e0ca6:	0f 84 7c 01 00 00    	je     87e0e28 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x1c8>
 87e0cac:	3c 27                	cmp    $0x27,%al
 87e0cae:	66 90                	xchg   %ax,%ax
 87e0cb0:	0f 84 d2 01 00 00    	je     87e0e88 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x228>
 87e0cb6:	3c 1f                	cmp    $0x1f,%al
 87e0cb8:	0f 87 ca 00 00 00    	ja     87e0d88 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x128>
 87e0cbe:	8d 55 c8             	lea    -0x38(%ebp),%edx
 87e0cc1:	0f b6 c0             	movzbl %al,%eax
 87e0cc4:	89 14 24             	mov    %edx,(%esp)
 87e0cc7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e0ccb:	c7 44 24 08 cd 0e de 	movl   $0x8de0ecd,0x8(%esp)
 87e0cd2:	08 
 87e0cd3:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 87e0cda:	00 
 87e0cdb:	e8 00 cf 89 ff       	call   807dbe0 <snprintf@plt>
 87e0ce0:	8d 55 c8             	lea    -0x38(%ebp),%edx
 87e0ce3:	8b 0a                	mov    (%edx),%ecx
 87e0ce5:	83 c2 04             	add    $0x4,%edx
 87e0ce8:	8d 81 ff fe fe fe    	lea    -0x1010101(%ecx),%eax
 87e0cee:	f7 d1                	not    %ecx
 87e0cf0:	21 c8                	and    %ecx,%eax
 87e0cf2:	25 80 80 80 80       	and    $0x80808080,%eax
 87e0cf7:	74 ea                	je     87e0ce3 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x83>
 87e0cf9:	89 c1                	mov    %eax,%ecx
 87e0cfb:	c1 e9 10             	shr    $0x10,%ecx
 87e0cfe:	a9 80 80 00 00       	test   $0x8080,%eax
 87e0d03:	0f 44 c1             	cmove  %ecx,%eax
 87e0d06:	8d 4a 02             	lea    0x2(%edx),%ecx
 87e0d09:	0f 44 d1             	cmove  %ecx,%edx
 87e0d0c:	00 c0                	add    %al,%al
 87e0d0e:	83 da 03             	sbb    $0x3,%edx
 87e0d11:	2b 55 b4             	sub    -0x4c(%ebp),%edx
 87e0d14:	8d 4d c8             	lea    -0x38(%ebp),%ecx
 87e0d17:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87e0d1b:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e0d1f:	89 34 24             	mov    %esi,(%esp)
 87e0d22:	83 c3 01             	add    $0x1,%ebx
 87e0d25:	e8 e6 71 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e0d2a:	8b 17                	mov    (%edi),%edx
 87e0d2c:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e0d2f:	39 cb                	cmp    %ecx,%ebx
 87e0d31:	0f 8c 51 ff ff ff    	jl     87e0c88 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x28>
 87e0d37:	83 c4 5c             	add    $0x5c,%esp
 87e0d3a:	5b                   	pop    %ebx
 87e0d3b:	5e                   	pop    %esi
 87e0d3c:	5f                   	pop    %edi
 87e0d3d:	5d                   	pop    %ebp
 87e0d3e:	c3                   	ret
 87e0d3f:	90                   	nop
 87e0d40:	8d 41 fe             	lea    -0x2(%ecx),%eax
 87e0d43:	39 c3                	cmp    %eax,%ebx
 87e0d45:	7d 19                	jge    87e0d60 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x100>
 87e0d47:	80 7c 1a 01 23       	cmpb   $0x23,0x1(%edx,%ebx,1)
 87e0d4c:	8d 43 01             	lea    0x1(%ebx),%eax
 87e0d4f:	0f 84 eb 00 00 00    	je     87e0e40 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x1e0>
 87e0d55:	89 c3                	mov    %eax,%ebx
 87e0d57:	eb 0a                	jmp    87e0d63 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x103>
 87e0d59:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e0d60:	83 c3 01             	add    $0x1,%ebx
 87e0d63:	a1 84 37 3f 09       	mov    0x93f3784,%eax
 87e0d68:	89 34 24             	mov    %esi,(%esp)
 87e0d6b:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e0d6f:	a1 80 37 3f 09       	mov    0x93f3780,%eax
 87e0d74:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e0d78:	e8 93 71 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e0d7d:	8b 17                	mov    (%edi),%edx
 87e0d7f:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e0d82:	e9 f9 fe ff ff       	jmp    87e0c80 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x20>
 87e0d87:	90                   	nop
 87e0d88:	8b 16                	mov    (%esi),%edx
 87e0d8a:	89 55 ac             	mov    %edx,-0x54(%ebp)
 87e0d8d:	8b 4d ac             	mov    -0x54(%ebp),%ecx
 87e0d90:	83 ea 0c             	sub    $0xc,%edx
 87e0d93:	89 55 c0             	mov    %edx,-0x40(%ebp)
 87e0d96:	8b 49 f4             	mov    -0xc(%ecx),%ecx
 87e0d99:	89 4d b0             	mov    %ecx,-0x50(%ebp)
 87e0d9c:	83 c1 01             	add    $0x1,%ecx
 87e0d9f:	3b 4a 04             	cmp    0x4(%edx),%ecx
 87e0da2:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 87e0da5:	77 07                	ja     87e0dae <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x14e>
 87e0da7:	8b 4a 08             	mov    0x8(%edx),%ecx
 87e0daa:	85 c9                	test   %ecx,%ecx
 87e0dac:	7e 21                	jle    87e0dcf <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x16f>
 87e0dae:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87e0db1:	88 45 bc             	mov    %al,-0x44(%ebp)
 87e0db4:	89 34 24             	mov    %esi,(%esp)
 87e0db7:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e0dbb:	e8 50 6f f2 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e0dc0:	8b 0e                	mov    (%esi),%ecx
 87e0dc2:	0f b6 45 bc          	movzbl -0x44(%ebp),%eax
 87e0dc6:	8b 51 f4             	mov    -0xc(%ecx),%edx
 87e0dc9:	89 4d ac             	mov    %ecx,-0x54(%ebp)
 87e0dcc:	89 55 b0             	mov    %edx,-0x50(%ebp)
 87e0dcf:	8b 55 ac             	mov    -0x54(%ebp),%edx
 87e0dd2:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 87e0dd5:	88 04 0a             	mov    %al,(%edx,%ecx,1)
 87e0dd8:	8b 16                	mov    (%esi),%edx
 87e0dda:	8d 42 f4             	lea    -0xc(%edx),%eax
 87e0ddd:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e0de2:	0f 85 b7 00 00 00    	jne    87e0e9f <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x23f>
 87e0de8:	8b 17                	mov    (%edi),%edx
 87e0dea:	83 c3 01             	add    $0x1,%ebx
 87e0ded:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e0df0:	e9 8b fe ff ff       	jmp    87e0c80 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x20>
 87e0df5:	8d 76 00             	lea    0x0(%esi),%esi
 87e0df8:	a1 90 37 3f 09       	mov    0x93f3790,%eax
 87e0dfd:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e0e01:	a1 8c 37 3f 09       	mov    0x93f378c,%eax
 87e0e06:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e0e0a:	e9 10 ff ff ff       	jmp    87e0d1f <_ZN9TiXmlBase12EncodeStringERKSsPSs+0xbf>
 87e0e0f:	90                   	nop
 87e0e10:	a1 9c 37 3f 09       	mov    0x93f379c,%eax
 87e0e15:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e0e19:	a1 98 37 3f 09       	mov    0x93f3798,%eax
 87e0e1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e0e22:	e9 f8 fe ff ff       	jmp    87e0d1f <_ZN9TiXmlBase12EncodeStringERKSsPSs+0xbf>
 87e0e27:	90                   	nop
 87e0e28:	a1 a8 37 3f 09       	mov    0x93f37a8,%eax
 87e0e2d:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e0e31:	a1 a4 37 3f 09       	mov    0x93f37a4,%eax
 87e0e36:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e0e3a:	e9 e0 fe ff ff       	jmp    87e0d1f <_ZN9TiXmlBase12EncodeStringERKSsPSs+0xbf>
 87e0e3f:	90                   	nop
 87e0e40:	80 7c 1a 02 78       	cmpb   $0x78,0x2(%edx,%ebx,1)
 87e0e45:	0f 85 0a ff ff ff    	jne    87e0d55 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0xf5>
 87e0e4b:	eb 06                	jmp    87e0e53 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x1f3>
 87e0e4d:	8d 76 00             	lea    0x0(%esi),%esi
 87e0e50:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e0e53:	8d 41 ff             	lea    -0x1(%ecx),%eax
 87e0e56:	39 c3                	cmp    %eax,%ebx
 87e0e58:	0f 8d 22 fe ff ff    	jge    87e0c80 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x20>
 87e0e5e:	01 da                	add    %ebx,%edx
 87e0e60:	83 c3 01             	add    $0x1,%ebx
 87e0e63:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e0e67:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 87e0e6e:	00 
 87e0e6f:	89 34 24             	mov    %esi,(%esp)
 87e0e72:	e8 99 70 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e0e77:	8b 17                	mov    (%edi),%edx
 87e0e79:	80 3c 1a 3b          	cmpb   $0x3b,(%edx,%ebx,1)
 87e0e7d:	75 d1                	jne    87e0e50 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x1f0>
 87e0e7f:	e9 69 ff ff ff       	jmp    87e0ded <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x18d>
 87e0e84:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e0e88:	a1 b4 37 3f 09       	mov    0x93f37b4,%eax
 87e0e8d:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e0e91:	a1 b0 37 3f 09       	mov    0x93f37b0,%eax
 87e0e96:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e0e9a:	e9 80 fe ff ff       	jmp    87e0d1f <_ZN9TiXmlBase12EncodeStringERKSsPSs+0xbf>
 87e0e9f:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87e0ea2:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87e0ea9:	89 4a f4             	mov    %ecx,-0xc(%edx)
 87e0eac:	c6 44 08 0c 00       	movb   $0x0,0xc(%eax,%ecx,1)
 87e0eb1:	e9 32 ff ff ff       	jmp    87e0de8 <_ZN9TiXmlBase12EncodeStringERKSsPSs+0x188>
 87e0eb6:	8d 76 00             	lea    0x0(%esi),%esi
 87e0eb9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlBase::EncodeString @ 0x87e0c60

/* TiXmlBase::EncodeString(std::string const&, std::string*) */

void TiXmlBase::EncodeString(string *param_1,string *param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  uint *puVar11;
  int local_58;
  int local_54;
  uint local_3c [11];
  
  iVar10 = 0;
  iVar8 = *(int *)param_1;
  iVar5 = *(int *)(iVar8 + -0xc);
LAB_087e0c80:
  do {
    while( true ) {
      if (iVar5 <= iVar10) {
        return;
      }
      while (bVar1 = *(byte *)(iVar8 + iVar10), bVar1 != 0x26) {
        puVar11 = (uint *)PTR_DAT_093f378c;
        uVar4 = DAT_093f3790;
        if ((((bVar1 != 0x3c) &&
             (puVar11 = (uint *)PTR_DAT_093f3798, uVar4 = DAT_093f379c, bVar1 != 0x3e)) &&
            (puVar11 = (uint *)PTR_s__quot__093f37a4, uVar4 = DAT_093f37a8, bVar1 != 0x22)) &&
           (puVar11 = (uint *)PTR_s__apos__093f37b0, uVar4 = DAT_093f37b4, bVar1 != 0x27)) {
          if (0x1f < bVar1) {
            local_58 = *(int *)param_2;
            local_54 = *(int *)(local_58 + -0xc);
            uVar4 = local_54 + 1;
            if ((*(uint *)(local_58 + -8) < uVar4) || (0 < *(int *)(local_58 + -4))) {
              std::string::reserve(param_2,uVar4);
              local_58 = *(int *)param_2;
              local_54 = *(int *)(local_58 + -0xc);
            }
            *(byte *)(local_58 + local_54) = bVar1;
            puVar2 = *(undefined1 **)param_2;
            if (puVar2 != &DAT_0948ccfc) {
              *(undefined4 *)(puVar2 + -4) = 0;
              *(uint *)(puVar2 + -0xc) = uVar4;
              puVar2[uVar4] = 0;
            }
            iVar8 = *(int *)param_1;
            iVar10 = iVar10 + 1;
            goto LAB_087e0ded;
          }
          snprintf((char *)local_3c,0x20,"&#x%02X;",(uint)bVar1);
          puVar11 = local_3c;
          do {
            puVar6 = puVar11;
            uVar3 = *puVar6 + 0xfefefeff & ~*puVar6;
            uVar4 = uVar3 & 0x80808080;
            puVar11 = puVar6 + 1;
          } while (uVar4 == 0);
          puVar7 = puVar6 + 1;
          if ((uVar3 & 0x8080) == 0) {
            puVar7 = (uint *)((int)puVar6 + 6);
            uVar4 = uVar4 >> 0x10;
          }
          puVar11 = local_3c;
          uVar4 = (int)puVar7 + ((-3 - (uint)CARRY1((byte)uVar4,(byte)uVar4)) - (int)local_3c);
        }
        iVar10 = iVar10 + 1;
        std::string::append(param_2,(char *)puVar11,uVar4);
        iVar8 = *(int *)param_1;
        iVar5 = *(int *)(iVar8 + -0xc);
        if (iVar5 <= iVar10) {
          return;
        }
      }
      if (((iVar10 < iVar5 + -2) && (*(char *)(iVar8 + 1 + iVar10) == '#')) &&
         (*(char *)(iVar8 + 2 + iVar10) == 'x')) break;
      iVar10 = iVar10 + 1;
      std::string::append(param_2,entity,DAT_093f3784);
      iVar8 = *(int *)param_1;
      iVar5 = *(int *)(iVar8 + -0xc);
    }
    while (iVar10 < iVar5 + -1) {
      pcVar9 = (char *)(iVar8 + iVar10);
      iVar10 = iVar10 + 1;
      std::string::append(param_2,pcVar9,1);
      iVar8 = *(int *)param_1;
      if (*(char *)(iVar8 + iVar10) == ';') goto LAB_087e0ded;
      iVar5 = *(int *)(iVar8 + -0xc);
    }
  } while( true );
LAB_087e0ded:
  iVar5 = *(int *)(iVar8 + -0xc);
  goto LAB_087e0c80;
}

```

---

## GetEntity

```asm
// === 087e6560 TiXmlBase::GetEntity  [0x087e6560-0x87e684f] ===
 87e6560:	55                   	push   %ebp
 87e6561:	89 e5                	mov    %esp,%ebp
 87e6563:	57                   	push   %edi
 87e6564:	56                   	push   %esi
 87e6565:	53                   	push   %ebx
 87e6566:	83 ec 4c             	sub    $0x4c,%esp
 87e6569:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e656c:	8b 45 10             	mov    0x10(%ebp),%eax
 87e656f:	8d 53 01             	lea    0x1(%ebx),%edx
 87e6572:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 87e6578:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87e657b:	80 7b 01 23          	cmpb   $0x23,0x1(%ebx)
 87e657f:	0f 84 23 01 00 00    	je     87e66a8 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x148>
 87e6585:	8b 35 84 37 3f 09    	mov    0x93f3784,%esi
 87e658b:	8b 3d 80 37 3f 09    	mov    0x93f3780,%edi
 87e6591:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e6595:	89 74 24 08          	mov    %esi,0x8(%esp)
 87e6599:	89 3c 24             	mov    %edi,(%esp)
 87e659c:	e8 1f 83 89 ff       	call   807e8c0 <strncmp@plt>
 87e65a1:	31 d2                	xor    %edx,%edx
 87e65a3:	85 c0                	test   %eax,%eax
 87e65a5:	0f 84 b5 00 00 00    	je     87e6660 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x100>
 87e65ab:	8b 35 90 37 3f 09    	mov    0x93f3790,%esi
 87e65b1:	8b 3d 8c 37 3f 09    	mov    0x93f378c,%edi
 87e65b7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e65bb:	89 74 24 08          	mov    %esi,0x8(%esp)
 87e65bf:	89 3c 24             	mov    %edi,(%esp)
 87e65c2:	e8 f9 82 89 ff       	call   807e8c0 <strncmp@plt>
 87e65c7:	ba 01 00 00 00       	mov    $0x1,%edx
 87e65cc:	85 c0                	test   %eax,%eax
 87e65ce:	0f 84 8c 00 00 00    	je     87e6660 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x100>
 87e65d4:	8b 35 9c 37 3f 09    	mov    0x93f379c,%esi
 87e65da:	8b 3d 98 37 3f 09    	mov    0x93f3798,%edi
 87e65e0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e65e4:	89 74 24 08          	mov    %esi,0x8(%esp)
 87e65e8:	89 3c 24             	mov    %edi,(%esp)
 87e65eb:	e8 d0 82 89 ff       	call   807e8c0 <strncmp@plt>
 87e65f0:	ba 02 00 00 00       	mov    $0x2,%edx
 87e65f5:	85 c0                	test   %eax,%eax
 87e65f7:	74 67                	je     87e6660 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x100>
 87e65f9:	8b 35 a8 37 3f 09    	mov    0x93f37a8,%esi
 87e65ff:	8b 3d a4 37 3f 09    	mov    0x93f37a4,%edi
 87e6605:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e6609:	89 74 24 08          	mov    %esi,0x8(%esp)
 87e660d:	89 3c 24             	mov    %edi,(%esp)
 87e6610:	e8 ab 82 89 ff       	call   807e8c0 <strncmp@plt>
 87e6615:	ba 03 00 00 00       	mov    $0x3,%edx
 87e661a:	85 c0                	test   %eax,%eax
 87e661c:	74 42                	je     87e6660 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x100>
 87e661e:	8b 35 b4 37 3f 09    	mov    0x93f37b4,%esi
 87e6624:	8b 3d b0 37 3f 09    	mov    0x93f37b0,%edi
 87e662a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 87e662e:	89 74 24 08          	mov    %esi,0x8(%esp)
 87e6632:	89 3c 24             	mov    %edi,(%esp)
 87e6635:	e8 86 82 89 ff       	call   807e8c0 <strncmp@plt>
 87e663a:	85 c0                	test   %eax,%eax
 87e663c:	74 1a                	je     87e6658 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0xf8>
 87e663e:	0f b6 03             	movzbl (%ebx),%eax
 87e6641:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87e6644:	88 01                	mov    %al,(%ecx)
 87e6646:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87e6649:	83 c4 4c             	add    $0x4c,%esp
 87e664c:	5b                   	pop    %ebx
 87e664d:	5e                   	pop    %esi
 87e664e:	5f                   	pop    %edi
 87e664f:	5d                   	pop    %ebp
 87e6650:	c3                   	ret
 87e6651:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e6658:	ba 04 00 00 00       	mov    $0x4,%edx
 87e665d:	8d 76 00             	lea    0x0(%esi),%esi
 87e6660:	89 3c 24             	mov    %edi,(%esp)
 87e6663:	89 55 d0             	mov    %edx,-0x30(%ebp)
 87e6666:	e8 45 7d 89 ff       	call   807e3b0 <strlen@plt>
 87e666b:	8b 55 d0             	mov    -0x30(%ebp),%edx
 87e666e:	39 f0                	cmp    %esi,%eax
 87e6670:	0f 85 9b 01 00 00    	jne    87e6811 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x2b1>
 87e6676:	8d 04 52             	lea    (%edx,%edx,2),%eax
 87e6679:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87e667c:	0f b6 14 85 88 37 3f 	movzbl 0x93f3788(,%eax,4),%edx
 87e6683:	09 
 87e6684:	88 11                	mov    %dl,(%ecx)
 87e6686:	8b 55 10             	mov    0x10(%ebp),%edx
 87e6689:	c7 02 01 00 00 00    	movl   $0x1,(%edx)
 87e668f:	03 1c 85 84 37 3f 09 	add    0x93f3784(,%eax,4),%ebx
 87e6696:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 87e6699:	89 d8                	mov    %ebx,%eax
 87e669b:	83 c4 4c             	add    $0x4c,%esp
 87e669e:	5b                   	pop    %ebx
 87e669f:	5e                   	pop    %esi
 87e66a0:	5f                   	pop    %edi
 87e66a1:	5d                   	pop    %ebp
 87e66a2:	c3                   	ret
 87e66a3:	90                   	nop
 87e66a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e66a8:	0f b6 43 02          	movzbl 0x2(%ebx),%eax
 87e66ac:	8d 53 02             	lea    0x2(%ebx),%edx
 87e66af:	84 c0                	test   %al,%al
 87e66b1:	0f 84 ce fe ff ff    	je     87e6585 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x25>
 87e66b7:	3c 78                	cmp    $0x78,%al
 87e66b9:	0f 84 a1 00 00 00    	je     87e6760 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x200>
 87e66bf:	c7 44 24 04 3b 00 00 	movl   $0x3b,0x4(%esp)
 87e66c6:	00 
 87e66c7:	89 14 24             	mov    %edx,(%esp)
 87e66ca:	e8 b1 7e 89 ff       	call   807e580 <strchr@plt>
 87e66cf:	85 c0                	test   %eax,%eax
 87e66d1:	75 0f                	jne    87e66e2 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x182>
 87e66d3:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 87e66da:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87e66dd:	e9 67 ff ff ff       	jmp    87e6649 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0xe9>
 87e66e2:	80 38 00             	cmpb   $0x0,(%eax)
 87e66e5:	74 ec                	je     87e66d3 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x173>
 87e66e7:	89 c2                	mov    %eax,%edx
 87e66e9:	29 da                	sub    %ebx,%edx
 87e66eb:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87e66ee:	0f b6 50 ff          	movzbl -0x1(%eax),%edx
 87e66f2:	8d 70 ff             	lea    -0x1(%eax),%esi
 87e66f5:	80 fa 23             	cmp    $0x23,%dl
 87e66f8:	0f 84 0c 01 00 00    	je     87e680a <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x2aa>
 87e66fe:	8d 42 d0             	lea    -0x30(%edx),%eax
 87e6701:	3c 09                	cmp    $0x9,%al
 87e6703:	77 ce                	ja     87e66d3 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x173>
 87e6705:	b9 01 00 00 00       	mov    $0x1,%ecx
 87e670a:	31 c0                	xor    %eax,%eax
 87e670c:	89 df                	mov    %ebx,%edi
 87e670e:	eb 08                	jmp    87e6718 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x1b8>
 87e6710:	8d 5a d0             	lea    -0x30(%edx),%ebx
 87e6713:	80 fb 09             	cmp    $0x9,%bl
 87e6716:	77 bb                	ja     87e66d3 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x173>
 87e6718:	0f be d2             	movsbl %dl,%edx
 87e671b:	83 ee 01             	sub    $0x1,%esi
 87e671e:	83 ea 30             	sub    $0x30,%edx
 87e6721:	0f af d1             	imul   %ecx,%edx
 87e6724:	8d 0c 89             	lea    (%ecx,%ecx,4),%ecx
 87e6727:	01 c9                	add    %ecx,%ecx
 87e6729:	01 d0                	add    %edx,%eax
 87e672b:	0f b6 16             	movzbl (%esi),%edx
 87e672e:	80 fa 23             	cmp    $0x23,%dl
 87e6731:	75 dd                	jne    87e6710 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x1b0>
 87e6733:	89 fb                	mov    %edi,%ebx
 87e6735:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 87e6739:	0f 84 f6 00 00 00    	je     87e6835 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x2d5>
 87e673f:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87e6742:	88 01                	mov    %al,(%ecx)
 87e6744:	8b 45 10             	mov    0x10(%ebp),%eax
 87e6747:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 87e674d:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87e6750:	8d 5c 13 01          	lea    0x1(%ebx,%edx,1),%ebx
 87e6754:	89 5d d4             	mov    %ebx,-0x2c(%ebp)
 87e6757:	89 d8                	mov    %ebx,%eax
 87e6759:	e9 eb fe ff ff       	jmp    87e6649 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0xe9>
 87e675e:	66 90                	xchg   %ax,%ax
 87e6760:	80 7b 03 00          	cmpb   $0x0,0x3(%ebx)
 87e6764:	8d 43 03             	lea    0x3(%ebx),%eax
 87e6767:	0f 84 66 ff ff ff    	je     87e66d3 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x173>
 87e676d:	c7 44 24 04 3b 00 00 	movl   $0x3b,0x4(%esp)
 87e6774:	00 
 87e6775:	89 04 24             	mov    %eax,(%esp)
 87e6778:	e8 03 7e 89 ff       	call   807e580 <strchr@plt>
 87e677d:	85 c0                	test   %eax,%eax
 87e677f:	0f 84 4e ff ff ff    	je     87e66d3 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x173>
 87e6785:	80 38 00             	cmpb   $0x0,(%eax)
 87e6788:	0f 84 45 ff ff ff    	je     87e66d3 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x173>
 87e678e:	89 c1                	mov    %eax,%ecx
 87e6790:	29 d9                	sub    %ebx,%ecx
 87e6792:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 87e6795:	0f b6 50 ff          	movzbl -0x1(%eax),%edx
 87e6799:	8d 70 ff             	lea    -0x1(%eax),%esi
 87e679c:	80 fa 78             	cmp    $0x78,%dl
 87e679f:	74 69                	je     87e680a <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x2aa>
 87e67a1:	b9 01 00 00 00       	mov    $0x1,%ecx
 87e67a6:	31 c0                	xor    %eax,%eax
 87e67a8:	89 5d c4             	mov    %ebx,-0x3c(%ebp)
 87e67ab:	eb 19                	jmp    87e67c6 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x266>
 87e67ad:	0f be d2             	movsbl %dl,%edx
 87e67b0:	83 ea 30             	sub    $0x30,%edx
 87e67b3:	0f af d1             	imul   %ecx,%edx
 87e67b6:	01 d0                	add    %edx,%eax
 87e67b8:	83 ee 01             	sub    $0x1,%esi
 87e67bb:	0f b6 16             	movzbl (%esi),%edx
 87e67be:	80 fa 78             	cmp    $0x78,%dl
 87e67c1:	74 24                	je     87e67e7 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x287>
 87e67c3:	c1 e1 04             	shl    $0x4,%ecx
 87e67c6:	8d 7a d0             	lea    -0x30(%edx),%edi
 87e67c9:	89 fb                	mov    %edi,%ebx
 87e67cb:	80 fb 09             	cmp    $0x9,%bl
 87e67ce:	76 dd                	jbe    87e67ad <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x24d>
 87e67d0:	8d 7a 9f             	lea    -0x61(%edx),%edi
 87e67d3:	89 fb                	mov    %edi,%ebx
 87e67d5:	80 fb 05             	cmp    $0x5,%bl
 87e67d8:	77 15                	ja     87e67ef <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x28f>
 87e67da:	0f be d2             	movsbl %dl,%edx
 87e67dd:	83 ea 57             	sub    $0x57,%edx
 87e67e0:	0f af d1             	imul   %ecx,%edx
 87e67e3:	01 d0                	add    %edx,%eax
 87e67e5:	eb d1                	jmp    87e67b8 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x258>
 87e67e7:	8b 5d c4             	mov    -0x3c(%ebp),%ebx
 87e67ea:	e9 46 ff ff ff       	jmp    87e6735 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x1d5>
 87e67ef:	8d 7a bf             	lea    -0x41(%edx),%edi
 87e67f2:	89 fb                	mov    %edi,%ebx
 87e67f4:	80 fb 05             	cmp    $0x5,%bl
 87e67f7:	0f 87 d6 fe ff ff    	ja     87e66d3 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x173>
 87e67fd:	0f be d2             	movsbl %dl,%edx
 87e6800:	83 ea 37             	sub    $0x37,%edx
 87e6803:	0f af d1             	imul   %ecx,%edx
 87e6806:	01 d0                	add    %edx,%eax
 87e6808:	eb ae                	jmp    87e67b8 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x258>
 87e680a:	31 c0                	xor    %eax,%eax
 87e680c:	e9 24 ff ff ff       	jmp    87e6735 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x1d5>
 87e6811:	c7 44 24 0c 20 1f de 	movl   $0x8de1f20,0xc(%esp)
 87e6818:	08 
 87e6819:	c7 44 24 08 07 02 00 	movl   $0x207,0x8(%esp)
 87e6820:	00 
 87e6821:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e6828:	08 
 87e6829:	c7 04 24 e0 18 de 08 	movl   $0x8de18e0,(%esp)
 87e6830:	e8 1b 74 89 ff       	call   807dc50 <__assert_fail@plt>
 87e6835:	8b 4d 10             	mov    0x10(%ebp),%ecx
 87e6838:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e683b:	89 04 24             	mov    %eax,(%esp)
 87e683e:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87e6842:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e6846:	e8 a5 f6 ff ff       	call   87e5ef0 <_ZN9TiXmlBase18ConvertUTF32ToUTF8EmPcPi>
 87e684b:	e9 fd fe ff ff       	jmp    87e674d <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding+0x1ed>

```

```c
// TiXmlBase::GetEntity @ 0x87e6560

/* TiXmlBase::GetEntity(char const*, char*, int*, TiXmlEncoding) */

char * TiXmlBase::GetEntity(char *param_1,char *param_2,int *param_3,int param_4)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  size_t sVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  ulong uVar8;
  int iVar9;
  size_t sVar10;
  int local_30;
  
  *param_3 = 0;
  sVar10 = DAT_093f3784;
  pcVar7 = entity;
  if (param_1[1] != '#') {
LAB_087e6585:
    iVar5 = strncmp(entity,param_1,DAT_093f3784);
    sVar6 = DAT_093f3790;
    puVar2 = PTR_DAT_093f378c;
    iVar9 = 0;
    if (iVar5 != 0) {
      iVar5 = strncmp(PTR_DAT_093f378c,param_1,DAT_093f3790);
      sVar4 = DAT_093f379c;
      puVar3 = PTR_DAT_093f3798;
      iVar9 = 1;
      sVar10 = sVar6;
      pcVar7 = puVar2;
      if (iVar5 != 0) {
        iVar5 = strncmp(PTR_DAT_093f3798,param_1,DAT_093f379c);
        sVar6 = DAT_093f37a8;
        puVar2 = PTR_s__quot__093f37a4;
        iVar9 = 2;
        sVar10 = sVar4;
        pcVar7 = puVar3;
        if (iVar5 != 0) {
          iVar5 = strncmp(PTR_s__quot__093f37a4,param_1,DAT_093f37a8);
          sVar4 = DAT_093f37b4;
          puVar3 = PTR_s__apos__093f37b0;
          iVar9 = 3;
          sVar10 = sVar6;
          pcVar7 = puVar2;
          if (iVar5 != 0) {
            iVar5 = strncmp(PTR_s__apos__093f37b0,param_1,DAT_093f37b4);
            if (iVar5 != 0) {
              *param_2 = *param_1;
              return param_1 + 1;
            }
            iVar9 = 4;
            sVar10 = sVar4;
            pcVar7 = puVar3;
          }
        }
      }
    }
    sVar6 = strlen(pcVar7);
    if (sVar6 != sVar10) {
                    /* WARNING: Subroutine does not return */
      __assert_fail("strlen( entity[i].str ) == entity[i].strLength","tinyxmlparser.cpp",0x207,
                    "static const char* TiXmlBase::GetEntity(const char*, char*, int*, TiXmlEncoding)"
                   );
    }
    *param_2 = *(char *)(iVar9 * 0xc + 0x93f3788);
    *param_3 = 1;
    return param_1 + (&DAT_093f3784)[iVar9 * 3];
  }
  if (param_1[2] == '\0') goto LAB_087e6585;
  if (param_1[2] == 'x') {
    if (param_1[3] == '\0') {
      return (char *)0x0;
    }
    pcVar7 = strchr(param_1 + 3,0x3b);
    if (pcVar7 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar7 == '\0') {
      return (char *)0x0;
    }
    local_30 = (int)pcVar7 - (int)param_1;
    cVar1 = pcVar7[-1];
    pcVar7 = pcVar7 + -1;
    if (cVar1 != 'x') {
      iVar5 = 1;
      uVar8 = 0;
      while( true ) {
        if ((byte)(cVar1 - 0x30U) < 10) {
          uVar8 = uVar8 + (cVar1 + -0x30) * iVar5;
        }
        else if ((byte)(cVar1 + 0x9fU) < 6) {
          uVar8 = uVar8 + (cVar1 + -0x57) * iVar5;
        }
        else {
          if (5 < (byte)(cVar1 + 0xbfU)) {
            return (char *)0x0;
          }
          uVar8 = uVar8 + (cVar1 + -0x37) * iVar5;
        }
        pcVar7 = pcVar7 + -1;
        cVar1 = *pcVar7;
        if (cVar1 == 'x') break;
        iVar5 = iVar5 << 4;
      }
      goto LAB_087e6735;
    }
  }
  else {
    pcVar7 = strchr(param_1 + 2,0x3b);
    if ((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) {
      return (char *)0x0;
    }
    local_30 = (int)pcVar7 - (int)param_1;
    cVar1 = pcVar7[-1];
    pcVar7 = pcVar7 + -1;
    if (cVar1 != '#') {
      if (9 < (byte)(cVar1 - 0x30U)) {
        return (char *)0x0;
      }
      iVar5 = 1;
      uVar8 = 0;
      while( true ) {
        pcVar7 = pcVar7 + -1;
        iVar9 = (cVar1 + -0x30) * iVar5;
        iVar5 = iVar5 * 10;
        uVar8 = uVar8 + iVar9;
        cVar1 = *pcVar7;
        if (cVar1 == '#') break;
        if (9 < (byte)(cVar1 - 0x30U)) {
          return (char *)0x0;
        }
      }
      goto LAB_087e6735;
    }
  }
  uVar8 = 0;
LAB_087e6735:
  if (param_4 == 1) {
    ConvertUTF32ToUTF8(uVar8,param_2,param_3);
  }
  else {
    *param_2 = (char)uVar8;
    *param_3 = 1;
  }
  return param_1 + local_30 + 1;
}

```

---

## IsAlpha

```asm
// === 087e6260 TiXmlBase::IsAlpha  [0x087e6260-0x87e628f] ===
 87e6260:	55                   	push   %ebp
 87e6261:	89 e5                	mov    %esp,%ebp
 87e6263:	83 ec 08             	sub    $0x8,%esp
 87e6266:	0f b6 45 08          	movzbl 0x8(%ebp),%eax
 87e626a:	3c 7e                	cmp    $0x7e,%al
 87e626c:	77 12                	ja     87e6280 <_ZN9TiXmlBase7IsAlphaEh13TiXmlEncoding+0x20>
 87e626e:	0f b6 c0             	movzbl %al,%eax
 87e6271:	89 45 08             	mov    %eax,0x8(%ebp)
 87e6274:	c9                   	leave
 87e6275:	e9 76 82 89 ff       	jmp    807e4f0 <isalpha@plt>
 87e627a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e6280:	b8 01 00 00 00       	mov    $0x1,%eax
 87e6285:	c9                   	leave
 87e6286:	c3                   	ret
 87e6287:	90                   	nop
 87e6288:	90                   	nop
 87e6289:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlBase::IsAlpha @ 0x87e6260

/* TiXmlBase::IsAlpha(unsigned char, TiXmlEncoding) */

int TiXmlBase::IsAlpha(byte param_1)

{
  int iVar1;
  
  if (param_1 < 0x7f) {
    iVar1 = isalpha((uint)param_1);
    return iVar1;
  }
  return 1;
}

```

---

## IsAlphaNum

```asm
// === 087e6230 TiXmlBase::IsAlphaNum  [0x087e6230-0x87e625f] ===
 87e6230:	55                   	push   %ebp
 87e6231:	89 e5                	mov    %esp,%ebp
 87e6233:	83 ec 08             	sub    $0x8,%esp
 87e6236:	0f b6 45 08          	movzbl 0x8(%ebp),%eax
 87e623a:	3c 7e                	cmp    $0x7e,%al
 87e623c:	77 12                	ja     87e6250 <_ZN9TiXmlBase10IsAlphaNumEh13TiXmlEncoding+0x20>
 87e623e:	0f b6 c0             	movzbl %al,%eax
 87e6241:	89 45 08             	mov    %eax,0x8(%ebp)
 87e6244:	c9                   	leave
 87e6245:	e9 d6 79 89 ff       	jmp    807dc20 <isalnum@plt>
 87e624a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e6250:	b8 01 00 00 00       	mov    $0x1,%eax
 87e6255:	c9                   	leave
 87e6256:	c3                   	ret
 87e6257:	90                   	nop
 87e6258:	90                   	nop
 87e6259:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlBase::IsAlphaNum @ 0x87e6230

/* TiXmlBase::IsAlphaNum(unsigned char, TiXmlEncoding) */

int TiXmlBase::IsAlphaNum(byte param_1)

{
  int iVar1;
  
  if (param_1 < 0x7f) {
    iVar1 = isalnum((uint)param_1);
    return iVar1;
  }
  return 1;
}

```

---

## ReadName

```asm
// === 087e6c30 TiXmlBase::ReadName  [0x087e6c30-0x87e6d2f] ===
 87e6c30:	55                   	push   %ebp
 87e6c31:	89 e5                	mov    %esp,%ebp
 87e6c33:	57                   	push   %edi
 87e6c34:	56                   	push   %esi
 87e6c35:	53                   	push   %ebx
 87e6c36:	83 ec 1c             	sub    $0x1c,%esp
 87e6c39:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e6c3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e6c3f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e6c46:	00 
 87e6c47:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e6c4e:	08 
 87e6c4f:	89 04 24             	mov    %eax,(%esp)
 87e6c52:	e8 49 19 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e6c57:	85 ff                	test   %edi,%edi
 87e6c59:	0f 84 9f 00 00 00    	je     87e6cfe <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0xce>
 87e6c5f:	0f b6 1f             	movzbl (%edi),%ebx
 87e6c62:	84 db                	test   %bl,%bl
 87e6c64:	75 12                	jne    87e6c78 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0x48>
 87e6c66:	31 f6                	xor    %esi,%esi
 87e6c68:	83 c4 1c             	add    $0x1c,%esp
 87e6c6b:	89 f0                	mov    %esi,%eax
 87e6c6d:	5b                   	pop    %ebx
 87e6c6e:	5e                   	pop    %esi
 87e6c6f:	5f                   	pop    %edi
 87e6c70:	5d                   	pop    %ebp
 87e6c71:	c3                   	ret
 87e6c72:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e6c78:	80 fb 7e             	cmp    $0x7e,%bl
 87e6c7b:	77 14                	ja     87e6c91 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0x61>
 87e6c7d:	0f b6 c3             	movzbl %bl,%eax
 87e6c80:	89 04 24             	mov    %eax,(%esp)
 87e6c83:	e8 68 78 89 ff       	call   807e4f0 <isalpha@plt>
 87e6c88:	85 c0                	test   %eax,%eax
 87e6c8a:	75 05                	jne    87e6c91 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0x61>
 87e6c8c:	80 fb 5f             	cmp    $0x5f,%bl
 87e6c8f:	75 d5                	jne    87e6c66 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0x36>
 87e6c91:	89 fe                	mov    %edi,%esi
 87e6c93:	90                   	nop
 87e6c94:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e6c98:	80 fb 7e             	cmp    $0x7e,%bl
 87e6c9b:	77 53                	ja     87e6cf0 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0xc0>
 87e6c9d:	0f b6 c3             	movzbl %bl,%eax
 87e6ca0:	89 04 24             	mov    %eax,(%esp)
 87e6ca3:	e8 78 6f 89 ff       	call   807dc20 <isalnum@plt>
 87e6ca8:	85 c0                	test   %eax,%eax
 87e6caa:	75 44                	jne    87e6cf0 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0xc0>
 87e6cac:	80 fb 5f             	cmp    $0x5f,%bl
 87e6caf:	74 3f                	je     87e6cf0 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0xc0>
 87e6cb1:	80 fb 2d             	cmp    $0x2d,%bl
 87e6cb4:	74 3a                	je     87e6cf0 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0xc0>
 87e6cb6:	80 fb 2e             	cmp    $0x2e,%bl
 87e6cb9:	74 35                	je     87e6cf0 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0xc0>
 87e6cbb:	80 fb 3a             	cmp    $0x3a,%bl
 87e6cbe:	66 90                	xchg   %ax,%ax
 87e6cc0:	74 2e                	je     87e6cf0 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0xc0>
 87e6cc2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e6cc8:	89 f0                	mov    %esi,%eax
 87e6cca:	29 f8                	sub    %edi,%eax
 87e6ccc:	85 c0                	test   %eax,%eax
 87e6cce:	7e 98                	jle    87e6c68 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0x38>
 87e6cd0:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e6cd4:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e6cd7:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e6cdb:	89 04 24             	mov    %eax,(%esp)
 87e6cde:	e8 bd 18 f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e6ce3:	83 c4 1c             	add    $0x1c,%esp
 87e6ce6:	89 f0                	mov    %esi,%eax
 87e6ce8:	5b                   	pop    %ebx
 87e6ce9:	5e                   	pop    %esi
 87e6cea:	5f                   	pop    %edi
 87e6ceb:	5d                   	pop    %ebp
 87e6cec:	c3                   	ret
 87e6ced:	8d 76 00             	lea    0x0(%esi),%esi
 87e6cf0:	83 c6 01             	add    $0x1,%esi
 87e6cf3:	74 d3                	je     87e6cc8 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0x98>
 87e6cf5:	0f b6 1e             	movzbl (%esi),%ebx
 87e6cf8:	84 db                	test   %bl,%bl
 87e6cfa:	74 cc                	je     87e6cc8 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0x98>
 87e6cfc:	eb 9a                	jmp    87e6c98 <_ZN9TiXmlBase8ReadNameEPKcPSs13TiXmlEncoding+0x68>
 87e6cfe:	c7 44 24 0c 80 1f de 	movl   $0x8de1f80,0xc(%esp)
 87e6d05:	08 
 87e6d06:	c7 44 24 08 97 01 00 	movl   $0x197,0x8(%esp)
 87e6d0d:	00 
 87e6d0e:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e6d15:	08 
 87e6d16:	c7 04 24 05 0f de 08 	movl   $0x8de0f05,(%esp)
 87e6d1d:	e8 2e 6f 89 ff       	call   807dc50 <__assert_fail@plt>
 87e6d22:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e6d29:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlBase::ReadName @ 0x87e6c30

/* TiXmlBase::ReadName(char const*, std::string*, TiXmlEncoding) */

byte * TiXmlBase::ReadName(byte *param_1,string *param_2)

{
  int iVar1;
  byte bVar2;
  byte *pbVar3;
  
  std::string::assign(param_2,"",0);
  if (param_1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("p","tinyxmlparser.cpp",0x197,
                  "static const char* TiXmlBase::ReadName(const char*, std::string*, TiXmlEncoding)"
                 );
  }
  bVar2 = *param_1;
  if ((bVar2 == 0) ||
     (((pbVar3 = param_1, bVar2 < 0x7f && (iVar1 = isalpha((uint)bVar2), iVar1 == 0)) &&
      (bVar2 != 0x5f)))) {
    pbVar3 = (byte *)0x0;
  }
  else {
    while ((((0x7e < bVar2 || (iVar1 = isalnum((uint)bVar2), iVar1 != 0)) ||
            ((bVar2 == 0x5f || ((bVar2 == 0x2d || (bVar2 == 0x2e)))))) || (bVar2 == 0x3a))) {
      pbVar3 = pbVar3 + 1;
      if ((pbVar3 == (byte *)0x0) || (bVar2 = *pbVar3, bVar2 == 0)) break;
    }
    if (0 < (int)pbVar3 - (int)param_1) {
      std::string::assign(param_2,(char *)param_1,(int)pbVar3 - (int)param_1);
      return pbVar3;
    }
  }
  return pbVar3;
}

```

---

## ReadText

```asm
// === 087e6850 TiXmlBase::ReadText  [0x087e6850-0x87e6bcf] ===
 87e6850:	55                   	push   %ebp
 87e6851:	89 e5                	mov    %esp,%ebp
 87e6853:	57                   	push   %edi
 87e6854:	89 cf                	mov    %ecx,%edi
 87e6856:	56                   	push   %esi
 87e6857:	89 d6                	mov    %edx,%esi
 87e6859:	53                   	push   %ebx
 87e685a:	89 c3                	mov    %eax,%ebx
 87e685c:	83 ec 3c             	sub    $0x3c,%esp
 87e685f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e6866:	00 
 87e6867:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e686e:	08 
 87e686f:	89 14 24             	mov    %edx,(%esp)
 87e6872:	e8 29 1d f2 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e6877:	89 f8                	mov    %edi,%eax
 87e6879:	84 c0                	test   %al,%al
 87e687b:	74 0d                	je     87e688a <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x3a>
 87e687d:	80 3d 78 37 3f 09 00 	cmpb   $0x0,0x93f3778
 87e6884:	0f 85 76 01 00 00    	jne    87e6a00 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x1b0>
 87e688a:	85 db                	test   %ebx,%ebx
 87e688c:	74 2b                	je     87e68b9 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x69>
 87e688e:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e6891:	75 35                	jne    87e68c8 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x78>
 87e6893:	90                   	nop
 87e6894:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e6898:	85 db                	test   %ebx,%ebx
 87e689a:	74 1d                	je     87e68b9 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x69>
 87e689c:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e689f:	90                   	nop
 87e68a0:	0f 84 4a 01 00 00    	je     87e69f0 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x1a0>
 87e68a6:	8b 55 08             	mov    0x8(%ebp),%edx
 87e68a9:	89 14 24             	mov    %edx,(%esp)
 87e68ac:	e8 ff 7a 89 ff       	call   807e3b0 <strlen@plt>
 87e68b1:	01 c3                	add    %eax,%ebx
 87e68b3:	0f 85 2a 01 00 00    	jne    87e69e3 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x193>
 87e68b9:	83 c4 3c             	add    $0x3c,%esp
 87e68bc:	89 d8                	mov    %ebx,%eax
 87e68be:	5b                   	pop    %ebx
 87e68bf:	5e                   	pop    %esi
 87e68c0:	5f                   	pop    %edi
 87e68c1:	5d                   	pop    %ebp
 87e68c2:	c3                   	ret
 87e68c3:	90                   	nop
 87e68c4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e68c8:	8d 7d e0             	lea    -0x20(%ebp),%edi
 87e68cb:	eb 25                	jmp    87e68f2 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0xa2>
 87e68cd:	8d 76 00             	lea    0x0(%esi),%esi
 87e68d0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e68d3:	83 c3 01             	add    $0x1,%ebx
 87e68d6:	88 45 e0             	mov    %al,-0x20(%ebp)
 87e68d9:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e68dd:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e68e1:	89 34 24             	mov    %esi,(%esp)
 87e68e4:	e8 27 16 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e68e9:	85 db                	test   %ebx,%ebx
 87e68eb:	74 cc                	je     87e68b9 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x69>
 87e68ed:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e68f0:	74 a6                	je     87e6898 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x48>
 87e68f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e68f5:	8b 55 08             	mov    0x8(%ebp),%edx
 87e68f8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e68ff:	00 
 87e6900:	89 1c 24             	mov    %ebx,(%esp)
 87e6903:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e6907:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e690b:	e8 e0 f9 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e6910:	84 c0                	test   %al,%al
 87e6912:	75 84                	jne    87e6898 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x48>
 87e6914:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 87e6918:	c6 45 e0 00          	movb   $0x0,-0x20(%ebp)
 87e691c:	c6 45 e1 00          	movb   $0x0,-0x1f(%ebp)
 87e6920:	c6 45 e2 00          	movb   $0x0,-0x1e(%ebp)
 87e6924:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 87e6928:	74 36                	je     87e6960 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x110>
 87e692a:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 87e6931:	0f b6 03             	movzbl (%ebx),%eax
 87e6934:	3c 26                	cmp    $0x26,%al
 87e6936:	75 98                	jne    87e68d0 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x80>
 87e6938:	8b 55 0c             	mov    0xc(%ebp),%edx
 87e693b:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87e693e:	89 1c 24             	mov    %ebx,(%esp)
 87e6941:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e6945:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e6949:	89 54 24 0c          	mov    %edx,0xc(%esp)
 87e694d:	e8 0e fc ff ff       	call   87e6560 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding>
 87e6952:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e6955:	89 c3                	mov    %eax,%ebx
 87e6957:	eb 80                	jmp    87e68d9 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x89>
 87e6959:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e6960:	0f b6 03             	movzbl (%ebx),%eax
 87e6963:	8b 04 85 40 19 de 08 	mov    0x8de1940(,%eax,4),%eax
 87e696a:	83 f8 04             	cmp    $0x4,%eax
 87e696d:	89 c2                	mov    %eax,%edx
 87e696f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e6972:	0f 87 13 02 00 00    	ja     87e6b8b <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x33b>
 87e6978:	83 f8 01             	cmp    $0x1,%eax
 87e697b:	74 b4                	je     87e6931 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0xe1>
 87e697d:	85 c0                	test   %eax,%eax
 87e697f:	74 3f                	je     87e69c0 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x170>
 87e6981:	0f b6 0b             	movzbl (%ebx),%ecx
 87e6984:	84 c9                	test   %cl,%cl
 87e6986:	74 2b                	je     87e69b3 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x163>
 87e6988:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 87e698f:	31 c0                	xor    %eax,%eax
 87e6991:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e6998:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 87e699b:	83 c0 01             	add    $0x1,%eax
 87e699e:	88 0c 17             	mov    %cl,(%edi,%edx,1)
 87e69a1:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87e69a4:	0f b6 0c 03          	movzbl (%ebx,%eax,1),%ecx
 87e69a8:	84 c9                	test   %cl,%cl
 87e69aa:	0f 85 00 02 00 00    	jne    87e6bb0 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x360>
 87e69b0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e69b3:	01 d3                	add    %edx,%ebx
 87e69b5:	e9 1f ff ff ff       	jmp    87e68d9 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x89>
 87e69ba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e69c0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e69c3:	31 db                	xor    %ebx,%ebx
 87e69c5:	89 34 24             	mov    %esi,(%esp)
 87e69c8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e69cf:	00 
 87e69d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e69d4:	e8 37 15 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e69d9:	83 c4 3c             	add    $0x3c,%esp
 87e69dc:	89 d8                	mov    %ebx,%eax
 87e69de:	5b                   	pop    %ebx
 87e69df:	5e                   	pop    %esi
 87e69e0:	5f                   	pop    %edi
 87e69e1:	5d                   	pop    %ebp
 87e69e2:	c3                   	ret
 87e69e3:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e69e6:	0f 85 cd fe ff ff    	jne    87e68b9 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x69>
 87e69ec:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e69f0:	31 db                	xor    %ebx,%ebx
 87e69f2:	83 c4 3c             	add    $0x3c,%esp
 87e69f5:	89 d8                	mov    %ebx,%eax
 87e69f7:	5b                   	pop    %ebx
 87e69f8:	5e                   	pop    %esi
 87e69f9:	5f                   	pop    %edi
 87e69fa:	5d                   	pop    %ebp
 87e69fb:	c3                   	ret
 87e69fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e6a00:	8b 45 0c             	mov    0xc(%ebp),%eax
 87e6a03:	89 1c 24             	mov    %ebx,(%esp)
 87e6a06:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e6a0a:	e8 71 fa ff ff       	call   87e6480 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding>
 87e6a0f:	85 c0                	test   %eax,%eax
 87e6a11:	89 c3                	mov    %eax,%ebx
 87e6a13:	0f 84 a0 fe ff ff    	je     87e68b9 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x69>
 87e6a19:	80 38 00             	cmpb   $0x0,(%eax)
 87e6a1c:	0f 84 76 fe ff ff    	je     87e6898 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x48>
 87e6a22:	31 ff                	xor    %edi,%edi
 87e6a24:	89 fa                	mov    %edi,%edx
 87e6a26:	89 f7                	mov    %esi,%edi
 87e6a28:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e6a2b:	eb 0c                	jmp    87e6a39 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x1e9>
 87e6a2d:	8d 76 00             	lea    0x0(%esi),%esi
 87e6a30:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e6a33:	0f 84 5f fe ff ff    	je     87e6898 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x48>
 87e6a39:	8b 45 08             	mov    0x8(%ebp),%eax
 87e6a3c:	88 55 d0             	mov    %dl,-0x30(%ebp)
 87e6a3f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87e6a43:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e6a4a:	00 
 87e6a4b:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e6a4f:	89 1c 24             	mov    %ebx,(%esp)
 87e6a52:	e8 99 f8 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e6a57:	0f b6 55 d0          	movzbl -0x30(%ebp),%edx
 87e6a5b:	84 c0                	test   %al,%al
 87e6a5d:	0f 85 35 fe ff ff    	jne    87e6898 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x48>
 87e6a63:	0f b6 03             	movzbl (%ebx),%eax
 87e6a66:	3c 0a                	cmp    $0xa,%al
 87e6a68:	74 04                	je     87e6a6e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x21e>
 87e6a6a:	3c 0d                	cmp    $0xd,%al
 87e6a6c:	75 16                	jne    87e6a84 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x234>
 87e6a6e:	83 c3 01             	add    $0x1,%ebx
 87e6a71:	ba 01 00 00 00       	mov    $0x1,%edx
 87e6a76:	85 db                	test   %ebx,%ebx
 87e6a78:	75 b6                	jne    87e6a30 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x1e0>
 87e6a7a:	83 c4 3c             	add    $0x3c,%esp
 87e6a7d:	89 d8                	mov    %ebx,%eax
 87e6a7f:	5b                   	pop    %ebx
 87e6a80:	5e                   	pop    %esi
 87e6a81:	5f                   	pop    %edi
 87e6a82:	5d                   	pop    %ebp
 87e6a83:	c3                   	ret
 87e6a84:	0f b6 c0             	movzbl %al,%eax
 87e6a87:	89 04 24             	mov    %eax,(%esp)
 87e6a8a:	88 55 d0             	mov    %dl,-0x30(%ebp)
 87e6a8d:	e8 ee 77 89 ff       	call   807e280 <isspace@plt>
 87e6a92:	0f b6 55 d0          	movzbl -0x30(%ebp),%edx
 87e6a96:	85 c0                	test   %eax,%eax
 87e6a98:	75 d4                	jne    87e6a6e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x21e>
 87e6a9a:	84 d2                	test   %dl,%dl
 87e6a9c:	75 40                	jne    87e6ade <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x28e>
 87e6a9e:	83 fe 01             	cmp    $0x1,%esi
 87e6aa1:	c6 45 e0 00          	movb   $0x0,-0x20(%ebp)
 87e6aa5:	c6 45 e1 00          	movb   $0x0,-0x1f(%ebp)
 87e6aa9:	c6 45 e2 00          	movb   $0x0,-0x1e(%ebp)
 87e6aad:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 87e6ab1:	74 3d                	je     87e6af0 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x2a0>
 87e6ab3:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 87e6aba:	0f b6 03             	movzbl (%ebx),%eax
 87e6abd:	3c 26                	cmp    $0x26,%al
 87e6abf:	0f 84 a1 00 00 00    	je     87e6b66 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x316>
 87e6ac5:	88 45 e0             	mov    %al,-0x20(%ebp)
 87e6ac8:	83 c3 01             	add    $0x1,%ebx
 87e6acb:	0f be c0             	movsbl %al,%eax
 87e6ace:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e6ad2:	89 3c 24             	mov    %edi,(%esp)
 87e6ad5:	e8 e6 12 f2 ff       	call   8707dc0 <_ZNSs9push_backEc>
 87e6ada:	31 d2                	xor    %edx,%edx
 87e6adc:	eb 98                	jmp    87e6a76 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x226>
 87e6ade:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 87e6ae5:	00 
 87e6ae6:	89 3c 24             	mov    %edi,(%esp)
 87e6ae9:	e8 d2 12 f2 ff       	call   8707dc0 <_ZNSs9push_backEc>
 87e6aee:	eb ae                	jmp    87e6a9e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x24e>
 87e6af0:	0f b6 03             	movzbl (%ebx),%eax
 87e6af3:	8b 04 85 40 19 de 08 	mov    0x8de1940(,%eax,4),%eax
 87e6afa:	83 f8 04             	cmp    $0x4,%eax
 87e6afd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e6b00:	0f 87 85 00 00 00    	ja     87e6b8b <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x33b>
 87e6b06:	83 f8 01             	cmp    $0x1,%eax
 87e6b09:	74 af                	je     87e6aba <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x26a>
 87e6b0b:	85 c0                	test   %eax,%eax
 87e6b0d:	74 78                	je     87e6b87 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x337>
 87e6b0f:	0f b6 0b             	movzbl (%ebx),%ecx
 87e6b12:	84 c9                	test   %cl,%cl
 87e6b14:	74 22                	je     87e6b38 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x2e8>
 87e6b16:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 87e6b1d:	31 d2                	xor    %edx,%edx
 87e6b1f:	90                   	nop
 87e6b20:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87e6b23:	83 c2 01             	add    $0x1,%edx
 87e6b26:	88 4c 05 e0          	mov    %cl,-0x20(%ebp,%eax,1)
 87e6b2a:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87e6b2d:	0f b6 0c 13          	movzbl (%ebx,%edx,1),%ecx
 87e6b31:	84 c9                	test   %cl,%cl
 87e6b33:	75 28                	jne    87e6b5d <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x30d>
 87e6b35:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e6b38:	01 c3                	add    %eax,%ebx
 87e6b3a:	83 f8 01             	cmp    $0x1,%eax
 87e6b3d:	0f 84 7f 00 00 00    	je     87e6bc2 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x372>
 87e6b43:	8d 55 e0             	lea    -0x20(%ebp),%edx
 87e6b46:	89 54 24 04          	mov    %edx,0x4(%esp)
 87e6b4a:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e6b4e:	89 3c 24             	mov    %edi,(%esp)
 87e6b51:	e8 ba 13 f2 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e6b56:	31 d2                	xor    %edx,%edx
 87e6b58:	e9 19 ff ff ff       	jmp    87e6a76 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x226>
 87e6b5d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e6b60:	39 c2                	cmp    %eax,%edx
 87e6b62:	7c bc                	jl     87e6b20 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x2d0>
 87e6b64:	eb d2                	jmp    87e6b38 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x2e8>
 87e6b66:	8d 55 e4             	lea    -0x1c(%ebp),%edx
 87e6b69:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e6b6c:	89 1c 24             	mov    %ebx,(%esp)
 87e6b6f:	89 74 24 0c          	mov    %esi,0xc(%esp)
 87e6b73:	89 54 24 08          	mov    %edx,0x8(%esp)
 87e6b77:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e6b7b:	e8 e0 f9 ff ff       	call   87e6560 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding>
 87e6b80:	89 c3                	mov    %eax,%ebx
 87e6b82:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e6b85:	eb b3                	jmp    87e6b3a <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x2ea>
 87e6b87:	31 db                	xor    %ebx,%ebx
 87e6b89:	eb b8                	jmp    87e6b43 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x2f3>
 87e6b8b:	c7 44 24 0c 60 1e de 	movl   $0x8de1e60,0xc(%esp)
 87e6b92:	08 
 87e6b93:	c7 44 24 08 4d 01 00 	movl   $0x14d,0x8(%esp)
 87e6b9a:	00 
 87e6b9b:	c7 44 24 04 51 18 de 	movl   $0x8de1851,0x4(%esp)
 87e6ba2:	08 
 87e6ba3:	c7 04 24 5b 18 de 08 	movl   $0x8de185b,(%esp)
 87e6baa:	e8 a1 70 89 ff       	call   807dc50 <__assert_fail@plt>
 87e6baf:	90                   	nop
 87e6bb0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87e6bb3:	39 d0                	cmp    %edx,%eax
 87e6bb5:	0f 8c dd fd ff ff    	jl     87e6998 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x148>
 87e6bbb:	01 d3                	add    %edx,%ebx
 87e6bbd:	e9 17 fd ff ff       	jmp    87e68d9 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x89>
 87e6bc2:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
 87e6bc6:	e9 00 ff ff ff       	jmp    87e6acb <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding.clone.2+0x27b>
 87e6bcb:	90                   	nop
 87e6bcc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TiXmlBase::ReadText @ 0x87e6850

/* TiXmlBase::ReadText(char const*, std::string*, bool, char const*, bool, TiXmlEncoding) [clone
   .clone.2] */

byte * __regparm3
TiXmlBase::ReadText(byte *param_1,string *param_2,char param_3,char *param_4,int param_5)

{
  bool bVar1;
  char cVar2;
  size_t sVar3;
  int iVar4;
  byte bVar5;
  int local_30;
  byte local_24 [4];
  uint local_20 [4];
  
  std::string::assign(param_2,"",0);
  if ((param_3 == '\0') || (condenseWhiteSpace == '\0')) {
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (*param_1 != 0) {
      do {
        cVar2 = StringEqual(param_1,param_4,0,param_5);
        if (cVar2 != '\0') break;
        local_24[0] = 0;
        local_24[1] = 0;
        local_24[2] = 0;
        local_24[3] = 0;
        if (param_5 == 1) {
          local_20[0] = *(uint *)(utf8ByteTable + (uint)*param_1 * 4);
          if (4 < local_20[0]) goto LAB_087e6b8b;
          if (local_20[0] == 1) goto LAB_087e6931;
          if (local_20[0] == 0) {
            std::string::append(param_2,(char *)local_24,0);
            return (byte *)0x0;
          }
          bVar5 = *param_1;
          if (bVar5 == 0) {
LAB_087e69b3:
            param_1 = param_1 + local_20[0];
          }
          else {
            local_30 = 0;
            do {
              iVar4 = local_30 + 1;
              local_24[local_30] = bVar5;
              bVar5 = param_1[iVar4];
              if (bVar5 == 0) goto LAB_087e69b3;
              local_30 = iVar4;
            } while (iVar4 < (int)local_20[0]);
            param_1 = param_1 + local_20[0];
          }
        }
        else {
          local_20[0] = 1;
LAB_087e6931:
          bVar5 = *param_1;
          if (bVar5 == 0x26) {
            param_1 = (byte *)GetEntity(param_1,local_24,local_20,param_5);
          }
          else {
            param_1 = param_1 + 1;
            local_24[0] = bVar5;
          }
        }
        std::string::append(param_2,(char *)local_24,local_20[0]);
        if (param_1 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while (*param_1 != 0);
    }
  }
  else {
    param_1 = (byte *)SkipWhiteSpace(param_1,param_5);
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (*param_1 != 0) {
      bVar1 = false;
      do {
        cVar2 = StringEqual(param_1,param_4,0,param_5);
        if (cVar2 != '\0') break;
        bVar5 = *param_1;
        if (((bVar5 == 10) || (bVar5 == 0xd)) || (iVar4 = isspace((uint)bVar5), iVar4 != 0)) {
          param_1 = param_1 + 1;
          bVar1 = true;
        }
        else {
          if (bVar1) {
            std::string::push_back(param_2,' ');
          }
          local_24[0] = 0;
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[3] = 0;
          if (param_5 == 1) {
            local_20[0] = *(uint *)(utf8ByteTable + (uint)*param_1 * 4);
            if (4 < local_20[0]) {
LAB_087e6b8b:
              local_24[3] = 0;
              local_24[2] = 0;
              local_24[1] = 0;
              local_24[0] = 0;
                    /* WARNING: Subroutine does not return */
              __assert_fail("*length >= 0 && *length < 5","tinyxml.h",0x14d,
                            "static const char* TiXmlBase::GetChar(const char*, char*, int*, TiXmlEncoding)"
                           );
            }
            if (local_20[0] == 1) goto LAB_087e6aba;
            if (local_20[0] != 0) {
              bVar5 = *param_1;
              if (bVar5 != 0) {
                local_30 = 0;
                do {
                  iVar4 = local_30 + 1;
                  local_24[local_30] = bVar5;
                  bVar5 = param_1[iVar4];
                  if (bVar5 == 0) break;
                  local_30 = iVar4;
                } while (iVar4 < (int)local_20[0]);
              }
              param_1 = param_1 + local_20[0];
              goto LAB_087e6b3a;
            }
            param_1 = (byte *)0x0;
LAB_087e6b43:
            std::string::append(param_2,(char *)local_24,local_20[0]);
            bVar1 = false;
          }
          else {
            local_20[0] = 1;
LAB_087e6aba:
            bVar5 = *param_1;
            if (bVar5 == 0x26) {
              param_1 = (byte *)GetEntity(param_1,local_24,local_20,param_5);
LAB_087e6b3a:
              if (local_20[0] != 1) goto LAB_087e6b43;
            }
            else {
              param_1 = param_1 + 1;
              local_24[0] = bVar5;
            }
            std::string::push_back(param_2,local_24[0]);
            bVar1 = false;
          }
        }
        if (param_1 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while (*param_1 != 0);
    }
  }
  if (param_1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if (*param_1 != 0) {
    sVar3 = strlen(param_4);
    param_1 = param_1 + sVar3;
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (*param_1 != 0) {
      return param_1;
    }
  }
  return (byte *)0x0;
}

```

---

## ReadText_087e8cd0

```asm
// === 087e8cd0 TiXmlBase::ReadText  [0x087e8cd0-0x87e90ff] ===
 87e8cd0:	55                   	push   %ebp
 87e8cd1:	89 e5                	mov    %esp,%ebp
 87e8cd3:	57                   	push   %edi
 87e8cd4:	56                   	push   %esi
 87e8cd5:	53                   	push   %ebx
 87e8cd6:	83 ec 3c             	sub    $0x3c,%esp
 87e8cd9:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87e8cdc:	0f b6 75 10          	movzbl 0x10(%ebp),%esi
 87e8ce0:	0f b6 45 18          	movzbl 0x18(%ebp),%eax
 87e8ce4:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e8ce7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e8cee:	00 
 87e8cef:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 87e8cf6:	08 
 87e8cf7:	88 45 d4             	mov    %al,-0x2c(%ebp)
 87e8cfa:	89 3c 24             	mov    %edi,(%esp)
 87e8cfd:	e8 9e f8 f1 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 87e8d02:	89 f0                	mov    %esi,%eax
 87e8d04:	84 c0                	test   %al,%al
 87e8d06:	74 0d                	je     87e8d15 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x45>
 87e8d08:	80 3d 78 37 3f 09 00 	cmpb   $0x0,0x93f3778
 87e8d0f:	0f 85 5b 01 00 00    	jne    87e8e70 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x1a0>
 87e8d15:	85 db                	test   %ebx,%ebx
 87e8d17:	74 25                	je     87e8d3e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x6e>
 87e8d19:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e8d1c:	75 2a                	jne    87e8d48 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x78>
 87e8d1e:	85 db                	test   %ebx,%ebx
 87e8d20:	74 1c                	je     87e8d3e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x6e>
 87e8d22:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e8d25:	0f 84 55 01 00 00    	je     87e8e80 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x1b0>
 87e8d2b:	8b 45 14             	mov    0x14(%ebp),%eax
 87e8d2e:	89 04 24             	mov    %eax,(%esp)
 87e8d31:	e8 7a 56 89 ff       	call   807e3b0 <strlen@plt>
 87e8d36:	01 c3                	add    %eax,%ebx
 87e8d38:	0f 85 a9 03 00 00    	jne    87e90e7 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x417>
 87e8d3e:	83 c4 3c             	add    $0x3c,%esp
 87e8d41:	89 d8                	mov    %ebx,%eax
 87e8d43:	5b                   	pop    %ebx
 87e8d44:	5e                   	pop    %esi
 87e8d45:	5f                   	pop    %edi
 87e8d46:	5d                   	pop    %ebp
 87e8d47:	c3                   	ret
 87e8d48:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 87e8d4c:	8d 75 e0             	lea    -0x20(%ebp),%esi
 87e8d4f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 87e8d52:	eb 26                	jmp    87e8d7a <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0xaa>
 87e8d54:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e8d58:	88 45 e0             	mov    %al,-0x20(%ebp)
 87e8d5b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e8d5e:	83 c3 01             	add    $0x1,%ebx
 87e8d61:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e8d65:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e8d69:	89 3c 24             	mov    %edi,(%esp)
 87e8d6c:	e8 9f f1 f1 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e8d71:	85 db                	test   %ebx,%ebx
 87e8d73:	74 c9                	je     87e8d3e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x6e>
 87e8d75:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e8d78:	74 a4                	je     87e8d1e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x4e>
 87e8d7a:	8b 45 1c             	mov    0x1c(%ebp),%eax
 87e8d7d:	89 1c 24             	mov    %ebx,(%esp)
 87e8d80:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e8d84:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87e8d87:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e8d8b:	8b 45 14             	mov    0x14(%ebp),%eax
 87e8d8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e8d92:	e8 59 d5 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e8d97:	84 c0                	test   %al,%al
 87e8d99:	75 83                	jne    87e8d1e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x4e>
 87e8d9b:	83 7d 1c 01          	cmpl   $0x1,0x1c(%ebp)
 87e8d9f:	c6 45 e0 00          	movb   $0x0,-0x20(%ebp)
 87e8da3:	c6 45 e1 00          	movb   $0x0,-0x1f(%ebp)
 87e8da7:	c6 45 e2 00          	movb   $0x0,-0x1e(%ebp)
 87e8dab:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 87e8daf:	74 2f                	je     87e8de0 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x110>
 87e8db1:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 87e8db8:	0f b6 03             	movzbl (%ebx),%eax
 87e8dbb:	3c 26                	cmp    $0x26,%al
 87e8dbd:	75 99                	jne    87e8d58 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x88>
 87e8dbf:	8b 45 1c             	mov    0x1c(%ebp),%eax
 87e8dc2:	89 1c 24             	mov    %ebx,(%esp)
 87e8dc5:	89 74 24 04          	mov    %esi,0x4(%esp)
 87e8dc9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 87e8dcd:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87e8dd0:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e8dd4:	e8 87 d7 ff ff       	call   87e6560 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding>
 87e8dd9:	89 c3                	mov    %eax,%ebx
 87e8ddb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e8dde:	eb 81                	jmp    87e8d61 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x91>
 87e8de0:	0f b6 03             	movzbl (%ebx),%eax
 87e8de3:	8b 14 85 40 19 de 08 	mov    0x8de1940(,%eax,4),%edx
 87e8dea:	83 fa 04             	cmp    $0x4,%edx
 87e8ded:	89 d0                	mov    %edx,%eax
 87e8def:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87e8df2:	0f 87 c2 02 00 00    	ja     87e90ba <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x3ea>
 87e8df8:	83 fa 01             	cmp    $0x1,%edx
 87e8dfb:	74 bb                	je     87e8db8 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0xe8>
 87e8dfd:	85 d2                	test   %edx,%edx
 87e8dff:	74 47                	je     87e8e48 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x178>
 87e8e01:	0f b6 0b             	movzbl (%ebx),%ecx
 87e8e04:	31 d2                	xor    %edx,%edx
 87e8e06:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 87e8e0d:	84 c9                	test   %cl,%cl
 87e8e0f:	74 1e                	je     87e8e2f <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x15f>
 87e8e11:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e8e18:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87e8e1b:	83 c2 01             	add    $0x1,%edx
 87e8e1e:	88 0c 06             	mov    %cl,(%esi,%eax,1)
 87e8e21:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 87e8e24:	0f b6 0c 13          	movzbl (%ebx,%edx,1),%ecx
 87e8e28:	84 c9                	test   %cl,%cl
 87e8e2a:	75 0c                	jne    87e8e38 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x168>
 87e8e2c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e8e2f:	01 c3                	add    %eax,%ebx
 87e8e31:	e9 2b ff ff ff       	jmp    87e8d61 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x91>
 87e8e36:	66 90                	xchg   %ax,%ax
 87e8e38:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e8e3b:	39 c2                	cmp    %eax,%edx
 87e8e3d:	7c d9                	jl     87e8e18 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x148>
 87e8e3f:	01 c3                	add    %eax,%ebx
 87e8e41:	e9 1b ff ff ff       	jmp    87e8d61 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x91>
 87e8e46:	66 90                	xchg   %ax,%ax
 87e8e48:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e8e4b:	31 db                	xor    %ebx,%ebx
 87e8e4d:	89 3c 24             	mov    %edi,(%esp)
 87e8e50:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 87e8e57:	00 
 87e8e58:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e8e5c:	e8 af f0 f1 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e8e61:	83 c4 3c             	add    $0x3c,%esp
 87e8e64:	89 d8                	mov    %ebx,%eax
 87e8e66:	5b                   	pop    %ebx
 87e8e67:	5e                   	pop    %esi
 87e8e68:	5f                   	pop    %edi
 87e8e69:	5d                   	pop    %ebp
 87e8e6a:	c3                   	ret
 87e8e6b:	90                   	nop
 87e8e6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e8e70:	85 db                	test   %ebx,%ebx
 87e8e72:	0f 84 c6 fe ff ff    	je     87e8d3e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x6e>
 87e8e78:	0f b6 13             	movzbl (%ebx),%edx
 87e8e7b:	84 d2                	test   %dl,%dl
 87e8e7d:	75 0d                	jne    87e8e8c <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x1bc>
 87e8e7f:	90                   	nop
 87e8e80:	31 db                	xor    %ebx,%ebx
 87e8e82:	83 c4 3c             	add    $0x3c,%esp
 87e8e85:	89 d8                	mov    %ebx,%eax
 87e8e87:	5b                   	pop    %ebx
 87e8e88:	5e                   	pop    %esi
 87e8e89:	5f                   	pop    %edi
 87e8e8a:	5d                   	pop    %ebp
 87e8e8b:	c3                   	ret
 87e8e8c:	83 7d 1c 01          	cmpl   $0x1,0x1c(%ebp)
 87e8e90:	0f 84 d4 00 00 00    	je     87e8f6a <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x29a>
 87e8e96:	89 de                	mov    %ebx,%esi
 87e8e98:	89 d3                	mov    %edx,%ebx
 87e8e9a:	0f b6 c3             	movzbl %bl,%eax
 87e8e9d:	89 04 24             	mov    %eax,(%esp)
 87e8ea0:	e8 db 53 89 ff       	call   807e280 <isspace@plt>
 87e8ea5:	80 fb 0a             	cmp    $0xa,%bl
 87e8ea8:	0f 84 d4 01 00 00    	je     87e9082 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x3b2>
 87e8eae:	85 c0                	test   %eax,%eax
 87e8eb0:	0f 85 cc 01 00 00    	jne    87e9082 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x3b2>
 87e8eb6:	80 fb 0d             	cmp    $0xd,%bl
 87e8eb9:	0f 84 c3 01 00 00    	je     87e9082 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x3b2>
 87e8ebf:	89 da                	mov    %ebx,%edx
 87e8ec1:	89 f3                	mov    %esi,%ebx
 87e8ec3:	85 db                	test   %ebx,%ebx
 87e8ec5:	0f 84 73 fe ff ff    	je     87e8d3e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x6e>
 87e8ecb:	84 d2                	test   %dl,%dl
 87e8ecd:	0f 84 4b fe ff ff    	je     87e8d1e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x4e>
 87e8ed3:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 87e8ed7:	31 f6                	xor    %esi,%esi
 87e8ed9:	89 7d d0             	mov    %edi,-0x30(%ebp)
 87e8edc:	8b 7d 1c             	mov    0x1c(%ebp),%edi
 87e8edf:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 87e8ee2:	eb 0d                	jmp    87e8ef1 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x221>
 87e8ee4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e8ee8:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e8eeb:	0f 84 2d fe ff ff    	je     87e8d1e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x4e>
 87e8ef1:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87e8ef4:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87e8ef8:	89 1c 24             	mov    %ebx,(%esp)
 87e8efb:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e8eff:	8b 45 14             	mov    0x14(%ebp),%eax
 87e8f02:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e8f06:	e8 e5 d3 ff ff       	call   87e62f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding>
 87e8f0b:	84 c0                	test   %al,%al
 87e8f0d:	0f 85 0b fe ff ff    	jne    87e8d1e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x4e>
 87e8f13:	0f b6 03             	movzbl (%ebx),%eax
 87e8f16:	3c 0a                	cmp    $0xa,%al
 87e8f18:	75 72                	jne    87e8f8c <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x2bc>
 87e8f1a:	83 c3 01             	add    $0x1,%ebx
 87e8f1d:	be 01 00 00 00       	mov    $0x1,%esi
 87e8f22:	85 db                	test   %ebx,%ebx
 87e8f24:	75 c2                	jne    87e8ee8 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x218>
 87e8f26:	83 c4 3c             	add    $0x3c,%esp
 87e8f29:	89 d8                	mov    %ebx,%eax
 87e8f2b:	5b                   	pop    %ebx
 87e8f2c:	5e                   	pop    %esi
 87e8f2d:	5f                   	pop    %edi
 87e8f2e:	5d                   	pop    %ebp
 87e8f2f:	c3                   	ret
 87e8f30:	80 7b 02 bf          	cmpb   $0xbf,0x2(%ebx)
 87e8f34:	74 51                	je     87e8f87 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x2b7>
 87e8f36:	66 90                	xchg   %ax,%ax
 87e8f38:	0f b6 c2             	movzbl %dl,%eax
 87e8f3b:	89 04 24             	mov    %eax,(%esp)
 87e8f3e:	88 55 cc             	mov    %dl,-0x34(%ebp)
 87e8f41:	e8 3a 53 89 ff       	call   807e280 <isspace@plt>
 87e8f46:	0f b6 55 cc          	movzbl -0x34(%ebp),%edx
 87e8f4a:	85 c0                	test   %eax,%eax
 87e8f4c:	75 0e                	jne    87e8f5c <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x28c>
 87e8f4e:	80 fa 0a             	cmp    $0xa,%dl
 87e8f51:	74 09                	je     87e8f5c <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x28c>
 87e8f53:	80 fa 0d             	cmp    $0xd,%dl
 87e8f56:	0f 85 67 ff ff ff    	jne    87e8ec3 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x1f3>
 87e8f5c:	83 c3 01             	add    $0x1,%ebx
 87e8f5f:	0f b6 13             	movzbl (%ebx),%edx
 87e8f62:	84 d2                	test   %dl,%dl
 87e8f64:	0f 84 59 ff ff ff    	je     87e8ec3 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x1f3>
 87e8f6a:	80 3b ef             	cmpb   $0xef,(%ebx)
 87e8f6d:	75 c9                	jne    87e8f38 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x268>
 87e8f6f:	0f b6 43 01          	movzbl 0x1(%ebx),%eax
 87e8f73:	3c bb                	cmp    $0xbb,%al
 87e8f75:	74 b9                	je     87e8f30 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x260>
 87e8f77:	3c bf                	cmp    $0xbf,%al
 87e8f79:	75 bd                	jne    87e8f38 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x268>
 87e8f7b:	0f b6 43 02          	movzbl 0x2(%ebx),%eax
 87e8f7f:	3c be                	cmp    $0xbe,%al
 87e8f81:	74 04                	je     87e8f87 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x2b7>
 87e8f83:	3c bf                	cmp    $0xbf,%al
 87e8f85:	75 b1                	jne    87e8f38 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x268>
 87e8f87:	83 c3 03             	add    $0x3,%ebx
 87e8f8a:	eb d3                	jmp    87e8f5f <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x28f>
 87e8f8c:	3c 0d                	cmp    $0xd,%al
 87e8f8e:	66 90                	xchg   %ax,%ax
 87e8f90:	74 88                	je     87e8f1a <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x24a>
 87e8f92:	0f b6 c0             	movzbl %al,%eax
 87e8f95:	89 04 24             	mov    %eax,(%esp)
 87e8f98:	e8 e3 52 89 ff       	call   807e280 <isspace@plt>
 87e8f9d:	85 c0                	test   %eax,%eax
 87e8f9f:	0f 85 75 ff ff ff    	jne    87e8f1a <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x24a>
 87e8fa5:	89 f0                	mov    %esi,%eax
 87e8fa7:	84 c0                	test   %al,%al
 87e8fa9:	75 46                	jne    87e8ff1 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x321>
 87e8fab:	83 ff 01             	cmp    $0x1,%edi
 87e8fae:	c6 45 e0 00          	movb   $0x0,-0x20(%ebp)
 87e8fb2:	c6 45 e1 00          	movb   $0x0,-0x1f(%ebp)
 87e8fb6:	c6 45 e2 00          	movb   $0x0,-0x1e(%ebp)
 87e8fba:	c6 45 e3 00          	movb   $0x0,-0x1d(%ebp)
 87e8fbe:	74 46                	je     87e9006 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x336>
 87e8fc0:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
 87e8fc7:	0f b6 03             	movzbl (%ebx),%eax
 87e8fca:	3c 26                	cmp    $0x26,%al
 87e8fcc:	0f 84 c3 00 00 00    	je     87e9095 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x3c5>
 87e8fd2:	88 45 e0             	mov    %al,-0x20(%ebp)
 87e8fd5:	83 c3 01             	add    $0x1,%ebx
 87e8fd8:	0f be c0             	movsbl %al,%eax
 87e8fdb:	31 f6                	xor    %esi,%esi
 87e8fdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e8fe1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87e8fe4:	89 04 24             	mov    %eax,(%esp)
 87e8fe7:	e8 d4 ed f1 ff       	call   8707dc0 <_ZNSs9push_backEc>
 87e8fec:	e9 31 ff ff ff       	jmp    87e8f22 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x252>
 87e8ff1:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87e8ff4:	c7 44 24 04 20 00 00 	movl   $0x20,0x4(%esp)
 87e8ffb:	00 
 87e8ffc:	89 04 24             	mov    %eax,(%esp)
 87e8fff:	e8 bc ed f1 ff       	call   8707dc0 <_ZNSs9push_backEc>
 87e9004:	eb a5                	jmp    87e8fab <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x2db>
 87e9006:	0f b6 03             	movzbl (%ebx),%eax
 87e9009:	8b 04 85 40 19 de 08 	mov    0x8de1940(,%eax,4),%eax
 87e9010:	83 f8 04             	cmp    $0x4,%eax
 87e9013:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e9016:	0f 87 9e 00 00 00    	ja     87e90ba <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x3ea>
 87e901c:	83 f8 01             	cmp    $0x1,%eax
 87e901f:	74 a6                	je     87e8fc7 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x2f7>
 87e9021:	85 c0                	test   %eax,%eax
 87e9023:	0f 84 8d 00 00 00    	je     87e90b6 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x3e6>
 87e9029:	0f b6 0b             	movzbl (%ebx),%ecx
 87e902c:	31 f6                	xor    %esi,%esi
 87e902e:	31 d2                	xor    %edx,%edx
 87e9030:	84 c9                	test   %cl,%cl
 87e9032:	74 18                	je     87e904c <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x37c>
 87e9034:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e9038:	83 c2 01             	add    $0x1,%edx
 87e903b:	88 4c 35 e0          	mov    %cl,-0x20(%ebp,%esi,1)
 87e903f:	0f b6 0c 13          	movzbl (%ebx,%edx,1),%ecx
 87e9043:	89 d6                	mov    %edx,%esi
 87e9045:	84 c9                	test   %cl,%cl
 87e9047:	75 2b                	jne    87e9074 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x3a4>
 87e9049:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e904c:	01 c3                	add    %eax,%ebx
 87e904e:	83 f8 01             	cmp    $0x1,%eax
 87e9051:	0f 84 87 00 00 00    	je     87e90de <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x40e>
 87e9057:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e905b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e905e:	31 f6                	xor    %esi,%esi
 87e9060:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e9064:	8b 45 d0             	mov    -0x30(%ebp),%eax
 87e9067:	89 04 24             	mov    %eax,(%esp)
 87e906a:	e8 a1 ee f1 ff       	call   8707f10 <_ZNSs6appendEPKcj>
 87e906f:	e9 ae fe ff ff       	jmp    87e8f22 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x252>
 87e9074:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e9077:	39 c2                	cmp    %eax,%edx
 87e9079:	7d d1                	jge    87e904c <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x37c>
 87e907b:	90                   	nop
 87e907c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e9080:	eb b6                	jmp    87e9038 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x368>
 87e9082:	83 c6 01             	add    $0x1,%esi
 87e9085:	0f b6 1e             	movzbl (%esi),%ebx
 87e9088:	84 db                	test   %bl,%bl
 87e908a:	0f 84 2f fe ff ff    	je     87e8ebf <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x1ef>
 87e9090:	e9 05 fe ff ff       	jmp    87e8e9a <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x1ca>
 87e9095:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 87e9098:	89 44 24 08          	mov    %eax,0x8(%esp)
 87e909c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 87e909f:	89 1c 24             	mov    %ebx,(%esp)
 87e90a2:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 87e90a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e90aa:	e8 b1 d4 ff ff       	call   87e6560 <_ZN9TiXmlBase9GetEntityEPKcPcPi13TiXmlEncoding>
 87e90af:	89 c3                	mov    %eax,%ebx
 87e90b1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e90b4:	eb 98                	jmp    87e904e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x37e>
 87e90b6:	31 db                	xor    %ebx,%ebx
 87e90b8:	eb 9d                	jmp    87e9057 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x387>
 87e90ba:	c7 44 24 0c 60 1e de 	movl   $0x8de1e60,0xc(%esp)
 87e90c1:	08 
 87e90c2:	c7 44 24 08 4d 01 00 	movl   $0x14d,0x8(%esp)
 87e90c9:	00 
 87e90ca:	c7 44 24 04 51 18 de 	movl   $0x8de1851,0x4(%esp)
 87e90d1:	08 
 87e90d2:	c7 04 24 5b 18 de 08 	movl   $0x8de185b,(%esp)
 87e90d9:	e8 72 4b 89 ff       	call   807dc50 <__assert_fail@plt>
 87e90de:	0f b6 45 e0          	movzbl -0x20(%ebp),%eax
 87e90e2:	e9 f1 fe ff ff       	jmp    87e8fd8 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x308>
 87e90e7:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e90ea:	0f 85 4e fc ff ff    	jne    87e8d3e <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x6e>
 87e90f0:	e9 8b fd ff ff       	jmp    87e8e80 <_ZN9TiXmlBase8ReadTextEPKcPSsbS1_b13TiXmlEncoding+0x1b0>
 87e90f5:	90                   	nop
 87e90f6:	8d 76 00             	lea    0x0(%esi),%esi
 87e90f9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlBase::ReadText @ 0x87e8cd0

/* TiXmlBase::ReadText(char const*, std::string*, bool, char const*, bool, TiXmlEncoding) */

byte * TiXmlBase::ReadText(byte *param_1,string *param_2,char param_3,char *param_4,
                          undefined1 param_5,int param_6)

{
  byte bVar1;
  bool bVar2;
  char cVar3;
  size_t sVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int local_30;
  byte local_24 [4];
  uint local_20 [4];
  
  std::string::assign(param_2,"",0);
  if ((param_3 == '\0') || (condenseWhiteSpace == '\0')) {
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (*param_1 != 0) {
      do {
        cVar3 = StringEqual(param_1,param_4,param_5,param_6);
        if (cVar3 != '\0') break;
        local_24[0] = 0;
        local_24[1] = 0;
        local_24[2] = 0;
        local_24[3] = 0;
        if (param_6 == 1) {
          local_20[0] = *(uint *)(utf8ByteTable + (uint)*param_1 * 4);
          if (4 < local_20[0]) goto LAB_087e90ba;
          if (local_20[0] == 1) goto LAB_087e8db8;
          if (local_20[0] == 0) {
            std::string::append(param_2,(char *)local_24,0);
            return (byte *)0x0;
          }
          bVar5 = *param_1;
          local_30 = 0;
          if (bVar5 == 0) {
LAB_087e8e2f:
            param_1 = param_1 + local_20[0];
          }
          else {
            do {
              iVar6 = local_30 + 1;
              local_24[local_30] = bVar5;
              bVar5 = param_1[iVar6];
              if (bVar5 == 0) goto LAB_087e8e2f;
              local_30 = iVar6;
            } while (iVar6 < (int)local_20[0]);
            param_1 = param_1 + local_20[0];
          }
        }
        else {
          local_20[0] = 1;
LAB_087e8db8:
          bVar5 = *param_1;
          if (bVar5 == 0x26) {
            param_1 = (byte *)GetEntity(param_1,local_24,local_20,param_6);
          }
          else {
            param_1 = param_1 + 1;
            local_24[0] = bVar5;
          }
        }
        std::string::append(param_2,(char *)local_24,local_20[0]);
        if (param_1 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while (*param_1 != 0);
    }
  }
  else {
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    bVar5 = *param_1;
    if (bVar5 == 0) {
      return (byte *)0x0;
    }
    if (param_6 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            bVar1 = param_1[2];
joined_r0x087e8f34:
            if (bVar1 != 0xbf) goto LAB_087e8f38;
          }
          else {
            if (param_1[1] != 0xbf) goto LAB_087e8f38;
            bVar1 = param_1[2];
            if (bVar1 != 0xbe) goto joined_r0x087e8f34;
          }
          param_1 = param_1 + 3;
        }
        else {
LAB_087e8f38:
          iVar6 = isspace((uint)bVar5);
          if (((iVar6 == 0) && (bVar5 != 10)) && (bVar5 != 0xd)) break;
          param_1 = param_1 + 1;
        }
        bVar5 = *param_1;
      } while (bVar5 != 0);
    }
    else {
      do {
        iVar6 = isspace((uint)bVar5);
        if (((bVar5 != 10) && (iVar6 == 0)) && (bVar5 != 0xd)) break;
        param_1 = param_1 + 1;
        bVar5 = *param_1;
      } while (bVar5 != 0);
    }
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (bVar5 != 0) {
      bVar2 = false;
      do {
        cVar3 = StringEqual(param_1,param_4,param_5,param_6);
        if (cVar3 != '\0') break;
        bVar5 = *param_1;
        if (((bVar5 == 10) || (bVar5 == 0xd)) || (iVar6 = isspace((uint)bVar5), iVar6 != 0)) {
          param_1 = param_1 + 1;
          bVar2 = true;
        }
        else {
          if (bVar2) {
            std::string::push_back(param_2,' ');
          }
          local_24[0] = 0;
          local_24[1] = 0;
          local_24[2] = 0;
          local_24[3] = 0;
          if (param_6 == 1) {
            local_20[0] = *(uint *)(utf8ByteTable + (uint)*param_1 * 4);
            if (4 < local_20[0]) {
LAB_087e90ba:
              local_24[3] = 0;
              local_24[2] = 0;
              local_24[1] = 0;
              local_24[0] = 0;
                    /* WARNING: Subroutine does not return */
              __assert_fail("*length >= 0 && *length < 5","tinyxml.h",0x14d,
                            "static const char* TiXmlBase::GetChar(const char*, char*, int*, TiXmlEncoding)"
                           );
            }
            if (local_20[0] == 1) goto LAB_087e8fc7;
            if (local_20[0] != 0) {
              bVar5 = *param_1;
              if (bVar5 != 0) {
                iVar6 = 0;
                do {
                  iVar7 = iVar6 + 1;
                  local_24[iVar6] = bVar5;
                  bVar5 = param_1[iVar7];
                  if (bVar5 == 0) break;
                  iVar6 = iVar7;
                } while (iVar7 < (int)local_20[0]);
              }
              param_1 = param_1 + local_20[0];
              goto LAB_087e904e;
            }
            param_1 = (byte *)0x0;
LAB_087e9057:
            bVar2 = false;
            std::string::append(param_2,(char *)local_24,local_20[0]);
          }
          else {
            local_20[0] = 1;
LAB_087e8fc7:
            bVar5 = *param_1;
            if (bVar5 == 0x26) {
              param_1 = (byte *)GetEntity(param_1,local_24,local_20,param_6);
LAB_087e904e:
              if (local_20[0] != 1) goto LAB_087e9057;
            }
            else {
              param_1 = param_1 + 1;
              local_24[0] = bVar5;
            }
            bVar2 = false;
            std::string::push_back(param_2,local_24[0]);
          }
        }
        if (param_1 == (byte *)0x0) {
          return (byte *)0x0;
        }
      } while (*param_1 != 0);
    }
  }
  if (param_1 == (byte *)0x0) {
    return (byte *)0x0;
  }
  if (*param_1 != 0) {
    sVar4 = strlen(param_4);
    param_1 = param_1 + sVar4;
    if (param_1 == (byte *)0x0) {
      return (byte *)0x0;
    }
    if (*param_1 != 0) {
      return param_1;
    }
  }
  return (byte *)0x0;
}

```

---

## SkipWhiteSpace

```asm
// === 087e6480 TiXmlBase::SkipWhiteSpace  [0x087e6480-0x87e655f] ===
 87e6480:	55                   	push   %ebp
 87e6481:	89 e5                	mov    %esp,%ebp
 87e6483:	53                   	push   %ebx
 87e6484:	83 ec 24             	sub    $0x24,%esp
 87e6487:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e648a:	85 db                	test   %ebx,%ebx
 87e648c:	75 0a                	jne    87e6498 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0x18>
 87e648e:	89 d8                	mov    %ebx,%eax
 87e6490:	83 c4 24             	add    $0x24,%esp
 87e6493:	5b                   	pop    %ebx
 87e6494:	5d                   	pop    %ebp
 87e6495:	c3                   	ret
 87e6496:	66 90                	xchg   %ax,%ax
 87e6498:	0f b6 13             	movzbl (%ebx),%edx
 87e649b:	84 d2                	test   %dl,%dl
 87e649d:	0f 84 a5 00 00 00    	je     87e6548 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0xc8>
 87e64a3:	83 7d 0c 01          	cmpl   $0x1,0xc(%ebp)
 87e64a7:	74 49                	je     87e64f2 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0x72>
 87e64a9:	0f b6 c2             	movzbl %dl,%eax
 87e64ac:	89 04 24             	mov    %eax,(%esp)
 87e64af:	88 55 f4             	mov    %dl,-0xc(%ebp)
 87e64b2:	e8 c9 7d 89 ff       	call   807e280 <isspace@plt>
 87e64b7:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 87e64bb:	80 fa 0a             	cmp    $0xa,%dl
 87e64be:	74 10                	je     87e64d0 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0x50>
 87e64c0:	85 c0                	test   %eax,%eax
 87e64c2:	75 0c                	jne    87e64d0 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0x50>
 87e64c4:	80 fa 0d             	cmp    $0xd,%dl
 87e64c7:	75 c5                	jne    87e648e <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0xe>
 87e64c9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e64d0:	83 c3 01             	add    $0x1,%ebx
 87e64d3:	0f b6 13             	movzbl (%ebx),%edx
 87e64d6:	84 d2                	test   %dl,%dl
 87e64d8:	75 cf                	jne    87e64a9 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0x29>
 87e64da:	89 d8                	mov    %ebx,%eax
 87e64dc:	83 c4 24             	add    $0x24,%esp
 87e64df:	5b                   	pop    %ebx
 87e64e0:	5d                   	pop    %ebp
 87e64e1:	c3                   	ret
 87e64e2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e64e8:	83 c3 01             	add    $0x1,%ebx
 87e64eb:	0f b6 13             	movzbl (%ebx),%edx
 87e64ee:	84 d2                	test   %dl,%dl
 87e64f0:	74 9c                	je     87e648e <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0xe>
 87e64f2:	80 3b ef             	cmpb   $0xef,(%ebx)
 87e64f5:	74 29                	je     87e6520 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0xa0>
 87e64f7:	0f b6 c2             	movzbl %dl,%eax
 87e64fa:	89 04 24             	mov    %eax,(%esp)
 87e64fd:	88 55 f4             	mov    %dl,-0xc(%ebp)
 87e6500:	e8 7b 7d 89 ff       	call   807e280 <isspace@plt>
 87e6505:	0f b6 55 f4          	movzbl -0xc(%ebp),%edx
 87e6509:	85 c0                	test   %eax,%eax
 87e650b:	75 db                	jne    87e64e8 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0x68>
 87e650d:	80 fa 0a             	cmp    $0xa,%dl
 87e6510:	74 d6                	je     87e64e8 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0x68>
 87e6512:	80 fa 0d             	cmp    $0xd,%dl
 87e6515:	74 d1                	je     87e64e8 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0x68>
 87e6517:	89 d8                	mov    %ebx,%eax
 87e6519:	83 c4 24             	add    $0x24,%esp
 87e651c:	5b                   	pop    %ebx
 87e651d:	5d                   	pop    %ebp
 87e651e:	c3                   	ret
 87e651f:	90                   	nop
 87e6520:	0f b6 43 01          	movzbl 0x1(%ebx),%eax
 87e6524:	3c bb                	cmp    $0xbb,%al
 87e6526:	74 18                	je     87e6540 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0xc0>
 87e6528:	3c bf                	cmp    $0xbf,%al
 87e652a:	75 cb                	jne    87e64f7 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0x77>
 87e652c:	0f b6 43 02          	movzbl 0x2(%ebx),%eax
 87e6530:	3c be                	cmp    $0xbe,%al
 87e6532:	74 04                	je     87e6538 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0xb8>
 87e6534:	3c bf                	cmp    $0xbf,%al
 87e6536:	75 bf                	jne    87e64f7 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0x77>
 87e6538:	83 c3 03             	add    $0x3,%ebx
 87e653b:	eb ae                	jmp    87e64eb <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0x6b>
 87e653d:	8d 76 00             	lea    0x0(%esi),%esi
 87e6540:	80 7b 02 bf          	cmpb   $0xbf,0x2(%ebx)
 87e6544:	75 b1                	jne    87e64f7 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0x77>
 87e6546:	eb f0                	jmp    87e6538 <_ZN9TiXmlBase14SkipWhiteSpaceEPKc13TiXmlEncoding+0xb8>
 87e6548:	31 db                	xor    %ebx,%ebx
 87e654a:	83 c4 24             	add    $0x24,%esp
 87e654d:	89 d8                	mov    %ebx,%eax
 87e654f:	5b                   	pop    %ebx
 87e6550:	5d                   	pop    %ebp
 87e6551:	c3                   	ret
 87e6552:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e6559:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlBase::SkipWhiteSpace @ 0x87e6480

/* TiXmlBase::SkipWhiteSpace(char const*, TiXmlEncoding) */

byte * TiXmlBase::SkipWhiteSpace(byte *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  if (param_1 != (byte *)0x0) {
    bVar2 = *param_1;
    if (bVar2 == 0) {
      return (byte *)0x0;
    }
    if (param_2 == 1) {
      do {
        if (*param_1 == 0xef) {
          if (param_1[1] == 0xbb) {
            if (param_1[2] == 0xbf) goto LAB_087e6538;
            goto LAB_087e64f7;
          }
          if ((param_1[1] != 0xbf) || ((param_1[2] != 0xbe && (param_1[2] != 0xbf))))
          goto LAB_087e64f7;
LAB_087e6538:
          param_1 = param_1 + 3;
        }
        else {
LAB_087e64f7:
          iVar1 = isspace((uint)bVar2);
          if (((iVar1 == 0) && (bVar2 != 10)) && (bVar2 != 0xd)) {
            return param_1;
          }
          param_1 = param_1 + 1;
        }
        bVar2 = *param_1;
      } while (bVar2 != 0);
    }
    else {
      while (((iVar1 = isspace((uint)bVar2), bVar2 == 10 || (iVar1 != 0)) || (bVar2 == 0xd))) {
        param_1 = param_1 + 1;
        bVar2 = *param_1;
        if (bVar2 == 0) {
          return param_1;
        }
      }
    }
  }
  return param_1;
}

```

---

## StreamTo

```asm
// === 087e7080 TiXmlBase::StreamTo  [0x087e7080-0x87e713f] ===
 87e7080:	55                   	push   %ebp
 87e7081:	89 e5                	mov    %esp,%ebp
 87e7083:	57                   	push   %edi
 87e7084:	56                   	push   %esi
 87e7085:	53                   	push   %ebx
 87e7086:	83 ec 4c             	sub    $0x4c,%esp
 87e7089:	8b 7d 10             	mov    0x10(%ebp),%edi
 87e708c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e708f:	89 7d c4             	mov    %edi,-0x3c(%ebp)
 87e7092:	eb 6d                	jmp    87e7101 <_ZN9TiXmlBase8StreamToEPSiiPSs+0x81>
 87e7094:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7098:	89 1c 24             	mov    %ebx,(%esp)
 87e709b:	e8 70 ee ef ff       	call   86e5f10 <_ZNSi4peekEv>
 87e70a0:	3b 45 0c             	cmp    0xc(%ebp),%eax
 87e70a3:	89 c6                	mov    %eax,%esi
 87e70a5:	74 71                	je     87e7118 <_ZN9TiXmlBase8StreamToEPSiiPSs+0x98>
 87e70a7:	85 c0                	test   %eax,%eax
 87e70a9:	7e 63                	jle    87e710e <_ZN9TiXmlBase8StreamToEPSiiPSs+0x8e>
 87e70ab:	89 1c 24             	mov    %ebx,(%esp)
 87e70ae:	e8 3d ec ef ff       	call   86e5cf0 <_ZNSi3getEv>
 87e70b3:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87e70b6:	8b 02                	mov    (%edx),%eax
 87e70b8:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e70bb:	8d 48 f4             	lea    -0xc(%eax),%ecx
 87e70be:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 87e70c1:	8d 7a 01             	lea    0x1(%edx),%edi
 87e70c4:	3b 79 04             	cmp    0x4(%ecx),%edi
 87e70c7:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 87e70ca:	77 07                	ja     87e70d3 <_ZN9TiXmlBase8StreamToEPSiiPSs+0x53>
 87e70cc:	8b 49 08             	mov    0x8(%ecx),%ecx
 87e70cf:	85 c9                	test   %ecx,%ecx
 87e70d1:	7e 1a                	jle    87e70ed <_ZN9TiXmlBase8StreamToEPSiiPSs+0x6d>
 87e70d3:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 87e70d6:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 87e70d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87e70dd:	89 14 24             	mov    %edx,(%esp)
 87e70e0:	e8 2b 0c f2 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e70e5:	8b 4d c4             	mov    -0x3c(%ebp),%ecx
 87e70e8:	8b 01                	mov    (%ecx),%eax
 87e70ea:	8b 50 f4             	mov    -0xc(%eax),%edx
 87e70ed:	89 f1                	mov    %esi,%ecx
 87e70ef:	88 0c 10             	mov    %cl,(%eax,%edx,1)
 87e70f2:	8b 7d c4             	mov    -0x3c(%ebp),%edi
 87e70f5:	8b 17                	mov    (%edi),%edx
 87e70f7:	8d 42 f4             	lea    -0xc(%edx),%eax
 87e70fa:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 87e70ff:	75 24                	jne    87e7125 <_ZN9TiXmlBase8StreamToEPSiiPSs+0xa5>
 87e7101:	8b 03                	mov    (%ebx),%eax
 87e7103:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e7106:	8b 7c 03 14          	mov    0x14(%ebx,%eax,1),%edi
 87e710a:	85 ff                	test   %edi,%edi
 87e710c:	74 8a                	je     87e7098 <_ZN9TiXmlBase8StreamToEPSiiPSs+0x18>
 87e710e:	83 c4 4c             	add    $0x4c,%esp
 87e7111:	31 c0                	xor    %eax,%eax
 87e7113:	5b                   	pop    %ebx
 87e7114:	5e                   	pop    %esi
 87e7115:	5f                   	pop    %edi
 87e7116:	5d                   	pop    %ebp
 87e7117:	c3                   	ret
 87e7118:	83 c4 4c             	add    $0x4c,%esp
 87e711b:	b8 01 00 00 00       	mov    $0x1,%eax
 87e7120:	5b                   	pop    %ebx
 87e7121:	5e                   	pop    %esi
 87e7122:	5f                   	pop    %edi
 87e7123:	5d                   	pop    %ebp
 87e7124:	c3                   	ret
 87e7125:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 87e7128:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 87e712f:	89 4a f4             	mov    %ecx,-0xc(%edx)
 87e7132:	c6 44 08 0c 00       	movb   $0x0,0xc(%eax,%ecx,1)
 87e7137:	eb c8                	jmp    87e7101 <_ZN9TiXmlBase8StreamToEPSiiPSs+0x81>
 87e7139:	90                   	nop
 87e713a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// TiXmlBase::StreamTo @ 0x87e7080

/* TiXmlBase::StreamTo(std::istream*, int, std::string*) */

undefined4 TiXmlBase::StreamTo(istream *param_1,int param_2,string *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  while( true ) {
    if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
      return 0;
    }
    iVar3 = std::istream::peek(param_1);
    if (iVar3 == param_2) break;
    if (iVar3 < 1) {
      return 0;
    }
    std::istream::get(param_1);
    iVar4 = *(int *)param_3;
    iVar5 = *(int *)(iVar4 + -0xc);
    uVar1 = iVar5 + 1;
    if ((*(uint *)(iVar4 + -8) < uVar1) || (0 < *(int *)(iVar4 + -4))) {
      std::string::reserve(param_3,uVar1);
      iVar4 = *(int *)param_3;
      iVar5 = *(int *)(iVar4 + -0xc);
    }
    *(char *)(iVar4 + iVar5) = (char)iVar3;
    puVar2 = *(undefined1 **)param_3;
    if (puVar2 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar2 + -4) = 0;
      *(uint *)(puVar2 + -0xc) = uVar1;
      puVar2[uVar1] = 0;
    }
  }
  return 1;
}

```

---

## StreamWhiteSpace

```asm
// === 087e7140 TiXmlBase::StreamWhiteSpace  [0x087e7140-0x87e722f] ===
 87e7140:	55                   	push   %ebp
 87e7141:	89 e5                	mov    %esp,%ebp
 87e7143:	57                   	push   %edi
 87e7144:	56                   	push   %esi
 87e7145:	53                   	push   %ebx
 87e7146:	83 ec 4c             	sub    $0x4c,%esp
 87e7149:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87e714c:	8b 75 0c             	mov    0xc(%ebp),%esi
 87e714f:	90                   	nop
 87e7150:	8b 03                	mov    (%ebx),%eax
 87e7152:	8b 40 f4             	mov    -0xc(%eax),%eax
 87e7155:	8b 44 03 14          	mov    0x14(%ebx,%eax,1),%eax
 87e7159:	85 c0                	test   %eax,%eax
 87e715b:	0f 85 b7 00 00 00    	jne    87e7218 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs+0xd8>
 87e7161:	89 1c 24             	mov    %ebx,(%esp)
 87e7164:	e8 a7 ed ef ff       	call   86e5f10 <_ZNSi4peekEv>
 87e7169:	3d ff 00 00 00       	cmp    $0xff,%eax
 87e716e:	89 c7                	mov    %eax,%edi
 87e7170:	7e 0e                	jle    87e7180 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs+0x40>
 87e7172:	83 c4 4c             	add    $0x4c,%esp
 87e7175:	b8 01 00 00 00       	mov    $0x1,%eax
 87e717a:	5b                   	pop    %ebx
 87e717b:	5e                   	pop    %esi
 87e717c:	5f                   	pop    %edi
 87e717d:	5d                   	pop    %ebp
 87e717e:	c3                   	ret
 87e717f:	90                   	nop
 87e7180:	89 c2                	mov    %eax,%edx
 87e7182:	0f b6 c0             	movzbl %al,%eax
 87e7185:	89 04 24             	mov    %eax,(%esp)
 87e7188:	88 55 e0             	mov    %dl,-0x20(%ebp)
 87e718b:	e8 f0 70 89 ff       	call   807e280 <isspace@plt>
 87e7190:	89 fa                	mov    %edi,%edx
 87e7192:	85 c0                	test   %eax,%eax
 87e7194:	75 0a                	jne    87e71a0 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs+0x60>
 87e7196:	80 fa 0a             	cmp    $0xa,%dl
 87e7199:	74 05                	je     87e71a0 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs+0x60>
 87e719b:	80 fa 0d             	cmp    $0xd,%dl
 87e719e:	75 d2                	jne    87e7172 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs+0x32>
 87e71a0:	85 ff                	test   %edi,%edi
 87e71a2:	7e ce                	jle    87e7172 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs+0x32>
 87e71a4:	89 1c 24             	mov    %ebx,(%esp)
 87e71a7:	e8 44 eb ef ff       	call   86e5cf0 <_ZNSi3getEv>
 87e71ac:	8b 16                	mov    (%esi),%edx
 87e71ae:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e71b1:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 87e71b4:	8d 42 f4             	lea    -0xc(%edx),%eax
 87e71b7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 87e71ba:	8d 79 01             	lea    0x1(%ecx),%edi
 87e71bd:	3b 78 04             	cmp    0x4(%eax),%edi
 87e71c0:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 87e71c3:	76 43                	jbe    87e7208 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs+0xc8>
 87e71c5:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87e71c8:	89 34 24             	mov    %esi,(%esp)
 87e71cb:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87e71cf:	e8 3c 0b f2 ff       	call   8707d10 <_ZNSs7reserveEj>
 87e71d4:	8b 16                	mov    (%esi),%edx
 87e71d6:	8b 4a f4             	mov    -0xc(%edx),%ecx
 87e71d9:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 87e71dd:	88 04 0a             	mov    %al,(%edx,%ecx,1)
 87e71e0:	8b 0e                	mov    (%esi),%ecx
 87e71e2:	8d 51 f4             	lea    -0xc(%ecx),%edx
 87e71e5:	81 fa f0 cc 48 09    	cmp    $0x948ccf0,%edx
 87e71eb:	0f 84 5f ff ff ff    	je     87e7150 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs+0x10>
 87e71f1:	8b 7d d4             	mov    -0x2c(%ebp),%edi
 87e71f4:	c7 42 08 00 00 00 00 	movl   $0x0,0x8(%edx)
 87e71fb:	89 79 f4             	mov    %edi,-0xc(%ecx)
 87e71fe:	c6 44 3a 0c 00       	movb   $0x0,0xc(%edx,%edi,1)
 87e7203:	e9 48 ff ff ff       	jmp    87e7150 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs+0x10>
 87e7208:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 87e720b:	8b 78 08             	mov    0x8(%eax),%edi
 87e720e:	85 ff                	test   %edi,%edi
 87e7210:	7f b3                	jg     87e71c5 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs+0x85>
 87e7212:	eb c5                	jmp    87e71d9 <_ZN9TiXmlBase16StreamWhiteSpaceEPSiPSs+0x99>
 87e7214:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e7218:	83 c4 4c             	add    $0x4c,%esp
 87e721b:	31 c0                	xor    %eax,%eax
 87e721d:	5b                   	pop    %ebx
 87e721e:	5e                   	pop    %esi
 87e721f:	5f                   	pop    %edi
 87e7220:	5d                   	pop    %ebp
 87e7221:	c3                   	ret
 87e7222:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e7229:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TiXmlBase::StreamWhiteSpace @ 0x87e7140

/* TiXmlBase::StreamWhiteSpace(std::istream*, std::string*) */

undefined4 TiXmlBase::StreamWhiteSpace(istream *param_1,string *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  while( true ) {
    if (*(int *)(param_1 + *(int *)(*(int *)param_1 + -0xc) + 0x14) != 0) {
      return 0;
    }
    uVar3 = std::istream::peek(param_1);
    if (0xff < (int)uVar3) break;
    iVar4 = isspace(uVar3 & 0xff);
    if (((iVar4 == 0) && ((char)uVar3 != '\n')) && ((char)uVar3 != '\r')) {
      return 1;
    }
    if ((int)uVar3 < 1) {
      return 1;
    }
    uVar2 = std::istream::get(param_1);
    iVar4 = *(int *)param_2;
    iVar5 = *(int *)(iVar4 + -0xc);
    uVar3 = iVar5 + 1;
    if ((*(uint *)(iVar4 + -8) < uVar3) || (0 < *(int *)(iVar4 + -4))) {
      std::string::reserve(param_2,uVar3);
      iVar4 = *(int *)param_2;
      iVar5 = *(int *)(iVar4 + -0xc);
    }
    *(undefined1 *)(iVar4 + iVar5) = uVar2;
    puVar1 = *(undefined1 **)param_2;
    if (puVar1 != &DAT_0948ccfc) {
      *(undefined4 *)(puVar1 + -4) = 0;
      *(uint *)(puVar1 + -0xc) = uVar3;
      puVar1[uVar3] = 0;
    }
  }
  return 1;
}

```

---

## StringEqual

```asm
// === 087e62f0 TiXmlBase::StringEqual  [0x087e62f0-0x87e647f] ===
 87e62f0:	55                   	push   %ebp
 87e62f1:	89 e5                	mov    %esp,%ebp
 87e62f3:	57                   	push   %edi
 87e62f4:	56                   	push   %esi
 87e62f5:	53                   	push   %ebx
 87e62f6:	83 ec 2c             	sub    $0x2c,%esp
 87e62f9:	8b 7d 08             	mov    0x8(%ebp),%edi
 87e62fc:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 87e62ff:	0f b6 55 10          	movzbl 0x10(%ebp),%edx
 87e6303:	85 ff                	test   %edi,%edi
 87e6305:	0f 84 51 01 00 00    	je     87e645c <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x16c>
 87e630b:	85 db                	test   %ebx,%ebx
 87e630d:	0f 84 25 01 00 00    	je     87e6438 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x148>
 87e6313:	0f b6 07             	movzbl (%edi),%eax
 87e6316:	84 c0                	test   %al,%al
 87e6318:	0f 84 f6 00 00 00    	je     87e6414 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x124>
 87e631e:	84 d2                	test   %dl,%dl
 87e6320:	75 1e                	jne    87e6340 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x50>
 87e6322:	0f b6 13             	movzbl (%ebx),%edx
 87e6325:	84 d2                	test   %dl,%dl
 87e6327:	0f 85 b3 00 00 00    	jne    87e63e0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0xf0>
 87e632d:	b8 01 00 00 00       	mov    $0x1,%eax
 87e6332:	83 c4 2c             	add    $0x2c,%esp
 87e6335:	5b                   	pop    %ebx
 87e6336:	5e                   	pop    %esi
 87e6337:	5f                   	pop    %edi
 87e6338:	5d                   	pop    %ebp
 87e6339:	c3                   	ret
 87e633a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 87e6340:	0f b6 13             	movzbl (%ebx),%edx
 87e6343:	84 d2                	test   %dl,%dl
 87e6345:	74 e6                	je     87e632d <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x3d>
 87e6347:	83 7d 14 01          	cmpl   $0x1,0x14(%ebp)
 87e634b:	89 fe                	mov    %edi,%esi
 87e634d:	74 38                	je     87e6387 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x97>
 87e634f:	90                   	nop
 87e6350:	0f be c0             	movsbl %al,%eax
 87e6353:	89 04 24             	mov    %eax,(%esp)
 87e6356:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 87e6359:	e8 52 79 89 ff       	call   807dcb0 <tolower@plt>
 87e635e:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 87e6362:	0f be d2             	movsbl %dl,%edx
 87e6365:	89 14 24             	mov    %edx,(%esp)
 87e6368:	89 c6                	mov    %eax,%esi
 87e636a:	e8 41 79 89 ff       	call   807dcb0 <tolower@plt>
 87e636f:	39 c6                	cmp    %eax,%esi
 87e6371:	74 4d                	je     87e63c0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0xd0>
 87e6373:	80 3b 00             	cmpb   $0x0,(%ebx)
 87e6376:	0f 94 c0             	sete   %al
 87e6379:	eb b7                	jmp    87e6332 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x42>
 87e637b:	90                   	nop
 87e637c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87e6380:	0f b6 13             	movzbl (%ebx),%edx
 87e6383:	84 d2                	test   %dl,%dl
 87e6385:	74 a6                	je     87e632d <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x3d>
 87e6387:	0f be c0             	movsbl %al,%eax
 87e638a:	89 04 24             	mov    %eax,(%esp)
 87e638d:	88 55 e4             	mov    %dl,-0x1c(%ebp)
 87e6390:	e8 1b 79 89 ff       	call   807dcb0 <tolower@plt>
 87e6395:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 87e6399:	0f be d2             	movsbl %dl,%edx
 87e639c:	89 14 24             	mov    %edx,(%esp)
 87e639f:	89 c7                	mov    %eax,%edi
 87e63a1:	e8 0a 79 89 ff       	call   807dcb0 <tolower@plt>
 87e63a6:	39 c7                	cmp    %eax,%edi
 87e63a8:	75 c9                	jne    87e6373 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x83>
 87e63aa:	83 c6 01             	add    $0x1,%esi
 87e63ad:	83 c3 01             	add    $0x1,%ebx
 87e63b0:	0f b6 06             	movzbl (%esi),%eax
 87e63b3:	84 c0                	test   %al,%al
 87e63b5:	75 c9                	jne    87e6380 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x90>
 87e63b7:	eb ba                	jmp    87e6373 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x83>
 87e63b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87e63c0:	83 c7 01             	add    $0x1,%edi
 87e63c3:	83 c3 01             	add    $0x1,%ebx
 87e63c6:	0f b6 07             	movzbl (%edi),%eax
 87e63c9:	84 c0                	test   %al,%al
 87e63cb:	74 a6                	je     87e6373 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x83>
 87e63cd:	0f b6 13             	movzbl (%ebx),%edx
 87e63d0:	84 d2                	test   %dl,%dl
 87e63d2:	0f 84 55 ff ff ff    	je     87e632d <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x3d>
 87e63d8:	e9 73 ff ff ff       	jmp    87e6350 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x60>
 87e63dd:	8d 76 00             	lea    0x0(%esi),%esi
 87e63e0:	38 d0                	cmp    %dl,%al
 87e63e2:	74 0c                	je     87e63f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x100>
 87e63e4:	31 c0                	xor    %eax,%eax
 87e63e6:	66 90                	xchg   %ax,%ax
 87e63e8:	83 c4 2c             	add    $0x2c,%esp
 87e63eb:	5b                   	pop    %ebx
 87e63ec:	5e                   	pop    %esi
 87e63ed:	5f                   	pop    %edi
 87e63ee:	5d                   	pop    %ebp
 87e63ef:	c3                   	ret
 87e63f0:	83 c7 01             	add    $0x1,%edi
 87e63f3:	83 c3 01             	add    $0x1,%ebx
 87e63f6:	0f b6 17             	movzbl (%edi),%edx
 87e63f9:	84 d2                	test   %dl,%dl
 87e63fb:	0f 84 72 ff ff ff    	je     87e6373 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x83>
 87e6401:	0f b6 03             	movzbl (%ebx),%eax
 87e6404:	84 c0                	test   %al,%al
 87e6406:	0f 84 21 ff ff ff    	je     87e632d <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x3d>
 87e640c:	38 c2                	cmp    %al,%dl
 87e640e:	74 e0                	je     87e63f0 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0x100>
 87e6410:	31 c0                	xor    %eax,%eax
 87e6412:	eb d4                	jmp    87e63e8 <_ZN9TiXmlBase11StringEqualEPKcS1_b13TiXmlEncoding+0xf8>
 87e6414:	c7 44 24 0c c0 1e de 	movl   $0x8de1ec0,0xc(%esp)
 87e641b:	08 
 87e641c:	c7 44 24 08 1f 02 00 	movl   $0x21f,0x8(%esp)
 87e6423:	00 
 87e6424:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e642b:	08 
 87e642c:	c7 04 24 6d 45 d0 08 	movl   $0x8d0456d,(%esp)
 87e6433:	e8 18 78 89 ff       	call   807dc50 <__assert_fail@plt>
 87e6438:	c7 44 24 0c c0 1e de 	movl   $0x8de1ec0,0xc(%esp)
 87e643f:	08 
 87e6440:	c7 44 24 08 1c 02 00 	movl   $0x21c,0x8(%esp)
 87e6447:	00 
 87e6448:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e644f:	08 
 87e6450:	c7 04 24 4d 18 de 08 	movl   $0x8de184d,(%esp)
 87e6457:	e8 f4 77 89 ff       	call   807dc50 <__assert_fail@plt>
 87e645c:	c7 44 24 0c c0 1e de 	movl   $0x8de1ec0,0xc(%esp)
 87e6463:	08 
 87e6464:	c7 44 24 08 1b 02 00 	movl   $0x21b,0x8(%esp)
 87e646b:	00 
 87e646c:	c7 44 24 04 0f 18 de 	movl   $0x8de180f,0x4(%esp)
 87e6473:	08 
 87e6474:	c7 04 24 05 0f de 08 	movl   $0x8de0f05,(%esp)
 87e647b:	e8 d0 77 89 ff       	call   807dc50 <__assert_fail@plt>

```

```c
// TiXmlBase::StringEqual @ 0x87e62f0

/* TiXmlBase::StringEqual(char const*, char const*, bool, TiXmlEncoding) */

bool TiXmlBase::StringEqual(char *param_1,char *param_2,char param_3,int param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  
  if (param_1 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("p","tinyxmlparser.cpp",0x21b,
                  "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                 );
  }
  if (param_2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("tag","tinyxmlparser.cpp",0x21c,
                  "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                 );
  }
  cVar1 = *param_1;
  if (cVar1 == '\0') {
                    /* WARNING: Subroutine does not return */
    __assert_fail("0","tinyxmlparser.cpp",0x21f,
                  "static bool TiXmlBase::StringEqual(const char*, const char*, bool, TiXmlEncoding)"
                 );
  }
  if (param_3 == '\0') {
    if (*param_2 != '\0') {
      if (cVar1 == *param_2) {
        do {
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          if (*param_1 == '\0') {
LAB_087e6373:
            return *param_2 == '\0';
          }
          if (*param_2 == '\0') {
            return true;
          }
        } while (*param_1 == *param_2);
      }
      return false;
    }
  }
  else {
    cVar4 = *param_2;
    if (cVar4 != '\0') {
      if (param_4 == 1) {
        do {
          iVar2 = tolower((int)cVar1);
          iVar3 = tolower((int)cVar4);
          if (iVar2 != iVar3) goto LAB_087e6373;
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          cVar1 = *param_1;
          if (cVar1 == '\0') goto LAB_087e6373;
          cVar4 = *param_2;
        } while (cVar4 != '\0');
      }
      else {
        do {
          iVar2 = tolower((int)cVar1);
          iVar3 = tolower((int)cVar4);
          if (iVar2 != iVar3) goto LAB_087e6373;
          param_1 = param_1 + 1;
          param_2 = param_2 + 1;
          cVar1 = *param_1;
          if (cVar1 == '\0') goto LAB_087e6373;
          cVar4 = *param_2;
        } while (cVar4 != '\0');
      }
    }
  }
  return true;
}

```

