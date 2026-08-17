# stFavorableRelationShip_t

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## clear

```asm
// === 089fb56c stFavorableRelationShip_t::clear  [0x089fb56c-0x89fb687] ===
 89fb56c:	55                   	push   %ebp
 89fb56d:	89 e5                	mov    %esp,%ebp
 89fb56f:	83 ec 28             	sub    $0x28,%esp
 89fb572:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb575:	c6 00 00             	movb   $0x0,(%eax)
 89fb578:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb57b:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 89fb582:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb585:	66 c7 40 08 00 00    	movw   $0x0,0x8(%eax)
 89fb58b:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb58e:	66 c7 40 0a 00 00    	movw   $0x0,0xa(%eax)
 89fb594:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb597:	66 c7 40 0c 00 00    	movw   $0x0,0xc(%eax)
 89fb59d:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb5a0:	83 c0 10             	add    $0x10,%eax
 89fb5a3:	89 04 24             	mov    %eax,(%esp)
 89fb5a6:	e8 77 5e 00 00       	call   8a01422 <_ZNSt6vectorISt4pairI13ENUM_NPC_MOODjESaIS2_EE5clearEv>
 89fb5ab:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb5ae:	83 c0 1c             	add    $0x1c,%eax
 89fb5b1:	89 04 24             	mov    %eax,(%esp)
 89fb5b4:	e8 85 5e 00 00       	call   8a0143e <_ZNSt6vectorISt4pairImjESaIS1_EE5clearEv>
 89fb5b9:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 89fb5c0:	eb 78                	jmp    89fb63a <_ZN25stFavorableRelationShip_t5clearEv+0xce>
 89fb5c2:	8b 55 f0             	mov    -0x10(%ebp),%edx
 89fb5c5:	89 d0                	mov    %edx,%eax
 89fb5c7:	01 c0                	add    %eax,%eax
 89fb5c9:	01 d0                	add    %edx,%eax
 89fb5cb:	c1 e0 03             	shl    $0x3,%eax
 89fb5ce:	83 c0 20             	add    $0x20,%eax
 89fb5d1:	03 45 08             	add    0x8(%ebp),%eax
 89fb5d4:	83 c0 08             	add    $0x8,%eax
 89fb5d7:	89 04 24             	mov    %eax,(%esp)
 89fb5da:	e8 7b 5e 00 00       	call   8a0145a <_ZNSt3mapImN25stFavorableRelationShip_t16stGiftItemInfo_tESt4lessImESaISt4pairIKmS1_EEE5clearEv>
 89fb5df:	8b 55 f0             	mov    -0x10(%ebp),%edx
 89fb5e2:	89 d0                	mov    %edx,%eax
 89fb5e4:	01 c0                	add    %eax,%eax
 89fb5e6:	01 d0                	add    %edx,%eax
 89fb5e8:	c1 e0 03             	shl    $0x3,%eax
 89fb5eb:	05 10 01 00 00       	add    $0x110,%eax
 89fb5f0:	03 45 08             	add    0x8(%ebp),%eax
 89fb5f3:	83 c0 08             	add    $0x8,%eax
 89fb5f6:	89 04 24             	mov    %eax,(%esp)
 89fb5f9:	e8 5c 5e 00 00       	call   8a0145a <_ZNSt3mapImN25stFavorableRelationShip_t16stGiftItemInfo_tESt4lessImESaISt4pairIKmS1_EEE5clearEv>
 89fb5fe:	8b 55 f0             	mov    -0x10(%ebp),%edx
 89fb601:	89 d0                	mov    %edx,%eax
 89fb603:	01 c0                	add    %eax,%eax
 89fb605:	01 d0                	add    %edx,%eax
 89fb607:	c1 e0 03             	shl    $0x3,%eax
 89fb60a:	05 a0 00 00 00       	add    $0xa0,%eax
 89fb60f:	03 45 08             	add    0x8(%ebp),%eax
 89fb612:	89 04 24             	mov    %eax,(%esp)
 89fb615:	e8 40 5e 00 00       	call   8a0145a <_ZNSt3mapImN25stFavorableRelationShip_t16stGiftItemInfo_tESt4lessImESaISt4pairIKmS1_EEE5clearEv>
 89fb61a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 89fb61d:	89 d0                	mov    %edx,%eax
 89fb61f:	01 c0                	add    %eax,%eax
 89fb621:	01 d0                	add    %edx,%eax
 89fb623:	c1 e0 03             	shl    $0x3,%eax
 89fb626:	05 90 01 00 00       	add    $0x190,%eax
 89fb62b:	03 45 08             	add    0x8(%ebp),%eax
 89fb62e:	89 04 24             	mov    %eax,(%esp)
 89fb631:	e8 24 5e 00 00       	call   8a0145a <_ZNSt3mapImN25stFavorableRelationShip_t16stGiftItemInfo_tESt4lessImESaISt4pairIKmS1_EEE5clearEv>
 89fb636:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 89fb63a:	83 7d f0 04          	cmpl   $0x4,-0x10(%ebp)
 89fb63e:	0f 9e c0             	setle  %al
 89fb641:	84 c0                	test   %al,%al
 89fb643:	0f 85 79 ff ff ff    	jne    89fb5c2 <_ZN25stFavorableRelationShip_t5clearEv+0x56>
 89fb649:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 89fb650:	eb 19                	jmp    89fb66b <_ZN25stFavorableRelationShip_t5clearEv+0xff>
 89fb652:	8b 55 f4             	mov    -0xc(%ebp),%edx
 89fb655:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb658:	8d 8a 34 01 00 00    	lea    0x134(%edx),%ecx
 89fb65e:	ba 00 00 80 3f       	mov    $0x3f800000,%edx
 89fb663:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 89fb667:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 89fb66b:	83 7d f4 02          	cmpl   $0x2,-0xc(%ebp)
 89fb66f:	0f 9e c0             	setle  %al
 89fb672:	84 c0                	test   %al,%al
 89fb674:	75 dc                	jne    89fb652 <_ZN25stFavorableRelationShip_t5clearEv+0xe6>
 89fb676:	8b 45 08             	mov    0x8(%ebp),%eax
 89fb679:	05 08 02 00 00       	add    $0x208,%eax
 89fb67e:	89 04 24             	mov    %eax,(%esp)
 89fb681:	e8 82 fe ff ff       	call   89fb508 <_ZN25stFavorableRelationShip_t14stRewardItem_t5clearEv>
 89fb686:	c9                   	leave
 89fb687:	c3                   	ret

```

```c
// stFavorableRelationShip_t::clear @ 0x89fb56c

/* stFavorableRelationShip_t::clear() */

void __thiscall stFavorableRelationShip_t::clear(stFavorableRelationShip_t *this)

{
  int local_14;
  int local_10;
  
  *this = (stFavorableRelationShip_t)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined2 *)(this + 8) = 0;
  *(undefined2 *)(this + 10) = 0;
  *(undefined2 *)(this + 0xc) = 0;
  std::
  vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
  ::clear((vector<std::pair<ENUM_NPC_MOOD,unsigned_int>,std::allocator<std::pair<ENUM_NPC_MOOD,unsigned_int>>>
           *)(this + 0x10));
  std::
  vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>
  ::clear((vector<std::pair<unsigned_long,unsigned_int>,std::allocator<std::pair<unsigned_long,unsigned_int>>>
           *)(this + 0x1c));
  for (local_14 = 0; local_14 < 5; local_14 = local_14 + 1) {
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::clear((map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
             *)(this + local_14 * 0x18 + 0x28));
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::clear((map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
             *)(this + local_14 * 0x18 + 0x118));
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::clear((map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
             *)(this + local_14 * 0x18 + 0xa0));
    std::
    map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
    ::clear((map<unsigned_long,stFavorableRelationShip_t::stGiftItemInfo_t,std::less<unsigned_long>,std::allocator<std::pair<unsigned_long_const,stFavorableRelationShip_t::stGiftItemInfo_t>>>
             *)(this + local_14 * 0x18 + 400));
  }
  for (local_10 = 0; local_10 < 3; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x134) * 4 + 8) = 0x3f800000;
  }
  stRewardItem_t::clear((stRewardItem_t *)(this + 0x208));
  return;
}

```

