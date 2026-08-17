# std__messages_lt_char_gt_

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## do_get

```asm
// === 0871fa10 std::messages<char>::do_get  [0x0871fa10-0x871fa7f] ===
 871fa10:	55                   	push   %ebp
 871fa11:	89 e5                	mov    %esp,%ebp
 871fa13:	83 ec 38             	sub    $0x38,%esp
 871fa16:	8b 45 0c             	mov    0xc(%ebp),%eax
 871fa19:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 871fa1c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 871fa1f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 871fa22:	89 7d fc             	mov    %edi,-0x4(%ebp)
 871fa25:	8b 40 08             	mov    0x8(%eax),%eax
 871fa28:	89 04 24             	mov    %eax,(%esp)
 871fa2b:	e8 40 e4 95 ff       	call   807de70 <__uselocale@plt>
 871fa30:	89 c7                	mov    %eax,%edi
 871fa32:	8b 45 1c             	mov    0x1c(%ebp),%eax
 871fa35:	8b 00                	mov    (%eax),%eax
 871fa37:	89 04 24             	mov    %eax,(%esp)
 871fa3a:	e8 01 de 95 ff       	call   807d840 <gettext@plt>
 871fa3f:	89 3c 24             	mov    %edi,(%esp)
 871fa42:	89 c6                	mov    %eax,%esi
 871fa44:	e8 27 e4 95 ff       	call   807de70 <__uselocale@plt>
 871fa49:	8d 45 e7             	lea    -0x19(%ebp),%eax
 871fa4c:	89 44 24 08          	mov    %eax,0x8(%esp)
 871fa50:	89 74 24 04          	mov    %esi,0x4(%esp)
 871fa54:	89 1c 24             	mov    %ebx,(%esp)
 871fa57:	e8 d4 7b fe ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 871fa5c:	89 d8                	mov    %ebx,%eax
 871fa5e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 871fa61:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 871fa64:	8b 7d fc             	mov    -0x4(%ebp),%edi
 871fa67:	89 ec                	mov    %ebp,%esp
 871fa69:	5d                   	pop    %ebp
 871fa6a:	c2 04 00             	ret    $0x4
 871fa6d:	89 04 24             	mov    %eax,(%esp)
 871fa70:	e8 db 3c 3c 00       	call   8ae3750 <_Unwind_Resume>
 871fa75:	90                   	nop
 871fa76:	90                   	nop
 871fa77:	90                   	nop
 871fa78:	90                   	nop
 871fa79:	90                   	nop
 871fa7a:	90                   	nop
 871fa7b:	90                   	nop
 871fa7c:	90                   	nop
 871fa7d:	90                   	nop
 871fa7e:	90                   	nop
 871fa7f:	90                   	nop

```

```c
// std::messages<char>::do_get @ 0x871fa10

/* std::messages<char>::do_get(int, int, int, std::string const&) const */

int std::messages<char>::do_get(int param_1,int param_2,int param_3,string *param_4)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 *in_stack_00000018;
  allocator local_1d [13];
  
  uVar1 = __uselocale(*(undefined4 *)(param_2 + 8));
  pcVar2 = (char *)gettext(*in_stack_00000018);
  __uselocale(uVar1);
                    /* try { // try from 0871fa57 to 0871fa5b has its CatchHandler @ 0871fa6d */
  string::string((string *)param_1,pcVar2,local_1d);
  return param_1;
}

```

