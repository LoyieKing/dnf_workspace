# std__numpunct_lt_char_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## _M_initialize_numpunct

```asm
// === 087212d0 std::numpunct<char>::_M_initialize_numpunct  [0x087212d0-0x872144f] ===
 87212d0:	55                   	push   %ebp
 87212d1:	89 e5                	mov    %esp,%ebp
 87212d3:	57                   	push   %edi
 87212d4:	56                   	push   %esi
 87212d5:	53                   	push   %ebx
 87212d6:	83 ec 1c             	sub    $0x1c,%esp
 87212d9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87212dc:	8b 7d 0c             	mov    0xc(%ebp),%edi
 87212df:	8b 73 08             	mov    0x8(%ebx),%esi
 87212e2:	85 f6                	test   %esi,%esi
 87212e4:	0f 84 06 01 00 00    	je     87213f0 <_ZNSt8numpunctIcE22_M_initialize_numpunctEP15__locale_struct+0x120>
 87212ea:	85 ff                	test   %edi,%edi
 87212ec:	0f 84 9e 00 00 00    	je     8721390 <_ZNSt8numpunctIcE22_M_initialize_numpunctEP15__locale_struct+0xc0>
 87212f2:	89 7c 24 04          	mov    %edi,0x4(%esp)
 87212f6:	c7 04 24 00 00 01 00 	movl   $0x10000,(%esp)
 87212fd:	e8 0e cb 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721302:	0f b6 00             	movzbl (%eax),%eax
 8721305:	88 46 24             	mov    %al,0x24(%esi)
 8721308:	8b 73 08             	mov    0x8(%ebx),%esi
 872130b:	89 7c 24 04          	mov    %edi,0x4(%esp)
 872130f:	c7 04 24 01 00 01 00 	movl   $0x10001,(%esp)
 8721316:	e8 f5 ca 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 872131b:	0f b6 00             	movzbl (%eax),%eax
 872131e:	88 46 25             	mov    %al,0x25(%esi)
 8721321:	8b 73 08             	mov    0x8(%ebx),%esi
 8721324:	80 7e 25 00          	cmpb   $0x0,0x25(%esi)
 8721328:	75 3e                	jne    8721368 <_ZNSt8numpunctIcE22_M_initialize_numpunctEP15__locale_struct+0x98>
 872132a:	c7 46 08 a4 c9 d0 08 	movl   $0x8d0c9a4,0x8(%esi)
 8721331:	c7 46 0c 00 00 00 00 	movl   $0x0,0xc(%esi)
 8721338:	c6 46 10 00          	movb   $0x0,0x10(%esi)
 872133c:	c6 46 25 2c          	movb   $0x2c,0x25(%esi)
 8721340:	8b 5b 08             	mov    0x8(%ebx),%ebx
 8721343:	c7 43 14 8c 11 d0 08 	movl   $0x8d0118c,0x14(%ebx)
 872134a:	c7 43 18 04 00 00 00 	movl   $0x4,0x18(%ebx)
 8721351:	c7 43 1c 91 11 d0 08 	movl   $0x8d01191,0x1c(%ebx)
 8721358:	c7 43 20 05 00 00 00 	movl   $0x5,0x20(%ebx)
 872135f:	83 c4 1c             	add    $0x1c,%esp
 8721362:	5b                   	pop    %ebx
 8721363:	5e                   	pop    %esi
 8721364:	5f                   	pop    %edi
 8721365:	5d                   	pop    %ebp
 8721366:	c3                   	ret
 8721367:	90                   	nop
 8721368:	89 7c 24 04          	mov    %edi,0x4(%esp)
 872136c:	c7 04 24 02 00 01 00 	movl   $0x10002,(%esp)
 8721373:	e8 98 ca 95 ff       	call   807de10 <__nl_langinfo_l@plt>
 8721378:	8b 5b 08             	mov    0x8(%ebx),%ebx
 872137b:	89 46 08             	mov    %eax,0x8(%esi)
 872137e:	8b 43 08             	mov    0x8(%ebx),%eax
 8721381:	89 04 24             	mov    %eax,(%esp)
 8721384:	e8 27 d0 95 ff       	call   807e3b0 <strlen@plt>
 8721389:	89 43 0c             	mov    %eax,0xc(%ebx)
 872138c:	eb b5                	jmp    8721343 <_ZNSt8numpunctIcE22_M_initialize_numpunctEP15__locale_struct+0x73>
 872138e:	66 90                	xchg   %ax,%ax
 8721390:	8b 43 08             	mov    0x8(%ebx),%eax
 8721393:	c7 46 08 a4 c9 d0 08 	movl   $0x8d0c9a4,0x8(%esi)
 872139a:	c6 40 24 2e          	movb   $0x2e,0x24(%eax)
 872139e:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 87213a5:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 87213a9:	8b 43 08             	mov    0x8(%ebx),%eax
 87213ac:	c6 40 25 2c          	movb   $0x2c,0x25(%eax)
 87213b0:	8b 35 40 d0 3a 09    	mov    0x93ad040,%esi
 87213b6:	31 c0                	xor    %eax,%eax
 87213b8:	0f b6 0c 06          	movzbl (%esi,%eax,1),%ecx
 87213bc:	8b 53 08             	mov    0x8(%ebx),%edx
 87213bf:	88 4c 02 26          	mov    %cl,0x26(%edx,%eax,1)
 87213c3:	83 c0 01             	add    $0x1,%eax
 87213c6:	83 f8 24             	cmp    $0x24,%eax
 87213c9:	75 ed                	jne    87213b8 <_ZNSt8numpunctIcE22_M_initialize_numpunctEP15__locale_struct+0xe8>
 87213cb:	8b 35 3c d0 3a 09    	mov    0x93ad03c,%esi
 87213d1:	30 c0                	xor    %al,%al
 87213d3:	90                   	nop
 87213d4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 87213d8:	0f b6 0c 06          	movzbl (%esi,%eax,1),%ecx
 87213dc:	8b 53 08             	mov    0x8(%ebx),%edx
 87213df:	88 4c 02 4a          	mov    %cl,0x4a(%edx,%eax,1)
 87213e3:	83 c0 01             	add    $0x1,%eax
 87213e6:	83 f8 1a             	cmp    $0x1a,%eax
 87213e9:	75 ed                	jne    87213d8 <_ZNSt8numpunctIcE22_M_initialize_numpunctEP15__locale_struct+0x108>
 87213eb:	e9 50 ff ff ff       	jmp    8721340 <_ZNSt8numpunctIcE22_M_initialize_numpunctEP15__locale_struct+0x70>
 87213f0:	c7 04 24 68 00 00 00 	movl   $0x68,(%esp)
 87213f7:	e8 54 30 00 00       	call   8724450 <_Znwj>
 87213fc:	c6 40 24 00          	movb   $0x0,0x24(%eax)
 8721400:	89 c6                	mov    %eax,%esi
 8721402:	c6 40 25 00          	movb   $0x0,0x25(%eax)
 8721406:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 872140d:	c7 00 08 ef cf 08    	movl   $0x8cfef08,(%eax)
 8721413:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 872141a:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8721421:	c6 40 10 00          	movb   $0x0,0x10(%eax)
 8721425:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 872142c:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8721433:	c7 40 1c 00 00 00 00 	movl   $0x0,0x1c(%eax)
 872143a:	c7 40 20 00 00 00 00 	movl   $0x0,0x20(%eax)
 8721441:	c6 40 64 00          	movb   $0x0,0x64(%eax)
 8721445:	89 43 08             	mov    %eax,0x8(%ebx)
 8721448:	e9 9d fe ff ff       	jmp    87212ea <_ZNSt8numpunctIcE22_M_initialize_numpunctEP15__locale_struct+0x1a>
 872144d:	90                   	nop
 872144e:	90                   	nop
 872144f:	90                   	nop

```

```c
// std::numpunct<char>::_M_initialize_numpunct @ 0x87212d0

/* std::numpunct<char>::_M_initialize_numpunct(__locale_struct*) */

void __thiscall
std::numpunct<char>::_M_initialize_numpunct(numpunct<char> *this,__locale_struct *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  size_t sVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar7 = *(undefined4 **)(this + 8);
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = operator_new(0x68);
    *(undefined1 *)(puVar7 + 9) = 0;
    *(undefined1 *)((int)puVar7 + 0x25) = 0;
    puVar7[1] = 0;
    *puVar7 = &PTR____numpunct_cache_08cfef08;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 4) = 0;
    puVar7[5] = 0;
    puVar7[6] = 0;
    puVar7[7] = 0;
    puVar7[8] = 0;
    *(undefined1 *)(puVar7 + 0x19) = 0;
    *(undefined4 **)(this + 8) = puVar7;
  }
  if (param_1 == (__locale_struct *)0x0) {
    iVar6 = *(int *)(this + 8);
    puVar7[2] = &DAT_08d0c9a4;
    *(undefined1 *)(iVar6 + 0x24) = 0x2e;
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(undefined1 *)(iVar6 + 0x10) = 0;
    *(undefined1 *)(*(int *)(this + 8) + 0x25) = 0x2c;
    puVar2 = __num_base::_S_atoms_out;
    iVar6 = 0;
    do {
      *(undefined *)(*(int *)(this + 8) + 0x26 + iVar6) = puVar2[iVar6];
      puVar1 = __num_base::_S_atoms_in;
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x24);
    iVar6 = 0;
    do {
      *(undefined *)(*(int *)(this + 8) + 0x4a + iVar6) = puVar1[iVar6];
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x1a);
  }
  else {
    puVar3 = (undefined1 *)__nl_langinfo_l(0x10000,param_1);
    *(undefined1 *)(puVar7 + 9) = *puVar3;
    iVar6 = *(int *)(this + 8);
    puVar3 = (undefined1 *)__nl_langinfo_l(0x10001,param_1);
    *(undefined1 *)(iVar6 + 0x25) = *puVar3;
    iVar6 = *(int *)(this + 8);
    if (*(char *)(iVar6 + 0x25) != '\0') {
      uVar4 = __nl_langinfo_l(0x10002,param_1);
      iVar8 = *(int *)(this + 8);
      *(undefined4 *)(iVar6 + 8) = uVar4;
      sVar5 = strlen(*(char **)(iVar8 + 8));
      *(size_t *)(iVar8 + 0xc) = sVar5;
      goto LAB_08721343;
    }
    *(undefined1 **)(iVar6 + 8) = &DAT_08d0c9a4;
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(undefined1 *)(iVar6 + 0x10) = 0;
    *(undefined1 *)(iVar6 + 0x25) = 0x2c;
  }
  iVar8 = *(int *)(this + 8);
LAB_08721343:
  *(undefined1 **)(iVar8 + 0x14) = &DAT_08d0118c;
  *(undefined4 *)(iVar8 + 0x18) = 4;
  *(char **)(iVar8 + 0x1c) = "false";
  *(undefined4 *)(iVar8 + 0x20) = 5;
  return;
}

```

---

## ~numpunct

```asm
// === 087210e0 std::numpunct<char>::~numpunct  [0x087210e0-0x872112f] ===
 87210e0:	55                   	push   %ebp
 87210e1:	89 e5                	mov    %esp,%ebp
 87210e3:	53                   	push   %ebx
 87210e4:	83 ec 24             	sub    $0x24,%esp
 87210e7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 87210ea:	8b 43 08             	mov    0x8(%ebx),%eax
 87210ed:	c7 03 c8 f2 cf 08    	movl   $0x8cff2c8,(%ebx)
 87210f3:	85 c0                	test   %eax,%eax
 87210f5:	74 08                	je     87210ff <_ZNSt8numpunctIcED1Ev+0x1f>
 87210f7:	8b 10                	mov    (%eax),%edx
 87210f9:	89 04 24             	mov    %eax,(%esp)
 87210fc:	ff 52 04             	call   *0x4(%edx)
 87210ff:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8721102:	83 c4 24             	add    $0x24,%esp
 8721105:	5b                   	pop    %ebx
 8721106:	5d                   	pop    %ebp
 8721107:	e9 94 9c fb ff       	jmp    86dada0 <_ZNSt6locale5facetD1Ev>
 872110c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 872110f:	89 1c 24             	mov    %ebx,(%esp)
 8721112:	e8 89 9c fb ff       	call   86dada0 <_ZNSt6locale5facetD1Ev>
 8721117:	8b 45 f4             	mov    -0xc(%ebp),%eax
 872111a:	89 04 24             	mov    %eax,(%esp)
 872111d:	e8 2e 26 3c 00       	call   8ae3750 <_Unwind_Resume>
 8721122:	90                   	nop
 8721123:	90                   	nop
 8721124:	90                   	nop
 8721125:	90                   	nop
 8721126:	90                   	nop
 8721127:	90                   	nop
 8721128:	90                   	nop
 8721129:	90                   	nop
 872112a:	90                   	nop
 872112b:	90                   	nop
 872112c:	90                   	nop
 872112d:	90                   	nop
 872112e:	90                   	nop
 872112f:	90                   	nop

```

```c
// std::numpunct<char>::~numpunct @ 0x87210e0

/* std::numpunct<char>::~numpunct() */

void __thiscall std::numpunct<char>::~numpunct(numpunct<char> *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(this + 8);
  *(undefined ***)this = &PTR__numpunct_08cff2c8;
  if (piVar1 != (int *)0x0) {
                    /* try { // try from 087210fc to 087210fe has its CatchHandler @ 0872110c */
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  locale::facet::~facet((facet *)this);
  return;
}

```

---

## ~numpunct_08721130

```asm
// === 08721130 std::numpunct<char>::~numpunct  [0x08721130-0x872114f] ===
 8721130:	55                   	push   %ebp
 8721131:	89 e5                	mov    %esp,%ebp
 8721133:	53                   	push   %ebx
 8721134:	83 ec 14             	sub    $0x14,%esp
 8721137:	8b 5d 08             	mov    0x8(%ebp),%ebx
 872113a:	89 1c 24             	mov    %ebx,(%esp)
 872113d:	e8 9e ff ff ff       	call   87210e0 <_ZNSt8numpunctIcED1Ev>
 8721142:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8721145:	83 c4 14             	add    $0x14,%esp
 8721148:	5b                   	pop    %ebx
 8721149:	5d                   	pop    %ebp
 872114a:	e9 a1 33 00 00       	jmp    87244f0 <_ZdlPv>
 872114f:	90                   	nop

```

```c
// std::numpunct<char>::~numpunct @ 0x8721130

/* std::numpunct<char>::~numpunct() */

void __thiscall std::numpunct<char>::~numpunct(numpunct<char> *this)

{
  ~numpunct(this);
  operator_delete(this);
  return;
}

```

