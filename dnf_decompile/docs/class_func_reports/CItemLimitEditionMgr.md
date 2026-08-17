# CItemLimitEditionMgr

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## makeItemLimitEditionInfo

```asm
// === 085132ca CItemLimitEditionMgr::makeItemLimitEditionInfo  [0x085132ca-0x8513381] ===
 85132ca:	55                   	push   %ebp
 85132cb:	89 e5                	mov    %esp,%ebp
 85132cd:	83 ec 38             	sub    $0x38,%esp
 85132d0:	8b 45 0c             	mov    0xc(%ebp),%eax
 85132d3:	89 04 24             	mov    %eax,(%esp)
 85132d6:	e8 71 d8 bf ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 85132db:	89 45 f0             	mov    %eax,-0x10(%ebp)
 85132de:	8b 45 0c             	mov    0xc(%ebp),%eax
 85132e1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85132e8:	00 
 85132e9:	89 04 24             	mov    %eax,(%esp)
 85132ec:	e8 2f 86 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85132f1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85132f8:	8b 55 08             	mov    0x8(%ebp),%edx
 85132fb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85132fe:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513302:	89 04 24             	mov    %eax,(%esp)
 8513305:	e8 6c 5e 00 00       	call   8519176 <_ZNK9__gnu_cxx8hash_mapIjP17CItemLimitEditionNS_4hashIjEESt8equal_toIjESaIS2_EE5beginEv>
 851330a:	83 ec 04             	sub    $0x4,%esp
 851330d:	8b 55 08             	mov    0x8(%ebp),%edx
 8513310:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8513313:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513317:	89 04 24             	mov    %eax,(%esp)
 851331a:	e8 7f 70 c6 ff       	call   817a39e <_ZNK9__gnu_cxx8hash_mapIjP17CItemLimitEditionNS_4hashIjEESt8equal_toIjESaIS2_EE3endEv>
 851331f:	83 ec 04             	sub    $0x4,%esp
 8513322:	eb 2c                	jmp    8513350 <_ZNK20CItemLimitEditionMgr24makeItemLimitEditionInfoER11PacketGuard+0x86>
 8513324:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8513327:	89 04 24             	mov    %eax,(%esp)
 851332a:	e8 2f 70 c6 ff       	call   817a35e <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP17CItemLimitEditionEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEptEv>
 851332f:	8b 40 04             	mov    0x4(%eax),%eax
 8513332:	8b 55 0c             	mov    0xc(%ebp),%edx
 8513335:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513339:	89 04 24             	mov    %eax,(%esp)
 851333c:	e8 a7 fd ff ff       	call   85130e8 <_ZNK17CItemLimitEdition14makeInfoPacketER11PacketGuard>
 8513341:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8513345:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8513348:	89 04 24             	mov    %eax,(%esp)
 851334b:	e8 f2 46 e7 ff       	call   8387a42 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP17CItemLimitEditionEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEppEv>
 8513350:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8513353:	89 44 24 04          	mov    %eax,0x4(%esp)
 8513357:	8d 45 e8             	lea    -0x18(%ebp),%eax
 851335a:	89 04 24             	mov    %eax,(%esp)
 851335d:	e8 cc 46 e7 ff       	call   8387a2e <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP17CItemLimitEditionEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEneERKSD_>
 8513362:	84 c0                	test   %al,%al
 8513364:	75 be                	jne    8513324 <_ZNK20CItemLimitEditionMgr24makeItemLimitEditionInfoER11PacketGuard+0x5a>
 8513366:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8513369:	8b 45 0c             	mov    0xc(%ebp),%eax
 851336c:	89 54 24 08          	mov    %edx,0x8(%esp)
 8513370:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8513373:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513377:	89 04 24             	mov    %eax,(%esp)
 851337a:	e8 a9 d7 bf ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 851337f:	c9                   	leave
 8513380:	c3                   	ret
 8513381:	90                   	nop

```

```c
// CItemLimitEditionMgr::makeItemLimitEditionInfo @ 0x85132ca

/* CItemLimitEditionMgr::makeItemLimitEditionInfo(PacketGuard&) const */

void __thiscall
CItemLimitEditionMgr::makeItemLimitEditionInfo(CItemLimitEditionMgr *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  hash_map<unsigned_int,CItemLimitEdition*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
  local_24 [8];
  hash_map<unsigned_int,CItemLimitEdition*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
  local_1c [8];
  int local_14;
  int local_10;
  
  local_14 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
  local_10 = 0;
  __gnu_cxx::
  hash_map<unsigned_int,CItemLimitEdition*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
  ::begin(local_1c);
  __gnu_cxx::
  hash_map<unsigned_int,CItemLimitEdition*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
  ::end(local_24);
  while( true ) {
    cVar1 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
            ::operator!=((_Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
                          *)local_1c,(_Hashtable_const_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
            ::operator->((_Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
                          *)local_1c);
    CItemLimitEdition::makeInfoPacket(*(CItemLimitEdition **)(iVar2 + 4),param_1);
    local_10 = local_10 + 1;
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
    ::operator++((_Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
                  *)local_1c);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_14,local_10);
  return;
}

```

---

## makeItemLimitEditionRemoveInfo

```asm
// === 08513382 CItemLimitEditionMgr::makeItemLimitEditionRemoveInfo  [0x08513382-0x8513443] ===
 8513382:	55                   	push   %ebp
 8513383:	89 e5                	mov    %esp,%ebp
 8513385:	83 ec 38             	sub    $0x38,%esp
 8513388:	8b 45 0c             	mov    0xc(%ebp),%eax
 851338b:	89 04 24             	mov    %eax,(%esp)
 851338e:	e8 b9 d7 bf ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 8513393:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8513396:	8b 45 0c             	mov    0xc(%ebp),%eax
 8513399:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 85133a0:	00 
 85133a1:	89 04 24             	mov    %eax,(%esp)
 85133a4:	e8 77 85 bb ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 85133a9:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 85133b0:	8b 55 08             	mov    0x8(%ebp),%edx
 85133b3:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85133b6:	89 54 24 04          	mov    %edx,0x4(%esp)
 85133ba:	89 04 24             	mov    %eax,(%esp)
 85133bd:	e8 b4 5d 00 00       	call   8519176 <_ZNK9__gnu_cxx8hash_mapIjP17CItemLimitEditionNS_4hashIjEESt8equal_toIjESaIS2_EE5beginEv>
 85133c2:	83 ec 04             	sub    $0x4,%esp
 85133c5:	8b 55 08             	mov    0x8(%ebp),%edx
 85133c8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 85133cb:	89 54 24 04          	mov    %edx,0x4(%esp)
 85133cf:	89 04 24             	mov    %eax,(%esp)
 85133d2:	e8 c7 6f c6 ff       	call   817a39e <_ZNK9__gnu_cxx8hash_mapIjP17CItemLimitEditionNS_4hashIjEESt8equal_toIjESaIS2_EE3endEv>
 85133d7:	83 ec 04             	sub    $0x4,%esp
 85133da:	eb 36                	jmp    8513412 <_ZNK20CItemLimitEditionMgr30makeItemLimitEditionRemoveInfoER11PacketGuard+0x90>
 85133dc:	8d 45 e8             	lea    -0x18(%ebp),%eax
 85133df:	89 04 24             	mov    %eax,(%esp)
 85133e2:	e8 77 6f c6 ff       	call   817a35e <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP17CItemLimitEditionEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEptEv>
 85133e7:	8b 40 04             	mov    0x4(%eax),%eax
 85133ea:	89 04 24             	mov    %eax,(%esp)
 85133ed:	e8 2a 63 fd ff       	call   84e971c <_ZNK17CItemLimitEdition8getIPGNOEv>
 85133f2:	89 c2                	mov    %eax,%edx
 85133f4:	8b 45 0c             	mov    0xc(%ebp),%eax
 85133f7:	89 54 24 04          	mov    %edx,0x4(%esp)
 85133fb:	89 04 24             	mov    %eax,(%esp)
 85133fe:	e8 39 85 bb ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8513403:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8513407:	8d 45 e8             	lea    -0x18(%ebp),%eax
 851340a:	89 04 24             	mov    %eax,(%esp)
 851340d:	e8 30 46 e7 ff       	call   8387a42 <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP17CItemLimitEditionEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEppEv>
 8513412:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8513415:	89 44 24 04          	mov    %eax,0x4(%esp)
 8513419:	8d 45 e8             	lea    -0x18(%ebp),%eax
 851341c:	89 04 24             	mov    %eax,(%esp)
 851341f:	e8 0a 46 e7 ff       	call   8387a2e <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKjP17CItemLimitEditionEjNS_4hashIjEESt10_Select1stIS5_ESt8equal_toIjESaIS4_EEneERKSD_>
 8513424:	84 c0                	test   %al,%al
 8513426:	75 b4                	jne    85133dc <_ZNK20CItemLimitEditionMgr30makeItemLimitEditionRemoveInfoER11PacketGuard+0x5a>
 8513428:	8b 55 f4             	mov    -0xc(%ebp),%edx
 851342b:	8b 45 0c             	mov    0xc(%ebp),%eax
 851342e:	89 54 24 08          	mov    %edx,0x8(%esp)
 8513432:	8d 55 f0             	lea    -0x10(%ebp),%edx
 8513435:	89 54 24 04          	mov    %edx,0x4(%esp)
 8513439:	89 04 24             	mov    %eax,(%esp)
 851343c:	e8 e7 d6 bf ff       	call   8110b28 <_ZN18InterfacePacketBuf8put_byteERii>
 8513441:	c9                   	leave
 8513442:	c3                   	ret
 8513443:	90                   	nop

```

```c
// CItemLimitEditionMgr::makeItemLimitEditionRemoveInfo @ 0x8513382

/* CItemLimitEditionMgr::makeItemLimitEditionRemoveInfo(PacketGuard&) const */

void __thiscall
CItemLimitEditionMgr::makeItemLimitEditionRemoveInfo
          (CItemLimitEditionMgr *this,PacketGuard *param_1)

{
  char cVar1;
  int iVar2;
  hash_map<unsigned_int,CItemLimitEdition*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
  local_24 [8];
  hash_map<unsigned_int,CItemLimitEdition*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
  local_1c [8];
  int local_14;
  int local_10;
  
  local_14 = InterfacePacketBuf::get_index((InterfacePacketBuf *)param_1);
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,0);
  local_10 = 0;
  __gnu_cxx::
  hash_map<unsigned_int,CItemLimitEdition*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
  ::begin(local_1c);
  __gnu_cxx::
  hash_map<unsigned_int,CItemLimitEdition*,__gnu_cxx::hash<unsigned_int>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
  ::end(local_24);
  while( true ) {
    cVar1 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
            ::operator!=((_Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
                          *)local_1c,(_Hashtable_const_iterator *)local_24);
    if (cVar1 == '\0') break;
    iVar2 = __gnu_cxx::
            _Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
            ::operator->((_Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
                          *)local_1c);
    iVar2 = CItemLimitEdition::getIPGNO(*(CItemLimitEdition **)(iVar2 + 4));
    InterfacePacketBuf::put_int((InterfacePacketBuf *)param_1,iVar2);
    local_10 = local_10 + 1;
    __gnu_cxx::
    _Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
    ::operator++((_Hashtable_const_iterator<std::pair<unsigned_int_const,CItemLimitEdition*>,unsigned_int,__gnu_cxx::hash<unsigned_int>,std::_Select1st<std::pair<unsigned_int_const,CItemLimitEdition*>>,std::equal_to<unsigned_int>,std::allocator<CItemLimitEdition*>>
                  *)local_1c);
  }
  InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_1,&local_14,local_10);
  return;
}

```

