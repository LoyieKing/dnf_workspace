# IndexEntry

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 17

---

## IndexEntry

```asm
// === 08ac3de2 IndexEntry::IndexEntry  [0x08ac3de2-0x8ac3e03] ===
 8ac3de2:	55                   	push   %ebp
 8ac3de3:	89 e5                	mov    %esp,%ebp
 8ac3de5:	83 ec 18             	sub    $0x18,%esp
 8ac3de8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3deb:	83 c0 04             	add    $0x4,%eax
 8ac3dee:	89 04 24             	mov    %eax,(%esp)
 8ac3df1:	e8 da 27 c4 ff       	call   87065d0 <_ZNSsC1Ev>
 8ac3df6:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3df9:	89 04 24             	mov    %eax,(%esp)
 8ac3dfc:	e8 19 00 00 00       	call   8ac3e1a <_ZN10IndexEntry5clearEv>
 8ac3e01:	c9                   	leave
 8ac3e02:	c3                   	ret
 8ac3e03:	90                   	nop

```

```c
// IndexEntry::IndexEntry @ 0x8ac3de2

/* DWARF original prototype: void IndexEntry(IndexEntry * this) */

void __thiscall IndexEntry::IndexEntry(IndexEntry *this)

{
  std::string::string((string *)&this->name_);
  clear(this);
  return;
}

```

---

## aligned_size

```asm
// === 08ac3e7c IndexEntry::aligned_size  [0x08ac3e7c-0x8ac3e87] ===
 8ac3e7c:	55                   	push   %ebp
 8ac3e7d:	89 e5                	mov    %esp,%ebp
 8ac3e7f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e82:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac3e85:	5d                   	pop    %ebp
 8ac3e86:	c3                   	ret
 8ac3e87:	90                   	nop

```

```c
// IndexEntry::aligned_size @ 0x8ac3e7c

/* DWARF original prototype: uint aligned_size(IndexEntry * this) */

uint __thiscall IndexEntry::aligned_size(IndexEntry *this)

{
  return this->aligned_size_;
}

```

---

## clear

```asm
// === 08ac3e1a IndexEntry::clear  [0x08ac3e1a-0x8ac3e59] ===
 8ac3e1a:	55                   	push   %ebp
 8ac3e1b:	89 e5                	mov    %esp,%ebp
 8ac3e1d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e20:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ac3e26:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e29:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8ac3e30:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e33:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8ac3e3a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e3d:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8ac3e44:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e47:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8ac3e4e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e51:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8ac3e58:	5d                   	pop    %ebp
 8ac3e59:	c3                   	ret

```

```c
// IndexEntry::clear @ 0x8ac3e1a

/* DWARF original prototype: void clear(IndexEntry * this) */

void __thiscall IndexEntry::clear(IndexEntry *this)

{
  this->type_ = ENTRY_PACK;
  this->size_ = 0;
  this->aligned_size_ = 0;
  this->crc_ = 0;
  this->offset_ = 0;
  this->content_ = (uchar *)0x0;
  return;
}

```

---

## content

```asm
// === 08ac3ea0 IndexEntry::content  [0x08ac3ea0-0x8ac3eab] ===
 8ac3ea0:	55                   	push   %ebp
 8ac3ea1:	89 e5                	mov    %esp,%ebp
 8ac3ea3:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3ea6:	8b 40 18             	mov    0x18(%eax),%eax
 8ac3ea9:	5d                   	pop    %ebp
 8ac3eaa:	c3                   	ret
 8ac3eab:	90                   	nop

```

```c
// IndexEntry::content @ 0x8ac3ea0

/* DWARF original prototype: uchar * content(IndexEntry * this) */

uchar * __thiscall IndexEntry::content(IndexEntry *this)

{
  return this->content_;
}

```

---

## crc

```asm
// === 08ac3e88 IndexEntry::crc  [0x08ac3e88-0x8ac3e93] ===
 8ac3e88:	55                   	push   %ebp
 8ac3e89:	89 e5                	mov    %esp,%ebp
 8ac3e8b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e8e:	8b 40 10             	mov    0x10(%eax),%eax
 8ac3e91:	5d                   	pop    %ebp
 8ac3e92:	c3                   	ret
 8ac3e93:	90                   	nop

```

```c
// IndexEntry::crc @ 0x8ac3e88

/* DWARF original prototype: ulong crc(IndexEntry * this) */

ulong __thiscall IndexEntry::crc(IndexEntry *this)

{
  return this->crc_;
}

```

---

## get_content

```asm
// === 08ac3eac IndexEntry::get_content  [0x08ac3eac-0x8ac41f5] ===
 8ac3eac:	55                   	push   %ebp
 8ac3ead:	89 e5                	mov    %esp,%ebp
 8ac3eaf:	53                   	push   %ebx
 8ac3eb0:	83 ec 24             	sub    $0x24,%esp
 8ac3eb3:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ac3eb7:	74 0c                	je     8ac3ec5 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x19>
 8ac3eb9:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8ac3ebd:	74 06                	je     8ac3ec5 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x19>
 8ac3ebf:	83 7d 1c 00          	cmpl   $0x0,0x1c(%ebp)
 8ac3ec3:	75 37                	jne    8ac3efc <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x50>
 8ac3ec5:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac3eca:	c7 44 24 10 d7 ea e2 	movl   $0x8e2ead7,0x10(%esp)
 8ac3ed1:	08 
 8ac3ed2:	c7 44 24 0c 38 01 00 	movl   $0x138,0xc(%esp)
 8ac3ed9:	00 
 8ac3eda:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac3ee1:	08 
 8ac3ee2:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac3ee9:	08 
 8ac3eea:	89 04 24             	mov    %eax,(%esp)
 8ac3eed:	e8 9e 9b 5b ff       	call   807da90 <fprintf@plt>
 8ac3ef2:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac3ef7:	e9 f4 02 00 00       	jmp    8ac41f0 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x344>
 8ac3efc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac3eff:	89 04 24             	mov    %eax,(%esp)
 8ac3f02:	e8 6d 37 00 00       	call   8ac7674 <_ZN7PackSet18UsingEncryptedFileEv>
 8ac3f07:	84 c0                	test   %al,%al
 8ac3f09:	74 33                	je     8ac3f3e <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x92>
 8ac3f0b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8ac3f0e:	89 44 24 14          	mov    %eax,0x14(%esp)
 8ac3f12:	8b 45 18             	mov    0x18(%ebp),%eax
 8ac3f15:	89 44 24 10          	mov    %eax,0x10(%esp)
 8ac3f19:	8b 45 14             	mov    0x14(%ebp),%eax
 8ac3f1c:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac3f20:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac3f23:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac3f27:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac3f2a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac3f2e:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3f31:	89 04 24             	mov    %eax,(%esp)
 8ac3f34:	e8 bd 02 00 00       	call   8ac41f6 <_ZN10IndexEntry24get_contentEncryptedFileEP7PackSetmPhjPj>
 8ac3f39:	e9 b2 02 00 00       	jmp    8ac41f0 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x344>
 8ac3f3e:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8ac3f41:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ac3f47:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac3f4a:	89 04 24             	mov    %eax,(%esp)
 8ac3f4d:	e8 b6 36 00 00       	call   8ac7608 <_ZN7PackSet9pack_fileEv>
 8ac3f52:	85 c0                	test   %eax,%eax
 8ac3f54:	0f 94 c0             	sete   %al
 8ac3f57:	84 c0                	test   %al,%al
 8ac3f59:	74 37                	je     8ac3f92 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0xe6>
 8ac3f5b:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac3f60:	c7 44 24 10 d7 ea e2 	movl   $0x8e2ead7,0x10(%esp)
 8ac3f67:	08 
 8ac3f68:	c7 44 24 0c 45 01 00 	movl   $0x145,0xc(%esp)
 8ac3f6f:	00 
 8ac3f70:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac3f77:	08 
 8ac3f78:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac3f7f:	08 
 8ac3f80:	89 04 24             	mov    %eax,(%esp)
 8ac3f83:	e8 08 9b 5b ff       	call   807da90 <fprintf@plt>
 8ac3f88:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac3f8d:	e9 5e 02 00 00       	jmp    8ac41f0 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x344>
 8ac3f92:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3f95:	8b 40 08             	mov    0x8(%eax),%eax
 8ac3f98:	3b 45 18             	cmp    0x18(%ebp),%eax
 8ac3f9b:	76 54                	jbe    8ac3ff1 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x145>
 8ac3f9d:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac3fa2:	c7 44 24 08 fd e7 e2 	movl   $0x8e2e7fd,0x8(%esp)
 8ac3fa9:	08 
 8ac3faa:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac3fb1:	08 
 8ac3fb2:	89 04 24             	mov    %eax,(%esp)
 8ac3fb5:	e8 d6 9a 5b ff       	call   807da90 <fprintf@plt>
 8ac3fba:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac3fbf:	c7 44 24 10 d7 ea e2 	movl   $0x8e2ead7,0x10(%esp)
 8ac3fc6:	08 
 8ac3fc7:	c7 44 24 0c 4b 01 00 	movl   $0x14b,0xc(%esp)
 8ac3fce:	00 
 8ac3fcf:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac3fd6:	08 
 8ac3fd7:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac3fde:	08 
 8ac3fdf:	89 04 24             	mov    %eax,(%esp)
 8ac3fe2:	e8 a9 9a 5b ff       	call   807da90 <fprintf@plt>
 8ac3fe7:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac3fec:	e9 ff 01 00 00       	jmp    8ac41f0 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x344>
 8ac3ff1:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3ff4:	8b 40 18             	mov    0x18(%eax),%eax
 8ac3ff7:	85 c0                	test   %eax,%eax
 8ac3ff9:	74 24                	je     8ac401f <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x173>
 8ac3ffb:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3ffe:	8b 50 0c             	mov    0xc(%eax),%edx
 8ac4001:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4004:	8b 40 18             	mov    0x18(%eax),%eax
 8ac4007:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac400b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac400f:	8b 45 14             	mov    0x14(%ebp),%eax
 8ac4012:	89 04 24             	mov    %eax,(%esp)
 8ac4015:	e8 86 98 5b ff       	call   807d8a0 <memcpy@plt>
 8ac401a:	e9 37 01 00 00       	jmp    8ac4156 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x2aa>
 8ac401f:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4022:	8b 00                	mov    (%eax),%eax
 8ac4024:	83 f8 01             	cmp    $0x1,%eax
 8ac4027:	75 54                	jne    8ac407d <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x1d1>
 8ac4029:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac402e:	c7 44 24 08 16 e8 e2 	movl   $0x8e2e816,0x8(%esp)
 8ac4035:	08 
 8ac4036:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac403d:	08 
 8ac403e:	89 04 24             	mov    %eax,(%esp)
 8ac4041:	e8 4a 9a 5b ff       	call   807da90 <fprintf@plt>
 8ac4046:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac404b:	c7 44 24 10 d7 ea e2 	movl   $0x8e2ead7,0x10(%esp)
 8ac4052:	08 
 8ac4053:	c7 44 24 0c 58 01 00 	movl   $0x158,0xc(%esp)
 8ac405a:	00 
 8ac405b:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac4062:	08 
 8ac4063:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac406a:	08 
 8ac406b:	89 04 24             	mov    %eax,(%esp)
 8ac406e:	e8 1d 9a 5b ff       	call   807da90 <fprintf@plt>
 8ac4073:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac4078:	e9 73 01 00 00       	jmp    8ac41f0 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x344>
 8ac407d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4080:	8b 00                	mov    (%eax),%eax
 8ac4082:	85 c0                	test   %eax,%eax
 8ac4084:	0f 85 cc 00 00 00    	jne    8ac4156 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x2aa>
 8ac408a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac408d:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac4090:	85 c0                	test   %eax,%eax
 8ac4092:	0f 84 be 00 00 00    	je     8ac4156 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x2aa>
 8ac4098:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac409b:	89 04 24             	mov    %eax,(%esp)
 8ac409e:	e8 8d 08 00 00       	call   8ac4930 <_ZN7PackSet11header_sizeEv>
 8ac40a3:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac40a6:	8b 52 14             	mov    0x14(%edx),%edx
 8ac40a9:	01 d0                	add    %edx,%eax
 8ac40ab:	89 c3                	mov    %eax,%ebx
 8ac40ad:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac40b0:	89 04 24             	mov    %eax,(%esp)
 8ac40b3:	e8 50 35 00 00       	call   8ac7608 <_ZN7PackSet9pack_fileEv>
 8ac40b8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ac40bf:	00 
 8ac40c0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ac40c4:	89 04 24             	mov    %eax,(%esp)
 8ac40c7:	e8 e4 9f 5b ff       	call   807e0b0 <fseek@plt>
 8ac40cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac40cf:	89 04 24             	mov    %eax,(%esp)
 8ac40d2:	e8 31 35 00 00       	call   8ac7608 <_ZN7PackSet9pack_fileEv>
 8ac40d7:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac40da:	8b 52 0c             	mov    0xc(%edx),%edx
 8ac40dd:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac40e1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac40e8:	00 
 8ac40e9:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac40ed:	8b 45 14             	mov    0x14(%ebp),%eax
 8ac40f0:	89 04 24             	mov    %eax,(%esp)
 8ac40f3:	e8 58 9c 5b ff       	call   807dd50 <fread@plt>
 8ac40f8:	83 f8 01             	cmp    $0x1,%eax
 8ac40fb:	0f 95 c0             	setne  %al
 8ac40fe:	84 c0                	test   %al,%al
 8ac4100:	74 54                	je     8ac4156 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x2aa>
 8ac4102:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac4107:	c7 44 24 08 26 e8 e2 	movl   $0x8e2e826,0x8(%esp)
 8ac410e:	08 
 8ac410f:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac4116:	08 
 8ac4117:	89 04 24             	mov    %eax,(%esp)
 8ac411a:	e8 71 99 5b ff       	call   807da90 <fprintf@plt>
 8ac411f:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac4124:	c7 44 24 10 d7 ea e2 	movl   $0x8e2ead7,0x10(%esp)
 8ac412b:	08 
 8ac412c:	c7 44 24 0c 63 01 00 	movl   $0x163,0xc(%esp)
 8ac4133:	00 
 8ac4134:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac413b:	08 
 8ac413c:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac4143:	08 
 8ac4144:	89 04 24             	mov    %eax,(%esp)
 8ac4147:	e8 44 99 5b ff       	call   807da90 <fprintf@plt>
 8ac414c:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac4151:	e9 9a 00 00 00       	jmp    8ac41f0 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x344>
 8ac4156:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4159:	8b 50 08             	mov    0x8(%eax),%edx
 8ac415c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 8ac415f:	89 10                	mov    %edx,(%eax)
 8ac4161:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4164:	8b 48 0c             	mov    0xc(%eax),%ecx
 8ac4167:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac416a:	8b 50 10             	mov    0x10(%eax),%edx
 8ac416d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4170:	8b 40 10             	mov    0x10(%eax),%eax
 8ac4173:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 8ac4177:	8b 4d 14             	mov    0x14(%ebp),%ecx
 8ac417a:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8ac417e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac4182:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4186:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac4189:	89 04 24             	mov    %eax,(%esp)
 8ac418c:	e8 fa f7 ff ff       	call   8ac398b <_ZL16_decrypt_N_crc32mmmPhj>
 8ac4191:	85 c0                	test   %eax,%eax
 8ac4193:	0f 94 c0             	sete   %al
 8ac4196:	84 c0                	test   %al,%al
 8ac4198:	74 51                	je     8ac41eb <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x33f>
 8ac419a:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac419f:	c7 44 24 08 33 e8 e2 	movl   $0x8e2e833,0x8(%esp)
 8ac41a6:	08 
 8ac41a7:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac41ae:	08 
 8ac41af:	89 04 24             	mov    %eax,(%esp)
 8ac41b2:	e8 d9 98 5b ff       	call   807da90 <fprintf@plt>
 8ac41b7:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac41bc:	c7 44 24 10 d7 ea e2 	movl   $0x8e2ead7,0x10(%esp)
 8ac41c3:	08 
 8ac41c4:	c7 44 24 0c 6e 01 00 	movl   $0x16e,0xc(%esp)
 8ac41cb:	00 
 8ac41cc:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac41d3:	08 
 8ac41d4:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac41db:	08 
 8ac41dc:	89 04 24             	mov    %eax,(%esp)
 8ac41df:	e8 ac 98 5b ff       	call   807da90 <fprintf@plt>
 8ac41e4:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac41e9:	eb 05                	jmp    8ac41f0 <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj+0x344>
 8ac41eb:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac41f0:	83 c4 24             	add    $0x24,%esp
 8ac41f3:	5b                   	pop    %ebx
 8ac41f4:	5d                   	pop    %ebp
 8ac41f5:	c3                   	ret

```

```c
// IndexEntry::get_content @ 0x8ac3eac

/* DWARF original prototype: pack_ret_t get_content(IndexEntry * this, PackSet * owner, hash_t code,
   uchar * dst, uint dst_size, uint * content_size) */

pack_ret_t __thiscall
IndexEntry::get_content
          (IndexEntry *this,PackSet *owner,hash_t code,uchar *dst,uint dst_size,uint *content_size)

{
  uint uVar1;
  bool bVar2;
  pack_ret_t pVar3;
  FILE *pFVar4;
  uint uVar5;
  size_t sVar6;
  int iVar7;
  
  if (((owner == (PackSet *)0x0) || (dst == (uchar *)0x0)) || (content_size == (uint *)0x0)) {
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x138,"get_content");
    pVar3 = PACK_ERROR;
  }
  else {
    bVar2 = PackSet::UsingEncryptedFile(owner);
    if (bVar2) {
      pVar3 = get_contentEncryptedFile(this,owner,code,dst,dst_size,content_size);
    }
    else {
      *content_size = 0;
      pFVar4 = PackSet::pack_file(owner);
      if (pFVar4 == (FILE *)0x0) {
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x145,"get_content");
        pVar3 = PACK_ERROR;
      }
      else if (dst_size < this->size_) {
        fprintf(stdout,"%s\n","buffer size is too small");
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x14b,"get_content");
        pVar3 = PACK_ERROR;
      }
      else {
        if (this->content_ == (uchar *)0x0) {
          if (this->type_ == ENTRY_FILE) {
            fprintf(stdout,"%s\n","not implemented");
            fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x158,"get_content");
            return PACK_ERROR;
          }
          if ((this->type_ == ENTRY_PACK) && (this->aligned_size_ != 0)) {
            uVar5 = PackSet::header_size(owner);
            uVar1 = this->offset_;
            pFVar4 = PackSet::pack_file(owner);
            fseek((FILE *)pFVar4,uVar5 + uVar1,0);
            pFVar4 = PackSet::pack_file(owner);
            sVar6 = fread(dst,this->aligned_size_,1,(FILE *)pFVar4);
            if (sVar6 != 1) {
              fprintf(stdout,"%s\n","fread failed");
              fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x163,"get_content");
              return PACK_ERROR;
            }
          }
        }
        else {
          memcpy(dst,this->content_,this->aligned_size_);
        }
        *content_size = this->size_;
        iVar7 = _decrypt_N_crc32(code,this->crc_,this->crc_,dst,this->aligned_size_);
        if (iVar7 == 0) {
          fprintf(stdout,"%s\n","CRC failed");
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x16e,"get_content");
          pVar3 = PACK_ERROR;
        }
        else {
          pVar3 = PACK_OK;
        }
      }
    }
  }
  return pVar3;
}

```

---

## get_contentEncryptedFile

```asm
// === 08ac41f6 IndexEntry::get_contentEncryptedFile  [0x08ac41f6-0x8ac41ff] ===
 8ac41f6:	55                   	push   %ebp
 8ac41f7:	89 e5                	mov    %esp,%ebp
 8ac41f9:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac41fe:	5d                   	pop    %ebp
 8ac41ff:	c3                   	ret

```

```c
// IndexEntry::get_contentEncryptedFile @ 0x8ac41f6

/* DWARF original prototype: pack_ret_t get_contentEncryptedFile(IndexEntry * this, PackSet * owner,
   hash_t code, uchar * dst, uint dst_size, uint * content_size) */

pack_ret_t __thiscall
IndexEntry::get_contentEncryptedFile
          (IndexEntry *this,PackSet *owner,hash_t code,uchar *dst,uint dst_size,uint *content_size)

{
  return PACK_ERROR;
}

```

---

## get_content_08ac5880

```asm
// === 08ac5880 IndexEntry::get_content  [0x08ac5880-0x8ac58ed] ===
 8ac5880:	55                   	push   %ebp
 8ac5881:	89 e5                	mov    %esp,%ebp
 8ac5883:	83 ec 28             	sub    $0x28,%esp
 8ac5886:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8ac588a:	75 07                	jne    8ac5893 <_ZN10IndexEntry11get_contentEP7PackSetmPPhPj+0x13>
 8ac588c:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac5891:	eb 58                	jmp    8ac58eb <_ZN10IndexEntry11get_contentEP7PackSetmPPhPj+0x6b>
 8ac5893:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac5896:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac5899:	89 04 24             	mov    %eax,(%esp)
 8ac589c:	e8 1f d5 c5 ff       	call   8722dc0 <_Znaj>
 8ac58a1:	89 c2                	mov    %eax,%edx
 8ac58a3:	8b 45 14             	mov    0x14(%ebp),%eax
 8ac58a6:	89 10                	mov    %edx,(%eax)
 8ac58a8:	8b 45 14             	mov    0x14(%ebp),%eax
 8ac58ab:	8b 00                	mov    (%eax),%eax
 8ac58ad:	85 c0                	test   %eax,%eax
 8ac58af:	75 07                	jne    8ac58b8 <_ZN10IndexEntry11get_contentEP7PackSetmPPhPj+0x38>
 8ac58b1:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac58b6:	eb 33                	jmp    8ac58eb <_ZN10IndexEntry11get_contentEP7PackSetmPPhPj+0x6b>
 8ac58b8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac58bb:	8b 50 0c             	mov    0xc(%eax),%edx
 8ac58be:	8b 45 14             	mov    0x14(%ebp),%eax
 8ac58c1:	8b 00                	mov    (%eax),%eax
 8ac58c3:	8b 4d 18             	mov    0x18(%ebp),%ecx
 8ac58c6:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 8ac58ca:	89 54 24 10          	mov    %edx,0x10(%esp)
 8ac58ce:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac58d2:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac58d5:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac58d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac58dc:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac58e0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac58e3:	89 04 24             	mov    %eax,(%esp)
 8ac58e6:	e8 c1 e5 ff ff       	call   8ac3eac <_ZN10IndexEntry11get_contentEP7PackSetmPhjPj>
 8ac58eb:	c9                   	leave
 8ac58ec:	c3                   	ret
 8ac58ed:	90                   	nop

```

```c
// IndexEntry::get_content @ 0x8ac5880

/* DWARF original prototype: pack_ret_t get_content(IndexEntry * this, PackSet * owner, hash_t code,
   uchar * * dst, uint * content_size) */

pack_ret_t __thiscall
IndexEntry::get_content(IndexEntry *this,PackSet *owner,hash_t code,uchar **dst,uint *content_size)

{
  pack_ret_t pVar1;
  uchar *puVar2;
  
  if (dst == (uchar **)0x0) {
    pVar1 = PACK_ERROR;
  }
  else {
    puVar2 = operator_new__(this->aligned_size_);
    *dst = puVar2;
    if (*dst == (uchar *)0x0) {
      pVar1 = PACK_ERROR;
    }
    else {
      pVar1 = get_content(this,owner,code,*dst,this->aligned_size_,content_size);
    }
  }
  return pVar1;
}

```

---

## name

```asm
// === 08ac3e64 IndexEntry::name  [0x08ac3e64-0x8ac3e6f] ===
 8ac3e64:	55                   	push   %ebp
 8ac3e65:	89 e5                	mov    %esp,%ebp
 8ac3e67:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e6a:	83 c0 04             	add    $0x4,%eax
 8ac3e6d:	5d                   	pop    %ebp
 8ac3e6e:	c3                   	ret
 8ac3e6f:	90                   	nop

```

```c
// IndexEntry::name @ 0x8ac3e64

/* DWARF original prototype: tstring * name(IndexEntry * this) */

tstring * __thiscall IndexEntry::name(IndexEntry *this)

{
  return &this->name_;
}

```

---

## offset

```asm
// === 08ac3e94 IndexEntry::offset  [0x08ac3e94-0x8ac3e9f] ===
 8ac3e94:	55                   	push   %ebp
 8ac3e95:	89 e5                	mov    %esp,%ebp
 8ac3e97:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e9a:	8b 40 14             	mov    0x14(%eax),%eax
 8ac3e9d:	5d                   	pop    %ebp
 8ac3e9e:	c3                   	ret
 8ac3e9f:	90                   	nop

```

```c
// IndexEntry::offset @ 0x8ac3e94

/* DWARF original prototype: uint offset(IndexEntry * this) */

uint __thiscall IndexEntry::offset(IndexEntry *this)

{
  return this->offset_;
}

```

---

## read_info

```asm
// === 08ac4200 IndexEntry::read_info  [0x08ac4200-0x8ac4283] ===
 8ac4200:	55                   	push   %ebp
 8ac4201:	89 e5                	mov    %esp,%ebp
 8ac4203:	83 ec 18             	sub    $0x18,%esp
 8ac4206:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4209:	8d 50 04             	lea    0x4(%eax),%edx
 8ac420c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac420f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac4213:	89 14 24             	mov    %edx,(%esp)
 8ac4216:	e8 17 f6 ff ff       	call   8ac3832 <_ZL10_mread_strRSsRPh>
 8ac421b:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac421e:	8b 00                	mov    (%eax),%eax
 8ac4220:	8b 10                	mov    (%eax),%edx
 8ac4222:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4225:	89 50 08             	mov    %edx,0x8(%eax)
 8ac4228:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac422b:	8b 00                	mov    (%eax),%eax
 8ac422d:	8d 50 04             	lea    0x4(%eax),%edx
 8ac4230:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4233:	89 10                	mov    %edx,(%eax)
 8ac4235:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4238:	8b 40 08             	mov    0x8(%eax),%eax
 8ac423b:	83 c0 03             	add    $0x3,%eax
 8ac423e:	89 c2                	mov    %eax,%edx
 8ac4240:	83 e2 fc             	and    $0xfffffffc,%edx
 8ac4243:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4246:	89 50 0c             	mov    %edx,0xc(%eax)
 8ac4249:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac424c:	8b 00                	mov    (%eax),%eax
 8ac424e:	8b 10                	mov    (%eax),%edx
 8ac4250:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4253:	89 50 10             	mov    %edx,0x10(%eax)
 8ac4256:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4259:	8b 00                	mov    (%eax),%eax
 8ac425b:	8d 50 04             	lea    0x4(%eax),%edx
 8ac425e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4261:	89 10                	mov    %edx,(%eax)
 8ac4263:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4266:	8b 00                	mov    (%eax),%eax
 8ac4268:	8b 10                	mov    (%eax),%edx
 8ac426a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac426d:	89 50 14             	mov    %edx,0x14(%eax)
 8ac4270:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4273:	8b 00                	mov    (%eax),%eax
 8ac4275:	8d 50 04             	lea    0x4(%eax),%edx
 8ac4278:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac427b:	89 10                	mov    %edx,(%eax)
 8ac427d:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac4282:	c9                   	leave
 8ac4283:	c3                   	ret

```

```c
// IndexEntry::read_info @ 0x8ac4200

/* DWARF original prototype: pack_ret_t read_info(IndexEntry * this, uchar * * mem) */

pack_ret_t __thiscall IndexEntry::read_info(IndexEntry *this,uchar **mem)

{
  _mread_str(&this->name_,mem);
  this->size_ = *(uint *)*mem;
  *mem = *mem + 4;
  this->aligned_size_ = this->size_ + 3 & 0xfffffffc;
  this->crc_ = *(ulong *)*mem;
  *mem = *mem + 4;
  this->offset_ = *(uint *)*mem;
  *mem = *mem + 4;
  return PACK_OK;
}

```

---

## size

```asm
// === 08ac3e70 IndexEntry::size  [0x08ac3e70-0x8ac3e7b] ===
 8ac3e70:	55                   	push   %ebp
 8ac3e71:	89 e5                	mov    %esp,%ebp
 8ac3e73:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e76:	8b 40 08             	mov    0x8(%eax),%eax
 8ac3e79:	5d                   	pop    %ebp
 8ac3e7a:	c3                   	ret
 8ac3e7b:	90                   	nop

```

```c
// IndexEntry::size @ 0x8ac3e70

/* DWARF original prototype: uint size(IndexEntry * this) */

uint __thiscall IndexEntry::size(IndexEntry *this)

{
  return this->size_;
}

```

---

## type

```asm
// === 08ac3e5a IndexEntry::type  [0x08ac3e5a-0x8ac3e63] ===
 8ac3e5a:	55                   	push   %ebp
 8ac3e5b:	89 e5                	mov    %esp,%ebp
 8ac3e5d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e60:	8b 00                	mov    (%eax),%eax
 8ac3e62:	5d                   	pop    %ebp
 8ac3e63:	c3                   	ret

```

```c
// IndexEntry::type @ 0x8ac3e5a

/* DWARF original prototype: entry_type_t type(IndexEntry * this) */

entry_type_t __thiscall IndexEntry::type(IndexEntry *this)

{
  return this->type_;
}

```

---

## update_content_from_file

```asm
// === 08ac4476 IndexEntry::update_content_from_file  [0x08ac4476-0x8ac47f3] ===
 8ac4476:	55                   	push   %ebp
 8ac4477:	89 e5                	mov    %esp,%ebp
 8ac4479:	56                   	push   %esi
 8ac447a:	53                   	push   %ebx
 8ac447b:	81 ec 30 01 00 00    	sub    $0x130,%esp
 8ac4481:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8ac4488:	00 
 8ac4489:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8ac4490:	00 
 8ac4491:	c7 44 24 08 04 01 00 	movl   $0x104,0x8(%esp)
 8ac4498:	00 
 8ac4499:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 8ac449f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac44a3:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac44a6:	89 04 24             	mov    %eax,(%esp)
 8ac44a9:	e8 ec f6 ff ff       	call   8ac3b9a <_Z17_correct_filenamePKcPcjS1_j>
 8ac44ae:	c7 44 24 04 49 e8 e2 	movl   $0x8e2e849,0x4(%esp)
 8ac44b5:	08 
 8ac44b6:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 8ac44bc:	89 04 24             	mov    %eax,(%esp)
 8ac44bf:	e8 ac a2 5b ff       	call   807e770 <fopen@plt>
 8ac44c4:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8ac44c7:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8ac44cb:	75 56                	jne    8ac4523 <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0xad>
 8ac44cd:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac44d2:	8d 95 ec fe ff ff    	lea    -0x114(%ebp),%edx
 8ac44d8:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac44dc:	c7 44 24 04 4c e8 e2 	movl   $0x8e2e84c,0x4(%esp)
 8ac44e3:	08 
 8ac44e4:	89 04 24             	mov    %eax,(%esp)
 8ac44e7:	e8 a4 95 5b ff       	call   807da90 <fprintf@plt>
 8ac44ec:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac44f1:	c7 44 24 10 98 ea e2 	movl   $0x8e2ea98,0x10(%esp)
 8ac44f8:	08 
 8ac44f9:	c7 44 24 0c fb 01 00 	movl   $0x1fb,0xc(%esp)
 8ac4500:	00 
 8ac4501:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac4508:	08 
 8ac4509:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac4510:	08 
 8ac4511:	89 04 24             	mov    %eax,(%esp)
 8ac4514:	e8 77 95 5b ff       	call   807da90 <fprintf@plt>
 8ac4519:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac451e:	e9 c7 02 00 00       	jmp    8ac47ea <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x374>
 8ac4523:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4526:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 8ac452c:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac452f:	8d 50 04             	lea    0x4(%eax),%edx
 8ac4532:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 8ac4538:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac453c:	89 14 24             	mov    %edx,(%esp)
 8ac453f:	e8 dc 41 c4 ff       	call   8708720 <_ZNSsaSEPKc>
 8ac4544:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8ac454b:	00 
 8ac454c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ac4553:	00 
 8ac4554:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac4557:	89 04 24             	mov    %eax,(%esp)
 8ac455a:	e8 51 9b 5b ff       	call   807e0b0 <fseek@plt>
 8ac455f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac4562:	89 04 24             	mov    %eax,(%esp)
 8ac4565:	e8 66 94 5b ff       	call   807d9d0 <ftell@plt>
 8ac456a:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ac456d:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8ac4571:	79 15                	jns    8ac4588 <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x112>
 8ac4573:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac4576:	89 04 24             	mov    %eax,(%esp)
 8ac4579:	e8 22 99 5b ff       	call   807dea0 <fclose@plt>
 8ac457e:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac4583:	e9 62 02 00 00       	jmp    8ac47ea <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x374>
 8ac4588:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8ac458b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac458e:	89 50 08             	mov    %edx,0x8(%eax)
 8ac4591:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8ac4598:	00 
 8ac4599:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ac45a0:	00 
 8ac45a1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac45a4:	89 04 24             	mov    %eax,(%esp)
 8ac45a7:	e8 04 9b 5b ff       	call   807e0b0 <fseek@plt>
 8ac45ac:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac45af:	8b 40 08             	mov    0x8(%eax),%eax
 8ac45b2:	83 c0 03             	add    $0x3,%eax
 8ac45b5:	89 c2                	mov    %eax,%edx
 8ac45b7:	83 e2 fc             	and    $0xfffffffc,%edx
 8ac45ba:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac45bd:	89 50 0c             	mov    %edx,0xc(%eax)
 8ac45c0:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac45c3:	8b 40 08             	mov    0x8(%eax),%eax
 8ac45c6:	85 c0                	test   %eax,%eax
 8ac45c8:	75 25                	jne    8ac45ef <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x179>
 8ac45ca:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 8ac45d1:	e8 ea e7 c5 ff       	call   8722dc0 <_Znaj>
 8ac45d6:	89 c2                	mov    %eax,%edx
 8ac45d8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac45db:	89 50 18             	mov    %edx,0x18(%eax)
 8ac45de:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac45e1:	8b 40 18             	mov    0x18(%eax),%eax
 8ac45e4:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8ac45ea:	e9 4b 01 00 00       	jmp    8ac473a <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x2c4>
 8ac45ef:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8ac45f3:	74 6c                	je     8ac4661 <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x1eb>
 8ac45f5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac45f8:	89 04 24             	mov    %eax,(%esp)
 8ac45fb:	e8 a0 98 5b ff       	call   807dea0 <fclose@plt>
 8ac4600:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 8ac4607:	8b 45 14             	mov    0x14(%ebp),%eax
 8ac460a:	8b 00                	mov    (%eax),%eax
 8ac460c:	83 c0 08             	add    $0x8,%eax
 8ac460f:	8b 10                	mov    (%eax),%edx
 8ac4611:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4614:	8d 48 08             	lea    0x8(%eax),%ecx
 8ac4617:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac461a:	83 c0 18             	add    $0x18,%eax
 8ac461d:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8ac4621:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ac4625:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4628:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ac462c:	8b 45 14             	mov    0x14(%ebp),%eax
 8ac462f:	89 04 24             	mov    %eax,(%esp)
 8ac4632:	ff d2                	call   *%edx
 8ac4634:	83 f8 01             	cmp    $0x1,%eax
 8ac4637:	0f 94 c0             	sete   %al
 8ac463a:	84 c0                	test   %al,%al
 8ac463c:	74 0a                	je     8ac4648 <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x1d2>
 8ac463e:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac4643:	e9 a2 01 00 00       	jmp    8ac47ea <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x374>
 8ac4648:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac464b:	8b 40 08             	mov    0x8(%eax),%eax
 8ac464e:	83 c0 03             	add    $0x3,%eax
 8ac4651:	89 c2                	mov    %eax,%edx
 8ac4653:	83 e2 fc             	and    $0xfffffffc,%edx
 8ac4656:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4659:	89 50 0c             	mov    %edx,0xc(%eax)
 8ac465c:	e9 d9 00 00 00       	jmp    8ac473a <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x2c4>
 8ac4661:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4664:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac4667:	89 04 24             	mov    %eax,(%esp)
 8ac466a:	e8 51 e7 c5 ff       	call   8722dc0 <_Znaj>
 8ac466f:	89 c2                	mov    %eax,%edx
 8ac4671:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4674:	89 50 18             	mov    %edx,0x18(%eax)
 8ac4677:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac467a:	8b 50 0c             	mov    0xc(%eax),%edx
 8ac467d:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4680:	8b 40 08             	mov    0x8(%eax),%eax
 8ac4683:	29 c2                	sub    %eax,%edx
 8ac4685:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4688:	8b 48 18             	mov    0x18(%eax),%ecx
 8ac468b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac468e:	8b 40 08             	mov    0x8(%eax),%eax
 8ac4691:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 8ac4694:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac4698:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ac469f:	00 
 8ac46a0:	89 04 24             	mov    %eax,(%esp)
 8ac46a3:	e8 18 96 5b ff       	call   807dcc0 <memset@plt>
 8ac46a8:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac46ab:	8b 50 08             	mov    0x8(%eax),%edx
 8ac46ae:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac46b1:	8b 40 18             	mov    0x18(%eax),%eax
 8ac46b4:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 8ac46b7:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8ac46bb:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac46c2:	00 
 8ac46c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac46c7:	89 04 24             	mov    %eax,(%esp)
 8ac46ca:	e8 81 96 5b ff       	call   807dd50 <fread@plt>
 8ac46cf:	83 f8 01             	cmp    $0x1,%eax
 8ac46d2:	0f 95 c0             	setne  %al
 8ac46d5:	84 c0                	test   %al,%al
 8ac46d7:	74 61                	je     8ac473a <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x2c4>
 8ac46d9:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac46de:	8d 95 ec fe ff ff    	lea    -0x114(%ebp),%edx
 8ac46e4:	89 54 24 08          	mov    %edx,0x8(%esp)
 8ac46e8:	c7 44 24 04 5e e8 e2 	movl   $0x8e2e85e,0x4(%esp)
 8ac46ef:	08 
 8ac46f0:	89 04 24             	mov    %eax,(%esp)
 8ac46f3:	e8 98 93 5b ff       	call   807da90 <fprintf@plt>
 8ac46f8:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac46fd:	c7 44 24 10 98 ea e2 	movl   $0x8e2ea98,0x10(%esp)
 8ac4704:	08 
 8ac4705:	c7 44 24 0c 26 02 00 	movl   $0x226,0xc(%esp)
 8ac470c:	00 
 8ac470d:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac4714:	08 
 8ac4715:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac471c:	08 
 8ac471d:	89 04 24             	mov    %eax,(%esp)
 8ac4720:	e8 6b 93 5b ff       	call   807da90 <fprintf@plt>
 8ac4725:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac4728:	89 04 24             	mov    %eax,(%esp)
 8ac472b:	e8 70 97 5b ff       	call   807dea0 <fclose@plt>
 8ac4730:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac4735:	e9 b0 00 00 00       	jmp    8ac47ea <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x374>
 8ac473a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8ac473e:	74 0b                	je     8ac474b <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x2d5>
 8ac4740:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8ac4743:	89 04 24             	mov    %eax,(%esp)
 8ac4746:	e8 55 97 5b ff       	call   807dea0 <fclose@plt>
 8ac474b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac474e:	8b 70 0c             	mov    0xc(%eax),%esi
 8ac4751:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4754:	8b 40 18             	mov    0x18(%eax),%eax
 8ac4757:	89 c3                	mov    %eax,%ebx
 8ac4759:	8d 85 ec fe ff ff    	lea    -0x114(%ebp),%eax
 8ac475f:	89 04 24             	mov    %eax,(%esp)
 8ac4762:	e8 31 a7 01 00       	call   8adee98 <_Z6toMbcsPKc>
 8ac4767:	89 04 24             	mov    %eax,(%esp)
 8ac476a:	e8 95 f3 ff ff       	call   8ac3b04 <_ZL5_hashPKc>
 8ac476f:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ac4773:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8ac4777:	89 04 24             	mov    %eax,(%esp)
 8ac477a:	e8 2f ed 00 00       	call   8ad34ae <_ZN5Crc325crc32EjPKcj>
 8ac477f:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac4782:	89 42 10             	mov    %eax,0x10(%edx)
 8ac4785:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4788:	8b 48 0c             	mov    0xc(%eax),%ecx
 8ac478b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac478e:	8b 50 18             	mov    0x18(%eax),%edx
 8ac4791:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4794:	8b 40 10             	mov    0x10(%eax),%eax
 8ac4797:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ac479b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac479f:	89 04 24             	mov    %eax,(%esp)
 8ac47a2:	e8 17 f1 ff ff       	call   8ac38be <_ZL8_encryptjPhj>
 8ac47a7:	83 f8 01             	cmp    $0x1,%eax
 8ac47aa:	0f 94 c0             	sete   %al
 8ac47ad:	84 c0                	test   %al,%al
 8ac47af:	74 34                	je     8ac47e5 <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x36f>
 8ac47b1:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac47b6:	c7 44 24 10 98 ea e2 	movl   $0x8e2ea98,0x10(%esp)
 8ac47bd:	08 
 8ac47be:	c7 44 24 0c 4e 02 00 	movl   $0x24e,0xc(%esp)
 8ac47c5:	00 
 8ac47c6:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac47cd:	08 
 8ac47ce:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac47d5:	08 
 8ac47d6:	89 04 24             	mov    %eax,(%esp)
 8ac47d9:	e8 b2 92 5b ff       	call   807da90 <fprintf@plt>
 8ac47de:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac47e3:	eb 05                	jmp    8ac47ea <_ZN10IndexEntry24update_content_from_fileEPKcP7PackSetP16IPackFileProcess+0x374>
 8ac47e5:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac47ea:	81 c4 30 01 00 00    	add    $0x130,%esp
 8ac47f0:	5b                   	pop    %ebx
 8ac47f1:	5e                   	pop    %esi
 8ac47f2:	5d                   	pop    %ebp
 8ac47f3:	c3                   	ret

```

```c
// IndexEntry::update_content_from_file @ 0x8ac4476

/* DWARF original prototype: pack_ret_t update_content_from_file(IndexEntry * this, NCHAR * name,
   PackSet * owner, IPackFileProcess * process) */

pack_ret_t __thiscall
IndexEntry::update_content_from_file
          (IndexEntry *this,NCHAR *name,PackSet *owner,IPackFileProcess *process)

{
  size_t len;
  pack_ret_t pVar1;
  uchar *puVar2;
  int iVar3;
  size_t sVar4;
  char *p;
  hash_t crc;
  uint32 uVar5;
  NCHAR local_118 [260];
  FILE *local_14;
  uint local_10;
  
                    /* Unresolved local var: FILE * fp@[???]
                       Unresolved local var: NCHAR[260] dir@[???]
                       Unresolved local var: int size@[???] */
  _correct_filename(name,local_118,0x104,(NCHAR *)0x0,0);
  local_14 = fopen(local_118,"rb");
  if (local_14 == (FILE *)0x0) {
    fprintf(stdout,"_tfopen failed %s",local_118);
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x1fb,
            "update_content_from_file");
    pVar1 = PACK_ERROR;
  }
  else {
    this->type_ = ENTRY_FILE;
    std::string::operator=((string *)&this->name_,local_118);
    fseek(local_14,0,2);
    local_10 = ftell(local_14);
    if ((int)local_10 < 0) {
      fclose(local_14);
      pVar1 = PACK_ERROR;
    }
    else {
      this->size_ = local_10;
      fseek(local_14,0,0);
      this->aligned_size_ = this->size_ + 3 & 0xfffffffc;
      if (this->size_ == 0) {
        puVar2 = operator_new__(4);
        this->content_ = puVar2;
        puVar2 = this->content_;
        puVar2[0] = '\0';
        puVar2[1] = '\0';
        puVar2[2] = '\0';
        puVar2[3] = '\0';
      }
      else if (process == (IPackFileProcess *)0x0) {
        puVar2 = operator_new__(this->aligned_size_);
        this->content_ = puVar2;
        memset(this->content_ + this->size_,0,this->aligned_size_ - this->size_);
        sVar4 = fread(this->content_,this->size_,1,local_14);
        if (sVar4 != 1) {
          fprintf(stdout,"fread failed %s",local_118);
          fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x226,
                  "update_content_from_file");
          fclose(local_14);
          return PACK_ERROR;
        }
      }
      else {
        fclose(local_14);
        local_14 = (FILE *)0x0;
        iVar3 = (*process->_vptr_IPackFileProcess[2])(process,name,&this->content_,&this->size_);
        if (iVar3 == 1) {
          return PACK_ERROR;
        }
        this->aligned_size_ = this->size_ + 3 & 0xfffffffc;
      }
      if (local_14 != (FILE *)0x0) {
        fclose(local_14);
      }
      len = this->aligned_size_;
      puVar2 = this->content_;
      p = toMbcs(local_118);
      crc = _hash(p);
      uVar5 = Crc32::crc32(crc,(char *)puVar2,len);
      this->crc_ = uVar5;
      pVar1 = _encrypt(this->crc_,this->content_,this->aligned_size_);
      if (pVar1 == PACK_ERROR) {
        fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x24e,
                "update_content_from_file");
        pVar1 = PACK_ERROR;
      }
      else {
        pVar1 = PACK_OK;
      }
    }
  }
  return pVar1;
}

```

---

## update_content_from_memory

```asm
// === 08ac4378 IndexEntry::update_content_from_memory  [0x08ac4378-0x8ac4475] ===
 8ac4378:	55                   	push   %ebp
 8ac4379:	89 e5                	mov    %esp,%ebp
 8ac437b:	53                   	push   %ebx
 8ac437c:	83 ec 24             	sub    $0x24,%esp
 8ac437f:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ac4383:	75 37                	jne    8ac43bc <_ZN10IndexEntry26update_content_from_memoryEPhP7PackSet+0x44>
 8ac4385:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac438a:	c7 44 24 10 b1 ea e2 	movl   $0x8e2eab1,0x10(%esp)
 8ac4391:	08 
 8ac4392:	c7 44 24 0c e0 01 00 	movl   $0x1e0,0xc(%esp)
 8ac4399:	00 
 8ac439a:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac43a1:	08 
 8ac43a2:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac43a9:	08 
 8ac43aa:	89 04 24             	mov    %eax,(%esp)
 8ac43ad:	e8 de 96 5b ff       	call   807da90 <fprintf@plt>
 8ac43b2:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac43b7:	e9 b3 00 00 00       	jmp    8ac446f <_ZN10IndexEntry26update_content_from_memoryEPhP7PackSet+0xf7>
 8ac43bc:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac43bf:	8b 00                	mov    (%eax),%eax
 8ac43c1:	83 f8 01             	cmp    $0x1,%eax
 8ac43c4:	75 51                	jne    8ac4417 <_ZN10IndexEntry26update_content_from_memoryEPhP7PackSet+0x9f>
 8ac43c6:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac43cb:	c7 44 24 08 16 e8 e2 	movl   $0x8e2e816,0x8(%esp)
 8ac43d2:	08 
 8ac43d3:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac43da:	08 
 8ac43db:	89 04 24             	mov    %eax,(%esp)
 8ac43de:	e8 ad 96 5b ff       	call   807da90 <fprintf@plt>
 8ac43e3:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac43e8:	c7 44 24 10 b1 ea e2 	movl   $0x8e2eab1,0x10(%esp)
 8ac43ef:	08 
 8ac43f0:	c7 44 24 0c e6 01 00 	movl   $0x1e6,0xc(%esp)
 8ac43f7:	00 
 8ac43f8:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac43ff:	08 
 8ac4400:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac4407:	08 
 8ac4408:	89 04 24             	mov    %eax,(%esp)
 8ac440b:	e8 80 96 5b ff       	call   807da90 <fprintf@plt>
 8ac4410:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac4415:	eb 58                	jmp    8ac446f <_ZN10IndexEntry26update_content_from_memoryEPhP7PackSet+0xf7>
 8ac4417:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac441a:	8b 00                	mov    (%eax),%eax
 8ac441c:	85 c0                	test   %eax,%eax
 8ac441e:	75 4a                	jne    8ac446a <_ZN10IndexEntry26update_content_from_memoryEPhP7PackSet+0xf2>
 8ac4420:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4423:	8b 40 0c             	mov    0xc(%eax),%eax
 8ac4426:	89 04 24             	mov    %eax,(%esp)
 8ac4429:	e8 92 e9 c5 ff       	call   8722dc0 <_Znaj>
 8ac442e:	89 c2                	mov    %eax,%edx
 8ac4430:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4433:	89 50 18             	mov    %edx,0x18(%eax)
 8ac4436:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4439:	8b 58 0c             	mov    0xc(%eax),%ebx
 8ac443c:	8b 45 10             	mov    0x10(%ebp),%eax
 8ac443f:	89 04 24             	mov    %eax,(%esp)
 8ac4442:	e8 e9 04 00 00       	call   8ac4930 <_ZN7PackSet11header_sizeEv>
 8ac4447:	8b 55 08             	mov    0x8(%ebp),%edx
 8ac444a:	8b 52 14             	mov    0x14(%edx),%edx
 8ac444d:	01 d0                	add    %edx,%eax
 8ac444f:	89 c2                	mov    %eax,%edx
 8ac4451:	03 55 0c             	add    0xc(%ebp),%edx
 8ac4454:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4457:	8b 40 18             	mov    0x18(%eax),%eax
 8ac445a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8ac445e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac4462:	89 04 24             	mov    %eax,(%esp)
 8ac4465:	e8 36 94 5b ff       	call   807d8a0 <memcpy@plt>
 8ac446a:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac446f:	83 c4 24             	add    $0x24,%esp
 8ac4472:	5b                   	pop    %ebx
 8ac4473:	5d                   	pop    %ebp
 8ac4474:	c3                   	ret
 8ac4475:	90                   	nop

```

```c
// IndexEntry::update_content_from_memory @ 0x8ac4378

/* DWARF original prototype: pack_ret_t update_content_from_memory(IndexEntry * this, uchar * mem,
   PackSet * owner) */

pack_ret_t __thiscall
IndexEntry::update_content_from_memory(IndexEntry *this,uchar *mem,PackSet *owner)

{
  size_t __n;
  pack_ret_t pVar1;
  uchar *puVar2;
  uint uVar3;
  
  if (mem == (uchar *)0x0) {
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x1e0,
            "update_content_from_memory");
    pVar1 = PACK_ERROR;
  }
  else if (this->type_ == ENTRY_FILE) {
    fprintf(stdout,"%s\n","not implemented");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x1e6,
            "update_content_from_memory");
    pVar1 = PACK_ERROR;
  }
  else {
    if (this->type_ == ENTRY_PACK) {
      puVar2 = operator_new__(this->aligned_size_);
      this->content_ = puVar2;
      __n = this->aligned_size_;
      uVar3 = PackSet::header_size(owner);
      memcpy(this->content_,mem + uVar3 + this->offset_,__n);
    }
    pVar1 = PACK_OK;
  }
  return pVar1;
}

```

---

## write_info

```asm
// === 08ac4284 IndexEntry::write_info  [0x08ac4284-0x8ac4377] ===
 8ac4284:	55                   	push   %ebp
 8ac4285:	89 e5                	mov    %esp,%ebp
 8ac4287:	83 ec 28             	sub    $0x28,%esp
 8ac428a:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8ac428e:	75 54                	jne    8ac42e4 <_ZN10IndexEntry10write_infoEP8_IO_FILE+0x60>
 8ac4290:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac4295:	c7 44 24 08 3e e8 e2 	movl   $0x8e2e83e,0x8(%esp)
 8ac429c:	08 
 8ac429d:	c7 44 24 04 cc e7 e2 	movl   $0x8e2e7cc,0x4(%esp)
 8ac42a4:	08 
 8ac42a5:	89 04 24             	mov    %eax,(%esp)
 8ac42a8:	e8 e3 97 5b ff       	call   807da90 <fprintf@plt>
 8ac42ad:	a1 c8 56 3f 09       	mov    0x93f56c8,%eax
 8ac42b2:	c7 44 24 10 cc ea e2 	movl   $0x8e2eacc,0x10(%esp)
 8ac42b9:	08 
 8ac42ba:	c7 44 24 0c d0 01 00 	movl   $0x1d0,0xc(%esp)
 8ac42c1:	00 
 8ac42c2:	c7 44 24 08 d0 e7 e2 	movl   $0x8e2e7d0,0x8(%esp)
 8ac42c9:	08 
 8ac42ca:	c7 44 24 04 f0 e7 e2 	movl   $0x8e2e7f0,0x4(%esp)
 8ac42d1:	08 
 8ac42d2:	89 04 24             	mov    %eax,(%esp)
 8ac42d5:	e8 b6 97 5b ff       	call   807da90 <fprintf@plt>
 8ac42da:	b8 01 00 00 00       	mov    $0x1,%eax
 8ac42df:	e9 91 00 00 00       	jmp    8ac4375 <_ZN10IndexEntry10write_infoEP8_IO_FILE+0xf1>
 8ac42e4:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac42e7:	83 c0 04             	add    $0x4,%eax
 8ac42ea:	89 04 24             	mov    %eax,(%esp)
 8ac42ed:	e8 fe 21 c4 ff       	call   87064f0 <_ZNKSs5c_strEv>
 8ac42f2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ac42f5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ac42f9:	89 04 24             	mov    %eax,(%esp)
 8ac42fc:	e8 13 f4 ff ff       	call   8ac3714 <_ZL11_fwrite_strPKcP8_IO_FILE>
 8ac4301:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4304:	8d 50 08             	lea    0x8(%eax),%edx
 8ac4307:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac430a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac430e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac4315:	00 
 8ac4316:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8ac431d:	00 
 8ac431e:	89 14 24             	mov    %edx,(%esp)
 8ac4321:	e8 fa 9f 5b ff       	call   807e320 <fwrite@plt>
 8ac4326:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac4329:	8d 50 10             	lea    0x10(%eax),%edx
 8ac432c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac432f:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac4333:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac433a:	00 
 8ac433b:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8ac4342:	00 
 8ac4343:	89 14 24             	mov    %edx,(%esp)
 8ac4346:	e8 d5 9f 5b ff       	call   807e320 <fwrite@plt>
 8ac434b:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac434e:	8d 50 14             	lea    0x14(%eax),%edx
 8ac4351:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ac4354:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ac4358:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8ac435f:	00 
 8ac4360:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8ac4367:	00 
 8ac4368:	89 14 24             	mov    %edx,(%esp)
 8ac436b:	e8 b0 9f 5b ff       	call   807e320 <fwrite@plt>
 8ac4370:	b8 00 00 00 00       	mov    $0x0,%eax
 8ac4375:	c9                   	leave
 8ac4376:	c3                   	ret
 8ac4377:	90                   	nop

```

```c
// IndexEntry::write_info @ 0x8ac4284

/* DWARF original prototype: pack_ret_t write_info(IndexEntry * this, FILE * fp) */

pack_ret_t __thiscall IndexEntry::write_info(IndexEntry *this,FILE *fp)

{
  NCHAR *src;
  
  if (fp != (FILE *)0x0) {
    src = (NCHAR *)std::string::c_str((string *)&this->name_);
    _fwrite_str(src,fp);
    fwrite(&this->size_,4,1,(FILE *)fp);
    fwrite(&this->crc_,4,1,(FILE *)fp);
    fwrite(&this->offset_,4,1,(FILE *)fp);
  }
  else {
    fprintf(stdout,"%s\n","fp is NULL");
    fprintf(stdout,"%s(%d) - %s\n","../../Include/FilePack/Pack.cpp",0x1d0,"write_info");
  }
  return (uint)(fp == (FILE *)0x0);
}

```

---

## ~IndexEntry

```asm
// === 08ac3e04 IndexEntry::~IndexEntry  [0x08ac3e04-0x8ac3e19] ===
 8ac3e04:	55                   	push   %ebp
 8ac3e05:	89 e5                	mov    %esp,%ebp
 8ac3e07:	83 ec 18             	sub    $0x18,%esp
 8ac3e0a:	8b 45 08             	mov    0x8(%ebp),%eax
 8ac3e0d:	83 c0 04             	add    $0x4,%eax
 8ac3e10:	89 04 24             	mov    %eax,(%esp)
 8ac3e13:	e8 c8 3d c4 ff       	call   8707be0 <_ZNSsD1Ev>
 8ac3e18:	c9                   	leave
 8ac3e19:	c3                   	ret

```

```c
// IndexEntry::~IndexEntry @ 0x8ac3e04

/* DWARF original prototype: void ~IndexEntry(IndexEntry * this, int __in_chrg) */

void __thiscall IndexEntry::~IndexEntry(IndexEntry *this,int __in_chrg)

{
  std::string::~string((string *)&this->name_);
  return;
}

```

