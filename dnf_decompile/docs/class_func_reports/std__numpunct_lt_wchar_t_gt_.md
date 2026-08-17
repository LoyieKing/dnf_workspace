# std__numpunct_lt_wchar_t_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## _M_initialize_numpunct

```asm
// === 08721150 std::numpunct<wchar_t>::_M_initialize_numpunct  [0x08721150-0x87212cf] ===
 8721150:	55                   	push   %ebp
 8721151:	89 e5                	mov    %esp,%ebp
 8721153:	57                   	push   %edi
 8721154:	56                   	push   %esi
 8721155:	53                   	push   %ebx
 8721156:	83 ec 1c             	sub    $0x1c,%esp
 8721159:	8b 75 08             	mov    0x8(%ebp),%esi
 872115c:	8b 7d 0c             	mov    0xc(%ebp),%edi
 872115f:	8b 46 08             	mov    0x8(%esi),%eax
 8721162:	85 c0                	test   %eax,%eax
 8721164:	0f 84 fe 00 00 00    	je     8721268 <_ZNSt8numpunctIwE22_M_initialize_numpunctEP15__locale_struct+0x118>
 872116a:	85 ff                	test   %edi,%edi
 872116c:	0f 84 96 00 00 00    	je     8721208 <_ZNSt8numpunctIwE22_M_initialize_numpunctEP15__locale_struct+0xb8>
 8721172:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8721176:	c7 04 24 03 00 01 00 	movl   $0x10003,(%esp)
 872117d:	e8 8e cc 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721182:	8b 56 08             	mov    0x8(%esi),%edx
 8721185:	89 42 24             	mov    %eax,0x24(%edx)
 8721188:	89 7c 24 04          	mov    %edi,0x4(%esp)
 872118c:	c7 04 24 04 00 01 00 	movl   $0x10004,(%esp)
 8721193:	e8 78 cc 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721198:	8b 5e 08             	mov    0x8(%esi),%ebx
 872119b:	85 c0                	test   %eax,%eax
 872119d:	89 43 28             	mov    %eax,0x28(%ebx)
 87211a0:	75 3e                	jne    87211e0 <_ZNSt8numpunctIwE22_M_initialize_numpunctEP15__locale_struct+0x90>
 87211a2:	c7 43 08 a4 c9 d0 08 	movl   $0x8d0c9a4,0x8(%ebx)
 87211a9:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 87211b0:	c6 43 10 00          	movb   $0x0,0x10(%ebx)
 87211b4:	c7 43 28 2c 00 00 00 	movl   $0x2c,0x28(%ebx)
 87211bb:	c7 43 14 98 11 d0 08 	movl   $0x8d01198,0x14(%ebx)
 87211c2:	c7 43 18 04 00 00 00 	movl   $0x4,0x18(%ebx)
 87211c9:	c7 43 1c ac 11 d0 08 	movl   $0x8d011ac,0x1c(%ebx)
 87211d0:	c7 43 20 05 00 00 00 	movl   $0x5,0x20(%ebx)
 87211d7:	83 c4 1c             	add    $0x1c,%esp
 87211da:	5b                   	pop    %ebx
 87211db:	5e                   	pop    %esi
 87211dc:	5f                   	pop    %edi
 87211dd:	5d                   	pop    %ebp
 87211de:	c3                   	ret
 87211df:	90                   	nop
 87211e0:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87211e4:	c7 04 24 02 00 01 00 	movl   $0x10002,(%esp)
 87211eb:	e8 20 cc 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 87211f0:	89 43 08             	mov    %eax,0x8(%ebx)
 87211f3:	8b 5e 08             	mov    0x8(%esi),%ebx
 87211f6:	8b 43 08             	mov    0x8(%ebx),%eax
 87211f9:	89 04 24             	mov    %eax,(%esp)
 87211fc:	e8 af d1 95 ff       	call   807e3b0 <strlen@plt>
 8721201:	89 43 0c             	mov    %eax,0xc(%ebx)
 8721204:	eb b5                	jmp    87211bb <_ZNSt8numpunctIwE22_M_initialize_numpunctEP15__locale_struct+0x6b>
 8721206:	66 90                	xchg   %ax,%ax
 8721208:	8b 5e 08             	mov    0x8(%esi),%ebx
 872120b:	31 c0                	xor    %eax,%eax
 872120d:	8b 0d 40 d0 3a 09    	mov    0x93ad040,%ecx
 8721213:	c7 43 08 a4 c9 d0 08 	movl   $0x8d0c9a4,0x8(%ebx)
 872121a:	c7 43 0c 00 00 00 00 	movl   $0x0,0xc(%ebx)
 8721221:	c6 43 10 00          	movb   $0x0,0x10(%ebx)
 8721225:	c7 43 24 2e 00 00 00 	movl   $0x2e,0x24(%ebx)
 872122c:	c7 43 28 2c 00 00 00 	movl   $0x2c,0x28(%ebx)
 8721233:	90                   	nop
 8721234:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8721238:	0f be 14 01          	movsbl (%ecx,%eax,1),%edx
 872123c:	89 54 83 2c          	mov    %edx,0x2c(%ebx,%eax,4)
 8721240:	83 c0 01             	add    $0x1,%eax
 8721243:	83 f8 24             	cmp    $0x24,%eax
 8721246:	75 f0                	jne    8721238 <_ZNSt8numpunctIwE22_M_initialize_numpunctEP15__locale_struct+0xe8>
 8721248:	8b 0d 3c d0 3a 09    	mov    0x93ad03c,%ecx
 872124e:	30 c0                	xor    %al,%al
 8721250:	0f be 14 01          	movsbl (%ecx,%eax,1),%edx
 8721254:	89 94 83 bc 00 00 00 	mov    %edx,0xbc(%ebx,%eax,4)
 872125b:	83 c0 01             	add    $0x1,%eax
 872125e:	83 f8 1a             	cmp    $0x1a,%eax
 8721261:	75 ed                	jne    8721250 <_ZNSt8numpunctIwE22_M_initialize_numpunctEP15__locale_struct+0x100>
 8721263:	e9 53 ff ff ff       	jmp    87211bb <_ZNSt8numpunctIwE22_M_initialize_numpunctEP15__locale_struct+0x6b>
 8721268:	c7 04 24 28 01 00 00 	movl   $0x128,(%esp)
 872126f:	e8 dc 31 00 00       	call   8724450 <_Znwj>
 8721274:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 872127b:	c7 00 98 06 d0 08    	movl   $0x8d00698,(%eax)
 8721281:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8721288:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 872128f:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 8721293:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 872129a:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 87212a1:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 87212a8:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 87212af:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 87212b6:	c7 40 28 00 00 00 00 	movl   $0x0,0x28(%eax)
 87212bd:	c6 80 24 01 00 00 00 	movb   $0x0,0x124(%eax)
 87212c4:	89 46 08             	mov    %eax,0x8(%esi)
 87212c7:	e9 9e fe ff ff       	jmp    872116a <_ZNSt8numpunctIwE22_M_initialize_numpunctEP15__locale_struct+0x1a>
 87212cc:	90                   	nop
 87212cd:	90                   	nop
 87212ce:	90                   	nop
 87212cf:	90                   	nop

```

```c
// std::numpunct<wchar_t>::_M_initialize_numpunct @ 0x8721150

/* std::numpunct<wchar_t>::_M_initialize_numpunct(__locale_struct*) */

void __thiscall
std::numpunct<wchar_t>::_M_initialize_numpunct(numpunct<wchar_t> *this,__locale_struct *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  size_t sVar5;
  undefined4 *puVar6;
  int iVar7;
  
  if (*(int *)(this + 8) == 0) {
    puVar6 = operator_new(0x128);
    puVar6[1] = 0;
    *puVar6 = &PTR____numpunct_cache_08d00698;
    puVar6[2] = 0;
    puVar6[3] = 0;
    *(undefined1 *)(puVar6 + 4) = 0;
    puVar6[5] = 0;
    puVar6[6] = 0;
    puVar6[7] = 0;
    puVar6[8] = 0;
    puVar6[9] = 0;
    puVar6[10] = 0;
    *(undefined1 *)(puVar6 + 0x49) = 0;
    *(undefined4 **)(this + 8) = puVar6;
  }
  puVar2 = __num_base::_S_atoms_out;
  if (param_1 == (__locale_struct *)0x0) {
    iVar7 = *(int *)(this + 8);
    iVar4 = 0;
    *(undefined1 **)(iVar7 + 8) = &DAT_08d0c9a4;
    *(undefined4 *)(iVar7 + 0xc) = 0;
    *(undefined1 *)(iVar7 + 0x10) = 0;
    *(undefined4 *)(iVar7 + 0x24) = 0x2e;
    *(undefined4 *)(iVar7 + 0x28) = 0x2c;
    do {
      *(int *)(iVar7 + 0x2c + iVar4 * 4) = (int)(char)puVar2[iVar4];
      puVar1 = __num_base::_S_atoms_in;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x24);
    iVar4 = 0;
    do {
      *(int *)(iVar7 + 0xbc + iVar4 * 4) = (int)(char)puVar1[iVar4];
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x1a);
  }
  else {
    uVar3 = __nl_langinfo_l(0x10003,param_1);
    *(undefined4 *)(*(int *)(this + 8) + 0x24) = uVar3;
    iVar4 = __nl_langinfo_l(0x10004,param_1);
    iVar7 = *(int *)(this + 8);
    *(int *)(iVar7 + 0x28) = iVar4;
    if (iVar4 == 0) {
      *(undefined1 **)(iVar7 + 8) = &DAT_08d0c9a4;
      *(undefined4 *)(iVar7 + 0xc) = 0;
      *(undefined1 *)(iVar7 + 0x10) = 0;
      *(undefined4 *)(iVar7 + 0x28) = 0x2c;
    }
    else {
      uVar3 = __nl_langinfo_l(0x10002,param_1);
      *(undefined4 *)(iVar7 + 8) = uVar3;
      iVar7 = *(int *)(this + 8);
      sVar5 = strlen(*(char **)(iVar7 + 8));
      *(size_t *)(iVar7 + 0xc) = sVar5;
    }
  }
  *(undefined **)(iVar7 + 0x14) = &DAT_08d01198;
  *(undefined4 *)(iVar7 + 0x18) = 4;
  *(wchar_t **)(iVar7 + 0x1c) = L"false";
  *(undefined4 *)(iVar7 + 0x20) = 5;
  return;
}

```

---

## ~numpunct

```asm
// === 08721070 std::numpunct<wchar_t>::~numpunct  [0x08721070-0x87210bf] ===
 8721070:	55                   	push   %ebp
 8721071:	89 e5                	mov    %esp,%ebp
 8721073:	53                   	push   %ebx
 8721074:	83 ec 24             	sub    $0x24,%esp
 8721077:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872107a:	8b 43 08             	mov    0x8(%ebx),%eax
 872107d:	c7 03 48 0a d0 08    	movl   $0x8d00a48,(%ebx)
 8721083:	85 c0                	test   %eax,%eax
 8721085:	74 08                	je     872108f <_ZNSt8numpunctIwED1Ev+0x1f>
 8721087:	8b 10                	mov    (%eax),%edx
 8721089:	89 04 24             	mov    %eax,(%esp)
 872108c:	ff 52 04             	call   *0x4(%edx)
 872108f:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8721092:	83 c4 24             	add    $0x24,%esp
 8721095:	5b                   	pop    %ebx
 8721096:	5d                   	pop    %ebp
 8721097:	e9 04 9d fb ff       	jmp    86dada0 <_ZNSt6locale5facetD1Ev>
 872109c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 872109f:	89 1c 24             	mov    %ebx,(%esp)
 87210a2:	e8 f9 9c fb ff       	call   86dada0 <_ZNSt6locale5facetD1Ev>
 87210a7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 87210aa:	89 04 24             	mov    %eax,(%esp)
 87210ad:	e8 9e 26 3c 00       	call   8ae3750 <_Unwind_Resume>
 87210b2:	90                   	nop
 87210b3:	90                   	nop
 87210b4:	90                   	nop
 87210b5:	90                   	nop
 87210b6:	90                   	nop
 87210b7:	90                   	nop
 87210b8:	90                   	nop
 87210b9:	90                   	nop
 87210ba:	90                   	nop
 87210bb:	90                   	nop
 87210bc:	90                   	nop
 87210bd:	90                   	nop
 87210be:	90                   	nop
 87210bf:	90                   	nop

```

```c
// std::numpunct<wchar_t>::~numpunct @ 0x8721070

/* std::numpunct<wchar_t>::~numpunct() */

void __thiscall std::numpunct<wchar_t>::~numpunct(numpunct<wchar_t> *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 8);
  *(undefined ***)this = &PTR__numpunct_08d00a48;
  if (piVar1 != (int *)0x0) {
                    /* try { // try from 0872108c to 0872108e has its CatchHandler @ 0872109c */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  locale::facet::~facet((facet *)this);
  return;
}

```

---

## ~numpunct_087210c0

```asm
// === 087210c0 std::numpunct<wchar_t>::~numpunct  [0x087210c0-0x87210df] ===
 87210c0:	55                   	push   %ebp
 87210c1:	89 e5                	mov    %esp,%ebp
 87210c3:	53                   	push   %ebx
 87210c4:	83 ec 14             	sub    $0x14,%esp
 87210c7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87210ca:	89 1c 24             	mov    %ebx,(%esp)
 87210cd:	e8 9e ff ff ff       	call   8721070 <_ZNSt8numpunctIwED1Ev>
 87210d2:	89 5d 08             	mov    %ebx,0x8(%ebp)
 87210d5:	83 c4 14             	add    $0x14,%esp
 87210d8:	5b                   	pop    %ebx
 87210d9:	5d                   	pop    %ebp
 87210da:	e9 11 34 00 00       	jmp    87244f0 <_ZdlPv>
 87210df:	90                   	nop

```

```c
// std::numpunct<wchar_t>::~numpunct @ 0x87210c0

/* std::numpunct<wchar_t>::~numpunct() */

void __thiscall std::numpunct<wchar_t>::~numpunct(numpunct<wchar_t> *this)

{
  ~numpunct(this);
  operator_delete(this);
  return;
}

```

