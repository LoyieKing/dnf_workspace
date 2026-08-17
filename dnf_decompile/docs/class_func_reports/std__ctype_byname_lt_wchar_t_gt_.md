# std__ctype_byname_lt_wchar_t_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ctype_byname

```asm
// === 08726910 std::ctype_byname<wchar_t>::ctype_byname  [0x08726910-0x87269bf] ===
 8726910:	55                   	push   %ebp
 8726911:	89 e5                	mov    %esp,%ebp
 8726913:	83 ec 28             	sub    $0x28,%esp
 8726916:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8726919:	8b 45 10             	mov    0x10(%ebp),%eax
 872691c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872691f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8726922:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8726925:	bf c7 cd d3 08       	mov    $0x8d3cdc7,%edi
 872692a:	89 44 24 04          	mov    %eax,0x4(%esp)
 872692e:	89 1c 24             	mov    %ebx,(%esp)
 8726931:	e8 7a ff ff ff       	call   87268b0 <_ZNSt5ctypeIwEC1Ej>
 8726936:	8b 75 0c             	mov    0xc(%ebp),%esi
 8726939:	b9 02 00 00 00       	mov    $0x2,%ecx
 872693e:	c7 03 48 1d d0 08    	movl   $0x8d01d48,(%ebx)
 8726944:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8726946:	74 11                	je     8726959 <_ZNSt12ctype_bynameIwEC1EPKcj+0x49>
 8726948:	8b 75 0c             	mov    0xc(%ebp),%esi
 872694b:	bf 3c ed cf 08       	mov    $0x8cfed3c,%edi
 8726950:	b9 06 00 00 00       	mov    $0x6,%ecx
 8726955:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8726957:	75 0f                	jne    8726968 <_ZNSt12ctype_bynameIwEC1EPKcj+0x58>
 8726959:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 872695c:	8b 75 f8             	mov    -0x8(%ebp),%esi
 872695f:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8726962:	89 ec                	mov    %ebp,%esp
 8726964:	5d                   	pop    %ebp
 8726965:	c3                   	ret
 8726966:	66 90                	xchg   %ax,%ax
 8726968:	8d 73 08             	lea    0x8(%ebx),%esi
 872696b:	89 34 24             	mov    %esi,(%esp)
 872696e:	e8 bd c1 ff ff       	call   8722b30 <_ZNSt6locale5facet19_S_destroy_c_localeERP15__locale_struct>
 8726973:	8b 45 0c             	mov    0xc(%ebp),%eax
 8726976:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 872697d:	00 
 872697e:	89 34 24             	mov    %esi,(%esp)
 8726981:	89 44 24 04          	mov    %eax,0x4(%esp)
 8726985:	e8 d6 c1 ff ff       	call   8722b60 <_ZNSt6locale5facet18_S_create_c_localeERP15__locale_structPKcS2_>
 872698a:	89 1c 24             	mov    %ebx,(%esp)
 872698d:	e8 ce 88 00 00       	call   872f260 <_ZNSt5ctypeIwE19_M_initialize_ctypeEv>
 8726992:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8726995:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8726998:	8b 7d fc             	mov    -0x4(%ebp),%edi
 872699b:	89 ec                	mov    %ebp,%esp
 872699d:	5d                   	pop    %ebp
 872699e:	c3                   	ret
 872699f:	89 c6                	mov    %eax,%esi
 87269a1:	89 1c 24             	mov    %ebx,(%esp)
 87269a4:	e8 f7 fd ff ff       	call   87267a0 <_ZNSt5ctypeIwED1Ev>
 87269a9:	89 34 24             	mov    %esi,(%esp)
 87269ac:	e8 9f cd 3b 00       	call   8ae3750 <_Unwind_Resume>
 87269b1:	90                   	nop
 87269b2:	90                   	nop
 87269b3:	90                   	nop
 87269b4:	90                   	nop
 87269b5:	90                   	nop
 87269b6:	90                   	nop
 87269b7:	90                   	nop
 87269b8:	90                   	nop
 87269b9:	90                   	nop
 87269ba:	90                   	nop
 87269bb:	90                   	nop
 87269bc:	90                   	nop
 87269bd:	90                   	nop
 87269be:	90                   	nop
 87269bf:	90                   	nop

```

```c
// std::ctype_byname<wchar_t>::ctype_byname @ 0x8726910

/* std::ctype_byname<wchar_t>::ctype_byname(char const*, unsigned int) */

void __thiscall
std::ctype_byname<wchar_t>::ctype_byname(ctype_byname<wchar_t> *this,char *param_1,uint param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 uVar4;
  byte bVar5;
  
  bVar5 = 0;
  uVar4 = &stack0x00000000 == (undefined1 *)0x2c;
  ctype<wchar_t>::ctype((ctype<wchar_t> *)this,param_2);
  iVar1 = 2;
  *(undefined ***)this = &PTR__ctype_byname_08d01d48;
  pcVar2 = param_1;
  pcVar3 = "C";
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    uVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + (uint)bVar5 * -2 + 1;
    pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
  } while ((bool)uVar4);
  if (!(bool)uVar4) {
    iVar1 = 6;
    pcVar2 = param_1;
    pcVar3 = "POSIX";
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      uVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + (uint)bVar5 * -2 + 1;
      pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
    } while ((bool)uVar4);
    if (!(bool)uVar4) {
                    /* try { // try from 0872696e to 08726991 has its CatchHandler @ 0872699f */
      locale::facet::_S_destroy_c_locale((__locale_struct **)(this + 8));
      locale::facet::_S_create_c_locale
                ((__locale_struct **)(this + 8),param_1,(__locale_struct *)0x0);
      ctype<wchar_t>::_M_initialize_ctype((ctype<wchar_t> *)this);
      return;
    }
  }
  return;
}

```

---

## ~ctype_byname

```asm
// === 087267f0 std::ctype_byname<wchar_t>::~ctype_byname  [0x087267f0-0x872680f] ===
 87267f0:	55                   	push   %ebp
 87267f1:	89 e5                	mov    %esp,%ebp
 87267f3:	83 ec 08             	sub    $0x8,%esp
 87267f6:	8b 45 08             	mov    0x8(%ebp),%eax
 87267f9:	c7 00 48 1d d0 08    	movl   $0x8d01d48,(%eax)
 87267ff:	c9                   	leave
 8726800:	e9 9b ff ff ff       	jmp    87267a0 <_ZNSt5ctypeIwED1Ev>
 8726805:	90                   	nop
 8726806:	90                   	nop
 8726807:	90                   	nop
 8726808:	90                   	nop
 8726809:	90                   	nop
 872680a:	90                   	nop
 872680b:	90                   	nop
 872680c:	90                   	nop
 872680d:	90                   	nop
 872680e:	90                   	nop
 872680f:	90                   	nop

```

```c
// std::ctype_byname<wchar_t>::~ctype_byname @ 0x87267f0

/* std::ctype_byname<wchar_t>::~ctype_byname() */

void __thiscall std::ctype_byname<wchar_t>::~ctype_byname(ctype_byname<wchar_t> *this)

{
  *(undefined ***)this = &PTR__ctype_byname_08d01d48;
  ctype<wchar_t>::~ctype((ctype<wchar_t> *)this);
  return;
}

```

---

## ~ctype_byname_08726810

```asm
// === 08726810 std::ctype_byname<wchar_t>::~ctype_byname  [0x08726810-0x872682f] ===
 8726810:	55                   	push   %ebp
 8726811:	89 e5                	mov    %esp,%ebp
 8726813:	53                   	push   %ebx
 8726814:	83 ec 14             	sub    $0x14,%esp
 8726817:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872681a:	89 1c 24             	mov    %ebx,(%esp)
 872681d:	e8 ce ff ff ff       	call   87267f0 <_ZNSt12ctype_bynameIwED1Ev>
 8726822:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8726825:	83 c4 14             	add    $0x14,%esp
 8726828:	5b                   	pop    %ebx
 8726829:	5d                   	pop    %ebp
 872682a:	e9 c1 dc ff ff       	jmp    87244f0 <_ZdlPv>
 872682f:	90                   	nop

```

```c
// std::ctype_byname<wchar_t>::~ctype_byname @ 0x8726810

/* std::ctype_byname<wchar_t>::~ctype_byname() */

void __thiscall std::ctype_byname<wchar_t>::~ctype_byname(ctype_byname<wchar_t> *this)

{
  ~ctype_byname(this);
  operator_delete(this);
  return;
}

```

