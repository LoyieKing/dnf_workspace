# CNPCScriptList

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 5

---

## _destroy

```asm
// === 08581784 CNPCScriptList::_destroy  [0x08581784-0x858182d] ===
 8581784:	55                   	push   %ebp
 8581785:	89 e5                	mov    %esp,%ebp
 8581787:	53                   	push   %ebx
 8581788:	83 ec 34             	sub    $0x34,%esp
 858178b:	8b 55 08             	mov    0x8(%ebp),%edx
 858178e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8581791:	89 54 24 04          	mov    %edx,0x4(%esp)
 8581795:	89 04 24             	mov    %eax,(%esp)
 8581798:	e8 3f 18 00 00       	call   8582fdc <_ZN9__gnu_cxx8hash_mapIjP10CNPCScriptNS_4hashIjEESt8equal_toIjESaIS2_EE5beginEv>
 858179d:	83 ec 04             	sub    $0x4,%esp
 85817a0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85817a3:	89 44 24 04          	mov    %eax,0x4(%esp)
 85817a7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85817aa:	89 04 24             	mov    %eax,(%esp)
 85817ad:	e8 50 18 00 00       	call   8583002 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP10CNPCScriptEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEC1ERKNS_19_Hashtable_iteratorIS5_jS7_S9_SB_SC_EE>
 85817b2:	8b 55 08             	mov    0x8(%ebp),%edx
 85817b5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85817b8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85817bc:	89 04 24             	mov    %eax,(%esp)
 85817bf:	e8 5a 18 00 00       	call   858301e <_ZN9__gnu_cxx8hash_mapIjP10CNPCScriptNS_4hashIjEESt8equal_toIjESaIS2_EE3endEv>
 85817c4:	83 ec 04             	sub    $0x4,%esp
 85817c7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85817ca:	89 44 24 04          	mov    %eax,0x4(%esp)
 85817ce:	8d 45 d8             	lea    -0x28(%ebp),%eax
 85817d1:	89 04 24             	mov    %eax,(%esp)
 85817d4:	e8 29 18 00 00       	call   8583002 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP10CNPCScriptEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEC1ERKNS_19_Hashtable_iteratorIS5_jS7_S9_SB_SC_EE>
 85817d9:	eb 2d                	jmp    8581808 <_ZN14CNPCScriptList8_destroyEv+0x84>
 85817db:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85817de:	89 04 24             	mov    %eax,(%esp)
 85817e1:	e8 e2 17 00 00       	call   8582fc8 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP10CNPCScriptEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEptEv>
 85817e6:	8b 58 04             	mov    0x4(%eax),%ebx
 85817e9:	85 db                	test   %ebx,%ebx
 85817eb:	74 10                	je     85817fd <_ZN14CNPCScriptList8_destroyEv+0x79>
 85817ed:	89 1c 24             	mov    %ebx,(%esp)
 85817f0:	e8 59 0b 00 00       	call   858234e <_ZN10CNPCScriptD1Ev>
 85817f5:	89 1c 24             	mov    %ebx,(%esp)
 85817f8:	e8 f3 2c 1a 00       	call   87244f0 <_ZdlPv>
 85817fd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8581800:	89 04 24             	mov    %eax,(%esp)
 8581803:	e8 50 18 00 00       	call   8583058 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP10CNPCScriptEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEppEv>
 8581808:	8d 45 d8             	lea    -0x28(%ebp),%eax
 858180b:	89 44 24 04          	mov    %eax,0x4(%esp)
 858180f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8581812:	89 04 24             	mov    %eax,(%esp)
 8581815:	e8 2a 18 00 00       	call   8583044 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP10CNPCScriptEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEneERKSD_>
 858181a:	84 c0                	test   %al,%al
 858181c:	75 bd                	jne    85817db <_ZN14CNPCScriptList8_destroyEv+0x57>
 858181e:	8b 45 08             	mov    0x8(%ebp),%eax
 8581821:	89 04 24             	mov    %eax,(%esp)
 8581824:	e8 c7 18 00 00       	call   85830f0 <_ZN9__gnu_cxx8hash_mapIjP10CNPCScriptNS_4hashIjEESt8equal_toIjESaIS2_EE5clearEv>
 8581829:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 858182c:	c9                   	leave
 858182d:	c3                   	ret

```

```c
// CNPCScriptList::_destroy @ 0x8581784

/* CNPCScriptList::_destroy() */

void __thiscall CNPCScriptList::_destroy(CNPCScriptList *this)

{
  CNPCScript *this_00;
  char cVar1;
  int iVar2;
  _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_2c [8];
  _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_24 [8];
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_1c [8];
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_14 [12];
  
  __gnu_cxx::
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::begin(local_1c);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::_Hashtable_const_iterator(local_24,(_Hashtable_iterator *)local_1c);
  __gnu_cxx::
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::end(local_14);
  __gnu_cxx::
  _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::_Hashtable_const_iterator(local_2c,(_Hashtable_iterator *)local_14);
  while( true ) {
    cVar1 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
            ::operator!=(local_24,(_Hashtable_const_iterator *)local_2c);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
            ::operator->(local_24);
    this_00 = *(CNPCScript **)(iVar2 + 4);
    if (this_00 != (CNPCScript *)0x0) {
      CNPCScript::~CNPCScript(this_00);
      operator_delete(this_00);
    }
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
    ::operator++(local_24);
  }
  __gnu_cxx::
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::clear((hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
           *)this);
  return;
}

```

---

## find

```asm
// === 08581680 CNPCScriptList::find  [0x08581680-0x85816e3] ===
 8581680:	55                   	push   %ebp
 8581681:	89 e5                	mov    %esp,%ebp
 8581683:	83 ec 28             	sub    $0x28,%esp
 8581686:	8b 55 08             	mov    0x8(%ebp),%edx
 8581689:	8d 45 e8             	lea    -0x18(%ebp),%eax
 858168c:	8d 4d 0c             	lea    0xc(%ebp),%ecx
 858168f:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 8581693:	89 54 24 04          	mov    %edx,0x4(%esp)
 8581697:	89 04 24             	mov    %eax,(%esp)
 858169a:	e8 c3 18 00 00       	call   8582f62 <_ZNK9__gnu_cxx8hash_mapIjP10CNPCScriptNS_4hashIjEESt8equal_toIjESaIS2_EE4findERKj>
 858169f:	83 ec 04             	sub    $0x4,%esp
 85816a2:	8b 55 08             	mov    0x8(%ebp),%edx
 85816a5:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85816a8:	89 54 24 04          	mov    %edx,0x4(%esp)
 85816ac:	89 04 24             	mov    %eax,(%esp)
 85816af:	e8 da 18 00 00       	call   8582f8e <_ZNK9__gnu_cxx8hash_mapIjP10CNPCScriptNS_4hashIjEESt8equal_toIjESaIS2_EE3endEv>
 85816b4:	83 ec 04             	sub    $0x4,%esp
 85816b7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 85816ba:	89 44 24 04          	mov    %eax,0x4(%esp)
 85816be:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85816c1:	89 04 24             	mov    %eax,(%esp)
 85816c4:	e8 eb 18 00 00       	call   8582fb4 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP10CNPCScriptEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEeqERKSD_>
 85816c9:	84 c0                	test   %al,%al
 85816cb:	74 07                	je     85816d4 <_ZNK14CNPCScriptList4findEj+0x54>
 85816cd:	b8 00 00 00 00       	mov    $0x0,%eax
 85816d2:	eb 0e                	jmp    85816e2 <_ZNK14CNPCScriptList4findEj+0x62>
 85816d4:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85816d7:	89 04 24             	mov    %eax,(%esp)
 85816da:	e8 e9 18 00 00       	call   8582fc8 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP10CNPCScriptEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEptEv>
 85816df:	8b 40 04             	mov    0x4(%eax),%eax
 85816e2:	c9                   	leave
 85816e3:	c3                   	ret

```

```c
// CNPCScriptList::find @ 0x8581680

/* CNPCScriptList::find(unsigned int) const */

undefined4 CNPCScriptList::find(uint param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_1c [8];
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_14 [16];
  
  __gnu_cxx::
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::find((uint *)local_1c);
  __gnu_cxx::
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  ::end(local_14);
  cVar1 = __gnu_cxx::
          _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
          ::operator==(local_1c,(_Hashtable_const_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar3 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,CNPCScript*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CNPCScript*>>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
            ::operator->(local_1c);
    uVar2 = *(undefined4 *)(iVar3 + 4);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

```

---

## getFavorLevel

```asm
// === 085816e4 CNPCScriptList::getFavorLevel  [0x085816e4-0x858174d] ===
 85816e4:	55                   	push   %ebp
 85816e5:	89 e5                	mov    %esp,%ebp
 85816e7:	53                   	push   %ebx
 85816e8:	83 ec 34             	sub    $0x34,%esp
 85816eb:	8b 45 0c             	mov    0xc(%ebp),%eax
 85816ee:	66 89 45 e4          	mov    %ax,-0x1c(%ebp)
 85816f2:	0f b7 5d e4          	movzwl -0x1c(%ebp),%ebx
 85816f6:	8b 45 08             	mov    0x8(%ebp),%eax
 85816f9:	89 04 24             	mov    %eax,(%esp)
 85816fc:	e8 63 0c 00 00       	call   8582364 <_ZNK14CNPCScriptList16getMaxFavorValueEv>
 8581701:	39 c3                	cmp    %eax,%ebx
 8581703:	0f 9d c0             	setge  %al
 8581706:	84 c0                	test   %al,%al
 8581708:	74 07                	je     8581711 <_ZNK14CNPCScriptList13getFavorLevelEt+0x2d>
 858170a:	b8 04 00 00 00       	mov    $0x4,%eax
 858170f:	eb 36                	jmp    8581747 <_ZNK14CNPCScriptList13getFavorLevelEt+0x63>
 8581711:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
 8581718:	eb 1d                	jmp    8581737 <_ZNK14CNPCScriptList13getFavorLevelEt+0x53>
 858171a:	8b 55 f4             	mov    -0xc(%ebp),%edx
 858171d:	8b 45 08             	mov    0x8(%ebp),%eax
 8581720:	83 c2 08             	add    $0x8,%edx
 8581723:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 8581728:	66 3b 45 e4          	cmp    -0x1c(%ebp),%ax
 858172c:	72 05                	jb     8581733 <_ZNK14CNPCScriptList13getFavorLevelEt+0x4f>
 858172e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8581731:	eb 14                	jmp    8581747 <_ZNK14CNPCScriptList13getFavorLevelEt+0x63>
 8581733:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8581737:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 858173b:	0f 9e c0             	setle  %al
 858173e:	84 c0                	test   %al,%al
 8581740:	75 d8                	jne    858171a <_ZNK14CNPCScriptList13getFavorLevelEt+0x36>
 8581742:	b8 04 00 00 00       	mov    $0x4,%eax
 8581747:	83 c4 34             	add    $0x34,%esp
 858174a:	5b                   	pop    %ebx
 858174b:	5d                   	pop    %ebp
 858174c:	c3                   	ret
 858174d:	90                   	nop

```

```c
// CNPCScriptList::getFavorLevel @ 0x85816e4

/* CNPCScriptList::getFavorLevel(unsigned short) const */

int __thiscall CNPCScriptList::getFavorLevel(CNPCScriptList *this,ushort param_1)

{
  int iVar1;
  int local_10;
  
  iVar1 = getMaxFavorValue(this);
  if ((int)(uint)param_1 < iVar1) {
    for (local_10 = 1; local_10 < 4; local_10 = local_10 + 1) {
      if (param_1 <= *(ushort *)(this + (local_10 + 8) * 2 + 6)) {
        return local_10;
      }
    }
  }
  return 4;
}

```

---

## getFavorLevelValue

```asm
// === 0858174e CNPCScriptList::getFavorLevelValue  [0x0858174e-0x8581783] ===
 858174e:	55                   	push   %ebp
 858174f:	89 e5                	mov    %esp,%ebp
 8581751:	83 ec 18             	sub    $0x18,%esp
 8581754:	83 7d 0c 03          	cmpl   $0x3,0xc(%ebp)
 8581758:	76 0d                	jbe    8581767 <_ZNK14CNPCScriptList18getFavorLevelValueEj+0x19>
 858175a:	8b 45 08             	mov    0x8(%ebp),%eax
 858175d:	89 04 24             	mov    %eax,(%esp)
 8581760:	e8 ff 0b 00 00       	call   8582364 <_ZNK14CNPCScriptList16getMaxFavorValueEv>
 8581765:	eb 1b                	jmp    8581782 <_ZNK14CNPCScriptList18getFavorLevelValueEj+0x34>
 8581767:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 858176b:	75 07                	jne    8581774 <_ZNK14CNPCScriptList18getFavorLevelValueEj+0x26>
 858176d:	b8 00 00 00 00       	mov    $0x0,%eax
 8581772:	eb 0e                	jmp    8581782 <_ZNK14CNPCScriptList18getFavorLevelValueEj+0x34>
 8581774:	8b 55 0c             	mov    0xc(%ebp),%edx
 8581777:	8b 45 08             	mov    0x8(%ebp),%eax
 858177a:	83 c2 08             	add    $0x8,%edx
 858177d:	0f b7 44 50 06       	movzwl 0x6(%eax,%edx,2),%eax
 8581782:	c9                   	leave
 8581783:	c3                   	ret

```

```c
// CNPCScriptList::getFavorLevelValue @ 0x858174e

/* CNPCScriptList::getFavorLevelValue(unsigned int) const */

uint __thiscall CNPCScriptList::getFavorLevelValue(CNPCScriptList *this,uint param_1)

{
  uint uVar1;
  
  if (param_1 < 4) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = (uint)*(ushort *)(this + (param_1 + 8) * 2 + 6);
    }
  }
  else {
    uVar1 = getMaxFavorValue(this);
  }
  return uVar1;
}

```

---

## initScript

```asm
// === 08581314 CNPCScriptList::initScript  [0x08581314-0x858167f] ===
 8581314:	55                   	push   %ebp
 8581315:	89 e5                	mov    %esp,%ebp
 8581317:	57                   	push   %edi
 8581318:	56                   	push   %esi
 8581319:	53                   	push   %ebx
 858131a:	81 ec 9c 00 00 00    	sub    $0x9c,%esp
 8581320:	8b 45 10             	mov    0x10(%ebp),%eax
 8581323:	89 44 24 04          	mov    %eax,0x4(%esp)
 8581327:	8b 45 0c             	mov    0xc(%ebp),%eax
 858132a:	89 04 24             	mov    %eax,(%esp)
 858132d:	e8 76 ae 47 00       	call   89fc1a8 <_Z13initNpcScriptPKcS0_>
 8581332:	83 f0 01             	xor    $0x1,%eax
 8581335:	84 c0                	test   %al,%al
 8581337:	74 0a                	je     8581343 <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x2f>
 8581339:	b8 a1 01 00 00       	mov    $0x1a1,%eax
 858133e:	e9 32 03 00 00       	jmp    8581675 <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x361>
 8581343:	8d 45 80             	lea    -0x80(%ebp),%eax
 8581346:	c7 44 24 04 80 e7 4f 	movl   $0x94fe780,0x4(%esp)
 858134d:	09 
 858134e:	89 04 24             	mov    %eax,(%esp)
 8581351:	e8 9c 4d b6 ff       	call   80e60f2 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE5beginEv>
 8581356:	83 ec 04             	sub    $0x4,%esp
 8581359:	8d 45 80             	lea    -0x80(%ebp),%eax
 858135c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8581360:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8581366:	89 04 24             	mov    %eax,(%esp)
 8581369:	e8 24 1b 00 00       	call   8582e92 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 858136e:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8581371:	c7 44 24 04 80 e7 4f 	movl   $0x94fe780,0x4(%esp)
 8581378:	09 
 8581379:	89 04 24             	mov    %eax,(%esp)
 858137c:	e8 97 4d b6 ff       	call   80e6118 <_ZNSt3mapIiSsSt4lessIiESaISt4pairIKiSsEEE3endEv>
 8581381:	83 ec 04             	sub    $0x4,%esp
 8581384:	8d 45 84             	lea    -0x7c(%ebp),%eax
 8581387:	89 44 24 04          	mov    %eax,0x4(%esp)
 858138b:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 8581391:	89 04 24             	mov    %eax,(%esp)
 8581394:	e8 f9 1a 00 00       	call   8582e92 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEC1ERKSt17_Rb_tree_iteratorIS2_E>
 8581399:	e9 e8 01 00 00       	jmp    8581586 <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x272>
 858139e:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 85813a4:	89 04 24             	mov    %eax,(%esp)
 85813a7:	e8 e2 5a b4 ff       	call   80c6e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 85813ac:	83 c0 04             	add    $0x4,%eax
 85813af:	89 04 24             	mov    %eax,(%esp)
 85813b2:	e8 39 51 18 00       	call   87064f0 <_ZNKSs5c_strEv>
 85813b7:	89 04 24             	mov    %eax,(%esp)
 85813ba:	e8 b1 9a 47 00       	call   89fae70 <_Z16isExistNPCScriptPKc>
 85813bf:	83 f0 01             	xor    $0x1,%eax
 85813c2:	84 c0                	test   %al,%al
 85813c4:	74 5a                	je     8581420 <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x10c>
 85813c6:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 85813cc:	89 04 24             	mov    %eax,(%esp)
 85813cf:	e8 ba 5a b4 ff       	call   80c6e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 85813d4:	83 c0 04             	add    $0x4,%eax
 85813d7:	89 04 24             	mov    %eax,(%esp)
 85813da:	e8 11 51 18 00       	call   87064f0 <_ZNKSs5c_strEv>
 85813df:	89 c3                	mov    %eax,%ebx
 85813e1:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85813e8:	00 
 85813e9:	c7 44 24 08 a9 01 00 	movl   $0x1a9,0x8(%esp)
 85813f0:	00 
 85813f1:	c7 44 24 04 60 a5 ca 	movl   $0x8caa560,0x4(%esp)
 85813f8:	08 
 85813f9:	8d 45 88             	lea    -0x78(%ebp),%eax
 85813fc:	89 04 24             	mov    %eax,(%esp)
 85813ff:	e8 14 e3 fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8581404:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8581408:	c7 44 24 04 eb 98 ca 	movl   $0x8ca98eb,0x4(%esp)
 858140f:	08 
 8581410:	8d 45 88             	lea    -0x78(%ebp),%eax
 8581413:	89 04 24             	mov    %eax,(%esp)
 8581416:	e8 6d e3 fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 858141b:	e9 58 01 00 00       	jmp    8581578 <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x264>
 8581420:	c7 04 24 ec 06 00 00 	movl   $0x6ec,(%esp)
 8581427:	e8 24 30 1a 00       	call   8724450 <_Znwj>
 858142c:	89 c3                	mov    %eax,%ebx
 858142e:	89 d8                	mov    %ebx,%eax
 8581430:	89 04 24             	mov    %eax,(%esp)
 8581433:	e8 00 0f 00 00       	call   8582338 <_ZN10CNPCScriptC1Ev>
 8581438:	eb 18                	jmp    8581452 <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x13e>
 858143a:	89 d6                	mov    %edx,%esi
 858143c:	89 c7                	mov    %eax,%edi
 858143e:	89 1c 24             	mov    %ebx,(%esp)
 8581441:	e8 aa 30 1a 00       	call   87244f0 <_ZdlPv>
 8581446:	89 f8                	mov    %edi,%eax
 8581448:	89 f2                	mov    %esi,%edx
 858144a:	89 04 24             	mov    %eax,(%esp)
 858144d:	e8 fe 22 56 00       	call   8ae3750 <_Unwind_Resume>
 8581452:	89 d8                	mov    %ebx,%eax
 8581454:	89 85 74 ff ff ff    	mov    %eax,-0x8c(%ebp)
 858145a:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8581460:	89 04 24             	mov    %eax,(%esp)
 8581463:	e8 26 5a b4 ff       	call   80c6e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 8581468:	83 c0 04             	add    $0x4,%eax
 858146b:	89 04 24             	mov    %eax,(%esp)
 858146e:	e8 7d 50 18 00       	call   87064f0 <_ZNKSs5c_strEv>
 8581473:	8b 95 74 ff ff ff    	mov    -0x8c(%ebp),%edx
 8581479:	89 44 24 04          	mov    %eax,0x4(%esp)
 858147d:	89 14 24             	mov    %edx,(%esp)
 8581480:	e8 21 f5 ff ff       	call   85809a6 <_ZN10CNPCScript4loadEPKc>
 8581485:	83 f0 01             	xor    $0x1,%eax
 8581488:	84 c0                	test   %al,%al
 858148a:	74 5f                	je     85814eb <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x1d7>
 858148c:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8581492:	89 04 24             	mov    %eax,(%esp)
 8581495:	e8 f4 59 b4 ff       	call   80c6e8e <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEptEv>
 858149a:	83 c0 04             	add    $0x4,%eax
 858149d:	89 04 24             	mov    %eax,(%esp)
 85814a0:	e8 4b 50 18 00       	call   87064f0 <_ZNKSs5c_strEv>
 85814a5:	89 c3                	mov    %eax,%ebx
 85814a7:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85814ae:	00 
 85814af:	c7 44 24 08 b0 01 00 	movl   $0x1b0,0x8(%esp)
 85814b6:	00 
 85814b7:	c7 44 24 04 60 a5 ca 	movl   $0x8caa560,0x4(%esp)
 85814be:	08 
 85814bf:	8d 45 98             	lea    -0x68(%ebp),%eax
 85814c2:	89 04 24             	mov    %eax,(%esp)
 85814c5:	e8 4e e2 fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85814ca:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 85814ce:	c7 44 24 04 ff 98 ca 	movl   $0x8ca98ff,0x4(%esp)
 85814d5:	08 
 85814d6:	8d 45 98             	lea    -0x68(%ebp),%eax
 85814d9:	89 04 24             	mov    %eax,(%esp)
 85814dc:	e8 a7 e2 fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 85814e1:	b8 b4 01 00 00       	mov    $0x1b4,%eax
 85814e6:	e9 8a 01 00 00       	jmp    8581675 <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x361>
 85814eb:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 85814f1:	89 04 24             	mov    %eax,(%esp)
 85814f4:	e8 b3 04 00 00       	call   85819ac <_ZNK10CNPCScript8getIndexEv>
 85814f9:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 85814fc:	8d 45 bc             	lea    -0x44(%ebp),%eax
 85814ff:	8d 95 74 ff ff ff    	lea    -0x8c(%ebp),%edx
 8581505:	89 54 24 08          	mov    %edx,0x8(%esp)
 8581509:	8d 55 c4             	lea    -0x3c(%ebp),%edx
 858150c:	89 54 24 04          	mov    %edx,0x4(%esp)
 8581510:	89 04 24             	mov    %eax,(%esp)
 8581513:	e8 a7 19 00 00       	call   8582ebf <_ZSt9make_pairIjRP10CNPCScriptESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 8581518:	83 ec 04             	sub    $0x4,%esp
 858151b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 858151e:	89 44 24 04          	mov    %eax,0x4(%esp)
 8581522:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 8581525:	89 04 24             	mov    %eax,(%esp)
 8581528:	e8 d9 19 00 00       	call   8582f06 <_ZNSt4pairIKjP10CNPCScriptEC1IjS2_EEOS_IT_T0_E>
 858152d:	8b 55 08             	mov    0x8(%ebp),%edx
 8581530:	8d 45 a8             	lea    -0x58(%ebp),%eax
 8581533:	8d 4d b4             	lea    -0x4c(%ebp),%ecx
 8581536:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 858153a:	89 54 24 04          	mov    %edx,0x4(%esp)
 858153e:	89 04 24             	mov    %eax,(%esp)
 8581541:	e8 f0 19 00 00       	call   8582f36 <_ZN9__gnu_cxx8hash_mapIjP10CNPCScriptNS_4hashIjEESt8equal_toIjESaIS2_EE6insertERKSt4pairIKjS2_E>
 8581546:	83 ec 04             	sub    $0x4,%esp
 8581549:	8b 85 74 ff ff ff    	mov    -0x8c(%ebp),%eax
 858154f:	89 04 24             	mov    %eax,(%esp)
 8581552:	e8 5f 04 00 00       	call   85819b6 <_ZNK10CNPCScript14isFavorableNPCEv>
 8581557:	84 c0                	test   %al,%al
 8581559:	74 1d                	je     8581578 <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x264>
 858155b:	8b 9d 74 ff ff ff    	mov    -0x8c(%ebp),%ebx
 8581561:	e8 35 ac b4 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8581566:	8b 80 d4 a8 00 00    	mov    0xa8d4(%eax),%eax
 858156c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8581570:	89 04 24             	mov    %eax,(%esp)
 8581573:	e8 f0 f0 ff ff       	call   8580668 <_ZN22CNPCDynamicInfoManager3addEPK10CNPCScript>
 8581578:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 858157e:	89 04 24             	mov    %eax,(%esp)
 8581581:	e8 1c 19 00 00       	call   8582ea2 <_ZNSt23_Rb_tree_const_iteratorISt4pairIKiSsEEppEv>
 8581586:	8d 85 78 ff ff ff    	lea    -0x88(%ebp),%eax
 858158c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8581590:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 8581596:	89 04 24             	mov    %eax,(%esp)
 8581599:	e8 dc 58 b4 ff       	call   80c6e7a <_ZNKSt23_Rb_tree_const_iteratorISt4pairIKiSsEEneERKS3_>
 858159e:	84 c0                	test   %al,%al
 85815a0:	0f 85 f8 fd ff ff    	jne    858139e <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x8a>
 85815a6:	8b 45 08             	mov    0x8(%ebp),%eax
 85815a9:	8d 50 14             	lea    0x14(%eax),%edx
 85815ac:	8b 45 14             	mov    0x14(%ebp),%eax
 85815af:	89 44 24 04          	mov    %eax,0x4(%esp)
 85815b3:	89 14 24             	mov    %edx,(%esp)
 85815b6:	e8 0a 9a 47 00       	call   89fafc5 <_Z17loadNPCCommonDataR17stNPCCommonData_tPKc>
 85815bb:	85 c0                	test   %eax,%eax
 85815bd:	0f 95 c0             	setne  %al
 85815c0:	84 c0                	test   %al,%al
 85815c2:	74 44                	je     8581608 <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x2f4>
 85815c4:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 85815cb:	00 
 85815cc:	c7 44 24 08 be 01 00 	movl   $0x1be,0x8(%esp)
 85815d3:	00 
 85815d4:	c7 44 24 04 60 a5 ca 	movl   $0x8caa560,0x4(%esp)
 85815db:	08 
 85815dc:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85815df:	89 04 24             	mov    %eax,(%esp)
 85815e2:	e8 31 e1 fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 85815e7:	8b 45 14             	mov    0x14(%ebp),%eax
 85815ea:	89 44 24 08          	mov    %eax,0x8(%esp)
 85815ee:	c7 44 24 04 ff 98 ca 	movl   $0x8ca98ff,0x4(%esp)
 85815f5:	08 
 85815f6:	8d 45 c8             	lea    -0x38(%ebp),%eax
 85815f9:	89 04 24             	mov    %eax,(%esp)
 85815fc:	e8 87 e1 fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8581601:	b8 bf 01 00 00       	mov    $0x1bf,%eax
 8581606:	eb 6d                	jmp    8581675 <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x361>
 8581608:	8b 45 08             	mov    0x8(%ebp),%eax
 858160b:	83 c0 2c             	add    $0x2c,%eax
 858160e:	89 04 24             	mov    %eax,(%esp)
 8581611:	e8 aa cb b0 ff       	call   808e1c0 <_ZNKSt6vectorIiSaIiEE4sizeEv>
 8581616:	83 f8 32             	cmp    $0x32,%eax
 8581619:	0f 97 c0             	seta   %al
 858161c:	84 c0                	test   %al,%al
 858161e:	74 44                	je     8581664 <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x350>
 8581620:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 8581627:	00 
 8581628:	c7 44 24 08 c3 01 00 	movl   $0x1c3,0x8(%esp)
 858162f:	00 
 8581630:	c7 44 24 04 60 a5 ca 	movl   $0x8caa560,0x4(%esp)
 8581637:	08 
 8581638:	8d 45 d8             	lea    -0x28(%ebp),%eax
 858163b:	89 04 24             	mov    %eax,(%esp)
 858163e:	e8 d5 e0 fc ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 8581643:	8b 45 14             	mov    0x14(%ebp),%eax
 8581646:	89 44 24 08          	mov    %eax,0x8(%esp)
 858164a:	c7 44 24 04 0f 99 ca 	movl   $0x8ca990f,0x4(%esp)
 8581651:	08 
 8581652:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8581655:	89 04 24             	mov    %eax,(%esp)
 8581658:	e8 2b e1 fc ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 858165d:	b8 c4 01 00 00       	mov    $0x1c4,%eax
 8581662:	eb 11                	jmp    8581675 <_ZN14CNPCScriptList10initScriptEPcS0_S0_+0x361>
 8581664:	c7 04 24 00 00 00 00 	movl   $0x0,(%esp)
 858166b:	e8 7c 6b 0b 00       	call   86381ec <_ZN18TimerNPCMoodChange15registNextTimerEl>
 8581670:	b8 00 00 00 00       	mov    $0x0,%eax
 8581675:	8d 65 f4             	lea    -0xc(%ebp),%esp
 8581678:	83 c4 00             	add    $0x0,%esp
 858167b:	5b                   	pop    %ebx
 858167c:	5e                   	pop    %esi
 858167d:	5f                   	pop    %edi
 858167e:	5d                   	pop    %ebp
 858167f:	c3                   	ret

```

```c
// CNPCScriptList::initScript @ 0x8581314

/* CNPCScriptList::initScript(char*, char*, char*) */

undefined4 __thiscall
CNPCScriptList::initScript(CNPCScriptList *this,char *param_1,char *param_2,char *param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  CNPCScript *this_00;
  int iVar4;
  uint uVar5;
  _Rb_tree_const_iterator<std::pair<int_const,std::string>> local_8c [4];
  _Rb_tree_const_iterator<std::pair<int_const,std::string>> local_88 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_84 [4];
  map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>> local_80 [4];
  cMyTrace local_7c [16];
  cMyTrace local_6c [16];
  hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
  local_5c [12];
  pair<unsigned_int_const,CNPCScript*> local_50 [8];
  uint local_48 [2];
  CNPCScript *local_40;
  cMyTrace local_3c [16];
  cMyTrace local_2c [28];
  
  cVar1 = initNpcScript(param_1,param_2);
  if (cVar1 == '\x01') {
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::begin
              (local_84);
    std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
              (local_88,(_Rb_tree_iterator *)local_84);
    std::map<int,std::string,std::less<int>,std::allocator<std::pair<int_const,std::string>>>::end
              (local_80);
    std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::_Rb_tree_const_iterator
              (local_8c,(_Rb_tree_iterator *)local_80);
    while (cVar1 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator!=
                             (local_88,(_Rb_tree_const_iterator *)local_8c), cVar1 != '\0') {
      iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->(local_88);
      pcVar3 = (char *)std::string::c_str((string *)(iVar4 + 4));
      cVar1 = isExistNPCScript(pcVar3);
      if (cVar1 == '\x01') {
        this_00 = operator_new(0x6ec);
                    /* try { // try from 08581433 to 08581437 has its CatchHandler @ 0858143a */
        CNPCScript::CNPCScript(this_00);
        iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->(local_88)
        ;
        pcVar3 = (char *)std::string::c_str((string *)(iVar4 + 4));
        cVar1 = CNPCScript::load(this_00,pcVar3);
        if (cVar1 != '\x01') {
          iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->
                            (local_88);
          uVar2 = std::string::c_str((string *)(iVar4 + 4));
          cMyTrace::cMyTrace(local_6c,"int CNPCScriptList::initScript(NCHAR*, NCHAR*, NCHAR*)",0x1b0
                             ,5);
          cMyTrace::operator()(local_6c,"%s load failed\n",uVar2);
          return 0x1b4;
        }
        local_40 = (CNPCScript *)CNPCScript::getIndex(this_00);
        std::make_pair<unsigned_int,CNPCScript*&>(local_48,&local_40);
        std::pair<unsigned_int_const,CNPCScript*>::pair<unsigned_int,CNPCScript*>
                  (local_50,(pair *)local_48);
        __gnu_cxx::
        hash_map<unsigned_int,CNPCScript*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CNPCScript*>>
        ::insert(local_5c,this);
        cVar1 = CNPCScript::isFavorableNPC(this_00);
        if (cVar1 != '\0') {
          iVar4 = G_CDataManager();
          CNPCDynamicInfoManager::add(*(CNPCDynamicInfoManager **)(iVar4 + 0xa8d4),this_00);
        }
      }
      else {
        iVar4 = std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator->(local_88)
        ;
        uVar2 = std::string::c_str((string *)(iVar4 + 4));
        cMyTrace::cMyTrace(local_7c,"int CNPCScriptList::initScript(NCHAR*, NCHAR*, NCHAR*)",0x1a9,5
                          );
        cMyTrace::operator()(local_7c,"%s file not exists\n",uVar2);
      }
      std::_Rb_tree_const_iterator<std::pair<int_const,std::string>>::operator++(local_88);
    }
    iVar4 = loadNPCCommonData((stNPCCommonData_t *)(this + 0x14),param_3);
    if (iVar4 == 0) {
      uVar5 = std::vector<int,std::allocator<int>>::size
                        ((vector<int,std::allocator<int>> *)(this + 0x2c));
      if (uVar5 < 0x33) {
        TimerNPCMoodChange::registNextTimer(0);
        uVar2 = 0;
      }
      else {
        cMyTrace::cMyTrace(local_2c,"int CNPCScriptList::initScript(NCHAR*, NCHAR*, NCHAR*)",0x1c3,5
                          );
        cMyTrace::operator()(local_2c,"%s Favorable npc count over",param_3);
        uVar2 = 0x1c4;
      }
    }
    else {
      cMyTrace::cMyTrace(local_3c,"int CNPCScriptList::initScript(NCHAR*, NCHAR*, NCHAR*)",0x1be,5);
      cMyTrace::operator()(local_3c,"%s load failed\n",param_3);
      uVar2 = 0x1bf;
    }
  }
  else {
    uVar2 = 0x1a1;
  }
  return uVar2;
}

```

