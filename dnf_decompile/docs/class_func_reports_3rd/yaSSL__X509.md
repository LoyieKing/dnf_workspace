# yaSSL__X509

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## GetAfter

```asm
// === 0874f030 yaSSL::X509::GetAfter  [0x0874f030-0x874f05f] ===
 874f030:	55                   	push   %ebp
 874f031:	89 e5                	mov    %esp,%ebp
 874f033:	53                   	push   %ebx
 874f034:	e8 bf 3d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f039:	81 c3 5f db c1 00    	add    $0xc1db5f,%ebx
 874f03f:	83 ec 14             	sub    $0x14,%esp
 874f042:	8b 45 08             	mov    0x8(%ebp),%eax
 874f045:	83 c0 34             	add    $0x34,%eax
 874f048:	89 04 24             	mov    %eax,(%esp)
 874f04b:	e8 d0 ff ff ff       	call   874f020 <_ZN5yaSSL12StringHolder9GetStringEv>
 874f050:	83 c4 14             	add    $0x14,%esp
 874f053:	5b                   	pop    %ebx
 874f054:	5d                   	pop    %ebp
 874f055:	c3                   	ret
 874f056:	8d 76 00             	lea    0x0(%esi),%esi
 874f059:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::X509::GetAfter @ 0x874f030

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::X509::GetAfter() */

void __thiscall yaSSL::X509::GetAfter(X509 *this)

{
  StringHolder::GetString((StringHolder *)(this + 0x34));
  return;
}

```

---

## GetBefore

```asm
// === 0874f060 yaSSL::X509::GetBefore  [0x0874f060-0x874f08f] ===
 874f060:	55                   	push   %ebp
 874f061:	89 e5                	mov    %esp,%ebp
 874f063:	53                   	push   %ebx
 874f064:	e8 8f 3d fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 874f069:	81 c3 2f db c1 00    	add    $0xc1db2f,%ebx
 874f06f:	83 ec 14             	sub    $0x14,%esp
 874f072:	8b 45 08             	mov    0x8(%ebp),%eax
 874f075:	83 c0 28             	add    $0x28,%eax
 874f078:	89 04 24             	mov    %eax,(%esp)
 874f07b:	e8 a0 ff ff ff       	call   874f020 <_ZN5yaSSL12StringHolder9GetStringEv>
 874f080:	83 c4 14             	add    $0x14,%esp
 874f083:	5b                   	pop    %ebx
 874f084:	5d                   	pop    %ebp
 874f085:	c3                   	ret
 874f086:	8d 76 00             	lea    0x0(%esi),%esi
 874f089:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// yaSSL::X509::GetBefore @ 0x874f060

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::X509::GetBefore() */

void __thiscall yaSSL::X509::GetBefore(X509 *this)

{
  StringHolder::GetString((StringHolder *)(this + 0x28));
  return;
}

```

---

## GetIssuer

```asm
// === 0874f000 yaSSL::X509::GetIssuer  [0x0874f000-0x874f00f] ===
 874f000:	55                   	push   %ebp
 874f001:	89 e5                	mov    %esp,%ebp
 874f003:	8b 45 08             	mov    0x8(%ebp),%eax
 874f006:	5d                   	pop    %ebp
 874f007:	c3                   	ret
 874f008:	90                   	nop
 874f009:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::X509::GetIssuer @ 0x874f000

/* yaSSL::X509::GetIssuer() */

X509 * __thiscall yaSSL::X509::GetIssuer(X509 *this)

{
  return this;
}

```

---

## GetSubject

```asm
// === 0874f010 yaSSL::X509::GetSubject  [0x0874f010-0x874f01f] ===
 874f010:	55                   	push   %ebp
 874f011:	89 e5                	mov    %esp,%ebp
 874f013:	8b 45 08             	mov    0x8(%ebp),%eax
 874f016:	5d                   	pop    %ebp
 874f017:	83 c0 14             	add    $0x14,%eax
 874f01a:	c3                   	ret
 874f01b:	90                   	nop
 874f01c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// yaSSL::X509::GetSubject @ 0x874f010

/* yaSSL::X509::GetSubject() */

X509 * __thiscall yaSSL::X509::GetSubject(X509 *this)

{
  return this + 0x14;
}

```

---

## X509

```asm
// === 08752520 yaSSL::X509::X509  [0x08752520-0x875259f] ===
 8752520:	55                   	push   %ebp
 8752521:	89 e5                	mov    %esp,%ebp
 8752523:	56                   	push   %esi
 8752524:	53                   	push   %ebx
 8752525:	83 ec 10             	sub    $0x10,%esp
 8752528:	8b 45 10             	mov    0x10(%ebp),%eax
 875252b:	e8 c8 08 fd ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8752530:	81 c3 68 a6 c1 00    	add    $0xc1a668,%ebx
 8752536:	8b 75 08             	mov    0x8(%ebp),%esi
 8752539:	89 44 24 08          	mov    %eax,0x8(%esp)
 875253d:	8b 45 0c             	mov    0xc(%ebp),%eax
 8752540:	89 34 24             	mov    %esi,(%esp)
 8752543:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752547:	e8 64 ff ff ff       	call   87524b0 <_ZN5yaSSL9X509_NAMEC1EPKcj>
 875254c:	8b 45 18             	mov    0x18(%ebp),%eax
 875254f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8752553:	8b 45 14             	mov    0x14(%ebp),%eax
 8752556:	89 44 24 04          	mov    %eax,0x4(%esp)
 875255a:	8d 46 14             	lea    0x14(%esi),%eax
 875255d:	89 04 24             	mov    %eax,(%esp)
 8752560:	e8 4b ff ff ff       	call   87524b0 <_ZN5yaSSL9X509_NAMEC1EPKcj>
 8752565:	8b 45 20             	mov    0x20(%ebp),%eax
 8752568:	89 44 24 08          	mov    %eax,0x8(%esp)
 875256c:	8b 45 1c             	mov    0x1c(%ebp),%eax
 875256f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752573:	8d 46 28             	lea    0x28(%esi),%eax
 8752576:	83 c6 34             	add    $0x34,%esi
 8752579:	89 04 24             	mov    %eax,(%esp)
 875257c:	e8 ff fd ff ff       	call   8752380 <_ZN5yaSSL12StringHolderC1EPKci>
 8752581:	8b 45 28             	mov    0x28(%ebp),%eax
 8752584:	89 34 24             	mov    %esi,(%esp)
 8752587:	89 44 24 08          	mov    %eax,0x8(%esp)
 875258b:	8b 45 24             	mov    0x24(%ebp),%eax
 875258e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8752592:	e8 e9 fd ff ff       	call   8752380 <_ZN5yaSSL12StringHolderC1EPKci>
 8752597:	83 c4 10             	add    $0x10,%esp
 875259a:	5b                   	pop    %ebx
 875259b:	5e                   	pop    %esi
 875259c:	5d                   	pop    %ebp
 875259d:	c3                   	ret
 875259e:	66 90                	xchg   %ax,%ax

```

```c
// yaSSL::X509::X509 @ 0x8752520

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::X509::X509(char const*, unsigned int, char const*, unsigned int, char const*, int, char
   const*, int) */

void __thiscall
yaSSL::X509::X509(X509 *this,char *param_1,uint param_2,char *param_3,uint param_4,char *param_5,
                 int param_6,char *param_7,int param_8)

{
  X509_NAME::X509_NAME((X509_NAME *)this,param_1,param_2);
  X509_NAME::X509_NAME((X509_NAME *)(this + 0x14),param_3,param_4);
  StringHolder::StringHolder((StringHolder *)(this + 0x28),param_5,param_6);
  StringHolder::StringHolder((StringHolder *)(this + 0x34),param_7,param_8);
  return;
}

```

