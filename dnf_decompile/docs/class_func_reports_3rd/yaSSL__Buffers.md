# yaSSL__Buffers

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## Buffers

```asm
// === 0874e8b0 yaSSL::Buffers::Buffers  [0x0874e8b0-0x874e8ef] ===
 874e8b0:	55                   	push   %ebp
 874e8b1:	89 e5                	mov    %esp,%ebp
 874e8b3:	8b 45 08             	mov    0x8(%ebp),%eax
 874e8b6:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 874e8bc:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 874e8c3:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 874e8ca:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 874e8d1:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 874e8d8:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 874e8df:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 874e8e6:	5d                   	pop    %ebp
 874e8e7:	c3                   	ret
 874e8e8:	90                   	nop
 874e8e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Buffers::Buffers @ 0x874e8b0

/* yaSSL::Buffers::Buffers() */

void __thiscall yaSSL::Buffers::Buffers(Buffers *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  return;
}

```

---

## SetRawInput

```asm
// === 0874e8f0 yaSSL::Buffers::SetRawInput  [0x0874e8f0-0x874e8ff] ===
 874e8f0:	55                   	push   %ebp
 874e8f1:	89 e5                	mov    %esp,%ebp
 874e8f3:	8b 55 0c             	mov    0xc(%ebp),%edx
 874e8f6:	8b 45 08             	mov    0x8(%ebp),%eax
 874e8f9:	89 50 18             	mov    %edx,0x18(%eax)
 874e8fc:	5d                   	pop    %ebp
 874e8fd:	c3                   	ret
 874e8fe:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Buffers::SetRawInput @ 0x874e8f0

/* yaSSL::Buffers::SetRawInput(yaSSL::input_buffer*) */

void __thiscall yaSSL::Buffers::SetRawInput(Buffers *this,input_buffer *param_1)

{
  *(input_buffer **)(this + 0x18) = param_1;
  return;
}

```

---

## TakeRawInput

```asm
// === 0874e900 yaSSL::Buffers::TakeRawInput  [0x0874e900-0x874e91f] ===
 874e900:	55                   	push   %ebp
 874e901:	89 e5                	mov    %esp,%ebp
 874e903:	8b 55 08             	mov    0x8(%ebp),%edx
 874e906:	8b 42 18             	mov    0x18(%edx),%eax
 874e909:	c7 42 18 00 00 00 00 	movl   $0x0,0x18(%edx)
 874e910:	5d                   	pop    %ebp
 874e911:	c3                   	ret
 874e912:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874e919:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Buffers::TakeRawInput @ 0x874e900

/* yaSSL::Buffers::TakeRawInput() */

undefined4 __thiscall yaSSL::Buffers::TakeRawInput(Buffers *this)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 0x18) = 0;
  return uVar1;
}

```

---

## getData

```asm
// === 0874e920 yaSSL::Buffers::getData  [0x0874e920-0x874e92f] ===
 874e920:	55                   	push   %ebp
 874e921:	89 e5                	mov    %esp,%ebp
 874e923:	8b 45 08             	mov    0x8(%ebp),%eax
 874e926:	5d                   	pop    %ebp
 874e927:	c3                   	ret
 874e928:	90                   	nop
 874e929:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Buffers::getData @ 0x874e920

/* yaSSL::Buffers::getData() const */

Buffers * __thiscall yaSSL::Buffers::getData(Buffers *this)

{
  return this;
}

```

---

## getHandShake

```asm
// === 0874e930 yaSSL::Buffers::getHandShake  [0x0874e930-0x874e93f] ===
 874e930:	55                   	push   %ebp
 874e931:	89 e5                	mov    %esp,%ebp
 874e933:	8b 45 08             	mov    0x8(%ebp),%eax
 874e936:	5d                   	pop    %ebp
 874e937:	83 c0 0c             	add    $0xc,%eax
 874e93a:	c3                   	ret
 874e93b:	90                   	nop
 874e93c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Buffers::getHandShake @ 0x874e930

/* yaSSL::Buffers::getHandShake() const */

Buffers * __thiscall yaSSL::Buffers::getHandShake(Buffers *this)

{
  return this + 0xc;
}

```

---

## useData

```asm
// === 0874e940 yaSSL::Buffers::useData  [0x0874e940-0x874e94f] ===
 874e940:	55                   	push   %ebp
 874e941:	89 e5                	mov    %esp,%ebp
 874e943:	8b 45 08             	mov    0x8(%ebp),%eax
 874e946:	5d                   	pop    %ebp
 874e947:	c3                   	ret
 874e948:	90                   	nop
 874e949:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Buffers::useData @ 0x874e940

/* yaSSL::Buffers::useData() */

Buffers * __thiscall yaSSL::Buffers::useData(Buffers *this)

{
  return this;
}

```

---

## useHandShake

```asm
// === 0874e950 yaSSL::Buffers::useHandShake  [0x0874e950-0x874e95f] ===
 874e950:	55                   	push   %ebp
 874e951:	89 e5                	mov    %esp,%ebp
 874e953:	8b 45 08             	mov    0x8(%ebp),%eax
 874e956:	5d                   	pop    %ebp
 874e957:	83 c0 0c             	add    $0xc,%eax
 874e95a:	c3                   	ret
 874e95b:	90                   	nop
 874e95c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Buffers::useHandShake @ 0x874e950

/* yaSSL::Buffers::useHandShake() */

Buffers * __thiscall yaSSL::Buffers::useHandShake(Buffers *this)

{
  return this + 0xc;
}

```

---

## ~Buffers

```asm
// === 08752ce0 yaSSL::Buffers::~Buffers  [0x08752ce0-0x8752ddf] ===
 8752ce0:	55                   	push   %ebp
 8752ce1:	89 e5                	mov    %esp,%ebp
 8752ce3:	57                   	push   %edi
 8752ce4:	56                   	push   %esi
 8752ce5:	53                   	push   %ebx
 8752ce6:	83 ec 1c             	sub    $0x1c,%esp
 8752ce9:	8b 45 08             	mov    0x8(%ebp),%eax
 8752cec:	e8 07 01 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8752cf1:	81 c3 a7 9e c1 00    	add    $0xc19ea7,%ebx
 8752cf7:	8b 70 0c             	mov    0xc(%eax),%esi
 8752cfa:	85 f6                	test   %esi,%esi
 8752cfc:	74 2c                	je     8752d2a <_ZN5yaSSL7BuffersD1Ev+0x4a>
 8752cfe:	66 90                	xchg   %ax,%ax
 8752d00:	8b 7e 08             	mov    0x8(%esi),%edi
 8752d03:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 8752d0a:	85 ff                	test   %edi,%edi
 8752d0c:	74 08                	je     8752d16 <_ZN5yaSSL7BuffersD1Ev+0x36>
 8752d0e:	89 3c 24             	mov    %edi,(%esp)
 8752d11:	e8 1a 46 04 00       	call   8797330 <_ZN5yaSSL13output_bufferD1Ev>
 8752d16:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752d1b:	89 3c 24             	mov    %edi,(%esp)
 8752d1e:	e8 fd da ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8752d23:	8b 76 04             	mov    0x4(%esi),%esi
 8752d26:	85 f6                	test   %esi,%esi
 8752d28:	75 d6                	jne    8752d00 <_ZN5yaSSL7BuffersD1Ev+0x20>
 8752d2a:	8b 55 08             	mov    0x8(%ebp),%edx
 8752d2d:	8b 32                	mov    (%edx),%esi
 8752d2f:	85 f6                	test   %esi,%esi
 8752d31:	74 2f                	je     8752d62 <_ZN5yaSSL7BuffersD1Ev+0x82>
 8752d33:	90                   	nop
 8752d34:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8752d38:	8b 7e 08             	mov    0x8(%esi),%edi
 8752d3b:	c7 46 08 00 00 00 00 	movl   $0x0,0x8(%esi)
 8752d42:	85 ff                	test   %edi,%edi
 8752d44:	74 08                	je     8752d4e <_ZN5yaSSL7BuffersD1Ev+0x6e>
 8752d46:	89 3c 24             	mov    %edi,(%esp)
 8752d49:	e8 12 46 04 00       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 8752d4e:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752d53:	89 3c 24             	mov    %edi,(%esp)
 8752d56:	e8 c5 da ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8752d5b:	8b 76 04             	mov    0x4(%esi),%esi
 8752d5e:	85 f6                	test   %esi,%esi
 8752d60:	75 d6                	jne    8752d38 <_ZN5yaSSL7BuffersD1Ev+0x58>
 8752d62:	8b 45 08             	mov    0x8(%ebp),%eax
 8752d65:	8b 70 18             	mov    0x18(%eax),%esi
 8752d68:	85 f6                	test   %esi,%esi
 8752d6a:	74 08                	je     8752d74 <_ZN5yaSSL7BuffersD1Ev+0x94>
 8752d6c:	89 34 24             	mov    %esi,(%esp)
 8752d6f:	e8 ec 45 04 00       	call   8797360 <_ZN5yaSSL12input_bufferD1Ev>
 8752d74:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752d79:	89 34 24             	mov    %esi,(%esp)
 8752d7c:	e8 9f da ff ff       	call   8750820 <_ZdlPvN5yaSSL5new_tE>
 8752d81:	8b 55 08             	mov    0x8(%ebp),%edx
 8752d84:	8b 42 0c             	mov    0xc(%edx),%eax
 8752d87:	85 c0                	test   %eax,%eax
 8752d89:	75 07                	jne    8752d92 <_ZN5yaSSL7BuffersD1Ev+0xb2>
 8752d8b:	eb 19                	jmp    8752da6 <_ZN5yaSSL7BuffersD1Ev+0xc6>
 8752d8d:	8d 76 00             	lea    0x0(%esi),%esi
 8752d90:	89 f0                	mov    %esi,%eax
 8752d92:	8b 70 04             	mov    0x4(%eax),%esi
 8752d95:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752d9a:	89 04 24             	mov    %eax,(%esp)
 8752d9d:	e8 4e db ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8752da2:	85 f6                	test   %esi,%esi
 8752da4:	75 ea                	jne    8752d90 <_ZN5yaSSL7BuffersD1Ev+0xb0>
 8752da6:	8b 55 08             	mov    0x8(%ebp),%edx
 8752da9:	8b 02                	mov    (%edx),%eax
 8752dab:	85 c0                	test   %eax,%eax
 8752dad:	75 0b                	jne    8752dba <_ZN5yaSSL7BuffersD1Ev+0xda>
 8752daf:	90                   	nop
 8752db0:	eb 1c                	jmp    8752dce <_ZN5yaSSL7BuffersD1Ev+0xee>
 8752db2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8752db8:	89 f0                	mov    %esi,%eax
 8752dba:	8b 70 04             	mov    0x4(%eax),%esi
 8752dbd:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8752dc2:	89 04 24             	mov    %eax,(%esp)
 8752dc5:	e8 26 db ff ff       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 8752dca:	85 f6                	test   %esi,%esi
 8752dcc:	75 ea                	jne    8752db8 <_ZN5yaSSL7BuffersD1Ev+0xd8>
 8752dce:	83 c4 1c             	add    $0x1c,%esp
 8752dd1:	5b                   	pop    %ebx
 8752dd2:	5e                   	pop    %esi
 8752dd3:	5f                   	pop    %edi
 8752dd4:	5d                   	pop    %ebp
 8752dd5:	c3                   	ret
 8752dd6:	8d 76 00             	lea    0x0(%esi),%esi
 8752dd9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Buffers::~Buffers @ 0x8752ce0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Buffers::~Buffers() */

void __thiscall yaSSL::Buffers::~Buffers(Buffers *this)

{
  int iVar1;
  output_buffer *this_00;
  input_buffer *piVar2;
  int iVar3;
  
  for (iVar1 = *(int *)(this + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    this_00 = *(output_buffer **)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (this_00 != (output_buffer *)0x0) {
      output_buffer::~output_buffer(this_00);
    }
    operator_delete(this_00,0);
  }
  for (iVar1 = *(int *)this; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    piVar2 = *(input_buffer **)(iVar1 + 8);
    *(undefined4 *)(iVar1 + 8) = 0;
    if (piVar2 != (input_buffer *)0x0) {
      input_buffer::~input_buffer(piVar2);
    }
    operator_delete(piVar2,0);
  }
  piVar2 = *(input_buffer **)(this + 0x18);
  if (piVar2 != (input_buffer *)0x0) {
    input_buffer::~input_buffer(piVar2);
  }
  operator_delete(piVar2,0);
  iVar1 = *(int *)(this + 0xc);
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    operator_delete__(iVar1,0);
    iVar1 = iVar3;
  }
  iVar1 = *(int *)this;
  while (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + 4);
    operator_delete__(iVar1,0);
    iVar1 = iVar3;
  }
  return;
}

```

