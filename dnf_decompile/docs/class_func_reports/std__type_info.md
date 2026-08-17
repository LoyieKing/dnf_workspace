# std__type_info

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## __do_catch

```asm
// === 08724750 std::type_info::__do_catch  [0x08724750-0x872479f] ===
 8724750:	55                   	push   %ebp
 8724751:	89 e5                	mov    %esp,%ebp
 8724753:	53                   	push   %ebx
 8724754:	83 ec 14             	sub    $0x14,%esp
 8724757:	8b 45 08             	mov    0x8(%ebp),%eax
 872475a:	e8 99 e6 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 872475f:	81 c3 39 84 c4 00    	add    $0xc48439,%ebx
 8724765:	8b 50 04             	mov    0x4(%eax),%edx
 8724768:	8b 45 0c             	mov    0xc(%ebp),%eax
 872476b:	8b 48 04             	mov    0x4(%eax),%ecx
 872476e:	b8 01 00 00 00       	mov    $0x1,%eax
 8724773:	39 ca                	cmp    %ecx,%edx
 8724775:	74 18                	je     872478f <_ZNKSt9type_info10__do_catchEPKS_PPvj+0x3f>
 8724777:	31 c0                	xor    %eax,%eax
 8724779:	80 3a 2a             	cmpb   $0x2a,(%edx)
 872477c:	74 11                	je     872478f <_ZNKSt9type_info10__do_catchEPKS_PPvj+0x3f>
 872477e:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8724782:	89 14 24             	mov    %edx,(%esp)
 8724785:	e8 56 9d 95 ff       	call   807e4e0 <strcmp@plt>
 872478a:	85 c0                	test   %eax,%eax
 872478c:	0f 94 c0             	sete   %al
 872478f:	83 c4 14             	add    $0x14,%esp
 8724792:	5b                   	pop    %ebx
 8724793:	5d                   	pop    %ebp
 8724794:	c3                   	ret
 8724795:	90                   	nop
 8724796:	90                   	nop
 8724797:	90                   	nop
 8724798:	90                   	nop
 8724799:	90                   	nop
 872479a:	90                   	nop
 872479b:	90                   	nop
 872479c:	90                   	nop
 872479d:	90                   	nop
 872479e:	90                   	nop
 872479f:	90                   	nop

```

```c
// std::type_info::__do_catch @ 0x8724750

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::type_info::__do_catch(std::type_info const*, void**, unsigned int) const */

bool std::type_info::__do_catch(type_info *param_1,void **param_2,uint param_3)

{
  char *__s1;
  int iVar1;
  bool bVar2;
  
  __s1 = *(char **)(param_1 + 4);
  bVar2 = true;
  if ((__s1 != param_2[1]) && (bVar2 = false, *__s1 != '*')) {
    iVar1 = strcmp(__s1,param_2[1]);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

```

---

## __do_upcast

```asm
// === 08724740 std::type_info::__do_upcast  [0x08724740-0x872474f] ===
 8724740:	55                   	push   %ebp
 8724741:	31 c0                	xor    %eax,%eax
 8724743:	89 e5                	mov    %esp,%ebp
 8724745:	5d                   	pop    %ebp
 8724746:	c3                   	ret
 8724747:	90                   	nop
 8724748:	90                   	nop
 8724749:	90                   	nop
 872474a:	90                   	nop
 872474b:	90                   	nop
 872474c:	90                   	nop
 872474d:	90                   	nop
 872474e:	90                   	nop
 872474f:	90                   	nop

```

```c
// std::type_info::__do_upcast @ 0x8724740

/* std::type_info::__do_upcast(__cxxabiv1::__class_type_info const*, void**) const */

undefined4 std::type_info::__do_upcast(__class_type_info *param_1,void **param_2)

{
  return 0;
}

```

---

## __is_function_p

```asm
// === 08724730 std::type_info::__is_function_p  [0x08724730-0x872473f] ===
 8724730:	55                   	push   %ebp
 8724731:	31 c0                	xor    %eax,%eax
 8724733:	89 e5                	mov    %esp,%ebp
 8724735:	5d                   	pop    %ebp
 8724736:	c3                   	ret
 8724737:	90                   	nop
 8724738:	90                   	nop
 8724739:	90                   	nop
 872473a:	90                   	nop
 872473b:	90                   	nop
 872473c:	90                   	nop
 872473d:	90                   	nop
 872473e:	90                   	nop
 872473f:	90                   	nop

```

```c
// std::type_info::__is_function_p @ 0x8724730

/* std::type_info::__is_function_p() const */

undefined4 std::type_info::__is_function_p(void)

{
  return 0;
}

```

---

## __is_pointer_p

```asm
// === 08724720 std::type_info::__is_pointer_p  [0x08724720-0x872472f] ===
 8724720:	55                   	push   %ebp
 8724721:	31 c0                	xor    %eax,%eax
 8724723:	89 e5                	mov    %esp,%ebp
 8724725:	5d                   	pop    %ebp
 8724726:	c3                   	ret
 8724727:	90                   	nop
 8724728:	90                   	nop
 8724729:	90                   	nop
 872472a:	90                   	nop
 872472b:	90                   	nop
 872472c:	90                   	nop
 872472d:	90                   	nop
 872472e:	90                   	nop
 872472f:	90                   	nop

```

```c
// std::type_info::__is_pointer_p @ 0x8724720

/* std::type_info::__is_pointer_p() const */

undefined4 std::type_info::__is_pointer_p(void)

{
  return 0;
}

```

---

## ~type_info

```asm
// === 08724700 std::type_info::~type_info  [0x08724700-0x872471f] ===
 8724700:	e8 bf fe ff ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8724705:	81 c1 93 84 c4 00    	add    $0xc48493,%ecx
 872470b:	55                   	push   %ebp
 872470c:	89 e5                	mov    %esp,%ebp
 872470e:	8b 81 0c fc ff ff    	mov    -0x3f4(%ecx),%eax
 8724714:	8d 50 08             	lea    0x8(%eax),%edx
 8724717:	8b 45 08             	mov    0x8(%ebp),%eax
 872471a:	89 10                	mov    %edx,(%eax)
 872471c:	5d                   	pop    %ebp
 872471d:	c3                   	ret
 872471e:	90                   	nop
 872471f:	90                   	nop

```

```c
// std::type_info::~type_info @ 0x8724700

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  *(undefined **)this = PTR_vtable_0936c7a4 + 8;
  return;
}

```

---

## ~type_info_087247a0

```asm
// === 087247a0 std::type_info::~type_info  [0x087247a0-0x87247df] ===
 87247a0:	55                   	push   %ebp
 87247a1:	89 e5                	mov    %esp,%ebp
 87247a3:	83 ec 18             	sub    $0x18,%esp
 87247a6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87247a9:	e8 4a e6 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87247ae:	81 c3 ea 83 c4 00    	add    $0xc483ea,%ebx
 87247b4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87247b7:	8b 75 08             	mov    0x8(%ebp),%esi
 87247ba:	89 34 24             	mov    %esi,(%esp)
 87247bd:	e8 3e ff ff ff       	call   8724700 <_ZNSt9type_infoD1Ev>
 87247c2:	89 34 24             	mov    %esi,(%esp)
 87247c5:	e8 26 fd ff ff       	call   87244f0 <_ZdlPv>
 87247ca:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87247cd:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87247d0:	89 ec                	mov    %ebp,%esp
 87247d2:	5d                   	pop    %ebp
 87247d3:	c3                   	ret
 87247d4:	90                   	nop
 87247d5:	90                   	nop
 87247d6:	90                   	nop
 87247d7:	90                   	nop
 87247d8:	90                   	nop
 87247d9:	90                   	nop
 87247da:	90                   	nop
 87247db:	90                   	nop
 87247dc:	90                   	nop
 87247dd:	90                   	nop
 87247de:	90                   	nop
 87247df:	90                   	nop

```

```c
// std::type_info::~type_info @ 0x87247a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::type_info::~type_info() */

void __thiscall std::type_info::~type_info(type_info *this)

{
  ~type_info(this);
  operator_delete(this);
  return;
}

```

