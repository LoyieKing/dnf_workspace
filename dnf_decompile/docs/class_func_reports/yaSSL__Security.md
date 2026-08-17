# yaSSL__Security

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 10

---

## GetContext

```asm
// === 0874ea00 yaSSL::Security::GetContext  [0x0874ea00-0x874ea0f] ===
 874ea00:	55                   	push   %ebp
 874ea01:	89 e5                	mov    %esp,%ebp
 874ea03:	8b 45 08             	mov    0x8(%ebp),%eax
 874ea06:	5d                   	pop    %ebp
 874ea07:	8b 80 7c 08 00 00    	mov    0x87c(%eax),%eax
 874ea0d:	c3                   	ret
 874ea0e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Security::GetContext @ 0x874ea00

/* yaSSL::Security::GetContext() const */

undefined4 __thiscall yaSSL::Security::GetContext(Security *this)

{
  return *(undefined4 *)(this + 0x87c);
}

```

---

## Security

```asm
// === 0874f830 yaSSL::Security::Security  [0x0874f830-0x874f8cf] ===
 874f830:	55                   	push   %ebp
 874f831:	89 e5                	mov    %esp,%ebp
 874f833:	83 ec 48             	sub    $0x48,%esp
 874f836:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 874f839:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 874f83d:	e8 b6 35 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f842:	81 c3 56 d3 c1 00    	add    $0xc1d356,%ebx
 874f848:	0f b6 55 20          	movzbl 0x20(%ebp),%edx
 874f84c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 874f84f:	8b 75 08             	mov    0x8(%ebp),%esi
 874f852:	89 7d fc             	mov    %edi,-0x4(%ebp)
 874f855:	8b 7d 10             	mov    0x10(%ebp),%edi
 874f858:	66 89 44 24 04       	mov    %ax,0x4(%esp)
 874f85d:	88 55 e7             	mov    %dl,-0x19(%ebp)
 874f860:	89 34 24             	mov    %esi,(%esp)
 874f863:	89 7c 24 08          	mov    %edi,0x8(%esp)
 874f867:	89 45 e0             	mov    %eax,-0x20(%ebp)
 874f86a:	e8 e1 7f ff ff       	call   8747850 <_ZN5yaSSL10ConnectionC1ENS_15ProtocolVersionERNS_10RandomPoolE>
 874f86f:	8b 45 e0             	mov    -0x20(%ebp),%eax
 874f872:	0f b6 55 e7          	movzbl -0x19(%ebp),%edx
 874f876:	66 89 44 24 0c       	mov    %ax,0xc(%esp)
 874f87b:	8b 45 18             	mov    0x18(%ebp),%eax
 874f87e:	89 54 24 10          	mov    %edx,0x10(%esp)
 874f882:	89 44 24 08          	mov    %eax,0x8(%esp)
 874f886:	8b 45 14             	mov    0x14(%ebp),%eax
 874f889:	89 44 24 04          	mov    %eax,0x4(%esp)
 874f88d:	8d 86 38 01 00 00    	lea    0x138(%esi),%eax
 874f893:	89 04 24             	mov    %eax,(%esp)
 874f896:	e8 85 af ff ff       	call   874a820 <_ZN5yaSSL10ParametersC1ENS_13ConnectionEndERKNS_7CiphersENS_15ProtocolVersionEb>
 874f89b:	8d 86 18 08 00 00    	lea    0x818(%esi),%eax
 874f8a1:	89 7c 24 04          	mov    %edi,0x4(%esp)
 874f8a5:	89 04 24             	mov    %eax,(%esp)
 874f8a8:	e8 23 ff ff ff       	call   874f7d0 <_ZN5yaSSL11SSL_SESSIONC1ERNS_10RandomPoolE>
 874f8ad:	8b 45 1c             	mov    0x1c(%ebp),%eax
 874f8b0:	c6 86 80 08 00 00 00 	movb   $0x0,0x880(%esi)
 874f8b7:	89 86 7c 08 00 00    	mov    %eax,0x87c(%esi)
 874f8bd:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 874f8c0:	8b 75 f8             	mov    -0x8(%ebp),%esi
 874f8c3:	8b 7d fc             	mov    -0x4(%ebp),%edi
 874f8c6:	89 ec                	mov    %ebp,%esp
 874f8c8:	5d                   	pop    %ebp
 874f8c9:	c3                   	ret
 874f8ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// yaSSL::Security::Security @ 0x874f830

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Security::Security(yaSSL::ProtocolVersion, yaSSL::RandomPool&, yaSSL::ConnectionEnd,
   yaSSL::Ciphers const&, yaSSL::SSL_CTX*, bool) */

void __thiscall
yaSSL::Security::Security
          (Security *this,undefined2 param_2,RandomPool *param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  Connection::Connection((Connection *)this,param_2,param_3);
  Parameters::Parameters((Parameters *)(this + 0x138),param_4,param_5,param_2,param_7);
  SSL_SESSION::SSL_SESSION((SSL_SESSION *)(this + 0x818),param_3);
  this[0x880] = (Security)0x0;
  *(undefined4 *)(this + 0x87c) = param_6;
  return;
}

```

---

## get_connection

```asm
// === 0874e960 yaSSL::Security::get_connection  [0x0874e960-0x874e96f] ===
 874e960:	55                   	push   %ebp
 874e961:	89 e5                	mov    %esp,%ebp
 874e963:	8b 45 08             	mov    0x8(%ebp),%eax
 874e966:	5d                   	pop    %ebp
 874e967:	c3                   	ret
 874e968:	90                   	nop
 874e969:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Security::get_connection @ 0x874e960

/* yaSSL::Security::get_connection() const */

Security * __thiscall yaSSL::Security::get_connection(Security *this)

{
  return this;
}

```

---

## get_parms

```asm
// === 0874ea50 yaSSL::Security::get_parms  [0x0874ea50-0x874ea5f] ===
 874ea50:	55                   	push   %ebp
 874ea51:	89 e5                	mov    %esp,%ebp
 874ea53:	8b 45 08             	mov    0x8(%ebp),%eax
 874ea56:	5d                   	pop    %ebp
 874ea57:	05 38 01 00 00       	add    $0x138,%eax
 874ea5c:	c3                   	ret
 874ea5d:	90                   	nop
 874ea5e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Security::get_parms @ 0x874ea50

/* yaSSL::Security::get_parms() const */

Security * __thiscall yaSSL::Security::get_parms(Security *this)

{
  return this + 0x138;
}

```

---

## get_resume

```asm
// === 0874ece0 yaSSL::Security::get_resume  [0x0874ece0-0x874ecef] ===
 874ece0:	55                   	push   %ebp
 874ece1:	89 e5                	mov    %esp,%ebp
 874ece3:	8b 45 08             	mov    0x8(%ebp),%eax
 874ece6:	5d                   	pop    %ebp
 874ece7:	05 18 08 00 00       	add    $0x818,%eax
 874ecec:	c3                   	ret
 874eced:	90                   	nop
 874ecee:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Security::get_resume @ 0x874ece0

/* yaSSL::Security::get_resume() const */

Security * __thiscall yaSSL::Security::get_resume(Security *this)

{
  return this + 0x818;
}

```

---

## get_resuming

```asm
// === 0874ecf0 yaSSL::Security::get_resuming  [0x0874ecf0-0x874ecff] ===
 874ecf0:	55                   	push   %ebp
 874ecf1:	89 e5                	mov    %esp,%ebp
 874ecf3:	8b 45 08             	mov    0x8(%ebp),%eax
 874ecf6:	5d                   	pop    %ebp
 874ecf7:	0f b6 80 80 08 00 00 	movzbl 0x880(%eax),%eax
 874ecfe:	c3                   	ret
 874ecff:	90                   	nop

```

```c
// yaSSL::Security::get_resuming @ 0x874ecf0

/* yaSSL::Security::get_resuming() const */

Security __thiscall yaSSL::Security::get_resuming(Security *this)

{
  return this[0x880];
}

```

---

## set_resuming

```asm
// === 0874efc0 yaSSL::Security::set_resuming  [0x0874efc0-0x874efdf] ===
 874efc0:	55                   	push   %ebp
 874efc1:	89 e5                	mov    %esp,%ebp
 874efc3:	8b 55 0c             	mov    0xc(%ebp),%edx
 874efc6:	8b 45 08             	mov    0x8(%ebp),%eax
 874efc9:	88 90 80 08 00 00    	mov    %dl,0x880(%eax)
 874efcf:	5d                   	pop    %ebp
 874efd0:	c3                   	ret
 874efd1:	90                   	nop
 874efd2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 874efd9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::Security::set_resuming @ 0x874efc0

/* yaSSL::Security::set_resuming(bool) */

void __thiscall yaSSL::Security::set_resuming(Security *this,bool param_1)

{
  this[0x880] = (Security)param_1;
  return;
}

```

---

## use_connection

```asm
// === 0874ed00 yaSSL::Security::use_connection  [0x0874ed00-0x874ed0f] ===
 874ed00:	55                   	push   %ebp
 874ed01:	89 e5                	mov    %esp,%ebp
 874ed03:	8b 45 08             	mov    0x8(%ebp),%eax
 874ed06:	5d                   	pop    %ebp
 874ed07:	c3                   	ret
 874ed08:	90                   	nop
 874ed09:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::Security::use_connection @ 0x874ed00

/* yaSSL::Security::use_connection() */

Security * __thiscall yaSSL::Security::use_connection(Security *this)

{
  return this;
}

```

---

## use_parms

```asm
// === 0874eea0 yaSSL::Security::use_parms  [0x0874eea0-0x874eeaf] ===
 874eea0:	55                   	push   %ebp
 874eea1:	89 e5                	mov    %esp,%ebp
 874eea3:	8b 45 08             	mov    0x8(%ebp),%eax
 874eea6:	5d                   	pop    %ebp
 874eea7:	05 38 01 00 00       	add    $0x138,%eax
 874eeac:	c3                   	ret
 874eead:	90                   	nop
 874eeae:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Security::use_parms @ 0x874eea0

/* yaSSL::Security::use_parms() */

Security * __thiscall yaSSL::Security::use_parms(Security *this)

{
  return this + 0x138;
}

```

---

## use_resume

```asm
// === 0874efb0 yaSSL::Security::use_resume  [0x0874efb0-0x874efbf] ===
 874efb0:	55                   	push   %ebp
 874efb1:	89 e5                	mov    %esp,%ebp
 874efb3:	8b 45 08             	mov    0x8(%ebp),%eax
 874efb6:	5d                   	pop    %ebp
 874efb7:	05 18 08 00 00       	add    $0x818,%eax
 874efbc:	c3                   	ret
 874efbd:	90                   	nop
 874efbe:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::Security::use_resume @ 0x874efb0

/* yaSSL::Security::use_resume() */

Security * __thiscall yaSSL::Security::use_resume(Security *this)

{
  return this + 0x818;
}

```

