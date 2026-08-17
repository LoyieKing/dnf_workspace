# std__ctype_lt_wchar_t_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 18

---

## _M_convert_to_wmask

```asm
// === 0872f0f0 std::ctype<wchar_t>::_M_convert_to_wmask  [0x0872f0f0-0x872f25f] ===
 872f0f0:	55                   	push   %ebp
 872f0f1:	89 e5                	mov    %esp,%ebp
 872f0f3:	83 ec 08             	sub    $0x8,%esp
 872f0f6:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 872f0fa:	8b 55 08             	mov    0x8(%ebp),%edx
 872f0fd:	66 3d 00 08          	cmp    $0x800,%ax
 872f101:	0f 84 41 01 00 00    	je     872f248 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0x158>
 872f107:	76 27                	jbe    872f130 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0x40>
 872f109:	66 3d 00 10          	cmp    $0x1000,%ax
 872f10d:	0f 84 05 01 00 00    	je     872f218 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0x128>
 872f113:	77 4b                	ja     872f160 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0x70>
 872f115:	66 3d 00 0c          	cmp    $0xc00,%ax
 872f119:	0f 84 c9 00 00 00    	je     872f1e8 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0xf8>
 872f11f:	66 3d 04 0c          	cmp    $0xc04,%ax
 872f123:	0f 84 a7 00 00 00    	je     872f1d0 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0xe0>
 872f129:	31 c0                	xor    %eax,%eax
 872f12b:	c9                   	leave
 872f12c:	c3                   	ret
 872f12d:	8d 76 00             	lea    0x0(%esi),%esi
 872f130:	66 3d 00 01          	cmp    $0x100,%ax
 872f134:	0f 84 f6 00 00 00    	je     872f230 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0x140>
 872f13a:	76 44                	jbe    872f180 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0x90>
 872f13c:	66 3d 00 02          	cmp    $0x200,%ax
 872f140:	0f 84 ba 00 00 00    	je     872f200 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0x110>
 872f146:	66 3d 00 04          	cmp    $0x400,%ax
 872f14a:	75 dd                	jne    872f129 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0x39>
 872f14c:	8b 42 08             	mov    0x8(%edx),%eax
 872f14f:	c7 45 08 06 29 d0 08 	movl   $0x8d02906,0x8(%ebp)
 872f156:	89 45 0c             	mov    %eax,0xc(%ebp)
 872f159:	c9                   	leave
 872f15a:	e9 f1 e9 94 ff       	jmp    807db50 <__wctype_l@plt>
 872f15f:	90                   	nop
 872f160:	66 3d 00 20          	cmp    $0x2000,%ax
 872f164:	74 3a                	je     872f1a0 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0xb0>
 872f166:	66 3d 00 40          	cmp    $0x4000,%ax
 872f16a:	75 bd                	jne    872f129 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0x39>
 872f16c:	8b 42 08             	mov    0x8(%edx),%eax
 872f16f:	c7 45 08 fa 28 d0 08 	movl   $0x8d028fa,0x8(%ebp)
 872f176:	89 45 0c             	mov    %eax,0xc(%ebp)
 872f179:	c9                   	leave
 872f17a:	e9 d1 e9 94 ff       	jmp    807db50 <__wctype_l@plt>
 872f17f:	90                   	nop
 872f180:	66 83 f8 02          	cmp    $0x2,%ax
 872f184:	74 32                	je     872f1b8 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0xc8>
 872f186:	66 83 f8 04          	cmp    $0x4,%ax
 872f18a:	75 9d                	jne    872f129 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt+0x39>
 872f18c:	8b 42 08             	mov    0x8(%edx),%eax
 872f18f:	c7 45 08 0c 29 d0 08 	movl   $0x8d0290c,0x8(%ebp)
 872f196:	89 45 0c             	mov    %eax,0xc(%ebp)
 872f199:	c9                   	leave
 872f19a:	e9 b1 e9 94 ff       	jmp    807db50 <__wctype_l@plt>
 872f19f:	90                   	nop
 872f1a0:	8b 42 08             	mov    0x8(%edx),%eax
 872f1a3:	c7 45 08 f4 28 d0 08 	movl   $0x8d028f4,0x8(%ebp)
 872f1aa:	89 45 0c             	mov    %eax,0xc(%ebp)
 872f1ad:	c9                   	leave
 872f1ae:	e9 9d e9 94 ff       	jmp    807db50 <__wctype_l@plt>
 872f1b3:	90                   	nop
 872f1b4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 872f1b8:	8b 42 08             	mov    0x8(%edx),%eax
 872f1bb:	c7 45 08 00 29 d0 08 	movl   $0x8d02900,0x8(%ebp)
 872f1c2:	89 45 0c             	mov    %eax,0xc(%ebp)
 872f1c5:	c9                   	leave
 872f1c6:	e9 85 e9 94 ff       	jmp    807db50 <__wctype_l@plt>
 872f1cb:	90                   	nop
 872f1cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 872f1d0:	8b 42 08             	mov    0x8(%edx),%eax
 872f1d3:	c7 45 08 1f 29 d0 08 	movl   $0x8d0291f,0x8(%ebp)
 872f1da:	89 45 0c             	mov    %eax,0xc(%ebp)
 872f1dd:	c9                   	leave
 872f1de:	e9 6d e9 94 ff       	jmp    807db50 <__wctype_l@plt>
 872f1e3:	90                   	nop
 872f1e4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 872f1e8:	8b 42 08             	mov    0x8(%edx),%eax
 872f1eb:	c7 45 08 19 29 d0 08 	movl   $0x8d02919,0x8(%ebp)
 872f1f2:	89 45 0c             	mov    %eax,0xc(%ebp)
 872f1f5:	c9                   	leave
 872f1f6:	e9 55 e9 94 ff       	jmp    807db50 <__wctype_l@plt>
 872f1fb:	90                   	nop
 872f1fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 872f200:	8b 42 08             	mov    0x8(%edx),%eax
 872f203:	c7 45 08 12 cb d0 08 	movl   $0x8d0cb12,0x8(%ebp)
 872f20a:	89 45 0c             	mov    %eax,0xc(%ebp)
 872f20d:	c9                   	leave
 872f20e:	e9 3d e9 94 ff       	jmp    807db50 <__wctype_l@plt>
 872f213:	90                   	nop
 872f214:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 872f218:	8b 42 08             	mov    0x8(%edx),%eax
 872f21b:	c7 45 08 12 29 d0 08 	movl   $0x8d02912,0x8(%ebp)
 872f222:	89 45 0c             	mov    %eax,0xc(%ebp)
 872f225:	c9                   	leave
 872f226:	e9 25 e9 94 ff       	jmp    807db50 <__wctype_l@plt>
 872f22b:	90                   	nop
 872f22c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 872f230:	8b 42 08             	mov    0x8(%edx),%eax
 872f233:	c7 45 08 e0 ca d0 08 	movl   $0x8d0cae0,0x8(%ebp)
 872f23a:	89 45 0c             	mov    %eax,0xc(%ebp)
 872f23d:	c9                   	leave
 872f23e:	e9 0d e9 94 ff       	jmp    807db50 <__wctype_l@plt>
 872f243:	90                   	nop
 872f244:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 872f248:	8b 42 08             	mov    0x8(%edx),%eax
 872f24b:	c7 45 08 13 29 d0 08 	movl   $0x8d02913,0x8(%ebp)
 872f252:	89 45 0c             	mov    %eax,0xc(%ebp)
 872f255:	c9                   	leave
 872f256:	e9 f5 e8 94 ff       	jmp    807db50 <__wctype_l@plt>
 872f25b:	90                   	nop
 872f25c:	90                   	nop
 872f25d:	90                   	nop
 872f25e:	90                   	nop
 872f25f:	90                   	nop

```

```c
// std::ctype<wchar_t>::_M_convert_to_wmask @ 0x872f0f0

/* std::ctype<wchar_t>::_M_convert_to_wmask(unsigned short) const */

undefined4 __thiscall std::ctype<wchar_t>::_M_convert_to_wmask(ctype<wchar_t> *this,ushort param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0x800) {
    uVar1 = __wctype_l();
    return uVar1;
  }
  if (param_1 < 0x801) {
    if (param_1 == 0x100) {
      uVar1 = __wctype_l();
      return uVar1;
    }
    if (param_1 < 0x101) {
      if (param_1 == 2) {
        uVar1 = __wctype_l();
        return uVar1;
      }
      if (param_1 == 4) {
        uVar1 = __wctype_l();
        return uVar1;
      }
    }
    else {
      if (param_1 == 0x200) {
        uVar1 = __wctype_l();
        return uVar1;
      }
      if (param_1 == 0x400) {
        uVar1 = __wctype_l();
        return uVar1;
      }
    }
  }
  else {
    if (param_1 == 0x1000) {
      uVar1 = __wctype_l();
      return uVar1;
    }
    if (param_1 < 0x1001) {
      if (param_1 == 0xc00) {
        uVar1 = __wctype_l();
        return uVar1;
      }
      if (param_1 == 0xc04) {
        uVar1 = __wctype_l();
        return uVar1;
      }
    }
    else {
      if (param_1 == 0x2000) {
        uVar1 = __wctype_l();
        return uVar1;
      }
      if (param_1 == 0x4000) {
        uVar1 = __wctype_l();
        return uVar1;
      }
    }
  }
  return 0;
}

```

---

## _M_initialize_ctype

```asm
// === 0872f260 std::ctype<wchar_t>::_M_initialize_ctype  [0x0872f260-0x872f32f] ===
 872f260:	55                   	push   %ebp
 872f261:	89 e5                	mov    %esp,%ebp
 872f263:	57                   	push   %edi
 872f264:	56                   	push   %esi
 872f265:	31 f6                	xor    %esi,%esi
 872f267:	53                   	push   %ebx
 872f268:	83 ec 2c             	sub    $0x2c,%esp
 872f26b:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872f26e:	8b 43 08             	mov    0x8(%ebx),%eax
 872f271:	89 04 24             	mov    %eax,(%esp)
 872f274:	e8 f7 eb 94 ff       	call   807de70 <__uselocale@plt>
 872f279:	89 c7                	mov    %eax,%edi
 872f27b:	eb 16                	jmp    872f293 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv+0x33>
 872f27d:	8d 76 00             	lea    0x0(%esi),%esi
 872f280:	88 44 33 0d          	mov    %al,0xd(%ebx,%esi,1)
 872f284:	83 c6 01             	add    $0x1,%esi
 872f287:	81 fe 80 00 00 00    	cmp    $0x80,%esi
 872f28d:	0f 84 94 00 00 00    	je     872f327 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv+0xc7>
 872f293:	89 34 24             	mov    %esi,(%esp)
 872f296:	e8 35 f0 94 ff       	call   807e2d0 <wctob@plt>
 872f29b:	83 f8 ff             	cmp    $0xffffffff,%eax
 872f29e:	75 e0                	jne    872f280 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv+0x20>
 872f2a0:	c6 43 0c 00          	movb   $0x0,0xc(%ebx)
 872f2a4:	31 f6                	xor    %esi,%esi
 872f2a6:	66 90                	xchg   %ax,%ax
 872f2a8:	89 34 24             	mov    %esi,(%esp)
 872f2ab:	e8 50 f3 94 ff       	call   807e600 <btowc@plt>
 872f2b0:	89 84 b3 90 00 00 00 	mov    %eax,0x90(%ebx,%esi,4)
 872f2b7:	83 c6 01             	add    $0x1,%esi
 872f2ba:	81 fe 00 01 00 00    	cmp    $0x100,%esi
 872f2c0:	75 e6                	jne    872f2a8 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv+0x48>
 872f2c2:	31 c9                	xor    %ecx,%ecx
 872f2c4:	66 be 01 00          	mov    $0x1,%si
 872f2c8:	eb 39                	jmp    872f303 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv+0xa3>
 872f2ca:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 872f2d0:	89 f0                	mov    %esi,%eax
 872f2d2:	d3 e0                	shl    %cl,%eax
 872f2d4:	c1 e0 08             	shl    $0x8,%eax
 872f2d7:	66 89 84 4b 90 04 00 	mov    %ax,0x490(%ebx,%ecx,2)
 872f2de:	00 
 872f2df:	0f b7 c0             	movzwl %ax,%eax
 872f2e2:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 872f2e5:	89 44 24 04          	mov    %eax,0x4(%esp)
 872f2e9:	89 1c 24             	mov    %ebx,(%esp)
 872f2ec:	e8 ff fd ff ff       	call   872f0f0 <_ZNKSt5ctypeIwE19_M_convert_to_wmaskEt>
 872f2f1:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 872f2f4:	89 84 8b b0 04 00 00 	mov    %eax,0x4b0(%ebx,%ecx,4)
 872f2fb:	83 c1 01             	add    $0x1,%ecx
 872f2fe:	83 f9 0c             	cmp    $0xc,%ecx
 872f301:	74 15                	je     872f318 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv+0xb8>
 872f303:	83 f9 07             	cmp    $0x7,%ecx
 872f306:	76 c8                	jbe    872f2d0 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv+0x70>
 872f308:	89 f0                	mov    %esi,%eax
 872f30a:	d3 e0                	shl    %cl,%eax
 872f30c:	c1 e8 08             	shr    $0x8,%eax
 872f30f:	eb c6                	jmp    872f2d7 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv+0x77>
 872f311:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 872f318:	89 7d 08             	mov    %edi,0x8(%ebp)
 872f31b:	83 c4 2c             	add    $0x2c,%esp
 872f31e:	5b                   	pop    %ebx
 872f31f:	5e                   	pop    %esi
 872f320:	5f                   	pop    %edi
 872f321:	5d                   	pop    %ebp
 872f322:	e9 49 eb 94 ff       	jmp    807de70 <__uselocale@plt>
 872f327:	c6 43 0c 01          	movb   $0x1,0xc(%ebx)
 872f32b:	e9 74 ff ff ff       	jmp    872f2a4 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv+0x44>

```

```c
// std::ctype<wchar_t>::_M_initialize_ctype @ 0x872f260

/* std::ctype<wchar_t>::_M_initialize_ctype() */

void __thiscall std::ctype<wchar_t>::_M_initialize_ctype(ctype<wchar_t> *this)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  wint_t wVar5;
  
  wVar5 = 0;
  __uselocale(*(undefined4 *)(this + 8));
  do {
    iVar2 = wctob(wVar5);
    if (iVar2 == -1) {
      this[0xc] = (ctype<wchar_t>)0x0;
      goto LAB_0872f2a4;
    }
    this[wVar5 + 0xd] = SUB41(iVar2,0);
    wVar5 = wVar5 + 1;
  } while (wVar5 != 0x80);
  this[0xc] = (ctype<wchar_t>)0x1;
LAB_0872f2a4:
  iVar2 = 0;
  do {
    wVar5 = btowc(iVar2);
    *(wint_t *)(this + iVar2 * 4 + 0x90) = wVar5;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x100);
  uVar4 = 0;
  do {
    if (uVar4 < 8) {
      uVar1 = (ushort)((1 << ((byte)uVar4 & 0x1f)) << 8);
    }
    else {
      uVar1 = (ushort)((uint)(1 << ((byte)uVar4 & 0x1f)) >> 8);
    }
    *(ushort *)(this + uVar4 * 2 + 0x490) = uVar1;
    uVar3 = _M_convert_to_wmask(this,uVar1);
    *(undefined4 *)(this + uVar4 * 4 + 0x4b0) = uVar3;
    uVar4 = uVar4 + 1;
  } while (uVar4 != 0xc);
  __uselocale();
  return;
}

```

---

## ctype

```asm
// === 08726850 std::ctype<wchar_t>::ctype  [0x08726850-0x87268af] ===
 8726850:	55                   	push   %ebp
 8726851:	31 c0                	xor    %eax,%eax
 8726853:	89 e5                	mov    %esp,%ebp
 8726855:	53                   	push   %ebx
 8726856:	83 ec 24             	sub    $0x24,%esp
 8726859:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872685c:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 8726860:	0f 95 c0             	setne  %al
 8726863:	89 43 04             	mov    %eax,0x4(%ebx)
 8726866:	8d 45 0c             	lea    0xc(%ebp),%eax
 8726869:	c7 03 88 1d d0 08    	movl   $0x8d01d88,(%ebx)
 872686f:	89 04 24             	mov    %eax,(%esp)
 8726872:	e8 99 c2 ff ff       	call   8722b10 <_ZNSt6locale5facet17_S_clone_c_localeERP15__locale_struct>
 8726877:	89 43 08             	mov    %eax,0x8(%ebx)
 872687a:	c6 43 0c 00          	movb   $0x0,0xc(%ebx)
 872687e:	89 1c 24             	mov    %ebx,(%esp)
 8726881:	e8 da 89 00 00       	call   872f260 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv>
 8726886:	83 c4 24             	add    $0x24,%esp
 8726889:	5b                   	pop    %ebx
 872688a:	5d                   	pop    %ebp
 872688b:	c3                   	ret
 872688c:	c7 03 88 0a d0 08    	movl   $0x8d00a88,(%ebx)
 8726892:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8726895:	89 1c 24             	mov    %ebx,(%esp)
 8726898:	e8 03 45 fb ff       	call   86dada0 <_ZNSt6locale5facetD1Ev>
 872689d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87268a0:	89 04 24             	mov    %eax,(%esp)
 87268a3:	e8 a8 ce 3b 00       	call   8ae3750 <_Unwind_Resume>
 87268a8:	90                   	nop
 87268a9:	90                   	nop
 87268aa:	90                   	nop
 87268ab:	90                   	nop
 87268ac:	90                   	nop
 87268ad:	90                   	nop
 87268ae:	90                   	nop
 87268af:	90                   	nop

```

```c
// std::ctype<wchar_t>::ctype @ 0x8726850

/* std::ctype<wchar_t>::ctype(__locale_struct*, unsigned int) */

void __thiscall
std::ctype<wchar_t>::ctype(ctype<wchar_t> *this,__locale_struct *param_1,uint param_2)

{
  undefined4 uVar1;
  
  *(uint *)(this + 4) = (uint)(param_2 != 0);
  *(undefined ***)this = &PTR__ctype_08d01d88;
                    /* try { // try from 08726872 to 08726885 has its CatchHandler @ 0872688c */
  uVar1 = locale::facet::_S_clone_c_locale(&param_1);
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = (ctype<wchar_t>)0x0;
  _M_initialize_ctype(this);
  return;
}

```

---

## ctype_087268b0

```asm
// === 087268b0 std::ctype<wchar_t>::ctype  [0x087268b0-0x872690f] ===
 87268b0:	55                   	push   %ebp
 87268b1:	31 c0                	xor    %eax,%eax
 87268b3:	89 e5                	mov    %esp,%ebp
 87268b5:	53                   	push   %ebx
 87268b6:	83 ec 24             	sub    $0x24,%esp
 87268b9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87268bc:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 87268c0:	0f 95 c0             	setne  %al
 87268c3:	89 43 04             	mov    %eax,0x4(%ebx)
 87268c6:	c7 03 88 1d d0 08    	movl   $0x8d01d88,(%ebx)
 87268cc:	e8 6f 46 fb ff       	call   86daf40 <_ZNSt6locale5facet15_S_get_c_localeEv>
 87268d1:	89 43 08             	mov    %eax,0x8(%ebx)
 87268d4:	c6 43 0c 00          	movb   $0x0,0xc(%ebx)
 87268d8:	89 1c 24             	mov    %ebx,(%esp)
 87268db:	e8 80 89 00 00       	call   872f260 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv>
 87268e0:	83 c4 24             	add    $0x24,%esp
 87268e3:	5b                   	pop    %ebx
 87268e4:	5d                   	pop    %ebp
 87268e5:	c3                   	ret
 87268e6:	c7 03 88 0a d0 08    	movl   $0x8d00a88,(%ebx)
 87268ec:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87268ef:	89 1c 24             	mov    %ebx,(%esp)
 87268f2:	e8 a9 44 fb ff       	call   86dada0 <_ZNSt6locale5facetD1Ev>
 87268f7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87268fa:	89 04 24             	mov    %eax,(%esp)
 87268fd:	e8 4e ce 3b 00       	call   8ae3750 <_Unwind_Resume>
 8726902:	90                   	nop
 8726903:	90                   	nop
 8726904:	90                   	nop
 8726905:	90                   	nop
 8726906:	90                   	nop
 8726907:	90                   	nop
 8726908:	90                   	nop
 8726909:	90                   	nop
 872690a:	90                   	nop
 872690b:	90                   	nop
 872690c:	90                   	nop
 872690d:	90                   	nop
 872690e:	90                   	nop
 872690f:	90                   	nop

```

```c
// std::ctype<wchar_t>::ctype @ 0x87268b0

/* std::ctype<wchar_t>::ctype(unsigned int) */

void __thiscall std::ctype<wchar_t>::ctype(ctype<wchar_t> *this,uint param_1)

{
  undefined4 uVar1;
  
  *(uint *)(this + 4) = (uint)(param_1 != 0);
  *(undefined ***)this = &PTR__ctype_08d01d88;
                    /* try { // try from 087268cc to 087268df has its CatchHandler @ 087268e6 */
  uVar1 = locale::facet::_S_get_c_locale();
  *(undefined4 *)(this + 8) = uVar1;
  this[0xc] = (ctype<wchar_t>)0x0;
  _M_initialize_ctype(this);
  return;
}

```

---

## do_is

```asm
// === 0872ef10 std::ctype<wchar_t>::do_is  [0x0872ef10-0x872ef8f] ===
 872ef10:	55                   	push   %ebp
 872ef11:	89 e5                	mov    %esp,%ebp
 872ef13:	57                   	push   %edi
 872ef14:	56                   	push   %esi
 872ef15:	53                   	push   %ebx
 872ef16:	83 ec 2c             	sub    $0x2c,%esp
 872ef19:	8b 7d 0c             	mov    0xc(%ebp),%edi
 872ef1c:	3b 7d 10             	cmp    0x10(%ebp),%edi
 872ef1f:	8b 75 08             	mov    0x8(%ebp),%esi
 872ef22:	73 5a                	jae    872ef7e <_ZNKSt5ctypeIwE5do_isEPKwS2_Pt+0x6e>
 872ef24:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 872ef28:	31 db                	xor    %ebx,%ebx
 872ef2a:	66 c7 45 e6 00 00    	movw   $0x0,-0x1a(%ebp)
 872ef30:	8b 46 08             	mov    0x8(%esi),%eax
 872ef33:	89 44 24 08          	mov    %eax,0x8(%esp)
 872ef37:	8b 84 9e b0 04 00 00 	mov    0x4b0(%esi,%ebx,4),%eax
 872ef3e:	89 44 24 04          	mov    %eax,0x4(%esp)
 872ef42:	8b 07                	mov    (%edi),%eax
 872ef44:	89 04 24             	mov    %eax,(%esp)
 872ef47:	e8 f4 ec 94 ff       	call   807dc40 <__iswctype_l@plt>
 872ef4c:	85 c0                	test   %eax,%eax
 872ef4e:	74 0c                	je     872ef5c <_ZNKSt5ctypeIwE5do_isEPKwS2_Pt+0x4c>
 872ef50:	0f b7 84 5e 90 04 00 	movzwl 0x490(%esi,%ebx,2),%eax
 872ef57:	00 
 872ef58:	66 09 45 e6          	or     %ax,-0x1a(%ebp)
 872ef5c:	83 c3 01             	add    $0x1,%ebx
 872ef5f:	83 fb 0c             	cmp    $0xc,%ebx
 872ef62:	75 cc                	jne    872ef30 <_ZNKSt5ctypeIwE5do_isEPKwS2_Pt+0x20>
 872ef64:	0f b7 45 e6          	movzwl -0x1a(%ebp),%eax
 872ef68:	83 c7 04             	add    $0x4,%edi
 872ef6b:	8b 55 14             	mov    0x14(%ebp),%edx
 872ef6e:	39 7d 10             	cmp    %edi,0x10(%ebp)
 872ef71:	66 89 02             	mov    %ax,(%edx)
 872ef74:	76 08                	jbe    872ef7e <_ZNKSt5ctypeIwE5do_isEPKwS2_Pt+0x6e>
 872ef76:	83 c2 02             	add    $0x2,%edx
 872ef79:	89 55 14             	mov    %edx,0x14(%ebp)
 872ef7c:	eb aa                	jmp    872ef28 <_ZNKSt5ctypeIwE5do_isEPKwS2_Pt+0x18>
 872ef7e:	8b 45 10             	mov    0x10(%ebp),%eax
 872ef81:	83 c4 2c             	add    $0x2c,%esp
 872ef84:	5b                   	pop    %ebx
 872ef85:	5e                   	pop    %esi
 872ef86:	5f                   	pop    %edi
 872ef87:	5d                   	pop    %ebp
 872ef88:	c3                   	ret
 872ef89:	90                   	nop
 872ef8a:	90                   	nop
 872ef8b:	90                   	nop
 872ef8c:	90                   	nop
 872ef8d:	90                   	nop
 872ef8e:	90                   	nop
 872ef8f:	90                   	nop

```

```c
// std::ctype<wchar_t>::do_is @ 0x872ef10

/* std::ctype<wchar_t>::do_is(wchar_t const*, wchar_t const*, unsigned short*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_is(ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,ushort *param_3)

{
  int iVar1;
  int iVar2;
  ushort local_1e;
  
  if (param_1 < param_2) {
    while( true ) {
      iVar2 = 0;
      local_1e = 0;
      do {
        iVar1 = __iswctype_l(*param_1,*(undefined4 *)(this + iVar2 * 4 + 0x4b0),
                             *(undefined4 *)(this + 8));
        if (iVar1 != 0) {
          local_1e = local_1e | *(ushort *)(this + iVar2 * 2 + 0x490);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xc);
      param_1 = param_1 + 1;
      *param_3 = local_1e;
      if (param_2 <= param_1) break;
      param_3 = param_3 + 1;
    }
  }
  return param_2;
}

```

---

## do_is_0872ef90

```asm
// === 0872ef90 std::ctype<wchar_t>::do_is  [0x0872ef90-0x872f02f] ===
 872ef90:	55                   	push   %ebp
 872ef91:	89 e5                	mov    %esp,%ebp
 872ef93:	57                   	push   %edi
 872ef94:	56                   	push   %esi
 872ef95:	53                   	push   %ebx
 872ef96:	31 db                	xor    %ebx,%ebx
 872ef98:	83 ec 1c             	sub    $0x1c,%esp
 872ef9b:	8b 75 08             	mov    0x8(%ebp),%esi
 872ef9e:	0f b7 7d 0c          	movzwl 0xc(%ebp),%edi
 872efa2:	66 39 be 9a 04 00 00 	cmp    %di,0x49a(%esi)
 872efa9:	75 0d                	jne    872efb8 <_ZNKSt5ctypeIwE5do_isEtw+0x28>
 872efab:	eb 4d                	jmp    872effa <_ZNKSt5ctypeIwE5do_isEtw+0x6a>
 872efad:	8d 76 00             	lea    0x0(%esi),%esi
 872efb0:	83 c3 01             	add    $0x1,%ebx
 872efb3:	83 fb 0c             	cmp    $0xc,%ebx
 872efb6:	74 38                	je     872eff0 <_ZNKSt5ctypeIwE5do_isEtw+0x60>
 872efb8:	66 85 bc 5e 90 04 00 	test   %di,0x490(%esi,%ebx,2)
 872efbf:	00 
 872efc0:	74 ee                	je     872efb0 <_ZNKSt5ctypeIwE5do_isEtw+0x20>
 872efc2:	8b 46 08             	mov    0x8(%esi),%eax
 872efc5:	89 44 24 08          	mov    %eax,0x8(%esp)
 872efc9:	8b 84 9e b0 04 00 00 	mov    0x4b0(%esi,%ebx,4),%eax
 872efd0:	89 44 24 04          	mov    %eax,0x4(%esp)
 872efd4:	8b 45 10             	mov    0x10(%ebp),%eax
 872efd7:	89 04 24             	mov    %eax,(%esp)
 872efda:	e8 61 ec 94 ff       	call   807dc40 <__iswctype_l@plt>
 872efdf:	85 c0                	test   %eax,%eax
 872efe1:	75 3a                	jne    872f01d <_ZNKSt5ctypeIwE5do_isEtw+0x8d>
 872efe3:	66 39 bc 5e 90 04 00 	cmp    %di,0x490(%esi,%ebx,2)
 872efea:	00 
 872efeb:	75 c3                	jne    872efb0 <_ZNKSt5ctypeIwE5do_isEtw+0x20>
 872efed:	8d 76 00             	lea    0x0(%esi),%esi
 872eff0:	31 c0                	xor    %eax,%eax
 872eff2:	83 c4 1c             	add    $0x1c,%esp
 872eff5:	5b                   	pop    %ebx
 872eff6:	5e                   	pop    %esi
 872eff7:	5f                   	pop    %edi
 872eff8:	5d                   	pop    %ebp
 872eff9:	c3                   	ret
 872effa:	8b 46 08             	mov    0x8(%esi),%eax
 872effd:	89 44 24 08          	mov    %eax,0x8(%esp)
 872f001:	8b 86 c4 04 00 00    	mov    0x4c4(%esi),%eax
 872f007:	89 44 24 04          	mov    %eax,0x4(%esp)
 872f00b:	8b 45 10             	mov    0x10(%ebp),%eax
 872f00e:	89 04 24             	mov    %eax,(%esp)
 872f011:	e8 2a ec 94 ff       	call   807dc40 <__iswctype_l@plt>
 872f016:	85 c0                	test   %eax,%eax
 872f018:	0f 95 c0             	setne  %al
 872f01b:	eb d5                	jmp    872eff2 <_ZNKSt5ctypeIwE5do_isEtw+0x62>
 872f01d:	b8 01 00 00 00       	mov    $0x1,%eax
 872f022:	eb ce                	jmp    872eff2 <_ZNKSt5ctypeIwE5do_isEtw+0x62>
 872f024:	90                   	nop
 872f025:	90                   	nop
 872f026:	90                   	nop
 872f027:	90                   	nop
 872f028:	90                   	nop
 872f029:	90                   	nop
 872f02a:	90                   	nop
 872f02b:	90                   	nop
 872f02c:	90                   	nop
 872f02d:	90                   	nop
 872f02e:	90                   	nop
 872f02f:	90                   	nop

```

```c
// std::ctype<wchar_t>::do_is @ 0x872ef90

/* std::ctype<wchar_t>::do_is(unsigned short, wchar_t) const */

bool __thiscall std::ctype<wchar_t>::do_is(ctype<wchar_t> *this,ushort param_1,wchar_t param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar2 = 0;
  if (*(ushort *)(this + 0x49a) == param_1) {
    iVar2 = __iswctype_l(param_2,*(undefined4 *)(this + 0x4c4),*(undefined4 *)(this + 8));
    bVar3 = iVar2 != 0;
  }
  else {
    do {
      if ((*(ushort *)(this + iVar2 * 2 + 0x490) & param_1) != 0) {
        iVar1 = __iswctype_l(param_2,*(undefined4 *)(this + iVar2 * 4 + 0x4b0),
                             *(undefined4 *)(this + 8));
        if (iVar1 != 0) {
          return true;
        }
        if (*(ushort *)(this + iVar2 * 2 + 0x490) == param_1) break;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0xc);
    bVar3 = false;
  }
  return bVar3;
}

```

---

## do_narrow

```asm
// === 0872edc0 std::ctype<wchar_t>::do_narrow  [0x0872edc0-0x872ee8f] ===
 872edc0:	55                   	push   %ebp
 872edc1:	89 e5                	mov    %esp,%ebp
 872edc3:	57                   	push   %edi
 872edc4:	56                   	push   %esi
 872edc5:	53                   	push   %ebx
 872edc6:	83 ec 2c             	sub    $0x2c,%esp
 872edc9:	8b 55 08             	mov    0x8(%ebp),%edx
 872edcc:	0f b6 45 14          	movzbl 0x14(%ebp),%eax
 872edd0:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 872edd3:	8b 7d 10             	mov    0x10(%ebp),%edi
 872edd6:	89 55 dc             	mov    %edx,-0x24(%ebp)
 872edd9:	8b 75 18             	mov    0x18(%ebp),%esi
 872eddc:	88 45 e7             	mov    %al,-0x19(%ebp)
 872eddf:	8b 42 08             	mov    0x8(%edx),%eax
 872ede2:	89 04 24             	mov    %eax,(%esp)
 872ede5:	e8 86 f0 94 ff       	call   807de70 <__uselocale@plt>
 872edea:	8b 55 dc             	mov    -0x24(%ebp),%edx
 872eded:	80 7a 0c 00          	cmpb   $0x0,0xc(%edx)
 872edf1:	89 45 e0             	mov    %eax,-0x20(%ebp)
 872edf4:	75 42                	jne    872ee38 <_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc+0x78>
 872edf6:	39 fb                	cmp    %edi,%ebx
 872edf8:	72 2b                	jb     872ee25 <_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc+0x65>
 872edfa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 872ee00:	8b 45 e0             	mov    -0x20(%ebp),%eax
 872ee03:	89 04 24             	mov    %eax,(%esp)
 872ee06:	e8 65 f0 94 ff       	call   807de70 <__uselocale@plt>
 872ee0b:	83 c4 2c             	add    $0x2c,%esp
 872ee0e:	89 f8                	mov    %edi,%eax
 872ee10:	5b                   	pop    %ebx
 872ee11:	5e                   	pop    %esi
 872ee12:	5f                   	pop    %edi
 872ee13:	5d                   	pop    %ebp
 872ee14:	c3                   	ret
 872ee15:	0f b6 55 e7          	movzbl -0x19(%ebp),%edx
 872ee19:	83 c3 04             	add    $0x4,%ebx
 872ee1c:	39 df                	cmp    %ebx,%edi
 872ee1e:	88 16                	mov    %dl,(%esi)
 872ee20:	76 de                	jbe    872ee00 <_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc+0x40>
 872ee22:	83 c6 01             	add    $0x1,%esi
 872ee25:	8b 03                	mov    (%ebx),%eax
 872ee27:	89 04 24             	mov    %eax,(%esp)
 872ee2a:	e8 a1 f4 94 ff       	call   807e2d0 <wctob@plt>
 872ee2f:	83 f8 ff             	cmp    $0xffffffff,%eax
 872ee32:	89 c2                	mov    %eax,%edx
 872ee34:	75 e3                	jne    872ee19 <_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc+0x59>
 872ee36:	eb dd                	jmp    872ee15 <_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc+0x55>
 872ee38:	39 fb                	cmp    %edi,%ebx
 872ee3a:	73 c4                	jae    872ee00 <_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc+0x40>
 872ee3c:	8b 03                	mov    (%ebx),%eax
 872ee3e:	83 f8 7f             	cmp    $0x7f,%eax
 872ee41:	77 1d                	ja     872ee60 <_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc+0xa0>
 872ee43:	90                   	nop
 872ee44:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 872ee48:	0f b6 44 02 0d       	movzbl 0xd(%edx,%eax,1),%eax
 872ee4d:	88 06                	mov    %al,(%esi)
 872ee4f:	83 c3 04             	add    $0x4,%ebx
 872ee52:	39 df                	cmp    %ebx,%edi
 872ee54:	76 aa                	jbe    872ee00 <_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc+0x40>
 872ee56:	8b 03                	mov    (%ebx),%eax
 872ee58:	83 c6 01             	add    $0x1,%esi
 872ee5b:	83 f8 7f             	cmp    $0x7f,%eax
 872ee5e:	76 e8                	jbe    872ee48 <_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc+0x88>
 872ee60:	89 55 dc             	mov    %edx,-0x24(%ebp)
 872ee63:	89 04 24             	mov    %eax,(%esp)
 872ee66:	e8 65 f4 94 ff       	call   807e2d0 <wctob@plt>
 872ee6b:	8b 55 dc             	mov    -0x24(%ebp),%edx
 872ee6e:	83 f8 ff             	cmp    $0xffffffff,%eax
 872ee71:	89 c1                	mov    %eax,%ecx
 872ee73:	74 0b                	je     872ee80 <_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc+0xc0>
 872ee75:	88 0e                	mov    %cl,(%esi)
 872ee77:	eb d6                	jmp    872ee4f <_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc+0x8f>
 872ee79:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 872ee80:	0f b6 4d e7          	movzbl -0x19(%ebp),%ecx
 872ee84:	88 0e                	mov    %cl,(%esi)
 872ee86:	eb c7                	jmp    872ee4f <_ZNKSt5ctypeIwE9do_narrowEPKwS2_cPc+0x8f>
 872ee88:	90                   	nop
 872ee89:	90                   	nop
 872ee8a:	90                   	nop
 872ee8b:	90                   	nop
 872ee8c:	90                   	nop
 872ee8d:	90                   	nop
 872ee8e:	90                   	nop
 872ee8f:	90                   	nop

```

```c
// std::ctype<wchar_t>::do_narrow @ 0x872edc0

/* std::ctype<wchar_t>::do_narrow(wchar_t const*, wchar_t const*, char, char*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_narrow
          (ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2,char param_3,char *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  wchar_t __c;
  int iVar3;
  
  uVar1 = __uselocale(*(undefined4 *)(this + 8));
  if (this[0xc] == (ctype<wchar_t>)0x0) {
    if (param_1 < param_2) {
      while( true ) {
        uVar2 = wctob(*param_1);
        if (uVar2 == 0xffffffff) {
          uVar2 = (uint)(byte)param_3;
        }
        param_1 = param_1 + 1;
        *param_4 = (char)uVar2;
        if (param_2 <= param_1) break;
        param_4 = param_4 + 1;
      }
    }
  }
  else if (param_1 < param_2) {
    __c = *param_1;
    if (0x7f < (uint)__c) goto LAB_0872ee60;
    do {
      *param_4 = (char)this[__c + L'\r'];
      while( true ) {
        param_1 = param_1 + 1;
        if (param_2 <= param_1) goto LAB_0872ee00;
        __c = *param_1;
        param_4 = param_4 + 1;
        if ((uint)__c < 0x80) break;
LAB_0872ee60:
        iVar3 = wctob(__c);
        if (iVar3 == -1) {
          *param_4 = param_3;
        }
        else {
          *param_4 = (char)SUB41(iVar3,0);
        }
      }
    } while( true );
  }
LAB_0872ee00:
  __uselocale(uVar1);
  return param_2;
}

```

---

## do_narrow_0872ee90

```asm
// === 0872ee90 std::ctype<wchar_t>::do_narrow  [0x0872ee90-0x872ef0f] ===
 872ee90:	55                   	push   %ebp
 872ee91:	89 e5                	mov    %esp,%ebp
 872ee93:	83 ec 28             	sub    $0x28,%esp
 872ee96:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 872ee99:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 872ee9c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 872ee9f:	8b 45 08             	mov    0x8(%ebp),%eax
 872eea2:	89 7d fc             	mov    %edi,-0x4(%ebp)
 872eea5:	0f b6 75 10          	movzbl 0x10(%ebp),%esi
 872eea9:	83 fb 7f             	cmp    $0x7f,%ebx
 872eeac:	77 06                	ja     872eeb4 <_ZNKSt5ctypeIwE9do_narrowEwc+0x24>
 872eeae:	80 78 0c 00          	cmpb   $0x0,0xc(%eax)
 872eeb2:	75 3c                	jne    872eef0 <_ZNKSt5ctypeIwE9do_narrowEwc+0x60>
 872eeb4:	8b 40 08             	mov    0x8(%eax),%eax
 872eeb7:	89 04 24             	mov    %eax,(%esp)
 872eeba:	e8 b1 ef 94 ff       	call   807de70 <__uselocale@plt>
 872eebf:	89 1c 24             	mov    %ebx,(%esp)
 872eec2:	89 c7                	mov    %eax,%edi
 872eec4:	e8 07 f4 94 ff       	call   807e2d0 <wctob@plt>
 872eec9:	89 3c 24             	mov    %edi,(%esp)
 872eecc:	89 c3                	mov    %eax,%ebx
 872eece:	e8 9d ef 94 ff       	call   807de70 <__uselocale@plt>
 872eed3:	83 fb ff             	cmp    $0xffffffff,%ebx
 872eed6:	74 02                	je     872eeda <_ZNKSt5ctypeIwE9do_narrowEwc+0x4a>
 872eed8:	89 de                	mov    %ebx,%esi
 872eeda:	89 f0                	mov    %esi,%eax
 872eedc:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 872eedf:	8b 75 f8             	mov    -0x8(%ebp),%esi
 872eee2:	8b 7d fc             	mov    -0x4(%ebp),%edi
 872eee5:	89 ec                	mov    %ebp,%esp
 872eee7:	5d                   	pop    %ebp
 872eee8:	c3                   	ret
 872eee9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 872eef0:	0f b6 74 18 0d       	movzbl 0xd(%eax,%ebx,1),%esi
 872eef5:	8b 7d fc             	mov    -0x4(%ebp),%edi
 872eef8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 872eefb:	89 f0                	mov    %esi,%eax
 872eefd:	8b 75 f8             	mov    -0x8(%ebp),%esi
 872ef00:	89 ec                	mov    %ebp,%esp
 872ef02:	5d                   	pop    %ebp
 872ef03:	c3                   	ret
 872ef04:	90                   	nop
 872ef05:	90                   	nop
 872ef06:	90                   	nop
 872ef07:	90                   	nop
 872ef08:	90                   	nop
 872ef09:	90                   	nop
 872ef0a:	90                   	nop
 872ef0b:	90                   	nop
 872ef0c:	90                   	nop
 872ef0d:	90                   	nop
 872ef0e:	90                   	nop
 872ef0f:	90                   	nop

```

```c
// std::ctype<wchar_t>::do_narrow @ 0x872ee90

/* std::ctype<wchar_t>::do_narrow(wchar_t, char) const */

uint __thiscall std::ctype<wchar_t>::do_narrow(ctype<wchar_t> *this,wchar_t param_1,char param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  if (((uint)param_1 < 0x80) && (this[0xc] != (ctype<wchar_t>)0x0)) {
    return (uint)(byte)this[param_1 + L'\r'];
  }
  uVar1 = __uselocale(*(undefined4 *)(this + 8));
  uVar2 = wctob(param_1);
  __uselocale(uVar1);
  uVar3 = (uint)(byte)param_2;
  if (uVar2 != 0xffffffff) {
    uVar3 = uVar2;
  }
  return uVar3;
}

```

---

## do_scan_is

```asm
// === 0872eca0 std::ctype<wchar_t>::do_scan_is  [0x0872eca0-0x872ecff] ===
 872eca0:	55                   	push   %ebp
 872eca1:	89 e5                	mov    %esp,%ebp
 872eca3:	57                   	push   %edi
 872eca4:	56                   	push   %esi
 872eca5:	53                   	push   %ebx
 872eca6:	83 ec 2c             	sub    $0x2c,%esp
 872eca9:	8b 5d 10             	mov    0x10(%ebp),%ebx
 872ecac:	8b 7d 14             	mov    0x14(%ebp),%edi
 872ecaf:	8b 75 08             	mov    0x8(%ebp),%esi
 872ecb2:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 872ecb6:	39 fb                	cmp    %edi,%ebx
 872ecb8:	72 0e                	jb     872ecc8 <_ZNKSt5ctypeIwE10do_scan_isEtPKwS2_+0x28>
 872ecba:	83 c4 2c             	add    $0x2c,%esp
 872ecbd:	89 d8                	mov    %ebx,%eax
 872ecbf:	5b                   	pop    %ebx
 872ecc0:	5e                   	pop    %esi
 872ecc1:	5f                   	pop    %edi
 872ecc2:	5d                   	pop    %ebp
 872ecc3:	c3                   	ret
 872ecc4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 872ecc8:	0f b7 c0             	movzwl %ax,%eax
 872eccb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 872ecce:	8b 13                	mov    (%ebx),%edx
 872ecd0:	8b 06                	mov    (%esi),%eax
 872ecd2:	89 34 24             	mov    %esi,(%esp)
 872ecd5:	89 54 24 08          	mov    %edx,0x8(%esp)
 872ecd9:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 872ecdc:	89 54 24 04          	mov    %edx,0x4(%esp)
 872ece0:	ff 50 08             	call   *0x8(%eax)
 872ece3:	84 c0                	test   %al,%al
 872ece5:	75 d3                	jne    872ecba <_ZNKSt5ctypeIwE10do_scan_isEtPKwS2_+0x1a>
 872ece7:	83 c3 04             	add    $0x4,%ebx
 872ecea:	39 df                	cmp    %ebx,%edi
 872ecec:	77 e0                	ja     872ecce <_ZNKSt5ctypeIwE10do_scan_isEtPKwS2_+0x2e>
 872ecee:	83 c4 2c             	add    $0x2c,%esp
 872ecf1:	89 d8                	mov    %ebx,%eax
 872ecf3:	5b                   	pop    %ebx
 872ecf4:	5e                   	pop    %esi
 872ecf5:	5f                   	pop    %edi
 872ecf6:	5d                   	pop    %ebp
 872ecf7:	c3                   	ret
 872ecf8:	90                   	nop
 872ecf9:	90                   	nop
 872ecfa:	90                   	nop
 872ecfb:	90                   	nop
 872ecfc:	90                   	nop
 872ecfd:	90                   	nop
 872ecfe:	90                   	nop
 872ecff:	90                   	nop

```

```c
// std::ctype<wchar_t>::do_scan_is @ 0x872eca0

/* std::ctype<wchar_t>::do_scan_is(unsigned short, wchar_t const*, wchar_t const*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_scan_is
          (ctype<wchar_t> *this,ushort param_1,wchar_t *param_2,wchar_t *param_3)

{
  char cVar1;
  
  if (param_2 < param_3) {
    while (cVar1 = (**(code **)(*(int *)this + 8))(this,param_1,*param_2), cVar1 == '\0') {
      param_2 = param_2 + 1;
      if (param_3 <= param_2) {
        return param_2;
      }
    }
  }
  return param_2;
}

```

---

## do_scan_not

```asm
// === 0872ed00 std::ctype<wchar_t>::do_scan_not  [0x0872ed00-0x872ed5f] ===
 872ed00:	55                   	push   %ebp
 872ed01:	89 e5                	mov    %esp,%ebp
 872ed03:	57                   	push   %edi
 872ed04:	56                   	push   %esi
 872ed05:	53                   	push   %ebx
 872ed06:	83 ec 2c             	sub    $0x2c,%esp
 872ed09:	8b 5d 10             	mov    0x10(%ebp),%ebx
 872ed0c:	8b 7d 14             	mov    0x14(%ebp),%edi
 872ed0f:	8b 75 08             	mov    0x8(%ebp),%esi
 872ed12:	0f b7 45 0c          	movzwl 0xc(%ebp),%eax
 872ed16:	39 fb                	cmp    %edi,%ebx
 872ed18:	72 0e                	jb     872ed28 <_ZNKSt5ctypeIwE11do_scan_notEtPKwS2_+0x28>
 872ed1a:	83 c4 2c             	add    $0x2c,%esp
 872ed1d:	89 d8                	mov    %ebx,%eax
 872ed1f:	5b                   	pop    %ebx
 872ed20:	5e                   	pop    %esi
 872ed21:	5f                   	pop    %edi
 872ed22:	5d                   	pop    %ebp
 872ed23:	c3                   	ret
 872ed24:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 872ed28:	0f b7 c0             	movzwl %ax,%eax
 872ed2b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 872ed2e:	8b 13                	mov    (%ebx),%edx
 872ed30:	8b 06                	mov    (%esi),%eax
 872ed32:	89 34 24             	mov    %esi,(%esp)
 872ed35:	89 54 24 08          	mov    %edx,0x8(%esp)
 872ed39:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 872ed3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 872ed40:	ff 50 08             	call   *0x8(%eax)
 872ed43:	84 c0                	test   %al,%al
 872ed45:	74 d3                	je     872ed1a <_ZNKSt5ctypeIwE11do_scan_notEtPKwS2_+0x1a>
 872ed47:	83 c3 04             	add    $0x4,%ebx
 872ed4a:	39 df                	cmp    %ebx,%edi
 872ed4c:	77 e0                	ja     872ed2e <_ZNKSt5ctypeIwE11do_scan_notEtPKwS2_+0x2e>
 872ed4e:	83 c4 2c             	add    $0x2c,%esp
 872ed51:	89 d8                	mov    %ebx,%eax
 872ed53:	5b                   	pop    %ebx
 872ed54:	5e                   	pop    %esi
 872ed55:	5f                   	pop    %edi
 872ed56:	5d                   	pop    %ebp
 872ed57:	c3                   	ret
 872ed58:	90                   	nop
 872ed59:	90                   	nop
 872ed5a:	90                   	nop
 872ed5b:	90                   	nop
 872ed5c:	90                   	nop
 872ed5d:	90                   	nop
 872ed5e:	90                   	nop
 872ed5f:	90                   	nop

```

```c
// std::ctype<wchar_t>::do_scan_not @ 0x872ed00

/* std::ctype<wchar_t>::do_scan_not(unsigned short, wchar_t const*, wchar_t const*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_scan_not
          (ctype<wchar_t> *this,ushort param_1,wchar_t *param_2,wchar_t *param_3)

{
  char cVar1;
  
  if (param_2 < param_3) {
    while (cVar1 = (**(code **)(*(int *)this + 8))(this,param_1,*param_2), cVar1 != '\0') {
      param_2 = param_2 + 1;
      if (param_3 <= param_2) {
        return param_2;
      }
    }
  }
  return param_2;
}

```

---

## do_tolower

```asm
// === 0872f030 std::ctype<wchar_t>::do_tolower  [0x0872f030-0x872f06f] ===
 872f030:	55                   	push   %ebp
 872f031:	89 e5                	mov    %esp,%ebp
 872f033:	57                   	push   %edi
 872f034:	56                   	push   %esi
 872f035:	53                   	push   %ebx
 872f036:	83 ec 1c             	sub    $0x1c,%esp
 872f039:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 872f03c:	8b 75 10             	mov    0x10(%ebp),%esi
 872f03f:	8b 7d 08             	mov    0x8(%ebp),%edi
 872f042:	39 f3                	cmp    %esi,%ebx
 872f044:	73 1c                	jae    872f062 <_ZNKSt5ctypeIwE10do_tolowerEPwPKw+0x32>
 872f046:	66 90                	xchg   %ax,%ax
 872f048:	8b 47 08             	mov    0x8(%edi),%eax
 872f04b:	89 44 24 04          	mov    %eax,0x4(%esp)
 872f04f:	8b 03                	mov    (%ebx),%eax
 872f051:	89 04 24             	mov    %eax,(%esp)
 872f054:	e8 c7 e9 94 ff       	call   807da20 <__towlower_l@plt>
 872f059:	89 03                	mov    %eax,(%ebx)
 872f05b:	83 c3 04             	add    $0x4,%ebx
 872f05e:	39 de                	cmp    %ebx,%esi
 872f060:	77 e6                	ja     872f048 <_ZNKSt5ctypeIwE10do_tolowerEPwPKw+0x18>
 872f062:	83 c4 1c             	add    $0x1c,%esp
 872f065:	89 f0                	mov    %esi,%eax
 872f067:	5b                   	pop    %ebx
 872f068:	5e                   	pop    %esi
 872f069:	5f                   	pop    %edi
 872f06a:	5d                   	pop    %ebp
 872f06b:	c3                   	ret
 872f06c:	90                   	nop
 872f06d:	90                   	nop
 872f06e:	90                   	nop
 872f06f:	90                   	nop

```

```c
// std::ctype<wchar_t>::do_tolower @ 0x872f030

/* std::ctype<wchar_t>::do_tolower(wchar_t*, wchar_t const*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_tolower(ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    wVar1 = __towlower_l(*param_1,*(undefined4 *)(this + 8));
    *param_1 = wVar1;
  }
  return param_2;
}

```

---

## do_tolower_0872f070

```asm
// === 0872f070 std::ctype<wchar_t>::do_tolower  [0x0872f070-0x872f08f] ===
 872f070:	55                   	push   %ebp
 872f071:	89 e5                	mov    %esp,%ebp
 872f073:	83 ec 08             	sub    $0x8,%esp
 872f076:	8b 55 08             	mov    0x8(%ebp),%edx
 872f079:	8b 45 0c             	mov    0xc(%ebp),%eax
 872f07c:	8b 52 08             	mov    0x8(%edx),%edx
 872f07f:	89 45 08             	mov    %eax,0x8(%ebp)
 872f082:	89 55 0c             	mov    %edx,0xc(%ebp)
 872f085:	c9                   	leave
 872f086:	e9 95 e9 94 ff       	jmp    807da20 <__towlower_l@plt>
 872f08b:	90                   	nop
 872f08c:	90                   	nop
 872f08d:	90                   	nop
 872f08e:	90                   	nop
 872f08f:	90                   	nop

```

```c
// std::ctype<wchar_t>::do_tolower @ 0x872f070

/* std::ctype<wchar_t>::do_tolower(wchar_t) const */

void std::ctype<wchar_t>::do_tolower(wchar_t param_1)

{
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(param_1 + L'\b');
  __towlower_l();
  return;
}

```

---

## do_toupper

```asm
// === 0872f090 std::ctype<wchar_t>::do_toupper  [0x0872f090-0x872f0cf] ===
 872f090:	55                   	push   %ebp
 872f091:	89 e5                	mov    %esp,%ebp
 872f093:	57                   	push   %edi
 872f094:	56                   	push   %esi
 872f095:	53                   	push   %ebx
 872f096:	83 ec 1c             	sub    $0x1c,%esp
 872f099:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 872f09c:	8b 75 10             	mov    0x10(%ebp),%esi
 872f09f:	8b 7d 08             	mov    0x8(%ebp),%edi
 872f0a2:	39 f3                	cmp    %esi,%ebx
 872f0a4:	73 1c                	jae    872f0c2 <_ZNKSt5ctypeIwE10do_toupperEPwPKw+0x32>
 872f0a6:	66 90                	xchg   %ax,%ax
 872f0a8:	8b 47 08             	mov    0x8(%edi),%eax
 872f0ab:	89 44 24 04          	mov    %eax,0x4(%esp)
 872f0af:	8b 03                	mov    (%ebx),%eax
 872f0b1:	89 04 24             	mov    %eax,(%esp)
 872f0b4:	e8 37 ef 94 ff       	call   807dff0 <__towupper_l@plt>
 872f0b9:	89 03                	mov    %eax,(%ebx)
 872f0bb:	83 c3 04             	add    $0x4,%ebx
 872f0be:	39 de                	cmp    %ebx,%esi
 872f0c0:	77 e6                	ja     872f0a8 <_ZNKSt5ctypeIwE10do_toupperEPwPKw+0x18>
 872f0c2:	83 c4 1c             	add    $0x1c,%esp
 872f0c5:	89 f0                	mov    %esi,%eax
 872f0c7:	5b                   	pop    %ebx
 872f0c8:	5e                   	pop    %esi
 872f0c9:	5f                   	pop    %edi
 872f0ca:	5d                   	pop    %ebp
 872f0cb:	c3                   	ret
 872f0cc:	90                   	nop
 872f0cd:	90                   	nop
 872f0ce:	90                   	nop
 872f0cf:	90                   	nop

```

```c
// std::ctype<wchar_t>::do_toupper @ 0x872f090

/* std::ctype<wchar_t>::do_toupper(wchar_t*, wchar_t const*) const */

wchar_t * __thiscall
std::ctype<wchar_t>::do_toupper(ctype<wchar_t> *this,wchar_t *param_1,wchar_t *param_2)

{
  wchar_t wVar1;
  
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    wVar1 = __towupper_l(*param_1,*(undefined4 *)(this + 8));
    *param_1 = wVar1;
  }
  return param_2;
}

```

---

## do_toupper_0872f0d0

```asm
// === 0872f0d0 std::ctype<wchar_t>::do_toupper  [0x0872f0d0-0x872f0ef] ===
 872f0d0:	55                   	push   %ebp
 872f0d1:	89 e5                	mov    %esp,%ebp
 872f0d3:	83 ec 08             	sub    $0x8,%esp
 872f0d6:	8b 55 08             	mov    0x8(%ebp),%edx
 872f0d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 872f0dc:	8b 52 08             	mov    0x8(%edx),%edx
 872f0df:	89 45 08             	mov    %eax,0x8(%ebp)
 872f0e2:	89 55 0c             	mov    %edx,0xc(%ebp)
 872f0e5:	c9                   	leave
 872f0e6:	e9 05 ef 94 ff       	jmp    807dff0 <__towupper_l@plt>
 872f0eb:	90                   	nop
 872f0ec:	90                   	nop
 872f0ed:	90                   	nop
 872f0ee:	90                   	nop
 872f0ef:	90                   	nop

```

```c
// std::ctype<wchar_t>::do_toupper @ 0x872f0d0

/* std::ctype<wchar_t>::do_toupper(wchar_t) const */

void std::ctype<wchar_t>::do_toupper(wchar_t param_1)

{
  undefined4 uStack00000008;
  
  uStack00000008 = *(undefined4 *)(param_1 + L'\b');
  __towupper_l();
  return;
}

```

---

## do_widen

```asm
// === 0872ed60 std::ctype<wchar_t>::do_widen  [0x0872ed60-0x872ed7f] ===
 872ed60:	55                   	push   %ebp
 872ed61:	89 e5                	mov    %esp,%ebp
 872ed63:	0f b6 55 0c          	movzbl 0xc(%ebp),%edx
 872ed67:	8b 45 08             	mov    0x8(%ebp),%eax
 872ed6a:	5d                   	pop    %ebp
 872ed6b:	8b 84 90 90 00 00 00 	mov    0x90(%eax,%edx,4),%eax
 872ed72:	c3                   	ret
 872ed73:	90                   	nop
 872ed74:	90                   	nop
 872ed75:	90                   	nop
 872ed76:	90                   	nop
 872ed77:	90                   	nop
 872ed78:	90                   	nop
 872ed79:	90                   	nop
 872ed7a:	90                   	nop
 872ed7b:	90                   	nop
 872ed7c:	90                   	nop
 872ed7d:	90                   	nop
 872ed7e:	90                   	nop
 872ed7f:	90                   	nop

```

```c
// std::ctype<wchar_t>::do_widen @ 0x872ed60

/* std::ctype<wchar_t>::do_widen(char) const */

undefined4 __thiscall std::ctype<wchar_t>::do_widen(ctype<wchar_t> *this,char param_1)

{
  return *(undefined4 *)(this + (uint)(byte)param_1 * 4 + 0x90);
}

```

---

## do_widen_0872ed80

```asm
// === 0872ed80 std::ctype<wchar_t>::do_widen  [0x0872ed80-0x872edbf] ===
 872ed80:	55                   	push   %ebp
 872ed81:	89 e5                	mov    %esp,%ebp
 872ed83:	8b 55 0c             	mov    0xc(%ebp),%edx
 872ed86:	8b 45 10             	mov    0x10(%ebp),%eax
 872ed89:	56                   	push   %esi
 872ed8a:	8b 4d 14             	mov    0x14(%ebp),%ecx
 872ed8d:	53                   	push   %ebx
 872ed8e:	8b 75 08             	mov    0x8(%ebp),%esi
 872ed91:	39 c2                	cmp    %eax,%edx
 872ed93:	73 19                	jae    872edae <_ZNKSt5ctypeIwE8do_widenEPKcS2_Pw+0x2e>
 872ed95:	8d 76 00             	lea    0x0(%esi),%esi
 872ed98:	0f b6 1a             	movzbl (%edx),%ebx
 872ed9b:	83 c2 01             	add    $0x1,%edx
 872ed9e:	8b 9c 9e 90 00 00 00 	mov    0x90(%esi,%ebx,4),%ebx
 872eda5:	89 19                	mov    %ebx,(%ecx)
 872eda7:	83 c1 04             	add    $0x4,%ecx
 872edaa:	39 d0                	cmp    %edx,%eax
 872edac:	77 ea                	ja     872ed98 <_ZNKSt5ctypeIwE8do_widenEPKcS2_Pw+0x18>
 872edae:	5b                   	pop    %ebx
 872edaf:	5e                   	pop    %esi
 872edb0:	5d                   	pop    %ebp
 872edb1:	c3                   	ret
 872edb2:	90                   	nop
 872edb3:	90                   	nop
 872edb4:	90                   	nop
 872edb5:	90                   	nop
 872edb6:	90                   	nop
 872edb7:	90                   	nop
 872edb8:	90                   	nop
 872edb9:	90                   	nop
 872edba:	90                   	nop
 872edbb:	90                   	nop
 872edbc:	90                   	nop
 872edbd:	90                   	nop
 872edbe:	90                   	nop
 872edbf:	90                   	nop

```

```c
// std::ctype<wchar_t>::do_widen @ 0x872ed80

/* std::ctype<wchar_t>::do_widen(char const*, char const*, wchar_t*) const */

void __thiscall
std::ctype<wchar_t>::do_widen(ctype<wchar_t> *this,char *param_1,char *param_2,wchar_t *param_3)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    *param_3 = *(wchar_t *)(this + (uint)(byte)*param_1 * 4 + 0x90);
    param_3 = param_3 + 1;
  }
  return;
}

```

---

## ~ctype

```asm
// === 087267a0 std::ctype<wchar_t>::~ctype  [0x087267a0-0x87267ef] ===
 87267a0:	55                   	push   %ebp
 87267a1:	89 e5                	mov    %esp,%ebp
 87267a3:	53                   	push   %ebx
 87267a4:	83 ec 24             	sub    $0x24,%esp
 87267a7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87267aa:	c7 03 88 1d d0 08    	movl   $0x8d01d88,(%ebx)
 87267b0:	8d 43 08             	lea    0x8(%ebx),%eax
 87267b3:	89 04 24             	mov    %eax,(%esp)
 87267b6:	e8 75 c3 ff ff       	call   8722b30 <_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct>
 87267bb:	c7 03 88 0a d0 08    	movl   $0x8d00a88,(%ebx)
 87267c1:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87267c4:	83 c4 24             	add    $0x24,%esp
 87267c7:	5b                   	pop    %ebx
 87267c8:	5d                   	pop    %ebp
 87267c9:	e9 d2 45 fb ff       	jmp    86dada0 <_ZNSt6locale5facetD1Ev>
 87267ce:	c7 03 88 0a d0 08    	movl   $0x8d00a88,(%ebx)
 87267d4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 87267d7:	89 1c 24             	mov    %ebx,(%esp)
 87267da:	e8 c1 45 fb ff       	call   86dada0 <_ZNSt6locale5facetD1Ev>
 87267df:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87267e2:	89 04 24             	mov    %eax,(%esp)
 87267e5:	e8 66 cf 3b 00       	call   8ae3750 <_Unwind_Resume>
 87267ea:	90                   	nop
 87267eb:	90                   	nop
 87267ec:	90                   	nop
 87267ed:	90                   	nop
 87267ee:	90                   	nop
 87267ef:	90                   	nop

```

```c
// std::ctype<wchar_t>::~ctype @ 0x87267a0

/* std::ctype<wchar_t>::~ctype() */

void __thiscall std::ctype<wchar_t>::~ctype(ctype<wchar_t> *this)

{
  *(undefined ***)this = &PTR__ctype_08d01d88;
                    /* try { // try from 087267b6 to 087267ba has its CatchHandler @ 087267ce */
  locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 8));
  *(undefined ***)this = &PTR____ctype_abstract_base_08d00a88;
  locale::facet::~facet((facet *)this);
  return;
}

```

---

## ~ctype_08726830

```asm
// === 08726830 std::ctype<wchar_t>::~ctype  [0x08726830-0x872684f] ===
 8726830:	55                   	push   %ebp
 8726831:	89 e5                	mov    %esp,%ebp
 8726833:	53                   	push   %ebx
 8726834:	83 ec 14             	sub    $0x14,%esp
 8726837:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872683a:	89 1c 24             	mov    %ebx,(%esp)
 872683d:	e8 5e ff ff ff       	call   87267a0 <_ZNSt5ctypeIwED1Ev>
 8726842:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8726845:	83 c4 14             	add    $0x14,%esp
 8726848:	5b                   	pop    %ebx
 8726849:	5d                   	pop    %ebp
 872684a:	e9 a1 dc ff ff       	jmp    87244f0 <_ZdlPv>
 872684f:	90                   	nop

```

```c
// std::ctype<wchar_t>::~ctype @ 0x8726830

/* std::ctype<wchar_t>::~ctype() */

void __thiscall std::ctype<wchar_t>::~ctype(ctype<wchar_t> *this)

{
  ~ctype(this);
  operator_delete(this);
  return;
}

```

