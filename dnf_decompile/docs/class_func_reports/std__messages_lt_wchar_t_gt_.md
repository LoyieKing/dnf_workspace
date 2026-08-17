# std__messages_lt_wchar_t_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## do_get

```asm
// === 0871f9c0 std::messages<wchar_t>::do_get  [0x0871f9c0-0x871fa0f] ===
 871f9c0:	55                   	push   %ebp
 871f9c1:	89 e5                	mov    %esp,%ebp
 871f9c3:	83 ec 18             	sub    $0x18,%esp
 871f9c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 871f9c9:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 871f9cc:	8b 5d 08             	mov    0x8(%ebp),%ebx
 871f9cf:	89 75 fc             	mov    %esi,-0x4(%ebp)
 871f9d2:	8b 40 08             	mov    0x8(%eax),%eax
 871f9d5:	89 04 24             	mov    %eax,(%esp)
 871f9d8:	e8 93 e4 95 ff       	call   807de70 <__uselocale@plt>
 871f9dd:	89 c6                	mov    %eax,%esi
 871f9df:	8b 45 1c             	mov    0x1c(%ebp),%eax
 871f9e2:	8b 00                	mov    (%eax),%eax
 871f9e4:	89 04 24             	mov    %eax,(%esp)
 871f9e7:	e8 54 de 95 ff       	call   807d840 <gettext@plt>
 871f9ec:	89 34 24             	mov    %esi,(%esp)
 871f9ef:	e8 7c e4 95 ff       	call   807de70 <__uselocale@plt>
 871f9f4:	89 d8                	mov    %ebx,%eax
 871f9f6:	c7 03 9c cd 48 09    	movl   $0x948cd9c,(%ebx)
 871f9fc:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 871f9ff:	8b 75 fc             	mov    -0x4(%ebp),%esi
 871fa02:	89 ec                	mov    %ebp,%esp
 871fa04:	5d                   	pop    %ebp
 871fa05:	c2 04 00             	ret    $0x4
 871fa08:	90                   	nop
 871fa09:	90                   	nop
 871fa0a:	90                   	nop
 871fa0b:	90                   	nop
 871fa0c:	90                   	nop
 871fa0d:	90                   	nop
 871fa0e:	90                   	nop
 871fa0f:	90                   	nop

```

```c
// std::messages<wchar_t>::do_get @ 0x871f9c0

/* std::messages<wchar_t>::do_get(int, int, int, std::wstring const&) const */

int std::messages<wchar_t>::do_get(int param_1,int param_2,int param_3,wstring *param_4)

{
  undefined4 uVar1;
  undefined4 *in_stack_00000018;
  
  uVar1 = __uselocale(*(undefined4 *)(param_2 + 8));
  gettext(*in_stack_00000018);
  __uselocale(uVar1);
  *(undefined **)param_1 = &DAT_0948cd9c;
  return param_1;
}

```

