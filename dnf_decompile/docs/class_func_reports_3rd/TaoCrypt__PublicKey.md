# TaoCrypt__PublicKey

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## AddToEnd

```asm
// === 08754260 TaoCrypt::PublicKey::AddToEnd  [0x08754260-0x875430f] ===
 8754260:	55                   	push   %ebp
 8754261:	89 e5                	mov    %esp,%ebp
 8754263:	83 ec 38             	sub    $0x38,%esp
 8754266:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8754269:	89 75 f8             	mov    %esi,-0x8(%ebp)
 875426c:	8b 75 08             	mov    0x8(%ebp),%esi
 875426f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8754272:	8b 7d 10             	mov    0x10(%ebp),%edi
 8754275:	e8 7e eb fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 875427a:	81 c3 1e 89 c1 00    	add    $0xc1891e,%ebx
 8754280:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8754285:	8b 46 04             	mov    0x4(%esi),%eax
 8754288:	01 f8                	add    %edi,%eax
 875428a:	89 04 24             	mov    %eax,(%esp)
 875428d:	e8 fe 34 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8754292:	8b 4e 04             	mov    0x4(%esi),%ecx
 8754295:	89 c2                	mov    %eax,%edx
 8754297:	8b 06                	mov    (%esi),%eax
 8754299:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 875429c:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 87542a0:	89 14 24             	mov    %edx,(%esp)
 87542a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 87542a7:	e8 f4 95 92 ff       	call   807d8a0 <memcpy@plt>
 87542ac:	8b 46 04             	mov    0x4(%esi),%eax
 87542af:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87542b2:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 87542b5:	89 7c 24 08          	mov    %edi,0x8(%esp)
 87542b9:	01 d0                	add    %edx,%eax
 87542bb:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87542bf:	89 04 24             	mov    %eax,(%esp)
 87542c2:	e8 d9 95 92 ff       	call   807d8a0 <memcpy@plt>
 87542c7:	8b 06                	mov    (%esi),%eax
 87542c9:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 87542cf:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87542d4:	89 04 24             	mov    %eax,(%esp)
 87542d7:	e8 44 34 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87542dc:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87542df:	01 7e 04             	add    %edi,0x4(%esi)
 87542e2:	89 16                	mov    %edx,(%esi)
 87542e4:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 87542e9:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 87542f0:	e8 2b 34 01 00       	call   8767720 <_ZdaPvN8TaoCrypt5new_tE>
 87542f5:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87542f8:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87542fb:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87542fe:	89 ec                	mov    %ebp,%esp
 8754300:	5d                   	pop    %ebp
 8754301:	c3                   	ret
 8754302:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8754309:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// TaoCrypt::PublicKey::AddToEnd @ 0x8754260

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PublicKey::AddToEnd(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::PublicKey::AddToEnd(PublicKey *this,uchar *param_1,uint param_2)

{
  undefined4 uVar1;
  void *__dest;
  uint in_stack_ffffffc8;
  uint uVar2;
  
  __dest = operator_new__(*(int *)(this + 4) + param_2,in_stack_ffffffc8 & 0xffffff00);
  memcpy(__dest,*(void **)this,*(size_t *)(this + 4));
  memcpy((void *)(*(int *)(this + 4) + (int)__dest),param_1,param_2);
  uVar1 = *(undefined4 *)this;
  *(undefined4 *)this = 0;
  uVar2 = (uint)param_1 & 0xffffff00;
  operator_delete__(uVar1,uVar2);
  *(uint *)(this + 4) = *(int *)(this + 4) + param_2;
  *(void **)this = __dest;
  operator_delete__(0,uVar2 & 0xffffff00);
  return;
}

```

---

## PublicKey

```asm
// === 08753f40 TaoCrypt::PublicKey::PublicKey  [0x08753f40-0x8753f9f] ===
 8753f40:	55                   	push   %ebp
 8753f41:	89 e5                	mov    %esp,%ebp
 8753f43:	83 ec 18             	sub    $0x18,%esp
 8753f46:	8b 45 10             	mov    0x10(%ebp),%eax
 8753f49:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8753f4c:	8b 75 08             	mov    0x8(%ebp),%esi
 8753f4f:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8753f52:	e8 a1 ee fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753f57:	81 c3 41 8c c1 00    	add    $0xc18c41,%ebx
 8753f5d:	85 c0                	test   %eax,%eax
 8753f5f:	c7 06 00 00 00 00    	movl   $0x0,(%esi)
 8753f65:	c7 46 04 00 00 00 00 	movl   $0x0,0x4(%esi)
 8753f6c:	74 1b                	je     8753f89 <_ZN8TaoCrypt9PublicKeyC1EPKhj+0x49>
 8753f6e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8753f72:	89 34 24             	mov    %esi,(%esp)
 8753f75:	e8 d6 fe ff ff       	call   8753e50 <_ZN8TaoCrypt9PublicKey7SetSizeEj>
 8753f7a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8753f7d:	89 34 24             	mov    %esi,(%esp)
 8753f80:	89 44 24 04          	mov    %eax,0x4(%esp)
 8753f84:	e8 17 fd ff ff       	call   8753ca0 <_ZN8TaoCrypt9PublicKey6SetKeyEPKh>
 8753f89:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8753f8c:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8753f8f:	89 ec                	mov    %ebp,%esp
 8753f91:	5d                   	pop    %ebp
 8753f92:	c3                   	ret
 8753f93:	90                   	nop
 8753f94:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8753f9a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::PublicKey::PublicKey @ 0x8753f40

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PublicKey::PublicKey(unsigned char const*, unsigned int) */

void __thiscall TaoCrypt::PublicKey::PublicKey(PublicKey *this,uchar *param_1,uint param_2)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  if (param_2 != 0) {
    SetSize(this,param_2);
    SetKey(this,param_1);
  }
  return;
}

```

---

## SetKey

```asm
// === 08753ca0 TaoCrypt::PublicKey::SetKey  [0x08753ca0-0x8753cdf] ===
 8753ca0:	55                   	push   %ebp
 8753ca1:	89 e5                	mov    %esp,%ebp
 8753ca3:	53                   	push   %ebx
 8753ca4:	83 ec 14             	sub    $0x14,%esp
 8753ca7:	8b 45 08             	mov    0x8(%ebp),%eax
 8753caa:	e8 49 f1 fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753caf:	81 c3 e9 8e c1 00    	add    $0xc18ee9,%ebx
 8753cb5:	8b 10                	mov    (%eax),%edx
 8753cb7:	8b 40 04             	mov    0x4(%eax),%eax
 8753cba:	89 14 24             	mov    %edx,(%esp)
 8753cbd:	89 44 24 08          	mov    %eax,0x8(%esp)
 8753cc1:	8b 45 0c             	mov    0xc(%ebp),%eax
 8753cc4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8753cc8:	e8 d3 9b 92 ff       	call   807d8a0 <memcpy@plt>
 8753ccd:	83 c4 14             	add    $0x14,%esp
 8753cd0:	5b                   	pop    %ebx
 8753cd1:	5d                   	pop    %ebp
 8753cd2:	c3                   	ret
 8753cd3:	90                   	nop
 8753cd4:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8753cda:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// TaoCrypt::PublicKey::SetKey @ 0x8753ca0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PublicKey::SetKey(unsigned char const*) */

void __thiscall TaoCrypt::PublicKey::SetKey(PublicKey *this,uchar *param_1)

{
  memcpy(*(void **)this,param_1,*(size_t *)(this + 4));
  return;
}

```

---

## SetSize

```asm
// === 08753e50 TaoCrypt::PublicKey::SetSize  [0x08753e50-0x8753e8f] ===
 8753e50:	55                   	push   %ebp
 8753e51:	89 e5                	mov    %esp,%ebp
 8753e53:	83 ec 18             	sub    $0x18,%esp
 8753e56:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8753e59:	8b 45 0c             	mov    0xc(%ebp),%eax
 8753e5c:	8b 75 08             	mov    0x8(%ebp),%esi
 8753e5f:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8753e62:	e8 91 ef fc ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8753e67:	81 c3 31 8d c1 00    	add    $0xc18d31,%ebx
 8753e6d:	89 46 04             	mov    %eax,0x4(%esi)
 8753e70:	c6 44 24 04 00       	movb   $0x0,0x4(%esp)
 8753e75:	8b 46 04             	mov    0x4(%esi),%eax
 8753e78:	89 04 24             	mov    %eax,(%esp)
 8753e7b:	e8 10 39 01 00       	call   8767790 <_ZnajN8TaoCrypt5new_tE>
 8753e80:	89 06                	mov    %eax,(%esi)
 8753e82:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8753e85:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8753e88:	89 ec                	mov    %ebp,%esp
 8753e8a:	5d                   	pop    %ebp
 8753e8b:	c3                   	ret
 8753e8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// TaoCrypt::PublicKey::SetSize @ 0x8753e50

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* TaoCrypt::PublicKey::SetSize(unsigned int) */

void __thiscall TaoCrypt::PublicKey::SetSize(PublicKey *this,uint param_1)

{
  void *pvVar1;
  
  *(uint *)(this + 4) = param_1;
  pvVar1 = operator_new__(*(undefined4 *)(this + 4),0);
  *(void **)this = pvVar1;
  return;
}

```

