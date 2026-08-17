# yaSSL__input_buffer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 17

---

## add_size

```asm
// === 08796d50 yaSSL::input_buffer::add_size  [0x08796d50-0x8796d9f] ===
 8796d50:	55                   	push   %ebp
 8796d51:	89 e5                	mov    %esp,%ebp
 8796d53:	83 ec 28             	sub    $0x28,%esp
 8796d56:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8796d59:	e8 9a c0 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8796d5e:	81 c3 3a 5e bd 00    	add    $0xbd5e3a,%ebx
 8796d64:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8796d67:	8b 75 08             	mov    0x8(%ebp),%esi
 8796d6a:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8796d6d:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8796d70:	89 34 24             	mov    %esi,(%esp)
 8796d73:	e8 c8 ff ff ff       	call   8796d40 <_ZNK5yaSSL12input_buffer12get_capacityEv>
 8796d78:	89 44 24 08          	mov    %eax,0x8(%esp)
 8796d7c:	8b 06                	mov    (%esi),%eax
 8796d7e:	89 34 24             	mov    %esi,(%esp)
 8796d81:	8d 44 07 ff          	lea    -0x1(%edi,%eax,1),%eax
 8796d85:	89 44 24 04          	mov    %eax,0x4(%esp)
 8796d89:	e8 52 ff ff ff       	call   8796ce0 <_ZN5yaSSL5Check5checkEjj>
 8796d8e:	01 3e                	add    %edi,(%esi)
 8796d90:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8796d93:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8796d96:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8796d99:	89 ec                	mov    %ebp,%esp
 8796d9b:	5d                   	pop    %ebp
 8796d9c:	c3                   	ret
 8796d9d:	90                   	nop
 8796d9e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::input_buffer::add_size @ 0x8796d50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::add_size(unsigned int) */

void __thiscall yaSSL::input_buffer::add_size(input_buffer *this,uint param_1)

{
  get_capacity(this);
  Check::check((uint)this,(param_1 - 1) + *(int *)this);
  *(uint *)this = *(int *)this + param_1;
  return;
}

```

---

## allocate

```asm
// === 08797220 yaSSL::input_buffer::allocate  [0x08797220-0x879726f] ===
 8797220:	55                   	push   %ebp
 8797221:	89 e5                	mov    %esp,%ebp
 8797223:	83 ec 28             	sub    $0x28,%esp
 8797226:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8797229:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879722c:	8b 75 08             	mov    0x8(%ebp),%esi
 879722f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8797232:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8797235:	e8 be bb f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879723a:	81 c3 5e 59 bd 00    	add    $0xbd595e,%ebx
 8797240:	89 3c 24             	mov    %edi,(%esp)
 8797243:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797248:	e8 03 b1 fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 879724d:	8d 3c 38             	lea    (%eax,%edi,1),%edi
 8797250:	89 46 08             	mov    %eax,0x8(%esi)
 8797253:	89 7e 0c             	mov    %edi,0xc(%esi)
 8797256:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8797259:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879725c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879725f:	89 ec                	mov    %ebp,%esp
 8797261:	5d                   	pop    %ebp
 8797262:	c3                   	ret
 8797263:	90                   	nop
 8797264:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879726a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::input_buffer::allocate @ 0x8797220

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::allocate(unsigned int) */

void __thiscall yaSSL::input_buffer::allocate(input_buffer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 8) = pvVar1;
  *(uint *)(this + 0xc) = (int)pvVar1 + param_1;
  return;
}

```

---

## assign

```asm
// === 087970b0 yaSSL::input_buffer::assign  [0x087970b0-0x879711f] ===
 87970b0:	55                   	push   %ebp
 87970b1:	89 e5                	mov    %esp,%ebp
 87970b3:	83 ec 28             	sub    $0x28,%esp
 87970b6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87970b9:	e8 3a bd f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87970be:	81 c3 da 5a bd 00    	add    $0xbd5ada,%ebx
 87970c4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87970c7:	8b 75 08             	mov    0x8(%ebp),%esi
 87970ca:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87970cd:	8b 7d 10             	mov    0x10(%ebp),%edi
 87970d0:	89 34 24             	mov    %esi,(%esp)
 87970d3:	e8 68 fc ff ff       	call   8796d40 <_ZNK5yaSSL12input_buffer12get_capacityEv>
 87970d8:	89 44 24 08          	mov    %eax,0x8(%esp)
 87970dc:	8b 46 04             	mov    0x4(%esi),%eax
 87970df:	89 34 24             	mov    %esi,(%esp)
 87970e2:	89 44 24 04          	mov    %eax,0x4(%esp)
 87970e6:	e8 f5 fb ff ff       	call   8796ce0 <_ZN5yaSSL5Check5checkEjj>
 87970eb:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87970ef:	89 34 24             	mov    %esi,(%esp)
 87970f2:	e8 59 fc ff ff       	call   8796d50 <_ZN5yaSSL12input_buffer8add_sizeEj>
 87970f7:	8b 46 08             	mov    0x8(%esi),%eax
 87970fa:	8b 55 0c             	mov    0xc(%ebp),%edx
 87970fd:	03 46 04             	add    0x4(%esi),%eax
 8797100:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8797104:	89 54 24 04          	mov    %edx,0x4(%esp)
 8797108:	89 04 24             	mov    %eax,(%esp)
 879710b:	e8 90 67 8e ff       	call   807d8a0 <memcpy@plt>
 8797110:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8797113:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8797116:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8797119:	89 ec                	mov    %ebp,%esp
 879711b:	5d                   	pop    %ebp
 879711c:	c3                   	ret
 879711d:	90                   	nop
 879711e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::input_buffer::assign @ 0x87970b0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::assign(unsigned char const*, unsigned int) */

void __thiscall yaSSL::input_buffer::assign(input_buffer *this,uchar *param_1,uint param_2)

{
  get_capacity(this);
  Check::check((uint)this,*(uint *)(this + 4));
  add_size(this,param_2);
  memcpy((void *)(*(int *)(this + 8) + *(int *)(this + 4)),param_1,param_2);
  return;
}

```

---

## eof

```asm
// === 08796e70 yaSSL::input_buffer::eof  [0x08796e70-0x8796e7f] ===
 8796e70:	55                   	push   %ebp
 8796e71:	89 e5                	mov    %esp,%ebp
 8796e73:	8b 45 08             	mov    0x8(%ebp),%eax
 8796e76:	5d                   	pop    %ebp
 8796e77:	8b 50 04             	mov    0x4(%eax),%edx
 8796e7a:	3b 10                	cmp    (%eax),%edx
 8796e7c:	0f 93 c0             	setae  %al
 8796e7f:	c3                   	ret

```

```c
// yaSSL::input_buffer::eof @ 0x8796e70

/* yaSSL::input_buffer::eof() */

bool __thiscall yaSSL::input_buffer::eof(input_buffer *this)

{
  return *(uint *)this <= *(uint *)(this + 4);
}

```

---

## get_buffer

```asm
// === 08796d30 yaSSL::input_buffer::get_buffer  [0x08796d30-0x8796d3f] ===
 8796d30:	55                   	push   %ebp
 8796d31:	89 e5                	mov    %esp,%ebp
 8796d33:	8b 45 08             	mov    0x8(%ebp),%eax
 8796d36:	5d                   	pop    %ebp
 8796d37:	8b 40 08             	mov    0x8(%eax),%eax
 8796d3a:	c3                   	ret
 8796d3b:	90                   	nop
 8796d3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::input_buffer::get_buffer @ 0x8796d30

/* yaSSL::input_buffer::get_buffer() const */

undefined4 __thiscall yaSSL::input_buffer::get_buffer(input_buffer *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## get_capacity

```asm
// === 08796d40 yaSSL::input_buffer::get_capacity  [0x08796d40-0x8796d4f] ===
 8796d40:	55                   	push   %ebp
 8796d41:	89 e5                	mov    %esp,%ebp
 8796d43:	8b 55 08             	mov    0x8(%ebp),%edx
 8796d46:	5d                   	pop    %ebp
 8796d47:	8b 42 0c             	mov    0xc(%edx),%eax
 8796d4a:	2b 42 08             	sub    0x8(%edx),%eax
 8796d4d:	c3                   	ret
 8796d4e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::input_buffer::get_capacity @ 0x8796d40

/* yaSSL::input_buffer::get_capacity() const */

int __thiscall yaSSL::input_buffer::get_capacity(input_buffer *this)

{
  return *(int *)(this + 0xc) - *(int *)(this + 8);
}

```

---

## get_current

```asm
// === 08796da0 yaSSL::input_buffer::get_current  [0x08796da0-0x8796daf] ===
 8796da0:	55                   	push   %ebp
 8796da1:	89 e5                	mov    %esp,%ebp
 8796da3:	8b 45 08             	mov    0x8(%ebp),%eax
 8796da6:	5d                   	pop    %ebp
 8796da7:	8b 40 04             	mov    0x4(%eax),%eax
 8796daa:	c3                   	ret
 8796dab:	90                   	nop
 8796dac:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::input_buffer::get_current @ 0x8796da0

/* yaSSL::input_buffer::get_current() const */

undefined4 __thiscall yaSSL::input_buffer::get_current(input_buffer *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## get_remaining

```asm
// === 08796dc0 yaSSL::input_buffer::get_remaining  [0x08796dc0-0x8796dcf] ===
 8796dc0:	55                   	push   %ebp
 8796dc1:	89 e5                	mov    %esp,%ebp
 8796dc3:	8b 55 08             	mov    0x8(%ebp),%edx
 8796dc6:	5d                   	pop    %ebp
 8796dc7:	8b 02                	mov    (%edx),%eax
 8796dc9:	2b 42 04             	sub    0x4(%edx),%eax
 8796dcc:	c3                   	ret
 8796dcd:	90                   	nop
 8796dce:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::input_buffer::get_remaining @ 0x8796dc0

/* yaSSL::input_buffer::get_remaining() const */

int __thiscall yaSSL::input_buffer::get_remaining(input_buffer *this)

{
  return *(int *)this - *(int *)(this + 4);
}

```

---

## get_size

```asm
// === 08796db0 yaSSL::input_buffer::get_size  [0x08796db0-0x8796dbf] ===
 8796db0:	55                   	push   %ebp
 8796db1:	89 e5                	mov    %esp,%ebp
 8796db3:	8b 45 08             	mov    0x8(%ebp),%eax
 8796db6:	5d                   	pop    %ebp
 8796db7:	8b 00                	mov    (%eax),%eax
 8796db9:	c3                   	ret
 8796dba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::input_buffer::get_size @ 0x8796db0

/* yaSSL::input_buffer::get_size() const */

undefined4 __thiscall yaSSL::input_buffer::get_size(input_buffer *this)

{
  return *(undefined4 *)this;
}

```

---

## input_buffer

```asm
// === 08796d00 yaSSL::input_buffer::input_buffer  [0x08796d00-0x8796d2f] ===
 8796d00:	55                   	push   %ebp
 8796d01:	89 e5                	mov    %esp,%ebp
 8796d03:	8b 45 08             	mov    0x8(%ebp),%eax
 8796d06:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8796d0c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8796d13:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8796d1a:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8796d21:	5d                   	pop    %ebp
 8796d22:	c3                   	ret
 8796d23:	90                   	nop
 8796d24:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8796d2a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::input_buffer::input_buffer @ 0x8796d00

/* yaSSL::input_buffer::input_buffer() */

void __thiscall yaSSL::input_buffer::input_buffer(input_buffer *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  return;
}

```

---

## input_buffer_08797270

```asm
// === 08797270 yaSSL::input_buffer::input_buffer  [0x08797270-0x87972df] ===
 8797270:	55                   	push   %ebp
 8797271:	89 e5                	mov    %esp,%ebp
 8797273:	83 ec 28             	sub    $0x28,%esp
 8797276:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8797279:	8b 75 08             	mov    0x8(%ebp),%esi
 879727c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879727f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8797282:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8797285:	e8 6e bb f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879728a:	81 c3 0e 59 bd 00    	add    $0xbd590e,%ebx
 8797290:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 8797296:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 879729d:	89 3c 24             	mov    %edi,(%esp)
 87972a0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87972a5:	e8 a6 b0 fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 87972aa:	89 46 08             	mov    %eax,0x8(%esi)
 87972ad:	8d 3c 38             	lea    (%eax,%edi,1),%edi
 87972b0:	8b 45 14             	mov    0x14(%ebp),%eax
 87972b3:	89 7e 0c             	mov    %edi,0xc(%esi)
 87972b6:	89 34 24             	mov    %esi,(%esp)
 87972b9:	89 44 24 08          	mov    %eax,0x8(%esp)
 87972bd:	8b 45 10             	mov    0x10(%ebp),%eax
 87972c0:	89 44 24 04          	mov    %eax,0x4(%esp)
 87972c4:	e8 e7 fd ff ff       	call   87970b0 <_ZN5yaSSL12input_buffer6assignEPKhj>
 87972c9:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87972cc:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87972cf:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87972d2:	89 ec                	mov    %ebp,%esp
 87972d4:	5d                   	pop    %ebp
 87972d5:	c3                   	ret
 87972d6:	8d 76 00             	lea    0x0(%esi),%esi
 87972d9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::input_buffer::input_buffer @ 0x8797270

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::input_buffer(unsigned int, unsigned char const*, unsigned int) */

void __thiscall
yaSSL::input_buffer::input_buffer(input_buffer *this,uint param_1,uchar *param_2,uint param_3)

{
  void *pvVar1;
  uint in_stack_ffffffd8;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  pvVar1 = operator_new__(param_1,in_stack_ffffffd8 & 0xffffff00);
  *(void **)(this + 8) = pvVar1;
  *(uint *)(this + 0xc) = (int)pvVar1 + param_1;
  assign(this,param_2,param_3);
  return;
}

```

---

## input_buffer_087972e0

```asm
// === 087972e0 yaSSL::input_buffer::input_buffer  [0x087972e0-0x879732f] ===
 87972e0:	55                   	push   %ebp
 87972e1:	89 e5                	mov    %esp,%ebp
 87972e3:	83 ec 28             	sub    $0x28,%esp
 87972e6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87972e9:	8b 75 08             	mov    0x8(%ebp),%esi
 87972ec:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87972ef:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87972f2:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87972f5:	e8 fe ba f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87972fa:	81 c3 9e 58 bd 00    	add    $0xbd589e,%ebx
 8797300:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 8797306:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 879730d:	89 3c 24             	mov    %edi,(%esp)
 8797310:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797315:	e8 36 b0 fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 879731a:	8d 3c 38             	lea    (%eax,%edi,1),%edi
 879731d:	89 46 08             	mov    %eax,0x8(%esi)
 8797320:	89 7e 0c             	mov    %edi,0xc(%esi)
 8797323:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8797326:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8797329:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879732c:	89 ec                	mov    %ebp,%esp
 879732e:	5d                   	pop    %ebp
 879732f:	c3                   	ret

```

```c
// yaSSL::input_buffer::input_buffer @ 0x87972e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::input_buffer(unsigned int) */

void __thiscall yaSSL::input_buffer::input_buffer(input_buffer *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 8) = pvVar1;
  *(uint *)(this + 0xc) = (int)pvVar1 + param_1;
  return;
}

```

---

## operator[]

```asm
// === 08796e20 yaSSL::input_buffer::operator[]  [0x08796e20-0x8796e6f] ===
 8796e20:	55                   	push   %ebp
 8796e21:	89 e5                	mov    %esp,%ebp
 8796e23:	83 ec 18             	sub    $0x18,%esp
 8796e26:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8796e29:	8b 75 08             	mov    0x8(%ebp),%esi
 8796e2c:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8796e2f:	e8 c4 bf f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8796e34:	81 c3 64 5d bd 00    	add    $0xbd5d64,%ebx
 8796e3a:	8b 06                	mov    (%esi),%eax
 8796e3c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8796e40:	8b 46 04             	mov    0x4(%esi),%eax
 8796e43:	89 34 24             	mov    %esi,(%esp)
 8796e46:	89 44 24 04          	mov    %eax,0x4(%esp)
 8796e4a:	e8 91 fe ff ff       	call   8796ce0 <_ZN5yaSSL5Check5checkEjj>
 8796e4f:	8b 56 04             	mov    0x4(%esi),%edx
 8796e52:	8b 46 08             	mov    0x8(%esi),%eax
 8796e55:	01 d0                	add    %edx,%eax
 8796e57:	83 c2 01             	add    $0x1,%edx
 8796e5a:	89 56 04             	mov    %edx,0x4(%esi)
 8796e5d:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8796e60:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8796e63:	89 ec                	mov    %ebp,%esp
 8796e65:	5d                   	pop    %ebp
 8796e66:	c3                   	ret
 8796e67:	90                   	nop
 8796e68:	90                   	nop
 8796e69:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::input_buffer::operator[] @ 0x8796e20

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::operator[](unsigned int) */

int yaSSL::input_buffer::operator[](uint param_1)

{
  int iVar1;
  
  Check::check(param_1,*(uint *)(param_1 + 4));
  iVar1 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 4) = iVar1 + 1;
  return *(int *)(param_1 + 8) + iVar1;
}

```

---

## peek

```asm
// === 08796e80 yaSSL::input_buffer::peek  [0x08796e80-0x8796e9f] ===
 8796e80:	55                   	push   %ebp
 8796e81:	89 e5                	mov    %esp,%ebp
 8796e83:	8b 45 08             	mov    0x8(%ebp),%eax
 8796e86:	5d                   	pop    %ebp
 8796e87:	8b 50 08             	mov    0x8(%eax),%edx
 8796e8a:	8b 40 04             	mov    0x4(%eax),%eax
 8796e8d:	0f b6 04 02          	movzbl (%edx,%eax,1),%eax
 8796e91:	c3                   	ret
 8796e92:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8796e99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::input_buffer::peek @ 0x8796e80

/* yaSSL::input_buffer::peek() const */

undefined1 __thiscall yaSSL::input_buffer::peek(input_buffer *this)

{
  return *(undefined1 *)(*(int *)(this + 8) + *(int *)(this + 4));
}

```

---

## read

```asm
// === 08797040 yaSSL::input_buffer::read  [0x08797040-0x87970af] ===
 8797040:	55                   	push   %ebp
 8797041:	89 e5                	mov    %esp,%ebp
 8797043:	83 ec 28             	sub    $0x28,%esp
 8797046:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8797049:	8b 75 08             	mov    0x8(%ebp),%esi
 879704c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879704f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8797052:	8b 7d 10             	mov    0x10(%ebp),%edi
 8797055:	e8 9e bd f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879705a:	81 c3 3e 5b bd 00    	add    $0xbd5b3e,%ebx
 8797060:	8b 06                	mov    (%esi),%eax
 8797062:	89 44 24 08          	mov    %eax,0x8(%esp)
 8797066:	8b 46 04             	mov    0x4(%esi),%eax
 8797069:	89 34 24             	mov    %esi,(%esp)
 879706c:	8d 44 07 ff          	lea    -0x1(%edi,%eax,1),%eax
 8797070:	89 44 24 04          	mov    %eax,0x4(%esp)
 8797074:	e8 67 fc ff ff       	call   8796ce0 <_ZN5yaSSL5Check5checkEjj>
 8797079:	8b 46 08             	mov    0x8(%esi),%eax
 879707c:	03 46 04             	add    0x4(%esi),%eax
 879707f:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8797083:	89 44 24 04          	mov    %eax,0x4(%esp)
 8797087:	8b 45 0c             	mov    0xc(%ebp),%eax
 879708a:	89 04 24             	mov    %eax,(%esp)
 879708d:	e8 0e 68 8e ff       	call   807d8a0 <memcpy@plt>
 8797092:	01 7e 04             	add    %edi,0x4(%esi)
 8797095:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8797098:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879709b:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879709e:	89 ec                	mov    %ebp,%esp
 87970a0:	5d                   	pop    %ebp
 87970a1:	c3                   	ret
 87970a2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 87970a9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::input_buffer::read @ 0x8797040

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::read(unsigned char*, unsigned int) */

void __thiscall yaSSL::input_buffer::read(input_buffer *this,uchar *param_1,uint param_2)

{
  Check::check((uint)this,(param_2 - 1) + *(int *)(this + 4));
  memcpy(param_1,(void *)(*(int *)(this + 8) + *(int *)(this + 4)),param_2);
  *(uint *)(this + 4) = *(int *)(this + 4) + param_2;
  return;
}

```

---

## set_current

```asm
// === 08796dd0 yaSSL::input_buffer::set_current  [0x08796dd0-0x8796e1f] ===
 8796dd0:	55                   	push   %ebp
 8796dd1:	89 e5                	mov    %esp,%ebp
 8796dd3:	83 ec 28             	sub    $0x28,%esp
 8796dd6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8796dd9:	8b 75 0c             	mov    0xc(%ebp),%esi
 8796ddc:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8796ddf:	e8 14 c0 f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8796de4:	81 c3 b4 5d bd 00    	add    $0xbd5db4,%ebx
 8796dea:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8796ded:	8b 7d 08             	mov    0x8(%ebp),%edi
 8796df0:	85 f6                	test   %esi,%esi
 8796df2:	74 15                	je     8796e09 <_ZN5yaSSL12input_buffer11set_currentEj+0x39>
 8796df4:	8b 07                	mov    (%edi),%eax
 8796df6:	89 3c 24             	mov    %edi,(%esp)
 8796df9:	89 44 24 08          	mov    %eax,0x8(%esp)
 8796dfd:	8d 46 ff             	lea    -0x1(%esi),%eax
 8796e00:	89 44 24 04          	mov    %eax,0x4(%esp)
 8796e04:	e8 d7 fe ff ff       	call   8796ce0 <_ZN5yaSSL5Check5checkEjj>
 8796e09:	89 77 04             	mov    %esi,0x4(%edi)
 8796e0c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8796e0f:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8796e12:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8796e15:	89 ec                	mov    %ebp,%esp
 8796e17:	5d                   	pop    %ebp
 8796e18:	c3                   	ret
 8796e19:	90                   	nop
 8796e1a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::input_buffer::set_current @ 0x8796dd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::set_current(unsigned int) */

void __thiscall yaSSL::input_buffer::set_current(input_buffer *this,uint param_1)

{
  if (param_1 != 0) {
    Check::check((uint)this,param_1 - 1);
  }
  *(uint *)(this + 4) = param_1;
  return;
}

```

---

## ~input_buffer

```asm
// === 08797360 yaSSL::input_buffer::~input_buffer  [0x08797360-0x879738f] ===
 8797360:	55                   	push   %ebp
 8797361:	89 e5                	mov    %esp,%ebp
 8797363:	53                   	push   %ebx
 8797364:	83 ec 14             	sub    $0x14,%esp
 8797367:	8b 45 08             	mov    0x8(%ebp),%eax
 879736a:	e8 89 ba f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879736f:	81 c3 29 58 bd 00    	add    $0xbd5829,%ebx
 8797375:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879737a:	8b 40 08             	mov    0x8(%eax),%eax
 879737d:	89 04 24             	mov    %eax,(%esp)
 8797380:	e8 6b 95 fb ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8797385:	83 c4 14             	add    $0x14,%esp
 8797388:	5b                   	pop    %ebx
 8797389:	5d                   	pop    %ebp
 879738a:	c3                   	ret
 879738b:	90                   	nop
 879738c:	90                   	nop
 879738d:	90                   	nop
 879738e:	90                   	nop
 879738f:	90                   	nop

```

```c
// yaSSL::input_buffer::~input_buffer @ 0x8797360

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::input_buffer::~input_buffer() */

void __thiscall yaSSL::input_buffer::~input_buffer(input_buffer *this)

{
  operator_delete__(*(undefined4 *)(this + 8),0);
  return;
}

```

