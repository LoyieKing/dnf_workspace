# WideString

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 72

---

## WideString

```asm
// === 08ad99fe WideString::WideString  [0x08ad99fe-0x8ad9a19] ===
 8ad99fe:	55                   	push   %ebp
 8ad99ff:	89 e5                	mov    %esp,%ebp
 8ad9a01:	83 ec 18             	sub    $0x18,%esp
 8ad9a04:	a1 a4 56 3f 09       	mov    0x93f56a4,%eax
 8ad9a09:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9a0d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9a10:	89 04 24             	mov    %eax,(%esp)
 8ad9a13:	e8 9c 07 00 00       	call   8ada1b4 <_ZN10WideString10attachDataEP14WideStringData>
 8ad9a18:	c9                   	leave
 8ad9a19:	c3                   	ret

```

```c
// WideString::WideString @ 0x8ad99fe

/* DWARF original prototype: void WideString(WideString * this) */

void __thiscall WideString::WideString(WideString *this)

{
  attachData(this,s_emptyWideStringData);
  return;
}

```

---

## WideString_08ad9a1a

```asm
// === 08ad9a1a WideString::WideString  [0x08ad9a1a-0x8ad9a41] ===
 8ad9a1a:	55                   	push   %ebp
 8ad9a1b:	89 e5                	mov    %esp,%ebp
 8ad9a1d:	83 ec 28             	sub    $0x28,%esp
 8ad9a20:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9a23:	89 04 24             	mov    %eax,(%esp)
 8ad9a26:	e8 e9 07 00 00       	call   8ada214 <_ZNK10WideString7getDataEv>
 8ad9a2b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad9a2e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9a31:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9a35:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9a38:	89 04 24             	mov    %eax,(%esp)
 8ad9a3b:	e8 74 07 00 00       	call   8ada1b4 <_ZN10WideString10attachDataEP14WideStringData>
 8ad9a40:	c9                   	leave
 8ad9a41:	c3                   	ret

```

```c
// WideString::WideString @ 0x8ad9a1a

/* DWARF original prototype: void WideString(WideString * this, WideString * src) */

void __thiscall WideString::WideString(WideString *this,WideString *src)

{
  WideStringData *newData;
  
                    /* Unresolved local var: WideStringData * srcData@[???] */
  newData = getData(src);
  attachData(this,newData);
  return;
}

```

---

## WideString_08ad9a42

```asm
// === 08ad9a42 WideString::WideString  [0x08ad9a42-0x8ad9ac1] ===
 8ad9a42:	55                   	push   %ebp
 8ad9a43:	89 e5                	mov    %esp,%ebp
 8ad9a45:	53                   	push   %ebx
 8ad9a46:	83 ec 24             	sub    $0x24,%esp
 8ad9a49:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9a4c:	89 04 24             	mov    %eax,(%esp)
 8ad9a4f:	e8 dc 46 5a ff       	call   807e130 <wcslen@plt>
 8ad9a54:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad9a57:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8ad9a5b:	75 16                	jne    8ad9a73 <_ZN10WideStringC1EPKw+0x31>
 8ad9a5d:	a1 a4 56 3f 09       	mov    0x93f56a4,%eax
 8ad9a62:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9a66:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9a69:	89 04 24             	mov    %eax,(%esp)
 8ad9a6c:	e8 43 07 00 00       	call   8ada1b4 <_ZN10WideString10attachDataEP14WideStringData>
 8ad9a71:	eb 49                	jmp    8ad9abc <_ZN10WideStringC1EPKw+0x7a>
 8ad9a73:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad9a76:	89 04 24             	mov    %eax,(%esp)
 8ad9a79:	e8 1c ff ff ff       	call   8ad999a <_ZN14WideStringData6createEi>
 8ad9a7e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad9a81:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad9a84:	83 c0 01             	add    $0x1,%eax
 8ad9a87:	c1 e0 02             	shl    $0x2,%eax
 8ad9a8a:	89 c3                	mov    %eax,%ebx
 8ad9a8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9a8f:	89 04 24             	mov    %eax,(%esp)
 8ad9a92:	e8 f7 fe ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8ad9a97:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad9a9b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad9a9e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9aa2:	89 04 24             	mov    %eax,(%esp)
 8ad9aa5:	e8 f6 3d 5a ff       	call   807d8a0 <memcpy@plt>
 8ad9aaa:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9aad:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9ab1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9ab4:	89 04 24             	mov    %eax,(%esp)
 8ad9ab7:	e8 f8 06 00 00       	call   8ada1b4 <_ZN10WideString10attachDataEP14WideStringData>
 8ad9abc:	83 c4 24             	add    $0x24,%esp
 8ad9abf:	5b                   	pop    %ebx
 8ad9ac0:	5d                   	pop    %ebp
 8ad9ac1:	c3                   	ret

```

```c
// WideString::WideString @ 0x8ad9a42

/* DWARF original prototype: void WideString(WideString * this, wchar * src) */

void __thiscall WideString::WideString(WideString *this,wchar *src)

{
  size_t length;
  WideStringData *this_00;
  wchar *__dest;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: WideStringData * data@[???] */
  length = wcslen(src);
  if (length == 0) {
    attachData(this,s_emptyWideStringData);
  }
  else {
    this_00 = WideStringData::create(length);
    __dest = WideStringData::getBuffer(this_00);
    memcpy(__dest,src,(length + 1) * 4);
    attachData(this,this_00);
  }
  return;
}

```

---

## WideString_08ad9ac2

```asm
// === 08ad9ac2 WideString::WideString  [0x08ad9ac2-0x8ad9b33] ===
 8ad9ac2:	55                   	push   %ebp
 8ad9ac3:	89 e5                	mov    %esp,%ebp
 8ad9ac5:	53                   	push   %ebx
 8ad9ac6:	83 ec 24             	sub    $0x24,%esp
 8ad9ac9:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ad9acd:	75 16                	jne    8ad9ae5 <_ZN10WideStringC1EPKwi+0x23>
 8ad9acf:	a1 a4 56 3f 09       	mov    0x93f56a4,%eax
 8ad9ad4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9ad8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9adb:	89 04 24             	mov    %eax,(%esp)
 8ad9ade:	e8 d1 06 00 00       	call   8ada1b4 <_ZN10WideString10attachDataEP14WideStringData>
 8ad9ae3:	eb 48                	jmp    8ad9b2d <_ZN10WideStringC1EPKwi+0x6b>
 8ad9ae5:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad9ae8:	89 04 24             	mov    %eax,(%esp)
 8ad9aeb:	e8 dc fe ff ff       	call   8ad99cc <_ZN14WideStringData16createTerminatedEi>
 8ad9af0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad9af3:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad9af6:	8d 1c 85 00 00 00 00 	lea    0x0(,%eax,4),%ebx
 8ad9afd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9b00:	89 04 24             	mov    %eax,(%esp)
 8ad9b03:	e8 86 fe ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8ad9b08:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad9b0c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad9b0f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9b13:	89 04 24             	mov    %eax,(%esp)
 8ad9b16:	e8 85 3d 5a ff       	call   807d8a0 <memcpy@plt>
 8ad9b1b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9b1e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9b22:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9b25:	89 04 24             	mov    %eax,(%esp)
 8ad9b28:	e8 87 06 00 00       	call   8ada1b4 <_ZN10WideString10attachDataEP14WideStringData>
 8ad9b2d:	83 c4 24             	add    $0x24,%esp
 8ad9b30:	5b                   	pop    %ebx
 8ad9b31:	5d                   	pop    %ebp
 8ad9b32:	c3                   	ret
 8ad9b33:	90                   	nop

```

```c
// WideString::WideString @ 0x8ad9ac2

/* DWARF original prototype: void WideString(WideString * this, wchar * src, int32 length) */

void __thiscall WideString::WideString(WideString *this,wchar *src,int32 length)

{
  WideStringData *this_00;
  wchar *__dest;
  
                    /* Unresolved local var: WideStringData * data@[???] */
  if (length == 0) {
    attachData(this,s_emptyWideStringData);
  }
  else {
    this_00 = WideStringData::createTerminated(length);
    __dest = WideStringData::getBuffer(this_00);
    memcpy(__dest,src,length * 4);
    attachData(this,this_00);
  }
  return;
}

```

---

## WideString_08ad9b34

```asm
// === 08ad9b34 WideString::WideString  [0x08ad9b34-0x8ad9bbf] ===
 8ad9b34:	55                   	push   %ebp
 8ad9b35:	89 e5                	mov    %esp,%ebp
 8ad9b37:	56                   	push   %esi
 8ad9b38:	53                   	push   %ebx
 8ad9b39:	83 ec 20             	sub    $0x20,%esp
 8ad9b3c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9b3f:	89 04 24             	mov    %eax,(%esp)
 8ad9b42:	e8 79 26 c4 ff       	call   871c1c0 <_ZNKSbIwSt11char_traitsIwESaIwEE4sizeEv>
 8ad9b47:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad9b4a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8ad9b4e:	75 16                	jne    8ad9b66 <_ZN10WideStringC1ERKSbIwSt11char_traitsIwESaIwEE+0x32>
 8ad9b50:	a1 a4 56 3f 09       	mov    0x93f56a4,%eax
 8ad9b55:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9b59:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9b5c:	89 04 24             	mov    %eax,(%esp)
 8ad9b5f:	e8 50 06 00 00       	call   8ada1b4 <_ZN10WideString10attachDataEP14WideStringData>
 8ad9b64:	eb 53                	jmp    8ad9bb9 <_ZN10WideStringC1ERKSbIwSt11char_traitsIwESaIwEE+0x85>
 8ad9b66:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad9b69:	89 04 24             	mov    %eax,(%esp)
 8ad9b6c:	e8 29 fe ff ff       	call   8ad999a <_ZN14WideStringData6createEi>
 8ad9b71:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad9b74:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad9b77:	83 c0 01             	add    $0x1,%eax
 8ad9b7a:	c1 e0 02             	shl    $0x2,%eax
 8ad9b7d:	89 c6                	mov    %eax,%esi
 8ad9b7f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9b82:	89 04 24             	mov    %eax,(%esp)
 8ad9b85:	e8 b6 24 c4 ff       	call   871c040 <_ZNKSbIwSt11char_traitsIwESaIwEE5c_strEv>
 8ad9b8a:	89 c3                	mov    %eax,%ebx
 8ad9b8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9b8f:	89 04 24             	mov    %eax,(%esp)
 8ad9b92:	e8 f7 fd ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8ad9b97:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ad9b9b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ad9b9f:	89 04 24             	mov    %eax,(%esp)
 8ad9ba2:	e8 f9 3c 5a ff       	call   807d8a0 <memcpy@plt>
 8ad9ba7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9baa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9bae:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9bb1:	89 04 24             	mov    %eax,(%esp)
 8ad9bb4:	e8 fb 05 00 00       	call   8ada1b4 <_ZN10WideString10attachDataEP14WideStringData>
 8ad9bb9:	83 c4 20             	add    $0x20,%esp
 8ad9bbc:	5b                   	pop    %ebx
 8ad9bbd:	5e                   	pop    %esi
 8ad9bbe:	5d                   	pop    %ebp
 8ad9bbf:	c3                   	ret

```

```c
// WideString::WideString @ 0x8ad9b34

/* DWARF original prototype: void WideString(WideString * this, wstring * src) */

void __thiscall WideString::WideString(WideString *this,wstring *src)

{
  int length;
  WideStringData *this_00;
  void *__src;
  wchar *__dest;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: WideStringData * data@[???] */
  length = std::wstring::size((wstring *)src);
  if (length == 0) {
    attachData(this,s_emptyWideStringData);
  }
  else {
    this_00 = WideStringData::create(length);
    __src = (void *)std::wstring::c_str((wstring *)src);
    __dest = WideStringData::getBuffer(this_00);
    memcpy(__dest,__src,(length + 1) * 4);
    attachData(this,this_00);
  }
  return;
}

```

---

## WideString_08ad9bc0

```asm
// === 08ad9bc0 WideString::WideString  [0x08ad9bc0-0x8ad9bf9] ===
 8ad9bc0:	55                   	push   %ebp
 8ad9bc1:	89 e5                	mov    %esp,%ebp
 8ad9bc3:	83 ec 28             	sub    $0x28,%esp
 8ad9bc6:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8ad9bcd:	e8 fa fd ff ff       	call   8ad99cc <_ZN14WideStringData16createTerminatedEi>
 8ad9bd2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad9bd5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9bd8:	89 04 24             	mov    %eax,(%esp)
 8ad9bdb:	e8 ae fd ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8ad9be0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad9be3:	89 10                	mov    %edx,(%eax)
 8ad9be5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9be8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9bec:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9bef:	89 04 24             	mov    %eax,(%esp)
 8ad9bf2:	e8 bd 05 00 00       	call   8ada1b4 <_ZN10WideString10attachDataEP14WideStringData>
 8ad9bf7:	c9                   	leave
 8ad9bf8:	c3                   	ret
 8ad9bf9:	90                   	nop

```

```c
// WideString::WideString @ 0x8ad9bc0

/* DWARF original prototype: void WideString(WideString * this, wchar src) */

void __thiscall WideString::WideString(WideString *this,wchar src)

{
  WideStringData *this_00;
  wchar *pwVar1;
  
                    /* Unresolved local var: WideStringData * data@[???] */
  this_00 = WideStringData::createTerminated(1);
  pwVar1 = WideStringData::getBuffer(this_00);
  *pwVar1 = src;
  attachData(this,this_00);
  return;
}

```

---

## WideString_08ad9bfa

```asm
// === 08ad9bfa WideString::WideString  [0x08ad9bfa-0x8ad9c13] ===
 8ad9bfa:	55                   	push   %ebp
 8ad9bfb:	89 e5                	mov    %esp,%ebp
 8ad9bfd:	83 ec 18             	sub    $0x18,%esp
 8ad9c00:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9c03:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9c07:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9c0a:	89 04 24             	mov    %eax,(%esp)
 8ad9c0d:	e8 a2 05 00 00       	call   8ada1b4 <_ZN10WideString10attachDataEP14WideStringData>
 8ad9c12:	c9                   	leave
 8ad9c13:	c3                   	ret

```

```c
// WideString::WideString @ 0x8ad9bfa

/* DWARF original prototype: void WideString(WideString * this, WideStringData * newData) */

void __thiscall WideString::WideString(WideString *this,WideStringData *newData)

{
  attachData(this,newData);
  return;
}

```

---

## assign

```asm
// === 08ad9fa2 WideString::assign  [0x08ad9fa2-0x8ad9fcb] ===
 8ad9fa2:	55                   	push   %ebp
 8ad9fa3:	89 e5                	mov    %esp,%ebp
 8ad9fa5:	83 ec 18             	sub    $0x18,%esp
 8ad9fa8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9fab:	89 04 24             	mov    %eax,(%esp)
 8ad9fae:	e8 7d 41 5a ff       	call   807e130 <wcslen@plt>
 8ad9fb3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad9fb7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9fba:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9fbe:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9fc1:	89 04 24             	mov    %eax,(%esp)
 8ad9fc4:	e8 03 00 00 00       	call   8ad9fcc <_ZN10WideString6assignEPKwi>
 8ad9fc9:	c9                   	leave
 8ad9fca:	c3                   	ret
 8ad9fcb:	90                   	nop

```

```c
// WideString::assign @ 0x8ad9fa2

/* DWARF original prototype: void assign(WideString * this, wchar * src) */

void __thiscall WideString::assign(WideString *this,wchar *src)

{
  size_t srcLength;
  
  srcLength = wcslen(src);
  assign(this,src,srcLength);
  return;
}

```

---

## assign_08ad9fcc

```asm
// === 08ad9fcc WideString::assign  [0x08ad9fcc-0x8ada033] ===
 8ad9fcc:	55                   	push   %ebp
 8ad9fcd:	89 e5                	mov    %esp,%ebp
 8ad9fcf:	53                   	push   %ebx
 8ad9fd0:	83 ec 24             	sub    $0x24,%esp
 8ad9fd3:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ad9fd7:	75 0d                	jne    8ad9fe6 <_ZN10WideString6assignEPKwi+0x1a>
 8ad9fd9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9fdc:	89 04 24             	mov    %eax,(%esp)
 8ad9fdf:	e8 e8 00 00 00       	call   8ada0cc <_ZN10WideString5clearEv>
 8ad9fe4:	eb 48                	jmp    8ada02e <_ZN10WideString6assignEPKwi+0x62>
 8ad9fe6:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad9fe9:	89 04 24             	mov    %eax,(%esp)
 8ad9fec:	e8 db f9 ff ff       	call   8ad99cc <_ZN14WideStringData16createTerminatedEi>
 8ad9ff1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad9ff4:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad9ff7:	8d 1c 85 00 00 00 00 	lea    0x0(,%eax,4),%ebx
 8ad9ffe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada001:	89 04 24             	mov    %eax,(%esp)
 8ada004:	e8 85 f9 ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8ada009:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ada00d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ada010:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ada014:	89 04 24             	mov    %eax,(%esp)
 8ada017:	e8 84 38 5a ff       	call   807d8a0 <memcpy@plt>
 8ada01c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada01f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada023:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada026:	89 04 24             	mov    %eax,(%esp)
 8ada029:	e8 aa 01 00 00       	call   8ada1d8 <_ZN10WideString11replaceDataEP14WideStringData>
 8ada02e:	83 c4 24             	add    $0x24,%esp
 8ada031:	5b                   	pop    %ebx
 8ada032:	5d                   	pop    %ebp
 8ada033:	c3                   	ret

```

```c
// WideString::assign @ 0x8ad9fcc

/* DWARF original prototype: void assign(WideString * this, wchar * src, int32 srcLength) */

void __thiscall WideString::assign(WideString *this,wchar *src,int32 srcLength)

{
  WideStringData *this_00;
  wchar *__dest;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (srcLength == 0) {
    clear(this);
  }
  else {
    this_00 = WideStringData::createTerminated(srcLength);
    __dest = WideStringData::getBuffer(this_00);
    memcpy(__dest,src,srcLength * 4);
    replaceData(this,this_00);
  }
  return;
}

```

---

## assign_08ada034

```asm
// === 08ada034 WideString::assign  [0x08ada034-0x8ada07f] ===
 8ada034:	55                   	push   %ebp
 8ada035:	89 e5                	mov    %esp,%ebp
 8ada037:	53                   	push   %ebx
 8ada038:	83 ec 14             	sub    $0x14,%esp
 8ada03b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada03e:	89 04 24             	mov    %eax,(%esp)
 8ada041:	e8 ce 01 00 00       	call   8ada214 <_ZNK10WideString7getDataEv>
 8ada046:	89 c3                	mov    %eax,%ebx
 8ada048:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada04b:	89 04 24             	mov    %eax,(%esp)
 8ada04e:	e8 c1 01 00 00       	call   8ada214 <_ZNK10WideString7getDataEv>
 8ada053:	39 c3                	cmp    %eax,%ebx
 8ada055:	0f 94 c0             	sete   %al
 8ada058:	84 c0                	test   %al,%al
 8ada05a:	75 1c                	jne    8ada078 <_ZN10WideString6assignERKS_+0x44>
 8ada05c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada05f:	89 04 24             	mov    %eax,(%esp)
 8ada062:	e8 ad 01 00 00       	call   8ada214 <_ZNK10WideString7getDataEv>
 8ada067:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada06b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada06e:	89 04 24             	mov    %eax,(%esp)
 8ada071:	e8 62 01 00 00       	call   8ada1d8 <_ZN10WideString11replaceDataEP14WideStringData>
 8ada076:	eb 01                	jmp    8ada079 <_ZN10WideString6assignERKS_+0x45>
 8ada078:	90                   	nop
 8ada079:	83 c4 14             	add    $0x14,%esp
 8ada07c:	5b                   	pop    %ebx
 8ada07d:	5d                   	pop    %ebp
 8ada07e:	c3                   	ret
 8ada07f:	90                   	nop

```

```c
// WideString::assign @ 0x8ada034

/* DWARF original prototype: void assign(WideString * this, WideString * src) */

void __thiscall WideString::assign(WideString *this,WideString *src)

{
  WideStringData *pWVar1;
  WideStringData *pWVar2;
  
  pWVar1 = getData(this);
  pWVar2 = getData(src);
  if (pWVar1 != pWVar2) {
    pWVar1 = getData(src);
    replaceData(this,pWVar1);
  }
  return;
}

```

---

## assign_08ada080

```asm
// === 08ada080 WideString::assign  [0x08ada080-0x8ada0cb] ===
 8ada080:	55                   	push   %ebp
 8ada081:	89 e5                	mov    %esp,%ebp
 8ada083:	83 ec 28             	sub    $0x28,%esp
 8ada086:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ada08a:	75 0d                	jne    8ada099 <_ZN10WideString6assignEw+0x19>
 8ada08c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada08f:	89 04 24             	mov    %eax,(%esp)
 8ada092:	e8 35 00 00 00       	call   8ada0cc <_ZN10WideString5clearEv>
 8ada097:	eb 31                	jmp    8ada0ca <_ZN10WideString6assignEw+0x4a>
 8ada099:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8ada0a0:	e8 27 f9 ff ff       	call   8ad99cc <_ZN14WideStringData16createTerminatedEi>
 8ada0a5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ada0a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada0ab:	89 04 24             	mov    %eax,(%esp)
 8ada0ae:	e8 db f8 ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8ada0b3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ada0b6:	89 10                	mov    %edx,(%eax)
 8ada0b8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada0bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada0bf:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada0c2:	89 04 24             	mov    %eax,(%esp)
 8ada0c5:	e8 0e 01 00 00       	call   8ada1d8 <_ZN10WideString11replaceDataEP14WideStringData>
 8ada0ca:	c9                   	leave
 8ada0cb:	c3                   	ret

```

```c
// WideString::assign @ 0x8ada080

/* DWARF original prototype: void assign(WideString * this, wchar src) */

void __thiscall WideString::assign(WideString *this,wchar src)

{
  WideStringData *this_00;
  wchar *pwVar1;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (src == 0) {
    clear(this);
  }
  else {
    this_00 = WideStringData::createTerminated(1);
    pwVar1 = WideStringData::getBuffer(this_00);
    *pwVar1 = src;
    replaceData(this,this_00);
  }
  return;
}

```

---

## attachData

```asm
// === 08ada1b4 WideString::attachData  [0x08ada1b4-0x8ada1d7] ===
 8ada1b4:	55                   	push   %ebp
 8ada1b5:	89 e5                	mov    %esp,%ebp
 8ada1b7:	83 ec 04             	sub    $0x4,%esp
 8ada1ba:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada1bd:	89 04 24             	mov    %eax,(%esp)
 8ada1c0:	e8 bf c6 ff ff       	call   8ad6884 <_ZN10StringData6incRefEv>
 8ada1c5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada1c8:	89 04 24             	mov    %eax,(%esp)
 8ada1cb:	e8 be f7 ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8ada1d0:	8b 55 08             	mov    0x8(%ebp),%edx
 8ada1d3:	89 02                	mov    %eax,(%edx)
 8ada1d5:	c9                   	leave
 8ada1d6:	c3                   	ret
 8ada1d7:	90                   	nop

```

```c
// WideString::attachData @ 0x8ada1b4

/* DWARF original prototype: void attachData(WideString * this, WideStringData * newData) */

void __thiscall WideString::attachData(WideString *this,WideStringData *newData)

{
  wchar *pwVar1;
  
  StringData::incRef(&newData->super_StringData);
  pwVar1 = WideStringData::getBuffer(newData);
  this->buffer_ = pwVar1;
  return;
}

```

---

## back

```asm
// === 08ad9f36 WideString::back  [0x08ad9f36-0x8ad9f73] ===
 8ad9f36:	55                   	push   %ebp
 8ad9f37:	89 e5                	mov    %esp,%ebp
 8ad9f39:	53                   	push   %ebx
 8ad9f3a:	83 ec 14             	sub    $0x14,%esp
 8ad9f3d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9f40:	89 04 24             	mov    %eax,(%esp)
 8ad9f43:	e8 54 33 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ad9f48:	85 c0                	test   %eax,%eax
 8ad9f4a:	74 1d                	je     8ad9f69 <_ZNK10WideString4backEv+0x33>
 8ad9f4c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9f4f:	8b 18                	mov    (%eax),%ebx
 8ad9f51:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9f54:	89 04 24             	mov    %eax,(%esp)
 8ad9f57:	e8 40 33 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ad9f5c:	83 e8 01             	sub    $0x1,%eax
 8ad9f5f:	c1 e0 02             	shl    $0x2,%eax
 8ad9f62:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8ad9f65:	8b 00                	mov    (%eax),%eax
 8ad9f67:	eb 05                	jmp    8ad9f6e <_ZNK10WideString4backEv+0x38>
 8ad9f69:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad9f6e:	83 c4 14             	add    $0x14,%esp
 8ad9f71:	5b                   	pop    %ebx
 8ad9f72:	5d                   	pop    %ebp
 8ad9f73:	c3                   	ret

```

```c
// WideString::back @ 0x8ad9f36

/* DWARF original prototype: wchar back(WideString * this) */

wchar __thiscall WideString::back(WideString *this)

{
  wchar *pwVar1;
  int32 iVar2;
  wchar wVar3;
  
  iVar2 = length(this);
  if (iVar2 == 0) {
    wVar3 = 0;
  }
  else {
    pwVar1 = this->buffer_;
    iVar2 = length(this);
    wVar3 = pwVar1[iVar2 + -1];
  }
  return wVar3;
}

```

---

## begin

```asm
// === 08ad9f74 WideString::begin  [0x08ad9f74-0x8ad9f7d] ===
 8ad9f74:	55                   	push   %ebp
 8ad9f75:	89 e5                	mov    %esp,%ebp
 8ad9f77:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9f7a:	8b 00                	mov    (%eax),%eax
 8ad9f7c:	5d                   	pop    %ebp
 8ad9f7d:	c3                   	ret

```

```c
// WideString::begin @ 0x8ad9f74

/* DWARF original prototype: const_iterator begin(WideString * this) */

const_iterator __thiscall WideString::begin(WideString *this)

{
  return this->buffer_;
}

```

---

## clear

```asm
// === 08ada0cc WideString::clear  [0x08ada0cc-0x8ada0f9] ===
 8ada0cc:	55                   	push   %ebp
 8ada0cd:	89 e5                	mov    %esp,%ebp
 8ada0cf:	83 ec 18             	sub    $0x18,%esp
 8ada0d2:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada0d5:	89 04 24             	mov    %eax,(%esp)
 8ada0d8:	e8 db 31 00 00       	call   8add2b8 <_ZNK10WideString7isEmptyEv>
 8ada0dd:	84 c0                	test   %al,%al
 8ada0df:	75 16                	jne    8ada0f7 <_ZN10WideString5clearEv+0x2b>
 8ada0e1:	a1 a4 56 3f 09       	mov    0x93f56a4,%eax
 8ada0e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada0ea:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada0ed:	89 04 24             	mov    %eax,(%esp)
 8ada0f0:	e8 e3 00 00 00       	call   8ada1d8 <_ZN10WideString11replaceDataEP14WideStringData>
 8ada0f5:	eb 01                	jmp    8ada0f8 <_ZN10WideString5clearEv+0x2c>
 8ada0f7:	90                   	nop
 8ada0f8:	c9                   	leave
 8ada0f9:	c3                   	ret

```

```c
// WideString::clear @ 0x8ada0cc

/* DWARF original prototype: void clear(WideString * this) */

void __thiscall WideString::clear(WideString *this)

{
  bool bVar1;
  
  bVar1 = isEmpty(this);
  if (!bVar1) {
    replaceData(this,s_emptyWideStringData);
  }
  return;
}

```

---

## compare

```asm
// === 08adc5a4 WideString::compare  [0x08adc5a4-0x8adc5c5] ===
 8adc5a4:	55                   	push   %ebp
 8adc5a5:	89 e5                	mov    %esp,%ebp
 8adc5a7:	83 ec 18             	sub    $0x18,%esp
 8adc5aa:	8b 45 08             	mov    0x8(%ebp),%eax
 8adc5ad:	89 04 24             	mov    %eax,(%esp)
 8adc5b0:	e8 0b 69 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adc5b5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adc5b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc5bc:	89 04 24             	mov    %eax,(%esp)
 8adc5bf:	e8 ec 20 5a ff       	call   807e6b0 <wcscmp@plt>
 8adc5c4:	c9                   	leave
 8adc5c5:	c3                   	ret

```

```c
// WideString::compare @ 0x8adc5a4

int32 WideString::compare(WideString *src1,wchar *src2)

{
  wchar_t *__s1;
  int iVar1;
  
  __s1 = c_str(src1);
  iVar1 = wcscmp(__s1,src2);
  return iVar1;
}

```

---

## compareNoCase

```asm
// === 08adc61a WideString::compareNoCase  [0x08adc61a-0x8adc63b] ===
 8adc61a:	55                   	push   %ebp
 8adc61b:	89 e5                	mov    %esp,%ebp
 8adc61d:	83 ec 18             	sub    $0x18,%esp
 8adc620:	8b 45 08             	mov    0x8(%ebp),%eax
 8adc623:	89 04 24             	mov    %eax,(%esp)
 8adc626:	e8 95 68 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adc62b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adc62e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc632:	89 04 24             	mov    %eax,(%esp)
 8adc635:	e8 16 13 5a ff       	call   807d950 <wcscasecmp@plt>
 8adc63a:	c9                   	leave
 8adc63b:	c3                   	ret

```

```c
// WideString::compareNoCase @ 0x8adc61a

int32 WideString::compareNoCase(WideString *src1,wchar *src2)

{
  wchar_t *__s1;
  int iVar1;
  
  __s1 = c_str(src1);
  iVar1 = wcscasecmp(__s1,src2);
  return iVar1;
}

```

---

## compareNoCase_08adc63c

```asm
// === 08adc63c WideString::compareNoCase  [0x08adc63c-0x8adc66d] ===
 8adc63c:	55                   	push   %ebp
 8adc63d:	89 e5                	mov    %esp,%ebp
 8adc63f:	53                   	push   %ebx
 8adc640:	83 ec 14             	sub    $0x14,%esp
 8adc643:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adc646:	89 04 24             	mov    %eax,(%esp)
 8adc649:	e8 72 68 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adc64e:	89 c3                	mov    %eax,%ebx
 8adc650:	8b 45 08             	mov    0x8(%ebp),%eax
 8adc653:	89 04 24             	mov    %eax,(%esp)
 8adc656:	e8 65 68 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adc65b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8adc65f:	89 04 24             	mov    %eax,(%esp)
 8adc662:	e8 e9 12 5a ff       	call   807d950 <wcscasecmp@plt>
 8adc667:	83 c4 14             	add    $0x14,%esp
 8adc66a:	5b                   	pop    %ebx
 8adc66b:	5d                   	pop    %ebp
 8adc66c:	c3                   	ret
 8adc66d:	90                   	nop

```

```c
// WideString::compareNoCase @ 0x8adc63c

int32 WideString::compareNoCase(WideString *src1,WideString *src2)

{
  wchar_t *__s2;
  wchar_t *__s1;
  int iVar1;
  
  __s2 = c_str(src2);
  __s1 = c_str(src1);
  iVar1 = wcscasecmp(__s1,__s2);
  return iVar1;
}

```

---

## compareNoCase_08adc66e

```asm
// === 08adc66e WideString::compareNoCase  [0x08adc66e-0x8adc68f] ===
 8adc66e:	55                   	push   %ebp
 8adc66f:	89 e5                	mov    %esp,%ebp
 8adc671:	83 ec 18             	sub    $0x18,%esp
 8adc674:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adc677:	89 04 24             	mov    %eax,(%esp)
 8adc67a:	e8 41 68 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adc67f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adc683:	8b 45 08             	mov    0x8(%ebp),%eax
 8adc686:	89 04 24             	mov    %eax,(%esp)
 8adc689:	e8 c2 12 5a ff       	call   807d950 <wcscasecmp@plt>
 8adc68e:	c9                   	leave
 8adc68f:	c3                   	ret

```

```c
// WideString::compareNoCase @ 0x8adc66e

int32 WideString::compareNoCase(wchar *src1,WideString *src2)

{
  wchar_t *__s2;
  int iVar1;
  
  __s2 = c_str(src2);
  iVar1 = wcscasecmp(src1,__s2);
  return iVar1;
}

```

---

## compare_08adc5c6

```asm
// === 08adc5c6 WideString::compare  [0x08adc5c6-0x8adc5f7] ===
 8adc5c6:	55                   	push   %ebp
 8adc5c7:	89 e5                	mov    %esp,%ebp
 8adc5c9:	53                   	push   %ebx
 8adc5ca:	83 ec 14             	sub    $0x14,%esp
 8adc5cd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adc5d0:	89 04 24             	mov    %eax,(%esp)
 8adc5d3:	e8 e8 68 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adc5d8:	89 c3                	mov    %eax,%ebx
 8adc5da:	8b 45 08             	mov    0x8(%ebp),%eax
 8adc5dd:	89 04 24             	mov    %eax,(%esp)
 8adc5e0:	e8 db 68 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adc5e5:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8adc5e9:	89 04 24             	mov    %eax,(%esp)
 8adc5ec:	e8 bf 20 5a ff       	call   807e6b0 <wcscmp@plt>
 8adc5f1:	83 c4 14             	add    $0x14,%esp
 8adc5f4:	5b                   	pop    %ebx
 8adc5f5:	5d                   	pop    %ebp
 8adc5f6:	c3                   	ret
 8adc5f7:	90                   	nop

```

```c
// WideString::compare @ 0x8adc5c6

int32 WideString::compare(WideString *src1,WideString *src2)

{
  wchar_t *__s2;
  wchar_t *__s1;
  int iVar1;
  
  __s2 = c_str(src2);
  __s1 = c_str(src1);
  iVar1 = wcscmp(__s1,__s2);
  return iVar1;
}

```

---

## compare_08adc5f8

```asm
// === 08adc5f8 WideString::compare  [0x08adc5f8-0x8adc619] ===
 8adc5f8:	55                   	push   %ebp
 8adc5f9:	89 e5                	mov    %esp,%ebp
 8adc5fb:	83 ec 18             	sub    $0x18,%esp
 8adc5fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adc601:	89 04 24             	mov    %eax,(%esp)
 8adc604:	e8 b7 68 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adc609:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adc60d:	8b 45 08             	mov    0x8(%ebp),%eax
 8adc610:	89 04 24             	mov    %eax,(%esp)
 8adc613:	e8 98 20 5a ff       	call   807e6b0 <wcscmp@plt>
 8adc618:	c9                   	leave
 8adc619:	c3                   	ret

```

```c
// WideString::compare @ 0x8adc5f8

int32 WideString::compare(wchar *src1,WideString *src2)

{
  wchar_t *__s2;
  int iVar1;
  
  __s2 = c_str(src2);
  iVar1 = wcscmp(src1,__s2);
  return iVar1;
}

```

---

## concat

```asm
// === 08adb5e6 WideString::concat  [0x08adb5e6-0x8adb63d] ===
 8adb5e6:	55                   	push   %ebp
 8adb5e7:	89 e5                	mov    %esp,%ebp
 8adb5e9:	57                   	push   %edi
 8adb5ea:	56                   	push   %esi
 8adb5eb:	53                   	push   %ebx
 8adb5ec:	83 ec 2c             	sub    $0x2c,%esp
 8adb5ef:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adb5f2:	89 de                	mov    %ebx,%esi
 8adb5f4:	8b 45 10             	mov    0x10(%ebp),%eax
 8adb5f7:	89 04 24             	mov    %eax,(%esp)
 8adb5fa:	e8 31 2b 5a ff       	call   807e130 <wcslen@plt>
 8adb5ff:	89 c7                	mov    %eax,%edi
 8adb601:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb604:	89 04 24             	mov    %eax,(%esp)
 8adb607:	e8 24 2b 5a ff       	call   807e130 <wcslen@plt>
 8adb60c:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8adb610:	8b 55 10             	mov    0x10(%ebp),%edx
 8adb613:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8adb617:	89 44 24 08          	mov    %eax,0x8(%esp)
 8adb61b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb61e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adb622:	89 34 24             	mov    %esi,(%esp)
 8adb625:	e8 14 00 00 00       	call   8adb63e <_ZN10WideString6concatEPKwiS1_i>
 8adb62a:	83 ec 04             	sub    $0x4,%esp
 8adb62d:	89 d8                	mov    %ebx,%eax
 8adb62f:	89 d8                	mov    %ebx,%eax
 8adb631:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8adb634:	83 c4 00             	add    $0x0,%esp
 8adb637:	5b                   	pop    %ebx
 8adb638:	5e                   	pop    %esi
 8adb639:	5f                   	pop    %edi
 8adb63a:	5d                   	pop    %ebp
 8adb63b:	c2 04 00             	ret    $0x4

```

```c
// WideString::concat @ 0x8adb5e6

WideString * WideString::concat(WideString *__return_storage_ptr__,wchar *src1,wchar *src2)

{
  size_t len2;
  size_t len1;
  
  len2 = wcslen(src2);
  len1 = wcslen(src1);
  concat(__return_storage_ptr__,src1,len1,src2,len2);
  return __return_storage_ptr__;
}

```

---

## concat_08adb63e

```asm
// === 08adb63e WideString::concat  [0x08adb63e-0x8adb6ed] ===
 8adb63e:	55                   	push   %ebp
 8adb63f:	89 e5                	mov    %esp,%ebp
 8adb641:	56                   	push   %esi
 8adb642:	53                   	push   %ebx
 8adb643:	83 ec 20             	sub    $0x20,%esp
 8adb646:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adb649:	8b 45 18             	mov    0x18(%ebp),%eax
 8adb64c:	8b 55 10             	mov    0x10(%ebp),%edx
 8adb64f:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8adb652:	85 c0                	test   %eax,%eax
 8adb654:	75 0c                	jne    8adb662 <_ZN10WideString6concatEPKwiS1_i+0x24>
 8adb656:	89 d8                	mov    %ebx,%eax
 8adb658:	89 04 24             	mov    %eax,(%esp)
 8adb65b:	e8 9e e3 ff ff       	call   8ad99fe <_ZN10WideStringC1Ev>
 8adb660:	eb 7e                	jmp    8adb6e0 <_ZN10WideString6concatEPKwiS1_i+0xa2>
 8adb662:	8b 45 18             	mov    0x18(%ebp),%eax
 8adb665:	8b 55 10             	mov    0x10(%ebp),%edx
 8adb668:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8adb66b:	89 04 24             	mov    %eax,(%esp)
 8adb66e:	e8 59 e3 ff ff       	call   8ad99cc <_ZN14WideStringData16createTerminatedEi>
 8adb673:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8adb676:	8b 45 10             	mov    0x10(%ebp),%eax
 8adb679:	8d 34 85 00 00 00 00 	lea    0x0(,%eax,4),%esi
 8adb680:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8adb683:	89 04 24             	mov    %eax,(%esp)
 8adb686:	e8 03 e3 ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8adb68b:	89 74 24 08          	mov    %esi,0x8(%esp)
 8adb68f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adb692:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adb696:	89 04 24             	mov    %eax,(%esp)
 8adb699:	e8 02 22 5a ff       	call   807d8a0 <memcpy@plt>
 8adb69e:	8b 45 18             	mov    0x18(%ebp),%eax
 8adb6a1:	8d 34 85 00 00 00 00 	lea    0x0(,%eax,4),%esi
 8adb6a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8adb6ab:	89 04 24             	mov    %eax,(%esp)
 8adb6ae:	e8 db e2 ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8adb6b3:	8b 55 10             	mov    0x10(%ebp),%edx
 8adb6b6:	c1 e2 02             	shl    $0x2,%edx
 8adb6b9:	8d 14 10             	lea    (%eax,%edx,1),%edx
 8adb6bc:	89 74 24 08          	mov    %esi,0x8(%esp)
 8adb6c0:	8b 45 14             	mov    0x14(%ebp),%eax
 8adb6c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adb6c7:	89 14 24             	mov    %edx,(%esp)
 8adb6ca:	e8 d1 21 5a ff       	call   807d8a0 <memcpy@plt>
 8adb6cf:	89 d8                	mov    %ebx,%eax
 8adb6d1:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8adb6d4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adb6d8:	89 04 24             	mov    %eax,(%esp)
 8adb6db:	e8 1a e5 ff ff       	call   8ad9bfa <_ZN10WideStringC1EP14WideStringData>
 8adb6e0:	89 d8                	mov    %ebx,%eax
 8adb6e2:	89 d8                	mov    %ebx,%eax
 8adb6e4:	83 c4 20             	add    $0x20,%esp
 8adb6e7:	5b                   	pop    %ebx
 8adb6e8:	5e                   	pop    %esi
 8adb6e9:	5d                   	pop    %ebp
 8adb6ea:	c2 04 00             	ret    $0x4
 8adb6ed:	90                   	nop

```

```c
// WideString::concat @ 0x8adb63e

WideString *
WideString::concat(WideString *__return_storage_ptr__,wchar *src1,int32 len1,wchar *src2,int32 len2)

{
  WideStringData *this;
  wchar *pwVar1;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (len1 + len2 == 0) {
    WideString(__return_storage_ptr__);
  }
  else {
    this = WideStringData::createTerminated(len1 + len2);
    pwVar1 = WideStringData::getBuffer(this);
    memcpy(pwVar1,src1,len1 * 4);
    pwVar1 = WideStringData::getBuffer(this);
    memcpy(pwVar1 + len1,src2,len2 * 4);
    WideString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}

```

---

## concat_08adb6ee

```asm
// === 08adb6ee WideString::concat  [0x08adb6ee-0x8adb733] ===
 8adb6ee:	55                   	push   %ebp
 8adb6ef:	89 e5                	mov    %esp,%ebp
 8adb6f1:	56                   	push   %esi
 8adb6f2:	53                   	push   %ebx
 8adb6f3:	83 ec 10             	sub    $0x10,%esp
 8adb6f6:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adb6f9:	89 de                	mov    %ebx,%esi
 8adb6fb:	8b 45 10             	mov    0x10(%ebp),%eax
 8adb6fe:	89 04 24             	mov    %eax,(%esp)
 8adb701:	e8 2a 2a 5a ff       	call   807e130 <wcslen@plt>
 8adb706:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8adb70a:	8b 45 10             	mov    0x10(%ebp),%eax
 8adb70d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8adb711:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb714:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adb718:	89 34 24             	mov    %esi,(%esp)
 8adb71b:	e8 14 00 00 00       	call   8adb734 <_ZN10WideString6concatERKS_PKwi>
 8adb720:	83 ec 04             	sub    $0x4,%esp
 8adb723:	89 d8                	mov    %ebx,%eax
 8adb725:	89 d8                	mov    %ebx,%eax
 8adb727:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8adb72a:	83 c4 00             	add    $0x0,%esp
 8adb72d:	5b                   	pop    %ebx
 8adb72e:	5e                   	pop    %esi
 8adb72f:	5d                   	pop    %ebp
 8adb730:	c2 04 00             	ret    $0x4
 8adb733:	90                   	nop

```

```c
// WideString::concat @ 0x8adb6ee

WideString * WideString::concat(WideString *__return_storage_ptr__,WideString *src1,wchar *src2)

{
  size_t len2;
  
  len2 = wcslen(src2);
  concat(__return_storage_ptr__,src1,src2,len2);
  return __return_storage_ptr__;
}

```

---

## concat_08adb734

```asm
// === 08adb734 WideString::concat  [0x08adb734-0x8adb7d3] ===
 8adb734:	55                   	push   %ebp
 8adb735:	89 e5                	mov    %esp,%ebp
 8adb737:	57                   	push   %edi
 8adb738:	56                   	push   %esi
 8adb739:	53                   	push   %ebx
 8adb73a:	83 ec 2c             	sub    $0x2c,%esp
 8adb73d:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adb740:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb743:	89 04 24             	mov    %eax,(%esp)
 8adb746:	e8 51 1b 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adb74b:	85 c0                	test   %eax,%eax
 8adb74d:	0f 94 c0             	sete   %al
 8adb750:	84 c0                	test   %al,%al
 8adb752:	74 1a                	je     8adb76e <_ZN10WideString6concatERKS_PKwi+0x3a>
 8adb754:	89 d8                	mov    %ebx,%eax
 8adb756:	8b 55 14             	mov    0x14(%ebp),%edx
 8adb759:	89 54 24 08          	mov    %edx,0x8(%esp)
 8adb75d:	8b 55 10             	mov    0x10(%ebp),%edx
 8adb760:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adb764:	89 04 24             	mov    %eax,(%esp)
 8adb767:	e8 56 e3 ff ff       	call   8ad9ac2 <_ZN10WideStringC1EPKwi>
 8adb76c:	eb 54                	jmp    8adb7c2 <_ZN10WideString6concatERKS_PKwi+0x8e>
 8adb76e:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8adb772:	75 13                	jne    8adb787 <_ZN10WideString6concatERKS_PKwi+0x53>
 8adb774:	89 d8                	mov    %ebx,%eax
 8adb776:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adb779:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adb77d:	89 04 24             	mov    %eax,(%esp)
 8adb780:	e8 95 e2 ff ff       	call   8ad9a1a <_ZN10WideStringC1ERKS_>
 8adb785:	eb 3b                	jmp    8adb7c2 <_ZN10WideString6concatERKS_PKwi+0x8e>
 8adb787:	89 df                	mov    %ebx,%edi
 8adb789:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb78c:	89 04 24             	mov    %eax,(%esp)
 8adb78f:	e8 08 1b 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adb794:	89 c6                	mov    %eax,%esi
 8adb796:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb799:	89 04 24             	mov    %eax,(%esp)
 8adb79c:	e8 1f 77 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adb7a1:	8b 55 14             	mov    0x14(%ebp),%edx
 8adb7a4:	89 54 24 10          	mov    %edx,0x10(%esp)
 8adb7a8:	8b 55 10             	mov    0x10(%ebp),%edx
 8adb7ab:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8adb7af:	89 74 24 08          	mov    %esi,0x8(%esp)
 8adb7b3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adb7b7:	89 3c 24             	mov    %edi,(%esp)
 8adb7ba:	e8 7f fe ff ff       	call   8adb63e <_ZN10WideString6concatEPKwiS1_i>
 8adb7bf:	83 ec 04             	sub    $0x4,%esp
 8adb7c2:	89 d8                	mov    %ebx,%eax
 8adb7c4:	89 d8                	mov    %ebx,%eax
 8adb7c6:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8adb7c9:	83 c4 00             	add    $0x0,%esp
 8adb7cc:	5b                   	pop    %ebx
 8adb7cd:	5e                   	pop    %esi
 8adb7ce:	5f                   	pop    %edi
 8adb7cf:	5d                   	pop    %ebp
 8adb7d0:	c2 04 00             	ret    $0x4
 8adb7d3:	90                   	nop

```

```c
// WideString::concat @ 0x8adb734

WideString *
WideString::concat(WideString *__return_storage_ptr__,WideString *src1,wchar *src2,int32 len2)

{
  int32 iVar1;
  wchar *src1_00;
  
  iVar1 = length(src1);
  if (iVar1 == 0) {
    WideString(__return_storage_ptr__,src2,len2);
  }
  else if (len2 == 0) {
    WideString(__return_storage_ptr__,src1);
  }
  else {
    iVar1 = length(src1);
    src1_00 = c_str(src1);
    concat(__return_storage_ptr__,src1_00,iVar1,src2,len2);
  }
  return __return_storage_ptr__;
}

```

---

## concat_08adb7d4

```asm
// === 08adb7d4 WideString::concat  [0x08adb7d4-0x8adb895] ===
 8adb7d4:	55                   	push   %ebp
 8adb7d5:	89 e5                	mov    %esp,%ebp
 8adb7d7:	57                   	push   %edi
 8adb7d8:	56                   	push   %esi
 8adb7d9:	53                   	push   %ebx
 8adb7da:	83 ec 3c             	sub    $0x3c,%esp
 8adb7dd:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adb7e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb7e3:	89 04 24             	mov    %eax,(%esp)
 8adb7e6:	e8 b1 1a 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adb7eb:	85 c0                	test   %eax,%eax
 8adb7ed:	0f 94 c0             	sete   %al
 8adb7f0:	84 c0                	test   %al,%al
 8adb7f2:	74 13                	je     8adb807 <_ZN10WideString6concatERKS_S1_+0x33>
 8adb7f4:	89 d8                	mov    %ebx,%eax
 8adb7f6:	8b 55 10             	mov    0x10(%ebp),%edx
 8adb7f9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adb7fd:	89 04 24             	mov    %eax,(%esp)
 8adb800:	e8 15 e2 ff ff       	call   8ad9a1a <_ZN10WideStringC1ERKS_>
 8adb805:	eb 7e                	jmp    8adb885 <_ZN10WideString6concatERKS_S1_+0xb1>
 8adb807:	8b 45 10             	mov    0x10(%ebp),%eax
 8adb80a:	89 04 24             	mov    %eax,(%esp)
 8adb80d:	e8 8a 1a 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adb812:	85 c0                	test   %eax,%eax
 8adb814:	0f 94 c0             	sete   %al
 8adb817:	84 c0                	test   %al,%al
 8adb819:	74 13                	je     8adb82e <_ZN10WideString6concatERKS_S1_+0x5a>
 8adb81b:	89 d8                	mov    %ebx,%eax
 8adb81d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adb820:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adb824:	89 04 24             	mov    %eax,(%esp)
 8adb827:	e8 ee e1 ff ff       	call   8ad9a1a <_ZN10WideStringC1ERKS_>
 8adb82c:	eb 57                	jmp    8adb885 <_ZN10WideString6concatERKS_S1_+0xb1>
 8adb82e:	89 5d e0             	mov    %ebx,-0x20(%ebp)
 8adb831:	8b 45 10             	mov    0x10(%ebp),%eax
 8adb834:	89 04 24             	mov    %eax,(%esp)
 8adb837:	e8 60 1a 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adb83c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8adb83f:	8b 45 10             	mov    0x10(%ebp),%eax
 8adb842:	89 04 24             	mov    %eax,(%esp)
 8adb845:	e8 76 76 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adb84a:	89 c7                	mov    %eax,%edi
 8adb84c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb84f:	89 04 24             	mov    %eax,(%esp)
 8adb852:	e8 45 1a 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adb857:	89 c6                	mov    %eax,%esi
 8adb859:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb85c:	89 04 24             	mov    %eax,(%esp)
 8adb85f:	e8 5c 76 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adb864:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8adb867:	89 54 24 10          	mov    %edx,0x10(%esp)
 8adb86b:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8adb86f:	89 74 24 08          	mov    %esi,0x8(%esp)
 8adb873:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adb877:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8adb87a:	89 04 24             	mov    %eax,(%esp)
 8adb87d:	e8 bc fd ff ff       	call   8adb63e <_ZN10WideString6concatEPKwiS1_i>
 8adb882:	83 ec 04             	sub    $0x4,%esp
 8adb885:	89 d8                	mov    %ebx,%eax
 8adb887:	89 d8                	mov    %ebx,%eax
 8adb889:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8adb88c:	83 c4 00             	add    $0x0,%esp
 8adb88f:	5b                   	pop    %ebx
 8adb890:	5e                   	pop    %esi
 8adb891:	5f                   	pop    %edi
 8adb892:	5d                   	pop    %ebp
 8adb893:	c2 04 00             	ret    $0x4

```

```c
// WideString::concat @ 0x8adb7d4

WideString *
WideString::concat(WideString *__return_storage_ptr__,WideString *src1,WideString *src2)

{
  int32 iVar1;
  wchar *src2_00;
  int32 len1;
  wchar *src1_00;
  
  iVar1 = length(src1);
  if (iVar1 == 0) {
    WideString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      WideString(__return_storage_ptr__,src1);
    }
    else {
      iVar1 = length(src2);
      src2_00 = c_str(src2);
      len1 = length(src1);
      src1_00 = c_str(src1);
      concat(__return_storage_ptr__,src1_00,len1,src2_00,iVar1);
    }
  }
  return __return_storage_ptr__;
}

```

---

## concat_08adb896

```asm
// === 08adb896 WideString::concat  [0x08adb896-0x8adb97d] ===
 8adb896:	55                   	push   %ebp
 8adb897:	89 e5                	mov    %esp,%ebp
 8adb899:	57                   	push   %edi
 8adb89a:	56                   	push   %esi
 8adb89b:	53                   	push   %ebx
 8adb89c:	83 ec 2c             	sub    $0x2c,%esp
 8adb89f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adb8a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb8a5:	89 04 24             	mov    %eax,(%esp)
 8adb8a8:	e8 ef 19 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adb8ad:	85 c0                	test   %eax,%eax
 8adb8af:	0f 94 c0             	sete   %al
 8adb8b2:	84 c0                	test   %al,%al
 8adb8b4:	74 16                	je     8adb8cc <_ZN10WideString6concatERKS_w+0x36>
 8adb8b6:	89 d8                	mov    %ebx,%eax
 8adb8b8:	8b 55 10             	mov    0x10(%ebp),%edx
 8adb8bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adb8bf:	89 04 24             	mov    %eax,(%esp)
 8adb8c2:	e8 f9 e2 ff ff       	call   8ad9bc0 <_ZN10WideStringC1Ew>
 8adb8c7:	e9 a3 00 00 00       	jmp    8adb96f <_ZN10WideString6concatERKS_w+0xd9>
 8adb8cc:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8adb8d0:	75 16                	jne    8adb8e8 <_ZN10WideString6concatERKS_w+0x52>
 8adb8d2:	89 d8                	mov    %ebx,%eax
 8adb8d4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adb8d7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adb8db:	89 04 24             	mov    %eax,(%esp)
 8adb8de:	e8 37 e1 ff ff       	call   8ad9a1a <_ZN10WideStringC1ERKS_>
 8adb8e3:	e9 87 00 00 00       	jmp    8adb96f <_ZN10WideString6concatERKS_w+0xd9>
 8adb8e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb8eb:	89 04 24             	mov    %eax,(%esp)
 8adb8ee:	e8 a9 19 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adb8f3:	83 c0 01             	add    $0x1,%eax
 8adb8f6:	89 04 24             	mov    %eax,(%esp)
 8adb8f9:	e8 ce e0 ff ff       	call   8ad99cc <_ZN14WideStringData16createTerminatedEi>
 8adb8fe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8adb901:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb904:	89 04 24             	mov    %eax,(%esp)
 8adb907:	e8 90 19 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adb90c:	8d 3c 85 00 00 00 00 	lea    0x0(,%eax,4),%edi
 8adb913:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb916:	89 04 24             	mov    %eax,(%esp)
 8adb919:	e8 a2 75 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adb91e:	89 c6                	mov    %eax,%esi
 8adb920:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8adb923:	89 04 24             	mov    %eax,(%esp)
 8adb926:	e8 63 e0 ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8adb92b:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8adb92f:	89 74 24 04          	mov    %esi,0x4(%esp)
 8adb933:	89 04 24             	mov    %eax,(%esp)
 8adb936:	e8 65 1f 5a ff       	call   807d8a0 <memcpy@plt>
 8adb93b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8adb93e:	89 04 24             	mov    %eax,(%esp)
 8adb941:	e8 48 e0 ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8adb946:	89 c6                	mov    %eax,%esi
 8adb948:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb94b:	89 04 24             	mov    %eax,(%esp)
 8adb94e:	e8 49 19 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adb953:	c1 e0 02             	shl    $0x2,%eax
 8adb956:	8d 14 06             	lea    (%esi,%eax,1),%edx
 8adb959:	8b 45 10             	mov    0x10(%ebp),%eax
 8adb95c:	89 02                	mov    %eax,(%edx)
 8adb95e:	89 d8                	mov    %ebx,%eax
 8adb960:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8adb963:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adb967:	89 04 24             	mov    %eax,(%esp)
 8adb96a:	e8 8b e2 ff ff       	call   8ad9bfa <_ZN10WideStringC1EP14WideStringData>
 8adb96f:	89 d8                	mov    %ebx,%eax
 8adb971:	89 d8                	mov    %ebx,%eax
 8adb973:	83 c4 2c             	add    $0x2c,%esp
 8adb976:	5b                   	pop    %ebx
 8adb977:	5e                   	pop    %esi
 8adb978:	5f                   	pop    %edi
 8adb979:	5d                   	pop    %ebp
 8adb97a:	c2 04 00             	ret    $0x4
 8adb97d:	90                   	nop

```

```c
// WideString::concat @ 0x8adb896

WideString * WideString::concat(WideString *__return_storage_ptr__,WideString *src1,wchar src2)

{
  int32 iVar1;
  WideStringData *this;
  wchar *pwVar2;
  wchar *__dest;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  iVar1 = length(src1);
  if (iVar1 == 0) {
    WideString(__return_storage_ptr__,src2);
  }
  else if (src2 == 0) {
    WideString(__return_storage_ptr__,src1);
  }
  else {
    iVar1 = length(src1);
    this = WideStringData::createTerminated(iVar1 + 1);
    iVar1 = length(src1);
    pwVar2 = c_str(src1);
    __dest = WideStringData::getBuffer(this);
    memcpy(__dest,pwVar2,iVar1 * 4);
    pwVar2 = WideStringData::getBuffer(this);
    iVar1 = length(src1);
    pwVar2[iVar1] = src2;
    WideString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}

```

---

## concat_08adb97e

```asm
// === 08adb97e WideString::concat  [0x08adb97e-0x8adb9c3] ===
 8adb97e:	55                   	push   %ebp
 8adb97f:	89 e5                	mov    %esp,%ebp
 8adb981:	56                   	push   %esi
 8adb982:	53                   	push   %ebx
 8adb983:	83 ec 10             	sub    $0x10,%esp
 8adb986:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adb989:	89 de                	mov    %ebx,%esi
 8adb98b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb98e:	89 04 24             	mov    %eax,(%esp)
 8adb991:	e8 9a 27 5a ff       	call   807e130 <wcslen@plt>
 8adb996:	8b 55 10             	mov    0x10(%ebp),%edx
 8adb999:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8adb99d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8adb9a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adb9a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adb9a8:	89 34 24             	mov    %esi,(%esp)
 8adb9ab:	e8 14 00 00 00       	call   8adb9c4 <_ZN10WideString6concatEPKwiRKS_>
 8adb9b0:	83 ec 04             	sub    $0x4,%esp
 8adb9b3:	89 d8                	mov    %ebx,%eax
 8adb9b5:	89 d8                	mov    %ebx,%eax
 8adb9b7:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8adb9ba:	83 c4 00             	add    $0x0,%esp
 8adb9bd:	5b                   	pop    %ebx
 8adb9be:	5e                   	pop    %esi
 8adb9bf:	5d                   	pop    %ebp
 8adb9c0:	c2 04 00             	ret    $0x4
 8adb9c3:	90                   	nop

```

```c
// WideString::concat @ 0x8adb97e

WideString * WideString::concat(WideString *__return_storage_ptr__,wchar *src1,WideString *src2)

{
  size_t len1;
  
  len1 = wcslen(src1);
  concat(__return_storage_ptr__,src1,len1,src2);
  return __return_storage_ptr__;
}

```

---

## concat_08adb9c4

```asm
// === 08adb9c4 WideString::concat  [0x08adb9c4-0x8adba63] ===
 8adb9c4:	55                   	push   %ebp
 8adb9c5:	89 e5                	mov    %esp,%ebp
 8adb9c7:	57                   	push   %edi
 8adb9c8:	56                   	push   %esi
 8adb9c9:	53                   	push   %ebx
 8adb9ca:	83 ec 2c             	sub    $0x2c,%esp
 8adb9cd:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adb9d0:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8adb9d4:	75 13                	jne    8adb9e9 <_ZN10WideString6concatEPKwiRKS_+0x25>
 8adb9d6:	89 d8                	mov    %ebx,%eax
 8adb9d8:	8b 55 14             	mov    0x14(%ebp),%edx
 8adb9db:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adb9df:	89 04 24             	mov    %eax,(%esp)
 8adb9e2:	e8 33 e0 ff ff       	call   8ad9a1a <_ZN10WideStringC1ERKS_>
 8adb9e7:	eb 69                	jmp    8adba52 <_ZN10WideString6concatEPKwiRKS_+0x8e>
 8adb9e9:	8b 45 14             	mov    0x14(%ebp),%eax
 8adb9ec:	89 04 24             	mov    %eax,(%esp)
 8adb9ef:	e8 a8 18 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adb9f4:	85 c0                	test   %eax,%eax
 8adb9f6:	0f 94 c0             	sete   %al
 8adb9f9:	84 c0                	test   %al,%al
 8adb9fb:	74 1a                	je     8adba17 <_ZN10WideString6concatEPKwiRKS_+0x53>
 8adb9fd:	89 d8                	mov    %ebx,%eax
 8adb9ff:	8b 55 10             	mov    0x10(%ebp),%edx
 8adba02:	89 54 24 08          	mov    %edx,0x8(%esp)
 8adba06:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adba09:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adba0d:	89 04 24             	mov    %eax,(%esp)
 8adba10:	e8 ad e0 ff ff       	call   8ad9ac2 <_ZN10WideStringC1EPKwi>
 8adba15:	eb 3b                	jmp    8adba52 <_ZN10WideString6concatEPKwiRKS_+0x8e>
 8adba17:	89 df                	mov    %ebx,%edi
 8adba19:	8b 45 14             	mov    0x14(%ebp),%eax
 8adba1c:	89 04 24             	mov    %eax,(%esp)
 8adba1f:	e8 78 18 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adba24:	89 c6                	mov    %eax,%esi
 8adba26:	8b 45 14             	mov    0x14(%ebp),%eax
 8adba29:	89 04 24             	mov    %eax,(%esp)
 8adba2c:	e8 8f 74 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adba31:	89 74 24 10          	mov    %esi,0x10(%esp)
 8adba35:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8adba39:	8b 45 10             	mov    0x10(%ebp),%eax
 8adba3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8adba40:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adba43:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adba47:	89 3c 24             	mov    %edi,(%esp)
 8adba4a:	e8 ef fb ff ff       	call   8adb63e <_ZN10WideString6concatEPKwiS1_i>
 8adba4f:	83 ec 04             	sub    $0x4,%esp
 8adba52:	89 d8                	mov    %ebx,%eax
 8adba54:	89 d8                	mov    %ebx,%eax
 8adba56:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8adba59:	83 c4 00             	add    $0x0,%esp
 8adba5c:	5b                   	pop    %ebx
 8adba5d:	5e                   	pop    %esi
 8adba5e:	5f                   	pop    %edi
 8adba5f:	5d                   	pop    %ebp
 8adba60:	c2 04 00             	ret    $0x4
 8adba63:	90                   	nop

```

```c
// WideString::concat @ 0x8adb9c4

WideString *
WideString::concat(WideString *__return_storage_ptr__,wchar *src1,int32 len1,WideString *src2)

{
  int32 iVar1;
  wchar *src2_00;
  
  if (len1 == 0) {
    WideString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      WideString(__return_storage_ptr__,src1,len1);
    }
    else {
      iVar1 = length(src2);
      src2_00 = c_str(src2);
      concat(__return_storage_ptr__,src1,len1,src2_00,iVar1);
    }
  }
  return __return_storage_ptr__;
}

```

---

## concat_08adba64

```asm
// === 08adba64 WideString::concat  [0x08adba64-0x8adbb37] ===
 8adba64:	55                   	push   %ebp
 8adba65:	89 e5                	mov    %esp,%ebp
 8adba67:	57                   	push   %edi
 8adba68:	56                   	push   %esi
 8adba69:	53                   	push   %ebx
 8adba6a:	83 ec 2c             	sub    $0x2c,%esp
 8adba6d:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adba70:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8adba74:	75 16                	jne    8adba8c <_ZN10WideString6concatEwRKS_+0x28>
 8adba76:	89 d8                	mov    %ebx,%eax
 8adba78:	8b 55 10             	mov    0x10(%ebp),%edx
 8adba7b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adba7f:	89 04 24             	mov    %eax,(%esp)
 8adba82:	e8 93 df ff ff       	call   8ad9a1a <_ZN10WideStringC1ERKS_>
 8adba87:	e9 9e 00 00 00       	jmp    8adbb2a <_ZN10WideString6concatEwRKS_+0xc6>
 8adba8c:	8b 45 10             	mov    0x10(%ebp),%eax
 8adba8f:	89 04 24             	mov    %eax,(%esp)
 8adba92:	e8 05 18 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adba97:	85 c0                	test   %eax,%eax
 8adba99:	0f 94 c0             	sete   %al
 8adba9c:	84 c0                	test   %al,%al
 8adba9e:	74 13                	je     8adbab3 <_ZN10WideString6concatEwRKS_+0x4f>
 8adbaa0:	89 d8                	mov    %ebx,%eax
 8adbaa2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adbaa5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adbaa9:	89 04 24             	mov    %eax,(%esp)
 8adbaac:	e8 0f e1 ff ff       	call   8ad9bc0 <_ZN10WideStringC1Ew>
 8adbab1:	eb 77                	jmp    8adbb2a <_ZN10WideString6concatEwRKS_+0xc6>
 8adbab3:	8b 45 10             	mov    0x10(%ebp),%eax
 8adbab6:	89 04 24             	mov    %eax,(%esp)
 8adbab9:	e8 de 17 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adbabe:	83 c0 01             	add    $0x1,%eax
 8adbac1:	89 04 24             	mov    %eax,(%esp)
 8adbac4:	e8 03 df ff ff       	call   8ad99cc <_ZN14WideStringData16createTerminatedEi>
 8adbac9:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8adbacc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8adbacf:	89 04 24             	mov    %eax,(%esp)
 8adbad2:	e8 b7 de ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8adbad7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adbada:	89 10                	mov    %edx,(%eax)
 8adbadc:	8b 45 10             	mov    0x10(%ebp),%eax
 8adbadf:	89 04 24             	mov    %eax,(%esp)
 8adbae2:	e8 b5 17 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adbae7:	8d 3c 85 00 00 00 00 	lea    0x0(,%eax,4),%edi
 8adbaee:	8b 45 10             	mov    0x10(%ebp),%eax
 8adbaf1:	89 04 24             	mov    %eax,(%esp)
 8adbaf4:	e8 c7 73 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adbaf9:	89 c6                	mov    %eax,%esi
 8adbafb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8adbafe:	89 04 24             	mov    %eax,(%esp)
 8adbb01:	e8 88 de ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8adbb06:	83 c0 04             	add    $0x4,%eax
 8adbb09:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8adbb0d:	89 74 24 04          	mov    %esi,0x4(%esp)
 8adbb11:	89 04 24             	mov    %eax,(%esp)
 8adbb14:	e8 87 1d 5a ff       	call   807d8a0 <memcpy@plt>
 8adbb19:	89 d8                	mov    %ebx,%eax
 8adbb1b:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8adbb1e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adbb22:	89 04 24             	mov    %eax,(%esp)
 8adbb25:	e8 d0 e0 ff ff       	call   8ad9bfa <_ZN10WideStringC1EP14WideStringData>
 8adbb2a:	89 d8                	mov    %ebx,%eax
 8adbb2c:	89 d8                	mov    %ebx,%eax
 8adbb2e:	83 c4 2c             	add    $0x2c,%esp
 8adbb31:	5b                   	pop    %ebx
 8adbb32:	5e                   	pop    %esi
 8adbb33:	5f                   	pop    %edi
 8adbb34:	5d                   	pop    %ebp
 8adbb35:	c2 04 00             	ret    $0x4

```

```c
// WideString::concat @ 0x8adba64

WideString * WideString::concat(WideString *__return_storage_ptr__,wchar src1,WideString *src2)

{
  int32 iVar1;
  WideStringData *this;
  wchar *pwVar2;
  wchar *pwVar3;
  
                    /* Unresolved local var: WideStringData * newData@[???] */
  if (src1 == 0) {
    WideString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      WideString(__return_storage_ptr__,src1);
    }
    else {
      iVar1 = length(src2);
      this = WideStringData::createTerminated(iVar1 + 1);
      pwVar2 = WideStringData::getBuffer(this);
      *pwVar2 = src1;
      iVar1 = length(src2);
      pwVar2 = c_str(src2);
      pwVar3 = WideStringData::getBuffer(this);
      memcpy(pwVar3 + 1,pwVar2,iVar1 * 4);
      WideString(__return_storage_ptr__,this);
    }
  }
  return __return_storage_ptr__;
}

```

---

## end

```asm
// === 08ad9f7e WideString::end  [0x08ad9f7e-0x8ad9fa1] ===
 8ad9f7e:	55                   	push   %ebp
 8ad9f7f:	89 e5                	mov    %esp,%ebp
 8ad9f81:	53                   	push   %ebx
 8ad9f82:	83 ec 14             	sub    $0x14,%esp
 8ad9f85:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9f88:	8b 18                	mov    (%eax),%ebx
 8ad9f8a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9f8d:	89 04 24             	mov    %eax,(%esp)
 8ad9f90:	e8 07 33 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ad9f95:	c1 e0 02             	shl    $0x2,%eax
 8ad9f98:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8ad9f9b:	83 c4 14             	add    $0x14,%esp
 8ad9f9e:	5b                   	pop    %ebx
 8ad9f9f:	5d                   	pop    %ebp
 8ad9fa0:	c3                   	ret
 8ad9fa1:	90                   	nop

```

```c
// WideString::end @ 0x8ad9f7e

/* DWARF original prototype: const_iterator end(WideString * this) */

const_iterator __thiscall WideString::end(WideString *this)

{
  wchar *pwVar1;
  int32 iVar2;
  
  pwVar1 = this->buffer_;
  iVar2 = length(this);
  return pwVar1 + iVar2;
}

```

---

## endsWith

```asm
// === 08ad9e58 WideString::endsWith  [0x08ad9e58-0x8ad9f29] ===
 8ad9e58:	55                   	push   %ebp
 8ad9e59:	89 e5                	mov    %esp,%ebp
 8ad9e5b:	56                   	push   %esi
 8ad9e5c:	53                   	push   %ebx
 8ad9e5d:	83 ec 30             	sub    $0x30,%esp
 8ad9e60:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad9e63:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8ad9e66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9e69:	89 04 24             	mov    %eax,(%esp)
 8ad9e6c:	e8 bf 42 5a ff       	call   807e130 <wcslen@plt>
 8ad9e71:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad9e74:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9e77:	89 04 24             	mov    %eax,(%esp)
 8ad9e7a:	e8 1d 34 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ad9e7f:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8ad9e82:	0f 9c c0             	setl   %al
 8ad9e85:	84 c0                	test   %al,%al
 8ad9e87:	74 0a                	je     8ad9e93 <_ZNK10WideString8endsWithEPKwb+0x3b>
 8ad9e89:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad9e8e:	e9 90 00 00 00       	jmp    8ad9f23 <_ZNK10WideString8endsWithEPKwb+0xcb>
 8ad9e93:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8ad9e97:	74 46                	je     8ad9edf <_ZNK10WideString8endsWithEPKwb+0x87>
 8ad9e99:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad9e9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9e9f:	89 04 24             	mov    %eax,(%esp)
 8ad9ea2:	e8 19 90 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ad9ea7:	89 c6                	mov    %eax,%esi
 8ad9ea9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9eac:	89 04 24             	mov    %eax,(%esp)
 8ad9eaf:	e8 e8 33 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ad9eb4:	89 c2                	mov    %eax,%edx
 8ad9eb6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9eb9:	89 d1                	mov    %edx,%ecx
 8ad9ebb:	29 c1                	sub    %eax,%ecx
 8ad9ebd:	89 c8                	mov    %ecx,%eax
 8ad9ebf:	c1 e0 02             	shl    $0x2,%eax
 8ad9ec2:	8d 14 06             	lea    (%esi,%eax,1),%edx
 8ad9ec5:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad9ec9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9ecc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9ed0:	89 14 24             	mov    %edx,(%esp)
 8ad9ed3:	e8 c8 47 5a ff       	call   807e6a0 <wcsncasecmp@plt>
 8ad9ed8:	85 c0                	test   %eax,%eax
 8ad9eda:	0f 94 c0             	sete   %al
 8ad9edd:	eb 44                	jmp    8ad9f23 <_ZNK10WideString8endsWithEPKwb+0xcb>
 8ad9edf:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad9ee2:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9ee5:	89 04 24             	mov    %eax,(%esp)
 8ad9ee8:	e8 d3 8f fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ad9eed:	89 c6                	mov    %eax,%esi
 8ad9eef:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9ef2:	89 04 24             	mov    %eax,(%esp)
 8ad9ef5:	e8 a2 33 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ad9efa:	89 c2                	mov    %eax,%edx
 8ad9efc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9eff:	89 d1                	mov    %edx,%ecx
 8ad9f01:	29 c1                	sub    %eax,%ecx
 8ad9f03:	89 c8                	mov    %ecx,%eax
 8ad9f05:	c1 e0 02             	shl    $0x2,%eax
 8ad9f08:	8d 14 06             	lea    (%esi,%eax,1),%edx
 8ad9f0b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad9f0f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9f12:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9f16:	89 14 24             	mov    %edx,(%esp)
 8ad9f19:	e8 72 40 5a ff       	call   807df90 <wcsncmp@plt>
 8ad9f1e:	85 c0                	test   %eax,%eax
 8ad9f20:	0f 94 c0             	sete   %al
 8ad9f23:	83 c4 30             	add    $0x30,%esp
 8ad9f26:	5b                   	pop    %ebx
 8ad9f27:	5e                   	pop    %esi
 8ad9f28:	5d                   	pop    %ebp
 8ad9f29:	c3                   	ret

```

```c
// WideString::endsWith @ 0x8ad9e58

/* DWARF original prototype: bool endsWith(WideString * this, wchar * pat, bool isIgnoreCase) */

bool __thiscall WideString::endsWith(WideString *this,wchar *pat,bool isIgnoreCase)

{
  size_t __n;
  int32 iVar1;
  wchar *pwVar2;
  int iVar3;
  bool bVar4;
  
                    /* Unresolved local var: int32 patLength@[???] */
  __n = wcslen(pat);
  iVar1 = length(this);
  if (iVar1 < (int)__n) {
    bVar4 = false;
  }
  else if (isIgnoreCase) {
    pwVar2 = c_str(this);
    iVar1 = length(this);
    iVar3 = wcsncasecmp(pwVar2 + (iVar1 - __n),pat,__n);
    bVar4 = iVar3 == 0;
  }
  else {
    pwVar2 = c_str(this);
    iVar1 = length(this);
    iVar3 = wcsncmp(pwVar2 + (iVar1 - __n),pat,__n);
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}

```

---

## find

```asm
// === 08ada222 WideString::find  [0x08ada222-0x8ada253] ===
 8ada222:	55                   	push   %ebp
 8ada223:	89 e5                	mov    %esp,%ebp
 8ada225:	83 ec 18             	sub    $0x18,%esp
 8ada228:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada22b:	89 04 24             	mov    %eax,(%esp)
 8ada22e:	e8 fd 3e 5a ff       	call   807e130 <wcslen@plt>
 8ada233:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ada237:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada23a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ada23e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ada245:	00 
 8ada246:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada249:	89 04 24             	mov    %eax,(%esp)
 8ada24c:	e8 5d 00 00 00       	call   8ada2ae <_ZNK10WideString4findEiPKwi>
 8ada251:	c9                   	leave
 8ada252:	c3                   	ret
 8ada253:	90                   	nop

```

```c
// WideString::find @ 0x8ada222

/* DWARF original prototype: int32 find(WideString * this, wchar * pat) */

int32 __thiscall WideString::find(WideString *this,wchar *pat)

{
  size_t patLength;
  int32 iVar1;
  
  patLength = wcslen(pat);
  iVar1 = find(this,0,pat,patLength);
  return iVar1;
}

```

---

## find_08ada254

```asm
// === 08ada254 WideString::find  [0x08ada254-0x8ada283] ===
 8ada254:	55                   	push   %ebp
 8ada255:	89 e5                	mov    %esp,%ebp
 8ada257:	83 ec 18             	sub    $0x18,%esp
 8ada25a:	8b 45 10             	mov    0x10(%ebp),%eax
 8ada25d:	89 04 24             	mov    %eax,(%esp)
 8ada260:	e8 cb 3e 5a ff       	call   807e130 <wcslen@plt>
 8ada265:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ada269:	8b 45 10             	mov    0x10(%ebp),%eax
 8ada26c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ada270:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada273:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada277:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada27a:	89 04 24             	mov    %eax,(%esp)
 8ada27d:	e8 2c 00 00 00       	call   8ada2ae <_ZNK10WideString4findEiPKwi>
 8ada282:	c9                   	leave
 8ada283:	c3                   	ret

```

```c
// WideString::find @ 0x8ada254

/* DWARF original prototype: int32 find(WideString * this, int32 pos, wchar * pat) */

int32 __thiscall WideString::find(WideString *this,int32 pos,wchar *pat)

{
  size_t patLength;
  int32 iVar1;
  
  patLength = wcslen(pat);
  iVar1 = find(this,pos,pat,patLength);
  return iVar1;
}

```

---

## find_08ada284

```asm
// === 08ada284 WideString::find  [0x08ada284-0x8ada2ad] ===
 8ada284:	55                   	push   %ebp
 8ada285:	89 e5                	mov    %esp,%ebp
 8ada287:	83 ec 18             	sub    $0x18,%esp
 8ada28a:	8b 45 10             	mov    0x10(%ebp),%eax
 8ada28d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ada291:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada294:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ada298:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ada29f:	00 
 8ada2a0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada2a3:	89 04 24             	mov    %eax,(%esp)
 8ada2a6:	e8 03 00 00 00       	call   8ada2ae <_ZNK10WideString4findEiPKwi>
 8ada2ab:	c9                   	leave
 8ada2ac:	c3                   	ret
 8ada2ad:	90                   	nop

```

```c
// WideString::find @ 0x8ada284

/* DWARF original prototype: int32 find(WideString * this, wchar * pat, int32 patLength) */

int32 __thiscall WideString::find(WideString *this,wchar *pat,int32 patLength)

{
  int32 iVar1;
  
  iVar1 = find(this,0,pat,patLength);
  return iVar1;
}

```

---

## find_08ada2ae

```asm
// === 08ada2ae WideString::find  [0x08ada2ae-0x8ada361] ===
 8ada2ae:	55                   	push   %ebp
 8ada2af:	89 e5                	mov    %esp,%ebp
 8ada2b1:	83 ec 28             	sub    $0x28,%esp
 8ada2b4:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8ada2b8:	75 0a                	jne    8ada2c4 <_ZNK10WideString4findEiPKwi+0x16>
 8ada2ba:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ada2bf:	e9 9c 00 00 00       	jmp    8ada360 <_ZNK10WideString4findEiPKwi+0xb2>
 8ada2c4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ada2c8:	78 13                	js     8ada2dd <_ZNK10WideString4findEiPKwi+0x2f>
 8ada2ca:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada2cd:	89 04 24             	mov    %eax,(%esp)
 8ada2d0:	e8 c7 2f 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada2d5:	2b 45 0c             	sub    0xc(%ebp),%eax
 8ada2d8:	3b 45 14             	cmp    0x14(%ebp),%eax
 8ada2db:	7d 07                	jge    8ada2e4 <_ZNK10WideString4findEiPKwi+0x36>
 8ada2dd:	b8 01 00 00 00       	mov    $0x1,%eax
 8ada2e2:	eb 05                	jmp    8ada2e9 <_ZNK10WideString4findEiPKwi+0x3b>
 8ada2e4:	b8 00 00 00 00       	mov    $0x0,%eax
 8ada2e9:	84 c0                	test   %al,%al
 8ada2eb:	74 07                	je     8ada2f4 <_ZNK10WideString4findEiPKwi+0x46>
 8ada2ed:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ada2f2:	eb 6c                	jmp    8ada360 <_ZNK10WideString4findEiPKwi+0xb2>
 8ada2f4:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada2f7:	89 04 24             	mov    %eax,(%esp)
 8ada2fa:	e8 c1 8b fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ada2ff:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ada302:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada305:	89 04 24             	mov    %eax,(%esp)
 8ada308:	e8 8f 2f 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada30d:	2b 45 14             	sub    0x14(%ebp),%eax
 8ada310:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ada313:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada316:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ada319:	eb 33                	jmp    8ada34e <_ZNK10WideString4findEiPKwi+0xa0>
 8ada31b:	8b 45 14             	mov    0x14(%ebp),%eax
 8ada31e:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 8ada325:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada328:	c1 e0 02             	shl    $0x2,%eax
 8ada32b:	03 45 ec             	add    -0x14(%ebp),%eax
 8ada32e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ada332:	8b 55 10             	mov    0x10(%ebp),%edx
 8ada335:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ada339:	89 04 24             	mov    %eax,(%esp)
 8ada33c:	e8 4f 39 5a ff       	call   807dc90 <memcmp@plt>
 8ada341:	85 c0                	test   %eax,%eax
 8ada343:	75 05                	jne    8ada34a <_ZNK10WideString4findEiPKwi+0x9c>
 8ada345:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada348:	eb 16                	jmp    8ada360 <_ZNK10WideString4findEiPKwi+0xb2>
 8ada34a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8ada34e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada351:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8ada354:	0f 9e c0             	setle  %al
 8ada357:	84 c0                	test   %al,%al
 8ada359:	75 c0                	jne    8ada31b <_ZNK10WideString4findEiPKwi+0x6d>
 8ada35b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ada360:	c9                   	leave
 8ada361:	c3                   	ret

```

```c
// WideString::find @ 0x8ada2ae

/* DWARF original prototype: int32 find(WideString * this, int32 pos, wchar * pat, int32 patLength)
    */

int32 __thiscall WideString::find(WideString *this,int32 pos,wchar *pat,int32 patLength)

{
  bool bVar1;
  int32 iVar2;
  wchar *pwVar3;
  int iVar4;
  int32 local_10;
  
                    /* Unresolved local var: wchar * strBuf@[???]
                       Unresolved local var: int32 endPos@[???] */
  if (patLength != 0) {
    if ((pos < 0) || (iVar2 = length(this), iVar2 - pos < patLength)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pwVar3 = c_str(this);
      iVar2 = length(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; local_10 <= iVar2 - patLength; local_10 = local_10 + 1) {
        iVar4 = memcmp(pwVar3 + local_10,pat,patLength * 4);
        if (iVar4 == 0) {
          return local_10;
        }
      }
    }
  }
  return -1;
}

```

---

## find_08ada362

```asm
// === 08ada362 WideString::find  [0x08ada362-0x8ada3a1] ===
 8ada362:	55                   	push   %ebp
 8ada363:	89 e5                	mov    %esp,%ebp
 8ada365:	53                   	push   %ebx
 8ada366:	83 ec 14             	sub    $0x14,%esp
 8ada369:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada36c:	89 04 24             	mov    %eax,(%esp)
 8ada36f:	e8 28 2f 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada374:	89 c3                	mov    %eax,%ebx
 8ada376:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada379:	89 04 24             	mov    %eax,(%esp)
 8ada37c:	e8 3f 8b fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ada381:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8ada385:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ada389:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ada390:	00 
 8ada391:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada394:	89 04 24             	mov    %eax,(%esp)
 8ada397:	e8 12 ff ff ff       	call   8ada2ae <_ZNK10WideString4findEiPKwi>
 8ada39c:	83 c4 14             	add    $0x14,%esp
 8ada39f:	5b                   	pop    %ebx
 8ada3a0:	5d                   	pop    %ebp
 8ada3a1:	c3                   	ret

```

```c
// WideString::find @ 0x8ada362

/* DWARF original prototype: int32 find(WideString * this, WideString * pat) */

int32 __thiscall WideString::find(WideString *this,WideString *pat)

{
  int32 iVar1;
  wchar *pat_00;
  
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar1 = find(this,0,pat_00,iVar1);
  return iVar1;
}

```

---

## find_08ada3a2

```asm
// === 08ada3a2 WideString::find  [0x08ada3a2-0x8ada3e1] ===
 8ada3a2:	55                   	push   %ebp
 8ada3a3:	89 e5                	mov    %esp,%ebp
 8ada3a5:	53                   	push   %ebx
 8ada3a6:	83 ec 14             	sub    $0x14,%esp
 8ada3a9:	8b 45 10             	mov    0x10(%ebp),%eax
 8ada3ac:	89 04 24             	mov    %eax,(%esp)
 8ada3af:	e8 e8 2e 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada3b4:	89 c3                	mov    %eax,%ebx
 8ada3b6:	8b 45 10             	mov    0x10(%ebp),%eax
 8ada3b9:	89 04 24             	mov    %eax,(%esp)
 8ada3bc:	e8 ff 8a fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ada3c1:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8ada3c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ada3c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada3cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada3d0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada3d3:	89 04 24             	mov    %eax,(%esp)
 8ada3d6:	e8 d3 fe ff ff       	call   8ada2ae <_ZNK10WideString4findEiPKwi>
 8ada3db:	83 c4 14             	add    $0x14,%esp
 8ada3de:	5b                   	pop    %ebx
 8ada3df:	5d                   	pop    %ebp
 8ada3e0:	c3                   	ret
 8ada3e1:	90                   	nop

```

```c
// WideString::find @ 0x8ada3a2

/* DWARF original prototype: int32 find(WideString * this, int32 pos, WideString * pat) */

int32 __thiscall WideString::find(WideString *this,int32 pos,WideString *pat)

{
  int32 iVar1;
  wchar *pat_00;
  
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar1 = find(this,pos,pat_00,iVar1);
  return iVar1;
}

```

---

## find_08ada3e2

```asm
// === 08ada3e2 WideString::find  [0x08ada3e2-0x8ada403] ===
 8ada3e2:	55                   	push   %ebp
 8ada3e3:	89 e5                	mov    %esp,%ebp
 8ada3e5:	83 ec 18             	sub    $0x18,%esp
 8ada3e8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada3eb:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ada3ef:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ada3f6:	00 
 8ada3f7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada3fa:	89 04 24             	mov    %eax,(%esp)
 8ada3fd:	e8 02 00 00 00       	call   8ada404 <_ZNK10WideString4findEiw>
 8ada402:	c9                   	leave
 8ada403:	c3                   	ret

```

```c
// WideString::find @ 0x8ada3e2

/* DWARF original prototype: int32 find(WideString * this, wchar pat) */

int32 __thiscall WideString::find(WideString *this,wchar pat)

{
  int32 iVar1;
  
  iVar1 = find(this,0,pat);
  return iVar1;
}

```

---

## find_08ada404

```asm
// === 08ada404 WideString::find  [0x08ada404-0x8ada497] ===
 8ada404:	55                   	push   %ebp
 8ada405:	89 e5                	mov    %esp,%ebp
 8ada407:	83 ec 28             	sub    $0x28,%esp
 8ada40a:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ada40e:	75 07                	jne    8ada417 <_ZNK10WideString4findEiw+0x13>
 8ada410:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ada415:	eb 7f                	jmp    8ada496 <_ZNK10WideString4findEiw+0x92>
 8ada417:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ada41b:	78 10                	js     8ada42d <_ZNK10WideString4findEiw+0x29>
 8ada41d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada420:	89 04 24             	mov    %eax,(%esp)
 8ada423:	e8 74 2e 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada428:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8ada42b:	7f 07                	jg     8ada434 <_ZNK10WideString4findEiw+0x30>
 8ada42d:	b8 01 00 00 00       	mov    $0x1,%eax
 8ada432:	eb 05                	jmp    8ada439 <_ZNK10WideString4findEiw+0x35>
 8ada434:	b8 00 00 00 00       	mov    $0x0,%eax
 8ada439:	84 c0                	test   %al,%al
 8ada43b:	74 07                	je     8ada444 <_ZNK10WideString4findEiw+0x40>
 8ada43d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ada442:	eb 52                	jmp    8ada496 <_ZNK10WideString4findEiw+0x92>
 8ada444:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada447:	89 04 24             	mov    %eax,(%esp)
 8ada44a:	e8 71 8a fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ada44f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ada452:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada455:	89 04 24             	mov    %eax,(%esp)
 8ada458:	e8 3f 2e 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada45d:	83 e8 01             	sub    $0x1,%eax
 8ada460:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ada463:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada466:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ada469:	eb 19                	jmp    8ada484 <_ZNK10WideString4findEiw+0x80>
 8ada46b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada46e:	c1 e0 02             	shl    $0x2,%eax
 8ada471:	03 45 ec             	add    -0x14(%ebp),%eax
 8ada474:	8b 00                	mov    (%eax),%eax
 8ada476:	3b 45 10             	cmp    0x10(%ebp),%eax
 8ada479:	75 05                	jne    8ada480 <_ZNK10WideString4findEiw+0x7c>
 8ada47b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada47e:	eb 16                	jmp    8ada496 <_ZNK10WideString4findEiw+0x92>
 8ada480:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8ada484:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada487:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8ada48a:	0f 9e c0             	setle  %al
 8ada48d:	84 c0                	test   %al,%al
 8ada48f:	75 da                	jne    8ada46b <_ZNK10WideString4findEiw+0x67>
 8ada491:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ada496:	c9                   	leave
 8ada497:	c3                   	ret

```

```c
// WideString::find @ 0x8ada404

/* DWARF original prototype: int32 find(WideString * this, int32 pos, wchar pat) */

int32 __thiscall WideString::find(WideString *this,int32 pos,wchar pat)

{
  bool bVar1;
  int32 iVar2;
  wchar *pwVar3;
  int32 local_10;
  
                    /* Unresolved local var: wchar * strBuf@[???]
                       Unresolved local var: int32 endPos@[???] */
  if (pat != 0) {
    if ((pos < 0) || (iVar2 = length(this), iVar2 <= pos)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pwVar3 = c_str(this);
      iVar2 = length(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; local_10 <= iVar2 + -1; local_10 = local_10 + 1) {
        if (pwVar3[local_10] == pat) {
          return local_10;
        }
      }
    }
  }
  return -1;
}

```

---

## format

```asm
// === 08adbbe4 WideString::format  [0x08adbbe4-0x8adbc87] ===
 8adbbe4:	55                   	push   %ebp
 8adbbe5:	89 e5                	mov    %esp,%ebp
 8adbbe7:	57                   	push   %edi
 8adbbe8:	56                   	push   %esi
 8adbbe9:	53                   	push   %ebx
 8adbbea:	83 ec 2c             	sub    $0x2c,%esp
 8adbbed:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adbbf0:	8d 45 10             	lea    0x10(%ebp),%eax
 8adbbf3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8adbbf6:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8adbbf9:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8adbbfd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adbc00:	89 44 24 08          	mov    %eax,0x8(%esp)
 8adbc04:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8adbc0b:	00 
 8adbc0c:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8adbc13:	e8 e8 23 5a ff       	call   807e000 <vswprintf@plt>
 8adbc18:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8adbc1b:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8adbc1f:	75 0c                	jne    8adbc2d <_ZN10WideString6formatEPKwz+0x49>
 8adbc21:	89 d8                	mov    %ebx,%eax
 8adbc23:	89 04 24             	mov    %eax,(%esp)
 8adbc26:	e8 d3 dd ff ff       	call   8ad99fe <_ZN10WideStringC1Ev>
 8adbc2b:	eb 4c                	jmp    8adbc79 <_ZN10WideString6formatEPKwz+0x95>
 8adbc2d:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8adbc30:	89 04 24             	mov    %eax,(%esp)
 8adbc33:	e8 62 dd ff ff       	call   8ad999a <_ZN14WideStringData6createEi>
 8adbc38:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8adbc3b:	8b 7d dc             	mov    -0x24(%ebp),%edi
 8adbc3e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8adbc41:	83 c0 01             	add    $0x1,%eax
 8adbc44:	89 c6                	mov    %eax,%esi
 8adbc46:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8adbc49:	89 04 24             	mov    %eax,(%esp)
 8adbc4c:	e8 3d dd ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8adbc51:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8adbc55:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adbc58:	89 54 24 08          	mov    %edx,0x8(%esp)
 8adbc5c:	89 74 24 04          	mov    %esi,0x4(%esp)
 8adbc60:	89 04 24             	mov    %eax,(%esp)
 8adbc63:	e8 8b 89 ff ff       	call   8ad45f3 <_Z12ss_vswprintfPwjPKwPc>
 8adbc68:	89 d8                	mov    %ebx,%eax
 8adbc6a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8adbc6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adbc71:	89 04 24             	mov    %eax,(%esp)
 8adbc74:	e8 81 df ff ff       	call   8ad9bfa <_ZN10WideStringC1EP14WideStringData>
 8adbc79:	89 d8                	mov    %ebx,%eax
 8adbc7b:	89 d8                	mov    %ebx,%eax
 8adbc7d:	83 c4 2c             	add    $0x2c,%esp
 8adbc80:	5b                   	pop    %ebx
 8adbc81:	5e                   	pop    %esi
 8adbc82:	5f                   	pop    %edi
 8adbc83:	5d                   	pop    %ebp
 8adbc84:	c2 04 00             	ret    $0x4
 8adbc87:	90                   	nop

```

```c
// WideString::format @ 0x8adbbe4

WideString * WideString::format(WideString *__return_storage_ptr__,wchar *formatStr,...)

{
  int length;
  WideStringData *this;
  wchar_t *buffer;
  
                    /* Unresolved local var: va_list argList@[???]
                       Unresolved local var: int32 length@[???]
                       Unresolved local var: WideStringData * newData@[???] */
  length = vswprintf((wchar_t *)0x0,0,formatStr,&stack0x0000000c);
  if (length == 0) {
    WideString(__return_storage_ptr__);
  }
  else {
    this = WideStringData::create(length);
    buffer = WideStringData::getBuffer(this);
    ss_vswprintf(buffer,length + 1,formatStr,&stack0x0000000c);
    WideString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}

```

---

## front

```asm
// === 08ad9f2a WideString::front  [0x08ad9f2a-0x8ad9f35] ===
 8ad9f2a:	55                   	push   %ebp
 8ad9f2b:	89 e5                	mov    %esp,%ebp
 8ad9f2d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9f30:	8b 00                	mov    (%eax),%eax
 8ad9f32:	8b 00                	mov    (%eax),%eax
 8ad9f34:	5d                   	pop    %ebp
 8ad9f35:	c3                   	ret

```

```c
// WideString::front @ 0x8ad9f2a

/* DWARF original prototype: wchar front(WideString * this) */

wchar __thiscall WideString::front(WideString *this)

{
  return *this->buffer_;
}

```

---

## getAt

```asm
// === 08ad9ce4 WideString::getAt  [0x08ad9ce4-0x8ad9cf7] ===
 8ad9ce4:	55                   	push   %ebp
 8ad9ce5:	89 e5                	mov    %esp,%ebp
 8ad9ce7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9cea:	8b 00                	mov    (%eax),%eax
 8ad9cec:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad9cef:	c1 e2 02             	shl    $0x2,%edx
 8ad9cf2:	01 d0                	add    %edx,%eax
 8ad9cf4:	8b 00                	mov    (%eax),%eax
 8ad9cf6:	5d                   	pop    %ebp
 8ad9cf7:	c3                   	ret

```

```c
// WideString::getAt @ 0x8ad9ce4

/* DWARF original prototype: wchar getAt(WideString * this, int32 idx) */

wchar __thiscall WideString::getAt(WideString *this,int32 idx)

{
  return this->buffer_[idx];
}

```

---

## getData

```asm
// === 08ada214 WideString::getData  [0x08ada214-0x8ada221] ===
 8ada214:	55                   	push   %ebp
 8ada215:	89 e5                	mov    %esp,%ebp
 8ada217:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada21a:	8b 00                	mov    (%eax),%eax
 8ada21c:	83 e8 08             	sub    $0x8,%eax
 8ada21f:	5d                   	pop    %ebp
 8ada220:	c3                   	ret
 8ada221:	90                   	nop

```

```c
// WideString::getData @ 0x8ada214

/* DWARF original prototype: WideStringData * getData(WideString * this) */

WideStringData * __thiscall WideString::getData(WideString *this)

{
  return (WideStringData *)(this->buffer_ + -2);
}

```

---

## getHash

```asm
// === 08ad9c74 WideString::getHash  [0x08ad9c74-0x8ad9ce3] ===
 8ad9c74:	55                   	push   %ebp
 8ad9c75:	89 e5                	mov    %esp,%ebp
 8ad9c77:	83 ec 28             	sub    $0x28,%esp
 8ad9c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9c7d:	89 04 24             	mov    %eax,(%esp)
 8ad9c80:	e8 33 36 00 00       	call   8add2b8 <_ZNK10WideString7isEmptyEv>
 8ad9c85:	84 c0                	test   %al,%al
 8ad9c87:	74 07                	je     8ad9c90 <_ZNK10WideString7getHashEv+0x1c>
 8ad9c89:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad9c8e:	eb 52                	jmp    8ad9ce2 <_ZNK10WideString7getHashEv+0x6e>
 8ad9c90:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8ad9c97:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9c9a:	8b 00                	mov    (%eax),%eax
 8ad9c9c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad9c9f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad9ca2:	8b 00                	mov    (%eax),%eax
 8ad9ca4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad9ca7:	83 45 f0 04          	addl   $0x4,-0x10(%ebp)
 8ad9cab:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ad9caf:	74 21                	je     8ad9cd2 <_ZNK10WideString7getHashEv+0x5e>
 8ad9cb1:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad9cb4:	89 c2                	mov    %eax,%edx
 8ad9cb6:	c1 e2 06             	shl    $0x6,%edx
 8ad9cb9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad9cbc:	c1 e0 10             	shl    $0x10,%eax
 8ad9cbf:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8ad9cc2:	89 c2                	mov    %eax,%edx
 8ad9cc4:	2b 55 ec             	sub    -0x14(%ebp),%edx
 8ad9cc7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9cca:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8ad9ccd:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ad9cd0:	eb cd                	jmp    8ad9c9f <_ZNK10WideString7getHashEv+0x2b>
 8ad9cd2:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8ad9cd6:	75 07                	jne    8ad9cdf <_ZNK10WideString7getHashEv+0x6b>
 8ad9cd8:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 8ad9cdf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad9ce2:	c9                   	leave
 8ad9ce3:	c3                   	ret

```

```c
// WideString::getHash @ 0x8ad9c74

/* DWARF original prototype: uint32 getHash(WideString * this) */

uint32 __thiscall WideString::getHash(WideString *this)

{
  int iVar1;
  bool bVar2;
  uint32 local_18;
  int *local_14;
  
                    /* Unresolved local var: uint32 value@[???]
                       Unresolved local var: wchar * str@[???] */
  bVar2 = isEmpty(this);
  if (bVar2) {
    local_18 = 0;
  }
  else {
    local_18 = 0;
    local_14 = this->buffer_;
    while( true ) {
                    /* Unresolved local var: wchar c@[???] */
      iVar1 = *local_14;
      local_14 = local_14 + 1;
      if (iVar1 == 0) break;
      local_18 = local_18 * 0x1003f + iVar1;
    }
    if (local_18 == 0) {
      local_18 = 1;
    }
  }
  return local_18;
}

```

---

## isWhiteSpace

```asm
// === 08ad9c30 WideString::isWhiteSpace  [0x08ad9c30-0x8ad9c73] ===
 8ad9c30:	55                   	push   %ebp
 8ad9c31:	89 e5                	mov    %esp,%ebp
 8ad9c33:	83 ec 28             	sub    $0x28,%esp
 8ad9c36:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9c39:	8b 00                	mov    (%eax),%eax
 8ad9c3b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad9c3e:	eb 1f                	jmp    8ad9c5f <_ZNK10WideString12isWhiteSpaceEv+0x2f>
 8ad9c40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9c43:	8b 00                	mov    (%eax),%eax
 8ad9c45:	89 04 24             	mov    %eax,(%esp)
 8ad9c48:	e8 15 2e 00 00       	call   8adca62 <_ZN10WideString8isuspaceEw>
 8ad9c4d:	83 f0 01             	xor    $0x1,%eax
 8ad9c50:	84 c0                	test   %al,%al
 8ad9c52:	74 07                	je     8ad9c5b <_ZNK10WideString12isWhiteSpaceEv+0x2b>
 8ad9c54:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad9c59:	eb 17                	jmp    8ad9c72 <_ZNK10WideString12isWhiteSpaceEv+0x42>
 8ad9c5b:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
 8ad9c5f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad9c62:	8b 00                	mov    (%eax),%eax
 8ad9c64:	85 c0                	test   %eax,%eax
 8ad9c66:	0f 95 c0             	setne  %al
 8ad9c69:	84 c0                	test   %al,%al
 8ad9c6b:	75 d3                	jne    8ad9c40 <_ZNK10WideString12isWhiteSpaceEv+0x10>
 8ad9c6d:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad9c72:	c9                   	leave
 8ad9c73:	c3                   	ret

```

```c
// WideString::isWhiteSpace @ 0x8ad9c30

/* DWARF original prototype: bool isWhiteSpace(WideString * this) */

bool __thiscall WideString::isWhiteSpace(WideString *this)

{
  bool bVar1;
  wchar *local_10;
  
                    /* Unresolved local var: wchar * buf@[???] */
  local_10 = this->buffer_;
  while( true ) {
    if (*local_10 == 0) {
      return true;
    }
    bVar1 = isuspace(*local_10);
    if (!bVar1) break;
    local_10 = local_10 + 1;
  }
  return false;
}

```

---

## isupunct

```asm
// === 08adcb50 WideString::isupunct  [0x08adcb50-0x8ade827] ===
 8adcb50:	55                   	push   %ebp
 8adcb51:	89 e5                	mov    %esp,%ebp
 8adcb53:	83 7d 08 20          	cmpl   $0x20,0x8(%ebp)
 8adcb57:	7e 0a                	jle    8adcb63 <_ZN10WideString8isupunctEw+0x13>
 8adcb59:	83 7d 08 23          	cmpl   $0x23,0x8(%ebp)
 8adcb5d:	0f 8e 13 07 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcb63:	83 7d 08 24          	cmpl   $0x24,0x8(%ebp)
 8adcb67:	7e 0a                	jle    8adcb73 <_ZN10WideString8isupunctEw+0x23>
 8adcb69:	83 7d 08 2a          	cmpl   $0x2a,0x8(%ebp)
 8adcb6d:	0f 8e 03 07 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcb73:	83 7d 08 2b          	cmpl   $0x2b,0x8(%ebp)
 8adcb77:	7e 0a                	jle    8adcb83 <_ZN10WideString8isupunctEw+0x33>
 8adcb79:	83 7d 08 2f          	cmpl   $0x2f,0x8(%ebp)
 8adcb7d:	0f 8e f3 06 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcb83:	83 7d 08 3a          	cmpl   $0x3a,0x8(%ebp)
 8adcb87:	0f 84 e9 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcb8d:	83 7d 08 3b          	cmpl   $0x3b,0x8(%ebp)
 8adcb91:	0f 84 df 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcb97:	83 7d 08 3f          	cmpl   $0x3f,0x8(%ebp)
 8adcb9b:	0f 84 d5 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcba1:	83 7d 08 40          	cmpl   $0x40,0x8(%ebp)
 8adcba5:	0f 84 cb 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcbab:	83 7d 08 5a          	cmpl   $0x5a,0x8(%ebp)
 8adcbaf:	7e 0a                	jle    8adcbbb <_ZN10WideString8isupunctEw+0x6b>
 8adcbb1:	83 7d 08 5d          	cmpl   $0x5d,0x8(%ebp)
 8adcbb5:	0f 8e bb 06 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcbbb:	83 7d 08 5f          	cmpl   $0x5f,0x8(%ebp)
 8adcbbf:	0f 84 b1 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcbc5:	83 7d 08 7b          	cmpl   $0x7b,0x8(%ebp)
 8adcbc9:	0f 84 a7 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcbcf:	83 7d 08 7d          	cmpl   $0x7d,0x8(%ebp)
 8adcbd3:	0f 84 9d 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcbd9:	81 7d 08 a1 00 00 00 	cmpl   $0xa1,0x8(%ebp)
 8adcbe0:	0f 84 90 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcbe6:	81 7d 08 ab 00 00 00 	cmpl   $0xab,0x8(%ebp)
 8adcbed:	0f 84 83 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcbf3:	81 7d 08 ad 00 00 00 	cmpl   $0xad,0x8(%ebp)
 8adcbfa:	0f 84 76 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcc00:	81 7d 08 b7 00 00 00 	cmpl   $0xb7,0x8(%ebp)
 8adcc07:	0f 84 69 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcc0d:	81 7d 08 bb 00 00 00 	cmpl   $0xbb,0x8(%ebp)
 8adcc14:	0f 84 5c 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcc1a:	81 7d 08 bf 00 00 00 	cmpl   $0xbf,0x8(%ebp)
 8adcc21:	0f 84 4f 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcc27:	81 7d 08 7e 03 00 00 	cmpl   $0x37e,0x8(%ebp)
 8adcc2e:	0f 84 42 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcc34:	81 7d 08 87 03 00 00 	cmpl   $0x387,0x8(%ebp)
 8adcc3b:	0f 84 35 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcc41:	81 7d 08 59 05 00 00 	cmpl   $0x559,0x8(%ebp)
 8adcc48:	7e 0d                	jle    8adcc57 <_ZN10WideString8isupunctEw+0x107>
 8adcc4a:	81 7d 08 5f 05 00 00 	cmpl   $0x55f,0x8(%ebp)
 8adcc51:	0f 8e 1f 06 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcc57:	81 7d 08 89 05 00 00 	cmpl   $0x589,0x8(%ebp)
 8adcc5e:	0f 84 12 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcc64:	81 7d 08 8a 05 00 00 	cmpl   $0x58a,0x8(%ebp)
 8adcc6b:	0f 84 05 06 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcc71:	81 7d 08 be 05 00 00 	cmpl   $0x5be,0x8(%ebp)
 8adcc78:	0f 84 f8 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcc7e:	81 7d 08 c0 05 00 00 	cmpl   $0x5c0,0x8(%ebp)
 8adcc85:	0f 84 eb 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcc8b:	81 7d 08 c3 05 00 00 	cmpl   $0x5c3,0x8(%ebp)
 8adcc92:	0f 84 de 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcc98:	81 7d 08 c6 05 00 00 	cmpl   $0x5c6,0x8(%ebp)
 8adcc9f:	0f 84 d1 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcca5:	81 7d 08 f3 05 00 00 	cmpl   $0x5f3,0x8(%ebp)
 8adccac:	0f 84 c4 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adccb2:	81 7d 08 f4 05 00 00 	cmpl   $0x5f4,0x8(%ebp)
 8adccb9:	0f 84 b7 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adccbf:	81 7d 08 0c 06 00 00 	cmpl   $0x60c,0x8(%ebp)
 8adccc6:	0f 84 aa 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcccc:	81 7d 08 0d 06 00 00 	cmpl   $0x60d,0x8(%ebp)
 8adccd3:	0f 84 9d 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adccd9:	81 7d 08 1b 06 00 00 	cmpl   $0x61b,0x8(%ebp)
 8adcce0:	0f 84 90 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcce6:	81 7d 08 1e 06 00 00 	cmpl   $0x61e,0x8(%ebp)
 8adcced:	0f 84 83 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adccf3:	81 7d 08 1f 06 00 00 	cmpl   $0x61f,0x8(%ebp)
 8adccfa:	0f 84 76 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcd00:	81 7d 08 69 06 00 00 	cmpl   $0x669,0x8(%ebp)
 8adcd07:	7e 0d                	jle    8adcd16 <_ZN10WideString8isupunctEw+0x1c6>
 8adcd09:	81 7d 08 6d 06 00 00 	cmpl   $0x66d,0x8(%ebp)
 8adcd10:	0f 8e 60 05 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcd16:	81 7d 08 d4 06 00 00 	cmpl   $0x6d4,0x8(%ebp)
 8adcd1d:	0f 84 53 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcd23:	81 7d 08 ff 06 00 00 	cmpl   $0x6ff,0x8(%ebp)
 8adcd2a:	7e 0d                	jle    8adcd39 <_ZN10WideString8isupunctEw+0x1e9>
 8adcd2c:	81 7d 08 0d 07 00 00 	cmpl   $0x70d,0x8(%ebp)
 8adcd33:	0f 8e 3d 05 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcd39:	81 7d 08 f6 07 00 00 	cmpl   $0x7f6,0x8(%ebp)
 8adcd40:	7e 0d                	jle    8adcd4f <_ZN10WideString8isupunctEw+0x1ff>
 8adcd42:	81 7d 08 f9 07 00 00 	cmpl   $0x7f9,0x8(%ebp)
 8adcd49:	0f 8e 27 05 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcd4f:	81 7d 08 64 09 00 00 	cmpl   $0x964,0x8(%ebp)
 8adcd56:	0f 84 1a 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcd5c:	81 7d 08 65 09 00 00 	cmpl   $0x965,0x8(%ebp)
 8adcd63:	0f 84 0d 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcd69:	81 7d 08 70 09 00 00 	cmpl   $0x970,0x8(%ebp)
 8adcd70:	0f 84 00 05 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcd76:	81 7d 08 f4 0d 00 00 	cmpl   $0xdf4,0x8(%ebp)
 8adcd7d:	0f 84 f3 04 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcd83:	81 7d 08 4e 0e 00 00 	cmpl   $0xe4e,0x8(%ebp)
 8adcd8a:	7e 0d                	jle    8adcd99 <_ZN10WideString8isupunctEw+0x249>
 8adcd8c:	81 7d 08 5b 0e 00 00 	cmpl   $0xe5b,0x8(%ebp)
 8adcd93:	0f 8e dd 04 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcd99:	81 7d 08 03 0f 00 00 	cmpl   $0xf03,0x8(%ebp)
 8adcda0:	7e 0d                	jle    8adcdaf <_ZN10WideString8isupunctEw+0x25f>
 8adcda2:	81 7d 08 12 0f 00 00 	cmpl   $0xf12,0x8(%ebp)
 8adcda9:	0f 8e c7 04 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcdaf:	81 7d 08 39 0f 00 00 	cmpl   $0xf39,0x8(%ebp)
 8adcdb6:	7e 0d                	jle    8adcdc5 <_ZN10WideString8isupunctEw+0x275>
 8adcdb8:	81 7d 08 3d 0f 00 00 	cmpl   $0xf3d,0x8(%ebp)
 8adcdbf:	0f 8e b1 04 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcdc5:	81 7d 08 85 0f 00 00 	cmpl   $0xf85,0x8(%ebp)
 8adcdcc:	0f 84 a4 04 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcdd2:	81 7d 08 d0 0f 00 00 	cmpl   $0xfd0,0x8(%ebp)
 8adcdd9:	0f 84 97 04 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcddf:	81 7d 08 d1 0f 00 00 	cmpl   $0xfd1,0x8(%ebp)
 8adcde6:	0f 84 8a 04 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcdec:	81 7d 08 49 10 00 00 	cmpl   $0x1049,0x8(%ebp)
 8adcdf3:	7e 0d                	jle    8adce02 <_ZN10WideString8isupunctEw+0x2b2>
 8adcdf5:	81 7d 08 4f 10 00 00 	cmpl   $0x104f,0x8(%ebp)
 8adcdfc:	0f 8e 74 04 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adce02:	81 7d 08 fb 10 00 00 	cmpl   $0x10fb,0x8(%ebp)
 8adce09:	0f 84 67 04 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adce0f:	81 7d 08 60 13 00 00 	cmpl   $0x1360,0x8(%ebp)
 8adce16:	7e 0d                	jle    8adce25 <_ZN10WideString8isupunctEw+0x2d5>
 8adce18:	81 7d 08 68 13 00 00 	cmpl   $0x1368,0x8(%ebp)
 8adce1f:	0f 8e 51 04 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adce25:	81 7d 08 6d 16 00 00 	cmpl   $0x166d,0x8(%ebp)
 8adce2c:	0f 84 44 04 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adce32:	81 7d 08 6e 16 00 00 	cmpl   $0x166e,0x8(%ebp)
 8adce39:	0f 84 37 04 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adce3f:	81 7d 08 9b 16 00 00 	cmpl   $0x169b,0x8(%ebp)
 8adce46:	0f 84 2a 04 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adce4c:	81 7d 08 9c 16 00 00 	cmpl   $0x169c,0x8(%ebp)
 8adce53:	0f 84 1d 04 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adce59:	81 7d 08 ea 16 00 00 	cmpl   $0x16ea,0x8(%ebp)
 8adce60:	7e 0d                	jle    8adce6f <_ZN10WideString8isupunctEw+0x31f>
 8adce62:	81 7d 08 ed 16 00 00 	cmpl   $0x16ed,0x8(%ebp)
 8adce69:	0f 8e 07 04 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adce6f:	81 7d 08 35 17 00 00 	cmpl   $0x1735,0x8(%ebp)
 8adce76:	0f 84 fa 03 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adce7c:	81 7d 08 36 17 00 00 	cmpl   $0x1736,0x8(%ebp)
 8adce83:	0f 84 ed 03 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adce89:	81 7d 08 d3 17 00 00 	cmpl   $0x17d3,0x8(%ebp)
 8adce90:	7e 0d                	jle    8adce9f <_ZN10WideString8isupunctEw+0x34f>
 8adce92:	81 7d 08 d6 17 00 00 	cmpl   $0x17d6,0x8(%ebp)
 8adce99:	0f 8e d7 03 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adce9f:	81 7d 08 d7 17 00 00 	cmpl   $0x17d7,0x8(%ebp)
 8adcea6:	7e 0d                	jle    8adceb5 <_ZN10WideString8isupunctEw+0x365>
 8adcea8:	81 7d 08 da 17 00 00 	cmpl   $0x17da,0x8(%ebp)
 8adceaf:	0f 8e c1 03 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adceb5:	81 7d 08 ff 17 00 00 	cmpl   $0x17ff,0x8(%ebp)
 8adcebc:	7e 0d                	jle    8adcecb <_ZN10WideString8isupunctEw+0x37b>
 8adcebe:	81 7d 08 0a 18 00 00 	cmpl   $0x180a,0x8(%ebp)
 8adcec5:	0f 8e ab 03 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcecb:	81 7d 08 44 19 00 00 	cmpl   $0x1944,0x8(%ebp)
 8adced2:	0f 84 9e 03 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adced8:	81 7d 08 45 19 00 00 	cmpl   $0x1945,0x8(%ebp)
 8adcedf:	0f 84 91 03 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcee5:	81 7d 08 de 19 00 00 	cmpl   $0x19de,0x8(%ebp)
 8adceec:	0f 84 84 03 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcef2:	81 7d 08 df 19 00 00 	cmpl   $0x19df,0x8(%ebp)
 8adcef9:	0f 84 77 03 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adceff:	81 7d 08 1e 1a 00 00 	cmpl   $0x1a1e,0x8(%ebp)
 8adcf06:	0f 84 6a 03 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcf0c:	81 7d 08 1f 1a 00 00 	cmpl   $0x1a1f,0x8(%ebp)
 8adcf13:	0f 84 5d 03 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcf19:	81 7d 08 59 1b 00 00 	cmpl   $0x1b59,0x8(%ebp)
 8adcf20:	7e 0d                	jle    8adcf2f <_ZN10WideString8isupunctEw+0x3df>
 8adcf22:	81 7d 08 60 1b 00 00 	cmpl   $0x1b60,0x8(%ebp)
 8adcf29:	0f 8e 47 03 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcf2f:	81 7d 08 0f 20 00 00 	cmpl   $0x200f,0x8(%ebp)
 8adcf36:	7e 0d                	jle    8adcf45 <_ZN10WideString8isupunctEw+0x3f5>
 8adcf38:	81 7d 08 27 20 00 00 	cmpl   $0x2027,0x8(%ebp)
 8adcf3f:	0f 8e 31 03 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcf45:	81 7d 08 2f 20 00 00 	cmpl   $0x202f,0x8(%ebp)
 8adcf4c:	7e 0d                	jle    8adcf5b <_ZN10WideString8isupunctEw+0x40b>
 8adcf4e:	81 7d 08 43 20 00 00 	cmpl   $0x2043,0x8(%ebp)
 8adcf55:	0f 8e 1b 03 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcf5b:	81 7d 08 44 20 00 00 	cmpl   $0x2044,0x8(%ebp)
 8adcf62:	7e 0d                	jle    8adcf71 <_ZN10WideString8isupunctEw+0x421>
 8adcf64:	81 7d 08 51 20 00 00 	cmpl   $0x2051,0x8(%ebp)
 8adcf6b:	0f 8e 05 03 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcf71:	81 7d 08 52 20 00 00 	cmpl   $0x2052,0x8(%ebp)
 8adcf78:	7e 0d                	jle    8adcf87 <_ZN10WideString8isupunctEw+0x437>
 8adcf7a:	81 7d 08 5e 20 00 00 	cmpl   $0x205e,0x8(%ebp)
 8adcf81:	0f 8e ef 02 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcf87:	81 7d 08 7d 20 00 00 	cmpl   $0x207d,0x8(%ebp)
 8adcf8e:	0f 84 e2 02 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcf94:	81 7d 08 7e 20 00 00 	cmpl   $0x207e,0x8(%ebp)
 8adcf9b:	0f 84 d5 02 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcfa1:	81 7d 08 8d 20 00 00 	cmpl   $0x208d,0x8(%ebp)
 8adcfa8:	0f 84 c8 02 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcfae:	81 7d 08 8e 20 00 00 	cmpl   $0x208e,0x8(%ebp)
 8adcfb5:	0f 84 bb 02 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcfbb:	81 7d 08 29 23 00 00 	cmpl   $0x2329,0x8(%ebp)
 8adcfc2:	0f 84 ae 02 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcfc8:	81 7d 08 2a 23 00 00 	cmpl   $0x232a,0x8(%ebp)
 8adcfcf:	0f 84 a1 02 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcfd5:	81 7d 08 67 27 00 00 	cmpl   $0x2767,0x8(%ebp)
 8adcfdc:	7e 0d                	jle    8adcfeb <_ZN10WideString8isupunctEw+0x49b>
 8adcfde:	81 7d 08 75 27 00 00 	cmpl   $0x2775,0x8(%ebp)
 8adcfe5:	0f 8e 8b 02 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8adcfeb:	81 7d 08 c4 27 00 00 	cmpl   $0x27c4,0x8(%ebp)
 8adcff2:	7e 0d                	jle    8add001 <_ZN10WideString8isupunctEw+0x4b1>
 8adcff4:	81 7d 08 c6 27 00 00 	cmpl   $0x27c6,0x8(%ebp)
 8adcffb:	0f 8e 75 02 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add001:	81 7d 08 e5 27 00 00 	cmpl   $0x27e5,0x8(%ebp)
 8add008:	7e 0d                	jle    8add017 <_ZN10WideString8isupunctEw+0x4c7>
 8add00a:	81 7d 08 eb 27 00 00 	cmpl   $0x27eb,0x8(%ebp)
 8add011:	0f 8e 5f 02 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add017:	81 7d 08 82 29 00 00 	cmpl   $0x2982,0x8(%ebp)
 8add01e:	7e 0d                	jle    8add02d <_ZN10WideString8isupunctEw+0x4dd>
 8add020:	81 7d 08 98 29 00 00 	cmpl   $0x2998,0x8(%ebp)
 8add027:	0f 8e 49 02 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add02d:	81 7d 08 d7 29 00 00 	cmpl   $0x29d7,0x8(%ebp)
 8add034:	7e 0d                	jle    8add043 <_ZN10WideString8isupunctEw+0x4f3>
 8add036:	81 7d 08 db 29 00 00 	cmpl   $0x29db,0x8(%ebp)
 8add03d:	0f 8e 33 02 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add043:	81 7d 08 fc 29 00 00 	cmpl   $0x29fc,0x8(%ebp)
 8add04a:	0f 84 26 02 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add050:	81 7d 08 fd 29 00 00 	cmpl   $0x29fd,0x8(%ebp)
 8add057:	0f 84 19 02 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add05d:	81 7d 08 f8 2c 00 00 	cmpl   $0x2cf8,0x8(%ebp)
 8add064:	7e 0d                	jle    8add073 <_ZN10WideString8isupunctEw+0x523>
 8add066:	81 7d 08 fc 2c 00 00 	cmpl   $0x2cfc,0x8(%ebp)
 8add06d:	0f 8e 03 02 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add073:	81 7d 08 fe 2c 00 00 	cmpl   $0x2cfe,0x8(%ebp)
 8add07a:	0f 84 f6 01 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add080:	81 7d 08 ff 2c 00 00 	cmpl   $0x2cff,0x8(%ebp)
 8add087:	0f 84 e9 01 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add08d:	81 7d 08 ff 2d 00 00 	cmpl   $0x2dff,0x8(%ebp)
 8add094:	7e 0d                	jle    8add0a3 <_ZN10WideString8isupunctEw+0x553>
 8add096:	81 7d 08 17 2e 00 00 	cmpl   $0x2e17,0x8(%ebp)
 8add09d:	0f 8e d3 01 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add0a3:	81 7d 08 1c 2e 00 00 	cmpl   $0x2e1c,0x8(%ebp)
 8add0aa:	0f 84 c6 01 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add0b0:	81 7d 08 1d 2e 00 00 	cmpl   $0x2e1d,0x8(%ebp)
 8add0b7:	0f 84 b9 01 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add0bd:	81 7d 08 00 30 00 00 	cmpl   $0x3000,0x8(%ebp)
 8add0c4:	7e 0d                	jle    8add0d3 <_ZN10WideString8isupunctEw+0x583>
 8add0c6:	81 7d 08 03 30 00 00 	cmpl   $0x3003,0x8(%ebp)
 8add0cd:	0f 8e a3 01 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add0d3:	81 7d 08 07 30 00 00 	cmpl   $0x3007,0x8(%ebp)
 8add0da:	7e 0d                	jle    8add0e9 <_ZN10WideString8isupunctEw+0x599>
 8add0dc:	81 7d 08 11 30 00 00 	cmpl   $0x3011,0x8(%ebp)
 8add0e3:	0f 8e 8d 01 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add0e9:	81 7d 08 13 30 00 00 	cmpl   $0x3013,0x8(%ebp)
 8add0f0:	7e 0d                	jle    8add0ff <_ZN10WideString8isupunctEw+0x5af>
 8add0f2:	81 7d 08 1f 30 00 00 	cmpl   $0x301f,0x8(%ebp)
 8add0f9:	0f 8e 77 01 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add0ff:	81 7d 08 30 30 00 00 	cmpl   $0x3030,0x8(%ebp)
 8add106:	0f 84 6a 01 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add10c:	81 7d 08 3d 30 00 00 	cmpl   $0x303d,0x8(%ebp)
 8add113:	0f 84 5d 01 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add119:	81 7d 08 a0 30 00 00 	cmpl   $0x30a0,0x8(%ebp)
 8add120:	0f 84 50 01 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add126:	81 7d 08 fb 30 00 00 	cmpl   $0x30fb,0x8(%ebp)
 8add12d:	0f 84 43 01 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add133:	81 7d 08 73 a8 00 00 	cmpl   $0xa873,0x8(%ebp)
 8add13a:	7e 0d                	jle    8add149 <_ZN10WideString8isupunctEw+0x5f9>
 8add13c:	81 7d 08 77 a8 00 00 	cmpl   $0xa877,0x8(%ebp)
 8add143:	0f 8e 2d 01 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add149:	81 7d 08 3e fd 00 00 	cmpl   $0xfd3e,0x8(%ebp)
 8add150:	0f 84 20 01 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add156:	81 7d 08 3f fd 00 00 	cmpl   $0xfd3f,0x8(%ebp)
 8add15d:	0f 84 13 01 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add163:	81 7d 08 0f fe 00 00 	cmpl   $0xfe0f,0x8(%ebp)
 8add16a:	7e 0d                	jle    8add179 <_ZN10WideString8isupunctEw+0x629>
 8add16c:	81 7d 08 19 fe 00 00 	cmpl   $0xfe19,0x8(%ebp)
 8add173:	0f 8e fd 00 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add179:	81 7d 08 2f fe 00 00 	cmpl   $0xfe2f,0x8(%ebp)
 8add180:	7e 0d                	jle    8add18f <_ZN10WideString8isupunctEw+0x63f>
 8add182:	81 7d 08 52 fe 00 00 	cmpl   $0xfe52,0x8(%ebp)
 8add189:	0f 8e e7 00 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add18f:	81 7d 08 53 fe 00 00 	cmpl   $0xfe53,0x8(%ebp)
 8add196:	7e 0d                	jle    8add1a5 <_ZN10WideString8isupunctEw+0x655>
 8add198:	81 7d 08 61 fe 00 00 	cmpl   $0xfe61,0x8(%ebp)
 8add19f:	0f 8e d1 00 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add1a5:	81 7d 08 63 fe 00 00 	cmpl   $0xfe63,0x8(%ebp)
 8add1ac:	0f 84 c4 00 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add1b2:	81 7d 08 68 fe 00 00 	cmpl   $0xfe68,0x8(%ebp)
 8add1b9:	0f 84 b7 00 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add1bf:	81 7d 08 6a fe 00 00 	cmpl   $0xfe6a,0x8(%ebp)
 8add1c6:	0f 84 aa 00 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add1cc:	81 7d 08 6b fe 00 00 	cmpl   $0xfe6b,0x8(%ebp)
 8add1d3:	0f 84 9d 00 00 00    	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add1d9:	81 7d 08 00 ff 00 00 	cmpl   $0xff00,0x8(%ebp)
 8add1e0:	7e 0d                	jle    8add1ef <_ZN10WideString8isupunctEw+0x69f>
 8add1e2:	81 7d 08 03 ff 00 00 	cmpl   $0xff03,0x8(%ebp)
 8add1e9:	0f 8e 87 00 00 00    	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add1ef:	81 7d 08 04 ff 00 00 	cmpl   $0xff04,0x8(%ebp)
 8add1f6:	7e 09                	jle    8add201 <_ZN10WideString8isupunctEw+0x6b1>
 8add1f8:	81 7d 08 0a ff 00 00 	cmpl   $0xff0a,0x8(%ebp)
 8add1ff:	7e 75                	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add201:	81 7d 08 0b ff 00 00 	cmpl   $0xff0b,0x8(%ebp)
 8add208:	7e 09                	jle    8add213 <_ZN10WideString8isupunctEw+0x6c3>
 8add20a:	81 7d 08 0f ff 00 00 	cmpl   $0xff0f,0x8(%ebp)
 8add211:	7e 63                	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add213:	81 7d 08 1a ff 00 00 	cmpl   $0xff1a,0x8(%ebp)
 8add21a:	74 5a                	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add21c:	81 7d 08 1b ff 00 00 	cmpl   $0xff1b,0x8(%ebp)
 8add223:	74 51                	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add225:	81 7d 08 1f ff 00 00 	cmpl   $0xff1f,0x8(%ebp)
 8add22c:	74 48                	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add22e:	81 7d 08 20 ff 00 00 	cmpl   $0xff20,0x8(%ebp)
 8add235:	74 3f                	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add237:	81 7d 08 3a ff 00 00 	cmpl   $0xff3a,0x8(%ebp)
 8add23e:	7e 09                	jle    8add249 <_ZN10WideString8isupunctEw+0x6f9>
 8add240:	81 7d 08 3d ff 00 00 	cmpl   $0xff3d,0x8(%ebp)
 8add247:	7e 2d                	jle    8add276 <_ZN10WideString8isupunctEw+0x726>
 8add249:	81 7d 08 3f ff 00 00 	cmpl   $0xff3f,0x8(%ebp)
 8add250:	74 24                	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add252:	81 7d 08 5b ff 00 00 	cmpl   $0xff5b,0x8(%ebp)
 8add259:	74 1b                	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add25b:	81 7d 08 5d ff 00 00 	cmpl   $0xff5d,0x8(%ebp)
 8add262:	74 12                	je     8add276 <_ZN10WideString8isupunctEw+0x726>
 8add264:	81 7d 08 5e ff 00 00 	cmpl   $0xff5e,0x8(%ebp)
 8add26b:	7e 10                	jle    8add27d <_ZN10WideString8isupunctEw+0x72d>
 8add26d:	81 7d 08 65 ff 00 00 	cmpl   $0xff65,0x8(%ebp)
 8add274:	7f 07                	jg     8add27d <_ZN10WideString8isupunctEw+0x72d>
 8add276:	b8 01 00 00 00       	mov    $0x1,%eax
 8add27b:	eb 05                	jmp    8add282 <_ZN10WideString8isupunctEw+0x732>
 8add27d:	b8 00 00 00 00       	mov    $0x0,%eax
 8add282:	5d                   	pop    %ebp
 8add283:	c3                   	ret

08add284 <_ZNK10CharString7isEmptyEv>:
 8add284:	55                   	push   %ebp
 8add285:	89 e5                	mov    %esp,%ebp
 8add287:	83 ec 18             	sub    $0x18,%esp
 8add28a:	8b 45 08             	mov    0x8(%ebp),%eax
 8add28d:	89 04 24             	mov    %eax,(%esp)
 8add290:	e8 9b 82 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8add295:	85 c0                	test   %eax,%eax
 8add297:	0f 94 c0             	sete   %al
 8add29a:	c9                   	leave
 8add29b:	c3                   	ret

08add29c <_ZNK10WideString6lengthEv>:
 8add29c:	55                   	push   %ebp
 8add29d:	89 e5                	mov    %esp,%ebp
 8add29f:	83 ec 18             	sub    $0x18,%esp
 8add2a2:	8b 45 08             	mov    0x8(%ebp),%eax
 8add2a5:	89 04 24             	mov    %eax,(%esp)
 8add2a8:	e8 67 cf ff ff       	call   8ada214 <_ZNK10WideString7getDataEv>
 8add2ad:	89 04 24             	mov    %eax,(%esp)
 8add2b0:	e8 c7 c6 ff ff       	call   8ad997c <_ZNK14WideStringData9getLengthEv>
 8add2b5:	c9                   	leave
 8add2b6:	c3                   	ret
 8add2b7:	90                   	nop

08add2b8 <_ZNK10WideString7isEmptyEv>:
 8add2b8:	55                   	push   %ebp
 8add2b9:	89 e5                	mov    %esp,%ebp
 8add2bb:	83 ec 18             	sub    $0x18,%esp
 8add2be:	8b 45 08             	mov    0x8(%ebp),%eax
 8add2c1:	89 04 24             	mov    %eax,(%esp)
 8add2c4:	e8 d3 ff ff ff       	call   8add29c <_ZNK10WideString6lengthEv>
 8add2c9:	85 c0                	test   %eax,%eax
 8add2cb:	0f 94 c0             	sete   %al
 8add2ce:	c9                   	leave
 8add2cf:	c3                   	ret

08add2d0 <_ZNSt6vectorI10CharStringSaIS0_EE9push_backEOS0_>:
 8add2d0:	55                   	push   %ebp
 8add2d1:	89 e5                	mov    %esp,%ebp
 8add2d3:	83 ec 18             	sub    $0x18,%esp
 8add2d6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add2d9:	89 04 24             	mov    %eax,(%esp)
 8add2dc:	e8 28 86 ff ff       	call   8ad5909 <_ZSt4moveIR10CharStringEONSt16remove_referenceIT_E4typeEOS3_>
 8add2e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add2e5:	8b 45 08             	mov    0x8(%ebp),%eax
 8add2e8:	89 04 24             	mov    %eax,(%esp)
 8add2eb:	e8 68 02 00 00       	call   8add558 <_ZNSt6vectorI10CharStringSaIS0_EE12emplace_backIIS0_EEEvDpOT_>
 8add2f0:	c9                   	leave
 8add2f1:	c3                   	ret

08add2f2 <_ZNKSt6vectorI10CharStringSaIS0_EE5emptyEv>:
 8add2f2:	55                   	push   %ebp
 8add2f3:	89 e5                	mov    %esp,%ebp
 8add2f5:	83 ec 28             	sub    $0x28,%esp
 8add2f8:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8add2fb:	8b 55 08             	mov    0x8(%ebp),%edx
 8add2fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add302:	89 04 24             	mov    %eax,(%esp)
 8add305:	e8 74 00 00 00       	call   8add37e <_ZNKSt6vectorI10CharStringSaIS0_EE3endEv>
 8add30a:	83 ec 04             	sub    $0x4,%esp
 8add30d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8add310:	8b 55 08             	mov    0x8(%ebp),%edx
 8add313:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add317:	89 04 24             	mov    %eax,(%esp)
 8add31a:	e8 33 00 00 00       	call   8add352 <_ZNKSt6vectorI10CharStringSaIS0_EE5beginEv>
 8add31f:	83 ec 04             	sub    $0x4,%esp
 8add322:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8add325:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add329:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8add32c:	89 04 24             	mov    %eax,(%esp)
 8add32f:	e8 ad 02 00 00       	call   8add5e1 <_ZN9__gnu_cxxeqIPK10CharStringSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8add334:	c9                   	leave
 8add335:	c3                   	ret

08add336 <_ZNKSt6vectorI10CharStringSaIS0_EE4sizeEv>:
 8add336:	55                   	push   %ebp
 8add337:	89 e5                	mov    %esp,%ebp
 8add339:	8b 45 08             	mov    0x8(%ebp),%eax
 8add33c:	8b 40 04             	mov    0x4(%eax),%eax
 8add33f:	89 c2                	mov    %eax,%edx
 8add341:	8b 45 08             	mov    0x8(%ebp),%eax
 8add344:	8b 00                	mov    (%eax),%eax
 8add346:	89 d1                	mov    %edx,%ecx
 8add348:	29 c1                	sub    %eax,%ecx
 8add34a:	89 c8                	mov    %ecx,%eax
 8add34c:	c1 f8 02             	sar    $0x2,%eax
 8add34f:	5d                   	pop    %ebp
 8add350:	c3                   	ret
 8add351:	90                   	nop

08add352 <_ZNKSt6vectorI10CharStringSaIS0_EE5beginEv>:
 8add352:	55                   	push   %ebp
 8add353:	89 e5                	mov    %esp,%ebp
 8add355:	53                   	push   %ebx
 8add356:	83 ec 24             	sub    $0x24,%esp
 8add359:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8add35c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add35f:	8b 00                	mov    (%eax),%eax
 8add361:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8add364:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8add367:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add36b:	89 1c 24             	mov    %ebx,(%esp)
 8add36e:	e8 9b 02 00 00       	call   8add60e <_ZN9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEEC1ERKS3_>
 8add373:	89 d8                	mov    %ebx,%eax
 8add375:	83 c4 24             	add    $0x24,%esp
 8add378:	5b                   	pop    %ebx
 8add379:	5d                   	pop    %ebp
 8add37a:	c2 04 00             	ret    $0x4
 8add37d:	90                   	nop

08add37e <_ZNKSt6vectorI10CharStringSaIS0_EE3endEv>:
 8add37e:	55                   	push   %ebp
 8add37f:	89 e5                	mov    %esp,%ebp
 8add381:	53                   	push   %ebx
 8add382:	83 ec 24             	sub    $0x24,%esp
 8add385:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8add388:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add38b:	8b 40 04             	mov    0x4(%eax),%eax
 8add38e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8add391:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8add394:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add398:	89 1c 24             	mov    %ebx,(%esp)
 8add39b:	e8 6e 02 00 00       	call   8add60e <_ZN9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEEC1ERKS3_>
 8add3a0:	89 d8                	mov    %ebx,%eax
 8add3a2:	83 c4 24             	add    $0x24,%esp
 8add3a5:	5b                   	pop    %ebx
 8add3a6:	5d                   	pop    %ebp
 8add3a7:	c2 04 00             	ret    $0x4

08add3aa <_ZN9__gnu_cxxneIPK10CharStringSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>:
 8add3aa:	55                   	push   %ebp
 8add3ab:	89 e5                	mov    %esp,%ebp
 8add3ad:	53                   	push   %ebx
 8add3ae:	83 ec 14             	sub    $0x14,%esp
 8add3b1:	8b 45 08             	mov    0x8(%ebp),%eax
 8add3b4:	89 04 24             	mov    %eax,(%esp)
 8add3b7:	e8 62 02 00 00       	call   8add61e <_ZNK9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8add3bc:	8b 18                	mov    (%eax),%ebx
 8add3be:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add3c1:	89 04 24             	mov    %eax,(%esp)
 8add3c4:	e8 55 02 00 00       	call   8add61e <_ZNK9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8add3c9:	8b 00                	mov    (%eax),%eax
 8add3cb:	39 c3                	cmp    %eax,%ebx
 8add3cd:	0f 95 c0             	setne  %al
 8add3d0:	83 c4 14             	add    $0x14,%esp
 8add3d3:	5b                   	pop    %ebx
 8add3d4:	5d                   	pop    %ebp
 8add3d5:	c3                   	ret

08add3d6 <_ZN9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEEppEi>:
 8add3d6:	55                   	push   %ebp
 8add3d7:	89 e5                	mov    %esp,%ebp
 8add3d9:	53                   	push   %ebx
 8add3da:	83 ec 24             	sub    $0x24,%esp
 8add3dd:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8add3e0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add3e3:	8b 00                	mov    (%eax),%eax
 8add3e5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8add3e8:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8add3eb:	8d 48 04             	lea    0x4(%eax),%ecx
 8add3ee:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add3f1:	89 08                	mov    %ecx,(%eax)
 8add3f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add3f7:	89 1c 24             	mov    %ebx,(%esp)
 8add3fa:	e8 0f 02 00 00       	call   8add60e <_ZN9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEEC1ERKS3_>
 8add3ff:	89 d8                	mov    %ebx,%eax
 8add401:	83 c4 24             	add    $0x24,%esp
 8add404:	5b                   	pop    %ebx
 8add405:	5d                   	pop    %ebp
 8add406:	c2 04 00             	ret    $0x4
 8add409:	90                   	nop

08add40a <_ZNK9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEEdeEv>:
 8add40a:	55                   	push   %ebp
 8add40b:	89 e5                	mov    %esp,%ebp
 8add40d:	8b 45 08             	mov    0x8(%ebp),%eax
 8add410:	8b 00                	mov    (%eax),%eax
 8add412:	5d                   	pop    %ebp
 8add413:	c3                   	ret

08add414 <_ZNSt6vectorI10WideStringSaIS0_EE9push_backEOS0_>:
 8add414:	55                   	push   %ebp
 8add415:	89 e5                	mov    %esp,%ebp
 8add417:	83 ec 18             	sub    $0x18,%esp
 8add41a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add41d:	89 04 24             	mov    %eax,(%esp)
 8add420:	e8 01 02 00 00       	call   8add626 <_ZSt4moveIR10WideStringEONSt16remove_referenceIT_E4typeEOS3_>
 8add425:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add429:	8b 45 08             	mov    0x8(%ebp),%eax
 8add42c:	89 04 24             	mov    %eax,(%esp)
 8add42f:	e8 fa 01 00 00       	call   8add62e <_ZNSt6vectorI10WideStringSaIS0_EE12emplace_backIIS0_EEEvDpOT_>
 8add434:	c9                   	leave
 8add435:	c3                   	ret

08add436 <_ZNKSt6vectorI10WideStringSaIS0_EE5emptyEv>:
 8add436:	55                   	push   %ebp
 8add437:	89 e5                	mov    %esp,%ebp
 8add439:	83 ec 28             	sub    $0x28,%esp
 8add43c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8add43f:	8b 55 08             	mov    0x8(%ebp),%edx
 8add442:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add446:	89 04 24             	mov    %eax,(%esp)
 8add449:	e8 74 00 00 00       	call   8add4c2 <_ZNKSt6vectorI10WideStringSaIS0_EE3endEv>
 8add44e:	83 ec 04             	sub    $0x4,%esp
 8add451:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8add454:	8b 55 08             	mov    0x8(%ebp),%edx
 8add457:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add45b:	89 04 24             	mov    %eax,(%esp)
 8add45e:	e8 33 00 00 00       	call   8add496 <_ZNKSt6vectorI10WideStringSaIS0_EE5beginEv>
 8add463:	83 ec 04             	sub    $0x4,%esp
 8add466:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8add469:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add46d:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8add470:	89 04 24             	mov    %eax,(%esp)
 8add473:	e8 3f 02 00 00       	call   8add6b7 <_ZN9__gnu_cxxeqIPK10WideStringSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8add478:	c9                   	leave
 8add479:	c3                   	ret

08add47a <_ZNKSt6vectorI10WideStringSaIS0_EE4sizeEv>:
 8add47a:	55                   	push   %ebp
 8add47b:	89 e5                	mov    %esp,%ebp
 8add47d:	8b 45 08             	mov    0x8(%ebp),%eax
 8add480:	8b 40 04             	mov    0x4(%eax),%eax
 8add483:	89 c2                	mov    %eax,%edx
 8add485:	8b 45 08             	mov    0x8(%ebp),%eax
 8add488:	8b 00                	mov    (%eax),%eax
 8add48a:	89 d1                	mov    %edx,%ecx
 8add48c:	29 c1                	sub    %eax,%ecx
 8add48e:	89 c8                	mov    %ecx,%eax
 8add490:	c1 f8 02             	sar    $0x2,%eax
 8add493:	5d                   	pop    %ebp
 8add494:	c3                   	ret
 8add495:	90                   	nop

08add496 <_ZNKSt6vectorI10WideStringSaIS0_EE5beginEv>:
 8add496:	55                   	push   %ebp
 8add497:	89 e5                	mov    %esp,%ebp
 8add499:	53                   	push   %ebx
 8add49a:	83 ec 24             	sub    $0x24,%esp
 8add49d:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8add4a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add4a3:	8b 00                	mov    (%eax),%eax
 8add4a5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8add4a8:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8add4ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add4af:	89 1c 24             	mov    %ebx,(%esp)
 8add4b2:	e8 2d 02 00 00       	call   8add6e4 <_ZN9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEEC1ERKS3_>
 8add4b7:	89 d8                	mov    %ebx,%eax
 8add4b9:	83 c4 24             	add    $0x24,%esp
 8add4bc:	5b                   	pop    %ebx
 8add4bd:	5d                   	pop    %ebp
 8add4be:	c2 04 00             	ret    $0x4
 8add4c1:	90                   	nop

08add4c2 <_ZNKSt6vectorI10WideStringSaIS0_EE3endEv>:
 8add4c2:	55                   	push   %ebp
 8add4c3:	89 e5                	mov    %esp,%ebp
 8add4c5:	53                   	push   %ebx
 8add4c6:	83 ec 24             	sub    $0x24,%esp
 8add4c9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8add4cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add4cf:	8b 40 04             	mov    0x4(%eax),%eax
 8add4d2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8add4d5:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8add4d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add4dc:	89 1c 24             	mov    %ebx,(%esp)
 8add4df:	e8 00 02 00 00       	call   8add6e4 <_ZN9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEEC1ERKS3_>
 8add4e4:	89 d8                	mov    %ebx,%eax
 8add4e6:	83 c4 24             	add    $0x24,%esp
 8add4e9:	5b                   	pop    %ebx
 8add4ea:	5d                   	pop    %ebp
 8add4eb:	c2 04 00             	ret    $0x4

08add4ee <_ZN9__gnu_cxxneIPK10WideStringSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>:
 8add4ee:	55                   	push   %ebp
 8add4ef:	89 e5                	mov    %esp,%ebp
 8add4f1:	53                   	push   %ebx
 8add4f2:	83 ec 14             	sub    $0x14,%esp
 8add4f5:	8b 45 08             	mov    0x8(%ebp),%eax
 8add4f8:	89 04 24             	mov    %eax,(%esp)
 8add4fb:	e8 f4 01 00 00       	call   8add6f4 <_ZNK9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8add500:	8b 18                	mov    (%eax),%ebx
 8add502:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add505:	89 04 24             	mov    %eax,(%esp)
 8add508:	e8 e7 01 00 00       	call   8add6f4 <_ZNK9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8add50d:	8b 00                	mov    (%eax),%eax
 8add50f:	39 c3                	cmp    %eax,%ebx
 8add511:	0f 95 c0             	setne  %al
 8add514:	83 c4 14             	add    $0x14,%esp
 8add517:	5b                   	pop    %ebx
 8add518:	5d                   	pop    %ebp
 8add519:	c3                   	ret

08add51a <_ZN9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEEppEi>:
 8add51a:	55                   	push   %ebp
 8add51b:	89 e5                	mov    %esp,%ebp
 8add51d:	53                   	push   %ebx
 8add51e:	83 ec 24             	sub    $0x24,%esp
 8add521:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8add524:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add527:	8b 00                	mov    (%eax),%eax
 8add529:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8add52c:	8d 55 f4             	lea    -0xc(%ebp),%edx
 8add52f:	8d 48 04             	lea    0x4(%eax),%ecx
 8add532:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add535:	89 08                	mov    %ecx,(%eax)
 8add537:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add53b:	89 1c 24             	mov    %ebx,(%esp)
 8add53e:	e8 a1 01 00 00       	call   8add6e4 <_ZN9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEEC1ERKS3_>
 8add543:	89 d8                	mov    %ebx,%eax
 8add545:	83 c4 24             	add    $0x24,%esp
 8add548:	5b                   	pop    %ebx
 8add549:	5d                   	pop    %ebp
 8add54a:	c2 04 00             	ret    $0x4
 8add54d:	90                   	nop

08add54e <_ZNK9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEEdeEv>:
 8add54e:	55                   	push   %ebp
 8add54f:	89 e5                	mov    %esp,%ebp
 8add551:	8b 45 08             	mov    0x8(%ebp),%eax
 8add554:	8b 00                	mov    (%eax),%eax
 8add556:	5d                   	pop    %ebp
 8add557:	c3                   	ret

08add558 <_ZNSt6vectorI10CharStringSaIS0_EE12emplace_backIIS0_EEEvDpOT_>:
 8add558:	55                   	push   %ebp
 8add559:	89 e5                	mov    %esp,%ebp
 8add55b:	53                   	push   %ebx
 8add55c:	83 ec 24             	sub    $0x24,%esp
 8add55f:	8b 45 08             	mov    0x8(%ebp),%eax
 8add562:	8b 50 04             	mov    0x4(%eax),%edx
 8add565:	8b 45 08             	mov    0x8(%ebp),%eax
 8add568:	8b 40 08             	mov    0x8(%eax),%eax
 8add56b:	39 c2                	cmp    %eax,%edx
 8add56d:	74 35                	je     8add5a4 <_ZNSt6vectorI10CharStringSaIS0_EE12emplace_backIIS0_EEEvDpOT_+0x4c>
 8add56f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add572:	89 04 24             	mov    %eax,(%esp)
 8add575:	e8 80 8b ff ff       	call   8ad60fa <_ZSt7forwardI10CharStringEOT_ONSt8identityIS1_E4typeE>
 8add57a:	8b 55 08             	mov    0x8(%ebp),%edx
 8add57d:	8b 4a 04             	mov    0x4(%edx),%ecx
 8add580:	8b 55 08             	mov    0x8(%ebp),%edx
 8add583:	89 44 24 08          	mov    %eax,0x8(%esp)
 8add587:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8add58b:	89 14 24             	mov    %edx,(%esp)
 8add58e:	e8 69 01 00 00       	call   8add6fc <_ZN9__gnu_cxx13new_allocatorI10CharStringE9constructIIS1_EEEvPS1_DpOT_>
 8add593:	8b 45 08             	mov    0x8(%ebp),%eax
 8add596:	8b 40 04             	mov    0x4(%eax),%eax
 8add599:	8d 50 04             	lea    0x4(%eax),%edx
 8add59c:	8b 45 08             	mov    0x8(%ebp),%eax
 8add59f:	89 50 04             	mov    %edx,0x4(%eax)
 8add5a2:	eb 38                	jmp    8add5dc <_ZNSt6vectorI10CharStringSaIS0_EE12emplace_backIIS0_EEEvDpOT_+0x84>
 8add5a4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add5a7:	89 04 24             	mov    %eax,(%esp)
 8add5aa:	e8 4b 8b ff ff       	call   8ad60fa <_ZSt7forwardI10CharStringEOT_ONSt8identityIS1_E4typeE>
 8add5af:	89 c3                	mov    %eax,%ebx
 8add5b1:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8add5b4:	8b 55 08             	mov    0x8(%ebp),%edx
 8add5b7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add5bb:	89 04 24             	mov    %eax,(%esp)
 8add5be:	e8 79 01 00 00       	call   8add73c <_ZNSt6vectorI10CharStringSaIS0_EE3endEv>
 8add5c3:	83 ec 04             	sub    $0x4,%esp
 8add5c6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8add5ca:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8add5cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add5d1:	8b 45 08             	mov    0x8(%ebp),%eax
 8add5d4:	89 04 24             	mov    %eax,(%esp)
 8add5d7:	e8 86 01 00 00       	call   8add762 <_ZNSt6vectorI10CharStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_>
 8add5dc:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8add5df:	c9                   	leave
 8add5e0:	c3                   	ret

08add5e1 <_ZN9__gnu_cxxeqIPK10CharStringSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>:
 8add5e1:	55                   	push   %ebp
 8add5e2:	89 e5                	mov    %esp,%ebp
 8add5e4:	53                   	push   %ebx
 8add5e5:	83 ec 14             	sub    $0x14,%esp
 8add5e8:	8b 45 08             	mov    0x8(%ebp),%eax
 8add5eb:	89 04 24             	mov    %eax,(%esp)
 8add5ee:	e8 2b 00 00 00       	call   8add61e <_ZNK9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8add5f3:	8b 18                	mov    (%eax),%ebx
 8add5f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add5f8:	89 04 24             	mov    %eax,(%esp)
 8add5fb:	e8 1e 00 00 00       	call   8add61e <_ZNK9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8add600:	8b 00                	mov    (%eax),%eax
 8add602:	39 c3                	cmp    %eax,%ebx
 8add604:	0f 94 c0             	sete   %al
 8add607:	83 c4 14             	add    $0x14,%esp
 8add60a:	5b                   	pop    %ebx
 8add60b:	5d                   	pop    %ebp
 8add60c:	c3                   	ret
 8add60d:	90                   	nop

08add60e <_ZN9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEEC1ERKS3_>:
 8add60e:	55                   	push   %ebp
 8add60f:	89 e5                	mov    %esp,%ebp
 8add611:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add614:	8b 10                	mov    (%eax),%edx
 8add616:	8b 45 08             	mov    0x8(%ebp),%eax
 8add619:	89 10                	mov    %edx,(%eax)
 8add61b:	5d                   	pop    %ebp
 8add61c:	c3                   	ret
 8add61d:	90                   	nop

08add61e <_ZNK9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEE4baseEv>:
 8add61e:	55                   	push   %ebp
 8add61f:	89 e5                	mov    %esp,%ebp
 8add621:	8b 45 08             	mov    0x8(%ebp),%eax
 8add624:	5d                   	pop    %ebp
 8add625:	c3                   	ret

08add626 <_ZSt4moveIR10WideStringEONSt16remove_referenceIT_E4typeEOS3_>:
 8add626:	55                   	push   %ebp
 8add627:	89 e5                	mov    %esp,%ebp
 8add629:	8b 45 08             	mov    0x8(%ebp),%eax
 8add62c:	5d                   	pop    %ebp
 8add62d:	c3                   	ret

08add62e <_ZNSt6vectorI10WideStringSaIS0_EE12emplace_backIIS0_EEEvDpOT_>:
 8add62e:	55                   	push   %ebp
 8add62f:	89 e5                	mov    %esp,%ebp
 8add631:	53                   	push   %ebx
 8add632:	83 ec 24             	sub    $0x24,%esp
 8add635:	8b 45 08             	mov    0x8(%ebp),%eax
 8add638:	8b 50 04             	mov    0x4(%eax),%edx
 8add63b:	8b 45 08             	mov    0x8(%ebp),%eax
 8add63e:	8b 40 08             	mov    0x8(%eax),%eax
 8add641:	39 c2                	cmp    %eax,%edx
 8add643:	74 35                	je     8add67a <_ZNSt6vectorI10WideStringSaIS0_EE12emplace_backIIS0_EEEvDpOT_+0x4c>
 8add645:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add648:	89 04 24             	mov    %eax,(%esp)
 8add64b:	e8 e6 03 00 00       	call   8adda36 <_ZSt7forwardI10WideStringEOT_ONSt8identityIS1_E4typeE>
 8add650:	8b 55 08             	mov    0x8(%ebp),%edx
 8add653:	8b 4a 04             	mov    0x4(%edx),%ecx
 8add656:	8b 55 08             	mov    0x8(%ebp),%edx
 8add659:	89 44 24 08          	mov    %eax,0x8(%esp)
 8add65d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8add661:	89 14 24             	mov    %edx,(%esp)
 8add664:	e8 d5 03 00 00       	call   8adda3e <_ZN9__gnu_cxx13new_allocatorI10WideStringE9constructIIS1_EEEvPS1_DpOT_>
 8add669:	8b 45 08             	mov    0x8(%ebp),%eax
 8add66c:	8b 40 04             	mov    0x4(%eax),%eax
 8add66f:	8d 50 04             	lea    0x4(%eax),%edx
 8add672:	8b 45 08             	mov    0x8(%ebp),%eax
 8add675:	89 50 04             	mov    %edx,0x4(%eax)
 8add678:	eb 38                	jmp    8add6b2 <_ZNSt6vectorI10WideStringSaIS0_EE12emplace_backIIS0_EEEvDpOT_+0x84>
 8add67a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add67d:	89 04 24             	mov    %eax,(%esp)
 8add680:	e8 b1 03 00 00       	call   8adda36 <_ZSt7forwardI10WideStringEOT_ONSt8identityIS1_E4typeE>
 8add685:	89 c3                	mov    %eax,%ebx
 8add687:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8add68a:	8b 55 08             	mov    0x8(%ebp),%edx
 8add68d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add691:	89 04 24             	mov    %eax,(%esp)
 8add694:	e8 e5 03 00 00       	call   8adda7e <_ZNSt6vectorI10WideStringSaIS0_EE3endEv>
 8add699:	83 ec 04             	sub    $0x4,%esp
 8add69c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8add6a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8add6a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add6a7:	8b 45 08             	mov    0x8(%ebp),%eax
 8add6aa:	89 04 24             	mov    %eax,(%esp)
 8add6ad:	e8 f2 03 00 00       	call   8addaa4 <_ZNSt6vectorI10WideStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_>
 8add6b2:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 8add6b5:	c9                   	leave
 8add6b6:	c3                   	ret

08add6b7 <_ZN9__gnu_cxxeqIPK10WideStringSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>:
 8add6b7:	55                   	push   %ebp
 8add6b8:	89 e5                	mov    %esp,%ebp
 8add6ba:	53                   	push   %ebx
 8add6bb:	83 ec 14             	sub    $0x14,%esp
 8add6be:	8b 45 08             	mov    0x8(%ebp),%eax
 8add6c1:	89 04 24             	mov    %eax,(%esp)
 8add6c4:	e8 2b 00 00 00       	call   8add6f4 <_ZNK9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8add6c9:	8b 18                	mov    (%eax),%ebx
 8add6cb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add6ce:	89 04 24             	mov    %eax,(%esp)
 8add6d1:	e8 1e 00 00 00       	call   8add6f4 <_ZNK9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8add6d6:	8b 00                	mov    (%eax),%eax
 8add6d8:	39 c3                	cmp    %eax,%ebx
 8add6da:	0f 94 c0             	sete   %al
 8add6dd:	83 c4 14             	add    $0x14,%esp
 8add6e0:	5b                   	pop    %ebx
 8add6e1:	5d                   	pop    %ebp
 8add6e2:	c3                   	ret
 8add6e3:	90                   	nop

08add6e4 <_ZN9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEEC1ERKS3_>:
 8add6e4:	55                   	push   %ebp
 8add6e5:	89 e5                	mov    %esp,%ebp
 8add6e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add6ea:	8b 10                	mov    (%eax),%edx
 8add6ec:	8b 45 08             	mov    0x8(%ebp),%eax
 8add6ef:	89 10                	mov    %edx,(%eax)
 8add6f1:	5d                   	pop    %ebp
 8add6f2:	c3                   	ret
 8add6f3:	90                   	nop

08add6f4 <_ZNK9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEE4baseEv>:
 8add6f4:	55                   	push   %ebp
 8add6f5:	89 e5                	mov    %esp,%ebp
 8add6f7:	8b 45 08             	mov    0x8(%ebp),%eax
 8add6fa:	5d                   	pop    %ebp
 8add6fb:	c3                   	ret

08add6fc <_ZN9__gnu_cxx13new_allocatorI10CharStringE9constructIIS1_EEEvPS1_DpOT_>:
 8add6fc:	55                   	push   %ebp
 8add6fd:	89 e5                	mov    %esp,%ebp
 8add6ff:	53                   	push   %ebx
 8add700:	83 ec 14             	sub    $0x14,%esp
 8add703:	8b 45 10             	mov    0x10(%ebp),%eax
 8add706:	89 04 24             	mov    %eax,(%esp)
 8add709:	e8 ec 89 ff ff       	call   8ad60fa <_ZSt7forwardI10CharStringEOT_ONSt8identityIS1_E4typeE>
 8add70e:	89 c3                	mov    %eax,%ebx
 8add710:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add713:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add717:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8add71e:	e8 29 18 5a ff       	call   807ef4c <_ZnwjPv>
 8add723:	89 c2                	mov    %eax,%edx
 8add725:	85 d2                	test   %edx,%edx
 8add727:	74 0c                	je     8add735 <_ZN9__gnu_cxx13new_allocatorI10CharStringE9constructIIS1_EEEvPS1_DpOT_+0x39>
 8add729:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8add72d:	89 04 24             	mov    %eax,(%esp)
 8add730:	e8 91 92 ff ff       	call   8ad69c6 <_ZN10CharStringC1ERKS_>
 8add735:	83 c4 14             	add    $0x14,%esp
 8add738:	5b                   	pop    %ebx
 8add739:	5d                   	pop    %ebp
 8add73a:	c3                   	ret
 8add73b:	90                   	nop

08add73c <_ZNSt6vectorI10CharStringSaIS0_EE3endEv>:
 8add73c:	55                   	push   %ebp
 8add73d:	89 e5                	mov    %esp,%ebp
 8add73f:	53                   	push   %ebx
 8add740:	83 ec 14             	sub    $0x14,%esp
 8add743:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8add746:	8b 45 0c             	mov    0xc(%ebp),%eax
 8add749:	83 c0 04             	add    $0x4,%eax
 8add74c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add750:	89 1c 24             	mov    %ebx,(%esp)
 8add753:	e8 20 06 00 00       	call   8addd78 <_ZN9__gnu_cxx17__normal_iteratorIP10CharStringSt6vectorIS1_SaIS1_EEEC1ERKS2_>
 8add758:	89 d8                	mov    %ebx,%eax
 8add75a:	83 c4 14             	add    $0x14,%esp
 8add75d:	5b                   	pop    %ebx
 8add75e:	5d                   	pop    %ebp
 8add75f:	c2 04 00             	ret    $0x4

08add762 <_ZNSt6vectorI10CharStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_>:
 8add762:	55                   	push   %ebp
 8add763:	89 e5                	mov    %esp,%ebp
 8add765:	56                   	push   %esi
 8add766:	53                   	push   %ebx
 8add767:	83 ec 30             	sub    $0x30,%esp
 8add76a:	8b 45 08             	mov    0x8(%ebp),%eax
 8add76d:	8b 50 04             	mov    0x4(%eax),%edx
 8add770:	8b 45 08             	mov    0x8(%ebp),%eax
 8add773:	8b 40 08             	mov    0x8(%eax),%eax
 8add776:	39 c2                	cmp    %eax,%edx
 8add778:	0f 84 ac 00 00 00    	je     8add82a <_ZNSt6vectorI10CharStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0xc8>
 8add77e:	8b 45 08             	mov    0x8(%ebp),%eax
 8add781:	8b 40 04             	mov    0x4(%eax),%eax
 8add784:	83 e8 04             	sub    $0x4,%eax
 8add787:	89 04 24             	mov    %eax,(%esp)
 8add78a:	e8 7a 81 ff ff       	call   8ad5909 <_ZSt4moveIR10CharStringEONSt16remove_referenceIT_E4typeEOS3_>
 8add78f:	8b 55 08             	mov    0x8(%ebp),%edx
 8add792:	8b 4a 04             	mov    0x4(%edx),%ecx
 8add795:	8b 55 08             	mov    0x8(%ebp),%edx
 8add798:	89 44 24 08          	mov    %eax,0x8(%esp)
 8add79c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8add7a0:	89 14 24             	mov    %edx,(%esp)
 8add7a3:	e8 54 ff ff ff       	call   8add6fc <_ZN9__gnu_cxx13new_allocatorI10CharStringE9constructIIS1_EEEvPS1_DpOT_>
 8add7a8:	8b 45 08             	mov    0x8(%ebp),%eax
 8add7ab:	8b 40 04             	mov    0x4(%eax),%eax
 8add7ae:	8d 50 04             	lea    0x4(%eax),%edx
 8add7b1:	8b 45 08             	mov    0x8(%ebp),%eax
 8add7b4:	89 50 04             	mov    %edx,0x4(%eax)
 8add7b7:	8b 45 08             	mov    0x8(%ebp),%eax
 8add7ba:	8b 40 04             	mov    0x4(%eax),%eax
 8add7bd:	8d 70 fc             	lea    -0x4(%eax),%esi
 8add7c0:	8b 45 08             	mov    0x8(%ebp),%eax
 8add7c3:	8b 40 04             	mov    0x4(%eax),%eax
 8add7c6:	8d 58 f8             	lea    -0x8(%eax),%ebx
 8add7c9:	8d 45 0c             	lea    0xc(%ebp),%eax
 8add7cc:	89 04 24             	mov    %eax,(%esp)
 8add7cf:	e8 b4 05 00 00       	call   8addd88 <_ZNK9__gnu_cxx17__normal_iteratorIP10CharStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8add7d4:	8b 00                	mov    (%eax),%eax
 8add7d6:	89 74 24 08          	mov    %esi,0x8(%esp)
 8add7da:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8add7de:	89 04 24             	mov    %eax,(%esp)
 8add7e1:	e8 aa 05 00 00       	call   8addd90 <_ZSt13move_backwardIP10CharStringS1_ET0_T_S3_S2_>
 8add7e6:	8b 45 10             	mov    0x10(%ebp),%eax
 8add7e9:	89 04 24             	mov    %eax,(%esp)
 8add7ec:	e8 09 89 ff ff       	call   8ad60fa <_ZSt7forwardI10CharStringEOT_ONSt8identityIS1_E4typeE>
 8add7f1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add7f5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8add7f8:	89 04 24             	mov    %eax,(%esp)
 8add7fb:	e8 c6 91 ff ff       	call   8ad69c6 <_ZN10CharStringC1ERKS_>
 8add800:	8d 45 0c             	lea    0xc(%ebp),%eax
 8add803:	89 04 24             	mov    %eax,(%esp)
 8add806:	e8 bd 05 00 00       	call   8adddc8 <_ZNK9__gnu_cxx17__normal_iteratorIP10CharStringSt6vectorIS1_SaIS1_EEEdeEv>
 8add80b:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8add80e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add812:	89 04 24             	mov    %eax,(%esp)
 8add815:	e8 c4 98 ff ff       	call   8ad70de <_ZN10CharStringaSERKS_>
 8add81a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8add81d:	89 04 24             	mov    %eax,(%esp)
 8add820:	e8 95 93 ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8add825:	e9 02 02 00 00       	jmp    8adda2c <_ZNSt6vectorI10CharStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x2ca>
 8add82a:	c7 44 24 08 88 2c e3 	movl   $0x8e32c88,0x8(%esp)
 8add831:	08 
 8add832:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8add839:	00 
 8add83a:	8b 45 08             	mov    0x8(%ebp),%eax
 8add83d:	89 04 24             	mov    %eax,(%esp)
 8add840:	e8 8d 05 00 00       	call   8adddd2 <_ZNKSt6vectorI10CharStringSaIS0_EE12_M_check_lenEjPKc>
 8add845:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8add848:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8add84b:	8b 55 08             	mov    0x8(%ebp),%edx
 8add84e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add852:	89 04 24             	mov    %eax,(%esp)
 8add855:	e8 1e 06 00 00       	call   8adde78 <_ZNSt6vectorI10CharStringSaIS0_EE5beginEv>
 8add85a:	83 ec 04             	sub    $0x4,%esp
 8add85d:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8add860:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add864:	8d 45 0c             	lea    0xc(%ebp),%eax
 8add867:	89 04 24             	mov    %eax,(%esp)
 8add86a:	e8 2c 06 00 00       	call   8adde9b <_ZN9__gnu_cxxmiIP10CharStringSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_>
 8add86f:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8add872:	8b 45 08             	mov    0x8(%ebp),%eax
 8add875:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8add878:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add87c:	89 04 24             	mov    %eax,(%esp)
 8add87f:	e8 4a 06 00 00       	call   8addece <_ZNSt12_Vector_baseI10CharStringSaIS0_EE11_M_allocateEj>
 8add884:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8add887:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8add88a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8add88d:	8b 45 10             	mov    0x10(%ebp),%eax
 8add890:	89 04 24             	mov    %eax,(%esp)
 8add893:	e8 62 88 ff ff       	call   8ad60fa <_ZSt7forwardI10CharStringEOT_ONSt8identityIS1_E4typeE>
 8add898:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8add89b:	c1 e2 02             	shl    $0x2,%edx
 8add89e:	89 d1                	mov    %edx,%ecx
 8add8a0:	03 4d f0             	add    -0x10(%ebp),%ecx
 8add8a3:	8b 55 08             	mov    0x8(%ebp),%edx
 8add8a6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8add8aa:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8add8ae:	89 14 24             	mov    %edx,(%esp)
 8add8b1:	e8 46 fe ff ff       	call   8add6fc <_ZN9__gnu_cxx13new_allocatorI10CharStringE9constructIIS1_EEEvPS1_DpOT_>
 8add8b6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8add8bd:	8b 45 08             	mov    0x8(%ebp),%eax
 8add8c0:	89 04 24             	mov    %eax,(%esp)
 8add8c3:	e8 36 06 00 00       	call   8addefe <_ZNSt12_Vector_baseI10CharStringSaIS0_EE19_M_get_Tp_allocatorEv>
 8add8c8:	89 c3                	mov    %eax,%ebx
 8add8ca:	8d 45 0c             	lea    0xc(%ebp),%eax
 8add8cd:	89 04 24             	mov    %eax,(%esp)
 8add8d0:	e8 b3 04 00 00       	call   8addd88 <_ZNK9__gnu_cxx17__normal_iteratorIP10CharStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8add8d5:	8b 10                	mov    (%eax),%edx
 8add8d7:	8b 45 08             	mov    0x8(%ebp),%eax
 8add8da:	8b 00                	mov    (%eax),%eax
 8add8dc:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8add8e0:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8add8e3:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8add8e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add8eb:	89 04 24             	mov    %eax,(%esp)
 8add8ee:	e8 13 06 00 00       	call   8addf06 <_ZSt22__uninitialized_move_aIP10CharStringS1_SaIS0_EET0_T_S4_S3_RT1_>
 8add8f3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8add8f6:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
 8add8fa:	8b 45 08             	mov    0x8(%ebp),%eax
 8add8fd:	89 04 24             	mov    %eax,(%esp)
 8add900:	e8 f9 05 00 00       	call   8addefe <_ZNSt12_Vector_baseI10CharStringSaIS0_EE19_M_get_Tp_allocatorEv>
 8add905:	89 c3                	mov    %eax,%ebx
 8add907:	8b 45 08             	mov    0x8(%ebp),%eax
 8add90a:	8b 70 04             	mov    0x4(%eax),%esi
 8add90d:	8d 45 0c             	lea    0xc(%ebp),%eax
 8add910:	89 04 24             	mov    %eax,(%esp)
 8add913:	e8 70 04 00 00       	call   8addd88 <_ZNK9__gnu_cxx17__normal_iteratorIP10CharStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8add918:	8b 00                	mov    (%eax),%eax
 8add91a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8add91e:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8add921:	89 54 24 08          	mov    %edx,0x8(%esp)
 8add925:	89 74 24 04          	mov    %esi,0x4(%esp)
 8add929:	89 04 24             	mov    %eax,(%esp)
 8add92c:	e8 d5 05 00 00       	call   8addf06 <_ZSt22__uninitialized_move_aIP10CharStringS1_SaIS0_EET0_T_S4_S3_RT1_>
 8add931:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8add934:	8b 45 08             	mov    0x8(%ebp),%eax
 8add937:	89 04 24             	mov    %eax,(%esp)
 8add93a:	e8 bf 05 00 00       	call   8addefe <_ZNSt12_Vector_baseI10CharStringSaIS0_EE19_M_get_Tp_allocatorEv>
 8add93f:	8b 55 08             	mov    0x8(%ebp),%edx
 8add942:	8b 4a 04             	mov    0x4(%edx),%ecx
 8add945:	8b 55 08             	mov    0x8(%ebp),%edx
 8add948:	8b 12                	mov    (%edx),%edx
 8add94a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8add94e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8add952:	89 14 24             	mov    %edx,(%esp)
 8add955:	e8 11 06 00 00       	call   8addf6b <_ZSt8_DestroyIP10CharStringS0_EvT_S2_RSaIT0_E>
 8add95a:	8b 45 08             	mov    0x8(%ebp),%eax
 8add95d:	8b 40 08             	mov    0x8(%eax),%eax
 8add960:	89 c2                	mov    %eax,%edx
 8add962:	8b 45 08             	mov    0x8(%ebp),%eax
 8add965:	8b 00                	mov    (%eax),%eax
 8add967:	89 d1                	mov    %edx,%ecx
 8add969:	29 c1                	sub    %eax,%ecx
 8add96b:	89 c8                	mov    %ecx,%eax
 8add96d:	c1 f8 02             	sar    $0x2,%eax
 8add970:	89 c1                	mov    %eax,%ecx
 8add972:	8b 45 08             	mov    0x8(%ebp),%eax
 8add975:	8b 10                	mov    (%eax),%edx
 8add977:	8b 45 08             	mov    0x8(%ebp),%eax
 8add97a:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8add97e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add982:	89 04 24             	mov    %eax,(%esp)
 8add985:	e8 fc 05 00 00       	call   8addf86 <_ZNSt12_Vector_baseI10CharStringSaIS0_EE13_M_deallocateEPS0_j>
 8add98a:	8b 45 08             	mov    0x8(%ebp),%eax
 8add98d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8add990:	89 10                	mov    %edx,(%eax)
 8add992:	8b 45 08             	mov    0x8(%ebp),%eax
 8add995:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8add998:	89 50 04             	mov    %edx,0x4(%eax)
 8add99b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8add99e:	c1 e0 02             	shl    $0x2,%eax
 8add9a1:	89 c2                	mov    %eax,%edx
 8add9a3:	03 55 f0             	add    -0x10(%ebp),%edx
 8add9a6:	8b 45 08             	mov    0x8(%ebp),%eax
 8add9a9:	89 50 08             	mov    %edx,0x8(%eax)
 8add9ac:	eb 7e                	jmp    8adda2c <_ZNSt6vectorI10CharStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x2ca>
 8add9ae:	89 04 24             	mov    %eax,(%esp)
 8add9b1:	e8 2a 83 c4 ff       	call   8725ce0 <__cxa_begin_catch>
 8add9b6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8add9ba:	75 1c                	jne    8add9d8 <_ZNSt6vectorI10CharStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x276>
 8add9bc:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8add9bf:	c1 e0 02             	shl    $0x2,%eax
 8add9c2:	89 c2                	mov    %eax,%edx
 8add9c4:	03 55 f0             	add    -0x10(%ebp),%edx
 8add9c7:	8b 45 08             	mov    0x8(%ebp),%eax
 8add9ca:	89 54 24 04          	mov    %edx,0x4(%esp)
 8add9ce:	89 04 24             	mov    %eax,(%esp)
 8add9d1:	e8 82 05 00 00       	call   8addf58 <_ZN9__gnu_cxx13new_allocatorI10CharStringE7destroyEPS1_>
 8add9d6:	eb 21                	jmp    8add9f9 <_ZNSt6vectorI10CharStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x297>
 8add9d8:	8b 45 08             	mov    0x8(%ebp),%eax
 8add9db:	89 04 24             	mov    %eax,(%esp)
 8add9de:	e8 1b 05 00 00       	call   8addefe <_ZNSt12_Vector_baseI10CharStringSaIS0_EE19_M_get_Tp_allocatorEv>
 8add9e3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8add9e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8add9ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 8add9ee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8add9f1:	89 04 24             	mov    %eax,(%esp)
 8add9f4:	e8 72 05 00 00       	call   8addf6b <_ZSt8_DestroyIP10CharStringS0_EvT_S2_RSaIT0_E>
 8add9f9:	8b 45 08             	mov    0x8(%ebp),%eax
 8add9fc:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8add9ff:	89 54 24 08          	mov    %edx,0x8(%esp)
 8adda03:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8adda06:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adda0a:	89 04 24             	mov    %eax,(%esp)
 8adda0d:	e8 74 05 00 00       	call   8addf86 <_ZNSt12_Vector_baseI10CharStringSaIS0_EE13_M_deallocateEPS0_j>
 8adda12:	e8 c9 71 c4 ff       	call   8724be0 <__cxa_rethrow>
 8adda17:	89 d3                	mov    %edx,%ebx
 8adda19:	89 c6                	mov    %eax,%esi
 8adda1b:	e8 10 82 c4 ff       	call   8725c30 <__cxa_end_catch>
 8adda20:	89 f0                	mov    %esi,%eax
 8adda22:	89 da                	mov    %ebx,%edx
 8adda24:	89 04 24             	mov    %eax,(%esp)
 8adda27:	e8 24 5d 00 00       	call   8ae3750 <_Unwind_Resume>
 8adda2c:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8adda2f:	83 c4 00             	add    $0x0,%esp
 8adda32:	5b                   	pop    %ebx
 8adda33:	5e                   	pop    %esi
 8adda34:	5d                   	pop    %ebp
 8adda35:	c3                   	ret

08adda36 <_ZSt7forwardI10WideStringEOT_ONSt8identityIS1_E4typeE>:
 8adda36:	55                   	push   %ebp
 8adda37:	89 e5                	mov    %esp,%ebp
 8adda39:	8b 45 08             	mov    0x8(%ebp),%eax
 8adda3c:	5d                   	pop    %ebp
 8adda3d:	c3                   	ret

08adda3e <_ZN9__gnu_cxx13new_allocatorI10WideStringE9constructIIS1_EEEvPS1_DpOT_>:
 8adda3e:	55                   	push   %ebp
 8adda3f:	89 e5                	mov    %esp,%ebp
 8adda41:	53                   	push   %ebx
 8adda42:	83 ec 14             	sub    $0x14,%esp
 8adda45:	8b 45 10             	mov    0x10(%ebp),%eax
 8adda48:	89 04 24             	mov    %eax,(%esp)
 8adda4b:	e8 e6 ff ff ff       	call   8adda36 <_ZSt7forwardI10WideStringEOT_ONSt8identityIS1_E4typeE>
 8adda50:	89 c3                	mov    %eax,%ebx
 8adda52:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adda55:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adda59:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8adda60:	e8 e7 14 5a ff       	call   807ef4c <_ZnwjPv>
 8adda65:	89 c2                	mov    %eax,%edx
 8adda67:	85 d2                	test   %edx,%edx
 8adda69:	74 0c                	je     8adda77 <_ZN9__gnu_cxx13new_allocatorI10WideStringE9constructIIS1_EEEvPS1_DpOT_+0x39>
 8adda6b:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8adda6f:	89 04 24             	mov    %eax,(%esp)
 8adda72:	e8 a3 bf ff ff       	call   8ad9a1a <_ZN10WideStringC1ERKS_>
 8adda77:	83 c4 14             	add    $0x14,%esp
 8adda7a:	5b                   	pop    %ebx
 8adda7b:	5d                   	pop    %ebp
 8adda7c:	c3                   	ret
 8adda7d:	90                   	nop

08adda7e <_ZNSt6vectorI10WideStringSaIS0_EE3endEv>:
 8adda7e:	55                   	push   %ebp
 8adda7f:	89 e5                	mov    %esp,%ebp
 8adda81:	53                   	push   %ebx
 8adda82:	83 ec 14             	sub    $0x14,%esp
 8adda85:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adda88:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adda8b:	83 c0 04             	add    $0x4,%eax
 8adda8e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adda92:	89 1c 24             	mov    %ebx,(%esp)
 8adda95:	e8 14 05 00 00       	call   8addfae <_ZN9__gnu_cxx17__normal_iteratorIP10WideStringSt6vectorIS1_SaIS1_EEEC1ERKS2_>
 8adda9a:	89 d8                	mov    %ebx,%eax
 8adda9c:	83 c4 14             	add    $0x14,%esp
 8adda9f:	5b                   	pop    %ebx
 8addaa0:	5d                   	pop    %ebp
 8addaa1:	c2 04 00             	ret    $0x4

08addaa4 <_ZNSt6vectorI10WideStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_>:
 8addaa4:	55                   	push   %ebp
 8addaa5:	89 e5                	mov    %esp,%ebp
 8addaa7:	56                   	push   %esi
 8addaa8:	53                   	push   %ebx
 8addaa9:	83 ec 30             	sub    $0x30,%esp
 8addaac:	8b 45 08             	mov    0x8(%ebp),%eax
 8addaaf:	8b 50 04             	mov    0x4(%eax),%edx
 8addab2:	8b 45 08             	mov    0x8(%ebp),%eax
 8addab5:	8b 40 08             	mov    0x8(%eax),%eax
 8addab8:	39 c2                	cmp    %eax,%edx
 8addaba:	0f 84 ac 00 00 00    	je     8addb6c <_ZNSt6vectorI10WideStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0xc8>
 8addac0:	8b 45 08             	mov    0x8(%ebp),%eax
 8addac3:	8b 40 04             	mov    0x4(%eax),%eax
 8addac6:	83 e8 04             	sub    $0x4,%eax
 8addac9:	89 04 24             	mov    %eax,(%esp)
 8addacc:	e8 55 fb ff ff       	call   8add626 <_ZSt4moveIR10WideStringEONSt16remove_referenceIT_E4typeEOS3_>
 8addad1:	8b 55 08             	mov    0x8(%ebp),%edx
 8addad4:	8b 4a 04             	mov    0x4(%edx),%ecx
 8addad7:	8b 55 08             	mov    0x8(%ebp),%edx
 8addada:	89 44 24 08          	mov    %eax,0x8(%esp)
 8addade:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8addae2:	89 14 24             	mov    %edx,(%esp)
 8addae5:	e8 54 ff ff ff       	call   8adda3e <_ZN9__gnu_cxx13new_allocatorI10WideStringE9constructIIS1_EEEvPS1_DpOT_>
 8addaea:	8b 45 08             	mov    0x8(%ebp),%eax
 8addaed:	8b 40 04             	mov    0x4(%eax),%eax
 8addaf0:	8d 50 04             	lea    0x4(%eax),%edx
 8addaf3:	8b 45 08             	mov    0x8(%ebp),%eax
 8addaf6:	89 50 04             	mov    %edx,0x4(%eax)
 8addaf9:	8b 45 08             	mov    0x8(%ebp),%eax
 8addafc:	8b 40 04             	mov    0x4(%eax),%eax
 8addaff:	8d 70 fc             	lea    -0x4(%eax),%esi
 8addb02:	8b 45 08             	mov    0x8(%ebp),%eax
 8addb05:	8b 40 04             	mov    0x4(%eax),%eax
 8addb08:	8d 58 f8             	lea    -0x8(%eax),%ebx
 8addb0b:	8d 45 0c             	lea    0xc(%ebp),%eax
 8addb0e:	89 04 24             	mov    %eax,(%esp)
 8addb11:	e8 a8 04 00 00       	call   8addfbe <_ZNK9__gnu_cxx17__normal_iteratorIP10WideStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8addb16:	8b 00                	mov    (%eax),%eax
 8addb18:	89 74 24 08          	mov    %esi,0x8(%esp)
 8addb1c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8addb20:	89 04 24             	mov    %eax,(%esp)
 8addb23:	e8 9e 04 00 00       	call   8addfc6 <_ZSt13move_backwardIP10WideStringS1_ET0_T_S3_S2_>
 8addb28:	8b 45 10             	mov    0x10(%ebp),%eax
 8addb2b:	89 04 24             	mov    %eax,(%esp)
 8addb2e:	e8 03 ff ff ff       	call   8adda36 <_ZSt7forwardI10WideStringEOT_ONSt8identityIS1_E4typeE>
 8addb33:	89 44 24 04          	mov    %eax,0x4(%esp)
 8addb37:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8addb3a:	89 04 24             	mov    %eax,(%esp)
 8addb3d:	e8 d8 be ff ff       	call   8ad9a1a <_ZN10WideStringC1ERKS_>
 8addb42:	8d 45 0c             	lea    0xc(%ebp),%eax
 8addb45:	89 04 24             	mov    %eax,(%esp)
 8addb48:	e8 b1 04 00 00       	call   8addffe <_ZNK9__gnu_cxx17__normal_iteratorIP10WideStringSt6vectorIS1_SaIS1_EEEdeEv>
 8addb4d:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8addb50:	89 54 24 04          	mov    %edx,0x4(%esp)
 8addb54:	89 04 24             	mov    %eax,(%esp)
 8addb57:	e8 e0 c5 ff ff       	call   8ada13c <_ZN10WideStringaSERKS_>
 8addb5c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8addb5f:	89 04 24             	mov    %eax,(%esp)
 8addb62:	e8 ad c0 ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8addb67:	e9 02 02 00 00       	jmp    8addd6e <_ZNSt6vectorI10WideStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x2ca>
 8addb6c:	c7 44 24 08 88 2c e3 	movl   $0x8e32c88,0x8(%esp)
 8addb73:	08 
 8addb74:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8addb7b:	00 
 8addb7c:	8b 45 08             	mov    0x8(%ebp),%eax
 8addb7f:	89 04 24             	mov    %eax,(%esp)
 8addb82:	e8 81 04 00 00       	call   8ade008 <_ZNKSt6vectorI10WideStringSaIS0_EE12_M_check_lenEjPKc>
 8addb87:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8addb8a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8addb8d:	8b 55 08             	mov    0x8(%ebp),%edx
 8addb90:	89 54 24 04          	mov    %edx,0x4(%esp)
 8addb94:	89 04 24             	mov    %eax,(%esp)
 8addb97:	e8 12 05 00 00       	call   8ade0ae <_ZNSt6vectorI10WideStringSaIS0_EE5beginEv>
 8addb9c:	83 ec 04             	sub    $0x4,%esp
 8addb9f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8addba2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8addba6:	8d 45 0c             	lea    0xc(%ebp),%eax
 8addba9:	89 04 24             	mov    %eax,(%esp)
 8addbac:	e8 20 05 00 00       	call   8ade0d1 <_ZN9__gnu_cxxmiIP10WideStringSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_>
 8addbb1:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8addbb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8addbb7:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8addbba:	89 54 24 04          	mov    %edx,0x4(%esp)
 8addbbe:	89 04 24             	mov    %eax,(%esp)
 8addbc1:	e8 3e 05 00 00       	call   8ade104 <_ZNSt12_Vector_baseI10WideStringSaIS0_EE11_M_allocateEj>
 8addbc6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8addbc9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8addbcc:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8addbcf:	8b 45 10             	mov    0x10(%ebp),%eax
 8addbd2:	89 04 24             	mov    %eax,(%esp)
 8addbd5:	e8 5c fe ff ff       	call   8adda36 <_ZSt7forwardI10WideStringEOT_ONSt8identityIS1_E4typeE>
 8addbda:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8addbdd:	c1 e2 02             	shl    $0x2,%edx
 8addbe0:	89 d1                	mov    %edx,%ecx
 8addbe2:	03 4d f0             	add    -0x10(%ebp),%ecx
 8addbe5:	8b 55 08             	mov    0x8(%ebp),%edx
 8addbe8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8addbec:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8addbf0:	89 14 24             	mov    %edx,(%esp)
 8addbf3:	e8 46 fe ff ff       	call   8adda3e <_ZN9__gnu_cxx13new_allocatorI10WideStringE9constructIIS1_EEEvPS1_DpOT_>
 8addbf8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8addbff:	8b 45 08             	mov    0x8(%ebp),%eax
 8addc02:	89 04 24             	mov    %eax,(%esp)
 8addc05:	e8 2a 05 00 00       	call   8ade134 <_ZNSt12_Vector_baseI10WideStringSaIS0_EE19_M_get_Tp_allocatorEv>
 8addc0a:	89 c3                	mov    %eax,%ebx
 8addc0c:	8d 45 0c             	lea    0xc(%ebp),%eax
 8addc0f:	89 04 24             	mov    %eax,(%esp)
 8addc12:	e8 a7 03 00 00       	call   8addfbe <_ZNK9__gnu_cxx17__normal_iteratorIP10WideStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8addc17:	8b 10                	mov    (%eax),%edx
 8addc19:	8b 45 08             	mov    0x8(%ebp),%eax
 8addc1c:	8b 00                	mov    (%eax),%eax
 8addc1e:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8addc22:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8addc25:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8addc29:	89 54 24 04          	mov    %edx,0x4(%esp)
 8addc2d:	89 04 24             	mov    %eax,(%esp)
 8addc30:	e8 07 05 00 00       	call   8ade13c <_ZSt22__uninitialized_move_aIP10WideStringS1_SaIS0_EET0_T_S4_S3_RT1_>
 8addc35:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8addc38:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
 8addc3c:	8b 45 08             	mov    0x8(%ebp),%eax
 8addc3f:	89 04 24             	mov    %eax,(%esp)
 8addc42:	e8 ed 04 00 00       	call   8ade134 <_ZNSt12_Vector_baseI10WideStringSaIS0_EE19_M_get_Tp_allocatorEv>
 8addc47:	89 c3                	mov    %eax,%ebx
 8addc49:	8b 45 08             	mov    0x8(%ebp),%eax
 8addc4c:	8b 70 04             	mov    0x4(%eax),%esi
 8addc4f:	8d 45 0c             	lea    0xc(%ebp),%eax
 8addc52:	89 04 24             	mov    %eax,(%esp)
 8addc55:	e8 64 03 00 00       	call   8addfbe <_ZNK9__gnu_cxx17__normal_iteratorIP10WideStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8addc5a:	8b 00                	mov    (%eax),%eax
 8addc5c:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8addc60:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8addc63:	89 54 24 08          	mov    %edx,0x8(%esp)
 8addc67:	89 74 24 04          	mov    %esi,0x4(%esp)
 8addc6b:	89 04 24             	mov    %eax,(%esp)
 8addc6e:	e8 c9 04 00 00       	call   8ade13c <_ZSt22__uninitialized_move_aIP10WideStringS1_SaIS0_EET0_T_S4_S3_RT1_>
 8addc73:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8addc76:	8b 45 08             	mov    0x8(%ebp),%eax
 8addc79:	89 04 24             	mov    %eax,(%esp)
 8addc7c:	e8 b3 04 00 00       	call   8ade134 <_ZNSt12_Vector_baseI10WideStringSaIS0_EE19_M_get_Tp_allocatorEv>
 8addc81:	8b 55 08             	mov    0x8(%ebp),%edx
 8addc84:	8b 4a 04             	mov    0x4(%edx),%ecx
 8addc87:	8b 55 08             	mov    0x8(%ebp),%edx
 8addc8a:	8b 12                	mov    (%edx),%edx
 8addc8c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8addc90:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8addc94:	89 14 24             	mov    %edx,(%esp)
 8addc97:	e8 05 05 00 00       	call   8ade1a1 <_ZSt8_DestroyIP10WideStringS0_EvT_S2_RSaIT0_E>
 8addc9c:	8b 45 08             	mov    0x8(%ebp),%eax
 8addc9f:	8b 40 08             	mov    0x8(%eax),%eax
 8addca2:	89 c2                	mov    %eax,%edx
 8addca4:	8b 45 08             	mov    0x8(%ebp),%eax
 8addca7:	8b 00                	mov    (%eax),%eax
 8addca9:	89 d1                	mov    %edx,%ecx
 8addcab:	29 c1                	sub    %eax,%ecx
 8addcad:	89 c8                	mov    %ecx,%eax
 8addcaf:	c1 f8 02             	sar    $0x2,%eax
 8addcb2:	89 c1                	mov    %eax,%ecx
 8addcb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8addcb7:	8b 10                	mov    (%eax),%edx
 8addcb9:	8b 45 08             	mov    0x8(%ebp),%eax
 8addcbc:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8addcc0:	89 54 24 04          	mov    %edx,0x4(%esp)
 8addcc4:	89 04 24             	mov    %eax,(%esp)
 8addcc7:	e8 f0 04 00 00       	call   8ade1bc <_ZNSt12_Vector_baseI10WideStringSaIS0_EE13_M_deallocateEPS0_j>
 8addccc:	8b 45 08             	mov    0x8(%ebp),%eax
 8addccf:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8addcd2:	89 10                	mov    %edx,(%eax)
 8addcd4:	8b 45 08             	mov    0x8(%ebp),%eax
 8addcd7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8addcda:	89 50 04             	mov    %edx,0x4(%eax)
 8addcdd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8addce0:	c1 e0 02             	shl    $0x2,%eax
 8addce3:	89 c2                	mov    %eax,%edx
 8addce5:	03 55 f0             	add    -0x10(%ebp),%edx
 8addce8:	8b 45 08             	mov    0x8(%ebp),%eax
 8addceb:	89 50 08             	mov    %edx,0x8(%eax)
 8addcee:	eb 7e                	jmp    8addd6e <_ZNSt6vectorI10WideStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x2ca>
 8addcf0:	89 04 24             	mov    %eax,(%esp)
 8addcf3:	e8 e8 7f c4 ff       	call   8725ce0 <__cxa_begin_catch>
 8addcf8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8addcfc:	75 1c                	jne    8addd1a <_ZNSt6vectorI10WideStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x276>
 8addcfe:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8addd01:	c1 e0 02             	shl    $0x2,%eax
 8addd04:	89 c2                	mov    %eax,%edx
 8addd06:	03 55 f0             	add    -0x10(%ebp),%edx
 8addd09:	8b 45 08             	mov    0x8(%ebp),%eax
 8addd0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8addd10:	89 04 24             	mov    %eax,(%esp)
 8addd13:	e8 76 04 00 00       	call   8ade18e <_ZN9__gnu_cxx13new_allocatorI10WideStringE7destroyEPS1_>
 8addd18:	eb 21                	jmp    8addd3b <_ZNSt6vectorI10WideStringSaIS0_EE13_M_insert_auxIIS0_EEEvN9__gnu_cxx17__normal_iteratorIPS0_S2_EEDpOT_+0x297>
 8addd1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8addd1d:	89 04 24             	mov    %eax,(%esp)
 8addd20:	e8 0f 04 00 00       	call   8ade134 <_ZNSt12_Vector_baseI10WideStringSaIS0_EE19_M_get_Tp_allocatorEv>
 8addd25:	89 44 24 08          	mov    %eax,0x8(%esp)
 8addd29:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8addd2c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8addd30:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8addd33:	89 04 24             	mov    %eax,(%esp)
 8addd36:	e8 66 04 00 00       	call   8ade1a1 <_ZSt8_DestroyIP10WideStringS0_EvT_S2_RSaIT0_E>
 8addd3b:	8b 45 08             	mov    0x8(%ebp),%eax
 8addd3e:	8b 55 e8             	mov    -0x18(%ebp),%edx
 8addd41:	89 54 24 08          	mov    %edx,0x8(%esp)
 8addd45:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8addd48:	89 54 24 04          	mov    %edx,0x4(%esp)
 8addd4c:	89 04 24             	mov    %eax,(%esp)
 8addd4f:	e8 68 04 00 00       	call   8ade1bc <_ZNSt12_Vector_baseI10WideStringSaIS0_EE13_M_deallocateEPS0_j>
 8addd54:	e8 87 6e c4 ff       	call   8724be0 <__cxa_rethrow>
 8addd59:	89 d3                	mov    %edx,%ebx
 8addd5b:	89 c6                	mov    %eax,%esi
 8addd5d:	e8 ce 7e c4 ff       	call   8725c30 <__cxa_end_catch>
 8addd62:	89 f0                	mov    %esi,%eax
 8addd64:	89 da                	mov    %ebx,%edx
 8addd66:	89 04 24             	mov    %eax,(%esp)
 8addd69:	e8 e2 59 00 00       	call   8ae3750 <_Unwind_Resume>
 8addd6e:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8addd71:	83 c4 00             	add    $0x0,%esp
 8addd74:	5b                   	pop    %ebx
 8addd75:	5e                   	pop    %esi
 8addd76:	5d                   	pop    %ebp
 8addd77:	c3                   	ret

08addd78 <_ZN9__gnu_cxx17__normal_iteratorIP10CharStringSt6vectorIS1_SaIS1_EEEC1ERKS2_>:
 8addd78:	55                   	push   %ebp
 8addd79:	89 e5                	mov    %esp,%ebp
 8addd7b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8addd7e:	8b 10                	mov    (%eax),%edx
 8addd80:	8b 45 08             	mov    0x8(%ebp),%eax
 8addd83:	89 10                	mov    %edx,(%eax)
 8addd85:	5d                   	pop    %ebp
 8addd86:	c3                   	ret
 8addd87:	90                   	nop

08addd88 <_ZNK9__gnu_cxx17__normal_iteratorIP10CharStringSt6vectorIS1_SaIS1_EEE4baseEv>:
 8addd88:	55                   	push   %ebp
 8addd89:	89 e5                	mov    %esp,%ebp
 8addd8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8addd8e:	5d                   	pop    %ebp
 8addd8f:	c3                   	ret

08addd90 <_ZSt13move_backwardIP10CharStringS1_ET0_T_S3_S2_>:
 8addd90:	55                   	push   %ebp
 8addd91:	89 e5                	mov    %esp,%ebp
 8addd93:	53                   	push   %ebx
 8addd94:	83 ec 14             	sub    $0x14,%esp
 8addd97:	8b 45 0c             	mov    0xc(%ebp),%eax
 8addd9a:	89 04 24             	mov    %eax,(%esp)
 8addd9d:	e8 41 04 00 00       	call   8ade1e3 <_ZNSt12__miter_baseIP10CharStringLb0EE3__bES1_>
 8addda2:	89 c3                	mov    %eax,%ebx
 8addda4:	8b 45 08             	mov    0x8(%ebp),%eax
 8addda7:	89 04 24             	mov    %eax,(%esp)
 8adddaa:	e8 34 04 00 00       	call   8ade1e3 <_ZNSt12__miter_baseIP10CharStringLb0EE3__bES1_>
 8adddaf:	8b 55 10             	mov    0x10(%ebp),%edx
 8adddb2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8adddb6:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8adddba:	89 04 24             	mov    %eax,(%esp)
 8adddbd:	e8 29 04 00 00       	call   8ade1eb <_ZSt23__copy_move_backward_a2ILb1EP10CharStringS1_ET1_T0_S3_S2_>
 8adddc2:	83 c4 14             	add    $0x14,%esp
 8adddc5:	5b                   	pop    %ebx
 8adddc6:	5d                   	pop    %ebp
 8adddc7:	c3                   	ret

08adddc8 <_ZNK9__gnu_cxx17__normal_iteratorIP10CharStringSt6vectorIS1_SaIS1_EEEdeEv>:
 8adddc8:	55                   	push   %ebp
 8adddc9:	89 e5                	mov    %esp,%ebp
 8adddcb:	8b 45 08             	mov    0x8(%ebp),%eax
 8adddce:	8b 00                	mov    (%eax),%eax
 8adddd0:	5d                   	pop    %ebp
 8adddd1:	c3                   	ret

08adddd2 <_ZNKSt6vectorI10CharStringSaIS0_EE12_M_check_lenEjPKc>:
 8adddd2:	55                   	push   %ebp
 8adddd3:	89 e5                	mov    %esp,%ebp
 8adddd5:	53                   	push   %ebx
 8adddd6:	83 ec 24             	sub    $0x24,%esp
 8adddd9:	8b 45 08             	mov    0x8(%ebp),%eax
 8addddc:	89 04 24             	mov    %eax,(%esp)
 8addddf:	e8 4c 04 00 00       	call   8ade230 <_ZNKSt6vectorI10CharStringSaIS0_EE8max_sizeEv>
 8addde4:	89 c3                	mov    %eax,%ebx
 8addde6:	8b 45 08             	mov    0x8(%ebp),%eax
 8addde9:	89 04 24             	mov    %eax,(%esp)
 8adddec:	e8 45 f5 ff ff       	call   8add336 <_ZNKSt6vectorI10CharStringSaIS0_EE4sizeEv>
 8adddf1:	89 da                	mov    %ebx,%edx
 8adddf3:	29 c2                	sub    %eax,%edx
 8adddf5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adddf8:	39 c2                	cmp    %eax,%edx
 8adddfa:	0f 92 c0             	setb   %al
 8adddfd:	84 c0                	test   %al,%al
 8adddff:	74 0b                	je     8adde0c <_ZNKSt6vectorI10CharStringSaIS0_EE12_M_check_lenEjPKc+0x3a>
 8adde01:	8b 45 10             	mov    0x10(%ebp),%eax
 8adde04:	89 04 24             	mov    %eax,(%esp)
 8adde07:	e8 34 be bf ff       	call   86d9c40 <_ZSt20__throw_length_errorPKc>
 8adde0c:	8b 45 08             	mov    0x8(%ebp),%eax
 8adde0f:	89 04 24             	mov    %eax,(%esp)
 8adde12:	e8 1f f5 ff ff       	call   8add336 <_ZNKSt6vectorI10CharStringSaIS0_EE4sizeEv>
 8adde17:	89 c3                	mov    %eax,%ebx
 8adde19:	8b 45 08             	mov    0x8(%ebp),%eax
 8adde1c:	89 04 24             	mov    %eax,(%esp)
 8adde1f:	e8 12 f5 ff ff       	call   8add336 <_ZNKSt6vectorI10CharStringSaIS0_EE4sizeEv>
 8adde24:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8adde27:	8d 45 0c             	lea    0xc(%ebp),%eax
 8adde2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adde2e:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8adde31:	89 04 24             	mov    %eax,(%esp)
 8adde34:	e8 f8 16 5a ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 8adde39:	8b 00                	mov    (%eax),%eax
 8adde3b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8adde3e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8adde41:	8b 45 08             	mov    0x8(%ebp),%eax
 8adde44:	89 04 24             	mov    %eax,(%esp)
 8adde47:	e8 ea f4 ff ff       	call   8add336 <_ZNKSt6vectorI10CharStringSaIS0_EE4sizeEv>
 8adde4c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8adde4f:	77 10                	ja     8adde61 <_ZNKSt6vectorI10CharStringSaIS0_EE12_M_check_lenEjPKc+0x8f>
 8adde51:	8b 45 08             	mov    0x8(%ebp),%eax
 8adde54:	89 04 24             	mov    %eax,(%esp)
 8adde57:	e8 d4 03 00 00       	call   8ade230 <_ZNKSt6vectorI10CharStringSaIS0_EE8max_sizeEv>
 8adde5c:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8adde5f:	73 0d                	jae    8adde6e <_ZNKSt6vectorI10CharStringSaIS0_EE12_M_check_lenEjPKc+0x9c>
 8adde61:	8b 45 08             	mov    0x8(%ebp),%eax
 8adde64:	89 04 24             	mov    %eax,(%esp)
 8adde67:	e8 c4 03 00 00       	call   8ade230 <_ZNKSt6vectorI10CharStringSaIS0_EE8max_sizeEv>
 8adde6c:	eb 03                	jmp    8adde71 <_ZNKSt6vectorI10CharStringSaIS0_EE12_M_check_lenEjPKc+0x9f>
 8adde6e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8adde71:	83 c4 24             	add    $0x24,%esp
 8adde74:	5b                   	pop    %ebx
 8adde75:	5d                   	pop    %ebp
 8adde76:	c3                   	ret
 8adde77:	90                   	nop

08adde78 <_ZNSt6vectorI10CharStringSaIS0_EE5beginEv>:
 8adde78:	55                   	push   %ebp
 8adde79:	89 e5                	mov    %esp,%ebp
 8adde7b:	53                   	push   %ebx
 8adde7c:	83 ec 14             	sub    $0x14,%esp
 8adde7f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adde82:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adde85:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adde89:	89 1c 24             	mov    %ebx,(%esp)
 8adde8c:	e8 e7 fe ff ff       	call   8addd78 <_ZN9__gnu_cxx17__normal_iteratorIP10CharStringSt6vectorIS1_SaIS1_EEEC1ERKS2_>
 8adde91:	89 d8                	mov    %ebx,%eax
 8adde93:	83 c4 14             	add    $0x14,%esp
 8adde96:	5b                   	pop    %ebx
 8adde97:	5d                   	pop    %ebp
 8adde98:	c2 04 00             	ret    $0x4

08adde9b <_ZN9__gnu_cxxmiIP10CharStringSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_>:
 8adde9b:	55                   	push   %ebp
 8adde9c:	89 e5                	mov    %esp,%ebp
 8adde9e:	53                   	push   %ebx
 8adde9f:	83 ec 14             	sub    $0x14,%esp
 8addea2:	8b 45 08             	mov    0x8(%ebp),%eax
 8addea5:	89 04 24             	mov    %eax,(%esp)
 8addea8:	e8 db fe ff ff       	call   8addd88 <_ZNK9__gnu_cxx17__normal_iteratorIP10CharStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8addead:	8b 00                	mov    (%eax),%eax
 8addeaf:	89 c3                	mov    %eax,%ebx
 8addeb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8addeb4:	89 04 24             	mov    %eax,(%esp)
 8addeb7:	e8 cc fe ff ff       	call   8addd88 <_ZNK9__gnu_cxx17__normal_iteratorIP10CharStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8addebc:	8b 00                	mov    (%eax),%eax
 8addebe:	89 da                	mov    %ebx,%edx
 8addec0:	29 c2                	sub    %eax,%edx
 8addec2:	89 d0                	mov    %edx,%eax
 8addec4:	c1 f8 02             	sar    $0x2,%eax
 8addec7:	83 c4 14             	add    $0x14,%esp
 8addeca:	5b                   	pop    %ebx
 8addecb:	5d                   	pop    %ebp
 8addecc:	c3                   	ret
 8addecd:	90                   	nop

08addece <_ZNSt12_Vector_baseI10CharStringSaIS0_EE11_M_allocateEj>:
 8addece:	55                   	push   %ebp
 8addecf:	89 e5                	mov    %esp,%ebp
 8added1:	83 ec 18             	sub    $0x18,%esp
 8added4:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8added8:	74 1c                	je     8addef6 <_ZNSt12_Vector_baseI10CharStringSaIS0_EE11_M_allocateEj+0x28>
 8addeda:	8b 45 08             	mov    0x8(%ebp),%eax
 8addedd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8addee4:	00 
 8addee5:	8b 55 0c             	mov    0xc(%ebp),%edx
 8addee8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8addeec:	89 04 24             	mov    %eax,(%esp)
 8addeef:	e8 58 03 00 00       	call   8ade24c <_ZN9__gnu_cxx13new_allocatorI10CharStringE8allocateEjPKv>
 8addef4:	eb 05                	jmp    8addefb <_ZNSt12_Vector_baseI10CharStringSaIS0_EE11_M_allocateEj+0x2d>
 8addef6:	b8 00 00 00 00       	mov    $0x0,%eax
 8addefb:	c9                   	leave
 8addefc:	c3                   	ret
 8addefd:	90                   	nop

08addefe <_ZNSt12_Vector_baseI10CharStringSaIS0_EE19_M_get_Tp_allocatorEv>:
 8addefe:	55                   	push   %ebp
 8addeff:	89 e5                	mov    %esp,%ebp
 8addf01:	8b 45 08             	mov    0x8(%ebp),%eax
 8addf04:	5d                   	pop    %ebp
 8addf05:	c3                   	ret

08addf06 <_ZSt22__uninitialized_move_aIP10CharStringS1_SaIS0_EET0_T_S4_S3_RT1_>:
 8addf06:	55                   	push   %ebp
 8addf07:	89 e5                	mov    %esp,%ebp
 8addf09:	83 ec 28             	sub    $0x28,%esp
 8addf0c:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8addf0f:	8d 55 0c             	lea    0xc(%ebp),%edx
 8addf12:	89 54 24 04          	mov    %edx,0x4(%esp)
 8addf16:	89 04 24             	mov    %eax,(%esp)
 8addf19:	e8 66 03 00 00       	call   8ade284 <_ZSt18make_move_iteratorIP10CharStringESt13move_iteratorIT_ERKS3_>
 8addf1e:	83 ec 04             	sub    $0x4,%esp
 8addf21:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8addf24:	8d 55 08             	lea    0x8(%ebp),%edx
 8addf27:	89 54 24 04          	mov    %edx,0x4(%esp)
 8addf2b:	89 04 24             	mov    %eax,(%esp)
 8addf2e:	e8 51 03 00 00       	call   8ade284 <_ZSt18make_move_iteratorIP10CharStringESt13move_iteratorIT_ERKS3_>
 8addf33:	83 ec 04             	sub    $0x4,%esp
 8addf36:	8b 45 14             	mov    0x14(%ebp),%eax
 8addf39:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8addf3d:	8b 45 10             	mov    0x10(%ebp),%eax
 8addf40:	89 44 24 08          	mov    %eax,0x8(%esp)
 8addf44:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8addf47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8addf4b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8addf4e:	89 04 24             	mov    %eax,(%esp)
 8addf51:	e8 53 03 00 00       	call   8ade2a9 <_ZSt22__uninitialized_copy_aISt13move_iteratorIP10CharStringES2_S1_ET0_T_S5_S4_RSaIT1_E>
 8addf56:	c9                   	leave
 8addf57:	c3                   	ret

08addf58 <_ZN9__gnu_cxx13new_allocatorI10CharStringE7destroyEPS1_>:
 8addf58:	55                   	push   %ebp
 8addf59:	89 e5                	mov    %esp,%ebp
 8addf5b:	83 ec 18             	sub    $0x18,%esp
 8addf5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8addf61:	89 04 24             	mov    %eax,(%esp)
 8addf64:	e8 51 8c ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8addf69:	c9                   	leave
 8addf6a:	c3                   	ret

08addf6b <_ZSt8_DestroyIP10CharStringS0_EvT_S2_RSaIT0_E>:
 8addf6b:	55                   	push   %ebp
 8addf6c:	89 e5                	mov    %esp,%ebp
 8addf6e:	83 ec 18             	sub    $0x18,%esp
 8addf71:	8b 45 0c             	mov    0xc(%ebp),%eax
 8addf74:	89 44 24 04          	mov    %eax,0x4(%esp)
 8addf78:	8b 45 08             	mov    0x8(%ebp),%eax
 8addf7b:	89 04 24             	mov    %eax,(%esp)
 8addf7e:	e8 47 03 00 00       	call   8ade2ca <_ZSt8_DestroyIP10CharStringEvT_S2_>
 8addf83:	c9                   	leave
 8addf84:	c3                   	ret
 8addf85:	90                   	nop

08addf86 <_ZNSt12_Vector_baseI10CharStringSaIS0_EE13_M_deallocateEPS0_j>:
 8addf86:	55                   	push   %ebp
 8addf87:	89 e5                	mov    %esp,%ebp
 8addf89:	83 ec 18             	sub    $0x18,%esp
 8addf8c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8addf90:	74 19                	je     8addfab <_ZNSt12_Vector_baseI10CharStringSaIS0_EE13_M_deallocateEPS0_j+0x25>
 8addf92:	8b 45 08             	mov    0x8(%ebp),%eax
 8addf95:	8b 55 10             	mov    0x10(%ebp),%edx
 8addf98:	89 54 24 08          	mov    %edx,0x8(%esp)
 8addf9c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8addf9f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8addfa3:	89 04 24             	mov    %eax,(%esp)
 8addfa6:	e8 39 03 00 00       	call   8ade2e4 <_ZN9__gnu_cxx13new_allocatorI10CharStringE10deallocateEPS1_j>
 8addfab:	c9                   	leave
 8addfac:	c3                   	ret
 8addfad:	90                   	nop

08addfae <_ZN9__gnu_cxx17__normal_iteratorIP10WideStringSt6vectorIS1_SaIS1_EEEC1ERKS2_>:
 8addfae:	55                   	push   %ebp
 8addfaf:	89 e5                	mov    %esp,%ebp
 8addfb1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8addfb4:	8b 10                	mov    (%eax),%edx
 8addfb6:	8b 45 08             	mov    0x8(%ebp),%eax
 8addfb9:	89 10                	mov    %edx,(%eax)
 8addfbb:	5d                   	pop    %ebp
 8addfbc:	c3                   	ret
 8addfbd:	90                   	nop

08addfbe <_ZNK9__gnu_cxx17__normal_iteratorIP10WideStringSt6vectorIS1_SaIS1_EEE4baseEv>:
 8addfbe:	55                   	push   %ebp
 8addfbf:	89 e5                	mov    %esp,%ebp
 8addfc1:	8b 45 08             	mov    0x8(%ebp),%eax
 8addfc4:	5d                   	pop    %ebp
 8addfc5:	c3                   	ret

08addfc6 <_ZSt13move_backwardIP10WideStringS1_ET0_T_S3_S2_>:
 8addfc6:	55                   	push   %ebp
 8addfc7:	89 e5                	mov    %esp,%ebp
 8addfc9:	53                   	push   %ebx
 8addfca:	83 ec 14             	sub    $0x14,%esp
 8addfcd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8addfd0:	89 04 24             	mov    %eax,(%esp)
 8addfd3:	e8 1f 03 00 00       	call   8ade2f7 <_ZNSt12__miter_baseIP10WideStringLb0EE3__bES1_>
 8addfd8:	89 c3                	mov    %eax,%ebx
 8addfda:	8b 45 08             	mov    0x8(%ebp),%eax
 8addfdd:	89 04 24             	mov    %eax,(%esp)
 8addfe0:	e8 12 03 00 00       	call   8ade2f7 <_ZNSt12__miter_baseIP10WideStringLb0EE3__bES1_>
 8addfe5:	8b 55 10             	mov    0x10(%ebp),%edx
 8addfe8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8addfec:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8addff0:	89 04 24             	mov    %eax,(%esp)
 8addff3:	e8 07 03 00 00       	call   8ade2ff <_ZSt23__copy_move_backward_a2ILb1EP10WideStringS1_ET1_T0_S3_S2_>
 8addff8:	83 c4 14             	add    $0x14,%esp
 8addffb:	5b                   	pop    %ebx
 8addffc:	5d                   	pop    %ebp
 8addffd:	c3                   	ret

08addffe <_ZNK9__gnu_cxx17__normal_iteratorIP10WideStringSt6vectorIS1_SaIS1_EEEdeEv>:
 8addffe:	55                   	push   %ebp
 8addfff:	89 e5                	mov    %esp,%ebp
 8ade001:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade004:	8b 00                	mov    (%eax),%eax
 8ade006:	5d                   	pop    %ebp
 8ade007:	c3                   	ret

08ade008 <_ZNKSt6vectorI10WideStringSaIS0_EE12_M_check_lenEjPKc>:
 8ade008:	55                   	push   %ebp
 8ade009:	89 e5                	mov    %esp,%ebp
 8ade00b:	53                   	push   %ebx
 8ade00c:	83 ec 24             	sub    $0x24,%esp
 8ade00f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade012:	89 04 24             	mov    %eax,(%esp)
 8ade015:	e8 2a 03 00 00       	call   8ade344 <_ZNKSt6vectorI10WideStringSaIS0_EE8max_sizeEv>
 8ade01a:	89 c3                	mov    %eax,%ebx
 8ade01c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade01f:	89 04 24             	mov    %eax,(%esp)
 8ade022:	e8 53 f4 ff ff       	call   8add47a <_ZNKSt6vectorI10WideStringSaIS0_EE4sizeEv>
 8ade027:	89 da                	mov    %ebx,%edx
 8ade029:	29 c2                	sub    %eax,%edx
 8ade02b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade02e:	39 c2                	cmp    %eax,%edx
 8ade030:	0f 92 c0             	setb   %al
 8ade033:	84 c0                	test   %al,%al
 8ade035:	74 0b                	je     8ade042 <_ZNKSt6vectorI10WideStringSaIS0_EE12_M_check_lenEjPKc+0x3a>
 8ade037:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade03a:	89 04 24             	mov    %eax,(%esp)
 8ade03d:	e8 fe bb bf ff       	call   86d9c40 <_ZSt20__throw_length_errorPKc>
 8ade042:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade045:	89 04 24             	mov    %eax,(%esp)
 8ade048:	e8 2d f4 ff ff       	call   8add47a <_ZNKSt6vectorI10WideStringSaIS0_EE4sizeEv>
 8ade04d:	89 c3                	mov    %eax,%ebx
 8ade04f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade052:	89 04 24             	mov    %eax,(%esp)
 8ade055:	e8 20 f4 ff ff       	call   8add47a <_ZNKSt6vectorI10WideStringSaIS0_EE4sizeEv>
 8ade05a:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ade05d:	8d 45 0c             	lea    0xc(%ebp),%eax
 8ade060:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade064:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ade067:	89 04 24             	mov    %eax,(%esp)
 8ade06a:	e8 c2 14 5a ff       	call   807f531 <_ZSt3maxIjERKT_S2_S2_>
 8ade06f:	8b 00                	mov    (%eax),%eax
 8ade071:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8ade074:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ade077:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade07a:	89 04 24             	mov    %eax,(%esp)
 8ade07d:	e8 f8 f3 ff ff       	call   8add47a <_ZNKSt6vectorI10WideStringSaIS0_EE4sizeEv>
 8ade082:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8ade085:	77 10                	ja     8ade097 <_ZNKSt6vectorI10WideStringSaIS0_EE12_M_check_lenEjPKc+0x8f>
 8ade087:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade08a:	89 04 24             	mov    %eax,(%esp)
 8ade08d:	e8 b2 02 00 00       	call   8ade344 <_ZNKSt6vectorI10WideStringSaIS0_EE8max_sizeEv>
 8ade092:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8ade095:	73 0d                	jae    8ade0a4 <_ZNKSt6vectorI10WideStringSaIS0_EE12_M_check_lenEjPKc+0x9c>
 8ade097:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade09a:	89 04 24             	mov    %eax,(%esp)
 8ade09d:	e8 a2 02 00 00       	call   8ade344 <_ZNKSt6vectorI10WideStringSaIS0_EE8max_sizeEv>
 8ade0a2:	eb 03                	jmp    8ade0a7 <_ZNKSt6vectorI10WideStringSaIS0_EE12_M_check_lenEjPKc+0x9f>
 8ade0a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ade0a7:	83 c4 24             	add    $0x24,%esp
 8ade0aa:	5b                   	pop    %ebx
 8ade0ab:	5d                   	pop    %ebp
 8ade0ac:	c3                   	ret
 8ade0ad:	90                   	nop

08ade0ae <_ZNSt6vectorI10WideStringSaIS0_EE5beginEv>:
 8ade0ae:	55                   	push   %ebp
 8ade0af:	89 e5                	mov    %esp,%ebp
 8ade0b1:	53                   	push   %ebx
 8ade0b2:	83 ec 14             	sub    $0x14,%esp
 8ade0b5:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ade0b8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade0bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade0bf:	89 1c 24             	mov    %ebx,(%esp)
 8ade0c2:	e8 e7 fe ff ff       	call   8addfae <_ZN9__gnu_cxx17__normal_iteratorIP10WideStringSt6vectorIS1_SaIS1_EEEC1ERKS2_>
 8ade0c7:	89 d8                	mov    %ebx,%eax
 8ade0c9:	83 c4 14             	add    $0x14,%esp
 8ade0cc:	5b                   	pop    %ebx
 8ade0cd:	5d                   	pop    %ebp
 8ade0ce:	c2 04 00             	ret    $0x4

08ade0d1 <_ZN9__gnu_cxxmiIP10WideStringSt6vectorIS1_SaIS1_EEEENS_17__normal_iteratorIT_T0_E15difference_typeERKS9_SC_>:
 8ade0d1:	55                   	push   %ebp
 8ade0d2:	89 e5                	mov    %esp,%ebp
 8ade0d4:	53                   	push   %ebx
 8ade0d5:	83 ec 14             	sub    $0x14,%esp
 8ade0d8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade0db:	89 04 24             	mov    %eax,(%esp)
 8ade0de:	e8 db fe ff ff       	call   8addfbe <_ZNK9__gnu_cxx17__normal_iteratorIP10WideStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8ade0e3:	8b 00                	mov    (%eax),%eax
 8ade0e5:	89 c3                	mov    %eax,%ebx
 8ade0e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade0ea:	89 04 24             	mov    %eax,(%esp)
 8ade0ed:	e8 cc fe ff ff       	call   8addfbe <_ZNK9__gnu_cxx17__normal_iteratorIP10WideStringSt6vectorIS1_SaIS1_EEE4baseEv>
 8ade0f2:	8b 00                	mov    (%eax),%eax
 8ade0f4:	89 da                	mov    %ebx,%edx
 8ade0f6:	29 c2                	sub    %eax,%edx
 8ade0f8:	89 d0                	mov    %edx,%eax
 8ade0fa:	c1 f8 02             	sar    $0x2,%eax
 8ade0fd:	83 c4 14             	add    $0x14,%esp
 8ade100:	5b                   	pop    %ebx
 8ade101:	5d                   	pop    %ebp
 8ade102:	c3                   	ret
 8ade103:	90                   	nop

08ade104 <_ZNSt12_Vector_baseI10WideStringSaIS0_EE11_M_allocateEj>:
 8ade104:	55                   	push   %ebp
 8ade105:	89 e5                	mov    %esp,%ebp
 8ade107:	83 ec 18             	sub    $0x18,%esp
 8ade10a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ade10e:	74 1c                	je     8ade12c <_ZNSt12_Vector_baseI10WideStringSaIS0_EE11_M_allocateEj+0x28>
 8ade110:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade113:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ade11a:	00 
 8ade11b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ade11e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ade122:	89 04 24             	mov    %eax,(%esp)
 8ade125:	e8 36 02 00 00       	call   8ade360 <_ZN9__gnu_cxx13new_allocatorI10WideStringE8allocateEjPKv>
 8ade12a:	eb 05                	jmp    8ade131 <_ZNSt12_Vector_baseI10WideStringSaIS0_EE11_M_allocateEj+0x2d>
 8ade12c:	b8 00 00 00 00       	mov    $0x0,%eax
 8ade131:	c9                   	leave
 8ade132:	c3                   	ret
 8ade133:	90                   	nop

08ade134 <_ZNSt12_Vector_baseI10WideStringSaIS0_EE19_M_get_Tp_allocatorEv>:
 8ade134:	55                   	push   %ebp
 8ade135:	89 e5                	mov    %esp,%ebp
 8ade137:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade13a:	5d                   	pop    %ebp
 8ade13b:	c3                   	ret

08ade13c <_ZSt22__uninitialized_move_aIP10WideStringS1_SaIS0_EET0_T_S4_S3_RT1_>:
 8ade13c:	55                   	push   %ebp
 8ade13d:	89 e5                	mov    %esp,%ebp
 8ade13f:	83 ec 28             	sub    $0x28,%esp
 8ade142:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8ade145:	8d 55 0c             	lea    0xc(%ebp),%edx
 8ade148:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ade14c:	89 04 24             	mov    %eax,(%esp)
 8ade14f:	e8 44 02 00 00       	call   8ade398 <_ZSt18make_move_iteratorIP10WideStringESt13move_iteratorIT_ERKS3_>
 8ade154:	83 ec 04             	sub    $0x4,%esp
 8ade157:	8d 45 f4             	lea    -0xc(%ebp),%eax
 8ade15a:	8d 55 08             	lea    0x8(%ebp),%edx
 8ade15d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ade161:	89 04 24             	mov    %eax,(%esp)
 8ade164:	e8 2f 02 00 00       	call   8ade398 <_ZSt18make_move_iteratorIP10WideStringESt13move_iteratorIT_ERKS3_>
 8ade169:	83 ec 04             	sub    $0x4,%esp
 8ade16c:	8b 45 14             	mov    0x14(%ebp),%eax
 8ade16f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ade173:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade176:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ade17a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ade17d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade181:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ade184:	89 04 24             	mov    %eax,(%esp)
 8ade187:	e8 31 02 00 00       	call   8ade3bd <_ZSt22__uninitialized_copy_aISt13move_iteratorIP10WideStringES2_S1_ET0_T_S5_S4_RSaIT1_E>
 8ade18c:	c9                   	leave
 8ade18d:	c3                   	ret

08ade18e <_ZN9__gnu_cxx13new_allocatorI10WideStringE7destroyEPS1_>:
 8ade18e:	55                   	push   %ebp
 8ade18f:	89 e5                	mov    %esp,%ebp
 8ade191:	83 ec 18             	sub    $0x18,%esp
 8ade194:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade197:	89 04 24             	mov    %eax,(%esp)
 8ade19a:	e8 75 ba ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8ade19f:	c9                   	leave
 8ade1a0:	c3                   	ret

08ade1a1 <_ZSt8_DestroyIP10WideStringS0_EvT_S2_RSaIT0_E>:
 8ade1a1:	55                   	push   %ebp
 8ade1a2:	89 e5                	mov    %esp,%ebp
 8ade1a4:	83 ec 18             	sub    $0x18,%esp
 8ade1a7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade1aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade1ae:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade1b1:	89 04 24             	mov    %eax,(%esp)
 8ade1b4:	e8 25 02 00 00       	call   8ade3de <_ZSt8_DestroyIP10WideStringEvT_S2_>
 8ade1b9:	c9                   	leave
 8ade1ba:	c3                   	ret
 8ade1bb:	90                   	nop

08ade1bc <_ZNSt12_Vector_baseI10WideStringSaIS0_EE13_M_deallocateEPS0_j>:
 8ade1bc:	55                   	push   %ebp
 8ade1bd:	89 e5                	mov    %esp,%ebp
 8ade1bf:	83 ec 18             	sub    $0x18,%esp
 8ade1c2:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ade1c6:	74 19                	je     8ade1e1 <_ZNSt12_Vector_baseI10WideStringSaIS0_EE13_M_deallocateEPS0_j+0x25>
 8ade1c8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade1cb:	8b 55 10             	mov    0x10(%ebp),%edx
 8ade1ce:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ade1d2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ade1d5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ade1d9:	89 04 24             	mov    %eax,(%esp)
 8ade1dc:	e8 17 02 00 00       	call   8ade3f8 <_ZN9__gnu_cxx13new_allocatorI10WideStringE10deallocateEPS1_j>
 8ade1e1:	c9                   	leave
 8ade1e2:	c3                   	ret

08ade1e3 <_ZNSt12__miter_baseIP10CharStringLb0EE3__bES1_>:
 8ade1e3:	55                   	push   %ebp
 8ade1e4:	89 e5                	mov    %esp,%ebp
 8ade1e6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade1e9:	5d                   	pop    %ebp
 8ade1ea:	c3                   	ret

08ade1eb <_ZSt23__copy_move_backward_a2ILb1EP10CharStringS1_ET1_T0_S3_S2_>:
 8ade1eb:	55                   	push   %ebp
 8ade1ec:	89 e5                	mov    %esp,%ebp
 8ade1ee:	56                   	push   %esi
 8ade1ef:	53                   	push   %ebx
 8ade1f0:	83 ec 10             	sub    $0x10,%esp
 8ade1f3:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade1f6:	89 04 24             	mov    %eax,(%esp)
 8ade1f9:	e8 0d 02 00 00       	call   8ade40b <_ZNSt12__niter_baseIP10CharStringLb0EE3__bES1_>
 8ade1fe:	89 c6                	mov    %eax,%esi
 8ade200:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade203:	89 04 24             	mov    %eax,(%esp)
 8ade206:	e8 00 02 00 00       	call   8ade40b <_ZNSt12__niter_baseIP10CharStringLb0EE3__bES1_>
 8ade20b:	89 c3                	mov    %eax,%ebx
 8ade20d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade210:	89 04 24             	mov    %eax,(%esp)
 8ade213:	e8 f3 01 00 00       	call   8ade40b <_ZNSt12__niter_baseIP10CharStringLb0EE3__bES1_>
 8ade218:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ade21c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ade220:	89 04 24             	mov    %eax,(%esp)
 8ade223:	e8 eb 01 00 00       	call   8ade413 <_ZSt22__copy_move_backward_aILb1EP10CharStringS1_ET1_T0_S3_S2_>
 8ade228:	83 c4 10             	add    $0x10,%esp
 8ade22b:	5b                   	pop    %ebx
 8ade22c:	5e                   	pop    %esi
 8ade22d:	5d                   	pop    %ebp
 8ade22e:	c3                   	ret
 8ade22f:	90                   	nop

08ade230 <_ZNKSt6vectorI10CharStringSaIS0_EE8max_sizeEv>:
 8ade230:	55                   	push   %ebp
 8ade231:	89 e5                	mov    %esp,%ebp
 8ade233:	83 ec 18             	sub    $0x18,%esp
 8ade236:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade239:	89 04 24             	mov    %eax,(%esp)
 8ade23c:	e8 f7 01 00 00       	call   8ade438 <_ZNKSt12_Vector_baseI10CharStringSaIS0_EE19_M_get_Tp_allocatorEv>
 8ade241:	89 04 24             	mov    %eax,(%esp)
 8ade244:	e8 f7 01 00 00       	call   8ade440 <_ZNK9__gnu_cxx13new_allocatorI10CharStringE8max_sizeEv>
 8ade249:	c9                   	leave
 8ade24a:	c3                   	ret
 8ade24b:	90                   	nop

08ade24c <_ZN9__gnu_cxx13new_allocatorI10CharStringE8allocateEjPKv>:
 8ade24c:	55                   	push   %ebp
 8ade24d:	89 e5                	mov    %esp,%ebp
 8ade24f:	83 ec 18             	sub    $0x18,%esp
 8ade252:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade255:	89 04 24             	mov    %eax,(%esp)
 8ade258:	e8 e3 01 00 00       	call   8ade440 <_ZNK9__gnu_cxx13new_allocatorI10CharStringE8max_sizeEv>
 8ade25d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8ade260:	0f 92 c0             	setb   %al
 8ade263:	0f b6 c0             	movzbl %al,%eax
 8ade266:	85 c0                	test   %eax,%eax
 8ade268:	0f 95 c0             	setne  %al
 8ade26b:	84 c0                	test   %al,%al
 8ade26d:	74 05                	je     8ade274 <_ZN9__gnu_cxx13new_allocatorI10CharStringE8allocateEjPKv+0x28>
 8ade26f:	e8 7c b1 bf ff       	call   86d93f0 <_ZSt17__throw_bad_allocv>
 8ade274:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade277:	c1 e0 02             	shl    $0x2,%eax
 8ade27a:	89 04 24             	mov    %eax,(%esp)
 8ade27d:	e8 ce 61 c4 ff       	call   8724450 <_Znwj>
 8ade282:	c9                   	leave
 8ade283:	c3                   	ret

08ade284 <_ZSt18make_move_iteratorIP10CharStringESt13move_iteratorIT_ERKS3_>:
 8ade284:	55                   	push   %ebp
 8ade285:	89 e5                	mov    %esp,%ebp
 8ade287:	53                   	push   %ebx
 8ade288:	83 ec 14             	sub    $0x14,%esp
 8ade28b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ade28e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade291:	8b 00                	mov    (%eax),%eax
 8ade293:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade297:	89 1c 24             	mov    %ebx,(%esp)
 8ade29a:	e8 ab 01 00 00       	call   8ade44a <_ZNSt13move_iteratorIP10CharStringEC1ES1_>
 8ade29f:	89 d8                	mov    %ebx,%eax
 8ade2a1:	83 c4 14             	add    $0x14,%esp
 8ade2a4:	5b                   	pop    %ebx
 8ade2a5:	5d                   	pop    %ebp
 8ade2a6:	c2 04 00             	ret    $0x4

08ade2a9 <_ZSt22__uninitialized_copy_aISt13move_iteratorIP10CharStringES2_S1_ET0_T_S5_S4_RSaIT1_E>:
 8ade2a9:	55                   	push   %ebp
 8ade2aa:	89 e5                	mov    %esp,%ebp
 8ade2ac:	83 ec 18             	sub    $0x18,%esp
 8ade2af:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade2b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ade2b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade2b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade2bd:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade2c0:	89 04 24             	mov    %eax,(%esp)
 8ade2c3:	e8 8f 01 00 00       	call   8ade457 <_ZSt18uninitialized_copyISt13move_iteratorIP10CharStringES2_ET0_T_S5_S4_>
 8ade2c8:	c9                   	leave
 8ade2c9:	c3                   	ret

08ade2ca <_ZSt8_DestroyIP10CharStringEvT_S2_>:
 8ade2ca:	55                   	push   %ebp
 8ade2cb:	89 e5                	mov    %esp,%ebp
 8ade2cd:	83 ec 18             	sub    $0x18,%esp
 8ade2d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade2d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade2d7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade2da:	89 04 24             	mov    %eax,(%esp)
 8ade2dd:	e8 96 01 00 00       	call   8ade478 <_ZNSt12_Destroy_auxILb0EE9__destroyIP10CharStringEEvT_S4_>
 8ade2e2:	c9                   	leave
 8ade2e3:	c3                   	ret

08ade2e4 <_ZN9__gnu_cxx13new_allocatorI10CharStringE10deallocateEPS1_j>:
 8ade2e4:	55                   	push   %ebp
 8ade2e5:	89 e5                	mov    %esp,%ebp
 8ade2e7:	83 ec 18             	sub    $0x18,%esp
 8ade2ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade2ed:	89 04 24             	mov    %eax,(%esp)
 8ade2f0:	e8 fb 61 c4 ff       	call   87244f0 <_ZdlPv>
 8ade2f5:	c9                   	leave
 8ade2f6:	c3                   	ret

08ade2f7 <_ZNSt12__miter_baseIP10WideStringLb0EE3__bES1_>:
 8ade2f7:	55                   	push   %ebp
 8ade2f8:	89 e5                	mov    %esp,%ebp
 8ade2fa:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade2fd:	5d                   	pop    %ebp
 8ade2fe:	c3                   	ret

08ade2ff <_ZSt23__copy_move_backward_a2ILb1EP10WideStringS1_ET1_T0_S3_S2_>:
 8ade2ff:	55                   	push   %ebp
 8ade300:	89 e5                	mov    %esp,%ebp
 8ade302:	56                   	push   %esi
 8ade303:	53                   	push   %ebx
 8ade304:	83 ec 10             	sub    $0x10,%esp
 8ade307:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade30a:	89 04 24             	mov    %eax,(%esp)
 8ade30d:	e8 8c 01 00 00       	call   8ade49e <_ZNSt12__niter_baseIP10WideStringLb0EE3__bES1_>
 8ade312:	89 c6                	mov    %eax,%esi
 8ade314:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade317:	89 04 24             	mov    %eax,(%esp)
 8ade31a:	e8 7f 01 00 00       	call   8ade49e <_ZNSt12__niter_baseIP10WideStringLb0EE3__bES1_>
 8ade31f:	89 c3                	mov    %eax,%ebx
 8ade321:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade324:	89 04 24             	mov    %eax,(%esp)
 8ade327:	e8 72 01 00 00       	call   8ade49e <_ZNSt12__niter_baseIP10WideStringLb0EE3__bES1_>
 8ade32c:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ade330:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ade334:	89 04 24             	mov    %eax,(%esp)
 8ade337:	e8 6a 01 00 00       	call   8ade4a6 <_ZSt22__copy_move_backward_aILb1EP10WideStringS1_ET1_T0_S3_S2_>
 8ade33c:	83 c4 10             	add    $0x10,%esp
 8ade33f:	5b                   	pop    %ebx
 8ade340:	5e                   	pop    %esi
 8ade341:	5d                   	pop    %ebp
 8ade342:	c3                   	ret
 8ade343:	90                   	nop

08ade344 <_ZNKSt6vectorI10WideStringSaIS0_EE8max_sizeEv>:
 8ade344:	55                   	push   %ebp
 8ade345:	89 e5                	mov    %esp,%ebp
 8ade347:	83 ec 18             	sub    $0x18,%esp
 8ade34a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade34d:	89 04 24             	mov    %eax,(%esp)
 8ade350:	e8 77 01 00 00       	call   8ade4cc <_ZNKSt12_Vector_baseI10WideStringSaIS0_EE19_M_get_Tp_allocatorEv>
 8ade355:	89 04 24             	mov    %eax,(%esp)
 8ade358:	e8 77 01 00 00       	call   8ade4d4 <_ZNK9__gnu_cxx13new_allocatorI10WideStringE8max_sizeEv>
 8ade35d:	c9                   	leave
 8ade35e:	c3                   	ret
 8ade35f:	90                   	nop

08ade360 <_ZN9__gnu_cxx13new_allocatorI10WideStringE8allocateEjPKv>:
 8ade360:	55                   	push   %ebp
 8ade361:	89 e5                	mov    %esp,%ebp
 8ade363:	83 ec 18             	sub    $0x18,%esp
 8ade366:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade369:	89 04 24             	mov    %eax,(%esp)
 8ade36c:	e8 63 01 00 00       	call   8ade4d4 <_ZNK9__gnu_cxx13new_allocatorI10WideStringE8max_sizeEv>
 8ade371:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8ade374:	0f 92 c0             	setb   %al
 8ade377:	0f b6 c0             	movzbl %al,%eax
 8ade37a:	85 c0                	test   %eax,%eax
 8ade37c:	0f 95 c0             	setne  %al
 8ade37f:	84 c0                	test   %al,%al
 8ade381:	74 05                	je     8ade388 <_ZN9__gnu_cxx13new_allocatorI10WideStringE8allocateEjPKv+0x28>
 8ade383:	e8 68 b0 bf ff       	call   86d93f0 <_ZSt17__throw_bad_allocv>
 8ade388:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade38b:	c1 e0 02             	shl    $0x2,%eax
 8ade38e:	89 04 24             	mov    %eax,(%esp)
 8ade391:	e8 ba 60 c4 ff       	call   8724450 <_Znwj>
 8ade396:	c9                   	leave
 8ade397:	c3                   	ret

08ade398 <_ZSt18make_move_iteratorIP10WideStringESt13move_iteratorIT_ERKS3_>:
 8ade398:	55                   	push   %ebp
 8ade399:	89 e5                	mov    %esp,%ebp
 8ade39b:	53                   	push   %ebx
 8ade39c:	83 ec 14             	sub    $0x14,%esp
 8ade39f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ade3a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade3a5:	8b 00                	mov    (%eax),%eax
 8ade3a7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade3ab:	89 1c 24             	mov    %ebx,(%esp)
 8ade3ae:	e8 2b 01 00 00       	call   8ade4de <_ZNSt13move_iteratorIP10WideStringEC1ES1_>
 8ade3b3:	89 d8                	mov    %ebx,%eax
 8ade3b5:	83 c4 14             	add    $0x14,%esp
 8ade3b8:	5b                   	pop    %ebx
 8ade3b9:	5d                   	pop    %ebp
 8ade3ba:	c2 04 00             	ret    $0x4

08ade3bd <_ZSt22__uninitialized_copy_aISt13move_iteratorIP10WideStringES2_S1_ET0_T_S5_S4_RSaIT1_E>:
 8ade3bd:	55                   	push   %ebp
 8ade3be:	89 e5                	mov    %esp,%ebp
 8ade3c0:	83 ec 18             	sub    $0x18,%esp
 8ade3c3:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade3c6:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ade3ca:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade3cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade3d1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade3d4:	89 04 24             	mov    %eax,(%esp)
 8ade3d7:	e8 0f 01 00 00       	call   8ade4eb <_ZSt18uninitialized_copyISt13move_iteratorIP10WideStringES2_ET0_T_S5_S4_>
 8ade3dc:	c9                   	leave
 8ade3dd:	c3                   	ret

08ade3de <_ZSt8_DestroyIP10WideStringEvT_S2_>:
 8ade3de:	55                   	push   %ebp
 8ade3df:	89 e5                	mov    %esp,%ebp
 8ade3e1:	83 ec 18             	sub    $0x18,%esp
 8ade3e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade3e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade3eb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade3ee:	89 04 24             	mov    %eax,(%esp)
 8ade3f1:	e8 16 01 00 00       	call   8ade50c <_ZNSt12_Destroy_auxILb0EE9__destroyIP10WideStringEEvT_S4_>
 8ade3f6:	c9                   	leave
 8ade3f7:	c3                   	ret

08ade3f8 <_ZN9__gnu_cxx13new_allocatorI10WideStringE10deallocateEPS1_j>:
 8ade3f8:	55                   	push   %ebp
 8ade3f9:	89 e5                	mov    %esp,%ebp
 8ade3fb:	83 ec 18             	sub    $0x18,%esp
 8ade3fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade401:	89 04 24             	mov    %eax,(%esp)
 8ade404:	e8 e7 60 c4 ff       	call   87244f0 <_ZdlPv>
 8ade409:	c9                   	leave
 8ade40a:	c3                   	ret

08ade40b <_ZNSt12__niter_baseIP10CharStringLb0EE3__bES1_>:
 8ade40b:	55                   	push   %ebp
 8ade40c:	89 e5                	mov    %esp,%ebp
 8ade40e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade411:	5d                   	pop    %ebp
 8ade412:	c3                   	ret

08ade413 <_ZSt22__copy_move_backward_aILb1EP10CharStringS1_ET1_T0_S3_S2_>:
 8ade413:	55                   	push   %ebp
 8ade414:	89 e5                	mov    %esp,%ebp
 8ade416:	83 ec 28             	sub    $0x28,%esp
 8ade419:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8ade41d:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade420:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ade424:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade427:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade42b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade42e:	89 04 24             	mov    %eax,(%esp)
 8ade431:	e8 fc 00 00 00       	call   8ade532 <_ZNSt20__copy_move_backwardILb1ELb0ESt26random_access_iterator_tagE13__copy_move_bIP10CharStringS4_EET0_T_S6_S5_>
 8ade436:	c9                   	leave
 8ade437:	c3                   	ret

08ade438 <_ZNKSt12_Vector_baseI10CharStringSaIS0_EE19_M_get_Tp_allocatorEv>:
 8ade438:	55                   	push   %ebp
 8ade439:	89 e5                	mov    %esp,%ebp
 8ade43b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade43e:	5d                   	pop    %ebp
 8ade43f:	c3                   	ret

08ade440 <_ZNK9__gnu_cxx13new_allocatorI10CharStringE8max_sizeEv>:
 8ade440:	55                   	push   %ebp
 8ade441:	89 e5                	mov    %esp,%ebp
 8ade443:	b8 ff ff ff 3f       	mov    $0x3fffffff,%eax
 8ade448:	5d                   	pop    %ebp
 8ade449:	c3                   	ret

08ade44a <_ZNSt13move_iteratorIP10CharStringEC1ES1_>:
 8ade44a:	55                   	push   %ebp
 8ade44b:	89 e5                	mov    %esp,%ebp
 8ade44d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade450:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ade453:	89 10                	mov    %edx,(%eax)
 8ade455:	5d                   	pop    %ebp
 8ade456:	c3                   	ret

08ade457 <_ZSt18uninitialized_copyISt13move_iteratorIP10CharStringES2_ET0_T_S5_S4_>:
 8ade457:	55                   	push   %ebp
 8ade458:	89 e5                	mov    %esp,%ebp
 8ade45a:	83 ec 18             	sub    $0x18,%esp
 8ade45d:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade460:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ade464:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade467:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade46b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade46e:	89 04 24             	mov    %eax,(%esp)
 8ade471:	e8 0c 01 00 00       	call   8ade582 <_ZNSt20__uninitialized_copyILb0EE18uninitialized_copyISt13move_iteratorIP10CharStringES4_EET0_T_S7_S6_>
 8ade476:	c9                   	leave
 8ade477:	c3                   	ret

08ade478 <_ZNSt12_Destroy_auxILb0EE9__destroyIP10CharStringEEvT_S4_>:
 8ade478:	55                   	push   %ebp
 8ade479:	89 e5                	mov    %esp,%ebp
 8ade47b:	83 ec 18             	sub    $0x18,%esp
 8ade47e:	eb 0f                	jmp    8ade48f <_ZNSt12_Destroy_auxILb0EE9__destroyIP10CharStringEEvT_S4_+0x17>
 8ade480:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade483:	89 04 24             	mov    %eax,(%esp)
 8ade486:	e8 9c 01 00 00       	call   8ade627 <_ZSt8_DestroyI10CharStringEvPT_>
 8ade48b:	83 45 08 04          	addl   $0x4,0x8(%ebp)
 8ade48f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade492:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8ade495:	0f 95 c0             	setne  %al
 8ade498:	84 c0                	test   %al,%al
 8ade49a:	75 e4                	jne    8ade480 <_ZNSt12_Destroy_auxILb0EE9__destroyIP10CharStringEEvT_S4_+0x8>
 8ade49c:	c9                   	leave
 8ade49d:	c3                   	ret

08ade49e <_ZNSt12__niter_baseIP10WideStringLb0EE3__bES1_>:
 8ade49e:	55                   	push   %ebp
 8ade49f:	89 e5                	mov    %esp,%ebp
 8ade4a1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade4a4:	5d                   	pop    %ebp
 8ade4a5:	c3                   	ret

08ade4a6 <_ZSt22__copy_move_backward_aILb1EP10WideStringS1_ET1_T0_S3_S2_>:
 8ade4a6:	55                   	push   %ebp
 8ade4a7:	89 e5                	mov    %esp,%ebp
 8ade4a9:	83 ec 28             	sub    $0x28,%esp
 8ade4ac:	c6 45 f7 00          	movb   $0x0,-0x9(%ebp)
 8ade4b0:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade4b3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ade4b7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade4ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade4be:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade4c1:	89 04 24             	mov    %eax,(%esp)
 8ade4c4:	e8 71 01 00 00       	call   8ade63a <_ZNSt20__copy_move_backwardILb1ELb0ESt26random_access_iterator_tagE13__copy_move_bIP10WideStringS4_EET0_T_S6_S5_>
 8ade4c9:	c9                   	leave
 8ade4ca:	c3                   	ret
 8ade4cb:	90                   	nop

08ade4cc <_ZNKSt12_Vector_baseI10WideStringSaIS0_EE19_M_get_Tp_allocatorEv>:
 8ade4cc:	55                   	push   %ebp
 8ade4cd:	89 e5                	mov    %esp,%ebp
 8ade4cf:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade4d2:	5d                   	pop    %ebp
 8ade4d3:	c3                   	ret

08ade4d4 <_ZNK9__gnu_cxx13new_allocatorI10WideStringE8max_sizeEv>:
 8ade4d4:	55                   	push   %ebp
 8ade4d5:	89 e5                	mov    %esp,%ebp
 8ade4d7:	b8 ff ff ff 3f       	mov    $0x3fffffff,%eax
 8ade4dc:	5d                   	pop    %ebp
 8ade4dd:	c3                   	ret

08ade4de <_ZNSt13move_iteratorIP10WideStringEC1ES1_>:
 8ade4de:	55                   	push   %ebp
 8ade4df:	89 e5                	mov    %esp,%ebp
 8ade4e1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade4e4:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ade4e7:	89 10                	mov    %edx,(%eax)
 8ade4e9:	5d                   	pop    %ebp
 8ade4ea:	c3                   	ret

08ade4eb <_ZSt18uninitialized_copyISt13move_iteratorIP10WideStringES2_ET0_T_S5_S4_>:
 8ade4eb:	55                   	push   %ebp
 8ade4ec:	89 e5                	mov    %esp,%ebp
 8ade4ee:	83 ec 18             	sub    $0x18,%esp
 8ade4f1:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade4f4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ade4f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade4fb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade4ff:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade502:	89 04 24             	mov    %eax,(%esp)
 8ade505:	e8 80 01 00 00       	call   8ade68a <_ZNSt20__uninitialized_copyILb0EE18uninitialized_copyISt13move_iteratorIP10WideStringES4_EET0_T_S7_S6_>
 8ade50a:	c9                   	leave
 8ade50b:	c3                   	ret

08ade50c <_ZNSt12_Destroy_auxILb0EE9__destroyIP10WideStringEEvT_S4_>:
 8ade50c:	55                   	push   %ebp
 8ade50d:	89 e5                	mov    %esp,%ebp
 8ade50f:	83 ec 18             	sub    $0x18,%esp
 8ade512:	eb 0f                	jmp    8ade523 <_ZNSt12_Destroy_auxILb0EE9__destroyIP10WideStringEEvT_S4_+0x17>
 8ade514:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade517:	89 04 24             	mov    %eax,(%esp)
 8ade51a:	e8 10 02 00 00       	call   8ade72f <_ZSt8_DestroyI10WideStringEvPT_>
 8ade51f:	83 45 08 04          	addl   $0x4,0x8(%ebp)
 8ade523:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade526:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8ade529:	0f 95 c0             	setne  %al
 8ade52c:	84 c0                	test   %al,%al
 8ade52e:	75 e4                	jne    8ade514 <_ZNSt12_Destroy_auxILb0EE9__destroyIP10WideStringEEvT_S4_+0x8>
 8ade530:	c9                   	leave
 8ade531:	c3                   	ret

08ade532 <_ZNSt20__copy_move_backwardILb1ELb0ESt26random_access_iterator_tagE13__copy_move_bIP10CharStringS4_EET0_T_S6_S5_>:
 8ade532:	55                   	push   %ebp
 8ade533:	89 e5                	mov    %esp,%ebp
 8ade535:	83 ec 28             	sub    $0x28,%esp
 8ade538:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ade53b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade53e:	89 d1                	mov    %edx,%ecx
 8ade540:	29 c1                	sub    %eax,%ecx
 8ade542:	89 c8                	mov    %ecx,%eax
 8ade544:	c1 f8 02             	sar    $0x2,%eax
 8ade547:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ade54a:	eb 26                	jmp    8ade572 <_ZNSt20__copy_move_backwardILb1ELb0ESt26random_access_iterator_tagE13__copy_move_bIP10CharStringS4_EET0_T_S6_S5_+0x40>
 8ade54c:	83 6d 0c 04          	subl   $0x4,0xc(%ebp)
 8ade550:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade553:	89 04 24             	mov    %eax,(%esp)
 8ade556:	e8 ae 73 ff ff       	call   8ad5909 <_ZSt4moveIR10CharStringEONSt16remove_referenceIT_E4typeEOS3_>
 8ade55b:	83 6d 10 04          	subl   $0x4,0x10(%ebp)
 8ade55f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade563:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade566:	89 04 24             	mov    %eax,(%esp)
 8ade569:	e8 70 8b ff ff       	call   8ad70de <_ZN10CharStringaSERKS_>
 8ade56e:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 8ade572:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ade576:	0f 9f c0             	setg   %al
 8ade579:	84 c0                	test   %al,%al
 8ade57b:	75 cf                	jne    8ade54c <_ZNSt20__copy_move_backwardILb1ELb0ESt26random_access_iterator_tagE13__copy_move_bIP10CharStringS4_EET0_T_S6_S5_+0x1a>
 8ade57d:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade580:	c9                   	leave
 8ade581:	c3                   	ret

08ade582 <_ZNSt20__uninitialized_copyILb0EE18uninitialized_copyISt13move_iteratorIP10CharStringES4_EET0_T_S7_S6_>:
 8ade582:	55                   	push   %ebp
 8ade583:	89 e5                	mov    %esp,%ebp
 8ade585:	56                   	push   %esi
 8ade586:	53                   	push   %ebx
 8ade587:	83 ec 20             	sub    $0x20,%esp
 8ade58a:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade58d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ade590:	eb 41                	jmp    8ade5d3 <_ZNSt20__uninitialized_copyILb0EE18uninitialized_copyISt13move_iteratorIP10CharStringES4_EET0_T_S7_S6_+0x51>
 8ade592:	8d 45 08             	lea    0x8(%ebp),%eax
 8ade595:	89 04 24             	mov    %eax,(%esp)
 8ade598:	e8 d9 01 00 00       	call   8ade776 <_ZNKSt13move_iteratorIP10CharStringEdeEv>
 8ade59d:	89 c3                	mov    %eax,%ebx
 8ade59f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ade5a2:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade5a6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8ade5ad:	e8 9a 09 5a ff       	call   807ef4c <_ZnwjPv>
 8ade5b2:	89 c2                	mov    %eax,%edx
 8ade5b4:	85 d2                	test   %edx,%edx
 8ade5b6:	74 0c                	je     8ade5c4 <_ZNSt20__uninitialized_copyILb0EE18uninitialized_copyISt13move_iteratorIP10CharStringES4_EET0_T_S7_S6_+0x42>
 8ade5b8:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ade5bc:	89 04 24             	mov    %eax,(%esp)
 8ade5bf:	e8 02 84 ff ff       	call   8ad69c6 <_ZN10CharStringC1ERKS_>
 8ade5c4:	8d 45 08             	lea    0x8(%ebp),%eax
 8ade5c7:	89 04 24             	mov    %eax,(%esp)
 8ade5ca:	e8 91 01 00 00       	call   8ade760 <_ZNSt13move_iteratorIP10CharStringEppEv>
 8ade5cf:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
 8ade5d3:	8d 45 0c             	lea    0xc(%ebp),%eax
 8ade5d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade5da:	8d 45 08             	lea    0x8(%ebp),%eax
 8ade5dd:	89 04 24             	mov    %eax,(%esp)
 8ade5e0:	e8 5d 01 00 00       	call   8ade742 <_ZStneIP10CharStringS1_EbRKSt13move_iteratorIT_ERKS2_IT0_E>
 8ade5e5:	84 c0                	test   %al,%al
 8ade5e7:	75 a9                	jne    8ade592 <_ZNSt20__uninitialized_copyILb0EE18uninitialized_copyISt13move_iteratorIP10CharStringES4_EET0_T_S7_S6_+0x10>
 8ade5e9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ade5ec:	83 c4 20             	add    $0x20,%esp
 8ade5ef:	5b                   	pop    %ebx
 8ade5f0:	5e                   	pop    %esi
 8ade5f1:	5d                   	pop    %ebp
 8ade5f2:	c3                   	ret
 8ade5f3:	89 04 24             	mov    %eax,(%esp)
 8ade5f6:	e8 e5 76 c4 ff       	call   8725ce0 <__cxa_begin_catch>
 8ade5fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ade5fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade602:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade605:	89 04 24             	mov    %eax,(%esp)
 8ade608:	e8 bd fc ff ff       	call   8ade2ca <_ZSt8_DestroyIP10CharStringEvT_S2_>
 8ade60d:	e8 ce 65 c4 ff       	call   8724be0 <__cxa_rethrow>
 8ade612:	89 d3                	mov    %edx,%ebx
 8ade614:	89 c6                	mov    %eax,%esi
 8ade616:	e8 15 76 c4 ff       	call   8725c30 <__cxa_end_catch>
 8ade61b:	89 f0                	mov    %esi,%eax
 8ade61d:	89 da                	mov    %ebx,%edx
 8ade61f:	89 04 24             	mov    %eax,(%esp)
 8ade622:	e8 29 51 00 00       	call   8ae3750 <_Unwind_Resume>

08ade627 <_ZSt8_DestroyI10CharStringEvPT_>:
 8ade627:	55                   	push   %ebp
 8ade628:	89 e5                	mov    %esp,%ebp
 8ade62a:	83 ec 18             	sub    $0x18,%esp
 8ade62d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade630:	89 04 24             	mov    %eax,(%esp)
 8ade633:	e8 82 85 ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ade638:	c9                   	leave
 8ade639:	c3                   	ret

08ade63a <_ZNSt20__copy_move_backwardILb1ELb0ESt26random_access_iterator_tagE13__copy_move_bIP10WideStringS4_EET0_T_S6_S5_>:
 8ade63a:	55                   	push   %ebp
 8ade63b:	89 e5                	mov    %esp,%ebp
 8ade63d:	83 ec 28             	sub    $0x28,%esp
 8ade640:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ade643:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade646:	89 d1                	mov    %edx,%ecx
 8ade648:	29 c1                	sub    %eax,%ecx
 8ade64a:	89 c8                	mov    %ecx,%eax
 8ade64c:	c1 f8 02             	sar    $0x2,%eax
 8ade64f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ade652:	eb 26                	jmp    8ade67a <_ZNSt20__copy_move_backwardILb1ELb0ESt26random_access_iterator_tagE13__copy_move_bIP10WideStringS4_EET0_T_S6_S5_+0x40>
 8ade654:	83 6d 0c 04          	subl   $0x4,0xc(%ebp)
 8ade658:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade65b:	89 04 24             	mov    %eax,(%esp)
 8ade65e:	e8 c3 ef ff ff       	call   8add626 <_ZSt4moveIR10WideStringEONSt16remove_referenceIT_E4typeEOS3_>
 8ade663:	83 6d 10 04          	subl   $0x4,0x10(%ebp)
 8ade667:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade66b:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade66e:	89 04 24             	mov    %eax,(%esp)
 8ade671:	e8 c6 ba ff ff       	call   8ada13c <_ZN10WideStringaSERKS_>
 8ade676:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 8ade67a:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ade67e:	0f 9f c0             	setg   %al
 8ade681:	84 c0                	test   %al,%al
 8ade683:	75 cf                	jne    8ade654 <_ZNSt20__copy_move_backwardILb1ELb0ESt26random_access_iterator_tagE13__copy_move_bIP10WideStringS4_EET0_T_S6_S5_+0x1a>
 8ade685:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade688:	c9                   	leave
 8ade689:	c3                   	ret

08ade68a <_ZNSt20__uninitialized_copyILb0EE18uninitialized_copyISt13move_iteratorIP10WideStringES4_EET0_T_S7_S6_>:
 8ade68a:	55                   	push   %ebp
 8ade68b:	89 e5                	mov    %esp,%ebp
 8ade68d:	56                   	push   %esi
 8ade68e:	53                   	push   %ebx
 8ade68f:	83 ec 20             	sub    $0x20,%esp
 8ade692:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade695:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ade698:	eb 41                	jmp    8ade6db <_ZNSt20__uninitialized_copyILb0EE18uninitialized_copyISt13move_iteratorIP10WideStringES4_EET0_T_S7_S6_+0x51>
 8ade69a:	8d 45 08             	lea    0x8(%ebp),%eax
 8ade69d:	89 04 24             	mov    %eax,(%esp)
 8ade6a0:	e8 0f 01 00 00       	call   8ade7b4 <_ZNKSt13move_iteratorIP10WideStringEdeEv>
 8ade6a5:	89 c3                	mov    %eax,%ebx
 8ade6a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ade6aa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade6ae:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8ade6b5:	e8 92 08 5a ff       	call   807ef4c <_ZnwjPv>
 8ade6ba:	89 c2                	mov    %eax,%edx
 8ade6bc:	85 d2                	test   %edx,%edx
 8ade6be:	74 0c                	je     8ade6cc <_ZNSt20__uninitialized_copyILb0EE18uninitialized_copyISt13move_iteratorIP10WideStringES4_EET0_T_S7_S6_+0x42>
 8ade6c0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ade6c4:	89 04 24             	mov    %eax,(%esp)
 8ade6c7:	e8 4e b3 ff ff       	call   8ad9a1a <_ZN10WideStringC1ERKS_>
 8ade6cc:	8d 45 08             	lea    0x8(%ebp),%eax
 8ade6cf:	89 04 24             	mov    %eax,(%esp)
 8ade6d2:	e8 c7 00 00 00       	call   8ade79e <_ZNSt13move_iteratorIP10WideStringEppEv>
 8ade6d7:	83 45 f4 04          	addl   $0x4,-0xc(%ebp)
 8ade6db:	8d 45 0c             	lea    0xc(%ebp),%eax
 8ade6de:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade6e2:	8d 45 08             	lea    0x8(%ebp),%eax
 8ade6e5:	89 04 24             	mov    %eax,(%esp)
 8ade6e8:	e8 93 00 00 00       	call   8ade780 <_ZStneIP10WideStringS1_EbRKSt13move_iteratorIT_ERKS2_IT0_E>
 8ade6ed:	84 c0                	test   %al,%al
 8ade6ef:	75 a9                	jne    8ade69a <_ZNSt20__uninitialized_copyILb0EE18uninitialized_copyISt13move_iteratorIP10WideStringES4_EET0_T_S7_S6_+0x10>
 8ade6f1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ade6f4:	83 c4 20             	add    $0x20,%esp
 8ade6f7:	5b                   	pop    %ebx
 8ade6f8:	5e                   	pop    %esi
 8ade6f9:	5d                   	pop    %ebp
 8ade6fa:	c3                   	ret
 8ade6fb:	89 04 24             	mov    %eax,(%esp)
 8ade6fe:	e8 dd 75 c4 ff       	call   8725ce0 <__cxa_begin_catch>
 8ade703:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ade706:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade70a:	8b 45 10             	mov    0x10(%ebp),%eax
 8ade70d:	89 04 24             	mov    %eax,(%esp)
 8ade710:	e8 c9 fc ff ff       	call   8ade3de <_ZSt8_DestroyIP10WideStringEvT_S2_>
 8ade715:	e8 c6 64 c4 ff       	call   8724be0 <__cxa_rethrow>
 8ade71a:	89 d3                	mov    %edx,%ebx
 8ade71c:	89 c6                	mov    %eax,%esi
 8ade71e:	e8 0d 75 c4 ff       	call   8725c30 <__cxa_end_catch>
 8ade723:	89 f0                	mov    %esi,%eax
 8ade725:	89 da                	mov    %ebx,%edx
 8ade727:	89 04 24             	mov    %eax,(%esp)
 8ade72a:	e8 21 50 00 00       	call   8ae3750 <_Unwind_Resume>

08ade72f <_ZSt8_DestroyI10WideStringEvPT_>:
 8ade72f:	55                   	push   %ebp
 8ade730:	89 e5                	mov    %esp,%ebp
 8ade732:	83 ec 18             	sub    $0x18,%esp
 8ade735:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade738:	89 04 24             	mov    %eax,(%esp)
 8ade73b:	e8 d4 b4 ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8ade740:	c9                   	leave
 8ade741:	c3                   	ret

08ade742 <_ZStneIP10CharStringS1_EbRKSt13move_iteratorIT_ERKS2_IT0_E>:
 8ade742:	55                   	push   %ebp
 8ade743:	89 e5                	mov    %esp,%ebp
 8ade745:	83 ec 18             	sub    $0x18,%esp
 8ade748:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade74b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade74f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade752:	89 04 24             	mov    %eax,(%esp)
 8ade755:	e8 64 00 00 00       	call   8ade7be <_ZSteqIP10CharStringS1_EbRKSt13move_iteratorIT_ERKS2_IT0_E>
 8ade75a:	83 f0 01             	xor    $0x1,%eax
 8ade75d:	c9                   	leave
 8ade75e:	c3                   	ret
 8ade75f:	90                   	nop

08ade760 <_ZNSt13move_iteratorIP10CharStringEppEv>:
 8ade760:	55                   	push   %ebp
 8ade761:	89 e5                	mov    %esp,%ebp
 8ade763:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade766:	8b 00                	mov    (%eax),%eax
 8ade768:	8d 50 04             	lea    0x4(%eax),%edx
 8ade76b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade76e:	89 10                	mov    %edx,(%eax)
 8ade770:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade773:	5d                   	pop    %ebp
 8ade774:	c3                   	ret
 8ade775:	90                   	nop

08ade776 <_ZNKSt13move_iteratorIP10CharStringEdeEv>:
 8ade776:	55                   	push   %ebp
 8ade777:	89 e5                	mov    %esp,%ebp
 8ade779:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade77c:	8b 00                	mov    (%eax),%eax
 8ade77e:	5d                   	pop    %ebp
 8ade77f:	c3                   	ret

08ade780 <_ZStneIP10WideStringS1_EbRKSt13move_iteratorIT_ERKS2_IT0_E>:
 8ade780:	55                   	push   %ebp
 8ade781:	89 e5                	mov    %esp,%ebp
 8ade783:	83 ec 18             	sub    $0x18,%esp
 8ade786:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade789:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ade78d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade790:	89 04 24             	mov    %eax,(%esp)
 8ade793:	e8 50 00 00 00       	call   8ade7e8 <_ZSteqIP10WideStringS1_EbRKSt13move_iteratorIT_ERKS2_IT0_E>
 8ade798:	83 f0 01             	xor    $0x1,%eax
 8ade79b:	c9                   	leave
 8ade79c:	c3                   	ret
 8ade79d:	90                   	nop

08ade79e <_ZNSt13move_iteratorIP10WideStringEppEv>:
 8ade79e:	55                   	push   %ebp
 8ade79f:	89 e5                	mov    %esp,%ebp
 8ade7a1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade7a4:	8b 00                	mov    (%eax),%eax
 8ade7a6:	8d 50 04             	lea    0x4(%eax),%edx
 8ade7a9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade7ac:	89 10                	mov    %edx,(%eax)
 8ade7ae:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade7b1:	5d                   	pop    %ebp
 8ade7b2:	c3                   	ret
 8ade7b3:	90                   	nop

08ade7b4 <_ZNKSt13move_iteratorIP10WideStringEdeEv>:
 8ade7b4:	55                   	push   %ebp
 8ade7b5:	89 e5                	mov    %esp,%ebp
 8ade7b7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade7ba:	8b 00                	mov    (%eax),%eax
 8ade7bc:	5d                   	pop    %ebp
 8ade7bd:	c3                   	ret

08ade7be <_ZSteqIP10CharStringS1_EbRKSt13move_iteratorIT_ERKS2_IT0_E>:
 8ade7be:	55                   	push   %ebp
 8ade7bf:	89 e5                	mov    %esp,%ebp
 8ade7c1:	53                   	push   %ebx
 8ade7c2:	83 ec 14             	sub    $0x14,%esp
 8ade7c5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade7c8:	89 04 24             	mov    %eax,(%esp)
 8ade7cb:	e8 42 00 00 00       	call   8ade812 <_ZNKSt13move_iteratorIP10CharStringE4baseEv>
 8ade7d0:	89 c3                	mov    %eax,%ebx
 8ade7d2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade7d5:	89 04 24             	mov    %eax,(%esp)
 8ade7d8:	e8 35 00 00 00       	call   8ade812 <_ZNKSt13move_iteratorIP10CharStringE4baseEv>
 8ade7dd:	39 c3                	cmp    %eax,%ebx
 8ade7df:	0f 94 c0             	sete   %al
 8ade7e2:	83 c4 14             	add    $0x14,%esp
 8ade7e5:	5b                   	pop    %ebx
 8ade7e6:	5d                   	pop    %ebp
 8ade7e7:	c3                   	ret

08ade7e8 <_ZSteqIP10WideStringS1_EbRKSt13move_iteratorIT_ERKS2_IT0_E>:
 8ade7e8:	55                   	push   %ebp
 8ade7e9:	89 e5                	mov    %esp,%ebp
 8ade7eb:	53                   	push   %ebx
 8ade7ec:	83 ec 14             	sub    $0x14,%esp
 8ade7ef:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade7f2:	89 04 24             	mov    %eax,(%esp)
 8ade7f5:	e8 22 00 00 00       	call   8ade81c <_ZNKSt13move_iteratorIP10WideStringE4baseEv>
 8ade7fa:	89 c3                	mov    %eax,%ebx
 8ade7fc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ade7ff:	89 04 24             	mov    %eax,(%esp)
 8ade802:	e8 15 00 00 00       	call   8ade81c <_ZNKSt13move_iteratorIP10WideStringE4baseEv>
 8ade807:	39 c3                	cmp    %eax,%ebx
 8ade809:	0f 94 c0             	sete   %al
 8ade80c:	83 c4 14             	add    $0x14,%esp
 8ade80f:	5b                   	pop    %ebx
 8ade810:	5d                   	pop    %ebp
 8ade811:	c3                   	ret

08ade812 <_ZNKSt13move_iteratorIP10CharStringE4baseEv>:
 8ade812:	55                   	push   %ebp
 8ade813:	89 e5                	mov    %esp,%ebp
 8ade815:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade818:	8b 00                	mov    (%eax),%eax
 8ade81a:	5d                   	pop    %ebp
 8ade81b:	c3                   	ret

08ade81c <_ZNKSt13move_iteratorIP10WideStringE4baseEv>:
 8ade81c:	55                   	push   %ebp
 8ade81d:	89 e5                	mov    %esp,%ebp
 8ade81f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ade822:	8b 00                	mov    (%eax),%eax
 8ade824:	5d                   	pop    %ebp
 8ade825:	c3                   	ret
 8ade826:	90                   	nop
 8ade827:	90                   	nop

```

```c
// WideString::isupunct @ 0x8adcb50

bool WideString::isupunct(wchar ch)

{
  bool bVar1;
  
  if (((((((((((ch < 0x21) || (0x23 < ch)) && ((ch < 0x25 || (0x2a < ch)))) &&
            ((((((ch < 0x2c || (0x2f < ch)) && (ch != 0x3a)) && ((ch != 0x3b && (ch != 0x3f)))) &&
              (ch != 0x40)) &&
             (((ch < 0x5b || (0x5d < ch)) &&
              ((ch != 0x5f && (((ch != 0x7b && (ch != 0x7d)) && (ch != 0xa1)))))))))) &&
           (((ch != 0xab && (ch != 0xad)) && ((ch != 0xb7 && ((ch != 0xbb && (ch != 0xbf)))))))) &&
          (ch != 0x37e)) && ((ch != 0x387 && (((ch < 0x55a || (0x55f < ch)) && (ch != 0x589)))))) &&
        (((ch != 0x58a && (ch != 0x5be)) &&
         ((ch != 0x5c0 &&
          ((((ch != 0x5c3 && (ch != 0x5c6)) &&
            ((ch != 0x5f3 &&
             ((((ch != 0x5f4 && (ch != 0x60c)) && (ch != 0x60d)) && ((ch != 0x61b && (ch != 0x61e)))
              ))))) && (ch != 0x61f)))))))) &&
       ((((((((ch < 0x66a || (0x66d < ch)) && ((ch != 0x6d4 && ((ch < 0x700 || (0x70d < ch)))))) &&
            ((ch < 0x7f7 || (0x7f9 < ch)))) &&
           ((((((ch != 0x964 && (ch != 0x965)) && (ch != 0x970)) &&
              ((ch != 0xdf4 && ((ch < 0xe4f || (0xe5b < ch)))))) && ((ch < 0xf04 || (0xf12 < ch))))
            && (((ch < 0xf3a || (0xf3d < ch)) && ((ch != 0xf85 && ((ch != 0xfd0 && (ch != 0xfd1)))))
                ))))) && ((ch < 0x104a || (0x104f < ch)))) &&
         (((((ch != 0x10fb && (((ch < 0x1361 || (0x1368 < ch)) && (ch != 0x166d)))) &&
            ((ch != 0x166e && (ch != 0x169b)))) && (ch != 0x169c)) &&
          (((((((ch < 0x16eb || (0x16ed < ch)) && ((ch != 0x1735 && (ch != 0x1736)))) &&
              ((ch < 0x17d4 || (0x17d6 < ch)))) &&
             (((ch < 0x17d8 || (0x17da < ch)) &&
              (((((ch < 0x1800 || (0x180a < ch)) && (ch != 0x1944)) &&
                ((ch != 0x1945 && (ch != 0x19de)))) &&
               ((ch != 0x19df && ((ch != 0x1a1e && (ch != 0x1a1f)))))))))) &&
            ((ch < 0x1b5a || (0x1b60 < ch)))) &&
           (((((ch < 0x2010 || (0x2027 < ch)) && ((ch < 0x2030 || (0x2043 < ch)))) &&
             ((ch < 0x2045 || (0x2051 < ch)))) && ((ch < 0x2053 || (0x205e < ch)))))))))) &&
        ((((ch != 0x207d && (ch != 0x207e)) && (ch != 0x208d)) &&
         (((ch != 0x208e && (ch != 0x2329)) && ((ch != 0x232a && ((ch < 0x2768 || (0x2775 < ch))))))
         )))))) && ((ch < 0x27c5 || (0x27c6 < ch)))) &&
     (((((((ch < 0x27e6 || (0x27eb < ch)) && ((ch < 0x2983 || (0x2998 < ch)))) &&
         (((((((ch < 0x29d8 || (0x29db < ch)) && (ch != 0x29fc)) && (ch != 0x29fd)) &&
            (((ch < 0x2cf9 || (0x2cfc < ch)) && ((ch != 0x2cfe && (ch != 0x2cff)))))) &&
           ((ch < 0x2e00 || (0x2e17 < ch)))) &&
          ((ch != 0x2e1c && ((ch != 0x2e1d && ((ch < 0x3001 || (0x3003 < ch)))))))))) &&
        ((ch < 0x3008 || (0x3011 < ch)))) &&
       ((((((((ch < 0x3014 || (0x301f < ch)) && (ch != 0x3030)) &&
            ((ch != 0x303d && (ch != 0x30a0)))) && (ch != 0x30fb)) &&
          (((ch < 0xa874 || (0xa877 < ch)) && ((ch != 0xfd3e && (ch != 0xfd3f)))))) &&
         ((ch < 0xfe10 || (0xfe19 < ch)))) && ((ch < 0xfe30 || (0xfe52 < ch)))))) &&
      (((((ch < 0xfe54 || (0xfe61 < ch)) && (ch != 0xfe63)) &&
        (((ch != 0xfe68 && (ch != 0xfe6a)) && ((ch != 0xfe6b && ((ch < 0xff01 || (0xff03 < ch)))))))
        ) && (((ch < 0xff05 || (0xff0a < ch)) &&
              (((((ch < 0xff0c || (0xff0f < ch)) && (ch != 0xff1a)) &&
                (((ch != 0xff1b && (ch != 0xff1f)) &&
                 (((ch != 0xff20 && ((ch < 0xff3b || (0xff3d < ch)))) && (ch != 0xff3f)))))) &&
               (((ch != 0xff5b && (ch != 0xff5d)) && ((ch < 0xff5f || (0xff65 < ch)))))))))))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

```

---

## isuspace

```asm
// === 08adca62 WideString::isuspace  [0x08adca62-0x8adcb4f] ===
 8adca62:	55                   	push   %ebp
 8adca63:	89 e5                	mov    %esp,%ebp
 8adca65:	83 7d 08 09          	cmpl   $0x9,0x8(%ebp)
 8adca69:	0f 84 d3 00 00 00    	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adca6f:	83 7d 08 0a          	cmpl   $0xa,0x8(%ebp)
 8adca73:	0f 84 c9 00 00 00    	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adca79:	83 7d 08 0b          	cmpl   $0xb,0x8(%ebp)
 8adca7d:	0f 84 bf 00 00 00    	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adca83:	83 7d 08 0c          	cmpl   $0xc,0x8(%ebp)
 8adca87:	0f 84 b5 00 00 00    	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adca8d:	83 7d 08 0d          	cmpl   $0xd,0x8(%ebp)
 8adca91:	0f 84 ab 00 00 00    	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adca97:	83 7d 08 20          	cmpl   $0x20,0x8(%ebp)
 8adca9b:	0f 84 a1 00 00 00    	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcaa1:	81 7d 08 a0 00 00 00 	cmpl   $0xa0,0x8(%ebp)
 8adcaa8:	0f 84 94 00 00 00    	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcaae:	81 7d 08 00 20 00 00 	cmpl   $0x2000,0x8(%ebp)
 8adcab5:	0f 84 87 00 00 00    	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcabb:	81 7d 08 01 20 00 00 	cmpl   $0x2001,0x8(%ebp)
 8adcac2:	74 7e                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcac4:	81 7d 08 02 20 00 00 	cmpl   $0x2002,0x8(%ebp)
 8adcacb:	74 75                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcacd:	81 7d 08 03 20 00 00 	cmpl   $0x2003,0x8(%ebp)
 8adcad4:	74 6c                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcad6:	81 7d 08 04 20 00 00 	cmpl   $0x2004,0x8(%ebp)
 8adcadd:	74 63                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcadf:	81 7d 08 05 20 00 00 	cmpl   $0x2005,0x8(%ebp)
 8adcae6:	74 5a                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcae8:	81 7d 08 06 20 00 00 	cmpl   $0x2006,0x8(%ebp)
 8adcaef:	74 51                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcaf1:	81 7d 08 07 20 00 00 	cmpl   $0x2007,0x8(%ebp)
 8adcaf8:	74 48                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcafa:	81 7d 08 08 20 00 00 	cmpl   $0x2008,0x8(%ebp)
 8adcb01:	74 3f                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcb03:	81 7d 08 09 20 00 00 	cmpl   $0x2009,0x8(%ebp)
 8adcb0a:	74 36                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcb0c:	81 7d 08 0a 20 00 00 	cmpl   $0x200a,0x8(%ebp)
 8adcb13:	74 2d                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcb15:	81 7d 08 0b 20 00 00 	cmpl   $0x200b,0x8(%ebp)
 8adcb1c:	74 24                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcb1e:	81 7d 08 2f 20 00 00 	cmpl   $0x202f,0x8(%ebp)
 8adcb25:	74 1b                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcb27:	81 7d 08 5f 20 00 00 	cmpl   $0x205f,0x8(%ebp)
 8adcb2e:	74 12                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcb30:	81 7d 08 00 30 00 00 	cmpl   $0x3000,0x8(%ebp)
 8adcb37:	74 09                	je     8adcb42 <_ZN10WideString8isuspaceEw+0xe0>
 8adcb39:	81 7d 08 ff fe 00 00 	cmpl   $0xfeff,0x8(%ebp)
 8adcb40:	75 07                	jne    8adcb49 <_ZN10WideString8isuspaceEw+0xe7>
 8adcb42:	b8 01 00 00 00       	mov    $0x1,%eax
 8adcb47:	eb 05                	jmp    8adcb4e <_ZN10WideString8isuspaceEw+0xec>
 8adcb49:	b8 00 00 00 00       	mov    $0x0,%eax
 8adcb4e:	5d                   	pop    %ebp
 8adcb4f:	c3                   	ret

```

```c
// WideString::isuspace @ 0x8adca62

bool WideString::isuspace(wchar ch)

{
  bool bVar1;
  
  if ((((((ch == 9) || (ch == 10)) || (ch == 0xb)) ||
       (((ch == 0xc || (ch == 0xd)) || ((ch == 0x20 || ((ch == 0xa0 || (ch == 0x2000)))))))) ||
      ((ch == 0x2001 ||
       ((((((ch == 0x2002 || (ch == 0x2003)) || (ch == 0x2004)) ||
          ((ch == 0x2005 || (ch == 0x2006)))) ||
         ((ch == 0x2007 || ((ch == 0x2008 || (ch == 0x2009)))))) || (ch == 0x200a)))))) ||
     ((((ch == 0x200b || (ch == 0x202f)) || (ch == 0x205f)) || ((ch == 0x3000 || (ch == 0xfeff))))))
  {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

```

---

## join

```asm
// === 08adc2f4 WideString::join  [0x08adc2f4-0x8adc5a3] ===
 8adc2f4:	55                   	push   %ebp
 8adc2f5:	89 e5                	mov    %esp,%ebp
 8adc2f7:	56                   	push   %esi
 8adc2f8:	53                   	push   %ebx
 8adc2f9:	83 ec 60             	sub    $0x60,%esp
 8adc2fc:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adc2ff:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adc302:	89 04 24             	mov    %eax,(%esp)
 8adc305:	e8 2c 11 00 00       	call   8add436 <_ZNKSt6vectorI10WideStringSaIS0_EE5emptyEv>
 8adc30a:	84 c0                	test   %al,%al
 8adc30c:	74 0f                	je     8adc31d <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x29>
 8adc30e:	89 d8                	mov    %ebx,%eax
 8adc310:	89 04 24             	mov    %eax,(%esp)
 8adc313:	e8 e6 d6 ff ff       	call   8ad99fe <_ZN10WideStringC1Ev>
 8adc318:	e9 76 02 00 00       	jmp    8adc593 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x29f>
 8adc31d:	8b 45 10             	mov    0x10(%ebp),%eax
 8adc320:	89 04 24             	mov    %eax,(%esp)
 8adc323:	e8 98 6b fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adc328:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8adc32b:	8b 45 10             	mov    0x10(%ebp),%eax
 8adc32e:	89 04 24             	mov    %eax,(%esp)
 8adc331:	e8 66 0f 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adc336:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8adc339:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adc33c:	89 04 24             	mov    %eax,(%esp)
 8adc33f:	e8 36 11 00 00       	call   8add47a <_ZNKSt6vectorI10WideStringSaIS0_EE4sizeEv>
 8adc344:	83 e8 01             	sub    $0x1,%eax
 8adc347:	0f af 45 d4          	imul   -0x2c(%ebp),%eax
 8adc34b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8adc34e:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8adc352:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 8adc356:	0f 85 a1 00 00 00    	jne    8adc3fd <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x109>
 8adc35c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8adc35f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adc362:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc366:	89 04 24             	mov    %eax,(%esp)
 8adc369:	e8 28 11 00 00       	call   8add496 <_ZNKSt6vectorI10WideStringSaIS0_EE5beginEv>
 8adc36e:	83 ec 04             	sub    $0x4,%esp
 8adc371:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8adc374:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adc377:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc37b:	89 04 24             	mov    %eax,(%esp)
 8adc37e:	e8 3f 11 00 00       	call   8add4c2 <_ZNKSt6vectorI10WideStringSaIS0_EE3endEv>
 8adc383:	83 ec 04             	sub    $0x4,%esp
 8adc386:	eb 45                	jmp    8adc3cd <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0xd9>
 8adc388:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8adc38b:	89 04 24             	mov    %eax,(%esp)
 8adc38e:	e8 bb 11 00 00       	call   8add54e <_ZNK9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEEdeEv>
 8adc393:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8adc396:	eb 12                	jmp    8adc3aa <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0xb6>
 8adc398:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8adc39b:	89 04 24             	mov    %eax,(%esp)
 8adc39e:	e8 f9 0e 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adc3a3:	01 45 d8             	add    %eax,-0x28(%ebp)
 8adc3a6:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8adc3aa:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 8adc3ae:	75 e8                	jne    8adc398 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0xa4>
 8adc3b0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8adc3b3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8adc3ba:	00 
 8adc3bb:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8adc3be:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc3c2:	89 04 24             	mov    %eax,(%esp)
 8adc3c5:	e8 50 11 00 00       	call   8add51a <_ZN9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEEppEi>
 8adc3ca:	83 ec 04             	sub    $0x4,%esp
 8adc3cd:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8adc3d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adc3d4:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8adc3d7:	89 04 24             	mov    %eax,(%esp)
 8adc3da:	e8 0f 11 00 00       	call   8add4ee <_ZN9__gnu_cxxneIPK10WideStringSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8adc3df:	84 c0                	test   %al,%al
 8adc3e1:	74 11                	je     8adc3f4 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x100>
 8adc3e3:	80 75 e7 01          	xorb   $0x1,-0x19(%ebp)
 8adc3e7:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 8adc3eb:	74 07                	je     8adc3f4 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x100>
 8adc3ed:	b8 01 00 00 00       	mov    $0x1,%eax
 8adc3f2:	eb 05                	jmp    8adc3f9 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x105>
 8adc3f4:	b8 00 00 00 00       	mov    $0x0,%eax
 8adc3f9:	84 c0                	test   %al,%al
 8adc3fb:	75 8b                	jne    8adc388 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x94>
 8adc3fd:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8adc401:	75 0f                	jne    8adc412 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x11e>
 8adc403:	89 d8                	mov    %ebx,%eax
 8adc405:	89 04 24             	mov    %eax,(%esp)
 8adc408:	e8 f1 d5 ff ff       	call   8ad99fe <_ZN10WideStringC1Ev>
 8adc40d:	e9 81 01 00 00       	jmp    8adc593 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x29f>
 8adc412:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8adc415:	89 04 24             	mov    %eax,(%esp)
 8adc418:	e8 af d5 ff ff       	call   8ad99cc <_ZN14WideStringData16createTerminatedEi>
 8adc41d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8adc420:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8adc423:	89 04 24             	mov    %eax,(%esp)
 8adc426:	e8 63 d5 ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8adc42b:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8adc42e:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8adc432:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 8adc436:	0f 85 46 01 00 00    	jne    8adc582 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x28e>
 8adc43c:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8adc43f:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adc442:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc446:	89 04 24             	mov    %eax,(%esp)
 8adc449:	e8 48 10 00 00       	call   8add496 <_ZNKSt6vectorI10WideStringSaIS0_EE5beginEv>
 8adc44e:	83 ec 04             	sub    $0x4,%esp
 8adc451:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8adc454:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adc457:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc45b:	89 04 24             	mov    %eax,(%esp)
 8adc45e:	e8 5f 10 00 00       	call   8add4c2 <_ZNKSt6vectorI10WideStringSaIS0_EE3endEv>
 8adc463:	83 ec 04             	sub    $0x4,%esp
 8adc466:	e9 e3 00 00 00       	jmp    8adc54e <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x25a>
 8adc46b:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8adc46e:	89 04 24             	mov    %eax,(%esp)
 8adc471:	e8 d8 10 00 00       	call   8add54e <_ZNK9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEEdeEv>
 8adc476:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8adc479:	e9 a9 00 00 00       	jmp    8adc527 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x233>
 8adc47e:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8adc482:	7e 32                	jle    8adc4b6 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x1c2>
 8adc484:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8adc487:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adc48a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc48e:	89 04 24             	mov    %eax,(%esp)
 8adc491:	e8 00 10 00 00       	call   8add496 <_ZNKSt6vectorI10WideStringSaIS0_EE5beginEv>
 8adc496:	83 ec 04             	sub    $0x4,%esp
 8adc499:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8adc49c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adc4a0:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8adc4a3:	89 04 24             	mov    %eax,(%esp)
 8adc4a6:	e8 43 10 00 00       	call   8add4ee <_ZN9__gnu_cxxneIPK10WideStringSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8adc4ab:	84 c0                	test   %al,%al
 8adc4ad:	74 07                	je     8adc4b6 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x1c2>
 8adc4af:	b8 01 00 00 00       	mov    $0x1,%eax
 8adc4b4:	eb 05                	jmp    8adc4bb <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x1c7>
 8adc4b6:	b8 00 00 00 00       	mov    $0x0,%eax
 8adc4bb:	84 c0                	test   %al,%al
 8adc4bd:	74 25                	je     8adc4e4 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x1f0>
 8adc4bf:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8adc4c2:	c1 e0 02             	shl    $0x2,%eax
 8adc4c5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8adc4c9:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8adc4cc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adc4d0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8adc4d3:	89 04 24             	mov    %eax,(%esp)
 8adc4d6:	e8 c5 13 5a ff       	call   807d8a0 <memcpy@plt>
 8adc4db:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8adc4de:	c1 e0 02             	shl    $0x2,%eax
 8adc4e1:	01 45 e0             	add    %eax,-0x20(%ebp)
 8adc4e4:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adc4e7:	89 04 24             	mov    %eax,(%esp)
 8adc4ea:	e8 ad 0d 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adc4ef:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8adc4f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8adc4f5:	8d 34 85 00 00 00 00 	lea    0x0(,%eax,4),%esi
 8adc4fc:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adc4ff:	89 04 24             	mov    %eax,(%esp)
 8adc502:	e8 b9 69 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adc507:	89 74 24 08          	mov    %esi,0x8(%esp)
 8adc50b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adc50f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8adc512:	89 04 24             	mov    %eax,(%esp)
 8adc515:	e8 86 13 5a ff       	call   807d8a0 <memcpy@plt>
 8adc51a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8adc51d:	c1 e0 02             	shl    $0x2,%eax
 8adc520:	01 45 e0             	add    %eax,-0x20(%ebp)
 8adc523:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8adc527:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 8adc52b:	0f 85 4d ff ff ff    	jne    8adc47e <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x18a>
 8adc531:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8adc534:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8adc53b:	00 
 8adc53c:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8adc53f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc543:	89 04 24             	mov    %eax,(%esp)
 8adc546:	e8 cf 0f 00 00       	call   8add51a <_ZN9__gnu_cxx17__normal_iteratorIPK10WideStringSt6vectorIS1_SaIS1_EEEppEi>
 8adc54b:	83 ec 04             	sub    $0x4,%esp
 8adc54e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8adc551:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adc555:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8adc558:	89 04 24             	mov    %eax,(%esp)
 8adc55b:	e8 8e 0f 00 00       	call   8add4ee <_ZN9__gnu_cxxneIPK10WideStringSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8adc560:	84 c0                	test   %al,%al
 8adc562:	74 11                	je     8adc575 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x281>
 8adc564:	80 75 ef 01          	xorb   $0x1,-0x11(%ebp)
 8adc568:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 8adc56c:	74 07                	je     8adc575 <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x281>
 8adc56e:	b8 01 00 00 00       	mov    $0x1,%eax
 8adc573:	eb 05                	jmp    8adc57a <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x286>
 8adc575:	b8 00 00 00 00       	mov    $0x0,%eax
 8adc57a:	84 c0                	test   %al,%al
 8adc57c:	0f 85 e9 fe ff ff    	jne    8adc46b <_ZN10WideString4joinERKSt6vectorIS_SaIS_EERKS_+0x177>
 8adc582:	89 d8                	mov    %ebx,%eax
 8adc584:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8adc587:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc58b:	89 04 24             	mov    %eax,(%esp)
 8adc58e:	e8 67 d6 ff ff       	call   8ad9bfa <_ZN10WideStringC1EP14WideStringData>
 8adc593:	89 d8                	mov    %ebx,%eax
 8adc595:	89 d8                	mov    %ebx,%eax
 8adc597:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8adc59a:	83 c4 00             	add    $0x0,%esp
 8adc59d:	5b                   	pop    %ebx
 8adc59e:	5e                   	pop    %esi
 8adc59f:	5d                   	pop    %ebp
 8adc5a0:	c2 04 00             	ret    $0x4
 8adc5a3:	90                   	nop

```

```c
// WideString::join @ 0x8adc2f4

WideString *
WideString::join(WideString *__return_storage_ptr__,
                vector<WideString,_std::allocator<WideString>_> *tokenVector,
                WideString *separatorStr)

{
  size_t __n;
  bool bVar1;
  size_t sVar2;
  int32 iVar3;
  wchar *__src;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
  local_40;
  vector<WideString,_std::allocator<WideString>_> local_3c;
  int local_30;
  int local_2c;
  WideStringData *local_28;
  wchar *local_24;
  byte local_1d;
  WideString *local_1c;
  byte local_15;
  WideString *local_14;
  int32 local_10;
  
                    /* Unresolved local var: wchar * separatorStrSrc@[???]
                       Unresolved local var: int32 separatorStrLen@[???]
                       Unresolved local var: int32 totalLength@[???]
                       Unresolved local var: WideStringData * newData@[???]
                       Unresolved local var: wchar * newDataBuf@[???] */
  bVar1 = std::vector<WideString,_std::allocator<WideString>_>::empty(tokenVector);
  if (bVar1) {
    WideString(__return_storage_ptr__);
  }
  else {
    local_3c.super__Vector_base<WideString,_std::allocator<WideString>_>._M_impl._M_end_of_storage =
         (WideString *)c_str(separatorStr);
    local_30 = length(separatorStr);
    sVar2 = std::vector<WideString,_std::allocator<WideString>_>::size(tokenVector);
    local_2c = (sVar2 - 1) * local_30;
                    /* Unresolved local var: bool token_runOnce@[???] */
    local_1d = 0;
                    /* Unresolved local var:
                       __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                       token_iterator@[???]
                       Unresolved local var:
                       __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                       token_iteratorEnd@[???] */
    std::vector<WideString,_std::allocator<WideString>_>::begin
              ((vector<WideString,_std::allocator<WideString>_> *)(local_48 + 4));
    std::vector<WideString,_std::allocator<WideString>_>::end
              ((vector<WideString,_std::allocator<WideString>_> *)local_48);
    while( true ) {
      bVar1 = __gnu_cxx::
              operator!=<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                        ((__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                          *)(local_48 + 4),
                         (__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                          *)local_48);
      if ((bVar1) && (local_1d = local_1d ^ 1, local_1d != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
                    /* Unresolved local var: WideString * token@[???] */
      local_1c = __gnu_cxx::
                 __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                 ::operator*((__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                              *)(local_48 + 4));
      while (local_1d != 0) {
        iVar3 = length(local_1c);
        local_2c = local_2c + iVar3;
        local_1d = 0;
      }
      __gnu_cxx::
      __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>::
      operator++(&local_40,(int)(local_48 + 4));
    }
    if (local_2c == 0) {
      WideString(__return_storage_ptr__);
    }
    else {
      local_28 = WideStringData::createTerminated(local_2c);
      local_24 = WideStringData::getBuffer(local_28);
                    /* Unresolved local var: bool token_runOnce@[???] */
      local_15 = 0;
                    /* Unresolved local var:
                       __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                       token_iterator@[???]
                       Unresolved local var:
                       __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                       token_iteratorEnd@[???] */
      std::vector<WideString,_std::allocator<WideString>_>::begin
                ((vector<WideString,_std::allocator<WideString>_> *)(local_50 + 4));
      std::vector<WideString,_std::allocator<WideString>_>::end
                ((vector<WideString,_std::allocator<WideString>_> *)local_50);
      while( true ) {
        bVar1 = __gnu_cxx::
                operator!=<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                          ((__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                            *)(local_50 + 4),
                           (__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                            *)local_50);
        if ((bVar1) && (local_15 = local_15 ^ 1, local_15 != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
                    /* Unresolved local var: WideString * token@[???] */
        local_14 = __gnu_cxx::
                   __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                   ::operator*((__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                                *)(local_50 + 4));
        while (local_15 != 0) {
                    /* Unresolved local var: int32 tokenLength@[???] */
          if (local_30 < 1) {
LAB_08adc4b6:
            bVar1 = false;
          }
          else {
            std::vector<WideString,_std::allocator<WideString>_>::begin(&local_3c);
            bVar1 = __gnu_cxx::
                    operator!=<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                              ((__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                                *)(local_50 + 4),
                               (__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                                *)&local_3c);
            if (!bVar1) goto LAB_08adc4b6;
            bVar1 = true;
          }
          if (bVar1) {
            memcpy(local_24,local_3c.super__Vector_base<WideString,_std::allocator<WideString>_>.
                            _M_impl._M_end_of_storage,local_30 << 2);
            local_24 = local_24 + local_30;
          }
          local_10 = length(local_14);
          __n = local_10 * 4;
          __src = c_str(local_14);
          memcpy(local_24,__src,__n);
          local_24 = local_24 + local_10;
          local_15 = 0;
        }
        __gnu_cxx::
        __normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
        ::operator++((__normal_iterator<const_WideString*,_std::vector<WideString,_std::allocator<WideString>_>_>
                      *)&local_3c.super__Vector_base<WideString,_std::allocator<WideString>_>.
                         _M_impl._M_finish,(int)(local_50 + 4));
      }
      WideString(__return_storage_ptr__,local_28);
    }
  }
  return __return_storage_ptr__;
}

```

---

## operator

```asm
// === 08ada114 WideString::operator  [0x08ada114-0x8ada11d] ===
 8ada114:	55                   	push   %ebp
 8ada115:	89 e5                	mov    %esp,%ebp
 8ada117:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada11a:	8b 00                	mov    (%eax),%eax
 8ada11c:	5d                   	pop    %ebp
 8ada11d:	c3                   	ret

```

```c
// WideString::operator @ 0x8ada114

/* DWARF original name: operator const wchar*
   DWARF original prototype: wchar * operator_const_wchar*(WideString * this) */

wchar * __thiscall WideString::operator_const_wchar_(WideString *this)

{
  return this->buffer_;
}

```

---

## operator=

```asm
// === 08ada11e WideString::operator=  [0x08ada11e-0x8ada13b] ===
 8ada11e:	55                   	push   %ebp
 8ada11f:	89 e5                	mov    %esp,%ebp
 8ada121:	83 ec 18             	sub    $0x18,%esp
 8ada124:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada127:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada12b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada12e:	89 04 24             	mov    %eax,(%esp)
 8ada131:	e8 6c fe ff ff       	call   8ad9fa2 <_ZN10WideString6assignEPKw>
 8ada136:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada139:	c9                   	leave
 8ada13a:	c3                   	ret
 8ada13b:	90                   	nop

```

```c
// WideString::operator= @ 0x8ada11e

/* DWARF original prototype: WideString * operator=(WideString * this, wchar * src) */

WideString * __thiscall WideString::operator=(WideString *this,wchar *src)

{
  assign(this,src);
  return this;
}

```

---

## operator=_08ada13c

```asm
// === 08ada13c WideString::operator=  [0x08ada13c-0x8ada159] ===
 8ada13c:	55                   	push   %ebp
 8ada13d:	89 e5                	mov    %esp,%ebp
 8ada13f:	83 ec 18             	sub    $0x18,%esp
 8ada142:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada145:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada149:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada14c:	89 04 24             	mov    %eax,(%esp)
 8ada14f:	e8 e0 fe ff ff       	call   8ada034 <_ZN10WideString6assignERKS_>
 8ada154:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada157:	c9                   	leave
 8ada158:	c3                   	ret
 8ada159:	90                   	nop

```

```c
// WideString::operator= @ 0x8ada13c

/* DWARF original prototype: WideString * operator=(WideString * this, WideString * src) */

WideString * __thiscall WideString::operator=(WideString *this,WideString *src)

{
  assign(this,src);
  return this;
}

```

---

## operator=_08ada15a

```asm
// === 08ada15a WideString::operator=  [0x08ada15a-0x8ada195] ===
 8ada15a:	55                   	push   %ebp
 8ada15b:	89 e5                	mov    %esp,%ebp
 8ada15d:	53                   	push   %ebx
 8ada15e:	83 ec 14             	sub    $0x14,%esp
 8ada161:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada164:	89 04 24             	mov    %eax,(%esp)
 8ada167:	e8 54 20 c4 ff       	call   871c1c0 <_ZNKSbIwSt11char_traitsIwESaIwEE4sizeEv>
 8ada16c:	89 c3                	mov    %eax,%ebx
 8ada16e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada171:	89 04 24             	mov    %eax,(%esp)
 8ada174:	e8 c7 1e c4 ff       	call   871c040 <_ZNKSbIwSt11char_traitsIwESaIwEE5c_strEv>
 8ada179:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ada17d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada181:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada184:	89 04 24             	mov    %eax,(%esp)
 8ada187:	e8 40 fe ff ff       	call   8ad9fcc <_ZN10WideString6assignEPKwi>
 8ada18c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada18f:	83 c4 14             	add    $0x14,%esp
 8ada192:	5b                   	pop    %ebx
 8ada193:	5d                   	pop    %ebp
 8ada194:	c3                   	ret
 8ada195:	90                   	nop

```

```c
// WideString::operator= @ 0x8ada15a

/* DWARF original prototype: WideString * operator=(WideString * this, wstring * src) */

WideString * __thiscall WideString::operator=(WideString *this,wstring *src)

{
  int32 srcLength;
  wchar *src_00;
  
  srcLength = std::wstring::size((wstring *)src);
  src_00 = (wchar *)std::wstring::c_str((wstring *)src);
  assign(this,src_00,srcLength);
  return this;
}

```

---

## operator=_08ada196

```asm
// === 08ada196 WideString::operator=  [0x08ada196-0x8ada1b3] ===
 8ada196:	55                   	push   %ebp
 8ada197:	89 e5                	mov    %esp,%ebp
 8ada199:	83 ec 18             	sub    $0x18,%esp
 8ada19c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada19f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada1a3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada1a6:	89 04 24             	mov    %eax,(%esp)
 8ada1a9:	e8 d2 fe ff ff       	call   8ada080 <_ZN10WideString6assignEw>
 8ada1ae:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada1b1:	c9                   	leave
 8ada1b2:	c3                   	ret
 8ada1b3:	90                   	nop

```

```c
// WideString::operator= @ 0x8ada196

/* DWARF original prototype: WideString * operator=(WideString * this, wchar src) */

WideString * __thiscall WideString::operator=(WideString *this,wchar src)

{
  assign(this,src);
  return this;
}

```

---

## operator[]

```asm
// === 08ada0fa WideString::operator[]  [0x08ada0fa-0x8ada113] ===
 8ada0fa:	55                   	push   %ebp
 8ada0fb:	89 e5                	mov    %esp,%ebp
 8ada0fd:	83 ec 08             	sub    $0x8,%esp
 8ada100:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada103:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada107:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada10a:	89 04 24             	mov    %eax,(%esp)
 8ada10d:	e8 d2 fb ff ff       	call   8ad9ce4 <_ZNK10WideString5getAtEi>
 8ada112:	c9                   	leave
 8ada113:	c3                   	ret

```

```c
// WideString::operator[] @ 0x8ada0fa

/* DWARF original prototype: wchar operator[](WideString * this, int idx) */

wchar __thiscall WideString::operator[](WideString *this,int idx)

{
  wchar wVar1;
  
  wVar1 = getAt(this,idx);
  return wVar1;
}

```

---

## pattern

```asm
// === 08adbb38 WideString::pattern  [0x08adbb38-0x8adbbe3] ===
 8adbb38:	55                   	push   %ebp
 8adbb39:	89 e5                	mov    %esp,%ebp
 8adbb3b:	53                   	push   %ebx
 8adbb3c:	83 ec 24             	sub    $0x24,%esp
 8adbb3f:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adbb42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adbb45:	89 04 24             	mov    %eax,(%esp)
 8adbb48:	e8 e3 25 5a ff       	call   807e130 <wcslen@plt>
 8adbb4d:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8adbb50:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8adbb54:	74 06                	je     8adbb5c <_ZN10WideString7patternEPKwi+0x24>
 8adbb56:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8adbb5a:	7f 0c                	jg     8adbb68 <_ZN10WideString7patternEPKwi+0x30>
 8adbb5c:	89 d8                	mov    %ebx,%eax
 8adbb5e:	89 04 24             	mov    %eax,(%esp)
 8adbb61:	e8 98 de ff ff       	call   8ad99fe <_ZN10WideStringC1Ev>
 8adbb66:	eb 70                	jmp    8adbbd8 <_ZN10WideString7patternEPKwi+0xa0>
 8adbb68:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8adbb6b:	0f af 45 10          	imul   0x10(%ebp),%eax
 8adbb6f:	89 04 24             	mov    %eax,(%esp)
 8adbb72:	e8 55 de ff ff       	call   8ad99cc <_ZN14WideStringData16createTerminatedEi>
 8adbb77:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8adbb7a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adbb7d:	89 04 24             	mov    %eax,(%esp)
 8adbb80:	e8 09 de ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8adbb85:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8adbb88:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8adbb8f:	eb 29                	jmp    8adbbba <_ZN10WideString7patternEPKwi+0x82>
 8adbb91:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8adbb94:	c1 e0 02             	shl    $0x2,%eax
 8adbb97:	89 44 24 08          	mov    %eax,0x8(%esp)
 8adbb9b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adbb9e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adbba2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adbba5:	89 04 24             	mov    %eax,(%esp)
 8adbba8:	e8 f3 1c 5a ff       	call   807d8a0 <memcpy@plt>
 8adbbad:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8adbbb0:	c1 e0 02             	shl    $0x2,%eax
 8adbbb3:	01 45 f0             	add    %eax,-0x10(%ebp)
 8adbbb6:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8adbbba:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8adbbbd:	3b 45 10             	cmp    0x10(%ebp),%eax
 8adbbc0:	0f 9c c0             	setl   %al
 8adbbc3:	84 c0                	test   %al,%al
 8adbbc5:	75 ca                	jne    8adbb91 <_ZN10WideString7patternEPKwi+0x59>
 8adbbc7:	89 d8                	mov    %ebx,%eax
 8adbbc9:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8adbbcc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adbbd0:	89 04 24             	mov    %eax,(%esp)
 8adbbd3:	e8 22 e0 ff ff       	call   8ad9bfa <_ZN10WideStringC1EP14WideStringData>
 8adbbd8:	89 d8                	mov    %ebx,%eax
 8adbbda:	89 d8                	mov    %ebx,%eax
 8adbbdc:	83 c4 24             	add    $0x24,%esp
 8adbbdf:	5b                   	pop    %ebx
 8adbbe0:	5d                   	pop    %ebp
 8adbbe1:	c2 04 00             	ret    $0x4

```

```c
// WideString::pattern @ 0x8adbb38

WideString * WideString::pattern(WideString *__return_storage_ptr__,wchar *pattern,int32 count)

{
  size_t sVar1;
  WideStringData *this;
  wchar *local_14;
  int local_10;
  
                    /* Unresolved local var: int32 patternLen@[???]
                       Unresolved local var: WideStringData * newData@[???]
                       Unresolved local var: wchar * buffer@[???] */
  sVar1 = wcslen(pattern);
  if ((sVar1 == 0) || (count < 1)) {
    WideString(__return_storage_ptr__);
  }
  else {
    this = WideStringData::createTerminated(sVar1 * count);
    local_14 = WideStringData::getBuffer(this);
                    /* Unresolved local var: int32 i@[???] */
    for (local_10 = 0; local_10 < count; local_10 = local_10 + 1) {
      memcpy(local_14,pattern,sVar1 << 2);
      local_14 = local_14 + sVar1;
    }
    WideString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}

```

---

## replaceData

```asm
// === 08ada1d8 WideString::replaceData  [0x08ada1d8-0x8ada213] ===
 8ada1d8:	55                   	push   %ebp
 8ada1d9:	89 e5                	mov    %esp,%ebp
 8ada1db:	83 ec 28             	sub    $0x28,%esp
 8ada1de:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada1e1:	89 04 24             	mov    %eax,(%esp)
 8ada1e4:	e8 2b 00 00 00       	call   8ada214 <_ZNK10WideString7getDataEv>
 8ada1e9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ada1ec:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada1ef:	89 04 24             	mov    %eax,(%esp)
 8ada1f2:	e8 8d c6 ff ff       	call   8ad6884 <_ZN10StringData6incRefEv>
 8ada1f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada1fa:	89 04 24             	mov    %eax,(%esp)
 8ada1fd:	e8 8c f7 ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8ada202:	8b 55 08             	mov    0x8(%ebp),%edx
 8ada205:	89 02                	mov    %eax,(%edx)
 8ada207:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada20a:	89 04 24             	mov    %eax,(%esp)
 8ada20d:	e8 7e c6 ff ff       	call   8ad6890 <_ZN10StringData6decRefEv>
 8ada212:	c9                   	leave
 8ada213:	c3                   	ret

```

```c
// WideString::replaceData @ 0x8ada1d8

/* DWARF original prototype: void replaceData(WideString * this, WideStringData * newData) */

void __thiscall WideString::replaceData(WideString *this,WideStringData *newData)

{
  StringData *this_00;
  wchar *pwVar1;
  
                    /* Unresolved local var: WideStringData * oldData@[???] */
  this_00 = &getData(this)->super_StringData;
  StringData::incRef(&newData->super_StringData);
  pwVar1 = WideStringData::getBuffer(newData);
  this->buffer_ = pwVar1;
  StringData::decRef(this_00);
  return;
}

```

---

## rfind

```asm
// === 08ada498 WideString::rfind  [0x08ada498-0x8ada4d9] ===
 8ada498:	55                   	push   %ebp
 8ada499:	89 e5                	mov    %esp,%ebp
 8ada49b:	83 ec 28             	sub    $0x28,%esp
 8ada49e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada4a1:	89 04 24             	mov    %eax,(%esp)
 8ada4a4:	e8 87 3c 5a ff       	call   807e130 <wcslen@plt>
 8ada4a9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ada4ac:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada4af:	89 04 24             	mov    %eax,(%esp)
 8ada4b2:	e8 e5 2d 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada4b7:	2b 45 f4             	sub    -0xc(%ebp),%eax
 8ada4ba:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ada4bd:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ada4c1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ada4c4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ada4c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada4cc:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada4cf:	89 04 24             	mov    %eax,(%esp)
 8ada4d2:	e8 67 00 00 00       	call   8ada53e <_ZNK10WideString5rfindEiPKwi>
 8ada4d7:	c9                   	leave
 8ada4d8:	c3                   	ret
 8ada4d9:	90                   	nop

```

```c
// WideString::rfind @ 0x8ada498

/* DWARF original prototype: int32 rfind(WideString * this, wchar * pat) */

int32 __thiscall WideString::rfind(WideString *this,wchar *pat)

{
  size_t patLength;
  int32 iVar1;
  
                    /* Unresolved local var: int32 patLength@[???] */
  patLength = wcslen(pat);
  iVar1 = length(this);
  iVar1 = rfind(this,iVar1 - patLength,pat,patLength);
  return iVar1;
}

```

---

## rfind_08ada4da

```asm
// === 08ada4da WideString::rfind  [0x08ada4da-0x8ada509] ===
 8ada4da:	55                   	push   %ebp
 8ada4db:	89 e5                	mov    %esp,%ebp
 8ada4dd:	83 ec 18             	sub    $0x18,%esp
 8ada4e0:	8b 45 10             	mov    0x10(%ebp),%eax
 8ada4e3:	89 04 24             	mov    %eax,(%esp)
 8ada4e6:	e8 45 3c 5a ff       	call   807e130 <wcslen@plt>
 8ada4eb:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ada4ef:	8b 45 10             	mov    0x10(%ebp),%eax
 8ada4f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ada4f6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada4f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada4fd:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada500:	89 04 24             	mov    %eax,(%esp)
 8ada503:	e8 36 00 00 00       	call   8ada53e <_ZNK10WideString5rfindEiPKwi>
 8ada508:	c9                   	leave
 8ada509:	c3                   	ret

```

```c
// WideString::rfind @ 0x8ada4da

/* DWARF original prototype: int32 rfind(WideString * this, int32 pos, wchar * pat) */

int32 __thiscall WideString::rfind(WideString *this,int32 pos,wchar *pat)

{
  size_t patLength;
  int32 iVar1;
  
  patLength = wcslen(pat);
  iVar1 = rfind(this,pos,pat,patLength);
  return iVar1;
}

```

---

## rfind_08ada50a

```asm
// === 08ada50a WideString::rfind  [0x08ada50a-0x8ada53d] ===
 8ada50a:	55                   	push   %ebp
 8ada50b:	89 e5                	mov    %esp,%ebp
 8ada50d:	83 ec 18             	sub    $0x18,%esp
 8ada510:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada513:	89 04 24             	mov    %eax,(%esp)
 8ada516:	e8 81 2d 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada51b:	2b 45 10             	sub    0x10(%ebp),%eax
 8ada51e:	8b 55 10             	mov    0x10(%ebp),%edx
 8ada521:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ada525:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ada528:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ada52c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada530:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada533:	89 04 24             	mov    %eax,(%esp)
 8ada536:	e8 03 00 00 00       	call   8ada53e <_ZNK10WideString5rfindEiPKwi>
 8ada53b:	c9                   	leave
 8ada53c:	c3                   	ret
 8ada53d:	90                   	nop

```

```c
// WideString::rfind @ 0x8ada50a

/* DWARF original prototype: int32 rfind(WideString * this, wchar * pat, int32 patLength) */

int32 __thiscall WideString::rfind(WideString *this,wchar *pat,int32 patLength)

{
  int32 iVar1;
  
  iVar1 = length(this);
  iVar1 = rfind(this,iVar1 - patLength,pat,patLength);
  return iVar1;
}

```

---

## rfind_08ada53e

```asm
// === 08ada53e WideString::rfind  [0x08ada53e-0x8ada5df] ===
 8ada53e:	55                   	push   %ebp
 8ada53f:	89 e5                	mov    %esp,%ebp
 8ada541:	83 ec 28             	sub    $0x28,%esp
 8ada544:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8ada548:	75 0a                	jne    8ada554 <_ZNK10WideString5rfindEiPKwi+0x16>
 8ada54a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ada54f:	e9 8a 00 00 00       	jmp    8ada5de <_ZNK10WideString5rfindEiPKwi+0xa0>
 8ada554:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ada558:	78 13                	js     8ada56d <_ZNK10WideString5rfindEiPKwi+0x2f>
 8ada55a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada55d:	89 04 24             	mov    %eax,(%esp)
 8ada560:	e8 37 2d 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada565:	2b 45 0c             	sub    0xc(%ebp),%eax
 8ada568:	3b 45 14             	cmp    0x14(%ebp),%eax
 8ada56b:	7d 07                	jge    8ada574 <_ZNK10WideString5rfindEiPKwi+0x36>
 8ada56d:	b8 01 00 00 00       	mov    $0x1,%eax
 8ada572:	eb 05                	jmp    8ada579 <_ZNK10WideString5rfindEiPKwi+0x3b>
 8ada574:	b8 00 00 00 00       	mov    $0x0,%eax
 8ada579:	84 c0                	test   %al,%al
 8ada57b:	74 07                	je     8ada584 <_ZNK10WideString5rfindEiPKwi+0x46>
 8ada57d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ada582:	eb 5a                	jmp    8ada5de <_ZNK10WideString5rfindEiPKwi+0xa0>
 8ada584:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada587:	89 04 24             	mov    %eax,(%esp)
 8ada58a:	e8 31 89 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ada58f:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ada592:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada595:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ada598:	eb 33                	jmp    8ada5cd <_ZNK10WideString5rfindEiPKwi+0x8f>
 8ada59a:	8b 45 14             	mov    0x14(%ebp),%eax
 8ada59d:	8d 14 85 00 00 00 00 	lea    0x0(,%eax,4),%edx
 8ada5a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada5a7:	c1 e0 02             	shl    $0x2,%eax
 8ada5aa:	03 45 f0             	add    -0x10(%ebp),%eax
 8ada5ad:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ada5b1:	8b 55 10             	mov    0x10(%ebp),%edx
 8ada5b4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ada5b8:	89 04 24             	mov    %eax,(%esp)
 8ada5bb:	e8 d0 36 5a ff       	call   807dc90 <memcmp@plt>
 8ada5c0:	85 c0                	test   %eax,%eax
 8ada5c2:	75 05                	jne    8ada5c9 <_ZNK10WideString5rfindEiPKwi+0x8b>
 8ada5c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada5c7:	eb 15                	jmp    8ada5de <_ZNK10WideString5rfindEiPKwi+0xa0>
 8ada5c9:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 8ada5cd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada5d0:	f7 d0                	not    %eax
 8ada5d2:	c1 e8 1f             	shr    $0x1f,%eax
 8ada5d5:	84 c0                	test   %al,%al
 8ada5d7:	75 c1                	jne    8ada59a <_ZNK10WideString5rfindEiPKwi+0x5c>
 8ada5d9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ada5de:	c9                   	leave
 8ada5df:	c3                   	ret

```

```c
// WideString::rfind @ 0x8ada53e

/* DWARF original prototype: int32 rfind(WideString * this, int32 pos, wchar * pat, int32 patLength)
    */

int32 __thiscall WideString::rfind(WideString *this,int32 pos,wchar *pat,int32 patLength)

{
  bool bVar1;
  int32 iVar2;
  wchar *pwVar3;
  int iVar4;
  int32 local_10;
  
                    /* Unresolved local var: wchar * strBuf@[???] */
  if (patLength != 0) {
    if ((pos < 0) || (iVar2 = length(this), iVar2 - pos < patLength)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pwVar3 = c_str(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; -1 < local_10; local_10 = local_10 + -1) {
        iVar4 = memcmp(pwVar3 + local_10,pat,patLength * 4);
        if (iVar4 == 0) {
          return local_10;
        }
      }
    }
  }
  return -1;
}

```

---

## rfind_08ada5e0

```asm
// === 08ada5e0 WideString::rfind  [0x08ada5e0-0x8ada62f] ===
 8ada5e0:	55                   	push   %ebp
 8ada5e1:	89 e5                	mov    %esp,%ebp
 8ada5e3:	53                   	push   %ebx
 8ada5e4:	83 ec 24             	sub    $0x24,%esp
 8ada5e7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada5ea:	89 04 24             	mov    %eax,(%esp)
 8ada5ed:	e8 aa 2c 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada5f2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ada5f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada5f8:	89 04 24             	mov    %eax,(%esp)
 8ada5fb:	e8 c0 88 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ada600:	89 c3                	mov    %eax,%ebx
 8ada602:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada605:	89 04 24             	mov    %eax,(%esp)
 8ada608:	e8 8f 2c 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada60d:	2b 45 f4             	sub    -0xc(%ebp),%eax
 8ada610:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ada613:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ada617:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ada61b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada61f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada622:	89 04 24             	mov    %eax,(%esp)
 8ada625:	e8 14 ff ff ff       	call   8ada53e <_ZNK10WideString5rfindEiPKwi>
 8ada62a:	83 c4 24             	add    $0x24,%esp
 8ada62d:	5b                   	pop    %ebx
 8ada62e:	5d                   	pop    %ebp
 8ada62f:	c3                   	ret

```

```c
// WideString::rfind @ 0x8ada5e0

/* DWARF original prototype: int32 rfind(WideString * this, WideString * pat) */

int32 __thiscall WideString::rfind(WideString *this,WideString *pat)

{
  int32 iVar1;
  wchar *pat_00;
  int32 iVar2;
  
                    /* Unresolved local var: int32 patLength@[???] */
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar2 = length(this);
  iVar1 = rfind(this,iVar2 - iVar1,pat_00,iVar1);
  return iVar1;
}

```

---

## rfind_08ada630

```asm
// === 08ada630 WideString::rfind  [0x08ada630-0x8ada66f] ===
 8ada630:	55                   	push   %ebp
 8ada631:	89 e5                	mov    %esp,%ebp
 8ada633:	53                   	push   %ebx
 8ada634:	83 ec 14             	sub    $0x14,%esp
 8ada637:	8b 45 10             	mov    0x10(%ebp),%eax
 8ada63a:	89 04 24             	mov    %eax,(%esp)
 8ada63d:	e8 5a 2c 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada642:	89 c3                	mov    %eax,%ebx
 8ada644:	8b 45 10             	mov    0x10(%ebp),%eax
 8ada647:	89 04 24             	mov    %eax,(%esp)
 8ada64a:	e8 71 88 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ada64f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8ada653:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ada657:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada65a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ada65e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada661:	89 04 24             	mov    %eax,(%esp)
 8ada664:	e8 d5 fe ff ff       	call   8ada53e <_ZNK10WideString5rfindEiPKwi>
 8ada669:	83 c4 14             	add    $0x14,%esp
 8ada66c:	5b                   	pop    %ebx
 8ada66d:	5d                   	pop    %ebp
 8ada66e:	c3                   	ret
 8ada66f:	90                   	nop

```

```c
// WideString::rfind @ 0x8ada630

/* DWARF original prototype: int32 rfind(WideString * this, int32 pos, WideString * pat) */

int32 __thiscall WideString::rfind(WideString *this,int32 pos,WideString *pat)

{
  int32 iVar1;
  wchar *pat_00;
  
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar1 = rfind(this,pos,pat_00,iVar1);
  return iVar1;
}

```

---

## rfind_08ada670

```asm
// === 08ada670 WideString::rfind  [0x08ada670-0x8ada69b] ===
 8ada670:	55                   	push   %ebp
 8ada671:	89 e5                	mov    %esp,%ebp
 8ada673:	83 ec 18             	sub    $0x18,%esp
 8ada676:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada679:	89 04 24             	mov    %eax,(%esp)
 8ada67c:	e8 1b 2c 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada681:	8d 50 ff             	lea    -0x1(%eax),%edx
 8ada684:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada687:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ada68b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ada68f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada692:	89 04 24             	mov    %eax,(%esp)
 8ada695:	e8 02 00 00 00       	call   8ada69c <_ZNK10WideString5rfindEiw>
 8ada69a:	c9                   	leave
 8ada69b:	c3                   	ret

```

```c
// WideString::rfind @ 0x8ada670

/* DWARF original prototype: int32 rfind(WideString * this, wchar pat) */

int32 __thiscall WideString::rfind(WideString *this,wchar pat)

{
  int32 iVar1;
  
  iVar1 = length(this);
  iVar1 = rfind(this,iVar1 + -1,pat);
  return iVar1;
}

```

---

## rfind_08ada69c

```asm
// === 08ada69c WideString::rfind  [0x08ada69c-0x8ada71d] ===
 8ada69c:	55                   	push   %ebp
 8ada69d:	89 e5                	mov    %esp,%ebp
 8ada69f:	83 ec 28             	sub    $0x28,%esp
 8ada6a2:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ada6a6:	75 07                	jne    8ada6af <_ZNK10WideString5rfindEiw+0x13>
 8ada6a8:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ada6ad:	eb 6d                	jmp    8ada71c <_ZNK10WideString5rfindEiw+0x80>
 8ada6af:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ada6b3:	78 10                	js     8ada6c5 <_ZNK10WideString5rfindEiw+0x29>
 8ada6b5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada6b8:	89 04 24             	mov    %eax,(%esp)
 8ada6bb:	e8 dc 2b 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ada6c0:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8ada6c3:	7f 07                	jg     8ada6cc <_ZNK10WideString5rfindEiw+0x30>
 8ada6c5:	b8 01 00 00 00       	mov    $0x1,%eax
 8ada6ca:	eb 05                	jmp    8ada6d1 <_ZNK10WideString5rfindEiw+0x35>
 8ada6cc:	b8 00 00 00 00       	mov    $0x0,%eax
 8ada6d1:	84 c0                	test   %al,%al
 8ada6d3:	74 07                	je     8ada6dc <_ZNK10WideString5rfindEiw+0x40>
 8ada6d5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ada6da:	eb 40                	jmp    8ada71c <_ZNK10WideString5rfindEiw+0x80>
 8ada6dc:	8b 45 08             	mov    0x8(%ebp),%eax
 8ada6df:	89 04 24             	mov    %eax,(%esp)
 8ada6e2:	e8 d9 87 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ada6e7:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ada6ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ada6ed:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ada6f0:	eb 19                	jmp    8ada70b <_ZNK10WideString5rfindEiw+0x6f>
 8ada6f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada6f5:	c1 e0 02             	shl    $0x2,%eax
 8ada6f8:	03 45 f0             	add    -0x10(%ebp),%eax
 8ada6fb:	8b 00                	mov    (%eax),%eax
 8ada6fd:	3b 45 10             	cmp    0x10(%ebp),%eax
 8ada700:	75 05                	jne    8ada707 <_ZNK10WideString5rfindEiw+0x6b>
 8ada702:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada705:	eb 15                	jmp    8ada71c <_ZNK10WideString5rfindEiw+0x80>
 8ada707:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 8ada70b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ada70e:	f7 d0                	not    %eax
 8ada710:	c1 e8 1f             	shr    $0x1f,%eax
 8ada713:	84 c0                	test   %al,%al
 8ada715:	75 db                	jne    8ada6f2 <_ZNK10WideString5rfindEiw+0x56>
 8ada717:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ada71c:	c9                   	leave
 8ada71d:	c3                   	ret

```

```c
// WideString::rfind @ 0x8ada69c

/* DWARF original prototype: int32 rfind(WideString * this, int32 pos, wchar pat) */

int32 __thiscall WideString::rfind(WideString *this,int32 pos,wchar pat)

{
  bool bVar1;
  int32 iVar2;
  wchar *pwVar3;
  int32 local_10;
  
                    /* Unresolved local var: wchar * strBuf@[???] */
  if (pat != 0) {
    if ((pos < 0) || (iVar2 = length(this), iVar2 <= pos)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pwVar3 = c_str(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; -1 < local_10; local_10 = local_10 + -1) {
        if (pwVar3[local_10] == pat) {
          return local_10;
        }
      }
    }
  }
  return -1;
}

```

---

## setAt

```asm
// === 08ad9cf8 WideString::setAt  [0x08ad9cf8-0x8ad9dc5] ===
 8ad9cf8:	55                   	push   %ebp
 8ad9cf9:	89 e5                	mov    %esp,%ebp
 8ad9cfb:	57                   	push   %edi
 8ad9cfc:	56                   	push   %esi
 8ad9cfd:	53                   	push   %ebx
 8ad9cfe:	83 ec 2c             	sub    $0x2c,%esp
 8ad9d01:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad9d04:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9d07:	8b 00                	mov    (%eax),%eax
 8ad9d09:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad9d0c:	c1 e2 02             	shl    $0x2,%edx
 8ad9d0f:	01 d0                	add    %edx,%eax
 8ad9d11:	8b 00                	mov    (%eax),%eax
 8ad9d13:	3b 45 14             	cmp    0x14(%ebp),%eax
 8ad9d16:	75 16                	jne    8ad9d2e <_ZN10WideString5setAtEiw+0x36>
 8ad9d18:	89 d8                	mov    %ebx,%eax
 8ad9d1a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad9d1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9d21:	89 04 24             	mov    %eax,(%esp)
 8ad9d24:	e8 f1 fc ff ff       	call   8ad9a1a <_ZN10WideStringC1ERKS_>
 8ad9d29:	e9 89 00 00 00       	jmp    8ad9db7 <_ZN10WideString5setAtEiw+0xbf>
 8ad9d2e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9d31:	89 04 24             	mov    %eax,(%esp)
 8ad9d34:	e8 db 04 00 00       	call   8ada214 <_ZNK10WideString7getDataEv>
 8ad9d39:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ad9d3c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad9d3f:	89 04 24             	mov    %eax,(%esp)
 8ad9d42:	e8 35 fc ff ff       	call   8ad997c <_ZNK14WideStringData9getLengthEv>
 8ad9d47:	89 04 24             	mov    %eax,(%esp)
 8ad9d4a:	e8 4b fc ff ff       	call   8ad999a <_ZN14WideStringData6createEi>
 8ad9d4f:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad9d52:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad9d55:	89 04 24             	mov    %eax,(%esp)
 8ad9d58:	e8 1f fc ff ff       	call   8ad997c <_ZNK14WideStringData9getLengthEv>
 8ad9d5d:	83 c0 01             	add    $0x1,%eax
 8ad9d60:	c1 e0 02             	shl    $0x2,%eax
 8ad9d63:	89 c7                	mov    %eax,%edi
 8ad9d65:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad9d68:	89 04 24             	mov    %eax,(%esp)
 8ad9d6b:	e8 1e fc ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8ad9d70:	89 c6                	mov    %eax,%esi
 8ad9d72:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad9d75:	89 04 24             	mov    %eax,(%esp)
 8ad9d78:	e8 11 fc ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8ad9d7d:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8ad9d81:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad9d85:	89 04 24             	mov    %eax,(%esp)
 8ad9d88:	e8 13 3b 5a ff       	call   807d8a0 <memcpy@plt>
 8ad9d8d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad9d90:	89 04 24             	mov    %eax,(%esp)
 8ad9d93:	e8 f6 fb ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8ad9d98:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad9d9b:	c1 e2 02             	shl    $0x2,%edx
 8ad9d9e:	8d 14 10             	lea    (%eax,%edx,1),%edx
 8ad9da1:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad9da4:	89 02                	mov    %eax,(%edx)
 8ad9da6:	89 d8                	mov    %ebx,%eax
 8ad9da8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ad9dab:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9daf:	89 04 24             	mov    %eax,(%esp)
 8ad9db2:	e8 43 fe ff ff       	call   8ad9bfa <_ZN10WideStringC1EP14WideStringData>
 8ad9db7:	89 d8                	mov    %ebx,%eax
 8ad9db9:	89 d8                	mov    %ebx,%eax
 8ad9dbb:	83 c4 2c             	add    $0x2c,%esp
 8ad9dbe:	5b                   	pop    %ebx
 8ad9dbf:	5e                   	pop    %esi
 8ad9dc0:	5f                   	pop    %edi
 8ad9dc1:	5d                   	pop    %ebp
 8ad9dc2:	c2 04 00             	ret    $0x4
 8ad9dc5:	90                   	nop

```

```c
// WideString::setAt @ 0x8ad9cf8

/* DWARF original prototype: WideString setAt(WideString * this, int32 idx, wchar ch) */

WideString __thiscall WideString::setAt(WideString *this,int32 idx,wchar ch)

{
  WideStringData *this_00;
  int32 iVar1;
  WideStringData *this_01;
  wchar *pwVar2;
  wchar *__dest;
  int in_stack_00000010;
  
                    /* Unresolved local var: WideStringData * thisData@[???]
                       Unresolved local var: WideStringData * newData@[???] */
  if (*(int *)(*(int *)idx + ch * 4) == in_stack_00000010) {
    WideString(this,(WideString *)idx);
  }
  else {
    this_00 = getData((WideString *)idx);
    iVar1 = WideStringData::getLength(this_00);
    this_01 = WideStringData::create(iVar1);
    iVar1 = WideStringData::getLength(this_00);
    pwVar2 = WideStringData::getBuffer(this_00);
    __dest = WideStringData::getBuffer(this_01);
    memcpy(__dest,pwVar2,(iVar1 + 1) * 4);
    pwVar2 = WideStringData::getBuffer(this_01);
    pwVar2[ch] = in_stack_00000010;
    WideString(this,this_01);
  }
  return (WideString)(wchar *)this;
}

```

---

## startsWith

```asm
// === 08ad9dc6 WideString::startsWith  [0x08ad9dc6-0x8ad9e57] ===
 8ad9dc6:	55                   	push   %ebp
 8ad9dc7:	89 e5                	mov    %esp,%ebp
 8ad9dc9:	53                   	push   %ebx
 8ad9dca:	83 ec 34             	sub    $0x34,%esp
 8ad9dcd:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad9dd0:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8ad9dd3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9dd6:	89 04 24             	mov    %eax,(%esp)
 8ad9dd9:	e8 52 43 5a ff       	call   807e130 <wcslen@plt>
 8ad9dde:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad9de1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9de4:	89 04 24             	mov    %eax,(%esp)
 8ad9de7:	e8 b0 34 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8ad9dec:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8ad9def:	0f 9c c0             	setl   %al
 8ad9df2:	84 c0                	test   %al,%al
 8ad9df4:	74 07                	je     8ad9dfd <_ZNK10WideString10startsWithEPKwb+0x37>
 8ad9df6:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad9dfb:	eb 54                	jmp    8ad9e51 <_ZNK10WideString10startsWithEPKwb+0x8b>
 8ad9dfd:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8ad9e01:	74 28                	je     8ad9e2b <_ZNK10WideString10startsWithEPKwb+0x65>
 8ad9e03:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad9e06:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9e09:	89 04 24             	mov    %eax,(%esp)
 8ad9e0c:	e8 af 90 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ad9e11:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad9e15:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad9e18:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9e1c:	89 04 24             	mov    %eax,(%esp)
 8ad9e1f:	e8 7c 48 5a ff       	call   807e6a0 <wcsncasecmp@plt>
 8ad9e24:	85 c0                	test   %eax,%eax
 8ad9e26:	0f 94 c0             	sete   %al
 8ad9e29:	eb 26                	jmp    8ad9e51 <_ZNK10WideString10startsWithEPKwb+0x8b>
 8ad9e2b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad9e2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9e31:	89 04 24             	mov    %eax,(%esp)
 8ad9e34:	e8 87 90 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8ad9e39:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad9e3d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad9e40:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9e44:	89 04 24             	mov    %eax,(%esp)
 8ad9e47:	e8 44 41 5a ff       	call   807df90 <wcsncmp@plt>
 8ad9e4c:	85 c0                	test   %eax,%eax
 8ad9e4e:	0f 94 c0             	sete   %al
 8ad9e51:	83 c4 34             	add    $0x34,%esp
 8ad9e54:	5b                   	pop    %ebx
 8ad9e55:	5d                   	pop    %ebp
 8ad9e56:	c3                   	ret
 8ad9e57:	90                   	nop

```

```c
// WideString::startsWith @ 0x8ad9dc6

/* DWARF original prototype: bool startsWith(WideString * this, wchar * pat, bool isIgnoreCase) */

bool __thiscall WideString::startsWith(WideString *this,wchar *pat,bool isIgnoreCase)

{
  size_t __n;
  int32 iVar1;
  wchar_t *pwVar2;
  int iVar3;
  bool bVar4;
  
                    /* Unresolved local var: int32 patLength@[???] */
  __n = wcslen(pat);
  iVar1 = length(this);
  if (iVar1 < (int)__n) {
    bVar4 = false;
  }
  else if (isIgnoreCase) {
    pwVar2 = c_str(this);
    iVar3 = wcsncasecmp(pwVar2,pat,__n);
    bVar4 = iVar3 == 0;
  }
  else {
    pwVar2 = c_str(this);
    iVar3 = wcsncmp(pwVar2,pat,__n);
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}

```

---

## tokenize

```asm
// === 08adbd24 WideString::tokenize  [0x08adbd24-0x8adbd55] ===
 8adbd24:	55                   	push   %ebp
 8adbd25:	89 e5                	mov    %esp,%ebp
 8adbd27:	83 ec 28             	sub    $0x28,%esp
 8adbd2a:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8adbd31:	00 
 8adbd32:	c7 44 24 0c 68 2c e3 	movl   $0x8e32c68,0xc(%esp)
 8adbd39:	08 
 8adbd3a:	c7 44 24 08 74 2c e3 	movl   $0x8e32c74,0x8(%esp)
 8adbd41:	08 
 8adbd42:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adbd45:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adbd49:	8b 45 08             	mov    0x8(%ebp),%eax
 8adbd4c:	89 04 24             	mov    %eax,(%esp)
 8adbd4f:	e8 02 00 00 00       	call   8adbd56 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b>
 8adbd54:	c9                   	leave
 8adbd55:	c3                   	ret

```

```c
// WideString::tokenize @ 0x8adbd24

int32 WideString::tokenize
                (WideString *str,vector<WideString,_std::allocator<WideString>_> *tokenVector)

{
  int32 iVar1;
  
  iVar1 = tokenize(str,tokenVector,(wchar *)&DAT_08e32c74,(wchar *)&DAT_08e32c68,false);
  return iVar1;
}

```

---

## tokenizeNewLine

```asm
// === 08adc0b0 WideString::tokenizeNewLine  [0x08adc0b0-0x8adc2f3] ===
 8adc0b0:	55                   	push   %ebp
 8adc0b1:	89 e5                	mov    %esp,%ebp
 8adc0b3:	56                   	push   %esi
 8adc0b4:	53                   	push   %ebx
 8adc0b5:	83 ec 40             	sub    $0x40,%esp
 8adc0b8:	8b 45 08             	mov    0x8(%ebp),%eax
 8adc0bb:	89 04 24             	mov    %eax,(%esp)
 8adc0be:	e8 fd 6d fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adc0c3:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8adc0c6:	8b 45 08             	mov    0x8(%ebp),%eax
 8adc0c9:	89 04 24             	mov    %eax,(%esp)
 8adc0cc:	e8 cb 11 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adc0d1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8adc0d4:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8adc0db:	c7 45 e8 ff ff ff ff 	movl   $0xffffffff,-0x18(%ebp)
 8adc0e2:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8adc0e9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8adc0f0:	e9 1d 01 00 00       	jmp    8adc212 <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x162>
 8adc0f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adc0f8:	c1 e0 02             	shl    $0x2,%eax
 8adc0fb:	03 45 dc             	add    -0x24(%ebp),%eax
 8adc0fe:	8b 00                	mov    (%eax),%eax
 8adc100:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8adc103:	83 7d f4 0d          	cmpl   $0xd,-0xc(%ebp)
 8adc107:	0f 85 8a 00 00 00    	jne    8adc197 <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0xe7>
 8adc10d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8adc110:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8adc113:	29 c2                	sub    %eax,%edx
 8adc115:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8adc118:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8adc11c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8adc11f:	89 54 24 08          	mov    %edx,0x8(%esp)
 8adc123:	8b 55 08             	mov    0x8(%ebp),%edx
 8adc126:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc12a:	89 04 24             	mov    %eax,(%esp)
 8adc12d:	e8 cf ee ff ff       	call   8adb001 <_Z3midRK10WideStringii>
 8adc132:	83 ec 04             	sub    $0x4,%esp
 8adc135:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8adc138:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adc13c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adc13f:	89 04 24             	mov    %eax,(%esp)
 8adc142:	e8 cd 12 00 00       	call   8add414 <_ZNSt6vectorI10WideStringSaIS0_EE9push_backEOS0_>
 8adc147:	eb 1b                	jmp    8adc164 <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0xb4>
 8adc149:	89 d3                	mov    %edx,%ebx
 8adc14b:	89 c6                	mov    %eax,%esi
 8adc14d:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8adc150:	89 04 24             	mov    %eax,(%esp)
 8adc153:	e8 bc da ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adc158:	89 f0                	mov    %esi,%eax
 8adc15a:	89 da                	mov    %ebx,%edx
 8adc15c:	89 04 24             	mov    %eax,(%esp)
 8adc15f:	e8 ec 75 00 00       	call   8ae3750 <_Unwind_Resume>
 8adc164:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8adc167:	89 04 24             	mov    %eax,(%esp)
 8adc16a:	e8 a5 da ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adc16f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adc172:	83 c0 01             	add    $0x1,%eax
 8adc175:	c1 e0 02             	shl    $0x2,%eax
 8adc178:	03 45 dc             	add    -0x24(%ebp),%eax
 8adc17b:	8b 00                	mov    (%eax),%eax
 8adc17d:	83 f8 0a             	cmp    $0xa,%eax
 8adc180:	75 04                	jne    8adc186 <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0xd6>
 8adc182:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8adc186:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adc189:	83 c0 01             	add    $0x1,%eax
 8adc18c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8adc18f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adc192:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8adc195:	eb 77                	jmp    8adc20e <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x15e>
 8adc197:	83 7d f4 0a          	cmpl   $0xa,-0xc(%ebp)
 8adc19b:	75 71                	jne    8adc20e <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x15e>
 8adc19d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8adc1a0:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8adc1a3:	29 c2                	sub    %eax,%edx
 8adc1a5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8adc1a8:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8adc1ac:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8adc1af:	89 54 24 08          	mov    %edx,0x8(%esp)
 8adc1b3:	8b 55 08             	mov    0x8(%ebp),%edx
 8adc1b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc1ba:	89 04 24             	mov    %eax,(%esp)
 8adc1bd:	e8 3f ee ff ff       	call   8adb001 <_Z3midRK10WideStringii>
 8adc1c2:	83 ec 04             	sub    $0x4,%esp
 8adc1c5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8adc1c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adc1cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adc1cf:	89 04 24             	mov    %eax,(%esp)
 8adc1d2:	e8 3d 12 00 00       	call   8add414 <_ZNSt6vectorI10WideStringSaIS0_EE9push_backEOS0_>
 8adc1d7:	eb 1b                	jmp    8adc1f4 <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x144>
 8adc1d9:	89 d3                	mov    %edx,%ebx
 8adc1db:	89 c6                	mov    %eax,%esi
 8adc1dd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8adc1e0:	89 04 24             	mov    %eax,(%esp)
 8adc1e3:	e8 2c da ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adc1e8:	89 f0                	mov    %esi,%eax
 8adc1ea:	89 da                	mov    %ebx,%edx
 8adc1ec:	89 04 24             	mov    %eax,(%esp)
 8adc1ef:	e8 5c 75 00 00       	call   8ae3750 <_Unwind_Resume>
 8adc1f4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8adc1f7:	89 04 24             	mov    %eax,(%esp)
 8adc1fa:	e8 15 da ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adc1ff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adc202:	83 c0 01             	add    $0x1,%eax
 8adc205:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8adc208:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adc20b:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8adc20e:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8adc212:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adc215:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8adc218:	0f 9c c0             	setl   %al
 8adc21b:	84 c0                	test   %al,%al
 8adc21d:	0f 85 d2 fe ff ff    	jne    8adc0f5 <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x45>
 8adc223:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8adc226:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8adc229:	74 68                	je     8adc293 <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x1e3>
 8adc22b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8adc22e:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8adc231:	29 c2                	sub    %eax,%edx
 8adc233:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8adc236:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8adc23a:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8adc23d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8adc241:	8b 55 08             	mov    0x8(%ebp),%edx
 8adc244:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc248:	89 04 24             	mov    %eax,(%esp)
 8adc24b:	e8 b1 ed ff ff       	call   8adb001 <_Z3midRK10WideStringii>
 8adc250:	83 ec 04             	sub    $0x4,%esp
 8adc253:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8adc256:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adc25a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adc25d:	89 04 24             	mov    %eax,(%esp)
 8adc260:	e8 af 11 00 00       	call   8add414 <_ZNSt6vectorI10WideStringSaIS0_EE9push_backEOS0_>
 8adc265:	eb 1b                	jmp    8adc282 <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x1d2>
 8adc267:	89 d3                	mov    %edx,%ebx
 8adc269:	89 c6                	mov    %eax,%esi
 8adc26b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8adc26e:	89 04 24             	mov    %eax,(%esp)
 8adc271:	e8 9e d9 ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adc276:	89 f0                	mov    %esi,%eax
 8adc278:	89 da                	mov    %ebx,%edx
 8adc27a:	89 04 24             	mov    %eax,(%esp)
 8adc27d:	e8 ce 74 00 00       	call   8ae3750 <_Unwind_Resume>
 8adc282:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8adc285:	89 04 24             	mov    %eax,(%esp)
 8adc288:	e8 87 d9 ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adc28d:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8adc291:	eb 54                	jmp    8adc2e7 <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x237>
 8adc293:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8adc296:	83 e8 01             	sub    $0x1,%eax
 8adc299:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8adc29c:	75 49                	jne    8adc2e7 <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x237>
 8adc29e:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8adc2a1:	89 04 24             	mov    %eax,(%esp)
 8adc2a4:	e8 55 d7 ff ff       	call   8ad99fe <_ZN10WideStringC1Ev>
 8adc2a9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8adc2ac:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adc2b0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adc2b3:	89 04 24             	mov    %eax,(%esp)
 8adc2b6:	e8 59 11 00 00       	call   8add414 <_ZNSt6vectorI10WideStringSaIS0_EE9push_backEOS0_>
 8adc2bb:	eb 1b                	jmp    8adc2d8 <_ZN10WideString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x228>
 8adc2bd:	89 d3                	mov    %edx,%ebx
 8adc2bf:	89 c6                	mov    %eax,%esi
 8adc2c1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8adc2c4:	89 04 24             	mov    %eax,(%esp)
 8adc2c7:	e8 48 d9 ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adc2cc:	89 f0                	mov    %esi,%eax
 8adc2ce:	89 da                	mov    %ebx,%edx
 8adc2d0:	89 04 24             	mov    %eax,(%esp)
 8adc2d3:	e8 78 74 00 00       	call   8ae3750 <_Unwind_Resume>
 8adc2d8:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8adc2db:	89 04 24             	mov    %eax,(%esp)
 8adc2de:	e8 31 d9 ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adc2e3:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8adc2e7:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adc2ea:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8adc2ed:	83 c4 00             	add    $0x0,%esp
 8adc2f0:	5b                   	pop    %ebx
 8adc2f1:	5e                   	pop    %esi
 8adc2f2:	5d                   	pop    %ebp
 8adc2f3:	c3                   	ret

```

```c
// WideString::tokenizeNewLine @ 0x8adc0b0

int32 WideString::tokenizeNewLine
                (WideString *str,vector<WideString,_std::allocator<WideString>_> *tokenVector)

{
  WideString *pWVar1;
  WideString local_38;
  WideString local_34;
  WideString local_30;
  WideString local_2c;
  wchar *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
                    /* Unresolved local var: wchar * strBuf@[???]
                       Unresolved local var: int32 strLen@[???]
                       Unresolved local var: int32 nextStartIdx@[???]
                       Unresolved local var: int32 lastNewLineIdx@[???]
                       Unresolved local var: int32 tokenCount@[???] */
  local_28 = c_str(str);
  local_24 = length(str);
  local_20 = 0;
  local_1c = -1;
  local_18 = 0;
                    /* Unresolved local var: int32 i@[???] */
  for (local_14 = 0; local_14 < local_24; local_14 = local_14 + 1) {
                    /* Unresolved local var: wchar c@[???] */
    local_10 = local_28[local_14];
    if (local_10 == 0xd) {
      mid(&local_38,str,local_20,local_14 - local_20);
      pWVar1 = &local_38;
                    /* try { // try from 08adc142 to 08adc146 has its CatchHandler @ 08adc149 */
      std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar1);
      ~WideString(&local_38,(int)pWVar1);
      if (local_28[local_14 + 1] == 10) {
        local_14 = local_14 + 1;
      }
      local_20 = local_14 + 1;
      local_1c = local_14;
    }
    else if (local_10 == 10) {
      mid(&local_34,str,local_20,local_14 - local_20);
      pWVar1 = &local_34;
                    /* try { // try from 08adc1d2 to 08adc1d6 has its CatchHandler @ 08adc1d9 */
      std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar1);
      ~WideString(&local_34,(int)pWVar1);
      local_20 = local_14 + 1;
      local_1c = local_14;
    }
  }
  if (local_20 == local_24) {
    if (local_24 + -1 == local_1c) {
      WideString(&local_2c);
      pWVar1 = &local_2c;
                    /* try { // try from 08adc2b6 to 08adc2ba has its CatchHandler @ 08adc2bd */
      std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar1);
      ~WideString(&local_2c,(int)pWVar1);
      local_18 = local_18 + 1;
    }
  }
  else {
    mid(&local_30,str,local_20,local_24 - local_20);
    pWVar1 = &local_30;
                    /* try { // try from 08adc260 to 08adc264 has its CatchHandler @ 08adc267 */
    std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar1);
    ~WideString(&local_30,(int)pWVar1);
    local_18 = local_18 + 1;
  }
  return local_18;
}

```

---

## tokenize_08adbd56

```asm
// === 08adbd56 WideString::tokenize  [0x08adbd56-0x8adc0af] ===
 8adbd56:	55                   	push   %ebp
 8adbd57:	89 e5                	mov    %esp,%ebp
 8adbd59:	56                   	push   %esi
 8adbd5a:	53                   	push   %ebx
 8adbd5b:	83 ec 60             	sub    $0x60,%esp
 8adbd5e:	8b 45 18             	mov    0x18(%ebp),%eax
 8adbd61:	88 45 b4             	mov    %al,-0x4c(%ebp)
 8adbd64:	8b 45 08             	mov    0x8(%ebp),%eax
 8adbd67:	89 04 24             	mov    %eax,(%esp)
 8adbd6a:	e8 51 71 fe ff       	call   8ac2ec0 <_ZNK10WideString5c_strEv>
 8adbd6f:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8adbd72:	8b 45 08             	mov    0x8(%ebp),%eax
 8adbd75:	89 04 24             	mov    %eax,(%esp)
 8adbd78:	e8 1f 15 00 00       	call   8add29c <_ZNK10WideString6lengthEv>
 8adbd7d:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8adbd80:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8adbd87:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8adbd8e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8adbd95:	e9 89 02 00 00       	jmp    8adc023 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x2cd>
 8adbd9a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8adbd9d:	c1 e0 02             	shl    $0x2,%eax
 8adbda0:	03 45 d0             	add    -0x30(%ebp),%eax
 8adbda3:	8b 00                	mov    (%eax),%eax
 8adbda5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8adbda8:	8b 45 10             	mov    0x10(%ebp),%eax
 8adbdab:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8adbdae:	eb 04                	jmp    8adbdb4 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x5e>
 8adbdb0:	83 45 e8 04          	addl   $0x4,-0x18(%ebp)
 8adbdb4:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8adbdb7:	8b 00                	mov    (%eax),%eax
 8adbdb9:	85 c0                	test   %eax,%eax
 8adbdbb:	74 11                	je     8adbdce <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x78>
 8adbdbd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8adbdc0:	8b 00                	mov    (%eax),%eax
 8adbdc2:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8adbdc5:	74 07                	je     8adbdce <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x78>
 8adbdc7:	b8 01 00 00 00       	mov    $0x1,%eax
 8adbdcc:	eb 05                	jmp    8adbdd3 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x7d>
 8adbdce:	b8 00 00 00 00       	mov    $0x0,%eax
 8adbdd3:	84 c0                	test   %al,%al
 8adbdd5:	75 d9                	jne    8adbdb0 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x5a>
 8adbdd7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8adbdda:	8b 00                	mov    (%eax),%eax
 8adbddc:	85 c0                	test   %eax,%eax
 8adbdde:	0f 84 d9 00 00 00    	je     8adbebd <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x167>
 8adbde4:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8adbde7:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8adbdea:	89 d1                	mov    %edx,%ecx
 8adbdec:	29 c1                	sub    %eax,%ecx
 8adbdee:	89 c8                	mov    %ecx,%eax
 8adbdf0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8adbdf3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8adbdf7:	75 55                	jne    8adbe4e <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0xf8>
 8adbdf9:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
 8adbdfd:	0f 84 ac 00 00 00    	je     8adbeaf <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x159>
 8adbe03:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8adbe06:	89 04 24             	mov    %eax,(%esp)
 8adbe09:	e8 f0 db ff ff       	call   8ad99fe <_ZN10WideStringC1Ev>
 8adbe0e:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8adbe11:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adbe15:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adbe18:	89 04 24             	mov    %eax,(%esp)
 8adbe1b:	e8 f4 15 00 00       	call   8add414 <_ZNSt6vectorI10WideStringSaIS0_EE9push_backEOS0_>
 8adbe20:	eb 1b                	jmp    8adbe3d <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0xe7>
 8adbe22:	89 d3                	mov    %edx,%ebx
 8adbe24:	89 c6                	mov    %eax,%esi
 8adbe26:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8adbe29:	89 04 24             	mov    %eax,(%esp)
 8adbe2c:	e8 e3 dd ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adbe31:	89 f0                	mov    %esi,%eax
 8adbe33:	89 da                	mov    %ebx,%edx
 8adbe35:	89 04 24             	mov    %eax,(%esp)
 8adbe38:	e8 13 79 00 00       	call   8ae3750 <_Unwind_Resume>
 8adbe3d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8adbe40:	89 04 24             	mov    %eax,(%esp)
 8adbe43:	e8 cc dd ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adbe48:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8adbe4c:	eb 61                	jmp    8adbeaf <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x159>
 8adbe4e:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8adbe51:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8adbe54:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8adbe58:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8adbe5b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8adbe5f:	8b 55 08             	mov    0x8(%ebp),%edx
 8adbe62:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adbe66:	89 04 24             	mov    %eax,(%esp)
 8adbe69:	e8 93 f1 ff ff       	call   8adb001 <_Z3midRK10WideStringii>
 8adbe6e:	83 ec 04             	sub    $0x4,%esp
 8adbe71:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8adbe74:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adbe78:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adbe7b:	89 04 24             	mov    %eax,(%esp)
 8adbe7e:	e8 91 15 00 00       	call   8add414 <_ZNSt6vectorI10WideStringSaIS0_EE9push_backEOS0_>
 8adbe83:	eb 1b                	jmp    8adbea0 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x14a>
 8adbe85:	89 d3                	mov    %edx,%ebx
 8adbe87:	89 c6                	mov    %eax,%esi
 8adbe89:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8adbe8c:	89 04 24             	mov    %eax,(%esp)
 8adbe8f:	e8 80 dd ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adbe94:	89 f0                	mov    %esi,%eax
 8adbe96:	89 da                	mov    %ebx,%edx
 8adbe98:	89 04 24             	mov    %eax,(%esp)
 8adbe9b:	e8 b0 78 00 00       	call   8ae3750 <_Unwind_Resume>
 8adbea0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8adbea3:	89 04 24             	mov    %eax,(%esp)
 8adbea6:	e8 69 dd ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adbeab:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8adbeaf:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8adbeb2:	83 c0 01             	add    $0x1,%eax
 8adbeb5:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8adbeb8:	e9 62 01 00 00       	jmp    8adc01f <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x2c9>
 8adbebd:	8b 45 14             	mov    0x14(%ebp),%eax
 8adbec0:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8adbec3:	eb 04                	jmp    8adbec9 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x173>
 8adbec5:	83 45 ec 04          	addl   $0x4,-0x14(%ebp)
 8adbec9:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adbecc:	8b 00                	mov    (%eax),%eax
 8adbece:	85 c0                	test   %eax,%eax
 8adbed0:	74 11                	je     8adbee3 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x18d>
 8adbed2:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adbed5:	8b 00                	mov    (%eax),%eax
 8adbed7:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 8adbeda:	74 07                	je     8adbee3 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x18d>
 8adbedc:	b8 01 00 00 00       	mov    $0x1,%eax
 8adbee1:	eb 05                	jmp    8adbee8 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x192>
 8adbee3:	b8 00 00 00 00       	mov    $0x0,%eax
 8adbee8:	84 c0                	test   %al,%al
 8adbeea:	75 d9                	jne    8adbec5 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x16f>
 8adbeec:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adbeef:	8b 00                	mov    (%eax),%eax
 8adbef1:	85 c0                	test   %eax,%eax
 8adbef3:	0f 84 26 01 00 00    	je     8adc01f <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x2c9>
 8adbef9:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8adbefc:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8adbeff:	89 d1                	mov    %edx,%ecx
 8adbf01:	29 c1                	sub    %eax,%ecx
 8adbf03:	89 c8                	mov    %ecx,%eax
 8adbf05:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8adbf08:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8adbf0c:	75 55                	jne    8adbf63 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x20d>
 8adbf0e:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
 8adbf12:	0f 84 ac 00 00 00    	je     8adbfc4 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x26e>
 8adbf18:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8adbf1b:	89 04 24             	mov    %eax,(%esp)
 8adbf1e:	e8 db da ff ff       	call   8ad99fe <_ZN10WideStringC1Ev>
 8adbf23:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8adbf26:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adbf2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adbf2d:	89 04 24             	mov    %eax,(%esp)
 8adbf30:	e8 df 14 00 00       	call   8add414 <_ZNSt6vectorI10WideStringSaIS0_EE9push_backEOS0_>
 8adbf35:	eb 1b                	jmp    8adbf52 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x1fc>
 8adbf37:	89 d3                	mov    %edx,%ebx
 8adbf39:	89 c6                	mov    %eax,%esi
 8adbf3b:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8adbf3e:	89 04 24             	mov    %eax,(%esp)
 8adbf41:	e8 ce dc ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adbf46:	89 f0                	mov    %esi,%eax
 8adbf48:	89 da                	mov    %ebx,%edx
 8adbf4a:	89 04 24             	mov    %eax,(%esp)
 8adbf4d:	e8 fe 77 00 00       	call   8ae3750 <_Unwind_Resume>
 8adbf52:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8adbf55:	89 04 24             	mov    %eax,(%esp)
 8adbf58:	e8 b7 dc ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adbf5d:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8adbf61:	eb 61                	jmp    8adbfc4 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x26e>
 8adbf63:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8adbf66:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8adbf69:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8adbf6d:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8adbf70:	89 54 24 08          	mov    %edx,0x8(%esp)
 8adbf74:	8b 55 08             	mov    0x8(%ebp),%edx
 8adbf77:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adbf7b:	89 04 24             	mov    %eax,(%esp)
 8adbf7e:	e8 7e f0 ff ff       	call   8adb001 <_Z3midRK10WideStringii>
 8adbf83:	83 ec 04             	sub    $0x4,%esp
 8adbf86:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8adbf89:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adbf8d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adbf90:	89 04 24             	mov    %eax,(%esp)
 8adbf93:	e8 7c 14 00 00       	call   8add414 <_ZNSt6vectorI10WideStringSaIS0_EE9push_backEOS0_>
 8adbf98:	eb 1b                	jmp    8adbfb5 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x25f>
 8adbf9a:	89 d3                	mov    %edx,%ebx
 8adbf9c:	89 c6                	mov    %eax,%esi
 8adbf9e:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8adbfa1:	89 04 24             	mov    %eax,(%esp)
 8adbfa4:	e8 6b dc ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adbfa9:	89 f0                	mov    %esi,%eax
 8adbfab:	89 da                	mov    %ebx,%edx
 8adbfad:	89 04 24             	mov    %eax,(%esp)
 8adbfb0:	e8 9b 77 00 00       	call   8ae3750 <_Unwind_Resume>
 8adbfb5:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8adbfb8:	89 04 24             	mov    %eax,(%esp)
 8adbfbb:	e8 54 dc ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adbfc0:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8adbfc4:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8adbfc7:	8b 00                	mov    (%eax),%eax
 8adbfc9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adbfcd:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8adbfd0:	89 04 24             	mov    %eax,(%esp)
 8adbfd3:	e8 e8 db ff ff       	call   8ad9bc0 <_ZN10WideStringC1Ew>
 8adbfd8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8adbfdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adbfdf:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adbfe2:	89 04 24             	mov    %eax,(%esp)
 8adbfe5:	e8 2a 14 00 00       	call   8add414 <_ZNSt6vectorI10WideStringSaIS0_EE9push_backEOS0_>
 8adbfea:	eb 1b                	jmp    8adc007 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x2b1>
 8adbfec:	89 d3                	mov    %edx,%ebx
 8adbfee:	89 c6                	mov    %eax,%esi
 8adbff0:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8adbff3:	89 04 24             	mov    %eax,(%esp)
 8adbff6:	e8 19 dc ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adbffb:	89 f0                	mov    %esi,%eax
 8adbffd:	89 da                	mov    %ebx,%edx
 8adbfff:	89 04 24             	mov    %eax,(%esp)
 8adc002:	e8 49 77 00 00       	call   8ae3750 <_Unwind_Resume>
 8adc007:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8adc00a:	89 04 24             	mov    %eax,(%esp)
 8adc00d:	e8 02 dc ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adc012:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8adc016:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8adc019:	83 c0 01             	add    $0x1,%eax
 8adc01c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8adc01f:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8adc023:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8adc026:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 8adc029:	0f 9c c0             	setl   %al
 8adc02c:	84 c0                	test   %al,%al
 8adc02e:	0f 85 66 fd ff ff    	jne    8adbd9a <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x44>
 8adc034:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8adc037:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 8adc03a:	74 66                	je     8adc0a2 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x34c>
 8adc03c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8adc03f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8adc042:	29 c2                	sub    %eax,%edx
 8adc044:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8adc047:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8adc04b:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8adc04e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8adc052:	8b 55 08             	mov    0x8(%ebp),%edx
 8adc055:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adc059:	89 04 24             	mov    %eax,(%esp)
 8adc05c:	e8 a0 ef ff ff       	call   8adb001 <_Z3midRK10WideStringii>
 8adc061:	83 ec 04             	sub    $0x4,%esp
 8adc064:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8adc067:	89 44 24 04          	mov    %eax,0x4(%esp)
 8adc06b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adc06e:	89 04 24             	mov    %eax,(%esp)
 8adc071:	e8 9e 13 00 00       	call   8add414 <_ZNSt6vectorI10WideStringSaIS0_EE9push_backEOS0_>
 8adc076:	eb 1b                	jmp    8adc093 <_ZN10WideString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKwS7_b+0x33d>
 8adc078:	89 d3                	mov    %edx,%ebx
 8adc07a:	89 c6                	mov    %eax,%esi
 8adc07c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8adc07f:	89 04 24             	mov    %eax,(%esp)
 8adc082:	e8 8d db ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adc087:	89 f0                	mov    %esi,%eax
 8adc089:	89 da                	mov    %ebx,%edx
 8adc08b:	89 04 24             	mov    %eax,(%esp)
 8adc08e:	e8 bd 76 00 00       	call   8ae3750 <_Unwind_Resume>
 8adc093:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8adc096:	89 04 24             	mov    %eax,(%esp)
 8adc099:	e8 76 db ff ff       	call   8ad9c14 <_ZN10WideStringD1Ev>
 8adc09e:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8adc0a2:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8adc0a5:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8adc0a8:	83 c4 00             	add    $0x0,%esp
 8adc0ab:	5b                   	pop    %ebx
 8adc0ac:	5e                   	pop    %esi
 8adc0ad:	5d                   	pop    %ebp
 8adc0ae:	c3                   	ret
 8adc0af:	90                   	nop

```

```c
// WideString::tokenize @ 0x8adbd56

int32 WideString::tokenize
                (WideString *str,vector<WideString,_std::allocator<WideString>_> *tokenVector,
                wchar *dropDelimiters,wchar *returnDelimiters,bool isKeepEmptyToken)

{
  bool bVar1;
  WideString *pWVar2;
  WideString local_4c;
  WideString local_48;
  WideString local_44;
  WideString local_40;
  WideString local_3c;
  WideString local_38;
  wchar *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  
                    /* Unresolved local var: wchar * strBuf@[???]
                       Unresolved local var: int32 strLen@[???]
                       Unresolved local var: int32 nextTokenStartIdx@[???]
                       Unresolved local var: int32 tokenCount@[???] */
  local_34 = c_str(str);
  local_30 = length(str);
  local_2c = 0;
  local_28 = 0;
                    /* Unresolved local var: int32 i@[???] */
  for (local_24 = 0; local_24 < local_30; local_24 = local_24 + 1) {
                    /* Unresolved local var: wchar c@[???]
                       Unresolved local var: wchar * d0@[???]
                       Unresolved local var: wchar * d1@[???] */
    local_20 = local_34[local_24];
    local_1c = dropDelimiters;
    while( true ) {
      if ((*local_1c == 0) || (*local_1c == local_20)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      local_1c = local_1c + 1;
    }
    if (*local_1c == 0) {
      local_18 = returnDelimiters;
      while( true ) {
        if ((*local_18 == 0) || (*local_18 == local_20)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        local_18 = local_18 + 1;
      }
      if (*local_18 != 0) {
                    /* Unresolved local var: int32 newLen@[???] */
        local_10 = local_24 - local_2c;
        if (local_10 == 0) {
          if (isKeepEmptyToken) {
            WideString(&local_44);
            pWVar2 = &local_44;
                    /* try { // try from 08adbf30 to 08adbf34 has its CatchHandler @ 08adbf37 */
            std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar2);
            ~WideString(&local_44,(int)pWVar2);
            local_28 = local_28 + 1;
          }
        }
        else {
          mid(&local_40,str,local_2c,local_10);
          pWVar2 = &local_40;
                    /* try { // try from 08adbf93 to 08adbf97 has its CatchHandler @ 08adbf9a */
          std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar2);
          ~WideString(&local_40,(int)pWVar2);
          local_28 = local_28 + 1;
        }
        WideString(&local_3c,*local_18);
        pWVar2 = &local_3c;
                    /* try { // try from 08adbfe5 to 08adbfe9 has its CatchHandler @ 08adbfec */
        std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar2);
        ~WideString(&local_3c,(int)pWVar2);
        local_28 = local_28 + 1;
        local_2c = local_24 + 1;
      }
    }
    else {
                    /* Unresolved local var: int32 newLen@[???] */
      local_14 = local_24 - local_2c;
      if (local_14 == 0) {
        if (isKeepEmptyToken) {
          WideString(&local_4c);
          pWVar2 = &local_4c;
                    /* try { // try from 08adbe1b to 08adbe1f has its CatchHandler @ 08adbe22 */
          std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar2);
          ~WideString(&local_4c,(int)pWVar2);
          local_28 = local_28 + 1;
        }
      }
      else {
        mid(&local_48,str,local_2c,local_14);
        pWVar2 = &local_48;
                    /* try { // try from 08adbe7e to 08adbe82 has its CatchHandler @ 08adbe85 */
        std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar2);
        ~WideString(&local_48,(int)pWVar2);
        local_28 = local_28 + 1;
      }
      local_2c = local_24 + 1;
    }
  }
  if (local_2c != local_30) {
    mid(&local_38,str,local_2c,local_30 - local_2c);
    pWVar2 = &local_38;
                    /* try { // try from 08adc071 to 08adc075 has its CatchHandler @ 08adc078 */
    std::vector<WideString,_std::allocator<WideString>_>::push_back(tokenVector,pWVar2);
    ~WideString(&local_38,(int)pWVar2);
    local_28 = local_28 + 1;
  }
  return local_28;
}

```

---

## vformat

```asm
// === 08adbc88 WideString::vformat  [0x08adbc88-0x8adbd23] ===
 8adbc88:	55                   	push   %ebp
 8adbc89:	89 e5                	mov    %esp,%ebp
 8adbc8b:	56                   	push   %esi
 8adbc8c:	53                   	push   %ebx
 8adbc8d:	83 ec 20             	sub    $0x20,%esp
 8adbc90:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8adbc93:	8b 45 10             	mov    0x10(%ebp),%eax
 8adbc96:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8adbc9a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8adbc9d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8adbca1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8adbca8:	00 
 8adbca9:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8adbcb0:	e8 4b 23 5a ff       	call   807e000 <vswprintf@plt>
 8adbcb5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8adbcb8:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8adbcbc:	75 0c                	jne    8adbcca <_ZN10WideString7vformatEPKwPc+0x42>
 8adbcbe:	89 d8                	mov    %ebx,%eax
 8adbcc0:	89 04 24             	mov    %eax,(%esp)
 8adbcc3:	e8 36 dd ff ff       	call   8ad99fe <_ZN10WideStringC1Ev>
 8adbcc8:	eb 4c                	jmp    8adbd16 <_ZN10WideString7vformatEPKwPc+0x8e>
 8adbcca:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adbccd:	89 04 24             	mov    %eax,(%esp)
 8adbcd0:	e8 c5 dc ff ff       	call   8ad999a <_ZN14WideStringData6createEi>
 8adbcd5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8adbcd8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8adbcdb:	83 c0 01             	add    $0x1,%eax
 8adbcde:	89 c6                	mov    %eax,%esi
 8adbce0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8adbce3:	89 04 24             	mov    %eax,(%esp)
 8adbce6:	e8 a3 dc ff ff       	call   8ad998e <_ZN14WideStringData9getBufferEv>
 8adbceb:	8b 55 10             	mov    0x10(%ebp),%edx
 8adbcee:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8adbcf2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8adbcf5:	89 54 24 08          	mov    %edx,0x8(%esp)
 8adbcf9:	89 74 24 04          	mov    %esi,0x4(%esp)
 8adbcfd:	89 04 24             	mov    %eax,(%esp)
 8adbd00:	e8 ee 88 ff ff       	call   8ad45f3 <_Z12ss_vswprintfPwjPKwPc>
 8adbd05:	89 d8                	mov    %ebx,%eax
 8adbd07:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8adbd0a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8adbd0e:	89 04 24             	mov    %eax,(%esp)
 8adbd11:	e8 e4 de ff ff       	call   8ad9bfa <_ZN10WideStringC1EP14WideStringData>
 8adbd16:	89 d8                	mov    %ebx,%eax
 8adbd18:	89 d8                	mov    %ebx,%eax
 8adbd1a:	83 c4 20             	add    $0x20,%esp
 8adbd1d:	5b                   	pop    %ebx
 8adbd1e:	5e                   	pop    %esi
 8adbd1f:	5d                   	pop    %ebp
 8adbd20:	c2 04 00             	ret    $0x4
 8adbd23:	90                   	nop

```

```c
// WideString::vformat @ 0x8adbc88

WideString *
WideString::vformat(WideString *__return_storage_ptr__,wchar *formatStr,va_list argList)

{
  int length;
  WideStringData *this;
  wchar_t *buffer;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: WideStringData * newData@[???] */
  length = vswprintf((wchar_t *)0x0,0,formatStr,argList);
  if (length == 0) {
    WideString(__return_storage_ptr__);
  }
  else {
    this = WideStringData::create(length);
    buffer = WideStringData::getBuffer(this);
    ss_vswprintf(buffer,length + 1,formatStr,argList);
    WideString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}

```

---

## ~WideString

```asm
// === 08ad9c14 WideString::~WideString  [0x08ad9c14-0x8ad9c2f] ===
 8ad9c14:	55                   	push   %ebp
 8ad9c15:	89 e5                	mov    %esp,%ebp
 8ad9c17:	83 ec 18             	sub    $0x18,%esp
 8ad9c1a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9c1d:	89 04 24             	mov    %eax,(%esp)
 8ad9c20:	e8 ef 05 00 00       	call   8ada214 <_ZNK10WideString7getDataEv>
 8ad9c25:	89 04 24             	mov    %eax,(%esp)
 8ad9c28:	e8 63 cc ff ff       	call   8ad6890 <_ZN10StringData6decRefEv>
 8ad9c2d:	c9                   	leave
 8ad9c2e:	c3                   	ret
 8ad9c2f:	90                   	nop

```

```c
// WideString::~WideString @ 0x8ad9c14

/* DWARF original prototype: void ~WideString(WideString * this, int __in_chrg) */

void __thiscall WideString::~WideString(WideString *this,int __in_chrg)

{
  StringData *this_00;
  
  this_00 = &getData(this)->super_StringData;
  StringData::decRef(this_00);
  return;
}

```

