# std__error_category

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## default_error_condition

```asm
// === 086df580 std::error_category::default_error_condition  [0x086df580-0x86df59f] ===
 86df580:	55                   	push   %ebp
 86df581:	89 e5                	mov    %esp,%ebp
 86df583:	8b 45 08             	mov    0x8(%ebp),%eax
 86df586:	8b 55 10             	mov    0x10(%ebp),%edx
 86df589:	89 10                	mov    %edx,(%eax)
 86df58b:	8b 55 0c             	mov    0xc(%ebp),%edx
 86df58e:	89 50 04             	mov    %edx,0x4(%eax)
 86df591:	5d                   	pop    %ebp
 86df592:	c2 04 00             	ret    $0x4
 86df595:	90                   	nop
 86df596:	90                   	nop
 86df597:	90                   	nop
 86df598:	90                   	nop
 86df599:	90                   	nop
 86df59a:	90                   	nop
 86df59b:	90                   	nop
 86df59c:	90                   	nop
 86df59d:	90                   	nop
 86df59e:	90                   	nop
 86df59f:	90                   	nop

```

```c
// std::error_category::default_error_condition @ 0x86df580

/* std::error_category::default_error_condition(int) const */

void std::error_category::default_error_condition(int param_1)

{
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  
  *(undefined4 *)param_1 = in_stack_0000000c;
  *(undefined4 *)(param_1 + 4) = in_stack_00000008;
  return;
}

```

---

## equivalent

```asm
// === 086df5a0 std::error_category::equivalent  [0x086df5a0-0x86df5ff] ===
 86df5a0:	55                   	push   %ebp
 86df5a1:	89 e5                	mov    %esp,%ebp
 86df5a3:	83 ec 28             	sub    $0x28,%esp
 86df5a6:	8b 45 08             	mov    0x8(%ebp),%eax
 86df5a9:	8d 4d f0             	lea    -0x10(%ebp),%ecx
 86df5ac:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 86df5af:	8b 5d 10             	mov    0x10(%ebp),%ebx
 86df5b2:	89 75 fc             	mov    %esi,-0x4(%ebp)
 86df5b5:	8b 75 0c             	mov    0xc(%ebp),%esi
 86df5b8:	8b 10                	mov    (%eax),%edx
 86df5ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 86df5be:	89 0c 24             	mov    %ecx,(%esp)
 86df5c1:	89 74 24 08          	mov    %esi,0x8(%esp)
 86df5c5:	ff 52 10             	call   *0x10(%edx)
 86df5c8:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86df5cb:	31 c0                	xor    %eax,%eax
 86df5cd:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 86df5d0:	83 ec 04             	sub    $0x4,%esp
 86df5d3:	39 53 04             	cmp    %edx,0x4(%ebx)
 86df5d6:	74 10                	je     86df5e8 <_ZNKSt14error_category10equivalentEiRKSt15error_condition+0x48>
 86df5d8:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 86df5db:	8b 75 fc             	mov    -0x4(%ebp),%esi
 86df5de:	89 ec                	mov    %ebp,%esp
 86df5e0:	5d                   	pop    %ebp
 86df5e1:	c3                   	ret
 86df5e2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 86df5e8:	39 0b                	cmp    %ecx,(%ebx)
 86df5ea:	8b 75 fc             	mov    -0x4(%ebp),%esi
 86df5ed:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 86df5f0:	0f 94 c0             	sete   %al
 86df5f3:	89 ec                	mov    %ebp,%esp
 86df5f5:	5d                   	pop    %ebp
 86df5f6:	c3                   	ret
 86df5f7:	90                   	nop
 86df5f8:	90                   	nop
 86df5f9:	90                   	nop
 86df5fa:	90                   	nop
 86df5fb:	90                   	nop
 86df5fc:	90                   	nop
 86df5fd:	90                   	nop
 86df5fe:	90                   	nop
 86df5ff:	90                   	nop

```

```c
// std::error_category::equivalent @ 0x86df5a0

/* std::error_category::equivalent(int, std::error_condition const&) const */

bool __thiscall
std::error_category::equivalent(error_category *this,int param_1,error_condition *param_2)

{
  int local_14;
  int local_10;
  
  (**(code **)(*(int *)this + 0x10))(&local_14,this,param_1);
  if (*(int *)(param_2 + 4) != local_10) {
    return false;
  }
  return *(int *)param_2 == local_14;
}

```

---

## equivalent_086df600

```asm
// === 086df600 std::error_category::equivalent  [0x086df600-0x86df62f] ===
 86df600:	55                   	push   %ebp
 86df601:	31 c0                	xor    %eax,%eax
 86df603:	89 e5                	mov    %esp,%ebp
 86df605:	8b 55 0c             	mov    0xc(%ebp),%edx
 86df608:	8b 4d 08             	mov    0x8(%ebp),%ecx
 86df60b:	3b 4a 04             	cmp    0x4(%edx),%ecx
 86df60e:	74 08                	je     86df618 <_ZNKSt14error_category10equivalentERKSt10error_codei+0x18>
 86df610:	5d                   	pop    %ebp
 86df611:	c3                   	ret
 86df612:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 86df618:	8b 45 10             	mov    0x10(%ebp),%eax
 86df61b:	3b 02                	cmp    (%edx),%eax
 86df61d:	5d                   	pop    %ebp
 86df61e:	0f 94 c0             	sete   %al
 86df621:	c3                   	ret
 86df622:	90                   	nop
 86df623:	90                   	nop
 86df624:	90                   	nop
 86df625:	90                   	nop
 86df626:	90                   	nop
 86df627:	90                   	nop
 86df628:	90                   	nop
 86df629:	90                   	nop
 86df62a:	90                   	nop
 86df62b:	90                   	nop
 86df62c:	90                   	nop
 86df62d:	90                   	nop
 86df62e:	90                   	nop
 86df62f:	90                   	nop

```

```c
// std::error_category::equivalent @ 0x86df600

/* std::error_category::equivalent(std::error_code const&, int) const */

bool __thiscall
std::error_category::equivalent(error_category *this,error_code *param_1,int param_2)

{
  if (this != *(error_category **)(param_1 + 4)) {
    return false;
  }
  return param_2 == *(int *)param_1;
}

```

