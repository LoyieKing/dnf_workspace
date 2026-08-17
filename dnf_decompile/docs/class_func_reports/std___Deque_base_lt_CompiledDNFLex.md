# std___Deque_base_lt_CompiledDNFLex

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## stream_t_

```asm
// === 08ad04c0 std::_Deque_base<CompiledDNFLex::stream_t,  [0x08ad04c0-0x8ad057f] ===
 8ad04c0:	55                   	push   %ebp
 8ad04c1:	89 e5                	mov    %esp,%ebp
 8ad04c3:	56                   	push   %esi
 8ad04c4:	53                   	push   %ebx
 8ad04c5:	89 c3                	mov    %eax,%ebx
 8ad04c7:	83 ec 10             	sub    $0x10,%esp
 8ad04ca:	c7 40 04 08 00 00 00 	movl   $0x8,0x4(%eax)
 8ad04d1:	c7 04 24 20 00 00 00 	movl   $0x20,(%esp)
 8ad04d8:	e8 73 3f c5 ff       	call   8724450 <_Znwj>
 8ad04dd:	8b 53 04             	mov    0x4(%ebx),%edx
 8ad04e0:	89 03                	mov    %eax,(%ebx)
 8ad04e2:	c7 04 24 f4 01 00 00 	movl   $0x1f4,(%esp)
 8ad04e9:	83 ea 01             	sub    $0x1,%edx
 8ad04ec:	d1 ea                	shr    $1,%edx
 8ad04ee:	8d 34 90             	lea    (%eax,%edx,4),%esi
 8ad04f1:	e8 5a 3f c5 ff       	call   8724450 <_Znwj>
 8ad04f6:	8d 90 f4 01 00 00    	lea    0x1f4(%eax),%edx
 8ad04fc:	89 06                	mov    %eax,(%esi)
 8ad04fe:	89 43 0c             	mov    %eax,0xc(%ebx)
 8ad0501:	89 53 10             	mov    %edx,0x10(%ebx)
 8ad0504:	8b 16                	mov    (%esi),%edx
 8ad0506:	89 73 14             	mov    %esi,0x14(%ebx)
 8ad0509:	89 73 24             	mov    %esi,0x24(%ebx)
 8ad050c:	89 43 08             	mov    %eax,0x8(%ebx)
 8ad050f:	8d 8a f4 01 00 00    	lea    0x1f4(%edx),%ecx
 8ad0515:	89 53 1c             	mov    %edx,0x1c(%ebx)
 8ad0518:	89 4b 20             	mov    %ecx,0x20(%ebx)
 8ad051b:	89 53 18             	mov    %edx,0x18(%ebx)
 8ad051e:	83 c4 10             	add    $0x10,%esp
 8ad0521:	5b                   	pop    %ebx
 8ad0522:	5e                   	pop    %esi
 8ad0523:	5d                   	pop    %ebp
 8ad0524:	c3                   	ret
 8ad0525:	89 04 24             	mov    %eax,(%esp)
 8ad0528:	e8 23 32 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad052d:	89 04 24             	mov    %eax,(%esp)
 8ad0530:	e8 ab 57 c5 ff       	call   8725ce0 <__cxa_begin_catch>
 8ad0535:	e8 a6 46 c5 ff       	call   8724be0 <__cxa_rethrow>
 8ad053a:	89 c6                	mov    %eax,%esi
 8ad053c:	e8 ef 56 c5 ff       	call   8725c30 <__cxa_end_catch>
 8ad0541:	89 34 24             	mov    %esi,(%esp)
 8ad0544:	e8 97 57 c5 ff       	call   8725ce0 <__cxa_begin_catch>
 8ad0549:	8b 03                	mov    (%ebx),%eax
 8ad054b:	89 04 24             	mov    %eax,(%esp)
 8ad054e:	e8 9d 3f c5 ff       	call   87244f0 <_ZdlPv>
 8ad0553:	c7 03 00 00 00 00    	movl   $0x0,(%ebx)
 8ad0559:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 8ad0560:	e8 7b 46 c5 ff       	call   8724be0 <__cxa_rethrow>
 8ad0565:	89 c6                	mov    %eax,%esi
 8ad0567:	e8 c4 56 c5 ff       	call   8725c30 <__cxa_end_catch>
 8ad056c:	89 34 24             	mov    %esi,(%esp)
 8ad056f:	e8 dc 31 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad0574:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad057a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// std::_Deque_base<CompiledDNFLex::stream_t, @ 0x8ad04c0

/* DWARF original prototype: void
   _M_initialize_map(_Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
   * this, size_t __num_elements) */

void __thiscall
std::_Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::
_M_initialize_map(_Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  *this,size_t __num_elements)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_EAX;
  void *pvVar3;
  
                    /* Unresolved local var: size_t __num_nodes@[???]
                       Unresolved local var: stream_t * * __nstart@[???]
                       Unresolved local var: stream_t * * __nfinish@[???] */
  in_EAX[1] = 8;
                    /* try { // try from 08ad04d8 to 08ad04dc has its CatchHandler @ 08ad0525 */
  pvVar3 = operator_new(0x20);
  *in_EAX = pvVar3;
                    /* Unresolved local var: stream_t * * __cur@[???] */
  piVar1 = (int *)((int)pvVar3 + (in_EAX[1] - 1 >> 1) * 4);
                    /* try { // try from 08ad04f1 to 08ad04f5 has its CatchHandler @ 08ad052d */
  pvVar3 = operator_new(500);
  *piVar1 = (int)pvVar3;
  in_EAX[3] = pvVar3;
  in_EAX[4] = (int)pvVar3 + 500;
  iVar2 = *piVar1;
  in_EAX[5] = piVar1;
  in_EAX[9] = piVar1;
  in_EAX[2] = pvVar3;
  in_EAX[7] = iVar2;
  in_EAX[8] = iVar2 + 500;
  in_EAX[6] = iVar2;
  return;
}

```

