# CNChecksumSha384

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## CNChecksumSha384

```asm
// === 08098a9c CNChecksumSha384::CNChecksumSha384  [0x08098a9c-0x8098aff] ===
 8098a9c:	55                   	push   %ebp
 8098a9d:	89 e5                	mov    %esp,%ebp
 8098a9f:	56                   	push   %esi
 8098aa0:	53                   	push   %ebx
 8098aa1:	83 ec 10             	sub    $0x10,%esp
 8098aa4:	8b 45 08             	mov    0x8(%ebp),%eax
 8098aa7:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8098aae:	00 
 8098aaf:	89 04 24             	mov    %eax,(%esp)
 8098ab2:	e8 b9 53 00 00       	call   809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>
 8098ab7:	8b 45 08             	mov    0x8(%ebp),%eax
 8098aba:	c7 00 c8 35 b1 08    	movl   $0x8b135c8,(%eax)
 8098ac0:	8b 45 08             	mov    0x8(%ebp),%eax
 8098ac3:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8098aca:	c7 04 24 d0 00 00 00 	movl   $0xd0,(%esp)
 8098ad1:	e8 7a b9 68 00       	call   8724450 <_Znwj>
 8098ad6:	89 c2                	mov    %eax,%edx
 8098ad8:	8b 45 08             	mov    0x8(%ebp),%eax
 8098adb:	89 50 08             	mov    %edx,0x8(%eax)
 8098ade:	83 c4 10             	add    $0x10,%esp
 8098ae1:	5b                   	pop    %ebx
 8098ae2:	5e                   	pop    %esi
 8098ae3:	5d                   	pop    %ebp
 8098ae4:	c3                   	ret
 8098ae5:	89 d3                	mov    %edx,%ebx
 8098ae7:	89 c6                	mov    %eax,%esi
 8098ae9:	8b 45 08             	mov    0x8(%ebp),%eax
 8098aec:	89 04 24             	mov    %eax,(%esp)
 8098aef:	e8 94 53 00 00       	call   809de88 <_ZN9IChecksumD1Ev>
 8098af4:	89 f0                	mov    %esi,%eax
 8098af6:	89 da                	mov    %ebx,%edx
 8098af8:	89 04 24             	mov    %eax,(%esp)
 8098afb:	e8 50 ac a4 00       	call   8ae3750 <_Unwind_Resume>

```

```c
// CNChecksumSha384::CNChecksumSha384 @ 0x8098a9c

/* CNChecksumSha384::CNChecksumSha384() */

void __thiscall CNChecksumSha384::CNChecksumSha384(CNChecksumSha384 *this)

{
  void *pvVar1;
  
  IChecksum::IChecksum((IChecksum *)this,2);
  *(undefined ***)this = &PTR__CNChecksumSha384_08b135c8;
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 08098ad1 to 08098ad5 has its CatchHandler @ 08098ae5 */
  pvVar1 = operator_new(0xd0);
  *(void **)(this + 8) = pvVar1;
  return;
}

```

---

## CNChecksumSha384_08098b70

```asm
// === 08098b70 CNChecksumSha384::CNChecksumSha384  [0x08098b70-0x8098b93] ===
 8098b70:	55                   	push   %ebp
 8098b71:	89 e5                	mov    %esp,%ebp
 8098b73:	83 ec 18             	sub    $0x18,%esp
 8098b76:	8b 45 08             	mov    0x8(%ebp),%eax
 8098b79:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8098b80:	00 
 8098b81:	89 04 24             	mov    %eax,(%esp)
 8098b84:	e8 e7 52 00 00       	call   809de70 <_ZN9IChecksumC1E20CRYPTO_CHECKSUM_TYPE>
 8098b89:	8b 45 08             	mov    0x8(%ebp),%eax
 8098b8c:	c7 00 c8 35 b1 08    	movl   $0x8b135c8,(%eax)
 8098b92:	c9                   	leave
 8098b93:	c3                   	ret

```

```c
// CNChecksumSha384::CNChecksumSha384 @ 0x8098b70

/* CNChecksumSha384::CNChecksumSha384(CNChecksumSha384 const&) */

void __thiscall CNChecksumSha384::CNChecksumSha384(CNChecksumSha384 *this,CNChecksumSha384 *param_1)

{
  IChecksum::IChecksum((IChecksum *)this,2);
  *(undefined ***)this = &PTR__CNChecksumSha384_08b135c8;
  return;
}

```

---

## ChecksumFinish

```asm
// === 08098e20 CNChecksumSha384::ChecksumFinish  [0x08098e20-0x8098e75] ===
 8098e20:	55                   	push   %ebp
 8098e21:	89 e5                	mov    %esp,%ebp
 8098e23:	83 ec 18             	sub    $0x18,%esp
 8098e26:	8b 45 08             	mov    0x8(%ebp),%eax
 8098e29:	8b 40 08             	mov    0x8(%eax),%eax
 8098e2c:	85 c0                	test   %eax,%eax
 8098e2e:	75 07                	jne    8098e37 <_ZN16CNChecksumSha38414ChecksumFinishEPhi+0x17>
 8098e30:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8098e35:	eb 3d                	jmp    8098e74 <_ZN16CNChecksumSha38414ChecksumFinishEPhi+0x54>
 8098e37:	8b 45 08             	mov    0x8(%ebp),%eax
 8098e3a:	8b 00                	mov    (%eax),%eax
 8098e3c:	83 c0 20             	add    $0x20,%eax
 8098e3f:	8b 10                	mov    (%eax),%edx
 8098e41:	8b 45 08             	mov    0x8(%ebp),%eax
 8098e44:	89 04 24             	mov    %eax,(%esp)
 8098e47:	ff d2                	call   *%edx
 8098e49:	3b 45 10             	cmp    0x10(%ebp),%eax
 8098e4c:	0f 9f c0             	setg   %al
 8098e4f:	84 c0                	test   %al,%al
 8098e51:	74 07                	je     8098e5a <_ZN16CNChecksumSha38414ChecksumFinishEPhi+0x3a>
 8098e53:	b8 01 00 00 70       	mov    $0x70000001,%eax
 8098e58:	eb 1a                	jmp    8098e74 <_ZN16CNChecksumSha38414ChecksumFinishEPhi+0x54>
 8098e5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8098e5d:	8b 40 08             	mov    0x8(%eax),%eax
 8098e60:	8b 55 0c             	mov    0xc(%ebp),%edx
 8098e63:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098e67:	89 04 24             	mov    %eax,(%esp)
 8098e6a:	e8 bf 77 02 00       	call   80c062e <_Z12SHA384_FinalP15SHA384_ALG_INFOPh>
 8098e6f:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8098e74:	c9                   	leave
 8098e75:	c3                   	ret

```

```c
// CNChecksumSha384::ChecksumFinish @ 0x8098e20

/* CNChecksumSha384::ChecksumFinish(unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha384::ChecksumFinish(CNChecksumSha384 *this,uchar *param_1,int param_2)

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
      SHA384_Final(*(SHA384_ALG_INFO **)(this + 8),param_1);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}

```

---

## ChecksumStart

```asm
// === 08098dba CNChecksumSha384::ChecksumStart  [0x08098dba-0x8098de5] ===
 8098dba:	55                   	push   %ebp
 8098dbb:	89 e5                	mov    %esp,%ebp
 8098dbd:	83 ec 18             	sub    $0x18,%esp
 8098dc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8098dc3:	8b 40 08             	mov    0x8(%eax),%eax
 8098dc6:	85 c0                	test   %eax,%eax
 8098dc8:	75 07                	jne    8098dd1 <_ZN16CNChecksumSha38413ChecksumStartEv+0x17>
 8098dca:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8098dcf:	eb 13                	jmp    8098de4 <_ZN16CNChecksumSha38413ChecksumStartEv+0x2a>
 8098dd1:	8b 45 08             	mov    0x8(%ebp),%eax
 8098dd4:	8b 40 08             	mov    0x8(%eax),%eax
 8098dd7:	89 04 24             	mov    %eax,(%esp)
 8098dda:	e8 c2 75 02 00       	call   80c03a1 <_Z11SHA384_InitP15SHA384_ALG_INFO>
 8098ddf:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8098de4:	c9                   	leave
 8098de5:	c3                   	ret

```

```c
// CNChecksumSha384::ChecksumStart @ 0x8098dba

/* CNChecksumSha384::ChecksumStart() */

undefined4 __thiscall CNChecksumSha384::ChecksumStart(CNChecksumSha384 *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    SHA384_Init(*(SHA384_ALG_INFO **)(this + 8));
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## ChecksumUpdate

```asm
// === 08098de6 CNChecksumSha384::ChecksumUpdate  [0x08098de6-0x8098e1f] ===
 8098de6:	55                   	push   %ebp
 8098de7:	89 e5                	mov    %esp,%ebp
 8098de9:	83 ec 18             	sub    $0x18,%esp
 8098dec:	8b 45 08             	mov    0x8(%ebp),%eax
 8098def:	8b 40 08             	mov    0x8(%eax),%eax
 8098df2:	85 c0                	test   %eax,%eax
 8098df4:	75 07                	jne    8098dfd <_ZN16CNChecksumSha38414ChecksumUpdateEPKhi+0x17>
 8098df6:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8098dfb:	eb 21                	jmp    8098e1e <_ZN16CNChecksumSha38414ChecksumUpdateEPKhi+0x38>
 8098dfd:	8b 55 10             	mov    0x10(%ebp),%edx
 8098e00:	8b 45 08             	mov    0x8(%ebp),%eax
 8098e03:	8b 40 08             	mov    0x8(%eax),%eax
 8098e06:	89 54 24 08          	mov    %edx,0x8(%esp)
 8098e0a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8098e0d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098e11:	89 04 24             	mov    %eax,(%esp)
 8098e14:	e8 50 76 02 00       	call   80c0469 <_Z13SHA384_UpdateP15SHA384_ALG_INFOPhm>
 8098e19:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8098e1e:	c9                   	leave
 8098e1f:	c3                   	ret

```

```c
// CNChecksumSha384::ChecksumUpdate @ 0x8098de6

/* CNChecksumSha384::ChecksumUpdate(unsigned char const*, int) */

undefined4 __thiscall
CNChecksumSha384::ChecksumUpdate(CNChecksumSha384 *this,uchar *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) == 0) {
    uVar1 = 0x70000000;
  }
  else {
    SHA384_Update(*(SHA384_ALG_INFO **)(this + 8),param_1,param_2);
    uVar1 = 0x6fffffff;
  }
  return uVar1;
}

```

---

## GetChecksumSize

```asm
// === 08098e76 CNChecksumSha384::GetChecksumSize  [0x08098e76-0x8098e7f] ===
 8098e76:	55                   	push   %ebp
 8098e77:	89 e5                	mov    %esp,%ebp
 8098e79:	b8 30 00 00 00       	mov    $0x30,%eax
 8098e7e:	5d                   	pop    %ebp
 8098e7f:	c3                   	ret

```

```c
// CNChecksumSha384::GetChecksumSize @ 0x8098e76

/* CNChecksumSha384::GetChecksumSize() const */

undefined4 CNChecksumSha384::GetChecksumSize(void)

{
  return 0x30;
}

```

---

## Initialize

```asm
// === 08098b9c CNChecksumSha384::Initialize  [0x08098b9c-0x8098ba5] ===
 8098b9c:	55                   	push   %ebp
 8098b9d:	89 e5                	mov    %esp,%ebp
 8098b9f:	b8 17 00 00 70       	mov    $0x70000017,%eax
 8098ba4:	5d                   	pop    %ebp
 8098ba5:	c3                   	ret

```

```c
// CNChecksumSha384::Initialize @ 0x8098b9c

/* CNChecksumSha384::Initialize(unsigned char const*, int) */

undefined4 CNChecksumSha384::Initialize(uchar *param_1,int param_2)

{
  return 0x70000017;
}

```

---

## MakeChecksumFromFile

```asm
// === 08098c34 CNChecksumSha384::MakeChecksumFromFile  [0x08098c34-0x8098db9] ===
 8098c34:	55                   	push   %ebp
 8098c35:	89 e5                	mov    %esp,%ebp
 8098c37:	81 ec 28 04 00 00    	sub    $0x428,%esp
 8098c3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8098c40:	8b 40 08             	mov    0x8(%eax),%eax
 8098c43:	85 c0                	test   %eax,%eax
 8098c45:	75 0a                	jne    8098c51 <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0x1d>
 8098c47:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8098c4c:	e9 66 01 00 00       	jmp    8098db7 <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0x183>
 8098c51:	8b 45 08             	mov    0x8(%ebp),%eax
 8098c54:	8b 00                	mov    (%eax),%eax
 8098c56:	83 c0 20             	add    $0x20,%eax
 8098c59:	8b 10                	mov    (%eax),%edx
 8098c5b:	8b 45 08             	mov    0x8(%ebp),%eax
 8098c5e:	89 04 24             	mov    %eax,(%esp)
 8098c61:	ff d2                	call   *%edx
 8098c63:	3b 45 14             	cmp    0x14(%ebp),%eax
 8098c66:	0f 9f c0             	setg   %al
 8098c69:	84 c0                	test   %al,%al
 8098c6b:	74 0a                	je     8098c77 <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0x43>
 8098c6d:	b8 01 00 00 70       	mov    $0x70000001,%eax
 8098c72:	e9 40 01 00 00       	jmp    8098db7 <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0x183>
 8098c77:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8098c7b:	75 0a                	jne    8098c87 <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0x53>
 8098c7d:	b8 03 00 00 70       	mov    $0x70000003,%eax
 8098c82:	e9 30 01 00 00       	jmp    8098db7 <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0x183>
 8098c87:	8b 45 08             	mov    0x8(%ebp),%eax
 8098c8a:	8b 40 08             	mov    0x8(%eax),%eax
 8098c8d:	89 04 24             	mov    %eax,(%esp)
 8098c90:	e8 0c 77 02 00       	call   80c03a1 <_Z11SHA384_InitP15SHA384_ALG_INFO>
 8098c95:	c7 44 24 04 ab 35 b1 	movl   $0x8b135ab,0x4(%esp)
 8098c9c:	08 
 8098c9d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8098ca0:	89 04 24             	mov    %eax,(%esp)
 8098ca3:	e8 c8 5a fe ff       	call   807e770 <fopen@plt>
 8098ca8:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8098cab:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8098caf:	75 0a                	jne    8098cbb <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0x87>
 8098cb1:	b8 02 00 00 70       	mov    $0x70000002,%eax
 8098cb6:	e9 fc 00 00 00       	jmp    8098db7 <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0x183>
 8098cbb:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8098cc2:	00 
 8098cc3:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8098cca:	00 
 8098ccb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8098cce:	89 04 24             	mov    %eax,(%esp)
 8098cd1:	e8 da 53 fe ff       	call   807e0b0 <fseek@plt>
 8098cd6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8098cd9:	89 04 24             	mov    %eax,(%esp)
 8098cdc:	e8 ef 4c fe ff       	call   807d9d0 <ftell@plt>
 8098ce1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8098ce4:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8098ce8:	79 15                	jns    8098cff <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0xcb>
 8098cea:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8098ced:	89 04 24             	mov    %eax,(%esp)
 8098cf0:	e8 ab 51 fe ff       	call   807dea0 <fclose@plt>
 8098cf5:	b8 03 00 00 70       	mov    $0x70000003,%eax
 8098cfa:	e9 b8 00 00 00       	jmp    8098db7 <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0x183>
 8098cff:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8098d06:	00 
 8098d07:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8098d0e:	00 
 8098d0f:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8098d12:	89 04 24             	mov    %eax,(%esp)
 8098d15:	e8 96 53 fe ff       	call   807e0b0 <fseek@plt>
 8098d1a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8098d21:	eb 62                	jmp    8098d85 <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0x151>
 8098d23:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8098d26:	2b 45 f0             	sub    -0x10(%ebp),%eax
 8098d29:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8098d2c:	81 7d f4 00 04 00 00 	cmpl   $0x400,-0xc(%ebp)
 8098d33:	76 07                	jbe    8098d3c <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0x108>
 8098d35:	c7 45 f4 00 04 00 00 	movl   $0x400,-0xc(%ebp)
 8098d3c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8098d3f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8098d43:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8098d4a:	00 
 8098d4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8098d4e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8098d52:	8d 85 e8 fb ff ff    	lea    -0x418(%ebp),%eax
 8098d58:	89 04 24             	mov    %eax,(%esp)
 8098d5b:	e8 f0 4f fe ff       	call   807dd50 <fread@plt>
 8098d60:	8b 45 08             	mov    0x8(%ebp),%eax
 8098d63:	8b 40 08             	mov    0x8(%eax),%eax
 8098d66:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8098d69:	89 54 24 08          	mov    %edx,0x8(%esp)
 8098d6d:	8d 95 e8 fb ff ff    	lea    -0x418(%ebp),%edx
 8098d73:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098d77:	89 04 24             	mov    %eax,(%esp)
 8098d7a:	e8 ea 76 02 00       	call   80c0469 <_Z13SHA384_UpdateP15SHA384_ALG_INFOPhm>
 8098d7f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8098d82:	01 45 f0             	add    %eax,-0x10(%ebp)
 8098d85:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8098d88:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8098d8b:	0f 97 c0             	seta   %al
 8098d8e:	84 c0                	test   %al,%al
 8098d90:	75 91                	jne    8098d23 <_ZN16CNChecksumSha38420MakeChecksumFromFileEPKcPhi+0xef>
 8098d92:	8b 45 08             	mov    0x8(%ebp),%eax
 8098d95:	8b 40 08             	mov    0x8(%eax),%eax
 8098d98:	8b 55 10             	mov    0x10(%ebp),%edx
 8098d9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098d9f:	89 04 24             	mov    %eax,(%esp)
 8098da2:	e8 87 78 02 00       	call   80c062e <_Z12SHA384_FinalP15SHA384_ALG_INFOPh>
 8098da7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8098daa:	89 04 24             	mov    %eax,(%esp)
 8098dad:	e8 ee 50 fe ff       	call   807dea0 <fclose@plt>
 8098db2:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8098db7:	c9                   	leave
 8098db8:	c3                   	ret
 8098db9:	90                   	nop

```

```c
// CNChecksumSha384::MakeChecksumFromFile @ 0x8098c34

/* CNChecksumSha384::MakeChecksumFromFile(char const*, unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha384::MakeChecksumFromFile
          (CNChecksumSha384 *this,char *param_1,uchar *param_2,int param_3)

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
      SHA384_Init(*(SHA384_ALG_INFO **)(this + 8));
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
            SHA384_Update(*(SHA384_ALG_INFO **)(this + 8),local_41c,local_10);
          }
          SHA384_Final(*(SHA384_ALG_INFO **)(this + 8),param_2);
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
// === 08098ba6 CNChecksumSha384::MakeChecksumFromMemory  [0x08098ba6-0x8098c33] ===
 8098ba6:	55                   	push   %ebp
 8098ba7:	89 e5                	mov    %esp,%ebp
 8098ba9:	83 ec 18             	sub    $0x18,%esp
 8098bac:	8b 45 08             	mov    0x8(%ebp),%eax
 8098baf:	8b 40 08             	mov    0x8(%eax),%eax
 8098bb2:	85 c0                	test   %eax,%eax
 8098bb4:	75 07                	jne    8098bbd <_ZN16CNChecksumSha38422MakeChecksumFromMemoryEPKhiPhi+0x17>
 8098bb6:	b8 00 00 00 70       	mov    $0x70000000,%eax
 8098bbb:	eb 74                	jmp    8098c31 <_ZN16CNChecksumSha38422MakeChecksumFromMemoryEPKhiPhi+0x8b>
 8098bbd:	8b 45 08             	mov    0x8(%ebp),%eax
 8098bc0:	8b 00                	mov    (%eax),%eax
 8098bc2:	83 c0 20             	add    $0x20,%eax
 8098bc5:	8b 10                	mov    (%eax),%edx
 8098bc7:	8b 45 08             	mov    0x8(%ebp),%eax
 8098bca:	89 04 24             	mov    %eax,(%esp)
 8098bcd:	ff d2                	call   *%edx
 8098bcf:	3b 45 18             	cmp    0x18(%ebp),%eax
 8098bd2:	0f 9f c0             	setg   %al
 8098bd5:	84 c0                	test   %al,%al
 8098bd7:	74 07                	je     8098be0 <_ZN16CNChecksumSha38422MakeChecksumFromMemoryEPKhiPhi+0x3a>
 8098bd9:	b8 01 00 00 70       	mov    $0x70000001,%eax
 8098bde:	eb 51                	jmp    8098c31 <_ZN16CNChecksumSha38422MakeChecksumFromMemoryEPKhiPhi+0x8b>
 8098be0:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8098be4:	7f 07                	jg     8098bed <_ZN16CNChecksumSha38422MakeChecksumFromMemoryEPKhiPhi+0x47>
 8098be6:	b8 05 00 00 70       	mov    $0x70000005,%eax
 8098beb:	eb 44                	jmp    8098c31 <_ZN16CNChecksumSha38422MakeChecksumFromMemoryEPKhiPhi+0x8b>
 8098bed:	8b 45 08             	mov    0x8(%ebp),%eax
 8098bf0:	8b 40 08             	mov    0x8(%eax),%eax
 8098bf3:	89 04 24             	mov    %eax,(%esp)
 8098bf6:	e8 a6 77 02 00       	call   80c03a1 <_Z11SHA384_InitP15SHA384_ALG_INFO>
 8098bfb:	8b 55 10             	mov    0x10(%ebp),%edx
 8098bfe:	8b 45 08             	mov    0x8(%ebp),%eax
 8098c01:	8b 40 08             	mov    0x8(%eax),%eax
 8098c04:	89 54 24 08          	mov    %edx,0x8(%esp)
 8098c08:	8b 55 0c             	mov    0xc(%ebp),%edx
 8098c0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098c0f:	89 04 24             	mov    %eax,(%esp)
 8098c12:	e8 52 78 02 00       	call   80c0469 <_Z13SHA384_UpdateP15SHA384_ALG_INFOPhm>
 8098c17:	8b 45 08             	mov    0x8(%ebp),%eax
 8098c1a:	8b 40 08             	mov    0x8(%eax),%eax
 8098c1d:	8b 55 14             	mov    0x14(%ebp),%edx
 8098c20:	89 54 24 04          	mov    %edx,0x4(%esp)
 8098c24:	89 04 24             	mov    %eax,(%esp)
 8098c27:	e8 02 7a 02 00       	call   80c062e <_Z12SHA384_FinalP15SHA384_ALG_INFOPh>
 8098c2c:	b8 ff ff ff 6f       	mov    $0x6fffffff,%eax
 8098c31:	c9                   	leave
 8098c32:	c3                   	ret
 8098c33:	90                   	nop

```

```c
// CNChecksumSha384::MakeChecksumFromMemory @ 0x8098ba6

/* CNChecksumSha384::MakeChecksumFromMemory(unsigned char const*, int, unsigned char*, int) */

undefined4 __thiscall
CNChecksumSha384::MakeChecksumFromMemory
          (CNChecksumSha384 *this,uchar *param_1,int param_2,uchar *param_3,int param_4)

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
      SHA384_Init(*(SHA384_ALG_INFO **)(this + 8));
      SHA384_Update(*(SHA384_ALG_INFO **)(this + 8),param_1,param_2);
      SHA384_Final(*(SHA384_ALG_INFO **)(this + 8),param_3);
      uVar1 = 0x6fffffff;
    }
  }
  return uVar1;
}

```

---

## operator=

```asm
// === 08098b94 CNChecksumSha384::operator=  [0x08098b94-0x8098b9b] ===
 8098b94:	55                   	push   %ebp
 8098b95:	89 e5                	mov    %esp,%ebp
 8098b97:	8b 45 08             	mov    0x8(%ebp),%eax
 8098b9a:	5d                   	pop    %ebp
 8098b9b:	c3                   	ret

```

```c
// CNChecksumSha384::operator= @ 0x8098b94

/* CNChecksumSha384::TEMPNAMEPLACEHOLDERVALUE(CNChecksumSha384 const&) */

CNChecksumSha384 * __thiscall
CNChecksumSha384::operator=(CNChecksumSha384 *this,CNChecksumSha384 *param_1)

{
  return this;
}

```

---

## ~CNChecksumSha384

```asm
// === 08098b00 CNChecksumSha384::~CNChecksumSha384  [0x08098b00-0x8098b51] ===
 8098b00:	55                   	push   %ebp
 8098b01:	89 e5                	mov    %esp,%ebp
 8098b03:	83 ec 18             	sub    $0x18,%esp
 8098b06:	8b 45 08             	mov    0x8(%ebp),%eax
 8098b09:	c7 00 c8 35 b1 08    	movl   $0x8b135c8,(%eax)
 8098b0f:	8b 45 08             	mov    0x8(%ebp),%eax
 8098b12:	8b 40 08             	mov    0x8(%eax),%eax
 8098b15:	85 c0                	test   %eax,%eax
 8098b17:	74 18                	je     8098b31 <_ZN16CNChecksumSha384D1Ev+0x31>
 8098b19:	8b 45 08             	mov    0x8(%ebp),%eax
 8098b1c:	8b 40 08             	mov    0x8(%eax),%eax
 8098b1f:	89 04 24             	mov    %eax,(%esp)
 8098b22:	e8 c9 b9 68 00       	call   87244f0 <_ZdlPv>
 8098b27:	8b 45 08             	mov    0x8(%ebp),%eax
 8098b2a:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8098b31:	8b 45 08             	mov    0x8(%ebp),%eax
 8098b34:	89 04 24             	mov    %eax,(%esp)
 8098b37:	e8 4c 53 00 00       	call   809de88 <_ZN9IChecksumD1Ev>
 8098b3c:	b8 00 00 00 00       	mov    $0x0,%eax
 8098b41:	84 c0                	test   %al,%al
 8098b43:	74 0b                	je     8098b50 <_ZN16CNChecksumSha384D1Ev+0x50>
 8098b45:	8b 45 08             	mov    0x8(%ebp),%eax
 8098b48:	89 04 24             	mov    %eax,(%esp)
 8098b4b:	e8 a0 b9 68 00       	call   87244f0 <_ZdlPv>
 8098b50:	c9                   	leave
 8098b51:	c3                   	ret

```

```c
// CNChecksumSha384::~CNChecksumSha384 @ 0x8098b00

/* WARNING: Removing unreachable block (ram,0x08098b45) */
/* CNChecksumSha384::~CNChecksumSha384() */

void __thiscall CNChecksumSha384::~CNChecksumSha384(CNChecksumSha384 *this)

{
  *(undefined ***)this = &PTR__CNChecksumSha384_08b135c8;
  if (*(int *)(this + 8) != 0) {
    operator_delete(*(void **)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  IChecksum::~IChecksum((IChecksum *)this);
  return;
}

```

---

## ~CNChecksumSha384_08098b52

```asm
// === 08098b52 CNChecksumSha384::~CNChecksumSha384  [0x08098b52-0x8098b6f] ===
 8098b52:	55                   	push   %ebp
 8098b53:	89 e5                	mov    %esp,%ebp
 8098b55:	83 ec 18             	sub    $0x18,%esp
 8098b58:	8b 45 08             	mov    0x8(%ebp),%eax
 8098b5b:	89 04 24             	mov    %eax,(%esp)
 8098b5e:	e8 9d ff ff ff       	call   8098b00 <_ZN16CNChecksumSha384D1Ev>
 8098b63:	8b 45 08             	mov    0x8(%ebp),%eax
 8098b66:	89 04 24             	mov    %eax,(%esp)
 8098b69:	e8 82 b9 68 00       	call   87244f0 <_ZdlPv>
 8098b6e:	c9                   	leave
 8098b6f:	c3                   	ret

```

```c
// CNChecksumSha384::~CNChecksumSha384 @ 0x8098b52

/* CNChecksumSha384::~CNChecksumSha384() */

void __thiscall CNChecksumSha384::~CNChecksumSha384(CNChecksumSha384 *this)

{
  ~CNChecksumSha384(this);
  operator_delete(this);
  return;
}

```

