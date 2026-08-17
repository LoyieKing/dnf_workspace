# TaoCrypt__PKCS12_Decoder

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## Decode

```asm
// === 08753b50 TaoCrypt::PKCS12_Decoder::Decode  [0x08753b50-0x8753bcf] ===
 8753b50:	55                   	push   %ebp
 8753b51:	89 e5                	mov    %esp,%ebp
 8753b53:	83 ec 18             	sub    $0x18,%esp
 8753b56:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8753b59:	8b 75 08             	mov    0x8(%ebp),%esi
 8753b5c:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8753b5f:	e8 94 f2 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753b64:	81 c3 34 90 c1 00    	add    $0xc19034,%ebx
 8753b6a:	8b 06                	mov    (%esi),%eax
 8753b6c:	89 34 24             	mov    %esi,(%esp)
 8753b6f:	ff 50 08             	call   *0x8(%eax)
 8753b72:	8b 46 04             	mov    0x4(%esi),%eax
 8753b75:	8b 40 10             	mov    0x10(%eax),%eax
 8753b78:	85 c0                	test   %eax,%eax
 8753b7a:	74 0c                	je     8753b88 <_ZN8TaoCrypt14PKCS12_Decoder6DecodeEv+0x38>
 8753b7c:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8753b7f:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8753b82:	89 ec                	mov    %ebp,%esp
 8753b84:	5d                   	pop    %ebp
 8753b85:	c3                   	ret
 8753b86:	66 90                	xchg   %ax,%ax
 8753b88:	89 34 24             	mov    %esi,(%esp)
 8753b8b:	e8 00 fc ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 8753b90:	8b 46 04             	mov    0x4(%esi),%eax
 8753b93:	8b 50 0c             	mov    0xc(%eax),%edx
 8753b96:	8d 4a 01             	lea    0x1(%edx),%ecx
 8753b99:	89 48 0c             	mov    %ecx,0xc(%eax)
 8753b9c:	8b 48 04             	mov    0x4(%eax),%ecx
 8753b9f:	80 3c 11 06          	cmpb   $0x6,(%ecx,%edx,1)
 8753ba3:	74 13                	je     8753bb8 <_ZN8TaoCrypt14PKCS12_Decoder6DecodeEv+0x68>
 8753ba5:	c7 40 10 02 04 00 00 	movl   $0x402,0x10(%eax)
 8753bac:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8753baf:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8753bb2:	89 ec                	mov    %ebp,%esp
 8753bb4:	5d                   	pop    %ebp
 8753bb5:	c3                   	ret
 8753bb6:	66 90                	xchg   %ax,%ax
 8753bb8:	89 04 24             	mov    %eax,(%esp)
 8753bbb:	e8 40 fb ff ff       	call   8753700 <_ZN8TaoCrypt9GetLengthERNS_6SourceE>
 8753bc0:	85 c0                	test   %eax,%eax
 8753bc2:	74 b8                	je     8753b7c <_ZN8TaoCrypt14PKCS12_Decoder6DecodeEv+0x2c>
 8753bc4:	8b 56 04             	mov    0x4(%esi),%edx
 8753bc7:	01 42 0c             	add    %eax,0xc(%edx)
 8753bca:	eb b0                	jmp    8753b7c <_ZN8TaoCrypt14PKCS12_Decoder6DecodeEv+0x2c>
 8753bcc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::PKCS12_Decoder::Decode @ 0x8753b50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PKCS12_Decoder::Decode() */

void __thiscall TaoCrypt::PKCS12_Decoder::Decode(PKCS12_Decoder *this)

{
  Source *pSVar1;
  int iVar2;
  
  (**(code **)(*(int *)this + 8))(this);
  if (*(int *)(*(int *)(this + 4) + 0x10) == 0) {
    BER_Decoder::GetSequence((BER_Decoder *)this);
    pSVar1 = *(Source **)(this + 4);
    iVar2 = *(int *)(pSVar1 + 0xc);
    *(int *)(pSVar1 + 0xc) = iVar2 + 1;
    if (*(char *)(*(int *)(pSVar1 + 4) + iVar2) != '\x06') {
      *(undefined4 *)(pSVar1 + 0x10) = 0x402;
      return;
    }
    iVar2 = GetLength(pSVar1);
    if (iVar2 != 0) {
      *(int *)(*(int *)(this + 4) + 0xc) = *(int *)(*(int *)(this + 4) + 0xc) + iVar2;
    }
  }
  return;
}

```

---

## ReadHeader

```asm
// === 08753bd0 TaoCrypt::PKCS12_Decoder::ReadHeader  [0x08753bd0-0x8753c0f] ===
 8753bd0:	55                   	push   %ebp
 8753bd1:	89 e5                	mov    %esp,%ebp
 8753bd3:	83 ec 18             	sub    $0x18,%esp
 8753bd6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8753bd9:	e8 1a f2 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753bde:	81 c3 ba 8f c1 00    	add    $0xc18fba,%ebx
 8753be4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8753be7:	8b 75 08             	mov    0x8(%ebp),%esi
 8753bea:	89 34 24             	mov    %esi,(%esp)
 8753bed:	e8 9e fb ff ff       	call   8753790 <_ZN8TaoCrypt11BER_Decoder11GetSequenceEv>
 8753bf2:	89 34 24             	mov    %esi,(%esp)
 8753bf5:	e8 56 fc ff ff       	call   8753850 <_ZN8TaoCrypt11BER_Decoder10GetVersionEv>
 8753bfa:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8753bfd:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8753c00:	89 ec                	mov    %ebp,%esp
 8753c02:	5d                   	pop    %ebp
 8753c03:	c3                   	ret
 8753c04:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8753c0a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::PKCS12_Decoder::ReadHeader @ 0x8753bd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PKCS12_Decoder::ReadHeader() */

void __thiscall TaoCrypt::PKCS12_Decoder::ReadHeader(PKCS12_Decoder *this)

{
  BER_Decoder::GetSequence((BER_Decoder *)this);
  BER_Decoder::GetVersion((BER_Decoder *)this);
  return;
}

```

