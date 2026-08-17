# user_creature__CCreatureScriptMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## CCreatureScriptMgr

```asm
// === 0833cb60 user_creature::CCreatureScriptMgr::CCreatureScriptMgr  [0x0833cb60-0x833cba5] ===
 833cb60:	55                   	push   %ebp
 833cb61:	89 e5                	mov    %esp,%ebp
 833cb63:	56                   	push   %esi
 833cb64:	53                   	push   %ebx
 833cb65:	83 ec 10             	sub    $0x10,%esp
 833cb68:	8b 45 08             	mov    0x8(%ebp),%eax
 833cb6b:	89 04 24             	mov    %eax,(%esp)
 833cb6e:	e8 f1 a0 d8 ff       	call   80c6c64 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 833cb73:	8b 45 08             	mov    0x8(%ebp),%eax
 833cb76:	83 c0 18             	add    $0x18,%eax
 833cb79:	89 04 24             	mov    %eax,(%esp)
 833cb7c:	e8 b9 4d 00 00       	call   834193a <_ZNSt3mapIiPN13user_creature15CCreatureScriptESt4lessIiESaISt4pairIKiS2_EEEC1Ev>
 833cb81:	eb 1b                	jmp    833cb9e <_ZN13user_creature18CCreatureScriptMgrC1Ev+0x3e>
 833cb83:	89 d3                	mov    %edx,%ebx
 833cb85:	89 c6                	mov    %eax,%esi
 833cb87:	8b 45 08             	mov    0x8(%ebp),%eax
 833cb8a:	89 04 24             	mov    %eax,(%esp)
 833cb8d:	e8 34 9f d8 ff       	call   80c6ac6 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 833cb92:	89 f0                	mov    %esi,%eax
 833cb94:	89 da                	mov    %ebx,%edx
 833cb96:	89 04 24             	mov    %eax,(%esp)
 833cb99:	e8 b2 6b 7a 00       	call   8ae3750 <_Unwind_Resume>
 833cb9e:	83 c4 10             	add    $0x10,%esp
 833cba1:	5b                   	pop    %ebx
 833cba2:	5e                   	pop    %esi
 833cba3:	5d                   	pop    %ebp
 833cba4:	c3                   	ret
 833cba5:	90                   	nop

```

```c
// user_creature::CCreatureScriptMgr::CCreatureScriptMgr @ 0x833cb60

/* user_creature::CCreatureScriptMgr::CCreatureScriptMgr() */

void __thiscall user_creature::CCreatureScriptMgr::CCreatureScriptMgr(CCreatureScriptMgr *this)

{
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::map
            ((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
                    /* try { // try from 0833cb7c to 0833cb80 has its CatchHandler @ 0833cb83 */
  std::
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  ::map((map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
         *)(this + 0x18));
  return;
}

```

---

## Destroy

```asm
// === 0833d3bc user_creature::CCreatureScriptMgr::Destroy  [0x0833d3bc-0x833d499] ===
 833d3bc:	55                   	push   %ebp
 833d3bd:	89 e5                	mov    %esp,%ebp
 833d3bf:	53                   	push   %ebx
 833d3c0:	83 ec 24             	sub    $0x24,%esp
 833d3c3:	8b 45 08             	mov    0x8(%ebp),%eax
 833d3c6:	83 c0 18             	add    $0x18,%eax
 833d3c9:	89 04 24             	mov    %eax,(%esp)
 833d3cc:	e8 fb 5a 00 00       	call   8342ecc <_ZNKSt3mapIiPN13user_creature15CCreatureScriptESt4lessIiESaISt4pairIKiS2_EEE4sizeEv>
 833d3d1:	85 c0                	test   %eax,%eax
 833d3d3:	0f 94 c0             	sete   %al
 833d3d6:	84 c0                	test   %al,%al
 833d3d8:	0f 85 b5 00 00 00    	jne    833d493 <_ZN13user_creature18CCreatureScriptMgr7DestroyEv+0xd7>
 833d3de:	8b 45 08             	mov    0x8(%ebp),%eax
 833d3e1:	8d 50 18             	lea    0x18(%eax),%edx
 833d3e4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833d3e7:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d3eb:	89 04 24             	mov    %eax,(%esp)
 833d3ee:	e8 ed 5a 00 00       	call   8342ee0 <_ZNSt3mapIiPN13user_creature15CCreatureScriptESt4lessIiESaISt4pairIKiS2_EEE5beginEv>
 833d3f3:	83 ec 04             	sub    $0x4,%esp
 833d3f6:	eb 59                	jmp    833d451 <_ZN13user_creature18CCreatureScriptMgr7DestroyEv+0x95>
 833d3f8:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 833d3ff:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833d402:	89 04 24             	mov    %eax,(%esp)
 833d405:	e8 3a 5b 00 00       	call   8342f44 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature15CCreatureScriptEEEptEv>
 833d40a:	8b 40 04             	mov    0x4(%eax),%eax
 833d40d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 833d410:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 833d414:	74 1e                	je     833d434 <_ZN13user_creature18CCreatureScriptMgr7DestroyEv+0x78>
 833d416:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 833d419:	85 db                	test   %ebx,%ebx
 833d41b:	74 10                	je     833d42d <_ZN13user_creature18CCreatureScriptMgr7DestroyEv+0x71>
 833d41d:	89 1c 24             	mov    %ebx,(%esp)
 833d420:	e8 23 f4 ff ff       	call   833c848 <_ZN13user_creature15CCreatureScriptD1Ev>
 833d425:	89 1c 24             	mov    %ebx,(%esp)
 833d428:	e8 c3 70 3e 00       	call   87244f0 <_ZdlPv>
 833d42d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 833d434:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833d437:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833d43e:	00 
 833d43f:	8d 55 e8             	lea    -0x18(%ebp),%edx
 833d442:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d446:	89 04 24             	mov    %eax,(%esp)
 833d449:	e8 b8 5a 00 00       	call   8342f06 <_ZNSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature15CCreatureScriptEEEppEi>
 833d44e:	83 ec 04             	sub    $0x4,%esp
 833d451:	8b 45 08             	mov    0x8(%ebp),%eax
 833d454:	8d 50 18             	lea    0x18(%eax),%edx
 833d457:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833d45a:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d45e:	89 04 24             	mov    %eax,(%esp)
 833d461:	e8 92 59 00 00       	call   8342df8 <_ZNSt3mapIiPN13user_creature15CCreatureScriptESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 833d466:	83 ec 04             	sub    $0x4,%esp
 833d469:	8d 45 ec             	lea    -0x14(%ebp),%eax
 833d46c:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d470:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833d473:	89 04 24             	mov    %eax,(%esp)
 833d476:	e8 a3 59 00 00       	call   8342e1e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature15CCreatureScriptEEEneERKS6_>
 833d47b:	84 c0                	test   %al,%al
 833d47d:	0f 85 75 ff ff ff    	jne    833d3f8 <_ZN13user_creature18CCreatureScriptMgr7DestroyEv+0x3c>
 833d483:	8b 45 08             	mov    0x8(%ebp),%eax
 833d486:	83 c0 18             	add    $0x18,%eax
 833d489:	89 04 24             	mov    %eax,(%esp)
 833d48c:	e8 c1 5a 00 00       	call   8342f52 <_ZNSt3mapIiPN13user_creature15CCreatureScriptESt4lessIiESaISt4pairIKiS2_EEE5clearEv>
 833d491:	eb 01                	jmp    833d494 <_ZN13user_creature18CCreatureScriptMgr7DestroyEv+0xd8>
 833d493:	90                   	nop
 833d494:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 833d497:	c9                   	leave
 833d498:	c3                   	ret
 833d499:	90                   	nop

```

```c
// user_creature::CCreatureScriptMgr::Destroy @ 0x833d3bc

/* user_creature::CCreatureScriptMgr::Destroy() */

void __thiscall user_creature::CCreatureScriptMgr::Destroy(CCreatureScriptMgr *this)

{
  CCreatureScript *this_00;
  char cVar1;
  int iVar2;
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  local_1c [4];
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  local_18 [4];
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>> local_14 [4];
  CCreatureScript *local_10;
  
  iVar2 = std::
          map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
          ::size((map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
                  *)(this + 0x18));
  if (iVar2 != 0) {
    std::
    map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
    ::begin(local_1c);
    while( true ) {
      std::
      map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
      ::end(local_18);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>>::
              operator!=((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>> *)
                         local_1c,(_Rb_tree_iterator *)local_18);
      if (cVar1 == '\0') break;
      local_10 = (CCreatureScript *)0x0;
      iVar2 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>>::
              operator->((_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>> *)
                         local_1c);
      this_00 = *(CCreatureScript **)(iVar2 + 4);
      local_10 = this_00;
      if (this_00 != (CCreatureScript *)0x0) {
        if (this_00 != (CCreatureScript *)0x0) {
          CCreatureScript::~CCreatureScript(this_00);
          operator_delete(this_00);
        }
        local_10 = (CCreatureScript *)0x0;
      }
      std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>>::operator++
                (local_14,(int)local_1c);
    }
    std::
    map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
    ::clear((map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
             *)(this + 0x18));
  }
  return;
}

```

---

## FindCreatureScript

```asm
// === 0833d49a user_creature::CCreatureScriptMgr::FindCreatureScript  [0x0833d49a-0x833d549] ===
 833d49a:	55                   	push   %ebp
 833d49b:	89 e5                	mov    %esp,%ebp
 833d49d:	83 ec 38             	sub    $0x38,%esp
 833d4a0:	8b 45 08             	mov    0x8(%ebp),%eax
 833d4a3:	8d 48 18             	lea    0x18(%eax),%ecx
 833d4a6:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833d4a9:	8d 55 0c             	lea    0xc(%ebp),%edx
 833d4ac:	89 54 24 08          	mov    %edx,0x8(%esp)
 833d4b0:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 833d4b4:	89 04 24             	mov    %eax,(%esp)
 833d4b7:	e8 10 59 00 00       	call   8342dcc <_ZNSt3mapIiPN13user_creature15CCreatureScriptESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 833d4bc:	83 ec 04             	sub    $0x4,%esp
 833d4bf:	8b 45 08             	mov    0x8(%ebp),%eax
 833d4c2:	8d 50 18             	lea    0x18(%eax),%edx
 833d4c5:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833d4c8:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d4cc:	89 04 24             	mov    %eax,(%esp)
 833d4cf:	e8 24 59 00 00       	call   8342df8 <_ZNSt3mapIiPN13user_creature15CCreatureScriptESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 833d4d4:	83 ec 04             	sub    $0x4,%esp
 833d4d7:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 833d4da:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d4de:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833d4e1:	89 04 24             	mov    %eax,(%esp)
 833d4e4:	e8 7d 5a 00 00       	call   8342f66 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature15CCreatureScriptEEEeqERKS6_>
 833d4e9:	84 c0                	test   %al,%al
 833d4eb:	74 4d                	je     833d53a <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi+0xa0>
 833d4ed:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833d4f4:	00 
 833d4f5:	c7 44 24 08 e8 0f 00 	movl   $0xfe8,0x8(%esp)
 833d4fc:	00 
 833d4fd:	c7 44 24 04 60 eb c2 	movl   $0x8c2eb60,0x4(%esp)
 833d504:	08 
 833d505:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833d508:	89 04 24             	mov    %eax,(%esp)
 833d50b:	e8 08 22 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833d510:	c7 44 24 0c e8 0f 00 	movl   $0xfe8,0xc(%esp)
 833d517:	00 
 833d518:	c7 44 24 08 60 eb c2 	movl   $0x8c2eb60,0x8(%esp)
 833d51f:	08 
 833d520:	c7 44 24 04 61 d7 c2 	movl   $0x8c2d761,0x4(%esp)
 833d527:	08 
 833d528:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833d52b:	89 04 24             	mov    %eax,(%esp)
 833d52e:	e8 55 22 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833d533:	b8 00 00 00 00       	mov    $0x0,%eax
 833d538:	eb 0e                	jmp    833d548 <_ZN13user_creature18CCreatureScriptMgr18FindCreatureScriptEi+0xae>
 833d53a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833d53d:	89 04 24             	mov    %eax,(%esp)
 833d540:	e8 ff 59 00 00       	call   8342f44 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature15CCreatureScriptEEEptEv>
 833d545:	8b 40 04             	mov    0x4(%eax),%eax
 833d548:	c9                   	leave
 833d549:	c3                   	ret

```

```c
// user_creature::CCreatureScriptMgr::FindCreatureScript @ 0x833d49a

/* user_creature::CCreatureScriptMgr::FindCreatureScript(int) */

undefined4 user_creature::CCreatureScriptMgr::FindCreatureScript(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>> local_24 [4];
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  local_20 [4];
  cMyTrace local_1c [24];
  
  std::
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  ::find((int *)local_24);
  std::
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  ::end(local_20);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>>::operator==
                    (local_24,(_Rb_tree_iterator *)local_20);
  if (cVar1 == '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>>::operator->
                      (local_24);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    cMyTrace::cMyTrace(local_1c,
                       "user_creature::CCreatureScript* user_creature::CCreatureScriptMgr::FindCreatureScript(int)"
                       ,0xfe8,5);
    cMyTrace::operator()
              (local_1c,"[%s][%d]",
               "user_creature::CCreatureScript* user_creature::CCreatureScriptMgr::FindCreatureScript(int)"
               ,0xfe8);
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## LoadCreatureScriptFile

```asm
// === 0833cba6 user_creature::CCreatureScriptMgr::LoadCreatureScriptFile  [0x0833cba6-0x833d3bb] ===
 833cba6:	55                   	push   %ebp
 833cba7:	89 e5                	mov    %esp,%ebp
 833cba9:	57                   	push   %edi
 833cbaa:	56                   	push   %esi
 833cbab:	53                   	push   %ebx
 833cbac:	81 ec cc 06 00 00    	sub    $0x6cc,%esp
 833cbb2:	c7 45 a0 00 00 00 00 	movl   $0x0,-0x60(%ebp)
 833cbb9:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
 833cbbf:	89 04 24             	mov    %eax,(%esp)
 833cbc2:	e8 e5 19 00 00       	call   833e5ac <_ZN14CreatureScriptC1Ev>
 833cbc7:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 833cbce:	8d 9d 90 fe ff ff    	lea    -0x170(%ebp),%ebx
 833cbd4:	b8 00 00 00 00       	mov    $0x0,%eax
 833cbd9:	ba 40 00 00 00       	mov    $0x40,%edx
 833cbde:	89 df                	mov    %ebx,%edi
 833cbe0:	89 d1                	mov    %edx,%ecx
 833cbe2:	f3 ab                	rep stos %eax,%es:(%edi)
 833cbe4:	8d 9d 90 fd ff ff    	lea    -0x270(%ebp),%ebx
 833cbea:	b8 00 00 00 00       	mov    $0x0,%eax
 833cbef:	ba 40 00 00 00       	mov    $0x40,%edx
 833cbf4:	89 df                	mov    %ebx,%edi
 833cbf6:	89 d1                	mov    %edx,%ecx
 833cbf8:	f3 ab                	rep stos %eax,%es:(%edi)
 833cbfa:	8d 9d 90 fc ff ff    	lea    -0x370(%ebp),%ebx
 833cc00:	b8 00 00 00 00       	mov    $0x0,%eax
 833cc05:	ba 40 00 00 00       	mov    $0x40,%edx
 833cc0a:	89 df                	mov    %ebx,%edi
 833cc0c:	89 d1                	mov    %edx,%ecx
 833cc0e:	f3 ab                	rep stos %eax,%es:(%edi)
 833cc10:	8d 85 5c fb ff ff    	lea    -0x4a4(%ebp),%eax
 833cc16:	89 04 24             	mov    %eax,(%esp)
 833cc19:	e8 5e 37 55 00       	call   889037c <_ZN10AttackInfoC1Ev>
 833cc1e:	e8 91 ff 2d 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 833cc23:	89 04 24             	mov    %eax,(%esp)
 833cc26:	e8 65 77 2e 00       	call   8624390 <_ZN11sync_script11CSyncScript28truncate_creature_info_tableEv>
 833cc2b:	83 f0 01             	xor    $0x1,%eax
 833cc2e:	84 c0                	test   %al,%al
 833cc30:	74 16                	je     833cc48 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0xa2>
 833cc32:	c7 04 24 3c db c2 08 	movl   $0x8c2db3c,(%esp)
 833cc39:	e8 32 19 d4 ff       	call   807e570 <puts@plt>
 833cc3e:	bb 00 00 00 00       	mov    $0x0,%ebx
 833cc43:	e9 2a 07 00 00       	jmp    833d372 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x7cc>
 833cc48:	8d 45 9c             	lea    -0x64(%ebp),%eax
 833cc4b:	c7 44 24 04 e0 f5 4f 	movl   $0x94ff5e0,0x4(%esp)
 833cc52:	09 
 833cc53:	89 04 24             	mov    %eax,(%esp)
 833cc56:	e8 97 94 da ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 833cc5b:	83 ec 04             	sub    $0x4,%esp
 833cc5e:	e9 bd 06 00 00       	jmp    833d320 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x77a>
 833cc63:	8d 45 9c             	lea    -0x64(%ebp),%eax
 833cc66:	89 04 24             	mov    %eax,(%esp)
 833cc69:	e8 4a 95 da ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 833cc6e:	83 c0 04             	add    $0x4,%eax
 833cc71:	89 04 24             	mov    %eax,(%esp)
 833cc74:	e8 77 98 3c 00       	call   87064f0 <_ZNKSs5c_strEv>
 833cc79:	89 45 e0             	mov    %eax,-0x20(%ebp)
 833cc7c:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
 833cc80:	0f 84 cc 06 00 00    	je     833d352 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x7ac>
 833cc86:	8b 45 e0             	mov    -0x20(%ebp),%eax
 833cc89:	89 44 24 04          	mov    %eax,0x4(%esp)
 833cc8d:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
 833cc93:	89 04 24             	mov    %eax,(%esp)
 833cc96:	e8 ac 91 6f 00       	call   8a35e47 <_Z20importCreatureScriptP14CreatureScriptPKc>
 833cc9b:	83 f0 01             	xor    $0x1,%eax
 833cc9e:	84 c0                	test   %al,%al
 833cca0:	74 3d                	je     833ccdf <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x139>
 833cca2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 833cca5:	89 44 24 14          	mov    %eax,0x14(%esp)
 833cca9:	c7 44 24 10 64 db c2 	movl   $0x8c2db64,0x10(%esp)
 833ccb0:	08 
 833ccb1:	c7 44 24 0c 6b 0f 00 	movl   $0xf6b,0xc(%esp)
 833ccb8:	00 
 833ccb9:	c7 44 24 08 c0 eb c2 	movl   $0x8c2ebc0,0x8(%esp)
 833ccc0:	08 
 833ccc1:	c7 44 24 04 6a d7 c2 	movl   $0x8c2d76a,0x4(%esp)
 833ccc8:	08 
 833ccc9:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 833ccd0:	e8 35 6f 79 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 833ccd5:	bb 00 00 00 00       	mov    $0x0,%ebx
 833ccda:	e9 93 06 00 00       	jmp    833d372 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x7cc>
 833ccdf:	e8 d0 fe 2d 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 833cce4:	89 04 24             	mov    %eax,(%esp)
 833cce7:	e8 1c a5 f6 ff       	call   82a7208 <_ZN11sync_script11CSyncScript8IsEnableEv>
 833ccec:	84 c0                	test   %al,%al
 833ccee:	0f 84 51 04 00 00    	je     833d145 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x59f>
 833ccf4:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
 833ccfa:	05 1c 01 00 00       	add    $0x11c,%eax
 833ccff:	89 04 24             	mov    %eax,(%esp)
 833cd02:	e8 89 ad ef ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 833cd07:	85 c0                	test   %eax,%eax
 833cd09:	0f 95 c0             	setne  %al
 833cd0c:	84 c0                	test   %al,%al
 833cd0e:	0f 84 08 02 00 00    	je     833cf1c <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x376>
 833cd14:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 833cd1b:	00 
 833cd1c:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
 833cd22:	05 1c 01 00 00       	add    $0x11c,%eax
 833cd27:	89 04 24             	mov    %eax,(%esp)
 833cd2a:	e8 d1 5f 00 00       	call   8342d00 <_ZNSt6vectorISsSaISsEE2atEj>
 833cd2f:	89 04 24             	mov    %eax,(%esp)
 833cd32:	e8 b9 97 3c 00       	call   87064f0 <_ZNKSs5c_strEv>
 833cd37:	0f b6 00             	movzbl (%eax),%eax
 833cd3a:	84 c0                	test   %al,%al
 833cd3c:	0f 95 c0             	setne  %al
 833cd3f:	84 c0                	test   %al,%al
 833cd41:	0f 84 d5 01 00 00    	je     833cf1c <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x376>
 833cd47:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 833cd4e:	00 
 833cd4f:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
 833cd55:	05 1c 01 00 00       	add    $0x11c,%eax
 833cd5a:	89 04 24             	mov    %eax,(%esp)
 833cd5d:	e8 9e 5f 00 00       	call   8342d00 <_ZNSt6vectorISsSaISsEE2atEj>
 833cd62:	89 04 24             	mov    %eax,(%esp)
 833cd65:	e8 86 97 3c 00       	call   87064f0 <_ZNKSs5c_strEv>
 833cd6a:	89 c3                	mov    %eax,%ebx
 833cd6c:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
 833cd72:	05 70 01 00 00       	add    $0x170,%eax
 833cd77:	89 04 24             	mov    %eax,(%esp)
 833cd7a:	e8 71 97 3c 00       	call   87064f0 <_ZNKSs5c_strEv>
 833cd7f:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 833cd83:	89 44 24 08          	mov    %eax,0x8(%esp)
 833cd87:	c7 44 24 04 88 db c2 	movl   $0x8c2db88,0x4(%esp)
 833cd8e:	08 
 833cd8f:	8d 85 90 fe ff ff    	lea    -0x170(%ebp),%eax
 833cd95:	89 04 24             	mov    %eax,(%esp)
 833cd98:	e8 a3 16 d4 ff       	call   807e440 <sprintf@plt>
 833cd9d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833cda4:	00 
 833cda5:	8d 85 90 fe ff ff    	lea    -0x170(%ebp),%eax
 833cdab:	89 44 24 04          	mov    %eax,0x4(%esp)
 833cdaf:	8d 85 5c fb ff ff    	lea    -0x4a4(%ebp),%eax
 833cdb5:	89 04 24             	mov    %eax,(%esp)
 833cdb8:	e8 9d 46 59 00       	call   88d145a <_Z22ImportAttackInfoScriptP10AttackInfoPKci>
 833cdbd:	84 c0                	test   %al,%al
 833cdbf:	0f 84 2d 01 00 00    	je     833cef2 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x34c>
 833cdc5:	8b 85 6c fb ff ff    	mov    -0x494(%ebp),%eax
 833cdcb:	89 c1                	mov    %eax,%ecx
 833cdcd:	d9 85 5c fb ff ff    	flds   -0x4a4(%ebp)
 833cdd3:	8b 95 a8 f9 ff ff    	mov    -0x658(%ebp),%edx
 833cdd9:	8b 85 b0 f9 ff ff    	mov    -0x650(%ebp),%eax
 833cddf:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 833cde3:	dd 5c 24 10          	fstpl  0x10(%esp)
 833cde7:	89 54 24 0c          	mov    %edx,0xc(%esp)
 833cdeb:	89 44 24 08          	mov    %eax,0x8(%esp)
 833cdef:	c7 44 24 04 8d db c2 	movl   $0x8c2db8d,0x4(%esp)
 833cdf6:	08 
 833cdf7:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 833cdfd:	89 04 24             	mov    %eax,(%esp)
 833ce00:	e8 3b 16 d4 ff       	call   807e440 <sprintf@plt>
 833ce05:	8d 85 5c fb ff ff    	lea    -0x4a4(%ebp),%eax
 833ce0b:	05 a4 00 00 00       	add    $0xa4,%eax
 833ce10:	89 04 24             	mov    %eax,(%esp)
 833ce13:	e8 14 5f 00 00       	call   8342d2c <_ZNKSt3setI12ENUM_ELEMENTSt4lessIS0_ESaIS0_EE4sizeEv>
 833ce18:	85 c0                	test   %eax,%eax
 833ce1a:	0f 94 c0             	sete   %al
 833ce1d:	84 c0                	test   %al,%al
 833ce1f:	74 35                	je     833ce56 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x2b0>
 833ce21:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 833ce27:	89 04 24             	mov    %eax,(%esp)
 833ce2a:	e8 81 15 d4 ff       	call   807e3b0 <strlen@plt>
 833ce2f:	89 c2                	mov    %eax,%edx
 833ce31:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 833ce37:	01 d0                	add    %edx,%eax
 833ce39:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 833ce40:	00 
 833ce41:	c7 44 24 04 99 db c2 	movl   $0x8c2db99,0x4(%esp)
 833ce48:	08 
 833ce49:	89 04 24             	mov    %eax,(%esp)
 833ce4c:	e8 ef 15 d4 ff       	call   807e440 <sprintf@plt>
 833ce51:	e9 c6 00 00 00       	jmp    833cf1c <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x376>
 833ce56:	8d 45 94             	lea    -0x6c(%ebp),%eax
 833ce59:	8d 95 5c fb ff ff    	lea    -0x4a4(%ebp),%edx
 833ce5f:	81 c2 a4 00 00 00    	add    $0xa4,%edx
 833ce65:	89 54 24 04          	mov    %edx,0x4(%esp)
 833ce69:	89 04 24             	mov    %eax,(%esp)
 833ce6c:	e8 cf 5e 00 00       	call   8342d40 <_ZNKSt3setI12ENUM_ELEMENTSt4lessIS0_ESaIS0_EE5beginEv>
 833ce71:	83 ec 04             	sub    $0x4,%esp
 833ce74:	eb 46                	jmp    833cebc <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x316>
 833ce76:	8d 45 94             	lea    -0x6c(%ebp),%eax
 833ce79:	89 04 24             	mov    %eax,(%esp)
 833ce7c:	e8 3d 5f 00 00       	call   8342dbe <_ZNKSt23_Rb_tree_const_iteratorI12ENUM_ELEMENTEdeEv>
 833ce81:	8b 00                	mov    (%eax),%eax
 833ce83:	89 c3                	mov    %eax,%ebx
 833ce85:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 833ce8b:	89 04 24             	mov    %eax,(%esp)
 833ce8e:	e8 1d 15 d4 ff       	call   807e3b0 <strlen@plt>
 833ce93:	89 c2                	mov    %eax,%edx
 833ce95:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 833ce9b:	01 d0                	add    %edx,%eax
 833ce9d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833cea1:	c7 44 24 04 99 db c2 	movl   $0x8c2db99,0x4(%esp)
 833cea8:	08 
 833cea9:	89 04 24             	mov    %eax,(%esp)
 833ceac:	e8 8f 15 d4 ff       	call   807e440 <sprintf@plt>
 833ceb1:	8d 45 94             	lea    -0x6c(%ebp),%eax
 833ceb4:	89 04 24             	mov    %eax,(%esp)
 833ceb7:	e8 e4 5e 00 00       	call   8342da0 <_ZNSt23_Rb_tree_const_iteratorI12ENUM_ELEMENTEppEv>
 833cebc:	8d 45 a8             	lea    -0x58(%ebp),%eax
 833cebf:	8d 95 5c fb ff ff    	lea    -0x4a4(%ebp),%edx
 833cec5:	81 c2 a4 00 00 00    	add    $0xa4,%edx
 833cecb:	89 54 24 04          	mov    %edx,0x4(%esp)
 833cecf:	89 04 24             	mov    %eax,(%esp)
 833ced2:	e8 8f 5e 00 00       	call   8342d66 <_ZNKSt3setI12ENUM_ELEMENTSt4lessIS0_ESaIS0_EE3endEv>
 833ced7:	83 ec 04             	sub    $0x4,%esp
 833ceda:	8d 45 a8             	lea    -0x58(%ebp),%eax
 833cedd:	89 44 24 04          	mov    %eax,0x4(%esp)
 833cee1:	8d 45 94             	lea    -0x6c(%ebp),%eax
 833cee4:	89 04 24             	mov    %eax,(%esp)
 833cee7:	e8 a0 5e 00 00       	call   8342d8c <_ZNKSt23_Rb_tree_const_iteratorI12ENUM_ELEMENTEneERKS1_>
 833ceec:	84 c0                	test   %al,%al
 833ceee:	75 86                	jne    833ce76 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x2d0>
 833cef0:	eb 2a                	jmp    833cf1c <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x376>
 833cef2:	8b 95 a8 f9 ff ff    	mov    -0x658(%ebp),%edx
 833cef8:	8b 85 b0 f9 ff ff    	mov    -0x650(%ebp),%eax
 833cefe:	89 54 24 0c          	mov    %edx,0xc(%esp)
 833cf02:	89 44 24 08          	mov    %eax,0x8(%esp)
 833cf06:	c7 44 24 04 9d db c2 	movl   $0x8c2db9d,0x4(%esp)
 833cf0d:	08 
 833cf0e:	8d 85 90 fd ff ff    	lea    -0x270(%ebp),%eax
 833cf14:	89 04 24             	mov    %eax,(%esp)
 833cf17:	e8 24 15 d4 ff       	call   807e440 <sprintf@plt>
 833cf1c:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
 833cf22:	05 1c 01 00 00       	add    $0x11c,%eax
 833cf27:	89 04 24             	mov    %eax,(%esp)
 833cf2a:	e8 61 ab ef ff       	call   8237a90 <_ZNKSt6vectorISsSaISsEE4sizeEv>
 833cf2f:	83 f8 01             	cmp    $0x1,%eax
 833cf32:	0f 97 c0             	seta   %al
 833cf35:	84 c0                	test   %al,%al
 833cf37:	0f 84 08 02 00 00    	je     833d145 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x59f>
 833cf3d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 833cf44:	00 
 833cf45:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
 833cf4b:	05 1c 01 00 00       	add    $0x11c,%eax
 833cf50:	89 04 24             	mov    %eax,(%esp)
 833cf53:	e8 a8 5d 00 00       	call   8342d00 <_ZNSt6vectorISsSaISsEE2atEj>
 833cf58:	89 04 24             	mov    %eax,(%esp)
 833cf5b:	e8 90 95 3c 00       	call   87064f0 <_ZNKSs5c_strEv>
 833cf60:	0f b6 00             	movzbl (%eax),%eax
 833cf63:	84 c0                	test   %al,%al
 833cf65:	0f 95 c0             	setne  %al
 833cf68:	84 c0                	test   %al,%al
 833cf6a:	0f 84 d5 01 00 00    	je     833d145 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x59f>
 833cf70:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 833cf77:	00 
 833cf78:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
 833cf7e:	05 1c 01 00 00       	add    $0x11c,%eax
 833cf83:	89 04 24             	mov    %eax,(%esp)
 833cf86:	e8 75 5d 00 00       	call   8342d00 <_ZNSt6vectorISsSaISsEE2atEj>
 833cf8b:	89 04 24             	mov    %eax,(%esp)
 833cf8e:	e8 5d 95 3c 00       	call   87064f0 <_ZNKSs5c_strEv>
 833cf93:	89 c3                	mov    %eax,%ebx
 833cf95:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
 833cf9b:	05 70 01 00 00       	add    $0x170,%eax
 833cfa0:	89 04 24             	mov    %eax,(%esp)
 833cfa3:	e8 48 95 3c 00       	call   87064f0 <_ZNKSs5c_strEv>
 833cfa8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 833cfac:	89 44 24 08          	mov    %eax,0x8(%esp)
 833cfb0:	c7 44 24 04 88 db c2 	movl   $0x8c2db88,0x4(%esp)
 833cfb7:	08 
 833cfb8:	8d 85 90 fe ff ff    	lea    -0x170(%ebp),%eax
 833cfbe:	89 04 24             	mov    %eax,(%esp)
 833cfc1:	e8 7a 14 d4 ff       	call   807e440 <sprintf@plt>
 833cfc6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833cfcd:	00 
 833cfce:	8d 85 90 fe ff ff    	lea    -0x170(%ebp),%eax
 833cfd4:	89 44 24 04          	mov    %eax,0x4(%esp)
 833cfd8:	8d 85 5c fb ff ff    	lea    -0x4a4(%ebp),%eax
 833cfde:	89 04 24             	mov    %eax,(%esp)
 833cfe1:	e8 74 44 59 00       	call   88d145a <_Z22ImportAttackInfoScriptP10AttackInfoPKci>
 833cfe6:	84 c0                	test   %al,%al
 833cfe8:	0f 84 2d 01 00 00    	je     833d11b <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x575>
 833cfee:	8b 85 6c fb ff ff    	mov    -0x494(%ebp),%eax
 833cff4:	89 c1                	mov    %eax,%ecx
 833cff6:	d9 85 5c fb ff ff    	flds   -0x4a4(%ebp)
 833cffc:	8b 95 ac f9 ff ff    	mov    -0x654(%ebp),%edx
 833d002:	8b 85 b4 f9 ff ff    	mov    -0x64c(%ebp),%eax
 833d008:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 833d00c:	dd 5c 24 10          	fstpl  0x10(%esp)
 833d010:	89 54 24 0c          	mov    %edx,0xc(%esp)
 833d014:	89 44 24 08          	mov    %eax,0x8(%esp)
 833d018:	c7 44 24 04 8d db c2 	movl   $0x8c2db8d,0x4(%esp)
 833d01f:	08 
 833d020:	8d 85 90 fc ff ff    	lea    -0x370(%ebp),%eax
 833d026:	89 04 24             	mov    %eax,(%esp)
 833d029:	e8 12 14 d4 ff       	call   807e440 <sprintf@plt>
 833d02e:	8d 85 5c fb ff ff    	lea    -0x4a4(%ebp),%eax
 833d034:	05 a4 00 00 00       	add    $0xa4,%eax
 833d039:	89 04 24             	mov    %eax,(%esp)
 833d03c:	e8 eb 5c 00 00       	call   8342d2c <_ZNKSt3setI12ENUM_ELEMENTSt4lessIS0_ESaIS0_EE4sizeEv>
 833d041:	85 c0                	test   %eax,%eax
 833d043:	0f 94 c0             	sete   %al
 833d046:	84 c0                	test   %al,%al
 833d048:	74 35                	je     833d07f <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x4d9>
 833d04a:	8d 85 90 fc ff ff    	lea    -0x370(%ebp),%eax
 833d050:	89 04 24             	mov    %eax,(%esp)
 833d053:	e8 58 13 d4 ff       	call   807e3b0 <strlen@plt>
 833d058:	89 c2                	mov    %eax,%edx
 833d05a:	8d 85 90 fc ff ff    	lea    -0x370(%ebp),%eax
 833d060:	01 d0                	add    %edx,%eax
 833d062:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 833d069:	00 
 833d06a:	c7 44 24 04 99 db c2 	movl   $0x8c2db99,0x4(%esp)
 833d071:	08 
 833d072:	89 04 24             	mov    %eax,(%esp)
 833d075:	e8 c6 13 d4 ff       	call   807e440 <sprintf@plt>
 833d07a:	e9 c6 00 00 00       	jmp    833d145 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x59f>
 833d07f:	8d 45 90             	lea    -0x70(%ebp),%eax
 833d082:	8d 95 5c fb ff ff    	lea    -0x4a4(%ebp),%edx
 833d088:	81 c2 a4 00 00 00    	add    $0xa4,%edx
 833d08e:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d092:	89 04 24             	mov    %eax,(%esp)
 833d095:	e8 a6 5c 00 00       	call   8342d40 <_ZNKSt3setI12ENUM_ELEMENTSt4lessIS0_ESaIS0_EE5beginEv>
 833d09a:	83 ec 04             	sub    $0x4,%esp
 833d09d:	eb 46                	jmp    833d0e5 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x53f>
 833d09f:	8d 45 90             	lea    -0x70(%ebp),%eax
 833d0a2:	89 04 24             	mov    %eax,(%esp)
 833d0a5:	e8 14 5d 00 00       	call   8342dbe <_ZNKSt23_Rb_tree_const_iteratorI12ENUM_ELEMENTEdeEv>
 833d0aa:	8b 00                	mov    (%eax),%eax
 833d0ac:	89 c3                	mov    %eax,%ebx
 833d0ae:	8d 85 90 fc ff ff    	lea    -0x370(%ebp),%eax
 833d0b4:	89 04 24             	mov    %eax,(%esp)
 833d0b7:	e8 f4 12 d4 ff       	call   807e3b0 <strlen@plt>
 833d0bc:	89 c2                	mov    %eax,%edx
 833d0be:	8d 85 90 fc ff ff    	lea    -0x370(%ebp),%eax
 833d0c4:	01 d0                	add    %edx,%eax
 833d0c6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 833d0ca:	c7 44 24 04 99 db c2 	movl   $0x8c2db99,0x4(%esp)
 833d0d1:	08 
 833d0d2:	89 04 24             	mov    %eax,(%esp)
 833d0d5:	e8 66 13 d4 ff       	call   807e440 <sprintf@plt>
 833d0da:	8d 45 90             	lea    -0x70(%ebp),%eax
 833d0dd:	89 04 24             	mov    %eax,(%esp)
 833d0e0:	e8 bb 5c 00 00       	call   8342da0 <_ZNSt23_Rb_tree_const_iteratorI12ENUM_ELEMENTEppEv>
 833d0e5:	8d 45 ac             	lea    -0x54(%ebp),%eax
 833d0e8:	8d 95 5c fb ff ff    	lea    -0x4a4(%ebp),%edx
 833d0ee:	81 c2 a4 00 00 00    	add    $0xa4,%edx
 833d0f4:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d0f8:	89 04 24             	mov    %eax,(%esp)
 833d0fb:	e8 66 5c 00 00       	call   8342d66 <_ZNKSt3setI12ENUM_ELEMENTSt4lessIS0_ESaIS0_EE3endEv>
 833d100:	83 ec 04             	sub    $0x4,%esp
 833d103:	8d 45 ac             	lea    -0x54(%ebp),%eax
 833d106:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d10a:	8d 45 90             	lea    -0x70(%ebp),%eax
 833d10d:	89 04 24             	mov    %eax,(%esp)
 833d110:	e8 77 5c 00 00       	call   8342d8c <_ZNKSt23_Rb_tree_const_iteratorI12ENUM_ELEMENTEneERKS1_>
 833d115:	84 c0                	test   %al,%al
 833d117:	75 86                	jne    833d09f <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x4f9>
 833d119:	eb 2a                	jmp    833d145 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x59f>
 833d11b:	8b 95 ac f9 ff ff    	mov    -0x654(%ebp),%edx
 833d121:	8b 85 b4 f9 ff ff    	mov    -0x64c(%ebp),%eax
 833d127:	89 54 24 0c          	mov    %edx,0xc(%esp)
 833d12b:	89 44 24 08          	mov    %eax,0x8(%esp)
 833d12f:	c7 44 24 04 9d db c2 	movl   $0x8c2db9d,0x4(%esp)
 833d136:	08 
 833d137:	8d 85 90 fc ff ff    	lea    -0x370(%ebp),%eax
 833d13d:	89 04 24             	mov    %eax,(%esp)
 833d140:	e8 fb 12 d4 ff       	call   807e440 <sprintf@plt>
 833d145:	c7 04 24 74 00 00 00 	movl   $0x74,(%esp)
 833d14c:	e8 ff 72 3e 00       	call   8724450 <_Znwj>
 833d151:	89 c3                	mov    %eax,%ebx
 833d153:	89 d8                	mov    %ebx,%eax
 833d155:	89 04 24             	mov    %eax,(%esp)
 833d158:	e8 21 f6 ff ff       	call   833c77e <_ZN13user_creature15CCreatureScriptC1Ev>
 833d15d:	eb 15                	jmp    833d174 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x5ce>
 833d15f:	89 d6                	mov    %edx,%esi
 833d161:	89 c7                	mov    %eax,%edi
 833d163:	89 1c 24             	mov    %ebx,(%esp)
 833d166:	e8 85 73 3e 00       	call   87244f0 <_ZdlPv>
 833d16b:	89 f8                	mov    %edi,%eax
 833d16d:	89 f2                	mov    %esi,%edx
 833d16f:	e9 e6 01 00 00       	jmp    833d35a <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x7b4>
 833d174:	89 d8                	mov    %ebx,%eax
 833d176:	89 45 a0             	mov    %eax,-0x60(%ebp)
 833d179:	8b 45 a0             	mov    -0x60(%ebp),%eax
 833d17c:	8d 95 48 f9 ff ff    	lea    -0x6b8(%ebp),%edx
 833d182:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d186:	89 04 24             	mov    %eax,(%esp)
 833d189:	e8 5a f7 ff ff       	call   833c8e8 <_ZN13user_creature15CCreatureScript3SetEP14CreatureScript>
 833d18e:	8b 45 08             	mov    0x8(%ebp),%eax
 833d191:	8d 95 48 f9 ff ff    	lea    -0x6b8(%ebp),%edx
 833d197:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d19b:	89 04 24             	mov    %eax,(%esp)
 833d19e:	e8 09 63 e5 ff       	call   81934ac <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEEixERS3_>
 833d1a3:	8b 00                	mov    (%eax),%eax
 833d1a5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 833d1a8:	8b 45 a0             	mov    -0x60(%ebp),%eax
 833d1ab:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 833d1ae:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d1b2:	89 04 24             	mov    %eax,(%esp)
 833d1b5:	e8 60 1f 00 00       	call   833f11a <_ZN13user_creature15CCreatureScript9SetItemIdEi>
 833d1ba:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 833d1bd:	e8 f2 f9 2d 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 833d1c2:	8d 95 90 fc ff ff    	lea    -0x370(%ebp),%edx
 833d1c8:	89 54 24 10          	mov    %edx,0x10(%esp)
 833d1cc:	8d 95 90 fd ff ff    	lea    -0x270(%ebp),%edx
 833d1d2:	89 54 24 0c          	mov    %edx,0xc(%esp)
 833d1d6:	8d 95 48 f9 ff ff    	lea    -0x6b8(%ebp),%edx
 833d1dc:	89 54 24 08          	mov    %edx,0x8(%esp)
 833d1e0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 833d1e4:	89 04 24             	mov    %eax,(%esp)
 833d1e7:	e8 28 72 2e 00       	call   8624414 <_ZN11sync_script11CSyncScript26insert_creature_info_to_dbEjPK14CreatureScriptPKcS5_>
 833d1ec:	83 f0 01             	xor    $0x1,%eax
 833d1ef:	84 c0                	test   %al,%al
 833d1f1:	74 20                	je     833d213 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x66d>
 833d1f3:	8b 85 48 f9 ff ff    	mov    -0x6b8(%ebp),%eax
 833d1f9:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d1fd:	c7 04 24 a4 db c2 08 	movl   $0x8c2dba4,(%esp)
 833d204:	e8 57 09 d4 ff       	call   807db60 <printf@plt>
 833d209:	bb 00 00 00 00       	mov    $0x0,%ebx
 833d20e:	e9 5f 01 00 00       	jmp    833d372 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x7cc>
 833d213:	8b 45 08             	mov    0x8(%ebp),%eax
 833d216:	8d 48 18             	lea    0x18(%eax),%ecx
 833d219:	8d 45 98             	lea    -0x68(%ebp),%eax
 833d21c:	8d 95 48 f9 ff ff    	lea    -0x6b8(%ebp),%edx
 833d222:	89 54 24 08          	mov    %edx,0x8(%esp)
 833d226:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 833d22a:	89 04 24             	mov    %eax,(%esp)
 833d22d:	e8 9a 5b 00 00       	call   8342dcc <_ZNSt3mapIiPN13user_creature15CCreatureScriptESt4lessIiESaISt4pairIKiS2_EEE4findERS6_>
 833d232:	83 ec 04             	sub    $0x4,%esp
 833d235:	8b 45 08             	mov    0x8(%ebp),%eax
 833d238:	8d 50 18             	lea    0x18(%eax),%edx
 833d23b:	8d 45 b0             	lea    -0x50(%ebp),%eax
 833d23e:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d242:	89 04 24             	mov    %eax,(%esp)
 833d245:	e8 ae 5b 00 00       	call   8342df8 <_ZNSt3mapIiPN13user_creature15CCreatureScriptESt4lessIiESaISt4pairIKiS2_EEE3endEv>
 833d24a:	83 ec 04             	sub    $0x4,%esp
 833d24d:	8d 45 b0             	lea    -0x50(%ebp),%eax
 833d250:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d254:	8d 45 98             	lea    -0x68(%ebp),%eax
 833d257:	89 04 24             	mov    %eax,(%esp)
 833d25a:	e8 bf 5b 00 00       	call   8342e1e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiPN13user_creature15CCreatureScriptEEEneERKS6_>
 833d25f:	84 c0                	test   %al,%al
 833d261:	74 50                	je     833d2b3 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x70d>
 833d263:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833d26a:	00 
 833d26b:	c7 44 24 08 be 0f 00 	movl   $0xfbe,0x8(%esp)
 833d272:	00 
 833d273:	c7 44 24 04 c0 eb c2 	movl   $0x8c2ebc0,0x4(%esp)
 833d27a:	08 
 833d27b:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 833d27e:	89 04 24             	mov    %eax,(%esp)
 833d281:	e8 92 24 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833d286:	c7 44 24 0c be 0f 00 	movl   $0xfbe,0xc(%esp)
 833d28d:	00 
 833d28e:	c7 44 24 08 c0 eb c2 	movl   $0x8c2ebc0,0x8(%esp)
 833d295:	08 
 833d296:	c7 44 24 04 61 d7 c2 	movl   $0x8c2d761,0x4(%esp)
 833d29d:	08 
 833d29e:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 833d2a1:	89 04 24             	mov    %eax,(%esp)
 833d2a4:	e8 df 24 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833d2a9:	bb 00 00 00 00       	mov    $0x0,%ebx
 833d2ae:	e9 bf 00 00 00       	jmp    833d372 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x7cc>
 833d2b3:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833d2b6:	8d 55 a0             	lea    -0x60(%ebp),%edx
 833d2b9:	89 54 24 08          	mov    %edx,0x8(%esp)
 833d2bd:	8d 95 48 f9 ff ff    	lea    -0x6b8(%ebp),%edx
 833d2c3:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d2c7:	89 04 24             	mov    %eax,(%esp)
 833d2ca:	e8 63 5b 00 00       	call   8342e32 <_ZSt9make_pairIRiRPN13user_creature15CCreatureScriptEESt4pairINSt17__decay_and_stripIT_E6__typeENS6_IT0_E6__typeEEOS7_OSA_>
 833d2cf:	83 ec 04             	sub    $0x4,%esp
 833d2d2:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 833d2d5:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d2d9:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833d2dc:	89 04 24             	mov    %eax,(%esp)
 833d2df:	e8 8c 5b 00 00       	call   8342e70 <_ZNSt4pairIKiPN13user_creature15CCreatureScriptEEC1IiS3_EEOS_IT_T0_E>
 833d2e4:	8b 45 08             	mov    0x8(%ebp),%eax
 833d2e7:	8d 48 18             	lea    0x18(%eax),%ecx
 833d2ea:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 833d2ed:	8d 55 cc             	lea    -0x34(%ebp),%edx
 833d2f0:	89 54 24 08          	mov    %edx,0x8(%esp)
 833d2f4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 833d2f8:	89 04 24             	mov    %eax,(%esp)
 833d2fb:	e8 a0 5b 00 00       	call   8342ea0 <_ZNSt3mapIiPN13user_creature15CCreatureScriptESt4lessIiESaISt4pairIKiS2_EEE6insertERKS7_>
 833d300:	83 ec 04             	sub    $0x4,%esp
 833d303:	8d 45 dc             	lea    -0x24(%ebp),%eax
 833d306:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 833d30d:	00 
 833d30e:	8d 55 9c             	lea    -0x64(%ebp),%edx
 833d311:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d315:	89 04 24             	mov    %eax,(%esp)
 833d318:	e8 c7 43 00 00       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 833d31d:	83 ec 04             	sub    $0x4,%esp
 833d320:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 833d323:	c7 44 24 04 e0 f5 4f 	movl   $0x94ff5e0,0x4(%esp)
 833d32a:	09 
 833d32b:	89 04 24             	mov    %eax,(%esp)
 833d32e:	e8 e5 8d da ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 833d333:	83 ec 04             	sub    $0x4,%esp
 833d336:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 833d339:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d33d:	8d 45 9c             	lea    -0x64(%ebp),%eax
 833d340:	89 04 24             	mov    %eax,(%esp)
 833d343:	e8 f6 8d da ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 833d348:	84 c0                	test   %al,%al
 833d34a:	0f 85 13 f9 ff ff    	jne    833cc63 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0xbd>
 833d350:	eb 01                	jmp    833d353 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x7ad>
 833d352:	90                   	nop
 833d353:	bb 01 00 00 00       	mov    $0x1,%ebx
 833d358:	eb 18                	jmp    833d372 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x7cc>
 833d35a:	89 d3                	mov    %edx,%ebx
 833d35c:	89 c6                	mov    %eax,%esi
 833d35e:	8d 85 5c fb ff ff    	lea    -0x4a4(%ebp),%eax
 833d364:	89 04 24             	mov    %eax,(%esp)
 833d367:	e8 76 42 00 00       	call   83415e2 <_ZN10AttackInfoD1Ev>
 833d36c:	89 f0                	mov    %esi,%eax
 833d36e:	89 da                	mov    %ebx,%edx
 833d370:	eb 10                	jmp    833d382 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x7dc>
 833d372:	8d 85 5c fb ff ff    	lea    -0x4a4(%ebp),%eax
 833d378:	89 04 24             	mov    %eax,(%esp)
 833d37b:	e8 62 42 00 00       	call   83415e2 <_ZN10AttackInfoD1Ev>
 833d380:	eb 1e                	jmp    833d3a0 <_ZN13user_creature18CCreatureScriptMgr22LoadCreatureScriptFileEv+0x7fa>
 833d382:	89 d3                	mov    %edx,%ebx
 833d384:	89 c6                	mov    %eax,%esi
 833d386:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
 833d38c:	89 04 24             	mov    %eax,(%esp)
 833d38f:	e8 10 39 00 00       	call   8340ca4 <_ZN14CreatureScriptD1Ev>
 833d394:	89 f0                	mov    %esi,%eax
 833d396:	89 da                	mov    %ebx,%edx
 833d398:	89 04 24             	mov    %eax,(%esp)
 833d39b:	e8 b0 63 7a 00       	call   8ae3750 <_Unwind_Resume>
 833d3a0:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
 833d3a6:	89 04 24             	mov    %eax,(%esp)
 833d3a9:	e8 f6 38 00 00       	call   8340ca4 <_ZN14CreatureScriptD1Ev>
 833d3ae:	89 d8                	mov    %ebx,%eax
 833d3b0:	8d 65 f4             	lea    -0xc(%ebp),%esp
 833d3b3:	83 c4 00             	add    $0x0,%esp
 833d3b6:	5b                   	pop    %ebx
 833d3b7:	5e                   	pop    %esi
 833d3b8:	5f                   	pop    %edi
 833d3b9:	5d                   	pop    %ebp
 833d3ba:	c3                   	ret
 833d3bb:	90                   	nop

```

```c
// user_creature::CCreatureScriptMgr::LoadCreatureScriptFile @ 0x833cba6

/* user_creature::CCreatureScriptMgr::LoadCreatureScriptFile() */

undefined4 __thiscall
user_creature::CCreatureScriptMgr::LoadCreatureScriptFile(CCreatureScriptMgr *this)

{
  char cVar1;
  CSyncScript *pCVar2;
  string *psVar3;
  char *pcVar4;
  undefined4 uVar5;
  size_t sVar6;
  uint uVar7;
  undefined4 *puVar8;
  CCreatureScript *this_00;
  uint *puVar9;
  int iVar10;
  undefined4 uVar11;
  byte bVar12;
  double dVar13;
  CCreatureScript *local_6bc [24];
  undefined4 local_65c;
  undefined4 local_658;
  undefined4 local_654;
  undefined4 local_650;
  vector<std::string,std::allocator<std::string>> avStack_5a0 [84];
  string asStack_54c [164];
  float local_4a8 [4];
  undefined4 local_498;
  set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> asStack_404 [144];
  char local_374 [256];
  char local_274 [256];
  char local_174 [256];
  set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> local_74 [4];
  set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> local_70 [4];
  _Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>> local_6c [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_68 [4];
  CCreatureScript *local_64;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_60 [4];
  set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> local_5c [4];
  set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>> local_58 [4];
  map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
  local_54 [4];
  cMyTrace local_50 [16];
  pair local_40 [8];
  pair<int_const,user_creature::CCreatureScript*> local_38 [8];
  int local_30 [2];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_28 [4];
  char *local_24;
  uint local_20;
  
  bVar12 = 0;
  local_64 = (CCreatureScript *)0x0;
  CreatureScript::CreatureScript((CreatureScript *)local_6bc);
  local_24 = (char *)0x0;
  pcVar4 = local_174;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar12 * -2 + 1) * 4;
  }
  pcVar4 = local_274;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar12 * -2 + 1) * 4;
  }
  pcVar4 = local_374;
  for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4 = pcVar4 + ((uint)bVar12 * -2 + 1) * 4;
  }
                    /* try { // try from 0833cc19 to 0833cc1d has its CatchHandler @ 0833d382 */
  AttackInfo::AttackInfo((AttackInfo *)local_4a8);
                    /* try { // try from 0833cc1e to 0833d150 has its CatchHandler @ 0833d35a */
  pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  cVar1 = sync_script::CSyncScript::truncate_creature_info_table(pCVar2);
  if (cVar1 == '\x01') {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              (local_68);
    while( true ) {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_60);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_68,
                         (_Rb_tree_iterator *)local_60);
      if (cVar1 == '\0') break;
      iVar10 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                         ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)local_68);
      local_24 = (char *)std::string::c_str((string *)(iVar10 + 4));
      if (local_24 == (char *)0x0) break;
      cVar1 = importCreatureScript((CreatureScript *)local_6bc,local_24);
      if (cVar1 != '\x01') {
        LogManager::logFormat
                  (1,"Creature.cpp",
                   "bool user_creature::CCreatureScriptMgr::LoadCreatureScriptFile()",0xf6b,
                   "importCreatureScript fail file - %s");
        uVar11 = 0;
        goto LAB_0833d372;
      }
      pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar1 = sync_script::CSyncScript::IsEnable(pCVar2);
      if (cVar1 != '\0') {
        iVar10 = std::vector<std::string,std::allocator<std::string>>::size(avStack_5a0);
        if (iVar10 != 0) {
          psVar3 = (string *)std::vector<std::string,std::allocator<std::string>>::at(avStack_5a0,0)
          ;
          pcVar4 = (char *)std::string::c_str(psVar3);
          if (*pcVar4 != '\0') {
            psVar3 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::at(avStack_5a0,0);
            uVar11 = std::string::c_str(psVar3);
            uVar5 = std::string::c_str(asStack_54c);
            sprintf(local_174,"%s%s",uVar5,uVar11);
            cVar1 = ImportAttackInfoScript((AttackInfo *)local_4a8,local_174,0);
            if (cVar1 == '\0') {
              sprintf(local_274,"%d,%d",local_654,local_65c);
            }
            else {
              dVar13 = (double)local_4a8[0];
              uVar11 = local_65c;
              uVar5 = local_498;
              sprintf(local_274,"%d,%d,%f,%d",local_654,local_65c,dVar13,local_498);
              iVar10 = std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::
                       size(asStack_404);
              if (iVar10 == 0) {
                sVar6 = strlen(local_274);
                sprintf(local_274 + sVar6,",%d",4,uVar11,dVar13,uVar5);
              }
              else {
                std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::begin
                          (local_70);
                while( true ) {
                  std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::end
                            (local_5c);
                  cVar1 = std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator!=
                                    ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_70,
                                     (_Rb_tree_const_iterator *)local_5c);
                  if (cVar1 == '\0') break;
                  puVar8 = (undefined4 *)
                           std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator*
                                     ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_70);
                  uVar11 = *puVar8;
                  sVar6 = strlen(local_274);
                  sprintf(local_274 + sVar6,",%d",uVar11);
                  std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator++
                            ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_70);
                }
              }
            }
          }
        }
        uVar7 = std::vector<std::string,std::allocator<std::string>>::size(avStack_5a0);
        if (1 < uVar7) {
          psVar3 = (string *)std::vector<std::string,std::allocator<std::string>>::at(avStack_5a0,1)
          ;
          pcVar4 = (char *)std::string::c_str(psVar3);
          if (*pcVar4 != '\0') {
            psVar3 = (string *)
                     std::vector<std::string,std::allocator<std::string>>::at(avStack_5a0,1);
            uVar11 = std::string::c_str(psVar3);
            uVar5 = std::string::c_str(asStack_54c);
            sprintf(local_174,"%s%s",uVar5,uVar11);
            cVar1 = ImportAttackInfoScript((AttackInfo *)local_4a8,local_174,0);
            if (cVar1 == '\0') {
              sprintf(local_374,"%d,%d",local_650,local_658);
            }
            else {
              dVar13 = (double)local_4a8[0];
              uVar11 = local_658;
              uVar5 = local_498;
              sprintf(local_374,"%d,%d,%f,%d",local_650,local_658,dVar13,local_498);
              iVar10 = std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::
                       size(asStack_404);
              if (iVar10 == 0) {
                sVar6 = strlen(local_374);
                sprintf(local_374 + sVar6,",%d",4,uVar11,dVar13,uVar5);
              }
              else {
                std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::begin
                          (local_74);
                while( true ) {
                  std::set<ENUM_ELEMENT,std::less<ENUM_ELEMENT>,std::allocator<ENUM_ELEMENT>>::end
                            (local_58);
                  cVar1 = std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator!=
                                    ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_74,
                                     (_Rb_tree_const_iterator *)local_58);
                  if (cVar1 == '\0') break;
                  puVar8 = (undefined4 *)
                           std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator*
                                     ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_74);
                  uVar11 = *puVar8;
                  sVar6 = strlen(local_374);
                  sprintf(local_374 + sVar6,",%d",uVar11);
                  std::_Rb_tree_const_iterator<ENUM_ELEMENT>::operator++
                            ((_Rb_tree_const_iterator<ENUM_ELEMENT> *)local_74);
                }
              }
            }
          }
        }
      }
      this_00 = operator_new(0x74);
                    /* try { // try from 0833d158 to 0833d15c has its CatchHandler @ 0833d15f */
      CCreatureScript::CCreatureScript(this_00);
      local_64 = this_00;
                    /* try { // try from 0833d189 to 0833d332 has its CatchHandler @ 0833d35a */
      CCreatureScript::Set(this_00,(CreatureScript *)local_6bc);
      puVar9 = (uint *)std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::
                       operator[]((map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>
                                   *)this,(int *)local_6bc);
      local_20 = *puVar9;
      CCreatureScript::SetItemId(local_64,local_20);
      uVar7 = local_20;
      pCVar2 = (CSyncScript *)sync_script::GetInstanceSyncScript();
      cVar1 = sync_script::CSyncScript::insert_creature_info_to_db
                        (pCVar2,uVar7,(CreatureScript *)local_6bc,local_274,local_374);
      if (cVar1 != '\x01') {
        printf("failed to insert id number < %d > creature info to db\n",local_6bc[0]);
        uVar11 = 0;
        goto LAB_0833d372;
      }
      std::
      map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
      ::find((int *)local_6c);
      std::
      map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
      ::end(local_54);
      cVar1 = std::_Rb_tree_iterator<std::pair<int_const,user_creature::CCreatureScript*>>::
              operator!=(local_6c,(_Rb_tree_iterator *)local_54);
      if (cVar1 != '\0') {
        cMyTrace::cMyTrace(local_50,
                           "bool user_creature::CCreatureScriptMgr::LoadCreatureScriptFile()",0xfbe,
                           5);
        cMyTrace::operator()
                  (local_50,"[%s][%d]",
                   "bool user_creature::CCreatureScriptMgr::LoadCreatureScriptFile()",0xfbe);
        uVar11 = 0;
        goto LAB_0833d372;
      }
      std::make_pair<int&,user_creature::CCreatureScript*&>(local_30,local_6bc);
      std::pair<int_const,user_creature::CCreatureScript*>::
      pair<int,user_creature::CCreatureScript*>(local_38,(pair *)local_30);
      std::
      map<int,user_creature::CCreatureScript*,std::less<int>,std::allocator<std::pair<int_const,user_creature::CCreatureScript*>>>
      ::insert(local_40);
      std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++(local_28,(int)local_68);
    }
    uVar11 = 1;
  }
  else {
    puts("failed to truncate creature info table");
    uVar11 = 0;
  }
LAB_0833d372:
                    /* try { // try from 0833d37b to 0833d37f has its CatchHandler @ 0833d382 */
  AttackInfo::~AttackInfo((AttackInfo *)local_4a8);
  CreatureScript::~CreatureScript((CreatureScript *)local_6bc);
  return uVar11;
}

```

---

## RegisterCreatureIdAndItemId

```asm
// === 0833d54a user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId  [0x0833d54a-0x833d635] ===
 833d54a:	55                   	push   %ebp
 833d54b:	89 e5                	mov    %esp,%ebp
 833d54d:	83 ec 48             	sub    $0x48,%esp
 833d550:	8b 55 08             	mov    0x8(%ebp),%edx
 833d553:	8d 45 c8             	lea    -0x38(%ebp),%eax
 833d556:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 833d559:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 833d55d:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d561:	89 04 24             	mov    %eax,(%esp)
 833d564:	e8 85 fd d8 ff       	call   80cd2ee <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE4findERS3_>
 833d569:	83 ec 04             	sub    $0x4,%esp
 833d56c:	8b 55 08             	mov    0x8(%ebp),%edx
 833d56f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833d572:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d576:	89 04 24             	mov    %eax,(%esp)
 833d579:	e8 9c fd d8 ff       	call   80cd31a <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE3endEv>
 833d57e:	83 ec 04             	sub    $0x4,%esp
 833d581:	8d 45 cc             	lea    -0x34(%ebp),%eax
 833d584:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d588:	8d 45 c8             	lea    -0x38(%ebp),%eax
 833d58b:	89 04 24             	mov    %eax,(%esp)
 833d58e:	e8 35 ce d9 ff       	call   80da3c8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiiEEneERKS3_>
 833d593:	84 c0                	test   %al,%al
 833d595:	74 4d                	je     833d5e4 <_ZN13user_creature18CCreatureScriptMgr27RegisterCreatureIdAndItemIdEii+0x9a>
 833d597:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 833d59e:	00 
 833d59f:	c7 44 24 08 ff 0f 00 	movl   $0xfff,0x8(%esp)
 833d5a6:	00 
 833d5a7:	c7 44 24 04 00 eb c2 	movl   $0x8c2eb00,0x4(%esp)
 833d5ae:	08 
 833d5af:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833d5b2:	89 04 24             	mov    %eax,(%esp)
 833d5b5:	e8 5e 21 21 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 833d5ba:	c7 44 24 0c ff 0f 00 	movl   $0xfff,0xc(%esp)
 833d5c1:	00 
 833d5c2:	c7 44 24 08 00 eb c2 	movl   $0x8c2eb00,0x8(%esp)
 833d5c9:	08 
 833d5ca:	c7 44 24 04 61 d7 c2 	movl   $0x8c2d761,0x4(%esp)
 833d5d1:	08 
 833d5d2:	8d 45 d0             	lea    -0x30(%ebp),%eax
 833d5d5:	89 04 24             	mov    %eax,(%esp)
 833d5d8:	e8 ab 21 21 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 833d5dd:	b8 00 00 00 00       	mov    $0x0,%eax
 833d5e2:	eb 4f                	jmp    833d633 <_ZN13user_creature18CCreatureScriptMgr27RegisterCreatureIdAndItemIdEii+0xe9>
 833d5e4:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833d5e7:	8d 55 10             	lea    0x10(%ebp),%edx
 833d5ea:	89 54 24 08          	mov    %edx,0x8(%esp)
 833d5ee:	8d 55 0c             	lea    0xc(%ebp),%edx
 833d5f1:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d5f5:	89 04 24             	mov    %eax,(%esp)
 833d5f8:	e8 b5 3c dd ff       	call   81112b2 <_ZSt9make_pairIRiS0_ESt4pairINSt17__decay_and_stripIT_E6__typeENS2_IT0_E6__typeEEOS3_OS6_>
 833d5fd:	83 ec 04             	sub    $0x4,%esp
 833d600:	8d 45 f0             	lea    -0x10(%ebp),%eax
 833d603:	89 44 24 04          	mov    %eax,0x4(%esp)
 833d607:	8d 45 e8             	lea    -0x18(%ebp),%eax
 833d60a:	89 04 24             	mov    %eax,(%esp)
 833d60d:	e8 0e 97 d8 ff       	call   80c6d20 <_ZNSt4pairIKiiEC1IiiEEOS_IT_T0_E>
 833d612:	8b 55 08             	mov    0x8(%ebp),%edx
 833d615:	8d 45 e0             	lea    -0x20(%ebp),%eax
 833d618:	8d 4d e8             	lea    -0x18(%ebp),%ecx
 833d61b:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 833d61f:	89 54 24 04          	mov    %edx,0x4(%esp)
 833d623:	89 04 24             	mov    %eax,(%esp)
 833d626:	e8 25 97 d8 ff       	call   80c6d50 <_ZNSt3mapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 833d62b:	83 ec 04             	sub    $0x4,%esp
 833d62e:	b8 01 00 00 00       	mov    $0x1,%eax
 833d633:	c9                   	leave
 833d634:	c3                   	ret
 833d635:	90                   	nop

```

```c
// user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId @ 0x833d54a

/* user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(int, int) */

bool user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(int param_1,int param_2)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<int_const,int>> local_3c [4];
  map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> local_38 [4];
  cMyTrace local_34 [16];
  pair local_24 [8];
  pair<int_const,int> local_1c [8];
  int local_14 [4];
  
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::find((int *)local_3c);
  std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::end(local_38);
  cVar1 = std::_Rb_tree_iterator<std::pair<int_const,int>>::operator!=
                    (local_3c,(_Rb_tree_iterator *)local_38);
  if (cVar1 == '\0') {
    std::make_pair<int&,int&>(local_14,&param_2);
    std::pair<int_const,int>::pair<int,int>(local_1c,(pair *)local_14);
    std::map<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_24);
  }
  else {
    cMyTrace::cMyTrace(local_34,
                       "bool user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(int, int)"
                       ,0xfff,5);
    cMyTrace::operator()
              (local_34,"[%s][%d]",
               "bool user_creature::CCreatureScriptMgr::RegisterCreatureIdAndItemId(int, int)",0xfff
              );
  }
  return cVar1 == '\0';
}

```

