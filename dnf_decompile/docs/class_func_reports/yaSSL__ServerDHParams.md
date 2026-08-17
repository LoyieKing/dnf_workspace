# yaSSL__ServerDHParams

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## ServerDHParams

```asm
// === 08746d60 yaSSL::ServerDHParams::ServerDHParams  [0x08746d60-0x8746d9f] ===
 8746d60:	55                   	push   %ebp
 8746d61:	89 e5                	mov    %esp,%ebp
 8746d63:	8b 45 08             	mov    0x8(%ebp),%eax
 8746d66:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 8746d6c:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8746d73:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8746d7a:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8746d81:	c7 40 10 00 00 00 00 	movl   $0x0,0x10(%eax)
 8746d88:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8746d8f:	5d                   	pop    %ebp
 8746d90:	c3                   	ret
 8746d91:	90                   	nop
 8746d92:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8746d99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::ServerDHParams::ServerDHParams @ 0x8746d60

/* yaSSL::ServerDHParams::ServerDHParams() */

void __thiscall yaSSL::ServerDHParams::ServerDHParams(ServerDHParams *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  return;
}

```

---

## alloc_g

```asm
// === 08747300 yaSSL::ServerDHParams::alloc_g  [0x08747300-0x874733f] ===
 8747300:	55                   	push   %ebp
 8747301:	89 e5                	mov    %esp,%ebp
 8747303:	83 ec 18             	sub    $0x18,%esp
 8747306:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747309:	8b 45 0c             	mov    0xc(%ebp),%eax
 874730c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874730f:	8b 75 08             	mov    0x8(%ebp),%esi
 8747312:	e8 e1 ba fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747317:	81 c3 81 58 c2 00    	add    $0xc25881,%ebx
 874731d:	89 46 04             	mov    %eax,0x4(%esi)
 8747320:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8747325:	89 04 24             	mov    %eax,(%esp)
 8747328:	e8 23 b0 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874732d:	89 46 10             	mov    %eax,0x10(%esi)
 8747330:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747333:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8747336:	89 ec                	mov    %ebp,%esp
 8747338:	5d                   	pop    %ebp
 8747339:	c3                   	ret
 874733a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ServerDHParams::alloc_g @ 0x8747300

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerDHParams::alloc_g(int) */

void __thiscall yaSSL::ServerDHParams::alloc_g(ServerDHParams *this,int param_1)

{
  void *pvVar1;
  
  *(int *)(this + 4) = param_1;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 0x10) = pvVar1;
  return;
}

```

---

## alloc_p

```asm
// === 08747340 yaSSL::ServerDHParams::alloc_p  [0x08747340-0x874737f] ===
 8747340:	55                   	push   %ebp
 8747341:	89 e5                	mov    %esp,%ebp
 8747343:	83 ec 18             	sub    $0x18,%esp
 8747346:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8747349:	8b 45 0c             	mov    0xc(%ebp),%eax
 874734c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874734f:	8b 75 08             	mov    0x8(%ebp),%esi
 8747352:	e8 a1 ba fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8747357:	81 c3 41 58 c2 00    	add    $0xc25841,%ebx
 874735d:	89 06                	mov    %eax,(%esi)
 874735f:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8747364:	89 04 24             	mov    %eax,(%esp)
 8747367:	e8 e4 af 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 874736c:	89 46 0c             	mov    %eax,0xc(%esi)
 874736f:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8747372:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8747375:	89 ec                	mov    %ebp,%esp
 8747377:	5d                   	pop    %ebp
 8747378:	c3                   	ret
 8747379:	90                   	nop
 874737a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ServerDHParams::alloc_p @ 0x8747340

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerDHParams::alloc_p(int) */

void __thiscall yaSSL::ServerDHParams::alloc_p(ServerDHParams *this,int param_1)

{
  void *pvVar1;
  
  *(int *)this = param_1;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 0xc) = pvVar1;
  return;
}

```

---

## alloc_pub

```asm
// === 087472c0 yaSSL::ServerDHParams::alloc_pub  [0x087472c0-0x87472ff] ===
 87472c0:	55                   	push   %ebp
 87472c1:	89 e5                	mov    %esp,%ebp
 87472c3:	83 ec 18             	sub    $0x18,%esp
 87472c6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87472c9:	8b 45 0c             	mov    0xc(%ebp),%eax
 87472cc:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87472cf:	8b 75 08             	mov    0x8(%ebp),%esi
 87472d2:	e8 21 bb fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87472d7:	81 c3 c1 58 c2 00    	add    $0xc258c1,%ebx
 87472dd:	89 46 08             	mov    %eax,0x8(%esi)
 87472e0:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87472e5:	89 04 24             	mov    %eax,(%esp)
 87472e8:	e8 63 b0 00 00       	call   8752350 <_ZnajN5yaSSL5new_tE>
 87472ed:	89 46 14             	mov    %eax,0x14(%esi)
 87472f0:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87472f3:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87472f6:	89 ec                	mov    %ebp,%esp
 87472f8:	5d                   	pop    %ebp
 87472f9:	c3                   	ret
 87472fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ServerDHParams::alloc_pub @ 0x87472c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerDHParams::alloc_pub(int) */

void __thiscall yaSSL::ServerDHParams::alloc_pub(ServerDHParams *this,int param_1)

{
  void *pvVar1;
  
  *(int *)(this + 8) = param_1;
  pvVar1 = operator_new__(param_1,0);
  *(void **)(this + 0x14) = pvVar1;
  return;
}

```

---

## get_g

```asm
// === 08746e30 yaSSL::ServerDHParams::get_g  [0x08746e30-0x8746e3f] ===
 8746e30:	55                   	push   %ebp
 8746e31:	89 e5                	mov    %esp,%ebp
 8746e33:	8b 45 08             	mov    0x8(%ebp),%eax
 8746e36:	5d                   	pop    %ebp
 8746e37:	8b 40 10             	mov    0x10(%eax),%eax
 8746e3a:	c3                   	ret
 8746e3b:	90                   	nop
 8746e3c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerDHParams::get_g @ 0x8746e30

/* yaSSL::ServerDHParams::get_g() const */

undefined4 __thiscall yaSSL::ServerDHParams::get_g(ServerDHParams *this)

{
  return *(undefined4 *)(this + 0x10);
}

```

---

## get_gSize

```asm
// === 08746e00 yaSSL::ServerDHParams::get_gSize  [0x08746e00-0x8746e0f] ===
 8746e00:	55                   	push   %ebp
 8746e01:	89 e5                	mov    %esp,%ebp
 8746e03:	8b 45 08             	mov    0x8(%ebp),%eax
 8746e06:	5d                   	pop    %ebp
 8746e07:	8b 40 04             	mov    0x4(%eax),%eax
 8746e0a:	c3                   	ret
 8746e0b:	90                   	nop
 8746e0c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerDHParams::get_gSize @ 0x8746e00

/* yaSSL::ServerDHParams::get_gSize() const */

undefined4 __thiscall yaSSL::ServerDHParams::get_gSize(ServerDHParams *this)

{
  return *(undefined4 *)(this + 4);
}

```

---

## get_p

```asm
// === 08746e20 yaSSL::ServerDHParams::get_p  [0x08746e20-0x8746e2f] ===
 8746e20:	55                   	push   %ebp
 8746e21:	89 e5                	mov    %esp,%ebp
 8746e23:	8b 45 08             	mov    0x8(%ebp),%eax
 8746e26:	5d                   	pop    %ebp
 8746e27:	8b 40 0c             	mov    0xc(%eax),%eax
 8746e2a:	c3                   	ret
 8746e2b:	90                   	nop
 8746e2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerDHParams::get_p @ 0x8746e20

/* yaSSL::ServerDHParams::get_p() const */

undefined4 __thiscall yaSSL::ServerDHParams::get_p(ServerDHParams *this)

{
  return *(undefined4 *)(this + 0xc);
}

```

---

## get_pSize

```asm
// === 08746df0 yaSSL::ServerDHParams::get_pSize  [0x08746df0-0x8746dff] ===
 8746df0:	55                   	push   %ebp
 8746df1:	89 e5                	mov    %esp,%ebp
 8746df3:	8b 45 08             	mov    0x8(%ebp),%eax
 8746df6:	5d                   	pop    %ebp
 8746df7:	8b 00                	mov    (%eax),%eax
 8746df9:	c3                   	ret
 8746dfa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::ServerDHParams::get_pSize @ 0x8746df0

/* yaSSL::ServerDHParams::get_pSize() const */

undefined4 __thiscall yaSSL::ServerDHParams::get_pSize(ServerDHParams *this)

{
  return *(undefined4 *)this;
}

```

---

## get_pub

```asm
// === 08746e40 yaSSL::ServerDHParams::get_pub  [0x08746e40-0x8746e4f] ===
 8746e40:	55                   	push   %ebp
 8746e41:	89 e5                	mov    %esp,%ebp
 8746e43:	8b 45 08             	mov    0x8(%ebp),%eax
 8746e46:	5d                   	pop    %ebp
 8746e47:	8b 40 14             	mov    0x14(%eax),%eax
 8746e4a:	c3                   	ret
 8746e4b:	90                   	nop
 8746e4c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerDHParams::get_pub @ 0x8746e40

/* yaSSL::ServerDHParams::get_pub() const */

undefined4 __thiscall yaSSL::ServerDHParams::get_pub(ServerDHParams *this)

{
  return *(undefined4 *)(this + 0x14);
}

```

---

## get_pubSize

```asm
// === 08746e10 yaSSL::ServerDHParams::get_pubSize  [0x08746e10-0x8746e1f] ===
 8746e10:	55                   	push   %ebp
 8746e11:	89 e5                	mov    %esp,%ebp
 8746e13:	8b 45 08             	mov    0x8(%ebp),%eax
 8746e16:	5d                   	pop    %ebp
 8746e17:	8b 40 08             	mov    0x8(%eax),%eax
 8746e1a:	c3                   	ret
 8746e1b:	90                   	nop
 8746e1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::ServerDHParams::get_pubSize @ 0x8746e10

/* yaSSL::ServerDHParams::get_pubSize() const */

undefined4 __thiscall yaSSL::ServerDHParams::get_pubSize(ServerDHParams *this)

{
  return *(undefined4 *)(this + 8);
}

```

---

## ~ServerDHParams

```asm
// === 0874b940 yaSSL::ServerDHParams::~ServerDHParams  [0x0874b940-0x874b99f] ===
 874b940:	55                   	push   %ebp
 874b941:	89 e5                	mov    %esp,%ebp
 874b943:	83 ec 18             	sub    $0x18,%esp
 874b946:	89 75 fc             	mov    %esi,-0x4(%ebp)
 874b949:	8b 75 08             	mov    0x8(%ebp),%esi
 874b94c:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 874b94f:	e8 a4 74 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874b954:	81 c3 44 12 c2 00    	add    $0xc21244,%ebx
 874b95a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874b95f:	8b 46 14             	mov    0x14(%esi),%eax
 874b962:	89 04 24             	mov    %eax,(%esp)
 874b965:	e8 86 4f 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874b96a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874b96f:	8b 46 10             	mov    0x10(%esi),%eax
 874b972:	89 04 24             	mov    %eax,(%esp)
 874b975:	e8 76 4f 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874b97a:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 874b97f:	8b 46 0c             	mov    0xc(%esi),%eax
 874b982:	89 04 24             	mov    %eax,(%esp)
 874b985:	e8 66 4f 00 00       	call   87508f0 <_ZdaPvN5yaSSL5new_tE>
 874b98a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 874b98d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 874b990:	89 ec                	mov    %ebp,%esp
 874b992:	5d                   	pop    %ebp
 874b993:	c3                   	ret
 874b994:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 874b99a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// yaSSL::ServerDHParams::~ServerDHParams @ 0x874b940

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerDHParams::~ServerDHParams() */

void __thiscall yaSSL::ServerDHParams::~ServerDHParams(ServerDHParams *this)

{
  operator_delete__(*(undefined4 *)(this + 0x14),0);
  operator_delete__(*(undefined4 *)(this + 0x10),0);
  operator_delete__(*(undefined4 *)(this + 0xc),0);
  return;
}

```

