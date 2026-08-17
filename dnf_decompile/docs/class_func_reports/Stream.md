# Stream

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 42

---

## Stream

```asm
// === 0861bc08 Stream::Stream  [0x0861bc08-0x861bc71] ===
 861bc08:	55                   	push   %ebp
 861bc09:	89 e5                	mov    %esp,%ebp
 861bc0b:	83 ec 18             	sub    $0x18,%esp
 861bc0e:	8b 45 08             	mov    0x8(%ebp),%eax
 861bc11:	c7 00 b8 21 ce 08    	movl   $0x8ce21b8,(%eax)
 861bc17:	8b 45 08             	mov    0x8(%ebp),%eax
 861bc1a:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 861bc21:	8b 45 08             	mov    0x8(%ebp),%eax
 861bc24:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 861bc2b:	8b 45 08             	mov    0x8(%ebp),%eax
 861bc2e:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 861bc35:	8b 45 08             	mov    0x8(%ebp),%eax
 861bc38:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 861bc3f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 861bc46:	00 
 861bc47:	8b 45 08             	mov    0x8(%ebp),%eax
 861bc4a:	89 04 24             	mov    %eax,(%esp)
 861bc4d:	e8 72 02 00 00       	call   861bec4 <_ZN6Stream14set_big_streamEb>
 861bc52:	c7 44 24 04 00 40 00 	movl   $0x4000,0x4(%esp)
 861bc59:	00 
 861bc5a:	8b 45 08             	mov    0x8(%ebp),%eax
 861bc5d:	89 04 24             	mov    %eax,(%esp)
 861bc60:	e8 83 02 00 00       	call   861bee8 <_ZN6Stream6resizeEi>
 861bc65:	8b 45 08             	mov    0x8(%ebp),%eax
 861bc68:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 861bc6f:	c9                   	leave
 861bc70:	c3                   	ret
 861bc71:	90                   	nop

```

```c
// Stream::Stream @ 0x861bc08

/* Stream::Stream() */

void __thiscall Stream::Stream(Stream *this)

{
  *(undefined ***)this = &PTR__Stream_08ce21b8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  set_big_stream(this,false);
  resize(this,0x4000);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

```

---

## Stream_0861bc72

```asm
// === 0861bc72 Stream::Stream  [0x0861bc72-0x861bcd9] ===
 861bc72:	55                   	push   %ebp
 861bc73:	89 e5                	mov    %esp,%ebp
 861bc75:	83 ec 18             	sub    $0x18,%esp
 861bc78:	8b 45 08             	mov    0x8(%ebp),%eax
 861bc7b:	c7 00 b8 21 ce 08    	movl   $0x8ce21b8,(%eax)
 861bc81:	8b 45 08             	mov    0x8(%ebp),%eax
 861bc84:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 861bc8b:	8b 45 08             	mov    0x8(%ebp),%eax
 861bc8e:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 861bc95:	8b 45 08             	mov    0x8(%ebp),%eax
 861bc98:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 861bc9f:	8b 45 08             	mov    0x8(%ebp),%eax
 861bca2:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 861bca9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 861bcb0:	00 
 861bcb1:	8b 45 08             	mov    0x8(%ebp),%eax
 861bcb4:	89 04 24             	mov    %eax,(%esp)
 861bcb7:	e8 08 02 00 00       	call   861bec4 <_ZN6Stream14set_big_streamEb>
 861bcbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 861bcbf:	89 44 24 04          	mov    %eax,0x4(%esp)
 861bcc3:	8b 45 08             	mov    0x8(%ebp),%eax
 861bcc6:	89 04 24             	mov    %eax,(%esp)
 861bcc9:	e8 1a 02 00 00       	call   861bee8 <_ZN6Stream6resizeEi>
 861bcce:	8b 45 08             	mov    0x8(%ebp),%eax
 861bcd1:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 861bcd8:	c9                   	leave
 861bcd9:	c3                   	ret

```

```c
// Stream::Stream @ 0x861bc72

/* Stream::Stream(int) */

void __thiscall Stream::Stream(Stream *this,int param_1)

{
  *(undefined ***)this = &PTR__Stream_08ce21b8;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  set_big_stream(this,false);
  resize(this,param_1);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

```

---

## Stream_0861bcda

```asm
// === 0861bcda Stream::Stream  [0x0861bcda-0x861bd13] ===
 861bcda:	55                   	push   %ebp
 861bcdb:	89 e5                	mov    %esp,%ebp
 861bcdd:	83 ec 48             	sub    $0x48,%esp
 861bce0:	8b 45 08             	mov    0x8(%ebp),%eax
 861bce3:	c7 00 b8 21 ce 08    	movl   $0x8ce21b8,(%eax)
 861bce9:	8d 45 d0             	lea    -0x30(%ebp),%eax
 861bcec:	89 04 24             	mov    %eax,(%esp)
 861bcef:	e8 14 ff ff ff       	call   861bc08 <_ZN6StreamC1Ev>
 861bcf4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 861bcf7:	89 04 24             	mov    %eax,(%esp)
 861bcfa:	e8 6d 00 00 00       	call   861bd6c <_ZN6StreamD1Ev>
 861bcff:	8b 45 0c             	mov    0xc(%ebp),%eax
 861bd02:	89 44 24 04          	mov    %eax,0x4(%esp)
 861bd06:	8b 45 08             	mov    0x8(%ebp),%eax
 861bd09:	89 04 24             	mov    %eax,(%esp)
 861bd0c:	e8 b7 05 00 00       	call   861c2c8 <_ZN6StreamlsEPc>
 861bd11:	c9                   	leave
 861bd12:	c3                   	ret
 861bd13:	90                   	nop

```

```c
// Stream::Stream @ 0x861bcda

/* Stream::Stream(char*) */

void __thiscall Stream::Stream(Stream *this,char *param_1)

{
  Stream local_34 [48];
  
  *(undefined ***)this = &PTR__Stream_08ce21b8;
  Stream(local_34);
  ~Stream(local_34);
  operator<<(this,param_1);
  return;
}

```

---

## Stream_0861bd14

```asm
// === 0861bd14 Stream::Stream  [0x0861bd14-0x861bd6b] ===
 861bd14:	55                   	push   %ebp
 861bd15:	89 e5                	mov    %esp,%ebp
 861bd17:	53                   	push   %ebx
 861bd18:	83 ec 44             	sub    $0x44,%esp
 861bd1b:	8b 45 08             	mov    0x8(%ebp),%eax
 861bd1e:	c7 00 b8 21 ce 08    	movl   $0x8ce21b8,(%eax)
 861bd24:	8d 45 d0             	lea    -0x30(%ebp),%eax
 861bd27:	89 04 24             	mov    %eax,(%esp)
 861bd2a:	e8 d9 fe ff ff       	call   861bc08 <_ZN6StreamC1Ev>
 861bd2f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 861bd32:	89 04 24             	mov    %eax,(%esp)
 861bd35:	e8 32 00 00 00       	call   861bd6c <_ZN6StreamD1Ev>
 861bd3a:	8b 45 0c             	mov    0xc(%ebp),%eax
 861bd3d:	89 04 24             	mov    %eax,(%esp)
 861bd40:	e8 8f 00 00 00       	call   861bdd4 <_ZN6Stream6lengthEv>
 861bd45:	89 c3                	mov    %eax,%ebx
 861bd47:	8b 45 0c             	mov    0xc(%ebp),%eax
 861bd4a:	89 04 24             	mov    %eax,(%esp)
 861bd4d:	e8 5e 0b 00 00       	call   861c8b0 <_ZN6Stream10get_bufferEv>
 861bd52:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861bd56:	89 44 24 04          	mov    %eax,0x4(%esp)
 861bd5a:	8b 45 08             	mov    0x8(%ebp),%eax
 861bd5d:	89 04 24             	mov    %eax,(%esp)
 861bd60:	e8 8f 06 00 00       	call   861c3f4 <_ZN6Stream10put_binaryEPvi>
 861bd65:	83 c4 44             	add    $0x44,%esp
 861bd68:	5b                   	pop    %ebx
 861bd69:	5d                   	pop    %ebp
 861bd6a:	c3                   	ret
 861bd6b:	90                   	nop

```

```c
// Stream::Stream @ 0x861bd14

/* Stream::Stream(Stream&) */

void __thiscall Stream::Stream(Stream *this,Stream *param_1)

{
  int iVar1;
  void *pvVar2;
  Stream local_34 [44];
  
  *(undefined ***)this = &PTR__Stream_08ce21b8;
  Stream(local_34);
  ~Stream(local_34);
  iVar1 = length(param_1);
  pvVar2 = (void *)get_buffer(param_1);
  put_binary(this,pvVar2,iVar1);
  return;
}

```

---

## enable_in

```asm
// === 0861bf9e Stream::enable_in  [0x0861bf9e-0x861bfdb] ===
 861bf9e:	55                   	push   %ebp
 861bf9f:	89 e5                	mov    %esp,%ebp
 861bfa1:	53                   	push   %ebx
 861bfa2:	83 ec 04             	sub    $0x4,%esp
 861bfa5:	8b 45 08             	mov    0x8(%ebp),%eax
 861bfa8:	89 04 24             	mov    %eax,(%esp)
 861bfab:	e8 50 fe ff ff       	call   861be00 <_ZN6Stream6in_ptrEv>
 861bfb0:	89 c3                	mov    %eax,%ebx
 861bfb2:	03 5d 0c             	add    0xc(%ebp),%ebx
 861bfb5:	8b 45 08             	mov    0x8(%ebp),%eax
 861bfb8:	89 04 24             	mov    %eax,(%esp)
 861bfbb:	e8 08 fe ff ff       	call   861bdc8 <_ZN6Stream4sizeEv>
 861bfc0:	39 c3                	cmp    %eax,%ebx
 861bfc2:	0f 9f c0             	setg   %al
 861bfc5:	84 c0                	test   %al,%al
 861bfc7:	74 07                	je     861bfd0 <_ZN6Stream9enable_inEi+0x32>
 861bfc9:	b8 00 00 00 00       	mov    $0x0,%eax
 861bfce:	eb 05                	jmp    861bfd5 <_ZN6Stream9enable_inEi+0x37>
 861bfd0:	b8 01 00 00 00       	mov    $0x1,%eax
 861bfd5:	83 c4 04             	add    $0x4,%esp
 861bfd8:	5b                   	pop    %ebx
 861bfd9:	5d                   	pop    %ebp
 861bfda:	c3                   	ret
 861bfdb:	90                   	nop

```

```c
// Stream::enable_in @ 0x861bf9e

/* Stream::enable_in(int) */

bool __thiscall Stream::enable_in(Stream *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = in_ptr(this);
  iVar2 = size(this);
  return iVar1 + param_1 <= iVar2;
}

```

---

## enable_out

```asm
// === 0861bfdc Stream::enable_out  [0x0861bfdc-0x861c019] ===
 861bfdc:	55                   	push   %ebp
 861bfdd:	89 e5                	mov    %esp,%ebp
 861bfdf:	53                   	push   %ebx
 861bfe0:	83 ec 04             	sub    $0x4,%esp
 861bfe3:	8b 45 08             	mov    0x8(%ebp),%eax
 861bfe6:	89 04 24             	mov    %eax,(%esp)
 861bfe9:	e8 3a fe ff ff       	call   861be28 <_ZN6Stream7out_ptrEv>
 861bfee:	89 c3                	mov    %eax,%ebx
 861bff0:	03 5d 0c             	add    0xc(%ebp),%ebx
 861bff3:	8b 45 08             	mov    0x8(%ebp),%eax
 861bff6:	89 04 24             	mov    %eax,(%esp)
 861bff9:	e8 02 fe ff ff       	call   861be00 <_ZN6Stream6in_ptrEv>
 861bffe:	39 c3                	cmp    %eax,%ebx
 861c000:	0f 9f c0             	setg   %al
 861c003:	84 c0                	test   %al,%al
 861c005:	74 07                	je     861c00e <_ZN6Stream10enable_outEi+0x32>
 861c007:	b8 00 00 00 00       	mov    $0x0,%eax
 861c00c:	eb 05                	jmp    861c013 <_ZN6Stream10enable_outEi+0x37>
 861c00e:	b8 01 00 00 00       	mov    $0x1,%eax
 861c013:	83 c4 04             	add    $0x4,%esp
 861c016:	5b                   	pop    %ebx
 861c017:	5d                   	pop    %ebp
 861c018:	c3                   	ret
 861c019:	90                   	nop

```

```c
// Stream::enable_out @ 0x861bfdc

/* Stream::enable_out(int) */

bool __thiscall Stream::enable_out(Stream *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = out_ptr(this);
  iVar2 = in_ptr(this);
  return iVar1 + param_1 <= iVar2;
}

```

---

## get_binary

```asm
// === 0861c7fa Stream::get_binary  [0x0861c7fa-0x861c869] ===
 861c7fa:	55                   	push   %ebp
 861c7fb:	89 e5                	mov    %esp,%ebp
 861c7fd:	56                   	push   %esi
 861c7fe:	53                   	push   %ebx
 861c7ff:	83 ec 10             	sub    $0x10,%esp
 861c802:	8b 45 10             	mov    0x10(%ebp),%eax
 861c805:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c809:	8b 45 08             	mov    0x8(%ebp),%eax
 861c80c:	89 04 24             	mov    %eax,(%esp)
 861c80f:	e8 c8 f7 ff ff       	call   861bfdc <_ZN6Stream10enable_outEi>
 861c814:	83 f0 01             	xor    $0x1,%eax
 861c817:	84 c0                	test   %al,%al
 861c819:	74 07                	je     861c822 <_ZN6Stream10get_binaryEPvi+0x28>
 861c81b:	b8 00 00 00 00       	mov    $0x0,%eax
 861c820:	eb 41                	jmp    861c863 <_ZN6Stream10get_binaryEPvi+0x69>
 861c822:	8b 5d 10             	mov    0x10(%ebp),%ebx
 861c825:	8b 45 08             	mov    0x8(%ebp),%eax
 861c828:	8b 70 08             	mov    0x8(%eax),%esi
 861c82b:	8b 45 08             	mov    0x8(%ebp),%eax
 861c82e:	89 04 24             	mov    %eax,(%esp)
 861c831:	e8 f2 f5 ff ff       	call   861be28 <_ZN6Stream7out_ptrEv>
 861c836:	8d 04 06             	lea    (%esi,%eax,1),%eax
 861c839:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861c83d:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c841:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c844:	89 04 24             	mov    %eax,(%esp)
 861c847:	e8 54 10 a6 ff       	call   807d8a0 <memcpy@plt>
 861c84c:	8b 45 10             	mov    0x10(%ebp),%eax
 861c84f:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c853:	8b 45 08             	mov    0x8(%ebp),%eax
 861c856:	89 04 24             	mov    %eax,(%esp)
 861c859:	e8 d6 f5 ff ff       	call   861be34 <_ZN6Stream7out_ptrEi>
 861c85e:	b8 01 00 00 00       	mov    $0x1,%eax
 861c863:	83 c4 10             	add    $0x10,%esp
 861c866:	5b                   	pop    %ebx
 861c867:	5e                   	pop    %esi
 861c868:	5d                   	pop    %ebp
 861c869:	c3                   	ret

```

```c
// Stream::get_binary @ 0x861c7fa

/* Stream::get_binary(void*, int) */

bool __thiscall Stream::get_binary(Stream *this,void *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = enable_out(this,param_2);
  if (cVar2 == '\x01') {
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    memcpy(param_1,(void *)(iVar1 + iVar3),param_2);
    out_ptr(this,param_2);
  }
  return cVar2 == '\x01';
}

```

---

## get_buffer

```asm
// === 0861c8b0 Stream::get_buffer  [0x0861c8b0-0x861c8d1] ===
 861c8b0:	55                   	push   %ebp
 861c8b1:	89 e5                	mov    %esp,%ebp
 861c8b3:	53                   	push   %ebx
 861c8b4:	83 ec 04             	sub    $0x4,%esp
 861c8b7:	8b 45 08             	mov    0x8(%ebp),%eax
 861c8ba:	8b 58 08             	mov    0x8(%eax),%ebx
 861c8bd:	8b 45 08             	mov    0x8(%ebp),%eax
 861c8c0:	89 04 24             	mov    %eax,(%esp)
 861c8c3:	e8 60 f5 ff ff       	call   861be28 <_ZN6Stream7out_ptrEv>
 861c8c8:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 861c8cb:	83 c4 04             	add    $0x4,%esp
 861c8ce:	5b                   	pop    %ebx
 861c8cf:	5d                   	pop    %ebp
 861c8d0:	c3                   	ret
 861c8d1:	90                   	nop

```

```c
// Stream::get_buffer @ 0x861c8b0

/* Stream::get_buffer() */

int __thiscall Stream::get_buffer(Stream *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 8);
  iVar2 = out_ptr(this);
  return iVar1 + iVar2;
}

```

---

## in_ptr

```asm
// === 0861be00 Stream::in_ptr  [0x0861be00-0x861be0b] ===
 861be00:	55                   	push   %ebp
 861be01:	89 e5                	mov    %esp,%ebp
 861be03:	8b 45 08             	mov    0x8(%ebp),%eax
 861be06:	8b 40 0c             	mov    0xc(%eax),%eax
 861be09:	5d                   	pop    %ebp
 861be0a:	c3                   	ret
 861be0b:	90                   	nop

```

```c
// Stream::in_ptr @ 0x861be00

/* Stream::in_ptr() */

undefined4 __thiscall Stream::in_ptr(Stream *this)

{
  return *(undefined4 *)(this + 0xc);
}

```

---

## in_ptr_0861be0c

```asm
// === 0861be0c Stream::in_ptr  [0x0861be0c-0x861be27] ===
 861be0c:	55                   	push   %ebp
 861be0d:	89 e5                	mov    %esp,%ebp
 861be0f:	8b 45 08             	mov    0x8(%ebp),%eax
 861be12:	8b 40 0c             	mov    0xc(%eax),%eax
 861be15:	89 c2                	mov    %eax,%edx
 861be17:	03 55 0c             	add    0xc(%ebp),%edx
 861be1a:	8b 45 08             	mov    0x8(%ebp),%eax
 861be1d:	89 50 0c             	mov    %edx,0xc(%eax)
 861be20:	8b 45 08             	mov    0x8(%ebp),%eax
 861be23:	8b 40 0c             	mov    0xc(%eax),%eax
 861be26:	5d                   	pop    %ebp
 861be27:	c3                   	ret

```

```c
// Stream::in_ptr @ 0x861be0c

/* Stream::in_ptr(int) */

undefined4 __thiscall Stream::in_ptr(Stream *this,int param_1)

{
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + param_1;
  return *(undefined4 *)(this + 0xc);
}

```

---

## is_big_stream

```asm
// === 0861bedc Stream::is_big_stream  [0x0861bedc-0x861bee7] ===
 861bedc:	55                   	push   %ebp
 861bedd:	89 e5                	mov    %esp,%ebp
 861bedf:	8b 45 08             	mov    0x8(%ebp),%eax
 861bee2:	0f b6 40 14          	movzbl 0x14(%eax),%eax
 861bee6:	5d                   	pop    %ebp
 861bee7:	c3                   	ret

```

```c
// Stream::is_big_stream @ 0x861bedc

/* Stream::is_big_stream() */

Stream __thiscall Stream::is_big_stream(Stream *this)

{
  return this[0x14];
}

```

---

## length

```asm
// === 0861bdd4 Stream::length  [0x0861bdd4-0x861bdff] ===
 861bdd4:	55                   	push   %ebp
 861bdd5:	89 e5                	mov    %esp,%ebp
 861bdd7:	53                   	push   %ebx
 861bdd8:	83 ec 14             	sub    $0x14,%esp
 861bddb:	8b 45 08             	mov    0x8(%ebp),%eax
 861bdde:	89 04 24             	mov    %eax,(%esp)
 861bde1:	e8 1a 00 00 00       	call   861be00 <_ZN6Stream6in_ptrEv>
 861bde6:	89 c3                	mov    %eax,%ebx
 861bde8:	8b 45 08             	mov    0x8(%ebp),%eax
 861bdeb:	89 04 24             	mov    %eax,(%esp)
 861bdee:	e8 35 00 00 00       	call   861be28 <_ZN6Stream7out_ptrEv>
 861bdf3:	89 da                	mov    %ebx,%edx
 861bdf5:	29 c2                	sub    %eax,%edx
 861bdf7:	89 d0                	mov    %edx,%eax
 861bdf9:	83 c4 14             	add    $0x14,%esp
 861bdfc:	5b                   	pop    %ebx
 861bdfd:	5d                   	pop    %ebp
 861bdfe:	c3                   	ret
 861bdff:	90                   	nop

```

```c
// Stream::length @ 0x861bdd4

/* Stream::length() */

int __thiscall Stream::length(Stream *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = in_ptr(this);
  iVar2 = out_ptr(this);
  return iVar1 - iVar2;
}

```

---

## operator_gt__gt_

```asm
// === 0861c47c Stream::operator>>  [0x0861c47c-0x861c4ef] ===
 861c47c:	55                   	push   %ebp
 861c47d:	89 e5                	mov    %esp,%ebp
 861c47f:	53                   	push   %ebx
 861c480:	83 ec 24             	sub    $0x24,%esp
 861c483:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861c48a:	00 
 861c48b:	8b 45 08             	mov    0x8(%ebp),%eax
 861c48e:	89 04 24             	mov    %eax,(%esp)
 861c491:	e8 46 fb ff ff       	call   861bfdc <_ZN6Stream10enable_outEi>
 861c496:	83 f0 01             	xor    $0x1,%eax
 861c499:	84 c0                	test   %al,%al
 861c49b:	74 07                	je     861c4a4 <_ZN6StreamrsERb+0x28>
 861c49d:	b8 00 00 00 00       	mov    $0x0,%eax
 861c4a2:	eb 46                	jmp    861c4ea <_ZN6StreamrsERb+0x6e>
 861c4a4:	8b 45 08             	mov    0x8(%ebp),%eax
 861c4a7:	8b 58 08             	mov    0x8(%eax),%ebx
 861c4aa:	8b 45 08             	mov    0x8(%ebp),%eax
 861c4ad:	89 04 24             	mov    %eax,(%esp)
 861c4b0:	e8 73 f9 ff ff       	call   861be28 <_ZN6Stream7out_ptrEv>
 861c4b5:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 861c4b8:	0f b6 00             	movzbl (%eax),%eax
 861c4bb:	88 45 f7             	mov    %al,-0x9(%ebp)
 861c4be:	80 7d f7 01          	cmpb   $0x1,-0x9(%ebp)
 861c4c2:	75 08                	jne    861c4cc <_ZN6StreamrsERb+0x50>
 861c4c4:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c4c7:	c6 00 01             	movb   $0x1,(%eax)
 861c4ca:	eb 06                	jmp    861c4d2 <_ZN6StreamrsERb+0x56>
 861c4cc:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c4cf:	c6 00 00             	movb   $0x0,(%eax)
 861c4d2:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861c4d9:	00 
 861c4da:	8b 45 08             	mov    0x8(%ebp),%eax
 861c4dd:	89 04 24             	mov    %eax,(%esp)
 861c4e0:	e8 4f f9 ff ff       	call   861be34 <_ZN6Stream7out_ptrEi>
 861c4e5:	b8 01 00 00 00       	mov    $0x1,%eax
 861c4ea:	83 c4 24             	add    $0x24,%esp
 861c4ed:	5b                   	pop    %ebx
 861c4ee:	5d                   	pop    %ebp
 861c4ef:	c3                   	ret

```

```c
// Stream::operator>> @ 0x861c47c

/* Stream::TEMPNAMEPLACEHOLDERVALUE(bool&) */

undefined4 __thiscall Stream::operator>>(Stream *this,bool *param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  
  cVar2 = enable_out(this,1);
  if (cVar2 == '\x01') {
    iVar1 = *(int *)(this + 8);
    iVar4 = out_ptr(this);
    if (*(char *)(iVar1 + iVar4) == '\x01') {
      *param_1 = true;
    }
    else {
      *param_1 = false;
    }
    out_ptr(this,1);
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## operator_gt__gt__0861c4f0

```asm
// === 0861c4f0 Stream::operator>>  [0x0861c4f0-0x861c551] ===
 861c4f0:	55                   	push   %ebp
 861c4f1:	89 e5                	mov    %esp,%ebp
 861c4f3:	53                   	push   %ebx
 861c4f4:	83 ec 14             	sub    $0x14,%esp
 861c4f7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861c4fe:	00 
 861c4ff:	8b 45 08             	mov    0x8(%ebp),%eax
 861c502:	89 04 24             	mov    %eax,(%esp)
 861c505:	e8 d2 fa ff ff       	call   861bfdc <_ZN6Stream10enable_outEi>
 861c50a:	83 f0 01             	xor    $0x1,%eax
 861c50d:	84 c0                	test   %al,%al
 861c50f:	74 07                	je     861c518 <_ZN6StreamrsERc+0x28>
 861c511:	b8 00 00 00 00       	mov    $0x0,%eax
 861c516:	eb 34                	jmp    861c54c <_ZN6StreamrsERc+0x5c>
 861c518:	8b 45 08             	mov    0x8(%ebp),%eax
 861c51b:	8b 58 08             	mov    0x8(%eax),%ebx
 861c51e:	8b 45 08             	mov    0x8(%ebp),%eax
 861c521:	89 04 24             	mov    %eax,(%esp)
 861c524:	e8 ff f8 ff ff       	call   861be28 <_ZN6Stream7out_ptrEv>
 861c529:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 861c52c:	0f b6 10             	movzbl (%eax),%edx
 861c52f:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c532:	88 10                	mov    %dl,(%eax)
 861c534:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861c53b:	00 
 861c53c:	8b 45 08             	mov    0x8(%ebp),%eax
 861c53f:	89 04 24             	mov    %eax,(%esp)
 861c542:	e8 ed f8 ff ff       	call   861be34 <_ZN6Stream7out_ptrEi>
 861c547:	b8 01 00 00 00       	mov    $0x1,%eax
 861c54c:	83 c4 14             	add    $0x14,%esp
 861c54f:	5b                   	pop    %ebx
 861c550:	5d                   	pop    %ebp
 861c551:	c3                   	ret

```

```c
// Stream::operator>> @ 0x861c4f0

/* Stream::TEMPNAMEPLACEHOLDERVALUE(char&) */

bool __thiscall Stream::operator>>(Stream *this,char *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = enable_out(this,1);
  if (cVar2 == '\x01') {
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    *param_1 = *(char *)(iVar1 + iVar3);
    out_ptr(this,1);
  }
  return cVar2 == '\x01';
}

```

---

## operator_gt__gt__0861c552

```asm
// === 0861c552 Stream::operator>>  [0x0861c552-0x861c5c3] ===
 861c552:	55                   	push   %ebp
 861c553:	89 e5                	mov    %esp,%ebp
 861c555:	53                   	push   %ebx
 861c556:	83 ec 14             	sub    $0x14,%esp
 861c559:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 861c560:	00 
 861c561:	8b 45 08             	mov    0x8(%ebp),%eax
 861c564:	89 04 24             	mov    %eax,(%esp)
 861c567:	e8 70 fa ff ff       	call   861bfdc <_ZN6Stream10enable_outEi>
 861c56c:	83 f0 01             	xor    $0x1,%eax
 861c56f:	84 c0                	test   %al,%al
 861c571:	74 07                	je     861c57a <_ZN6StreamrsERs+0x28>
 861c573:	b8 00 00 00 00       	mov    $0x0,%eax
 861c578:	eb 43                	jmp    861c5bd <_ZN6StreamrsERs+0x6b>
 861c57a:	8b 45 08             	mov    0x8(%ebp),%eax
 861c57d:	8b 58 08             	mov    0x8(%eax),%ebx
 861c580:	8b 45 08             	mov    0x8(%ebp),%eax
 861c583:	89 04 24             	mov    %eax,(%esp)
 861c586:	e8 9d f8 ff ff       	call   861be28 <_ZN6Stream7out_ptrEv>
 861c58b:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 861c58e:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 861c595:	00 
 861c596:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c59a:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c59d:	89 04 24             	mov    %eax,(%esp)
 861c5a0:	e8 fb 12 a6 ff       	call   807d8a0 <memcpy@plt>
 861c5a5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 861c5ac:	00 
 861c5ad:	8b 45 08             	mov    0x8(%ebp),%eax
 861c5b0:	89 04 24             	mov    %eax,(%esp)
 861c5b3:	e8 7c f8 ff ff       	call   861be34 <_ZN6Stream7out_ptrEi>
 861c5b8:	b8 01 00 00 00       	mov    $0x1,%eax
 861c5bd:	83 c4 14             	add    $0x14,%esp
 861c5c0:	5b                   	pop    %ebx
 861c5c1:	5d                   	pop    %ebp
 861c5c2:	c3                   	ret
 861c5c3:	90                   	nop

```

```c
// Stream::operator>> @ 0x861c552

/* Stream::TEMPNAMEPLACEHOLDERVALUE(short&) */

bool __thiscall Stream::operator>>(Stream *this,short *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = enable_out(this,2);
  if (cVar2 == '\x01') {
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    memcpy(param_1,(void *)(iVar1 + iVar3),2);
    out_ptr(this,2);
  }
  return cVar2 == '\x01';
}

```

---

## operator_gt__gt__0861c5c4

```asm
// === 0861c5c4 Stream::operator>>  [0x0861c5c4-0x861c635] ===
 861c5c4:	55                   	push   %ebp
 861c5c5:	89 e5                	mov    %esp,%ebp
 861c5c7:	53                   	push   %ebx
 861c5c8:	83 ec 14             	sub    $0x14,%esp
 861c5cb:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 861c5d2:	00 
 861c5d3:	8b 45 08             	mov    0x8(%ebp),%eax
 861c5d6:	89 04 24             	mov    %eax,(%esp)
 861c5d9:	e8 fe f9 ff ff       	call   861bfdc <_ZN6Stream10enable_outEi>
 861c5de:	83 f0 01             	xor    $0x1,%eax
 861c5e1:	84 c0                	test   %al,%al
 861c5e3:	74 07                	je     861c5ec <_ZN6StreamrsERi+0x28>
 861c5e5:	b8 00 00 00 00       	mov    $0x0,%eax
 861c5ea:	eb 43                	jmp    861c62f <_ZN6StreamrsERi+0x6b>
 861c5ec:	8b 45 08             	mov    0x8(%ebp),%eax
 861c5ef:	8b 58 08             	mov    0x8(%eax),%ebx
 861c5f2:	8b 45 08             	mov    0x8(%ebp),%eax
 861c5f5:	89 04 24             	mov    %eax,(%esp)
 861c5f8:	e8 2b f8 ff ff       	call   861be28 <_ZN6Stream7out_ptrEv>
 861c5fd:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 861c600:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 861c607:	00 
 861c608:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c60c:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c60f:	89 04 24             	mov    %eax,(%esp)
 861c612:	e8 89 12 a6 ff       	call   807d8a0 <memcpy@plt>
 861c617:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 861c61e:	00 
 861c61f:	8b 45 08             	mov    0x8(%ebp),%eax
 861c622:	89 04 24             	mov    %eax,(%esp)
 861c625:	e8 0a f8 ff ff       	call   861be34 <_ZN6Stream7out_ptrEi>
 861c62a:	b8 01 00 00 00       	mov    $0x1,%eax
 861c62f:	83 c4 14             	add    $0x14,%esp
 861c632:	5b                   	pop    %ebx
 861c633:	5d                   	pop    %ebp
 861c634:	c3                   	ret
 861c635:	90                   	nop

```

```c
// Stream::operator>> @ 0x861c5c4

/* Stream::TEMPNAMEPLACEHOLDERVALUE(int&) */

bool __thiscall Stream::operator>>(Stream *this,int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = enable_out(this,4);
  if (cVar2 == '\x01') {
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    memcpy(param_1,(void *)(iVar1 + iVar3),4);
    out_ptr(this,4);
  }
  return cVar2 == '\x01';
}

```

---

## operator_gt__gt__0861c636

```asm
// === 0861c636 Stream::operator>>  [0x0861c636-0x861c6a7] ===
 861c636:	55                   	push   %ebp
 861c637:	89 e5                	mov    %esp,%ebp
 861c639:	53                   	push   %ebx
 861c63a:	83 ec 14             	sub    $0x14,%esp
 861c63d:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 861c644:	00 
 861c645:	8b 45 08             	mov    0x8(%ebp),%eax
 861c648:	89 04 24             	mov    %eax,(%esp)
 861c64b:	e8 8c f9 ff ff       	call   861bfdc <_ZN6Stream10enable_outEi>
 861c650:	83 f0 01             	xor    $0x1,%eax
 861c653:	84 c0                	test   %al,%al
 861c655:	74 07                	je     861c65e <_ZN6StreamrsERl+0x28>
 861c657:	b8 00 00 00 00       	mov    $0x0,%eax
 861c65c:	eb 43                	jmp    861c6a1 <_ZN6StreamrsERl+0x6b>
 861c65e:	8b 45 08             	mov    0x8(%ebp),%eax
 861c661:	8b 58 08             	mov    0x8(%eax),%ebx
 861c664:	8b 45 08             	mov    0x8(%ebp),%eax
 861c667:	89 04 24             	mov    %eax,(%esp)
 861c66a:	e8 b9 f7 ff ff       	call   861be28 <_ZN6Stream7out_ptrEv>
 861c66f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 861c672:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 861c679:	00 
 861c67a:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c67e:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c681:	89 04 24             	mov    %eax,(%esp)
 861c684:	e8 17 12 a6 ff       	call   807d8a0 <memcpy@plt>
 861c689:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 861c690:	00 
 861c691:	8b 45 08             	mov    0x8(%ebp),%eax
 861c694:	89 04 24             	mov    %eax,(%esp)
 861c697:	e8 98 f7 ff ff       	call   861be34 <_ZN6Stream7out_ptrEi>
 861c69c:	b8 01 00 00 00       	mov    $0x1,%eax
 861c6a1:	83 c4 14             	add    $0x14,%esp
 861c6a4:	5b                   	pop    %ebx
 861c6a5:	5d                   	pop    %ebp
 861c6a6:	c3                   	ret
 861c6a7:	90                   	nop

```

```c
// Stream::operator>> @ 0x861c636

/* Stream::TEMPNAMEPLACEHOLDERVALUE(long&) */

bool __thiscall Stream::operator>>(Stream *this,long *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  
  cVar2 = enable_out(this,4);
  if (cVar2 == '\x01') {
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    memcpy(param_1,(void *)(iVar1 + iVar3),4);
    out_ptr(this,4);
  }
  return cVar2 == '\x01';
}

```

---

## operator_gt__gt__0861c6a8

```asm
// === 0861c6a8 Stream::operator>>  [0x0861c6a8-0x861c731] ===
 861c6a8:	55                   	push   %ebp
 861c6a9:	89 e5                	mov    %esp,%ebp
 861c6ab:	53                   	push   %ebx
 861c6ac:	83 ec 24             	sub    $0x24,%esp
 861c6af:	8b 45 08             	mov    0x8(%ebp),%eax
 861c6b2:	89 04 24             	mov    %eax,(%esp)
 861c6b5:	e8 1a f7 ff ff       	call   861bdd4 <_ZN6Stream6lengthEv>
 861c6ba:	85 c0                	test   %eax,%eax
 861c6bc:	0f 94 c0             	sete   %al
 861c6bf:	84 c0                	test   %al,%al
 861c6c1:	74 07                	je     861c6ca <_ZN6StreamrsEPc+0x22>
 861c6c3:	b8 00 00 00 00       	mov    $0x0,%eax
 861c6c8:	eb 62                	jmp    861c72c <_ZN6StreamrsEPc+0x84>
 861c6ca:	8b 45 08             	mov    0x8(%ebp),%eax
 861c6cd:	8b 58 08             	mov    0x8(%eax),%ebx
 861c6d0:	8b 45 08             	mov    0x8(%ebp),%eax
 861c6d3:	89 04 24             	mov    %eax,(%esp)
 861c6d6:	e8 4d f7 ff ff       	call   861be28 <_ZN6Stream7out_ptrEv>
 861c6db:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 861c6de:	89 45 f0             	mov    %eax,-0x10(%ebp)
 861c6e1:	8b 45 f0             	mov    -0x10(%ebp),%eax
 861c6e4:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c6e8:	8b 45 08             	mov    0x8(%ebp),%eax
 861c6eb:	89 04 24             	mov    %eax,(%esp)
 861c6ee:	e8 77 01 00 00       	call   861c86a <_ZN6Stream7str_lenEPc>
 861c6f3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 861c6f6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 861c6f9:	83 c0 01             	add    $0x1,%eax
 861c6fc:	89 44 24 08          	mov    %eax,0x8(%esp)
 861c700:	8b 45 f0             	mov    -0x10(%ebp),%eax
 861c703:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c707:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c70a:	89 04 24             	mov    %eax,(%esp)
 861c70d:	e8 8e 11 a6 ff       	call   807d8a0 <memcpy@plt>
 861c712:	8b 45 f4             	mov    -0xc(%ebp),%eax
 861c715:	83 c0 01             	add    $0x1,%eax
 861c718:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c71c:	8b 45 08             	mov    0x8(%ebp),%eax
 861c71f:	89 04 24             	mov    %eax,(%esp)
 861c722:	e8 0d f7 ff ff       	call   861be34 <_ZN6Stream7out_ptrEi>
 861c727:	b8 01 00 00 00       	mov    $0x1,%eax
 861c72c:	83 c4 24             	add    $0x24,%esp
 861c72f:	5b                   	pop    %ebx
 861c730:	5d                   	pop    %ebp
 861c731:	c3                   	ret

```

```c
// Stream::operator>> @ 0x861c6a8

/* Stream::TEMPNAMEPLACEHOLDERVALUE(char*) */

bool __thiscall Stream::operator>>(Stream *this,char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = length(this);
  if (iVar2 != 0) {
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    iVar4 = str_len(this,(char *)(iVar1 + iVar3));
    memcpy(param_1,(char *)(iVar1 + iVar3),iVar4 + 1);
    out_ptr(this,iVar4 + 1);
  }
  return iVar2 != 0;
}

```

---

## operator_gt__gt__0861c732

```asm
// === 0861c732 Stream::operator>>  [0x0861c732-0x861c761] ===
 861c732:	55                   	push   %ebp
 861c733:	89 e5                	mov    %esp,%ebp
 861c735:	83 ec 28             	sub    $0x28,%esp
 861c738:	c6 45 f6 00          	movb   $0x0,-0xa(%ebp)
 861c73c:	8d 45 f6             	lea    -0xa(%ebp),%eax
 861c73f:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c743:	8b 45 08             	mov    0x8(%ebp),%eax
 861c746:	89 04 24             	mov    %eax,(%esp)
 861c749:	e8 a2 fd ff ff       	call   861c4f0 <_ZN6StreamrsERc>
 861c74e:	88 45 f7             	mov    %al,-0x9(%ebp)
 861c751:	0f b6 45 f6          	movzbl -0xa(%ebp),%eax
 861c755:	89 c2                	mov    %eax,%edx
 861c757:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c75a:	88 10                	mov    %dl,(%eax)
 861c75c:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 861c760:	c9                   	leave
 861c761:	c3                   	ret

```

```c
// Stream::operator>> @ 0x861c732

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned char&) */

undefined1 __thiscall Stream::operator>>(Stream *this,uchar *param_1)

{
  undefined1 uVar1;
  uchar local_e [10];
  
  local_e[0] = '\0';
  uVar1 = operator>>(this,(char *)local_e);
  *param_1 = local_e[0];
  return uVar1;
}

```

---

## operator_gt__gt__0861c762

```asm
// === 0861c762 Stream::operator>>  [0x0861c762-0x861c795] ===
 861c762:	55                   	push   %ebp
 861c763:	89 e5                	mov    %esp,%ebp
 861c765:	83 ec 28             	sub    $0x28,%esp
 861c768:	66 c7 45 f4 00 00    	movw   $0x0,-0xc(%ebp)
 861c76e:	8d 45 f4             	lea    -0xc(%ebp),%eax
 861c771:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c775:	8b 45 08             	mov    0x8(%ebp),%eax
 861c778:	89 04 24             	mov    %eax,(%esp)
 861c77b:	e8 d2 fd ff ff       	call   861c552 <_ZN6StreamrsERs>
 861c780:	88 45 f7             	mov    %al,-0x9(%ebp)
 861c783:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 861c787:	89 c2                	mov    %eax,%edx
 861c789:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c78c:	66 89 10             	mov    %dx,(%eax)
 861c78f:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 861c793:	c9                   	leave
 861c794:	c3                   	ret
 861c795:	90                   	nop

```

```c
// Stream::operator>> @ 0x861c762

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned short&) */

undefined1 __thiscall Stream::operator>>(Stream *this,ushort *param_1)

{
  undefined1 uVar1;
  ushort local_10 [6];
  
  local_10[0] = 0;
  uVar1 = operator>>(this,(short *)local_10);
  *param_1 = local_10[0];
  return uVar1;
}

```

---

## operator_gt__gt__0861c796

```asm
// === 0861c796 Stream::operator>>  [0x0861c796-0x861c7c7] ===
 861c796:	55                   	push   %ebp
 861c797:	89 e5                	mov    %esp,%ebp
 861c799:	83 ec 28             	sub    $0x28,%esp
 861c79c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 861c7a3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 861c7a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c7aa:	8b 45 08             	mov    0x8(%ebp),%eax
 861c7ad:	89 04 24             	mov    %eax,(%esp)
 861c7b0:	e8 0f fe ff ff       	call   861c5c4 <_ZN6StreamrsERi>
 861c7b5:	88 45 f7             	mov    %al,-0x9(%ebp)
 861c7b8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 861c7bb:	89 c2                	mov    %eax,%edx
 861c7bd:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c7c0:	89 10                	mov    %edx,(%eax)
 861c7c2:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 861c7c6:	c9                   	leave
 861c7c7:	c3                   	ret

```

```c
// Stream::operator>> @ 0x861c796

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned int&) */

undefined1 __thiscall Stream::operator>>(Stream *this,uint *param_1)

{
  undefined1 uVar1;
  uint local_14 [4];
  
  local_14[0] = 0;
  uVar1 = operator>>(this,(int *)local_14);
  *param_1 = local_14[0];
  return uVar1;
}

```

---

## operator_gt__gt__0861c7c8

```asm
// === 0861c7c8 Stream::operator>>  [0x0861c7c8-0x861c7f9] ===
 861c7c8:	55                   	push   %ebp
 861c7c9:	89 e5                	mov    %esp,%ebp
 861c7cb:	83 ec 28             	sub    $0x28,%esp
 861c7ce:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 861c7d5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 861c7d8:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c7dc:	8b 45 08             	mov    0x8(%ebp),%eax
 861c7df:	89 04 24             	mov    %eax,(%esp)
 861c7e2:	e8 4f fe ff ff       	call   861c636 <_ZN6StreamrsERl>
 861c7e7:	88 45 f7             	mov    %al,-0x9(%ebp)
 861c7ea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 861c7ed:	89 c2                	mov    %eax,%edx
 861c7ef:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c7f2:	89 10                	mov    %edx,(%eax)
 861c7f4:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 861c7f8:	c9                   	leave
 861c7f9:	c3                   	ret

```

```c
// Stream::operator>> @ 0x861c7c8

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned long&) */

undefined1 __thiscall Stream::operator>>(Stream *this,ulong *param_1)

{
  undefined1 uVar1;
  ulong local_14 [4];
  
  local_14[0] = 0;
  uVar1 = operator>>(this,(long *)local_14);
  *param_1 = local_14[0];
  return uVar1;
}

```

---

## operator_lt__lt_

```asm
// === 0861c01a Stream::operator<<  [0x0861c01a-0x861c0b1] ===
 861c01a:	55                   	push   %ebp
 861c01b:	89 e5                	mov    %esp,%ebp
 861c01d:	53                   	push   %ebx
 861c01e:	83 ec 24             	sub    $0x24,%esp
 861c021:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c024:	88 45 f4             	mov    %al,-0xc(%ebp)
 861c027:	eb 1c                	jmp    861c045 <_ZN6StreamlsEb+0x2b>
 861c029:	8b 45 08             	mov    0x8(%ebp),%eax
 861c02c:	89 04 24             	mov    %eax,(%esp)
 861c02f:	e8 94 fd ff ff       	call   861bdc8 <_ZN6Stream4sizeEv>
 861c034:	01 c0                	add    %eax,%eax
 861c036:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c03a:	8b 45 08             	mov    0x8(%ebp),%eax
 861c03d:	89 04 24             	mov    %eax,(%esp)
 861c040:	e8 a3 fe ff ff       	call   861bee8 <_ZN6Stream6resizeEi>
 861c045:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861c04c:	00 
 861c04d:	8b 45 08             	mov    0x8(%ebp),%eax
 861c050:	89 04 24             	mov    %eax,(%esp)
 861c053:	e8 46 ff ff ff       	call   861bf9e <_ZN6Stream9enable_inEi>
 861c058:	83 f0 01             	xor    $0x1,%eax
 861c05b:	84 c0                	test   %al,%al
 861c05d:	75 ca                	jne    861c029 <_ZN6StreamlsEb+0xf>
 861c05f:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
 861c063:	74 19                	je     861c07e <_ZN6StreamlsEb+0x64>
 861c065:	8b 45 08             	mov    0x8(%ebp),%eax
 861c068:	8b 58 08             	mov    0x8(%eax),%ebx
 861c06b:	8b 45 08             	mov    0x8(%ebp),%eax
 861c06e:	89 04 24             	mov    %eax,(%esp)
 861c071:	e8 8a fd ff ff       	call   861be00 <_ZN6Stream6in_ptrEv>
 861c076:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 861c079:	c6 00 01             	movb   $0x1,(%eax)
 861c07c:	eb 17                	jmp    861c095 <_ZN6StreamlsEb+0x7b>
 861c07e:	8b 45 08             	mov    0x8(%ebp),%eax
 861c081:	8b 58 08             	mov    0x8(%eax),%ebx
 861c084:	8b 45 08             	mov    0x8(%ebp),%eax
 861c087:	89 04 24             	mov    %eax,(%esp)
 861c08a:	e8 71 fd ff ff       	call   861be00 <_ZN6Stream6in_ptrEv>
 861c08f:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 861c092:	c6 00 00             	movb   $0x0,(%eax)
 861c095:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861c09c:	00 
 861c09d:	8b 45 08             	mov    0x8(%ebp),%eax
 861c0a0:	89 04 24             	mov    %eax,(%esp)
 861c0a3:	e8 64 fd ff ff       	call   861be0c <_ZN6Stream6in_ptrEi>
 861c0a8:	8b 45 08             	mov    0x8(%ebp),%eax
 861c0ab:	83 c4 24             	add    $0x24,%esp
 861c0ae:	5b                   	pop    %ebx
 861c0af:	5d                   	pop    %ebp
 861c0b0:	c3                   	ret
 861c0b1:	90                   	nop

```

```c
// Stream::operator<< @ 0x861c01a

/* Stream::TEMPNAMEPLACEHOLDERVALUE(bool) */

Stream * __thiscall Stream::operator<<(Stream *this,bool param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    cVar1 = enable_in(this,1);
    if (cVar1 == '\x01') break;
    iVar2 = size(this);
    resize(this,iVar2 * 2);
  }
  if (param_1) {
    iVar2 = *(int *)(this + 8);
    iVar3 = in_ptr(this);
    *(undefined1 *)(iVar2 + iVar3) = 1;
  }
  else {
    iVar2 = *(int *)(this + 8);
    iVar3 = in_ptr(this);
    *(undefined1 *)(iVar2 + iVar3) = 0;
  }
  in_ptr(this,1);
  return this;
}

```

---

## operator_lt__lt__0861c0b2

```asm
// === 0861c0b2 Stream::operator<<  [0x0861c0b2-0x861c12d] ===
 861c0b2:	55                   	push   %ebp
 861c0b3:	89 e5                	mov    %esp,%ebp
 861c0b5:	53                   	push   %ebx
 861c0b6:	83 ec 24             	sub    $0x24,%esp
 861c0b9:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c0bc:	88 45 f4             	mov    %al,-0xc(%ebp)
 861c0bf:	eb 1c                	jmp    861c0dd <_ZN6StreamlsEc+0x2b>
 861c0c1:	8b 45 08             	mov    0x8(%ebp),%eax
 861c0c4:	89 04 24             	mov    %eax,(%esp)
 861c0c7:	e8 fc fc ff ff       	call   861bdc8 <_ZN6Stream4sizeEv>
 861c0cc:	01 c0                	add    %eax,%eax
 861c0ce:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c0d2:	8b 45 08             	mov    0x8(%ebp),%eax
 861c0d5:	89 04 24             	mov    %eax,(%esp)
 861c0d8:	e8 0b fe ff ff       	call   861bee8 <_ZN6Stream6resizeEi>
 861c0dd:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861c0e4:	00 
 861c0e5:	8b 45 08             	mov    0x8(%ebp),%eax
 861c0e8:	89 04 24             	mov    %eax,(%esp)
 861c0eb:	e8 ae fe ff ff       	call   861bf9e <_ZN6Stream9enable_inEi>
 861c0f0:	83 f0 01             	xor    $0x1,%eax
 861c0f3:	84 c0                	test   %al,%al
 861c0f5:	75 ca                	jne    861c0c1 <_ZN6StreamlsEc+0xf>
 861c0f7:	8b 45 08             	mov    0x8(%ebp),%eax
 861c0fa:	8b 58 08             	mov    0x8(%eax),%ebx
 861c0fd:	8b 45 08             	mov    0x8(%ebp),%eax
 861c100:	89 04 24             	mov    %eax,(%esp)
 861c103:	e8 f8 fc ff ff       	call   861be00 <_ZN6Stream6in_ptrEv>
 861c108:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 861c10b:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 861c10f:	88 02                	mov    %al,(%edx)
 861c111:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 861c118:	00 
 861c119:	8b 45 08             	mov    0x8(%ebp),%eax
 861c11c:	89 04 24             	mov    %eax,(%esp)
 861c11f:	e8 e8 fc ff ff       	call   861be0c <_ZN6Stream6in_ptrEi>
 861c124:	8b 45 08             	mov    0x8(%ebp),%eax
 861c127:	83 c4 24             	add    $0x24,%esp
 861c12a:	5b                   	pop    %ebx
 861c12b:	5d                   	pop    %ebp
 861c12c:	c3                   	ret
 861c12d:	90                   	nop

```

```c
// Stream::operator<< @ 0x861c0b2

/* Stream::TEMPNAMEPLACEHOLDERVALUE(char) */

Stream * __thiscall Stream::operator<<(Stream *this,char param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    cVar1 = enable_in(this,1);
    if (cVar1 == '\x01') break;
    iVar2 = size(this);
    resize(this,iVar2 * 2);
  }
  iVar2 = *(int *)(this + 8);
  iVar3 = in_ptr(this);
  *(char *)(iVar2 + iVar3) = param_1;
  in_ptr(this,1);
  return this;
}

```

---

## operator_lt__lt__0861c12e

```asm
// === 0861c12e Stream::operator<<  [0x0861c12e-0x861c1bb] ===
 861c12e:	55                   	push   %ebp
 861c12f:	89 e5                	mov    %esp,%ebp
 861c131:	53                   	push   %ebx
 861c132:	83 ec 24             	sub    $0x24,%esp
 861c135:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c138:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 861c13c:	eb 1c                	jmp    861c15a <_ZN6StreamlsEs+0x2c>
 861c13e:	8b 45 08             	mov    0x8(%ebp),%eax
 861c141:	89 04 24             	mov    %eax,(%esp)
 861c144:	e8 7f fc ff ff       	call   861bdc8 <_ZN6Stream4sizeEv>
 861c149:	01 c0                	add    %eax,%eax
 861c14b:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c14f:	8b 45 08             	mov    0x8(%ebp),%eax
 861c152:	89 04 24             	mov    %eax,(%esp)
 861c155:	e8 8e fd ff ff       	call   861bee8 <_ZN6Stream6resizeEi>
 861c15a:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 861c161:	00 
 861c162:	8b 45 08             	mov    0x8(%ebp),%eax
 861c165:	89 04 24             	mov    %eax,(%esp)
 861c168:	e8 31 fe ff ff       	call   861bf9e <_ZN6Stream9enable_inEi>
 861c16d:	83 f0 01             	xor    $0x1,%eax
 861c170:	84 c0                	test   %al,%al
 861c172:	75 ca                	jne    861c13e <_ZN6StreamlsEs+0x10>
 861c174:	8b 45 08             	mov    0x8(%ebp),%eax
 861c177:	8b 58 08             	mov    0x8(%eax),%ebx
 861c17a:	8b 45 08             	mov    0x8(%ebp),%eax
 861c17d:	89 04 24             	mov    %eax,(%esp)
 861c180:	e8 7b fc ff ff       	call   861be00 <_ZN6Stream6in_ptrEv>
 861c185:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 861c188:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 861c18f:	00 
 861c190:	8d 45 f4             	lea    -0xc(%ebp),%eax
 861c193:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c197:	89 14 24             	mov    %edx,(%esp)
 861c19a:	e8 01 17 a6 ff       	call   807d8a0 <memcpy@plt>
 861c19f:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 861c1a6:	00 
 861c1a7:	8b 45 08             	mov    0x8(%ebp),%eax
 861c1aa:	89 04 24             	mov    %eax,(%esp)
 861c1ad:	e8 5a fc ff ff       	call   861be0c <_ZN6Stream6in_ptrEi>
 861c1b2:	8b 45 08             	mov    0x8(%ebp),%eax
 861c1b5:	83 c4 24             	add    $0x24,%esp
 861c1b8:	5b                   	pop    %ebx
 861c1b9:	5d                   	pop    %ebp
 861c1ba:	c3                   	ret
 861c1bb:	90                   	nop

```

```c
// Stream::operator<< @ 0x861c12e

/* Stream::TEMPNAMEPLACEHOLDERVALUE(short) */

Stream * __thiscall Stream::operator<<(Stream *this,short param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  short local_10 [4];
  
  local_10[0] = param_1;
  while( true ) {
    cVar1 = enable_in(this,2);
    if (cVar1 == '\x01') break;
    iVar2 = size(this);
    resize(this,iVar2 * 2);
  }
  iVar2 = *(int *)(this + 8);
  iVar3 = in_ptr(this);
  memcpy((void *)(iVar2 + iVar3),local_10,2);
  in_ptr(this,2);
  return this;
}

```

---

## operator_lt__lt__0861c1bc

```asm
// === 0861c1bc Stream::operator<<  [0x0861c1bc-0x861c241] ===
 861c1bc:	55                   	push   %ebp
 861c1bd:	89 e5                	mov    %esp,%ebp
 861c1bf:	53                   	push   %ebx
 861c1c0:	83 ec 14             	sub    $0x14,%esp
 861c1c3:	eb 1c                	jmp    861c1e1 <_ZN6StreamlsEi+0x25>
 861c1c5:	8b 45 08             	mov    0x8(%ebp),%eax
 861c1c8:	89 04 24             	mov    %eax,(%esp)
 861c1cb:	e8 f8 fb ff ff       	call   861bdc8 <_ZN6Stream4sizeEv>
 861c1d0:	01 c0                	add    %eax,%eax
 861c1d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c1d6:	8b 45 08             	mov    0x8(%ebp),%eax
 861c1d9:	89 04 24             	mov    %eax,(%esp)
 861c1dc:	e8 07 fd ff ff       	call   861bee8 <_ZN6Stream6resizeEi>
 861c1e1:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 861c1e8:	00 
 861c1e9:	8b 45 08             	mov    0x8(%ebp),%eax
 861c1ec:	89 04 24             	mov    %eax,(%esp)
 861c1ef:	e8 aa fd ff ff       	call   861bf9e <_ZN6Stream9enable_inEi>
 861c1f4:	83 f0 01             	xor    $0x1,%eax
 861c1f7:	84 c0                	test   %al,%al
 861c1f9:	75 ca                	jne    861c1c5 <_ZN6StreamlsEi+0x9>
 861c1fb:	8b 45 08             	mov    0x8(%ebp),%eax
 861c1fe:	8b 58 08             	mov    0x8(%eax),%ebx
 861c201:	8b 45 08             	mov    0x8(%ebp),%eax
 861c204:	89 04 24             	mov    %eax,(%esp)
 861c207:	e8 f4 fb ff ff       	call   861be00 <_ZN6Stream6in_ptrEv>
 861c20c:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 861c20f:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 861c216:	00 
 861c217:	8d 45 0c             	lea    0xc(%ebp),%eax
 861c21a:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c21e:	89 14 24             	mov    %edx,(%esp)
 861c221:	e8 7a 16 a6 ff       	call   807d8a0 <memcpy@plt>
 861c226:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 861c22d:	00 
 861c22e:	8b 45 08             	mov    0x8(%ebp),%eax
 861c231:	89 04 24             	mov    %eax,(%esp)
 861c234:	e8 d3 fb ff ff       	call   861be0c <_ZN6Stream6in_ptrEi>
 861c239:	8b 45 08             	mov    0x8(%ebp),%eax
 861c23c:	83 c4 14             	add    $0x14,%esp
 861c23f:	5b                   	pop    %ebx
 861c240:	5d                   	pop    %ebp
 861c241:	c3                   	ret

```

```c
// Stream::operator<< @ 0x861c1bc

/* Stream::TEMPNAMEPLACEHOLDERVALUE(int) */

Stream * __thiscall Stream::operator<<(Stream *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    cVar1 = enable_in(this,4);
    if (cVar1 == '\x01') break;
    iVar2 = size(this);
    resize(this,iVar2 * 2);
  }
  iVar2 = *(int *)(this + 8);
  iVar3 = in_ptr(this);
  memcpy((void *)(iVar2 + iVar3),&param_1,4);
  in_ptr(this,4);
  return this;
}

```

---

## operator_lt__lt__0861c242

```asm
// === 0861c242 Stream::operator<<  [0x0861c242-0x861c2c7] ===
 861c242:	55                   	push   %ebp
 861c243:	89 e5                	mov    %esp,%ebp
 861c245:	53                   	push   %ebx
 861c246:	83 ec 14             	sub    $0x14,%esp
 861c249:	eb 1c                	jmp    861c267 <_ZN6StreamlsEl+0x25>
 861c24b:	8b 45 08             	mov    0x8(%ebp),%eax
 861c24e:	89 04 24             	mov    %eax,(%esp)
 861c251:	e8 72 fb ff ff       	call   861bdc8 <_ZN6Stream4sizeEv>
 861c256:	01 c0                	add    %eax,%eax
 861c258:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c25c:	8b 45 08             	mov    0x8(%ebp),%eax
 861c25f:	89 04 24             	mov    %eax,(%esp)
 861c262:	e8 81 fc ff ff       	call   861bee8 <_ZN6Stream6resizeEi>
 861c267:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 861c26e:	00 
 861c26f:	8b 45 08             	mov    0x8(%ebp),%eax
 861c272:	89 04 24             	mov    %eax,(%esp)
 861c275:	e8 24 fd ff ff       	call   861bf9e <_ZN6Stream9enable_inEi>
 861c27a:	83 f0 01             	xor    $0x1,%eax
 861c27d:	84 c0                	test   %al,%al
 861c27f:	75 ca                	jne    861c24b <_ZN6StreamlsEl+0x9>
 861c281:	8b 45 08             	mov    0x8(%ebp),%eax
 861c284:	8b 58 08             	mov    0x8(%eax),%ebx
 861c287:	8b 45 08             	mov    0x8(%ebp),%eax
 861c28a:	89 04 24             	mov    %eax,(%esp)
 861c28d:	e8 6e fb ff ff       	call   861be00 <_ZN6Stream6in_ptrEv>
 861c292:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 861c295:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 861c29c:	00 
 861c29d:	8d 45 0c             	lea    0xc(%ebp),%eax
 861c2a0:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c2a4:	89 14 24             	mov    %edx,(%esp)
 861c2a7:	e8 f4 15 a6 ff       	call   807d8a0 <memcpy@plt>
 861c2ac:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 861c2b3:	00 
 861c2b4:	8b 45 08             	mov    0x8(%ebp),%eax
 861c2b7:	89 04 24             	mov    %eax,(%esp)
 861c2ba:	e8 4d fb ff ff       	call   861be0c <_ZN6Stream6in_ptrEi>
 861c2bf:	8b 45 08             	mov    0x8(%ebp),%eax
 861c2c2:	83 c4 14             	add    $0x14,%esp
 861c2c5:	5b                   	pop    %ebx
 861c2c6:	5d                   	pop    %ebp
 861c2c7:	c3                   	ret

```

```c
// Stream::operator<< @ 0x861c242

/* Stream::TEMPNAMEPLACEHOLDERVALUE(long) */

Stream * __thiscall Stream::operator<<(Stream *this,long param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    cVar1 = enable_in(this,4);
    if (cVar1 == '\x01') break;
    iVar2 = size(this);
    resize(this,iVar2 * 2);
  }
  iVar2 = *(int *)(this + 8);
  iVar3 = in_ptr(this);
  memcpy((void *)(iVar2 + iVar3),&param_1,4);
  in_ptr(this,4);
  return this;
}

```

---

## operator_lt__lt__0861c2c8

```asm
// === 0861c2c8 Stream::operator<<  [0x0861c2c8-0x861c369] ===
 861c2c8:	55                   	push   %ebp
 861c2c9:	89 e5                	mov    %esp,%ebp
 861c2cb:	56                   	push   %esi
 861c2cc:	53                   	push   %ebx
 861c2cd:	83 ec 20             	sub    $0x20,%esp
 861c2d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c2d3:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c2d7:	8b 45 08             	mov    0x8(%ebp),%eax
 861c2da:	89 04 24             	mov    %eax,(%esp)
 861c2dd:	e8 88 05 00 00       	call   861c86a <_ZN6Stream7str_lenEPc>
 861c2e2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 861c2e5:	eb 1c                	jmp    861c303 <_ZN6StreamlsEPc+0x3b>
 861c2e7:	8b 45 08             	mov    0x8(%ebp),%eax
 861c2ea:	89 04 24             	mov    %eax,(%esp)
 861c2ed:	e8 d6 fa ff ff       	call   861bdc8 <_ZN6Stream4sizeEv>
 861c2f2:	01 c0                	add    %eax,%eax
 861c2f4:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c2f8:	8b 45 08             	mov    0x8(%ebp),%eax
 861c2fb:	89 04 24             	mov    %eax,(%esp)
 861c2fe:	e8 e5 fb ff ff       	call   861bee8 <_ZN6Stream6resizeEi>
 861c303:	8b 45 f4             	mov    -0xc(%ebp),%eax
 861c306:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c30a:	8b 45 08             	mov    0x8(%ebp),%eax
 861c30d:	89 04 24             	mov    %eax,(%esp)
 861c310:	e8 89 fc ff ff       	call   861bf9e <_ZN6Stream9enable_inEi>
 861c315:	83 f0 01             	xor    $0x1,%eax
 861c318:	84 c0                	test   %al,%al
 861c31a:	75 cb                	jne    861c2e7 <_ZN6StreamlsEPc+0x1f>
 861c31c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 861c31f:	83 c0 01             	add    $0x1,%eax
 861c322:	89 c3                	mov    %eax,%ebx
 861c324:	8b 45 08             	mov    0x8(%ebp),%eax
 861c327:	8b 70 08             	mov    0x8(%eax),%esi
 861c32a:	8b 45 08             	mov    0x8(%ebp),%eax
 861c32d:	89 04 24             	mov    %eax,(%esp)
 861c330:	e8 cb fa ff ff       	call   861be00 <_ZN6Stream6in_ptrEv>
 861c335:	8d 14 06             	lea    (%esi,%eax,1),%edx
 861c338:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861c33c:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c33f:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c343:	89 14 24             	mov    %edx,(%esp)
 861c346:	e8 55 15 a6 ff       	call   807d8a0 <memcpy@plt>
 861c34b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 861c34e:	83 c0 01             	add    $0x1,%eax
 861c351:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c355:	8b 45 08             	mov    0x8(%ebp),%eax
 861c358:	89 04 24             	mov    %eax,(%esp)
 861c35b:	e8 ac fa ff ff       	call   861be0c <_ZN6Stream6in_ptrEi>
 861c360:	8b 45 08             	mov    0x8(%ebp),%eax
 861c363:	83 c4 20             	add    $0x20,%esp
 861c366:	5b                   	pop    %ebx
 861c367:	5e                   	pop    %esi
 861c368:	5d                   	pop    %ebp
 861c369:	c3                   	ret

```

```c
// Stream::operator<< @ 0x861c2c8

/* Stream::TEMPNAMEPLACEHOLDERVALUE(char*) */

Stream * __thiscall Stream::operator<<(Stream *this,char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = str_len(this,param_1);
  while( true ) {
    cVar1 = enable_in(this,iVar2);
    if (cVar1 == '\x01') break;
    iVar3 = size(this);
    resize(this,iVar3 * 2);
  }
  iVar3 = *(int *)(this + 8);
  iVar4 = in_ptr(this);
  memcpy((void *)(iVar3 + iVar4),param_1,iVar2 + 1);
  in_ptr(this,iVar2 + 1);
  return this;
}

```

---

## operator_lt__lt__0861c36a

```asm
// === 0861c36a Stream::operator<<  [0x0861c36a-0x861c391] ===
 861c36a:	55                   	push   %ebp
 861c36b:	89 e5                	mov    %esp,%ebp
 861c36d:	83 ec 28             	sub    $0x28,%esp
 861c370:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c373:	88 45 f4             	mov    %al,-0xc(%ebp)
 861c376:	0f b6 45 f4          	movzbl -0xc(%ebp),%eax
 861c37a:	0f be c0             	movsbl %al,%eax
 861c37d:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c381:	8b 45 08             	mov    0x8(%ebp),%eax
 861c384:	89 04 24             	mov    %eax,(%esp)
 861c387:	e8 26 fd ff ff       	call   861c0b2 <_ZN6StreamlsEc>
 861c38c:	8b 45 08             	mov    0x8(%ebp),%eax
 861c38f:	c9                   	leave
 861c390:	c3                   	ret
 861c391:	90                   	nop

```

```c
// Stream::operator<< @ 0x861c36a

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned char) */

Stream * __thiscall Stream::operator<<(Stream *this,uchar param_1)

{
  operator<<(this,param_1);
  return this;
}

```

---

## operator_lt__lt__0861c392

```asm
// === 0861c392 Stream::operator<<  [0x0861c392-0x861c3b7] ===
 861c392:	55                   	push   %ebp
 861c393:	89 e5                	mov    %esp,%ebp
 861c395:	83 ec 28             	sub    $0x28,%esp
 861c398:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c39b:	66 89 45 f4          	mov    %ax,-0xc(%ebp)
 861c39f:	0f b7 45 f4          	movzwl -0xc(%ebp),%eax
 861c3a3:	98                   	cwtl
 861c3a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c3a8:	8b 45 08             	mov    0x8(%ebp),%eax
 861c3ab:	89 04 24             	mov    %eax,(%esp)
 861c3ae:	e8 7b fd ff ff       	call   861c12e <_ZN6StreamlsEs>
 861c3b3:	8b 45 08             	mov    0x8(%ebp),%eax
 861c3b6:	c9                   	leave
 861c3b7:	c3                   	ret

```

```c
// Stream::operator<< @ 0x861c392

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned short) */

Stream * __thiscall Stream::operator<<(Stream *this,ushort param_1)

{
  operator<<(this,param_1);
  return this;
}

```

---

## operator_lt__lt__0861c3b8

```asm
// === 0861c3b8 Stream::operator<<  [0x0861c3b8-0x861c3d5] ===
 861c3b8:	55                   	push   %ebp
 861c3b9:	89 e5                	mov    %esp,%ebp
 861c3bb:	83 ec 18             	sub    $0x18,%esp
 861c3be:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c3c1:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c3c5:	8b 45 08             	mov    0x8(%ebp),%eax
 861c3c8:	89 04 24             	mov    %eax,(%esp)
 861c3cb:	e8 ec fd ff ff       	call   861c1bc <_ZN6StreamlsEi>
 861c3d0:	8b 45 08             	mov    0x8(%ebp),%eax
 861c3d3:	c9                   	leave
 861c3d4:	c3                   	ret
 861c3d5:	90                   	nop

```

```c
// Stream::operator<< @ 0x861c3b8

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned int) */

Stream * __thiscall Stream::operator<<(Stream *this,uint param_1)

{
  operator<<(this,param_1);
  return this;
}

```

---

## operator_lt__lt__0861c3d6

```asm
// === 0861c3d6 Stream::operator<<  [0x0861c3d6-0x861c3f3] ===
 861c3d6:	55                   	push   %ebp
 861c3d7:	89 e5                	mov    %esp,%ebp
 861c3d9:	83 ec 18             	sub    $0x18,%esp
 861c3dc:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c3df:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c3e3:	8b 45 08             	mov    0x8(%ebp),%eax
 861c3e6:	89 04 24             	mov    %eax,(%esp)
 861c3e9:	e8 54 fe ff ff       	call   861c242 <_ZN6StreamlsEl>
 861c3ee:	8b 45 08             	mov    0x8(%ebp),%eax
 861c3f1:	c9                   	leave
 861c3f2:	c3                   	ret
 861c3f3:	90                   	nop

```

```c
// Stream::operator<< @ 0x861c3d6

/* Stream::TEMPNAMEPLACEHOLDERVALUE(unsigned long) */

Stream * __thiscall Stream::operator<<(Stream *this,ulong param_1)

{
  operator<<(this,param_1);
  return this;
}

```

---

## out_ptr

```asm
// === 0861be28 Stream::out_ptr  [0x0861be28-0x861be33] ===
 861be28:	55                   	push   %ebp
 861be29:	89 e5                	mov    %esp,%ebp
 861be2b:	8b 45 08             	mov    0x8(%ebp),%eax
 861be2e:	8b 40 10             	mov    0x10(%eax),%eax
 861be31:	5d                   	pop    %ebp
 861be32:	c3                   	ret
 861be33:	90                   	nop

```

```c
// Stream::out_ptr @ 0x861be28

/* Stream::out_ptr() */

undefined4 __thiscall Stream::out_ptr(Stream *this)

{
  return *(undefined4 *)(this + 0x10);
}

```

---

## out_ptr_0861be34

```asm
// === 0861be34 Stream::out_ptr  [0x0861be34-0x861be89] ===
 861be34:	55                   	push   %ebp
 861be35:	89 e5                	mov    %esp,%ebp
 861be37:	83 ec 18             	sub    $0x18,%esp
 861be3a:	8b 45 08             	mov    0x8(%ebp),%eax
 861be3d:	8b 40 10             	mov    0x10(%eax),%eax
 861be40:	89 c2                	mov    %eax,%edx
 861be42:	03 55 0c             	add    0xc(%ebp),%edx
 861be45:	8b 45 08             	mov    0x8(%ebp),%eax
 861be48:	8b 40 0c             	mov    0xc(%eax),%eax
 861be4b:	39 c2                	cmp    %eax,%edx
 861be4d:	7e 07                	jle    861be56 <_ZN6Stream7out_ptrEi+0x22>
 861be4f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 861be54:	eb 32                	jmp    861be88 <_ZN6Stream7out_ptrEi+0x54>
 861be56:	8b 45 08             	mov    0x8(%ebp),%eax
 861be59:	8b 40 10             	mov    0x10(%eax),%eax
 861be5c:	89 c2                	mov    %eax,%edx
 861be5e:	03 55 0c             	add    0xc(%ebp),%edx
 861be61:	8b 45 08             	mov    0x8(%ebp),%eax
 861be64:	89 50 10             	mov    %edx,0x10(%eax)
 861be67:	8b 45 08             	mov    0x8(%ebp),%eax
 861be6a:	8b 50 10             	mov    0x10(%eax),%edx
 861be6d:	8b 45 08             	mov    0x8(%ebp),%eax
 861be70:	8b 40 0c             	mov    0xc(%eax),%eax
 861be73:	39 c2                	cmp    %eax,%edx
 861be75:	75 0b                	jne    861be82 <_ZN6Stream7out_ptrEi+0x4e>
 861be77:	8b 45 08             	mov    0x8(%ebp),%eax
 861be7a:	89 04 24             	mov    %eax,(%esp)
 861be7d:	e8 08 00 00 00       	call   861be8a <_ZN6Stream5resetEv>
 861be82:	8b 45 08             	mov    0x8(%ebp),%eax
 861be85:	8b 40 10             	mov    0x10(%eax),%eax
 861be88:	c9                   	leave
 861be89:	c3                   	ret

```

```c
// Stream::out_ptr @ 0x861be34

/* Stream::out_ptr(int) */

undefined4 __thiscall Stream::out_ptr(Stream *this,int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 0xc) < *(int *)(this + 0x10) + param_1) {
    uVar1 = 0xffffffff;
  }
  else {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + param_1;
    if (*(int *)(this + 0x10) == *(int *)(this + 0xc)) {
      reset(this);
    }
    uVar1 = *(undefined4 *)(this + 0x10);
  }
  return uVar1;
}

```

---

## put_binary

```asm
// === 0861c3f4 Stream::put_binary  [0x0861c3f4-0x861c47b] ===
 861c3f4:	55                   	push   %ebp
 861c3f5:	89 e5                	mov    %esp,%ebp
 861c3f7:	56                   	push   %esi
 861c3f8:	53                   	push   %ebx
 861c3f9:	83 ec 10             	sub    $0x10,%esp
 861c3fc:	eb 1c                	jmp    861c41a <_ZN6Stream10put_binaryEPvi+0x26>
 861c3fe:	8b 45 08             	mov    0x8(%ebp),%eax
 861c401:	89 04 24             	mov    %eax,(%esp)
 861c404:	e8 bf f9 ff ff       	call   861bdc8 <_ZN6Stream4sizeEv>
 861c409:	01 c0                	add    %eax,%eax
 861c40b:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c40f:	8b 45 08             	mov    0x8(%ebp),%eax
 861c412:	89 04 24             	mov    %eax,(%esp)
 861c415:	e8 ce fa ff ff       	call   861bee8 <_ZN6Stream6resizeEi>
 861c41a:	8b 45 10             	mov    0x10(%ebp),%eax
 861c41d:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c421:	8b 45 08             	mov    0x8(%ebp),%eax
 861c424:	89 04 24             	mov    %eax,(%esp)
 861c427:	e8 72 fb ff ff       	call   861bf9e <_ZN6Stream9enable_inEi>
 861c42c:	83 f0 01             	xor    $0x1,%eax
 861c42f:	84 c0                	test   %al,%al
 861c431:	75 cb                	jne    861c3fe <_ZN6Stream10put_binaryEPvi+0xa>
 861c433:	8b 5d 10             	mov    0x10(%ebp),%ebx
 861c436:	8b 45 08             	mov    0x8(%ebp),%eax
 861c439:	8b 70 08             	mov    0x8(%eax),%esi
 861c43c:	8b 45 08             	mov    0x8(%ebp),%eax
 861c43f:	89 04 24             	mov    %eax,(%esp)
 861c442:	e8 b9 f9 ff ff       	call   861be00 <_ZN6Stream6in_ptrEv>
 861c447:	8d 14 06             	lea    (%esi,%eax,1),%edx
 861c44a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861c44e:	8b 45 0c             	mov    0xc(%ebp),%eax
 861c451:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c455:	89 14 24             	mov    %edx,(%esp)
 861c458:	e8 43 14 a6 ff       	call   807d8a0 <memcpy@plt>
 861c45d:	8b 45 10             	mov    0x10(%ebp),%eax
 861c460:	89 44 24 04          	mov    %eax,0x4(%esp)
 861c464:	8b 45 08             	mov    0x8(%ebp),%eax
 861c467:	89 04 24             	mov    %eax,(%esp)
 861c46a:	e8 9d f9 ff ff       	call   861be0c <_ZN6Stream6in_ptrEi>
 861c46f:	b8 01 00 00 00       	mov    $0x1,%eax
 861c474:	83 c4 10             	add    $0x10,%esp
 861c477:	5b                   	pop    %ebx
 861c478:	5e                   	pop    %esi
 861c479:	5d                   	pop    %ebp
 861c47a:	c3                   	ret
 861c47b:	90                   	nop

```

```c
// Stream::put_binary @ 0x861c3f4

/* Stream::put_binary(void*, int) */

undefined4 __thiscall Stream::put_binary(Stream *this,void *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  while( true ) {
    cVar1 = enable_in(this,param_2);
    if (cVar1 == '\x01') break;
    iVar2 = size(this);
    resize(this,iVar2 * 2);
  }
  iVar2 = *(int *)(this + 8);
  iVar3 = in_ptr(this);
  memcpy((void *)(iVar2 + iVar3),param_1,param_2);
  in_ptr(this,param_2);
  return 1;
}

```

---

## reset

```asm
// === 0861be8a Stream::reset  [0x0861be8a-0x861bec3] ===
 861be8a:	55                   	push   %ebp
 861be8b:	89 e5                	mov    %esp,%ebp
 861be8d:	83 ec 18             	sub    $0x18,%esp
 861be90:	8b 45 08             	mov    0x8(%ebp),%eax
 861be93:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 861be9a:	8b 45 08             	mov    0x8(%ebp),%eax
 861be9d:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 861bea4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 861beab:	00 
 861beac:	8b 45 08             	mov    0x8(%ebp),%eax
 861beaf:	89 04 24             	mov    %eax,(%esp)
 861beb2:	e8 0d 00 00 00       	call   861bec4 <_ZN6Stream14set_big_streamEb>
 861beb7:	8b 45 08             	mov    0x8(%ebp),%eax
 861beba:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 861bec1:	c9                   	leave
 861bec2:	c3                   	ret
 861bec3:	90                   	nop

```

```c
// Stream::reset @ 0x861be8a

/* Stream::reset() */

void __thiscall Stream::reset(Stream *this)

{
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  set_big_stream(this,false);
  *(undefined4 *)(this + 0x20) = 0;
  return;
}

```

---

## resize

```asm
// === 0861bee8 Stream::resize  [0x0861bee8-0x861bf9d] ===
 861bee8:	55                   	push   %ebp
 861bee9:	89 e5                	mov    %esp,%ebp
 861beeb:	56                   	push   %esi
 861beec:	53                   	push   %ebx
 861beed:	83 ec 20             	sub    $0x20,%esp
 861bef0:	8b 45 0c             	mov    0xc(%ebp),%eax
 861bef3:	89 04 24             	mov    %eax,(%esp)
 861bef6:	e8 c5 6e 10 00       	call   8722dc0 <_Znaj>
 861befb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 861befe:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 861bf02:	75 0a                	jne    861bf0e <_ZN6Stream6resizeEi+0x26>
 861bf04:	b8 00 00 00 00       	mov    $0x0,%eax
 861bf09:	e9 88 00 00 00       	jmp    861bf96 <_ZN6Stream6resizeEi+0xae>
 861bf0e:	8b 45 08             	mov    0x8(%ebp),%eax
 861bf11:	89 04 24             	mov    %eax,(%esp)
 861bf14:	e8 bb fe ff ff       	call   861bdd4 <_ZN6Stream6lengthEv>
 861bf19:	89 c3                	mov    %eax,%ebx
 861bf1b:	8b 45 08             	mov    0x8(%ebp),%eax
 861bf1e:	8b 70 08             	mov    0x8(%eax),%esi
 861bf21:	8b 45 08             	mov    0x8(%ebp),%eax
 861bf24:	89 04 24             	mov    %eax,(%esp)
 861bf27:	e8 fc fe ff ff       	call   861be28 <_ZN6Stream7out_ptrEv>
 861bf2c:	8d 04 06             	lea    (%esi,%eax,1),%eax
 861bf2f:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 861bf33:	89 44 24 04          	mov    %eax,0x4(%esp)
 861bf37:	8b 45 f4             	mov    -0xc(%ebp),%eax
 861bf3a:	89 04 24             	mov    %eax,(%esp)
 861bf3d:	e8 5e 19 a6 ff       	call   807d8a0 <memcpy@plt>
 861bf42:	8b 45 08             	mov    0x8(%ebp),%eax
 861bf45:	8b 40 08             	mov    0x8(%eax),%eax
 861bf48:	85 c0                	test   %eax,%eax
 861bf4a:	74 18                	je     861bf64 <_ZN6Stream6resizeEi+0x7c>
 861bf4c:	8b 45 08             	mov    0x8(%ebp),%eax
 861bf4f:	8b 40 08             	mov    0x8(%eax),%eax
 861bf52:	85 c0                	test   %eax,%eax
 861bf54:	74 0e                	je     861bf64 <_ZN6Stream6resizeEi+0x7c>
 861bf56:	8b 45 08             	mov    0x8(%ebp),%eax
 861bf59:	8b 40 08             	mov    0x8(%eax),%eax
 861bf5c:	89 04 24             	mov    %eax,(%esp)
 861bf5f:	e8 4c 8c 10 00       	call   8724bb0 <_ZdaPv>
 861bf64:	8b 45 08             	mov    0x8(%ebp),%eax
 861bf67:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 861bf6e:	8b 45 08             	mov    0x8(%ebp),%eax
 861bf71:	89 04 24             	mov    %eax,(%esp)
 861bf74:	e8 5b fe ff ff       	call   861bdd4 <_ZN6Stream6lengthEv>
 861bf79:	8b 55 08             	mov    0x8(%ebp),%edx
 861bf7c:	89 42 0c             	mov    %eax,0xc(%edx)
 861bf7f:	8b 45 08             	mov    0x8(%ebp),%eax
 861bf82:	8b 55 f4             	mov    -0xc(%ebp),%edx
 861bf85:	89 50 08             	mov    %edx,0x8(%eax)
 861bf88:	8b 45 08             	mov    0x8(%ebp),%eax
 861bf8b:	8b 55 0c             	mov    0xc(%ebp),%edx
 861bf8e:	89 50 04             	mov    %edx,0x4(%eax)
 861bf91:	b8 01 00 00 00       	mov    $0x1,%eax
 861bf96:	83 c4 20             	add    $0x20,%esp
 861bf99:	5b                   	pop    %ebx
 861bf9a:	5e                   	pop    %esi
 861bf9b:	5d                   	pop    %ebp
 861bf9c:	c3                   	ret
 861bf9d:	90                   	nop

```

```c
// Stream::resize @ 0x861bee8

/* Stream::resize(int) */

undefined4 __thiscall Stream::resize(Stream *this,int param_1)

{
  int iVar1;
  void *__dest;
  undefined4 uVar2;
  size_t __n;
  int iVar3;
  
  __dest = operator_new__(param_1);
  if (__dest == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    __n = length(this);
    iVar1 = *(int *)(this + 8);
    iVar3 = out_ptr(this);
    memcpy(__dest,(void *)(iVar1 + iVar3),__n);
    if ((*(int *)(this + 8) != 0) && (*(int *)(this + 8) != 0)) {
      operator_delete__(*(void **)(this + 8));
    }
    *(undefined4 *)(this + 0x10) = 0;
    uVar2 = length(this);
    *(undefined4 *)(this + 0xc) = uVar2;
    *(void **)(this + 8) = __dest;
    *(int *)(this + 4) = param_1;
    uVar2 = 1;
  }
  return uVar2;
}

```

---

## set_big_stream

```asm
// === 0861bec4 Stream::set_big_stream  [0x0861bec4-0x861bedb] ===
 861bec4:	55                   	push   %ebp
 861bec5:	89 e5                	mov    %esp,%ebp
 861bec7:	83 ec 04             	sub    $0x4,%esp
 861beca:	8b 45 0c             	mov    0xc(%ebp),%eax
 861becd:	88 45 fc             	mov    %al,-0x4(%ebp)
 861bed0:	8b 45 08             	mov    0x8(%ebp),%eax
 861bed3:	0f b6 55 fc          	movzbl -0x4(%ebp),%edx
 861bed7:	88 50 14             	mov    %dl,0x14(%eax)
 861beda:	c9                   	leave
 861bedb:	c3                   	ret

```

```c
// Stream::set_big_stream @ 0x861bec4

/* Stream::set_big_stream(bool) */

void __thiscall Stream::set_big_stream(Stream *this,bool param_1)

{
  this[0x14] = (Stream)param_1;
  return;
}

```

---

## size

```asm
// === 0861bdc8 Stream::size  [0x0861bdc8-0x861bdd3] ===
 861bdc8:	55                   	push   %ebp
 861bdc9:	89 e5                	mov    %esp,%ebp
 861bdcb:	8b 45 08             	mov    0x8(%ebp),%eax
 861bdce:	8b 40 04             	mov    0x4(%eax),%eax
 861bdd1:	5d                   	pop    %ebp
 861bdd2:	c3                   	ret
 861bdd3:	90                   	nop

```

```c
// Stream::size @ 0x861bdc8

/* Stream::size() */

undefined4 __thiscall Stream::size(Stream *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## str_len

```asm
// === 0861c86a Stream::str_len  [0x0861c86a-0x861c8af] ===
 861c86a:	55                   	push   %ebp
 861c86b:	89 e5                	mov    %esp,%ebp
 861c86d:	83 ec 10             	sub    $0x10,%esp
 861c870:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
 861c877:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 861c87e:	eb 1a                	jmp    861c89a <_ZN6Stream7str_lenEPc+0x30>
 861c880:	8b 45 fc             	mov    -0x4(%ebp),%eax
 861c883:	03 45 0c             	add    0xc(%ebp),%eax
 861c886:	0f b6 00             	movzbl (%eax),%eax
 861c889:	84 c0                	test   %al,%al
 861c88b:	75 05                	jne    861c892 <_ZN6Stream7str_lenEPc+0x28>
 861c88d:	8b 45 f8             	mov    -0x8(%ebp),%eax
 861c890:	eb 1b                	jmp    861c8ad <_ZN6Stream7str_lenEPc+0x43>
 861c892:	83 45 f8 01          	addl   $0x1,-0x8(%ebp)
 861c896:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 861c89a:	81 7d fc 7f 96 98 00 	cmpl   $0x98967f,-0x4(%ebp)
 861c8a1:	0f 9e c0             	setle  %al
 861c8a4:	84 c0                	test   %al,%al
 861c8a6:	75 d8                	jne    861c880 <_ZN6Stream7str_lenEPc+0x16>
 861c8a8:	b8 00 00 00 00       	mov    $0x0,%eax
 861c8ad:	c9                   	leave
 861c8ae:	c3                   	ret
 861c8af:	90                   	nop

```

```c
// Stream::str_len @ 0x861c86a

/* Stream::str_len(char*) */

int __thiscall Stream::str_len(Stream *this,char *param_1)

{
  int local_c;
  int local_8;
  
  local_c = 0;
  local_8 = 0;
  while( true ) {
    if (9999999 < local_8) {
      return 0;
    }
    if (param_1[local_8] == '\0') break;
    local_c = local_c + 1;
    local_8 = local_8 + 1;
  }
  return local_c;
}

```

---

## ~Stream

```asm
// === 0861bd6c Stream::~Stream  [0x0861bd6c-0x861bda9] ===
 861bd6c:	55                   	push   %ebp
 861bd6d:	89 e5                	mov    %esp,%ebp
 861bd6f:	83 ec 18             	sub    $0x18,%esp
 861bd72:	8b 45 08             	mov    0x8(%ebp),%eax
 861bd75:	c7 00 b8 21 ce 08    	movl   $0x8ce21b8,(%eax)
 861bd7b:	8b 45 08             	mov    0x8(%ebp),%eax
 861bd7e:	8b 40 08             	mov    0x8(%eax),%eax
 861bd81:	85 c0                	test   %eax,%eax
 861bd83:	74 0e                	je     861bd93 <_ZN6StreamD1Ev+0x27>
 861bd85:	8b 45 08             	mov    0x8(%ebp),%eax
 861bd88:	8b 40 08             	mov    0x8(%eax),%eax
 861bd8b:	89 04 24             	mov    %eax,(%esp)
 861bd8e:	e8 1d 8e 10 00       	call   8724bb0 <_ZdaPv>
 861bd93:	b8 00 00 00 00       	mov    $0x0,%eax
 861bd98:	84 c0                	test   %al,%al
 861bd9a:	74 0b                	je     861bda7 <_ZN6StreamD1Ev+0x3b>
 861bd9c:	8b 45 08             	mov    0x8(%ebp),%eax
 861bd9f:	89 04 24             	mov    %eax,(%esp)
 861bda2:	e8 49 87 10 00       	call   87244f0 <_ZdlPv>
 861bda7:	c9                   	leave
 861bda8:	c3                   	ret
 861bda9:	90                   	nop

```

```c
// Stream::~Stream @ 0x861bd6c

/* WARNING: Removing unreachable block (ram,0x0861bd9c) */
/* Stream::~Stream() */

void __thiscall Stream::~Stream(Stream *this)

{
  *(undefined ***)this = &PTR__Stream_08ce21b8;
  if (*(int *)(this + 8) != 0) {
    operator_delete__(*(void **)(this + 8));
  }
  return;
}

```

---

## ~Stream_0861bdaa

```asm
// === 0861bdaa Stream::~Stream  [0x0861bdaa-0x861bdc7] ===
 861bdaa:	55                   	push   %ebp
 861bdab:	89 e5                	mov    %esp,%ebp
 861bdad:	83 ec 18             	sub    $0x18,%esp
 861bdb0:	8b 45 08             	mov    0x8(%ebp),%eax
 861bdb3:	89 04 24             	mov    %eax,(%esp)
 861bdb6:	e8 b1 ff ff ff       	call   861bd6c <_ZN6StreamD1Ev>
 861bdbb:	8b 45 08             	mov    0x8(%ebp),%eax
 861bdbe:	89 04 24             	mov    %eax,(%esp)
 861bdc1:	e8 2a 87 10 00       	call   87244f0 <_ZdlPv>
 861bdc6:	c9                   	leave
 861bdc7:	c3                   	ret

```

```c
// Stream::~Stream @ 0x861bdaa

/* Stream::~Stream() */

void __thiscall Stream::~Stream(Stream *this)

{
  ~Stream(this);
  operator_delete(this);
  return;
}

```

