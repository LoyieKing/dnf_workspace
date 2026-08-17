# std__error_code

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## default_error_condition

```asm
// === 086df630 std::error_code::default_error_condition  [0x086df630-0x86df65f] ===
 86df630:	55                   	push   %ebp
 86df631:	89 e5                	mov    %esp,%ebp
 86df633:	53                   	push   %ebx
 86df634:	83 ec 14             	sub    $0x14,%esp
 86df637:	8b 55 0c             	mov    0xc(%ebp),%edx
 86df63a:	8b 5d 08             	mov    0x8(%ebp),%ebx
 86df63d:	8b 42 04             	mov    0x4(%edx),%eax
 86df640:	8b 12                	mov    (%edx),%edx
 86df642:	8b 08                	mov    (%eax),%ecx
 86df644:	89 44 24 04          	mov    %eax,0x4(%esp)
 86df648:	89 1c 24             	mov    %ebx,(%esp)
 86df64b:	89 54 24 08          	mov    %edx,0x8(%esp)
 86df64f:	ff 51 10             	call   *0x10(%ecx)
 86df652:	89 d8                	mov    %ebx,%eax
 86df654:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 86df657:	83 ec 04             	sub    $0x4,%esp
 86df65a:	c9                   	leave
 86df65b:	c2 04 00             	ret    $0x4
 86df65e:	90                   	nop
 86df65f:	90                   	nop

```

```c
// std::error_code::default_error_condition @ 0x86df630

/* std::error_code::default_error_condition() const */

undefined4 std::error_code::default_error_condition(void)

{
  undefined4 in_stack_00000004;
  int in_stack_00000008;
  
  (**(code **)(**(int **)(in_stack_00000008 + 4) + 0x10))();
  return in_stack_00000004;
}

```

