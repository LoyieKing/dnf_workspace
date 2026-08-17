# game_master__DungeonDifficulty

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b2152 game_master::DungeonDifficulty::execute  [0x084b2152-0x84b22c9] ===
 84b2152:	55                   	push   %ebp
 84b2153:	89 e5                	mov    %esp,%ebp
 84b2155:	56                   	push   %esi
 84b2156:	53                   	push   %ebx
 84b2157:	83 ec 40             	sub    $0x40,%esp
 84b215a:	8b 45 08             	mov    0x8(%ebp),%eax
 84b215d:	89 04 24             	mov    %eax,(%esp)
 84b2160:	e8 55 1e 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b2165:	89 45 ec             	mov    %eax,-0x14(%ebp)
 84b2168:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 84b216c:	0f 84 46 01 00 00    	je     84b22b8 <_ZN11game_master17DungeonDifficulty7executeEv+0x166>
 84b2172:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2175:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84b2179:	84 c0                	test   %al,%al
 84b217b:	0f 84 3a 01 00 00    	je     84b22bb <_ZN11game_master17DungeonDifficulty7executeEv+0x169>
 84b2181:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2184:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84b2188:	3c 03                	cmp    $0x3,%al
 84b218a:	0f 87 2e 01 00 00    	ja     84b22be <_ZN11game_master17DungeonDifficulty7executeEv+0x16c>
 84b2190:	e8 06 a0 c1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 84b2195:	89 04 24             	mov    %eax,(%esp)
 84b2198:	e8 97 32 eb ff       	call   8365434 <_ZN12CDataManager19getDungeonIndexListEv>
 84b219d:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84b21a0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84b21a3:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84b21a6:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b21aa:	89 04 24             	mov    %eax,(%esp)
 84b21ad:	e8 70 87 ed ff       	call   838a922 <_ZNK9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE5beginEv>
 84b21b2:	83 ec 04             	sub    $0x4,%esp
 84b21b5:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84b21b8:	8b 55 f0             	mov    -0x10(%ebp),%edx
 84b21bb:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b21bf:	89 04 24             	mov    %eax,(%esp)
 84b21c2:	e8 0d 87 ed ff       	call   838a8d4 <_ZNK9__gnu_cxx8hash_mapIiP8CDungeonNS_4hashIiEESt8equal_toIiESaIS2_EE3endEv>
 84b21c7:	83 ec 04             	sub    $0x4,%esp
 84b21ca:	e9 cd 00 00 00       	jmp    84b229c <_ZN11game_master17DungeonDifficulty7executeEv+0x14a>
 84b21cf:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84b21d2:	89 04 24             	mov    %eax,(%esp)
 84b21d5:	e8 34 87 ed ff       	call   838a90e <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEptEv>
 84b21da:	8b 40 04             	mov    0x4(%eax),%eax
 84b21dd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b21e0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84b21e4:	0f 84 91 00 00 00    	je     84b227b <_ZN11game_master17DungeonDifficulty7executeEv+0x129>
 84b21ea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b21ed:	89 04 24             	mov    %eax,(%esp)
 84b21f0:	e8 33 97 db ff       	call   826b928 <_ZNK8CDungeon22get_blood_dungeon_typeEv>
 84b21f5:	3c 01                	cmp    $0x1,%al
 84b21f7:	74 3d                	je     84b2236 <_ZN11game_master17DungeonDifficulty7executeEv+0xe4>
 84b21f9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b21fc:	89 04 24             	mov    %eax,(%esp)
 84b21ff:	e8 24 97 db ff       	call   826b928 <_ZNK8CDungeon22get_blood_dungeon_typeEv>
 84b2204:	3c 02                	cmp    $0x2,%al
 84b2206:	74 2e                	je     84b2236 <_ZN11game_master17DungeonDifficulty7executeEv+0xe4>
 84b2208:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b220b:	89 04 24             	mov    %eax,(%esp)
 84b220e:	e8 e7 92 d7 ff       	call   822b4fa <_ZNK8CDungeon23isTowerOfDespairDungeonEv>
 84b2213:	84 c0                	test   %al,%al
 84b2215:	75 1f                	jne    84b2236 <_ZN11game_master17DungeonDifficulty7executeEv+0xe4>
 84b2217:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b221a:	89 04 24             	mov    %eax,(%esp)
 84b221d:	e8 e8 2f eb ff       	call   836520a <_ZNK8CDungeon19isTournamentDungeonEv>
 84b2222:	84 c0                	test   %al,%al
 84b2224:	75 10                	jne    84b2236 <_ZN11game_master17DungeonDifficulty7executeEv+0xe4>
 84b2226:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b2229:	89 04 24             	mov    %eax,(%esp)
 84b222c:	e8 8f 92 d7 ff       	call   822b4c0 <_ZNK8CDungeon14getDungeonKindEv>
 84b2231:	83 f8 01             	cmp    $0x1,%eax
 84b2234:	75 07                	jne    84b223d <_ZN11game_master17DungeonDifficulty7executeEv+0xeb>
 84b2236:	b8 01 00 00 00       	mov    $0x1,%eax
 84b223b:	eb 05                	jmp    84b2242 <_ZN11game_master17DungeonDifficulty7executeEv+0xf0>
 84b223d:	b8 00 00 00 00       	mov    $0x0,%eax
 84b2242:	84 c0                	test   %al,%al
 84b2244:	75 38                	jne    84b227e <_ZN11game_master17DungeonDifficulty7executeEv+0x12c>
 84b2246:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2249:	0f b6 40 08          	movzbl 0x8(%eax),%eax
 84b224d:	0f be f0             	movsbl %al,%esi
 84b2250:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b2253:	89 04 24             	mov    %eax,(%esp)
 84b2256:	e8 95 ba c4 ff       	call   80fdcf0 <_ZNK8CDungeon9get_indexEv>
 84b225b:	0f bf d8             	movswl %ax,%ebx
 84b225e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 84b2261:	89 04 24             	mov    %eax,(%esp)
 84b2264:	e8 63 20 00 00       	call   84b42cc <_ZN15CUserCharacInfo19getDungeonClearRefWEv>
 84b2269:	89 74 24 08          	mov    %esi,0x8(%esp)
 84b226d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84b2271:	89 04 24             	mov    %eax,(%esp)
 84b2274:	e8 ab 2c ec ff       	call   8374f24 <_ZN8WongWork13CDungeonClear17addClearedDungeonEsc>
 84b2279:	eb 04                	jmp    84b227f <_ZN11game_master17DungeonDifficulty7executeEv+0x12d>
 84b227b:	90                   	nop
 84b227c:	eb 01                	jmp    84b227f <_ZN11game_master17DungeonDifficulty7executeEv+0x12d>
 84b227e:	90                   	nop
 84b227f:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b2282:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84b2289:	00 
 84b228a:	8d 55 dc             	lea    -0x24(%ebp),%edx
 84b228d:	89 54 24 04          	mov    %edx,0x4(%esp)
 84b2291:	89 04 24             	mov    %eax,(%esp)
 84b2294:	e8 c3 86 ed ff       	call   838a95c <_ZN9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEppEi>
 84b2299:	83 ec 04             	sub    $0x4,%esp
 84b229c:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 84b229f:	89 44 24 04          	mov    %eax,0x4(%esp)
 84b22a3:	8d 45 dc             	lea    -0x24(%ebp),%eax
 84b22a6:	89 04 24             	mov    %eax,(%esp)
 84b22a9:	e8 9a 86 ed ff       	call   838a948 <_ZNK9__gnu_cxx25_Hashtable_const_iteratorISt4pairIKiP8CDungeonEiNS_4hashIiEESt10_Select1stIS5_ESt8equal_toIiESaIS4_EEneERKSD_>
 84b22ae:	84 c0                	test   %al,%al
 84b22b0:	0f 85 19 ff ff ff    	jne    84b21cf <_ZN11game_master17DungeonDifficulty7executeEv+0x7d>
 84b22b6:	eb 07                	jmp    84b22bf <_ZN11game_master17DungeonDifficulty7executeEv+0x16d>
 84b22b8:	90                   	nop
 84b22b9:	eb 04                	jmp    84b22bf <_ZN11game_master17DungeonDifficulty7executeEv+0x16d>
 84b22bb:	90                   	nop
 84b22bc:	eb 01                	jmp    84b22bf <_ZN11game_master17DungeonDifficulty7executeEv+0x16d>
 84b22be:	90                   	nop
 84b22bf:	8d 65 f8             	lea    -0x8(%ebp),%esp
 84b22c2:	83 c4 00             	add    $0x0,%esp
 84b22c5:	5b                   	pop    %ebx
 84b22c6:	5e                   	pop    %esi
 84b22c7:	5d                   	pop    %ebp
 84b22c8:	c3                   	ret
 84b22c9:	90                   	nop

```

```c
// game_master::DungeonDifficulty::execute @ 0x84b2152

/* game_master::DungeonDifficulty::execute() */

void __thiscall game_master::DungeonDifficulty::execute(DungeonDifficulty *this)

{
  DungeonDifficulty DVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  CDataManager *this_00;
  int iVar5;
  CDungeonClear *this_01;
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_30 [8];
  hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_28 [8];
  _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
  local_20 [8];
  CUserCharacInfo *local_18;
  undefined4 local_14;
  CDungeon *local_10;
  
  local_18 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  if (((local_18 != (CUserCharacInfo *)0x0) && (this[8] != (DungeonDifficulty)0x0)) &&
     ((byte)this[8] < 4)) {
    this_00 = (CDataManager *)G_CDataManager();
    local_14 = CDataManager::getDungeonIndexList(this_00);
    __gnu_cxx::
    hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::begin
              (local_28);
    __gnu_cxx::
    hash_map<int,CDungeon*,__gnu_cxx::hash<int>,std::equal_to<int>,std::allocator<CDungeon*>>::end
              (local_30);
    while (cVar3 = __gnu_cxx::
                   _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                   ::operator!=((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                                 *)local_28,(_Hashtable_const_iterator *)local_30), cVar3 != '\0') {
      iVar5 = __gnu_cxx::
              _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
              ::operator->((_Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
                            *)local_28);
      local_10 = *(CDungeon **)(iVar5 + 4);
      if (local_10 != (CDungeon *)0x0) {
        cVar3 = CDungeon::get_blood_dungeon_type(local_10);
        if (((cVar3 == '\x01') ||
            (cVar3 = CDungeon::get_blood_dungeon_type(local_10), cVar3 == '\x02')) ||
           ((cVar3 = CDungeon::isTowerOfDespairDungeon(local_10), cVar3 != '\0' ||
            ((cVar3 = CDungeon::isTournamentDungeon(local_10), cVar3 != '\0' ||
             (iVar5 = CDungeon::getDungeonKind(local_10), iVar5 == 1)))))) {
          bVar2 = true;
        }
        else {
          bVar2 = false;
        }
        if (!bVar2) {
          DVar1 = this[8];
          sVar4 = CDungeon::get_index(local_10);
          this_01 = (CDungeonClear *)CUserCharacInfo::getDungeonClearRefW(local_18);
          WongWork::CDungeonClear::addClearedDungeon(this_01,sVar4,(char)DVar1);
        }
      }
      __gnu_cxx::
      _Hashtable_const_iterator<std::pair<int_const,CDungeon*>,int,__gnu_cxx::hash<int>,std::_Select1st<std::pair<int_const,CDungeon*>>,std::equal_to<int>,std::allocator<CDungeon*>>
      ::operator++(local_20,(int)local_28);
    }
  }
  return;
}

```

---

## parse

```asm
// === 084b2110 game_master::DungeonDifficulty::parse  [0x084b2110-0x84b2151] ===
 84b2110:	55                   	push   %ebp
 84b2111:	89 e5                	mov    %esp,%ebp
 84b2113:	83 ec 18             	sub    $0x18,%esp
 84b2116:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2119:	c6 40 08 00          	movb   $0x0,0x8(%eax)
 84b211d:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2120:	8b 40 04             	mov    0x4(%eax),%eax
 84b2123:	83 c0 0c             	add    $0xc,%eax
 84b2126:	89 04 24             	mov    %eax,(%esp)
 84b2129:	e8 3a cf de ff       	call   829f068 <_Z4trimRSs>
 84b212e:	8b 45 08             	mov    0x8(%ebp),%eax
 84b2131:	8b 40 04             	mov    0x4(%eax),%eax
 84b2134:	83 c0 0c             	add    $0xc,%eax
 84b2137:	89 04 24             	mov    %eax,(%esp)
 84b213a:	e8 b1 43 25 00       	call   87064f0 <_ZNKSs5c_strEv>
 84b213f:	89 04 24             	mov    %eax,(%esp)
 84b2142:	e8 a9 c5 bc ff       	call   807e6f0 <atoi@plt>
 84b2147:	89 c2                	mov    %eax,%edx
 84b2149:	8b 45 08             	mov    0x8(%ebp),%eax
 84b214c:	88 50 08             	mov    %dl,0x8(%eax)
 84b214f:	c9                   	leave
 84b2150:	c3                   	ret
 84b2151:	90                   	nop

```

```c
// game_master::DungeonDifficulty::parse @ 0x84b2110

/* game_master::DungeonDifficulty::parse() */

void __thiscall game_master::DungeonDifficulty::parse(DungeonDifficulty *this)

{
  char *__nptr;
  int iVar1;
  
  this[8] = (DungeonDifficulty)0x0;
  trim((string *)(*(int *)(this + 4) + 0xc));
  __nptr = (char *)std::string::c_str((string *)(*(int *)(this + 4) + 0xc));
  iVar1 = atoi(__nptr);
  this[8] = SUB41(iVar1,0);
  return;
}

```

