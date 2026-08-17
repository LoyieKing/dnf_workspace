# CompiledDNFLex

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 29

---

## CloseInputStream

```asm
// === 08ad0e90 CompiledDNFLex::CloseInputStream  [0x08ad0e90-0x8ad0ecf] ===
 8ad0e90:	55                   	push   %ebp
 8ad0e91:	89 e5                	mov    %esp,%ebp
 8ad0e93:	53                   	push   %ebx
 8ad0e94:	83 ec 14             	sub    $0x14,%esp
 8ad0e97:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad0e9a:	8b 83 30 20 00 00    	mov    0x2030(%ebx),%eax
 8ad0ea0:	3b 83 20 20 00 00    	cmp    0x2020(%ebx),%eax
 8ad0ea6:	74 1e                	je     8ad0ec6 <_ZN14CompiledDNFLex16CloseInputStreamEv+0x36>
 8ad0ea8:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ad0eaf:	00 
 8ad0eb0:	89 1c 24             	mov    %ebx,(%esp)
 8ad0eb3:	e8 c8 fd ff ff       	call   8ad0c80 <_ZN14CompiledDNFLex14PopInputStreamEb>
 8ad0eb8:	8b 83 30 20 00 00    	mov    0x2030(%ebx),%eax
 8ad0ebe:	3b 83 20 20 00 00    	cmp    0x2020(%ebx),%eax
 8ad0ec4:	75 e2                	jne    8ad0ea8 <_ZN14CompiledDNFLex16CloseInputStreamEv+0x18>
 8ad0ec6:	83 c4 14             	add    $0x14,%esp
 8ad0ec9:	5b                   	pop    %ebx
 8ad0eca:	5d                   	pop    %ebp
 8ad0ecb:	c3                   	ret
 8ad0ecc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// CompiledDNFLex::CloseInputStream @ 0x8ad0e90

/* DWARF original prototype: void CloseInputStream(CompiledDNFLex * this) */

void __thiscall CompiledDNFLex::CloseInputStream(CompiledDNFLex *this)

{
  if ((this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_cur !=
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_start._M_cur) {
    do {
      PopInputStream(this,true);
    } while ((this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_cur !=
             (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_start._M_cur);
  }
  return;
}

```

---

## CompiledDNFLex

```asm
// === 08ad0580 CompiledDNFLex::CompiledDNFLex  [0x08ad0580-0x8ad07bf] ===
 8ad0580:	55                   	push   %ebp
 8ad0581:	89 e5                	mov    %esp,%ebp
 8ad0583:	57                   	push   %edi
 8ad0584:	56                   	push   %esi
 8ad0585:	53                   	push   %ebx
 8ad0586:	83 ec 6c             	sub    $0x6c,%esp
 8ad0589:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad058c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad058f:	8d 75 c0             	lea    -0x40(%ebp),%esi
 8ad0592:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8ad0599:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8ad05a0:	c7 03 20 ed e2 08    	movl   $0x8e2ed20,(%ebx)
 8ad05a6:	89 43 10             	mov    %eax,0x10(%ebx)
 8ad05a9:	89 f0                	mov    %esi,%eax
 8ad05ab:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 8ad05b2:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
 8ad05b9:	c6 43 0c 00          	movb   $0x0,0xc(%ebx)
 8ad05bd:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 8ad05c4:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8ad05cb:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8ad05d2:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8ad05d9:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8ad05e0:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8ad05e7:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8ad05ee:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8ad05f5:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8ad05fc:	e8 bf fe ff ff       	call   8ad04c0 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EE17_M_initialize_mapEj.clone.1>
 8ad0601:	8d 83 18 20 00 00    	lea    0x2018(%ebx),%eax
 8ad0607:	c7 83 18 20 00 00 00 	movl   $0x0,0x2018(%ebx)
 8ad060e:	00 00 00 
 8ad0611:	c7 83 1c 20 00 00 00 	movl   $0x0,0x201c(%ebx)
 8ad0618:	00 00 00 
 8ad061b:	c7 83 20 20 00 00 00 	movl   $0x0,0x2020(%ebx)
 8ad0622:	00 00 00 
 8ad0625:	c7 83 24 20 00 00 00 	movl   $0x0,0x2024(%ebx)
 8ad062c:	00 00 00 
 8ad062f:	c7 83 28 20 00 00 00 	movl   $0x0,0x2028(%ebx)
 8ad0636:	00 00 00 
 8ad0639:	c7 83 2c 20 00 00 00 	movl   $0x0,0x202c(%ebx)
 8ad0640:	00 00 00 
 8ad0643:	c7 83 30 20 00 00 00 	movl   $0x0,0x2030(%ebx)
 8ad064a:	00 00 00 
 8ad064d:	c7 83 34 20 00 00 00 	movl   $0x0,0x2034(%ebx)
 8ad0654:	00 00 00 
 8ad0657:	c7 83 38 20 00 00 00 	movl   $0x0,0x2038(%ebx)
 8ad065e:	00 00 00 
 8ad0661:	c7 83 3c 20 00 00 00 	movl   $0x0,0x203c(%ebx)
 8ad0668:	00 00 00 
 8ad066b:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8ad066e:	e8 4d fe ff ff       	call   8ad04c0 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EE17_M_initialize_mapEj.clone.1>
 8ad0673:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 8ad0676:	85 c9                	test   %ecx,%ecx
 8ad0678:	0f 84 c0 00 00 00    	je     8ad073e <_ZN14CompiledDNFLexC1EP19ScriptStringManager+0x1be>
 8ad067e:	8b 83 20 20 00 00    	mov    0x2020(%ebx),%eax
 8ad0684:	8b 93 24 20 00 00    	mov    0x2024(%ebx),%edx
 8ad068a:	8b 8b 28 20 00 00    	mov    0x2028(%ebx),%ecx
 8ad0690:	8b bb 2c 20 00 00    	mov    0x202c(%ebx),%edi
 8ad0696:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8ad0699:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8ad069c:	89 83 20 20 00 00    	mov    %eax,0x2020(%ebx)
 8ad06a2:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8ad06a5:	89 83 24 20 00 00    	mov    %eax,0x2024(%ebx)
 8ad06ab:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8ad06ae:	89 83 28 20 00 00    	mov    %eax,0x2028(%ebx)
 8ad06b4:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8ad06b7:	89 83 2c 20 00 00    	mov    %eax,0x202c(%ebx)
 8ad06bd:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8ad06c0:	89 55 cc             	mov    %edx,-0x34(%ebp)
 8ad06c3:	8b 93 34 20 00 00    	mov    0x2034(%ebx),%edx
 8ad06c9:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8ad06cc:	8b bb 3c 20 00 00    	mov    0x203c(%ebx),%edi
 8ad06d2:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 8ad06d5:	8b 8b 38 20 00 00    	mov    0x2038(%ebx),%ecx
 8ad06db:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8ad06de:	8b 83 30 20 00 00    	mov    0x2030(%ebx),%eax
 8ad06e4:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8ad06e7:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ad06ea:	89 83 30 20 00 00    	mov    %eax,0x2030(%ebx)
 8ad06f0:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ad06f3:	89 83 34 20 00 00    	mov    %eax,0x2034(%ebx)
 8ad06f9:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad06fc:	89 83 38 20 00 00    	mov    %eax,0x2038(%ebx)
 8ad0702:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad0705:	89 83 3c 20 00 00    	mov    %eax,0x203c(%ebx)
 8ad070b:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 8ad070e:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8ad0711:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8ad0714:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8ad0717:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8ad071a:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8ad071d:	8b 83 18 20 00 00    	mov    0x2018(%ebx),%eax
 8ad0723:	89 93 18 20 00 00    	mov    %edx,0x2018(%ebx)
 8ad0729:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8ad072c:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8ad072f:	8b 83 1c 20 00 00    	mov    0x201c(%ebx),%eax
 8ad0735:	89 93 1c 20 00 00    	mov    %edx,0x201c(%ebx)
 8ad073b:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8ad073e:	89 34 24             	mov    %esi,(%esp)
 8ad0741:	e8 7a 0e 00 00       	call   8ad15c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev>
 8ad0746:	8d 53 18             	lea    0x18(%ebx),%edx
 8ad0749:	b9 00 08 00 00       	mov    $0x800,%ecx
 8ad074e:	31 c0                	xor    %eax,%eax
 8ad0750:	89 d7                	mov    %edx,%edi
 8ad0752:	f3 ab                	rep stos %eax,%es:(%edi)
 8ad0754:	c6 83 40 20 00 00 01 	movb   $0x1,0x2040(%ebx)
 8ad075b:	c7 83 44 20 00 00 00 	movl   $0x0,0x2044(%ebx)
 8ad0762:	00 00 00 
 8ad0765:	c7 83 48 20 00 00 00 	movl   $0x0,0x2048(%ebx)
 8ad076c:	00 00 00 
 8ad076f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ad0776:	00 
 8ad0777:	89 1c 24             	mov    %ebx,(%esp)
 8ad077a:	e8 51 fc ff ff       	call   8ad03d0 <_ZN14CompiledDNFLex6createEb>
 8ad077f:	83 c4 6c             	add    $0x6c,%esp
 8ad0782:	5b                   	pop    %ebx
 8ad0783:	5e                   	pop    %esi
 8ad0784:	5f                   	pop    %edi
 8ad0785:	5d                   	pop    %ebp
 8ad0786:	c3                   	ret
 8ad0787:	89 04 24             	mov    %eax,(%esp)
 8ad078a:	e8 c1 2f 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad078f:	89 c3                	mov    %eax,%ebx
 8ad0791:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ad0794:	89 04 24             	mov    %eax,(%esp)
 8ad0797:	e8 24 0e 00 00       	call   8ad15c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev>
 8ad079c:	89 1c 24             	mov    %ebx,(%esp)
 8ad079f:	e8 ac 2f 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad07a4:	89 c3                	mov    %eax,%ebx
 8ad07a6:	89 34 24             	mov    %esi,(%esp)
 8ad07a9:	e8 12 0e 00 00       	call   8ad15c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev>
 8ad07ae:	89 1c 24             	mov    %ebx,(%esp)
 8ad07b1:	e8 9a 2f 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad07b6:	8d 76 00             	lea    0x0(%esi),%esi
 8ad07b9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// CompiledDNFLex::CompiledDNFLex @ 0x8ad0580

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: void CompiledDNFLex(CompiledDNFLex * this, ScriptStringManager *
   pStringManager) */

void __thiscall
CompiledDNFLex::CompiledDNFLex(CompiledDNFLex *this,ScriptStringManager *pStringManager)

{
  stream_t *psVar1;
  stream_t *psVar2;
  stream_t *psVar3;
  stream_t **ppsVar4;
  stream_t *psVar5;
  stream_t **ppsVar6;
  stream_t *psVar7;
  stream_t *psVar8;
  stream_t **ppsVar9;
  size_t sVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  _Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
  *in_stack_ffffff84;
  size_t in_stack_ffffff88;
  deque<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_> local_44;
  
  bVar13 = 0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_map = (stream_t **)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_map_size = 0;
  this->_vptr_CompiledDNFLex = (_func_int_varargs **)&PTR__CompiledDNFLex_08e2ed20;
  this->stringManager_ = pStringManager;
  this->offset_ = (char *)0x0;
  this->lastToken_ = DNF_TOK_EOF;
  this->stringManagerDelete_ = false;
  this->stringBuffer_ = (char *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_start._M_cur = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_start._M_first = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_start._M_last = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_start._M_node = (stream_t **)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_finish._M_cur = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_finish._M_first = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_finish._M_last = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_finish._M_node = (stream_t **)0x0;
                    /* try { // try from 08ad05fc to 08ad0600 has its CatchHandler @ 08ad0787 */
  std::_Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::
  _M_initialize_map(in_stack_ffffff84,in_stack_ffffff88);
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_map = (stream_t **)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_map_size = 0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_start._M_cur = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_start._M_first = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_start._M_last = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_start._M_node = (stream_t **)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_finish._M_cur = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_finish._M_first = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_finish._M_last = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_finish._M_node = (stream_t **)0x0;
                    /* try { // try from 08ad066e to 08ad0672 has its CatchHandler @ 08ad07a4 */
  std::_Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::
  _M_initialize_map(in_stack_ffffff84,in_stack_ffffff88);
  if (local_44.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_map != (stream_t **)0x0) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    psVar1 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_start._M_cur;
    psVar2 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_start._M_first;
    psVar3 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_start._M_last;
    ppsVar4 = (this->stream_stack_).c.
              super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
              ._M_impl._M_start._M_node;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_start._M_cur =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_cur;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_start._M_first =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_first;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_start._M_last =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_last;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_start._M_node =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_node;
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    psVar5 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_first;
    ppsVar6 = (this->stream_stack_).c.
              super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
              ._M_impl._M_finish._M_node;
    psVar7 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_last;
    psVar8 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_cur;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_cur =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_cur;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_first =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_first;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_last =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_last;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_node =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_node;
                    /* Unresolved local var: stream_t * * __tmp@[???] */
    ppsVar9 = (this->stream_stack_).c.
              super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
              ._M_impl._M_map;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_map = local_44.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_map;
                    /* Unresolved local var: size_t __tmp@[???] */
    sVar10 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_map_size;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_map_size = local_44.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_map_size;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_map = ppsVar9;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_map_size = sVar10;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_start._M_cur = psVar1;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_start._M_first = psVar2;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_start._M_last = psVar3;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_start._M_node = ppsVar4;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_finish._M_cur = psVar8;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_finish._M_first = psVar5;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_finish._M_last = psVar7;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_finish._M_node = ppsVar6;
  }
  std::deque<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::~deque
            (&local_44,in_stack_ffffff88);
  pcVar12 = this->ERR_BUF;
  for (iVar11 = 0x800; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12 = pcVar12 + (uint)bVar13 * -8 + 4;
  }
  this->allow_inclusion_ = true;
  this->LexerError_ = (TLexerError)0x0;
  this->LoadStream_ = (TLoadStream)0x0;
                    /* try { // try from 08ad077a to 08ad077e has its CatchHandler @ 08ad078f */
  create(this,false);
  return;
}

```

---

## CompiledDNFLex_08ad07c0

```asm
// === 08ad07c0 CompiledDNFLex::CompiledDNFLex  [0x08ad07c0-0x8ad09ff] ===
 8ad07c0:	55                   	push   %ebp
 8ad07c1:	89 e5                	mov    %esp,%ebp
 8ad07c3:	57                   	push   %edi
 8ad07c4:	56                   	push   %esi
 8ad07c5:	53                   	push   %ebx
 8ad07c6:	83 ec 6c             	sub    $0x6c,%esp
 8ad07c9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad07cc:	8d 75 c0             	lea    -0x40(%ebp),%esi
 8ad07cf:	89 f0                	mov    %esi,%eax
 8ad07d1:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 8ad07d8:	c7 03 20 ed e2 08    	movl   $0x8e2ed20,(%ebx)
 8ad07de:	c7 43 04 00 00 00 00 	movl   $0x0,0x4(%ebx)
 8ad07e5:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
 8ad07ec:	c6 43 0c 00          	movb   $0x0,0xc(%ebx)
 8ad07f0:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 8ad07f7:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 8ad07fe:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 8ad0805:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 8ad080c:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8ad0813:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8ad081a:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8ad0821:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 8ad0828:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8ad082f:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8ad0836:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8ad083d:	e8 7e fc ff ff       	call   8ad04c0 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EE17_M_initialize_mapEj.clone.1>
 8ad0842:	8d 83 18 20 00 00    	lea    0x2018(%ebx),%eax
 8ad0848:	c7 83 18 20 00 00 00 	movl   $0x0,0x2018(%ebx)
 8ad084f:	00 00 00 
 8ad0852:	c7 83 1c 20 00 00 00 	movl   $0x0,0x201c(%ebx)
 8ad0859:	00 00 00 
 8ad085c:	c7 83 20 20 00 00 00 	movl   $0x0,0x2020(%ebx)
 8ad0863:	00 00 00 
 8ad0866:	c7 83 24 20 00 00 00 	movl   $0x0,0x2024(%ebx)
 8ad086d:	00 00 00 
 8ad0870:	c7 83 28 20 00 00 00 	movl   $0x0,0x2028(%ebx)
 8ad0877:	00 00 00 
 8ad087a:	c7 83 2c 20 00 00 00 	movl   $0x0,0x202c(%ebx)
 8ad0881:	00 00 00 
 8ad0884:	c7 83 30 20 00 00 00 	movl   $0x0,0x2030(%ebx)
 8ad088b:	00 00 00 
 8ad088e:	c7 83 34 20 00 00 00 	movl   $0x0,0x2034(%ebx)
 8ad0895:	00 00 00 
 8ad0898:	c7 83 38 20 00 00 00 	movl   $0x0,0x2038(%ebx)
 8ad089f:	00 00 00 
 8ad08a2:	c7 83 3c 20 00 00 00 	movl   $0x0,0x203c(%ebx)
 8ad08a9:	00 00 00 
 8ad08ac:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 8ad08af:	e8 0c fc ff ff       	call   8ad04c0 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EE17_M_initialize_mapEj.clone.1>
 8ad08b4:	8b 7d c0             	mov    -0x40(%ebp),%edi
 8ad08b7:	85 ff                	test   %edi,%edi
 8ad08b9:	0f 84 c0 00 00 00    	je     8ad097f <_ZN14CompiledDNFLexC1Ev+0x1bf>
 8ad08bf:	8b 83 20 20 00 00    	mov    0x2020(%ebx),%eax
 8ad08c5:	8b 93 24 20 00 00    	mov    0x2024(%ebx),%edx
 8ad08cb:	8b 8b 28 20 00 00    	mov    0x2028(%ebx),%ecx
 8ad08d1:	8b bb 2c 20 00 00    	mov    0x202c(%ebx),%edi
 8ad08d7:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8ad08da:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8ad08dd:	89 83 20 20 00 00    	mov    %eax,0x2020(%ebx)
 8ad08e3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8ad08e6:	89 83 24 20 00 00    	mov    %eax,0x2024(%ebx)
 8ad08ec:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8ad08ef:	89 83 28 20 00 00    	mov    %eax,0x2028(%ebx)
 8ad08f5:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8ad08f8:	89 83 2c 20 00 00    	mov    %eax,0x202c(%ebx)
 8ad08fe:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8ad0901:	89 55 cc             	mov    %edx,-0x34(%ebp)
 8ad0904:	8b 93 34 20 00 00    	mov    0x2034(%ebx),%edx
 8ad090a:	89 7d d4             	mov    %edi,-0x2c(%ebp)
 8ad090d:	8b bb 3c 20 00 00    	mov    0x203c(%ebx),%edi
 8ad0913:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 8ad0916:	8b 8b 38 20 00 00    	mov    0x2038(%ebx),%ecx
 8ad091c:	89 45 c8             	mov    %eax,-0x38(%ebp)
 8ad091f:	8b 83 30 20 00 00    	mov    0x2030(%ebx),%eax
 8ad0925:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 8ad0928:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ad092b:	89 83 30 20 00 00    	mov    %eax,0x2030(%ebx)
 8ad0931:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ad0934:	89 83 34 20 00 00    	mov    %eax,0x2034(%ebx)
 8ad093a:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad093d:	89 83 38 20 00 00    	mov    %eax,0x2038(%ebx)
 8ad0943:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad0946:	89 83 3c 20 00 00    	mov    %eax,0x203c(%ebx)
 8ad094c:	89 7d e4             	mov    %edi,-0x1c(%ebp)
 8ad094f:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8ad0952:	89 55 dc             	mov    %edx,-0x24(%ebp)
 8ad0955:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 8ad0958:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8ad095b:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8ad095e:	8b 83 18 20 00 00    	mov    0x2018(%ebx),%eax
 8ad0964:	89 93 18 20 00 00    	mov    %edx,0x2018(%ebx)
 8ad096a:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8ad096d:	89 45 c0             	mov    %eax,-0x40(%ebp)
 8ad0970:	8b 83 1c 20 00 00    	mov    0x201c(%ebx),%eax
 8ad0976:	89 93 1c 20 00 00    	mov    %edx,0x201c(%ebx)
 8ad097c:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8ad097f:	89 34 24             	mov    %esi,(%esp)
 8ad0982:	e8 39 0c 00 00       	call   8ad15c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev>
 8ad0987:	8d 53 18             	lea    0x18(%ebx),%edx
 8ad098a:	b9 00 08 00 00       	mov    $0x800,%ecx
 8ad098f:	31 c0                	xor    %eax,%eax
 8ad0991:	89 d7                	mov    %edx,%edi
 8ad0993:	f3 ab                	rep stos %eax,%es:(%edi)
 8ad0995:	c6 83 40 20 00 00 01 	movb   $0x1,0x2040(%ebx)
 8ad099c:	c7 83 44 20 00 00 00 	movl   $0x0,0x2044(%ebx)
 8ad09a3:	00 00 00 
 8ad09a6:	c7 83 48 20 00 00 00 	movl   $0x0,0x2048(%ebx)
 8ad09ad:	00 00 00 
 8ad09b0:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8ad09b7:	00 
 8ad09b8:	89 1c 24             	mov    %ebx,(%esp)
 8ad09bb:	e8 10 fa ff ff       	call   8ad03d0 <_ZN14CompiledDNFLex6createEb>
 8ad09c0:	83 c4 6c             	add    $0x6c,%esp
 8ad09c3:	5b                   	pop    %ebx
 8ad09c4:	5e                   	pop    %esi
 8ad09c5:	5f                   	pop    %edi
 8ad09c6:	5d                   	pop    %ebp
 8ad09c7:	c3                   	ret
 8ad09c8:	89 04 24             	mov    %eax,(%esp)
 8ad09cb:	e8 80 2d 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad09d0:	89 c3                	mov    %eax,%ebx
 8ad09d2:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 8ad09d5:	89 04 24             	mov    %eax,(%esp)
 8ad09d8:	e8 e3 0b 00 00       	call   8ad15c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev>
 8ad09dd:	89 1c 24             	mov    %ebx,(%esp)
 8ad09e0:	e8 6b 2d 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad09e5:	89 c3                	mov    %eax,%ebx
 8ad09e7:	89 34 24             	mov    %esi,(%esp)
 8ad09ea:	e8 d1 0b 00 00       	call   8ad15c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev>
 8ad09ef:	89 1c 24             	mov    %ebx,(%esp)
 8ad09f2:	e8 59 2d 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad09f7:	90                   	nop
 8ad09f8:	90                   	nop
 8ad09f9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// CompiledDNFLex::CompiledDNFLex @ 0x8ad07c0

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: void CompiledDNFLex(CompiledDNFLex * this) */

void __thiscall CompiledDNFLex::CompiledDNFLex(CompiledDNFLex *this)

{
  stream_t *psVar1;
  stream_t *psVar2;
  stream_t *psVar3;
  stream_t **ppsVar4;
  stream_t *psVar5;
  stream_t **ppsVar6;
  stream_t *psVar7;
  stream_t *psVar8;
  stream_t **ppsVar9;
  size_t sVar10;
  int iVar11;
  char *pcVar12;
  byte bVar13;
  _Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
  *in_stack_ffffff84;
  size_t in_stack_ffffff88;
  deque<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_> local_44;
  
  bVar13 = 0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_map = (stream_t **)0x0;
  this->_vptr_CompiledDNFLex = (_func_int_varargs **)&PTR__CompiledDNFLex_08e2ed20;
  this->offset_ = (char *)0x0;
  this->lastToken_ = DNF_TOK_EOF;
  this->stringManagerDelete_ = false;
  this->stringManager_ = (ScriptStringManager *)0x0;
  this->stringBuffer_ = (char *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_map_size = 0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_start._M_cur = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_start._M_first = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_start._M_last = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_start._M_node = (stream_t **)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_finish._M_cur = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_finish._M_first = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_finish._M_last = (stream_t *)0x0;
  local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
  _M_impl._M_finish._M_node = (stream_t **)0x0;
                    /* try { // try from 08ad083d to 08ad0841 has its CatchHandler @ 08ad09c8 */
  std::_Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::
  _M_initialize_map(in_stack_ffffff84,in_stack_ffffff88);
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_map = (stream_t **)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_map_size = 0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_start._M_cur = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_start._M_first = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_start._M_last = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_start._M_node = (stream_t **)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_finish._M_cur = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_finish._M_first = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_finish._M_last = (stream_t *)0x0;
  (this->stream_stack_).c.
  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
  _M_finish._M_node = (stream_t **)0x0;
                    /* try { // try from 08ad08af to 08ad08b3 has its CatchHandler @ 08ad09e5 */
  std::_Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::
  _M_initialize_map(in_stack_ffffff84,in_stack_ffffff88);
  if (local_44.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_map != (stream_t **)0x0) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    psVar1 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_start._M_cur;
    psVar2 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_start._M_first;
    psVar3 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_start._M_last;
    ppsVar4 = (this->stream_stack_).c.
              super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
              ._M_impl._M_start._M_node;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_start._M_cur =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_cur;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_start._M_first =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_first;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_start._M_last =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_last;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_start._M_node =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_node;
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    psVar5 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_first;
    ppsVar6 = (this->stream_stack_).c.
              super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
              ._M_impl._M_finish._M_node;
    psVar7 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_last;
    psVar8 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_cur;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_cur =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_cur;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_first =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_first;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_last =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_last;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_node =
         local_44.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_node;
                    /* Unresolved local var: stream_t * * __tmp@[???] */
    ppsVar9 = (this->stream_stack_).c.
              super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
              ._M_impl._M_map;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_map = local_44.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_map;
                    /* Unresolved local var: size_t __tmp@[???] */
    sVar10 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_map_size;
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_map_size = local_44.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_map_size;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_map = ppsVar9;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_map_size = sVar10;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_start._M_cur = psVar1;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_start._M_first = psVar2;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_start._M_last = psVar3;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_start._M_node = ppsVar4;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_finish._M_cur = psVar8;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_finish._M_first = psVar5;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_finish._M_last = psVar7;
    local_44.super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
    _M_impl._M_finish._M_node = ppsVar6;
  }
  std::deque<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::~deque
            (&local_44,in_stack_ffffff88);
  pcVar12 = this->ERR_BUF;
  for (iVar11 = 0x800; iVar11 != 0; iVar11 = iVar11 + -1) {
    pcVar12[0] = '\0';
    pcVar12[1] = '\0';
    pcVar12[2] = '\0';
    pcVar12[3] = '\0';
    pcVar12 = pcVar12 + (uint)bVar13 * -8 + 4;
  }
  this->allow_inclusion_ = true;
  this->LexerError_ = (TLexerError)0x0;
  this->LoadStream_ = (TLoadStream)0x0;
                    /* try { // try from 08ad09bb to 08ad09bf has its CatchHandler @ 08ad09d0 */
  create(this,true);
  return;
}

```

---

## DisableInclusion

```asm
// === 08ad0080 CompiledDNFLex::DisableInclusion  [0x08ad0080-0x8ad008f] ===
 8ad0080:	55                   	push   %ebp
 8ad0081:	89 e5                	mov    %esp,%ebp
 8ad0083:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad0086:	c6 80 40 20 00 00 00 	movb   $0x0,0x2040(%eax)
 8ad008d:	5d                   	pop    %ebp
 8ad008e:	c3                   	ret
 8ad008f:	90                   	nop

```

```c
// CompiledDNFLex::DisableInclusion @ 0x8ad0080

/* DWARF original prototype: void DisableInclusion(CompiledDNFLex * this) */

void __thiscall CompiledDNFLex::DisableInclusion(CompiledDNFLex *this)

{
  this->allow_inclusion_ = false;
  return;
}

```

---

## EnableInclusion

```asm
// === 08ad0090 CompiledDNFLex::EnableInclusion  [0x08ad0090-0x8ad009f] ===
 8ad0090:	55                   	push   %ebp
 8ad0091:	89 e5                	mov    %esp,%ebp
 8ad0093:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad0096:	c6 80 40 20 00 00 01 	movb   $0x1,0x2040(%eax)
 8ad009d:	5d                   	pop    %ebp
 8ad009e:	c3                   	ret
 8ad009f:	90                   	nop

```

```c
// CompiledDNFLex::EnableInclusion @ 0x8ad0090

/* DWARF original prototype: void EnableInclusion(CompiledDNFLex * this) */

void __thiscall CompiledDNFLex::EnableInclusion(CompiledDNFLex *this)

{
  this->allow_inclusion_ = true;
  return;
}

```

---

## GetInputStream

```asm
// === 08acfea0 CompiledDNFLex::GetInputStream  [0x08acfea0-0x8acfedf] ===
 8acfea0:	55                   	push   %ebp
 8acfea1:	31 c0                	xor    %eax,%eax
 8acfea3:	89 e5                	mov    %esp,%ebp
 8acfea5:	8b 55 08             	mov    0x8(%ebp),%edx
 8acfea8:	8b 8a 30 20 00 00    	mov    0x2030(%edx),%ecx
 8acfeae:	3b 8a 20 20 00 00    	cmp    0x2020(%edx),%ecx
 8acfeb4:	74 11                	je     8acfec7 <_ZN14CompiledDNFLex14GetInputStreamEv+0x27>
 8acfeb6:	3b 8a 34 20 00 00    	cmp    0x2034(%edx),%ecx
 8acfebc:	8b 82 3c 20 00 00    	mov    0x203c(%edx),%eax
 8acfec2:	74 0c                	je     8acfed0 <_ZN14CompiledDNFLex14GetInputStreamEv+0x30>
 8acfec4:	8d 41 ec             	lea    -0x14(%ecx),%eax
 8acfec7:	5d                   	pop    %ebp
 8acfec8:	c3                   	ret
 8acfec9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8acfed0:	8b 48 fc             	mov    -0x4(%eax),%ecx
 8acfed3:	81 c1 f4 01 00 00    	add    $0x1f4,%ecx
 8acfed9:	eb e9                	jmp    8acfec4 <_ZN14CompiledDNFLex14GetInputStreamEv+0x24>
 8acfedb:	90                   	nop
 8acfedc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// CompiledDNFLex::GetInputStream @ 0x8acfea0

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: stream_t * GetInputStream(CompiledDNFLex * this) */

stream_t * __thiscall CompiledDNFLex::GetInputStream(CompiledDNFLex *this)

{
  stream_t *psVar1;
  stream_t *psVar2;
  
  psVar1 = (stream_t *)0x0;
  psVar2 = (this->stream_stack_).c.
           super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
           _M_impl._M_finish._M_cur;
  if (psVar2 != (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_start._M_cur) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    if (psVar2 == (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_finish._M_first) {
      psVar2 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_node[-1] + 0x19;
    }
    psVar1 = psVar2 + -1;
  }
  return psVar1;
}

```

---

## GetInputStream_08acfee0

```asm
// === 08acfee0 CompiledDNFLex::GetInputStream  [0x08acfee0-0x8acff1f] ===
 8acfee0:	55                   	push   %ebp
 8acfee1:	31 c0                	xor    %eax,%eax
 8acfee3:	89 e5                	mov    %esp,%ebp
 8acfee5:	8b 55 08             	mov    0x8(%ebp),%edx
 8acfee8:	8b 8a 30 20 00 00    	mov    0x2030(%edx),%ecx
 8acfeee:	3b 8a 20 20 00 00    	cmp    0x2020(%edx),%ecx
 8acfef4:	74 11                	je     8acff07 <_ZNK14CompiledDNFLex14GetInputStreamEv+0x27>
 8acfef6:	3b 8a 34 20 00 00    	cmp    0x2034(%edx),%ecx
 8acfefc:	8b 82 3c 20 00 00    	mov    0x203c(%edx),%eax
 8acff02:	74 0c                	je     8acff10 <_ZNK14CompiledDNFLex14GetInputStreamEv+0x30>
 8acff04:	8d 41 ec             	lea    -0x14(%ecx),%eax
 8acff07:	5d                   	pop    %ebp
 8acff08:	c3                   	ret
 8acff09:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8acff10:	8b 48 fc             	mov    -0x4(%eax),%ecx
 8acff13:	81 c1 f4 01 00 00    	add    $0x1f4,%ecx
 8acff19:	eb e9                	jmp    8acff04 <_ZNK14CompiledDNFLex14GetInputStreamEv+0x24>
 8acff1b:	90                   	nop
 8acff1c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// CompiledDNFLex::GetInputStream @ 0x8acfee0

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: stream_t * GetInputStream(CompiledDNFLex * this) */

stream_t * __thiscall CompiledDNFLex::GetInputStream(CompiledDNFLex *this)

{
  stream_t *psVar1;
  stream_t *psVar2;
  
  psVar1 = (stream_t *)0x0;
  psVar2 = (this->stream_stack_).c.
           super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
           _M_impl._M_finish._M_cur;
  if (psVar2 != (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_start._M_cur) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_const_CompiledDNFLex::stream_t&,_const_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    if (psVar2 == (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_finish._M_first) {
      psVar2 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_node[-1] + 0x19;
    }
    psVar1 = psVar2 + -1;
  }
  return psVar1;
}

```

---

## GetOffset

```asm
// === 08acff20 CompiledDNFLex::GetOffset  [0x08acff20-0x8acff6f] ===
 8acff20:	55                   	push   %ebp
 8acff21:	89 e5                	mov    %esp,%ebp
 8acff23:	8b 45 08             	mov    0x8(%ebp),%eax
 8acff26:	8b 90 30 20 00 00    	mov    0x2030(%eax),%edx
 8acff2c:	3b 90 20 20 00 00    	cmp    0x2020(%eax),%edx
 8acff32:	74 13                	je     8acff47 <_ZNK14CompiledDNFLex9GetOffsetEv+0x27>
 8acff34:	3b 90 34 20 00 00    	cmp    0x2034(%eax),%edx
 8acff3a:	8b 88 3c 20 00 00    	mov    0x203c(%eax),%ecx
 8acff40:	74 1e                	je     8acff60 <_ZNK14CompiledDNFLex9GetOffsetEv+0x40>
 8acff42:	83 ea 14             	sub    $0x14,%edx
 8acff45:	75 09                	jne    8acff50 <_ZNK14CompiledDNFLex9GetOffsetEv+0x30>
 8acff47:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8acff4c:	5d                   	pop    %ebp
 8acff4d:	c3                   	ret
 8acff4e:	66 90                	xchg   %ax,%ax
 8acff50:	8b 52 0c             	mov    0xc(%edx),%edx
 8acff53:	85 d2                	test   %edx,%edx
 8acff55:	74 f0                	je     8acff47 <_ZNK14CompiledDNFLex9GetOffsetEv+0x27>
 8acff57:	8b 40 04             	mov    0x4(%eax),%eax
 8acff5a:	5d                   	pop    %ebp
 8acff5b:	29 d0                	sub    %edx,%eax
 8acff5d:	c3                   	ret
 8acff5e:	66 90                	xchg   %ax,%ax
 8acff60:	8b 51 fc             	mov    -0x4(%ecx),%edx
 8acff63:	81 c2 f4 01 00 00    	add    $0x1f4,%edx
 8acff69:	eb d7                	jmp    8acff42 <_ZNK14CompiledDNFLex9GetOffsetEv+0x22>
 8acff6b:	90                   	nop
 8acff6c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// CompiledDNFLex::GetOffset @ 0x8acff20

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: int GetOffset(CompiledDNFLex * this) */

int __thiscall CompiledDNFLex::GetOffset(CompiledDNFLex *this)

{
  stream_t *psVar1;
  
                    /* Unresolved local var: stream_t * stream@[???] */
  psVar1 = (this->stream_stack_).c.
           super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
           _M_impl._M_finish._M_cur;
  if (psVar1 != (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_start._M_cur) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_const_CompiledDNFLex::stream_t&,_const_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    if (psVar1 == (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_finish._M_first) {
      psVar1 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_node[-1] + 0x19;
    }
    if ((psVar1 != (stream_t *)0x14) && (psVar1[-1].buffer != (char *)0x0)) {
      return (int)this->offset_ - (int)psVar1[-1].buffer;
    }
  }
  return -1;
}

```

---

## IsStream

```asm
// === 08acfe80 CompiledDNFLex::IsStream  [0x08acfe80-0x8acfe9f] ===
 8acfe80:	55                   	push   %ebp
 8acfe81:	89 e5                	mov    %esp,%ebp
 8acfe83:	8b 45 08             	mov    0x8(%ebp),%eax
 8acfe86:	5d                   	pop    %ebp
 8acfe87:	8b 90 30 20 00 00    	mov    0x2030(%eax),%edx
 8acfe8d:	3b 90 20 20 00 00    	cmp    0x2020(%eax),%edx
 8acfe93:	0f 95 c0             	setne  %al
 8acfe96:	c3                   	ret
 8acfe97:	90                   	nop
 8acfe98:	90                   	nop
 8acfe99:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

```

```c
// CompiledDNFLex::IsStream @ 0x8acfe80

/* DWARF original prototype: bool IsStream(CompiledDNFLex * this) */

bool __thiscall CompiledDNFLex::IsStream(CompiledDNFLex *this)

{
  return (this->stream_stack_).c.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_finish._M_cur !=
         (this->stream_stack_).c.
         super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
         _M_impl._M_start._M_cur;
}

```

---

## LexerError

```asm
// === 08acfe10 CompiledDNFLex::LexerError  [0x08acfe10-0x8acfe3f] ===
 8acfe10:	55                   	push   %ebp
 8acfe11:	89 e5                	mov    %esp,%ebp
 8acfe13:	83 ec 08             	sub    $0x8,%esp
 8acfe16:	8b 45 08             	mov    0x8(%ebp),%eax
 8acfe19:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acfe1c:	8b 80 44 20 00 00    	mov    0x2044(%eax),%eax
 8acfe22:	85 c0                	test   %eax,%eax
 8acfe24:	74 0a                	je     8acfe30 <_ZN14CompiledDNFLex10LexerErrorEPKc+0x20>
 8acfe26:	89 55 08             	mov    %edx,0x8(%ebp)
 8acfe29:	c9                   	leave
 8acfe2a:	ff e0                	jmp    *%eax
 8acfe2c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acfe30:	c9                   	leave
 8acfe31:	c3                   	ret
 8acfe32:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8acfe39:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// CompiledDNFLex::LexerError @ 0x8acfe10

/* DWARF original prototype: void LexerError(CompiledDNFLex * this, char * msg) */

void __thiscall CompiledDNFLex::LexerError(CompiledDNFLex *this,char *msg)

{
  if (this->LexerError_ != (TLexerError)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08acfe2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*this->LexerError_)(msg);
    return;
  }
  return;
}

```

---

## LoadStream

```asm
// === 08acfe40 CompiledDNFLex::LoadStream  [0x08acfe40-0x8acfe7f] ===
 8acfe40:	55                   	push   %ebp
 8acfe41:	89 e5                	mov    %esp,%ebp
 8acfe43:	53                   	push   %ebx
 8acfe44:	83 ec 04             	sub    $0x4,%esp
 8acfe47:	8b 45 08             	mov    0x8(%ebp),%eax
 8acfe4a:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acfe4d:	8b 4d 10             	mov    0x10(%ebp),%ecx
 8acfe50:	8b 5d 14             	mov    0x14(%ebp),%ebx
 8acfe53:	8b 80 48 20 00 00    	mov    0x2048(%eax),%eax
 8acfe59:	85 c0                	test   %eax,%eax
 8acfe5b:	74 13                	je     8acfe70 <_ZN14CompiledDNFLex10LoadStreamEPKcS1_PN6DNFLex13stream_data_tE+0x30>
 8acfe5d:	89 5d 10             	mov    %ebx,0x10(%ebp)
 8acfe60:	89 4d 0c             	mov    %ecx,0xc(%ebp)
 8acfe63:	89 55 08             	mov    %edx,0x8(%ebp)
 8acfe66:	83 c4 04             	add    $0x4,%esp
 8acfe69:	5b                   	pop    %ebx
 8acfe6a:	5d                   	pop    %ebp
 8acfe6b:	ff e0                	jmp    *%eax
 8acfe6d:	8d 76 00             	lea    0x0(%esi),%esi
 8acfe70:	83 c4 04             	add    $0x4,%esp
 8acfe73:	5b                   	pop    %ebx
 8acfe74:	5d                   	pop    %ebp
 8acfe75:	c3                   	ret
 8acfe76:	8d 76 00             	lea    0x0(%esi),%esi
 8acfe79:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// CompiledDNFLex::LoadStream @ 0x8acfe40

/* DWARF original prototype: bool LoadStream(CompiledDNFLex * this, TCHAR * dir, TCHAR * filename,
   stream_data_t * s) */

bool __thiscall
CompiledDNFLex::LoadStream(CompiledDNFLex *this,TCHAR *dir,TCHAR *filename,stream_data_t *s)

{
  bool bVar1;
  
  if (this->LoadStream_ != (TLoadStream)0x0) {
                    /* WARNING: Could not recover jumptable at 0x08acfe6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar1 = (*this->LoadStream_)(dir,filename,s);
    return bVar1;
  }
  return false;
}

```

---

## PopInputStream

```asm
// === 08ad0c80 CompiledDNFLex::PopInputStream  [0x08ad0c80-0x8ad0e8f] ===
 8ad0c80:	55                   	push   %ebp
 8ad0c81:	89 e5                	mov    %esp,%ebp
 8ad0c83:	83 ec 48             	sub    $0x48,%esp
 8ad0c86:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8ad0c89:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad0c8c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8ad0c8f:	0f b6 55 0c          	movzbl 0xc(%ebp),%edx
 8ad0c93:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8ad0c96:	8b 83 30 20 00 00    	mov    0x2030(%ebx),%eax
 8ad0c9c:	8b b3 20 20 00 00    	mov    0x2020(%ebx),%esi
 8ad0ca2:	39 f0                	cmp    %esi,%eax
 8ad0ca4:	0f 84 f1 00 00 00    	je     8ad0d9b <_ZN14CompiledDNFLex14PopInputStreamEb+0x11b>
 8ad0caa:	84 d2                	test   %dl,%dl
 8ad0cac:	0f 84 a6 00 00 00    	je     8ad0d58 <_ZN14CompiledDNFLex14PopInputStreamEb+0xd8>
 8ad0cb2:	8b 93 34 20 00 00    	mov    0x2034(%ebx),%edx
 8ad0cb8:	8b bb 3c 20 00 00    	mov    0x203c(%ebx),%edi
 8ad0cbe:	39 d0                	cmp    %edx,%eax
 8ad0cc0:	89 c1                	mov    %eax,%ecx
 8ad0cc2:	0f 84 30 01 00 00    	je     8ad0df8 <_ZN14CompiledDNFLex14PopInputStreamEb+0x178>
 8ad0cc8:	8b 49 f8             	mov    -0x8(%ecx),%ecx
 8ad0ccb:	85 c9                	test   %ecx,%ecx
 8ad0ccd:	74 14                	je     8ad0ce3 <_ZN14CompiledDNFLex14PopInputStreamEb+0x63>
 8ad0ccf:	89 0c 24             	mov    %ecx,(%esp)
 8ad0cd2:	e8 d9 3e c5 ff       	call   8724bb0 <_ZdaPv>
 8ad0cd7:	8b 83 30 20 00 00    	mov    0x2030(%ebx),%eax
 8ad0cdd:	8b 93 34 20 00 00    	mov    0x2034(%ebx),%edx
 8ad0ce3:	39 c2                	cmp    %eax,%edx
 8ad0ce5:	0f 84 c5 00 00 00    	je     8ad0db0 <_ZN14CompiledDNFLex14PopInputStreamEb+0x130>
 8ad0ceb:	83 e8 14             	sub    $0x14,%eax
 8ad0cee:	8b 50 04             	mov    0x4(%eax),%edx
 8ad0cf1:	89 83 30 20 00 00    	mov    %eax,0x2030(%ebx)
 8ad0cf7:	83 ea 0c             	sub    $0xc,%edx
 8ad0cfa:	81 fa f0 cc 48 09    	cmp    $0x948ccf0,%edx
 8ad0d00:	0f 85 3d 01 00 00    	jne    8ad0e43 <_ZN14CompiledDNFLex14PopInputStreamEb+0x1c3>
 8ad0d06:	8b 00                	mov    (%eax),%eax
 8ad0d08:	ba f0 cc 48 09       	mov    $0x948ccf0,%edx
 8ad0d0d:	83 e8 0c             	sub    $0xc,%eax
 8ad0d10:	39 c2                	cmp    %eax,%edx
 8ad0d12:	0f 85 fe 00 00 00    	jne    8ad0e16 <_ZN14CompiledDNFLex14PopInputStreamEb+0x196>
 8ad0d18:	8b 93 30 20 00 00    	mov    0x2030(%ebx),%edx
 8ad0d1e:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad0d23:	3b 93 20 20 00 00    	cmp    0x2020(%ebx),%edx
 8ad0d29:	74 72                	je     8ad0d9d <_ZN14CompiledDNFLex14PopInputStreamEb+0x11d>
 8ad0d2b:	3b 93 34 20 00 00    	cmp    0x2034(%ebx),%edx
 8ad0d31:	8b 83 3c 20 00 00    	mov    0x203c(%ebx),%eax
 8ad0d37:	0f 84 cb 00 00 00    	je     8ad0e08 <_ZN14CompiledDNFLex14PopInputStreamEb+0x188>
 8ad0d3d:	8b 42 fc             	mov    -0x4(%edx),%eax
 8ad0d40:	89 43 04             	mov    %eax,0x4(%ebx)
 8ad0d43:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad0d48:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad0d4b:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8ad0d4e:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8ad0d51:	89 ec                	mov    %ebp,%esp
 8ad0d53:	5d                   	pop    %ebp
 8ad0d54:	c3                   	ret
 8ad0d55:	8d 76 00             	lea    0x0(%esi),%esi
 8ad0d58:	8b 8b 28 20 00 00    	mov    0x2028(%ebx),%ecx
 8ad0d5e:	8b 93 34 20 00 00    	mov    0x2034(%ebx),%edx
 8ad0d64:	8b bb 3c 20 00 00    	mov    0x203c(%ebx),%edi
 8ad0d6a:	29 f1                	sub    %esi,%ecx
 8ad0d6c:	89 c6                	mov    %eax,%esi
 8ad0d6e:	29 d6                	sub    %edx,%esi
 8ad0d70:	c1 f9 02             	sar    $0x2,%ecx
 8ad0d73:	c1 fe 02             	sar    $0x2,%esi
 8ad0d76:	01 ce                	add    %ecx,%esi
 8ad0d78:	89 f9                	mov    %edi,%ecx
 8ad0d7a:	2b 8b 2c 20 00 00    	sub    0x202c(%ebx),%ecx
 8ad0d80:	69 f6 cd cc cc cc    	imul   $0xcccccccd,%esi,%esi
 8ad0d86:	c1 f9 02             	sar    $0x2,%ecx
 8ad0d89:	8d 4c 89 fb          	lea    -0x5(%ecx,%ecx,4),%ecx
 8ad0d8d:	8d 0c 89             	lea    (%ecx,%ecx,4),%ecx
 8ad0d90:	01 ce                	add    %ecx,%esi
 8ad0d92:	83 fe 01             	cmp    $0x1,%esi
 8ad0d95:	0f 87 23 ff ff ff    	ja     8ad0cbe <_ZN14CompiledDNFLex14PopInputStreamEb+0x3e>
 8ad0d9b:	31 c0                	xor    %eax,%eax
 8ad0d9d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad0da0:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8ad0da3:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8ad0da6:	89 ec                	mov    %ebp,%esp
 8ad0da8:	5d                   	pop    %ebp
 8ad0da9:	c3                   	ret
 8ad0daa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad0db0:	89 14 24             	mov    %edx,(%esp)
 8ad0db3:	e8 38 37 c5 ff       	call   87244f0 <_ZdlPv>
 8ad0db8:	8b 83 3c 20 00 00    	mov    0x203c(%ebx),%eax
 8ad0dbe:	8d 50 fc             	lea    -0x4(%eax),%edx
 8ad0dc1:	8b 40 fc             	mov    -0x4(%eax),%eax
 8ad0dc4:	89 93 3c 20 00 00    	mov    %edx,0x203c(%ebx)
 8ad0dca:	89 83 34 20 00 00    	mov    %eax,0x2034(%ebx)
 8ad0dd0:	8d 90 f4 01 00 00    	lea    0x1f4(%eax),%edx
 8ad0dd6:	05 e0 01 00 00       	add    $0x1e0,%eax
 8ad0ddb:	89 93 38 20 00 00    	mov    %edx,0x2038(%ebx)
 8ad0de1:	89 83 30 20 00 00    	mov    %eax,0x2030(%ebx)
 8ad0de7:	89 04 24             	mov    %eax,(%esp)
 8ad0dea:	e8 31 05 00 00       	call   8ad1320 <_ZN14CompiledDNFLex8stream_tD1Ev>
 8ad0def:	e9 24 ff ff ff       	jmp    8ad0d18 <_ZN14CompiledDNFLex14PopInputStreamEb+0x98>
 8ad0df4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad0df8:	8b 4f fc             	mov    -0x4(%edi),%ecx
 8ad0dfb:	81 c1 f4 01 00 00    	add    $0x1f4,%ecx
 8ad0e01:	e9 c2 fe ff ff       	jmp    8ad0cc8 <_ZN14CompiledDNFLex14PopInputStreamEb+0x48>
 8ad0e06:	66 90                	xchg   %ax,%ax
 8ad0e08:	8b 50 fc             	mov    -0x4(%eax),%edx
 8ad0e0b:	81 c2 f4 01 00 00    	add    $0x1f4,%edx
 8ad0e11:	e9 27 ff ff ff       	jmp    8ad0d3d <_ZN14CompiledDNFLex14PopInputStreamEb+0xbd>
 8ad0e16:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8ad0e1b:	85 d2                	test   %edx,%edx
 8ad0e1d:	74 57                	je     8ad0e76 <_ZN14CompiledDNFLex14PopInputStreamEb+0x1f6>
 8ad0e1f:	83 ca ff             	or     $0xffffffff,%edx
 8ad0e22:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8ad0e27:	85 d2                	test   %edx,%edx
 8ad0e29:	0f 8f e9 fe ff ff    	jg     8ad0d18 <_ZN14CompiledDNFLex14PopInputStreamEb+0x98>
 8ad0e2f:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 8ad0e32:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad0e36:	89 04 24             	mov    %eax,(%esp)
 8ad0e39:	e8 e2 5a c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad0e3e:	e9 d5 fe ff ff       	jmp    8ad0d18 <_ZN14CompiledDNFLex14PopInputStreamEb+0x98>
 8ad0e43:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8ad0e48:	85 c9                	test   %ecx,%ecx
 8ad0e4a:	74 35                	je     8ad0e81 <_ZN14CompiledDNFLex14PopInputStreamEb+0x201>
 8ad0e4c:	83 c9 ff             	or     $0xffffffff,%ecx
 8ad0e4f:	f0 0f c1 4a 08       	lock xadd %ecx,0x8(%edx)
 8ad0e54:	85 c9                	test   %ecx,%ecx
 8ad0e56:	0f 8f aa fe ff ff    	jg     8ad0d06 <_ZN14CompiledDNFLex14PopInputStreamEb+0x86>
 8ad0e5c:	8d 4d e7             	lea    -0x19(%ebp),%ecx
 8ad0e5f:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8ad0e62:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ad0e66:	89 14 24             	mov    %edx,(%esp)
 8ad0e69:	e8 b2 5a c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad0e6e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8ad0e71:	e9 90 fe ff ff       	jmp    8ad0d06 <_ZN14CompiledDNFLex14PopInputStreamEb+0x86>
 8ad0e76:	8b 50 08             	mov    0x8(%eax),%edx
 8ad0e79:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8ad0e7c:	89 48 08             	mov    %ecx,0x8(%eax)
 8ad0e7f:	eb a6                	jmp    8ad0e27 <_ZN14CompiledDNFLex14PopInputStreamEb+0x1a7>
 8ad0e81:	8b 4a 08             	mov    0x8(%edx),%ecx
 8ad0e84:	8d 71 ff             	lea    -0x1(%ecx),%esi
 8ad0e87:	89 72 08             	mov    %esi,0x8(%edx)
 8ad0e8a:	eb c8                	jmp    8ad0e54 <_ZN14CompiledDNFLex14PopInputStreamEb+0x1d4>
 8ad0e8c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// CompiledDNFLex::PopInputStream @ 0x8ad0c80

/* WARNING: Removing unreachable block (ram,0x08ad0e81) */
/* WARNING: Removing unreachable block (ram,0x08ad0e76) */
/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: bool PopInputStream(CompiledDNFLex * this, bool pop_all) */

bool __thiscall CompiledDNFLex::PopInputStream(CompiledDNFLex *this,bool pop_all)

{
  int *piVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  stream_t *psVar5;
  stream_t *psVar6;
  stream_t *psVar7;
  allocator *paVar8;
  stream_t **ppsVar9;
  int in_stack_ffffffb8;
  
                    /* Unresolved local var: stream_t * stream@[???] */
  psVar5 = (this->stream_stack_).c.
           super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
           _M_impl._M_finish._M_cur;
  psVar6 = (this->stream_stack_).c.
           super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
           _M_impl._M_start._M_cur;
  if (psVar5 == psVar6) {
LAB_08ad0d9b:
    bVar4 = false;
  }
  else {
    if (pop_all) {
      psVar7 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_first;
      ppsVar9 = (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_finish._M_node;
    }
    else {
      psVar7 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_first;
      ppsVar9 = (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_finish._M_node;
      if ((uint)((((int)psVar5 - (int)psVar7 >> 2) +
                 ((int)(this->stream_stack_).c.
                       super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                       ._M_impl._M_start._M_last - (int)psVar6 >> 2)) * -0x33333333 +
                (((int)ppsVar9 -
                  (int)(this->stream_stack_).c.
                       super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                       ._M_impl._M_start._M_node >> 2) * 5 + -5) * 5) < 2) goto LAB_08ad0d9b;
    }
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    psVar6 = psVar5;
    if (psVar5 == psVar7) {
      psVar6 = ppsVar9[-1] + 0x19;
    }
    if (psVar6[-1].buffer != (char *)0x0) {
      operator_delete__(psVar6[-1].buffer);
      psVar5 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_cur;
      psVar7 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_first;
    }
    if (psVar7 == psVar5) {
      operator_delete(psVar7);
      ppsVar9 = (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_finish._M_node;
      psVar5 = ppsVar9[-1];
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_node = ppsVar9 + -1;
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_first = psVar5;
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_last = psVar5 + 0x19;
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_cur = psVar5 + 0x18;
      stream_t::~stream_t(psVar5 + 0x18,in_stack_ffffffb8);
    }
    else {
      pcVar3 = psVar5[-1].filename._M_dataplus._M_p;
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_cur = psVar5 + -1;
      paVar8 = (allocator *)(pcVar3 + -0xc);
      if (paVar8 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(pcVar3 + -4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          std::string::_Rep::_M_destroy(paVar8);
        }
      }
      pcVar3 = psVar5[-1].dir._M_dataplus._M_p;
      paVar8 = (allocator *)(pcVar3 + -0xc);
      if (paVar8 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
        LOCK();
        piVar1 = (int *)(pcVar3 + -4);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 < 1) {
          std::string::_Rep::_M_destroy(paVar8);
        }
      }
    }
    psVar5 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_cur;
    bVar4 = true;
    if (psVar5 != (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_start._M_cur) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
      if (psVar5 == (this->stream_stack_).c.
                    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                    ._M_impl._M_finish._M_first) {
        psVar5 = (this->stream_stack_).c.
                 super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                 ._M_impl._M_finish._M_node[-1] + 0x19;
      }
      this->offset_ = psVar5[-1].offset;
      return true;
    }
  }
  return bVar4;
}

```

---

## PushInputStream

```asm
// === 08ad0a00 CompiledDNFLex::PushInputStream  [0x08ad0a00-0x8ad0c7f] ===
 8ad0a00:	55                   	push   %ebp
 8ad0a01:	89 e5                	mov    %esp,%ebp
 8ad0a03:	57                   	push   %edi
 8ad0a04:	56                   	push   %esi
 8ad0a05:	53                   	push   %ebx
 8ad0a06:	83 ec 4c             	sub    $0x4c,%esp
 8ad0a09:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad0a0c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad0a0f:	8b 75 10             	mov    0x10(%ebp),%esi
 8ad0a12:	8b 7d 14             	mov    0x14(%ebp),%edi
 8ad0a15:	85 d2                	test   %edx,%edx
 8ad0a17:	c7 45 d0 fc cc 48 09 	movl   $0x948ccfc,-0x30(%ebp)
 8ad0a1e:	c7 45 d4 fc cc 48 09 	movl   $0x948ccfc,-0x2c(%ebp)
 8ad0a25:	0f 84 6d 01 00 00    	je     8ad0b98 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x198>
 8ad0a2b:	89 14 24             	mov    %edx,(%esp)
 8ad0a2e:	89 55 c0             	mov    %edx,-0x40(%ebp)
 8ad0a31:	e8 7a d9 5a ff       	call   807e3b0 <strlen@plt>
 8ad0a36:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8ad0a39:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad0a3d:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ad0a40:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad0a44:	89 04 24             	mov    %eax,(%esp)
 8ad0a47:	e8 54 7b c3 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 8ad0a4c:	85 f6                	test   %esi,%esi
 8ad0a4e:	0f 84 34 01 00 00    	je     8ad0b88 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x188>
 8ad0a54:	89 34 24             	mov    %esi,(%esp)
 8ad0a57:	e8 54 d9 5a ff       	call   807e3b0 <strlen@plt>
 8ad0a5c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad0a60:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ad0a63:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad0a67:	89 04 24             	mov    %eax,(%esp)
 8ad0a6a:	e8 31 7b c3 ff       	call   87085a0 <_ZNSs6assignEPKcj>
 8ad0a6f:	8b 45 18             	mov    0x18(%ebp),%eax
 8ad0a72:	85 ff                	test   %edi,%edi
 8ad0a74:	89 7d dc             	mov    %edi,-0x24(%ebp)
 8ad0a77:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8ad0a7a:	74 08                	je     8ad0a84 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x84>
 8ad0a7c:	85 c0                	test   %eax,%eax
 8ad0a7e:	c6 45 c7 01          	movb   $0x1,-0x39(%ebp)
 8ad0a82:	74 50                	je     8ad0ad4 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0xd4>
 8ad0a84:	83 7d 18 01          	cmpl   $0x1,0x18(%ebp)
 8ad0a88:	0f 86 32 01 00 00    	jbe    8ad0bc0 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x1c0>
 8ad0a8e:	66 81 3f b0 d0       	cmpw   $0xd0b0,(%edi)
 8ad0a93:	74 3b                	je     8ad0ad0 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0xd0>
 8ad0a95:	89 3c 24             	mov    %edi,(%esp)
 8ad0a98:	e8 13 41 c5 ff       	call   8724bb0 <_ZdaPv>
 8ad0a9d:	31 c0                	xor    %eax,%eax
 8ad0a9f:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad0aa2:	83 ea 0c             	sub    $0xc,%edx
 8ad0aa5:	81 fa f0 cc 48 09    	cmp    $0x948ccf0,%edx
 8ad0aab:	0f 85 16 01 00 00    	jne    8ad0bc7 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x1c7>
 8ad0ab1:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8ad0ab4:	b9 f0 cc 48 09       	mov    $0x948ccf0,%ecx
 8ad0ab9:	83 ea 0c             	sub    $0xc,%edx
 8ad0abc:	39 d1                	cmp    %edx,%ecx
 8ad0abe:	0f 85 3d 01 00 00    	jne    8ad0c01 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x201>
 8ad0ac4:	83 c4 4c             	add    $0x4c,%esp
 8ad0ac7:	5b                   	pop    %ebx
 8ad0ac8:	5e                   	pop    %esi
 8ad0ac9:	5f                   	pop    %edi
 8ad0aca:	5d                   	pop    %ebp
 8ad0acb:	c3                   	ret
 8ad0acc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad0ad0:	c6 45 c7 00          	movb   $0x0,-0x39(%ebp)
 8ad0ad4:	8b b3 30 20 00 00    	mov    0x2030(%ebx),%esi
 8ad0ada:	3b b3 20 20 00 00    	cmp    0x2020(%ebx),%esi
 8ad0ae0:	89 f2                	mov    %esi,%edx
 8ad0ae2:	89 f0                	mov    %esi,%eax
 8ad0ae4:	74 1a                	je     8ad0b00 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x100>
 8ad0ae6:	3b b3 34 20 00 00    	cmp    0x2034(%ebx),%esi
 8ad0aec:	8b 83 3c 20 00 00    	mov    0x203c(%ebx),%eax
 8ad0af2:	0f 84 80 00 00 00    	je     8ad0b78 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x178>
 8ad0af8:	8b 43 04             	mov    0x4(%ebx),%eax
 8ad0afb:	89 42 fc             	mov    %eax,-0x4(%edx)
 8ad0afe:	89 f0                	mov    %esi,%eax
 8ad0b00:	8b 93 38 20 00 00    	mov    0x2038(%ebx),%edx
 8ad0b06:	83 ea 14             	sub    $0x14,%edx
 8ad0b09:	39 d6                	cmp    %edx,%esi
 8ad0b0b:	0f 84 97 00 00 00    	je     8ad0ba8 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x1a8>
 8ad0b11:	85 f6                	test   %esi,%esi
 8ad0b13:	74 39                	je     8ad0b4e <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x14e>
 8ad0b15:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ad0b18:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad0b1c:	89 34 24             	mov    %esi,(%esp)
 8ad0b1f:	e8 8c 6e c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8ad0b24:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 8ad0b27:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad0b2b:	8d 46 04             	lea    0x4(%esi),%eax
 8ad0b2e:	89 04 24             	mov    %eax,(%esp)
 8ad0b31:	e8 7a 6e c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8ad0b36:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ad0b39:	89 46 08             	mov    %eax,0x8(%esi)
 8ad0b3c:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ad0b3f:	89 46 0c             	mov    %eax,0xc(%esi)
 8ad0b42:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad0b45:	89 46 10             	mov    %eax,0x10(%esi)
 8ad0b48:	8b 83 30 20 00 00    	mov    0x2030(%ebx),%eax
 8ad0b4e:	83 c0 14             	add    $0x14,%eax
 8ad0b51:	89 83 30 20 00 00    	mov    %eax,0x2030(%ebx)
 8ad0b57:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8ad0b5a:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad0b5f:	80 7d c7 00          	cmpb   $0x0,-0x39(%ebp)
 8ad0b63:	89 53 04             	mov    %edx,0x4(%ebx)
 8ad0b66:	0f 85 33 ff ff ff    	jne    8ad0a9f <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x9f>
 8ad0b6c:	83 c2 02             	add    $0x2,%edx
 8ad0b6f:	89 53 04             	mov    %edx,0x4(%ebx)
 8ad0b72:	e9 28 ff ff ff       	jmp    8ad0a9f <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x9f>
 8ad0b77:	90                   	nop
 8ad0b78:	8b 50 fc             	mov    -0x4(%eax),%edx
 8ad0b7b:	81 c2 f4 01 00 00    	add    $0x1f4,%edx
 8ad0b81:	e9 72 ff ff ff       	jmp    8ad0af8 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0xf8>
 8ad0b86:	66 90                	xchg   %ax,%ax
 8ad0b88:	31 c0                	xor    %eax,%eax
 8ad0b8a:	be a4 c9 d0 08       	mov    $0x8d0c9a4,%esi
 8ad0b8f:	e9 c8 fe ff ff       	jmp    8ad0a5c <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x5c>
 8ad0b94:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad0b98:	31 c0                	xor    %eax,%eax
 8ad0b9a:	ba a4 c9 d0 08       	mov    $0x8d0c9a4,%edx
 8ad0b9f:	e9 95 fe ff ff       	jmp    8ad0a39 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x39>
 8ad0ba4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad0ba8:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ad0bab:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad0baf:	8d 83 18 20 00 00    	lea    0x2018(%ebx),%eax
 8ad0bb5:	89 04 24             	mov    %eax,(%esp)
 8ad0bb8:	e8 f3 07 00 00       	call   8ad13b0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EE16_M_push_back_auxIIRKS1_EEEvDpOT_>
 8ad0bbd:	eb 98                	jmp    8ad0b57 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x157>
 8ad0bbf:	90                   	nop
 8ad0bc0:	31 c0                	xor    %eax,%eax
 8ad0bc2:	e9 d8 fe ff ff       	jmp    8ad0a9f <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x9f>
 8ad0bc7:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8ad0bcc:	85 c9                	test   %ecx,%ecx
 8ad0bce:	66 90                	xchg   %ax,%ax
 8ad0bd0:	0f 84 80 00 00 00    	je     8ad0c56 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x256>
 8ad0bd6:	83 c9 ff             	or     $0xffffffff,%ecx
 8ad0bd9:	f0 0f c1 4a 08       	lock xadd %ecx,0x8(%edx)
 8ad0bde:	85 c9                	test   %ecx,%ecx
 8ad0be0:	0f 8f cb fe ff ff    	jg     8ad0ab1 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0xb1>
 8ad0be6:	8d 4d e7             	lea    -0x19(%ebp),%ecx
 8ad0be9:	88 45 c0             	mov    %al,-0x40(%ebp)
 8ad0bec:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ad0bf0:	89 14 24             	mov    %edx,(%esp)
 8ad0bf3:	e8 28 5d c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad0bf8:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
 8ad0bfc:	e9 b0 fe ff ff       	jmp    8ad0ab1 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0xb1>
 8ad0c01:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8ad0c06:	85 c9                	test   %ecx,%ecx
 8ad0c08:	74 5c                	je     8ad0c66 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x266>
 8ad0c0a:	83 c9 ff             	or     $0xffffffff,%ecx
 8ad0c0d:	f0 0f c1 4a 08       	lock xadd %ecx,0x8(%edx)
 8ad0c12:	85 c9                	test   %ecx,%ecx
 8ad0c14:	0f 8f aa fe ff ff    	jg     8ad0ac4 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0xc4>
 8ad0c1a:	8d 4d e6             	lea    -0x1a(%ebp),%ecx
 8ad0c1d:	88 45 c0             	mov    %al,-0x40(%ebp)
 8ad0c20:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ad0c24:	89 14 24             	mov    %edx,(%esp)
 8ad0c27:	e8 f4 5c c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad0c2c:	0f b6 45 c0          	movzbl -0x40(%ebp),%eax
 8ad0c30:	e9 8f fe ff ff       	jmp    8ad0ac4 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0xc4>
 8ad0c35:	89 c3                	mov    %eax,%ebx
 8ad0c37:	89 34 24             	mov    %esi,(%esp)
 8ad0c3a:	e8 a1 6f c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ad0c3f:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8ad0c42:	89 04 24             	mov    %eax,(%esp)
 8ad0c45:	e8 d6 06 00 00       	call   8ad1320 <_ZN14CompiledDNFLex8stream_tD1Ev>
 8ad0c4a:	89 1c 24             	mov    %ebx,(%esp)
 8ad0c4d:	e8 fe 2a 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad0c52:	89 c3                	mov    %eax,%ebx
 8ad0c54:	eb e9                	jmp    8ad0c3f <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x23f>
 8ad0c56:	8b 4a 08             	mov    0x8(%edx),%ecx
 8ad0c59:	8d 59 ff             	lea    -0x1(%ecx),%ebx
 8ad0c5c:	89 5a 08             	mov    %ebx,0x8(%edx)
 8ad0c5f:	e9 7a ff ff ff       	jmp    8ad0bde <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x1de>
 8ad0c64:	eb ec                	jmp    8ad0c52 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x252>
 8ad0c66:	8b 4a 08             	mov    0x8(%edx),%ecx
 8ad0c69:	8d 59 ff             	lea    -0x1(%ecx),%ebx
 8ad0c6c:	89 5a 08             	mov    %ebx,0x8(%edx)
 8ad0c6f:	eb a1                	jmp    8ad0c12 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj+0x212>
 8ad0c71:	90                   	nop
 8ad0c72:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad0c79:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// CompiledDNFLex::PushInputStream @ 0x8ad0a00

/* WARNING: Removing unreachable block (ram,0x08ad0c56) */
/* WARNING: Removing unreachable block (ram,0x08ad0c66) */
/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: bool PushInputStream(CompiledDNFLex * this, TCHAR * dir, TCHAR *
   filename, char * buffer, uint bufferSize) */

bool __thiscall
CompiledDNFLex::PushInputStream
          (CompiledDNFLex *this,TCHAR *dir,TCHAR *filename,char *buffer,uint bufferSize)

{
  int *piVar1;
  int iVar2;
  stream_t *this_00;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  stream_t *psVar6;
  undefined1 local_34 [4];
  tstring local_30;
  uint local_2c;
  char *local_28;
  char *local_24;
  
                    /* Unresolved local var: stream_t stream@[???]
                       Unresolved local var: bool empty_file@[???] */
  local_34 = (undefined1  [4])&DAT_0948ccfc;
  local_30._M_dataplus._M_p = (_Alloc_hider)&DAT_0948ccfc;
  if (dir == (TCHAR *)0x0) {
    uVar5 = 0;
    dir = "";
  }
  else {
    uVar5 = strlen(dir);
  }
                    /* try { // try from 08ad0a47 to 08ad0a6e has its CatchHandler @ 08ad0c64 */
  std::string::assign((string *)local_34,dir,uVar5);
  if (filename == (TCHAR *)0x0) {
    uVar5 = 0;
    filename = "";
  }
  else {
    uVar5 = strlen(filename);
  }
  std::string::assign((string *)&local_30,filename,uVar5);
  local_28 = buffer;
  local_2c = bufferSize;
  if ((buffer == (char *)0x0) || (bVar3 = true, bufferSize != 0)) {
                    /* Unresolved local var: ushort magic@[???] */
    if (bufferSize < 2) {
      bVar4 = false;
      goto LAB_08ad0a9f;
    }
    if (*(short *)buffer != -0x2f50) {
      operator_delete__(buffer);
      bVar4 = false;
      goto LAB_08ad0a9f;
    }
    bVar3 = false;
  }
  this_00 = (this->stream_stack_).c.
            super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
            _M_impl._M_finish._M_cur;
  if (this_00 !=
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_start._M_cur) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    psVar6 = this_00;
    if (this_00 ==
        (this->stream_stack_).c.
        super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
        _M_impl._M_finish._M_first) {
      psVar6 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_node[-1] + 0x19;
    }
    psVar6[-1].offset = this->offset_;
  }
  if (this_00 ==
      (this->stream_stack_).c.
      super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl
      ._M_finish._M_last + -1) {
                    /* try { // try from 08ad0bb8 to 08ad0bbc has its CatchHandler @ 08ad0c64 */
    std::deque<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::
    _M_push_back_aux<const_CompiledDNFLex::stream_t&>(&(this->stream_stack_).c,(stream_t *)local_34)
    ;
  }
  else {
    psVar6 = (stream_t *)0x0;
    if (this_00 != (stream_t *)0x0) {
                    /* try { // try from 08ad0b1f to 08ad0b23 has its CatchHandler @ 08ad0c52 */
      std::string::string((string *)this_00,(string *)local_34);
                    /* try { // try from 08ad0b31 to 08ad0b35 has its CatchHandler @ 08ad0c35 */
      std::string::string((string *)&this_00->filename,(string *)&local_30);
      this_00->size = local_2c;
      this_00->buffer = local_28;
      this_00->offset = local_24;
      psVar6 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_cur;
    }
    (this->stream_stack_).c.
    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>._M_impl.
    _M_finish._M_cur = psVar6 + 1;
  }
  bVar4 = true;
  this->offset_ = local_28;
  if (!bVar3) {
    this->offset_ = local_28 + 2;
  }
LAB_08ad0a9f:
  if ((allocator *)((int)local_30._M_dataplus._M_p + -0xc) !=
      (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    piVar1 = (int *)((int)local_30._M_dataplus._M_p + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_30._M_dataplus._M_p + -0xc));
    }
  }
  if ((allocator *)((int)local_34 + -0xc) != (allocator *)&std::string::_Rep::_S_empty_rep_storage)
  {
    LOCK();
    piVar1 = (int *)((int)local_34 + -4);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 < 1) {
      std::string::_Rep::_M_destroy((allocator *)((int)local_34 + -0xc));
    }
  }
  return bVar4;
}

```

---

## SetHandler

```asm
// === 08acfdf0 CompiledDNFLex::SetHandler  [0x08acfdf0-0x8acfe0f] ===
 8acfdf0:	55                   	push   %ebp
 8acfdf1:	89 e5                	mov    %esp,%ebp
 8acfdf3:	8b 45 08             	mov    0x8(%ebp),%eax
 8acfdf6:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acfdf9:	89 90 44 20 00 00    	mov    %edx,0x2044(%eax)
 8acfdff:	8b 55 10             	mov    0x10(%ebp),%edx
 8acfe02:	89 90 48 20 00 00    	mov    %edx,0x2048(%eax)
 8acfe08:	5d                   	pop    %ebp
 8acfe09:	c3                   	ret
 8acfe0a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// CompiledDNFLex::SetHandler @ 0x8acfdf0

/* DWARF original prototype: void SetHandler(CompiledDNFLex * this, TLexerError LexerErrorFunc,
   TLoadStream LoadStreamFunc) */

void __thiscall
CompiledDNFLex::SetHandler
          (CompiledDNFLex *this,TLexerError LexerErrorFunc,TLoadStream LoadStreamFunc)

{
  this->LexerError_ = LexerErrorFunc;
  this->LoadStream_ = LoadStreamFunc;
  return;
}

```

---

## SwitchInputStream

```asm
// === 08ad0f40 CompiledDNFLex::SwitchInputStream  [0x08ad0f40-0x8ad0f9f] ===
 8ad0f40:	55                   	push   %ebp
 8ad0f41:	89 e5                	mov    %esp,%ebp
 8ad0f43:	83 ec 38             	sub    $0x38,%esp
 8ad0f46:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8ad0f49:	8b 45 14             	mov    0x14(%ebp),%eax
 8ad0f4c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad0f4f:	8b 55 18             	mov    0x18(%ebp),%edx
 8ad0f52:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8ad0f55:	8b 75 0c             	mov    0xc(%ebp),%esi
 8ad0f58:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8ad0f5b:	8b 7d 10             	mov    0x10(%ebp),%edi
 8ad0f5e:	89 1c 24             	mov    %ebx,(%esp)
 8ad0f61:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad0f64:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8ad0f67:	e8 24 ff ff ff       	call   8ad0e90 <_ZN14CompiledDNFLex16CloseInputStreamEv>
 8ad0f6c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8ad0f6f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad0f72:	89 7d 10             	mov    %edi,0x10(%ebp)
 8ad0f75:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8ad0f78:	89 75 0c             	mov    %esi,0xc(%ebp)
 8ad0f7b:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8ad0f7e:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8ad0f81:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad0f84:	89 55 18             	mov    %edx,0x18(%ebp)
 8ad0f87:	89 45 14             	mov    %eax,0x14(%ebp)
 8ad0f8a:	89 ec                	mov    %ebp,%esp
 8ad0f8c:	5d                   	pop    %ebp
 8ad0f8d:	e9 6e fa ff ff       	jmp    8ad0a00 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj>
 8ad0f92:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad0f99:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// CompiledDNFLex::SwitchInputStream @ 0x8ad0f40

/* DWARF original prototype: bool SwitchInputStream(CompiledDNFLex * this, TCHAR * dir, TCHAR *
   filename, char * buffer, uint bufferSize) */

bool __thiscall
CompiledDNFLex::SwitchInputStream
          (CompiledDNFLex *this,TCHAR *dir,TCHAR *filename,char *buffer,uint bufferSize)

{
  bool bVar1;
  
  CloseInputStream(this);
  bVar1 = PushInputStream(this,dir,filename,buffer,bufferSize);
  return bVar1;
}

```

---

## create

```asm
// === 08ad03d0 CompiledDNFLex::create  [0x08ad03d0-0x8ad045f] ===
 8ad03d0:	55                   	push   %ebp
 8ad03d1:	89 e5                	mov    %esp,%ebp
 8ad03d3:	83 ec 18             	sub    $0x18,%esp
 8ad03d6:	80 7d 0c 00          	cmpb   $0x0,0xc(%ebp)
 8ad03da:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8ad03dd:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad03e0:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8ad03e3:	74 0b                	je     8ad03f0 <_ZN14CompiledDNFLex6createEb+0x20>
 8ad03e5:	8b 53 10             	mov    0x10(%ebx),%edx
 8ad03e8:	85 d2                	test   %edx,%edx
 8ad03ea:	74 3c                	je     8ad0428 <_ZN14CompiledDNFLex6createEb+0x58>
 8ad03ec:	c6 43 0c 01          	movb   $0x1,0xc(%ebx)
 8ad03f0:	8b 43 14             	mov    0x14(%ebx),%eax
 8ad03f3:	85 c0                	test   %eax,%eax
 8ad03f5:	74 11                	je     8ad0408 <_ZN14CompiledDNFLex6createEb+0x38>
 8ad03f7:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8ad03fa:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8ad03fd:	89 ec                	mov    %ebp,%esp
 8ad03ff:	5d                   	pop    %ebp
 8ad0400:	c3                   	ret
 8ad0401:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad0408:	c7 04 24 00 04 00 00 	movl   $0x400,(%esp)
 8ad040f:	e8 ac 29 c5 ff       	call   8722dc0 <_Znaj>
 8ad0414:	89 43 14             	mov    %eax,0x14(%ebx)
 8ad0417:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8ad041a:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8ad041d:	89 ec                	mov    %ebp,%esp
 8ad041f:	5d                   	pop    %ebp
 8ad0420:	c3                   	ret
 8ad0421:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad0428:	c7 04 24 28 00 00 00 	movl   $0x28,(%esp)
 8ad042f:	e8 1c 40 c5 ff       	call   8724450 <_Znwj>
 8ad0434:	89 c6                	mov    %eax,%esi
 8ad0436:	89 04 24             	mov    %eax,(%esp)
 8ad0439:	e8 d2 ec ff ff       	call   8acf110 <_ZN19ScriptStringManagerC1Ev>
 8ad043e:	89 73 10             	mov    %esi,0x10(%ebx)
 8ad0441:	eb a9                	jmp    8ad03ec <_ZN14CompiledDNFLex6createEb+0x1c>
 8ad0443:	89 c3                	mov    %eax,%ebx
 8ad0445:	89 34 24             	mov    %esi,(%esp)
 8ad0448:	e8 a3 40 c5 ff       	call   87244f0 <_ZdlPv>
 8ad044d:	89 1c 24             	mov    %ebx,(%esp)
 8ad0450:	e8 fb 32 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad0455:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad0459:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// CompiledDNFLex::create @ 0x8ad03d0

/* DWARF original prototype: void create(CompiledDNFLex * this, bool createStringTable) */

void __thiscall CompiledDNFLex::create(CompiledDNFLex *this,bool createStringTable)

{
  char *pcVar1;
  ScriptStringManager *this_00;
  
  if (createStringTable) {
    if (this->stringManager_ == (ScriptStringManager *)0x0) {
      this_00 = operator_new(0x28);
                    /* try { // try from 08ad0439 to 08ad043d has its CatchHandler @ 08ad0443 */
      ScriptStringManager::ScriptStringManager(this_00);
      this->stringManager_ = this_00;
    }
    this->stringManagerDelete_ = true;
  }
  if (this->stringBuffer_ != (char *)0x0) {
    return;
  }
  pcVar1 = operator_new__(0x400);
  this->stringBuffer_ = pcVar1;
  return;
}

```

---

## destroy

```asm
// === 08ad0370 CompiledDNFLex::destroy  [0x08ad0370-0x8ad03cf] ===
 8ad0370:	55                   	push   %ebp
 8ad0371:	89 e5                	mov    %esp,%ebp
 8ad0373:	53                   	push   %ebx
 8ad0374:	83 ec 14             	sub    $0x14,%esp
 8ad0377:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad037a:	80 7b 0c 00          	cmpb   $0x0,0xc(%ebx)
 8ad037e:	74 38                	je     8ad03b8 <_ZN14CompiledDNFLex7destroyEv+0x48>
 8ad0380:	8b 43 10             	mov    0x10(%ebx),%eax
 8ad0383:	85 c0                	test   %eax,%eax
 8ad0385:	74 0f                	je     8ad0396 <_ZN14CompiledDNFLex7destroyEv+0x26>
 8ad0387:	8b 10                	mov    (%eax),%edx
 8ad0389:	89 04 24             	mov    %eax,(%esp)
 8ad038c:	ff 52 04             	call   *0x4(%edx)
 8ad038f:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 8ad0396:	c6 43 0c 00          	movb   $0x0,0xc(%ebx)
 8ad039a:	8b 43 14             	mov    0x14(%ebx),%eax
 8ad039d:	85 c0                	test   %eax,%eax
 8ad039f:	74 0f                	je     8ad03b0 <_ZN14CompiledDNFLex7destroyEv+0x40>
 8ad03a1:	89 04 24             	mov    %eax,(%esp)
 8ad03a4:	e8 07 48 c5 ff       	call   8724bb0 <_ZdaPv>
 8ad03a9:	c7 43 14 00 00 00 00 	movl   $0x0,0x14(%ebx)
 8ad03b0:	83 c4 14             	add    $0x14,%esp
 8ad03b3:	5b                   	pop    %ebx
 8ad03b4:	5d                   	pop    %ebp
 8ad03b5:	c3                   	ret
 8ad03b6:	66 90                	xchg   %ax,%ax
 8ad03b8:	c7 43 10 00 00 00 00 	movl   $0x0,0x10(%ebx)
 8ad03bf:	eb d9                	jmp    8ad039a <_ZN14CompiledDNFLex7destroyEv+0x2a>
 8ad03c1:	90                   	nop
 8ad03c2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad03c9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// CompiledDNFLex::destroy @ 0x8ad0370

/* DWARF original prototype: void destroy(CompiledDNFLex * this) */

void __thiscall CompiledDNFLex::destroy(CompiledDNFLex *this)

{
  ScriptStringManager *pSVar1;
  
  if (this->stringManagerDelete_ == false) {
    this->stringManager_ = (ScriptStringManager *)0x0;
  }
  else {
    pSVar1 = this->stringManager_;
    if (pSVar1 != (ScriptStringManager *)0x0) {
      (*pSVar1->_vptr_ScriptStringManager[1])(pSVar1);
      this->stringManager_ = (ScriptStringManager *)0x0;
    }
    this->stringManagerDelete_ = false;
  }
  if (this->stringBuffer_ != (char *)0x0) {
    operator_delete__(this->stringBuffer_);
    this->stringBuffer_ = (char *)0x0;
  }
  return;
}

```

---

## getFloat

```asm
// === 08acffc0 CompiledDNFLex::getFloat  [0x08acffc0-0x8acffff] ===
 8acffc0:	55                   	push   %ebp
 8acffc1:	89 e5                	mov    %esp,%ebp
 8acffc3:	8b 55 08             	mov    0x8(%ebp),%edx
 8acffc6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8acffc9:	83 7a 08 04          	cmpl   $0x4,0x8(%edx)
 8acffcd:	74 11                	je     8acffe0 <_ZN14CompiledDNFLex8getFloatEPb+0x20>
 8acffcf:	85 c0                	test   %eax,%eax
 8acffd1:	74 03                	je     8acffd6 <_ZN14CompiledDNFLex8getFloatEPb+0x16>
 8acffd3:	c6 00 00             	movb   $0x0,(%eax)
 8acffd6:	d9 ee                	fldz
 8acffd8:	5d                   	pop    %ebp
 8acffd9:	c3                   	ret
 8acffda:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8acffe0:	85 c0                	test   %eax,%eax
 8acffe2:	74 03                	je     8acffe7 <_ZN14CompiledDNFLex8getFloatEPb+0x27>
 8acffe4:	c6 00 01             	movb   $0x1,(%eax)
 8acffe7:	8b 42 04             	mov    0x4(%edx),%eax
 8acffea:	d9 00                	flds   (%eax)
 8acffec:	83 c0 04             	add    $0x4,%eax
 8acffef:	d9 15 14 1a 50 09    	fsts   0x9501a14
 8acfff5:	89 42 04             	mov    %eax,0x4(%edx)
 8acfff8:	5d                   	pop    %ebp
 8acfff9:	c3                   	ret
 8acfffa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// CompiledDNFLex::getFloat @ 0x8acffc0

/* DWARF original prototype: float getFloat(CompiledDNFLex * this, bool * result) */

float __thiscall CompiledDNFLex::getFloat(CompiledDNFLex *this,bool *result)

{
  float fVar1;
  
  if (this->lastToken_ != DNF_TOK_FLOAT) {
    if (result != (bool *)0x0) {
      *result = false;
    }
    return 0.0;
  }
  if (result != (bool *)0x0) {
    *result = true;
  }
  fVar1 = *(float *)this->offset_;
  readFloatFromBuffer::lexical_block_0::floatBuffer = fVar1;
  this->offset_ = (char *)((int)this->offset_ + 4);
  return fVar1;
}

```

---

## getInt

```asm
// === 08acff70 CompiledDNFLex::getInt  [0x08acff70-0x8acffbf] ===
 8acff70:	55                   	push   %ebp
 8acff71:	89 e5                	mov    %esp,%ebp
 8acff73:	8b 55 08             	mov    0x8(%ebp),%edx
 8acff76:	53                   	push   %ebx
 8acff77:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8acff7a:	8b 42 08             	mov    0x8(%edx),%eax
 8acff7d:	8d 58 fe             	lea    -0x2(%eax),%ebx
 8acff80:	83 fb 01             	cmp    $0x1,%ebx
 8acff83:	76 13                	jbe    8acff98 <_ZN14CompiledDNFLex6getIntEPb+0x28>
 8acff85:	83 f8 09             	cmp    $0x9,%eax
 8acff88:	74 0e                	je     8acff98 <_ZN14CompiledDNFLex6getIntEPb+0x28>
 8acff8a:	31 c0                	xor    %eax,%eax
 8acff8c:	85 c9                	test   %ecx,%ecx
 8acff8e:	74 03                	je     8acff93 <_ZN14CompiledDNFLex6getIntEPb+0x23>
 8acff90:	c6 01 00             	movb   $0x0,(%ecx)
 8acff93:	5b                   	pop    %ebx
 8acff94:	5d                   	pop    %ebp
 8acff95:	c3                   	ret
 8acff96:	66 90                	xchg   %ax,%ax
 8acff98:	85 c9                	test   %ecx,%ecx
 8acff9a:	74 03                	je     8acff9f <_ZN14CompiledDNFLex6getIntEPb+0x2f>
 8acff9c:	c6 01 01             	movb   $0x1,(%ecx)
 8acff9f:	8b 4a 04             	mov    0x4(%edx),%ecx
 8acffa2:	8b 01                	mov    (%ecx),%eax
 8acffa4:	83 c1 04             	add    $0x4,%ecx
 8acffa7:	89 4a 04             	mov    %ecx,0x4(%edx)
 8acffaa:	5b                   	pop    %ebx
 8acffab:	5d                   	pop    %ebp
 8acffac:	a3 10 1a 50 09       	mov    %eax,0x9501a10
 8acffb1:	c3                   	ret
 8acffb2:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8acffb9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// CompiledDNFLex::getInt @ 0x8acff70

/* DWARF original prototype: int getInt(CompiledDNFLex * this, bool * result) */

int __thiscall CompiledDNFLex::getInt(CompiledDNFLex *this,bool *result)

{
  if ((1 < this->lastToken_ - DNF_TOK_DECIMAL) && (this->lastToken_ != DNF_TOK_PAIR_INT)) {
    if (result != (bool *)0x0) {
      *result = false;
    }
    return 0;
  }
  if (result != (bool *)0x0) {
    *result = true;
  }
  readIntFromBuffer::lexical_block_0::intBuffer = *(int *)this->offset_;
  this->offset_ = (char *)((int)this->offset_ + 4);
  return readIntFromBuffer::lexical_block_0::intBuffer;
}

```

---

## getStr

```asm
// === 08ad00d0 CompiledDNFLex::getStr  [0x08ad00d0-0x8ad012f] ===
 8ad00d0:	55                   	push   %ebp
 8ad00d1:	89 e5                	mov    %esp,%ebp
 8ad00d3:	83 ec 18             	sub    $0x18,%esp
 8ad00d6:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad00d9:	8b 42 08             	mov    0x8(%edx),%eax
 8ad00dc:	8d 48 fe             	lea    -0x2(%eax),%ecx
 8ad00df:	83 f9 01             	cmp    $0x1,%ecx
 8ad00e2:	76 05                	jbe    8ad00e9 <_ZN14CompiledDNFLex6getStrERSs+0x19>
 8ad00e4:	83 f8 09             	cmp    $0x9,%eax
 8ad00e7:	75 07                	jne    8ad00f0 <_ZN14CompiledDNFLex6getStrERSs+0x20>
 8ad00e9:	31 c0                	xor    %eax,%eax
 8ad00eb:	c9                   	leave
 8ad00ec:	c3                   	ret
 8ad00ed:	8d 76 00             	lea    0x0(%esi),%esi
 8ad00f0:	83 f8 04             	cmp    $0x4,%eax
 8ad00f3:	74 f4                	je     8ad00e9 <_ZN14CompiledDNFLex6getStrERSs+0x19>
 8ad00f5:	85 c0                	test   %eax,%eax
 8ad00f7:	74 f0                	je     8ad00e9 <_ZN14CompiledDNFLex6getStrERSs+0x19>
 8ad00f9:	83 f8 01             	cmp    $0x1,%eax
 8ad00fc:	74 eb                	je     8ad00e9 <_ZN14CompiledDNFLex6getStrERSs+0x19>
 8ad00fe:	8b 4a 04             	mov    0x4(%edx),%ecx
 8ad0101:	8b 01                	mov    (%ecx),%eax
 8ad0103:	83 c1 04             	add    $0x4,%ecx
 8ad0106:	89 4a 04             	mov    %ecx,0x4(%edx)
 8ad0109:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 8ad010c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad0110:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8ad0114:	a3 10 1a 50 09       	mov    %eax,0x9501a10
 8ad0119:	8b 42 10             	mov    0x10(%edx),%eax
 8ad011c:	89 04 24             	mov    %eax,(%esp)
 8ad011f:	e8 3c f0 ff ff       	call   8acf160 <_ZNK19ScriptStringManager9getStringEiPSs>
 8ad0124:	c9                   	leave
 8ad0125:	c3                   	ret
 8ad0126:	8d 76 00             	lea    0x0(%esi),%esi
 8ad0129:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// CompiledDNFLex::getStr @ 0x8ad00d0

/* DWARF original prototype: bool getStr(CompiledDNFLex * this, string * stringBuffer) */

bool __thiscall CompiledDNFLex::getStr(CompiledDNFLex *this,string *stringBuffer)

{
  DNFLEX_TOKEN DVar1;
  bool bVar2;
  
                    /* Unresolved local var: bool useStringTable@[???] */
  DVar1 = this->lastToken_;
  if ((((1 < DVar1 - DNF_TOK_DECIMAL) && (DVar1 != DNF_TOK_PAIR_INT)) && (DVar1 != DNF_TOK_FLOAT))
     && ((DVar1 != DNF_TOK_EOF && (DVar1 != DNF_TOK_ERROR)))) {
                    /* Unresolved local var: int index@[???] */
    readIntFromBuffer::lexical_block_0::intBuffer = *(int *)this->offset_;
    this->offset_ = (char *)((int)this->offset_ + 4);
    bVar2 = ScriptStringManager::getString
                      (this->stringManager_,readIntFromBuffer::lexical_block_0::intBuffer,
                       stringBuffer);
    return bVar2;
  }
  return false;
}

```

---

## getStr_08ad0190

```asm
// === 08ad0190 CompiledDNFLex::getStr  [0x08ad0190-0x8ad024f] ===
 8ad0190:	55                   	push   %ebp
 8ad0191:	89 e5                	mov    %esp,%ebp
 8ad0193:	83 ec 28             	sub    $0x28,%esp
 8ad0196:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad0199:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8ad019c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8ad019f:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8ad01a2:	8b 75 10             	mov    0x10(%ebp),%esi
 8ad01a5:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8ad01a8:	8b 42 08             	mov    0x8(%edx),%eax
 8ad01ab:	8d 48 fe             	lea    -0x2(%eax),%ecx
 8ad01ae:	83 f9 01             	cmp    $0x1,%ecx
 8ad01b1:	76 05                	jbe    8ad01b8 <_ZN14CompiledDNFLex6getStrEPci+0x28>
 8ad01b3:	83 f8 09             	cmp    $0x9,%eax
 8ad01b6:	75 10                	jne    8ad01c8 <_ZN14CompiledDNFLex6getStrEPci+0x38>
 8ad01b8:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad01bb:	31 c0                	xor    %eax,%eax
 8ad01bd:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8ad01c0:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8ad01c3:	89 ec                	mov    %ebp,%esp
 8ad01c5:	5d                   	pop    %ebp
 8ad01c6:	c3                   	ret
 8ad01c7:	90                   	nop
 8ad01c8:	83 f8 04             	cmp    $0x4,%eax
 8ad01cb:	74 eb                	je     8ad01b8 <_ZN14CompiledDNFLex6getStrEPci+0x28>
 8ad01cd:	85 c0                	test   %eax,%eax
 8ad01cf:	74 e7                	je     8ad01b8 <_ZN14CompiledDNFLex6getStrEPci+0x28>
 8ad01d1:	83 f8 01             	cmp    $0x1,%eax
 8ad01d4:	74 e2                	je     8ad01b8 <_ZN14CompiledDNFLex6getStrEPci+0x28>
 8ad01d6:	8b 4a 04             	mov    0x4(%edx),%ecx
 8ad01d9:	8b 01                	mov    (%ecx),%eax
 8ad01db:	83 c1 04             	add    $0x4,%ecx
 8ad01de:	89 4a 04             	mov    %ecx,0x4(%edx)
 8ad01e1:	a3 10 1a 50 09       	mov    %eax,0x9501a10
 8ad01e6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad01ea:	8b 42 10             	mov    0x10(%edx),%eax
 8ad01ed:	89 04 24             	mov    %eax,(%esp)
 8ad01f0:	e8 fb ef ff ff       	call   8acf1f0 <_ZNK19ScriptStringManager9getStringEi>
 8ad01f5:	8b 00                	mov    (%eax),%eax
 8ad01f7:	8b 78 f4             	mov    -0xc(%eax),%edi
 8ad01fa:	39 f7                	cmp    %esi,%edi
 8ad01fc:	7f 2a                	jg     8ad0228 <_ZN14CompiledDNFLex6getStrEPci+0x98>
 8ad01fe:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8ad0202:	89 1c 24             	mov    %ebx,(%esp)
 8ad0205:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad0209:	e8 92 d6 5a ff       	call   807d8a0 <memcpy@plt>
 8ad020e:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad0213:	c6 04 3b 00          	movb   $0x0,(%ebx,%edi,1)
 8ad0217:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad021a:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8ad021d:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8ad0220:	89 ec                	mov    %ebp,%esp
 8ad0222:	5d                   	pop    %ebp
 8ad0223:	c3                   	ret
 8ad0224:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad0228:	83 ee 01             	sub    $0x1,%esi
 8ad022b:	89 74 24 08          	mov    %esi,0x8(%esp)
 8ad022f:	89 1c 24             	mov    %ebx,(%esp)
 8ad0232:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad0236:	e8 65 d6 5a ff       	call   807d8a0 <memcpy@plt>
 8ad023b:	31 c0                	xor    %eax,%eax
 8ad023d:	c6 44 3b ff 00       	movb   $0x0,-0x1(%ebx,%edi,1)
 8ad0242:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad0245:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8ad0248:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8ad024b:	89 ec                	mov    %ebp,%esp
 8ad024d:	5d                   	pop    %ebp
 8ad024e:	c3                   	ret
 8ad024f:	90                   	nop

```

```c
// CompiledDNFLex::getStr @ 0x8ad0190

/* DWARF original prototype: bool getStr(CompiledDNFLex * this, char * buffer, int maxSize) */

bool __thiscall CompiledDNFLex::getStr(CompiledDNFLex *this,char *buffer,int maxSize)

{
  DNFLEX_TOKEN DVar1;
  char *__src;
  size_t __n;
  string *psVar2;
  
                    /* Unresolved local var: bool useStringTable@[???] */
  DVar1 = this->lastToken_;
  if ((((1 < DVar1 - DNF_TOK_DECIMAL) && (DVar1 != DNF_TOK_PAIR_INT)) && (DVar1 != DNF_TOK_FLOAT))
     && ((DVar1 != DNF_TOK_EOF && (DVar1 != DNF_TOK_ERROR)))) {
                    /* Unresolved local var: int index@[???]
                       Unresolved local var: string * r_string@[???]
                       Unresolved local var: int string_length@[???] */
    readIntFromBuffer::lexical_block_0::intBuffer = *(int *)this->offset_;
    this->offset_ = (char *)((int)this->offset_ + 4);
    psVar2 = ScriptStringManager::getString
                       (this->stringManager_,readIntFromBuffer::lexical_block_0::intBuffer);
    __src = (psVar2->_M_dataplus)._M_p;
    __n = *(size_t *)(__src + -0xc);
    if ((int)__n <= maxSize) {
      memcpy(buffer,__src,__n);
      buffer[__n] = '\0';
      return true;
    }
    memcpy(buffer,__src,maxSize - 1);
    buffer[__n - 1] = '\0';
    return false;
  }
  return false;
}

```

---

## getStr_08ad0250

```asm
// === 08ad0250 CompiledDNFLex::getStr  [0x08ad0250-0x8ad028f] ===
 8ad0250:	55                   	push   %ebp
 8ad0251:	89 e5                	mov    %esp,%ebp
 8ad0253:	83 ec 18             	sub    $0x18,%esp
 8ad0256:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8ad0259:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad025c:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8ad025f:	8b 75 0c             	mov    0xc(%ebp),%esi
 8ad0262:	c7 44 24 08 00 04 00 	movl   $0x400,0x8(%esp)
 8ad0269:	00 
 8ad026a:	8b 43 14             	mov    0x14(%ebx),%eax
 8ad026d:	89 1c 24             	mov    %ebx,(%esp)
 8ad0270:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad0274:	e8 17 ff ff ff       	call   8ad0190 <_ZN14CompiledDNFLex6getStrEPci>
 8ad0279:	85 f6                	test   %esi,%esi
 8ad027b:	74 02                	je     8ad027f <_ZN14CompiledDNFLex6getStrEPb+0x2f>
 8ad027d:	88 06                	mov    %al,(%esi)
 8ad027f:	8b 43 14             	mov    0x14(%ebx),%eax
 8ad0282:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8ad0285:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8ad0288:	89 ec                	mov    %ebp,%esp
 8ad028a:	5d                   	pop    %ebp
 8ad028b:	c3                   	ret
 8ad028c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// CompiledDNFLex::getStr @ 0x8ad0250

/* DWARF original prototype: char * getStr(CompiledDNFLex * this, bool * result) */

char * __thiscall CompiledDNFLex::getStr(CompiledDNFLex *this,bool *result)

{
  bool bVar1;
  
                    /* Unresolved local var: bool rslt@[???] */
  bVar1 = getStr(this,this->stringBuffer_,0x400);
  if (result != (bool *)0x0) {
    *result = bVar1;
  }
  return this->stringBuffer_;
}

```

---

## getStreamName

```asm
// === 08ad0290 CompiledDNFLex::getStreamName  [0x08ad0290-0x8ad036f] ===
 8ad0290:	55                   	push   %ebp
 8ad0291:	89 e5                	mov    %esp,%ebp
 8ad0293:	83 ec 38             	sub    $0x38,%esp
 8ad0296:	8b 45 0c             	mov    0xc(%ebp),%eax
 8ad0299:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8ad029c:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad029f:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8ad02a2:	8b b0 30 20 00 00    	mov    0x2030(%eax),%esi
 8ad02a8:	3b b0 20 20 00 00    	cmp    0x2020(%eax),%esi
 8ad02ae:	74 78                	je     8ad0328 <_ZNK14CompiledDNFLex13getStreamNameEv+0x98>
 8ad02b0:	3b b0 34 20 00 00    	cmp    0x2034(%eax),%esi
 8ad02b6:	8b 90 3c 20 00 00    	mov    0x203c(%eax),%edx
 8ad02bc:	74 32                	je     8ad02f0 <_ZNK14CompiledDNFLex13getStreamNameEv+0x60>
 8ad02be:	89 f0                	mov    %esi,%eax
 8ad02c0:	83 e8 14             	sub    $0x14,%eax
 8ad02c3:	74 3b                	je     8ad0300 <_ZNK14CompiledDNFLex13getStreamNameEv+0x70>
 8ad02c5:	83 ee 10             	sub    $0x10,%esi
 8ad02c8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad02cc:	89 1c 24             	mov    %ebx,(%esp)
 8ad02cf:	e8 dc 76 c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8ad02d4:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad02d8:	89 1c 24             	mov    %ebx,(%esp)
 8ad02db:	e8 60 7e c3 ff       	call   8708140 <_ZNSs6appendERKSs>
 8ad02e0:	89 d8                	mov    %ebx,%eax
 8ad02e2:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8ad02e5:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8ad02e8:	89 ec                	mov    %ebp,%esp
 8ad02ea:	5d                   	pop    %ebp
 8ad02eb:	c2 04 00             	ret    $0x4
 8ad02ee:	66 90                	xchg   %ax,%ax
 8ad02f0:	8b 72 fc             	mov    -0x4(%edx),%esi
 8ad02f3:	81 c6 f4 01 00 00    	add    $0x1f4,%esi
 8ad02f9:	89 f0                	mov    %esi,%eax
 8ad02fb:	83 e8 14             	sub    $0x14,%eax
 8ad02fe:	75 c5                	jne    8ad02c5 <_ZNK14CompiledDNFLex13getStreamNameEv+0x35>
 8ad0300:	8d 45 f6             	lea    -0xa(%ebp),%eax
 8ad0303:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad0307:	c7 44 24 04 1f eb e2 	movl   $0x8e2eb1f,0x4(%esp)
 8ad030e:	08 
 8ad030f:	89 1c 24             	mov    %ebx,(%esp)
 8ad0312:	e8 19 73 c3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8ad0317:	89 d8                	mov    %ebx,%eax
 8ad0319:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8ad031c:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8ad031f:	89 ec                	mov    %ebp,%esp
 8ad0321:	5d                   	pop    %ebp
 8ad0322:	c2 04 00             	ret    $0x4
 8ad0325:	8d 76 00             	lea    0x0(%esi),%esi
 8ad0328:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8ad032b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad032f:	c7 44 24 04 1f eb e2 	movl   $0x8e2eb1f,0x4(%esp)
 8ad0336:	08 
 8ad0337:	89 1c 24             	mov    %ebx,(%esp)
 8ad033a:	e8 f1 72 c3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8ad033f:	eb 9f                	jmp    8ad02e0 <_ZNK14CompiledDNFLex13getStreamNameEv+0x50>
 8ad0341:	89 04 24             	mov    %eax,(%esp)
 8ad0344:	e8 07 34 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad0349:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8ad034c:	89 1c 24             	mov    %ebx,(%esp)
 8ad034f:	e8 8c 78 c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ad0354:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad0357:	89 04 24             	mov    %eax,(%esp)
 8ad035a:	e8 f1 33 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad035f:	eb e0                	jmp    8ad0341 <_ZNK14CompiledDNFLex13getStreamNameEv+0xb1>
 8ad0361:	90                   	nop
 8ad0362:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8ad0369:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// CompiledDNFLex::getStreamName @ 0x8ad0290

/* DWARF original prototype: tstring getStreamName(CompiledDNFLex * this) */

tstring __thiscall CompiledDNFLex::getStreamName(CompiledDNFLex *this)

{
  int iVar1;
  string *psVar2;
  int iVar3;
  int in_stack_00000008;
  allocator local_e;
  allocator local_d;
  
                    /* Unresolved local var: stream_t * stream@[???] */
  iVar3 = *(int *)(in_stack_00000008 + 0x2030);
  if (iVar3 == *(int *)(in_stack_00000008 + 0x2020)) {
                    /* try { // try from 08ad033a to 08ad033e has its CatchHandler @ 08ad035f */
    std::string::string((string *)this,"NONE",&local_d);
  }
  else {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_const_CompiledDNFLex::stream_t&,_const_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    if (iVar3 == *(int *)(in_stack_00000008 + 0x2034)) {
      iVar1 = *(int *)(*(int *)(in_stack_00000008 + 0x203c) + -4);
      iVar3 = iVar1 + 500;
      psVar2 = (string *)(iVar1 + 0x1e0);
    }
    else {
      psVar2 = (string *)(iVar3 + -0x14);
    }
    if (psVar2 == (string *)0x0) {
                    /* try { // try from 08ad0312 to 08ad0316 has its CatchHandler @ 08ad0341 */
      std::string::string((string *)this,"NONE",&local_e);
      return (tstring)(_Alloc_hider)this;
    }
                    /* Unresolved local var:
                       basic_string<char,_std::char_traits<char>,_std::allocator<char>_> __str@[???]
                        */
    std::string::string((string *)this,psVar2);
                    /* try { // try from 08ad02db to 08ad02df has its CatchHandler @ 08ad0349 */
    std::string::append((string *)this,(string *)(iVar3 + -0x10));
  }
  return (tstring)(_Alloc_hider)this;
}

```

---

## getStringManager

```asm
// === 08ad0070 CompiledDNFLex::getStringManager  [0x08ad0070-0x8ad007f] ===
 8ad0070:	55                   	push   %ebp
 8ad0071:	89 e5                	mov    %esp,%ebp
 8ad0073:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad0076:	5d                   	pop    %ebp
 8ad0077:	8b 40 10             	mov    0x10(%eax),%eax
 8ad007a:	c3                   	ret
 8ad007b:	90                   	nop
 8ad007c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// CompiledDNFLex::getStringManager @ 0x8ad0070

/* DWARF original prototype: ScriptStringManager * getStringManager(CompiledDNFLex * this) */

ScriptStringManager * __thiscall CompiledDNFLex::getStringManager(CompiledDNFLex *this)

{
  return this->stringManager_;
}

```

---

## getToken

```asm
// === 08ad0fa0 CompiledDNFLex::getToken  [0x08ad0fa0-0x8ad190f] ===
 8ad0fa0:	55                   	push   %ebp
 8ad0fa1:	89 e5                	mov    %esp,%ebp
 8ad0fa3:	83 ec 58             	sub    $0x58,%esp
 8ad0fa6:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8ad0fa9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad0fac:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8ad0faf:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8ad0fb2:	8b 83 30 20 00 00    	mov    0x2030(%ebx),%eax
 8ad0fb8:	3b 83 20 20 00 00    	cmp    0x2020(%ebx),%eax
 8ad0fbe:	0f 84 7c 01 00 00    	je     8ad1140 <_ZN14CompiledDNFLex8getTokenEv+0x1a0>
 8ad0fc4:	3b 83 34 20 00 00    	cmp    0x2034(%ebx),%eax
 8ad0fca:	8b 93 3c 20 00 00    	mov    0x203c(%ebx),%edx
 8ad0fd0:	0f 84 72 01 00 00    	je     8ad1148 <_ZN14CompiledDNFLex8getTokenEv+0x1a8>
 8ad0fd6:	83 e8 14             	sub    $0x14,%eax
 8ad0fd9:	0f 84 61 01 00 00    	je     8ad1140 <_ZN14CompiledDNFLex8getTokenEv+0x1a0>
 8ad0fdf:	8b 4b 04             	mov    0x4(%ebx),%ecx
 8ad0fe2:	8b 50 0c             	mov    0xc(%eax),%edx
 8ad0fe5:	03 50 08             	add    0x8(%eax),%edx
 8ad0fe8:	39 d1                	cmp    %edx,%ecx
 8ad0fea:	73 2c                	jae    8ad1018 <_ZN14CompiledDNFLex8getTokenEv+0x78>
 8ad0fec:	0f be 01             	movsbl (%ecx),%eax
 8ad0fef:	83 c1 01             	add    $0x1,%ecx
 8ad0ff2:	a2 18 1a 50 09       	mov    %al,0x9501a18
 8ad0ff7:	80 bb 40 20 00 00 00 	cmpb   $0x0,0x2040(%ebx)
 8ad0ffe:	89 4b 04             	mov    %ecx,0x4(%ebx)
 8ad1001:	89 43 08             	mov    %eax,0x8(%ebx)
 8ad1004:	74 05                	je     8ad100b <_ZN14CompiledDNFLex8getTokenEv+0x6b>
 8ad1006:	83 f8 0b             	cmp    $0xb,%eax
 8ad1009:	74 3d                	je     8ad1048 <_ZN14CompiledDNFLex8getTokenEv+0xa8>
 8ad100b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad100e:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8ad1011:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8ad1014:	89 ec                	mov    %ebp,%esp
 8ad1016:	5d                   	pop    %ebp
 8ad1017:	c3                   	ret
 8ad1018:	c7 43 08 00 00 00 00 	movl   $0x0,0x8(%ebx)
 8ad101f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8ad1026:	00 
 8ad1027:	89 1c 24             	mov    %ebx,(%esp)
 8ad102a:	e8 51 fc ff ff       	call   8ad0c80 <_ZN14CompiledDNFLex14PopInputStreamEb>
 8ad102f:	84 c0                	test   %al,%al
 8ad1031:	0f 85 f9 00 00 00    	jne    8ad1130 <_ZN14CompiledDNFLex8getTokenEv+0x190>
 8ad1037:	8b 43 08             	mov    0x8(%ebx),%eax
 8ad103a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8ad103d:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8ad1040:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8ad1043:	89 ec                	mov    %ebp,%esp
 8ad1045:	5d                   	pop    %ebp
 8ad1046:	c3                   	ret
 8ad1047:	90                   	nop
 8ad1048:	8b 83 30 20 00 00    	mov    0x2030(%ebx),%eax
 8ad104e:	31 f6                	xor    %esi,%esi
 8ad1050:	3b 83 20 20 00 00    	cmp    0x2020(%ebx),%eax
 8ad1056:	74 15                	je     8ad106d <_ZN14CompiledDNFLex8getTokenEv+0xcd>
 8ad1058:	3b 83 34 20 00 00    	cmp    0x2034(%ebx),%eax
 8ad105e:	8b 93 3c 20 00 00    	mov    0x203c(%ebx),%edx
 8ad1064:	0f 84 9e 01 00 00    	je     8ad1208 <_ZN14CompiledDNFLex8getTokenEv+0x268>
 8ad106a:	8d 70 ec             	lea    -0x14(%eax),%esi
 8ad106d:	0f be 01             	movsbl (%ecx),%eax
 8ad1070:	83 c1 01             	add    $0x1,%ecx
 8ad1073:	83 f8 07             	cmp    $0x7,%eax
 8ad1076:	a2 18 1a 50 09       	mov    %al,0x9501a18
 8ad107b:	89 4b 04             	mov    %ecx,0x4(%ebx)
 8ad107e:	89 43 08             	mov    %eax,0x8(%ebx)
 8ad1081:	0f 85 31 01 00 00    	jne    8ad11b8 <_ZN14CompiledDNFLex8getTokenEv+0x218>
 8ad1087:	8d 7d e4             	lea    -0x1c(%ebp),%edi
 8ad108a:	c7 45 e4 fc cc 48 09 	movl   $0x948ccfc,-0x1c(%ebp)
 8ad1091:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8ad1095:	89 1c 24             	mov    %ebx,(%esp)
 8ad1098:	e8 33 f0 ff ff       	call   8ad00d0 <_ZN14CompiledDNFLex6getStrERSs>
 8ad109d:	84 c0                	test   %al,%al
 8ad109f:	0f 84 b3 00 00 00    	je     8ad1158 <_ZN14CompiledDNFLex8getTokenEv+0x1b8>
 8ad10a5:	89 3c 24             	mov    %edi,(%esp)
 8ad10a8:	e8 03 da 00 00       	call   8adeab0 <_Z9toTStringRKSs>
 8ad10ad:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8ad10b0:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad10b4:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad10b8:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 8ad10bf:	08 
 8ad10c0:	89 1c 24             	mov    %ebx,(%esp)
 8ad10c3:	e8 78 ed ff ff       	call   8acfe40 <_ZN14CompiledDNFLex10LoadStreamEPKcS1_PN6DNFLex13stream_data_tE>
 8ad10c8:	84 c0                	test   %al,%al
 8ad10ca:	0f 84 45 01 00 00    	je     8ad1215 <_ZN14CompiledDNFLex8getTokenEv+0x275>
 8ad10d0:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8ad10d3:	85 c0                	test   %eax,%eax
 8ad10d5:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8ad10d8:	0f 84 a9 01 00 00    	je     8ad1287 <_ZN14CompiledDNFLex8getTokenEv+0x2e7>
 8ad10de:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ad10e1:	89 3c 24             	mov    %edi,(%esp)
 8ad10e4:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8ad10e7:	e8 c4 d9 00 00       	call   8adeab0 <_Z9toTStringRKSs>
 8ad10ec:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8ad10ef:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad10f3:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 8ad10fa:	08 
 8ad10fb:	89 1c 24             	mov    %ebx,(%esp)
 8ad10fe:	89 54 24 10          	mov    %edx,0x10(%esp)
 8ad1102:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad1105:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8ad1109:	e8 f2 f8 ff ff       	call   8ad0a00 <_ZN14CompiledDNFLex15PushInputStreamEPKcS1_Pcj>
 8ad110e:	84 c0                	test   %al,%al
 8ad1110:	0f 84 38 01 00 00    	je     8ad124e <_ZN14CompiledDNFLex8getTokenEv+0x2ae>
 8ad1116:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ad1119:	85 c0                	test   %eax,%eax
 8ad111b:	74 08                	je     8ad1125 <_ZN14CompiledDNFLex8getTokenEv+0x185>
 8ad111d:	8b 10                	mov    (%eax),%edx
 8ad111f:	89 04 24             	mov    %eax,(%esp)
 8ad1122:	ff 52 04             	call   *0x4(%edx)
 8ad1125:	89 3c 24             	mov    %edi,(%esp)
 8ad1128:	e8 b3 6a c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ad112d:	8d 76 00             	lea    0x0(%esi),%esi
 8ad1130:	89 1c 24             	mov    %ebx,(%esp)
 8ad1133:	e8 68 fe ff ff       	call   8ad0fa0 <_ZN14CompiledDNFLex8getTokenEv>
 8ad1138:	e9 fa fe ff ff       	jmp    8ad1037 <_ZN14CompiledDNFLex8getTokenEv+0x97>
 8ad113d:	8d 76 00             	lea    0x0(%esi),%esi
 8ad1140:	8b 4b 04             	mov    0x4(%ebx),%ecx
 8ad1143:	e9 a4 fe ff ff       	jmp    8ad0fec <_ZN14CompiledDNFLex8getTokenEv+0x4c>
 8ad1148:	8b 42 fc             	mov    -0x4(%edx),%eax
 8ad114b:	05 f4 01 00 00       	add    $0x1f4,%eax
 8ad1150:	e9 81 fe ff ff       	jmp    8ad0fd6 <_ZN14CompiledDNFLex8getTokenEv+0x36>
 8ad1155:	8d 76 00             	lea    0x0(%esi),%esi
 8ad1158:	8d 46 04             	lea    0x4(%esi),%eax
 8ad115b:	89 04 24             	mov    %eax,(%esp)
 8ad115e:	e8 70 dc 00 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8ad1163:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8ad1166:	89 34 24             	mov    %esi,(%esp)
 8ad1169:	e8 65 dc 00 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8ad116e:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad1171:	8d 73 18             	lea    0x18(%ebx),%esi
 8ad1174:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad1178:	c7 44 24 08 44 ed e2 	movl   $0x8e2ed44,0x8(%esp)
 8ad117f:	08 
 8ad1180:	c7 44 24 04 98 ec e2 	movl   $0x8e2ec98,0x4(%esp)
 8ad1187:	08 
 8ad1188:	89 54 24 10          	mov    %edx,0x10(%esp)
 8ad118c:	89 34 24             	mov    %esi,(%esp)
 8ad118f:	e8 ac d2 5a ff       	call   807e440 <sprintf@plt>
 8ad1194:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad1198:	89 1c 24             	mov    %ebx,(%esp)
 8ad119b:	e8 70 ec ff ff       	call   8acfe10 <_ZN14CompiledDNFLex10LexerErrorEPKc>
 8ad11a0:	89 3c 24             	mov    %edi,(%esp)
 8ad11a3:	e8 38 6a c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ad11a8:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad11ad:	e9 59 fe ff ff       	jmp    8ad100b <_ZN14CompiledDNFLex8getTokenEv+0x6b>
 8ad11b2:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad11b8:	8d 46 04             	lea    0x4(%esi),%eax
 8ad11bb:	89 04 24             	mov    %eax,(%esp)
 8ad11be:	e8 10 dc 00 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8ad11c3:	89 34 24             	mov    %esi,(%esp)
 8ad11c6:	8d 73 18             	lea    0x18(%ebx),%esi
 8ad11c9:	89 c7                	mov    %eax,%edi
 8ad11cb:	e8 03 dc 00 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8ad11d0:	89 7c 24 10          	mov    %edi,0x10(%esp)
 8ad11d4:	c7 44 24 08 44 ed e2 	movl   $0x8e2ed44,0x8(%esp)
 8ad11db:	08 
 8ad11dc:	c7 44 24 04 d4 ec e2 	movl   $0x8e2ecd4,0x4(%esp)
 8ad11e3:	08 
 8ad11e4:	89 34 24             	mov    %esi,(%esp)
 8ad11e7:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad11eb:	e8 50 d2 5a ff       	call   807e440 <sprintf@plt>
 8ad11f0:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad11f4:	89 1c 24             	mov    %ebx,(%esp)
 8ad11f7:	e8 14 ec ff ff       	call   8acfe10 <_ZN14CompiledDNFLex10LexerErrorEPKc>
 8ad11fc:	b8 01 00 00 00       	mov    $0x1,%eax
 8ad1201:	e9 05 fe ff ff       	jmp    8ad100b <_ZN14CompiledDNFLex8getTokenEv+0x6b>
 8ad1206:	66 90                	xchg   %ax,%ax
 8ad1208:	8b 42 fc             	mov    -0x4(%edx),%eax
 8ad120b:	05 f4 01 00 00       	add    $0x1f4,%eax
 8ad1210:	e9 55 fe ff ff       	jmp    8ad106a <_ZN14CompiledDNFLex8getTokenEv+0xca>
 8ad1215:	8d 46 04             	lea    0x4(%esi),%eax
 8ad1218:	89 04 24             	mov    %eax,(%esp)
 8ad121b:	e8 b3 db 00 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8ad1220:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8ad1223:	89 34 24             	mov    %esi,(%esp)
 8ad1226:	e8 a8 db 00 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8ad122b:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad122e:	8d 73 18             	lea    0x18(%ebx),%esi
 8ad1231:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad1235:	c7 44 24 08 44 ed e2 	movl   $0x8e2ed44,0x8(%esp)
 8ad123c:	08 
 8ad123d:	c7 44 24 04 b6 ec e2 	movl   $0x8e2ecb6,0x4(%esp)
 8ad1244:	08 
 8ad1245:	89 54 24 10          	mov    %edx,0x10(%esp)
 8ad1249:	e9 3e ff ff ff       	jmp    8ad118c <_ZN14CompiledDNFLex8getTokenEv+0x1ec>
 8ad124e:	8d 46 04             	lea    0x4(%esi),%eax
 8ad1251:	89 04 24             	mov    %eax,(%esp)
 8ad1254:	e8 7a db 00 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8ad1259:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8ad125c:	89 34 24             	mov    %esi,(%esp)
 8ad125f:	e8 6f db 00 00       	call   8adedd3 <_Z6toMbcsRKSs>
 8ad1264:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad1267:	8d 73 18             	lea    0x18(%ebx),%esi
 8ad126a:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8ad126e:	c7 44 24 08 44 ed e2 	movl   $0x8e2ed44,0x8(%esp)
 8ad1275:	08 
 8ad1276:	c7 44 24 04 f4 ec e2 	movl   $0x8e2ecf4,0x4(%esp)
 8ad127d:	08 
 8ad127e:	89 54 24 10          	mov    %edx,0x10(%esp)
 8ad1282:	e9 05 ff ff ff       	jmp    8ad118c <_ZN14CompiledDNFLex8getTokenEv+0x1ec>
 8ad1287:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ad128a:	89 04 24             	mov    %eax,(%esp)
 8ad128d:	e8 2e 1b c5 ff       	call   8722dc0 <_Znaj>
 8ad1292:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8ad1295:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8ad1298:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8ad129b:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad129f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8ad12a2:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad12a6:	89 04 24             	mov    %eax,(%esp)
 8ad12a9:	e8 42 49 c1 ff       	call   86e5bf0 <_ZNSi4readEPci>
 8ad12ae:	e9 2b fe ff ff       	jmp    8ad10de <_ZN14CompiledDNFLex8getTokenEv+0x13e>
 8ad12b3:	89 c3                	mov    %eax,%ebx
 8ad12b5:	89 3c 24             	mov    %edi,(%esp)
 8ad12b8:	e8 23 69 c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ad12bd:	89 1c 24             	mov    %ebx,(%esp)
 8ad12c0:	e8 8b 24 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad12c5:	90                   	nop
 8ad12c6:	90                   	nop
 8ad12c7:	90                   	nop
 8ad12c8:	90                   	nop
 8ad12c9:	90                   	nop
 8ad12ca:	90                   	nop
 8ad12cb:	90                   	nop
 8ad12cc:	90                   	nop
 8ad12cd:	90                   	nop
 8ad12ce:	90                   	nop
 8ad12cf:	90                   	nop

08ad12d0 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EED1Ev>:
 8ad12d0:	55                   	push   %ebp
 8ad12d1:	89 e5                	mov    %esp,%ebp
 8ad12d3:	57                   	push   %edi
 8ad12d4:	56                   	push   %esi
 8ad12d5:	53                   	push   %ebx
 8ad12d6:	83 ec 1c             	sub    $0x1c,%esp
 8ad12d9:	8b 7d 08             	mov    0x8(%ebp),%edi
 8ad12dc:	8b 07                	mov    (%edi),%eax
 8ad12de:	85 c0                	test   %eax,%eax
 8ad12e0:	74 36                	je     8ad1318 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x48>
 8ad12e2:	8b 77 24             	mov    0x24(%edi),%esi
 8ad12e5:	8b 5f 14             	mov    0x14(%edi),%ebx
 8ad12e8:	83 c6 04             	add    $0x4,%esi
 8ad12eb:	39 de                	cmp    %ebx,%esi
 8ad12ed:	76 14                	jbe    8ad1303 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x33>
 8ad12ef:	90                   	nop
 8ad12f0:	8b 03                	mov    (%ebx),%eax
 8ad12f2:	83 c3 04             	add    $0x4,%ebx
 8ad12f5:	89 04 24             	mov    %eax,(%esp)
 8ad12f8:	e8 f3 31 c5 ff       	call   87244f0 <_ZdlPv>
 8ad12fd:	39 de                	cmp    %ebx,%esi
 8ad12ff:	77 ef                	ja     8ad12f0 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x20>
 8ad1301:	8b 07                	mov    (%edi),%eax
 8ad1303:	89 45 08             	mov    %eax,0x8(%ebp)
 8ad1306:	83 c4 1c             	add    $0x1c,%esp
 8ad1309:	5b                   	pop    %ebx
 8ad130a:	5e                   	pop    %esi
 8ad130b:	5f                   	pop    %edi
 8ad130c:	5d                   	pop    %ebp
 8ad130d:	e9 de 31 c5 ff       	jmp    87244f0 <_ZdlPv>
 8ad1312:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad1318:	83 c4 1c             	add    $0x1c,%esp
 8ad131b:	5b                   	pop    %ebx
 8ad131c:	5e                   	pop    %esi
 8ad131d:	5f                   	pop    %edi
 8ad131e:	5d                   	pop    %ebp
 8ad131f:	c3                   	ret

08ad1320 <_ZN14CompiledDNFLex8stream_tD1Ev>:
 8ad1320:	55                   	push   %ebp
 8ad1321:	89 e5                	mov    %esp,%ebp
 8ad1323:	53                   	push   %ebx
 8ad1324:	83 ec 24             	sub    $0x24,%esp
 8ad1327:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad132a:	8b 43 04             	mov    0x4(%ebx),%eax
 8ad132d:	83 e8 0c             	sub    $0xc,%eax
 8ad1330:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8ad1335:	75 14                	jne    8ad134b <_ZN14CompiledDNFLex8stream_tD1Ev+0x2b>
 8ad1337:	8b 03                	mov    (%ebx),%eax
 8ad1339:	ba f0 cc 48 09       	mov    $0x948ccf0,%edx
 8ad133e:	83 e8 0c             	sub    $0xc,%eax
 8ad1341:	39 c2                	cmp    %eax,%edx
 8ad1343:	75 2c                	jne    8ad1371 <_ZN14CompiledDNFLex8stream_tD1Ev+0x51>
 8ad1345:	83 c4 24             	add    $0x24,%esp
 8ad1348:	5b                   	pop    %ebx
 8ad1349:	5d                   	pop    %ebp
 8ad134a:	c3                   	ret
 8ad134b:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8ad1350:	85 d2                	test   %edx,%edx
 8ad1352:	74 43                	je     8ad1397 <_ZN14CompiledDNFLex8stream_tD1Ev+0x77>
 8ad1354:	83 ca ff             	or     $0xffffffff,%edx
 8ad1357:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8ad135c:	85 d2                	test   %edx,%edx
 8ad135e:	7f d7                	jg     8ad1337 <_ZN14CompiledDNFLex8stream_tD1Ev+0x17>
 8ad1360:	8d 55 f7             	lea    -0x9(%ebp),%edx
 8ad1363:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad1367:	89 04 24             	mov    %eax,(%esp)
 8ad136a:	e8 b1 55 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad136f:	eb c6                	jmp    8ad1337 <_ZN14CompiledDNFLex8stream_tD1Ev+0x17>
 8ad1371:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8ad1376:	85 d2                	test   %edx,%edx
 8ad1378:	74 28                	je     8ad13a2 <_ZN14CompiledDNFLex8stream_tD1Ev+0x82>
 8ad137a:	83 ca ff             	or     $0xffffffff,%edx
 8ad137d:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8ad1382:	85 d2                	test   %edx,%edx
 8ad1384:	7f bf                	jg     8ad1345 <_ZN14CompiledDNFLex8stream_tD1Ev+0x25>
 8ad1386:	8d 55 f6             	lea    -0xa(%ebp),%edx
 8ad1389:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad138d:	89 04 24             	mov    %eax,(%esp)
 8ad1390:	e8 8b 55 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad1395:	eb ae                	jmp    8ad1345 <_ZN14CompiledDNFLex8stream_tD1Ev+0x25>
 8ad1397:	8b 50 08             	mov    0x8(%eax),%edx
 8ad139a:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8ad139d:	89 48 08             	mov    %ecx,0x8(%eax)
 8ad13a0:	eb ba                	jmp    8ad135c <_ZN14CompiledDNFLex8stream_tD1Ev+0x3c>
 8ad13a2:	8b 50 08             	mov    0x8(%eax),%edx
 8ad13a5:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8ad13a8:	89 48 08             	mov    %ecx,0x8(%eax)
 8ad13ab:	eb d5                	jmp    8ad1382 <_ZN14CompiledDNFLex8stream_tD1Ev+0x62>
 8ad13ad:	90                   	nop
 8ad13ae:	90                   	nop
 8ad13af:	90                   	nop

08ad13b0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EE16_M_push_back_auxIIRKS1_EEEvDpOT_>:
 8ad13b0:	55                   	push   %ebp
 8ad13b1:	89 e5                	mov    %esp,%ebp
 8ad13b3:	57                   	push   %edi
 8ad13b4:	56                   	push   %esi
 8ad13b5:	53                   	push   %ebx
 8ad13b6:	83 ec 3c             	sub    $0x3c,%esp
 8ad13b9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad13bc:	8b 75 0c             	mov    0xc(%ebp),%esi
 8ad13bf:	8b 7b 24             	mov    0x24(%ebx),%edi
 8ad13c2:	8b 13                	mov    (%ebx),%edx
 8ad13c4:	8b 43 04             	mov    0x4(%ebx),%eax
 8ad13c7:	89 f9                	mov    %edi,%ecx
 8ad13c9:	29 d1                	sub    %edx,%ecx
 8ad13cb:	c1 f9 02             	sar    $0x2,%ecx
 8ad13ce:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 8ad13d1:	89 c1                	mov    %eax,%ecx
 8ad13d3:	2b 4d e4             	sub    -0x1c(%ebp),%ecx
 8ad13d6:	83 f9 01             	cmp    $0x1,%ecx
 8ad13d9:	76 6d                	jbe    8ad1448 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EE16_M_push_back_auxIIRKS1_EEEvDpOT_+0x98>
 8ad13db:	c7 04 24 f4 01 00 00 	movl   $0x1f4,(%esp)
 8ad13e2:	e8 69 30 c5 ff       	call   8724450 <_Znwj>
 8ad13e7:	89 47 04             	mov    %eax,0x4(%edi)
 8ad13ea:	8b 7b 18             	mov    0x18(%ebx),%edi
 8ad13ed:	85 ff                	test   %edi,%edi
 8ad13ef:	74 30                	je     8ad1421 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EE16_M_push_back_auxIIRKS1_EEEvDpOT_+0x71>
 8ad13f1:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad13f5:	89 3c 24             	mov    %edi,(%esp)
 8ad13f8:	e8 b3 65 c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8ad13fd:	8d 46 04             	lea    0x4(%esi),%eax
 8ad1400:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad1404:	8d 47 04             	lea    0x4(%edi),%eax
 8ad1407:	89 04 24             	mov    %eax,(%esp)
 8ad140a:	e8 a1 65 c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8ad140f:	8b 46 08             	mov    0x8(%esi),%eax
 8ad1412:	89 47 08             	mov    %eax,0x8(%edi)
 8ad1415:	8b 46 0c             	mov    0xc(%esi),%eax
 8ad1418:	89 47 0c             	mov    %eax,0xc(%edi)
 8ad141b:	8b 46 10             	mov    0x10(%esi),%eax
 8ad141e:	89 47 10             	mov    %eax,0x10(%edi)
 8ad1421:	8b 43 24             	mov    0x24(%ebx),%eax
 8ad1424:	8d 50 04             	lea    0x4(%eax),%edx
 8ad1427:	8b 40 04             	mov    0x4(%eax),%eax
 8ad142a:	89 53 24             	mov    %edx,0x24(%ebx)
 8ad142d:	8d 90 f4 01 00 00    	lea    0x1f4(%eax),%edx
 8ad1433:	89 43 1c             	mov    %eax,0x1c(%ebx)
 8ad1436:	89 53 20             	mov    %edx,0x20(%ebx)
 8ad1439:	89 43 18             	mov    %eax,0x18(%ebx)
 8ad143c:	83 c4 3c             	add    $0x3c,%esp
 8ad143f:	5b                   	pop    %ebx
 8ad1440:	5e                   	pop    %esi
 8ad1441:	5f                   	pop    %edi
 8ad1442:	5d                   	pop    %ebp
 8ad1443:	c3                   	ret
 8ad1444:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad1448:	8b 4b 14             	mov    0x14(%ebx),%ecx
 8ad144b:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
 8ad144e:	89 f9                	mov    %edi,%ecx
 8ad1450:	2b 4d e4             	sub    -0x1c(%ebp),%ecx
 8ad1453:	c1 f9 02             	sar    $0x2,%ecx
 8ad1456:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8ad1459:	83 c1 01             	add    $0x1,%ecx
 8ad145c:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 8ad145f:	8b 4d e0             	mov    -0x20(%ebp),%ecx
 8ad1462:	83 c1 02             	add    $0x2,%ecx
 8ad1465:	89 4d e0             	mov    %ecx,-0x20(%ebp)
 8ad1468:	01 c9                	add    %ecx,%ecx
 8ad146a:	39 c8                	cmp    %ecx,%eax
 8ad146c:	76 3a                	jbe    8ad14a8 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EE16_M_push_back_auxIIRKS1_EEEvDpOT_+0xf8>
 8ad146e:	2b 45 e0             	sub    -0x20(%ebp),%eax
 8ad1471:	d1 e8                	shr    $1,%eax
 8ad1473:	8d 14 82             	lea    (%edx,%eax,4),%edx
 8ad1476:	39 55 e4             	cmp    %edx,-0x1c(%ebp)
 8ad1479:	0f 86 d1 00 00 00    	jbe    8ad1550 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EE16_M_push_back_auxIIRKS1_EEEvDpOT_+0x1a0>
 8ad147f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8ad1482:	83 c7 04             	add    $0x4,%edi
 8ad1485:	2b 7d e4             	sub    -0x1c(%ebp),%edi
 8ad1488:	89 14 24             	mov    %edx,(%esp)
 8ad148b:	89 55 d8             	mov    %edx,-0x28(%ebp)
 8ad148e:	83 e7 fc             	and    $0xfffffffc,%edi
 8ad1491:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8ad1495:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad1499:	e8 e2 c3 5a ff       	call   807d880 <memmove@plt>
 8ad149e:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8ad14a1:	eb 67                	jmp    8ad150a <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EE16_M_push_back_auxIIRKS1_EEEvDpOT_+0x15a>
 8ad14a3:	90                   	nop
 8ad14a4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad14a8:	85 c0                	test   %eax,%eax
 8ad14aa:	bf 03 00 00 00       	mov    $0x3,%edi
 8ad14af:	0f 85 83 00 00 00    	jne    8ad1538 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EE16_M_push_back_auxIIRKS1_EEEvDpOT_+0x188>
 8ad14b5:	8d 04 bd 00 00 00 00 	lea    0x0(,%edi,4),%eax
 8ad14bc:	89 04 24             	mov    %eax,(%esp)
 8ad14bf:	e8 8c 2f c5 ff       	call   8724450 <_Znwj>
 8ad14c4:	89 c1                	mov    %eax,%ecx
 8ad14c6:	89 f8                	mov    %edi,%eax
 8ad14c8:	2b 45 e0             	sub    -0x20(%ebp),%eax
 8ad14cb:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8ad14ce:	d1 e8                	shr    $1,%eax
 8ad14d0:	8d 14 81             	lea    (%ecx,%eax,4),%edx
 8ad14d3:	8b 43 24             	mov    0x24(%ebx),%eax
 8ad14d6:	89 55 d8             	mov    %edx,-0x28(%ebp)
 8ad14d9:	83 c0 04             	add    $0x4,%eax
 8ad14dc:	2b 43 14             	sub    0x14(%ebx),%eax
 8ad14df:	83 e0 fc             	and    $0xfffffffc,%eax
 8ad14e2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8ad14e6:	8b 43 14             	mov    0x14(%ebx),%eax
 8ad14e9:	89 14 24             	mov    %edx,(%esp)
 8ad14ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 8ad14f0:	e8 8b c3 5a ff       	call   807d880 <memmove@plt>
 8ad14f5:	8b 03                	mov    (%ebx),%eax
 8ad14f7:	89 04 24             	mov    %eax,(%esp)
 8ad14fa:	e8 f1 2f c5 ff       	call   87244f0 <_ZdlPv>
 8ad14ff:	8b 4d d4             	mov    -0x2c(%ebp),%ecx
 8ad1502:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8ad1505:	89 7b 04             	mov    %edi,0x4(%ebx)
 8ad1508:	89 0b                	mov    %ecx,(%ebx)
 8ad150a:	8b 02                	mov    (%edx),%eax
 8ad150c:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8ad150f:	89 53 14             	mov    %edx,0x14(%ebx)
 8ad1512:	89 43 0c             	mov    %eax,0xc(%ebx)
 8ad1515:	05 f4 01 00 00       	add    $0x1f4,%eax
 8ad151a:	8d 7c 8a fc          	lea    -0x4(%edx,%ecx,4),%edi
 8ad151e:	89 43 10             	mov    %eax,0x10(%ebx)
 8ad1521:	8b 07                	mov    (%edi),%eax
 8ad1523:	89 7b 24             	mov    %edi,0x24(%ebx)
 8ad1526:	89 43 1c             	mov    %eax,0x1c(%ebx)
 8ad1529:	05 f4 01 00 00       	add    $0x1f4,%eax
 8ad152e:	89 43 20             	mov    %eax,0x20(%ebx)
 8ad1531:	e9 a5 fe ff ff       	jmp    8ad13db <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EE16_M_push_back_auxIIRKS1_EEEvDpOT_+0x2b>
 8ad1536:	66 90                	xchg   %ax,%ax
 8ad1538:	8d 7c 00 02          	lea    0x2(%eax,%eax,1),%edi
 8ad153c:	81 ff ff ff ff 3f    	cmp    $0x3fffffff,%edi
 8ad1542:	0f 86 6d ff ff ff    	jbe    8ad14b5 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EE16_M_push_back_auxIIRKS1_EEEvDpOT_+0x105>
 8ad1548:	e8 a3 7e c0 ff       	call   86d93f0 <_ZSt17__throw_bad_allocv>
 8ad154d:	8d 76 00             	lea    0x0(%esi),%esi
 8ad1550:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8ad1553:	83 c7 04             	add    $0x4,%edi
 8ad1556:	2b 7d e4             	sub    -0x1c(%ebp),%edi
 8ad1559:	89 55 d8             	mov    %edx,-0x28(%ebp)
 8ad155c:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ad1560:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 8ad1563:	83 e7 fc             	and    $0xfffffffc,%edi
 8ad1566:	89 7c 24 08          	mov    %edi,0x8(%esp)
 8ad156a:	8d 04 8a             	lea    (%edx,%ecx,4),%eax
 8ad156d:	29 f8                	sub    %edi,%eax
 8ad156f:	89 04 24             	mov    %eax,(%esp)
 8ad1572:	e8 09 c3 5a ff       	call   807d880 <memmove@plt>
 8ad1577:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8ad157a:	eb 8e                	jmp    8ad150a <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EE16_M_push_back_auxIIRKS1_EEEvDpOT_+0x15a>
 8ad157c:	89 c6                	mov    %eax,%esi
 8ad157e:	89 3c 24             	mov    %edi,(%esp)
 8ad1581:	e8 5a 66 c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8ad1586:	89 34 24             	mov    %esi,(%esp)
 8ad1589:	e8 52 47 c5 ff       	call   8725ce0 <__cxa_begin_catch>
 8ad158e:	8b 43 24             	mov    0x24(%ebx),%eax
 8ad1591:	8b 40 04             	mov    0x4(%eax),%eax
 8ad1594:	89 04 24             	mov    %eax,(%esp)
 8ad1597:	e8 54 2f c5 ff       	call   87244f0 <_ZdlPv>
 8ad159c:	e8 3f 36 c5 ff       	call   8724be0 <__cxa_rethrow>
 8ad15a1:	89 c6                	mov    %eax,%esi
 8ad15a3:	eb e1                	jmp    8ad1586 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EE16_M_push_back_auxIIRKS1_EEEvDpOT_+0x1d6>
 8ad15a5:	89 04 24             	mov    %eax,(%esp)
 8ad15a8:	e8 a3 21 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad15ad:	89 c6                	mov    %eax,%esi
 8ad15af:	e8 7c 46 c5 ff       	call   8725c30 <__cxa_end_catch>
 8ad15b4:	89 34 24             	mov    %esi,(%esp)
 8ad15b7:	e8 94 21 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad15bc:	90                   	nop
 8ad15bd:	90                   	nop
 8ad15be:	90                   	nop
 8ad15bf:	90                   	nop

08ad15c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev>:
 8ad15c0:	55                   	push   %ebp
 8ad15c1:	89 e5                	mov    %esp,%ebp
 8ad15c3:	57                   	push   %edi
 8ad15c4:	56                   	push   %esi
 8ad15c5:	53                   	push   %ebx
 8ad15c6:	83 ec 5c             	sub    $0x5c,%esp
 8ad15c9:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad15cc:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad15cf:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8ad15d2:	8b 55 08             	mov    0x8(%ebp),%edx
 8ad15d5:	8b 40 18             	mov    0x18(%eax),%eax
 8ad15d8:	8b 73 10             	mov    0x10(%ebx),%esi
 8ad15db:	8b 49 24             	mov    0x24(%ecx),%ecx
 8ad15de:	8b 52 1c             	mov    0x1c(%edx),%edx
 8ad15e1:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8ad15e4:	8b 43 14             	mov    0x14(%ebx),%eax
 8ad15e7:	89 75 c4             	mov    %esi,-0x3c(%ebp)
 8ad15ea:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8ad15ed:	89 55 c8             	mov    %edx,-0x38(%ebp)
 8ad15f0:	8b 53 08             	mov    0x8(%ebx),%edx
 8ad15f3:	89 45 cc             	mov    %eax,-0x34(%ebp)
 8ad15f6:	83 c0 04             	add    $0x4,%eax
 8ad15f9:	39 c1                	cmp    %eax,%ecx
 8ad15fb:	76 46                	jbe    8ad1643 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x83>
 8ad15fd:	89 55 c0             	mov    %edx,-0x40(%ebp)
 8ad1600:	bf f0 cc 48 09       	mov    $0x948ccf0,%edi
 8ad1605:	89 c2                	mov    %eax,%edx
 8ad1607:	90                   	nop
 8ad1608:	8b 32                	mov    (%edx),%esi
 8ad160a:	31 db                	xor    %ebx,%ebx
 8ad160c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad1610:	8b 44 1e 04          	mov    0x4(%esi,%ebx,1),%eax
 8ad1614:	83 e8 0c             	sub    $0xc,%eax
 8ad1617:	39 c7                	cmp    %eax,%edi
 8ad1619:	0f 85 b4 00 00 00    	jne    8ad16d3 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x113>
 8ad161f:	8b 04 1e             	mov    (%esi,%ebx,1),%eax
 8ad1622:	83 e8 0c             	sub    $0xc,%eax
 8ad1625:	39 c7                	cmp    %eax,%edi
 8ad1627:	0f 85 19 01 00 00    	jne    8ad1746 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x186>
 8ad162d:	83 c3 14             	add    $0x14,%ebx
 8ad1630:	81 fb f4 01 00 00    	cmp    $0x1f4,%ebx
 8ad1636:	75 d8                	jne    8ad1610 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x50>
 8ad1638:	83 c2 04             	add    $0x4,%edx
 8ad163b:	39 55 d4             	cmp    %edx,-0x2c(%ebp)
 8ad163e:	77 c8                	ja     8ad1608 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x48>
 8ad1640:	8b 55 c0             	mov    -0x40(%ebp),%edx
 8ad1643:	8b 5d cc             	mov    -0x34(%ebp),%ebx
 8ad1646:	39 5d d4             	cmp    %ebx,-0x2c(%ebp)
 8ad1649:	0f 84 c0 00 00 00    	je     8ad170f <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x14f>
 8ad164f:	3b 55 c4             	cmp    -0x3c(%ebp),%edx
 8ad1652:	74 34                	je     8ad1688 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0xc8>
 8ad1654:	89 d3                	mov    %edx,%ebx
 8ad1656:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 8ad1659:	8d 7d e4             	lea    -0x1c(%ebp),%edi
 8ad165c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad1660:	8b 43 04             	mov    0x4(%ebx),%eax
 8ad1663:	83 e8 0c             	sub    $0xc,%eax
 8ad1666:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8ad166b:	0f 85 d6 01 00 00    	jne    8ad1847 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x287>
 8ad1671:	8b 03                	mov    (%ebx),%eax
 8ad1673:	83 e8 0c             	sub    $0xc,%eax
 8ad1676:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8ad167b:	0f 85 72 01 00 00    	jne    8ad17f3 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x233>
 8ad1681:	83 c3 14             	add    $0x14,%ebx
 8ad1684:	39 da                	cmp    %ebx,%edx
 8ad1686:	75 d8                	jne    8ad1660 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0xa0>
 8ad1688:	8b 45 c8             	mov    -0x38(%ebp),%eax
 8ad168b:	39 45 d0             	cmp    %eax,-0x30(%ebp)
 8ad168e:	74 30                	je     8ad16c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x100>
 8ad1690:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8ad1693:	8d 75 e2             	lea    -0x1e(%ebp),%esi
 8ad1696:	89 c7                	mov    %eax,%edi
 8ad1698:	8b 47 04             	mov    0x4(%edi),%eax
 8ad169b:	83 e8 0c             	sub    $0xc,%eax
 8ad169e:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8ad16a3:	0f 85 17 01 00 00    	jne    8ad17c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x200>
 8ad16a9:	8b 07                	mov    (%edi),%eax
 8ad16ab:	83 e8 0c             	sub    $0xc,%eax
 8ad16ae:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8ad16b3:	0f 85 d3 00 00 00    	jne    8ad178c <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x1cc>
 8ad16b9:	83 c7 14             	add    $0x14,%edi
 8ad16bc:	39 fa                	cmp    %edi,%edx
 8ad16be:	75 d8                	jne    8ad1698 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0xd8>
 8ad16c0:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8ad16c3:	89 0c 24             	mov    %ecx,(%esp)
 8ad16c6:	e8 05 fc ff ff       	call   8ad12d0 <_ZNSt11_Deque_baseIN14CompiledDNFLex8stream_tESaIS1_EED1Ev>
 8ad16cb:	83 c4 5c             	add    $0x5c,%esp
 8ad16ce:	5b                   	pop    %ebx
 8ad16cf:	5e                   	pop    %esi
 8ad16d0:	5f                   	pop    %edi
 8ad16d1:	5d                   	pop    %ebp
 8ad16d2:	c3                   	ret
 8ad16d3:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8ad16d8:	85 c9                	test   %ecx,%ecx
 8ad16da:	0f 84 07 02 00 00    	je     8ad18e7 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x327>
 8ad16e0:	83 c9 ff             	or     $0xffffffff,%ecx
 8ad16e3:	f0 0f c1 48 08       	lock xadd %ecx,0x8(%eax)
 8ad16e8:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 8ad16eb:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 8ad16ef:	0f 8f 2a ff ff ff    	jg     8ad161f <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x5f>
 8ad16f5:	8d 4d e7             	lea    -0x19(%ebp),%ecx
 8ad16f8:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8ad16fb:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ad16ff:	89 04 24             	mov    %eax,(%esp)
 8ad1702:	e8 19 52 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad1707:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8ad170a:	e9 10 ff ff ff       	jmp    8ad161f <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x5f>
 8ad170f:	39 55 d0             	cmp    %edx,-0x30(%ebp)
 8ad1712:	bb f0 cc 48 09       	mov    $0x948ccf0,%ebx
 8ad1717:	74 a7                	je     8ad16c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x100>
 8ad1719:	8d 7d e1             	lea    -0x1f(%ebp),%edi
 8ad171c:	89 d6                	mov    %edx,%esi
 8ad171e:	8b 46 04             	mov    0x4(%esi),%eax
 8ad1721:	83 e8 0c             	sub    $0xc,%eax
 8ad1724:	39 c3                	cmp    %eax,%ebx
 8ad1726:	0f 85 4e 01 00 00    	jne    8ad187a <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x2ba>
 8ad172c:	8b 06                	mov    (%esi),%eax
 8ad172e:	83 e8 0c             	sub    $0xc,%eax
 8ad1731:	39 c3                	cmp    %eax,%ebx
 8ad1733:	0f 85 81 01 00 00    	jne    8ad18ba <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x2fa>
 8ad1739:	83 c6 14             	add    $0x14,%esi
 8ad173c:	39 75 d0             	cmp    %esi,-0x30(%ebp)
 8ad173f:	75 dd                	jne    8ad171e <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x15e>
 8ad1741:	e9 7a ff ff ff       	jmp    8ad16c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x100>
 8ad1746:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8ad174b:	85 c9                	test   %ecx,%ecx
 8ad174d:	74 2f                	je     8ad177e <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x1be>
 8ad174f:	83 c9 ff             	or     $0xffffffff,%ecx
 8ad1752:	f0 0f c1 48 08       	lock xadd %ecx,0x8(%eax)
 8ad1757:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 8ad175a:	83 7d b4 00          	cmpl   $0x0,-0x4c(%ebp)
 8ad175e:	0f 8f c9 fe ff ff    	jg     8ad162d <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x6d>
 8ad1764:	8d 4d e6             	lea    -0x1a(%ebp),%ecx
 8ad1767:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8ad176a:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ad176e:	89 04 24             	mov    %eax,(%esp)
 8ad1771:	e8 aa 51 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad1776:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8ad1779:	e9 af fe ff ff       	jmp    8ad162d <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x6d>
 8ad177e:	8b 48 08             	mov    0x8(%eax),%ecx
 8ad1781:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 8ad1784:	83 e9 01             	sub    $0x1,%ecx
 8ad1787:	89 48 08             	mov    %ecx,0x8(%eax)
 8ad178a:	eb ce                	jmp    8ad175a <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x19a>
 8ad178c:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8ad1791:	85 c9                	test   %ecx,%ecx
 8ad1793:	0f 84 8a 00 00 00    	je     8ad1823 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x263>
 8ad1799:	83 c9 ff             	or     $0xffffffff,%ecx
 8ad179c:	f0 0f c1 48 08       	lock xadd %ecx,0x8(%eax)
 8ad17a1:	85 c9                	test   %ecx,%ecx
 8ad17a3:	0f 8f 10 ff ff ff    	jg     8ad16b9 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0xf9>
 8ad17a9:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8ad17ac:	89 74 24 04          	mov    %esi,0x4(%esp)
 8ad17b0:	89 04 24             	mov    %eax,(%esp)
 8ad17b3:	e8 68 51 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad17b8:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8ad17bb:	e9 f9 fe ff ff       	jmp    8ad16b9 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0xf9>
 8ad17c0:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8ad17c5:	85 c9                	test   %ecx,%ecx
 8ad17c7:	74 68                	je     8ad1831 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x271>
 8ad17c9:	83 c9 ff             	or     $0xffffffff,%ecx
 8ad17cc:	f0 0f c1 48 08       	lock xadd %ecx,0x8(%eax)
 8ad17d1:	85 c9                	test   %ecx,%ecx
 8ad17d3:	0f 8f d0 fe ff ff    	jg     8ad16a9 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0xe9>
 8ad17d9:	8d 4d e3             	lea    -0x1d(%ebp),%ecx
 8ad17dc:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8ad17df:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ad17e3:	89 04 24             	mov    %eax,(%esp)
 8ad17e6:	e8 35 51 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad17eb:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8ad17ee:	e9 b6 fe ff ff       	jmp    8ad16a9 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0xe9>
 8ad17f3:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8ad17f8:	85 c9                	test   %ecx,%ecx
 8ad17fa:	74 40                	je     8ad183c <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x27c>
 8ad17fc:	83 c9 ff             	or     $0xffffffff,%ecx
 8ad17ff:	f0 0f c1 48 08       	lock xadd %ecx,0x8(%eax)
 8ad1804:	85 c9                	test   %ecx,%ecx
 8ad1806:	0f 8f 75 fe ff ff    	jg     8ad1681 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0xc1>
 8ad180c:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8ad180f:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8ad1813:	89 04 24             	mov    %eax,(%esp)
 8ad1816:	e8 05 51 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad181b:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8ad181e:	e9 5e fe ff ff       	jmp    8ad1681 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0xc1>
 8ad1823:	8b 48 08             	mov    0x8(%eax),%ecx
 8ad1826:	8d 59 ff             	lea    -0x1(%ecx),%ebx
 8ad1829:	89 58 08             	mov    %ebx,0x8(%eax)
 8ad182c:	e9 70 ff ff ff       	jmp    8ad17a1 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x1e1>
 8ad1831:	8b 48 08             	mov    0x8(%eax),%ecx
 8ad1834:	8d 59 ff             	lea    -0x1(%ecx),%ebx
 8ad1837:	89 58 08             	mov    %ebx,0x8(%eax)
 8ad183a:	eb 95                	jmp    8ad17d1 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x211>
 8ad183c:	8b 48 08             	mov    0x8(%eax),%ecx
 8ad183f:	8d 71 ff             	lea    -0x1(%ecx),%esi
 8ad1842:	89 70 08             	mov    %esi,0x8(%eax)
 8ad1845:	eb bd                	jmp    8ad1804 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x244>
 8ad1847:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8ad184c:	85 c9                	test   %ecx,%ecx
 8ad184e:	74 54                	je     8ad18a4 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x2e4>
 8ad1850:	83 c9 ff             	or     $0xffffffff,%ecx
 8ad1853:	f0 0f c1 48 08       	lock xadd %ecx,0x8(%eax)
 8ad1858:	85 c9                	test   %ecx,%ecx
 8ad185a:	0f 8f 11 fe ff ff    	jg     8ad1671 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0xb1>
 8ad1860:	8d 4d e5             	lea    -0x1b(%ebp),%ecx
 8ad1863:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8ad1866:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8ad186a:	89 04 24             	mov    %eax,(%esp)
 8ad186d:	e8 ae 50 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad1872:	8b 55 bc             	mov    -0x44(%ebp),%edx
 8ad1875:	e9 f7 fd ff ff       	jmp    8ad1671 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0xb1>
 8ad187a:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8ad187f:	85 d2                	test   %edx,%edx
 8ad1881:	74 2c                	je     8ad18af <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x2ef>
 8ad1883:	83 ca ff             	or     $0xffffffff,%edx
 8ad1886:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8ad188b:	85 d2                	test   %edx,%edx
 8ad188d:	0f 8f 99 fe ff ff    	jg     8ad172c <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x16c>
 8ad1893:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8ad1897:	89 04 24             	mov    %eax,(%esp)
 8ad189a:	e8 81 50 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad189f:	e9 88 fe ff ff       	jmp    8ad172c <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x16c>
 8ad18a4:	8b 48 08             	mov    0x8(%eax),%ecx
 8ad18a7:	8d 71 ff             	lea    -0x1(%ecx),%esi
 8ad18aa:	89 70 08             	mov    %esi,0x8(%eax)
 8ad18ad:	eb a9                	jmp    8ad1858 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x298>
 8ad18af:	8b 50 08             	mov    0x8(%eax),%edx
 8ad18b2:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8ad18b5:	89 48 08             	mov    %ecx,0x8(%eax)
 8ad18b8:	eb d1                	jmp    8ad188b <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x2cb>
 8ad18ba:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8ad18bf:	85 d2                	test   %edx,%edx
 8ad18c1:	74 35                	je     8ad18f8 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x338>
 8ad18c3:	83 ca ff             	or     $0xffffffff,%edx
 8ad18c6:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8ad18cb:	85 d2                	test   %edx,%edx
 8ad18cd:	0f 8f 66 fe ff ff    	jg     8ad1739 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x179>
 8ad18d3:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8ad18d6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8ad18da:	89 04 24             	mov    %eax,(%esp)
 8ad18dd:	e8 3e 50 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8ad18e2:	e9 52 fe ff ff       	jmp    8ad1739 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x179>
 8ad18e7:	8b 48 08             	mov    0x8(%eax),%ecx
 8ad18ea:	89 4d b4             	mov    %ecx,-0x4c(%ebp)
 8ad18ed:	83 e9 01             	sub    $0x1,%ecx
 8ad18f0:	89 48 08             	mov    %ecx,0x8(%eax)
 8ad18f3:	e9 f3 fd ff ff       	jmp    8ad16eb <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x12b>
 8ad18f8:	8b 50 08             	mov    0x8(%eax),%edx
 8ad18fb:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8ad18fe:	89 48 08             	mov    %ecx,0x8(%eax)
 8ad1901:	eb c8                	jmp    8ad18cb <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev+0x30b>
 8ad1903:	90                   	nop
 8ad1904:	90                   	nop
 8ad1905:	90                   	nop
 8ad1906:	90                   	nop
 8ad1907:	90                   	nop
 8ad1908:	90                   	nop
 8ad1909:	90                   	nop
 8ad190a:	90                   	nop
 8ad190b:	90                   	nop
 8ad190c:	90                   	nop
 8ad190d:	90                   	nop
 8ad190e:	90                   	nop
 8ad190f:	90                   	nop

```

```c
// CompiledDNFLex::getToken @ 0x8ad0fa0

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: DNFLEX_TOKEN getToken(CompiledDNFLex * this) */

DNFLEX_TOKEN __thiscall CompiledDNFLex::getToken(CompiledDNFLex *this)

{
  bool bVar1;
  DNFLEX_TOKEN DVar2;
  stream_t *psVar3;
  TCHAR *pTVar4;
  char *pcVar5;
  char *pcVar6;
  stream_t *psVar7;
  char *__format;
  char *local_30;
  stream_data_t local_2c;
  undefined1 *local_20 [4];
  
                    /* Unresolved local var: stream_t * stream@[???] */
  psVar7 = (this->stream_stack_).c.
           super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
           _M_impl._M_finish._M_cur;
  if (psVar7 == (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_start._M_cur) {
LAB_08ad1140:
    pcVar5 = this->offset_;
LAB_08ad0fec:
    readCharFromBuffer::lexical_block_0::charBuffer = *pcVar5;
    DVar2 = (DNFLEX_TOKEN)readCharFromBuffer::lexical_block_0::charBuffer;
    this->offset_ = pcVar5 + 1;
    this->lastToken_ = DVar2;
    if (this->allow_inclusion_ == false) {
      return DVar2;
    }
    if (DVar2 != DNF_TOK_INCLUDE) {
      return DVar2;
    }
    psVar3 = (this->stream_stack_).c.
             super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
             _M_impl._M_finish._M_cur;
    psVar7 = (stream_t *)0x0;
    if (psVar3 != (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_start._M_cur) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
      if (psVar3 == (this->stream_stack_).c.
                    super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                    ._M_impl._M_finish._M_first) {
        psVar3 = (this->stream_stack_).c.
                 super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                 ._M_impl._M_finish._M_node[-1] + 0x19;
      }
      psVar7 = psVar3 + -1;
    }
    readCharFromBuffer::lexical_block_0::charBuffer = pcVar5[1];
    DVar2 = (DNFLEX_TOKEN)readCharFromBuffer::lexical_block_0::charBuffer;
    this->offset_ = pcVar5 + 2;
    this->lastToken_ = DVar2;
    if (DVar2 != DNF_TOK_STRING) {
      pcVar5 = toMbcs(&psVar7->filename);
      pcVar6 = toMbcs(&psVar7->dir);
      sprintf(this->ERR_BUF,"%s - %s/%s, invalid inclusion.","getToken",pcVar6,pcVar5);
      LexerError(this,this->ERR_BUF);
      return DNF_TOK_ERROR;
    }
                    /* Unresolved local var: string include_path@[???]
                       Unresolved local var: stream_data_t sd@[???]
                       Unresolved local var: char * sd_buf@[???] */
    local_20[0] = &DAT_0948ccfc;
                    /* try { // try from 08ad1098 to 08ad1124 has its CatchHandler @ 08ad12b3 */
    bVar1 = getStr(this,(string *)local_20);
    if (!bVar1) {
                    /* try { // try from 08ad115e to 08ad119f has its CatchHandler @ 08ad12b3 */
      pcVar5 = toMbcs(&psVar7->filename);
      pcVar6 = toMbcs(&psVar7->dir);
      __format = "%s - %s%s, invalid inclusion.";
LAB_08ad118c:
      sprintf(this->ERR_BUF,__format,"getToken",pcVar6,pcVar5);
      LexerError(this,this->ERR_BUF);
      std::string::~string((string *)local_20);
      return DNF_TOK_ERROR;
    }
    pTVar4 = toTString((string *)local_20);
    bVar1 = LoadStream(this,"",pTVar4,&local_2c);
    if (!bVar1) {
                    /* try { // try from 08ad121b to 08ad12ad has its CatchHandler @ 08ad12b3 */
      pcVar5 = toMbcs(&psVar7->filename);
      pcVar6 = toMbcs(&psVar7->dir);
      __format = "%s - %s%s, LoadStream failed.";
      goto LAB_08ad118c;
    }
    local_30 = local_2c.buffer;
    if (local_2c.buffer == (char *)0x0) {
      local_30 = operator_new__(local_2c.size);
      std::istream::read((istream *)local_2c.stream,local_30,local_2c.size);
    }
    pTVar4 = toTString((string *)local_20);
    bVar1 = PushInputStream(this,"",pTVar4,local_30,local_2c.size);
    if (!bVar1) {
      pcVar5 = toMbcs(&psVar7->filename);
      pcVar6 = toMbcs(&psVar7->dir);
      __format = "%s - %s%s, PushInputStream failed.";
      goto LAB_08ad118c;
    }
    if (local_2c.stream != (istream *)0x0) {
      (**(code **)(*(int *)local_2c.stream + 4))(local_2c.stream);
    }
    std::string::~string((string *)local_20);
  }
  else {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    if (psVar7 == (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_finish._M_first) {
      psVar7 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_node[-1] + 0x19;
    }
    if (psVar7 == (stream_t *)0x14) goto LAB_08ad1140;
    pcVar5 = this->offset_;
    if (pcVar5 < psVar7[-1].buffer + psVar7[-1].size) goto LAB_08ad0fec;
    this->lastToken_ = DNF_TOK_EOF;
    bVar1 = PopInputStream(this,false);
    if (!bVar1) goto LAB_08ad1037;
  }
  getToken(this);
LAB_08ad1037:
                    /* Unresolved local var: stream_t * stream@[???] */
  return this->lastToken_;
}

```

---

## isEnd

```asm
// === 08ad0000 CompiledDNFLex::isEnd  [0x08ad0000-0x8ad004f] ===
 8ad0000:	55                   	push   %ebp
 8ad0001:	89 e5                	mov    %esp,%ebp
 8ad0003:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad0006:	8b 90 30 20 00 00    	mov    0x2030(%eax),%edx
 8ad000c:	3b 90 20 20 00 00    	cmp    0x2020(%eax),%edx
 8ad0012:	74 34                	je     8ad0048 <_ZN14CompiledDNFLex5isEndEv+0x48>
 8ad0014:	3b 90 34 20 00 00    	cmp    0x2034(%eax),%edx
 8ad001a:	8b 88 3c 20 00 00    	mov    0x203c(%eax),%ecx
 8ad0020:	74 16                	je     8ad0038 <_ZN14CompiledDNFLex5isEndEv+0x38>
 8ad0022:	83 ea 14             	sub    $0x14,%edx
 8ad0025:	74 21                	je     8ad0048 <_ZN14CompiledDNFLex5isEndEv+0x48>
 8ad0027:	8b 4a 0c             	mov    0xc(%edx),%ecx
 8ad002a:	03 4a 08             	add    0x8(%edx),%ecx
 8ad002d:	39 48 04             	cmp    %ecx,0x4(%eax)
 8ad0030:	5d                   	pop    %ebp
 8ad0031:	0f 93 c0             	setae  %al
 8ad0034:	c3                   	ret
 8ad0035:	8d 76 00             	lea    0x0(%esi),%esi
 8ad0038:	8b 51 fc             	mov    -0x4(%ecx),%edx
 8ad003b:	81 c2 f4 01 00 00    	add    $0x1f4,%edx
 8ad0041:	eb df                	jmp    8ad0022 <_ZN14CompiledDNFLex5isEndEv+0x22>
 8ad0043:	90                   	nop
 8ad0044:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8ad0048:	31 c0                	xor    %eax,%eax
 8ad004a:	5d                   	pop    %ebp
 8ad004b:	c3                   	ret
 8ad004c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// CompiledDNFLex::isEnd @ 0x8ad0000

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: bool isEnd(CompiledDNFLex * this) */

bool __thiscall CompiledDNFLex::isEnd(CompiledDNFLex *this)

{
  stream_t *psVar1;
  
                    /* Unresolved local var: stream_t * stream@[???] */
  psVar1 = (this->stream_stack_).c.
           super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>.
           _M_impl._M_finish._M_cur;
  if (psVar1 != (this->stream_stack_).c.
                super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                ._M_impl._M_start._M_cur) {
                    /* Unresolved local var:
                       _Deque_iterator<CompiledDNFLex::stream_t,_CompiledDNFLex::stream_t&,_CompiledDNFLex::stream_t*>
                       __tmp@[???] */
    if (psVar1 == (this->stream_stack_).c.
                  super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
                  ._M_impl._M_finish._M_first) {
      psVar1 = (this->stream_stack_).c.
               super__Deque_base<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>
               ._M_impl._M_finish._M_node[-1] + 0x19;
    }
    if (psVar1 != (stream_t *)0x14) {
      return psVar1[-1].buffer + psVar1[-1].size <= this->offset_;
    }
  }
  return false;
}

```

---

## setStringManager

```asm
// === 08ad0050 CompiledDNFLex::setStringManager  [0x08ad0050-0x8ad006f] ===
 8ad0050:	55                   	push   %ebp
 8ad0051:	89 e5                	mov    %esp,%ebp
 8ad0053:	8b 45 08             	mov    0x8(%ebp),%eax
 8ad0056:	8b 55 10             	mov    0x10(%ebp),%edx
 8ad0059:	88 50 0c             	mov    %dl,0xc(%eax)
 8ad005c:	8b 55 0c             	mov    0xc(%ebp),%edx
 8ad005f:	89 50 10             	mov    %edx,0x10(%eax)
 8ad0062:	5d                   	pop    %ebp
 8ad0063:	c3                   	ret
 8ad0064:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8ad006a:	8d bf 00 00 00 00    	lea    0x0(%edi),%edi

```

```c
// CompiledDNFLex::setStringManager @ 0x8ad0050

/* DWARF original prototype: void setStringManager(CompiledDNFLex * this, ScriptStringManager *
   pStringManager, bool allowOwner) */

void __thiscall
CompiledDNFLex::setStringManager
          (CompiledDNFLex *this,ScriptStringManager *pStringManager,bool allowOwner)

{
  this->stringManagerDelete_ = allowOwner;
  this->stringManager_ = pStringManager;
  return;
}

```

---

## ~CompiledDNFLex

```asm
// === 08ad0ed0 CompiledDNFLex::~CompiledDNFLex  [0x08ad0ed0-0x8ad0f1f] ===
 8ad0ed0:	55                   	push   %ebp
 8ad0ed1:	89 e5                	mov    %esp,%ebp
 8ad0ed3:	53                   	push   %ebx
 8ad0ed4:	83 ec 24             	sub    $0x24,%esp
 8ad0ed7:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad0eda:	c7 03 20 ed e2 08    	movl   $0x8e2ed20,(%ebx)
 8ad0ee0:	89 1c 24             	mov    %ebx,(%esp)
 8ad0ee3:	e8 a8 ff ff ff       	call   8ad0e90 <_ZN14CompiledDNFLex16CloseInputStreamEv>
 8ad0ee8:	89 1c 24             	mov    %ebx,(%esp)
 8ad0eeb:	e8 80 f4 ff ff       	call   8ad0370 <_ZN14CompiledDNFLex7destroyEv>
 8ad0ef0:	81 c3 18 20 00 00    	add    $0x2018,%ebx
 8ad0ef6:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8ad0ef9:	83 c4 24             	add    $0x24,%esp
 8ad0efc:	5b                   	pop    %ebx
 8ad0efd:	5d                   	pop    %ebp
 8ad0efe:	e9 bd 06 00 00       	jmp    8ad15c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev>
 8ad0f03:	81 c3 18 20 00 00    	add    $0x2018,%ebx
 8ad0f09:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8ad0f0c:	89 1c 24             	mov    %ebx,(%esp)
 8ad0f0f:	e8 ac 06 00 00       	call   8ad15c0 <_ZNSt5dequeIN14CompiledDNFLex8stream_tESaIS1_EED1Ev>
 8ad0f14:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8ad0f17:	89 04 24             	mov    %eax,(%esp)
 8ad0f1a:	e8 31 28 01 00       	call   8ae3750 <_Unwind_Resume>
 8ad0f1f:	90                   	nop

```

```c
// CompiledDNFLex::~CompiledDNFLex @ 0x8ad0ed0

/* DWARF original prototype: void ~CompiledDNFLex(CompiledDNFLex * this, int __in_chrg) */

void __thiscall CompiledDNFLex::~CompiledDNFLex(CompiledDNFLex *this,int __in_chrg)

{
  this->_vptr_CompiledDNFLex = (_func_int_varargs **)&PTR__CompiledDNFLex_08e2ed20;
  CloseInputStream(this);
                    /* try { // try from 08ad0eeb to 08ad0eef has its CatchHandler @ 08ad0f03 */
  destroy(this);
  std::deque<CompiledDNFLex::stream_t,_std::allocator<CompiledDNFLex::stream_t>_>::~deque
            (&(this->stream_stack_).c,__in_chrg);
  return;
}

```

---

## ~CompiledDNFLex_08ad0f20

```asm
// === 08ad0f20 CompiledDNFLex::~CompiledDNFLex  [0x08ad0f20-0x8ad0f3f] ===
 8ad0f20:	55                   	push   %ebp
 8ad0f21:	89 e5                	mov    %esp,%ebp
 8ad0f23:	53                   	push   %ebx
 8ad0f24:	83 ec 14             	sub    $0x14,%esp
 8ad0f27:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8ad0f2a:	89 1c 24             	mov    %ebx,(%esp)
 8ad0f2d:	e8 9e ff ff ff       	call   8ad0ed0 <_ZN14CompiledDNFLexD1Ev>
 8ad0f32:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8ad0f35:	83 c4 14             	add    $0x14,%esp
 8ad0f38:	5b                   	pop    %ebx
 8ad0f39:	5d                   	pop    %ebp
 8ad0f3a:	e9 b1 35 c5 ff       	jmp    87244f0 <_ZdlPv>
 8ad0f3f:	90                   	nop

```

```c
// CompiledDNFLex::~CompiledDNFLex @ 0x8ad0f20

/* DWARF original prototype: void ~CompiledDNFLex(CompiledDNFLex * this, int __in_chrg) */

void __thiscall CompiledDNFLex::~CompiledDNFLex(CompiledDNFLex *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~CompiledDNFLex(this,in_stack_ffffffe8);
  operator_delete(this);
  return;
}

```

