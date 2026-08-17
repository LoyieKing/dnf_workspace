# ScriptStringManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## ScriptStringManager

```asm
// === 08acf110 ScriptStringManager::ScriptStringManager  [0x08acf110-0x8acf15f] ===
 8acf110:	55                   	push   %ebp
 8acf111:	89 e5                	mov    %esp,%ebp
 8acf113:	8b 45 08             	mov    0x8(%ebp),%eax
 8acf116:	8d 50 14             	lea    0x14(%eax),%edx
 8acf119:	c7 00 70 ec e2 08    	movl   $0x8e2ec70,(%eax)
 8acf11f:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 8acf126:	c7 40 08 00 00 00 00 	movl   $0x0,0x8(%eax)
 8acf12d:	c7 40 0c 00 00 00 00 	movl   $0x0,0xc(%eax)
 8acf134:	c7 40 24 00 00 00 00 	movl   $0x0,0x24(%eax)
 8acf13b:	c7 40 14 00 00 00 00 	movl   $0x0,0x14(%eax)
 8acf142:	c7 40 18 00 00 00 00 	movl   $0x0,0x18(%eax)
 8acf149:	89 50 1c             	mov    %edx,0x1c(%eax)
 8acf14c:	89 50 20             	mov    %edx,0x20(%eax)
 8acf14f:	5d                   	pop    %ebp
 8acf150:	c3                   	ret
 8acf151:	90                   	nop
 8acf152:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8acf159:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// ScriptStringManager::ScriptStringManager @ 0x8acf110

/* DWARF original prototype: void ScriptStringManager(ScriptStringManager * this) */

void __thiscall ScriptStringManager::ScriptStringManager(ScriptStringManager *this)

{
  _Rb_tree_node_base *p_Var1;
  
  p_Var1 = &(this->string_map_)._M_t._M_impl._M_header;
  this->_vptr_ScriptStringManager = (_func_int_varargs **)&PTR__ScriptStringManager_08e2ec70;
  (this->strings_).
  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  ._M_impl._M_start = (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)0x0;
  (this->strings_).
  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  ._M_impl._M_finish = (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)0x0;
  (this->strings_).
  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  ._M_impl._M_end_of_storage =
       (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)0x0;
  (this->string_map_)._M_t._M_impl._M_node_count = 0;
  (this->string_map_)._M_t._M_impl._M_header._M_color = _S_red;
  (this->string_map_)._M_t._M_impl._M_header._M_parent = (_Base_ptr)0x0;
  (this->string_map_)._M_t._M_impl._M_header._M_left = p_Var1;
  (this->string_map_)._M_t._M_impl._M_header._M_right = p_Var1;
  return;
}

```

---

## clear

```asm
// === 08acf550 ScriptStringManager::clear  [0x08acf550-0x8acf5ef] ===
 8acf550:	55                   	push   %ebp
 8acf551:	89 e5                	mov    %esp,%ebp
 8acf553:	57                   	push   %edi
 8acf554:	56                   	push   %esi
 8acf555:	53                   	push   %ebx
 8acf556:	83 ec 4c             	sub    $0x4c,%esp
 8acf559:	8b 7d 08             	mov    0x8(%ebp),%edi
 8acf55c:	8b 57 04             	mov    0x4(%edi),%edx
 8acf55f:	8b 77 08             	mov    0x8(%edi),%esi
 8acf562:	39 f2                	cmp    %esi,%edx
 8acf564:	74 15                	je     8acf57b <_ZN19ScriptStringManager5clearEv+0x2b>
 8acf566:	89 d3                	mov    %edx,%ebx
 8acf568:	8b 03                	mov    (%ebx),%eax
 8acf56a:	83 e8 0c             	sub    $0xc,%eax
 8acf56d:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8acf572:	75 3b                	jne    8acf5af <_ZN19ScriptStringManager5clearEv+0x5f>
 8acf574:	83 c3 04             	add    $0x4,%ebx
 8acf577:	39 de                	cmp    %ebx,%esi
 8acf579:	75 ed                	jne    8acf568 <_ZN19ScriptStringManager5clearEv+0x18>
 8acf57b:	8b 47 18             	mov    0x18(%edi),%eax
 8acf57e:	89 57 08             	mov    %edx,0x8(%edi)
 8acf581:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acf585:	8d 47 10             	lea    0x10(%edi),%eax
 8acf588:	89 04 24             	mov    %eax,(%esp)
 8acf58b:	e8 bc d8 6a ff       	call   817ce4c <_ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E>
 8acf590:	8d 47 14             	lea    0x14(%edi),%eax
 8acf593:	89 47 1c             	mov    %eax,0x1c(%edi)
 8acf596:	c7 47 18 00 00 00 00 	movl   $0x0,0x18(%edi)
 8acf59d:	89 47 20             	mov    %eax,0x20(%edi)
 8acf5a0:	c7 47 24 00 00 00 00 	movl   $0x0,0x24(%edi)
 8acf5a7:	83 c4 4c             	add    $0x4c,%esp
 8acf5aa:	5b                   	pop    %ebx
 8acf5ab:	5e                   	pop    %esi
 8acf5ac:	5f                   	pop    %edi
 8acf5ad:	5d                   	pop    %ebp
 8acf5ae:	c3                   	ret
 8acf5af:	b9 60 e5 07 08       	mov    $0x807e560,%ecx
 8acf5b4:	85 c9                	test   %ecx,%ecx
 8acf5b6:	74 28                	je     8acf5e0 <_ZN19ScriptStringManager5clearEv+0x90>
 8acf5b8:	83 c9 ff             	or     $0xffffffff,%ecx
 8acf5bb:	f0 0f c1 48 08       	lock xadd %ecx,0x8(%eax)
 8acf5c0:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 8acf5c3:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 8acf5c7:	7f ab                	jg     8acf574 <_ZN19ScriptStringManager5clearEv+0x24>
 8acf5c9:	8d 4d e7             	lea    -0x19(%ebp),%ecx
 8acf5cc:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8acf5cf:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8acf5d3:	89 04 24             	mov    %eax,(%esp)
 8acf5d6:	e8 45 73 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acf5db:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8acf5de:	eb 94                	jmp    8acf574 <_ZN19ScriptStringManager5clearEv+0x24>
 8acf5e0:	8b 48 08             	mov    0x8(%eax),%ecx
 8acf5e3:	89 4d c4             	mov    %ecx,-0x3c(%ebp)
 8acf5e6:	83 e9 01             	sub    $0x1,%ecx
 8acf5e9:	89 48 08             	mov    %ecx,0x8(%eax)
 8acf5ec:	eb d5                	jmp    8acf5c3 <_ZN19ScriptStringManager5clearEv+0x73>
 8acf5ee:	66 90                	xchg   %ax,%ax

```

```c
// ScriptStringManager::clear @ 0x8acf550

/* WARNING: Removing unreachable block (ram,0x08acf5e0) */
/* DWARF original prototype: void clear(ScriptStringManager * this) */

void __thiscall ScriptStringManager::clear(ScriptStringManager *this)

{
  _Rb_tree_node_base *p_Var1;
  int *piVar2;
  int iVar3;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar4;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar5;
  char *pcVar6;
  _Base_ptr p_Var7;
  allocator *paVar8;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar9;
  
  pbVar5 = (this->strings_).
           super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
           ._M_impl._M_finish;
  pbVar4 = (this->strings_).
           super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
           ._M_impl._M_start;
  for (pbVar9 = pbVar4; pbVar9 != pbVar5; pbVar9 = pbVar9 + 1) {
    pcVar6 = (pbVar9->_M_dataplus)._M_p;
    paVar8 = (allocator *)(pcVar6 + -0xc);
    if (paVar8 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      LOCK();
      piVar2 = (int *)(pcVar6 + -4);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (iVar3 < 1) {
        std::string::_Rep::_M_destroy(paVar8);
      }
    }
  }
  p_Var7 = (this->string_map_)._M_t._M_impl._M_header._M_parent;
  (this->strings_).
  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
  ._M_impl._M_finish = pbVar4;
  std::
  _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              *)&this->string_map_,(_Rb_tree_node *)p_Var7);
  p_Var1 = &(this->string_map_)._M_t._M_impl._M_header;
  (this->string_map_)._M_t._M_impl._M_header._M_left = p_Var1;
  (this->string_map_)._M_t._M_impl._M_header._M_parent = (_Base_ptr)0x0;
  (this->string_map_)._M_t._M_impl._M_header._M_right = p_Var1;
  (this->string_map_)._M_t._M_impl._M_node_count = 0;
  return;
}

```

---

## exportToBuffer

```asm
// === 08acf420 ScriptStringManager::exportToBuffer  [0x08acf420-0x8acf54f] ===
 8acf420:	55                   	push   %ebp
 8acf421:	89 e5                	mov    %esp,%ebp
 8acf423:	57                   	push   %edi
 8acf424:	56                   	push   %esi
 8acf425:	53                   	push   %ebx
 8acf426:	83 ec 2c             	sub    $0x2c,%esp
 8acf429:	8b 75 08             	mov    0x8(%ebp),%esi
 8acf42c:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8acf42f:	8b 46 08             	mov    0x8(%esi),%eax
 8acf432:	8b 56 04             	mov    0x4(%esi),%edx
 8acf435:	29 d0                	sub    %edx,%eax
 8acf437:	c1 f8 02             	sar    $0x2,%eax
 8acf43a:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8acf43d:	89 03                	mov    %eax,(%ebx)
 8acf43f:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8acf444:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 8acf448:	0f 8e e4 00 00 00    	jle    8acf532 <_ZNK19ScriptStringManager14exportToBufferEPhi+0x112>
 8acf44e:	8b 46 08             	mov    0x8(%esi),%eax
 8acf451:	8d 7b 04             	lea    0x4(%ebx),%edi
 8acf454:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 8acf457:	2b 46 04             	sub    0x4(%esi),%eax
 8acf45a:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8acf45d:	c7 45 dc 08 00 00 00 	movl   $0x8,-0x24(%ebp)
 8acf464:	c1 f8 02             	sar    $0x2,%eax
 8acf467:	85 c9                	test   %ecx,%ecx
 8acf469:	8d 14 85 04 00 00 00 	lea    0x4(,%eax,4),%edx
 8acf470:	7e 43                	jle    8acf4b5 <_ZNK19ScriptStringManager14exportToBufferEPhi+0x95>
 8acf472:	89 53 04             	mov    %edx,0x4(%ebx)
 8acf475:	31 c9                	xor    %ecx,%ecx
 8acf477:	b8 08 00 00 00       	mov    $0x8,%eax
 8acf47c:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 8acf480:	7f 15                	jg     8acf497 <_ZNK19ScriptStringManager14exportToBufferEPhi+0x77>
 8acf482:	e9 a6 00 00 00       	jmp    8acf52d <_ZNK19ScriptStringManager14exportToBufferEPhi+0x10d>
 8acf487:	90                   	nop
 8acf488:	89 14 03             	mov    %edx,(%ebx,%eax,1)
 8acf48b:	83 c0 04             	add    $0x4,%eax
 8acf48e:	39 45 10             	cmp    %eax,0x10(%ebp)
 8acf491:	0f 8c 96 00 00 00    	jl     8acf52d <_ZNK19ScriptStringManager14exportToBufferEPhi+0x10d>
 8acf497:	8d 3c 03             	lea    (%ebx,%eax,1),%edi
 8acf49a:	83 c1 01             	add    $0x1,%ecx
 8acf49d:	89 7d e0             	mov    %edi,-0x20(%ebp)
 8acf4a0:	8b 7e 04             	mov    0x4(%esi),%edi
 8acf4a3:	8b 7c 07 f8          	mov    -0x8(%edi,%eax,1),%edi
 8acf4a7:	03 57 f4             	add    -0xc(%edi),%edx
 8acf4aa:	3b 4d e4             	cmp    -0x1c(%ebp),%ecx
 8acf4ad:	7c d9                	jl     8acf488 <_ZNK19ScriptStringManager14exportToBufferEPhi+0x68>
 8acf4af:	83 c0 04             	add    $0x4,%eax
 8acf4b2:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8acf4b5:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8acf4b8:	89 10                	mov    %edx,(%eax)
 8acf4ba:	8b 55 dc             	mov    -0x24(%ebp),%edx
 8acf4bd:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8acf4c2:	39 55 10             	cmp    %edx,0x10(%ebp)
 8acf4c5:	7c 6b                	jl     8acf532 <_ZNK19ScriptStringManager14exportToBufferEPhi+0x112>
 8acf4c7:	8b 4e 04             	mov    0x4(%esi),%ecx
 8acf4ca:	8b 46 08             	mov    0x8(%esi),%eax
 8acf4cd:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8acf4d0:	29 c8                	sub    %ecx,%eax
 8acf4d2:	83 c2 04             	add    $0x4,%edx
 8acf4d5:	83 f8 03             	cmp    $0x3,%eax
 8acf4d8:	7e 6b                	jle    8acf545 <_ZNK19ScriptStringManager14exportToBufferEPhi+0x125>
 8acf4da:	89 75 e4             	mov    %esi,-0x1c(%ebp)
 8acf4dd:	31 ff                	xor    %edi,%edi
 8acf4df:	89 d6                	mov    %edx,%esi
 8acf4e1:	89 5d e0             	mov    %ebx,-0x20(%ebp)
 8acf4e4:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8acf4e7:	eb 1b                	jmp    8acf504 <_ZNK19ScriptStringManager14exportToBufferEPhi+0xe4>
 8acf4e9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8acf4f0:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8acf4f3:	01 c6                	add    %eax,%esi
 8acf4f5:	83 c7 01             	add    $0x1,%edi
 8acf4f8:	8b 42 08             	mov    0x8(%edx),%eax
 8acf4fb:	29 c8                	sub    %ecx,%eax
 8acf4fd:	c1 f8 02             	sar    $0x2,%eax
 8acf500:	39 c7                	cmp    %eax,%edi
 8acf502:	7d 3c                	jge    8acf540 <_ZNK19ScriptStringManager14exportToBufferEPhi+0x120>
 8acf504:	8b 04 b9             	mov    (%ecx,%edi,4),%eax
 8acf507:	8b 48 f4             	mov    -0xc(%eax),%ecx
 8acf50a:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acf50e:	89 34 24             	mov    %esi,(%esp)
 8acf511:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8acf515:	e8 86 e3 5a ff       	call   807d8a0 <memcpy@plt>
 8acf51a:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8acf51d:	8b 48 04             	mov    0x4(%eax),%ecx
 8acf520:	8b 04 b9             	mov    (%ecx,%edi,4),%eax
 8acf523:	8b 40 f4             	mov    -0xc(%eax),%eax
 8acf526:	01 c3                	add    %eax,%ebx
 8acf528:	39 5d 10             	cmp    %ebx,0x10(%ebp)
 8acf52b:	7d c3                	jge    8acf4f0 <_ZNK19ScriptStringManager14exportToBufferEPhi+0xd0>
 8acf52d:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 8acf532:	83 c4 2c             	add    $0x2c,%esp
 8acf535:	5b                   	pop    %ebx
 8acf536:	5e                   	pop    %esi
 8acf537:	5f                   	pop    %edi
 8acf538:	5d                   	pop    %ebp
 8acf539:	c3                   	ret
 8acf53a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
 8acf540:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8acf543:	89 f2                	mov    %esi,%edx
 8acf545:	89 d0                	mov    %edx,%eax
 8acf547:	29 d8                	sub    %ebx,%eax
 8acf549:	eb e7                	jmp    8acf532 <_ZNK19ScriptStringManager14exportToBufferEPhi+0x112>
 8acf54b:	90                   	nop
 8acf54c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// ScriptStringManager::exportToBuffer @ 0x8acf420

/* DWARF original prototype: int exportToBuffer(ScriptStringManager * this, uchar * buffer, int
   buffSize) */

int __thiscall
ScriptStringManager::exportToBuffer(ScriptStringManager *this,uchar *buffer,int buffSize)

{
  char *__src;
  int iVar1;
  int iVar2;
  int iVar3;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar4;
  int local_28;
  int *local_24;
  
                    /* Unresolved local var: int write_size@[???]
                       Unresolved local var: uchar * ptr@[???]
                       Unresolved local var: uint string_count@[???]
                       Unresolved local var: uint offset@[???] */
  iVar1 = (int)(this->strings_).
               super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
               ._M_impl._M_finish -
          (int)(this->strings_).
               super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
               ._M_impl._M_start >> 2;
  *(int *)buffer = iVar1;
  iVar2 = -1;
  if (3 < buffSize) {
    local_24 = (int *)(buffer + 4);
                    /* Unresolved local var: int i@[???] */
    local_28 = 8;
    iVar2 = ((int)(this->strings_).
                  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                  ._M_impl._M_finish -
             (int)(this->strings_).
                  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                  ._M_impl._M_start >> 2) * 4 + 4;
    if (iVar1 < 1) {
LAB_08acf4b5:
      *local_24 = iVar2;
      iVar2 = -1;
      if (local_28 <= buffSize) {
                    /* Unresolved local var: int i@[???] */
        pbVar4 = (this->strings_).
                 super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                 ._M_impl._M_start;
        local_24 = local_24 + 1;
        if (3 < (int)(this->strings_).
                     super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                     ._M_impl._M_finish - (int)pbVar4) {
          iVar1 = 0;
          do {
            __src = pbVar4[iVar1]._M_dataplus._M_p;
            memcpy(local_24,__src,*(size_t *)(__src + -0xc));
            pbVar4 = (this->strings_).
                     super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                     ._M_impl._M_start;
            iVar2 = *(int *)(pbVar4[iVar1]._M_dataplus._M_p + -0xc);
            local_28 = local_28 + iVar2;
            if (buffSize < local_28) goto LAB_08acf52d;
            local_24 = (int *)((int)local_24 + iVar2);
            iVar1 = iVar1 + 1;
          } while (iVar1 < (int)(this->strings_).
                                super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                                ._M_impl._M_finish - (int)pbVar4 >> 2);
        }
        iVar2 = (int)local_24 - (int)buffer;
      }
    }
    else {
      *(int *)(buffer + 4) = iVar2;
      iVar3 = 0;
      local_28 = 8;
      if (7 < buffSize) {
        do {
          local_24 = (int *)(buffer + local_28);
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + *(int *)(*(int *)((int)&(this->strings_).
                                                  super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                                                  ._M_impl._M_start[-2]._M_dataplus._M_p + local_28)
                                  + -0xc);
          if (iVar1 <= iVar3) {
            local_28 = local_28 + 4;
            goto LAB_08acf4b5;
          }
          *(int *)(buffer + local_28) = iVar2;
          local_28 = local_28 + 4;
        } while (local_28 <= buffSize);
      }
LAB_08acf52d:
      iVar2 = -1;
    }
  }
  return iVar2;
}

```

---

## exportToFile

```asm
// === 08acf2a0 ScriptStringManager::exportToFile  [0x08acf2a0-0x8acf41f] ===
 8acf2a0:	55                   	push   %ebp
 8acf2a1:	89 e5                	mov    %esp,%ebp
 8acf2a3:	57                   	push   %edi
 8acf2a4:	56                   	push   %esi
 8acf2a5:	53                   	push   %ebx
 8acf2a6:	83 ec 3c             	sub    $0x3c,%esp
 8acf2a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 8acf2ac:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acf2af:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8acf2b6:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8acf2bd:	c7 44 24 04 5b 16 d0 	movl   $0x8d0165b,0x4(%esp)
 8acf2c4:	08 
 8acf2c5:	89 04 24             	mov    %eax,(%esp)
 8acf2c8:	e8 a3 f4 5a ff       	call   807e770 <fopen@plt>
 8acf2cd:	89 c6                	mov    %eax,%esi
 8acf2cf:	31 c0                	xor    %eax,%eax
 8acf2d1:	85 f6                	test   %esi,%esi
 8acf2d3:	74 3a                	je     8acf30f <_ZNK19ScriptStringManager12exportToFileEPKc+0x6f>
 8acf2d5:	8b 43 08             	mov    0x8(%ebx),%eax
 8acf2d8:	2b 43 04             	sub    0x4(%ebx),%eax
 8acf2db:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8acf2df:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8acf2e6:	00 
 8acf2e7:	c1 f8 02             	sar    $0x2,%eax
 8acf2ea:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8acf2ed:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8acf2f0:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8acf2f7:	00 
 8acf2f8:	89 04 24             	mov    %eax,(%esp)
 8acf2fb:	e8 20 f0 5a ff       	call   807e320 <fwrite@plt>
 8acf300:	83 f8 01             	cmp    $0x1,%eax
 8acf303:	74 13                	je     8acf318 <_ZNK19ScriptStringManager12exportToFileEPKc+0x78>
 8acf305:	89 34 24             	mov    %esi,(%esp)
 8acf308:	e8 93 eb 5a ff       	call   807dea0 <fclose@plt>
 8acf30d:	31 c0                	xor    %eax,%eax
 8acf30f:	83 c4 3c             	add    $0x3c,%esp
 8acf312:	5b                   	pop    %ebx
 8acf313:	5e                   	pop    %esi
 8acf314:	5f                   	pop    %edi
 8acf315:	5d                   	pop    %ebp
 8acf316:	c3                   	ret
 8acf317:	90                   	nop
 8acf318:	8b 43 08             	mov    0x8(%ebx),%eax
 8acf31b:	2b 43 04             	sub    0x4(%ebx),%eax
 8acf31e:	c1 f8 02             	sar    $0x2,%eax
 8acf321:	8d 14 85 04 00 00 00 	lea    0x4(,%eax,4),%edx
 8acf328:	85 c0                	test   %eax,%eax
 8acf32a:	89 55 e0             	mov    %edx,-0x20(%ebp)
 8acf32d:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8acf330:	89 55 d4             	mov    %edx,-0x2c(%ebp)
 8acf333:	7e 42                	jle    8acf377 <_ZNK19ScriptStringManager12exportToFileEPKc+0xd7>
 8acf335:	31 ff                	xor    %edi,%edi
 8acf337:	90                   	nop
 8acf338:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 8acf33b:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8acf33f:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8acf346:	00 
 8acf347:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8acf34e:	00 
 8acf34f:	89 14 24             	mov    %edx,(%esp)
 8acf352:	e8 c9 ef 5a ff       	call   807e320 <fwrite@plt>
 8acf357:	83 f8 01             	cmp    $0x1,%eax
 8acf35a:	75 a9                	jne    8acf305 <_ZNK19ScriptStringManager12exportToFileEPKc+0x65>
 8acf35c:	8b 53 04             	mov    0x4(%ebx),%edx
 8acf35f:	8b 04 ba             	mov    (%edx,%edi,4),%eax
 8acf362:	83 c7 01             	add    $0x1,%edi
 8acf365:	8b 40 f4             	mov    -0xc(%eax),%eax
 8acf368:	01 45 e0             	add    %eax,-0x20(%ebp)
 8acf36b:	8b 43 08             	mov    0x8(%ebx),%eax
 8acf36e:	29 d0                	sub    %edx,%eax
 8acf370:	c1 f8 02             	sar    $0x2,%eax
 8acf373:	39 c7                	cmp    %eax,%edi
 8acf375:	7c c1                	jl     8acf338 <_ZNK19ScriptStringManager12exportToFileEPKc+0x98>
 8acf377:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8acf37a:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8acf37e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8acf385:	00 
 8acf386:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8acf38d:	00 
 8acf38e:	89 04 24             	mov    %eax,(%esp)
 8acf391:	e8 8a ef 5a ff       	call   807e320 <fwrite@plt>
 8acf396:	83 f8 01             	cmp    $0x1,%eax
 8acf399:	0f 85 66 ff ff ff    	jne    8acf305 <_ZNK19ScriptStringManager12exportToFileEPKc+0x65>
 8acf39f:	8b 4b 08             	mov    0x8(%ebx),%ecx
 8acf3a2:	8b 43 04             	mov    0x4(%ebx),%eax
 8acf3a5:	89 ca                	mov    %ecx,%edx
 8acf3a7:	29 c2                	sub    %eax,%edx
 8acf3a9:	83 fa 03             	cmp    $0x3,%edx
 8acf3ac:	7e 4d                	jle    8acf3fb <_ZNK19ScriptStringManager12exportToFileEPKc+0x15b>
 8acf3ae:	89 75 d4             	mov    %esi,-0x2c(%ebp)
 8acf3b1:	31 ff                	xor    %edi,%edi
 8acf3b3:	89 ce                	mov    %ecx,%esi
 8acf3b5:	eb 0f                	jmp    8acf3c6 <_ZNK19ScriptStringManager12exportToFileEPKc+0x126>
 8acf3b7:	90                   	nop
 8acf3b8:	89 f2                	mov    %esi,%edx
 8acf3ba:	83 c7 01             	add    $0x1,%edi
 8acf3bd:	29 c2                	sub    %eax,%edx
 8acf3bf:	c1 fa 02             	sar    $0x2,%edx
 8acf3c2:	39 d7                	cmp    %edx,%edi
 8acf3c4:	7d 32                	jge    8acf3f8 <_ZNK19ScriptStringManager12exportToFileEPKc+0x158>
 8acf3c6:	8b 14 b8             	mov    (%eax,%edi,4),%edx
 8acf3c9:	8b 4a f4             	mov    -0xc(%edx),%ecx
 8acf3cc:	85 c9                	test   %ecx,%ecx
 8acf3ce:	74 e8                	je     8acf3b8 <_ZNK19ScriptStringManager12exportToFileEPKc+0x118>
 8acf3d0:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8acf3d3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8acf3da:	00 
 8acf3db:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8acf3df:	89 14 24             	mov    %edx,(%esp)
 8acf3e2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8acf3e6:	e8 35 ef 5a ff       	call   807e320 <fwrite@plt>
 8acf3eb:	83 f8 01             	cmp    $0x1,%eax
 8acf3ee:	75 1d                	jne    8acf40d <_ZNK19ScriptStringManager12exportToFileEPKc+0x16d>
 8acf3f0:	8b 43 04             	mov    0x4(%ebx),%eax
 8acf3f3:	8b 73 08             	mov    0x8(%ebx),%esi
 8acf3f6:	eb c0                	jmp    8acf3b8 <_ZNK19ScriptStringManager12exportToFileEPKc+0x118>
 8acf3f8:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8acf3fb:	89 34 24             	mov    %esi,(%esp)
 8acf3fe:	e8 9d ea 5a ff       	call   807dea0 <fclose@plt>
 8acf403:	b8 01 00 00 00       	mov    $0x1,%eax
 8acf408:	e9 02 ff ff ff       	jmp    8acf30f <_ZNK19ScriptStringManager12exportToFileEPKc+0x6f>
 8acf40d:	8b 75 d4             	mov    -0x2c(%ebp),%esi
 8acf410:	e9 f0 fe ff ff       	jmp    8acf305 <_ZNK19ScriptStringManager12exportToFileEPKc+0x65>
 8acf415:	90                   	nop
 8acf416:	8d 76 00             	lea    0x0(%esi),%esi
 8acf419:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// ScriptStringManager::exportToFile @ 0x8acf2a0

/* WARNING: Type propagation algorithm not settling */
/* DWARF original prototype: bool exportToFile(ScriptStringManager * this, TCHAR * fileName) */

bool __thiscall ScriptStringManager::exportToFile(ScriptStringManager *this,TCHAR *fileName)

{
  char *__ptr;
  FILE *__s;
  size_t sVar1;
  int iVar2;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar3;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar4;
  int local_24;
  int local_20 [4];
  
                    /* Unresolved local var: uint count@[???]
                       Unresolved local var: uint offset@[???]
                       Unresolved local var: FILE * file@[???] */
  local_20[0] = 0;
  local_24 = 0;
  __s = fopen(fileName,"wb");
  if (__s != (FILE *)0x0) {
    local_20[0] = (int)(this->strings_).
                       super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       ._M_impl._M_finish -
                  (int)(this->strings_).
                       super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       ._M_impl._M_start >> 2;
    sVar1 = fwrite(local_20,4,1,__s);
    if (sVar1 == 1) {
      iVar2 = (int)(this->strings_).
                   super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                   ._M_impl._M_finish -
              (int)(this->strings_).
                   super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                   ._M_impl._M_start >> 2;
      local_24 = iVar2 * 4 + 4;
                    /* Unresolved local var: int i@[???] */
      if (0 < iVar2) {
        iVar2 = 0;
        do {
          sVar1 = fwrite(&local_24,4,1,__s);
          if (sVar1 != 1) goto LAB_08acf305;
          pbVar4 = (this->strings_).
                   super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                   ._M_impl._M_start;
          pbVar3 = pbVar4 + iVar2;
          iVar2 = iVar2 + 1;
          local_24 = local_24 + *(int *)((pbVar3->_M_dataplus)._M_p + -0xc);
        } while (iVar2 < (int)(this->strings_).
                              super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                              ._M_impl._M_finish - (int)pbVar4 >> 2);
      }
      sVar1 = fwrite(&local_24,4,1,__s);
      if (sVar1 == 1) {
                    /* Unresolved local var: int i@[???] */
        pbVar4 = (this->strings_).
                 super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                 ._M_impl._M_finish;
        pbVar3 = (this->strings_).
                 super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                 ._M_impl._M_start;
        if (3 < (int)pbVar4 - (int)pbVar3) {
          iVar2 = 0;
          do {
            __ptr = pbVar3[iVar2]._M_dataplus._M_p;
            sVar1 = *(size_t *)(__ptr + -0xc);
            if (sVar1 != 0) {
              sVar1 = fwrite(__ptr,sVar1,1,__s);
              if (sVar1 != 1) goto LAB_08acf305;
              pbVar3 = (this->strings_).
                       super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       ._M_impl._M_start;
              pbVar4 = (this->strings_).
                       super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       ._M_impl._M_finish;
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)pbVar4 - (int)pbVar3 >> 2);
        }
        fclose(__s);
        return true;
      }
    }
LAB_08acf305:
    fclose(__s);
  }
  return false;
}

```

---

## getString

```asm
// === 08acf160 ScriptStringManager::getString  [0x08acf160-0x8acf1ef] ===
 8acf160:	55                   	push   %ebp
 8acf161:	89 e5                	mov    %esp,%ebp
 8acf163:	83 ec 28             	sub    $0x28,%esp
 8acf166:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8acf169:	8b 5d 10             	mov    0x10(%ebp),%ebx
 8acf16c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8acf16f:	8b 75 0c             	mov    0xc(%ebp),%esi
 8acf172:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8acf175:	8b 7d 08             	mov    0x8(%ebp),%edi
 8acf178:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8acf17f:	00 
 8acf180:	8b 03                	mov    (%ebx),%eax
 8acf182:	8b 40 f4             	mov    -0xc(%eax),%eax
 8acf185:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8acf18c:	00 
 8acf18d:	89 1c 24             	mov    %ebx,(%esp)
 8acf190:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acf194:	e8 d7 91 c3 ff       	call   8708370 <_ZNSs9_M_mutateEjjj>
 8acf199:	85 f6                	test   %esi,%esi
 8acf19b:	78 2b                	js     8acf1c8 <_ZNK19ScriptStringManager9getStringEiPSs+0x68>
 8acf19d:	8b 47 04             	mov    0x4(%edi),%eax
 8acf1a0:	8d 04 b0             	lea    (%eax,%esi,4),%eax
 8acf1a3:	89 1c 24             	mov    %ebx,(%esp)
 8acf1a6:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acf1aa:	e8 81 8a c3 ff       	call   8707c30 <_ZNSs6assignERKSs>
 8acf1af:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8acf1b2:	b8 01 00 00 00       	mov    $0x1,%eax
 8acf1b7:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8acf1ba:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8acf1bd:	89 ec                	mov    %ebp,%esp
 8acf1bf:	5d                   	pop    %ebp
 8acf1c0:	c3                   	ret
 8acf1c1:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi
 8acf1c8:	8b 47 04             	mov    0x4(%edi),%eax
 8acf1cb:	8b 57 08             	mov    0x8(%edi),%edx
 8acf1ce:	29 c2                	sub    %eax,%edx
 8acf1d0:	c1 fa 02             	sar    $0x2,%edx
 8acf1d3:	39 d6                	cmp    %edx,%esi
 8acf1d5:	7e c9                	jle    8acf1a0 <_ZNK19ScriptStringManager9getStringEiPSs+0x40>
 8acf1d7:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8acf1da:	31 c0                	xor    %eax,%eax
 8acf1dc:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8acf1df:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8acf1e2:	89 ec                	mov    %ebp,%esp
 8acf1e4:	5d                   	pop    %ebp
 8acf1e5:	c3                   	ret
 8acf1e6:	8d 76 00             	lea    0x0(%esi),%esi
 8acf1e9:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

```

```c
// ScriptStringManager::getString @ 0x8acf160

/* DWARF original prototype: bool getString(ScriptStringManager * this, int index, string *
   outputString) */

bool __thiscall
ScriptStringManager::getString(ScriptStringManager *this,int index,string *outputString)

{
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar1;
  
  std::string::_M_mutate
            ((string *)outputString,0,*(uint *)((outputString->_M_dataplus)._M_p + -0xc),0);
  if (index < 0) {
    pbVar1 = (this->strings_).
             super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
             ._M_impl._M_start;
    if ((int)(this->strings_).
             super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
             ._M_impl._M_finish - (int)pbVar1 >> 2 < index) {
      return false;
    }
  }
  else {
    pbVar1 = (this->strings_).
             super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
             ._M_impl._M_start;
  }
  std::string::assign((string *)outputString,(string *)(pbVar1 + index));
  return true;
}

```

---

## getString_08acf1f0

```asm
// === 08acf1f0 ScriptStringManager::getString  [0x08acf1f0-0x8acf29f] ===
 8acf1f0:	55                   	push   %ebp
 8acf1f1:	89 e5                	mov    %esp,%ebp
 8acf1f3:	83 ec 28             	sub    $0x28,%esp
 8acf1f6:	80 3d 00 1a 50 09 00 	cmpb   $0x0,0x9501a00
 8acf1fd:	89 5d f8             	mov    %ebx,-0x8(%ebp)
 8acf200:	8b 5d 0c             	mov    0xc(%ebp),%ebx
 8acf203:	89 75 fc             	mov    %esi,-0x4(%ebp)
 8acf206:	8b 75 08             	mov    0x8(%ebp),%esi
 8acf209:	74 25                	je     8acf230 <_ZNK19ScriptStringManager9getStringEi+0x40>
 8acf20b:	85 db                	test   %ebx,%ebx
 8acf20d:	78 12                	js     8acf221 <_ZNK19ScriptStringManager9getStringEi+0x31>
 8acf20f:	8b 46 04             	mov    0x4(%esi),%eax
 8acf212:	8b 56 08             	mov    0x8(%esi),%edx
 8acf215:	29 c2                	sub    %eax,%edx
 8acf217:	c1 fa 02             	sar    $0x2,%edx
 8acf21a:	39 d3                	cmp    %edx,%ebx
 8acf21c:	8d 04 98             	lea    (%eax,%ebx,4),%eax
 8acf21f:	7c 05                	jl     8acf226 <_ZNK19ScriptStringManager9getStringEi+0x36>
 8acf221:	b8 08 1a 50 09       	mov    $0x9501a08,%eax
 8acf226:	8b 5d f8             	mov    -0x8(%ebp),%ebx
 8acf229:	8b 75 fc             	mov    -0x4(%ebp),%esi
 8acf22c:	89 ec                	mov    %ebp,%esp
 8acf22e:	5d                   	pop    %ebp
 8acf22f:	c3                   	ret
 8acf230:	c7 04 24 00 1a 50 09 	movl   $0x9501a00,(%esp)
 8acf237:	e8 f4 60 c5 ff       	call   8725330 <__cxa_guard_acquire>
 8acf23c:	85 c0                	test   %eax,%eax
 8acf23e:	74 cb                	je     8acf20b <_ZNK19ScriptStringManager9getStringEi+0x1b>
 8acf240:	8d 45 f7             	lea    -0x9(%ebp),%eax
 8acf243:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acf247:	c7 44 24 04 a4 c9 d0 	movl   $0x8d0c9a4,0x4(%esp)
 8acf24e:	08 
 8acf24f:	c7 04 24 08 1a 50 09 	movl   $0x9501a08,(%esp)
 8acf256:	e8 d5 83 c3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8acf25b:	c7 04 24 00 1a 50 09 	movl   $0x9501a00,(%esp)
 8acf262:	e8 e9 5f c5 ff       	call   8725250 <__cxa_guard_release>
 8acf267:	c7 44 24 08 48 58 ae 	movl   $0x8ae5848,0x8(%esp)
 8acf26e:	08 
 8acf26f:	c7 44 24 04 08 1a 50 	movl   $0x9501a08,0x4(%esp)
 8acf276:	09 
 8acf277:	c7 04 24 e0 7b 70 08 	movl   $0x8707be0,(%esp)
 8acf27e:	e8 4d eb 5a ff       	call   807ddd0 <__cxa_atexit@plt>
 8acf283:	eb 86                	jmp    8acf20b <_ZNK19ScriptStringManager9getStringEi+0x1b>
 8acf285:	89 c3                	mov    %eax,%ebx
 8acf287:	c7 04 24 00 1a 50 09 	movl   $0x9501a00,(%esp)
 8acf28e:	e8 2d 60 c5 ff       	call   87252c0 <__cxa_guard_abort>
 8acf293:	89 1c 24             	mov    %ebx,(%esp)
 8acf296:	e8 b5 44 01 00       	call   8ae3750 <_Unwind_Resume>
 8acf29b:	90                   	nop
 8acf29c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// ScriptStringManager::getString @ 0x8acf1f0

/* DWARF original prototype: string * getString(ScriptStringManager * this, int index) */

string * __thiscall ScriptStringManager::getString(ScriptStringManager *this,int index)

{
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar1;
  string *psVar2;
  int iVar3;
  allocator local_d;
  
  if (getString(int)::DEFAULT_STRING == '\0') {
    iVar3 = __cxa_guard_acquire(&getString(int)::DEFAULT_STRING);
    if (iVar3 != 0) {
                    /* try { // try from 08acf256 to 08acf25a has its CatchHandler @ 08acf285 */
      std::string::string((string *)&getString::lexical_block_0::DEFAULT_STRING,"",&local_d);
      __cxa_guard_release(&getString(int)::DEFAULT_STRING);
      __cxa_atexit(std::string::~string,&getString::lexical_block_0::DEFAULT_STRING,&__dso_handle);
    }
  }
  if ((index < 0) ||
     (pbVar1 = (this->strings_).
               super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
               ._M_impl._M_start, psVar2 = pbVar1 + index,
     (int)(this->strings_).
          super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
          ._M_impl._M_finish - (int)pbVar1 >> 2 <= index)) {
    psVar2 = &getString::lexical_block_0::DEFAULT_STRING;
  }
  return psVar2;
}

```

---

## importFromBuffer

```asm
// === 08acf970 ScriptStringManager::importFromBuffer  [0x08acf970-0x8acfcff] ===
 8acf970:	55                   	push   %ebp
 8acf971:	89 e5                	mov    %esp,%ebp
 8acf973:	57                   	push   %edi
 8acf974:	56                   	push   %esi
 8acf975:	53                   	push   %ebx
 8acf976:	81 ec 6c 04 00 00    	sub    $0x46c,%esp
 8acf97c:	8b 75 0c             	mov    0xc(%ebp),%esi
 8acf97f:	85 f6                	test   %esi,%esi
 8acf981:	74 0e                	je     8acf991 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x21>
 8acf983:	8b 06                	mov    (%esi),%eax
 8acf985:	83 7d 10 03          	cmpl   $0x3,0x10(%ebp)
 8acf989:	89 85 c0 fb ff ff    	mov    %eax,-0x440(%ebp)
 8acf98f:	7f 0f                	jg     8acf9a0 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x30>
 8acf991:	31 c0                	xor    %eax,%eax
 8acf993:	81 c4 6c 04 00 00    	add    $0x46c,%esp
 8acf999:	5b                   	pop    %ebx
 8acf99a:	5e                   	pop    %esi
 8acf99b:	5f                   	pop    %edi
 8acf99c:	5d                   	pop    %ebp
 8acf99d:	c3                   	ret
 8acf99e:	66 90                	xchg   %ax,%ax
 8acf9a0:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8acf9a3:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 8acf9aa:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 8acf9b1:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 8acf9b8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acf9bc:	89 14 24             	mov    %edx,(%esp)
 8acf9bf:	e8 80 f4 6a ff       	call   817ee44 <_ZNSt6vectorIiSaIiEE7reserveEj>
 8acf9c4:	8d 46 04             	lea    0x4(%esi),%eax
 8acf9c7:	89 85 c4 fb ff ff    	mov    %eax,-0x43c(%ebp)
 8acf9cd:	8b 85 c0 fb ff ff    	mov    -0x440(%ebp),%eax
 8acf9d3:	c7 85 b8 fb ff ff 08 	movl   $0x8,-0x448(%ebp)
 8acf9da:	00 00 00 
 8acf9dd:	85 c0                	test   %eax,%eax
 8acf9df:	0f 84 84 00 00 00    	je     8acfa69 <_ZN19ScriptStringManager16importFromBufferEPKhi+0xf9>
 8acf9e5:	83 7d 10 07          	cmpl   $0x7,0x10(%ebp)
 8acf9e9:	8b 4e 04             	mov    0x4(%esi),%ecx
 8acf9ec:	0f 8e 1e 02 00 00    	jle    8acfc10 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x2a0>
 8acf9f2:	bb 08 00 00 00       	mov    $0x8,%ebx
 8acf9f7:	31 ff                	xor    %edi,%edi
 8acf9f9:	eb 30                	jmp    8acfa2b <_ZN19ScriptStringManager16importFromBufferEPKhi+0xbb>
 8acf9fb:	90                   	nop
 8acf9fc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acfa00:	31 d2                	xor    %edx,%edx
 8acfa02:	85 c0                	test   %eax,%eax
 8acfa04:	74 05                	je     8acfa0b <_ZN19ScriptStringManager16importFromBufferEPKhi+0x9b>
 8acfa06:	89 08                	mov    %ecx,(%eax)
 8acfa08:	8b 55 d0             	mov    -0x30(%ebp),%edx
 8acfa0b:	83 c2 04             	add    $0x4,%edx
 8acfa0e:	83 c7 01             	add    $0x1,%edi
 8acfa11:	39 bd c0 fb ff ff    	cmp    %edi,-0x440(%ebp)
 8acfa17:	89 55 d0             	mov    %edx,-0x30(%ebp)
 8acfa1a:	76 44                	jbe    8acfa60 <_ZN19ScriptStringManager16importFromBufferEPKhi+0xf0>
 8acfa1c:	8b 0c 1e             	mov    (%esi,%ebx,1),%ecx
 8acfa1f:	83 c3 04             	add    $0x4,%ebx
 8acfa22:	39 5d 10             	cmp    %ebx,0x10(%ebp)
 8acfa25:	0f 8c e5 01 00 00    	jl     8acfc10 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x2a0>
 8acfa2b:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8acfa2e:	8d 14 1e             	lea    (%esi,%ebx,1),%edx
 8acfa31:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 8acfa34:	89 95 c4 fb ff ff    	mov    %edx,-0x43c(%ebp)
 8acfa3a:	75 c4                	jne    8acfa00 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x90>
 8acfa3c:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8acfa3f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acfa43:	8d 45 cc             	lea    -0x34(%ebp),%eax
 8acfa46:	89 4d dc             	mov    %ecx,-0x24(%ebp)
 8acfa49:	89 54 24 08          	mov    %edx,0x8(%esp)
 8acfa4d:	89 04 24             	mov    %eax,(%esp)
 8acfa50:	e8 ff e9 5b ff       	call   808e454 <_ZNSt6vectorIiSaIiEE13_M_insert_auxIIiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_>
 8acfa55:	83 c7 01             	add    $0x1,%edi
 8acfa58:	39 bd c0 fb ff ff    	cmp    %edi,-0x440(%ebp)
 8acfa5e:	77 bc                	ja     8acfa1c <_ZN19ScriptStringManager16importFromBufferEPKhi+0xac>
 8acfa60:	83 c3 04             	add    $0x4,%ebx
 8acfa63:	89 9d b8 fb ff ff    	mov    %ebx,-0x448(%ebp)
 8acfa69:	8b 85 c4 fb ff ff    	mov    -0x43c(%ebp),%eax
 8acfa6f:	8b 10                	mov    (%eax),%edx
 8acfa71:	8b 85 b8 fb ff ff    	mov    -0x448(%ebp),%eax
 8acfa77:	39 45 10             	cmp    %eax,0x10(%ebp)
 8acfa7a:	0f 8c 90 01 00 00    	jl     8acfc10 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x2a0>
 8acfa80:	8b 45 d0             	mov    -0x30(%ebp),%eax
 8acfa83:	3b 45 d4             	cmp    -0x2c(%ebp),%eax
 8acfa86:	0f 84 ef 01 00 00    	je     8acfc7b <_ZN19ScriptStringManager16importFromBufferEPKhi+0x30b>
 8acfa8c:	31 c9                	xor    %ecx,%ecx
 8acfa8e:	85 c0                	test   %eax,%eax
 8acfa90:	74 05                	je     8acfa97 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x127>
 8acfa92:	89 10                	mov    %edx,(%eax)
 8acfa94:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8acfa97:	83 c1 04             	add    $0x4,%ecx
 8acfa9a:	89 4d d0             	mov    %ecx,-0x30(%ebp)
 8acfa9d:	8b 45 08             	mov    0x8(%ebp),%eax
 8acfaa0:	8b 95 c0 fb ff ff    	mov    -0x440(%ebp),%edx
 8acfaa6:	83 c0 04             	add    $0x4,%eax
 8acfaa9:	89 85 b4 fb ff ff    	mov    %eax,-0x44c(%ebp)
 8acfaaf:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acfab3:	89 04 24             	mov    %eax,(%esp)
 8acfab6:	e8 31 17 f3 ff       	call   8a011ec <_ZNSt6vectorISsSaISsEE7reserveEj>
 8acfabb:	8b bd c0 fb ff ff    	mov    -0x440(%ebp),%edi
 8acfac1:	85 ff                	test   %edi,%edi
 8acfac3:	0f 84 a8 01 00 00    	je     8acfc71 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x301>
 8acfac9:	8b 85 c4 fb ff ff    	mov    -0x43c(%ebp),%eax
 8acfacf:	8d 95 cc fb ff ff    	lea    -0x434(%ebp),%edx
 8acfad5:	c7 85 c4 fb ff ff 00 	movl   $0x0,-0x43c(%ebp)
 8acfadc:	00 00 00 
 8acfadf:	89 95 a4 fb ff ff    	mov    %edx,-0x45c(%ebp)
 8acfae5:	83 c0 04             	add    $0x4,%eax
 8acfae8:	89 85 bc fb ff ff    	mov    %eax,-0x444(%ebp)
 8acfaee:	e9 b8 00 00 00       	jmp    8acfbab <_ZN19ScriptStringManager16importFromBufferEPKhi+0x23b>
 8acfaf3:	90                   	nop
 8acfaf4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acfaf8:	8b 95 bc fb ff ff    	mov    -0x444(%ebp),%edx
 8acfafe:	8d 85 cc fb ff ff    	lea    -0x434(%ebp),%eax
 8acfb04:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8acfb08:	89 04 24             	mov    %eax,(%esp)
 8acfb0b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acfb0f:	e8 8c dd 5a ff       	call   807d8a0 <memcpy@plt>
 8acfb14:	01 9d b8 fb ff ff    	add    %ebx,-0x448(%ebp)
 8acfb1a:	8b 95 b8 fb ff ff    	mov    -0x448(%ebp),%edx
 8acfb20:	39 55 10             	cmp    %edx,0x10(%ebp)
 8acfb23:	0f 8c e7 00 00 00    	jl     8acfc10 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x2a0>
 8acfb29:	01 9d bc fb ff ff    	add    %ebx,-0x444(%ebp)
 8acfb2f:	c6 84 1d cc fb ff ff 	movb   $0x0,-0x434(%ebp,%ebx,1)
 8acfb36:	00 
 8acfb37:	8d 55 e7             	lea    -0x19(%ebp),%edx
 8acfb3a:	89 54 24 08          	mov    %edx,0x8(%esp)
 8acfb3e:	8d 85 cc fb ff ff    	lea    -0x434(%ebp),%eax
 8acfb44:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8acfb47:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acfb4b:	89 14 24             	mov    %edx,(%esp)
 8acfb4e:	e8 dd 7a c3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8acfb53:	8b 55 08             	mov    0x8(%ebp),%edx
 8acfb56:	8b 42 08             	mov    0x8(%edx),%eax
 8acfb59:	3b 42 0c             	cmp    0xc(%edx),%eax
 8acfb5c:	0f 84 e6 00 00 00    	je     8acfc48 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x2d8>
 8acfb62:	85 c0                	test   %eax,%eax
 8acfb64:	0f 84 d6 00 00 00    	je     8acfc40 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x2d0>
 8acfb6a:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8acfb6d:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acfb71:	89 04 24             	mov    %eax,(%esp)
 8acfb74:	e8 37 7e c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acfb79:	8b 55 08             	mov    0x8(%ebp),%edx
 8acfb7c:	8b 42 08             	mov    0x8(%edx),%eax
 8acfb7f:	8b 55 08             	mov    0x8(%ebp),%edx
 8acfb82:	83 c0 04             	add    $0x4,%eax
 8acfb85:	89 42 08             	mov    %eax,0x8(%edx)
 8acfb88:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8acfb8b:	83 e8 0c             	sub    $0xc,%eax
 8acfb8e:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8acfb93:	0f 85 00 01 00 00    	jne    8acfc99 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x329>
 8acfb99:	8b 85 c4 fb ff ff    	mov    -0x43c(%ebp),%eax
 8acfb9f:	39 85 c0 fb ff ff    	cmp    %eax,-0x440(%ebp)
 8acfba5:	0f 86 bb 00 00 00    	jbe    8acfc66 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x2f6>
 8acfbab:	83 85 c4 fb ff ff 01 	addl   $0x1,-0x43c(%ebp)
 8acfbb2:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8acfbb5:	8b 85 c4 fb ff ff    	mov    -0x43c(%ebp),%eax
 8acfbbb:	8b 1c 82             	mov    (%edx,%eax,4),%ebx
 8acfbbe:	2b 5c 82 fc          	sub    -0x4(%edx,%eax,4),%ebx
 8acfbc2:	81 fb ff 03 00 00    	cmp    $0x3ff,%ebx
 8acfbc8:	0f 8e 2a ff ff ff    	jle    8acfaf8 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x188>
 8acfbce:	8b bd a4 fb ff ff    	mov    -0x45c(%ebp),%edi
 8acfbd4:	b9 ff 00 00 00       	mov    $0xff,%ecx
 8acfbd9:	8b b5 bc fb ff ff    	mov    -0x444(%ebp),%esi
 8acfbdf:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
 8acfbe1:	0f b7 06             	movzwl (%esi),%eax
 8acfbe4:	66 89 07             	mov    %ax,(%edi)
 8acfbe7:	0f b6 46 02          	movzbl 0x2(%esi),%eax
 8acfbeb:	01 9d b8 fb ff ff    	add    %ebx,-0x448(%ebp)
 8acfbf1:	88 47 02             	mov    %al,0x2(%edi)
 8acfbf4:	8b 85 b8 fb ff ff    	mov    -0x448(%ebp),%eax
 8acfbfa:	39 45 10             	cmp    %eax,0x10(%ebp)
 8acfbfd:	7c 14                	jl     8acfc13 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x2a3>
 8acfbff:	01 9d bc fb ff ff    	add    %ebx,-0x444(%ebp)
 8acfc05:	c6 45 cb 00          	movb   $0x0,-0x35(%ebp)
 8acfc09:	e9 29 ff ff ff       	jmp    8acfb37 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x1c7>
 8acfc0e:	66 90                	xchg   %ax,%ax
 8acfc10:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8acfc13:	31 c0                	xor    %eax,%eax
 8acfc15:	85 d2                	test   %edx,%edx
 8acfc17:	0f 84 76 fd ff ff    	je     8acf993 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x23>
 8acfc1d:	88 85 b0 fb ff ff    	mov    %al,-0x450(%ebp)
 8acfc23:	89 14 24             	mov    %edx,(%esp)
 8acfc26:	e8 c5 48 c5 ff       	call   87244f0 <_ZdlPv>
 8acfc2b:	0f b6 85 b0 fb ff ff 	movzbl -0x450(%ebp),%eax
 8acfc32:	81 c4 6c 04 00 00    	add    $0x46c,%esp
 8acfc38:	5b                   	pop    %ebx
 8acfc39:	5e                   	pop    %esi
 8acfc3a:	5f                   	pop    %edi
 8acfc3b:	5d                   	pop    %ebp
 8acfc3c:	c3                   	ret
 8acfc3d:	8d 76 00             	lea    0x0(%esi),%esi
 8acfc40:	31 c0                	xor    %eax,%eax
 8acfc42:	e9 38 ff ff ff       	jmp    8acfb7f <_ZN19ScriptStringManager16importFromBufferEPKhi+0x20f>
 8acfc47:	90                   	nop
 8acfc48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acfc4c:	8b 85 b4 fb ff ff    	mov    -0x44c(%ebp),%eax
 8acfc52:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8acfc55:	89 54 24 08          	mov    %edx,0x8(%esp)
 8acfc59:	89 04 24             	mov    %eax,(%esp)
 8acfc5c:	e8 17 dc 76 ff       	call   823d878 <_ZNSt6vectorISsSaISsEE13_M_insert_auxIISsEEEvN9__gnu_cxx17__normal_iteratorIPSsS1_EEDpOT_>
 8acfc61:	e9 22 ff ff ff       	jmp    8acfb88 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x218>
 8acfc66:	8b 95 b8 fb ff ff    	mov    -0x448(%ebp),%edx
 8acfc6c:	39 55 10             	cmp    %edx,0x10(%ebp)
 8acfc6f:	7c 9f                	jl     8acfc10 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x2a0>
 8acfc71:	b8 01 00 00 00       	mov    $0x1,%eax
 8acfc76:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8acfc79:	eb 9a                	jmp    8acfc15 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x2a5>
 8acfc7b:	89 55 d8             	mov    %edx,-0x28(%ebp)
 8acfc7e:	8d 55 d8             	lea    -0x28(%ebp),%edx
 8acfc81:	89 54 24 08          	mov    %edx,0x8(%esp)
 8acfc85:	8d 55 cc             	lea    -0x34(%ebp),%edx
 8acfc88:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acfc8c:	89 14 24             	mov    %edx,(%esp)
 8acfc8f:	e8 c0 e7 5b ff       	call   808e454 <_ZNSt6vectorIiSaIiEE13_M_insert_auxIIiEEEvN9__gnu_cxx17__normal_iteratorIPiS1_EEDpOT_>
 8acfc94:	e9 04 fe ff ff       	jmp    8acfa9d <_ZN19ScriptStringManager16importFromBufferEPKhi+0x12d>
 8acfc99:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8acfc9e:	85 d2                	test   %edx,%edx
 8acfca0:	74 52                	je     8acfcf4 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x384>
 8acfca2:	83 ca ff             	or     $0xffffffff,%edx
 8acfca5:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8acfcaa:	85 d2                	test   %edx,%edx
 8acfcac:	0f 8f e7 fe ff ff    	jg     8acfb99 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x229>
 8acfcb2:	8d 55 e6             	lea    -0x1a(%ebp),%edx
 8acfcb5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acfcb9:	89 04 24             	mov    %eax,(%esp)
 8acfcbc:	e8 5f 6c c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acfcc1:	e9 d3 fe ff ff       	jmp    8acfb99 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x229>
 8acfcc6:	8d 55 e0             	lea    -0x20(%ebp),%edx
 8acfcc9:	89 c3                	mov    %eax,%ebx
 8acfccb:	89 14 24             	mov    %edx,(%esp)
 8acfcce:	e8 0d 7f c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8acfcd3:	8b 45 cc             	mov    -0x34(%ebp),%eax
 8acfcd6:	85 c0                	test   %eax,%eax
 8acfcd8:	74 08                	je     8acfce2 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x372>
 8acfcda:	89 04 24             	mov    %eax,(%esp)
 8acfcdd:	e8 0e 48 c5 ff       	call   87244f0 <_ZdlPv>
 8acfce2:	89 1c 24             	mov    %ebx,(%esp)
 8acfce5:	e8 66 3a 01 00       	call   8ae3750 <_Unwind_Resume>
 8acfcea:	89 c3                	mov    %eax,%ebx
 8acfcec:	eb e5                	jmp    8acfcd3 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x363>
 8acfcee:	66 90                	xchg   %ax,%ax
 8acfcf0:	eb d4                	jmp    8acfcc6 <_ZN19ScriptStringManager16importFromBufferEPKhi+0x356>
 8acfcf2:	eb f6                	jmp    8acfcea <_ZN19ScriptStringManager16importFromBufferEPKhi+0x37a>
 8acfcf4:	8b 50 08             	mov    0x8(%eax),%edx
 8acfcf7:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8acfcfa:	89 48 08             	mov    %ecx,0x8(%eax)
 8acfcfd:	eb ab                	jmp    8acfcaa <_ZN19ScriptStringManager16importFromBufferEPKhi+0x33a>
 8acfcff:	90                   	nop

```

```c
// ScriptStringManager::importFromBuffer @ 0x8acf970

/* WARNING: Removing unreachable block (ram,0x08acfcf4) */
/* DWARF original prototype: bool importFromBuffer(ScriptStringManager * this, uchar * buffer, int
   buffSize) */

bool __thiscall
ScriptStringManager::importFromBuffer(ScriptStringManager *this,uchar *buffer,int buffSize)

{
  int *piVar1;
  uint uVar2;
  string *this_00;
  bool bVar3;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  size_t __n;
  uchar *puVar7;
  int iVar8;
  char *pcVar9;
  byte bVar10;
  int local_44c;
  uchar *local_448;
  uchar *local_440;
  char local_438 [1023];
  undefined1 local_39;
  void *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  allocator local_1d [13];
  
  bVar10 = 0;
                    /* Unresolved local var: int read_size@[???]
                       Unresolved local var: uchar * ptr@[???]
                       Unresolved local var: uint string_count@[???]
                       Unresolved local var: vector<int,_std::allocator<int>_> offsets@[???]
                       Unresolved local var: uint offset@[???]
                       Unresolved local var: char[1024] temp_buffer@[???] */
  if ((buffer == (uchar *)0x0) || (uVar2 = *(uint *)buffer, buffSize < 4)) {
    return false;
  }
  local_38 = (void *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = (undefined4 *)0x0;
                    /* try { // try from 08acf9bf to 08acfaba has its CatchHandler @ 08acfcea */
  std::vector<int,std::allocator<int>>::reserve((vector<int,std::allocator<int>> *)&local_38,uVar2);
  local_440 = buffer + 4;
                    /* Unresolved local var: uint i@[???] */
  local_44c = 8;
  if (uVar2 == 0) {
LAB_08acfa69:
    local_448 = local_440;
    if (local_44c <= buffSize) {
      if (local_34 == local_30) {
        local_2c = *(undefined4 *)local_440;
                    /* try { // try from 08acfc8f to 08acfc93 has its CatchHandler @ 08acfcea */
        std::vector<int,std::allocator<int>>::_M_insert_aux<int>
                  ((vector<int,std::allocator<int>> *)&local_38,local_34,&local_2c);
      }
      else {
        puVar6 = (undefined4 *)0x0;
        if (local_34 != (undefined4 *)0x0) {
          *local_34 = *(undefined4 *)local_440;
          puVar6 = local_34;
        }
        local_34 = puVar6 + 1;
      }
      std::vector<std::string,std::allocator<std::string>>::reserve
                ((vector<std::string,std::allocator<std::string>> *)&this->strings_,uVar2);
                    /* Unresolved local var: uint i@[???] */
      if (uVar2 != 0) {
        local_440 = (uchar *)0x0;
        local_448 = local_448 + 4;
        do {
          local_440 = (uchar *)((int)local_440 + 1);
          __n = *(int *)((int)local_38 + (int)local_440 * 4) -
                *(int *)((int)local_38 + (int)local_440 * 4 + -4);
          if ((int)__n < 0x400) {
                    /* Unresolved local var: int length@[???] */
            memcpy(local_438,local_448,__n);
            if (buffSize < (int)(local_44c + __n)) goto LAB_08acfc13;
            local_438[__n] = '\0';
          }
          else {
            puVar7 = local_448;
            pcVar9 = local_438;
            for (iVar8 = 0xff; iVar8 != 0; iVar8 = iVar8 + -1) {
              *(undefined4 *)pcVar9 = *(undefined4 *)puVar7;
              puVar7 = puVar7 + (uint)bVar10 * -8 + 4;
              pcVar9 = pcVar9 + ((uint)bVar10 * -2 + 1) * 4;
            }
            *(undefined2 *)pcVar9 = *(undefined2 *)puVar7;
            pcVar9[2] = puVar7[2];
            if (buffSize < (int)(local_44c + __n)) goto LAB_08acfc13;
            local_39 = 0;
          }
          local_448 = local_448 + __n;
          local_44c = local_44c + __n;
                    /* try { // try from 08acfb4e to 08acfb52 has its CatchHandler @ 08acfcf2 */
          std::string::string((string *)&local_24,local_438,local_1d);
          this_00 = (string *)
                    (this->strings_).
                    super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                    ._M_impl._M_finish;
          if (this_00 ==
              (string *)
              (this->strings_).
              super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
              ._M_impl._M_end_of_storage) {
                    /* try { // try from 08acfc5c to 08acfc60 has its CatchHandler @ 08acfcee */
            std::vector<std::string,std::allocator<std::string>>::_M_insert_aux<std::string>
                      ((vector<std::string,std::allocator<std::string>> *)&this->strings_,this_00,
                       &local_24);
          }
          else {
            if (this_00 == (string *)0x0) {
              pbVar4 = (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)0x0;
            }
            else {
                    /* try { // try from 08acfb74 to 08acfb78 has its CatchHandler @ 08acfcc6 */
              std::string::string(this_00,(string *)&local_24);
              pbVar4 = (this->strings_).
                       super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                       ._M_impl._M_finish;
            }
            (this->strings_).
            super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
            ._M_impl._M_finish = pbVar4 + 1;
          }
          if ((allocator *)(local_24 + -0xc) !=
              (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
            LOCK();
            piVar1 = (int *)(local_24 + -4);
            iVar8 = *piVar1;
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (iVar8 < 1) {
              std::string::_Rep::_M_destroy((allocator *)(local_24 + -0xc));
            }
          }
        } while (local_440 < uVar2);
        if (buffSize < local_44c) goto LAB_08acfc13;
      }
      bVar3 = true;
      goto LAB_08acfc15;
    }
  }
  else {
    uVar5 = *(undefined4 *)(buffer + 4);
    if (7 < buffSize) {
      local_44c = 8;
      iVar8 = 0;
      do {
        local_440 = buffer + local_44c;
        if (local_34 == local_30) {
          local_28 = uVar5;
          std::vector<int,std::allocator<int>>::_M_insert_aux<int>
                    ((vector<int,std::allocator<int>> *)&local_38,local_34,&local_28);
        }
        else {
          puVar6 = (undefined4 *)0x0;
          if (local_34 != (undefined4 *)0x0) {
            *local_34 = uVar5;
            puVar6 = local_34;
          }
          local_34 = puVar6 + 1;
        }
        if (uVar2 <= iVar8 + 1U) {
          local_44c = local_44c + 4;
          goto LAB_08acfa69;
        }
        iVar8 = iVar8 + 1;
        uVar5 = *(undefined4 *)(buffer + local_44c);
        local_44c = local_44c + 4;
      } while (local_44c <= buffSize);
    }
  }
LAB_08acfc13:
  bVar3 = false;
LAB_08acfc15:
  if (local_38 == (void *)0x0) {
    return bVar3;
  }
  operator_delete(local_38);
  return bVar3;
}

```

---

## importFromFile

```asm
// === 08acfd00 ScriptStringManager::importFromFile  [0x08acfd00-0x8acfdef] ===
 8acfd00:	55                   	push   %ebp
 8acfd01:	89 e5                	mov    %esp,%ebp
 8acfd03:	83 ec 28             	sub    $0x28,%esp
 8acfd06:	8b 45 0c             	mov    0xc(%ebp),%eax
 8acfd09:	89 5d f4             	mov    %ebx,-0xc(%ebp)
 8acfd0c:	89 75 f8             	mov    %esi,-0x8(%ebp)
 8acfd0f:	89 7d fc             	mov    %edi,-0x4(%ebp)
 8acfd12:	c7 44 24 04 54 16 d0 	movl   $0x8d01654,0x4(%esp)
 8acfd19:	08 
 8acfd1a:	89 04 24             	mov    %eax,(%esp)
 8acfd1d:	e8 4e ea 5a ff       	call   807e770 <fopen@plt>
 8acfd22:	89 c3                	mov    %eax,%ebx
 8acfd24:	31 c0                	xor    %eax,%eax
 8acfd26:	85 db                	test   %ebx,%ebx
 8acfd28:	0f 84 b4 00 00 00    	je     8acfde2 <_ZN19ScriptStringManager14importFromFileEPKc+0xe2>
 8acfd2e:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 8acfd35:	00 
 8acfd36:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8acfd3d:	00 
 8acfd3e:	89 1c 24             	mov    %ebx,(%esp)
 8acfd41:	e8 6a e3 5a ff       	call   807e0b0 <fseek@plt>
 8acfd46:	85 c0                	test   %eax,%eax
 8acfd48:	0f 85 8a 00 00 00    	jne    8acfdd8 <_ZN19ScriptStringManager14importFromFileEPKc+0xd8>
 8acfd4e:	89 1c 24             	mov    %ebx,(%esp)
 8acfd51:	e8 7a dc 5a ff       	call   807d9d0 <ftell@plt>
 8acfd56:	85 c0                	test   %eax,%eax
 8acfd58:	89 c6                	mov    %eax,%esi
 8acfd5a:	78 7c                	js     8acfdd8 <_ZN19ScriptStringManager14importFromFileEPKc+0xd8>
 8acfd5c:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8acfd63:	00 
 8acfd64:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8acfd6b:	00 
 8acfd6c:	89 1c 24             	mov    %ebx,(%esp)
 8acfd6f:	e8 3c e3 5a ff       	call   807e0b0 <fseek@plt>
 8acfd74:	85 c0                	test   %eax,%eax
 8acfd76:	75 60                	jne    8acfdd8 <_ZN19ScriptStringManager14importFromFileEPKc+0xd8>
 8acfd78:	89 34 24             	mov    %esi,(%esp)
 8acfd7b:	e8 40 30 c5 ff       	call   8722dc0 <_Znaj>
 8acfd80:	85 c0                	test   %eax,%eax
 8acfd82:	89 c7                	mov    %eax,%edi
 8acfd84:	74 52                	je     8acfdd8 <_ZN19ScriptStringManager14importFromFileEPKc+0xd8>
 8acfd86:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8acfd8a:	89 74 24 04          	mov    %esi,0x4(%esp)
 8acfd8e:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8acfd95:	00 
 8acfd96:	89 04 24             	mov    %eax,(%esp)
 8acfd99:	e8 b2 df 5a ff       	call   807dd50 <fread@plt>
 8acfd9e:	89 1c 24             	mov    %ebx,(%esp)
 8acfda1:	e8 fa e0 5a ff       	call   807dea0 <fclose@plt>
 8acfda6:	8b 45 08             	mov    0x8(%ebp),%eax
 8acfda9:	89 74 24 08          	mov    %esi,0x8(%esp)
 8acfdad:	89 7c 24 04          	mov    %edi,0x4(%esp)
 8acfdb1:	89 04 24             	mov    %eax,(%esp)
 8acfdb4:	e8 b7 fb ff ff       	call   8acf970 <_ZN19ScriptStringManager16importFromBufferEPKhi>
 8acfdb9:	89 3c 24             	mov    %edi,(%esp)
 8acfdbc:	e8 ef 4d c5 ff       	call   8724bb0 <_ZdaPv>
 8acfdc1:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8acfdc4:	b8 01 00 00 00       	mov    $0x1,%eax
 8acfdc9:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8acfdcc:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8acfdcf:	89 ec                	mov    %ebp,%esp
 8acfdd1:	5d                   	pop    %ebp
 8acfdd2:	c3                   	ret
 8acfdd3:	90                   	nop
 8acfdd4:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acfdd8:	89 1c 24             	mov    %ebx,(%esp)
 8acfddb:	e8 c0 e0 5a ff       	call   807dea0 <fclose@plt>
 8acfde0:	31 c0                	xor    %eax,%eax
 8acfde2:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 8acfde5:	8b 75 f8             	mov    -0x8(%ebp),%esi
 8acfde8:	8b 7d fc             	mov    -0x4(%ebp),%edi
 8acfdeb:	89 ec                	mov    %ebp,%esp
 8acfded:	5d                   	pop    %ebp
 8acfdee:	c3                   	ret
 8acfdef:	90                   	nop

```

```c
// ScriptStringManager::importFromFile @ 0x8acfd00

/* DWARF original prototype: bool importFromFile(ScriptStringManager * this, TCHAR * fileName) */

bool __thiscall ScriptStringManager::importFromFile(ScriptStringManager *this,TCHAR *fileName)

{
  FILE *__stream;
  int iVar1;
  uint __size;
  uchar *buffer;
  
                    /* Unresolved local var: FILE * file@[???]
                       Unresolved local var: int size@[???]
                       Unresolved local var: uchar * buffer@[???] */
  __stream = fopen(fileName,"rb");
  if (__stream != (FILE *)0x0) {
    iVar1 = fseek(__stream,0,2);
    if (iVar1 == 0) {
      __size = ftell(__stream);
      if (-1 < (int)__size) {
        iVar1 = fseek(__stream,0,0);
        if (iVar1 == 0) {
          buffer = operator_new__(__size);
          if (buffer != (uchar *)0x0) {
            fread(buffer,__size,1,__stream);
            fclose(__stream);
            importFromBuffer(this,buffer,__size);
            operator_delete__(buffer);
            return true;
          }
        }
      }
    }
    fclose(__stream);
  }
  return false;
}

```

---

## insertString

```asm
// === 08acf720 ScriptStringManager::insertString  [0x08acf720-0x8acf96f] ===
 8acf720:	55                   	push   %ebp
 8acf721:	89 e5                	mov    %esp,%ebp
 8acf723:	57                   	push   %edi
 8acf724:	56                   	push   %esi
 8acf725:	53                   	push   %ebx
 8acf726:	83 ec 6c             	sub    $0x6c,%esp
 8acf729:	8d 45 e7             	lea    -0x19(%ebp),%eax
 8acf72c:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acf730:	8b 45 0c             	mov    0xc(%ebp),%eax
 8acf733:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acf737:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8acf73a:	89 04 24             	mov    %eax,(%esp)
 8acf73d:	e8 ee 7e c3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8acf742:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8acf745:	8b 55 08             	mov    0x8(%ebp),%edx
 8acf748:	8b 41 18             	mov    0x18(%ecx),%eax
 8acf74b:	83 c2 14             	add    $0x14,%edx
 8acf74e:	89 55 b4             	mov    %edx,-0x4c(%ebp)
 8acf751:	89 55 b8             	mov    %edx,-0x48(%ebp)
 8acf754:	85 c0                	test   %eax,%eax
 8acf756:	0f 84 70 01 00 00    	je     8acf8cc <_ZN19ScriptStringManager12insertStringEPKc+0x1ac>
 8acf75c:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8acf75f:	89 55 bc             	mov    %edx,-0x44(%ebp)
 8acf762:	8b 4d bc             	mov    -0x44(%ebp),%ecx
 8acf765:	83 ea 0c             	sub    $0xc,%edx
 8acf768:	89 55 b0             	mov    %edx,-0x50(%ebp)
 8acf76b:	8b 59 f4             	mov    -0xc(%ecx),%ebx
 8acf76e:	89 5d a4             	mov    %ebx,-0x5c(%ebp)
 8acf771:	eb 11                	jmp    8acf784 <_ZN19ScriptStringManager12insertStringEPKc+0x64>
 8acf773:	90                   	nop
 8acf774:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acf778:	8b 50 08             	mov    0x8(%eax),%edx
 8acf77b:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8acf77e:	85 d2                	test   %edx,%edx
 8acf780:	74 37                	je     8acf7b9 <_ZN19ScriptStringManager12insertStringEPKc+0x99>
 8acf782:	89 d0                	mov    %edx,%eax
 8acf784:	8b 70 10             	mov    0x10(%eax),%esi
 8acf787:	8b 4d a4             	mov    -0x5c(%ebp),%ecx
 8acf78a:	8b 56 f4             	mov    -0xc(%esi),%edx
 8acf78d:	39 d1                	cmp    %edx,%ecx
 8acf78f:	76 02                	jbe    8acf793 <_ZN19ScriptStringManager12insertStringEPKc+0x73>
 8acf791:	89 d1                	mov    %edx,%ecx
 8acf793:	8b 7d bc             	mov    -0x44(%ebp),%edi
 8acf796:	39 c9                	cmp    %ecx,%ecx
 8acf798:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8acf79a:	0f 97 c3             	seta   %bl
 8acf79d:	0f 92 c1             	setb   %cl
 8acf7a0:	28 cb                	sub    %cl,%bl
 8acf7a2:	0f be f3             	movsbl %bl,%esi
 8acf7a5:	85 f6                	test   %esi,%esi
 8acf7a7:	75 05                	jne    8acf7ae <_ZN19ScriptStringManager12insertStringEPKc+0x8e>
 8acf7a9:	89 d6                	mov    %edx,%esi
 8acf7ab:	2b 75 a4             	sub    -0x5c(%ebp),%esi
 8acf7ae:	85 f6                	test   %esi,%esi
 8acf7b0:	79 c6                	jns    8acf778 <_ZN19ScriptStringManager12insertStringEPKc+0x58>
 8acf7b2:	8b 50 0c             	mov    0xc(%eax),%edx
 8acf7b5:	85 d2                	test   %edx,%edx
 8acf7b7:	75 c9                	jne    8acf782 <_ZN19ScriptStringManager12insertStringEPKc+0x62>
 8acf7b9:	8b 5d b8             	mov    -0x48(%ebp),%ebx
 8acf7bc:	39 5d b4             	cmp    %ebx,-0x4c(%ebp)
 8acf7bf:	74 5f                	je     8acf820 <_ZN19ScriptStringManager12insertStringEPKc+0x100>
 8acf7c1:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8acf7c4:	8b 7b 10             	mov    0x10(%ebx),%edi
 8acf7c7:	8b 00                	mov    (%eax),%eax
 8acf7c9:	89 45 b8             	mov    %eax,-0x48(%ebp)
 8acf7cc:	8b 47 f4             	mov    -0xc(%edi),%eax
 8acf7cf:	3b 45 b8             	cmp    -0x48(%ebp),%eax
 8acf7d2:	89 c1                	mov    %eax,%ecx
 8acf7d4:	77 42                	ja     8acf818 <_ZN19ScriptStringManager12insertStringEPKc+0xf8>
 8acf7d6:	8b 75 bc             	mov    -0x44(%ebp),%esi
 8acf7d9:	39 c9                	cmp    %ecx,%ecx
 8acf7db:	f3 a6                	repz cmpsb %es:(%edi),%ds:(%esi)
 8acf7dd:	0f 97 c2             	seta   %dl
 8acf7e0:	0f 92 c1             	setb   %cl
 8acf7e3:	28 ca                	sub    %cl,%dl
 8acf7e5:	0f be f2             	movsbl %dl,%esi
 8acf7e8:	85 f6                	test   %esi,%esi
 8acf7ea:	75 05                	jne    8acf7f1 <_ZN19ScriptStringManager12insertStringEPKc+0xd1>
 8acf7ec:	8b 75 b8             	mov    -0x48(%ebp),%esi
 8acf7ef:	29 c6                	sub    %eax,%esi
 8acf7f1:	85 f6                	test   %esi,%esi
 8acf7f3:	78 2b                	js     8acf820 <_ZN19ScriptStringManager12insertStringEPKc+0x100>
 8acf7f5:	81 7d b0 f0 cc 48 09 	cmpl   $0x948ccf0,-0x50(%ebp)
 8acf7fc:	0f 85 26 01 00 00    	jne    8acf928 <_ZN19ScriptStringManager12insertStringEPKc+0x208>
 8acf802:	39 5d b4             	cmp    %ebx,-0x4c(%ebp)
 8acf805:	74 1e                	je     8acf825 <_ZN19ScriptStringManager12insertStringEPKc+0x105>
 8acf807:	8b 5b 14             	mov    0x14(%ebx),%ebx
 8acf80a:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8acf80d:	89 d8                	mov    %ebx,%eax
 8acf80f:	5b                   	pop    %ebx
 8acf810:	5e                   	pop    %esi
 8acf811:	5f                   	pop    %edi
 8acf812:	5d                   	pop    %ebp
 8acf813:	c3                   	ret
 8acf814:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acf818:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 8acf81b:	eb b9                	jmp    8acf7d6 <_ZN19ScriptStringManager12insertStringEPKc+0xb6>
 8acf81d:	8d 76 00             	lea    0x0(%esi),%esi
 8acf820:	8b 5d b4             	mov    -0x4c(%ebp),%ebx
 8acf823:	eb d0                	jmp    8acf7f5 <_ZN19ScriptStringManager12insertStringEPKc+0xd5>
 8acf825:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acf828:	8d 45 e6             	lea    -0x1a(%ebp),%eax
 8acf82b:	8d 5d dc             	lea    -0x24(%ebp),%ebx
 8acf82e:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acf832:	89 1c 24             	mov    %ebx,(%esp)
 8acf835:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acf839:	e8 f2 7d c3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8acf83e:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8acf841:	8b 41 08             	mov    0x8(%ecx),%eax
 8acf844:	3b 41 0c             	cmp    0xc(%ecx),%eax
 8acf847:	0f 84 94 00 00 00    	je     8acf8e1 <_ZN19ScriptStringManager12insertStringEPKc+0x1c1>
 8acf84d:	85 c0                	test   %eax,%eax
 8acf84f:	0f 84 88 00 00 00    	je     8acf8dd <_ZN19ScriptStringManager12insertStringEPKc+0x1bd>
 8acf855:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8acf859:	89 04 24             	mov    %eax,(%esp)
 8acf85c:	e8 4f 81 c3 ff       	call   87079b0 <_ZNSsC1ERKSs>
 8acf861:	8b 55 08             	mov    0x8(%ebp),%edx
 8acf864:	8b 42 08             	mov    0x8(%edx),%eax
 8acf867:	8b 4d 08             	mov    0x8(%ebp),%ecx
 8acf86a:	83 c0 04             	add    $0x4,%eax
 8acf86d:	89 41 08             	mov    %eax,0x8(%ecx)
 8acf870:	89 1c 24             	mov    %ebx,(%esp)
 8acf873:	e8 68 83 c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8acf878:	8b 45 08             	mov    0x8(%ebp),%eax
 8acf87b:	8d 75 d4             	lea    -0x2c(%ebp),%esi
 8acf87e:	8b 55 0c             	mov    0xc(%ebp),%edx
 8acf881:	8b 58 08             	mov    0x8(%eax),%ebx
 8acf884:	2b 58 04             	sub    0x4(%eax),%ebx
 8acf887:	8d 45 e5             	lea    -0x1b(%ebp),%eax
 8acf88a:	89 44 24 08          	mov    %eax,0x8(%esp)
 8acf88e:	c1 fb 02             	sar    $0x2,%ebx
 8acf891:	83 eb 01             	sub    $0x1,%ebx
 8acf894:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acf898:	89 34 24             	mov    %esi,(%esp)
 8acf89b:	e8 90 7d c3 ff       	call   8707630 <_ZNSsC1EPKcRKSaIcE>
 8acf8a0:	8b 55 08             	mov    0x8(%ebp),%edx
 8acf8a3:	8d 45 c0             	lea    -0x40(%ebp),%eax
 8acf8a6:	89 5d d8             	mov    %ebx,-0x28(%ebp)
 8acf8a9:	89 74 24 08          	mov    %esi,0x8(%esp)
 8acf8ad:	89 04 24             	mov    %eax,(%esp)
 8acf8b0:	83 c2 10             	add    $0x10,%edx
 8acf8b3:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acf8b7:	e8 68 df 6a ff       	call   817d824 <_ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsESaIS2_EE16_M_insert_uniqueERKS2_>
 8acf8bc:	83 ec 04             	sub    $0x4,%esp
 8acf8bf:	89 34 24             	mov    %esi,(%esp)
 8acf8c2:	e8 19 83 c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8acf8c7:	e9 3e ff ff ff       	jmp    8acf80a <_ZN19ScriptStringManager12insertStringEPKc+0xea>
 8acf8cc:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8acf8cf:	89 5d bc             	mov    %ebx,-0x44(%ebp)
 8acf8d2:	83 eb 0c             	sub    $0xc,%ebx
 8acf8d5:	89 5d b0             	mov    %ebx,-0x50(%ebp)
 8acf8d8:	e9 dc fe ff ff       	jmp    8acf7b9 <_ZN19ScriptStringManager12insertStringEPKc+0x99>
 8acf8dd:	31 c0                	xor    %eax,%eax
 8acf8df:	eb 86                	jmp    8acf867 <_ZN19ScriptStringManager12insertStringEPKc+0x147>
 8acf8e1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acf8e5:	8b 45 08             	mov    0x8(%ebp),%eax
 8acf8e8:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8acf8ec:	83 c0 04             	add    $0x4,%eax
 8acf8ef:	89 04 24             	mov    %eax,(%esp)
 8acf8f2:	e8 81 df 76 ff       	call   823d878 <_ZNSt6vectorISsSaISsEE13_M_insert_auxIISsEEEvN9__gnu_cxx17__normal_iteratorIPSsS1_EEDpOT_>
 8acf8f7:	e9 74 ff ff ff       	jmp    8acf870 <_ZN19ScriptStringManager12insertStringEPKc+0x150>
 8acf8fc:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8acf8ff:	89 34 24             	mov    %esi,(%esp)
 8acf902:	e8 d9 82 c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8acf907:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8acf90a:	89 04 24             	mov    %eax,(%esp)
 8acf90d:	e8 3e 3e 01 00       	call   8ae3750 <_Unwind_Resume>
 8acf912:	eb f6                	jmp    8acf90a <_ZN19ScriptStringManager12insertStringEPKc+0x1ea>
 8acf914:	89 45 ac             	mov    %eax,-0x54(%ebp)
 8acf917:	89 1c 24             	mov    %ebx,(%esp)
 8acf91a:	e8 c1 82 c3 ff       	call   8707be0 <_ZNSsD1Ev>
 8acf91f:	8b 45 ac             	mov    -0x54(%ebp),%eax
 8acf922:	eb e6                	jmp    8acf90a <_ZN19ScriptStringManager12insertStringEPKc+0x1ea>
 8acf924:	eb ee                	jmp    8acf914 <_ZN19ScriptStringManager12insertStringEPKc+0x1f4>
 8acf926:	eb e2                	jmp    8acf90a <_ZN19ScriptStringManager12insertStringEPKc+0x1ea>
 8acf928:	b8 60 e5 07 08       	mov    $0x807e560,%eax
 8acf92d:	85 c0                	test   %eax,%eax
 8acf92f:	90                   	nop
 8acf930:	74 2c                	je     8acf95e <_ZN19ScriptStringManager12insertStringEPKc+0x23e>
 8acf932:	8b 55 b0             	mov    -0x50(%ebp),%edx
 8acf935:	83 c8 ff             	or     $0xffffffff,%eax
 8acf938:	f0 0f c1 42 08       	lock xadd %eax,0x8(%edx)
 8acf93d:	85 c0                	test   %eax,%eax
 8acf93f:	0f 8f bd fe ff ff    	jg     8acf802 <_ZN19ScriptStringManager12insertStringEPKc+0xe2>
 8acf945:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8acf948:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acf94c:	8b 45 b0             	mov    -0x50(%ebp),%eax
 8acf94f:	89 04 24             	mov    %eax,(%esp)
 8acf952:	e8 c9 6f c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acf957:	e9 a6 fe ff ff       	jmp    8acf802 <_ZN19ScriptStringManager12insertStringEPKc+0xe2>
 8acf95c:	eb ac                	jmp    8acf90a <_ZN19ScriptStringManager12insertStringEPKc+0x1ea>
 8acf95e:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 8acf961:	8b 41 08             	mov    0x8(%ecx),%eax
 8acf964:	8d 50 ff             	lea    -0x1(%eax),%edx
 8acf967:	89 51 08             	mov    %edx,0x8(%ecx)
 8acf96a:	eb d1                	jmp    8acf93d <_ZN19ScriptStringManager12insertStringEPKc+0x21d>
 8acf96c:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

```

```c
// ScriptStringManager::insertString @ 0x8acf720

/* WARNING: Removing unreachable block (ram,0x08acf95e) */
/* DWARF original prototype: int insertString(ScriptStringManager * this, char * string) */

int __thiscall ScriptStringManager::insertString(ScriptStringManager *this,char *string)

{
  uint uVar1;
  uint uVar2;
  string *this_00;
  _Base_ptr p_Var3;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar4;
  uint uVar5;
  _Rb_tree_node_base *p_Var6;
  _Base_ptr p_Var7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  bool bVar12;
  byte bVar13;
  allocator *local_54;
  _Base_ptr local_4c;
  pair local_44 [20];
  string local_30 [4];
  _Base_ptr local_2c;
  string local_28 [4];
  byte *local_24;
  allocator local_1f;
  allocator local_1e;
  allocator local_1d [13];
  
  bVar13 = 0;
                    /* Unresolved local var: int index@[???]
                       Unresolved local var:
                       _Rb_tree_const_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_int>_>
                       it@[???] */
                    /* try { // try from 08acf73d to 08acf741 has its CatchHandler @ 08acf95c */
  std::string::string((string *)&local_24,string,local_1d);
                    /* Unresolved local var:
                       _Rb_tree_iterator<std::pair<const_std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_int>_>
                       __j@[???] */
  p_Var7 = (this->string_map_)._M_t._M_impl._M_header._M_parent;
  p_Var6 = &(this->string_map_)._M_t._M_impl._M_header;
  local_4c = p_Var6;
  if (p_Var7 != (_Base_ptr)0x0) {
    uVar1 = *(uint *)(local_24 + -0xc);
    do {
                    /* Unresolved local var: size_t __size@[???]
                       Unresolved local var: size_t __osize@[???]
                       Unresolved local var: size_t __len@[???]
                       Unresolved local var: int __r@[???] */
      uVar2 = *(uint *)((byte *)p_Var7[1]._M_color + -0xc);
      uVar5 = uVar1;
      if (uVar2 < uVar1) {
        uVar5 = uVar2;
      }
      bVar11 = false;
      bVar12 = true;
      pbVar9 = (byte *)p_Var7[1]._M_color;
      pbVar10 = local_24;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        bVar11 = *pbVar9 < *pbVar10;
        bVar12 = *pbVar9 == *pbVar10;
        pbVar9 = pbVar9 + (uint)bVar13 * -2 + 1;
        pbVar10 = pbVar10 + (uint)bVar13 * -2 + 1;
      } while (bVar12);
      iVar8 = (int)(char)((!bVar11 && !bVar12) - bVar11);
      if (iVar8 == 0) {
                    /* Unresolved local var: ptrdiff_t __d@[???] */
        iVar8 = uVar2 - uVar1;
      }
      if (iVar8 < 0) {
        p_Var3 = p_Var7->_M_right;
      }
      else {
        p_Var3 = p_Var7->_M_left;
        local_4c = p_Var7;
      }
      p_Var7 = p_Var3;
    } while (p_Var7 != (_Base_ptr)0x0);
  }
  local_54 = (allocator *)(local_24 + -0xc);
  if (p_Var6 != local_4c) {
                    /* Unresolved local var: size_t __size@[???]
                       Unresolved local var: size_t __osize@[???]
                       Unresolved local var: size_t __len@[???]
                       Unresolved local var: int __r@[???] */
    uVar1 = *(uint *)local_54;
    uVar2 = *(uint *)((byte *)local_4c[1]._M_color + -0xc);
    uVar5 = uVar2;
    if (uVar1 < uVar2) {
      uVar5 = uVar1;
    }
    bVar11 = false;
    bVar12 = true;
    pbVar9 = local_24;
    pbVar10 = (byte *)local_4c[1]._M_color;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      bVar11 = *pbVar9 < *pbVar10;
      bVar12 = *pbVar9 == *pbVar10;
      pbVar9 = pbVar9 + (uint)bVar13 * -2 + 1;
      pbVar10 = pbVar10 + (uint)bVar13 * -2 + 1;
    } while (bVar12);
    iVar8 = (int)(char)((!bVar11 && !bVar12) - bVar11);
    if (iVar8 == 0) {
                    /* Unresolved local var: ptrdiff_t __d@[???] */
      iVar8 = uVar1 - uVar2;
    }
    if (-1 < iVar8) goto LAB_08acf7f5;
  }
  local_4c = p_Var6;
LAB_08acf7f5:
  if (local_54 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
    LOCK();
    local_24 = local_24 + -4;
    iVar8 = *(int *)local_24;
    *(int *)local_24 = *(int *)local_24 + -1;
    UNLOCK();
    if (iVar8 < 1) {
      std::string::_Rep::_M_destroy(local_54);
    }
  }
  if (p_Var6 == local_4c) {
                    /* try { // try from 08acf839 to 08acf83d has its CatchHandler @ 08acf926 */
    std::string::string(local_28,string,&local_1e);
    this_00 = (string *)
              (this->strings_).
              super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
              ._M_impl._M_finish;
    if (this_00 ==
        (string *)
        (this->strings_).
        super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
        ._M_impl._M_end_of_storage) {
                    /* try { // try from 08acf8f2 to 08acf8f6 has its CatchHandler @ 08acf914 */
      std::vector<std::string,std::allocator<std::string>>::_M_insert_aux<std::string>
                ((vector<std::string,std::allocator<std::string>> *)&this->strings_,this_00,local_28
                );
    }
    else {
      if (this_00 == (string *)0x0) {
        pbVar4 = (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)0x0;
      }
      else {
                    /* try { // try from 08acf85c to 08acf860 has its CatchHandler @ 08acf924 */
        std::string::string(this_00,local_28);
        pbVar4 = (this->strings_).
                 super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                 ._M_impl._M_finish;
      }
      (this->strings_).
      super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
      ._M_impl._M_finish = pbVar4 + 1;
    }
                    /* try { // try from 08acf873 to 08acf877 has its CatchHandler @ 08acf926 */
    std::string::~string(local_28);
    p_Var7 = (_Base_ptr)
             (((int)(this->strings_).
                    super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                    ._M_impl._M_finish -
               (int)(this->strings_).
                    super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                    ._M_impl._M_start >> 2) + -1);
                    /* try { // try from 08acf89b to 08acf89f has its CatchHandler @ 08acf912 */
    std::string::string(local_30,string,&local_1f);
    local_2c = p_Var7;
                    /* try { // try from 08acf8b7 to 08acf8bb has its CatchHandler @ 08acf8fc */
    std::
    _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
    ::_M_insert_unique(local_44);
    std::string::~string(local_30);
  }
  else {
    p_Var7 = local_4c[1]._M_parent;
  }
  return (int)p_Var7;
}

```

---

## ~ScriptStringManager

```asm
// === 08acf5f0 ScriptStringManager::~ScriptStringManager  [0x08acf5f0-0x8acf6ff] ===
 8acf5f0:	55                   	push   %ebp
 8acf5f1:	89 e5                	mov    %esp,%ebp
 8acf5f3:	57                   	push   %edi
 8acf5f4:	56                   	push   %esi
 8acf5f5:	53                   	push   %ebx
 8acf5f6:	83 ec 3c             	sub    $0x3c,%esp
 8acf5f9:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acf5fc:	8b 43 18             	mov    0x18(%ebx),%eax
 8acf5ff:	c7 03 70 ec e2 08    	movl   $0x8e2ec70,(%ebx)
 8acf605:	89 44 24 04          	mov    %eax,0x4(%esp)
 8acf609:	8d 43 10             	lea    0x10(%ebx),%eax
 8acf60c:	89 04 24             	mov    %eax,(%esp)
 8acf60f:	e8 38 d8 6a ff       	call   817ce4c <_ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsESaIS2_EE8_M_eraseEPSt13_Rb_tree_nodeIS2_E>
 8acf614:	8b 7b 08             	mov    0x8(%ebx),%edi
 8acf617:	8b 73 04             	mov    0x4(%ebx),%esi
 8acf61a:	39 f7                	cmp    %esi,%edi
 8acf61c:	74 1d                	je     8acf63b <_ZN19ScriptStringManagerD1Ev+0x4b>
 8acf61e:	ba 60 e5 07 08       	mov    $0x807e560,%edx
 8acf623:	90                   	nop
 8acf624:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi
 8acf628:	8b 06                	mov    (%esi),%eax
 8acf62a:	83 e8 0c             	sub    $0xc,%eax
 8acf62d:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8acf632:	75 1e                	jne    8acf652 <_ZN19ScriptStringManagerD1Ev+0x62>
 8acf634:	83 c6 04             	add    $0x4,%esi
 8acf637:	39 f7                	cmp    %esi,%edi
 8acf639:	75 ed                	jne    8acf628 <_ZN19ScriptStringManagerD1Ev+0x38>
 8acf63b:	8b 43 04             	mov    0x4(%ebx),%eax
 8acf63e:	85 c0                	test   %eax,%eax
 8acf640:	74 08                	je     8acf64a <_ZN19ScriptStringManagerD1Ev+0x5a>
 8acf642:	89 04 24             	mov    %eax,(%esp)
 8acf645:	e8 a6 4e c5 ff       	call   87244f0 <_ZdlPv>
 8acf64a:	83 c4 3c             	add    $0x3c,%esp
 8acf64d:	5b                   	pop    %ebx
 8acf64e:	5e                   	pop    %esi
 8acf64f:	5f                   	pop    %edi
 8acf650:	5d                   	pop    %ebp
 8acf651:	c3                   	ret
 8acf652:	85 d2                	test   %edx,%edx
 8acf654:	74 4f                	je     8acf6a5 <_ZN19ScriptStringManagerD1Ev+0xb5>
 8acf656:	83 c9 ff             	or     $0xffffffff,%ecx
 8acf659:	f0 0f c1 48 08       	lock xadd %ecx,0x8(%eax)
 8acf65e:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8acf661:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 8acf665:	7f cd                	jg     8acf634 <_ZN19ScriptStringManagerD1Ev+0x44>
 8acf667:	8d 4d e6             	lea    -0x1a(%ebp),%ecx
 8acf66a:	89 55 cc             	mov    %edx,-0x34(%ebp)
 8acf66d:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 8acf671:	89 04 24             	mov    %eax,(%esp)
 8acf674:	e8 a7 72 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acf679:	8b 55 cc             	mov    -0x34(%ebp),%edx
 8acf67c:	eb b6                	jmp    8acf634 <_ZN19ScriptStringManagerD1Ev+0x44>
 8acf67e:	89 45 d0             	mov    %eax,-0x30(%ebp)
 8acf681:	8b 43 08             	mov    0x8(%ebx),%eax
 8acf684:	bf 60 e5 07 08       	mov    $0x807e560,%edi
 8acf689:	8b 73 04             	mov    0x4(%ebx),%esi
 8acf68c:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8acf68f:	39 75 d4             	cmp    %esi,-0x2c(%ebp)
 8acf692:	74 40                	je     8acf6d4 <_ZN19ScriptStringManagerD1Ev+0xe4>
 8acf694:	8b 06                	mov    (%esi),%eax
 8acf696:	83 e8 0c             	sub    $0xc,%eax
 8acf699:	3d f0 cc 48 09       	cmp    $0x948ccf0,%eax
 8acf69e:	75 13                	jne    8acf6b3 <_ZN19ScriptStringManagerD1Ev+0xc3>
 8acf6a0:	83 c6 04             	add    $0x4,%esi
 8acf6a3:	eb ea                	jmp    8acf68f <_ZN19ScriptStringManagerD1Ev+0x9f>
 8acf6a5:	8b 48 08             	mov    0x8(%eax),%ecx
 8acf6a8:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
 8acf6ab:	83 e9 01             	sub    $0x1,%ecx
 8acf6ae:	89 48 08             	mov    %ecx,0x8(%eax)
 8acf6b1:	eb ae                	jmp    8acf661 <_ZN19ScriptStringManagerD1Ev+0x71>
 8acf6b3:	85 ff                	test   %edi,%edi
 8acf6b5:	74 37                	je     8acf6ee <_ZN19ScriptStringManagerD1Ev+0xfe>
 8acf6b7:	83 ca ff             	or     $0xffffffff,%edx
 8acf6ba:	f0 0f c1 50 08       	lock xadd %edx,0x8(%eax)
 8acf6bf:	85 d2                	test   %edx,%edx
 8acf6c1:	7f dd                	jg     8acf6a0 <_ZN19ScriptStringManagerD1Ev+0xb0>
 8acf6c3:	8d 55 e7             	lea    -0x19(%ebp),%edx
 8acf6c6:	89 54 24 04          	mov    %edx,0x4(%esp)
 8acf6ca:	89 04 24             	mov    %eax,(%esp)
 8acf6cd:	e8 4e 72 c3 ff       	call   8706920 <_ZNSs4_Rep10_M_destroyERKSaIcE>
 8acf6d2:	eb cc                	jmp    8acf6a0 <_ZN19ScriptStringManagerD1Ev+0xb0>
 8acf6d4:	8b 43 04             	mov    0x4(%ebx),%eax
 8acf6d7:	85 c0                	test   %eax,%eax
 8acf6d9:	74 08                	je     8acf6e3 <_ZN19ScriptStringManagerD1Ev+0xf3>
 8acf6db:	89 04 24             	mov    %eax,(%esp)
 8acf6de:	e8 0d 4e c5 ff       	call   87244f0 <_ZdlPv>
 8acf6e3:	8b 4d d0             	mov    -0x30(%ebp),%ecx
 8acf6e6:	89 0c 24             	mov    %ecx,(%esp)
 8acf6e9:	e8 62 40 01 00       	call   8ae3750 <_Unwind_Resume>
 8acf6ee:	8b 50 08             	mov    0x8(%eax),%edx
 8acf6f1:	8d 4a ff             	lea    -0x1(%edx),%ecx
 8acf6f4:	89 48 08             	mov    %ecx,0x8(%eax)
 8acf6f7:	eb c6                	jmp    8acf6bf <_ZN19ScriptStringManagerD1Ev+0xcf>
 8acf6f9:	90                   	nop
 8acf6fa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi

```

```c
// ScriptStringManager::~ScriptStringManager @ 0x8acf5f0

/* WARNING: Removing unreachable block (ram,0x08acf6a5) */
/* DWARF original prototype: void ~ScriptStringManager(ScriptStringManager * this, int __in_chrg) */

void __thiscall ScriptStringManager::~ScriptStringManager(ScriptStringManager *this,int __in_chrg)

{
  int *piVar1;
  int iVar2;
  _Base_ptr p_Var3;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar4;
  char *pcVar5;
  allocator *paVar6;
  basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *pbVar7;
  
  p_Var3 = (this->string_map_)._M_t._M_impl._M_header._M_parent;
  this->_vptr_ScriptStringManager = (_func_int_varargs **)&PTR__ScriptStringManager_08e2ec70;
                    /* try { // try from 08acf60f to 08acf613 has its CatchHandler @ 08acf67e */
  std::
  _Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
  ::_M_erase((_Rb_tree<std::string,std::pair<std::string_const,int>,std::_Select1st<std::pair<std::string_const,int>>,std::less<std::string>,std::allocator<std::pair<std::string_const,int>>>
              *)&this->string_map_,(_Rb_tree_node *)p_Var3);
  pbVar4 = (this->strings_).
           super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
           ._M_impl._M_finish;
  for (pbVar7 = (this->strings_).
                super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
                ._M_impl._M_start; pbVar4 != pbVar7; pbVar7 = pbVar7 + 1) {
    pcVar5 = (pbVar7->_M_dataplus)._M_p;
    paVar6 = (allocator *)(pcVar5 + -0xc);
    if (paVar6 != (allocator *)&std::string::_Rep::_S_empty_rep_storage) {
      LOCK();
      piVar1 = (int *)(pcVar5 + -4);
      iVar2 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar2 < 1) {
        std::string::_Rep::_M_destroy(paVar6);
      }
    }
  }
  pbVar4 = (this->strings_).
           super__Vector_base<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>,_std::allocator<std::basic_string<char,_std::char_traits<char>,_std::allocator<char>_>_>_>
           ._M_impl._M_start;
  if (pbVar4 != (basic_string<char,_std::char_traits<char>,_std::allocator<char>_> *)0x0) {
    operator_delete(pbVar4);
  }
  return;
}

```

---

## ~ScriptStringManager_08acf700

```asm
// === 08acf700 ScriptStringManager::~ScriptStringManager  [0x08acf700-0x8acf71f] ===
 8acf700:	55                   	push   %ebp
 8acf701:	89 e5                	mov    %esp,%ebp
 8acf703:	53                   	push   %ebx
 8acf704:	83 ec 14             	sub    $0x14,%esp
 8acf707:	8b 5d 08             	mov    0x8(%ebp),%ebx
 8acf70a:	89 1c 24             	mov    %ebx,(%esp)
 8acf70d:	e8 de fe ff ff       	call   8acf5f0 <_ZN19ScriptStringManagerD1Ev>
 8acf712:	89 5d 08             	mov    %ebx,0x8(%ebp)
 8acf715:	83 c4 14             	add    $0x14,%esp
 8acf718:	5b                   	pop    %ebx
 8acf719:	5d                   	pop    %ebp
 8acf71a:	e9 d1 4d c5 ff       	jmp    87244f0 <_ZdlPv>
 8acf71f:	90                   	nop

```

```c
// ScriptStringManager::~ScriptStringManager @ 0x8acf700

/* DWARF original prototype: void ~ScriptStringManager(ScriptStringManager * this, int __in_chrg) */

void __thiscall ScriptStringManager::~ScriptStringManager(ScriptStringManager *this,int __in_chrg)

{
  int in_stack_ffffffe8;
  
  ~ScriptStringManager(this,in_stack_ffffffe8);
  operator_delete(this);
  return;
}

```

