# std__bad_cast

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## what

```asm
// === 08724670 std::bad_cast::what  [0x08724670-0x872468f] ===
 8724670:	e8 4f ff ff ff       	call   87245c4 <__i686.get_pc_thunk.cx>
 8724675:	81 c1 23 85 c4 00    	add    $0xc48523,%ecx
 872467b:	55                   	push   %ebp
 872467c:	89 e5                	mov    %esp,%ebp
 872467e:	5d                   	pop    %ebp
 872467f:	8d 81 fd 4e 99 ff    	lea    -0x66b103(%ecx),%eax
 8724685:	c3                   	ret
 8724686:	90                   	nop
 8724687:	90                   	nop
 8724688:	90                   	nop
 8724689:	90                   	nop
 872468a:	90                   	nop
 872468b:	90                   	nop
 872468c:	90                   	nop
 872468d:	90                   	nop
 872468e:	90                   	nop
 872468f:	90                   	nop

```

```c
// std::bad_cast::what @ 0x8724670

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* std::bad_cast::what() const */

char * std::bad_cast::what(void)

{
  return "std::bad_cast";
}

```

---

## ~bad_cast

```asm
// === 08724690 std::bad_cast::~bad_cast  [0x08724690-0x87246bf] ===
 8724690:	55                   	push   %ebp
 8724691:	89 e5                	mov    %esp,%ebp
 8724693:	53                   	push   %ebx
 8724694:	e8 5f e7 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 8724699:	81 c3 ff 84 c4 00    	add    $0xc484ff,%ebx
 872469f:	83 ec 14             	sub    $0x14,%esp
 87246a2:	8b 45 08             	mov    0x8(%ebp),%eax
 87246a5:	8b 93 fc fd ff ff    	mov    -0x204(%ebx),%edx
 87246ab:	83 c2 08             	add    $0x8,%edx
 87246ae:	89 10                	mov    %edx,(%eax)
 87246b0:	89 04 24             	mov    %eax,(%esp)
 87246b3:	e8 c8 09 00 00       	call   8725080 <_ZNSt9exceptionD1Ev>
 87246b8:	83 c4 14             	add    $0x14,%esp
 87246bb:	5b                   	pop    %ebx
 87246bc:	5d                   	pop    %ebp
 87246bd:	c3                   	ret
 87246be:	90                   	nop
 87246bf:	90                   	nop

```

```c
// std::bad_cast::~bad_cast @ 0x8724690

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  *(undefined **)this = PTR_vtable_0936c994 + 8;
  exception::~exception((exception *)this);
  return;
}

```

---

## ~bad_cast_087246c0

```asm
// === 087246c0 std::bad_cast::~bad_cast  [0x087246c0-0x87246ff] ===
 87246c0:	55                   	push   %ebp
 87246c1:	89 e5                	mov    %esp,%ebp
 87246c3:	83 ec 18             	sub    $0x18,%esp
 87246c6:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 87246c9:	e8 2a e7 ff ff       	call   8722df8 <__i686.get_pc_thunk.bx>
 87246ce:	81 c3 ca 84 c4 00    	add    $0xc484ca,%ebx
 87246d4:	89 75 fc             	mov    %esi,-0x4(%ebp)
 87246d7:	8b 75 08             	mov    0x8(%ebp),%esi
 87246da:	89 34 24             	mov    %esi,(%esp)
 87246dd:	e8 ae ff ff ff       	call   8724690 <_ZNSt8bad_castD1Ev>
 87246e2:	89 34 24             	mov    %esi,(%esp)
 87246e5:	e8 06 fe ff ff       	call   87244f0 <_ZdlPv>
 87246ea:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 87246ed:	8b 75 fc             	mov    -0x4(%ebp),%esi
 87246f0:	89 ec                	mov    %ebp,%esp
 87246f2:	5d                   	pop    %ebp
 87246f3:	c3                   	ret
 87246f4:	90                   	nop
 87246f5:	90                   	nop
 87246f6:	90                   	nop
 87246f7:	90                   	nop
 87246f8:	90                   	nop
 87246f9:	90                   	nop
 87246fa:	90                   	nop
 87246fb:	90                   	nop
 87246fc:	90                   	nop
 87246fd:	90                   	nop
 87246fe:	90                   	nop
 87246ff:	90                   	nop

```

```c
// std::bad_cast::~bad_cast @ 0x87246c0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* std::bad_cast::~bad_cast() */

void __thiscall std::bad_cast::~bad_cast(bad_cast *this)

{
  ~bad_cast(this);
  operator_delete(this);
  return;
}

```

