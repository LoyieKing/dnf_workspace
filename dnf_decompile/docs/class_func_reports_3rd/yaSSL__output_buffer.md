# yaSSL__output_buffer

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## allocate

```asm
// === 08797120 yaSSL::output_buffer::allocate  [0x08797120-0x879716f] ===
 8797120:	55                   	push   %ebp
 8797121:	89 e5                	mov    %esp,%ebp
 8797123:	83 ec 28             	sub    $0x28,%esp
 8797126:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8797129:	89 75 f8             	mov    %esi,-0x8(%ebp)
 879712c:	8b 75 08             	mov    0x8(%ebp),%esi
 879712f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8797132:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8797135:	e8 be bc f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879713a:	81 c3 5e 5a bd 00    	add    $0xbd5a5e,%ebx
 8797140:	89 3c 24             	mov    %edi,(%esp)
 8797143:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8797148:	e8 03 b2 fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 879714d:	8d 3c 38             	lea    (%eax,%edi,1),%edi
 8797150:	89 46 04             	mov    %eax,0x4(%esi)
 8797153:	89 7e 08             	mov    %edi,0x8(%esi)
 8797156:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8797159:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879715c:	8b 7d fc             	mov    -0x4(%ebp),%edi
 879715f:	89 ec                	mov    %ebp,%esp
 8797161:	5d                   	pop    %ebp
 8797162:	c3                   	ret
 8797163:	90                   	nop
 8797164:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 879716a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::output_buffer::allocate @ 0x8797120

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::allocate(unsigned int) */

void __thiscall yaSSL::output_buffer::allocate(output_buffer *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 4) = pvVar1;
  *(uint *)(this + 8) = (int)pvVar1 + param_1;
  return;
}

```

---

## eof

```asm
// === 08796f90 yaSSL::output_buffer::eof  [0x08796f90-0x8796fcf] ===
 8796f90:	55                   	push   %ebp
 8796f91:	89 e5                	mov    %esp,%ebp
 8796f93:	83 ec 18             	sub    $0x18,%esp
 8796f96:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8796f99:	8b 45 08             	mov    0x8(%ebp),%eax
 8796f9c:	e8 57 be f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8796fa1:	81 c3 f7 5b bd 00    	add    $0xbd5bf7,%ebx
 8796fa7:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8796faa:	8b 30                	mov    (%eax),%esi
 8796fac:	89 04 24             	mov    %eax,(%esp)
 8796faf:	e8 1c ff ff ff       	call   8796ed0 <_ZNK5yaSSL13output_buffer12get_capacityEv>
 8796fb4:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8796fb7:	39 c6                	cmp    %eax,%esi
 8796fb9:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8796fbc:	0f 93 c0             	setae  %al
 8796fbf:	89 ec                	mov    %ebp,%esp
 8796fc1:	5d                   	pop    %ebp
 8796fc2:	c3                   	ret
 8796fc3:	90                   	nop
 8796fc4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8796fca:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::output_buffer::eof @ 0x8796f90

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::eof() */

bool __thiscall yaSSL::output_buffer::eof(output_buffer *this)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)this;
  uVar2 = get_capacity(this);
  return uVar2 <= uVar1;
}

```

---

## get_buffer

```asm
// === 08796f30 yaSSL::output_buffer::get_buffer  [0x08796f30-0x8796f3f] ===
 8796f30:	55                   	push   %ebp
 8796f31:	89 e5                	mov    %esp,%ebp
 8796f33:	8b 45 08             	mov    0x8(%ebp),%eax
 8796f36:	5d                   	pop    %ebp
 8796f37:	8b 40 04             	mov    0x4(%eax),%eax
 8796f3a:	c3                   	ret
 8796f3b:	90                   	nop
 8796f3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::output_buffer::get_buffer @ 0x8796f30

/* yaSSL::output_buffer::get_buffer() const */

undefined4 __thiscall yaSSL::output_buffer::get_buffer(output_buffer *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## get_capacity

```asm
// === 08796ed0 yaSSL::output_buffer::get_capacity  [0x08796ed0-0x8796edf] ===
 8796ed0:	55                   	push   %ebp
 8796ed1:	89 e5                	mov    %esp,%ebp
 8796ed3:	8b 55 08             	mov    0x8(%ebp),%edx
 8796ed6:	5d                   	pop    %ebp
 8796ed7:	8b 42 08             	mov    0x8(%edx),%eax
 8796eda:	2b 42 04             	sub    0x4(%edx),%eax
 8796edd:	c3                   	ret
 8796ede:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::output_buffer::get_capacity @ 0x8796ed0

/* yaSSL::output_buffer::get_capacity() const */

int __thiscall yaSSL::output_buffer::get_capacity(output_buffer *this)

{
  return *(int *)(this + 8) - *(int *)(this + 4);
}

```

---

## get_size

```asm
// === 08796ec0 yaSSL::output_buffer::get_size  [0x08796ec0-0x8796ecf] ===
 8796ec0:	55                   	push   %ebp
 8796ec1:	89 e5                	mov    %esp,%ebp
 8796ec3:	8b 45 08             	mov    0x8(%ebp),%eax
 8796ec6:	5d                   	pop    %ebp
 8796ec7:	8b 00                	mov    (%eax),%eax
 8796ec9:	c3                   	ret
 8796eca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::output_buffer::get_size @ 0x8796ec0

/* yaSSL::output_buffer::get_size() const */

undefined4 __thiscall yaSSL::output_buffer::get_size(output_buffer *this)

{
  return *(undefined4 *)this;
}

```

---

## operator[]

```asm
// === 08796f40 yaSSL::output_buffer::operator[]  [0x08796f40-0x8796f8f] ===
 8796f40:	55                   	push   %ebp
 8796f41:	89 e5                	mov    %esp,%ebp
 8796f43:	83 ec 18             	sub    $0x18,%esp
 8796f46:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8796f49:	e8 aa be f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8796f4e:	81 c3 4a 5c bd 00    	add    $0xbd5c4a,%ebx
 8796f54:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8796f57:	8b 75 08             	mov    0x8(%ebp),%esi
 8796f5a:	89 34 24             	mov    %esi,(%esp)
 8796f5d:	e8 6e ff ff ff       	call   8796ed0 <_ZNK5yaSSL13output_buffer12get_capacityEv>
 8796f62:	89 44 24 08          	mov    %eax,0x8(%esp)
 8796f66:	8b 06                	mov    (%esi),%eax
 8796f68:	89 34 24             	mov    %esi,(%esp)
 8796f6b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8796f6f:	e8 6c fd ff ff       	call   8796ce0 <_ZN5yaSSL5Check5checkEjj>
 8796f74:	8b 16                	mov    (%esi),%edx
 8796f76:	8b 46 04             	mov    0x4(%esi),%eax
 8796f79:	01 d0                	add    %edx,%eax
 8796f7b:	83 c2 01             	add    $0x1,%edx
 8796f7e:	89 16                	mov    %edx,(%esi)
 8796f80:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8796f83:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8796f86:	89 ec                	mov    %ebp,%esp
 8796f88:	5d                   	pop    %ebp
 8796f89:	c3                   	ret
 8796f8a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::output_buffer::operator[] @ 0x8796f40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::operator[](unsigned int) */

int yaSSL::output_buffer::operator[](uint param_1)

{
  int iVar1;
  
  get_capacity((output_buffer *)param_1);
  Check::check(param_1,*(uint *)param_1);
  iVar1 = *(int *)param_1;
  *(int *)param_1 = iVar1 + 1;
  return *(int *)(param_1 + 4) + iVar1;
}

```

---

## output_buffer

```asm
// === 08796ea0 yaSSL::output_buffer::output_buffer  [0x08796ea0-0x8796ebf] ===
 8796ea0:	55                   	push   %ebp
 8796ea1:	89 e5                	mov    %esp,%ebp
 8796ea3:	8b 45 08             	mov    0x8(%ebp),%eax
 8796ea6:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8796eac:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8796eb3:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8796eba:	5d                   	pop    %ebp
 8796ebb:	c3                   	ret
 8796ebc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::output_buffer::output_buffer @ 0x8796ea0

/* yaSSL::output_buffer::output_buffer() */

void __thiscall yaSSL::output_buffer::output_buffer(output_buffer *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}

```

---

## output_buffer_08797170

```asm
// === 08797170 yaSSL::output_buffer::output_buffer  [0x08797170-0x87971cf] ===
 8797170:	55                   	push   %ebp
 8797171:	89 e5                	mov    %esp,%ebp
 8797173:	83 ec 28             	sub    $0x28,%esp
 8797176:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8797179:	8b 75 08             	mov    0x8(%ebp),%esi
 879717c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 879717f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8797182:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8797185:	e8 6e bc f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879718a:	81 c3 0e 5a bd 00    	add    $0xbd5a0e,%ebx
 8797190:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 8797196:	89 3c 24             	mov    %edi,(%esp)
 8797199:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879719e:	e8 ad b1 fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 87971a3:	89 46 04             	mov    %eax,0x4(%esi)
 87971a6:	8d 3c 38             	lea    (%eax,%edi,1),%edi
 87971a9:	8b 45 14             	mov    0x14(%ebp),%eax
 87971ac:	89 7e 08             	mov    %edi,0x8(%esi)
 87971af:	89 34 24             	mov    %esi,(%esp)
 87971b2:	89 44 24 08          	mov    %eax,0x8(%esp)
 87971b6:	8b 45 10             	mov    0x10(%ebp),%eax
 87971b9:	89 44 24 04          	mov    %eax,0x4(%esp)
 87971bd:	e8 0e fe ff ff       	call   8796fd0 <_ZN5yaSSL13output_buffer5writeEPKhj>
 87971c2:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87971c5:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87971c8:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87971cb:	89 ec                	mov    %ebp,%esp
 87971cd:	5d                   	pop    %ebp
 87971ce:	c3                   	ret
 87971cf:	90                   	nop

```

```c
// yaSSL::output_buffer::output_buffer @ 0x8797170

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::output_buffer(unsigned int, unsigned char const*, unsigned int) */

void __thiscall
yaSSL::output_buffer::output_buffer(output_buffer *this,uint param_1,uchar *param_2,uint param_3)

{
  void *pvVar1;
  uint in_stack_ffffffd8;
  
  *(undefined4 *)this = 0;
  pvVar1 = operator_new__(param_1,in_stack_ffffffd8 & 0xffffff00);
  *(void **)(this + 4) = pvVar1;
  *(uint *)(this + 8) = (int)pvVar1 + param_1;
  write(this,param_2,param_3);
  return;
}

```

---

## output_buffer_087971d0

```asm
// === 087971d0 yaSSL::output_buffer::output_buffer  [0x087971d0-0x879721f] ===
 87971d0:	55                   	push   %ebp
 87971d1:	89 e5                	mov    %esp,%ebp
 87971d3:	83 ec 28             	sub    $0x28,%esp
 87971d6:	89 75 f8             	mov    %esi,-0x8(%ebp)
 87971d9:	8b 75 08             	mov    0x8(%ebp),%esi
 87971dc:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 87971df:	89 7d fc             	mov    %edi,-0x4(%ebp)
 87971e2:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87971e5:	e8 0e bc f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87971ea:	81 c3 ae 59 bd 00    	add    $0xbd59ae,%ebx
 87971f0:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 87971f6:	89 3c 24             	mov    %edi,(%esp)
 87971f9:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87971fe:	e8 4d b1 fb ff       	call   8752350 <_ZnajN5yaSSL5new_tE>
 8797203:	8d 3c 38             	lea    (%eax,%edi,1),%edi
 8797206:	89 46 04             	mov    %eax,0x4(%esi)
 8797209:	89 7e 08             	mov    %edi,0x8(%esi)
 879720c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879720f:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8797212:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8797215:	89 ec                	mov    %ebp,%esp
 8797217:	5d                   	pop    %ebp
 8797218:	c3                   	ret
 8797219:	90                   	nop
 879721a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::output_buffer::output_buffer @ 0x87971d0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::output_buffer(unsigned int) */

void __thiscall yaSSL::output_buffer::output_buffer(output_buffer *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 4) = pvVar1;
  *(uint *)(this + 8) = (int)pvVar1 + param_1;
  return;
}

```

---

## set_current

```asm
// === 08796ee0 yaSSL::output_buffer::set_current  [0x08796ee0-0x8796f2f] ===
 8796ee0:	55                   	push   %ebp
 8796ee1:	89 e5                	mov    %esp,%ebp
 8796ee3:	83 ec 28             	sub    $0x28,%esp
 8796ee6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8796ee9:	e8 0a bf f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8796eee:	81 c3 aa 5c bd 00    	add    $0xbd5caa,%ebx
 8796ef4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8796ef7:	8b 75 08             	mov    0x8(%ebp),%esi
 8796efa:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8796efd:	8b 7d 0c             	mov    0xc(%ebp),%edi
 8796f00:	89 34 24             	mov    %esi,(%esp)
 8796f03:	e8 c8 ff ff ff       	call   8796ed0 <_ZNK5yaSSL13output_buffer12get_capacityEv>
 8796f08:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8796f0c:	89 34 24             	mov    %esi,(%esp)
 8796f0f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8796f13:	e8 c8 fd ff ff       	call   8796ce0 <_ZN5yaSSL5Check5checkEjj>
 8796f18:	89 3e                	mov    %edi,(%esi)
 8796f1a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8796f1d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8796f20:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8796f23:	89 ec                	mov    %ebp,%esp
 8796f25:	5d                   	pop    %ebp
 8796f26:	c3                   	ret
 8796f27:	90                   	nop
 8796f28:	90                   	nop
 8796f29:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::output_buffer::set_current @ 0x8796ee0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::set_current(unsigned int) */

void __thiscall yaSSL::output_buffer::set_current(output_buffer *this,uint param_1)

{
  get_capacity(this);
  Check::check((uint)this,param_1);
  *(uint *)this = param_1;
  return;
}

```

---

## write

```asm
// === 08796fd0 yaSSL::output_buffer::write  [0x08796fd0-0x879703f] ===
 8796fd0:	55                   	push   %ebp
 8796fd1:	89 e5                	mov    %esp,%ebp
 8796fd3:	83 ec 28             	sub    $0x28,%esp
 8796fd6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8796fd9:	e8 1a be f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8796fde:	81 c3 ba 5b bd 00    	add    $0xbd5bba,%ebx
 8796fe4:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8796fe7:	8b 75 08             	mov    0x8(%ebp),%esi
 8796fea:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8796fed:	8b 7d 10             	mov    0x10(%ebp),%edi
 8796ff0:	89 34 24             	mov    %esi,(%esp)
 8796ff3:	e8 d8 fe ff ff       	call   8796ed0 <_ZNK5yaSSL13output_buffer12get_capacityEv>
 8796ff8:	89 44 24 08          	mov    %eax,0x8(%esp)
 8796ffc:	8b 06                	mov    (%esi),%eax
 8796ffe:	89 34 24             	mov    %esi,(%esp)
 8797001:	8d 44 07 ff          	lea    -0x1(%edi,%eax,1),%eax
 8797005:	89 44 24 04          	mov    %eax,0x4(%esp)
 8797009:	e8 d2 fc ff ff       	call   8796ce0 <_ZN5yaSSL5Check5checkEjj>
 879700e:	8b 46 04             	mov    0x4(%esi),%eax
 8797011:	8b 55 0c             	mov    0xc(%ebp),%edx
 8797014:	03 06                	add    (%esi),%eax
 8797016:	89 7c 24 08          	mov    %edi,0x8(%esp)
 879701a:	89 54 24 04          	mov    %edx,0x4(%esp)
 879701e:	89 04 24             	mov    %eax,(%esp)
 8797021:	e8 7a 68 8e ff       	call   807d8a0 <memcpy@plt>
 8797026:	01 3e                	add    %edi,(%esi)
 8797028:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 879702b:	8b 75 f8             	mov    -0x8(%ebp),%esi
 879702e:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8797031:	89 ec                	mov    %ebp,%esp
 8797033:	5d                   	pop    %ebp
 8797034:	c3                   	ret
 8797035:	90                   	nop
 8797036:	8d 76 00             	lea    0x0(%esi),%esi
 8797039:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::output_buffer::write @ 0x8796fd0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::write(unsigned char const*, unsigned int) */

void __thiscall yaSSL::output_buffer::write(output_buffer *this,uchar *param_1,uint param_2)

{
  get_capacity(this);
  Check::check((uint)this,(param_2 - 1) + *(int *)this);
  memcpy((void *)(*(int *)(this + 4) + *(int *)this),param_1,param_2);
  *(uint *)this = *(int *)this + param_2;
  return;
}

```

---

## ~output_buffer

```asm
// === 08797330 yaSSL::output_buffer::~output_buffer  [0x08797330-0x879735f] ===
 8797330:	55                   	push   %ebp
 8797331:	89 e5                	mov    %esp,%ebp
 8797333:	53                   	push   %ebx
 8797334:	83 ec 14             	sub    $0x14,%esp
 8797337:	8b 45 08             	mov    0x8(%ebp),%eax
 879733a:	e8 b9 ba f8 ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 879733f:	81 c3 59 58 bd 00    	add    $0xbd5859,%ebx
 8797345:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 879734a:	8b 40 04             	mov    0x4(%eax),%eax
 879734d:	89 04 24             	mov    %eax,(%esp)
 8797350:	e8 9b 95 fb ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8797355:	83 c4 14             	add    $0x14,%esp
 8797358:	5b                   	pop    %ebx
 8797359:	5d                   	pop    %ebp
 879735a:	c3                   	ret
 879735b:	90                   	nop
 879735c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::output_buffer::~output_buffer @ 0x8797330

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::output_buffer::~output_buffer() */

void __thiscall yaSSL::output_buffer::~output_buffer(output_buffer *this)

{
  operator_delete__(*(undefined4 *)(this + 4),0);
  return;
}

```

