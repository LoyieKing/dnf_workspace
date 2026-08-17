# __cxxabiv1____enum_type_info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## ~__enum_type_info

```asm
// === 087237e0 __cxxabiv1::__enum_type_info::~__enum_type_info  [0x087237e0-0x872380f] ===
 87237e0:	55                   	push   %ebp
 87237e1:	89 e5                	mov    %esp,%ebp
 87237e3:	53                   	push   %ebx
 87237e4:	e8 0f f6 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87237e9:	81 c3 af 93 c4 00    	add    $0xc493af,%ebx
 87237ef:	83 ec 14             	sub    $0x14,%esp
 87237f2:	8b 45 08             	mov    0x8(%ebp),%eax
 87237f5:	8b 93 f4 fc ff ff    	mov    -0x30c(%ebx),%edx
 87237fb:	83 c2 08             	add    $0x8,%edx
 87237fe:	89 10                	mov    %edx,(%eax)
 8723800:	89 04 24             	mov    %eax,(%esp)
 8723803:	e8 f8 0e 00 00       	call   8724700 <_ZNSt9type_infoD1Ev>
 8723808:	83 c4 14             	add    $0x14,%esp
 872380b:	5b                   	pop    %ebx
 872380c:	5d                   	pop    %ebp
 872380d:	c3                   	ret
 872380e:	90                   	nop
 872380f:	90                   	nop

```

```c
// __cxxabiv1::__enum_type_info::~__enum_type_info @ 0x87237e0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__enum_type_info::~__enum_type_info() */

void __thiscall __cxxabiv1::__enum_type_info::~__enum_type_info(__enum_type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c88c + 8;
  std::type_info::~type_info((type_info *)this);
  return;
}

```

---

## ~__enum_type_info_08723810

```asm
// === 08723810 __cxxabiv1::__enum_type_info::~__enum_type_info  [0x08723810-0x872384f] ===
 8723810:	55                   	push   %ebp
 8723811:	89 e5                	mov    %esp,%ebp
 8723813:	83 ec 18             	sub    $0x18,%esp
 8723816:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8723819:	e8 da f5 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 872381e:	81 c3 7a 93 c4 00    	add    $0xc4937a,%ebx
 8723824:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8723827:	8b 75 08             	mov    0x8(%ebp),%esi
 872382a:	89 34 24             	mov    %esi,(%esp)
 872382d:	e8 ae ff ff ff       	call   87237e0 <_ZN10__cxxabiv116__enum_type_infoD1Ev>
 8723832:	89 34 24             	mov    %esi,(%esp)
 8723835:	e8 b6 0c 00 00       	call   87244f0 <_ZdlPv>
 872383a:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 872383d:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8723840:	89 ec                	mov    %ebp,%esp
 8723842:	5d                   	pop    %ebp
 8723843:	c3                   	ret
 8723844:	90                   	nop
 8723845:	90                   	nop
 8723846:	90                   	nop
 8723847:	90                   	nop
 8723848:	90                   	nop
 8723849:	90                   	nop
 872384a:	90                   	nop
 872384b:	90                   	nop
 872384c:	90                   	nop
 872384d:	90                   	nop
 872384e:	90                   	nop
 872384f:	90                   	nop

```

```c
// __cxxabiv1::__enum_type_info::~__enum_type_info @ 0x8723810

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* __cxxabiv1::__enum_type_info::~__enum_type_info() */

void __thiscall __cxxabiv1::__enum_type_info::~__enum_type_info(__enum_type_info *this)

{
  ~__enum_type_info(this);
  operator_delete(this);
  return;
}

```

