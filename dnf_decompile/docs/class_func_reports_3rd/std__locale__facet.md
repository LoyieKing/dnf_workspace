# std__locale__facet

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## _S_clone_c_locale

```asm
// === 08722b10 std::locale::facet::_S_clone_c_locale  [0x08722b10-0x8722b2f] ===
 8722b10:	55                   	push   %ebp
 8722b11:	89 e5                	mov    %esp,%ebp
 8722b13:	83 ec 08             	sub    $0x8,%esp
 8722b16:	8b 45 08             	mov    0x8(%ebp),%eax
 8722b19:	8b 00                	mov    (%eax),%eax
 8722b1b:	89 45 08             	mov    %eax,0x8(%ebp)
 8722b1e:	c9                   	leave
 8722b1f:	e9 5c b2 95 ff       	jmp    807dd80 <__duplocale@plt>
 8722b24:	90                   	nop
 8722b25:	90                   	nop
 8722b26:	90                   	nop
 8722b27:	90                   	nop
 8722b28:	90                   	nop
 8722b29:	90                   	nop
 8722b2a:	90                   	nop
 8722b2b:	90                   	nop
 8722b2c:	90                   	nop
 8722b2d:	90                   	nop
 8722b2e:	90                   	nop
 8722b2f:	90                   	nop

```

```c
// std::locale::facet::_S_clone_c_locale @ 0x8722b10

/* std::locale::facet::_S_clone_c_locale(__locale_struct*&) */

void std::locale::facet::_S_clone_c_locale(__locale_struct **param_1)

{
  __duplocale();
  return;
}

```

---

## _S_create_c_locale

```asm
// === 08722b60 std::locale::facet::_S_create_c_locale  [0x08722b60-0x8722b9f] ===
 8722b60:	55                   	push   %ebp
 8722b61:	89 e5                	mov    %esp,%ebp
 8722b63:	83 ec 18             	sub    $0x18,%esp
 8722b66:	8b 45 10             	mov    0x10(%ebp),%eax
 8722b69:	c7 04 24 40 00 00 00 	movl   $0x40,(%esp)
 8722b70:	89 44 24 08          	mov    %eax,0x8(%esp)
 8722b74:	8b 45 0c             	mov    0xc(%ebp),%eax
 8722b77:	89 44 24 04          	mov    %eax,0x4(%esp)
 8722b7b:	e8 10 bc 95 ff       	call   807e790 <__newlocale@plt>
 8722b80:	8b 55 08             	mov    0x8(%ebp),%edx
 8722b83:	85 c0                	test   %eax,%eax
 8722b85:	89 02                	mov    %eax,(%edx)
 8722b87:	74 02                	je     8722b8b <_ZNSt6locale5facet18_S_create_c_localeERP15__locale_structPKcS2_+0x2b>
 8722b89:	c9                   	leave
 8722b8a:	c3                   	ret
 8722b8b:	c7 04 24 70 17 d0 08 	movl   $0x8d01770,(%esp)
 8722b92:	e8 09 6f fb ff       	call   86d9aa0 <_ZSt21__throw_runtime_errorPKc>
 8722b97:	90                   	nop
 8722b98:	90                   	nop
 8722b99:	90                   	nop
 8722b9a:	90                   	nop
 8722b9b:	90                   	nop
 8722b9c:	90                   	nop
 8722b9d:	90                   	nop
 8722b9e:	90                   	nop
 8722b9f:	90                   	nop

```

```c
// std::locale::facet::_S_create_c_locale @ 0x8722b60

/* std::locale::facet::_S_create_c_locale(__locale_struct*&, char const*, __locale_struct*) */

void std::locale::facet::_S_create_c_locale
               (__locale_struct **param_1,char *param_2,__locale_struct *param_3)

{
  __locale_struct *p_Var1;
  
  p_Var1 = (__locale_struct *)__newlocale(0x40,param_2,param_3);
  *param_1 = p_Var1;
  if (p_Var1 != (__locale_struct *)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __throw_runtime_error("locale::facet::_S_create_c_locale name not valid");
}

```

---

## _S_destroy_c_locale

```asm
// === 08722b30 std::locale::facet::_S_destroy_c_locale  [0x08722b30-0x8722b5f] ===
 8722b30:	55                   	push   %ebp
 8722b31:	89 e5                	mov    %esp,%ebp
 8722b33:	53                   	push   %ebx
 8722b34:	83 ec 04             	sub    $0x4,%esp
 8722b37:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8722b3a:	8b 03                	mov    (%ebx),%eax
 8722b3c:	85 c0                	test   %eax,%eax
 8722b3e:	74 18                	je     8722b58 <_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct+0x28>
 8722b40:	e8 fb 83 fb ff       	call   86daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>
 8722b45:	8b 13                	mov    (%ebx),%edx
 8722b47:	39 d0                	cmp    %edx,%eax
 8722b49:	74 0d                	je     8722b58 <_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct+0x28>
 8722b4b:	89 55 08             	mov    %edx,0x8(%ebp)
 8722b4e:	83 c4 04             	add    $0x4,%esp
 8722b51:	5b                   	pop    %ebx
 8722b52:	5d                   	pop    %ebp
 8722b53:	e9 08 bb 95 ff       	jmp    807e660 <__freelocale@plt>
 8722b58:	83 c4 04             	add    $0x4,%esp
 8722b5b:	5b                   	pop    %ebx
 8722b5c:	5d                   	pop    %ebp
 8722b5d:	c3                   	ret
 8722b5e:	90                   	nop
 8722b5f:	90                   	nop

```

```c
// std::locale::facet::_S_destroy_c_locale @ 0x8722b30

/* std::locale::facet::_S_destroy_c_locale(__locale_struct*&) */

void std::locale::facet::_S_destroy_c_locale(__locale_struct **param_1)

{
  __locale_struct *p_Var1;
  
  if (*param_1 != (__locale_struct *)0x0) {
    p_Var1 = (__locale_struct *)_S_get_c_locale();
    if (p_Var1 != *param_1) {
      __freelocale();
      return;
    }
  }
  return;
}

```

---

## _S_get_c_locale

```asm
// === 086daf40 std::locale::facet::_S_get_c_locale  [0x086daf40-0x86dafcf] ===
 86daf40:	55                   	push   %ebp
 86daf41:	89 e5                	mov    %esp,%ebp
 86daf43:	83 ec 08             	sub    $0x8,%esp
 86daf46:	a1 58 bd 48 09       	mov    0x948bd58,%eax
 86daf4b:	85 c0                	test   %eax,%eax
 86daf4d:	74 09                	je     86daf58 <_ZNSt6locale5facet15_S_get_c_localeEv+0x18>
 86daf4f:	c9                   	leave
 86daf50:	c3                   	ret
 86daf51:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 86daf58:	e8 b3 ff ff ff       	call   86daf10 <_ZNSt6locale5facet18_S_initialize_onceEv>
 86daf5d:	a1 58 bd 48 09       	mov    0x948bd58,%eax
 86daf62:	c9                   	leave
 86daf63:	c3                   	ret
 86daf64:	90                   	nop
 86daf65:	90                   	nop
 86daf66:	90                   	nop
 86daf67:	90                   	nop
 86daf68:	90                   	nop
 86daf69:	90                   	nop
 86daf6a:	90                   	nop
 86daf6b:	90                   	nop
 86daf6c:	90                   	nop
 86daf6d:	90                   	nop
 86daf6e:	90                   	nop
 86daf6f:	90                   	nop

086daf70 <_ZN9__gnu_cxx24__concurrence_lock_errorD0Ev>:
 86daf70:	55                   	push   %ebp
 86daf71:	89 e5                	mov    %esp,%ebp
 86daf73:	53                   	push   %ebx
 86daf74:	83 ec 14             	sub    $0x14,%esp
 86daf77:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86daf7a:	c7 03 90 e0 cf 08    	movl   $0x8cfe090,(%ebx)
 86daf80:	89 1c 24             	mov    %ebx,(%esp)
 86daf83:	e8 f8 a0 04 00       	call   8725080 <_ZNSt9exceptionD1Ev>
 86daf88:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86daf8b:	83 c4 14             	add    $0x14,%esp
 86daf8e:	5b                   	pop    %ebx
 86daf8f:	5d                   	pop    %ebp
 86daf90:	e9 5b 95 04 00       	jmp    87244f0 <_ZdlPv>
 86daf95:	90                   	nop
 86daf96:	90                   	nop
 86daf97:	90                   	nop
 86daf98:	90                   	nop
 86daf99:	90                   	nop
 86daf9a:	90                   	nop
 86daf9b:	90                   	nop
 86daf9c:	90                   	nop
 86daf9d:	90                   	nop
 86daf9e:	90                   	nop
 86daf9f:	90                   	nop

086dafa0 <_ZN9__gnu_cxx26__concurrence_unlock_errorD0Ev>:
 86dafa0:	55                   	push   %ebp
 86dafa1:	89 e5                	mov    %esp,%ebp
 86dafa3:	53                   	push   %ebx
 86dafa4:	83 ec 14             	sub    $0x14,%esp
 86dafa7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dafaa:	c7 03 f8 e0 cf 08    	movl   $0x8cfe0f8,(%ebx)
 86dafb0:	89 1c 24             	mov    %ebx,(%esp)
 86dafb3:	e8 c8 a0 04 00       	call   8725080 <_ZNSt9exceptionD1Ev>
 86dafb8:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86dafbb:	83 c4 14             	add    $0x14,%esp
 86dafbe:	5b                   	pop    %ebx
 86dafbf:	5d                   	pop    %ebp
 86dafc0:	e9 2b 95 04 00       	jmp    87244f0 <_ZdlPv>
 86dafc5:	90                   	nop
 86dafc6:	90                   	nop
 86dafc7:	90                   	nop
 86dafc8:	90                   	nop
 86dafc9:	90                   	nop
 86dafca:	90                   	nop
 86dafcb:	90                   	nop
 86dafcc:	90                   	nop
 86dafcd:	90                   	nop
 86dafce:	90                   	nop
 86dafcf:	90                   	nop

```

```c
// std::locale::facet::_S_get_c_locale @ 0x86daf40

/* std::locale::facet::_S_get_c_locale() */

int std::locale::facet::_S_get_c_locale(void)

{
  if (_S_c_locale != 0) {
    return _S_c_locale;
  }
  _S_initialize_once();
  return _S_c_locale;
}

```

---

## _S_get_c_name

```asm
// === 086dad90 std::locale::facet::_S_get_c_name  [0x086dad90-0x86dad9f] ===
 86dad90:	55                   	push   %ebp
 86dad91:	b8 1c e0 cf 08       	mov    $0x8cfe01c,%eax
 86dad96:	89 e5                	mov    %esp,%ebp
 86dad98:	5d                   	pop    %ebp
 86dad99:	c3                   	ret
 86dad9a:	90                   	nop
 86dad9b:	90                   	nop
 86dad9c:	90                   	nop
 86dad9d:	90                   	nop
 86dad9e:	90                   	nop
 86dad9f:	90                   	nop

```

```c
// std::locale::facet::_S_get_c_name @ 0x86dad90

/* std::locale::facet::_S_get_c_name() */

undefined2 * std::locale::facet::_S_get_c_name(void)

{
  return &_S_c_name;
}

```

---

## _S_initialize_once

```asm
// === 086daf10 std::locale::facet::_S_initialize_once  [0x086daf10-0x86daf3f] ===
 86daf10:	55                   	push   %ebp
 86daf11:	89 e5                	mov    %esp,%ebp
 86daf13:	83 ec 18             	sub    $0x18,%esp
 86daf16:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86daf1d:	00 
 86daf1e:	c7 44 24 04 1c e0 cf 	movl   $0x8cfe01c,0x4(%esp)
 86daf25:	08 
 86daf26:	c7 04 24 58 bd 48 09 	movl   $0x948bd58,(%esp)
 86daf2d:	e8 2e 7c 04 00       	call   8722b60 <_ZNSt6locale5facet18_S_create_c_localeERP15__locale_structPKcS2_>
 86daf32:	c9                   	leave
 86daf33:	c3                   	ret
 86daf34:	90                   	nop
 86daf35:	90                   	nop
 86daf36:	90                   	nop
 86daf37:	90                   	nop
 86daf38:	90                   	nop
 86daf39:	90                   	nop
 86daf3a:	90                   	nop
 86daf3b:	90                   	nop
 86daf3c:	90                   	nop
 86daf3d:	90                   	nop
 86daf3e:	90                   	nop
 86daf3f:	90                   	nop

```

```c
// std::locale::facet::_S_initialize_once @ 0x86daf10

/* std::locale::facet::_S_initialize_once() */

void std::locale::facet::_S_initialize_once(void)

{
  _S_create_c_locale((__locale_struct **)&_S_c_locale,"C",(__locale_struct *)0x0);
  return;
}

```

---

## ~facet

```asm
// === 086dada0 std::locale::facet::~facet  [0x086dada0-0x86dadaf] ===
 86dada0:	55                   	push   %ebp
 86dada1:	89 e5                	mov    %esp,%ebp
 86dada3:	8b 45 08             	mov    0x8(%ebp),%eax
 86dada6:	c7 00 28 e0 cf 08    	movl   $0x8cfe028,(%eax)
 86dadac:	5d                   	pop    %ebp
 86dadad:	c3                   	ret
 86dadae:	90                   	nop
 86dadaf:	90                   	nop

```

```c
// std::locale::facet::~facet @ 0x86dada0

/* std::locale::facet::~facet() */

void __thiscall std::locale::facet::~facet(facet *this)

{
  *(undefined ***)this = &PTR__facet_08cfe028;
  return;
}

```

---

## ~facet_086dae20

```asm
// === 086dae20 std::locale::facet::~facet  [0x086dae20-0x86dae7f] ===
 86dae20:	55                   	push   %ebp
 86dae21:	89 e5                	mov    %esp,%ebp
 86dae23:	83 ec 08             	sub    $0x8,%esp
 86dae26:	8b 45 08             	mov    0x8(%ebp),%eax
 86dae29:	c7 00 28 e0 cf 08    	movl   $0x8cfe028,(%eax)
 86dae2f:	c9                   	leave
 86dae30:	e9 bb 96 04 00       	jmp    87244f0 <_ZdlPv>
 86dae35:	90                   	nop
 86dae36:	90                   	nop
 86dae37:	90                   	nop
 86dae38:	90                   	nop
 86dae39:	90                   	nop
 86dae3a:	90                   	nop
 86dae3b:	90                   	nop
 86dae3c:	90                   	nop
 86dae3d:	90                   	nop
 86dae3e:	90                   	nop
 86dae3f:	90                   	nop

086dae40 <_ZN9__gnu_cxx24__concurrence_lock_errorD1Ev>:
 86dae40:	55                   	push   %ebp
 86dae41:	89 e5                	mov    %esp,%ebp
 86dae43:	83 ec 08             	sub    $0x8,%esp
 86dae46:	8b 45 08             	mov    0x8(%ebp),%eax
 86dae49:	c7 00 90 e0 cf 08    	movl   $0x8cfe090,(%eax)
 86dae4f:	c9                   	leave
 86dae50:	e9 2b a2 04 00       	jmp    8725080 <_ZNSt9exceptionD1Ev>
 86dae55:	90                   	nop
 86dae56:	90                   	nop
 86dae57:	90                   	nop
 86dae58:	90                   	nop
 86dae59:	90                   	nop
 86dae5a:	90                   	nop
 86dae5b:	90                   	nop
 86dae5c:	90                   	nop
 86dae5d:	90                   	nop
 86dae5e:	90                   	nop
 86dae5f:	90                   	nop

086dae60 <_ZN9__gnu_cxx26__concurrence_unlock_errorD1Ev>:
 86dae60:	55                   	push   %ebp
 86dae61:	89 e5                	mov    %esp,%ebp
 86dae63:	83 ec 08             	sub    $0x8,%esp
 86dae66:	8b 45 08             	mov    0x8(%ebp),%eax
 86dae69:	c7 00 f8 e0 cf 08    	movl   $0x8cfe0f8,(%eax)
 86dae6f:	c9                   	leave
 86dae70:	e9 0b a2 04 00       	jmp    8725080 <_ZNSt9exceptionD1Ev>
 86dae75:	90                   	nop
 86dae76:	90                   	nop
 86dae77:	90                   	nop
 86dae78:	90                   	nop
 86dae79:	90                   	nop
 86dae7a:	90                   	nop
 86dae7b:	90                   	nop
 86dae7c:	90                   	nop
 86dae7d:	90                   	nop
 86dae7e:	90                   	nop
 86dae7f:	90                   	nop

```

```c
// std::locale::facet::~facet @ 0x86dae20

/* std::locale::facet::~facet() */

void __thiscall std::locale::facet::~facet(facet *this)

{
  *(undefined ***)this = &PTR__facet_08cfe028;
  operator_delete(this);
  return;
}

```

