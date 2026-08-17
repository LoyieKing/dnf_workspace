# std__locale

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 12

---

## _S_initialize

```asm
// === 086dcdf0 std::locale::_S_initialize  [0x086dcdf0-0x86dce2f] ===
 86dcdf0:	55                   	push   %ebp
 86dcdf1:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 86dcdf6:	89 e5                	mov    %esp,%ebp
 86dcdf8:	83 ec 18             	sub    $0x18,%esp
 86dcdfb:	85 c0                	test   %eax,%eax
 86dcdfd:	74 14                	je     86dce13 <_ZNSt6locale13_S_initializeEv+0x23>
 86dcdff:	c7 44 24 04 c0 cd 6d 	movl   $0x86dcdc0,0x4(%esp)
 86dce06:	08 
 86dce07:	c7 04 24 54 bd 48 09 	movl   $0x948bd54,(%esp)
 86dce0e:	e8 ad 19 9a ff       	call   807e7c0 <pthread_once@plt>
 86dce13:	a1 4c bd 48 09       	mov    0x948bd4c,%eax
 86dce18:	85 c0                	test   %eax,%eax
 86dce1a:	74 04                	je     86dce20 <_ZNSt6locale13_S_initializeEv+0x30>
 86dce1c:	c9                   	leave
 86dce1d:	c3                   	ret
 86dce1e:	66 90                	xchg   %ax,%ax
 86dce20:	c9                   	leave
 86dce21:	e9 9a ff ff ff       	jmp    86dcdc0 <_ZNSt6locale18_S_initialize_onceEv>
 86dce26:	90                   	nop
 86dce27:	90                   	nop
 86dce28:	90                   	nop
 86dce29:	90                   	nop
 86dce2a:	90                   	nop
 86dce2b:	90                   	nop
 86dce2c:	90                   	nop
 86dce2d:	90                   	nop
 86dce2e:	90                   	nop
 86dce2f:	90                   	nop

```

```c
// std::locale::_S_initialize @ 0x86dcdf0

/* std::locale::_S_initialize() */

void std::locale::_S_initialize(void)

{
  pthread_once(&_S_once,_S_initialize_once);
  if (_S_classic == 0) {
    _S_initialize_once();
    return;
  }
  return;
}

```

---

## _S_initialize_once

```asm
// === 086dcdc0 std::locale::_S_initialize_once  [0x086dcdc0-0x86dcdef] ===
 86dcdc0:	55                   	push   %ebp
 86dcdc1:	89 e5                	mov    %esp,%ebp
 86dcdc3:	83 ec 18             	sub    $0x18,%esp
 86dcdc6:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86dcdcd:	00 
 86dcdce:	c7 04 24 1c cc 48 09 	movl   $0x948cc1c,(%esp)
 86dcdd5:	e8 16 f0 ff ff       	call   86dbdf0 <_ZNSt6locale5_ImplC1Ej>
 86dcdda:	c7 05 4c bd 48 09 1c 	movl   $0x948cc1c,0x948bd4c
 86dcde1:	cc 48 09 
 86dcde4:	c7 05 50 bd 48 09 1c 	movl   $0x948cc1c,0x948bd50
 86dcdeb:	cc 48 09 
 86dcdee:	c9                   	leave
 86dcdef:	c3                   	ret

```

```c
// std::locale::_S_initialize_once @ 0x86dcdc0

/* std::locale::_S_initialize_once() */

void std::locale::_S_initialize_once(void)

{
  _Impl::_Impl((_Impl *)::(anonymous_namespace)::c_locale_impl,2);
  _S_classic = ::(anonymous_namespace)::c_locale_impl;
  _S_global = ::(anonymous_namespace)::c_locale_impl;
  return;
}

```

---

## _S_normalize_category

```asm
// === 086dae80 std::locale::_S_normalize_category  [0x086dae80-0x86daf0f] ===
 86dae80:	55                   	push   %ebp
 86dae81:	31 c0                	xor    %eax,%eax
 86dae83:	89 e5                	mov    %esp,%ebp
 86dae85:	83 ec 18             	sub    $0x18,%esp
 86dae88:	8b 55 08             	mov    0x8(%ebp),%edx
 86dae8b:	85 d2                	test   %edx,%edx
 86dae8d:	74 29                	je     86daeb8 <_ZNSt6locale21_S_normalize_categoryEi+0x38>
 86dae8f:	f6 c2 3f             	test   $0x3f,%dl
 86dae92:	75 14                	jne    86daea8 <_ZNSt6locale21_S_normalize_categoryEi+0x28>
 86dae94:	83 fa 06             	cmp    $0x6,%edx
 86dae97:	76 27                	jbe    86daec0 <_ZNSt6locale21_S_normalize_categoryEi+0x40>
 86dae99:	c7 04 24 8c df cf 08 	movl   $0x8cfdf8c,(%esp)
 86daea0:	e8 fb eb ff ff       	call   86d9aa0 <_ZSt21__throw_runtime_errorPKc>
 86daea5:	8d 76 00             	lea    0x0(%esi),%esi
 86daea8:	f7 c2 c0 ff ff ff    	test   $0xffffffc0,%edx
 86daeae:	75 e4                	jne    86dae94 <_ZNSt6locale21_S_normalize_categoryEi+0x14>
 86daeb0:	89 d0                	mov    %edx,%eax
 86daeb2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 86daeb8:	c9                   	leave
 86daeb9:	c3                   	ret
 86daeba:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 86daec0:	ff 24 95 e0 df cf 08 	jmp    *0x8cfdfe0(,%edx,4)
 86daec7:	90                   	nop
 86daec8:	b8 01 00 00 00       	mov    $0x1,%eax
 86daecd:	c9                   	leave
 86daece:	66 90                	xchg   %ax,%ax
 86daed0:	c3                   	ret
 86daed1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 86daed8:	b8 04 00 00 00       	mov    $0x4,%eax
 86daedd:	c9                   	leave
 86daede:	c3                   	ret
 86daedf:	90                   	nop
 86daee0:	b8 08 00 00 00       	mov    $0x8,%eax
 86daee5:	c9                   	leave
 86daee6:	c3                   	ret
 86daee7:	90                   	nop
 86daee8:	b8 3f 00 00 00       	mov    $0x3f,%eax
 86daeed:	c9                   	leave
 86daeee:	c3                   	ret
 86daeef:	90                   	nop
 86daef0:	b8 02 00 00 00       	mov    $0x2,%eax
 86daef5:	c9                   	leave
 86daef6:	c3                   	ret
 86daef7:	90                   	nop
 86daef8:	b8 20 00 00 00       	mov    $0x20,%eax
 86daefd:	c9                   	leave
 86daefe:	c3                   	ret
 86daeff:	90                   	nop
 86daf00:	b8 10 00 00 00       	mov    $0x10,%eax
 86daf05:	c9                   	leave
 86daf06:	c3                   	ret
 86daf07:	90                   	nop
 86daf08:	90                   	nop
 86daf09:	90                   	nop
 86daf0a:	90                   	nop
 86daf0b:	90                   	nop
 86daf0c:	90                   	nop
 86daf0d:	90                   	nop
 86daf0e:	90                   	nop
 86daf0f:	90                   	nop

```

```c
// std::locale::_S_normalize_category @ 0x86dae80

/* std::locale::_S_normalize_category(int) */

int std::locale::_S_normalize_category(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((param_1 != 0) &&
     (((param_1 & 0x3fU) == 0 || (iVar1 = param_1, (param_1 & 0xffffffc0U) != 0)))) {
    switch(param_1) {
    case 0:
      return 1;
    case 1:
      return 2;
    case 2:
      return 8;
    case 3:
      return 4;
    case 4:
      return 0x10;
    case 5:
      return 0x20;
    case 6:
      return 0x3f;
    default:
                    /* WARNING: Subroutine does not return */
      __throw_runtime_error("locale::_S_normalize_category category not found");
    }
  }
  return iVar1;
}

```

---

## classic

```asm
// === 086dce30 std::locale::classic  [0x086dce30-0x86dce5f] ===
 86dce30:	55                   	push   %ebp
 86dce31:	89 e5                	mov    %esp,%ebp
 86dce33:	83 ec 18             	sub    $0x18,%esp
 86dce36:	e8 b5 ff ff ff       	call   86dcdf0 <_ZNSt6locale13_S_initializeEv>
 86dce3b:	a1 4c bd 48 09       	mov    0x948bd4c,%eax
 86dce40:	c7 04 24 30 cc 48 09 	movl   $0x948cc30,(%esp)
 86dce47:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dce4b:	e8 30 df ff ff       	call   86dad80 <_ZNSt6localeC1EPNS_5_ImplE>
 86dce50:	b8 30 cc 48 09       	mov    $0x948cc30,%eax
 86dce55:	c9                   	leave
 86dce56:	c3                   	ret
 86dce57:	90                   	nop
 86dce58:	90                   	nop
 86dce59:	90                   	nop
 86dce5a:	90                   	nop
 86dce5b:	90                   	nop
 86dce5c:	90                   	nop
 86dce5d:	90                   	nop
 86dce5e:	90                   	nop
 86dce5f:	90                   	nop

```

```c
// std::locale::classic @ 0x86dce30

/* std::locale::classic() */

undefined4 * std::locale::classic(void)

{
  _S_initialize();
  locale((locale *)&::(anonymous_namespace)::c_locale,_S_classic);
  return &::(anonymous_namespace)::c_locale;
}

```

---

## global

```asm
// === 086dce60 std::locale::global  [0x086dce60-0x86dd04f] ===
 86dce60:	55                   	push   %ebp
 86dce61:	89 e5                	mov    %esp,%ebp
 86dce63:	57                   	push   %edi
 86dce64:	56                   	push   %esi
 86dce65:	53                   	push   %ebx
 86dce66:	bb 60 e5 07 08       	mov    $0x807e560,%ebx
 86dce6b:	83 ec 3c             	sub    $0x3c,%esp
 86dce6e:	e8 7d ff ff ff       	call   86dcdf0 <_ZNSt6locale13_S_initializeEv>
 86dce73:	e8 c8 ee ff ff       	call   86dbd40 <_ZN12_GLOBAL__N_116get_locale_mutexEv>
 86dce78:	85 db                	test   %ebx,%ebx
 86dce7a:	89 c6                	mov    %eax,%esi
 86dce7c:	0f 84 d5 00 00 00    	je     86dcf57 <_ZNSt6locale6globalERKS_+0xf7>
 86dce82:	89 04 24             	mov    %eax,(%esp)
 86dce85:	e8 66 13 9a ff       	call   807e1f0 <pthread_mutex_lock@plt>
 86dce8a:	85 c0                	test   %eax,%eax
 86dce8c:	0f 85 9b 00 00 00    	jne    86dcf2d <_ZNSt6locale6globalERKS_+0xcd>
 86dce92:	a1 50 bd 48 09       	mov    0x948bd50,%eax
 86dce97:	8b 55 0c             	mov    0xc(%ebp),%edx
 86dce9a:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86dce9d:	8b 02                	mov    (%edx),%eax
 86dce9f:	f0 83 00 01          	lock addl $0x1,(%eax)
 86dcea3:	8b 02                	mov    (%edx),%eax
 86dcea5:	a3 50 bd 48 09       	mov    %eax,0x948bd50
 86dceaa:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dcead:	8d 7d e0             	lea    -0x20(%ebp),%edi
 86dceb0:	89 3c 24             	mov    %edi,(%esp)
 86dceb3:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dceb7:	e8 14 e1 ff ff       	call   86dafd0 <_ZNKSt6locale4nameEv>
 86dcebc:	83 ec 04             	sub    $0x4,%esp
 86dcebf:	c7 44 24 04 4f 32 d0 	movl   $0x8d0324f,0x4(%esp)
 86dcec6:	08 
 86dcec7:	89 3c 24             	mov    %edi,(%esp)
 86dceca:	e8 61 9b 02 00       	call   8706a30 <_ZNKSs7compareEPKc>
 86dcecf:	85 c0                	test   %eax,%eax
 86dced1:	75 45                	jne    86dcf18 <_ZNSt6locale6globalERKS_+0xb8>
 86dced3:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86dced6:	83 e8 0c             	sub    $0xc,%eax
 86dced9:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 86dcede:	0f 85 b3 00 00 00    	jne    86dcf97 <_ZNSt6locale6globalERKS_+0x137>
 86dcee4:	85 db                	test   %ebx,%ebx
 86dcee6:	74 0c                	je     86dcef4 <_ZNSt6locale6globalERKS_+0x94>
 86dcee8:	89 34 24             	mov    %esi,(%esp)
 86dceeb:	e8 f0 0f 9a ff       	call   807dee0 <pthread_mutex_unlock@plt>
 86dcef0:	85 c0                	test   %eax,%eax
 86dcef2:	75 79                	jne    86dcf6d <_ZNSt6locale6globalERKS_+0x10d>
 86dcef4:	8b 45 08             	mov    0x8(%ebp),%eax
 86dcef7:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 86dcefa:	89 04 24             	mov    %eax,(%esp)
 86dcefd:	89 54 24 04          	mov    %edx,0x4(%esp)
 86dcf01:	e8 7a de ff ff       	call   86dad80 <_ZNSt6localeC1EPNS_5_ImplE>
 86dcf06:	8b 45 08             	mov    0x8(%ebp),%eax
 86dcf09:	8d 65 f4             	lea    -0xc(%ebp),%esp
 86dcf0c:	5b                   	pop    %ebx
 86dcf0d:	5e                   	pop    %esi
 86dcf0e:	5f                   	pop    %edi
 86dcf0f:	5d                   	pop    %ebp
 86dcf10:	c2 04 00             	ret    $0x4
 86dcf13:	90                   	nop
 86dcf14:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86dcf18:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86dcf1b:	c7 04 24 06 00 00 00 	movl   $0x6,(%esp)
 86dcf22:	89 44 24 04          	mov    %eax,0x4(%esp)
 86dcf26:	e8 d5 19 9a ff       	call   807e900 <setlocale@plt>
 86dcf2b:	eb a6                	jmp    86dced3 <_ZNSt6locale6globalERKS_+0x73>
 86dcf2d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86dcf34:	e8 c7 88 04 00       	call   8725800 <__cxa_allocate_exception>
 86dcf39:	c7 00 90 e0 cf 08    	movl   $0x8cfe090,(%eax)
 86dcf3f:	c7 44 24 08 40 ae 6d 	movl   $0x86dae40,0x8(%esp)
 86dcf46:	08 
 86dcf47:	c7 44 24 04 4c e0 cf 	movl   $0x8cfe04c,0x4(%esp)
 86dcf4e:	08 
 86dcf4f:	89 04 24             	mov    %eax,(%esp)
 86dcf52:	e8 f9 7c 04 00       	call   8724c50 <__cxa_throw>
 86dcf57:	8b 15 50 bd 48 09    	mov    0x948bd50,%edx
 86dcf5d:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 86dcf60:	8b 55 0c             	mov    0xc(%ebp),%edx
 86dcf63:	8b 02                	mov    (%edx),%eax
 86dcf65:	83 00 01             	addl   $0x1,(%eax)
 86dcf68:	e9 38 ff ff ff       	jmp    86dcea5 <_ZNSt6locale6globalERKS_+0x45>
 86dcf6d:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86dcf74:	e8 87 88 04 00       	call   8725800 <__cxa_allocate_exception>
 86dcf79:	c7 00 f8 e0 cf 08    	movl   $0x8cfe0f8,(%eax)
 86dcf7f:	c7 44 24 08 60 ae 6d 	movl   $0x86dae60,0x8(%esp)
 86dcf86:	08 
 86dcf87:	c7 44 24 04 9c e0 cf 	movl   $0x8cfe09c,0x4(%esp)
 86dcf8e:	08 
 86dcf8f:	89 04 24             	mov    %eax,(%esp)
 86dcf92:	e8 b9 7c 04 00       	call   8724c50 <__cxa_throw>
 86dcf97:	85 db                	test   %ebx,%ebx
 86dcf99:	74 33                	je     86dcfce <_ZNSt6locale6globalERKS_+0x16e>
 86dcf9b:	83 ca ff             	or     $0xffffffff,%edx
 86dcf9e:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 86dcfa3:	85 d2                	test   %edx,%edx
 86dcfa5:	0f 8f 39 ff ff ff    	jg     86dcee4 <_ZNSt6locale6globalERKS_+0x84>
 86dcfab:	8d 55 e7             	lea    -0x19(%ebp),%edx
 86dcfae:	89 54 24 04          	mov    %edx,0x4(%esp)
 86dcfb2:	89 04 24             	mov    %eax,(%esp)
 86dcfb5:	e8 66 99 02 00       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 86dcfba:	e9 25 ff ff ff       	jmp    86dcee4 <_ZNSt6locale6globalERKS_+0x84>
 86dcfbf:	83 fa ff             	cmp    $0xffffffff,%edx
 86dcfc2:	89 c1                	mov    %eax,%ecx
 86dcfc4:	74 13                	je     86dcfd9 <_ZNSt6locale6globalERKS_+0x179>
 86dcfc6:	89 0c 24             	mov    %ecx,(%esp)
 86dcfc9:	e8 82 67 40 00       	call   8ae3750 <_Unwind_Resume>
 86dcfce:	8b 50 08             	mov    0x8(%eax),%edx
 86dcfd1:	8d 4a ff             	lea    -0x1(%edx),%ecx
 86dcfd4:	89 48 08             	mov    %ecx,0x8(%eax)
 86dcfd7:	eb ca                	jmp    86dcfa3 <_ZNSt6locale6globalERKS_+0x143>
 86dcfd9:	89 04 24             	mov    %eax,(%esp)
 86dcfdc:	e8 0f 6e 04 00       	call   8723df0 <__cxa_call_unexpected>
 86dcfe1:	89 3c 24             	mov    %edi,(%esp)
 86dcfe4:	89 45 d0             	mov    %eax,-0x30(%ebp)
 86dcfe7:	e8 f4 ab 02 00       	call   8707be0 <_ZNSsD1Ev>
 86dcfec:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 86dcfef:	85 db                	test   %ebx,%ebx
 86dcff1:	74 d3                	je     86dcfc6 <_ZNSt6locale6globalERKS_+0x166>
 86dcff3:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 86dcff6:	89 34 24             	mov    %esi,(%esp)
 86dcff9:	e8 e2 0e 9a ff       	call   807dee0 <pthread_mutex_unlock@plt>
 86dcffe:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 86dd001:	85 c0                	test   %eax,%eax
 86dd003:	74 c1                	je     86dcfc6 <_ZNSt6locale6globalERKS_+0x166>
 86dd005:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86dd00c:	e8 ef 87 04 00       	call   8725800 <__cxa_allocate_exception>
 86dd011:	c7 00 f8 e0 cf 08    	movl   $0x8cfe0f8,(%eax)
 86dd017:	c7 44 24 08 60 ae 6d 	movl   $0x86dae60,0x8(%esp)
 86dd01e:	08 
 86dd01f:	c7 44 24 04 9c e0 cf 	movl   $0x8cfe09c,0x4(%esp)
 86dd026:	08 
 86dd027:	89 04 24             	mov    %eax,(%esp)
 86dd02a:	e8 21 7c 04 00       	call   8724c50 <__cxa_throw>
 86dd02f:	89 c1                	mov    %eax,%ecx
 86dd031:	eb bc                	jmp    86dcfef <_ZNSt6locale6globalERKS_+0x18f>
 86dd033:	83 fa ff             	cmp    $0xffffffff,%edx
 86dd036:	89 c1                	mov    %eax,%ecx
 86dd038:	75 8c                	jne    86dcfc6 <_ZNSt6locale6globalERKS_+0x166>
 86dd03a:	89 04 24             	mov    %eax,(%esp)
 86dd03d:	e8 ae 6d 04 00       	call   8723df0 <__cxa_call_unexpected>
 86dd042:	90                   	nop
 86dd043:	90                   	nop
 86dd044:	90                   	nop
 86dd045:	90                   	nop
 86dd046:	90                   	nop
 86dd047:	90                   	nop
 86dd048:	90                   	nop
 86dd049:	90                   	nop
 86dd04a:	90                   	nop
 86dd04b:	90                   	nop
 86dd04c:	90                   	nop
 86dd04d:	90                   	nop
 86dd04e:	90                   	nop
 86dd04f:	90                   	nop

```

```c
// std::locale::global @ 0x86dce60

/* WARNING: Removing unreachable block (ram,0x086dcf57) */
/* WARNING: Removing unreachable block (ram,0x086dcfce) */
/* std::locale::global(std::locale const&) */

locale * __thiscall std::locale::global(locale *this,locale *param_1)

{
  int *piVar1;
  _Impl *p_Var2;
  pthread_mutex_t *__mutex;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  char *local_24;
  char local_1d [13];
  
  _S_initialize();
  __mutex = (pthread_mutex_t *)::(anonymous_namespace)::get_locale_mutex();
  iVar3 = pthread_mutex_lock(__mutex);
  p_Var2 = _S_global;
  if (iVar3 != 0) {
    puVar4 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar4 = &PTR____concurrence_lock_error_08cfe090;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(puVar4,&__gnu_cxx::__concurrence_lock_error::typeinfo,
                __gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error);
  }
  LOCK();
  param_1->_M_impl->_M_refcount = param_1->_M_impl->_M_refcount + 1;
  UNLOCK();
  _S_global = param_1->_M_impl;
                    /* try { // try from 086dceb7 to 086dcebb has its CatchHandler @ 086dd02f */
  name();
  pcVar5 = "*";
                    /* try { // try from 086dceca to 086dcece has its CatchHandler @ 086dcfe1 */
  iVar3 = string::compare((string *)&local_24,"*");
  if (iVar3 != 0) {
    pcVar5 = local_24;
    setlocale(6,local_24);
  }
  if ((allocator *)(local_24 + -0xc) != (allocator *)&string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)(local_24 + -4);
    iVar3 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar3 < 1) {
      pcVar5 = local_1d;
      string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
    }
  }
  iVar3 = pthread_mutex_unlock(__mutex);
  if (iVar3 == 0) {
    locale(this,p_Var2);
    return this;
  }
  puVar4 = (undefined4 *)__cxa_allocate_exception(4,pcVar5);
  *puVar4 = &PTR____concurrence_unlock_error_08cfe0f8;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 086dcf92 to 086dcf96 has its CatchHandler @ 086dcfbf */
  __cxa_throw(puVar4,&__gnu_cxx::__concurrence_unlock_error::typeinfo,
              __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
}

```

---

## locale

```asm
// === 086dad80 std::locale::locale  [0x086dad80-0x86dad8f] ===
 86dad80:	55                   	push   %ebp
 86dad81:	89 e5                	mov    %esp,%ebp
 86dad83:	8b 55 0c             	mov    0xc(%ebp),%edx
 86dad86:	8b 45 08             	mov    0x8(%ebp),%eax
 86dad89:	89 10                	mov    %edx,(%eax)
 86dad8b:	5d                   	pop    %ebp
 86dad8c:	c3                   	ret
 86dad8d:	90                   	nop
 86dad8e:	90                   	nop
 86dad8f:	90                   	nop

```

```c
// std::locale::locale @ 0x86dad80

/* std::locale::locale(std::locale::_Impl*) */

void __thiscall std::locale::locale(locale *this,_Impl *param_1)

{
  this->_M_impl = param_1;
  return;
}

```

---

## locale_086dadf0

```asm
// === 086dadf0 std::locale::locale  [0x086dadf0-0x86dae1f] ===
 86dadf0:	55                   	push   %ebp
 86dadf1:	89 e5                	mov    %esp,%ebp
 86dadf3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86dadf6:	8b 55 08             	mov    0x8(%ebp),%edx
 86dadf9:	8b 00                	mov    (%eax),%eax
 86dadfb:	89 02                	mov    %eax,(%edx)
 86dadfd:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 86dae02:	85 d2                	test   %edx,%edx
 86dae04:	74 06                	je     86dae0c <_ZNSt6localeC1ERKS_+0x1c>
 86dae06:	f0 83 00 01          	lock addl $0x1,(%eax)
 86dae0a:	5d                   	pop    %ebp
 86dae0b:	c3                   	ret
 86dae0c:	83 00 01             	addl   $0x1,(%eax)
 86dae0f:	5d                   	pop    %ebp
 86dae10:	c3                   	ret
 86dae11:	90                   	nop
 86dae12:	90                   	nop
 86dae13:	90                   	nop
 86dae14:	90                   	nop
 86dae15:	90                   	nop
 86dae16:	90                   	nop
 86dae17:	90                   	nop
 86dae18:	90                   	nop
 86dae19:	90                   	nop
 86dae1a:	90                   	nop
 86dae1b:	90                   	nop
 86dae1c:	90                   	nop
 86dae1d:	90                   	nop
 86dae1e:	90                   	nop
 86dae1f:	90                   	nop

```

```c
// std::locale::locale @ 0x86dadf0

/* WARNING: Removing unreachable block (ram,0x086dae0c) */
/* std::locale::locale(std::locale const&) */

void __thiscall std::locale::locale(locale *this,locale *param_1)

{
  _Impl *p_Var1;
  
  p_Var1 = param_1->_M_impl;
  this->_M_impl = p_Var1;
  LOCK();
  p_Var1->_M_refcount = p_Var1->_M_refcount + 1;
  UNLOCK();
  return;
}

```

---

## locale_086dd050

```asm
// === 086dd050 std::locale::locale  [0x086dd050-0x86dd15f] ===
 86dd050:	55                   	push   %ebp
 86dd051:	89 e5                	mov    %esp,%ebp
 86dd053:	56                   	push   %esi
 86dd054:	53                   	push   %ebx
 86dd055:	83 ec 10             	sub    $0x10,%esp
 86dd058:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dd05b:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 86dd061:	e8 8a fd ff ff       	call   86dcdf0 <_ZNSt6locale13_S_initializeEv>
 86dd066:	a1 50 bd 48 09       	mov    0x948bd50,%eax
 86dd06b:	3b 05 4c bd 48 09    	cmp    0x948bd4c,%eax
 86dd071:	89 03                	mov    %eax,(%ebx)
 86dd073:	74 43                	je     86dd0b8 <_ZNSt6localeC1Ev+0x68>
 86dd075:	e8 c6 ec ff ff       	call   86dbd40 <_ZN12_GLOBAL__N_116get_locale_mutexEv>
 86dd07a:	89 c6                	mov    %eax,%esi
 86dd07c:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 86dd081:	85 c0                	test   %eax,%eax
 86dd083:	0f 84 97 00 00 00    	je     86dd120 <_ZNSt6localeC1Ev+0xd0>
 86dd089:	89 34 24             	mov    %esi,(%esp)
 86dd08c:	e8 5f 11 9a ff       	call   807e1f0 <pthread_mutex_lock@plt>
 86dd091:	85 c0                	test   %eax,%eax
 86dd093:	75 61                	jne    86dd0f6 <_ZNSt6localeC1Ev+0xa6>
 86dd095:	a1 50 bd 48 09       	mov    0x948bd50,%eax
 86dd09a:	f0 83 00 01          	lock addl $0x1,(%eax)
 86dd09e:	a1 50 bd 48 09       	mov    0x948bd50,%eax
 86dd0a3:	89 03                	mov    %eax,(%ebx)
 86dd0a5:	89 34 24             	mov    %esi,(%esp)
 86dd0a8:	e8 33 0e 9a ff       	call   807dee0 <pthread_mutex_unlock@plt>
 86dd0ad:	85 c0                	test   %eax,%eax
 86dd0af:	75 1b                	jne    86dd0cc <_ZNSt6localeC1Ev+0x7c>
 86dd0b1:	83 c4 10             	add    $0x10,%esp
 86dd0b4:	5b                   	pop    %ebx
 86dd0b5:	5e                   	pop    %esi
 86dd0b6:	5d                   	pop    %ebp
 86dd0b7:	c3                   	ret
 86dd0b8:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 86dd0bd:	85 d2                	test   %edx,%edx
 86dd0bf:	74 6b                	je     86dd12c <_ZNSt6localeC1Ev+0xdc>
 86dd0c1:	f0 83 00 01          	lock addl $0x1,(%eax)
 86dd0c5:	83 c4 10             	add    $0x10,%esp
 86dd0c8:	5b                   	pop    %ebx
 86dd0c9:	5e                   	pop    %esi
 86dd0ca:	5d                   	pop    %ebp
 86dd0cb:	c3                   	ret
 86dd0cc:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86dd0d3:	e8 28 87 04 00       	call   8725800 <__cxa_allocate_exception>
 86dd0d8:	c7 00 f8 e0 cf 08    	movl   $0x8cfe0f8,(%eax)
 86dd0de:	c7 44 24 08 60 ae 6d 	movl   $0x86dae60,0x8(%esp)
 86dd0e5:	08 
 86dd0e6:	c7 44 24 04 9c e0 cf 	movl   $0x8cfe09c,0x4(%esp)
 86dd0ed:	08 
 86dd0ee:	89 04 24             	mov    %eax,(%esp)
 86dd0f1:	e8 5a 7b 04 00       	call   8724c50 <__cxa_throw>
 86dd0f6:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 86dd0fd:	e8 fe 86 04 00       	call   8725800 <__cxa_allocate_exception>
 86dd102:	c7 00 90 e0 cf 08    	movl   $0x8cfe090,(%eax)
 86dd108:	c7 44 24 08 40 ae 6d 	movl   $0x86dae40,0x8(%esp)
 86dd10f:	08 
 86dd110:	c7 44 24 04 4c e0 cf 	movl   $0x8cfe04c,0x4(%esp)
 86dd117:	08 
 86dd118:	89 04 24             	mov    %eax,(%esp)
 86dd11b:	e8 30 7b 04 00       	call   8724c50 <__cxa_throw>
 86dd120:	a1 50 bd 48 09       	mov    0x948bd50,%eax
 86dd125:	83 00 01             	addl   $0x1,(%eax)
 86dd128:	89 03                	mov    %eax,(%ebx)
 86dd12a:	eb 85                	jmp    86dd0b1 <_ZNSt6localeC1Ev+0x61>
 86dd12c:	83 00 01             	addl   $0x1,(%eax)
 86dd12f:	eb 80                	jmp    86dd0b1 <_ZNSt6localeC1Ev+0x61>
 86dd131:	83 fa ff             	cmp    $0xffffffff,%edx
 86dd134:	74 15                	je     86dd14b <_ZNSt6localeC1Ev+0xfb>
 86dd136:	89 04 24             	mov    %eax,(%esp)
 86dd139:	e8 12 66 40 00       	call   8ae3750 <_Unwind_Resume>
 86dd13e:	83 fa ff             	cmp    $0xffffffff,%edx
 86dd141:	75 f3                	jne    86dd136 <_ZNSt6localeC1Ev+0xe6>
 86dd143:	89 04 24             	mov    %eax,(%esp)
 86dd146:	e8 a5 6c 04 00       	call   8723df0 <__cxa_call_unexpected>
 86dd14b:	89 04 24             	mov    %eax,(%esp)
 86dd14e:	e8 9d 6c 04 00       	call   8723df0 <__cxa_call_unexpected>
 86dd153:	90                   	nop
 86dd154:	90                   	nop
 86dd155:	90                   	nop
 86dd156:	90                   	nop
 86dd157:	90                   	nop
 86dd158:	90                   	nop
 86dd159:	90                   	nop
 86dd15a:	90                   	nop
 86dd15b:	90                   	nop
 86dd15c:	90                   	nop
 86dd15d:	90                   	nop
 86dd15e:	90                   	nop
 86dd15f:	90                   	nop

```

```c
// std::locale::locale @ 0x86dd050

/* WARNING: Removing unreachable block (ram,0x086dd120) */
/* WARNING: Removing unreachable block (ram,0x086dd12c) */
/* std::locale::locale() */

void __thiscall std::locale::locale(locale *this)

{
  _Impl *p_Var1;
  pthread_mutex_t *__mutex;
  int iVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  this->_M_impl = (_Impl *)0x0;
                    /* try { // try from 086dd061 to 086dd065 has its CatchHandler @ 086dd13e */
  _S_initialize();
  p_Var1 = _S_global;
  bVar4 = _S_global == _S_classic;
  this->_M_impl = _S_global;
  if (bVar4) {
    LOCK();
    p_Var1->_M_refcount = p_Var1->_M_refcount + 1;
    UNLOCK();
    return;
  }
  __mutex = (pthread_mutex_t *)::(anonymous_namespace)::get_locale_mutex();
  iVar2 = pthread_mutex_lock(__mutex);
  if (iVar2 == 0) {
    LOCK();
    _S_global->_M_refcount = _S_global->_M_refcount + 1;
    UNLOCK();
    this->_M_impl = _S_global;
    iVar2 = pthread_mutex_unlock(__mutex);
    if (iVar2 == 0) {
      return;
    }
    puVar3 = (undefined4 *)__cxa_allocate_exception(4);
    *puVar3 = &PTR____concurrence_unlock_error_08cfe0f8;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 086dd0f1 to 086dd0f5 has its CatchHandler @ 086dd131 */
    __cxa_throw(puVar3,&__gnu_cxx::__concurrence_unlock_error::typeinfo,
                __gnu_cxx::__concurrence_unlock_error::~__concurrence_unlock_error);
  }
  puVar3 = (undefined4 *)__cxa_allocate_exception(4);
  *puVar3 = &PTR____concurrence_lock_error_08cfe090;
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 086dd11b to 086dd11f has its CatchHandler @ 086dd13e */
  __cxa_throw(puVar3,&__gnu_cxx::__concurrence_lock_error::typeinfo,
              __gnu_cxx::__concurrence_lock_error::~__concurrence_lock_error);
}

```

---

## name

```asm
// === 086dafd0 std::locale::name  [0x086dafd0-0x86db25f] ===
 86dafd0:	55                   	push   %ebp
 86dafd1:	89 e5                	mov    %esp,%ebp
 86dafd3:	57                   	push   %edi
 86dafd4:	56                   	push   %esi
 86dafd5:	53                   	push   %ebx
 86dafd6:	83 ec 3c             	sub    $0x3c,%esp
 86dafd9:	8b 55 0c             	mov    0xc(%ebp),%edx
 86dafdc:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86dafdf:	8b 02                	mov    (%edx),%eax
 86dafe1:	c7 03 fc cc 48 09    	movl   $0x948ccfc,(%ebx)
 86dafe7:	8b 50 10             	mov    0x10(%eax),%edx
 86dafea:	8b 0a                	mov    (%edx),%ecx
 86dafec:	85 c9                	test   %ecx,%ecx
 86dafee:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 86daff1:	0f 84 f9 01 00 00    	je     86db1f0 <_ZNKSt6locale4nameEv+0x220>
 86daff7:	8b 7a 04             	mov    0x4(%edx),%edi
 86daffa:	31 f6                	xor    %esi,%esi
 86daffc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86dafff:	85 ff                	test   %edi,%edi
 86db001:	0f 84 ac 01 00 00    	je     86db1b3 <_ZNKSt6locale4nameEv+0x1e3>
 86db007:	89 5d e0             	mov    %ebx,-0x20(%ebp)
 86db00a:	89 d3                	mov    %edx,%ebx
 86db00c:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86db010:	83 c6 01             	add    $0x1,%esi
 86db013:	89 04 24             	mov    %eax,(%esp)
 86db016:	e8 c5 34 9a ff       	call   807e4e0 <strcmp@plt>
 86db01b:	85 c0                	test   %eax,%eax
 86db01d:	0f 84 7d 01 00 00    	je     86db1a0 <_ZNKSt6locale4nameEv+0x1d0>
 86db023:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 86db026:	c7 44 24 04 80 00 00 	movl   $0x80,0x4(%esp)
 86db02d:	00 
 86db02e:	89 1c 24             	mov    %ebx,(%esp)
 86db031:	e8 da cc 02 00       	call   8707d10 <_ZNSs7reserveEj>
 86db036:	8b 0d a4 17 d0 08    	mov    0x8d017a4,%ecx
 86db03c:	8b 31                	mov    (%ecx),%esi
 86db03e:	89 34 24             	mov    %esi,(%esp)
 86db041:	e8 6a 33 9a ff       	call   807e3b0 <strlen@plt>
 86db046:	89 74 24 04          	mov    %esi,0x4(%esp)
 86db04a:	89 1c 24             	mov    %ebx,(%esp)
 86db04d:	89 44 24 08          	mov    %eax,0x8(%esp)
 86db051:	e8 ba ce 02 00       	call   8707f10 <_ZNSs6appendEPKcj>
 86db056:	8b 03                	mov    (%ebx),%eax
 86db058:	8b 50 f4             	mov    -0xc(%eax),%edx
 86db05b:	8d 48 f4             	lea    -0xc(%eax),%ecx
 86db05e:	8d 72 01             	lea    0x1(%edx),%esi
 86db061:	3b 71 04             	cmp    0x4(%ecx),%esi
 86db064:	0f 86 76 01 00 00    	jbe    86db1e0 <_ZNKSt6locale4nameEv+0x210>
 86db06a:	89 74 24 04          	mov    %esi,0x4(%esp)
 86db06e:	89 1c 24             	mov    %ebx,(%esp)
 86db071:	e8 9a cc 02 00       	call   8707d10 <_ZNSs7reserveEj>
 86db076:	8b 03                	mov    (%ebx),%eax
 86db078:	8b 50 f4             	mov    -0xc(%eax),%edx
 86db07b:	c6 04 10 3d          	movb   $0x3d,(%eax,%edx,1)
 86db07f:	8b 13                	mov    (%ebx),%edx
 86db081:	8d 42 f4             	lea    -0xc(%edx),%eax
 86db084:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 86db089:	0f 85 b2 01 00 00    	jne    86db241 <_ZNKSt6locale4nameEv+0x271>
 86db08f:	8b 55 0c             	mov    0xc(%ebp),%edx
 86db092:	8b 02                	mov    (%edx),%eax
 86db094:	8b 40 10             	mov    0x10(%eax),%eax
 86db097:	8b 30                	mov    (%eax),%esi
 86db099:	89 34 24             	mov    %esi,(%esp)
 86db09c:	e8 0f 33 9a ff       	call   807e3b0 <strlen@plt>
 86db0a1:	89 74 24 04          	mov    %esi,0x4(%esp)
 86db0a5:	89 1c 24             	mov    %ebx,(%esp)
 86db0a8:	89 44 24 08          	mov    %eax,0x8(%esp)
 86db0ac:	e8 5f ce 02 00       	call   8707f10 <_ZNSs6appendEPKcj>
 86db0b1:	be 04 00 00 00       	mov    $0x4,%esi
 86db0b6:	e9 92 00 00 00       	jmp    86db14d <_ZNKSt6locale4nameEv+0x17d>
 86db0bb:	90                   	nop
 86db0bc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 86db0c0:	a1 a4 17 d0 08       	mov    0x8d017a4,%eax
 86db0c5:	8b 3c 30             	mov    (%eax,%esi,1),%edi
 86db0c8:	89 3c 24             	mov    %edi,(%esp)
 86db0cb:	e8 e0 32 9a ff       	call   807e3b0 <strlen@plt>
 86db0d0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86db0d4:	89 1c 24             	mov    %ebx,(%esp)
 86db0d7:	89 44 24 08          	mov    %eax,0x8(%esp)
 86db0db:	e8 30 ce 02 00       	call   8707f10 <_ZNSs6appendEPKcj>
 86db0e0:	8b 03                	mov    (%ebx),%eax
 86db0e2:	8b 50 f4             	mov    -0xc(%eax),%edx
 86db0e5:	8d 48 f4             	lea    -0xc(%eax),%ecx
 86db0e8:	8d 7a 01             	lea    0x1(%edx),%edi
 86db0eb:	3b 79 04             	cmp    0x4(%ecx),%edi
 86db0ee:	77 07                	ja     86db0f7 <_ZNKSt6locale4nameEv+0x127>
 86db0f0:	8b 49 08             	mov    0x8(%ecx),%ecx
 86db0f3:	85 c9                	test   %ecx,%ecx
 86db0f5:	7e 11                	jle    86db108 <_ZNKSt6locale4nameEv+0x138>
 86db0f7:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86db0fb:	89 1c 24             	mov    %ebx,(%esp)
 86db0fe:	e8 0d cc 02 00       	call   8707d10 <_ZNSs7reserveEj>
 86db103:	8b 03                	mov    (%ebx),%eax
 86db105:	8b 50 f4             	mov    -0xc(%eax),%edx
 86db108:	c6 04 10 3d          	movb   $0x3d,(%eax,%edx,1)
 86db10c:	8b 13                	mov    (%ebx),%edx
 86db10e:	b9 f0 cc 48 09       	mov    $0x948ccf0,%ecx
 86db113:	8d 42 f4             	lea    -0xc(%edx),%eax
 86db116:	39 c1                	cmp    %eax,%ecx
 86db118:	0f 85 fd 00 00 00    	jne    86db21b <_ZNKSt6locale4nameEv+0x24b>
 86db11e:	8b 55 0c             	mov    0xc(%ebp),%edx
 86db121:	8b 02                	mov    (%edx),%eax
 86db123:	8b 40 10             	mov    0x10(%eax),%eax
 86db126:	8b 3c 30             	mov    (%eax,%esi,1),%edi
 86db129:	89 3c 24             	mov    %edi,(%esp)
 86db12c:	e8 7f 32 9a ff       	call   807e3b0 <strlen@plt>
 86db131:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86db135:	89 1c 24             	mov    %ebx,(%esp)
 86db138:	89 44 24 08          	mov    %eax,0x8(%esp)
 86db13c:	e8 cf cd 02 00       	call   8707f10 <_ZNSs6appendEPKcj>
 86db141:	83 c6 04             	add    $0x4,%esi
 86db144:	83 fe 30             	cmp    $0x30,%esi
 86db147:	0f 84 84 00 00 00    	je     86db1d1 <_ZNKSt6locale4nameEv+0x201>
 86db14d:	8b 03                	mov    (%ebx),%eax
 86db14f:	8b 50 f4             	mov    -0xc(%eax),%edx
 86db152:	8d 48 f4             	lea    -0xc(%eax),%ecx
 86db155:	8d 7a 01             	lea    0x1(%edx),%edi
 86db158:	3b 79 04             	cmp    0x4(%ecx),%edi
 86db15b:	77 07                	ja     86db164 <_ZNKSt6locale4nameEv+0x194>
 86db15d:	8b 49 08             	mov    0x8(%ecx),%ecx
 86db160:	85 c9                	test   %ecx,%ecx
 86db162:	7e 11                	jle    86db175 <_ZNKSt6locale4nameEv+0x1a5>
 86db164:	89 7c 24 04          	mov    %edi,0x4(%esp)
 86db168:	89 1c 24             	mov    %ebx,(%esp)
 86db16b:	e8 a0 cb 02 00       	call   8707d10 <_ZNSs7reserveEj>
 86db170:	8b 03                	mov    (%ebx),%eax
 86db172:	8b 50 f4             	mov    -0xc(%eax),%edx
 86db175:	c6 04 10 3b          	movb   $0x3b,(%eax,%edx,1)
 86db179:	8b 13                	mov    (%ebx),%edx
 86db17b:	b9 f0 cc 48 09       	mov    $0x948ccf0,%ecx
 86db180:	8d 42 f4             	lea    -0xc(%edx),%eax
 86db183:	39 c1                	cmp    %eax,%ecx
 86db185:	0f 84 35 ff ff ff    	je     86db0c0 <_ZNKSt6locale4nameEv+0xf0>
 86db18b:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 86db192:	89 7a f4             	mov    %edi,-0xc(%edx)
 86db195:	c6 44 38 0c 00       	movb   $0x0,0xc(%eax,%edi,1)
 86db19a:	e9 21 ff ff ff       	jmp    86db0c0 <_ZNKSt6locale4nameEv+0xf0>
 86db19f:	90                   	nop
 86db1a0:	83 fe 0b             	cmp    $0xb,%esi
 86db1a3:	74 0b                	je     86db1b0 <_ZNKSt6locale4nameEv+0x1e0>
 86db1a5:	89 f8                	mov    %edi,%eax
 86db1a7:	8b 7c b3 04          	mov    0x4(%ebx,%esi,4),%edi
 86db1ab:	e9 5c fe ff ff       	jmp    86db00c <_ZNKSt6locale4nameEv+0x3c>
 86db1b0:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 86db1b3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 86db1b6:	89 04 24             	mov    %eax,(%esp)
 86db1b9:	e8 f2 31 9a ff       	call   807e3b0 <strlen@plt>
 86db1be:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86db1c1:	89 1c 24             	mov    %ebx,(%esp)
 86db1c4:	89 54 24 04          	mov    %edx,0x4(%esp)
 86db1c8:	89 44 24 08          	mov    %eax,0x8(%esp)
 86db1cc:	e8 cf d3 02 00       	call   87085a0 <_ZNSs6assignEPKcj>
 86db1d1:	83 c4 3c             	add    $0x3c,%esp
 86db1d4:	89 d8                	mov    %ebx,%eax
 86db1d6:	5b                   	pop    %ebx
 86db1d7:	5e                   	pop    %esi
 86db1d8:	5f                   	pop    %edi
 86db1d9:	5d                   	pop    %ebp
 86db1da:	c2 04 00             	ret    $0x4
 86db1dd:	8d 76 00             	lea    0x0(%esi),%esi
 86db1e0:	8b 79 08             	mov    0x8(%ecx),%edi
 86db1e3:	85 ff                	test   %edi,%edi
 86db1e5:	0f 8f 7f fe ff ff    	jg     86db06a <_ZNKSt6locale4nameEv+0x9a>
 86db1eb:	e9 8b fe ff ff       	jmp    86db07b <_ZNKSt6locale4nameEv+0xab>
 86db1f0:	a1 f0 cc 48 09       	mov    0x948ccf0,%eax
 86db1f5:	c7 44 24 10 2a 00 00 	movl   $0x2a,0x10(%esp)
 86db1fc:	00 
 86db1fd:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86db204:	00 
 86db205:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86db20c:	00 
 86db20d:	89 44 24 08          	mov    %eax,0x8(%esp)
 86db211:	89 1c 24             	mov    %ebx,(%esp)
 86db214:	e8 37 d5 02 00       	call   8708750 <_ZNSs14_M_replace_auxEjjjc>
 86db219:	eb b6                	jmp    86db1d1 <_ZNKSt6locale4nameEv+0x201>
 86db21b:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 86db222:	89 7a f4             	mov    %edi,-0xc(%edx)
 86db225:	c6 44 38 0c 00       	movb   $0x0,0xc(%eax,%edi,1)
 86db22a:	e9 ef fe ff ff       	jmp    86db11e <_ZNKSt6locale4nameEv+0x14e>
 86db22f:	89 c6                	mov    %eax,%esi
 86db231:	89 1c 24             	mov    %ebx,(%esp)
 86db234:	e8 a7 c9 02 00       	call   8707be0 <_ZNSsD1Ev>
 86db239:	89 34 24             	mov    %esi,(%esp)
 86db23c:	e8 0f 85 40 00       	call   8ae3750 <_Unwind_Resume>
 86db241:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 86db248:	89 72 f4             	mov    %esi,-0xc(%edx)
 86db24b:	c6 44 30 0c 00       	movb   $0x0,0xc(%eax,%esi,1)
 86db250:	e9 3a fe ff ff       	jmp    86db08f <_ZNKSt6locale4nameEv+0xbf>
 86db255:	90                   	nop
 86db256:	90                   	nop
 86db257:	90                   	nop
 86db258:	90                   	nop
 86db259:	90                   	nop
 86db25a:	90                   	nop
 86db25b:	90                   	nop
 86db25c:	90                   	nop
 86db25d:	90                   	nop
 86db25e:	90                   	nop
 86db25f:	90                   	nop

```

```c
// std::locale::name @ 0x86dafd0

/* std::locale::name() const */

string * std::locale::name(void)

{
  uint uVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  char *__s1;
  int iVar5;
  size_t sVar6;
  int iVar7;
  int iVar8;
  char *__s2;
  string *in_stack_00000004;
  int *in_stack_00000008;
  
  iVar8 = *in_stack_00000008;
  *(undefined1 **)in_stack_00000004 = &DAT_0948ccfc;
  puVar2 = *(undefined4 **)(iVar8 + 0x10);
  pcVar3 = (char *)*puVar2;
  if (pcVar3 == (char *)0x0) {
    string::_M_replace_aux(in_stack_00000004,0,string::_Rep::_S_empty_rep_storage,1,'*');
  }
  else {
    __s2 = (char *)puVar2[1];
    iVar8 = 0;
    __s1 = pcVar3;
    if (__s2 == (char *)0x0) {
LAB_086db1b3:
      sVar6 = strlen(pcVar3);
      string::assign(in_stack_00000004,pcVar3,sVar6);
    }
    else {
      while( true ) {
        iVar5 = strcmp(__s1,__s2);
        if (iVar5 != 0) break;
        if (iVar8 + 1 == 0xb) goto LAB_086db1b3;
        iVar5 = iVar8 + 2;
        __s1 = __s2;
        iVar8 = iVar8 + 1;
        __s2 = (char *)puVar2[iVar5];
      }
                    /* try { // try from 086db031 to 086db218 has its CatchHandler @ 086db22f */
      string::reserve(in_stack_00000004,0x80);
      pcVar3 = *(char **)_S_categories;
      sVar6 = strlen(pcVar3);
      string::append(in_stack_00000004,pcVar3,sVar6);
      iVar8 = *(int *)in_stack_00000004;
      iVar5 = *(int *)(iVar8 + -0xc);
      uVar1 = iVar5 + 1;
      if ((*(uint *)(iVar8 + -8) < uVar1) || (0 < *(int *)(iVar8 + -4))) {
        string::reserve(in_stack_00000004,uVar1);
        iVar8 = *(int *)in_stack_00000004;
        iVar5 = *(int *)(iVar8 + -0xc);
      }
      *(undefined1 *)(iVar8 + iVar5) = 0x3d;
      puVar4 = *(undefined1 **)in_stack_00000004;
      if (puVar4 != &DAT_0948ccfc) {
        *(undefined4 *)(puVar4 + -4) = 0;
        *(uint *)(puVar4 + -0xc) = uVar1;
        puVar4[uVar1] = 0;
      }
      pcVar3 = (char *)**(undefined4 **)(*in_stack_00000008 + 0x10);
      sVar6 = strlen(pcVar3);
      string::append(in_stack_00000004,pcVar3,sVar6);
      iVar8 = 4;
      do {
        iVar5 = *(int *)in_stack_00000004;
        iVar7 = *(int *)(iVar5 + -0xc);
        uVar1 = iVar7 + 1;
        if ((*(uint *)(iVar5 + -8) < uVar1) || (0 < *(int *)(iVar5 + -4))) {
          string::reserve(in_stack_00000004,uVar1);
          iVar5 = *(int *)in_stack_00000004;
          iVar7 = *(int *)(iVar5 + -0xc);
        }
        *(undefined1 *)(iVar5 + iVar7) = 0x3b;
        puVar4 = *(undefined1 **)in_stack_00000004;
        if (puVar4 != &DAT_0948ccfc) {
          *(undefined4 *)(puVar4 + -4) = 0;
          *(uint *)(puVar4 + -0xc) = uVar1;
          puVar4[uVar1] = 0;
        }
        pcVar3 = *(char **)(_S_categories + iVar8);
        sVar6 = strlen(pcVar3);
        string::append(in_stack_00000004,pcVar3,sVar6);
        iVar5 = *(int *)in_stack_00000004;
        iVar7 = *(int *)(iVar5 + -0xc);
        uVar1 = iVar7 + 1;
        if ((*(uint *)(iVar5 + -8) < uVar1) || (0 < *(int *)(iVar5 + -4))) {
          string::reserve(in_stack_00000004,uVar1);
          iVar5 = *(int *)in_stack_00000004;
          iVar7 = *(int *)(iVar5 + -0xc);
        }
        *(undefined1 *)(iVar5 + iVar7) = 0x3d;
        puVar4 = *(undefined1 **)in_stack_00000004;
        if (puVar4 != &DAT_0948ccfc) {
          *(undefined4 *)(puVar4 + -4) = 0;
          *(uint *)(puVar4 + -0xc) = uVar1;
          puVar4[uVar1] = 0;
        }
        pcVar3 = *(char **)(*(int *)(*in_stack_00000008 + 0x10) + iVar8);
        sVar6 = strlen(pcVar3);
        string::append(in_stack_00000004,pcVar3,sVar6);
        iVar8 = iVar8 + 4;
      } while (iVar8 != 0x30);
    }
  }
  return in_stack_00000004;
}

```

---

## operator=

```asm
// === 086dba90 std::locale::operator=  [0x086dba90-0x86dbb1f] ===
 86dba90:	55                   	push   %ebp
 86dba91:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 86dba96:	89 e5                	mov    %esp,%ebp
 86dba98:	83 ec 28             	sub    $0x28,%esp
 86dba9b:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86dba9e:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 86dbaa1:	85 d2                	test   %edx,%edx
 86dbaa3:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86dbaa6:	8b 7d 08             	mov    0x8(%ebp),%edi
 86dbaa9:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86dbaac:	8b 03                	mov    (%ebx),%eax
 86dbaae:	74 3e                	je     86dbaee <_ZNSt6localeaSERKS_+0x5e>
 86dbab0:	f0 83 00 01          	lock addl $0x1,(%eax)
 86dbab4:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86dbab9:	8b 37                	mov    (%edi),%esi
 86dbabb:	f0 0f c1 06          	lock xadd %eax,(%esi)
 86dbabf:	83 f8 01             	cmp    $0x1,%eax
 86dbac2:	74 14                	je     86dbad8 <_ZNSt6localeaSERKS_+0x48>
 86dbac4:	8b 03                	mov    (%ebx),%eax
 86dbac6:	89 07                	mov    %eax,(%edi)
 86dbac8:	89 f8                	mov    %edi,%eax
 86dbaca:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86dbacd:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86dbad0:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86dbad3:	89 ec                	mov    %ebp,%esp
 86dbad5:	5d                   	pop    %ebp
 86dbad6:	c3                   	ret
 86dbad7:	90                   	nop
 86dbad8:	85 f6                	test   %esi,%esi
 86dbada:	74 e8                	je     86dbac4 <_ZNSt6localeaSERKS_+0x34>
 86dbadc:	89 34 24             	mov    %esi,(%esp)
 86dbadf:	e8 2c fe ff ff       	call   86db910 <_ZNSt6locale5_ImplD1Ev>
 86dbae4:	89 34 24             	mov    %esi,(%esp)
 86dbae7:	e8 04 8a 04 00       	call   87244f0 <_ZdlPv>
 86dbaec:	eb d6                	jmp    86dbac4 <_ZNSt6localeaSERKS_+0x34>
 86dbaee:	8b 37                	mov    (%edi),%esi
 86dbaf0:	83 00 01             	addl   $0x1,(%eax)
 86dbaf3:	8b 06                	mov    (%esi),%eax
 86dbaf5:	8d 50 ff             	lea    -0x1(%eax),%edx
 86dbaf8:	89 16                	mov    %edx,(%esi)
 86dbafa:	eb c3                	jmp    86dbabf <_ZNSt6localeaSERKS_+0x2f>
 86dbafc:	83 fa ff             	cmp    $0xffffffff,%edx
 86dbaff:	74 08                	je     86dbb09 <_ZNSt6localeaSERKS_+0x79>
 86dbb01:	89 04 24             	mov    %eax,(%esp)
 86dbb04:	e8 47 7c 40 00       	call   8ae3750 <_Unwind_Resume>
 86dbb09:	89 04 24             	mov    %eax,(%esp)
 86dbb0c:	e8 df 82 04 00       	call   8723df0 <__cxa_call_unexpected>
 86dbb11:	90                   	nop
 86dbb12:	90                   	nop
 86dbb13:	90                   	nop
 86dbb14:	90                   	nop
 86dbb15:	90                   	nop
 86dbb16:	90                   	nop
 86dbb17:	90                   	nop
 86dbb18:	90                   	nop
 86dbb19:	90                   	nop
 86dbb1a:	90                   	nop
 86dbb1b:	90                   	nop
 86dbb1c:	90                   	nop
 86dbb1d:	90                   	nop
 86dbb1e:	90                   	nop
 86dbb1f:	90                   	nop

```

```c
// std::locale::operator= @ 0x86dba90

/* WARNING: Removing unreachable block (ram,0x086dbaee) */
/* std::locale::TEMPNAMEPLACEHOLDERVALUE(std::locale const&) */

locale * __thiscall std::locale::operator=(locale *this,locale *param_1)

{
  int iVar1;
  _Impl *this_00;
  
  LOCK();
  param_1->_M_impl->_M_refcount = param_1->_M_impl->_M_refcount + 1;
  UNLOCK();
  this_00 = this->_M_impl;
  LOCK();
  iVar1 = this_00->_M_refcount;
  this_00->_M_refcount = this_00->_M_refcount + -1;
  UNLOCK();
  if ((iVar1 == 1) && (this_00 != (_Impl *)0x0)) {
                    /* try { // try from 086dbadf to 086dbae3 has its CatchHandler @ 086dbafc */
    _Impl::~_Impl(this_00);
    operator_delete(this_00);
  }
  this->_M_impl = param_1->_M_impl;
  return this;
}

```

---

## operator==

```asm
// === 086db460 std::locale::operator==  [0x086db460-0x86db5ff] ===
 86db460:	55                   	push   %ebp
 86db461:	89 e5                	mov    %esp,%ebp
 86db463:	83 ec 48             	sub    $0x48,%esp
 86db466:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 86db469:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 86db46c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 86db46f:	8b 75 08             	mov    0x8(%ebp),%esi
 86db472:	89 7d fc             	mov    %edi,-0x4(%ebp)
 86db475:	8b 13                	mov    (%ebx),%edx
 86db477:	8b 06                	mov    (%esi),%eax
 86db479:	39 d0                	cmp    %edx,%eax
 86db47b:	0f 84 a7 00 00 00    	je     86db528 <_ZNKSt6localeeqERKS_+0xc8>
 86db481:	8b 78 10             	mov    0x10(%eax),%edi
 86db484:	8b 07                	mov    (%edi),%eax
 86db486:	85 c0                	test   %eax,%eax
 86db488:	0f 84 82 00 00 00    	je     86db510 <_ZNKSt6localeeqERKS_+0xb0>
 86db48e:	8b 52 10             	mov    0x10(%edx),%edx
 86db491:	8b 0a                	mov    (%edx),%ecx
 86db493:	85 c9                	test   %ecx,%ecx
 86db495:	74 79                	je     86db510 <_ZNKSt6localeeqERKS_+0xb0>
 86db497:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86db49b:	89 04 24             	mov    %eax,(%esp)
 86db49e:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 86db4a1:	e8 3a 30 9a ff       	call   807e4e0 <strcmp@plt>
 86db4a6:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 86db4a9:	85 c0                	test   %eax,%eax
 86db4ab:	75 63                	jne    86db510 <_ZNKSt6localeeqERKS_+0xb0>
 86db4ad:	8b 7f 04             	mov    0x4(%edi),%edi
 86db4b0:	85 ff                	test   %edi,%edi
 86db4b2:	74 6c                	je     86db520 <_ZNKSt6localeeqERKS_+0xc0>
 86db4b4:	8d 7d dc             	lea    -0x24(%ebp),%edi
 86db4b7:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86db4bb:	89 3c 24             	mov    %edi,(%esp)
 86db4be:	e8 0d fb ff ff       	call   86dafd0 <_ZNKSt6locale4nameEv>
 86db4c3:	83 ec 04             	sub    $0x4,%esp
 86db4c6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86db4c9:	89 74 24 04          	mov    %esi,0x4(%esp)
 86db4cd:	89 04 24             	mov    %eax,(%esp)
 86db4d0:	e8 fb fa ff ff       	call   86dafd0 <_ZNKSt6locale4nameEv>
 86db4d5:	8b 75 e0             	mov    -0x20(%ebp),%esi
 86db4d8:	83 ec 04             	sub    $0x4,%esp
 86db4db:	31 c0                	xor    %eax,%eax
 86db4dd:	8b 7d dc             	mov    -0x24(%ebp),%edi
 86db4e0:	8b 4e f4             	mov    -0xc(%esi),%ecx
 86db4e3:	8d 5e f4             	lea    -0xc(%esi),%ebx
 86db4e6:	3b 4f f4             	cmp    -0xc(%edi),%ecx
 86db4e9:	8d 57 f4             	lea    -0xc(%edi),%edx
 86db4ec:	74 52                	je     86db540 <_ZNKSt6localeeqERKS_+0xe0>
 86db4ee:	81 fb f0 cc 48 09    	cmp    $0x948ccf0,%ebx
 86db4f4:	0f 85 80 00 00 00    	jne    86db57a <_ZNKSt6localeeqERKS_+0x11a>
 86db4fa:	81 fa f0 cc 48 09    	cmp    $0x948ccf0,%edx
 86db500:	75 47                	jne    86db549 <_ZNKSt6localeeqERKS_+0xe9>
 86db502:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86db505:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86db508:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86db50b:	89 ec                	mov    %ebp,%esp
 86db50d:	5d                   	pop    %ebp
 86db50e:	c3                   	ret
 86db50f:	90                   	nop
 86db510:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86db513:	31 c0                	xor    %eax,%eax
 86db515:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86db518:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86db51b:	89 ec                	mov    %ebp,%esp
 86db51d:	5d                   	pop    %ebp
 86db51e:	c3                   	ret
 86db51f:	90                   	nop
 86db520:	8b 4a 04             	mov    0x4(%edx),%ecx
 86db523:	85 c9                	test   %ecx,%ecx
 86db525:	75 8d                	jne    86db4b4 <_ZNKSt6localeeqERKS_+0x54>
 86db527:	90                   	nop
 86db528:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86db52b:	b8 01 00 00 00       	mov    $0x1,%eax
 86db530:	8b 75 f8             	mov    -0x8(%ebp),%esi
 86db533:	8b 7d fc             	mov    -0x4(%ebp),%edi
 86db536:	89 ec                	mov    %ebp,%esp
 86db538:	5d                   	pop    %ebp
 86db539:	c3                   	ret
 86db53a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 86db540:	39 c9                	cmp    %ecx,%ecx
 86db542:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 86db544:	0f 94 c0             	sete   %al
 86db547:	eb a5                	jmp    86db4ee <_ZNKSt6localeeqERKS_+0x8e>
 86db549:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 86db54e:	85 c9                	test   %ecx,%ecx
 86db550:	0f 84 84 00 00 00    	je     86db5da <_ZNKSt6localeeqERKS_+0x17a>
 86db556:	83 c9 ff             	or     $0xffffffff,%ecx
 86db559:	f0 0f c1 4a 08       	lock xadd %ecx,0x8(%edx)
 86db55e:	85 c9                	test   %ecx,%ecx
 86db560:	7f a0                	jg     86db502 <_ZNKSt6localeeqERKS_+0xa2>
 86db562:	8d 4d e6             	lea    -0x1a(%ebp),%ecx
 86db565:	88 45 d4             	mov    %al,-0x2c(%ebp)
 86db568:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86db56c:	89 14 24             	mov    %edx,(%esp)
 86db56f:	e8 ac b3 02 00       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 86db574:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 86db578:	eb 88                	jmp    86db502 <_ZNKSt6localeeqERKS_+0xa2>
 86db57a:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 86db57f:	85 d2                	test   %edx,%edx
 86db581:	74 65                	je     86db5e8 <_ZNKSt6localeeqERKS_+0x188>
 86db583:	83 ca ff             	or     $0xffffffff,%edx
 86db586:	f0 0f c1 53 08       	lock xadd %edx,0x8(%ebx)
 86db58b:	85 d2                	test   %edx,%edx
 86db58d:	7e 1c                	jle    86db5ab <_ZNKSt6localeeqERKS_+0x14b>
 86db58f:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86db592:	83 ea 0c             	sub    $0xc,%edx
 86db595:	e9 60 ff ff ff       	jmp    86db4fa <_ZNKSt6localeeqERKS_+0x9a>
 86db59a:	89 c3                	mov    %eax,%ebx
 86db59c:	89 d6                	mov    %edx,%esi
 86db59e:	83 fe ff             	cmp    $0xffffffff,%esi
 86db5a1:	74 50                	je     86db5f3 <_ZNKSt6localeeqERKS_+0x193>
 86db5a3:	89 1c 24             	mov    %ebx,(%esp)
 86db5a6:	e8 a5 81 40 00       	call   8ae3750 <_Unwind_Resume>
 86db5ab:	8d 55 e7             	lea    -0x19(%ebp),%edx
 86db5ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 86db5b2:	88 45 d4             	mov    %al,-0x2c(%ebp)
 86db5b5:	89 1c 24             	mov    %ebx,(%esp)
 86db5b8:	e8 63 b3 02 00       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 86db5bd:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86db5c0:	0f b6 45 d4          	movzbl -0x2c(%ebp),%eax
 86db5c4:	83 ea 0c             	sub    $0xc,%edx
 86db5c7:	e9 2e ff ff ff       	jmp    86db4fa <_ZNKSt6localeeqERKS_+0x9a>
 86db5cc:	89 c3                	mov    %eax,%ebx
 86db5ce:	89 d6                	mov    %edx,%esi
 86db5d0:	89 3c 24             	mov    %edi,(%esp)
 86db5d3:	e8 08 c6 02 00       	call   8707be0 <_ZNSsD1Ev>
 86db5d8:	eb c4                	jmp    86db59e <_ZNKSt6localeeqERKS_+0x13e>
 86db5da:	8b 4a 08             	mov    0x8(%edx),%ecx
 86db5dd:	8d 59 ff             	lea    -0x1(%ecx),%ebx
 86db5e0:	89 5a 08             	mov    %ebx,0x8(%edx)
 86db5e3:	e9 76 ff ff ff       	jmp    86db55e <_ZNKSt6localeeqERKS_+0xfe>
 86db5e8:	8b 53 08             	mov    0x8(%ebx),%edx
 86db5eb:	8d 4a ff             	lea    -0x1(%edx),%ecx
 86db5ee:	89 4b 08             	mov    %ecx,0x8(%ebx)
 86db5f1:	eb 98                	jmp    86db58b <_ZNKSt6localeeqERKS_+0x12b>
 86db5f3:	89 1c 24             	mov    %ebx,(%esp)
 86db5f6:	e8 f5 87 04 00       	call   8723df0 <__cxa_call_unexpected>
 86db5fb:	90                   	nop
 86db5fc:	90                   	nop
 86db5fd:	90                   	nop
 86db5fe:	90                   	nop
 86db5ff:	90                   	nop

```

```c
// std::locale::operator== @ 0x86db460

/* WARNING: Removing unreachable block (ram,0x086db5e8) */
/* WARNING: Removing unreachable block (ram,0x086db5da) */
/* std::locale::TEMPNAMEPLACEHOLDERVALUE(std::locale const&) const */

bool __thiscall std::locale::operator==(locale *this,locale *param_1)

{
  int *piVar1;
  char **ppcVar2;
  char **ppcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  byte bVar8;
  char *local_28;
  char *local_24;
  
  bVar8 = 0;
  if (this->_M_impl == param_1->_M_impl) {
    return true;
  }
  ppcVar2 = this->_M_impl->_M_names;
  pcVar5 = *ppcVar2;
  if (pcVar5 != (char *)0x0) {
    ppcVar3 = param_1->_M_impl->_M_names;
    pcVar6 = *ppcVar3;
    if ((pcVar6 != (char *)0x0) && (iVar4 = strcmp(pcVar5,pcVar6), iVar4 == 0)) {
      if ((ppcVar2[1] == (char *)0x0) && (ppcVar3[1] == (char *)0x0)) {
        return true;
      }
                    /* try { // try from 086db4be to 086db4c2 has its CatchHandler @ 086db59a */
      name();
                    /* try { // try from 086db4d0 to 086db4d4 has its CatchHandler @ 086db5cc */
      name();
      bVar7 = false;
      iVar4 = *(int *)(local_24 + -0xc);
      if (iVar4 == *(int *)(local_28 + -0xc)) {
        bVar7 = true;
        pcVar5 = local_24;
        pcVar6 = local_28;
        do {
          if (iVar4 == 0) break;
          iVar4 = iVar4 + -1;
          bVar7 = *pcVar5 == *pcVar6;
          pcVar5 = pcVar5 + (uint)bVar8 * -2 + 1;
          pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
        } while (bVar7);
      }
      if ((allocator *)(local_24 + -0xc) != (allocator *)&string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_24 + -4);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 < 1) {
          string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
        }
      }
      if ((allocator *)(local_28 + -0xc) != (allocator *)&string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(local_28 + -4);
        iVar4 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar4 < 1) {
          string::_Rep::_M_destroy((allocator *)(local_28 + -0xc));
        }
      }
      return bVar7;
    }
  }
  return false;
}

```

---

## ~locale

```asm
// === 086dbcd0 std::locale::~locale  [0x086dbcd0-0x86dbd3f] ===
 86dbcd0:	55                   	push   %ebp
 86dbcd1:	89 e5                	mov    %esp,%ebp
 86dbcd3:	53                   	push   %ebx
 86dbcd4:	83 ec 14             	sub    $0x14,%esp
 86dbcd7:	8b 45 08             	mov    0x8(%ebp),%eax
 86dbcda:	8b 18                	mov    (%eax),%ebx
 86dbcdc:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 86dbce1:	85 c0                	test   %eax,%eax
 86dbce3:	74 34                	je     86dbd19 <_ZNSt6localeD1Ev+0x49>
 86dbce5:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86dbcea:	f0 0f c1 03          	lock xadd %eax,(%ebx)
 86dbcee:	83 f8 01             	cmp    $0x1,%eax
 86dbcf1:	74 0d                	je     86dbd00 <_ZNSt6localeD1Ev+0x30>
 86dbcf3:	83 c4 14             	add    $0x14,%esp
 86dbcf6:	5b                   	pop    %ebx
 86dbcf7:	5d                   	pop    %ebp
 86dbcf8:	c3                   	ret
 86dbcf9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 86dbd00:	85 db                	test   %ebx,%ebx
 86dbd02:	74 ef                	je     86dbcf3 <_ZNSt6localeD1Ev+0x23>
 86dbd04:	89 1c 24             	mov    %ebx,(%esp)
 86dbd07:	e8 04 fc ff ff       	call   86db910 <_ZNSt6locale5_ImplD1Ev>
 86dbd0c:	89 5d 08             	mov    %ebx,0x8(%ebp)
 86dbd0f:	83 c4 14             	add    $0x14,%esp
 86dbd12:	5b                   	pop    %ebx
 86dbd13:	5d                   	pop    %ebp
 86dbd14:	e9 d7 87 04 00       	jmp    87244f0 <_ZdlPv>
 86dbd19:	8b 03                	mov    (%ebx),%eax
 86dbd1b:	8d 50 ff             	lea    -0x1(%eax),%edx
 86dbd1e:	89 13                	mov    %edx,(%ebx)
 86dbd20:	eb cc                	jmp    86dbcee <_ZNSt6localeD1Ev+0x1e>
 86dbd22:	83 fa ff             	cmp    $0xffffffff,%edx
 86dbd25:	74 08                	je     86dbd2f <_ZNSt6localeD1Ev+0x5f>
 86dbd27:	89 04 24             	mov    %eax,(%esp)
 86dbd2a:	e8 21 7a 40 00       	call   8ae3750 <_Unwind_Resume>
 86dbd2f:	89 04 24             	mov    %eax,(%esp)
 86dbd32:	e8 b9 80 04 00       	call   8723df0 <__cxa_call_unexpected>
 86dbd37:	90                   	nop
 86dbd38:	90                   	nop
 86dbd39:	90                   	nop
 86dbd3a:	90                   	nop
 86dbd3b:	90                   	nop
 86dbd3c:	90                   	nop
 86dbd3d:	90                   	nop
 86dbd3e:	90                   	nop
 86dbd3f:	90                   	nop

```

```c
// std::locale::~locale @ 0x86dbcd0

/* WARNING: Removing unreachable block (ram,0x086dbd19) */
/* std::locale::~locale() */

void __thiscall std::locale::~locale(locale *this)

{
  int iVar1;
  _Impl *this_00;
  
  this_00 = this->_M_impl;
  LOCK();
  iVar1 = this_00->_M_refcount;
  this_00->_M_refcount = this_00->_M_refcount + -1;
  UNLOCK();
  if ((iVar1 == 1) && (this_00 != (_Impl *)0x0)) {
                    /* try { // try from 086dbd07 to 086dbd0b has its CatchHandler @ 086dbd22 */
    _Impl::~_Impl(this_00);
    operator_delete(this_00);
    return;
  }
  return;
}

```

