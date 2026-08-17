# CMonsterManager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 8

---

## CMonsterManager

```asm
// === 0834f90e CMonsterManager::CMonsterManager  [0x0834f90e-0x834f953] ===
 834f90e:	55                   	push   %ebp
 834f90f:	89 e5                	mov    %esp,%ebp
 834f911:	56                   	push   %esi
 834f912:	53                   	push   %ebx
 834f913:	83 ec 10             	sub    $0x10,%esp
 834f916:	8b 45 08             	mov    0x8(%ebp),%eax
 834f919:	89 04 24             	mov    %eax,(%esp)
 834f91c:	e8 19 85 03 00       	call   8387e3a <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEEC1Ev>
 834f921:	8b 45 08             	mov    0x8(%ebp),%eax
 834f924:	83 c0 18             	add    $0x18,%eax
 834f927:	89 04 24             	mov    %eax,(%esp)
 834f92a:	e8 59 f8 03 00       	call   838f188 <_ZN9__gnu_cxx8hash_mapIiP8CMonsterNS_4hashIiEESt8equal_toIiESaIS2_EEC1Ev>
 834f92f:	eb 1b                	jmp    834f94c <_ZN15CMonsterManagerC1Ev+0x3e>
 834f931:	89 d3                	mov    %edx,%ebx
 834f933:	89 c6                	mov    %eax,%esi
 834f935:	8b 45 08             	mov    0x8(%ebp),%eax
 834f938:	89 04 24             	mov    %eax,(%esp)
 834f93b:	e8 08 57 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 834f940:	89 f0                	mov    %esi,%eax
 834f942:	89 da                	mov    %ebx,%edx
 834f944:	89 04 24             	mov    %eax,(%esp)
 834f947:	e8 04 3e 79 00       	call   8ae3750 <_Unwind_Resume>
 834f94c:	83 c4 10             	add    $0x10,%esp
 834f94f:	5b                   	pop    %ebx
 834f950:	5e                   	pop    %esi
 834f951:	5d                   	pop    %ebp
 834f952:	c3                   	ret
 834f953:	90                   	nop

```

```c
// CMonsterManager::CMonsterManager @ 0x834f90e

/* CMonsterManager::CMonsterManager() */

void __thiscall CMonsterManager::CMonsterManager(CMonsterManager *this)

{
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
                    /* try { // try from 0834f92a to 0834f92e has its CatchHandler @ 0834f931 */
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::
  hash_map((hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
            *)(this + 0x18));
  return;
}

```

---

## destroy

```asm
// === 0834f9be CMonsterManager::destroy  [0x0834f9be-0x834fa83] ===
 834f9be:	55                   	push   %ebp
 834f9bf:	89 e5                	mov    %esp,%ebp
 834f9c1:	53                   	push   %ebx
 834f9c2:	83 ec 44             	sub    $0x44,%esp
 834f9c5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834f9cc:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834f9cf:	89 04 24             	mov    %eax,(%esp)
 834f9d2:	e8 85 f8 03 00       	call   838f25c <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CMonsterEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 834f9d7:	8b 45 08             	mov    0x8(%ebp),%eax
 834f9da:	8d 50 18             	lea    0x18(%eax),%edx
 834f9dd:	8d 45 d0             	lea    -0x30(%ebp),%eax
 834f9e0:	89 54 24 04          	mov    %edx,0x4(%esp)
 834f9e4:	89 04 24             	mov    %eax,(%esp)
 834f9e7:	e8 76 f8 03 00       	call   838f262 <_ZN9__gnu_cxx8hash_mapIiP8CMonsterNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 834f9ec:	83 ec 04             	sub    $0x4,%esp
 834f9ef:	8b 45 d0             	mov    -0x30(%ebp),%eax
 834f9f2:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 834f9f5:	89 45 dc             	mov    %eax,-0x24(%ebp)
 834f9f8:	89 55 e0             	mov    %edx,-0x20(%ebp)
 834f9fb:	eb 45                	jmp    834fa42 <_ZN15CMonsterManager7destroyEv+0x84>
 834f9fd:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834fa00:	89 04 24             	mov    %eax,(%esp)
 834fa03:	e8 ba f8 03 00       	call   838f2c2 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CMonsterEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 834fa08:	8b 40 04             	mov    0x4(%eax),%eax
 834fa0b:	89 45 f4             	mov    %eax,-0xc(%ebp)
 834fa0e:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834fa11:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834fa18:	00 
 834fa19:	8d 55 dc             	lea    -0x24(%ebp),%edx
 834fa1c:	89 54 24 04          	mov    %edx,0x4(%esp)
 834fa20:	89 04 24             	mov    %eax,(%esp)
 834fa23:	e8 ae f8 03 00       	call   838f2d6 <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CMonsterEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEi>
 834fa28:	83 ec 04             	sub    $0x4,%esp
 834fa2b:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 834fa2e:	85 db                	test   %ebx,%ebx
 834fa30:	74 10                	je     834fa42 <_ZN15CMonsterManager7destroyEv+0x84>
 834fa32:	89 1c 24             	mov    %ebx,(%esp)
 834fa35:	e8 94 a3 02 00       	call   8379dce <_ZN8CMonsterD1Ev>
 834fa3a:	89 1c 24             	mov    %ebx,(%esp)
 834fa3d:	e8 ae 4a 3d 00       	call   87244f0 <_ZdlPv>
 834fa42:	8b 45 08             	mov    0x8(%ebp),%eax
 834fa45:	8d 50 18             	lea    0x18(%eax),%edx
 834fa48:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834fa4b:	89 54 24 04          	mov    %edx,0x4(%esp)
 834fa4f:	89 04 24             	mov    %eax,(%esp)
 834fa52:	e8 31 f8 03 00       	call   838f288 <_ZN9__gnu_cxx8hash_mapIiP8CMonsterNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 834fa57:	83 ec 04             	sub    $0x4,%esp
 834fa5a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834fa5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fa61:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834fa64:	89 04 24             	mov    %eax,(%esp)
 834fa67:	e8 42 f8 03 00       	call   838f2ae <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CMonsterEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 834fa6c:	84 c0                	test   %al,%al
 834fa6e:	75 8d                	jne    834f9fd <_ZN15CMonsterManager7destroyEv+0x3f>
 834fa70:	8b 45 08             	mov    0x8(%ebp),%eax
 834fa73:	83 c0 18             	add    $0x18,%eax
 834fa76:	89 04 24             	mov    %eax,(%esp)
 834fa79:	e8 8e f8 03 00       	call   838f30c <_ZN9__gnu_cxx8hash_mapIiP8CMonsterNS_4hashIiEESt8equal_toIiESaIS2_EE5clearEv>
 834fa7e:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 834fa81:	c9                   	leave
 834fa82:	c3                   	ret
 834fa83:	90                   	nop

```

```c
// CMonsterManager::destroy @ 0x834f9be

/* CMonsterManager::destroy() */

void __thiscall CMonsterManager::destroy(CMonsterManager *this)

{
  CMonster *pCVar1;
  char cVar2;
  int iVar3;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
  local_20 [8];
  _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
  local_18 [8];
  CMonster *local_10;
  
  local_10 = (CMonster *)0x0;
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
  ::_Hashtable_iterator();
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::begin
            ((hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
              *)&local_34);
  local_28 = local_34;
  local_24 = local_30;
  while( true ) {
    __gnu_cxx::
    hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::end
              (local_20);
    cVar2 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
            ::operator!=((_Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
                          *)&local_28,(_Hashtable_iterator *)local_20);
    if (cVar2 == '\0') break;
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
                          *)&local_28);
    local_10 = *(CMonster **)(iVar3 + 4);
    __gnu_cxx::
    _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
    ::operator++(local_18,(int)&local_28);
    pCVar1 = local_10;
    if (local_10 != (CMonster *)0x0) {
      CMonster::~CMonster(local_10);
      operator_delete(pCVar1);
    }
  }
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::clear
            ((hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
              *)(this + 0x18));
  return;
}

```

---

## find_monster

```asm
// === 0834fe9e CMonsterManager::find_monster  [0x0834fe9e-0x834ff1f] ===
 834fe9e:	55                   	push   %ebp
 834fe9f:	89 e5                	mov    %esp,%ebp
 834fea1:	83 ec 38             	sub    $0x38,%esp
 834fea4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834fea7:	89 04 24             	mov    %eax,(%esp)
 834feaa:	e8 ad f3 03 00       	call   838f25c <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CMonsterEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 834feaf:	8b 45 08             	mov    0x8(%ebp),%eax
 834feb2:	8d 48 18             	lea    0x18(%eax),%ecx
 834feb5:	8d 45 e0             	lea    -0x20(%ebp),%eax
 834feb8:	8d 55 0c             	lea    0xc(%ebp),%edx
 834febb:	89 54 24 08          	mov    %edx,0x8(%esp)
 834febf:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834fec3:	89 04 24             	mov    %eax,(%esp)
 834fec6:	e8 63 f4 03 00       	call   838f32e <_ZN9__gnu_cxx8hash_mapIiP8CMonsterNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 834fecb:	83 ec 04             	sub    $0x4,%esp
 834fece:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834fed1:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 834fed4:	89 45 e8             	mov    %eax,-0x18(%ebp)
 834fed7:	89 55 ec             	mov    %edx,-0x14(%ebp)
 834feda:	8b 45 08             	mov    0x8(%ebp),%eax
 834fedd:	8d 50 18             	lea    0x18(%eax),%edx
 834fee0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834fee3:	89 54 24 04          	mov    %edx,0x4(%esp)
 834fee7:	89 04 24             	mov    %eax,(%esp)
 834feea:	e8 99 f3 03 00       	call   838f288 <_ZN9__gnu_cxx8hash_mapIiP8CMonsterNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 834feef:	83 ec 04             	sub    $0x4,%esp
 834fef2:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834fef5:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fef9:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834fefc:	89 04 24             	mov    %eax,(%esp)
 834feff:	e8 56 f4 03 00       	call   838f35a <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CMonsterEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 834ff04:	84 c0                	test   %al,%al
 834ff06:	74 07                	je     834ff0f <_ZN15CMonsterManager12find_monsterEi+0x71>
 834ff08:	b8 00 00 00 00       	mov    $0x0,%eax
 834ff0d:	eb 0e                	jmp    834ff1d <_ZN15CMonsterManager12find_monsterEi+0x7f>
 834ff0f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 834ff12:	89 04 24             	mov    %eax,(%esp)
 834ff15:	e8 a8 f3 03 00       	call   838f2c2 <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CMonsterEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 834ff1a:	8b 40 04             	mov    0x4(%eax),%eax
 834ff1d:	c9                   	leave
 834ff1e:	c3                   	ret
 834ff1f:	90                   	nop

```

```c
// CMonsterManager::find_monster @ 0x834fe9e

/* CMonsterManager::find_monster(int) */

undefined4 CMonsterManager::find_monster(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
  local_14 [16];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
  ::_Hashtable_iterator();
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::find
            (&local_24);
  local_1c = local_24;
  local_18 = local_20;
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::end
            (local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
          ::operator==((_Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
                        *)&local_1c,(_Hashtable_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
            ::operator->((_Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
                          *)&local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## get_levelrandom_mob

```asm
// === 0834ff20 CMonsterManager::get_levelrandom_mob  [0x0834ff20-0x834ffc9] ===
 834ff20:	55                   	push   %ebp
 834ff21:	89 e5                	mov    %esp,%ebp
 834ff23:	83 ec 48             	sub    $0x48,%esp
 834ff26:	8b 55 08             	mov    0x8(%ebp),%edx
 834ff29:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834ff2c:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 834ff2f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 834ff33:	89 54 24 04          	mov    %edx,0x4(%esp)
 834ff37:	89 04 24             	mov    %eax,(%esp)
 834ff3a:	e8 89 f4 03 00       	call   838f3c8 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE11equal_rangeERS3_>
 834ff3f:	83 ec 04             	sub    $0x4,%esp
 834ff42:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834ff45:	89 44 24 04          	mov    %eax,0x4(%esp)
 834ff49:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834ff4c:	89 04 24             	mov    %eax,(%esp)
 834ff4f:	e8 a0 f4 03 00       	call   838f3f4 <_ZNSt4pairISt23_Rb_tree_const_iteratorIS_IKiiEES3_EC1ISt17_Rb_tree_iteratorIS2_ES7_EEOS_IT_T0_E>
 834ff54:	8b 45 08             	mov    0x8(%ebp),%eax
 834ff57:	8d 55 0c             	lea    0xc(%ebp),%edx
 834ff5a:	89 54 24 04          	mov    %edx,0x4(%esp)
 834ff5e:	89 04 24             	mov    %eax,(%esp)
 834ff61:	e8 d0 f4 03 00       	call   838f436 <_ZNKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE5countERS3_>
 834ff66:	89 45 e8             	mov    %eax,-0x18(%ebp)
 834ff69:	8b 45 e8             	mov    -0x18(%ebp),%eax
 834ff6c:	89 04 24             	mov    %eax,(%esp)
 834ff6f:	e8 13 1c 36 00       	call   86b1b87 <_Z12get_rand_inti>
 834ff74:	89 45 ec             	mov    %eax,-0x14(%ebp)
 834ff77:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 834ff7a:	89 45 d0             	mov    %eax,-0x30(%ebp)
 834ff7d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 834ff84:	eb 21                	jmp    834ffa7 <_ZN15CMonsterManager19get_levelrandom_mobEi+0x87>
 834ff86:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834ff89:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834ff90:	00 
 834ff91:	8d 55 d0             	lea    -0x30(%ebp),%edx
 834ff94:	89 54 24 04          	mov    %edx,0x4(%esp)
 834ff98:	89 04 24             	mov    %eax,(%esp)
 834ff9b:	e8 b6 2b ff ff       	call   8342b56 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiiEEppEi>
 834ffa0:	83 ec 04             	sub    $0x4,%esp
 834ffa3:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 834ffa7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 834ffaa:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 834ffad:	0f 9c c0             	setl   %al
 834ffb0:	84 c0                	test   %al,%al
 834ffb2:	75 d2                	jne    834ff86 <_ZN15CMonsterManager19get_levelrandom_mobEi+0x66>
 834ffb4:	8d 45 d0             	lea    -0x30(%ebp),%eax
 834ffb7:	89 04 24             	mov    %eax,(%esp)
 834ffba:	e8 51 6f d7 ff       	call   80c6f10 <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiiEEptEv>
 834ffbf:	8b 40 04             	mov    0x4(%eax),%eax
 834ffc2:	89 45 f0             	mov    %eax,-0x10(%ebp)
 834ffc5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 834ffc8:	c9                   	leave
 834ffc9:	c3                   	ret

```

```c
// CMonsterManager::get_levelrandom_mob @ 0x834ff20

/* CMonsterManager::get_levelrandom_mob(int) */

undefined4 CMonsterManager::get_levelrandom_mob(int param_1)

{
  int iVar1;
  undefined4 local_34;
  undefined4 local_30 [2];
  int local_28 [2];
  _Rb_tree_const_iterator<std::pair<int_const,int>> local_20 [4];
  int local_1c;
  int local_18;
  int local_10;
  
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::equal_range
            (local_28);
  std::
  pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
  ::
  pair<std::_Rb_tree_iterator<std::pair<int_const,int>>,std::_Rb_tree_iterator<std::pair<int_const,int>>>
            ((pair<std::_Rb_tree_const_iterator<std::pair<int_const,int>>,std::_Rb_tree_const_iterator<std::pair<int_const,int>>>
              *)local_30,(pair *)local_28);
  local_1c = std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::count
                       ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *
                        )param_1,(int *)&stack0x00000008);
  local_18 = get_rand_int(local_1c);
  local_34 = local_30[0];
  for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
    std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator++(local_20,(int)&local_34);
  }
  iVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,int>>::operator->
                    ((_Rb_tree_const_iterator<std::pair<int_const,int>> *)&local_34);
  return *(undefined4 *)(iVar1 + 4);
}

```

---

## insert_monster

```asm
// === 0834fdac CMonsterManager::insert_monster  [0x0834fdac-0x834fded] ===
 834fdac:	55                   	push   %ebp
 834fdad:	89 e5                	mov    %esp,%ebp
 834fdaf:	83 ec 28             	sub    $0x28,%esp
 834fdb2:	8d 45 10             	lea    0x10(%ebp),%eax
 834fdb5:	89 44 24 08          	mov    %eax,0x8(%esp)
 834fdb9:	8d 45 0c             	lea    0xc(%ebp),%eax
 834fdbc:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fdc0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834fdc3:	89 04 24             	mov    %eax,(%esp)
 834fdc6:	e8 f5 ac fa ff       	call   82faac0 <_ZNSt4pairIKiiEC1IRiS3_EEOT_OT0_>
 834fdcb:	8b 55 08             	mov    0x8(%ebp),%edx
 834fdce:	8d 45 ec             	lea    -0x14(%ebp),%eax
 834fdd1:	8d 4d f0             	lea    -0x10(%ebp),%ecx
 834fdd4:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 834fdd8:	89 54 24 04          	mov    %edx,0x4(%esp)
 834fddc:	89 04 24             	mov    %eax,(%esp)
 834fddf:	e8 a8 8f e6 ff       	call   81b8d8c <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEE6insertERKS4_>
 834fde4:	83 ec 04             	sub    $0x4,%esp
 834fde7:	b8 01 00 00 00       	mov    $0x1,%eax
 834fdec:	c9                   	leave
 834fded:	c3                   	ret

```

```c
// CMonsterManager::insert_monster @ 0x834fdac

/* CMonsterManager::insert_monster(int, int) */

undefined4 CMonsterManager::insert_monster(int param_1,int param_2)

{
  pair local_18 [4];
  pair<int_const,int> local_14 [16];
  
  std::pair<int_const,int>::pair<int&,int&>(local_14,&param_2,(int *)&stack0x0000000c);
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::insert(local_18);
  return 1;
}

```

---

## insert_monster_0834fdee

```asm
// === 0834fdee CMonsterManager::insert_monster  [0x0834fdee-0x834fe9d] ===
 834fdee:	55                   	push   %ebp
 834fdef:	89 e5                	mov    %esp,%ebp
 834fdf1:	83 ec 58             	sub    $0x58,%esp
 834fdf4:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834fdf7:	89 04 24             	mov    %eax,(%esp)
 834fdfa:	e8 5d f4 03 00       	call   838f25c <_ZN9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CMonsterEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEC1Ev>
 834fdff:	8b 45 08             	mov    0x8(%ebp),%eax
 834fe02:	8d 48 18             	lea    0x18(%eax),%ecx
 834fe05:	8d 45 c0             	lea    -0x40(%ebp),%eax
 834fe08:	8d 55 0c             	lea    0xc(%ebp),%edx
 834fe0b:	89 54 24 08          	mov    %edx,0x8(%esp)
 834fe0f:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834fe13:	89 04 24             	mov    %eax,(%esp)
 834fe16:	e8 13 f5 03 00       	call   838f32e <_ZN9__gnu_cxx8hash_mapIiP8CMonsterNS_4hashIiEESt8equal_toIiESaIS2_EE4findERKi>
 834fe1b:	83 ec 04             	sub    $0x4,%esp
 834fe1e:	8b 45 c0             	mov    -0x40(%ebp),%eax
 834fe21:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 834fe24:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 834fe27:	89 55 d8             	mov    %edx,-0x28(%ebp)
 834fe2a:	8b 45 08             	mov    0x8(%ebp),%eax
 834fe2d:	8d 50 18             	lea    0x18(%eax),%edx
 834fe30:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834fe33:	89 54 24 04          	mov    %edx,0x4(%esp)
 834fe37:	89 04 24             	mov    %eax,(%esp)
 834fe3a:	e8 49 f4 03 00       	call   838f288 <_ZN9__gnu_cxx8hash_mapIiP8CMonsterNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 834fe3f:	83 ec 04             	sub    $0x4,%esp
 834fe42:	8d 45 dc             	lea    -0x24(%ebp),%eax
 834fe45:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fe49:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 834fe4c:	89 04 24             	mov    %eax,(%esp)
 834fe4f:	e8 06 f5 03 00       	call   838f35a <_ZNK9__gnu_cxx19_Hashtable_iteratorISt4pairIKiP8CMonsterEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEeqERKSD_>
 834fe54:	84 c0                	test   %al,%al
 834fe56:	74 3f                	je     834fe97 <_ZN15CMonsterManager14insert_monsterEiP8CMonster+0xa9>
 834fe58:	8d 45 10             	lea    0x10(%ebp),%eax
 834fe5b:	89 44 24 08          	mov    %eax,0x8(%esp)
 834fe5f:	8d 45 0c             	lea    0xc(%ebp),%eax
 834fe62:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fe66:	8d 45 f0             	lea    -0x10(%ebp),%eax
 834fe69:	89 04 24             	mov    %eax,(%esp)
 834fe6c:	e8 fd f4 03 00       	call   838f36e <_ZNSt4pairIKiP8CMonsterEC1IRiRS2_EEOT_OT0_>
 834fe71:	8b 45 08             	mov    0x8(%ebp),%eax
 834fe74:	8d 48 18             	lea    0x18(%eax),%ecx
 834fe77:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 834fe7a:	8d 55 f0             	lea    -0x10(%ebp),%edx
 834fe7d:	89 54 24 08          	mov    %edx,0x8(%esp)
 834fe81:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 834fe85:	89 04 24             	mov    %eax,(%esp)
 834fe88:	e8 0f f5 03 00       	call   838f39c <_ZN9__gnu_cxx8hash_mapIiP8CMonsterNS_4hashIiEESt8equal_toIiESaIS2_EE6insertERKSt4pairIKiS2_E>
 834fe8d:	83 ec 04             	sub    $0x4,%esp
 834fe90:	b8 01 00 00 00       	mov    $0x1,%eax
 834fe95:	eb 05                	jmp    834fe9c <_ZN15CMonsterManager14insert_monsterEiP8CMonster+0xae>
 834fe97:	b8 00 00 00 00       	mov    $0x0,%eax
 834fe9c:	c9                   	leave
 834fe9d:	c3                   	ret

```

```c
// CMonsterManager::insert_monster @ 0x834fdee

/* CMonsterManager::insert_monster(int, CMonster*) */

bool CMonsterManager::insert_monster(int param_1,CMonster *param_2)

{
  char cVar1;
  int local_44;
  undefined4 local_40;
  int local_30;
  undefined4 local_2c;
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
  local_28 [8];
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
  local_20 [12];
  pair<int_const,CMonster*> local_14 [16];
  
  __gnu_cxx::
  _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
  ::_Hashtable_iterator();
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::find
            (&local_44);
  local_30 = local_44;
  local_2c = local_40;
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::end
            (local_28);
  cVar1 = __gnu_cxx::
          _Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
          ::operator==((_Hashtable_iterator<std::pair<int_const,CMonster*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CMonster*>>,std::equal_to<int>,std::allocator<CMonster*>>
                        *)&local_30,(_Hashtable_iterator *)local_28);
  if (cVar1 != '\0') {
    std::pair<int_const,CMonster*>::pair<int&,CMonster*&>
              (local_14,(int *)&param_2,(CMonster **)&stack0x0000000c);
    __gnu_cxx::
    hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::
    insert(local_20,(pair *)(param_1 + 0x18));
  }
  return cVar1 != '\0';
}

```

---

## load_monsters

```asm
// === 0834fa84 CMonsterManager::load_monsters  [0x0834fa84-0x834fdab] ===
 834fa84:	55                   	push   %ebp
 834fa85:	89 e5                	mov    %esp,%ebp
 834fa87:	57                   	push   %edi
 834fa88:	56                   	push   %esi
 834fa89:	53                   	push   %ebx
 834fa8a:	81 ec 1c 1d 00 00    	sub    $0x1d1c,%esp
 834fa90:	e8 1f d1 2c 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 834fa95:	89 04 24             	mov    %eax,(%esp)
 834fa98:	e8 3f 66 2d 00       	call   86260dc <_ZN11sync_script11CSyncScript27truncate_monster_info_tableEv>
 834fa9d:	83 f0 01             	xor    $0x1,%eax
 834faa0:	84 c0                	test   %al,%al
 834faa2:	74 16                	je     834faba <_ZN15CMonsterManager13load_monstersEv+0x36>
 834faa4:	c7 04 24 d0 ff c2 08 	movl   $0x8c2ffd0,(%esp)
 834faab:	e8 c0 ea d2 ff       	call   807e570 <puts@plt>
 834fab0:	bb 00 00 00 00       	mov    $0x0,%ebx
 834fab5:	e9 e4 02 00 00       	jmp    834fd9e <_ZN15CMonsterManager13load_monstersEv+0x31a>
 834faba:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 834fac1:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 834fac8:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834facb:	89 04 24             	mov    %eax,(%esp)
 834face:	e8 05 42 f6 ff       	call   82b3cd8 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEC1Ev>
 834fad3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 834fad6:	89 04 24             	mov    %eax,(%esp)
 834fad9:	e8 42 f8 03 00       	call   838f320 <_ZNSt14_List_iteratorIiEC1Ev>
 834fade:	8d 85 f4 e2 ff ff    	lea    -0x1d0c(%ebp),%eax
 834fae4:	c7 44 24 04 60 f2 4f 	movl   $0x94ff260,0x4(%esp)
 834faeb:	09 
 834faec:	89 04 24             	mov    %eax,(%esp)
 834faef:	e8 fe 65 d9 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 834faf4:	83 ec 04             	sub    $0x4,%esp
 834faf7:	8b 85 f4 e2 ff ff    	mov    -0x1d0c(%ebp),%eax
 834fafd:	89 45 c8             	mov    %eax,-0x38(%ebp)
 834fb00:	e9 61 02 00 00       	jmp    834fd66 <_ZN15CMonsterManager13load_monstersEv+0x2e2>
 834fb05:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834fb08:	89 04 24             	mov    %eax,(%esp)
 834fb0b:	e8 a8 66 d9 ff       	call   80e61b8 <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEptEv>
 834fb10:	83 c0 04             	add    $0x4,%eax
 834fb13:	89 04 24             	mov    %eax,(%esp)
 834fb16:	e8 d5 69 3b 00       	call   87064f0 <_ZNKSs5c_strEv>
 834fb1b:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 834fb1e:	83 7d d4 00          	cmpl   $0x0,-0x2c(%ebp)
 834fb22:	0f 84 70 02 00 00    	je     834fd98 <_ZN15CMonsterManager13load_monstersEv+0x314>
 834fb28:	8d 85 00 e3 ff ff    	lea    -0x1d00(%ebp),%eax
 834fb2e:	89 04 24             	mov    %eax,(%esp)
 834fb31:	e8 de 92 01 00       	call   8368e14 <_ZN15STMonsterScriptC1Ev>
 834fb36:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 834fb3d:	00 
 834fb3e:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 834fb41:	89 44 24 08          	mov    %eax,0x8(%esp)
 834fb45:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 834fb4c:	00 
 834fb4d:	8d 85 00 e3 ff ff    	lea    -0x1d00(%ebp),%eax
 834fb53:	89 04 24             	mov    %eax,(%esp)
 834fb56:	e8 cc 2c 6c 00       	call   8a12827 <_Z19ImportMonsterScriptP15STMonsterScriptiPKcb>
 834fb5b:	83 f0 01             	xor    $0x1,%eax
 834fb5e:	84 c0                	test   %al,%al
 834fb60:	74 22                	je     834fb84 <_ZN15CMonsterManager13load_monstersEv+0x100>
 834fb62:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 834fb65:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fb69:	c7 04 24 f1 ff c2 08 	movl   $0x8c2fff1,(%esp)
 834fb70:	e8 eb df d2 ff       	call   807db60 <printf@plt>
 834fb75:	bb 00 00 00 00       	mov    $0x0,%ebx
 834fb7a:	be 00 00 00 00       	mov    $0x0,%esi
 834fb7f:	e9 d0 01 00 00       	jmp    834fd54 <_ZN15CMonsterManager13load_monstersEv+0x2d0>
 834fb84:	e8 2b d0 2c 00       	call   861cbb4 <_ZN11sync_script21GetInstanceSyncScriptEv>
 834fb89:	8d 95 00 e3 ff ff    	lea    -0x1d00(%ebp),%edx
 834fb8f:	89 54 24 04          	mov    %edx,0x4(%esp)
 834fb93:	89 04 24             	mov    %eax,(%esp)
 834fb96:	e8 c5 65 2d 00       	call   8626160 <_ZN11sync_script11CSyncScript25insert_monster_info_to_dbERK15STMonsterScript>
 834fb9b:	83 f0 01             	xor    $0x1,%eax
 834fb9e:	84 c0                	test   %al,%al
 834fba0:	74 22                	je     834fbc4 <_ZN15CMonsterManager13load_monstersEv+0x140>
 834fba2:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 834fba5:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fba9:	c7 04 24 0c 00 c3 08 	movl   $0x8c3000c,(%esp)
 834fbb0:	e8 ab df d2 ff       	call   807db60 <printf@plt>
 834fbb5:	bb 00 00 00 00       	mov    $0x0,%ebx
 834fbba:	be 00 00 00 00       	mov    $0x0,%esi
 834fbbf:	e9 90 01 00 00       	jmp    834fd54 <_ZN15CMonsterManager13load_monstersEv+0x2d0>
 834fbc4:	e8 d2 c5 d7 ff       	call   80cc19b <_Z14G_CDataManagerv>
 834fbc9:	05 90 a8 00 00       	add    $0xa890,%eax
 834fbce:	89 45 dc             	mov    %eax,-0x24(%ebp)
 834fbd1:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 834fbd8:	eb 77                	jmp    834fc51 <_ZN15CMonsterManager13load_monstersEv+0x1cd>
 834fbda:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834fbdd:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fbe1:	8b 45 dc             	mov    -0x24(%ebp),%eax
 834fbe4:	89 04 24             	mov    %eax,(%esp)
 834fbe7:	e8 04 8c 03 00       	call   83887f0 <_ZNSt6vectorI21stIndependentDropInfoSaIS0_EEixEj>
 834fbec:	8b 00                	mov    (%eax),%eax
 834fbee:	85 c0                	test   %eax,%eax
 834fbf0:	75 26                	jne    834fc18 <_ZN15CMonsterManager13load_monstersEv+0x194>
 834fbf2:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834fbf5:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fbf9:	8b 45 dc             	mov    -0x24(%ebp),%eax
 834fbfc:	89 04 24             	mov    %eax,(%esp)
 834fbff:	e8 ec 8b 03 00       	call   83887f0 <_ZNSt6vectorI21stIndependentDropInfoSaIS0_EEixEj>
 834fc04:	8b 50 04             	mov    0x4(%eax),%edx
 834fc07:	8b 85 00 e3 ff ff    	mov    -0x1d00(%ebp),%eax
 834fc0d:	39 c2                	cmp    %eax,%edx
 834fc0f:	75 07                	jne    834fc18 <_ZN15CMonsterManager13load_monstersEv+0x194>
 834fc11:	b8 01 00 00 00       	mov    $0x1,%eax
 834fc16:	eb 05                	jmp    834fc1d <_ZN15CMonsterManager13load_monstersEv+0x199>
 834fc18:	b8 00 00 00 00       	mov    $0x0,%eax
 834fc1d:	84 c0                	test   %al,%al
 834fc1f:	74 2c                	je     834fc4d <_ZN15CMonsterManager13load_monstersEv+0x1c9>
 834fc21:	8b 45 e0             	mov    -0x20(%ebp),%eax
 834fc24:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fc28:	8b 45 dc             	mov    -0x24(%ebp),%eax
 834fc2b:	89 04 24             	mov    %eax,(%esp)
 834fc2e:	e8 bd 8b 03 00       	call   83887f0 <_ZNSt6vectorI21stIndependentDropInfoSaIS0_EEixEj>
 834fc33:	83 c0 08             	add    $0x8,%eax
 834fc36:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fc3a:	8d 85 00 e3 ff ff    	lea    -0x1d00(%ebp),%eax
 834fc40:	05 ac 03 00 00       	add    $0x3ac,%eax
 834fc45:	89 04 24             	mov    %eax,(%esp)
 834fc48:	e8 bd 8b 03 00       	call   838880a <_ZNSt6vectorI26stMonsterIndependentDrop_tSaIS0_EE9push_backERKS0_>
 834fc4d:	83 45 e0 01          	addl   $0x1,-0x20(%ebp)
 834fc51:	8b 45 dc             	mov    -0x24(%ebp),%eax
 834fc54:	89 04 24             	mov    %eax,(%esp)
 834fc57:	e8 72 8b 03 00       	call   83887ce <_ZNKSt6vectorI21stIndependentDropInfoSaIS0_EE4sizeEv>
 834fc5c:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 834fc5f:	0f 9f c0             	setg   %al
 834fc62:	84 c0                	test   %al,%al
 834fc64:	0f 85 70 ff ff ff    	jne    834fbda <_ZN15CMonsterManager13load_monstersEv+0x156>
 834fc6a:	c7 04 24 28 1d 00 00 	movl   $0x1d28,(%esp)
 834fc71:	e8 da 47 3d 00       	call   8724450 <_Znwj>
 834fc76:	89 c6                	mov    %eax,%esi
 834fc78:	89 f0                	mov    %esi,%eax
 834fc7a:	89 04 24             	mov    %eax,(%esp)
 834fc7d:	e8 22 a2 02 00       	call   8379ea4 <_ZN8CMonsterC1Ev>
 834fc82:	eb 15                	jmp    834fc99 <_ZN15CMonsterManager13load_monstersEv+0x215>
 834fc84:	89 d3                	mov    %edx,%ebx
 834fc86:	89 c7                	mov    %eax,%edi
 834fc88:	89 34 24             	mov    %esi,(%esp)
 834fc8b:	e8 60 48 3d 00       	call   87244f0 <_ZdlPv>
 834fc90:	89 f8                	mov    %edi,%eax
 834fc92:	89 da                	mov    %ebx,%edx
 834fc94:	e9 9d 00 00 00       	jmp    834fd36 <_ZN15CMonsterManager13load_monstersEv+0x2b2>
 834fc99:	89 75 d8             	mov    %esi,-0x28(%ebp)
 834fc9c:	8d 85 00 e3 ff ff    	lea    -0x1d00(%ebp),%eax
 834fca2:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fca6:	8b 45 d8             	mov    -0x28(%ebp),%eax
 834fca9:	89 04 24             	mov    %eax,(%esp)
 834fcac:	e8 9f f9 ff ff       	call   834f650 <_ZN8CMonster11set_monsterER15STMonsterScript>
 834fcb1:	8b 85 ec e6 ff ff    	mov    -0x1914(%ebp),%eax
 834fcb7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 834fcba:	eb 25                	jmp    834fce1 <_ZN15CMonsterManager13load_monstersEv+0x25d>
 834fcbc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 834fcbf:	89 04 24             	mov    %eax,(%esp)
 834fcc2:	e8 07 4c 02 00       	call   83748ce <_ZN8CMonster9get_indexEv>
 834fcc7:	89 44 24 08          	mov    %eax,0x8(%esp)
 834fccb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 834fcce:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fcd2:	8b 45 08             	mov    0x8(%ebp),%eax
 834fcd5:	89 04 24             	mov    %eax,(%esp)
 834fcd8:	e8 cf 00 00 00       	call   834fdac <_ZN15CMonsterManager14insert_monsterEii>
 834fcdd:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 834fce1:	8b 85 f0 e6 ff ff    	mov    -0x1910(%ebp),%eax
 834fce7:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 834fcea:	0f 9d c0             	setge  %al
 834fced:	84 c0                	test   %al,%al
 834fcef:	75 cb                	jne    834fcbc <_ZN15CMonsterManager13load_monstersEv+0x238>
 834fcf1:	8b 45 d8             	mov    -0x28(%ebp),%eax
 834fcf4:	89 04 24             	mov    %eax,(%esp)
 834fcf7:	e8 d2 4b 02 00       	call   83748ce <_ZN8CMonster9get_indexEv>
 834fcfc:	8b 55 d8             	mov    -0x28(%ebp),%edx
 834fcff:	89 54 24 08          	mov    %edx,0x8(%esp)
 834fd03:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fd07:	8b 45 08             	mov    0x8(%ebp),%eax
 834fd0a:	89 04 24             	mov    %eax,(%esp)
 834fd0d:	e8 dc 00 00 00       	call   834fdee <_ZN15CMonsterManager14insert_monsterEiP8CMonster>
 834fd12:	8d 45 d0             	lea    -0x30(%ebp),%eax
 834fd15:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 834fd1c:	00 
 834fd1d:	8d 55 c8             	lea    -0x38(%ebp),%edx
 834fd20:	89 54 24 04          	mov    %edx,0x4(%esp)
 834fd24:	89 04 24             	mov    %eax,(%esp)
 834fd27:	e8 b8 19 ff ff       	call   83416e4 <_ZNSt17_Rb_tree_iteratorISt4pairIKiSsEEppEi>
 834fd2c:	83 ec 04             	sub    $0x4,%esp
 834fd2f:	be 01 00 00 00       	mov    $0x1,%esi
 834fd34:	eb 1e                	jmp    834fd54 <_ZN15CMonsterManager13load_monstersEv+0x2d0>
 834fd36:	89 d3                	mov    %edx,%ebx
 834fd38:	89 c6                	mov    %eax,%esi
 834fd3a:	8d 85 00 e3 ff ff    	lea    -0x1d00(%ebp),%eax
 834fd40:	89 04 24             	mov    %eax,(%esp)
 834fd43:	e8 64 90 02 00       	call   8378dac <_ZN15STMonsterScriptD1Ev>
 834fd48:	89 f0                	mov    %esi,%eax
 834fd4a:	89 da                	mov    %ebx,%edx
 834fd4c:	89 04 24             	mov    %eax,(%esp)
 834fd4f:	e8 fc 39 79 00       	call   8ae3750 <_Unwind_Resume>
 834fd54:	8d 85 00 e3 ff ff    	lea    -0x1d00(%ebp),%eax
 834fd5a:	89 04 24             	mov    %eax,(%esp)
 834fd5d:	e8 4a 90 02 00       	call   8378dac <_ZN15STMonsterScriptD1Ev>
 834fd62:	85 f6                	test   %esi,%esi
 834fd64:	74 38                	je     834fd9e <_ZN15CMonsterManager13load_monstersEv+0x31a>
 834fd66:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834fd69:	c7 44 24 04 60 f2 4f 	movl   $0x94ff260,0x4(%esp)
 834fd70:	09 
 834fd71:	89 04 24             	mov    %eax,(%esp)
 834fd74:	e8 9f 63 d9 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 834fd79:	83 ec 04             	sub    $0x4,%esp
 834fd7c:	8d 45 cc             	lea    -0x34(%ebp),%eax
 834fd7f:	89 44 24 04          	mov    %eax,0x4(%esp)
 834fd83:	8d 45 c8             	lea    -0x38(%ebp),%eax
 834fd86:	89 04 24             	mov    %eax,(%esp)
 834fd89:	e8 b0 63 d9 ff       	call   80e613e <_ZNKSt17_Rb_tree_iteratorISt4pairIKiSsEEneERKS3_>
 834fd8e:	84 c0                	test   %al,%al
 834fd90:	0f 85 6f fd ff ff    	jne    834fb05 <_ZN15CMonsterManager13load_monstersEv+0x81>
 834fd96:	eb 01                	jmp    834fd99 <_ZN15CMonsterManager13load_monstersEv+0x315>
 834fd98:	90                   	nop
 834fd99:	bb 01 00 00 00       	mov    $0x1,%ebx
 834fd9e:	89 d8                	mov    %ebx,%eax
 834fda0:	8d 65 f4             	lea    -0xc(%ebp),%esp
 834fda3:	83 c4 00             	add    $0x0,%esp
 834fda6:	5b                   	pop    %ebx
 834fda7:	5e                   	pop    %esi
 834fda8:	5f                   	pop    %edi
 834fda9:	5d                   	pop    %ebp
 834fdaa:	c3                   	ret
 834fdab:	90                   	nop

```

```c
// CMonsterManager::load_monsters @ 0x834fa84

/* CMonsterManager::load_monsters() */

undefined4 __thiscall CMonsterManager::load_monsters(CMonsterManager *this)

{
  bool bVar1;
  char cVar2;
  CSyncScript *pCVar3;
  int iVar4;
  int *piVar5;
  CMonster *pCVar6;
  undefined4 unaff_EBX;
  undefined4 local_1d10 [3];
  int local_1d04 [235];
  vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>> avStack_1958 [64];
  int local_1918;
  int local_1914;
  _List_iterator<int> local_40 [4];
  undefined4 local_3c;
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_38 [4];
  _Rb_tree_iterator<std::pair<int_const,std::string>> local_34 [4];
  char *local_30;
  CMonster *local_2c;
  vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>> *local_28;
  uint local_24;
  int local_20;
  
  pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
  cVar2 = sync_script::CSyncScript::truncate_monster_info_table(pCVar3);
  if (cVar2 == '\x01') {
    local_30 = (char *)0x0;
    local_2c = (CMonster *)0x0;
    std::_Rb_tree_iterator<std::pair<int_const,std::string>>::_Rb_tree_iterator
              ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3c);
    std::_List_iterator<int>::_List_iterator(local_40);
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              ((map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>
                *)local_1d10);
    local_3c = local_1d10[0];
    do {
      std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
                (local_38);
      cVar2 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator!=
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3c,
                         (_Rb_tree_iterator *)local_38);
      if (cVar2 == '\0') {
        return 1;
      }
      iVar4 = std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator->
                        ((_Rb_tree_iterator<std::pair<int_const,std::string>> *)&local_3c);
      local_30 = (char *)std::string::c_str((string *)(iVar4 + 4));
      if (local_30 == (char *)0x0) {
        return 1;
      }
      STMonsterScript::STMonsterScript((STMonsterScript *)local_1d04);
                    /* try { // try from 0834fb56 to 0834fc75 has its CatchHandler @ 0834fd36 */
      cVar2 = ImportMonsterScript((STMonsterScript *)local_1d04,3,local_30,false);
      if (cVar2 == '\x01') {
        pCVar3 = (CSyncScript *)sync_script::GetInstanceSyncScript();
        cVar2 = sync_script::CSyncScript::insert_monster_info_to_db
                          (pCVar3,(STMonsterScript *)local_1d04);
        if (cVar2 == '\x01') {
          iVar4 = G_CDataManager();
          local_28 = (vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>> *)
                     (iVar4 + 0xa890);
          local_24 = 0;
          while (iVar4 = std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::
                         size(local_28), (int)local_24 < iVar4) {
            piVar5 = (int *)std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>
                            ::operator[](local_28,local_24);
            if ((*piVar5 == 0) &&
               (iVar4 = std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::
                        operator[](local_28,local_24), *(int *)(iVar4 + 4) == local_1d04[0])) {
              bVar1 = true;
            }
            else {
              bVar1 = false;
            }
            if (bVar1) {
              iVar4 = std::vector<stIndependentDropInfo,std::allocator<stIndependentDropInfo>>::
                      operator[](local_28,local_24);
              std::vector<stMonsterIndependentDrop_t,std::allocator<stMonsterIndependentDrop_t>>::
              push_back(avStack_1958,(stMonsterIndependentDrop_t *)(iVar4 + 8));
            }
            local_24 = local_24 + 1;
          }
          pCVar6 = operator_new(0x1d28);
                    /* try { // try from 0834fc7d to 0834fc81 has its CatchHandler @ 0834fc84 */
          CMonster::CMonster(pCVar6);
          local_2c = pCVar6;
                    /* try { // try from 0834fcac to 0834fd2b has its CatchHandler @ 0834fd36 */
          CMonster::set_monster(pCVar6,(STMonsterScript *)local_1d04);
          for (local_20 = local_1918; local_20 <= local_1914; local_20 = local_20 + 1) {
            CMonster::get_index(local_2c);
            insert_monster((int)this,local_20);
          }
          pCVar6 = (CMonster *)CMonster::get_index(local_2c);
          insert_monster((int)this,pCVar6);
          std::_Rb_tree_iterator<std::pair<int_const,std::string>>::operator++
                    (local_34,(int)&local_3c);
          bVar1 = true;
        }
        else {
          printf("insert_monster_category Error: %s\n",local_30);
          unaff_EBX = 0;
          bVar1 = false;
        }
      }
      else {
        printf("Monster Script Error: %s\n",local_30);
        unaff_EBX = 0;
        bVar1 = false;
      }
      STMonsterScript::~STMonsterScript((STMonsterScript *)local_1d04);
    } while (bVar1);
  }
  else {
    puts("Fail truncate_monster_info_table");
    unaff_EBX = 0;
  }
  return unaff_EBX;
}

```

---

## ~CMonsterManager

```asm
// === 0834f954 CMonsterManager::~CMonsterManager  [0x0834f954-0x834f9bd] ===
 834f954:	55                   	push   %ebp
 834f955:	89 e5                	mov    %esp,%ebp
 834f957:	56                   	push   %esi
 834f958:	53                   	push   %ebx
 834f959:	83 ec 10             	sub    $0x10,%esp
 834f95c:	8b 45 08             	mov    0x8(%ebp),%eax
 834f95f:	89 04 24             	mov    %eax,(%esp)
 834f962:	e8 57 00 00 00       	call   834f9be <_ZN15CMonsterManager7destroyEv>
 834f967:	eb 18                	jmp    834f981 <_ZN15CMonsterManagerD1Ev+0x2d>
 834f969:	89 d3                	mov    %edx,%ebx
 834f96b:	89 c6                	mov    %eax,%esi
 834f96d:	8b 45 08             	mov    0x8(%ebp),%eax
 834f970:	83 c0 18             	add    $0x18,%eax
 834f973:	89 04 24             	mov    %eax,(%esp)
 834f976:	e8 1d 94 02 00       	call   8378d98 <_ZN9__gnu_cxx8hash_mapIiP8CMonsterNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834f97b:	89 f0                	mov    %esi,%eax
 834f97d:	89 da                	mov    %ebx,%edx
 834f97f:	eb 10                	jmp    834f991 <_ZN15CMonsterManagerD1Ev+0x3d>
 834f981:	8b 45 08             	mov    0x8(%ebp),%eax
 834f984:	83 c0 18             	add    $0x18,%eax
 834f987:	89 04 24             	mov    %eax,(%esp)
 834f98a:	e8 09 94 02 00       	call   8378d98 <_ZN9__gnu_cxx8hash_mapIiP8CMonsterNS_4hashIiEESt8equal_toIiESaIS2_EED1Ev>
 834f98f:	eb 1b                	jmp    834f9ac <_ZN15CMonsterManagerD1Ev+0x58>
 834f991:	89 d3                	mov    %edx,%ebx
 834f993:	89 c6                	mov    %eax,%esi
 834f995:	8b 45 08             	mov    0x8(%ebp),%eax
 834f998:	89 04 24             	mov    %eax,(%esp)
 834f99b:	e8 a8 56 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 834f9a0:	89 f0                	mov    %esi,%eax
 834f9a2:	89 da                	mov    %ebx,%edx
 834f9a4:	89 04 24             	mov    %eax,(%esp)
 834f9a7:	e8 a4 3d 79 00       	call   8ae3750 <_Unwind_Resume>
 834f9ac:	8b 45 08             	mov    0x8(%ebp),%eax
 834f9af:	89 04 24             	mov    %eax,(%esp)
 834f9b2:	e8 91 56 02 00       	call   8375048 <_ZNSt8multimapIiiSt4lessIiESaISt4pairIKiiEEED1Ev>
 834f9b7:	83 c4 10             	add    $0x10,%esp
 834f9ba:	5b                   	pop    %ebx
 834f9bb:	5e                   	pop    %esi
 834f9bc:	5d                   	pop    %ebp
 834f9bd:	c3                   	ret

```

```c
// CMonsterManager::~CMonsterManager @ 0x834f954

/* CMonsterManager::~CMonsterManager() */

void __thiscall CMonsterManager::~CMonsterManager(CMonsterManager *this)

{
                    /* try { // try from 0834f962 to 0834f966 has its CatchHandler @ 0834f969 */
  destroy(this);
                    /* try { // try from 0834f98a to 0834f98e has its CatchHandler @ 0834f991 */
  __gnu_cxx::
  hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>::
  ~hash_map((hash_map<int,CMonster*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CMonster*>>
             *)(this + 0x18));
  std::multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>>::~multimap
            ((multimap<int,int,std::less<int>,std::allocator<std::pair<int_const,int>>> *)this);
  return;
}

```

