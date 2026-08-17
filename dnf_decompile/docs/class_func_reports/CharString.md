# CharString

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 70

---

## CharString

```asm
// === 08ad69aa CharString::CharString  [0x08ad69aa-0x8ad69c5] ===
 8ad69aa:	55                   	push   %ebp
 8ad69ab:	89 e5                	mov    %esp,%ebp
 8ad69ad:	83 ec 18             	sub    $0x18,%esp
 8ad69b0:	a1 94 56 3f 09       	mov    0x93f5694,%eax
 8ad69b5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad69b9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad69bc:	89 04 24             	mov    %eax,(%esp)
 8ad69bf:	e8 98 07 00 00       	call   8ad715c <_ZN10CharString10attachDataEP14CharStringData>
 8ad69c4:	c9                   	leave
 8ad69c5:	c3                   	ret

```

```c
// CharString::CharString @ 0x8ad69aa

/* DWARF original prototype: void CharString(CharString * this) */

void __thiscall CharString::CharString(CharString *this)

{
  attachData(this,s_emptyCharStringData);
  return;
}

```

---

## CharString_08ad69c6

```asm
// === 08ad69c6 CharString::CharString  [0x08ad69c6-0x8ad69ed] ===
 8ad69c6:	55                   	push   %ebp
 8ad69c7:	89 e5                	mov    %esp,%ebp
 8ad69c9:	83 ec 28             	sub    $0x28,%esp
 8ad69cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad69cf:	89 04 24             	mov    %eax,(%esp)
 8ad69d2:	e8 e5 07 00 00       	call   8ad71bc <_ZNK10CharString7getDataEv>
 8ad69d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad69da:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad69dd:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad69e1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad69e4:	89 04 24             	mov    %eax,(%esp)
 8ad69e7:	e8 70 07 00 00       	call   8ad715c <_ZN10CharString10attachDataEP14CharStringData>
 8ad69ec:	c9                   	leave
 8ad69ed:	c3                   	ret

```

```c
// CharString::CharString @ 0x8ad69c6

/* DWARF original prototype: void CharString(CharString * this, CharString * src) */

void __thiscall CharString::CharString(CharString *this,CharString *src)

{
  CharStringData *newData;
  
                    /* Unresolved local var: CharStringData * srcData@[???] */
  newData = getData(src);
  attachData(this,newData);
  return;
}

```

---

## CharString_08ad69ee

```asm
// === 08ad69ee CharString::CharString  [0x08ad69ee-0x8ad6a6b] ===
 8ad69ee:	55                   	push   %ebp
 8ad69ef:	89 e5                	mov    %esp,%ebp
 8ad69f1:	53                   	push   %ebx
 8ad69f2:	83 ec 24             	sub    $0x24,%esp
 8ad69f5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad69f8:	89 04 24             	mov    %eax,(%esp)
 8ad69fb:	e8 b0 79 5a ff       	call   807e3b0 <strlen@plt>
 8ad6a00:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad6a03:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8ad6a07:	75 16                	jne    8ad6a1f <_ZN10CharStringC1EPKc+0x31>
 8ad6a09:	a1 94 56 3f 09       	mov    0x93f5694,%eax
 8ad6a0e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad6a12:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6a15:	89 04 24             	mov    %eax,(%esp)
 8ad6a18:	e8 3f 07 00 00       	call   8ad715c <_ZN10CharString10attachDataEP14CharStringData>
 8ad6a1d:	eb 46                	jmp    8ad6a65 <_ZN10CharStringC1EPKc+0x77>
 8ad6a1f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad6a22:	89 04 24             	mov    %eax,(%esp)
 8ad6a25:	e8 24 ff ff ff       	call   8ad694e <_ZN14CharStringData6createEi>
 8ad6a2a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad6a2d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad6a30:	83 c0 01             	add    $0x1,%eax
 8ad6a33:	89 c3                	mov    %eax,%ebx
 8ad6a35:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6a38:	89 04 24             	mov    %eax,(%esp)
 8ad6a3b:	e8 02 ff ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad6a40:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad6a44:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad6a47:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad6a4b:	89 04 24             	mov    %eax,(%esp)
 8ad6a4e:	e8 4d 6e 5a ff       	call   807d8a0 <memcpy@plt>
 8ad6a53:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6a56:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad6a5a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6a5d:	89 04 24             	mov    %eax,(%esp)
 8ad6a60:	e8 f7 06 00 00       	call   8ad715c <_ZN10CharString10attachDataEP14CharStringData>
 8ad6a65:	83 c4 24             	add    $0x24,%esp
 8ad6a68:	5b                   	pop    %ebx
 8ad6a69:	5d                   	pop    %ebp
 8ad6a6a:	c3                   	ret
 8ad6a6b:	90                   	nop

```

```c
// CharString::CharString @ 0x8ad69ee

/* DWARF original prototype: void CharString(CharString * this, char * src) */

void __thiscall CharString::CharString(CharString *this,char *src)

{
  size_t length;
  CharStringData *this_00;
  char *__dest;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: CharStringData * data@[???] */
  length = strlen(src);
  if (length == 0) {
    attachData(this,s_emptyCharStringData);
  }
  else {
    this_00 = CharStringData::create(length);
    __dest = CharStringData::getBuffer(this_00);
    memcpy(__dest,src,length + 1);
    attachData(this,this_00);
  }
  return;
}

```

---

## CharString_08ad6a6c

```asm
// === 08ad6a6c CharString::CharString  [0x08ad6a6c-0x8ad6ad5] ===
 8ad6a6c:	55                   	push   %ebp
 8ad6a6d:	89 e5                	mov    %esp,%ebp
 8ad6a6f:	53                   	push   %ebx
 8ad6a70:	83 ec 24             	sub    $0x24,%esp
 8ad6a73:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ad6a77:	75 16                	jne    8ad6a8f <_ZN10CharStringC1EPKci+0x23>
 8ad6a79:	a1 94 56 3f 09       	mov    0x93f5694,%eax
 8ad6a7e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad6a82:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6a85:	89 04 24             	mov    %eax,(%esp)
 8ad6a88:	e8 cf 06 00 00       	call   8ad715c <_ZN10CharString10attachDataEP14CharStringData>
 8ad6a8d:	eb 41                	jmp    8ad6ad0 <_ZN10CharStringC1EPKci+0x64>
 8ad6a8f:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad6a92:	89 04 24             	mov    %eax,(%esp)
 8ad6a95:	e8 e4 fe ff ff       	call   8ad697e <_ZN14CharStringData16createTerminatedEi>
 8ad6a9a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad6a9d:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8ad6aa0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6aa3:	89 04 24             	mov    %eax,(%esp)
 8ad6aa6:	e8 97 fe ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad6aab:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad6aaf:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad6ab2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad6ab6:	89 04 24             	mov    %eax,(%esp)
 8ad6ab9:	e8 e2 6d 5a ff       	call   807d8a0 <memcpy@plt>
 8ad6abe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6ac1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad6ac5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6ac8:	89 04 24             	mov    %eax,(%esp)
 8ad6acb:	e8 8c 06 00 00       	call   8ad715c <_ZN10CharString10attachDataEP14CharStringData>
 8ad6ad0:	83 c4 24             	add    $0x24,%esp
 8ad6ad3:	5b                   	pop    %ebx
 8ad6ad4:	5d                   	pop    %ebp
 8ad6ad5:	c3                   	ret

```

```c
// CharString::CharString @ 0x8ad6a6c

/* DWARF original prototype: void CharString(CharString * this, char * src, int32 length) */

void __thiscall CharString::CharString(CharString *this,char *src,int32 length)

{
  CharStringData *this_00;
  char *__dest;
  
                    /* Unresolved local var: CharStringData * data@[???] */
  if (length == 0) {
    attachData(this,s_emptyCharStringData);
  }
  else {
    this_00 = CharStringData::createTerminated(length);
    __dest = CharStringData::getBuffer(this_00);
    memcpy(__dest,src,length);
    attachData(this,this_00);
  }
  return;
}

```

---

## CharString_08ad6ad6

```asm
// === 08ad6ad6 CharString::CharString  [0x08ad6ad6-0x8ad6b5f] ===
 8ad6ad6:	55                   	push   %ebp
 8ad6ad7:	89 e5                	mov    %esp,%ebp
 8ad6ad9:	56                   	push   %esi
 8ad6ada:	53                   	push   %ebx
 8ad6adb:	83 ec 20             	sub    $0x20,%esp
 8ad6ade:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6ae1:	89 04 24             	mov    %eax,(%esp)
 8ad6ae4:	e8 77 fb c2 ff       	call   8706660 <_ZNKSs4sizeEv>
 8ad6ae9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad6aec:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8ad6af0:	75 16                	jne    8ad6b08 <_ZN10CharStringC1ERKSs+0x32>
 8ad6af2:	a1 94 56 3f 09       	mov    0x93f5694,%eax
 8ad6af7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad6afb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6afe:	89 04 24             	mov    %eax,(%esp)
 8ad6b01:	e8 56 06 00 00       	call   8ad715c <_ZN10CharString10attachDataEP14CharStringData>
 8ad6b06:	eb 50                	jmp    8ad6b58 <_ZN10CharStringC1ERKSs+0x82>
 8ad6b08:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad6b0b:	89 04 24             	mov    %eax,(%esp)
 8ad6b0e:	e8 3b fe ff ff       	call   8ad694e <_ZN14CharStringData6createEi>
 8ad6b13:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad6b16:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad6b19:	83 c0 01             	add    $0x1,%eax
 8ad6b1c:	89 c6                	mov    %eax,%esi
 8ad6b1e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6b21:	89 04 24             	mov    %eax,(%esp)
 8ad6b24:	e8 c7 f9 c2 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ad6b29:	89 c3                	mov    %eax,%ebx
 8ad6b2b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6b2e:	89 04 24             	mov    %eax,(%esp)
 8ad6b31:	e8 0c fe ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad6b36:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ad6b3a:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ad6b3e:	89 04 24             	mov    %eax,(%esp)
 8ad6b41:	e8 5a 6d 5a ff       	call   807d8a0 <memcpy@plt>
 8ad6b46:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6b49:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad6b4d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6b50:	89 04 24             	mov    %eax,(%esp)
 8ad6b53:	e8 04 06 00 00       	call   8ad715c <_ZN10CharString10attachDataEP14CharStringData>
 8ad6b58:	83 c4 20             	add    $0x20,%esp
 8ad6b5b:	5b                   	pop    %ebx
 8ad6b5c:	5e                   	pop    %esi
 8ad6b5d:	5d                   	pop    %ebp
 8ad6b5e:	c3                   	ret
 8ad6b5f:	90                   	nop

```

```c
// CharString::CharString @ 0x8ad6ad6

/* DWARF original prototype: void CharString(CharString * this, string * src) */

void __thiscall CharString::CharString(CharString *this,string *src)

{
  int length;
  CharStringData *this_00;
  void *__src;
  char *__dest;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: CharStringData * data@[???] */
  length = std::string::size((string *)src);
  if (length == 0) {
    attachData(this,s_emptyCharStringData);
  }
  else {
    this_00 = CharStringData::create(length);
    __src = (void *)std::string::c_str((string *)src);
    __dest = CharStringData::getBuffer(this_00);
    memcpy(__dest,__src,length + 1);
    attachData(this,this_00);
  }
  return;
}

```

---

## CharString_08ad6b60

```asm
// === 08ad6b60 CharString::CharString  [0x08ad6b60-0x8ad6b9f] ===
 8ad6b60:	55                   	push   %ebp
 8ad6b61:	89 e5                	mov    %esp,%ebp
 8ad6b63:	83 ec 38             	sub    $0x38,%esp
 8ad6b66:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6b69:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8ad6b6c:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8ad6b73:	e8 06 fe ff ff       	call   8ad697e <_ZN14CharStringData16createTerminatedEi>
 8ad6b78:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad6b7b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6b7e:	89 04 24             	mov    %eax,(%esp)
 8ad6b81:	e8 bc fd ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad6b86:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 8ad6b8a:	88 10                	mov    %dl,(%eax)
 8ad6b8c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6b8f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad6b93:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6b96:	89 04 24             	mov    %eax,(%esp)
 8ad6b99:	e8 be 05 00 00       	call   8ad715c <_ZN10CharString10attachDataEP14CharStringData>
 8ad6b9e:	c9                   	leave
 8ad6b9f:	c3                   	ret

```

```c
// CharString::CharString @ 0x8ad6b60

/* DWARF original prototype: void CharString(CharString * this, char src) */

void __thiscall CharString::CharString(CharString *this,char src)

{
  CharStringData *this_00;
  char *pcVar1;
  
                    /* Unresolved local var: CharStringData * data@[???] */
  this_00 = CharStringData::createTerminated(1);
  pcVar1 = CharStringData::getBuffer(this_00);
  *pcVar1 = src;
  attachData(this,this_00);
  return;
}

```

---

## CharString_08ad6ba0

```asm
// === 08ad6ba0 CharString::CharString  [0x08ad6ba0-0x8ad6bb9] ===
 8ad6ba0:	55                   	push   %ebp
 8ad6ba1:	89 e5                	mov    %esp,%ebp
 8ad6ba3:	83 ec 18             	sub    $0x18,%esp
 8ad6ba6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6ba9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad6bad:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6bb0:	89 04 24             	mov    %eax,(%esp)
 8ad6bb3:	e8 a4 05 00 00       	call   8ad715c <_ZN10CharString10attachDataEP14CharStringData>
 8ad6bb8:	c9                   	leave
 8ad6bb9:	c3                   	ret

```

```c
// CharString::CharString @ 0x8ad6ba0

/* DWARF original prototype: void CharString(CharString * this, CharStringData * newData) */

void __thiscall CharString::CharString(CharString *this,CharStringData *newData)

{
  attachData(this,newData);
  return;
}

```

---

## assign

```asm
// === 08ad6f42 CharString::assign  [0x08ad6f42-0x8ad6f6b] ===
 8ad6f42:	55                   	push   %ebp
 8ad6f43:	89 e5                	mov    %esp,%ebp
 8ad6f45:	83 ec 18             	sub    $0x18,%esp
 8ad6f48:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6f4b:	89 04 24             	mov    %eax,(%esp)
 8ad6f4e:	e8 5d 74 5a ff       	call   807e3b0 <strlen@plt>
 8ad6f53:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad6f57:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6f5a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad6f5e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6f61:	89 04 24             	mov    %eax,(%esp)
 8ad6f64:	e8 03 00 00 00       	call   8ad6f6c <_ZN10CharString6assignEPKci>
 8ad6f69:	c9                   	leave
 8ad6f6a:	c3                   	ret
 8ad6f6b:	90                   	nop

```

```c
// CharString::assign @ 0x8ad6f42

/* DWARF original prototype: void assign(CharString * this, char * src) */

void __thiscall CharString::assign(CharString *this,char *src)

{
  size_t srcLength;
  
  srcLength = strlen(src);
  assign(this,src,srcLength);
  return;
}

```

---

## assign_08ad6f6c

```asm
// === 08ad6f6c CharString::assign  [0x08ad6f6c-0x8ad6fcd] ===
 8ad6f6c:	55                   	push   %ebp
 8ad6f6d:	89 e5                	mov    %esp,%ebp
 8ad6f6f:	53                   	push   %ebx
 8ad6f70:	83 ec 24             	sub    $0x24,%esp
 8ad6f73:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ad6f77:	75 0d                	jne    8ad6f86 <_ZN10CharString6assignEPKci+0x1a>
 8ad6f79:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6f7c:	89 04 24             	mov    %eax,(%esp)
 8ad6f7f:	e8 ea 00 00 00       	call   8ad706e <_ZN10CharString5clearEv>
 8ad6f84:	eb 41                	jmp    8ad6fc7 <_ZN10CharString6assignEPKci+0x5b>
 8ad6f86:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad6f89:	89 04 24             	mov    %eax,(%esp)
 8ad6f8c:	e8 ed f9 ff ff       	call   8ad697e <_ZN14CharStringData16createTerminatedEi>
 8ad6f91:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad6f94:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8ad6f97:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6f9a:	89 04 24             	mov    %eax,(%esp)
 8ad6f9d:	e8 a0 f9 ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad6fa2:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad6fa6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad6fa9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad6fad:	89 04 24             	mov    %eax,(%esp)
 8ad6fb0:	e8 eb 68 5a ff       	call   807d8a0 <memcpy@plt>
 8ad6fb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6fb8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad6fbc:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6fbf:	89 04 24             	mov    %eax,(%esp)
 8ad6fc2:	e8 b9 01 00 00       	call   8ad7180 <_ZN10CharString11replaceDataEP14CharStringData>
 8ad6fc7:	83 c4 24             	add    $0x24,%esp
 8ad6fca:	5b                   	pop    %ebx
 8ad6fcb:	5d                   	pop    %ebp
 8ad6fcc:	c3                   	ret
 8ad6fcd:	90                   	nop

```

```c
// CharString::assign @ 0x8ad6f6c

/* DWARF original prototype: void assign(CharString * this, char * src, int32 srcLength) */

void __thiscall CharString::assign(CharString *this,char *src,int32 srcLength)

{
  CharStringData *this_00;
  char *__dest;
  
                    /* Unresolved local var: CharStringData * newData@[???] */
  if (srcLength == 0) {
    clear(this);
  }
  else {
    this_00 = CharStringData::createTerminated(srcLength);
    __dest = CharStringData::getBuffer(this_00);
    memcpy(__dest,src,srcLength);
    replaceData(this,this_00);
  }
  return;
}

```

---

## assign_08ad6fce

```asm
// === 08ad6fce CharString::assign  [0x08ad6fce-0x8ad7019] ===
 8ad6fce:	55                   	push   %ebp
 8ad6fcf:	89 e5                	mov    %esp,%ebp
 8ad6fd1:	53                   	push   %ebx
 8ad6fd2:	83 ec 14             	sub    $0x14,%esp
 8ad6fd5:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6fd8:	89 04 24             	mov    %eax,(%esp)
 8ad6fdb:	e8 dc 01 00 00       	call   8ad71bc <_ZNK10CharString7getDataEv>
 8ad6fe0:	89 c3                	mov    %eax,%ebx
 8ad6fe2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6fe5:	89 04 24             	mov    %eax,(%esp)
 8ad6fe8:	e8 cf 01 00 00       	call   8ad71bc <_ZNK10CharString7getDataEv>
 8ad6fed:	39 c3                	cmp    %eax,%ebx
 8ad6fef:	0f 94 c0             	sete   %al
 8ad6ff2:	84 c0                	test   %al,%al
 8ad6ff4:	75 1c                	jne    8ad7012 <_ZN10CharString6assignERKS_+0x44>
 8ad6ff6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6ff9:	89 04 24             	mov    %eax,(%esp)
 8ad6ffc:	e8 bb 01 00 00       	call   8ad71bc <_ZNK10CharString7getDataEv>
 8ad7001:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad7005:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7008:	89 04 24             	mov    %eax,(%esp)
 8ad700b:	e8 70 01 00 00       	call   8ad7180 <_ZN10CharString11replaceDataEP14CharStringData>
 8ad7010:	eb 01                	jmp    8ad7013 <_ZN10CharString6assignERKS_+0x45>
 8ad7012:	90                   	nop
 8ad7013:	83 c4 14             	add    $0x14,%esp
 8ad7016:	5b                   	pop    %ebx
 8ad7017:	5d                   	pop    %ebp
 8ad7018:	c3                   	ret
 8ad7019:	90                   	nop

```

```c
// CharString::assign @ 0x8ad6fce

/* DWARF original prototype: void assign(CharString * this, CharString * src) */

void __thiscall CharString::assign(CharString *this,CharString *src)

{
  CharStringData *pCVar1;
  CharStringData *pCVar2;
  
  pCVar1 = getData(this);
  pCVar2 = getData(src);
  if (pCVar1 != pCVar2) {
    pCVar1 = getData(src);
    replaceData(this,pCVar1);
  }
  return;
}

```

---

## assign_08ad701a

```asm
// === 08ad701a CharString::assign  [0x08ad701a-0x8ad706d] ===
 8ad701a:	55                   	push   %ebp
 8ad701b:	89 e5                	mov    %esp,%ebp
 8ad701d:	83 ec 38             	sub    $0x38,%esp
 8ad7020:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad7023:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8ad7026:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8ad702a:	75 0d                	jne    8ad7039 <_ZN10CharString6assignEc+0x1f>
 8ad702c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad702f:	89 04 24             	mov    %eax,(%esp)
 8ad7032:	e8 37 00 00 00       	call   8ad706e <_ZN10CharString5clearEv>
 8ad7037:	eb 32                	jmp    8ad706b <_ZN10CharString6assignEc+0x51>
 8ad7039:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 8ad7040:	e8 39 f9 ff ff       	call   8ad697e <_ZN14CharStringData16createTerminatedEi>
 8ad7045:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad7048:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad704b:	89 04 24             	mov    %eax,(%esp)
 8ad704e:	e8 ef f8 ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad7053:	0f b6 55 e4          	movzbl -0x1c(%ebp),%edx
 8ad7057:	88 10                	mov    %dl,(%eax)
 8ad7059:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad705c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad7060:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7063:	89 04 24             	mov    %eax,(%esp)
 8ad7066:	e8 15 01 00 00       	call   8ad7180 <_ZN10CharString11replaceDataEP14CharStringData>
 8ad706b:	c9                   	leave
 8ad706c:	c3                   	ret
 8ad706d:	90                   	nop

```

```c
// CharString::assign @ 0x8ad701a

/* DWARF original prototype: void assign(CharString * this, char src) */

void __thiscall CharString::assign(CharString *this,char src)

{
  CharStringData *this_00;
  char *pcVar1;
  
                    /* Unresolved local var: CharStringData * newData@[???] */
  if (src == '\0') {
    clear(this);
  }
  else {
    this_00 = CharStringData::createTerminated(1);
    pcVar1 = CharStringData::getBuffer(this_00);
    *pcVar1 = src;
    replaceData(this,this_00);
  }
  return;
}

```

---

## attachData

```asm
// === 08ad715c CharString::attachData  [0x08ad715c-0x8ad717f] ===
 8ad715c:	55                   	push   %ebp
 8ad715d:	89 e5                	mov    %esp,%ebp
 8ad715f:	83 ec 04             	sub    $0x4,%esp
 8ad7162:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad7165:	89 04 24             	mov    %eax,(%esp)
 8ad7168:	e8 17 f7 ff ff       	call   8ad6884 <_ZN10StringData6incRefEv>
 8ad716d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad7170:	89 04 24             	mov    %eax,(%esp)
 8ad7173:	e8 ca f7 ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad7178:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad717b:	89 02                	mov    %eax,(%edx)
 8ad717d:	c9                   	leave
 8ad717e:	c3                   	ret
 8ad717f:	90                   	nop

```

```c
// CharString::attachData @ 0x8ad715c

/* DWARF original prototype: void attachData(CharString * this, CharStringData * newData) */

void __thiscall CharString::attachData(CharString *this,CharStringData *newData)

{
  char *pcVar1;
  
  StringData::incRef(&newData->super_StringData);
  pcVar1 = CharStringData::getBuffer(newData);
  this->buffer_ = pcVar1;
  return;
}

```

---

## back

```asm
// === 08ad6edc CharString::back  [0x08ad6edc-0x8ad6f17] ===
 8ad6edc:	55                   	push   %ebp
 8ad6edd:	89 e5                	mov    %esp,%ebp
 8ad6edf:	53                   	push   %ebx
 8ad6ee0:	83 ec 14             	sub    $0x14,%esp
 8ad6ee3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6ee6:	89 04 24             	mov    %eax,(%esp)
 8ad6ee9:	e8 42 e6 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad6eee:	85 c0                	test   %eax,%eax
 8ad6ef0:	74 1b                	je     8ad6f0d <_ZNK10CharString4backEv+0x31>
 8ad6ef2:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6ef5:	8b 18                	mov    (%eax),%ebx
 8ad6ef7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6efa:	89 04 24             	mov    %eax,(%esp)
 8ad6efd:	e8 2e e6 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad6f02:	83 e8 01             	sub    $0x1,%eax
 8ad6f05:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8ad6f08:	0f b6 00             	movzbl (%eax),%eax
 8ad6f0b:	eb 05                	jmp    8ad6f12 <_ZNK10CharString4backEv+0x36>
 8ad6f0d:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad6f12:	83 c4 14             	add    $0x14,%esp
 8ad6f15:	5b                   	pop    %ebx
 8ad6f16:	5d                   	pop    %ebp
 8ad6f17:	c3                   	ret

```

```c
// CharString::back @ 0x8ad6edc

/* DWARF original prototype: char back(CharString * this) */

char __thiscall CharString::back(CharString *this)

{
  char *pcVar1;
  char cVar2;
  int32 iVar3;
  
  iVar3 = length(this);
  if (iVar3 == 0) {
    cVar2 = '\0';
  }
  else {
    pcVar1 = this->buffer_;
    iVar3 = length(this);
    cVar2 = pcVar1[iVar3 + -1];
  }
  return cVar2;
}

```

---

## begin

```asm
// === 08ad6f18 CharString::begin  [0x08ad6f18-0x8ad6f21] ===
 8ad6f18:	55                   	push   %ebp
 8ad6f19:	89 e5                	mov    %esp,%ebp
 8ad6f1b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6f1e:	8b 00                	mov    (%eax),%eax
 8ad6f20:	5d                   	pop    %ebp
 8ad6f21:	c3                   	ret

```

```c
// CharString::begin @ 0x8ad6f18

/* DWARF original prototype: const_iterator begin(CharString * this) */

const_iterator __thiscall CharString::begin(CharString *this)

{
  return this->buffer_;
}

```

---

## clear

```asm
// === 08ad706e CharString::clear  [0x08ad706e-0x8ad709b] ===
 8ad706e:	55                   	push   %ebp
 8ad706f:	89 e5                	mov    %esp,%ebp
 8ad7071:	83 ec 18             	sub    $0x18,%esp
 8ad7074:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7077:	89 04 24             	mov    %eax,(%esp)
 8ad707a:	e8 05 62 00 00       	call   8add284 <_ZNK10CharString7isEmptyEv>
 8ad707f:	84 c0                	test   %al,%al
 8ad7081:	75 16                	jne    8ad7099 <_ZN10CharString5clearEv+0x2b>
 8ad7083:	a1 94 56 3f 09       	mov    0x93f5694,%eax
 8ad7088:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad708c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad708f:	89 04 24             	mov    %eax,(%esp)
 8ad7092:	e8 e9 00 00 00       	call   8ad7180 <_ZN10CharString11replaceDataEP14CharStringData>
 8ad7097:	eb 01                	jmp    8ad709a <_ZN10CharString5clearEv+0x2c>
 8ad7099:	90                   	nop
 8ad709a:	c9                   	leave
 8ad709b:	c3                   	ret

```

```c
// CharString::clear @ 0x8ad706e

/* DWARF original prototype: void clear(CharString * this) */

void __thiscall CharString::clear(CharString *this)

{
  bool bVar1;
  
  bVar1 = isEmpty(this);
  if (!bVar1) {
    replaceData(this,s_emptyCharStringData);
  }
  return;
}

```

---

## compare

```asm
// === 08ad94ae CharString::compare  [0x08ad94ae-0x8ad94cf] ===
 8ad94ae:	55                   	push   %ebp
 8ad94af:	89 e5                	mov    %esp,%ebp
 8ad94b1:	83 ec 18             	sub    $0x18,%esp
 8ad94b4:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad94b7:	89 04 24             	mov    %eax,(%esp)
 8ad94ba:	e8 3d 6b 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad94bf:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad94c2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad94c6:	89 04 24             	mov    %eax,(%esp)
 8ad94c9:	e8 12 50 5a ff       	call   807e4e0 <strcmp@plt>
 8ad94ce:	c9                   	leave
 8ad94cf:	c3                   	ret

```

```c
// CharString::compare @ 0x8ad94ae

int32 CharString::compare(CharString *src1,char *src2)

{
  char *__s1;
  int iVar1;
  
  __s1 = c_str(src1);
  iVar1 = strcmp(__s1,src2);
  return iVar1;
}

```

---

## compareNoCase

```asm
// === 08ad9524 CharString::compareNoCase  [0x08ad9524-0x8ad9545] ===
 8ad9524:	55                   	push   %ebp
 8ad9525:	89 e5                	mov    %esp,%ebp
 8ad9527:	83 ec 18             	sub    $0x18,%esp
 8ad952a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad952d:	89 04 24             	mov    %eax,(%esp)
 8ad9530:	e8 c7 6a 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad9535:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad9538:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad953c:	89 04 24             	mov    %eax,(%esp)
 8ad953f:	e8 0c 49 5a ff       	call   807de50 <strcasecmp@plt>
 8ad9544:	c9                   	leave
 8ad9545:	c3                   	ret

```

```c
// CharString::compareNoCase @ 0x8ad9524

int32 CharString::compareNoCase(CharString *src1,char *src2)

{
  char *__s1;
  int iVar1;
  
  __s1 = c_str(src1);
  iVar1 = strcasecmp(__s1,src2);
  return iVar1;
}

```

---

## compareNoCase_08ad9546

```asm
// === 08ad9546 CharString::compareNoCase  [0x08ad9546-0x8ad9577] ===
 8ad9546:	55                   	push   %ebp
 8ad9547:	89 e5                	mov    %esp,%ebp
 8ad9549:	53                   	push   %ebx
 8ad954a:	83 ec 14             	sub    $0x14,%esp
 8ad954d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9550:	89 04 24             	mov    %eax,(%esp)
 8ad9553:	e8 a4 6a 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad9558:	89 c3                	mov    %eax,%ebx
 8ad955a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad955d:	89 04 24             	mov    %eax,(%esp)
 8ad9560:	e8 97 6a 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad9565:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ad9569:	89 04 24             	mov    %eax,(%esp)
 8ad956c:	e8 df 48 5a ff       	call   807de50 <strcasecmp@plt>
 8ad9571:	83 c4 14             	add    $0x14,%esp
 8ad9574:	5b                   	pop    %ebx
 8ad9575:	5d                   	pop    %ebp
 8ad9576:	c3                   	ret
 8ad9577:	90                   	nop

```

```c
// CharString::compareNoCase @ 0x8ad9546

int32 CharString::compareNoCase(CharString *src1,CharString *src2)

{
  char *__s2;
  char *__s1;
  int iVar1;
  
  __s2 = c_str(src2);
  __s1 = c_str(src1);
  iVar1 = strcasecmp(__s1,__s2);
  return iVar1;
}

```

---

## compareNoCase_08ad9578

```asm
// === 08ad9578 CharString::compareNoCase  [0x08ad9578-0x8ad9599] ===
 8ad9578:	55                   	push   %ebp
 8ad9579:	89 e5                	mov    %esp,%ebp
 8ad957b:	83 ec 18             	sub    $0x18,%esp
 8ad957e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9581:	89 04 24             	mov    %eax,(%esp)
 8ad9584:	e8 73 6a 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad9589:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad958d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad9590:	89 04 24             	mov    %eax,(%esp)
 8ad9593:	e8 b8 48 5a ff       	call   807de50 <strcasecmp@plt>
 8ad9598:	c9                   	leave
 8ad9599:	c3                   	ret

```

```c
// CharString::compareNoCase @ 0x8ad9578

int32 CharString::compareNoCase(char *src1,CharString *src2)

{
  char *__s2;
  int iVar1;
  
  __s2 = c_str(src2);
  iVar1 = strcasecmp(src1,__s2);
  return iVar1;
}

```

---

## compare_08ad94d0

```asm
// === 08ad94d0 CharString::compare  [0x08ad94d0-0x8ad9501] ===
 8ad94d0:	55                   	push   %ebp
 8ad94d1:	89 e5                	mov    %esp,%ebp
 8ad94d3:	53                   	push   %ebx
 8ad94d4:	83 ec 14             	sub    $0x14,%esp
 8ad94d7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad94da:	89 04 24             	mov    %eax,(%esp)
 8ad94dd:	e8 1a 6b 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad94e2:	89 c3                	mov    %eax,%ebx
 8ad94e4:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad94e7:	89 04 24             	mov    %eax,(%esp)
 8ad94ea:	e8 0d 6b 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad94ef:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ad94f3:	89 04 24             	mov    %eax,(%esp)
 8ad94f6:	e8 e5 4f 5a ff       	call   807e4e0 <strcmp@plt>
 8ad94fb:	83 c4 14             	add    $0x14,%esp
 8ad94fe:	5b                   	pop    %ebx
 8ad94ff:	5d                   	pop    %ebp
 8ad9500:	c3                   	ret
 8ad9501:	90                   	nop

```

```c
// CharString::compare @ 0x8ad94d0

int32 CharString::compare(CharString *src1,CharString *src2)

{
  char *__s2;
  char *__s1;
  int iVar1;
  
  __s2 = c_str(src2);
  __s1 = c_str(src1);
  iVar1 = strcmp(__s1,__s2);
  return iVar1;
}

```

---

## compare_08ad9502

```asm
// === 08ad9502 CharString::compare  [0x08ad9502-0x8ad9523] ===
 8ad9502:	55                   	push   %ebp
 8ad9503:	89 e5                	mov    %esp,%ebp
 8ad9505:	83 ec 18             	sub    $0x18,%esp
 8ad9508:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad950b:	89 04 24             	mov    %eax,(%esp)
 8ad950e:	e8 e9 6a 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad9513:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9517:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad951a:	89 04 24             	mov    %eax,(%esp)
 8ad951d:	e8 be 4f 5a ff       	call   807e4e0 <strcmp@plt>
 8ad9522:	c9                   	leave
 8ad9523:	c3                   	ret

```

```c
// CharString::compare @ 0x8ad9502

int32 CharString::compare(char *src1,CharString *src2)

{
  char *__s2;
  int iVar1;
  
  __s2 = c_str(src2);
  iVar1 = strcmp(src1,__s2);
  return iVar1;
}

```

---

## concat

```asm
// === 08ad8510 CharString::concat  [0x08ad8510-0x8ad8567] ===
 8ad8510:	55                   	push   %ebp
 8ad8511:	89 e5                	mov    %esp,%ebp
 8ad8513:	57                   	push   %edi
 8ad8514:	56                   	push   %esi
 8ad8515:	53                   	push   %ebx
 8ad8516:	83 ec 2c             	sub    $0x2c,%esp
 8ad8519:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad851c:	89 de                	mov    %ebx,%esi
 8ad851e:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad8521:	89 04 24             	mov    %eax,(%esp)
 8ad8524:	e8 87 5e 5a ff       	call   807e3b0 <strlen@plt>
 8ad8529:	89 c7                	mov    %eax,%edi
 8ad852b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad852e:	89 04 24             	mov    %eax,(%esp)
 8ad8531:	e8 7a 5e 5a ff       	call   807e3b0 <strlen@plt>
 8ad8536:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8ad853a:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad853d:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad8541:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad8545:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8548:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad854c:	89 34 24             	mov    %esi,(%esp)
 8ad854f:	e8 14 00 00 00       	call   8ad8568 <_ZN10CharString6concatEPKciS1_i>
 8ad8554:	83 ec 04             	sub    $0x4,%esp
 8ad8557:	89 d8                	mov    %ebx,%eax
 8ad8559:	89 d8                	mov    %ebx,%eax
 8ad855b:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8ad855e:	83 c4 00             	add    $0x0,%esp
 8ad8561:	5b                   	pop    %ebx
 8ad8562:	5e                   	pop    %esi
 8ad8563:	5f                   	pop    %edi
 8ad8564:	5d                   	pop    %ebp
 8ad8565:	c2 04 00             	ret    $0x4

```

```c
// CharString::concat @ 0x8ad8510

CharString * CharString::concat(CharString *__return_storage_ptr__,char *src1,char *src2)

{
  size_t len2;
  size_t len1;
  
  len2 = strlen(src2);
  len1 = strlen(src1);
  concat(__return_storage_ptr__,src1,len1,src2,len2);
  return __return_storage_ptr__;
}

```

---

## concat_08ad8568

```asm
// === 08ad8568 CharString::concat  [0x08ad8568-0x8ad8605] ===
 8ad8568:	55                   	push   %ebp
 8ad8569:	89 e5                	mov    %esp,%ebp
 8ad856b:	56                   	push   %esi
 8ad856c:	53                   	push   %ebx
 8ad856d:	83 ec 20             	sub    $0x20,%esp
 8ad8570:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad8573:	8b 45 18             	mov    0x18(%ebp),%eax
 8ad8576:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad8579:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8ad857c:	85 c0                	test   %eax,%eax
 8ad857e:	75 0c                	jne    8ad858c <_ZN10CharString6concatEPKciS1_i+0x24>
 8ad8580:	89 d8                	mov    %ebx,%eax
 8ad8582:	89 04 24             	mov    %eax,(%esp)
 8ad8585:	e8 20 e4 ff ff       	call   8ad69aa <_ZN10CharStringC1Ev>
 8ad858a:	eb 6d                	jmp    8ad85f9 <_ZN10CharString6concatEPKciS1_i+0x91>
 8ad858c:	8b 45 18             	mov    0x18(%ebp),%eax
 8ad858f:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad8592:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8ad8595:	89 04 24             	mov    %eax,(%esp)
 8ad8598:	e8 e1 e3 ff ff       	call   8ad697e <_ZN14CharStringData16createTerminatedEi>
 8ad859d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad85a0:	8b 75 10             	mov    0x10(%ebp),%esi
 8ad85a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad85a6:	89 04 24             	mov    %eax,(%esp)
 8ad85a9:	e8 94 e3 ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad85ae:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ad85b2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad85b5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad85b9:	89 04 24             	mov    %eax,(%esp)
 8ad85bc:	e8 df 52 5a ff       	call   807d8a0 <memcpy@plt>
 8ad85c1:	8b 75 18             	mov    0x18(%ebp),%esi
 8ad85c4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad85c7:	89 04 24             	mov    %eax,(%esp)
 8ad85ca:	e8 73 e3 ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad85cf:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad85d2:	8d 14 10             	lea    (%eax,%edx,1),%edx
 8ad85d5:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ad85d9:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad85dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad85e0:	89 14 24             	mov    %edx,(%esp)
 8ad85e3:	e8 b8 52 5a ff       	call   807d8a0 <memcpy@plt>
 8ad85e8:	89 d8                	mov    %ebx,%eax
 8ad85ea:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ad85ed:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad85f1:	89 04 24             	mov    %eax,(%esp)
 8ad85f4:	e8 a7 e5 ff ff       	call   8ad6ba0 <_ZN10CharStringC1EP14CharStringData>
 8ad85f9:	89 d8                	mov    %ebx,%eax
 8ad85fb:	89 d8                	mov    %ebx,%eax
 8ad85fd:	83 c4 20             	add    $0x20,%esp
 8ad8600:	5b                   	pop    %ebx
 8ad8601:	5e                   	pop    %esi
 8ad8602:	5d                   	pop    %ebp
 8ad8603:	c2 04 00             	ret    $0x4

```

```c
// CharString::concat @ 0x8ad8568

CharString *
CharString::concat(CharString *__return_storage_ptr__,char *src1,int32 len1,char *src2,int32 len2)

{
  CharStringData *this;
  char *pcVar1;
  
                    /* Unresolved local var: CharStringData * newData@[???] */
  if (len1 + len2 == 0) {
    CharString(__return_storage_ptr__);
  }
  else {
    this = CharStringData::createTerminated(len1 + len2);
    pcVar1 = CharStringData::getBuffer(this);
    memcpy(pcVar1,src1,len1);
    pcVar1 = CharStringData::getBuffer(this);
    memcpy(pcVar1 + len1,src2,len2);
    CharString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}

```

---

## concat_08ad8606

```asm
// === 08ad8606 CharString::concat  [0x08ad8606-0x8ad864b] ===
 8ad8606:	55                   	push   %ebp
 8ad8607:	89 e5                	mov    %esp,%ebp
 8ad8609:	56                   	push   %esi
 8ad860a:	53                   	push   %ebx
 8ad860b:	83 ec 10             	sub    $0x10,%esp
 8ad860e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad8611:	89 de                	mov    %ebx,%esi
 8ad8613:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad8616:	89 04 24             	mov    %eax,(%esp)
 8ad8619:	e8 92 5d 5a ff       	call   807e3b0 <strlen@plt>
 8ad861e:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad8622:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad8625:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad8629:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad862c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad8630:	89 34 24             	mov    %esi,(%esp)
 8ad8633:	e8 14 00 00 00       	call   8ad864c <_ZN10CharString6concatERKS_PKci>
 8ad8638:	83 ec 04             	sub    $0x4,%esp
 8ad863b:	89 d8                	mov    %ebx,%eax
 8ad863d:	89 d8                	mov    %ebx,%eax
 8ad863f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ad8642:	83 c4 00             	add    $0x0,%esp
 8ad8645:	5b                   	pop    %ebx
 8ad8646:	5e                   	pop    %esi
 8ad8647:	5d                   	pop    %ebp
 8ad8648:	c2 04 00             	ret    $0x4
 8ad864b:	90                   	nop

```

```c
// CharString::concat @ 0x8ad8606

CharString * CharString::concat(CharString *__return_storage_ptr__,CharString *src1,char *src2)

{
  size_t len2;
  
  len2 = strlen(src2);
  concat(__return_storage_ptr__,src1,src2,len2);
  return __return_storage_ptr__;
}

```

---

## concat_08ad864c

```asm
// === 08ad864c CharString::concat  [0x08ad864c-0x8ad86eb] ===
 8ad864c:	55                   	push   %ebp
 8ad864d:	89 e5                	mov    %esp,%ebp
 8ad864f:	57                   	push   %edi
 8ad8650:	56                   	push   %esi
 8ad8651:	53                   	push   %ebx
 8ad8652:	83 ec 2c             	sub    $0x2c,%esp
 8ad8655:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad8658:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad865b:	89 04 24             	mov    %eax,(%esp)
 8ad865e:	e8 cd ce ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad8663:	85 c0                	test   %eax,%eax
 8ad8665:	0f 94 c0             	sete   %al
 8ad8668:	84 c0                	test   %al,%al
 8ad866a:	74 1a                	je     8ad8686 <_ZN10CharString6concatERKS_PKci+0x3a>
 8ad866c:	89 d8                	mov    %ebx,%eax
 8ad866e:	8b 55 14             	mov    0x14(%ebp),%edx
 8ad8671:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad8675:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad8678:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad867c:	89 04 24             	mov    %eax,(%esp)
 8ad867f:	e8 e8 e3 ff ff       	call   8ad6a6c <_ZN10CharStringC1EPKci>
 8ad8684:	eb 54                	jmp    8ad86da <_ZN10CharString6concatERKS_PKci+0x8e>
 8ad8686:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8ad868a:	75 13                	jne    8ad869f <_ZN10CharString6concatERKS_PKci+0x53>
 8ad868c:	89 d8                	mov    %ebx,%eax
 8ad868e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad8691:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad8695:	89 04 24             	mov    %eax,(%esp)
 8ad8698:	e8 29 e3 ff ff       	call   8ad69c6 <_ZN10CharStringC1ERKS_>
 8ad869d:	eb 3b                	jmp    8ad86da <_ZN10CharString6concatERKS_PKci+0x8e>
 8ad869f:	89 df                	mov    %ebx,%edi
 8ad86a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad86a4:	89 04 24             	mov    %eax,(%esp)
 8ad86a7:	e8 84 ce ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad86ac:	89 c6                	mov    %eax,%esi
 8ad86ae:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad86b1:	89 04 24             	mov    %eax,(%esp)
 8ad86b4:	e8 43 79 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad86b9:	8b 55 14             	mov    0x14(%ebp),%edx
 8ad86bc:	89 54 24 10          	mov    %edx,0x10(%esp)
 8ad86c0:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad86c3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad86c7:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ad86cb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad86cf:	89 3c 24             	mov    %edi,(%esp)
 8ad86d2:	e8 91 fe ff ff       	call   8ad8568 <_ZN10CharString6concatEPKciS1_i>
 8ad86d7:	83 ec 04             	sub    $0x4,%esp
 8ad86da:	89 d8                	mov    %ebx,%eax
 8ad86dc:	89 d8                	mov    %ebx,%eax
 8ad86de:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8ad86e1:	83 c4 00             	add    $0x0,%esp
 8ad86e4:	5b                   	pop    %ebx
 8ad86e5:	5e                   	pop    %esi
 8ad86e6:	5f                   	pop    %edi
 8ad86e7:	5d                   	pop    %ebp
 8ad86e8:	c2 04 00             	ret    $0x4
 8ad86eb:	90                   	nop

```

```c
// CharString::concat @ 0x8ad864c

CharString *
CharString::concat(CharString *__return_storage_ptr__,CharString *src1,char *src2,int32 len2)

{
  int32 iVar1;
  char *src1_00;
  
  iVar1 = length(src1);
  if (iVar1 == 0) {
    CharString(__return_storage_ptr__,src2,len2);
  }
  else if (len2 == 0) {
    CharString(__return_storage_ptr__,src1);
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

## concat_08ad86ec

```asm
// === 08ad86ec CharString::concat  [0x08ad86ec-0x8ad87ad] ===
 8ad86ec:	55                   	push   %ebp
 8ad86ed:	89 e5                	mov    %esp,%ebp
 8ad86ef:	57                   	push   %edi
 8ad86f0:	56                   	push   %esi
 8ad86f1:	53                   	push   %ebx
 8ad86f2:	83 ec 3c             	sub    $0x3c,%esp
 8ad86f5:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad86f8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad86fb:	89 04 24             	mov    %eax,(%esp)
 8ad86fe:	e8 2d ce ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad8703:	85 c0                	test   %eax,%eax
 8ad8705:	0f 94 c0             	sete   %al
 8ad8708:	84 c0                	test   %al,%al
 8ad870a:	74 13                	je     8ad871f <_ZN10CharString6concatERKS_S1_+0x33>
 8ad870c:	89 d8                	mov    %ebx,%eax
 8ad870e:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad8711:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad8715:	89 04 24             	mov    %eax,(%esp)
 8ad8718:	e8 a9 e2 ff ff       	call   8ad69c6 <_ZN10CharStringC1ERKS_>
 8ad871d:	eb 7e                	jmp    8ad879d <_ZN10CharString6concatERKS_S1_+0xb1>
 8ad871f:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad8722:	89 04 24             	mov    %eax,(%esp)
 8ad8725:	e8 06 ce ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad872a:	85 c0                	test   %eax,%eax
 8ad872c:	0f 94 c0             	sete   %al
 8ad872f:	84 c0                	test   %al,%al
 8ad8731:	74 13                	je     8ad8746 <_ZN10CharString6concatERKS_S1_+0x5a>
 8ad8733:	89 d8                	mov    %ebx,%eax
 8ad8735:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad8738:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad873c:	89 04 24             	mov    %eax,(%esp)
 8ad873f:	e8 82 e2 ff ff       	call   8ad69c6 <_ZN10CharStringC1ERKS_>
 8ad8744:	eb 57                	jmp    8ad879d <_ZN10CharString6concatERKS_S1_+0xb1>
 8ad8746:	89 5d e0             	mov    %ebx,-0x20(%ebp)
 8ad8749:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad874c:	89 04 24             	mov    %eax,(%esp)
 8ad874f:	e8 dc cd ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad8754:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad8757:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad875a:	89 04 24             	mov    %eax,(%esp)
 8ad875d:	e8 9a 78 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad8762:	89 c7                	mov    %eax,%edi
 8ad8764:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8767:	89 04 24             	mov    %eax,(%esp)
 8ad876a:	e8 c1 cd ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad876f:	89 c6                	mov    %eax,%esi
 8ad8771:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8774:	89 04 24             	mov    %eax,(%esp)
 8ad8777:	e8 80 78 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad877c:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ad877f:	89 54 24 10          	mov    %edx,0x10(%esp)
 8ad8783:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8ad8787:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ad878b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad878f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad8792:	89 04 24             	mov    %eax,(%esp)
 8ad8795:	e8 ce fd ff ff       	call   8ad8568 <_ZN10CharString6concatEPKciS1_i>
 8ad879a:	83 ec 04             	sub    $0x4,%esp
 8ad879d:	89 d8                	mov    %ebx,%eax
 8ad879f:	89 d8                	mov    %ebx,%eax
 8ad87a1:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8ad87a4:	83 c4 00             	add    $0x0,%esp
 8ad87a7:	5b                   	pop    %ebx
 8ad87a8:	5e                   	pop    %esi
 8ad87a9:	5f                   	pop    %edi
 8ad87aa:	5d                   	pop    %ebp
 8ad87ab:	c2 04 00             	ret    $0x4

```

```c
// CharString::concat @ 0x8ad86ec

CharString *
CharString::concat(CharString *__return_storage_ptr__,CharString *src1,CharString *src2)

{
  int32 iVar1;
  char *src2_00;
  int32 len1;
  char *src1_00;
  
  iVar1 = length(src1);
  if (iVar1 == 0) {
    CharString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      CharString(__return_storage_ptr__,src1);
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

## concat_08ad87ae

```asm
// === 08ad87ae CharString::concat  [0x08ad87ae-0x8ad8895] ===
 8ad87ae:	55                   	push   %ebp
 8ad87af:	89 e5                	mov    %esp,%ebp
 8ad87b1:	57                   	push   %edi
 8ad87b2:	56                   	push   %esi
 8ad87b3:	53                   	push   %ebx
 8ad87b4:	83 ec 3c             	sub    $0x3c,%esp
 8ad87b7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad87ba:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad87bd:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8ad87c0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad87c3:	89 04 24             	mov    %eax,(%esp)
 8ad87c6:	e8 65 cd ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad87cb:	85 c0                	test   %eax,%eax
 8ad87cd:	0f 94 c0             	sete   %al
 8ad87d0:	84 c0                	test   %al,%al
 8ad87d2:	74 17                	je     8ad87eb <_ZN10CharString6concatERKS_c+0x3d>
 8ad87d4:	89 d8                	mov    %ebx,%eax
 8ad87d6:	0f be 55 d4          	movsbl -0x2c(%ebp),%edx
 8ad87da:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad87de:	89 04 24             	mov    %eax,(%esp)
 8ad87e1:	e8 7a e3 ff ff       	call   8ad6b60 <_ZN10CharStringC1Ec>
 8ad87e6:	e9 9c 00 00 00       	jmp    8ad8887 <_ZN10CharString6concatERKS_c+0xd9>
 8ad87eb:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 8ad87ef:	75 16                	jne    8ad8807 <_ZN10CharString6concatERKS_c+0x59>
 8ad87f1:	89 d8                	mov    %ebx,%eax
 8ad87f3:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad87f6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad87fa:	89 04 24             	mov    %eax,(%esp)
 8ad87fd:	e8 c4 e1 ff ff       	call   8ad69c6 <_ZN10CharStringC1ERKS_>
 8ad8802:	e9 80 00 00 00       	jmp    8ad8887 <_ZN10CharString6concatERKS_c+0xd9>
 8ad8807:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad880a:	89 04 24             	mov    %eax,(%esp)
 8ad880d:	e8 1e cd ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad8812:	83 c0 01             	add    $0x1,%eax
 8ad8815:	89 04 24             	mov    %eax,(%esp)
 8ad8818:	e8 61 e1 ff ff       	call   8ad697e <_ZN14CharStringData16createTerminatedEi>
 8ad881d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad8820:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8823:	89 04 24             	mov    %eax,(%esp)
 8ad8826:	e8 05 cd ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad882b:	89 c7                	mov    %eax,%edi
 8ad882d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8830:	89 04 24             	mov    %eax,(%esp)
 8ad8833:	e8 c4 77 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad8838:	89 c6                	mov    %eax,%esi
 8ad883a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad883d:	89 04 24             	mov    %eax,(%esp)
 8ad8840:	e8 fd e0 ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad8845:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8ad8849:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad884d:	89 04 24             	mov    %eax,(%esp)
 8ad8850:	e8 4b 50 5a ff       	call   807d8a0 <memcpy@plt>
 8ad8855:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad8858:	89 04 24             	mov    %eax,(%esp)
 8ad885b:	e8 e2 e0 ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad8860:	89 c6                	mov    %eax,%esi
 8ad8862:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8865:	89 04 24             	mov    %eax,(%esp)
 8ad8868:	e8 c3 cc ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad886d:	8d 14 06             	lea    (%esi,%eax,1),%edx
 8ad8870:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 8ad8874:	88 02                	mov    %al,(%edx)
 8ad8876:	89 d8                	mov    %ebx,%eax
 8ad8878:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ad887b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad887f:	89 04 24             	mov    %eax,(%esp)
 8ad8882:	e8 19 e3 ff ff       	call   8ad6ba0 <_ZN10CharStringC1EP14CharStringData>
 8ad8887:	89 d8                	mov    %ebx,%eax
 8ad8889:	89 d8                	mov    %ebx,%eax
 8ad888b:	83 c4 3c             	add    $0x3c,%esp
 8ad888e:	5b                   	pop    %ebx
 8ad888f:	5e                   	pop    %esi
 8ad8890:	5f                   	pop    %edi
 8ad8891:	5d                   	pop    %ebp
 8ad8892:	c2 04 00             	ret    $0x4
 8ad8895:	90                   	nop

```

```c
// CharString::concat @ 0x8ad87ae

CharString * CharString::concat(CharString *__return_storage_ptr__,CharString *src1,char src2)

{
  int32 iVar1;
  CharStringData *this;
  size_t __n;
  char *pcVar2;
  char *__dest;
  
                    /* Unresolved local var: CharStringData * newData@[???] */
  iVar1 = length(src1);
  if (iVar1 == 0) {
    CharString(__return_storage_ptr__,src2);
  }
  else if (src2 == '\0') {
    CharString(__return_storage_ptr__,src1);
  }
  else {
    iVar1 = length(src1);
    this = CharStringData::createTerminated(iVar1 + 1);
    __n = length(src1);
    pcVar2 = c_str(src1);
    __dest = CharStringData::getBuffer(this);
    memcpy(__dest,pcVar2,__n);
    pcVar2 = CharStringData::getBuffer(this);
    iVar1 = length(src1);
    pcVar2[iVar1] = src2;
    CharString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}

```

---

## concat_08ad8896

```asm
// === 08ad8896 CharString::concat  [0x08ad8896-0x8ad88db] ===
 8ad8896:	55                   	push   %ebp
 8ad8897:	89 e5                	mov    %esp,%ebp
 8ad8899:	56                   	push   %esi
 8ad889a:	53                   	push   %ebx
 8ad889b:	83 ec 10             	sub    $0x10,%esp
 8ad889e:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad88a1:	89 de                	mov    %ebx,%esi
 8ad88a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad88a6:	89 04 24             	mov    %eax,(%esp)
 8ad88a9:	e8 02 5b 5a ff       	call   807e3b0 <strlen@plt>
 8ad88ae:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad88b1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad88b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad88b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad88bc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad88c0:	89 34 24             	mov    %esi,(%esp)
 8ad88c3:	e8 14 00 00 00       	call   8ad88dc <_ZN10CharString6concatEPKciRKS_>
 8ad88c8:	83 ec 04             	sub    $0x4,%esp
 8ad88cb:	89 d8                	mov    %ebx,%eax
 8ad88cd:	89 d8                	mov    %ebx,%eax
 8ad88cf:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ad88d2:	83 c4 00             	add    $0x0,%esp
 8ad88d5:	5b                   	pop    %ebx
 8ad88d6:	5e                   	pop    %esi
 8ad88d7:	5d                   	pop    %ebp
 8ad88d8:	c2 04 00             	ret    $0x4
 8ad88db:	90                   	nop

```

```c
// CharString::concat @ 0x8ad8896

CharString * CharString::concat(CharString *__return_storage_ptr__,char *src1,CharString *src2)

{
  size_t len1;
  
  len1 = strlen(src1);
  concat(__return_storage_ptr__,src1,len1,src2);
  return __return_storage_ptr__;
}

```

---

## concat_08ad88dc

```asm
// === 08ad88dc CharString::concat  [0x08ad88dc-0x8ad897b] ===
 8ad88dc:	55                   	push   %ebp
 8ad88dd:	89 e5                	mov    %esp,%ebp
 8ad88df:	57                   	push   %edi
 8ad88e0:	56                   	push   %esi
 8ad88e1:	53                   	push   %ebx
 8ad88e2:	83 ec 2c             	sub    $0x2c,%esp
 8ad88e5:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad88e8:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ad88ec:	75 13                	jne    8ad8901 <_ZN10CharString6concatEPKciRKS_+0x25>
 8ad88ee:	89 d8                	mov    %ebx,%eax
 8ad88f0:	8b 55 14             	mov    0x14(%ebp),%edx
 8ad88f3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad88f7:	89 04 24             	mov    %eax,(%esp)
 8ad88fa:	e8 c7 e0 ff ff       	call   8ad69c6 <_ZN10CharStringC1ERKS_>
 8ad88ff:	eb 69                	jmp    8ad896a <_ZN10CharString6concatEPKciRKS_+0x8e>
 8ad8901:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad8904:	89 04 24             	mov    %eax,(%esp)
 8ad8907:	e8 24 cc ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad890c:	85 c0                	test   %eax,%eax
 8ad890e:	0f 94 c0             	sete   %al
 8ad8911:	84 c0                	test   %al,%al
 8ad8913:	74 1a                	je     8ad892f <_ZN10CharString6concatEPKciRKS_+0x53>
 8ad8915:	89 d8                	mov    %ebx,%eax
 8ad8917:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad891a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad891e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad8921:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad8925:	89 04 24             	mov    %eax,(%esp)
 8ad8928:	e8 3f e1 ff ff       	call   8ad6a6c <_ZN10CharStringC1EPKci>
 8ad892d:	eb 3b                	jmp    8ad896a <_ZN10CharString6concatEPKciRKS_+0x8e>
 8ad892f:	89 df                	mov    %ebx,%edi
 8ad8931:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad8934:	89 04 24             	mov    %eax,(%esp)
 8ad8937:	e8 f4 cb ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad893c:	89 c6                	mov    %eax,%esi
 8ad893e:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad8941:	89 04 24             	mov    %eax,(%esp)
 8ad8944:	e8 b3 76 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad8949:	89 74 24 10          	mov    %esi,0x10(%esp)
 8ad894d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad8951:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad8954:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad8958:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad895b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad895f:	89 3c 24             	mov    %edi,(%esp)
 8ad8962:	e8 01 fc ff ff       	call   8ad8568 <_ZN10CharString6concatEPKciS1_i>
 8ad8967:	83 ec 04             	sub    $0x4,%esp
 8ad896a:	89 d8                	mov    %ebx,%eax
 8ad896c:	89 d8                	mov    %ebx,%eax
 8ad896e:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8ad8971:	83 c4 00             	add    $0x0,%esp
 8ad8974:	5b                   	pop    %ebx
 8ad8975:	5e                   	pop    %esi
 8ad8976:	5f                   	pop    %edi
 8ad8977:	5d                   	pop    %ebp
 8ad8978:	c2 04 00             	ret    $0x4
 8ad897b:	90                   	nop

```

```c
// CharString::concat @ 0x8ad88dc

CharString *
CharString::concat(CharString *__return_storage_ptr__,char *src1,int32 len1,CharString *src2)

{
  int32 iVar1;
  char *src2_00;
  
  if (len1 == 0) {
    CharString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      CharString(__return_storage_ptr__,src1,len1);
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

## concat_08ad897c

```asm
// === 08ad897c CharString::concat  [0x08ad897c-0x8ad8a53] ===
 8ad897c:	55                   	push   %ebp
 8ad897d:	89 e5                	mov    %esp,%ebp
 8ad897f:	57                   	push   %edi
 8ad8980:	56                   	push   %esi
 8ad8981:	53                   	push   %ebx
 8ad8982:	83 ec 3c             	sub    $0x3c,%esp
 8ad8985:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad8988:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad898b:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8ad898e:	80 7d d4 00          	cmpb   $0x0,-0x2c(%ebp)
 8ad8992:	75 16                	jne    8ad89aa <_ZN10CharString6concatEcRKS_+0x2e>
 8ad8994:	89 d8                	mov    %ebx,%eax
 8ad8996:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad8999:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad899d:	89 04 24             	mov    %eax,(%esp)
 8ad89a0:	e8 21 e0 ff ff       	call   8ad69c6 <_ZN10CharStringC1ERKS_>
 8ad89a5:	e9 9b 00 00 00       	jmp    8ad8a45 <_ZN10CharString6concatEcRKS_+0xc9>
 8ad89aa:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad89ad:	89 04 24             	mov    %eax,(%esp)
 8ad89b0:	e8 7b cb ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad89b5:	85 c0                	test   %eax,%eax
 8ad89b7:	0f 94 c0             	sete   %al
 8ad89ba:	84 c0                	test   %al,%al
 8ad89bc:	74 14                	je     8ad89d2 <_ZN10CharString6concatEcRKS_+0x56>
 8ad89be:	89 d8                	mov    %ebx,%eax
 8ad89c0:	0f be 55 d4          	movsbl -0x2c(%ebp),%edx
 8ad89c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad89c8:	89 04 24             	mov    %eax,(%esp)
 8ad89cb:	e8 90 e1 ff ff       	call   8ad6b60 <_ZN10CharStringC1Ec>
 8ad89d0:	eb 73                	jmp    8ad8a45 <_ZN10CharString6concatEcRKS_+0xc9>
 8ad89d2:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad89d5:	89 04 24             	mov    %eax,(%esp)
 8ad89d8:	e8 53 cb ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad89dd:	83 c0 01             	add    $0x1,%eax
 8ad89e0:	89 04 24             	mov    %eax,(%esp)
 8ad89e3:	e8 96 df ff ff       	call   8ad697e <_ZN14CharStringData16createTerminatedEi>
 8ad89e8:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad89eb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad89ee:	89 04 24             	mov    %eax,(%esp)
 8ad89f1:	e8 4c df ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad89f6:	0f b6 55 d4          	movzbl -0x2c(%ebp),%edx
 8ad89fa:	88 10                	mov    %dl,(%eax)
 8ad89fc:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad89ff:	89 04 24             	mov    %eax,(%esp)
 8ad8a02:	e8 29 cb ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad8a07:	89 c7                	mov    %eax,%edi
 8ad8a09:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad8a0c:	89 04 24             	mov    %eax,(%esp)
 8ad8a0f:	e8 e8 75 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad8a14:	89 c6                	mov    %eax,%esi
 8ad8a16:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad8a19:	89 04 24             	mov    %eax,(%esp)
 8ad8a1c:	e8 21 df ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad8a21:	83 c0 01             	add    $0x1,%eax
 8ad8a24:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8ad8a28:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad8a2c:	89 04 24             	mov    %eax,(%esp)
 8ad8a2f:	e8 6c 4e 5a ff       	call   807d8a0 <memcpy@plt>
 8ad8a34:	89 d8                	mov    %ebx,%eax
 8ad8a36:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ad8a39:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad8a3d:	89 04 24             	mov    %eax,(%esp)
 8ad8a40:	e8 5b e1 ff ff       	call   8ad6ba0 <_ZN10CharStringC1EP14CharStringData>
 8ad8a45:	89 d8                	mov    %ebx,%eax
 8ad8a47:	89 d8                	mov    %ebx,%eax
 8ad8a49:	83 c4 3c             	add    $0x3c,%esp
 8ad8a4c:	5b                   	pop    %ebx
 8ad8a4d:	5e                   	pop    %esi
 8ad8a4e:	5f                   	pop    %edi
 8ad8a4f:	5d                   	pop    %ebp
 8ad8a50:	c2 04 00             	ret    $0x4
 8ad8a53:	90                   	nop

```

```c
// CharString::concat @ 0x8ad897c

CharString * CharString::concat(CharString *__return_storage_ptr__,char src1,CharString *src2)

{
  int32 iVar1;
  CharStringData *this;
  char *pcVar2;
  size_t __n;
  char *pcVar3;
  
                    /* Unresolved local var: CharStringData * newData@[???] */
  if (src1 == '\0') {
    CharString(__return_storage_ptr__,src2);
  }
  else {
    iVar1 = length(src2);
    if (iVar1 == 0) {
      CharString(__return_storage_ptr__,src1);
    }
    else {
      iVar1 = length(src2);
      this = CharStringData::createTerminated(iVar1 + 1);
      pcVar2 = CharStringData::getBuffer(this);
      *pcVar2 = src1;
      __n = length(src2);
      pcVar2 = c_str(src2);
      pcVar3 = CharStringData::getBuffer(this);
      memcpy(pcVar3 + 1,pcVar2,__n);
      CharString(__return_storage_ptr__,this);
    }
  }
  return __return_storage_ptr__;
}

```

---

## end

```asm
// === 08ad6f22 CharString::end  [0x08ad6f22-0x8ad6f41] ===
 8ad6f22:	55                   	push   %ebp
 8ad6f23:	89 e5                	mov    %esp,%ebp
 8ad6f25:	53                   	push   %ebx
 8ad6f26:	83 ec 14             	sub    $0x14,%esp
 8ad6f29:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6f2c:	8b 18                	mov    (%eax),%ebx
 8ad6f2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6f31:	89 04 24             	mov    %eax,(%esp)
 8ad6f34:	e8 f7 e5 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad6f39:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 8ad6f3c:	83 c4 14             	add    $0x14,%esp
 8ad6f3f:	5b                   	pop    %ebx
 8ad6f40:	5d                   	pop    %ebp
 8ad6f41:	c3                   	ret

```

```c
// CharString::end @ 0x8ad6f22

/* DWARF original prototype: const_iterator end(CharString * this) */

const_iterator __thiscall CharString::end(CharString *this)

{
  char *pcVar1;
  int32 iVar2;
  
  pcVar1 = this->buffer_;
  iVar2 = length(this);
  return pcVar1 + iVar2;
}

```

---

## endsWith

```asm
// === 08ad6e02 CharString::endsWith  [0x08ad6e02-0x8ad6ecd] ===
 8ad6e02:	55                   	push   %ebp
 8ad6e03:	89 e5                	mov    %esp,%ebp
 8ad6e05:	56                   	push   %esi
 8ad6e06:	53                   	push   %ebx
 8ad6e07:	83 ec 30             	sub    $0x30,%esp
 8ad6e0a:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad6e0d:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8ad6e10:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6e13:	89 04 24             	mov    %eax,(%esp)
 8ad6e16:	e8 95 75 5a ff       	call   807e3b0 <strlen@plt>
 8ad6e1b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad6e1e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6e21:	89 04 24             	mov    %eax,(%esp)
 8ad6e24:	e8 07 e7 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad6e29:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8ad6e2c:	0f 9c c0             	setl   %al
 8ad6e2f:	84 c0                	test   %al,%al
 8ad6e31:	74 0a                	je     8ad6e3d <_ZNK10CharString8endsWithEPKcb+0x3b>
 8ad6e33:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad6e38:	e9 8a 00 00 00       	jmp    8ad6ec7 <_ZNK10CharString8endsWithEPKcb+0xc5>
 8ad6e3d:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8ad6e41:	74 43                	je     8ad6e86 <_ZNK10CharString8endsWithEPKcb+0x84>
 8ad6e43:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad6e46:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6e49:	89 04 24             	mov    %eax,(%esp)
 8ad6e4c:	e8 ab 91 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad6e51:	89 c6                	mov    %eax,%esi
 8ad6e53:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6e56:	89 04 24             	mov    %eax,(%esp)
 8ad6e59:	e8 d2 e6 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad6e5e:	89 c2                	mov    %eax,%edx
 8ad6e60:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6e63:	89 d1                	mov    %edx,%ecx
 8ad6e65:	29 c1                	sub    %eax,%ecx
 8ad6e67:	89 c8                	mov    %ecx,%eax
 8ad6e69:	8d 14 06             	lea    (%esi,%eax,1),%edx
 8ad6e6c:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad6e70:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6e73:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad6e77:	89 14 24             	mov    %edx,(%esp)
 8ad6e7a:	e8 a1 72 5a ff       	call   807e120 <strncasecmp@plt>
 8ad6e7f:	85 c0                	test   %eax,%eax
 8ad6e81:	0f 94 c0             	sete   %al
 8ad6e84:	eb 41                	jmp    8ad6ec7 <_ZNK10CharString8endsWithEPKcb+0xc5>
 8ad6e86:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad6e89:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6e8c:	89 04 24             	mov    %eax,(%esp)
 8ad6e8f:	e8 68 91 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad6e94:	89 c6                	mov    %eax,%esi
 8ad6e96:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6e99:	89 04 24             	mov    %eax,(%esp)
 8ad6e9c:	e8 8f e6 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad6ea1:	89 c2                	mov    %eax,%edx
 8ad6ea3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6ea6:	89 d1                	mov    %edx,%ecx
 8ad6ea8:	29 c1                	sub    %eax,%ecx
 8ad6eaa:	89 c8                	mov    %ecx,%eax
 8ad6eac:	8d 14 06             	lea    (%esi,%eax,1),%edx
 8ad6eaf:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad6eb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6eb6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad6eba:	89 14 24             	mov    %edx,(%esp)
 8ad6ebd:	e8 fe 79 5a ff       	call   807e8c0 <strncmp@plt>
 8ad6ec2:	85 c0                	test   %eax,%eax
 8ad6ec4:	0f 94 c0             	sete   %al
 8ad6ec7:	83 c4 30             	add    $0x30,%esp
 8ad6eca:	5b                   	pop    %ebx
 8ad6ecb:	5e                   	pop    %esi
 8ad6ecc:	5d                   	pop    %ebp
 8ad6ecd:	c3                   	ret

```

```c
// CharString::endsWith @ 0x8ad6e02

/* DWARF original prototype: bool endsWith(CharString * this, char * pat, bool isIgnoreCase) */

bool __thiscall CharString::endsWith(CharString *this,char *pat,bool isIgnoreCase)

{
  size_t __n;
  int32 iVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  
                    /* Unresolved local var: int32 patLength@[???] */
  __n = strlen(pat);
  iVar1 = length(this);
  if (iVar1 < (int)__n) {
    bVar4 = false;
  }
  else if (isIgnoreCase) {
    pcVar2 = c_str(this);
    iVar1 = length(this);
    iVar3 = strncasecmp(pcVar2 + (iVar1 - __n),pat,__n);
    bVar4 = iVar3 == 0;
  }
  else {
    pcVar2 = c_str(this);
    iVar1 = length(this);
    iVar3 = strncmp(pcVar2 + (iVar1 - __n),pat,__n);
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}

```

---

## find

```asm
// === 08ad71ca CharString::find  [0x08ad71ca-0x8ad71fb] ===
 8ad71ca:	55                   	push   %ebp
 8ad71cb:	89 e5                	mov    %esp,%ebp
 8ad71cd:	83 ec 18             	sub    $0x18,%esp
 8ad71d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad71d3:	89 04 24             	mov    %eax,(%esp)
 8ad71d6:	e8 d5 71 5a ff       	call   807e3b0 <strlen@plt>
 8ad71db:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad71df:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad71e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad71e6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ad71ed:	00 
 8ad71ee:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad71f1:	89 04 24             	mov    %eax,(%esp)
 8ad71f4:	e8 5d 00 00 00       	call   8ad7256 <_ZNK10CharString4findEiPKci>
 8ad71f9:	c9                   	leave
 8ad71fa:	c3                   	ret
 8ad71fb:	90                   	nop

```

```c
// CharString::find @ 0x8ad71ca

/* DWARF original prototype: int32 find(CharString * this, char * pat) */

int32 __thiscall CharString::find(CharString *this,char *pat)

{
  size_t patLength;
  int32 iVar1;
  
  patLength = strlen(pat);
  iVar1 = find(this,0,pat,patLength);
  return iVar1;
}

```

---

## find_08ad71fc

```asm
// === 08ad71fc CharString::find  [0x08ad71fc-0x8ad722b] ===
 8ad71fc:	55                   	push   %ebp
 8ad71fd:	89 e5                	mov    %esp,%ebp
 8ad71ff:	83 ec 18             	sub    $0x18,%esp
 8ad7202:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad7205:	89 04 24             	mov    %eax,(%esp)
 8ad7208:	e8 a3 71 5a ff       	call   807e3b0 <strlen@plt>
 8ad720d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad7211:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad7214:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad7218:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad721b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad721f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7222:	89 04 24             	mov    %eax,(%esp)
 8ad7225:	e8 2c 00 00 00       	call   8ad7256 <_ZNK10CharString4findEiPKci>
 8ad722a:	c9                   	leave
 8ad722b:	c3                   	ret

```

```c
// CharString::find @ 0x8ad71fc

/* DWARF original prototype: int32 find(CharString * this, int32 pos, char * pat) */

int32 __thiscall CharString::find(CharString *this,int32 pos,char *pat)

{
  size_t patLength;
  int32 iVar1;
  
  patLength = strlen(pat);
  iVar1 = find(this,pos,pat,patLength);
  return iVar1;
}

```

---

## find_08ad722c

```asm
// === 08ad722c CharString::find  [0x08ad722c-0x8ad7255] ===
 8ad722c:	55                   	push   %ebp
 8ad722d:	89 e5                	mov    %esp,%ebp
 8ad722f:	83 ec 18             	sub    $0x18,%esp
 8ad7232:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad7235:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad7239:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad723c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad7240:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ad7247:	00 
 8ad7248:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad724b:	89 04 24             	mov    %eax,(%esp)
 8ad724e:	e8 03 00 00 00       	call   8ad7256 <_ZNK10CharString4findEiPKci>
 8ad7253:	c9                   	leave
 8ad7254:	c3                   	ret
 8ad7255:	90                   	nop

```

```c
// CharString::find @ 0x8ad722c

/* DWARF original prototype: int32 find(CharString * this, char * pat, int32 patLength) */

int32 __thiscall CharString::find(CharString *this,char *pat,int32 patLength)

{
  int32 iVar1;
  
  iVar1 = find(this,0,pat,patLength);
  return iVar1;
}

```

---

## find_08ad7256

```asm
// === 08ad7256 CharString::find  [0x08ad7256-0x8ad72ff] ===
 8ad7256:	55                   	push   %ebp
 8ad7257:	89 e5                	mov    %esp,%ebp
 8ad7259:	83 ec 28             	sub    $0x28,%esp
 8ad725c:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8ad7260:	75 0a                	jne    8ad726c <_ZNK10CharString4findEiPKci+0x16>
 8ad7262:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad7267:	e9 92 00 00 00       	jmp    8ad72fe <_ZNK10CharString4findEiPKci+0xa8>
 8ad726c:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ad7270:	78 13                	js     8ad7285 <_ZNK10CharString4findEiPKci+0x2f>
 8ad7272:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7275:	89 04 24             	mov    %eax,(%esp)
 8ad7278:	e8 b3 e2 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad727d:	2b 45 0c             	sub    0xc(%ebp),%eax
 8ad7280:	3b 45 14             	cmp    0x14(%ebp),%eax
 8ad7283:	7d 07                	jge    8ad728c <_ZNK10CharString4findEiPKci+0x36>
 8ad7285:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad728a:	eb 05                	jmp    8ad7291 <_ZNK10CharString4findEiPKci+0x3b>
 8ad728c:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad7291:	84 c0                	test   %al,%al
 8ad7293:	74 07                	je     8ad729c <_ZNK10CharString4findEiPKci+0x46>
 8ad7295:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad729a:	eb 62                	jmp    8ad72fe <_ZNK10CharString4findEiPKci+0xa8>
 8ad729c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad729f:	89 04 24             	mov    %eax,(%esp)
 8ad72a2:	e8 55 8d 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad72a7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ad72aa:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad72ad:	89 04 24             	mov    %eax,(%esp)
 8ad72b0:	e8 7b e2 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad72b5:	2b 45 14             	sub    0x14(%ebp),%eax
 8ad72b8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad72bb:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad72be:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad72c1:	eb 29                	jmp    8ad72ec <_ZNK10CharString4findEiPKci+0x96>
 8ad72c3:	8b 55 14             	mov    0x14(%ebp),%edx
 8ad72c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad72c9:	03 45 ec             	add    -0x14(%ebp),%eax
 8ad72cc:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad72d0:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad72d3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad72d7:	89 04 24             	mov    %eax,(%esp)
 8ad72da:	e8 b1 69 5a ff       	call   807dc90 <memcmp@plt>
 8ad72df:	85 c0                	test   %eax,%eax
 8ad72e1:	75 05                	jne    8ad72e8 <_ZNK10CharString4findEiPKci+0x92>
 8ad72e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad72e6:	eb 16                	jmp    8ad72fe <_ZNK10CharString4findEiPKci+0xa8>
 8ad72e8:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8ad72ec:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad72ef:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8ad72f2:	0f 9e c0             	setle  %al
 8ad72f5:	84 c0                	test   %al,%al
 8ad72f7:	75 ca                	jne    8ad72c3 <_ZNK10CharString4findEiPKci+0x6d>
 8ad72f9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad72fe:	c9                   	leave
 8ad72ff:	c3                   	ret

```

```c
// CharString::find @ 0x8ad7256

/* DWARF original prototype: int32 find(CharString * this, int32 pos, char * pat, int32 patLength)
    */

int32 __thiscall CharString::find(CharString *this,int32 pos,char *pat,int32 patLength)

{
  bool bVar1;
  int32 iVar2;
  char *pcVar3;
  int iVar4;
  int32 local_10;
  
                    /* Unresolved local var: char * strBuf@[???]
                       Unresolved local var: int32 endPos@[???] */
  if (patLength != 0) {
    if ((pos < 0) || (iVar2 = length(this), iVar2 - pos < patLength)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pcVar3 = c_str(this);
      iVar2 = length(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; local_10 <= iVar2 - patLength; local_10 = local_10 + 1) {
        iVar4 = memcmp(pcVar3 + local_10,pat,patLength);
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

## find_08ad7300

```asm
// === 08ad7300 CharString::find  [0x08ad7300-0x8ad733f] ===
 8ad7300:	55                   	push   %ebp
 8ad7301:	89 e5                	mov    %esp,%ebp
 8ad7303:	53                   	push   %ebx
 8ad7304:	83 ec 14             	sub    $0x14,%esp
 8ad7307:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad730a:	89 04 24             	mov    %eax,(%esp)
 8ad730d:	e8 1e e2 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad7312:	89 c3                	mov    %eax,%ebx
 8ad7314:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad7317:	89 04 24             	mov    %eax,(%esp)
 8ad731a:	e8 dd 8c 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad731f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8ad7323:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad7327:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ad732e:	00 
 8ad732f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7332:	89 04 24             	mov    %eax,(%esp)
 8ad7335:	e8 1c ff ff ff       	call   8ad7256 <_ZNK10CharString4findEiPKci>
 8ad733a:	83 c4 14             	add    $0x14,%esp
 8ad733d:	5b                   	pop    %ebx
 8ad733e:	5d                   	pop    %ebp
 8ad733f:	c3                   	ret

```

```c
// CharString::find @ 0x8ad7300

/* DWARF original prototype: int32 find(CharString * this, CharString * pat) */

int32 __thiscall CharString::find(CharString *this,CharString *pat)

{
  int32 iVar1;
  char *pat_00;
  
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar1 = find(this,0,pat_00,iVar1);
  return iVar1;
}

```

---

## find_08ad7340

```asm
// === 08ad7340 CharString::find  [0x08ad7340-0x8ad737f] ===
 8ad7340:	55                   	push   %ebp
 8ad7341:	89 e5                	mov    %esp,%ebp
 8ad7343:	53                   	push   %ebx
 8ad7344:	83 ec 14             	sub    $0x14,%esp
 8ad7347:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad734a:	89 04 24             	mov    %eax,(%esp)
 8ad734d:	e8 de e1 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad7352:	89 c3                	mov    %eax,%ebx
 8ad7354:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad7357:	89 04 24             	mov    %eax,(%esp)
 8ad735a:	e8 9d 8c 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad735f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8ad7363:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad7367:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad736a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad736e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7371:	89 04 24             	mov    %eax,(%esp)
 8ad7374:	e8 dd fe ff ff       	call   8ad7256 <_ZNK10CharString4findEiPKci>
 8ad7379:	83 c4 14             	add    $0x14,%esp
 8ad737c:	5b                   	pop    %ebx
 8ad737d:	5d                   	pop    %ebp
 8ad737e:	c3                   	ret
 8ad737f:	90                   	nop

```

```c
// CharString::find @ 0x8ad7340

/* DWARF original prototype: int32 find(CharString * this, int32 pos, CharString * pat) */

int32 __thiscall CharString::find(CharString *this,int32 pos,CharString *pat)

{
  int32 iVar1;
  char *pat_00;
  
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar1 = find(this,pos,pat_00,iVar1);
  return iVar1;
}

```

---

## find_08ad7380

```asm
// === 08ad7380 CharString::find  [0x08ad7380-0x8ad73a9] ===
 8ad7380:	55                   	push   %ebp
 8ad7381:	89 e5                	mov    %esp,%ebp
 8ad7383:	83 ec 28             	sub    $0x28,%esp
 8ad7386:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad7389:	88 45 f4             	mov    %al,-0xc(%ebp)
 8ad738c:	0f be 45 f4          	movsbl -0xc(%ebp),%eax
 8ad7390:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad7394:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ad739b:	00 
 8ad739c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad739f:	89 04 24             	mov    %eax,(%esp)
 8ad73a2:	e8 03 00 00 00       	call   8ad73aa <_ZNK10CharString4findEic>
 8ad73a7:	c9                   	leave
 8ad73a8:	c3                   	ret
 8ad73a9:	90                   	nop

```

```c
// CharString::find @ 0x8ad7380

/* DWARF original prototype: int32 find(CharString * this, char pat) */

int32 __thiscall CharString::find(CharString *this,char pat)

{
  int32 iVar1;
  
  iVar1 = find(this,0,pat);
  return iVar1;
}

```

---

## find_08ad73aa

```asm
// === 08ad73aa CharString::find  [0x08ad73aa-0x8ad7441] ===
 8ad73aa:	55                   	push   %ebp
 8ad73ab:	89 e5                	mov    %esp,%ebp
 8ad73ad:	83 ec 38             	sub    $0x38,%esp
 8ad73b0:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad73b3:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8ad73b6:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8ad73ba:	75 07                	jne    8ad73c3 <_ZNK10CharString4findEic+0x19>
 8ad73bc:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad73c1:	eb 7d                	jmp    8ad7440 <_ZNK10CharString4findEic+0x96>
 8ad73c3:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ad73c7:	78 10                	js     8ad73d9 <_ZNK10CharString4findEic+0x2f>
 8ad73c9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad73cc:	89 04 24             	mov    %eax,(%esp)
 8ad73cf:	e8 5c e1 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad73d4:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8ad73d7:	7f 07                	jg     8ad73e0 <_ZNK10CharString4findEic+0x36>
 8ad73d9:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad73de:	eb 05                	jmp    8ad73e5 <_ZNK10CharString4findEic+0x3b>
 8ad73e0:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad73e5:	84 c0                	test   %al,%al
 8ad73e7:	74 07                	je     8ad73f0 <_ZNK10CharString4findEic+0x46>
 8ad73e9:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad73ee:	eb 50                	jmp    8ad7440 <_ZNK10CharString4findEic+0x96>
 8ad73f0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad73f3:	89 04 24             	mov    %eax,(%esp)
 8ad73f6:	e8 01 8c 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad73fb:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ad73fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7401:	89 04 24             	mov    %eax,(%esp)
 8ad7404:	e8 27 e1 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad7409:	83 e8 01             	sub    $0x1,%eax
 8ad740c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad740f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad7412:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad7415:	eb 17                	jmp    8ad742e <_ZNK10CharString4findEic+0x84>
 8ad7417:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad741a:	03 45 ec             	add    -0x14(%ebp),%eax
 8ad741d:	0f b6 00             	movzbl (%eax),%eax
 8ad7420:	3a 45 e4             	cmp    -0x1c(%ebp),%al
 8ad7423:	75 05                	jne    8ad742a <_ZNK10CharString4findEic+0x80>
 8ad7425:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad7428:	eb 16                	jmp    8ad7440 <_ZNK10CharString4findEic+0x96>
 8ad742a:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8ad742e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad7431:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 8ad7434:	0f 9e c0             	setle  %al
 8ad7437:	84 c0                	test   %al,%al
 8ad7439:	75 dc                	jne    8ad7417 <_ZNK10CharString4findEic+0x6d>
 8ad743b:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad7440:	c9                   	leave
 8ad7441:	c3                   	ret

```

```c
// CharString::find @ 0x8ad73aa

/* DWARF original prototype: int32 find(CharString * this, int32 pos, char pat) */

int32 __thiscall CharString::find(CharString *this,int32 pos,char pat)

{
  bool bVar1;
  int32 iVar2;
  char *pcVar3;
  int32 local_10;
  
                    /* Unresolved local var: char * strBuf@[???]
                       Unresolved local var: int32 endPos@[???] */
  if (pat != '\0') {
    if ((pos < 0) || (iVar2 = length(this), iVar2 <= pos)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pcVar3 = c_str(this);
      iVar2 = length(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; local_10 <= iVar2 + -1; local_10 = local_10 + 1) {
        if (pcVar3[pos] == pat) {
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
// === 08ad8afa CharString::format  [0x08ad8afa-0x8ad8b9d] ===
 8ad8afa:	55                   	push   %ebp
 8ad8afb:	89 e5                	mov    %esp,%ebp
 8ad8afd:	57                   	push   %edi
 8ad8afe:	56                   	push   %esi
 8ad8aff:	53                   	push   %ebx
 8ad8b00:	83 ec 2c             	sub    $0x2c,%esp
 8ad8b03:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad8b06:	8d 45 10             	lea    0x10(%ebp),%eax
 8ad8b09:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8ad8b0c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ad8b0f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad8b13:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8b16:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad8b1a:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ad8b21:	00 
 8ad8b22:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8ad8b29:	e8 c2 5a 5a ff       	call   807e5f0 <vsnprintf@plt>
 8ad8b2e:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ad8b31:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 8ad8b35:	75 0c                	jne    8ad8b43 <_ZN10CharString6formatEPKcz+0x49>
 8ad8b37:	89 d8                	mov    %ebx,%eax
 8ad8b39:	89 04 24             	mov    %eax,(%esp)
 8ad8b3c:	e8 69 de ff ff       	call   8ad69aa <_ZN10CharStringC1Ev>
 8ad8b41:	eb 4c                	jmp    8ad8b8f <_ZN10CharString6formatEPKcz+0x95>
 8ad8b43:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad8b46:	89 04 24             	mov    %eax,(%esp)
 8ad8b49:	e8 00 de ff ff       	call   8ad694e <_ZN14CharStringData6createEi>
 8ad8b4e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad8b51:	8b 7d dc             	mov    -0x24(%ebp),%edi
 8ad8b54:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad8b57:	83 c0 01             	add    $0x1,%eax
 8ad8b5a:	89 c6                	mov    %eax,%esi
 8ad8b5c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad8b5f:	89 04 24             	mov    %eax,(%esp)
 8ad8b62:	e8 db dd ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad8b67:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8ad8b6b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad8b6e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad8b72:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad8b76:	89 04 24             	mov    %eax,(%esp)
 8ad8b79:	e8 fe b9 ff ff       	call   8ad457c <_Z11ss_vsprintfPcjPKcS_>
 8ad8b7e:	89 d8                	mov    %ebx,%eax
 8ad8b80:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ad8b83:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad8b87:	89 04 24             	mov    %eax,(%esp)
 8ad8b8a:	e8 11 e0 ff ff       	call   8ad6ba0 <_ZN10CharStringC1EP14CharStringData>
 8ad8b8f:	89 d8                	mov    %ebx,%eax
 8ad8b91:	89 d8                	mov    %ebx,%eax
 8ad8b93:	83 c4 2c             	add    $0x2c,%esp
 8ad8b96:	5b                   	pop    %ebx
 8ad8b97:	5e                   	pop    %esi
 8ad8b98:	5f                   	pop    %edi
 8ad8b99:	5d                   	pop    %ebp
 8ad8b9a:	c2 04 00             	ret    $0x4
 8ad8b9d:	90                   	nop

```

```c
// CharString::format @ 0x8ad8afa

CharString * CharString::format(CharString *__return_storage_ptr__,char *formatStr,...)

{
  int length;
  CharStringData *this;
  char *buffer;
  
                    /* Unresolved local var: va_list argList@[???]
                       Unresolved local var: int32 length@[???]
                       Unresolved local var: CharStringData * newData@[???] */
  length = vsnprintf((char *)0x0,0,formatStr,&stack0x0000000c);
  if (length == 0) {
    CharString(__return_storage_ptr__);
  }
  else {
    this = CharStringData::create(length);
    buffer = CharStringData::getBuffer(this);
    ss_vsprintf(buffer,length + 1,formatStr,&stack0x0000000c);
    CharString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}

```

---

## front

```asm
// === 08ad6ece CharString::front  [0x08ad6ece-0x8ad6edb] ===
 8ad6ece:	55                   	push   %ebp
 8ad6ecf:	89 e5                	mov    %esp,%ebp
 8ad6ed1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6ed4:	8b 00                	mov    (%eax),%eax
 8ad6ed6:	0f b6 00             	movzbl (%eax),%eax
 8ad6ed9:	5d                   	pop    %ebp
 8ad6eda:	c3                   	ret
 8ad6edb:	90                   	nop

```

```c
// CharString::front @ 0x8ad6ece

/* DWARF original prototype: char front(CharString * this) */

char __thiscall CharString::front(CharString *this)

{
  return *this->buffer_;
}

```

---

## getAt

```asm
// === 08ad6c8e CharString::getAt  [0x08ad6c8e-0x8ad6ca1] ===
 8ad6c8e:	55                   	push   %ebp
 8ad6c8f:	89 e5                	mov    %esp,%ebp
 8ad6c91:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6c94:	8b 10                	mov    (%eax),%edx
 8ad6c96:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6c99:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8ad6c9c:	0f b6 00             	movzbl (%eax),%eax
 8ad6c9f:	5d                   	pop    %ebp
 8ad6ca0:	c3                   	ret
 8ad6ca1:	90                   	nop

```

```c
// CharString::getAt @ 0x8ad6c8e

/* DWARF original prototype: char getAt(CharString * this, int32 idx) */

char __thiscall CharString::getAt(CharString *this,int32 idx)

{
  return this->buffer_[idx];
}

```

---

## getData

```asm
// === 08ad71bc CharString::getData  [0x08ad71bc-0x8ad71c9] ===
 8ad71bc:	55                   	push   %ebp
 8ad71bd:	89 e5                	mov    %esp,%ebp
 8ad71bf:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad71c2:	8b 00                	mov    (%eax),%eax
 8ad71c4:	83 e8 08             	sub    $0x8,%eax
 8ad71c7:	5d                   	pop    %ebp
 8ad71c8:	c3                   	ret
 8ad71c9:	90                   	nop

```

```c
// CharString::getData @ 0x8ad71bc

/* DWARF original prototype: CharStringData * getData(CharString * this) */

CharStringData * __thiscall CharString::getData(CharString *this)

{
  return (CharStringData *)(this->buffer_ + -8);
}

```

---

## getHash

```asm
// === 08ad6c1c CharString::getHash  [0x08ad6c1c-0x8ad6c8d] ===
 8ad6c1c:	55                   	push   %ebp
 8ad6c1d:	89 e5                	mov    %esp,%ebp
 8ad6c1f:	83 ec 28             	sub    $0x28,%esp
 8ad6c22:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6c25:	89 04 24             	mov    %eax,(%esp)
 8ad6c28:	e8 57 66 00 00       	call   8add284 <_ZNK10CharString7isEmptyEv>
 8ad6c2d:	84 c0                	test   %al,%al
 8ad6c2f:	74 07                	je     8ad6c38 <_ZNK10CharString7getHashEv+0x1c>
 8ad6c31:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad6c36:	eb 54                	jmp    8ad6c8c <_ZNK10CharString7getHashEv+0x70>
 8ad6c38:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8ad6c3f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6c42:	8b 00                	mov    (%eax),%eax
 8ad6c44:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad6c47:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad6c4a:	0f b6 00             	movzbl (%eax),%eax
 8ad6c4d:	88 45 f7             	mov    %al,-0x9(%ebp)
 8ad6c50:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8ad6c54:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 8ad6c58:	74 22                	je     8ad6c7c <_ZNK10CharString7getHashEv+0x60>
 8ad6c5a:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad6c5d:	89 c2                	mov    %eax,%edx
 8ad6c5f:	c1 e2 06             	shl    $0x6,%edx
 8ad6c62:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad6c65:	c1 e0 10             	shl    $0x10,%eax
 8ad6c68:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8ad6c6b:	89 c2                	mov    %eax,%edx
 8ad6c6d:	2b 55 ec             	sub    -0x14(%ebp),%edx
 8ad6c70:	0f be 45 f7          	movsbl -0x9(%ebp),%eax
 8ad6c74:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8ad6c77:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ad6c7a:	eb cb                	jmp    8ad6c47 <_ZNK10CharString7getHashEv+0x2b>
 8ad6c7c:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8ad6c80:	75 07                	jne    8ad6c89 <_ZNK10CharString7getHashEv+0x6d>
 8ad6c82:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 8ad6c89:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad6c8c:	c9                   	leave
 8ad6c8d:	c3                   	ret

```

```c
// CharString::getHash @ 0x8ad6c1c

/* DWARF original prototype: uint32 getHash(CharString * this) */

uint32 __thiscall CharString::getHash(CharString *this)

{
  char cVar1;
  bool bVar2;
  uint32 local_18;
  char *local_14;
  
                    /* Unresolved local var: uint32 value@[???]
                       Unresolved local var: char * str@[???] */
  bVar2 = isEmpty(this);
  if (bVar2) {
    local_18 = 0;
  }
  else {
    local_18 = 0;
    local_14 = this->buffer_;
    while( true ) {
                    /* Unresolved local var: char c@[???] */
      cVar1 = *local_14;
      local_14 = local_14 + 1;
      if (cVar1 == '\0') break;
      local_18 = local_18 * 0x1003f + (int)cVar1;
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
// === 08ad6bd6 CharString::isWhiteSpace  [0x08ad6bd6-0x8ad6c1b] ===
 8ad6bd6:	55                   	push   %ebp
 8ad6bd7:	89 e5                	mov    %esp,%ebp
 8ad6bd9:	83 ec 28             	sub    $0x28,%esp
 8ad6bdc:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6bdf:	8b 00                	mov    (%eax),%eax
 8ad6be1:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad6be4:	eb 20                	jmp    8ad6c06 <_ZNK10CharString12isWhiteSpaceEv+0x30>
 8ad6be6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6be9:	0f b6 00             	movzbl (%eax),%eax
 8ad6bec:	0f be c0             	movsbl %al,%eax
 8ad6bef:	89 04 24             	mov    %eax,(%esp)
 8ad6bf2:	e8 89 76 5a ff       	call   807e280 <isspace@plt>
 8ad6bf7:	85 c0                	test   %eax,%eax
 8ad6bf9:	75 07                	jne    8ad6c02 <_ZNK10CharString12isWhiteSpaceEv+0x2c>
 8ad6bfb:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad6c00:	eb 18                	jmp    8ad6c1a <_ZNK10CharString12isWhiteSpaceEv+0x44>
 8ad6c02:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8ad6c06:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad6c09:	0f b6 00             	movzbl (%eax),%eax
 8ad6c0c:	84 c0                	test   %al,%al
 8ad6c0e:	0f 95 c0             	setne  %al
 8ad6c11:	84 c0                	test   %al,%al
 8ad6c13:	75 d1                	jne    8ad6be6 <_ZNK10CharString12isWhiteSpaceEv+0x10>
 8ad6c15:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad6c1a:	c9                   	leave
 8ad6c1b:	c3                   	ret

```

```c
// CharString::isWhiteSpace @ 0x8ad6bd6

/* DWARF original prototype: bool isWhiteSpace(CharString * this) */

bool __thiscall CharString::isWhiteSpace(CharString *this)

{
  int iVar1;
  char *local_10;
  
                    /* Unresolved local var: char * buf@[???] */
  local_10 = this->buffer_;
  while( true ) {
    if (*local_10 == '\0') {
      return true;
    }
    iVar1 = isspace((int)*local_10);
    if (iVar1 == 0) break;
    local_10 = local_10 + 1;
  }
  return false;
}

```

---

## join

```asm
// === 08ad920e CharString::join  [0x08ad920e-0x8ad94ad] ===
 8ad920e:	55                   	push   %ebp
 8ad920f:	89 e5                	mov    %esp,%ebp
 8ad9211:	56                   	push   %esi
 8ad9212:	53                   	push   %ebx
 8ad9213:	83 ec 60             	sub    $0x60,%esp
 8ad9216:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad9219:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad921c:	89 04 24             	mov    %eax,(%esp)
 8ad921f:	e8 ce 40 00 00       	call   8add2f2 <_ZNKSt6vectorI10CharStringSaIS0_EE5emptyEv>
 8ad9224:	84 c0                	test   %al,%al
 8ad9226:	74 0f                	je     8ad9237 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x29>
 8ad9228:	89 d8                	mov    %ebx,%eax
 8ad922a:	89 04 24             	mov    %eax,(%esp)
 8ad922d:	e8 78 d7 ff ff       	call   8ad69aa <_ZN10CharStringC1Ev>
 8ad9232:	e9 66 02 00 00       	jmp    8ad949d <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x28f>
 8ad9237:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad923a:	89 04 24             	mov    %eax,(%esp)
 8ad923d:	e8 ba 6d 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad9242:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8ad9245:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad9248:	89 04 24             	mov    %eax,(%esp)
 8ad924b:	e8 e0 c2 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad9250:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8ad9253:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9256:	89 04 24             	mov    %eax,(%esp)
 8ad9259:	e8 d8 40 00 00       	call   8add336 <_ZNKSt6vectorI10CharStringSaIS0_EE4sizeEv>
 8ad925e:	83 e8 01             	sub    $0x1,%eax
 8ad9261:	0f af 45 d4          	imul   -0x2c(%ebp),%eax
 8ad9265:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8ad9268:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8ad926c:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 8ad9270:	0f 85 a1 00 00 00    	jne    8ad9317 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x109>
 8ad9276:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ad9279:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad927c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9280:	89 04 24             	mov    %eax,(%esp)
 8ad9283:	e8 ca 40 00 00       	call   8add352 <_ZNKSt6vectorI10CharStringSaIS0_EE5beginEv>
 8ad9288:	83 ec 04             	sub    $0x4,%esp
 8ad928b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ad928e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad9291:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9295:	89 04 24             	mov    %eax,(%esp)
 8ad9298:	e8 e1 40 00 00       	call   8add37e <_ZNKSt6vectorI10CharStringSaIS0_EE3endEv>
 8ad929d:	83 ec 04             	sub    $0x4,%esp
 8ad92a0:	eb 45                	jmp    8ad92e7 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0xd9>
 8ad92a2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ad92a5:	89 04 24             	mov    %eax,(%esp)
 8ad92a8:	e8 5d 41 00 00       	call   8add40a <_ZNK9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEEdeEv>
 8ad92ad:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ad92b0:	eb 12                	jmp    8ad92c4 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0xb6>
 8ad92b2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad92b5:	89 04 24             	mov    %eax,(%esp)
 8ad92b8:	e8 73 c2 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad92bd:	01 45 d8             	add    %eax,-0x28(%ebp)
 8ad92c0:	c6 45 e7 00          	movb   $0x0,-0x19(%ebp)
 8ad92c4:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 8ad92c8:	75 e8                	jne    8ad92b2 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0xa4>
 8ad92ca:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ad92cd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ad92d4:	00 
 8ad92d5:	8d 55 c0             	lea    -0x40(%ebp),%edx
 8ad92d8:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad92dc:	89 04 24             	mov    %eax,(%esp)
 8ad92df:	e8 f2 40 00 00       	call   8add3d6 <_ZN9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEEppEi>
 8ad92e4:	83 ec 04             	sub    $0x4,%esp
 8ad92e7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ad92ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad92ee:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ad92f1:	89 04 24             	mov    %eax,(%esp)
 8ad92f4:	e8 b1 40 00 00       	call   8add3aa <_ZN9__gnu_cxxneIPK10CharStringSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8ad92f9:	84 c0                	test   %al,%al
 8ad92fb:	74 11                	je     8ad930e <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x100>
 8ad92fd:	80 75 e7 01          	xorb   $0x1,-0x19(%ebp)
 8ad9301:	80 7d e7 00          	cmpb   $0x0,-0x19(%ebp)
 8ad9305:	74 07                	je     8ad930e <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x100>
 8ad9307:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad930c:	eb 05                	jmp    8ad9313 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x105>
 8ad930e:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad9313:	84 c0                	test   %al,%al
 8ad9315:	75 8b                	jne    8ad92a2 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x94>
 8ad9317:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8ad931b:	75 0f                	jne    8ad932c <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x11e>
 8ad931d:	89 d8                	mov    %ebx,%eax
 8ad931f:	89 04 24             	mov    %eax,(%esp)
 8ad9322:	e8 83 d6 ff ff       	call   8ad69aa <_ZN10CharStringC1Ev>
 8ad9327:	e9 71 01 00 00       	jmp    8ad949d <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x28f>
 8ad932c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ad932f:	89 04 24             	mov    %eax,(%esp)
 8ad9332:	e8 47 d6 ff ff       	call   8ad697e <_ZN14CharStringData16createTerminatedEi>
 8ad9337:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8ad933a:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ad933d:	89 04 24             	mov    %eax,(%esp)
 8ad9340:	e8 fd d5 ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad9345:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ad9348:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8ad934c:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 8ad9350:	0f 85 36 01 00 00    	jne    8ad948c <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x27e>
 8ad9356:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad9359:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad935c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9360:	89 04 24             	mov    %eax,(%esp)
 8ad9363:	e8 ea 3f 00 00       	call   8add352 <_ZNKSt6vectorI10CharStringSaIS0_EE5beginEv>
 8ad9368:	83 ec 04             	sub    $0x4,%esp
 8ad936b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ad936e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad9371:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9375:	89 04 24             	mov    %eax,(%esp)
 8ad9378:	e8 01 40 00 00       	call   8add37e <_ZNKSt6vectorI10CharStringSaIS0_EE3endEv>
 8ad937d:	83 ec 04             	sub    $0x4,%esp
 8ad9380:	e9 d3 00 00 00       	jmp    8ad9458 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x24a>
 8ad9385:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad9388:	89 04 24             	mov    %eax,(%esp)
 8ad938b:	e8 7a 40 00 00       	call   8add40a <_ZNK9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEEdeEv>
 8ad9390:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad9393:	e9 99 00 00 00       	jmp    8ad9431 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x223>
 8ad9398:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8ad939c:	7e 32                	jle    8ad93d0 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x1c2>
 8ad939e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ad93a1:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad93a4:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad93a8:	89 04 24             	mov    %eax,(%esp)
 8ad93ab:	e8 a2 3f 00 00       	call   8add352 <_ZNKSt6vectorI10CharStringSaIS0_EE5beginEv>
 8ad93b0:	83 ec 04             	sub    $0x4,%esp
 8ad93b3:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ad93b6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad93ba:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad93bd:	89 04 24             	mov    %eax,(%esp)
 8ad93c0:	e8 e5 3f 00 00       	call   8add3aa <_ZN9__gnu_cxxneIPK10CharStringSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8ad93c5:	84 c0                	test   %al,%al
 8ad93c7:	74 07                	je     8ad93d0 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x1c2>
 8ad93c9:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad93ce:	eb 05                	jmp    8ad93d5 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x1c7>
 8ad93d0:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad93d5:	84 c0                	test   %al,%al
 8ad93d7:	74 1f                	je     8ad93f8 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x1ea>
 8ad93d9:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8ad93dc:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad93e0:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8ad93e3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad93e7:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad93ea:	89 04 24             	mov    %eax,(%esp)
 8ad93ed:	e8 ae 44 5a ff       	call   807d8a0 <memcpy@plt>
 8ad93f2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8ad93f5:	01 45 e0             	add    %eax,-0x20(%ebp)
 8ad93f8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad93fb:	89 04 24             	mov    %eax,(%esp)
 8ad93fe:	e8 2d c1 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad9403:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad9406:	8b 75 f4             	mov    -0xc(%ebp),%esi
 8ad9409:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad940c:	89 04 24             	mov    %eax,(%esp)
 8ad940f:	e8 e8 6b 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad9414:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ad9418:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad941c:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad941f:	89 04 24             	mov    %eax,(%esp)
 8ad9422:	e8 79 44 5a ff       	call   807d8a0 <memcpy@plt>
 8ad9427:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad942a:	01 45 e0             	add    %eax,-0x20(%ebp)
 8ad942d:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8ad9431:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 8ad9435:	0f 85 5d ff ff ff    	jne    8ad9398 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x18a>
 8ad943b:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ad943e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ad9445:	00 
 8ad9446:	8d 55 b8             	lea    -0x48(%ebp),%edx
 8ad9449:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad944d:	89 04 24             	mov    %eax,(%esp)
 8ad9450:	e8 81 3f 00 00       	call   8add3d6 <_ZN9__gnu_cxx17__normal_iteratorIPK10CharStringSt6vectorIS1_SaIS1_EEEppEi>
 8ad9455:	83 ec 04             	sub    $0x4,%esp
 8ad9458:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8ad945b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad945f:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad9462:	89 04 24             	mov    %eax,(%esp)
 8ad9465:	e8 40 3f 00 00       	call   8add3aa <_ZN9__gnu_cxxneIPK10CharStringSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 8ad946a:	84 c0                	test   %al,%al
 8ad946c:	74 11                	je     8ad947f <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x271>
 8ad946e:	80 75 ef 01          	xorb   $0x1,-0x11(%ebp)
 8ad9472:	80 7d ef 00          	cmpb   $0x0,-0x11(%ebp)
 8ad9476:	74 07                	je     8ad947f <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x271>
 8ad9478:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad947d:	eb 05                	jmp    8ad9484 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x276>
 8ad947f:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad9484:	84 c0                	test   %al,%al
 8ad9486:	0f 85 f9 fe ff ff    	jne    8ad9385 <_ZN10CharString4joinERKSt6vectorIS_SaIS_EERKS_+0x177>
 8ad948c:	89 d8                	mov    %ebx,%eax
 8ad948e:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8ad9491:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9495:	89 04 24             	mov    %eax,(%esp)
 8ad9498:	e8 03 d7 ff ff       	call   8ad6ba0 <_ZN10CharStringC1EP14CharStringData>
 8ad949d:	89 d8                	mov    %ebx,%eax
 8ad949f:	89 d8                	mov    %ebx,%eax
 8ad94a1:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ad94a4:	83 c4 00             	add    $0x0,%esp
 8ad94a7:	5b                   	pop    %ebx
 8ad94a8:	5e                   	pop    %esi
 8ad94a9:	5d                   	pop    %ebp
 8ad94aa:	c2 04 00             	ret    $0x4
 8ad94ad:	90                   	nop

```

```c
// CharString::join @ 0x8ad920e

CharString *
CharString::join(CharString *__return_storage_ptr__,
                vector<CharString,_std::allocator<CharString>_> *tokenVector,
                CharString *separatorStr)

{
  bool bVar1;
  size_t sVar2;
  int32 iVar3;
  size_t __n;
  char *__src;
  undefined1 local_50 [8];
  undefined1 local_48 [8];
  __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
  local_40;
  vector<CharString,_std::allocator<CharString>_> local_3c;
  size_t local_30;
  int local_2c;
  CharStringData *local_28;
  char *local_24;
  byte local_1d;
  CharString *local_1c;
  byte local_15;
  CharString *local_14;
  size_t local_10;
  
                    /* Unresolved local var: char * separatorStrSrc@[???]
                       Unresolved local var: int32 separatorStrLen@[???]
                       Unresolved local var: int32 totalLength@[???]
                       Unresolved local var: CharStringData * newData@[???]
                       Unresolved local var: char * newDataBuf@[???] */
  bVar1 = std::vector<CharString,_std::allocator<CharString>_>::empty(tokenVector);
  if (bVar1) {
    CharString(__return_storage_ptr__);
  }
  else {
    local_3c.super__Vector_base<CharString,_std::allocator<CharString>_>._M_impl._M_end_of_storage =
         (CharString *)c_str(separatorStr);
    local_30 = length(separatorStr);
    sVar2 = std::vector<CharString,_std::allocator<CharString>_>::size(tokenVector);
    local_2c = (sVar2 - 1) * local_30;
                    /* Unresolved local var: bool token_runOnce@[???] */
    local_1d = 0;
                    /* Unresolved local var:
                       __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                       token_iterator@[???]
                       Unresolved local var:
                       __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                       token_iteratorEnd@[???] */
    std::vector<CharString,_std::allocator<CharString>_>::begin
              ((vector<CharString,_std::allocator<CharString>_> *)(local_48 + 4));
    std::vector<CharString,_std::allocator<CharString>_>::end
              ((vector<CharString,_std::allocator<CharString>_> *)local_48);
    while( true ) {
      bVar1 = __gnu_cxx::
              operator!=<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                        ((__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                          *)(local_48 + 4),
                         (__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                          *)local_48);
      if ((bVar1) && (local_1d = local_1d ^ 1, local_1d != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
                    /* Unresolved local var: CharString * token@[???] */
      local_1c = __gnu_cxx::
                 __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                 ::operator*((__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                              *)(local_48 + 4));
      while (local_1d != 0) {
        iVar3 = length(local_1c);
        local_2c = local_2c + iVar3;
        local_1d = 0;
      }
      __gnu_cxx::
      __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>::
      operator++(&local_40,(int)(local_48 + 4));
    }
    if (local_2c == 0) {
      CharString(__return_storage_ptr__);
    }
    else {
      local_28 = CharStringData::createTerminated(local_2c);
      local_24 = CharStringData::getBuffer(local_28);
                    /* Unresolved local var: bool token_runOnce@[???] */
      local_15 = 0;
                    /* Unresolved local var:
                       __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                       token_iterator@[???]
                       Unresolved local var:
                       __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                       token_iteratorEnd@[???] */
      std::vector<CharString,_std::allocator<CharString>_>::begin
                ((vector<CharString,_std::allocator<CharString>_> *)(local_50 + 4));
      std::vector<CharString,_std::allocator<CharString>_>::end
                ((vector<CharString,_std::allocator<CharString>_> *)local_50);
      while( true ) {
        bVar1 = __gnu_cxx::
                operator!=<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                          ((__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                            *)(local_50 + 4),
                           (__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                            *)local_50);
        if ((bVar1) && (local_15 = local_15 ^ 1, local_15 != 0)) {
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
        if (!bVar1) break;
                    /* Unresolved local var: CharString * token@[???] */
        local_14 = __gnu_cxx::
                   __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                   ::operator*((__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                                *)(local_50 + 4));
        while (local_15 != 0) {
                    /* Unresolved local var: int32 tokenLength@[???] */
          if ((int)local_30 < 1) {
LAB_08ad93d0:
            bVar1 = false;
          }
          else {
            std::vector<CharString,_std::allocator<CharString>_>::begin(&local_3c);
            bVar1 = __gnu_cxx::
                    operator!=<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                              ((__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                                *)(local_50 + 4),
                               (__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                                *)&local_3c);
            if (!bVar1) goto LAB_08ad93d0;
            bVar1 = true;
          }
          if (bVar1) {
            memcpy(local_24,local_3c.super__Vector_base<CharString,_std::allocator<CharString>_>.
                            _M_impl._M_end_of_storage,local_30);
            local_24 = local_24 + local_30;
          }
          __n = length(local_14);
          local_10 = __n;
          __src = c_str(local_14);
          memcpy(local_24,__src,__n);
          local_24 = local_24 + local_10;
          local_15 = 0;
        }
        __gnu_cxx::
        __normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
        ::operator++((__normal_iterator<const_CharString*,_std::vector<CharString,_std::allocator<CharString>_>_>
                      *)&local_3c.super__Vector_base<CharString,_std::allocator<CharString>_>.
                         _M_impl._M_finish,(int)(local_50 + 4));
      }
      CharString(__return_storage_ptr__,local_28);
    }
  }
  return __return_storage_ptr__;
}

```

---

## operator

```asm
// === 08ad70b6 CharString::operator  [0x08ad70b6-0x8ad70bf] ===
 8ad70b6:	55                   	push   %ebp
 8ad70b7:	89 e5                	mov    %esp,%ebp
 8ad70b9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad70bc:	8b 00                	mov    (%eax),%eax
 8ad70be:	5d                   	pop    %ebp
 8ad70bf:	c3                   	ret

```

```c
// CharString::operator @ 0x8ad70b6

/* DWARF original name: operator const char*
   DWARF original prototype: char * operator_const_char*(CharString * this) */

char * __thiscall CharString::operator_const_char_(CharString *this)

{
  return this->buffer_;
}

```

---

## operator=

```asm
// === 08ad70c0 CharString::operator=  [0x08ad70c0-0x8ad70dd] ===
 8ad70c0:	55                   	push   %ebp
 8ad70c1:	89 e5                	mov    %esp,%ebp
 8ad70c3:	83 ec 18             	sub    $0x18,%esp
 8ad70c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad70c9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad70cd:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad70d0:	89 04 24             	mov    %eax,(%esp)
 8ad70d3:	e8 6a fe ff ff       	call   8ad6f42 <_ZN10CharString6assignEPKc>
 8ad70d8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad70db:	c9                   	leave
 8ad70dc:	c3                   	ret
 8ad70dd:	90                   	nop

```

```c
// CharString::operator= @ 0x8ad70c0

/* DWARF original prototype: CharString * operator=(CharString * this, char * src) */

CharString * __thiscall CharString::operator=(CharString *this,char *src)

{
  assign(this,src);
  return this;
}

```

---

## operator=_08ad70de

```asm
// === 08ad70de CharString::operator=  [0x08ad70de-0x8ad70fb] ===
 8ad70de:	55                   	push   %ebp
 8ad70df:	89 e5                	mov    %esp,%ebp
 8ad70e1:	83 ec 18             	sub    $0x18,%esp
 8ad70e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad70e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad70eb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad70ee:	89 04 24             	mov    %eax,(%esp)
 8ad70f1:	e8 d8 fe ff ff       	call   8ad6fce <_ZN10CharString6assignERKS_>
 8ad70f6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad70f9:	c9                   	leave
 8ad70fa:	c3                   	ret
 8ad70fb:	90                   	nop

```

```c
// CharString::operator= @ 0x8ad70de

/* DWARF original prototype: CharString * operator=(CharString * this, CharString * src) */

CharString * __thiscall CharString::operator=(CharString *this,CharString *src)

{
  assign(this,src);
  return this;
}

```

---

## operator=_08ad70fc

```asm
// === 08ad70fc CharString::operator=  [0x08ad70fc-0x8ad7137] ===
 8ad70fc:	55                   	push   %ebp
 8ad70fd:	89 e5                	mov    %esp,%ebp
 8ad70ff:	53                   	push   %ebx
 8ad7100:	83 ec 14             	sub    $0x14,%esp
 8ad7103:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad7106:	89 04 24             	mov    %eax,(%esp)
 8ad7109:	e8 52 f5 c2 ff       	call   8706660 <_ZNKSs4sizeEv>
 8ad710e:	89 c3                	mov    %eax,%ebx
 8ad7110:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad7113:	89 04 24             	mov    %eax,(%esp)
 8ad7116:	e8 d5 f3 c2 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ad711b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad711f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad7123:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7126:	89 04 24             	mov    %eax,(%esp)
 8ad7129:	e8 3e fe ff ff       	call   8ad6f6c <_ZN10CharString6assignEPKci>
 8ad712e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7131:	83 c4 14             	add    $0x14,%esp
 8ad7134:	5b                   	pop    %ebx
 8ad7135:	5d                   	pop    %ebp
 8ad7136:	c3                   	ret
 8ad7137:	90                   	nop

```

```c
// CharString::operator= @ 0x8ad70fc

/* DWARF original prototype: CharString * operator=(CharString * this, string * src) */

CharString * __thiscall CharString::operator=(CharString *this,string *src)

{
  int32 srcLength;
  char *src_00;
  
  srcLength = std::string::size((string *)src);
  src_00 = (char *)std::string::c_str((string *)src);
  assign(this,src_00,srcLength);
  return this;
}

```

---

## operator=_08ad7138

```asm
// === 08ad7138 CharString::operator=  [0x08ad7138-0x8ad715b] ===
 8ad7138:	55                   	push   %ebp
 8ad7139:	89 e5                	mov    %esp,%ebp
 8ad713b:	83 ec 28             	sub    $0x28,%esp
 8ad713e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad7141:	88 45 f4             	mov    %al,-0xc(%ebp)
 8ad7144:	0f be 45 f4          	movsbl -0xc(%ebp),%eax
 8ad7148:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad714c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad714f:	89 04 24             	mov    %eax,(%esp)
 8ad7152:	e8 c3 fe ff ff       	call   8ad701a <_ZN10CharString6assignEc>
 8ad7157:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad715a:	c9                   	leave
 8ad715b:	c3                   	ret

```

```c
// CharString::operator= @ 0x8ad7138

/* DWARF original prototype: CharString * operator=(CharString * this, char src) */

CharString * __thiscall CharString::operator=(CharString *this,char src)

{
  assign(this,src);
  return this;
}

```

---

## operator[]

```asm
// === 08ad709c CharString::operator[]  [0x08ad709c-0x8ad70b5] ===
 8ad709c:	55                   	push   %ebp
 8ad709d:	89 e5                	mov    %esp,%ebp
 8ad709f:	83 ec 08             	sub    $0x8,%esp
 8ad70a2:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad70a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad70a9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad70ac:	89 04 24             	mov    %eax,(%esp)
 8ad70af:	e8 da fb ff ff       	call   8ad6c8e <_ZNK10CharString5getAtEi>
 8ad70b4:	c9                   	leave
 8ad70b5:	c3                   	ret

```

```c
// CharString::operator[] @ 0x8ad709c

/* DWARF original prototype: char operator[](CharString * this, int idx) */

char __thiscall CharString::operator[](CharString *this,int idx)

{
  char cVar1;
  
  cVar1 = getAt(this,idx);
  return cVar1;
}

```

---

## pattern

```asm
// === 08ad8a54 CharString::pattern  [0x08ad8a54-0x8ad8af9] ===
 8ad8a54:	55                   	push   %ebp
 8ad8a55:	89 e5                	mov    %esp,%ebp
 8ad8a57:	53                   	push   %ebx
 8ad8a58:	83 ec 24             	sub    $0x24,%esp
 8ad8a5b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad8a5e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8a61:	89 04 24             	mov    %eax,(%esp)
 8ad8a64:	e8 47 59 5a ff       	call   807e3b0 <strlen@plt>
 8ad8a69:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ad8a6c:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 8ad8a70:	74 06                	je     8ad8a78 <_ZN10CharString7patternEPKci+0x24>
 8ad8a72:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8ad8a76:	7f 0c                	jg     8ad8a84 <_ZN10CharString7patternEPKci+0x30>
 8ad8a78:	89 d8                	mov    %ebx,%eax
 8ad8a7a:	89 04 24             	mov    %eax,(%esp)
 8ad8a7d:	e8 28 df ff ff       	call   8ad69aa <_ZN10CharStringC1Ev>
 8ad8a82:	eb 6a                	jmp    8ad8aee <_ZN10CharString7patternEPKci+0x9a>
 8ad8a84:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad8a87:	0f af 45 10          	imul   0x10(%ebp),%eax
 8ad8a8b:	89 04 24             	mov    %eax,(%esp)
 8ad8a8e:	e8 eb de ff ff       	call   8ad697e <_ZN14CharStringData16createTerminatedEi>
 8ad8a93:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ad8a96:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad8a99:	89 04 24             	mov    %eax,(%esp)
 8ad8a9c:	e8 a1 de ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad8aa1:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad8aa4:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8ad8aab:	eb 23                	jmp    8ad8ad0 <_ZN10CharString7patternEPKci+0x7c>
 8ad8aad:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad8ab0:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad8ab4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8ab7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad8abb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad8abe:	89 04 24             	mov    %eax,(%esp)
 8ad8ac1:	e8 da 4d 5a ff       	call   807d8a0 <memcpy@plt>
 8ad8ac6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad8ac9:	01 45 f0             	add    %eax,-0x10(%ebp)
 8ad8acc:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8ad8ad0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad8ad3:	3b 45 10             	cmp    0x10(%ebp),%eax
 8ad8ad6:	0f 9c c0             	setl   %al
 8ad8ad9:	84 c0                	test   %al,%al
 8ad8adb:	75 d0                	jne    8ad8aad <_ZN10CharString7patternEPKci+0x59>
 8ad8add:	89 d8                	mov    %ebx,%eax
 8ad8adf:	8b 55 ec             	mov    -0x14(%ebp),%edx
 8ad8ae2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad8ae6:	89 04 24             	mov    %eax,(%esp)
 8ad8ae9:	e8 b2 e0 ff ff       	call   8ad6ba0 <_ZN10CharStringC1EP14CharStringData>
 8ad8aee:	89 d8                	mov    %ebx,%eax
 8ad8af0:	89 d8                	mov    %ebx,%eax
 8ad8af2:	83 c4 24             	add    $0x24,%esp
 8ad8af5:	5b                   	pop    %ebx
 8ad8af6:	5d                   	pop    %ebp
 8ad8af7:	c2 04 00             	ret    $0x4

```

```c
// CharString::pattern @ 0x8ad8a54

CharString * CharString::pattern(CharString *__return_storage_ptr__,char *pattern,int32 count)

{
  size_t __n;
  CharStringData *this;
  char *local_14;
  int local_10;
  
                    /* Unresolved local var: int32 patternLen@[???]
                       Unresolved local var: CharStringData * newData@[???]
                       Unresolved local var: char * buffer@[???] */
  __n = strlen(pattern);
  if ((__n == 0) || (count < 1)) {
    CharString(__return_storage_ptr__);
  }
  else {
    this = CharStringData::createTerminated(__n * count);
    local_14 = CharStringData::getBuffer(this);
                    /* Unresolved local var: int32 i@[???] */
    for (local_10 = 0; local_10 < count; local_10 = local_10 + 1) {
      memcpy(local_14,pattern,__n);
      local_14 = local_14 + __n;
    }
    CharString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}

```

---

## replaceData

```asm
// === 08ad7180 CharString::replaceData  [0x08ad7180-0x8ad71bb] ===
 8ad7180:	55                   	push   %ebp
 8ad7181:	89 e5                	mov    %esp,%ebp
 8ad7183:	83 ec 28             	sub    $0x28,%esp
 8ad7186:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7189:	89 04 24             	mov    %eax,(%esp)
 8ad718c:	e8 2b 00 00 00       	call   8ad71bc <_ZNK10CharString7getDataEv>
 8ad7191:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad7194:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad7197:	89 04 24             	mov    %eax,(%esp)
 8ad719a:	e8 e5 f6 ff ff       	call   8ad6884 <_ZN10StringData6incRefEv>
 8ad719f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad71a2:	89 04 24             	mov    %eax,(%esp)
 8ad71a5:	e8 98 f7 ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad71aa:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad71ad:	89 02                	mov    %eax,(%edx)
 8ad71af:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad71b2:	89 04 24             	mov    %eax,(%esp)
 8ad71b5:	e8 d6 f6 ff ff       	call   8ad6890 <_ZN10StringData6decRefEv>
 8ad71ba:	c9                   	leave
 8ad71bb:	c3                   	ret

```

```c
// CharString::replaceData @ 0x8ad7180

/* DWARF original prototype: void replaceData(CharString * this, CharStringData * newData) */

void __thiscall CharString::replaceData(CharString *this,CharStringData *newData)

{
  StringData *this_00;
  char *pcVar1;
  
                    /* Unresolved local var: CharStringData * oldData@[???] */
  this_00 = &getData(this)->super_StringData;
  StringData::incRef(&newData->super_StringData);
  pcVar1 = CharStringData::getBuffer(newData);
  this->buffer_ = pcVar1;
  StringData::decRef(this_00);
  return;
}

```

---

## rfind

```asm
// === 08ad7442 CharString::rfind  [0x08ad7442-0x8ad7483] ===
 8ad7442:	55                   	push   %ebp
 8ad7443:	89 e5                	mov    %esp,%ebp
 8ad7445:	83 ec 28             	sub    $0x28,%esp
 8ad7448:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad744b:	89 04 24             	mov    %eax,(%esp)
 8ad744e:	e8 5d 6f 5a ff       	call   807e3b0 <strlen@plt>
 8ad7453:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad7456:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7459:	89 04 24             	mov    %eax,(%esp)
 8ad745c:	e8 cf e0 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad7461:	2b 45 f4             	sub    -0xc(%ebp),%eax
 8ad7464:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ad7467:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad746b:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad746e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad7472:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad7476:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7479:	89 04 24             	mov    %eax,(%esp)
 8ad747c:	e8 67 00 00 00       	call   8ad74e8 <_ZNK10CharString5rfindEiPKci>
 8ad7481:	c9                   	leave
 8ad7482:	c3                   	ret
 8ad7483:	90                   	nop

```

```c
// CharString::rfind @ 0x8ad7442

/* DWARF original prototype: int32 rfind(CharString * this, char * pat) */

int32 __thiscall CharString::rfind(CharString *this,char *pat)

{
  size_t patLength;
  int32 iVar1;
  
                    /* Unresolved local var: int32 patLength@[???] */
  patLength = strlen(pat);
  iVar1 = length(this);
  iVar1 = rfind(this,iVar1 - patLength,pat,patLength);
  return iVar1;
}

```

---

## rfind_08ad7484

```asm
// === 08ad7484 CharString::rfind  [0x08ad7484-0x8ad74b3] ===
 8ad7484:	55                   	push   %ebp
 8ad7485:	89 e5                	mov    %esp,%ebp
 8ad7487:	83 ec 18             	sub    $0x18,%esp
 8ad748a:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad748d:	89 04 24             	mov    %eax,(%esp)
 8ad7490:	e8 1b 6f 5a ff       	call   807e3b0 <strlen@plt>
 8ad7495:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad7499:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad749c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad74a0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad74a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad74a7:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad74aa:	89 04 24             	mov    %eax,(%esp)
 8ad74ad:	e8 36 00 00 00       	call   8ad74e8 <_ZNK10CharString5rfindEiPKci>
 8ad74b2:	c9                   	leave
 8ad74b3:	c3                   	ret

```

```c
// CharString::rfind @ 0x8ad7484

/* DWARF original prototype: int32 rfind(CharString * this, int32 pos, char * pat) */

int32 __thiscall CharString::rfind(CharString *this,int32 pos,char *pat)

{
  size_t patLength;
  int32 iVar1;
  
  patLength = strlen(pat);
  iVar1 = rfind(this,pos,pat,patLength);
  return iVar1;
}

```

---

## rfind_08ad74b4

```asm
// === 08ad74b4 CharString::rfind  [0x08ad74b4-0x8ad74e7] ===
 8ad74b4:	55                   	push   %ebp
 8ad74b5:	89 e5                	mov    %esp,%ebp
 8ad74b7:	83 ec 18             	sub    $0x18,%esp
 8ad74ba:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad74bd:	89 04 24             	mov    %eax,(%esp)
 8ad74c0:	e8 6b e0 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad74c5:	2b 45 10             	sub    0x10(%ebp),%eax
 8ad74c8:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad74cb:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad74cf:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad74d2:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad74d6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad74da:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad74dd:	89 04 24             	mov    %eax,(%esp)
 8ad74e0:	e8 03 00 00 00       	call   8ad74e8 <_ZNK10CharString5rfindEiPKci>
 8ad74e5:	c9                   	leave
 8ad74e6:	c3                   	ret
 8ad74e7:	90                   	nop

```

```c
// CharString::rfind @ 0x8ad74b4

/* DWARF original prototype: int32 rfind(CharString * this, char * pat, int32 patLength) */

int32 __thiscall CharString::rfind(CharString *this,char *pat,int32 patLength)

{
  int32 iVar1;
  
  iVar1 = length(this);
  iVar1 = rfind(this,iVar1 - patLength,pat,patLength);
  return iVar1;
}

```

---

## rfind_08ad74e8

```asm
// === 08ad74e8 CharString::rfind  [0x08ad74e8-0x8ad757f] ===
 8ad74e8:	55                   	push   %ebp
 8ad74e9:	89 e5                	mov    %esp,%ebp
 8ad74eb:	83 ec 28             	sub    $0x28,%esp
 8ad74ee:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8ad74f2:	75 0a                	jne    8ad74fe <_ZNK10CharString5rfindEiPKci+0x16>
 8ad74f4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad74f9:	e9 80 00 00 00       	jmp    8ad757e <_ZNK10CharString5rfindEiPKci+0x96>
 8ad74fe:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ad7502:	78 13                	js     8ad7517 <_ZNK10CharString5rfindEiPKci+0x2f>
 8ad7504:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7507:	89 04 24             	mov    %eax,(%esp)
 8ad750a:	e8 21 e0 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad750f:	2b 45 0c             	sub    0xc(%ebp),%eax
 8ad7512:	3b 45 14             	cmp    0x14(%ebp),%eax
 8ad7515:	7d 07                	jge    8ad751e <_ZNK10CharString5rfindEiPKci+0x36>
 8ad7517:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad751c:	eb 05                	jmp    8ad7523 <_ZNK10CharString5rfindEiPKci+0x3b>
 8ad751e:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad7523:	84 c0                	test   %al,%al
 8ad7525:	74 07                	je     8ad752e <_ZNK10CharString5rfindEiPKci+0x46>
 8ad7527:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad752c:	eb 50                	jmp    8ad757e <_ZNK10CharString5rfindEiPKci+0x96>
 8ad752e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7531:	89 04 24             	mov    %eax,(%esp)
 8ad7534:	e8 c3 8a 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad7539:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad753c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad753f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad7542:	eb 29                	jmp    8ad756d <_ZNK10CharString5rfindEiPKci+0x85>
 8ad7544:	8b 55 14             	mov    0x14(%ebp),%edx
 8ad7547:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad754a:	03 45 f0             	add    -0x10(%ebp),%eax
 8ad754d:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad7551:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad7554:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad7558:	89 04 24             	mov    %eax,(%esp)
 8ad755b:	e8 30 67 5a ff       	call   807dc90 <memcmp@plt>
 8ad7560:	85 c0                	test   %eax,%eax
 8ad7562:	75 05                	jne    8ad7569 <_ZNK10CharString5rfindEiPKci+0x81>
 8ad7564:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad7567:	eb 15                	jmp    8ad757e <_ZNK10CharString5rfindEiPKci+0x96>
 8ad7569:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 8ad756d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad7570:	f7 d0                	not    %eax
 8ad7572:	c1 e8 1f             	shr    $0x1f,%eax
 8ad7575:	84 c0                	test   %al,%al
 8ad7577:	75 cb                	jne    8ad7544 <_ZNK10CharString5rfindEiPKci+0x5c>
 8ad7579:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad757e:	c9                   	leave
 8ad757f:	c3                   	ret

```

```c
// CharString::rfind @ 0x8ad74e8

/* DWARF original prototype: int32 rfind(CharString * this, int32 pos, char * pat, int32 patLength)
    */

int32 __thiscall CharString::rfind(CharString *this,int32 pos,char *pat,int32 patLength)

{
  bool bVar1;
  int32 iVar2;
  char *pcVar3;
  int iVar4;
  int32 local_10;
  
                    /* Unresolved local var: char * strBuf@[???] */
  if (patLength != 0) {
    if ((pos < 0) || (iVar2 = length(this), iVar2 - pos < patLength)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pcVar3 = c_str(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; -1 < local_10; local_10 = local_10 + -1) {
        iVar4 = memcmp(pcVar3 + local_10,pat,patLength);
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

## rfind_08ad7580

```asm
// === 08ad7580 CharString::rfind  [0x08ad7580-0x8ad75cf] ===
 8ad7580:	55                   	push   %ebp
 8ad7581:	89 e5                	mov    %esp,%ebp
 8ad7583:	53                   	push   %ebx
 8ad7584:	83 ec 24             	sub    $0x24,%esp
 8ad7587:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad758a:	89 04 24             	mov    %eax,(%esp)
 8ad758d:	e8 9e df ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad7592:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad7595:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad7598:	89 04 24             	mov    %eax,(%esp)
 8ad759b:	e8 5c 8a 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad75a0:	89 c3                	mov    %eax,%ebx
 8ad75a2:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad75a5:	89 04 24             	mov    %eax,(%esp)
 8ad75a8:	e8 83 df ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad75ad:	2b 45 f4             	sub    -0xc(%ebp),%eax
 8ad75b0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ad75b3:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad75b7:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad75bb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad75bf:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad75c2:	89 04 24             	mov    %eax,(%esp)
 8ad75c5:	e8 1e ff ff ff       	call   8ad74e8 <_ZNK10CharString5rfindEiPKci>
 8ad75ca:	83 c4 24             	add    $0x24,%esp
 8ad75cd:	5b                   	pop    %ebx
 8ad75ce:	5d                   	pop    %ebp
 8ad75cf:	c3                   	ret

```

```c
// CharString::rfind @ 0x8ad7580

/* DWARF original prototype: int32 rfind(CharString * this, CharString * pat) */

int32 __thiscall CharString::rfind(CharString *this,CharString *pat)

{
  int32 iVar1;
  char *pat_00;
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

## rfind_08ad75d0

```asm
// === 08ad75d0 CharString::rfind  [0x08ad75d0-0x8ad760f] ===
 8ad75d0:	55                   	push   %ebp
 8ad75d1:	89 e5                	mov    %esp,%ebp
 8ad75d3:	53                   	push   %ebx
 8ad75d4:	83 ec 14             	sub    $0x14,%esp
 8ad75d7:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad75da:	89 04 24             	mov    %eax,(%esp)
 8ad75dd:	e8 4e df ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad75e2:	89 c3                	mov    %eax,%ebx
 8ad75e4:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad75e7:	89 04 24             	mov    %eax,(%esp)
 8ad75ea:	e8 0d 8a 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad75ef:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8ad75f3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad75f7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad75fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad75fe:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7601:	89 04 24             	mov    %eax,(%esp)
 8ad7604:	e8 df fe ff ff       	call   8ad74e8 <_ZNK10CharString5rfindEiPKci>
 8ad7609:	83 c4 14             	add    $0x14,%esp
 8ad760c:	5b                   	pop    %ebx
 8ad760d:	5d                   	pop    %ebp
 8ad760e:	c3                   	ret
 8ad760f:	90                   	nop

```

```c
// CharString::rfind @ 0x8ad75d0

/* DWARF original prototype: int32 rfind(CharString * this, int32 pos, CharString * pat) */

int32 __thiscall CharString::rfind(CharString *this,int32 pos,CharString *pat)

{
  int32 iVar1;
  char *pat_00;
  
  iVar1 = length(pat);
  pat_00 = c_str(pat);
  iVar1 = rfind(this,pos,pat_00,iVar1);
  return iVar1;
}

```

---

## rfind_08ad7610

```asm
// === 08ad7610 CharString::rfind  [0x08ad7610-0x8ad7647] ===
 8ad7610:	55                   	push   %ebp
 8ad7611:	89 e5                	mov    %esp,%ebp
 8ad7613:	53                   	push   %ebx
 8ad7614:	83 ec 24             	sub    $0x24,%esp
 8ad7617:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad761a:	88 45 f4             	mov    %al,-0xc(%ebp)
 8ad761d:	0f be 5d f4          	movsbl -0xc(%ebp),%ebx
 8ad7621:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7624:	89 04 24             	mov    %eax,(%esp)
 8ad7627:	e8 04 df ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad762c:	83 e8 01             	sub    $0x1,%eax
 8ad762f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad7633:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad7637:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad763a:	89 04 24             	mov    %eax,(%esp)
 8ad763d:	e8 06 00 00 00       	call   8ad7648 <_ZNK10CharString5rfindEic>
 8ad7642:	83 c4 24             	add    $0x24,%esp
 8ad7645:	5b                   	pop    %ebx
 8ad7646:	5d                   	pop    %ebp
 8ad7647:	c3                   	ret

```

```c
// CharString::rfind @ 0x8ad7610

/* DWARF original prototype: int32 rfind(CharString * this, char pat) */

int32 __thiscall CharString::rfind(CharString *this,char pat)

{
  int32 iVar1;
  
  iVar1 = length(this);
  iVar1 = rfind(this,iVar1 + -1,pat);
  return iVar1;
}

```

---

## rfind_08ad7648

```asm
// === 08ad7648 CharString::rfind  [0x08ad7648-0x8ad76cd] ===
 8ad7648:	55                   	push   %ebp
 8ad7649:	89 e5                	mov    %esp,%ebp
 8ad764b:	83 ec 38             	sub    $0x38,%esp
 8ad764e:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad7651:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8ad7654:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8ad7658:	75 07                	jne    8ad7661 <_ZNK10CharString5rfindEic+0x19>
 8ad765a:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad765f:	eb 6b                	jmp    8ad76cc <_ZNK10CharString5rfindEic+0x84>
 8ad7661:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ad7665:	78 10                	js     8ad7677 <_ZNK10CharString5rfindEic+0x2f>
 8ad7667:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad766a:	89 04 24             	mov    %eax,(%esp)
 8ad766d:	e8 be de ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad7672:	3b 45 0c             	cmp    0xc(%ebp),%eax
 8ad7675:	7f 07                	jg     8ad767e <_ZNK10CharString5rfindEic+0x36>
 8ad7677:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad767c:	eb 05                	jmp    8ad7683 <_ZNK10CharString5rfindEic+0x3b>
 8ad767e:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad7683:	84 c0                	test   %al,%al
 8ad7685:	74 07                	je     8ad768e <_ZNK10CharString5rfindEic+0x46>
 8ad7687:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad768c:	eb 3e                	jmp    8ad76cc <_ZNK10CharString5rfindEic+0x84>
 8ad768e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad7691:	89 04 24             	mov    %eax,(%esp)
 8ad7694:	e8 63 89 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad7699:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad769c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad769f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad76a2:	eb 17                	jmp    8ad76bb <_ZNK10CharString5rfindEic+0x73>
 8ad76a4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad76a7:	03 45 f0             	add    -0x10(%ebp),%eax
 8ad76aa:	0f b6 00             	movzbl (%eax),%eax
 8ad76ad:	3a 45 e4             	cmp    -0x1c(%ebp),%al
 8ad76b0:	75 05                	jne    8ad76b7 <_ZNK10CharString5rfindEic+0x6f>
 8ad76b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad76b5:	eb 15                	jmp    8ad76cc <_ZNK10CharString5rfindEic+0x84>
 8ad76b7:	83 6d f4 01          	subl   $0x1,-0xc(%ebp)
 8ad76bb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad76be:	f7 d0                	not    %eax
 8ad76c0:	c1 e8 1f             	shr    $0x1f,%eax
 8ad76c3:	84 c0                	test   %al,%al
 8ad76c5:	75 dd                	jne    8ad76a4 <_ZNK10CharString5rfindEic+0x5c>
 8ad76c7:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8ad76cc:	c9                   	leave
 8ad76cd:	c3                   	ret

```

```c
// CharString::rfind @ 0x8ad7648

/* DWARF original prototype: int32 rfind(CharString * this, int32 pos, char pat) */

int32 __thiscall CharString::rfind(CharString *this,int32 pos,char pat)

{
  bool bVar1;
  int32 iVar2;
  char *pcVar3;
  int32 local_10;
  
                    /* Unresolved local var: char * strBuf@[???] */
  if (pat != '\0') {
    if ((pos < 0) || (iVar2 = length(this), iVar2 <= pos)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) {
      pcVar3 = c_str(this);
                    /* Unresolved local var: int32 thisPos@[???] */
      for (local_10 = pos; -1 < local_10; local_10 = local_10 + -1) {
        if (pcVar3[local_10] == pat) {
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
// === 08ad6ca2 CharString::setAt  [0x08ad6ca2-0x8ad6d6f] ===
 8ad6ca2:	55                   	push   %ebp
 8ad6ca3:	89 e5                	mov    %esp,%ebp
 8ad6ca5:	57                   	push   %edi
 8ad6ca6:	56                   	push   %esi
 8ad6ca7:	53                   	push   %ebx
 8ad6ca8:	83 ec 3c             	sub    $0x3c,%esp
 8ad6cab:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad6cae:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad6cb1:	88 45 d4             	mov    %al,-0x2c(%ebp)
 8ad6cb4:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6cb7:	8b 10                	mov    (%eax),%edx
 8ad6cb9:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad6cbc:	8d 04 02             	lea    (%edx,%eax,1),%eax
 8ad6cbf:	0f b6 00             	movzbl (%eax),%eax
 8ad6cc2:	3a 45 d4             	cmp    -0x2c(%ebp),%al
 8ad6cc5:	75 16                	jne    8ad6cdd <_ZN10CharString5setAtEic+0x3b>
 8ad6cc7:	89 d8                	mov    %ebx,%eax
 8ad6cc9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad6ccc:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad6cd0:	89 04 24             	mov    %eax,(%esp)
 8ad6cd3:	e8 ee fc ff ff       	call   8ad69c6 <_ZN10CharStringC1ERKS_>
 8ad6cd8:	e9 84 00 00 00       	jmp    8ad6d61 <_ZN10CharString5setAtEic+0xbf>
 8ad6cdd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6ce0:	89 04 24             	mov    %eax,(%esp)
 8ad6ce3:	e8 d4 04 00 00       	call   8ad71bc <_ZNK10CharString7getDataEv>
 8ad6ce8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ad6ceb:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad6cee:	89 04 24             	mov    %eax,(%esp)
 8ad6cf1:	e8 3e fc ff ff       	call   8ad6934 <_ZNK14CharStringData9getLengthEv>
 8ad6cf6:	89 04 24             	mov    %eax,(%esp)
 8ad6cf9:	e8 50 fc ff ff       	call   8ad694e <_ZN14CharStringData6createEi>
 8ad6cfe:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad6d01:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad6d04:	89 04 24             	mov    %eax,(%esp)
 8ad6d07:	e8 28 fc ff ff       	call   8ad6934 <_ZNK14CharStringData9getLengthEv>
 8ad6d0c:	83 c0 01             	add    $0x1,%eax
 8ad6d0f:	89 c7                	mov    %eax,%edi
 8ad6d11:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad6d14:	89 04 24             	mov    %eax,(%esp)
 8ad6d17:	e8 26 fc ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad6d1c:	89 c6                	mov    %eax,%esi
 8ad6d1e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad6d21:	89 04 24             	mov    %eax,(%esp)
 8ad6d24:	e8 19 fc ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad6d29:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8ad6d2d:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad6d31:	89 04 24             	mov    %eax,(%esp)
 8ad6d34:	e8 67 6b 5a ff       	call   807d8a0 <memcpy@plt>
 8ad6d39:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad6d3c:	89 04 24             	mov    %eax,(%esp)
 8ad6d3f:	e8 fe fb ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad6d44:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad6d47:	8d 14 10             	lea    (%eax,%edx,1),%edx
 8ad6d4a:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 8ad6d4e:	88 02                	mov    %al,(%edx)
 8ad6d50:	89 d8                	mov    %ebx,%eax
 8ad6d52:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ad6d55:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad6d59:	89 04 24             	mov    %eax,(%esp)
 8ad6d5c:	e8 3f fe ff ff       	call   8ad6ba0 <_ZN10CharStringC1EP14CharStringData>
 8ad6d61:	89 d8                	mov    %ebx,%eax
 8ad6d63:	89 d8                	mov    %ebx,%eax
 8ad6d65:	83 c4 3c             	add    $0x3c,%esp
 8ad6d68:	5b                   	pop    %ebx
 8ad6d69:	5e                   	pop    %esi
 8ad6d6a:	5f                   	pop    %edi
 8ad6d6b:	5d                   	pop    %ebp
 8ad6d6c:	c2 04 00             	ret    $0x4
 8ad6d6f:	90                   	nop

```

```c
// CharString::setAt @ 0x8ad6ca2

/* DWARF original prototype: CharString setAt(CharString * this, int32 idx, char ch) */

CharString __thiscall CharString::setAt(CharString *this,int32 idx,char ch)

{
  CharStringData *this_00;
  int32 iVar1;
  CharStringData *this_01;
  char *pcVar2;
  char *__dest;
  undefined3 in_stack_0000000d;
  char in_stack_00000010;
  
                    /* Unresolved local var: CharStringData * thisData@[???]
                       Unresolved local var: CharStringData * newData@[???] */
  if (*(char *)(*(int *)idx + _ch) == in_stack_00000010) {
    CharString(this,(CharString *)idx);
  }
  else {
    this_00 = getData((CharString *)idx);
    iVar1 = CharStringData::getLength(this_00);
    this_01 = CharStringData::create(iVar1);
    iVar1 = CharStringData::getLength(this_00);
    pcVar2 = CharStringData::getBuffer(this_00);
    __dest = CharStringData::getBuffer(this_01);
    memcpy(__dest,pcVar2,iVar1 + 1);
    pcVar2 = CharStringData::getBuffer(this_01);
    pcVar2[_ch] = in_stack_00000010;
    CharString(this,this_01);
  }
  return (CharString)(char *)this;
}

```

---

## startsWith

```asm
// === 08ad6d70 CharString::startsWith  [0x08ad6d70-0x8ad6e01] ===
 8ad6d70:	55                   	push   %ebp
 8ad6d71:	89 e5                	mov    %esp,%ebp
 8ad6d73:	53                   	push   %ebx
 8ad6d74:	83 ec 34             	sub    $0x34,%esp
 8ad6d77:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad6d7a:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8ad6d7d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad6d80:	89 04 24             	mov    %eax,(%esp)
 8ad6d83:	e8 28 76 5a ff       	call   807e3b0 <strlen@plt>
 8ad6d88:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad6d8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6d8e:	89 04 24             	mov    %eax,(%esp)
 8ad6d91:	e8 9a e7 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad6d96:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 8ad6d99:	0f 9c c0             	setl   %al
 8ad6d9c:	84 c0                	test   %al,%al
 8ad6d9e:	74 07                	je     8ad6da7 <_ZNK10CharString10startsWithEPKcb+0x37>
 8ad6da0:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad6da5:	eb 54                	jmp    8ad6dfb <_ZNK10CharString10startsWithEPKcb+0x8b>
 8ad6da7:	80 7d e4 00          	cmpb   $0x0,-0x1c(%ebp)
 8ad6dab:	74 28                	je     8ad6dd5 <_ZNK10CharString10startsWithEPKcb+0x65>
 8ad6dad:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad6db0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6db3:	89 04 24             	mov    %eax,(%esp)
 8ad6db6:	e8 41 92 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad6dbb:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad6dbf:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad6dc2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad6dc6:	89 04 24             	mov    %eax,(%esp)
 8ad6dc9:	e8 52 73 5a ff       	call   807e120 <strncasecmp@plt>
 8ad6dce:	85 c0                	test   %eax,%eax
 8ad6dd0:	0f 94 c0             	sete   %al
 8ad6dd3:	eb 26                	jmp    8ad6dfb <_ZNK10CharString10startsWithEPKcb+0x8b>
 8ad6dd5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad6dd8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6ddb:	89 04 24             	mov    %eax,(%esp)
 8ad6dde:	e8 19 92 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad6de3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ad6de7:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad6dea:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad6dee:	89 04 24             	mov    %eax,(%esp)
 8ad6df1:	e8 ca 7a 5a ff       	call   807e8c0 <strncmp@plt>
 8ad6df6:	85 c0                	test   %eax,%eax
 8ad6df8:	0f 94 c0             	sete   %al
 8ad6dfb:	83 c4 34             	add    $0x34,%esp
 8ad6dfe:	5b                   	pop    %ebx
 8ad6dff:	5d                   	pop    %ebp
 8ad6e00:	c3                   	ret
 8ad6e01:	90                   	nop

```

```c
// CharString::startsWith @ 0x8ad6d70

/* DWARF original prototype: bool startsWith(CharString * this, char * pat, bool isIgnoreCase) */

bool __thiscall CharString::startsWith(CharString *this,char *pat,bool isIgnoreCase)

{
  size_t __n;
  int32 iVar1;
  char *pcVar2;
  int iVar3;
  bool bVar4;
  
                    /* Unresolved local var: int32 patLength@[???] */
  __n = strlen(pat);
  iVar1 = length(this);
  if (iVar1 < (int)__n) {
    bVar4 = false;
  }
  else if (isIgnoreCase) {
    pcVar2 = c_str(this);
    iVar3 = strncasecmp(pcVar2,pat,__n);
    bVar4 = iVar3 == 0;
  }
  else {
    pcVar2 = c_str(this);
    iVar3 = strncmp(pcVar2,pat,__n);
    bVar4 = iVar3 == 0;
  }
  return bVar4;
}

```

---

## tokenize

```asm
// === 08ad8c3a CharString::tokenize  [0x08ad8c3a-0x8ad8c6b] ===
 8ad8c3a:	55                   	push   %ebp
 8ad8c3b:	89 e5                	mov    %esp,%ebp
 8ad8c3d:	83 ec 28             	sub    $0x28,%esp
 8ad8c40:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8ad8c47:	00 
 8ad8c48:	c7 44 24 0c 60 2c e3 	movl   $0x8e32c60,0xc(%esp)
 8ad8c4f:	08 
 8ad8c50:	c7 44 24 08 63 2c e3 	movl   $0x8e32c63,0x8(%esp)
 8ad8c57:	08 
 8ad8c58:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8c5b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad8c5f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad8c62:	89 04 24             	mov    %eax,(%esp)
 8ad8c65:	e8 02 00 00 00       	call   8ad8c6c <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b>
 8ad8c6a:	c9                   	leave
 8ad8c6b:	c3                   	ret

```

```c
// CharString::tokenize @ 0x8ad8c3a

int32 CharString::tokenize
                (CharString *str,vector<CharString,_std::allocator<CharString>_> *tokenVector)

{
  int32 iVar1;
  
  iVar1 = tokenize(str,tokenVector," \t\n\r",".,",false);
  return iVar1;
}

```

---

## tokenizeNewLine

```asm
// === 08ad8fce CharString::tokenizeNewLine  [0x08ad8fce-0x8ad920d] ===
 8ad8fce:	55                   	push   %ebp
 8ad8fcf:	89 e5                	mov    %esp,%ebp
 8ad8fd1:	56                   	push   %esi
 8ad8fd2:	53                   	push   %ebx
 8ad8fd3:	83 ec 40             	sub    $0x40,%esp
 8ad8fd6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad8fd9:	89 04 24             	mov    %eax,(%esp)
 8ad8fdc:	e8 1b 70 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad8fe1:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8ad8fe4:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad8fe7:	89 04 24             	mov    %eax,(%esp)
 8ad8fea:	e8 41 c5 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad8fef:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8ad8ff2:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8ad8ff9:	c7 45 e8 ff ff ff ff 	movl   $0xffffffff,-0x18(%ebp)
 8ad9000:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 8ad9007:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8ad900e:	e9 18 01 00 00       	jmp    8ad912b <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x15d>
 8ad9013:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad9016:	03 45 dc             	add    -0x24(%ebp),%eax
 8ad9019:	0f b6 00             	movzbl (%eax),%eax
 8ad901c:	88 45 f7             	mov    %al,-0x9(%ebp)
 8ad901f:	80 7d f7 0d          	cmpb   $0xd,-0x9(%ebp)
 8ad9023:	0f 85 87 00 00 00    	jne    8ad90b0 <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0xe2>
 8ad9029:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad902c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ad902f:	29 c2                	sub    %eax,%edx
 8ad9031:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ad9034:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad9038:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ad903b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad903f:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad9042:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9046:	89 04 24             	mov    %eax,(%esp)
 8ad9049:	e8 02 ef ff ff       	call   8ad7f50 <_Z3midRK10CharStringii>
 8ad904e:	83 ec 04             	sub    $0x4,%esp
 8ad9051:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ad9054:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9058:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad905b:	89 04 24             	mov    %eax,(%esp)
 8ad905e:	e8 6d 42 00 00       	call   8add2d0 <_ZNSt6vectorI10CharStringSaIS0_EE9push_backEOS0_>
 8ad9063:	eb 1b                	jmp    8ad9080 <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0xb2>
 8ad9065:	89 d3                	mov    %edx,%ebx
 8ad9067:	89 c6                	mov    %eax,%esi
 8ad9069:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ad906c:	89 04 24             	mov    %eax,(%esp)
 8ad906f:	e8 46 db ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad9074:	89 f0                	mov    %esi,%eax
 8ad9076:	89 da                	mov    %ebx,%edx
 8ad9078:	89 04 24             	mov    %eax,(%esp)
 8ad907b:	e8 d0 a6 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad9080:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ad9083:	89 04 24             	mov    %eax,(%esp)
 8ad9086:	e8 2f db ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad908b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad908e:	83 c0 01             	add    $0x1,%eax
 8ad9091:	03 45 dc             	add    -0x24(%ebp),%eax
 8ad9094:	0f b6 00             	movzbl (%eax),%eax
 8ad9097:	3c 0a                	cmp    $0xa,%al
 8ad9099:	75 04                	jne    8ad909f <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0xd1>
 8ad909b:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8ad909f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad90a2:	83 c0 01             	add    $0x1,%eax
 8ad90a5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad90a8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad90ab:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ad90ae:	eb 77                	jmp    8ad9127 <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x159>
 8ad90b0:	80 7d f7 0a          	cmpb   $0xa,-0x9(%ebp)
 8ad90b4:	75 71                	jne    8ad9127 <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x159>
 8ad90b6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad90b9:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ad90bc:	29 c2                	sub    %eax,%edx
 8ad90be:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ad90c1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad90c5:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ad90c8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad90cc:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad90cf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad90d3:	89 04 24             	mov    %eax,(%esp)
 8ad90d6:	e8 75 ee ff ff       	call   8ad7f50 <_Z3midRK10CharStringii>
 8ad90db:	83 ec 04             	sub    $0x4,%esp
 8ad90de:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ad90e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad90e5:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad90e8:	89 04 24             	mov    %eax,(%esp)
 8ad90eb:	e8 e0 41 00 00       	call   8add2d0 <_ZNSt6vectorI10CharStringSaIS0_EE9push_backEOS0_>
 8ad90f0:	eb 1b                	jmp    8ad910d <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x13f>
 8ad90f2:	89 d3                	mov    %edx,%ebx
 8ad90f4:	89 c6                	mov    %eax,%esi
 8ad90f6:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ad90f9:	89 04 24             	mov    %eax,(%esp)
 8ad90fc:	e8 b9 da ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad9101:	89 f0                	mov    %esi,%eax
 8ad9103:	89 da                	mov    %ebx,%edx
 8ad9105:	89 04 24             	mov    %eax,(%esp)
 8ad9108:	e8 43 a6 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad910d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ad9110:	89 04 24             	mov    %eax,(%esp)
 8ad9113:	e8 a2 da ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad9118:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad911b:	83 c0 01             	add    $0x1,%eax
 8ad911e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad9121:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad9124:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ad9127:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 8ad912b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad912e:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8ad9131:	0f 9c c0             	setl   %al
 8ad9134:	84 c0                	test   %al,%al
 8ad9136:	0f 85 d7 fe ff ff    	jne    8ad9013 <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x45>
 8ad913c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad913f:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 8ad9142:	74 68                	je     8ad91ac <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x1de>
 8ad9144:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad9147:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8ad914a:	29 c2                	sub    %eax,%edx
 8ad914c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ad914f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad9153:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8ad9156:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad915a:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad915d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad9161:	89 04 24             	mov    %eax,(%esp)
 8ad9164:	e8 e7 ed ff ff       	call   8ad7f50 <_Z3midRK10CharStringii>
 8ad9169:	83 ec 04             	sub    $0x4,%esp
 8ad916c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ad916f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad9173:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad9176:	89 04 24             	mov    %eax,(%esp)
 8ad9179:	e8 52 41 00 00       	call   8add2d0 <_ZNSt6vectorI10CharStringSaIS0_EE9push_backEOS0_>
 8ad917e:	eb 1b                	jmp    8ad919b <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x1cd>
 8ad9180:	89 d3                	mov    %edx,%ebx
 8ad9182:	89 c6                	mov    %eax,%esi
 8ad9184:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ad9187:	89 04 24             	mov    %eax,(%esp)
 8ad918a:	e8 2b da ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad918f:	89 f0                	mov    %esi,%eax
 8ad9191:	89 da                	mov    %ebx,%edx
 8ad9193:	89 04 24             	mov    %eax,(%esp)
 8ad9196:	e8 b5 a5 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad919b:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ad919e:	89 04 24             	mov    %eax,(%esp)
 8ad91a1:	e8 14 da ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad91a6:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8ad91aa:	eb 54                	jmp    8ad9200 <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x232>
 8ad91ac:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad91af:	83 e8 01             	sub    $0x1,%eax
 8ad91b2:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 8ad91b5:	75 49                	jne    8ad9200 <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x232>
 8ad91b7:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ad91ba:	89 04 24             	mov    %eax,(%esp)
 8ad91bd:	e8 e8 d7 ff ff       	call   8ad69aa <_ZN10CharStringC1Ev>
 8ad91c2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ad91c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad91c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad91cc:	89 04 24             	mov    %eax,(%esp)
 8ad91cf:	e8 fc 40 00 00       	call   8add2d0 <_ZNSt6vectorI10CharStringSaIS0_EE9push_backEOS0_>
 8ad91d4:	eb 1b                	jmp    8ad91f1 <_ZN10CharString15tokenizeNewLineERKS_PSt6vectorIS_SaIS_EE+0x223>
 8ad91d6:	89 d3                	mov    %edx,%ebx
 8ad91d8:	89 c6                	mov    %eax,%esi
 8ad91da:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ad91dd:	89 04 24             	mov    %eax,(%esp)
 8ad91e0:	e8 d5 d9 ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad91e5:	89 f0                	mov    %esi,%eax
 8ad91e7:	89 da                	mov    %ebx,%edx
 8ad91e9:	89 04 24             	mov    %eax,(%esp)
 8ad91ec:	e8 5f a5 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad91f1:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8ad91f4:	89 04 24             	mov    %eax,(%esp)
 8ad91f7:	e8 be d9 ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad91fc:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8ad9200:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad9203:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ad9206:	83 c4 00             	add    $0x0,%esp
 8ad9209:	5b                   	pop    %ebx
 8ad920a:	5e                   	pop    %esi
 8ad920b:	5d                   	pop    %ebp
 8ad920c:	c3                   	ret
 8ad920d:	90                   	nop

```

```c
// CharString::tokenizeNewLine @ 0x8ad8fce

int32 CharString::tokenizeNewLine
                (CharString *str,vector<CharString,_std::allocator<CharString>_> *tokenVector)

{
  CharString *pCVar1;
  CharString local_38;
  CharString local_34;
  CharString local_30;
  CharString local_2c;
  char *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  char local_d;
  
                    /* Unresolved local var: char * strBuf@[???]
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
                    /* Unresolved local var: char c@[???] */
    local_d = local_28[local_14];
    if (local_d == '\r') {
      mid(&local_38,str,local_20,local_14 - local_20);
      pCVar1 = &local_38;
                    /* try { // try from 08ad905e to 08ad9062 has its CatchHandler @ 08ad9065 */
      std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar1);
      ~CharString(&local_38,(int)pCVar1);
      if (local_28[local_14 + 1] == '\n') {
        local_14 = local_14 + 1;
      }
      local_20 = local_14 + 1;
      local_1c = local_14;
    }
    else if (local_d == '\n') {
      mid(&local_34,str,local_20,local_14 - local_20);
      pCVar1 = &local_34;
                    /* try { // try from 08ad90eb to 08ad90ef has its CatchHandler @ 08ad90f2 */
      std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar1);
      ~CharString(&local_34,(int)pCVar1);
      local_20 = local_14 + 1;
      local_1c = local_14;
    }
  }
  if (local_20 == local_24) {
    if (local_24 + -1 == local_1c) {
      CharString(&local_2c);
      pCVar1 = &local_2c;
                    /* try { // try from 08ad91cf to 08ad91d3 has its CatchHandler @ 08ad91d6 */
      std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar1);
      ~CharString(&local_2c,(int)pCVar1);
      local_18 = local_18 + 1;
    }
  }
  else {
    mid(&local_30,str,local_20,local_24 - local_20);
    pCVar1 = &local_30;
                    /* try { // try from 08ad9179 to 08ad917d has its CatchHandler @ 08ad9180 */
    std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar1);
    ~CharString(&local_30,(int)pCVar1);
    local_18 = local_18 + 1;
  }
  return local_18;
}

```

---

## tokenize_08ad8c6c

```asm
// === 08ad8c6c CharString::tokenize  [0x08ad8c6c-0x8ad8fcd] ===
 8ad8c6c:	55                   	push   %ebp
 8ad8c6d:	89 e5                	mov    %esp,%ebp
 8ad8c6f:	56                   	push   %esi
 8ad8c70:	53                   	push   %ebx
 8ad8c71:	83 ec 60             	sub    $0x60,%esp
 8ad8c74:	8b 45 18             	mov    0x18(%ebp),%eax
 8ad8c77:	88 45 b4             	mov    %al,-0x4c(%ebp)
 8ad8c7a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad8c7d:	89 04 24             	mov    %eax,(%esp)
 8ad8c80:	e8 77 73 5a ff       	call   807fffc <_ZNK10CharString5c_strEv>
 8ad8c85:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8ad8c88:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad8c8b:	89 04 24             	mov    %eax,(%esp)
 8ad8c8e:	e8 9d c8 ff ff       	call   8ad5530 <_ZNK10CharString6lengthEv>
 8ad8c93:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8ad8c96:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8ad8c9d:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8ad8ca4:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8ad8cab:	e9 91 02 00 00       	jmp    8ad8f41 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x2d5>
 8ad8cb0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad8cb3:	03 45 d0             	add    -0x30(%ebp),%eax
 8ad8cb6:	0f b6 00             	movzbl (%eax),%eax
 8ad8cb9:	88 45 e7             	mov    %al,-0x19(%ebp)
 8ad8cbc:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad8cbf:	89 45 e8             	mov    %eax,-0x18(%ebp)
 8ad8cc2:	eb 04                	jmp    8ad8cc8 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x5c>
 8ad8cc4:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 8ad8cc8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad8ccb:	0f b6 00             	movzbl (%eax),%eax
 8ad8cce:	84 c0                	test   %al,%al
 8ad8cd0:	74 12                	je     8ad8ce4 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x78>
 8ad8cd2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad8cd5:	0f b6 00             	movzbl (%eax),%eax
 8ad8cd8:	3a 45 e7             	cmp    -0x19(%ebp),%al
 8ad8cdb:	74 07                	je     8ad8ce4 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x78>
 8ad8cdd:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad8ce2:	eb 05                	jmp    8ad8ce9 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x7d>
 8ad8ce4:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad8ce9:	84 c0                	test   %al,%al
 8ad8ceb:	75 d7                	jne    8ad8cc4 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x58>
 8ad8ced:	8b 45 e8             	mov    -0x18(%ebp),%eax
 8ad8cf0:	0f b6 00             	movzbl (%eax),%eax
 8ad8cf3:	84 c0                	test   %al,%al
 8ad8cf5:	0f 84 d9 00 00 00    	je     8ad8dd4 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x168>
 8ad8cfb:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ad8cfe:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8ad8d01:	89 d1                	mov    %edx,%ecx
 8ad8d03:	29 c1                	sub    %eax,%ecx
 8ad8d05:	89 c8                	mov    %ecx,%eax
 8ad8d07:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad8d0a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8ad8d0e:	75 55                	jne    8ad8d65 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0xf9>
 8ad8d10:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
 8ad8d14:	0f 84 ac 00 00 00    	je     8ad8dc6 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x15a>
 8ad8d1a:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad8d1d:	89 04 24             	mov    %eax,(%esp)
 8ad8d20:	e8 85 dc ff ff       	call   8ad69aa <_ZN10CharStringC1Ev>
 8ad8d25:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad8d28:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad8d2c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8d2f:	89 04 24             	mov    %eax,(%esp)
 8ad8d32:	e8 99 45 00 00       	call   8add2d0 <_ZNSt6vectorI10CharStringSaIS0_EE9push_backEOS0_>
 8ad8d37:	eb 1b                	jmp    8ad8d54 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0xe8>
 8ad8d39:	89 d3                	mov    %edx,%ebx
 8ad8d3b:	89 c6                	mov    %eax,%esi
 8ad8d3d:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad8d40:	89 04 24             	mov    %eax,(%esp)
 8ad8d43:	e8 72 de ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad8d48:	89 f0                	mov    %esi,%eax
 8ad8d4a:	89 da                	mov    %ebx,%edx
 8ad8d4c:	89 04 24             	mov    %eax,(%esp)
 8ad8d4f:	e8 fc a9 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad8d54:	8d 45 b8             	lea    -0x48(%ebp),%eax
 8ad8d57:	89 04 24             	mov    %eax,(%esp)
 8ad8d5a:	e8 5b de ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad8d5f:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8ad8d63:	eb 61                	jmp    8ad8dc6 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x15a>
 8ad8d65:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ad8d68:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8ad8d6b:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad8d6f:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8ad8d72:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad8d76:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad8d79:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad8d7d:	89 04 24             	mov    %eax,(%esp)
 8ad8d80:	e8 cb f1 ff ff       	call   8ad7f50 <_Z3midRK10CharStringii>
 8ad8d85:	83 ec 04             	sub    $0x4,%esp
 8ad8d88:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ad8d8b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad8d8f:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8d92:	89 04 24             	mov    %eax,(%esp)
 8ad8d95:	e8 36 45 00 00       	call   8add2d0 <_ZNSt6vectorI10CharStringSaIS0_EE9push_backEOS0_>
 8ad8d9a:	eb 1b                	jmp    8ad8db7 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x14b>
 8ad8d9c:	89 d3                	mov    %edx,%ebx
 8ad8d9e:	89 c6                	mov    %eax,%esi
 8ad8da0:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ad8da3:	89 04 24             	mov    %eax,(%esp)
 8ad8da6:	e8 0f de ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad8dab:	89 f0                	mov    %esi,%eax
 8ad8dad:	89 da                	mov    %ebx,%edx
 8ad8daf:	89 04 24             	mov    %eax,(%esp)
 8ad8db2:	e8 99 a9 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad8db7:	8d 45 bc             	lea    -0x44(%ebp),%eax
 8ad8dba:	89 04 24             	mov    %eax,(%esp)
 8ad8dbd:	e8 f8 dd ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad8dc2:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8ad8dc6:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad8dc9:	83 c0 01             	add    $0x1,%eax
 8ad8dcc:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8ad8dcf:	e9 69 01 00 00       	jmp    8ad8f3d <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x2d1>
 8ad8dd4:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad8dd7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8ad8dda:	eb 04                	jmp    8ad8de0 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x174>
 8ad8ddc:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 8ad8de0:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad8de3:	0f b6 00             	movzbl (%eax),%eax
 8ad8de6:	84 c0                	test   %al,%al
 8ad8de8:	74 12                	je     8ad8dfc <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x190>
 8ad8dea:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad8ded:	0f b6 00             	movzbl (%eax),%eax
 8ad8df0:	3a 45 e7             	cmp    -0x19(%ebp),%al
 8ad8df3:	74 07                	je     8ad8dfc <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x190>
 8ad8df5:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad8dfa:	eb 05                	jmp    8ad8e01 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x195>
 8ad8dfc:	b8 00 00 00 00       	mov    $0x0,%eax
 8ad8e01:	84 c0                	test   %al,%al
 8ad8e03:	75 d7                	jne    8ad8ddc <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x170>
 8ad8e05:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad8e08:	0f b6 00             	movzbl (%eax),%eax
 8ad8e0b:	84 c0                	test   %al,%al
 8ad8e0d:	0f 84 2a 01 00 00    	je     8ad8f3d <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x2d1>
 8ad8e13:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ad8e16:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8ad8e19:	89 d1                	mov    %edx,%ecx
 8ad8e1b:	29 c1                	sub    %eax,%ecx
 8ad8e1d:	89 c8                	mov    %ecx,%eax
 8ad8e1f:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad8e22:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ad8e26:	75 55                	jne    8ad8e7d <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x211>
 8ad8e28:	80 7d b4 00          	cmpb   $0x0,-0x4c(%ebp)
 8ad8e2c:	0f 84 ac 00 00 00    	je     8ad8ede <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x272>
 8ad8e32:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ad8e35:	89 04 24             	mov    %eax,(%esp)
 8ad8e38:	e8 6d db ff ff       	call   8ad69aa <_ZN10CharStringC1Ev>
 8ad8e3d:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ad8e40:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad8e44:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8e47:	89 04 24             	mov    %eax,(%esp)
 8ad8e4a:	e8 81 44 00 00       	call   8add2d0 <_ZNSt6vectorI10CharStringSaIS0_EE9push_backEOS0_>
 8ad8e4f:	eb 1b                	jmp    8ad8e6c <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x200>
 8ad8e51:	89 d3                	mov    %edx,%ebx
 8ad8e53:	89 c6                	mov    %eax,%esi
 8ad8e55:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ad8e58:	89 04 24             	mov    %eax,(%esp)
 8ad8e5b:	e8 5a dd ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad8e60:	89 f0                	mov    %esi,%eax
 8ad8e62:	89 da                	mov    %ebx,%edx
 8ad8e64:	89 04 24             	mov    %eax,(%esp)
 8ad8e67:	e8 e4 a8 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad8e6c:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8ad8e6f:	89 04 24             	mov    %eax,(%esp)
 8ad8e72:	e8 43 dd ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad8e77:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8ad8e7b:	eb 61                	jmp    8ad8ede <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x272>
 8ad8e7d:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ad8e80:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ad8e83:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad8e87:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8ad8e8a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad8e8e:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad8e91:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad8e95:	89 04 24             	mov    %eax,(%esp)
 8ad8e98:	e8 b3 f0 ff ff       	call   8ad7f50 <_Z3midRK10CharStringii>
 8ad8e9d:	83 ec 04             	sub    $0x4,%esp
 8ad8ea0:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ad8ea3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad8ea7:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8eaa:	89 04 24             	mov    %eax,(%esp)
 8ad8ead:	e8 1e 44 00 00       	call   8add2d0 <_ZNSt6vectorI10CharStringSaIS0_EE9push_backEOS0_>
 8ad8eb2:	eb 1b                	jmp    8ad8ecf <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x263>
 8ad8eb4:	89 d3                	mov    %edx,%ebx
 8ad8eb6:	89 c6                	mov    %eax,%esi
 8ad8eb8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ad8ebb:	89 04 24             	mov    %eax,(%esp)
 8ad8ebe:	e8 f7 dc ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad8ec3:	89 f0                	mov    %esi,%eax
 8ad8ec5:	89 da                	mov    %ebx,%edx
 8ad8ec7:	89 04 24             	mov    %eax,(%esp)
 8ad8eca:	e8 81 a8 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad8ecf:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 8ad8ed2:	89 04 24             	mov    %eax,(%esp)
 8ad8ed5:	e8 e0 dc ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad8eda:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8ad8ede:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8ad8ee1:	0f b6 00             	movzbl (%eax),%eax
 8ad8ee4:	0f be c0             	movsbl %al,%eax
 8ad8ee7:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad8eeb:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ad8eee:	89 04 24             	mov    %eax,(%esp)
 8ad8ef1:	e8 6a dc ff ff       	call   8ad6b60 <_ZN10CharStringC1Ec>
 8ad8ef6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ad8ef9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad8efd:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8f00:	89 04 24             	mov    %eax,(%esp)
 8ad8f03:	e8 c8 43 00 00       	call   8add2d0 <_ZNSt6vectorI10CharStringSaIS0_EE9push_backEOS0_>
 8ad8f08:	eb 1b                	jmp    8ad8f25 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x2b9>
 8ad8f0a:	89 d3                	mov    %edx,%ebx
 8ad8f0c:	89 c6                	mov    %eax,%esi
 8ad8f0e:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ad8f11:	89 04 24             	mov    %eax,(%esp)
 8ad8f14:	e8 a1 dc ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad8f19:	89 f0                	mov    %esi,%eax
 8ad8f1b:	89 da                	mov    %ebx,%edx
 8ad8f1d:	89 04 24             	mov    %eax,(%esp)
 8ad8f20:	e8 2b a8 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad8f25:	8d 45 c8             	lea    -0x38(%ebp),%eax
 8ad8f28:	89 04 24             	mov    %eax,(%esp)
 8ad8f2b:	e8 8a dc ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad8f30:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8ad8f34:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad8f37:	83 c0 01             	add    $0x1,%eax
 8ad8f3a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8ad8f3d:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 8ad8f41:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad8f44:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 8ad8f47:	0f 9c c0             	setl   %al
 8ad8f4a:	84 c0                	test   %al,%al
 8ad8f4c:	0f 85 5e fd ff ff    	jne    8ad8cb0 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x44>
 8ad8f52:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ad8f55:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 8ad8f58:	74 66                	je     8ad8fc0 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x354>
 8ad8f5a:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ad8f5d:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad8f60:	29 c2                	sub    %eax,%edx
 8ad8f62:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ad8f65:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad8f69:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8ad8f6c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad8f70:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad8f73:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad8f77:	89 04 24             	mov    %eax,(%esp)
 8ad8f7a:	e8 d1 ef ff ff       	call   8ad7f50 <_Z3midRK10CharStringii>
 8ad8f7f:	83 ec 04             	sub    $0x4,%esp
 8ad8f82:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ad8f85:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad8f89:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8f8c:	89 04 24             	mov    %eax,(%esp)
 8ad8f8f:	e8 3c 43 00 00       	call   8add2d0 <_ZNSt6vectorI10CharStringSaIS0_EE9push_backEOS0_>
 8ad8f94:	eb 1b                	jmp    8ad8fb1 <_ZN10CharString8tokenizeERKS_PSt6vectorIS_SaIS_EEPKcS7_b+0x345>
 8ad8f96:	89 d3                	mov    %edx,%ebx
 8ad8f98:	89 c6                	mov    %eax,%esi
 8ad8f9a:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ad8f9d:	89 04 24             	mov    %eax,(%esp)
 8ad8fa0:	e8 15 dc ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad8fa5:	89 f0                	mov    %esi,%eax
 8ad8fa7:	89 da                	mov    %ebx,%edx
 8ad8fa9:	89 04 24             	mov    %eax,(%esp)
 8ad8fac:	e8 9f a7 00 00       	call   8ae3750 <_Unwind_Resume>
 8ad8fb1:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8ad8fb4:	89 04 24             	mov    %eax,(%esp)
 8ad8fb7:	e8 fe db ff ff       	call   8ad6bba <_ZN10CharStringD1Ev>
 8ad8fbc:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 8ad8fc0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ad8fc3:	8d 65 f8             	lea    -0x8(%ebp),%esp
 8ad8fc6:	83 c4 00             	add    $0x0,%esp
 8ad8fc9:	5b                   	pop    %ebx
 8ad8fca:	5e                   	pop    %esi
 8ad8fcb:	5d                   	pop    %ebp
 8ad8fcc:	c3                   	ret
 8ad8fcd:	90                   	nop

```

```c
// CharString::tokenize @ 0x8ad8c6c

int32 CharString::tokenize
                (CharString *str,vector<CharString,_std::allocator<CharString>_> *tokenVector,
                char *dropDelimiters,char *returnDelimiters,bool isKeepEmptyToken)

{
  bool bVar1;
  CharString *pCVar2;
  CharString local_4c;
  CharString local_48;
  CharString local_44;
  CharString local_40;
  CharString local_3c;
  CharString local_38;
  char *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  char local_1d;
  char *local_1c;
  char *local_18;
  int local_14;
  int local_10;
  
                    /* Unresolved local var: char * strBuf@[???]
                       Unresolved local var: int32 strLen@[???]
                       Unresolved local var: int32 nextTokenStartIdx@[???]
                       Unresolved local var: int32 tokenCount@[???] */
  local_34 = c_str(str);
  local_30 = length(str);
  local_2c = 0;
  local_28 = 0;
                    /* Unresolved local var: int32 i@[???] */
  for (local_24 = 0; local_24 < local_30; local_24 = local_24 + 1) {
                    /* Unresolved local var: char c@[???]
                       Unresolved local var: char * d0@[???]
                       Unresolved local var: char * d1@[???] */
    local_1d = local_34[local_24];
    local_1c = dropDelimiters;
    while( true ) {
      if ((*local_1c == '\0') || (*local_1c == local_1d)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (!bVar1) break;
      local_1c = local_1c + 1;
    }
    if (*local_1c == '\0') {
      local_18 = returnDelimiters;
      while( true ) {
        if ((*local_18 == '\0') || (*local_18 == local_1d)) {
          bVar1 = false;
        }
        else {
          bVar1 = true;
        }
        if (!bVar1) break;
        local_18 = local_18 + 1;
      }
      if (*local_18 != '\0') {
                    /* Unresolved local var: int32 newLen@[???] */
        local_10 = local_24 - local_2c;
        if (local_10 == 0) {
          if (isKeepEmptyToken) {
            CharString(&local_44);
            pCVar2 = &local_44;
                    /* try { // try from 08ad8e4a to 08ad8e4e has its CatchHandler @ 08ad8e51 */
            std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar2);
            ~CharString(&local_44,(int)pCVar2);
            local_28 = local_28 + 1;
          }
        }
        else {
          mid(&local_40,str,local_2c,local_10);
          pCVar2 = &local_40;
                    /* try { // try from 08ad8ead to 08ad8eb1 has its CatchHandler @ 08ad8eb4 */
          std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar2);
          ~CharString(&local_40,(int)pCVar2);
          local_28 = local_28 + 1;
        }
        CharString(&local_3c,*local_18);
        pCVar2 = &local_3c;
                    /* try { // try from 08ad8f03 to 08ad8f07 has its CatchHandler @ 08ad8f0a */
        std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar2);
        ~CharString(&local_3c,(int)pCVar2);
        local_28 = local_28 + 1;
        local_2c = local_24 + 1;
      }
    }
    else {
                    /* Unresolved local var: int32 newLen@[???] */
      local_14 = local_24 - local_2c;
      if (local_14 == 0) {
        if (isKeepEmptyToken) {
          CharString(&local_4c);
          pCVar2 = &local_4c;
                    /* try { // try from 08ad8d32 to 08ad8d36 has its CatchHandler @ 08ad8d39 */
          std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar2);
          ~CharString(&local_4c,(int)pCVar2);
          local_28 = local_28 + 1;
        }
      }
      else {
        mid(&local_48,str,local_2c,local_14);
        pCVar2 = &local_48;
                    /* try { // try from 08ad8d95 to 08ad8d99 has its CatchHandler @ 08ad8d9c */
        std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar2);
        ~CharString(&local_48,(int)pCVar2);
        local_28 = local_28 + 1;
      }
      local_2c = local_24 + 1;
    }
  }
  if (local_2c != local_30) {
    mid(&local_38,str,local_2c,local_30 - local_2c);
    pCVar2 = &local_38;
                    /* try { // try from 08ad8f8f to 08ad8f93 has its CatchHandler @ 08ad8f96 */
    std::vector<CharString,_std::allocator<CharString>_>::push_back(tokenVector,pCVar2);
    ~CharString(&local_38,(int)pCVar2);
    local_28 = local_28 + 1;
  }
  return local_28;
}

```

---

## vformat

```asm
// === 08ad8b9e CharString::vformat  [0x08ad8b9e-0x8ad8c39] ===
 8ad8b9e:	55                   	push   %ebp
 8ad8b9f:	89 e5                	mov    %esp,%ebp
 8ad8ba1:	56                   	push   %esi
 8ad8ba2:	53                   	push   %ebx
 8ad8ba3:	83 ec 20             	sub    $0x20,%esp
 8ad8ba6:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad8ba9:	8b 45 10             	mov    0x10(%ebp),%eax
 8ad8bac:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad8bb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad8bb3:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad8bb7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ad8bbe:	00 
 8ad8bbf:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 8ad8bc6:	e8 25 5a 5a ff       	call   807e5f0 <vsnprintf@plt>
 8ad8bcb:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ad8bce:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8ad8bd2:	75 0c                	jne    8ad8be0 <_ZN10CharString7vformatEPKcPc+0x42>
 8ad8bd4:	89 d8                	mov    %ebx,%eax
 8ad8bd6:	89 04 24             	mov    %eax,(%esp)
 8ad8bd9:	e8 cc dd ff ff       	call   8ad69aa <_ZN10CharStringC1Ev>
 8ad8bde:	eb 4c                	jmp    8ad8c2c <_ZN10CharString7vformatEPKcPc+0x8e>
 8ad8be0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad8be3:	89 04 24             	mov    %eax,(%esp)
 8ad8be6:	e8 63 dd ff ff       	call   8ad694e <_ZN14CharStringData6createEi>
 8ad8beb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad8bee:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ad8bf1:	83 c0 01             	add    $0x1,%eax
 8ad8bf4:	89 c6                	mov    %eax,%esi
 8ad8bf6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad8bf9:	89 04 24             	mov    %eax,(%esp)
 8ad8bfc:	e8 41 dd ff ff       	call   8ad6942 <_ZN14CharStringData9getBufferEv>
 8ad8c01:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad8c04:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad8c08:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad8c0b:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ad8c0f:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad8c13:	89 04 24             	mov    %eax,(%esp)
 8ad8c16:	e8 61 b9 ff ff       	call   8ad457c <_Z11ss_vsprintfPcjPKcS_>
 8ad8c1b:	89 d8                	mov    %ebx,%eax
 8ad8c1d:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ad8c20:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad8c24:	89 04 24             	mov    %eax,(%esp)
 8ad8c27:	e8 74 df ff ff       	call   8ad6ba0 <_ZN10CharStringC1EP14CharStringData>
 8ad8c2c:	89 d8                	mov    %ebx,%eax
 8ad8c2e:	89 d8                	mov    %ebx,%eax
 8ad8c30:	83 c4 20             	add    $0x20,%esp
 8ad8c33:	5b                   	pop    %ebx
 8ad8c34:	5e                   	pop    %esi
 8ad8c35:	5d                   	pop    %ebp
 8ad8c36:	c2 04 00             	ret    $0x4
 8ad8c39:	90                   	nop

```

```c
// CharString::vformat @ 0x8ad8b9e

CharString * CharString::vformat(CharString *__return_storage_ptr__,char *formatStr,va_list argList)

{
  int length;
  CharStringData *this;
  char *buffer;
  
                    /* Unresolved local var: int32 length@[???]
                       Unresolved local var: CharStringData * newData@[???] */
  length = vsnprintf((char *)0x0,0,formatStr,argList);
  if (length == 0) {
    CharString(__return_storage_ptr__);
  }
  else {
    this = CharStringData::create(length);
    buffer = CharStringData::getBuffer(this);
    ss_vsprintf(buffer,length + 1,formatStr,argList);
    CharString(__return_storage_ptr__,this);
  }
  return __return_storage_ptr__;
}

```

---

## ~CharString

```asm
// === 08ad6bba CharString::~CharString  [0x08ad6bba-0x8ad6bd5] ===
 8ad6bba:	55                   	push   %ebp
 8ad6bbb:	89 e5                	mov    %esp,%ebp
 8ad6bbd:	83 ec 18             	sub    $0x18,%esp
 8ad6bc0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad6bc3:	89 04 24             	mov    %eax,(%esp)
 8ad6bc6:	e8 f1 05 00 00       	call   8ad71bc <_ZNK10CharString7getDataEv>
 8ad6bcb:	89 04 24             	mov    %eax,(%esp)
 8ad6bce:	e8 bd fc ff ff       	call   8ad6890 <_ZN10StringData6decRefEv>
 8ad6bd3:	c9                   	leave
 8ad6bd4:	c3                   	ret
 8ad6bd5:	90                   	nop

```

```c
// CharString::~CharString @ 0x8ad6bba

/* DWARF original prototype: void ~CharString(CharString * this, int __in_chrg) */

void __thiscall CharString::~CharString(CharString *this,int __in_chrg)

{
  StringData *this_00;
  
  this_00 = &getData(this)->super_StringData;
  StringData::decRef(this_00);
  return;
}

```

