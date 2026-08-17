# __cxxabiv1____pointer_type_info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## __is_pointer_p

```asm
// === 08723850 __cxxabiv1::__pointer_type_info::__is_pointer_p  [0x08723850-0x872385f] ===
 8723850:	55                   	push   %ebp
 8723851:	b8 01 00 00 00       	mov    $0x1,%eax
 8723856:	89 e5                	mov    %esp,%ebp
 8723858:	5d                   	pop    %ebp
 8723859:	c3                   	ret
 872385a:	90                   	nop
 872385b:	90                   	nop
 872385c:	90                   	nop
 872385d:	90                   	nop
 872385e:	90                   	nop
 872385f:	90                   	nop

```

```c
// __cxxabiv1::__pointer_type_info::__is_pointer_p @ 0x8723850

/* __cxxabiv1::__pointer_type_info::__is_pointer_p() const */

undefined4 __cxxabiv1::__pointer_type_info::__is_pointer_p(void)

{
  return 1;
}

```

---

## __pointer_catch

```asm
// === 08723860 __cxxabiv1::__pointer_type_info::__pointer_catch  [0x08723860-0x87238ff] ===
 8723860:	55                   	push   %ebp
 8723861:	89 e5                	mov    %esp,%ebp
 8723863:	83 ec 38             	sub    $0x38,%esp
 8723866:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8723869:	8b 7d 14             	mov    0x14(%ebp),%edi
 872386c:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 872386f:	8b 45 08             	mov    0x8(%ebp),%eax
 8723872:	e8 81 f5 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8723877:	81 c3 21 93 c4 00    	add    $0xc49321,%ebx
 872387d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8723880:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8723883:	83 ff 01             	cmp    $0x1,%edi
 8723886:	76 30                	jbe    87238b8 <_ZNK10__cxxabiv119__pointer_type_info15__pointer_catchEPKNS_17__pbase_type_infoEPPvj+0x58>
 8723888:	8b 70 0c             	mov    0xc(%eax),%esi
 872388b:	8b 4d 10             	mov    0x10(%ebp),%ecx
 872388e:	83 c7 02             	add    $0x2,%edi
 8723891:	8b 06                	mov    (%esi),%eax
 8723893:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 8723897:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 872389b:	8b 52 0c             	mov    0xc(%edx),%edx
 872389e:	89 34 24             	mov    %esi,(%esp)
 87238a1:	89 54 24 04          	mov    %edx,0x4(%esp)
 87238a5:	ff 50 10             	call   *0x10(%eax)
 87238a8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 87238ab:	8b 75 f8             	mov    -0x8(%ebp),%esi
 87238ae:	8b 7d fc             	mov    -0x4(%ebp),%edi
 87238b1:	89 ec                	mov    %ebp,%esp
 87238b3:	5d                   	pop    %ebp
 87238b4:	c3                   	ret
 87238b5:	8d 76 00             	lea    0x0(%esi),%esi
 87238b8:	8b 70 0c             	mov    0xc(%eax),%esi
 87238bb:	8b 8b 88 ff ff ff    	mov    -0x78(%ebx),%ecx
 87238c1:	8b 46 04             	mov    0x4(%esi),%eax
 87238c4:	8b 49 04             	mov    0x4(%ecx),%ecx
 87238c7:	39 c8                	cmp    %ecx,%eax
 87238c9:	74 1b                	je     87238e6 <_ZNK10__cxxabiv119__pointer_type_info15__pointer_catchEPKNS_17__pbase_type_infoEPPvj+0x86>
 87238cb:	80 38 2a             	cmpb   $0x2a,(%eax)
 87238ce:	74 bb                	je     872388b <_ZNK10__cxxabiv119__pointer_type_info15__pointer_catchEPKNS_17__pbase_type_infoEPPvj+0x2b>
 87238d0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 87238d4:	89 04 24             	mov    %eax,(%esp)
 87238d7:	89 55 e4             	mov    %edx,-0x1c(%ebp)
 87238da:	e8 01 ac 95 ff       	call   807e4e0 <strcmp@plt>
 87238df:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 87238e2:	85 c0                	test   %eax,%eax
 87238e4:	75 a5                	jne    872388b <_ZNK10__cxxabiv119__pointer_type_info15__pointer_catchEPKNS_17__pbase_type_infoEPPvj+0x2b>
 87238e6:	8b 42 0c             	mov    0xc(%edx),%eax
 87238e9:	8b 10                	mov    (%eax),%edx
 87238eb:	89 04 24             	mov    %eax,(%esp)
 87238ee:	ff 52 0c             	call   *0xc(%edx)
 87238f1:	83 f0 01             	xor    $0x1,%eax
 87238f4:	eb b2                	jmp    87238a8 <_ZNK10__cxxabiv119__pointer_type_info15__pointer_catchEPKNS_17__pbase_type_infoEPPvj+0x48>
 87238f6:	90                   	nop
 87238f7:	90                   	nop
 87238f8:	90                   	nop
 87238f9:	90                   	nop
 87238fa:	90                   	nop
 87238fb:	90                   	nop
 87238fc:	90                   	nop
 87238fd:	90                   	nop
 87238fe:	90                   	nop
 87238ff:	90                   	nop

```

```c
// __cxxabiv1::__pointer_type_info::__pointer_catch @ 0x8723860

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__pointer_type_info::__pointer_catch(__cxxabiv1::__pbase_type_info const*, void**,
   unsigned int) const */

uint __thiscall
__cxxabiv1::__pointer_type_info::__pointer_catch
          (__pointer_type_info *this,__pbase_type_info *param_1,void **param_2,uint param_3)

{
  char *__s1;
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if (param_3 < 2) {
    piVar3 = *(int **)(this + 0xc);
    __s1 = (char *)piVar3[1];
    if ((__s1 == *(char **)(PTR_typeinfo_0936cb20 + 4)) ||
       ((*__s1 != '*' && (iVar2 = strcmp(__s1,*(char **)(PTR_typeinfo_0936cb20 + 4)), iVar2 == 0))))
    {
      uVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0xc))(*(int **)(param_1 + 0xc));
      return uVar1 ^ 1;
    }
  }
  else {
    piVar3 = *(int **)(this + 0xc);
  }
  uVar1 = (**(code **)(*piVar3 + 0x10))(piVar3,*(undefined4 *)(param_1 + 0xc),param_2,param_3 + 2);
  return uVar1;
}

```

---

## ~__pointer_type_info

```asm
// === 08723900 __cxxabiv1::__pointer_type_info::~__pointer_type_info  [0x08723900-0x872392f] ===
 8723900:	55                   	push   %ebp
 8723901:	89 e5                	mov    %esp,%ebp
 8723903:	53                   	push   %ebx
 8723904:	e8 ef f4 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8723909:	81 c3 8f 92 c4 00    	add    $0xc4928f,%ebx
 872390f:	83 ec 14             	sub    $0x14,%esp
 8723912:	8b 45 08             	mov    0x8(%ebp),%eax
 8723915:	8b 93 14 ff ff ff    	mov    -0xec(%ebx),%edx
 872391b:	83 c2 08             	add    $0x8,%edx
 872391e:	89 10                	mov    %edx,(%eax)
 8723920:	89 04 24             	mov    %eax,(%esp)
 8723923:	e8 28 bc 00 00       	call   872f550 <_ZN10__cxxabiv117__pbase_type_infoD1Ev>
 8723928:	83 c4 14             	add    $0x14,%esp
 872392b:	5b                   	pop    %ebx
 872392c:	5d                   	pop    %ebp
 872392d:	c3                   	ret
 872392e:	90                   	nop
 872392f:	90                   	nop

```

```c
// __cxxabiv1::__pointer_type_info::~__pointer_type_info @ 0x8723900

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__pointer_type_info::~__pointer_type_info() */

void __thiscall __cxxabiv1::__pointer_type_info::~__pointer_type_info(__pointer_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936caac + 8;
  __pbase_type_info::~__pbase_type_info((__pbase_type_info *)this);
  return;
}

```

---

## ~__pointer_type_info_08723930

```asm
// === 08723930 __cxxabiv1::__pointer_type_info::~__pointer_type_info  [0x08723930-0x872396f] ===
 8723930:	55                   	push   %ebp
 8723931:	89 e5                	mov    %esp,%ebp
 8723933:	83 ec 18             	sub    $0x18,%esp
 8723936:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8723939:	e8 ba f4 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 872393e:	81 c3 5a 92 c4 00    	add    $0xc4925a,%ebx
 8723944:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8723947:	8b 75 08             	mov    0x8(%ebp),%esi
 872394a:	89 34 24             	mov    %esi,(%esp)
 872394d:	e8 ae ff ff ff       	call   8723900 <_ZN10__cxxabiv119__pointer_type_infoD1Ev>
 8723952:	89 34 24             	mov    %esi,(%esp)
 8723955:	e8 96 0b 00 00       	call   87244f0 <_ZdlPv>
 872395a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 872395d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8723960:	89 ec                	mov    %ebp,%esp
 8723962:	5d                   	pop    %ebp
 8723963:	c3                   	ret
 8723964:	90                   	nop
 8723965:	90                   	nop
 8723966:	90                   	nop
 8723967:	90                   	nop
 8723968:	90                   	nop
 8723969:	90                   	nop
 872396a:	90                   	nop
 872396b:	90                   	nop
 872396c:	90                   	nop
 872396d:	90                   	nop
 872396e:	90                   	nop
 872396f:	90                   	nop

```

```c
// __cxxabiv1::__pointer_type_info::~__pointer_type_info @ 0x8723930

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__pointer_type_info::~__pointer_type_info() */

void __thiscall __cxxabiv1::__pointer_type_info::~__pointer_type_info(__pointer_type_info *this)

{
  ~__pointer_type_info(this);
  operator_delete(this);
  return;
}

```

