# UserQuest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 23

---

## CheckDungeonEventStoryPause

```asm
// === 086ad054 UserQuest::CheckDungeonEventStoryPause  [0x086ad054-0x86ad177] ===
 86ad054:	55                   	push   %ebp
 86ad055:	89 e5                	mov    %esp,%ebp
 86ad057:	53                   	push   %ebx
 86ad058:	83 ec 24             	sub    $0x24,%esp
 86ad05b:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86ad062:	e9 f6 00 00 00       	jmp    86ad15d <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0x109>
 86ad067:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86ad06a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad06d:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ad073:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ad077:	85 c0                	test   %eax,%eax
 86ad079:	0f 84 da 00 00 00    	je     86ad159 <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0x105>
 86ad07f:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86ad082:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad085:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ad08b:	8b 5c 90 08          	mov    0x8(%eax,%edx,4),%ebx
 86ad08f:	e8 07 f1 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ad094:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86ad098:	89 04 24             	mov    %eax,(%esp)
 86ad09b:	e8 26 2d cb ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 86ad0a0:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86ad0a3:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86ad0a7:	0f 84 ac 00 00 00    	je     86ad159 <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0x105>
 86ad0ad:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86ad0b4:	e9 82 00 00 00       	jmp    86ad13b <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0xe7>
 86ad0b9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86ad0bc:	8d 90 24 01 00 00    	lea    0x124(%eax),%edx
 86ad0c2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ad0c5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ad0c9:	89 14 24             	mov    %edx,(%esp)
 86ad0cc:	e8 13 07 00 00       	call   86ad7e4 <_ZNKSt6vectorI24dungeonEventHanaseStructSaIS0_EEixEj>
 86ad0d1:	8b 00                	mov    (%eax),%eax
 86ad0d3:	85 c0                	test   %eax,%eax
 86ad0d5:	74 07                	je     86ad0de <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0x8a>
 86ad0d7:	83 f8 01             	cmp    $0x1,%eax
 86ad0da:	74 2e                	je     86ad10a <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0xb6>
 86ad0dc:	eb 59                	jmp    86ad137 <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0xe3>
 86ad0de:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86ad0e1:	8d 90 24 01 00 00    	lea    0x124(%eax),%edx
 86ad0e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ad0ea:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ad0ee:	89 14 24             	mov    %edx,(%esp)
 86ad0f1:	e8 ee 06 00 00       	call   86ad7e4 <_ZNKSt6vectorI24dungeonEventHanaseStructSaIS0_EEixEj>
 86ad0f6:	8b 40 08             	mov    0x8(%eax),%eax
 86ad0f9:	3b 45 10             	cmp    0x10(%ebp),%eax
 86ad0fc:	0f 94 c0             	sete   %al
 86ad0ff:	84 c0                	test   %al,%al
 86ad101:	74 33                	je     86ad136 <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0xe2>
 86ad103:	b8 01 00 00 00       	mov    $0x1,%eax
 86ad108:	eb 67                	jmp    86ad171 <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0x11d>
 86ad10a:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86ad10d:	8d 90 24 01 00 00    	lea    0x124(%eax),%edx
 86ad113:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ad116:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ad11a:	89 14 24             	mov    %edx,(%esp)
 86ad11d:	e8 c2 06 00 00       	call   86ad7e4 <_ZNKSt6vectorI24dungeonEventHanaseStructSaIS0_EEixEj>
 86ad122:	8b 40 08             	mov    0x8(%eax),%eax
 86ad125:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86ad128:	0f 94 c0             	sete   %al
 86ad12b:	84 c0                	test   %al,%al
 86ad12d:	74 08                	je     86ad137 <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0xe3>
 86ad12f:	b8 01 00 00 00       	mov    $0x1,%eax
 86ad134:	eb 3b                	jmp    86ad171 <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0x11d>
 86ad136:	90                   	nop
 86ad137:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86ad13b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86ad13e:	05 24 01 00 00       	add    $0x124,%eax
 86ad143:	89 04 24             	mov    %eax,(%esp)
 86ad146:	e8 6b 01 d0 ff       	call   83ad2b6 <_ZNKSt6vectorI24dungeonEventHanaseStructSaIS0_EE4sizeEv>
 86ad14b:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 86ad14e:	0f 97 c0             	seta   %al
 86ad151:	84 c0                	test   %al,%al
 86ad153:	0f 85 60 ff ff ff    	jne    86ad0b9 <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0x65>
 86ad159:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 86ad15d:	83 7d ec 13          	cmpl   $0x13,-0x14(%ebp)
 86ad161:	0f 9e c0             	setle  %al
 86ad164:	84 c0                	test   %al,%al
 86ad166:	0f 85 fb fe ff ff    	jne    86ad067 <_ZNK9UserQuest27CheckDungeonEventStoryPauseEiii+0x13>
 86ad16c:	b8 00 00 00 00       	mov    $0x0,%eax
 86ad171:	83 c4 24             	add    $0x24,%esp
 86ad174:	5b                   	pop    %ebx
 86ad175:	5d                   	pop    %ebp
 86ad176:	c3                   	ret
 86ad177:	90                   	nop

```

```c
// UserQuest::CheckDungeonEventStoryPause @ 0x86ad054

/* UserQuest::CheckDungeonEventStoryPause(int, int, int) const */

undefined4 UserQuest::CheckDungeonEventStoryPause(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_18;
  uint local_10;
  
  local_18 = 0;
  do {
    if (0x13 < local_18) {
      return 0;
    }
    if (*(int *)(param_1 + 8 + (local_18 + 0x1d4c) * 4) != 0) {
      iVar1 = G_CDataManager();
      iVar1 = CDataManager::find_quest(iVar1);
      if (iVar1 != 0) {
        for (local_10 = 0;
            uVar4 = std::vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>::
                    size((vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>
                          *)(iVar1 + 0x124)), local_10 < uVar4; local_10 = local_10 + 1) {
          piVar2 = (int *)std::
                          vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>
                          ::operator[]((vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>
                                        *)(iVar1 + 0x124),local_10);
          if (*piVar2 == 0) {
            iVar3 = std::vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>::
                    operator[]((vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>
                                *)(iVar1 + 0x124),local_10);
            if (*(int *)(iVar3 + 8) == param_3) {
              return 1;
            }
          }
          else if ((*piVar2 == 1) &&
                  (iVar3 = std::
                           vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>
                           ::operator[]((vector<dungeonEventHanaseStruct,std::allocator<dungeonEventHanaseStruct>>
                                         *)(iVar1 + 0x124),local_10), *(int *)(iVar3 + 8) == param_2
                  )) {
            return 1;
          }
        }
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## IsDoingQuest

```asm
// === 086acffe UserQuest::IsDoingQuest  [0x086acffe-0x86ad053] ===
 86acffe:	55                   	push   %ebp
 86acfff:	89 e5                	mov    %esp,%ebp
 86ad001:	83 ec 10             	sub    $0x10,%esp
 86ad004:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
 86ad00b:	eb 34                	jmp    86ad041 <_ZNK9UserQuest12IsDoingQuestEi+0x43>
 86ad00d:	8b 55 fc             	mov    -0x4(%ebp),%edx
 86ad010:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad013:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ad019:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ad01d:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86ad020:	75 1b                	jne    86ad03d <_ZNK9UserQuest12IsDoingQuestEi+0x3f>
 86ad022:	8b 55 fc             	mov    -0x4(%ebp),%edx
 86ad025:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad028:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86ad02e:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ad032:	85 c0                	test   %eax,%eax
 86ad034:	74 07                	je     86ad03d <_ZNK9UserQuest12IsDoingQuestEi+0x3f>
 86ad036:	b8 01 00 00 00       	mov    $0x1,%eax
 86ad03b:	eb 14                	jmp    86ad051 <_ZNK9UserQuest12IsDoingQuestEi+0x53>
 86ad03d:	83 45 fc 01          	addl   $0x1,-0x4(%ebp)
 86ad041:	83 7d fc 13          	cmpl   $0x13,-0x4(%ebp)
 86ad045:	0f 9e c0             	setle  %al
 86ad048:	84 c0                	test   %al,%al
 86ad04a:	75 c1                	jne    86ad00d <_ZNK9UserQuest12IsDoingQuestEi+0xf>
 86ad04c:	b8 00 00 00 00       	mov    $0x0,%eax
 86ad051:	c9                   	leave
 86ad052:	c3                   	ret
 86ad053:	90                   	nop

```

```c
// UserQuest::IsDoingQuest @ 0x86acffe

/* UserQuest::IsDoingQuest(int) const */

undefined4 __thiscall UserQuest::IsDoingQuest(UserQuest *this,int param_1)

{
  int local_8;
  
  local_8 = 0;
  while( true ) {
    if (0x13 < local_8) {
      return 0;
    }
    if ((*(int *)(this + (local_8 + 0x1d4c) * 4 + 8) == param_1) &&
       (*(int *)(this + (local_8 + 0x1d60) * 4 + 8) != 0)) break;
    local_8 = local_8 + 1;
  }
  return 1;
}

```

---

## ResetUrgentQuestWaitingList

```asm
// === 086ad178 UserQuest::ResetUrgentQuestWaitingList  [0x086ad178-0x86ad265] ===
 86ad178:	55                   	push   %ebp
 86ad179:	89 e5                	mov    %esp,%ebp
 86ad17b:	53                   	push   %ebx
 86ad17c:	83 ec 24             	sub    $0x24,%esp
 86ad17f:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86ad186:	eb 3d                	jmp    86ad1c5 <_ZN9UserQuest27ResetUrgentQuestWaitingListEv+0x4d>
 86ad188:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86ad18b:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad18e:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ad194:	8b 5c 90 08          	mov    0x8(%eax,%edx,4),%ebx
 86ad198:	e8 fe ef a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ad19d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86ad1a1:	89 04 24             	mov    %eax,(%esp)
 86ad1a4:	e8 1d 2c cb ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 86ad1a9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86ad1ac:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86ad1b0:	74 0f                	je     86ad1c1 <_ZN9UserQuest27ResetUrgentQuestWaitingListEv+0x49>
 86ad1b2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86ad1b5:	8b 40 08             	mov    0x8(%eax),%eax
 86ad1b8:	83 f8 08             	cmp    $0x8,%eax
 86ad1bb:	0f 84 9e 00 00 00    	je     86ad25f <_ZN9UserQuest27ResetUrgentQuestWaitingListEv+0xe7>
 86ad1c1:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 86ad1c5:	83 7d ec 13          	cmpl   $0x13,-0x14(%ebp)
 86ad1c9:	0f 9e c0             	setle  %al
 86ad1cc:	84 c0                	test   %al,%al
 86ad1ce:	75 b8                	jne    86ad188 <_ZN9UserQuest27ResetUrgentQuestWaitingListEv+0x10>
 86ad1d0:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad1d3:	89 04 24             	mov    %eax,(%esp)
 86ad1d6:	e8 8b 00 00 00       	call   86ad266 <_ZN9UserQuest12hasEpicQuestEv>
 86ad1db:	84 c0                	test   %al,%al
 86ad1dd:	74 0f                	je     86ad1ee <_ZN9UserQuest27ResetUrgentQuestWaitingListEv+0x76>
 86ad1df:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad1e2:	c7 80 f0 75 00 00 ff 	movl   $0xffffffff,0x75f0(%eax)
 86ad1e9:	ff ff ff 
 86ad1ec:	eb 72                	jmp    86ad260 <_ZN9UserQuest27ResetUrgentQuestWaitingListEv+0xe8>
 86ad1ee:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad1f1:	8b 98 f0 75 00 00    	mov    0x75f0(%eax),%ebx
 86ad1f7:	e8 9f ef a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ad1fc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86ad200:	89 04 24             	mov    %eax,(%esp)
 86ad203:	e8 be 2b cb ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 86ad208:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86ad20b:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
 86ad20f:	74 3f                	je     86ad250 <_ZN9UserQuest27ResetUrgentQuestWaitingListEv+0xd8>
 86ad211:	8b 45 e8             	mov    -0x18(%ebp),%eax
 86ad214:	8b 40 24             	mov    0x24(%eax),%eax
 86ad217:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86ad21a:	83 7d f4 46          	cmpl   $0x46,-0xc(%ebp)
 86ad21e:	7e 07                	jle    86ad227 <_ZN9UserQuest27ResetUrgentQuestWaitingListEv+0xaf>
 86ad220:	c7 45 f4 46 00 00 00 	movl   $0x46,-0xc(%ebp)
 86ad227:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad22a:	8b 00                	mov    (%eax),%eax
 86ad22c:	89 04 24             	mov    %eax,(%esp)
 86ad22f:	e8 84 d0 a2 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 86ad234:	83 c0 01             	add    $0x1,%eax
 86ad237:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 86ad23a:	0f 9f c0             	setg   %al
 86ad23d:	84 c0                	test   %al,%al
 86ad23f:	74 1f                	je     86ad260 <_ZN9UserQuest27ResetUrgentQuestWaitingListEv+0xe8>
 86ad241:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad244:	c7 80 f0 75 00 00 ff 	movl   $0xffffffff,0x75f0(%eax)
 86ad24b:	ff ff ff 
 86ad24e:	eb 10                	jmp    86ad260 <_ZN9UserQuest27ResetUrgentQuestWaitingListEv+0xe8>
 86ad250:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad253:	c7 80 f0 75 00 00 ff 	movl   $0xffffffff,0x75f0(%eax)
 86ad25a:	ff ff ff 
 86ad25d:	eb 01                	jmp    86ad260 <_ZN9UserQuest27ResetUrgentQuestWaitingListEv+0xe8>
 86ad25f:	90                   	nop
 86ad260:	83 c4 24             	add    $0x24,%esp
 86ad263:	5b                   	pop    %ebx
 86ad264:	5d                   	pop    %ebp
 86ad265:	c3                   	ret

```

```c
// UserQuest::ResetUrgentQuestWaitingList @ 0x86ad178

/* UserQuest::ResetUrgentQuestWaitingList() */

void __thiscall UserQuest::ResetUrgentQuestWaitingList(UserQuest *this)

{
  char cVar1;
  int iVar2;
  int local_18;
  int local_10;
  
  local_18 = 0;
  while( true ) {
    if (0x13 < local_18) {
      cVar1 = hasEpicQuest(this);
      if (cVar1 == '\0') {
        iVar2 = G_CDataManager();
        iVar2 = CDataManager::find_quest(iVar2);
        if (iVar2 == 0) {
          *(undefined4 *)(this + 0x75f0) = 0xffffffff;
        }
        else {
          local_10 = *(int *)(iVar2 + 0x24);
          if (0x46 < local_10) {
            local_10 = 0x46;
          }
          iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
          if (local_10 < iVar2 + 1) {
            *(undefined4 *)(this + 0x75f0) = 0xffffffff;
          }
        }
      }
      else {
        *(undefined4 *)(this + 0x75f0) = 0xffffffff;
      }
      return;
    }
    iVar2 = G_CDataManager();
    iVar2 = CDataManager::find_quest(iVar2);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 8) == 8)) break;
    local_18 = local_18 + 1;
  }
  return;
}

```

---

## accept_quest

```asm
// === 086abf38 UserQuest::accept_quest  [0x086abf38-0x86ac531] ===
 86abf38:	55                   	push   %ebp
 86abf39:	89 e5                	mov    %esp,%ebp
 86abf3b:	57                   	push   %edi
 86abf3c:	56                   	push   %esi
 86abf3d:	53                   	push   %ebx
 86abf3e:	81 ec cc 00 00 00    	sub    $0xcc,%esp
 86abf44:	8b 45 08             	mov    0x8(%ebp),%eax
 86abf47:	8b 00                	mov    (%eax),%eax
 86abf49:	85 c0                	test   %eax,%eax
 86abf4b:	75 36                	jne    86abf83 <_ZN9UserQuest12accept_questEiPcRi+0x4b>
 86abf4d:	c7 44 24 10 14 3a cf 	movl   $0x8cf3a14,0x10(%esp)
 86abf54:	08 
 86abf55:	c7 44 24 0c e8 01 00 	movl   $0x1e8,0xc(%esp)
 86abf5c:	00 
 86abf5d:	c7 44 24 08 a0 47 cf 	movl   $0x8cf47a0,0x8(%esp)
 86abf64:	08 
 86abf65:	c7 44 24 04 21 3a cf 	movl   $0x8cf3a21,0x4(%esp)
 86abf6c:	08 
 86abf6d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86abf74:	e8 91 7c 42 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86abf79:	bb 01 00 00 00       	mov    $0x1,%ebx
 86abf7e:	e9 a2 05 00 00       	jmp    86ac525 <_ZN9UserQuest12accept_questEiPcRi+0x5ed>
 86abf83:	8b 45 08             	mov    0x8(%ebp),%eax
 86abf86:	8b 00                	mov    (%eax),%eax
 86abf88:	89 04 24             	mov    %eax,(%esp)
 86abf8b:	e8 a2 44 a7 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 86abf90:	85 c0                	test   %eax,%eax
 86abf92:	0f 94 c0             	sete   %al
 86abf95:	84 c0                	test   %al,%al
 86abf97:	74 40                	je     86abfd9 <_ZN9UserQuest12accept_questEiPcRi+0xa1>
 86abf99:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 86abfa0:	00 
 86abfa1:	c7 44 24 08 ef 01 00 	movl   $0x1ef,0x8(%esp)
 86abfa8:	00 
 86abfa9:	c7 44 24 04 a0 47 cf 	movl   $0x8cf47a0,0x4(%esp)
 86abfb0:	08 
 86abfb1:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 86abfb4:	89 04 24             	mov    %eax,(%esp)
 86abfb7:	e8 5c 37 ea ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86abfbc:	c7 44 24 04 30 3a cf 	movl   $0x8cf3a30,0x4(%esp)
 86abfc3:	08 
 86abfc4:	8d 45 a4             	lea    -0x5c(%ebp),%eax
 86abfc7:	89 04 24             	mov    %eax,(%esp)
 86abfca:	e8 b9 37 ea ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86abfcf:	bb 01 00 00 00       	mov    $0x1,%ebx
 86abfd4:	e9 4c 05 00 00       	jmp    86ac525 <_ZN9UserQuest12accept_questEiPcRi+0x5ed>
 86abfd9:	e8 bd 01 a2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86abfde:	8b 55 0c             	mov    0xc(%ebp),%edx
 86abfe1:	89 54 24 04          	mov    %edx,0x4(%esp)
 86abfe5:	89 04 24             	mov    %eax,(%esp)
 86abfe8:	e8 d9 3d cb ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 86abfed:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 86abff0:	83 7d c4 00          	cmpl   $0x0,-0x3c(%ebp)
 86abff4:	75 3d                	jne    86ac033 <_ZN9UserQuest12accept_questEiPcRi+0xfb>
 86abff6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86abff9:	89 44 24 14          	mov    %eax,0x14(%esp)
 86abffd:	c7 44 24 10 64 3a cf 	movl   $0x8cf3a64,0x10(%esp)
 86ac004:	08 
 86ac005:	c7 44 24 0c f8 01 00 	movl   $0x1f8,0xc(%esp)
 86ac00c:	00 
 86ac00d:	c7 44 24 08 a0 47 cf 	movl   $0x8cf47a0,0x8(%esp)
 86ac014:	08 
 86ac015:	c7 44 24 04 21 3a cf 	movl   $0x8cf3a21,0x4(%esp)
 86ac01c:	08 
 86ac01d:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86ac024:	e8 e1 7b 42 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86ac029:	bb 01 00 00 00       	mov    $0x1,%ebx
 86ac02e:	e9 f2 04 00 00       	jmp    86ac525 <_ZN9UserQuest12accept_questEiPcRi+0x5ed>
 86ac033:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 86ac03a:	eb 23                	jmp    86ac05f <_ZN9UserQuest12accept_questEiPcRi+0x127>
 86ac03c:	8b 55 cc             	mov    -0x34(%ebp),%edx
 86ac03f:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac042:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ac048:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ac04c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86ac04f:	75 0a                	jne    86ac05b <_ZN9UserQuest12accept_questEiPcRi+0x123>
 86ac051:	bb 12 00 00 00       	mov    $0x12,%ebx
 86ac056:	e9 ca 04 00 00       	jmp    86ac525 <_ZN9UserQuest12accept_questEiPcRi+0x5ed>
 86ac05b:	83 45 cc 01          	addl   $0x1,-0x34(%ebp)
 86ac05f:	83 7d cc 13          	cmpl   $0x13,-0x34(%ebp)
 86ac063:	0f 9e c0             	setle  %al
 86ac066:	84 c0                	test   %al,%al
 86ac068:	75 d2                	jne    86ac03c <_ZN9UserQuest12accept_questEiPcRi+0x104>
 86ac06a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac06d:	8b 00                	mov    (%eax),%eax
 86ac06f:	89 04 24             	mov    %eax,(%esp)
 86ac072:	e8 77 2d a7 ff       	call   811edee <_ZNK5CUser16IsGameMasterModeEv>
 86ac077:	83 f0 01             	xor    $0x1,%eax
 86ac07a:	84 c0                	test   %al,%al
 86ac07c:	74 35                	je     86ac0b3 <_ZN9UserQuest12accept_questEiPcRi+0x17b>
 86ac07e:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86ac081:	89 04 24             	mov    %eax,(%esp)
 86ac084:	e8 65 6b ca ff       	call   8352bee <_ZNK5Quest17isRepeatableQuestEv>
 86ac089:	83 f0 01             	xor    $0x1,%eax
 86ac08c:	84 c0                	test   %al,%al
 86ac08e:	74 23                	je     86ac0b3 <_ZN9UserQuest12accept_questEiPcRi+0x17b>
 86ac090:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ac093:	8b 55 08             	mov    0x8(%ebp),%edx
 86ac096:	83 c2 04             	add    $0x4,%edx
 86ac099:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ac09d:	89 14 24             	mov    %edx,(%esp)
 86ac0a0:	e8 3b fa 9d ff       	call   808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>
 86ac0a5:	84 c0                	test   %al,%al
 86ac0a7:	74 0a                	je     86ac0b3 <_ZN9UserQuest12accept_questEiPcRi+0x17b>
 86ac0a9:	bb 12 00 00 00       	mov    $0x12,%ebx
 86ac0ae:	e9 72 04 00 00       	jmp    86ac525 <_ZN9UserQuest12accept_questEiPcRi+0x5ed>
 86ac0b3:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac0b6:	8b 00                	mov    (%eax),%eax
 86ac0b8:	89 04 24             	mov    %eax,(%esp)
 86ac0bb:	e8 2e 2d a7 ff       	call   811edee <_ZNK5CUser16IsGameMasterModeEv>
 86ac0c0:	83 f0 01             	xor    $0x1,%eax
 86ac0c3:	84 c0                	test   %al,%al
 86ac0c5:	0f 84 8f 00 00 00    	je     86ac15a <_ZN9UserQuest12accept_questEiPcRi+0x222>
 86ac0cb:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac0ce:	8b 00                	mov    (%eax),%eax
 86ac0d0:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ac0d4:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 86ac0da:	89 04 24             	mov    %eax,(%esp)
 86ac0dd:	e8 d2 bf c9 ff       	call   83480b4 <_ZN18stSelectQuestParamC1EP5CUser>
 86ac0e2:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac0e5:	8b 00                	mov    (%eax),%eax
 86ac0e7:	89 04 24             	mov    %eax,(%esp)
 86ac0ea:	e8 b7 e7 ae ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 86ac0ef:	8d 50 04             	lea    0x4(%eax),%edx
 86ac0f2:	8d 85 50 ff ff ff    	lea    -0xb0(%ebp),%eax
 86ac0f8:	89 44 24 08          	mov    %eax,0x8(%esp)
 86ac0fc:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac100:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86ac103:	89 04 24             	mov    %eax,(%esp)
 86ac106:	e8 26 fd ff ff       	call   86abe31 <_Z20checkAcceptableQuestPK5QuestRKN8WongWork11CQuestClearERK18stSelectQuestParam>
 86ac10b:	83 f0 01             	xor    $0x1,%eax
 86ac10e:	84 c0                	test   %al,%al
 86ac110:	74 48                	je     86ac15a <_ZN9UserQuest12accept_questEiPcRi+0x222>
 86ac112:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac115:	8b 18                	mov    (%eax),%ebx
 86ac117:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac11a:	8b 00                	mov    (%eax),%eax
 86ac11c:	89 04 24             	mov    %eax,(%esp)
 86ac11f:	e8 36 d8 a4 ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 86ac124:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86ac12b:	00 
 86ac12c:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 86ac133:	00 
 86ac134:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86ac13b:	00 
 86ac13c:	c7 44 24 08 91 01 00 	movl   $0x191,0x8(%esp)
 86ac143:	00 
 86ac144:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86ac148:	89 04 24             	mov    %eax,(%esp)
 86ac14b:	e8 2e cb a4 ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 86ac150:	bb 01 00 00 00       	mov    $0x1,%ebx
 86ac155:	e9 cb 03 00 00       	jmp    86ac525 <_ZN9UserQuest12accept_questEiPcRi+0x5ed>
 86ac15a:	8d 45 98             	lea    -0x68(%ebp),%eax
 86ac15d:	89 04 24             	mov    %eax,(%esp)
 86ac160:	e8 71 88 a8 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 86ac165:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86ac168:	89 04 24             	mov    %eax,(%esp)
 86ac16b:	e8 66 88 a8 ff       	call   81349d6 <_ZNSt6vectorISt4pairIiiESaIS1_EEC1Ev>
 86ac170:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86ac173:	83 c0 70             	add    $0x70,%eax
 86ac176:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ac17a:	8d 45 98             	lea    -0x68(%ebp),%eax
 86ac17d:	89 04 24             	mov    %eax,(%esp)
 86ac180:	e8 07 2f c6 ff       	call   830f08c <_ZNSt6vectorISt4pairIiiESaIS1_EEaSERKS3_>
 86ac185:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac188:	8b 00                	mov    (%eax),%eax
 86ac18a:	89 04 24             	mov    %eax,(%esp)
 86ac18d:	e8 fc e0 a2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86ac192:	8d 55 8c             	lea    -0x74(%ebp),%edx
 86ac195:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ac199:	8d 55 98             	lea    -0x68(%ebp),%edx
 86ac19c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac1a0:	89 04 24             	mov    %eax,(%esp)
 86ac1a3:	e8 22 95 e5 ff       	call   85056ca <_ZN10CInventory19erase_repeated_itemERKSt6vectorISt4pairIiiESaIS2_EERS4_>
 86ac1a8:	89 45 c8             	mov    %eax,-0x38(%ebp)
 86ac1ab:	83 7d c8 00          	cmpl   $0x0,-0x38(%ebp)
 86ac1af:	0f 8e c0 00 00 00    	jle    86ac275 <_ZN9UserQuest12accept_questEiPcRi+0x33d>
 86ac1b5:	8d 9d 50 ff ff ff    	lea    -0xb0(%ebp),%ebx
 86ac1bb:	b8 00 00 00 00       	mov    $0x0,%eax
 86ac1c0:	ba 0b 00 00 00       	mov    $0xb,%edx
 86ac1c5:	89 df                	mov    %ebx,%edi
 86ac1c7:	89 d1                	mov    %edx,%ecx
 86ac1c9:	f3 ab                	rep stos %eax,%es:(%edi)
 86ac1cb:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac1ce:	8b 00                	mov    (%eax),%eax
 86ac1d0:	89 04 24             	mov    %eax,(%esp)
 86ac1d3:	e8 a6 e0 a2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86ac1d8:	8d 55 8c             	lea    -0x74(%ebp),%edx
 86ac1db:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ac1df:	8d 95 50 ff ff ff    	lea    -0xb0(%ebp),%edx
 86ac1e5:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac1e9:	89 04 24             	mov    %eax,(%esp)
 86ac1ec:	e8 29 c7 e5 ff       	call   850891a <_ZNK10CInventory11CalNeedSlotEPiRKSt6vectorISt4pairIiiESaIS3_EE>
 86ac1f1:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac1f4:	8b 00                	mov    (%eax),%eax
 86ac1f6:	89 04 24             	mov    %eax,(%esp)
 86ac1f9:	e8 80 e0 a2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86ac1fe:	89 04 24             	mov    %eax,(%esp)
 86ac201:	e8 32 8e e5 ff       	call   8505038 <_ZNK10CInventory15QuickEmptyCountEv>
 86ac206:	89 45 d0             	mov    %eax,-0x30(%ebp)
 86ac209:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
 86ac210:	eb 58                	jmp    86ac26a <_ZN9UserQuest12accept_questEiPcRi+0x332>
 86ac212:	8b 5d d4             	mov    -0x2c(%ebp),%ebx
 86ac215:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac218:	8b 00                	mov    (%eax),%eax
 86ac21a:	89 04 24             	mov    %eax,(%esp)
 86ac21d:	e8 5c e0 a2 ff       	call   80da27e <_ZNK15CUserCharacInfo18getCurCharacInvenREv>
 86ac222:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86ac226:	89 04 24             	mov    %eax,(%esp)
 86ac229:	e8 52 8e e5 ff       	call   8505080 <_ZNK10CInventory15InvenEmptycountEN10Inven_Item9ITEM_TYPEE>
 86ac22e:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86ac231:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86ac234:	8b 84 85 50 ff ff ff 	mov    -0xb0(%ebp,%eax,4),%eax
 86ac23b:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 86ac23e:	7e 26                	jle    86ac266 <_ZN9UserQuest12accept_questEiPcRi+0x32e>
 86ac240:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86ac243:	8b 84 85 50 ff ff ff 	mov    -0xb0(%ebp,%eax,4),%eax
 86ac24a:	8b 55 d8             	mov    -0x28(%ebp),%edx
 86ac24d:	89 d1                	mov    %edx,%ecx
 86ac24f:	29 c1                	sub    %eax,%ecx
 86ac251:	89 c8                	mov    %ecx,%eax
 86ac253:	01 45 d0             	add    %eax,-0x30(%ebp)
 86ac256:	83 7d d0 00          	cmpl   $0x0,-0x30(%ebp)
 86ac25a:	79 0a                	jns    86ac266 <_ZN9UserQuest12accept_questEiPcRi+0x32e>
 86ac25c:	bb 11 00 00 00       	mov    $0x11,%ebx
 86ac261:	e9 8c 02 00 00       	jmp    86ac4f2 <_ZN9UserQuest12accept_questEiPcRi+0x5ba>
 86ac266:	83 45 d4 01          	addl   $0x1,-0x2c(%ebp)
 86ac26a:	83 7d d4 0a          	cmpl   $0xa,-0x2c(%ebp)
 86ac26e:	0f 9e c0             	setle  %al
 86ac271:	84 c0                	test   %al,%al
 86ac273:	75 9d                	jne    86ac212 <_ZN9UserQuest12accept_questEiPcRi+0x2da>
 86ac275:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 86ac278:	89 04 24             	mov    %eax,(%esp)
 86ac27b:	e8 56 6e ca ff       	call   83530d6 <_ZNK5Quest16get_init_triggerEv>
 86ac280:	8b 55 14             	mov    0x14(%ebp),%edx
 86ac283:	89 02                	mov    %eax,(%edx)
 86ac285:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 86ac28c:	e9 36 02 00 00       	jmp    86ac4c7 <_ZN9UserQuest12accept_questEiPcRi+0x58f>
 86ac291:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86ac294:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac297:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ac29d:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ac2a1:	85 c0                	test   %eax,%eax
 86ac2a3:	0f 85 1a 02 00 00    	jne    86ac4c3 <_ZN9UserQuest12accept_questEiPcRi+0x58b>
 86ac2a9:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ac2ac:	8b 55 08             	mov    0x8(%ebp),%edx
 86ac2af:	83 c2 04             	add    $0x4,%edx
 86ac2b2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ac2b6:	89 14 24             	mov    %edx,(%esp)
 86ac2b9:	e8 ee f7 9d ff       	call   808baac <_ZN8WongWork11CQuestClear18resetClearedQuestsEj>
 86ac2be:	8b 55 dc             	mov    -0x24(%ebp),%edx
 86ac2c1:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac2c4:	8d 8a 4c 1d 00 00    	lea    0x1d4c(%edx),%ecx
 86ac2ca:	8b 55 0c             	mov    0xc(%ebp),%edx
 86ac2cd:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 86ac2d1:	8b 4d dc             	mov    -0x24(%ebp),%ecx
 86ac2d4:	8b 45 14             	mov    0x14(%ebp),%eax
 86ac2d7:	8b 10                	mov    (%eax),%edx
 86ac2d9:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac2dc:	81 c1 60 1d 00 00    	add    $0x1d60,%ecx
 86ac2e2:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 86ac2e6:	8b 45 10             	mov    0x10(%ebp),%eax
 86ac2e9:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86ac2ec:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86ac2ef:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86ac2f6:	00 
 86ac2f7:	89 04 24             	mov    %eax,(%esp)
 86ac2fa:	e8 21 f6 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86ac2ff:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86ac302:	8b 55 0c             	mov    0xc(%ebp),%edx
 86ac305:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac309:	89 04 24             	mov    %eax,(%esp)
 86ac30c:	e8 93 db a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86ac311:	8b 45 14             	mov    0x14(%ebp),%eax
 86ac314:	8b 10                	mov    (%eax),%edx
 86ac316:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86ac319:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac31d:	89 04 24             	mov    %eax,(%esp)
 86ac320:	e8 17 f6 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86ac325:	8d 45 80             	lea    -0x80(%ebp),%eax
 86ac328:	89 04 24             	mov    %eax,(%esp)
 86ac32b:	e8 7c 1e 9e ff       	call   808e1ac <_ZNSt6vectorIiSaIiEEC1Ev>
 86ac330:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac333:	8b 00                	mov    (%eax),%eax
 86ac335:	89 04 24             	mov    %eax,(%esp)
 86ac338:	e8 51 df a2 ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 86ac33d:	c7 44 24 1c 85 3a cf 	movl   $0x8cf3a85,0x1c(%esp)
 86ac344:	08 
 86ac345:	c7 44 24 18 85 3a cf 	movl   $0x8cf3a85,0x18(%esp)
 86ac34c:	08 
 86ac34d:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86ac354:	00 
 86ac355:	c7 44 24 10 08 00 00 	movl   $0x8,0x10(%esp)
 86ac35c:	00 
 86ac35d:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 86ac364:	00 
 86ac365:	8d 55 80             	lea    -0x80(%ebp),%edx
 86ac368:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ac36c:	8d 55 8c             	lea    -0x74(%ebp),%edx
 86ac36f:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac373:	89 04 24             	mov    %eax,(%esp)
 86ac376:	e8 37 a8 e5 ff       	call   8506bb2 <_ZN10CInventory18insert_event_itemsERKSt6vectorISt4pairIiiESaIS2_EERS0_IiSaIiEE15eMoneyAddReason14eItemAddReasonbPKcSD_>
 86ac37b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86ac37e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86ac381:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 86ac384:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac388:	89 04 24             	mov    %eax,(%esp)
 86ac38b:	e8 90 f5 a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86ac390:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 86ac396:	8d 55 80             	lea    -0x80(%ebp),%edx
 86ac399:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac39d:	89 04 24             	mov    %eax,(%esp)
 86ac3a0:	e8 a3 1e 9e ff       	call   808e248 <_ZNSt6vectorIiSaIiEE5beginEv>
 86ac3a5:	83 ec 04             	sub    $0x4,%esp
 86ac3a8:	e9 bd 00 00 00       	jmp    86ac46a <_ZN9UserQuest12accept_questEiPcRi+0x532>
 86ac3ad:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 86ac3b3:	89 04 24             	mov    %eax,(%esp)
 86ac3b6:	e8 11 24 9e ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 86ac3bb:	8b 10                	mov    (%eax),%edx
 86ac3bd:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86ac3c0:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac3c4:	89 04 24             	mov    %eax,(%esp)
 86ac3c7:	e8 d8 da a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86ac3cc:	8d 45 b8             	lea    -0x48(%ebp),%eax
 86ac3cf:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86ac3d6:	00 
 86ac3d7:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 86ac3dd:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac3e1:	89 04 24             	mov    %eax,(%esp)
 86ac3e4:	e8 1d 55 c9 ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 86ac3e9:	83 ec 04             	sub    $0x4,%esp
 86ac3ec:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 86ac3f2:	89 04 24             	mov    %eax,(%esp)
 86ac3f5:	e8 d2 23 9e ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 86ac3fa:	8b 10                	mov    (%eax),%edx
 86ac3fc:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86ac3ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac403:	89 04 24             	mov    %eax,(%esp)
 86ac406:	e8 31 f5 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86ac40b:	8d 45 bc             	lea    -0x44(%ebp),%eax
 86ac40e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86ac415:	00 
 86ac416:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 86ac41c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac420:	89 04 24             	mov    %eax,(%esp)
 86ac423:	e8 de 54 c9 ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 86ac428:	83 ec 04             	sub    $0x4,%esp
 86ac42b:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 86ac431:	89 04 24             	mov    %eax,(%esp)
 86ac434:	e8 93 23 9e ff       	call   808e7cc <_ZNK9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEdeEv>
 86ac439:	8b 10                	mov    (%eax),%edx
 86ac43b:	8b 45 e0             	mov    -0x20(%ebp),%eax
 86ac43e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac442:	89 04 24             	mov    %eax,(%esp)
 86ac445:	e8 f2 f4 a1 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 86ac44a:	8d 45 c0             	lea    -0x40(%ebp),%eax
 86ac44d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86ac454:	00 
 86ac455:	8d 95 7c ff ff ff    	lea    -0x84(%ebp),%edx
 86ac45b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac45f:	89 04 24             	mov    %eax,(%esp)
 86ac462:	e8 9f 54 c9 ff       	call   8341906 <_ZN9__gnu_cxx17__normal_iteratorIPiSt6vectorIiSaIiEEEppEi>
 86ac467:	83 ec 04             	sub    $0x4,%esp
 86ac46a:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86ac46d:	8d 55 80             	lea    -0x80(%ebp),%edx
 86ac470:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac474:	89 04 24             	mov    %eax,(%esp)
 86ac477:	e8 f0 1d 9e ff       	call   808e26c <_ZNSt6vectorIiSaIiEE3endEv>
 86ac47c:	83 ec 04             	sub    $0x4,%esp
 86ac47f:	8d 45 b4             	lea    -0x4c(%ebp),%eax
 86ac482:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ac486:	8d 85 7c ff ff ff    	lea    -0x84(%ebp),%eax
 86ac48c:	89 04 24             	mov    %eax,(%esp)
 86ac48f:	e8 ce df a3 ff       	call   80ea462 <_ZN9__gnu_cxxneIPiSt6vectorIiSaIiEEEEbRKNS_17__normal_iteratorIT_T0_EESA_>
 86ac494:	84 c0                	test   %al,%al
 86ac496:	0f 85 11 ff ff ff    	jne    86ac3ad <_ZN9UserQuest12accept_questEiPcRi+0x475>
 86ac49c:	bb 00 00 00 00       	mov    $0x0,%ebx
 86ac4a1:	8d 45 80             	lea    -0x80(%ebp),%eax
 86ac4a4:	89 04 24             	mov    %eax,(%esp)
 86ac4a7:	e8 2e 79 9d ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 86ac4ac:	eb 44                	jmp    86ac4f2 <_ZN9UserQuest12accept_questEiPcRi+0x5ba>
 86ac4ae:	89 d3                	mov    %edx,%ebx
 86ac4b0:	89 c6                	mov    %eax,%esi
 86ac4b2:	8d 45 80             	lea    -0x80(%ebp),%eax
 86ac4b5:	89 04 24             	mov    %eax,(%esp)
 86ac4b8:	e8 1d 79 9d ff       	call   8083dda <_ZNSt6vectorIiSaIiEED1Ev>
 86ac4bd:	89 f0                	mov    %esi,%eax
 86ac4bf:	89 da                	mov    %ebx,%edx
 86ac4c1:	eb 1a                	jmp    86ac4dd <_ZN9UserQuest12accept_questEiPcRi+0x5a5>
 86ac4c3:	83 45 dc 01          	addl   $0x1,-0x24(%ebp)
 86ac4c7:	83 7d dc 13          	cmpl   $0x13,-0x24(%ebp)
 86ac4cb:	0f 9e c0             	setle  %al
 86ac4ce:	84 c0                	test   %al,%al
 86ac4d0:	0f 85 bb fd ff ff    	jne    86ac291 <_ZN9UserQuest12accept_questEiPcRi+0x359>
 86ac4d6:	bb 04 00 00 00       	mov    $0x4,%ebx
 86ac4db:	eb 15                	jmp    86ac4f2 <_ZN9UserQuest12accept_questEiPcRi+0x5ba>
 86ac4dd:	89 d3                	mov    %edx,%ebx
 86ac4df:	89 c6                	mov    %eax,%esi
 86ac4e1:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86ac4e4:	89 04 24             	mov    %eax,(%esp)
 86ac4e7:	e8 fe 84 a8 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 86ac4ec:	89 f0                	mov    %esi,%eax
 86ac4ee:	89 da                	mov    %ebx,%edx
 86ac4f0:	eb 0d                	jmp    86ac4ff <_ZN9UserQuest12accept_questEiPcRi+0x5c7>
 86ac4f2:	8d 45 8c             	lea    -0x74(%ebp),%eax
 86ac4f5:	89 04 24             	mov    %eax,(%esp)
 86ac4f8:	e8 ed 84 a8 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 86ac4fd:	eb 1b                	jmp    86ac51a <_ZN9UserQuest12accept_questEiPcRi+0x5e2>
 86ac4ff:	89 d3                	mov    %edx,%ebx
 86ac501:	89 c6                	mov    %eax,%esi
 86ac503:	8d 45 98             	lea    -0x68(%ebp),%eax
 86ac506:	89 04 24             	mov    %eax,(%esp)
 86ac509:	e8 dc 84 a8 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 86ac50e:	89 f0                	mov    %esi,%eax
 86ac510:	89 da                	mov    %ebx,%edx
 86ac512:	89 04 24             	mov    %eax,(%esp)
 86ac515:	e8 36 72 43 00       	call   8ae3750 <_Unwind_Resume>
 86ac51a:	8d 45 98             	lea    -0x68(%ebp),%eax
 86ac51d:	89 04 24             	mov    %eax,(%esp)
 86ac520:	e8 c5 84 a8 ff       	call   81349ea <_ZNSt6vectorISt4pairIiiESaIS1_EED1Ev>
 86ac525:	89 d8                	mov    %ebx,%eax
 86ac527:	8d 65 f4             	lea    -0xc(%ebp),%esp
 86ac52a:	83 c4 00             	add    $0x0,%esp
 86ac52d:	5b                   	pop    %ebx
 86ac52e:	5e                   	pop    %esi
 86ac52f:	5f                   	pop    %edi
 86ac530:	5d                   	pop    %ebp
 86ac531:	c3                   	ret

```

```c
// UserQuest::accept_quest @ 0x86abf38

/* UserQuest::accept_quest(int, char*, int&) */

undefined4 __thiscall
UserQuest::accept_quest(UserQuest *this,int param_1,char *param_2,int *param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  CHackAnalyzer *pCVar4;
  CInventory *pCVar5;
  int *piVar6;
  undefined4 uVar7;
  stSelectQuestParam *psVar8;
  byte bVar9;
  stSelectQuestParam local_b4 [44];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_88 [4];
  vector<int,std::allocator<int>> local_84 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_78 [12];
  vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> local_6c [12];
  cMyTrace local_60 [16];
  __normal_iterator local_50 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_4c [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_48 [4];
  __normal_iterator<int*,std::vector<int,std::allocator<int>>> local_44 [4];
  Quest *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  InterfacePacketBuf *local_24;
  int local_20;
  
  bVar9 = 0;
  if (*(int *)this == 0) {
    LogManager::logFormat
              (1,"user_quest.cpp","int UserQuest::accept_quest(int, char*, int&)",0x1e8,
               "user is null");
    uVar7 = 1;
  }
  else {
    iVar3 = CUserCharacInfo::getCurCharacR(*(CUserCharacInfo **)this);
    if (iVar3 == 0) {
      cMyTrace::cMyTrace(local_60,"int UserQuest::accept_quest(int, char*, int&)",0x1ef,5);
      cMyTrace::operator()(local_60,"UserQuest::accept_quest user->m_selected is null");
      uVar7 = 1;
    }
    else {
      iVar3 = G_CDataManager();
      local_40 = (Quest *)CDataManager::find_quest(iVar3);
      if (local_40 == (Quest *)0x0) {
        LogManager::logFormat
                  (1,"user_quest.cpp","int UserQuest::accept_quest(int, char*, int&)",0x1f8,
                   "G_CDataManager()->find_quest(%d)",param_1);
        uVar7 = 1;
      }
      else {
        for (local_38 = 0; local_38 < 0x14; local_38 = local_38 + 1) {
          if (*(int *)(this + (local_38 + 0x1d4c) * 4 + 8) == param_1) {
            return 0x12;
          }
        }
        cVar1 = CUser::IsGameMasterMode(*(CUser **)this);
        if (((cVar1 != '\x01') && (cVar1 = Quest::isRepeatableQuest(local_40), cVar1 != '\x01')) &&
           (cVar1 = WongWork::CQuestClear::isClearedQuest((CQuestClear *)(this + 4),param_1),
           cVar1 != '\0')) {
          return 0x12;
        }
        cVar1 = CUser::IsGameMasterMode(*(CUser **)this);
        if (cVar1 != '\x01') {
          stSelectQuestParam::stSelectQuestParam(local_b4,*(CUser **)this);
          iVar3 = CUser::getCurCharacQuestR(*(CUser **)this);
          cVar1 = checkAcceptableQuest(local_40,(CQuestClear *)(iVar3 + 4),local_b4);
          if (cVar1 != '\x01') {
            uVar7 = *(undefined4 *)this;
            pCVar4 = (CHackAnalyzer *)CUser::getHackAnalyzer(*(CUser **)this);
            WongWork::CHackAnalyzer::addServerHackCnt(pCVar4,uVar7,0x191,1,0,0);
            return 1;
          }
        }
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_6c);
                    /* try { // try from 086ac16b to 086ac16f has its CatchHandler @ 086ac4ff */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::vector(local_78);
                    /* try { // try from 086ac180 to 086ac32f has its CatchHandler @ 086ac4dd */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator=
                  (local_6c,(vector *)(local_40 + 0x70));
        pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)this);
        local_3c = CInventory::erase_repeated_item(pCVar5,(vector *)local_6c,(vector *)local_78);
        if (0 < local_3c) {
          psVar8 = local_b4;
          for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)psVar8 = 0;
            psVar8 = psVar8 + ((uint)bVar9 * -2 + 1) * 4;
          }
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
          CInventory::CalNeedSlot(pCVar5,(int *)local_b4,(vector *)local_78);
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
          local_34 = CInventory::QuickEmptyCount(pCVar5);
          for (local_30 = 1; iVar3 = local_30, local_30 < 0xb; local_30 = local_30 + 1) {
            pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenR(*(CUserCharacInfo **)this);
            local_2c = CInventory::InvenEmptycount(pCVar5,iVar3);
            if ((local_2c < *(int *)(local_b4 + local_30 * 4)) &&
               (local_34 = local_34 + (local_2c - *(int *)(local_b4 + local_30 * 4)), local_34 < 0))
            {
              uVar7 = 0x11;
              goto LAB_086ac4f2;
            }
          }
        }
        iVar3 = Quest::get_init_trigger(local_40);
        *param_3 = iVar3;
        local_28 = 0;
LAB_086ac4c7:
        if (local_28 < 0x14) {
          if (*(int *)(this + (local_28 + 0x1d4c) * 4 + 8) != 0) goto LAB_086ac4c3;
          WongWork::CQuestClear::resetClearedQuests((CQuestClear *)(this + 4),param_1);
          *(int *)(this + (local_28 + 0x1d4c) * 4 + 8) = param_1;
          *(int *)(this + (local_28 + 0x1d60) * 4 + 8) = *param_3;
          local_24 = (InterfacePacketBuf *)param_2;
          InterfacePacketBuf::put_byte((InterfacePacketBuf *)param_2,1);
          InterfacePacketBuf::put_short(local_24,param_1);
          InterfacePacketBuf::put_int(local_24,*param_3);
          std::vector<int,std::allocator<int>>::vector(local_84);
          pCVar5 = (CInventory *)CUserCharacInfo::getCurCharacInvenW(*(CUserCharacInfo **)this);
                    /* try { // try from 086ac376 to 086ac493 has its CatchHandler @ 086ac4ae */
          local_20 = CInventory::insert_event_items
                               (pCVar5,local_78,local_84,3,8,0,&DAT_08cf3a85,&DAT_08cf3a85);
          InterfacePacketBuf::put_byte(local_24,local_20);
          std::vector<int,std::allocator<int>>::begin();
          while( true ) {
            std::vector<int,std::allocator<int>>::end();
            bVar2 = __gnu_cxx::operator!=(local_88,local_50);
            if (!bVar2) break;
            piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                            ::operator*(local_88);
            InterfacePacketBuf::put_short(local_24,*piVar6);
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                      (local_4c,(int)local_88);
            piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                            ::operator*(local_88);
            InterfacePacketBuf::put_int(local_24,*piVar6);
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                      (local_48,(int)local_88);
            piVar6 = (int *)__gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>
                            ::operator*(local_88);
            InterfacePacketBuf::put_int(local_24,*piVar6);
            __gnu_cxx::__normal_iterator<int*,std::vector<int,std::allocator<int>>>::operator++
                      (local_44,(int)local_88);
          }
          uVar7 = 0;
                    /* try { // try from 086ac4a7 to 086ac4ab has its CatchHandler @ 086ac4dd */
          std::vector<int,std::allocator<int>>::~vector(local_84);
        }
        else {
          uVar7 = 4;
        }
LAB_086ac4f2:
                    /* try { // try from 086ac4f8 to 086ac4fc has its CatchHandler @ 086ac4ff */
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_78);
        std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::~vector(local_6c);
      }
    }
  }
  return uVar7;
LAB_086ac4c3:
  local_28 = local_28 + 1;
  goto LAB_086ac4c7;
}

```

---

## check_cond_clear

```asm
// === 086acad0 UserQuest::check_cond_clear  [0x086acad0-0x86acb51] ===
 86acad0:	55                   	push   %ebp
 86acad1:	89 e5                	mov    %esp,%ebp
 86acad3:	83 ec 28             	sub    $0x28,%esp
 86acad6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86acadd:	eb 61                	jmp    86acb40 <_ZNK9UserQuest16check_cond_clearEi+0x70>
 86acadf:	8b 45 08             	mov    0x8(%ebp),%eax
 86acae2:	8b 00                	mov    (%eax),%eax
 86acae4:	89 04 24             	mov    %eax,(%esp)
 86acae7:	e8 36 0a e6 ff       	call   850d522 <_ZN5CUser14getGmQuestFlagEv>
 86acaec:	84 c0                	test   %al,%al
 86acaee:	74 1c                	je     86acb0c <_ZNK9UserQuest16check_cond_clearEi+0x3c>
 86acaf0:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86acaf3:	8b 45 08             	mov    0x8(%ebp),%eax
 86acaf6:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86acafc:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86acb00:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86acb03:	75 37                	jne    86acb3c <_ZNK9UserQuest16check_cond_clearEi+0x6c>
 86acb05:	b8 01 00 00 00       	mov    $0x1,%eax
 86acb0a:	eb 44                	jmp    86acb50 <_ZNK9UserQuest16check_cond_clearEi+0x80>
 86acb0c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86acb0f:	8b 45 08             	mov    0x8(%ebp),%eax
 86acb12:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86acb18:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86acb1c:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86acb1f:	75 1b                	jne    86acb3c <_ZNK9UserQuest16check_cond_clearEi+0x6c>
 86acb21:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86acb24:	8b 45 08             	mov    0x8(%ebp),%eax
 86acb27:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86acb2d:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86acb31:	85 c0                	test   %eax,%eax
 86acb33:	75 07                	jne    86acb3c <_ZNK9UserQuest16check_cond_clearEi+0x6c>
 86acb35:	b8 01 00 00 00       	mov    $0x1,%eax
 86acb3a:	eb 14                	jmp    86acb50 <_ZNK9UserQuest16check_cond_clearEi+0x80>
 86acb3c:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86acb40:	83 7d f4 13          	cmpl   $0x13,-0xc(%ebp)
 86acb44:	0f 9e c0             	setle  %al
 86acb47:	84 c0                	test   %al,%al
 86acb49:	75 94                	jne    86acadf <_ZNK9UserQuest16check_cond_clearEi+0xf>
 86acb4b:	b8 00 00 00 00       	mov    $0x0,%eax
 86acb50:	c9                   	leave
 86acb51:	c3                   	ret

```

```c
// UserQuest::check_cond_clear @ 0x86acad0

/* UserQuest::check_cond_clear(int) const */

undefined4 __thiscall UserQuest::check_cond_clear(UserQuest *this,int param_1)

{
  char cVar1;
  int local_10;
  
  local_10 = 0;
  do {
    if (0x13 < local_10) {
      return 0;
    }
    cVar1 = CUser::getGmQuestFlag(*(CUser **)this);
    if (cVar1 == '\0') {
      if ((*(int *)(this + (local_10 + 0x1d4c) * 4 + 8) == param_1) &&
         (*(int *)(this + (local_10 + 0x1d60) * 4 + 8) == 0)) {
        return 1;
      }
    }
    else if (*(int *)(this + (local_10 + 0x1d4c) * 4 + 8) == param_1) {
      return 1;
    }
    local_10 = local_10 + 1;
  } while( true );
}

```

---

## check_quest_condition

```asm
// === 086acf8a UserQuest::check_quest_condition  [0x086acf8a-0x86acffd] ===
 86acf8a:	55                   	push   %ebp
 86acf8b:	89 e5                	mov    %esp,%ebp
 86acf8d:	83 ec 38             	sub    $0x38,%esp
 86acf90:	e8 06 f2 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86acf95:	8b 40 18             	mov    0x18(%eax),%eax
 86acf98:	8b 55 0c             	mov    0xc(%ebp),%edx
 86acf9b:	89 54 24 04          	mov    %edx,0x4(%esp)
 86acf9f:	89 04 24             	mov    %eax,(%esp)
 86acfa2:	e8 b5 8a ca ff       	call   8355a5c <_ZN9QuestList10find_questEi>
 86acfa7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86acfaa:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86acfae:	75 3a                	jne    86acfea <_ZN9UserQuest21check_quest_conditionEi+0x60>
 86acfb0:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acfb3:	89 44 24 14          	mov    %eax,0x14(%esp)
 86acfb7:	c7 44 24 10 10 3b cf 	movl   $0x8cf3b10,0x10(%esp)
 86acfbe:	08 
 86acfbf:	c7 44 24 0c 03 04 00 	movl   $0x403,0xc(%esp)
 86acfc6:	00 
 86acfc7:	c7 44 24 08 60 47 cf 	movl   $0x8cf4760,0x8(%esp)
 86acfce:	08 
 86acfcf:	c7 44 24 04 21 3a cf 	movl   $0x8cf3a21,0x4(%esp)
 86acfd6:	08 
 86acfd7:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 86acfde:	e8 27 6c 42 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 86acfe3:	b8 00 00 00 00       	mov    $0x0,%eax
 86acfe8:	eb 12                	jmp    86acffc <_ZN9UserQuest21check_quest_conditionEi+0x72>
 86acfea:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86acfed:	89 44 24 04          	mov    %eax,0x4(%esp)
 86acff1:	8b 45 08             	mov    0x8(%ebp),%eax
 86acff4:	89 04 24             	mov    %eax,(%esp)
 86acff7:	e8 4a fe ff ff       	call   86ace46 <_ZN9UserQuest26check_quest_type_conditionEP5Quest>
 86acffc:	c9                   	leave
 86acffd:	c3                   	ret

```

```c
// UserQuest::check_quest_condition @ 0x86acf8a

/* UserQuest::check_quest_condition(int) */

undefined4 __thiscall UserQuest::check_quest_condition(UserQuest *this,int param_1)

{
  int iVar1;
  Quest *pQVar2;
  undefined4 uVar3;
  
  iVar1 = G_CDataManager();
  pQVar2 = (Quest *)QuestList::find_quest(*(int *)(iVar1 + 0x18));
  if (pQVar2 == (Quest *)0x0) {
    LogManager::logFormat
              (1,"user_quest.cpp","bool UserQuest::check_quest_condition(int)",0x403,
               "G_CDataManager()->m_pQuestList->find_quest(%d) fail",param_1);
    uVar3 = 0;
  }
  else {
    uVar3 = check_quest_type_condition(this,pQVar2);
  }
  return uVar3;
}

```

---

## check_quest_subtype_condition

```asm
// === 086acb52 UserQuest::check_quest_subtype_condition  [0x086acb52-0x86ace45] ===
 86acb52:	55                   	push   %ebp
 86acb53:	89 e5                	mov    %esp,%ebp
 86acb55:	83 ec 48             	sub    $0x48,%esp
 86acb58:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acb5b:	8b 80 80 00 00 00    	mov    0x80(%eax),%eax
 86acb61:	83 f8 07             	cmp    $0x7,%eax
 86acb64:	0f 87 d5 02 00 00    	ja     86ace3f <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2ed>
 86acb6a:	8b 04 85 88 3a cf 08 	mov    0x8cf3a88(,%eax,4),%eax
 86acb71:	ff e0                	jmp    *%eax
 86acb73:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acb76:	05 84 00 00 00       	add    $0x84,%eax
 86acb7b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86acb82:	00 
 86acb83:	89 04 24             	mov    %eax,(%esp)
 86acb86:	e8 e7 a0 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acb8b:	8b 00                	mov    (%eax),%eax
 86acb8d:	89 45 cc             	mov    %eax,-0x34(%ebp)
 86acb90:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acb93:	05 84 00 00 00       	add    $0x84,%eax
 86acb98:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86acb9f:	00 
 86acba0:	89 04 24             	mov    %eax,(%esp)
 86acba3:	e8 ca a0 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acba8:	8b 00                	mov    (%eax),%eax
 86acbaa:	89 45 d0             	mov    %eax,-0x30(%ebp)
 86acbad:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acbb0:	05 84 00 00 00       	add    $0x84,%eax
 86acbb5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86acbbc:	00 
 86acbbd:	89 04 24             	mov    %eax,(%esp)
 86acbc0:	e8 ad a0 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acbc5:	8b 00                	mov    (%eax),%eax
 86acbc7:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86acbca:	83 7d d0 ff          	cmpl   $0xffffffff,-0x30(%ebp)
 86acbce:	74 1a                	je     86acbea <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x98>
 86acbd0:	8b 45 08             	mov    0x8(%ebp),%eax
 86acbd3:	0f b7 80 da 75 00 00 	movzwl 0x75da(%eax),%eax
 86acbda:	98                   	cwtl
 86acbdb:	3b 45 d0             	cmp    -0x30(%ebp),%eax
 86acbde:	74 0a                	je     86acbea <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x98>
 86acbe0:	b8 00 00 00 00       	mov    $0x0,%eax
 86acbe5:	e9 5a 02 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86acbea:	8b 45 08             	mov    0x8(%ebp),%eax
 86acbed:	0f b7 80 d8 75 00 00 	movzwl 0x75d8(%eax),%eax
 86acbf4:	98                   	cwtl
 86acbf5:	3b 45 cc             	cmp    -0x34(%ebp),%eax
 86acbf8:	74 0a                	je     86acc04 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0xb2>
 86acbfa:	b8 00 00 00 00       	mov    $0x0,%eax
 86acbff:	e9 40 02 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86acc04:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 86acc07:	69 d0 e8 03 00 00    	imul   $0x3e8,%eax,%edx
 86acc0d:	8b 45 08             	mov    0x8(%ebp),%eax
 86acc10:	8b 80 e0 75 00 00    	mov    0x75e0(%eax),%eax
 86acc16:	39 c2                	cmp    %eax,%edx
 86acc18:	7d 0a                	jge    86acc24 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0xd2>
 86acc1a:	b8 00 00 00 00       	mov    $0x0,%eax
 86acc1f:	e9 20 02 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86acc24:	b8 01 00 00 00       	mov    $0x1,%eax
 86acc29:	e9 16 02 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86acc2e:	b8 01 00 00 00       	mov    $0x1,%eax
 86acc33:	e9 0c 02 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86acc38:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acc3b:	05 84 00 00 00       	add    $0x84,%eax
 86acc40:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86acc47:	00 
 86acc48:	89 04 24             	mov    %eax,(%esp)
 86acc4b:	e8 22 a0 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acc50:	8b 00                	mov    (%eax),%eax
 86acc52:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86acc55:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acc58:	05 84 00 00 00       	add    $0x84,%eax
 86acc5d:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86acc64:	00 
 86acc65:	89 04 24             	mov    %eax,(%esp)
 86acc68:	e8 05 a0 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acc6d:	8b 00                	mov    (%eax),%eax
 86acc6f:	89 45 dc             	mov    %eax,-0x24(%ebp)
 86acc72:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
 86acc76:	74 1a                	je     86acc92 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x140>
 86acc78:	8b 45 08             	mov    0x8(%ebp),%eax
 86acc7b:	0f b7 80 da 75 00 00 	movzwl 0x75da(%eax),%eax
 86acc82:	98                   	cwtl
 86acc83:	3b 45 dc             	cmp    -0x24(%ebp),%eax
 86acc86:	74 0a                	je     86acc92 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x140>
 86acc88:	b8 00 00 00 00       	mov    $0x0,%eax
 86acc8d:	e9 b2 01 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86acc92:	8b 45 08             	mov    0x8(%ebp),%eax
 86acc95:	0f b7 80 d8 75 00 00 	movzwl 0x75d8(%eax),%eax
 86acc9c:	98                   	cwtl
 86acc9d:	3b 45 d8             	cmp    -0x28(%ebp),%eax
 86acca0:	74 0a                	je     86accac <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x15a>
 86acca2:	b8 00 00 00 00       	mov    $0x0,%eax
 86acca7:	e9 98 01 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86accac:	8b 45 08             	mov    0x8(%ebp),%eax
 86accaf:	0f b6 80 e4 75 00 00 	movzbl 0x75e4(%eax),%eax
 86accb6:	84 c0                	test   %al,%al
 86accb8:	74 0a                	je     86accc4 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x172>
 86accba:	b8 00 00 00 00       	mov    $0x0,%eax
 86accbf:	e9 80 01 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86accc4:	b8 01 00 00 00       	mov    $0x1,%eax
 86accc9:	e9 76 01 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86accce:	8b 45 0c             	mov    0xc(%ebp),%eax
 86accd1:	05 84 00 00 00       	add    $0x84,%eax
 86accd6:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86accdd:	00 
 86accde:	89 04 24             	mov    %eax,(%esp)
 86acce1:	e8 8c 9f 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acce6:	8b 00                	mov    (%eax),%eax
 86acce8:	89 45 e0             	mov    %eax,-0x20(%ebp)
 86acceb:	8b 45 0c             	mov    0xc(%ebp),%eax
 86accee:	05 84 00 00 00       	add    $0x84,%eax
 86accf3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86accfa:	00 
 86accfb:	89 04 24             	mov    %eax,(%esp)
 86accfe:	e8 6f 9f 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acd03:	8b 00                	mov    (%eax),%eax
 86acd05:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 86acd08:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acd0b:	05 84 00 00 00       	add    $0x84,%eax
 86acd10:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86acd17:	00 
 86acd18:	89 04 24             	mov    %eax,(%esp)
 86acd1b:	e8 52 9f 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acd20:	8b 00                	mov    (%eax),%eax
 86acd22:	89 45 e8             	mov    %eax,-0x18(%ebp)
 86acd25:	83 7d e4 ff          	cmpl   $0xffffffff,-0x1c(%ebp)
 86acd29:	74 1a                	je     86acd45 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x1f3>
 86acd2b:	8b 45 08             	mov    0x8(%ebp),%eax
 86acd2e:	0f b7 80 da 75 00 00 	movzwl 0x75da(%eax),%eax
 86acd35:	98                   	cwtl
 86acd36:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 86acd39:	7d 0a                	jge    86acd45 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x1f3>
 86acd3b:	b8 00 00 00 00       	mov    $0x0,%eax
 86acd40:	e9 ff 00 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86acd45:	8b 45 08             	mov    0x8(%ebp),%eax
 86acd48:	0f b7 80 d8 75 00 00 	movzwl 0x75d8(%eax),%eax
 86acd4f:	98                   	cwtl
 86acd50:	3b 45 e0             	cmp    -0x20(%ebp),%eax
 86acd53:	74 0a                	je     86acd5f <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x20d>
 86acd55:	b8 00 00 00 00       	mov    $0x0,%eax
 86acd5a:	e9 e5 00 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86acd5f:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
 86acd63:	75 18                	jne    86acd7d <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x22b>
 86acd65:	8b 45 08             	mov    0x8(%ebp),%eax
 86acd68:	8b 80 e8 75 00 00    	mov    0x75e8(%eax),%eax
 86acd6e:	83 f8 01             	cmp    $0x1,%eax
 86acd71:	74 0a                	je     86acd7d <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x22b>
 86acd73:	b8 00 00 00 00       	mov    $0x0,%eax
 86acd78:	e9 c7 00 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86acd7d:	8b 45 08             	mov    0x8(%ebp),%eax
 86acd80:	8b 80 e8 75 00 00    	mov    0x75e8(%eax),%eax
 86acd86:	3b 45 e8             	cmp    -0x18(%ebp),%eax
 86acd89:	7d 0a                	jge    86acd95 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x243>
 86acd8b:	b8 00 00 00 00       	mov    $0x0,%eax
 86acd90:	e9 af 00 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86acd95:	b8 01 00 00 00       	mov    $0x1,%eax
 86acd9a:	e9 a5 00 00 00       	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86acd9f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acda2:	05 84 00 00 00       	add    $0x84,%eax
 86acda7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86acdae:	00 
 86acdaf:	89 04 24             	mov    %eax,(%esp)
 86acdb2:	e8 bb 9e 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acdb7:	8b 00                	mov    (%eax),%eax
 86acdb9:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86acdbc:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acdbf:	05 84 00 00 00       	add    $0x84,%eax
 86acdc4:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86acdcb:	00 
 86acdcc:	89 04 24             	mov    %eax,(%esp)
 86acdcf:	e8 9e 9e 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acdd4:	8b 00                	mov    (%eax),%eax
 86acdd6:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86acdd9:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acddc:	05 84 00 00 00       	add    $0x84,%eax
 86acde1:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 86acde8:	00 
 86acde9:	89 04 24             	mov    %eax,(%esp)
 86acdec:	e8 81 9e 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acdf1:	8b 00                	mov    (%eax),%eax
 86acdf3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86acdf6:	83 7d f0 ff          	cmpl   $0xffffffff,-0x10(%ebp)
 86acdfa:	74 17                	je     86ace13 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2c1>
 86acdfc:	8b 45 08             	mov    0x8(%ebp),%eax
 86acdff:	0f b7 80 da 75 00 00 	movzwl 0x75da(%eax),%eax
 86ace06:	98                   	cwtl
 86ace07:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 86ace0a:	74 07                	je     86ace13 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2c1>
 86ace0c:	b8 00 00 00 00       	mov    $0x0,%eax
 86ace11:	eb 31                	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86ace13:	8b 45 08             	mov    0x8(%ebp),%eax
 86ace16:	0f b7 80 d8 75 00 00 	movzwl 0x75d8(%eax),%eax
 86ace1d:	98                   	cwtl
 86ace1e:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 86ace21:	74 07                	je     86ace2a <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2d8>
 86ace23:	b8 00 00 00 00       	mov    $0x0,%eax
 86ace28:	eb 1a                	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86ace2a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ace2d:	8b 80 ec 75 00 00    	mov    0x75ec(%eax),%eax
 86ace33:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 86ace36:	7d 07                	jge    86ace3f <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2ed>
 86ace38:	b8 00 00 00 00       	mov    $0x0,%eax
 86ace3d:	eb 05                	jmp    86ace44 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest+0x2f2>
 86ace3f:	b8 00 00 00 00       	mov    $0x0,%eax
 86ace44:	c9                   	leave
 86ace45:	c3                   	ret

```

```c
// UserQuest::check_quest_subtype_condition @ 0x86acb52

/* UserQuest::check_quest_subtype_condition(Quest*) */

undefined4 __thiscall UserQuest::check_quest_subtype_condition(UserQuest *this,Quest *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  
  switch(*(undefined4 *)(param_1 + 0x80)) {
  case 0:
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    iVar1 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),1);
    iVar2 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),2);
    if ((iVar2 == -1) || (*(short *)(this + 0x75da) == iVar2)) {
      if (*(short *)(this + 0x75d8) == iVar1) {
        if (*piVar3 * 1000 < *(int *)(this + 0x75e0)) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
    break;
  case 1:
  case 2:
  case 3:
  case 6:
    uVar4 = 1;
    break;
  case 4:
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    iVar1 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),1);
    if ((*piVar3 == -1) || ((int)*(short *)(this + 0x75da) == *piVar3)) {
      if (*(short *)(this + 0x75d8) == iVar1) {
        if (this[0x75e4] == (UserQuest)0x0) {
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
    break;
  case 5:
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    iVar1 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),1);
    iVar2 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),2);
    if ((iVar2 == -1) || (iVar2 <= *(short *)(this + 0x75da))) {
      if (*(short *)(this + 0x75d8) == iVar1) {
        if ((*piVar3 == 1) && (*(int *)(this + 0x75e8) != 1)) {
          uVar4 = 0;
        }
        else if (*(int *)(this + 0x75e8) < *piVar3) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 0;
      }
    }
    else {
      uVar4 = 0;
    }
    break;
  case 7:
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    iVar1 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),1);
    iVar2 = *piVar3;
    piVar3 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),2);
    if ((iVar2 != -1) && (*(short *)(this + 0x75da) != iVar2)) {
      return 0;
    }
    if (*(short *)(this + 0x75d8) != iVar1) {
      return 0;
    }
    if (*(int *)(this + 0x75ec) < *piVar3) {
      return 0;
    }
  default:
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## check_quest_type_condition

```asm
// === 086ace46 UserQuest::check_quest_type_condition  [0x086ace46-0x86acf89] ===
 86ace46:	55                   	push   %ebp
 86ace47:	89 e5                	mov    %esp,%ebp
 86ace49:	53                   	push   %ebx
 86ace4a:	83 ec 14             	sub    $0x14,%esp
 86ace4d:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ace50:	8b 40 7c             	mov    0x7c(%eax),%eax
 86ace53:	83 f8 19             	cmp    $0x19,%eax
 86ace56:	0f 87 15 01 00 00    	ja     86acf71 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x12b>
 86ace5c:	8b 04 85 a8 3a cf 08 	mov    0x8cf3aa8(,%eax,4),%eax
 86ace63:	ff e0                	jmp    *%eax
 86ace65:	b8 01 00 00 00       	mov    $0x1,%eax
 86ace6a:	e9 14 01 00 00       	jmp    86acf83 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x13d>
 86ace6f:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ace72:	05 84 00 00 00       	add    $0x84,%eax
 86ace77:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86ace7e:	00 
 86ace7f:	89 04 24             	mov    %eax,(%esp)
 86ace82:	e8 eb 9d 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86ace87:	8b 18                	mov    (%eax),%ebx
 86ace89:	8b 45 08             	mov    0x8(%ebp),%eax
 86ace8c:	8b 00                	mov    (%eax),%eax
 86ace8e:	89 04 24             	mov    %eax,(%esp)
 86ace91:	e8 f2 05 e6 ff       	call   850d488 <_ZNK15CUserCharacInfo13getPVPResultREv>
 86ace96:	8b 40 14             	mov    0x14(%eax),%eax
 86ace99:	39 c3                	cmp    %eax,%ebx
 86ace9b:	0f 9e c0             	setle  %al
 86ace9e:	84 c0                	test   %al,%al
 86acea0:	74 0a                	je     86aceac <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x66>
 86acea2:	b8 01 00 00 00       	mov    $0x1,%eax
 86acea7:	e9 d7 00 00 00       	jmp    86acf83 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x13d>
 86aceac:	b8 00 00 00 00       	mov    $0x0,%eax
 86aceb1:	e9 cd 00 00 00       	jmp    86acf83 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x13d>
 86aceb6:	8b 45 0c             	mov    0xc(%ebp),%eax
 86aceb9:	05 84 00 00 00       	add    $0x84,%eax
 86acebe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86acec5:	00 
 86acec6:	89 04 24             	mov    %eax,(%esp)
 86acec9:	e8 a4 9d 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acece:	8b 10                	mov    (%eax),%edx
 86aced0:	8b 45 08             	mov    0x8(%ebp),%eax
 86aced3:	0f b7 80 dc 75 00 00 	movzwl 0x75dc(%eax),%eax
 86aceda:	98                   	cwtl
 86acedb:	39 c2                	cmp    %eax,%edx
 86acedd:	0f 94 c0             	sete   %al
 86acee0:	84 c0                	test   %al,%al
 86acee2:	74 0a                	je     86aceee <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0xa8>
 86acee4:	b8 01 00 00 00       	mov    $0x1,%eax
 86acee9:	e9 95 00 00 00       	jmp    86acf83 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x13d>
 86aceee:	b8 00 00 00 00       	mov    $0x0,%eax
 86acef3:	e9 8b 00 00 00       	jmp    86acf83 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x13d>
 86acef8:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acefb:	05 84 00 00 00       	add    $0x84,%eax
 86acf00:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86acf07:	00 
 86acf08:	89 04 24             	mov    %eax,(%esp)
 86acf0b:	e8 62 9d 9e ff       	call   8096c72 <_ZNSt6vectorIiSaIiEE2atEj>
 86acf10:	8b 18                	mov    (%eax),%ebx
 86acf12:	8b 45 08             	mov    0x8(%ebp),%eax
 86acf15:	8b 00                	mov    (%eax),%eax
 86acf17:	89 04 24             	mov    %eax,(%esp)
 86acf1a:	e8 a9 2a b8 ff       	call   822f9c8 <_ZN15CUserCharacInfo20GetUserPowerWarPointEv>
 86acf1f:	98                   	cwtl
 86acf20:	39 c3                	cmp    %eax,%ebx
 86acf22:	0f 9e c0             	setle  %al
 86acf25:	84 c0                	test   %al,%al
 86acf27:	74 07                	je     86acf30 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0xea>
 86acf29:	b8 01 00 00 00       	mov    $0x1,%eax
 86acf2e:	eb 53                	jmp    86acf83 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x13d>
 86acf30:	b8 00 00 00 00       	mov    $0x0,%eax
 86acf35:	eb 4c                	jmp    86acf83 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x13d>
 86acf37:	a1 50 be 40 09       	mov    0x940be50,%eax
 86acf3c:	89 04 24             	mov    %eax,(%esp)
 86acf3f:	e8 d6 80 cc ff       	call   837501a <_ZN13CPowerManager13GetWinnerSideEv>
 86acf44:	89 c3                	mov    %eax,%ebx
 86acf46:	8b 45 08             	mov    0x8(%ebp),%eax
 86acf49:	8b 00                	mov    (%eax),%eax
 86acf4b:	89 04 24             	mov    %eax,(%esp)
 86acf4e:	e8 73 2d b8 ff       	call   822fcc6 <_ZN5CUser12getPowerSideEv>
 86acf53:	38 c3                	cmp    %al,%bl
 86acf55:	0f 94 c0             	sete   %al
 86acf58:	84 c0                	test   %al,%al
 86acf5a:	74 07                	je     86acf63 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x11d>
 86acf5c:	b8 01 00 00 00       	mov    $0x1,%eax
 86acf61:	eb 20                	jmp    86acf83 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x13d>
 86acf63:	b8 00 00 00 00       	mov    $0x0,%eax
 86acf68:	eb 19                	jmp    86acf83 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x13d>
 86acf6a:	b8 01 00 00 00       	mov    $0x1,%eax
 86acf6f:	eb 12                	jmp    86acf83 <_ZN9UserQuest26check_quest_type_conditionEP5Quest+0x13d>
 86acf71:	8b 45 0c             	mov    0xc(%ebp),%eax
 86acf74:	89 44 24 04          	mov    %eax,0x4(%esp)
 86acf78:	8b 45 08             	mov    0x8(%ebp),%eax
 86acf7b:	89 04 24             	mov    %eax,(%esp)
 86acf7e:	e8 cf fb ff ff       	call   86acb52 <_ZN9UserQuest29check_quest_subtype_conditionEP5Quest>
 86acf83:	83 c4 14             	add    $0x14,%esp
 86acf86:	5b                   	pop    %ebx
 86acf87:	5d                   	pop    %ebp
 86acf88:	c3                   	ret
 86acf89:	90                   	nop

```

```c
// UserQuest::check_quest_type_condition @ 0x86ace46

/* UserQuest::check_quest_type_condition(Quest*) */

undefined4 __thiscall UserQuest::check_quest_type_condition(UserQuest *this,Quest *param_1)

{
  int iVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 6:
  case 0xf:
  case 0x19:
    uVar7 = 1;
    break;
  case 3:
    piVar6 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    if (*piVar6 == (int)*(short *)(this + 0x75dc)) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    break;
  case 5:
    piVar6 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    iVar1 = *piVar6;
    iVar5 = CUserCharacInfo::getPVPResultR(*(CUserCharacInfo **)this);
    if (*(int *)(iVar5 + 0x14) < iVar1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    break;
  case 7:
    cVar2 = CPowerManager::GetWinnerSide(GlobalData::s_power_manager);
    cVar3 = CUser::getPowerSide(*(CUser **)this);
    if (cVar2 == cVar3) {
      uVar7 = 1;
    }
    else {
      uVar7 = 0;
    }
    break;
  case 8:
    piVar6 = (int *)std::vector<int,std::allocator<int>>::at
                              ((vector<int,std::allocator<int>> *)(param_1 + 0x84),0);
    iVar1 = *piVar6;
    sVar4 = CUserCharacInfo::GetUserPowerWarPoint(*(CUserCharacInfo **)this);
    if (sVar4 < iVar1) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    break;
  default:
    uVar7 = check_quest_subtype_condition(this,param_1);
    break;
  case 0x10:
  case 0x13:
    uVar7 = 1;
  }
  return uVar7;
}

```

---

## finish_quest

```asm
// === 086ac854 UserQuest::finish_quest  [0x086ac854-0x86ac953] ===
 86ac854:	55                   	push   %ebp
 86ac855:	89 e5                	mov    %esp,%ebp
 86ac857:	83 ec 28             	sub    $0x28,%esp
 86ac85a:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86ac861:	e9 d7 00 00 00       	jmp    86ac93d <_ZN9UserQuest12finish_questEi+0xe9>
 86ac866:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ac869:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac86c:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ac872:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ac876:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86ac879:	0f 85 ba 00 00 00    	jne    86ac939 <_ZN9UserQuest12finish_questEi+0xe5>
 86ac87f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ac882:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac885:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86ac88b:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ac88f:	85 c0                	test   %eax,%eax
 86ac891:	0f 85 9b 00 00 00    	jne    86ac932 <_ZN9UserQuest12finish_questEi+0xde>
 86ac897:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ac89a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac89d:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ac8a3:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 86ac8aa:	00 
 86ac8ab:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ac8ae:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac8b1:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86ac8b7:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 86ac8be:	00 
 86ac8bf:	e8 d7 f8 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ac8c4:	8b 55 0c             	mov    0xc(%ebp),%edx
 86ac8c7:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac8cb:	89 04 24             	mov    %eax,(%esp)
 86ac8ce:	e8 f3 34 cb ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 86ac8d3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86ac8d6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86ac8da:	74 19                	je     86ac8f5 <_ZN9UserQuest12finish_questEi+0xa1>
 86ac8dc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ac8df:	89 04 24             	mov    %eax,(%esp)
 86ac8e2:	e8 07 63 ca ff       	call   8352bee <_ZNK5Quest17isRepeatableQuestEv>
 86ac8e7:	83 f0 01             	xor    $0x1,%eax
 86ac8ea:	84 c0                	test   %al,%al
 86ac8ec:	74 07                	je     86ac8f5 <_ZN9UserQuest12finish_questEi+0xa1>
 86ac8ee:	b8 01 00 00 00       	mov    $0x1,%eax
 86ac8f3:	eb 05                	jmp    86ac8fa <_ZN9UserQuest12finish_questEi+0xa6>
 86ac8f5:	b8 00 00 00 00       	mov    $0x0,%eax
 86ac8fa:	84 c0                	test   %al,%al
 86ac8fc:	74 15                	je     86ac913 <_ZN9UserQuest12finish_questEi+0xbf>
 86ac8fe:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ac901:	8b 55 08             	mov    0x8(%ebp),%edx
 86ac904:	83 c2 04             	add    $0x4,%edx
 86ac907:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ac90b:	89 14 24             	mov    %edx,(%esp)
 86ac90e:	e8 65 f1 9d ff       	call   808ba78 <_ZN8WongWork11CQuestClear15setClearedQuestEj>
 86ac913:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ac916:	8b 40 08             	mov    0x8(%eax),%eax
 86ac919:	83 f8 08             	cmp    $0x8,%eax
 86ac91c:	75 0d                	jne    86ac92b <_ZN9UserQuest12finish_questEi+0xd7>
 86ac91e:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac921:	c7 80 f0 75 00 00 ff 	movl   $0xffffffff,0x75f0(%eax)
 86ac928:	ff ff ff 
 86ac92b:	b8 00 00 00 00       	mov    $0x0,%eax
 86ac930:	eb 1f                	jmp    86ac951 <_ZN9UserQuest12finish_questEi+0xfd>
 86ac932:	b8 16 00 00 00       	mov    $0x16,%eax
 86ac937:	eb 18                	jmp    86ac951 <_ZN9UserQuest12finish_questEi+0xfd>
 86ac939:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86ac93d:	83 7d f0 13          	cmpl   $0x13,-0x10(%ebp)
 86ac941:	0f 9e c0             	setle  %al
 86ac944:	84 c0                	test   %al,%al
 86ac946:	0f 85 1a ff ff ff    	jne    86ac866 <_ZN9UserQuest12finish_questEi+0x12>
 86ac94c:	b8 13 00 00 00       	mov    $0x13,%eax
 86ac951:	c9                   	leave
 86ac952:	c3                   	ret
 86ac953:	90                   	nop

```

```c
// UserQuest::finish_quest @ 0x86ac854

/* UserQuest::finish_quest(int) */

undefined4 __thiscall UserQuest::finish_quest(UserQuest *this,int param_1)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  Quest *this_00;
  int local_14;
  
  local_14 = 0;
  while( true ) {
    if (0x13 < local_14) {
      return 0x13;
    }
    if (*(int *)(this + (local_14 + 0x1d4c) * 4 + 8) == param_1) break;
    local_14 = local_14 + 1;
  }
  if (*(int *)(this + (local_14 + 0x1d60) * 4 + 8) == 0) {
    *(undefined4 *)(this + (local_14 + 0x1d4c) * 4 + 8) = 0;
    *(undefined4 *)(this + (local_14 + 0x1d60) * 4 + 8) = 0;
    iVar3 = G_CDataManager();
    this_00 = (Quest *)CDataManager::find_quest(iVar3);
    if ((this_00 == (Quest *)0x0) || (cVar2 = Quest::isRepeatableQuest(this_00), cVar2 == '\x01')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      WongWork::CQuestClear::setClearedQuest((CQuestClear *)(this + 4),param_1);
    }
    if (*(int *)(this_00 + 8) == 8) {
      *(undefined4 *)(this + 0x75f0) = 0xffffffff;
    }
    return 0;
  }
  return 0x16;
}

```

---

## get_mail_quest_info

```asm
// === 086abd7a UserQuest::get_mail_quest_info  [0x086abd7a-0x86abdaf] ===
 86abd7a:	55                   	push   %ebp
 86abd7b:	89 e5                	mov    %esp,%ebp
 86abd7d:	53                   	push   %ebx
 86abd7e:	83 ec 14             	sub    $0x14,%esp
 86abd81:	8b 45 08             	mov    0x8(%ebp),%eax
 86abd84:	8d 58 04             	lea    0x4(%eax),%ebx
 86abd87:	e8 0f 04 a2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86abd8c:	8b 40 18             	mov    0x18(%eax),%eax
 86abd8f:	8b 55 10             	mov    0x10(%ebp),%edx
 86abd92:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86abd96:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86abd9a:	8b 55 0c             	mov    0xc(%ebp),%edx
 86abd9d:	89 54 24 04          	mov    %edx,0x4(%esp)
 86abda1:	89 04 24             	mov    %eax,(%esp)
 86abda4:	e8 5b 95 ca ff       	call   8355304 <_ZN9QuestList17select_mail_questERSt4listIiSaIiEERKN8WongWork11CQuestClearERK18stSelectQuestParam>
 86abda9:	83 c4 14             	add    $0x14,%esp
 86abdac:	5b                   	pop    %ebx
 86abdad:	5d                   	pop    %ebp
 86abdae:	c3                   	ret
 86abdaf:	90                   	nop

```

```c
// UserQuest::get_mail_quest_info @ 0x86abd7a

/* UserQuest::get_mail_quest_info(std::list<int, std::allocator<int> >&, stSelectQuestParam const&)
   const */

void __thiscall
UserQuest::get_mail_quest_info(UserQuest *this,list *param_1,stSelectQuestParam *param_2)

{
  int iVar1;
  
  iVar1 = G_CDataManager();
  QuestList::select_mail_quest
            (*(QuestList **)(iVar1 + 0x18),param_1,(CQuestClear *)(this + 4),param_2);
  return;
}

```

---

## get_quest

```asm
// === 086abad6 UserQuest::get_quest  [0x086abad6-0x86abba7] ===
 86abad6:	55                   	push   %ebp
 86abad7:	89 e5                	mov    %esp,%ebp
 86abad9:	83 ec 28             	sub    $0x28,%esp
 86abadc:	8b 45 0c             	mov    0xc(%ebp),%eax
 86abadf:	c7 40 04 00 00 00 00 	movl   $0x0,0x4(%eax)
 86abae6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86abaed:	eb 3b                	jmp    86abb2a <_ZNK9UserQuest9get_questEP14SIG_LOAD_QUEST+0x54>
 86abaef:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86abaf2:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 86abaf5:	8b 45 08             	mov    0x8(%ebp),%eax
 86abaf8:	81 c1 4c 1d 00 00    	add    $0x1d4c,%ecx
 86abafe:	8b 4c 88 08          	mov    0x8(%eax,%ecx,4),%ecx
 86abb02:	8b 45 0c             	mov    0xc(%ebp),%eax
 86abb05:	89 4c 90 0c          	mov    %ecx,0xc(%eax,%edx,4)
 86abb09:	8b 4d f4             	mov    -0xc(%ebp),%ecx
 86abb0c:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86abb0f:	8b 45 08             	mov    0x8(%ebp),%eax
 86abb12:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86abb18:	8b 54 90 08          	mov    0x8(%eax,%edx,4),%edx
 86abb1c:	8b 45 0c             	mov    0xc(%ebp),%eax
 86abb1f:	83 c1 14             	add    $0x14,%ecx
 86abb22:	89 54 88 0c          	mov    %edx,0xc(%eax,%ecx,4)
 86abb26:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86abb2a:	83 7d f4 13          	cmpl   $0x13,-0xc(%ebp)
 86abb2e:	0f 9e c0             	setle  %al
 86abb31:	84 c0                	test   %al,%al
 86abb33:	75 ba                	jne    86abaef <_ZNK9UserQuest9get_questEP14SIG_LOAD_QUEST+0x19>
 86abb35:	8b 45 08             	mov    0x8(%ebp),%eax
 86abb38:	83 c0 04             	add    $0x4,%eax
 86abb3b:	89 04 24             	mov    %eax,(%esp)
 86abb3e:	e8 3d 00 9e ff       	call   808bb80 <_ZNK8WongWork11CQuestClear15getClearedQuestEv>
 86abb43:	8b 55 0c             	mov    0xc(%ebp),%edx
 86abb46:	81 c2 b0 00 00 00    	add    $0xb0,%edx
 86abb4c:	c7 44 24 08 30 75 00 	movl   $0x7530,0x8(%esp)
 86abb53:	00 
 86abb54:	89 44 24 04          	mov    %eax,0x4(%esp)
 86abb58:	89 14 24             	mov    %edx,(%esp)
 86abb5b:	e8 40 1d 9d ff       	call   807d8a0 <memcpy@plt>
 86abb60:	8b 45 08             	mov    0x8(%ebp),%eax
 86abb63:	8b 00                	mov    (%eax),%eax
 86abb65:	89 04 24             	mov    %eax,(%esp)
 86abb68:	e8 39 ed ae ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 86abb6d:	8b 90 f0 75 00 00    	mov    0x75f0(%eax),%edx
 86abb73:	8b 45 0c             	mov    0xc(%ebp),%eax
 86abb76:	89 90 ac 00 00 00    	mov    %edx,0xac(%eax)
 86abb7c:	8b 45 08             	mov    0x8(%ebp),%eax
 86abb7f:	8d 90 f4 75 00 00    	lea    0x75f4(%eax),%edx
 86abb85:	8b 45 0c             	mov    0xc(%ebp),%eax
 86abb88:	05 e0 75 00 00       	add    $0x75e0,%eax
 86abb8d:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 86abb94:	00 
 86abb95:	89 54 24 04          	mov    %edx,0x4(%esp)
 86abb99:	89 04 24             	mov    %eax,(%esp)
 86abb9c:	e8 ff 1c 9d ff       	call   807d8a0 <memcpy@plt>
 86abba1:	b8 01 00 00 00       	mov    $0x1,%eax
 86abba6:	c9                   	leave
 86abba7:	c3                   	ret

```

```c
// UserQuest::get_quest @ 0x86abad6

/* UserQuest::get_quest(SIG_LOAD_QUEST*) const */

undefined4 __thiscall UserQuest::get_quest(UserQuest *this,SIG_LOAD_QUEST *param_1)

{
  void *__src;
  int iVar1;
  int local_10;
  
  *(undefined4 *)(param_1 + 4) = 0;
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    *(undefined4 *)(param_1 + local_10 * 4 + 0xc) =
         *(undefined4 *)(this + (local_10 + 0x1d4c) * 4 + 8);
    *(undefined4 *)(param_1 + (local_10 + 0x14) * 4 + 0xc) =
         *(undefined4 *)(this + (local_10 + 0x1d60) * 4 + 8);
  }
  __src = (void *)WongWork::CQuestClear::getClearedQuest((CQuestClear *)(this + 4));
  memcpy(param_1 + 0xb0,__src,30000);
  iVar1 = CUser::getCurCharacQuestR(*(CUser **)this);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(iVar1 + 0x75f0);
  memcpy(param_1 + 0x75e0,this + 0x75f4,0x28);
  return 1;
}

```

---

## get_quest_info

```asm
// === 086abba8 UserQuest::get_quest_info  [0x086abba8-0x86abd79] ===
 86abba8:	55                   	push   %ebp
 86abba9:	89 e5                	mov    %esp,%ebp
 86abbab:	56                   	push   %esi
 86abbac:	53                   	push   %ebx
 86abbad:	83 ec 60             	sub    $0x60,%esp
 86abbb0:	8b 45 08             	mov    0x8(%ebp),%eax
 86abbb3:	8b 00                	mov    (%eax),%eax
 86abbb5:	89 44 24 04          	mov    %eax,0x4(%esp)
 86abbb9:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86abbbc:	89 04 24             	mov    %eax,(%esp)
 86abbbf:	e8 f0 c4 c9 ff       	call   83480b4 <_ZN18stSelectQuestParamC1EP5CUser>
 86abbc4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86abbc7:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86abbca:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86abbcd:	c7 44 24 08 15 00 00 	movl   $0x15,0x8(%esp)
 86abbd4:	00 
 86abbd5:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86abbdc:	00 
 86abbdd:	89 04 24             	mov    %eax,(%esp)
 86abbe0:	e8 17 fd a1 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 86abbe5:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86abbe8:	89 04 24             	mov    %eax,(%esp)
 86abbeb:	e8 e6 9b b8 ff       	call   82357d6 <_ZNSt4listIiSaIiEEC1Ev>
 86abbf0:	8b 45 08             	mov    0x8(%ebp),%eax
 86abbf3:	8d 58 04             	lea    0x4(%eax),%ebx
 86abbf6:	e8 a0 05 a2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86abbfb:	8b 40 18             	mov    0x18(%eax),%eax
 86abbfe:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 86abc02:	8d 55 ac             	lea    -0x54(%ebp),%edx
 86abc05:	89 54 24 08          	mov    %edx,0x8(%esp)
 86abc09:	8d 55 dc             	lea    -0x24(%ebp),%edx
 86abc0c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86abc10:	89 04 24             	mov    %eax,(%esp)
 86abc13:	e8 0e 9b ca ff       	call   8355726 <_ZN9QuestList12select_questERSt4listIiSaIiEER18stSelectQuestParamRKN8WongWork11CQuestClearE>
 86abc18:	8b 45 d0             	mov    -0x30(%ebp),%eax
 86abc1b:	83 f8 ff             	cmp    $0xffffffff,%eax
 86abc1e:	74 15                	je     86abc35 <_ZNK9UserQuest14get_quest_infoEPc+0x8d>
 86abc20:	8d 45 ac             	lea    -0x54(%ebp),%eax
 86abc23:	83 c0 24             	add    $0x24,%eax
 86abc26:	89 44 24 04          	mov    %eax,0x4(%esp)
 86abc2a:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86abc2d:	89 04 24             	mov    %eax,(%esp)
 86abc30:	e8 79 0f bc ff       	call   826cbae <_ZNSt4listIiSaIiEE9push_backERKi>
 86abc35:	8b 45 08             	mov    0x8(%ebp),%eax
 86abc38:	8b 00                	mov    (%eax),%eax
 86abc3a:	89 04 24             	mov    %eax,(%esp)
 86abc3d:	e8 76 e6 a2 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 86abc42:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86abc45:	89 44 24 04          	mov    %eax,0x4(%esp)
 86abc49:	89 14 24             	mov    %edx,(%esp)
 86abc4c:	e8 cf fc a1 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 86abc51:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86abc54:	89 04 24             	mov    %eax,(%esp)
 86abc57:	e8 f0 4e a6 ff       	call   8110b4c <_ZN18InterfacePacketBuf9get_indexEv>
 86abc5c:	89 45 d8             	mov    %eax,-0x28(%ebp)
 86abc5f:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86abc66:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86abc69:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86abc6c:	89 54 24 04          	mov    %edx,0x4(%esp)
 86abc70:	89 04 24             	mov    %eax,(%esp)
 86abc73:	e8 2c e2 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86abc78:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86abc7b:	8d 55 dc             	lea    -0x24(%ebp),%edx
 86abc7e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86abc82:	89 04 24             	mov    %eax,(%esp)
 86abc85:	e8 3e b7 b8 ff       	call   82373c8 <_ZNSt4listIiSaIiEE5beginEv>
 86abc8a:	83 ec 04             	sub    $0x4,%esp
 86abc8d:	eb 5e                	jmp    86abced <_ZNK9UserQuest14get_quest_infoEPc+0x145>
 86abc8f:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86abc92:	89 04 24             	mov    %eax,(%esp)
 86abc95:	e8 90 b7 b8 ff       	call   823742a <_ZNKSt14_List_iteratorIiEdeEv>
 86abc9a:	8b 00                	mov    (%eax),%eax
 86abc9c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86abc9f:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 86abca4:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86abca7:	89 54 24 04          	mov    %edx,0x4(%esp)
 86abcab:	89 04 24             	mov    %eax,(%esp)
 86abcae:	e8 93 91 b8 ff       	call   8234e46 <_ZN9CTimeGate26setBlindTimeGateStateQuestEi>
 86abcb3:	84 c0                	test   %al,%al
 86abcb5:	75 18                	jne    86abccf <_ZNK9UserQuest14get_quest_infoEPc+0x127>
 86abcb7:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86abcbb:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86abcbe:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86abcc1:	89 54 24 04          	mov    %edx,0x4(%esp)
 86abcc5:	89 04 24             	mov    %eax,(%esp)
 86abcc8:	e8 d7 e1 a2 ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 86abccd:	eb 01                	jmp    86abcd0 <_ZNK9UserQuest14get_quest_infoEPc+0x128>
 86abccf:	90                   	nop
 86abcd0:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86abcd3:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 86abcda:	00 
 86abcdb:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 86abcde:	89 54 24 04          	mov    %edx,0x4(%esp)
 86abce2:	89 04 24             	mov    %eax,(%esp)
 86abce5:	e8 e8 5e ce ff       	call   8391bd2 <_ZNSt14_List_iteratorIiEppEi>
 86abcea:	83 ec 04             	sub    $0x4,%esp
 86abced:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86abcf0:	8d 55 dc             	lea    -0x24(%ebp),%edx
 86abcf3:	89 54 24 04          	mov    %edx,0x4(%esp)
 86abcf7:	89 04 24             	mov    %eax,(%esp)
 86abcfa:	e8 3f 07 bc ff       	call   826c43e <_ZNSt4listIiSaIiEE3endEv>
 86abcff:	83 ec 04             	sub    $0x4,%esp
 86abd02:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86abd05:	89 44 24 04          	mov    %eax,0x4(%esp)
 86abd09:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 86abd0c:	89 04 24             	mov    %eax,(%esp)
 86abd0f:	e8 4e 07 bc ff       	call   826c462 <_ZNKSt14_List_iteratorIiEneERKS0_>
 86abd14:	84 c0                	test   %al,%al
 86abd16:	0f 85 73 ff ff ff    	jne    86abc8f <_ZNK9UserQuest14get_quest_infoEPc+0xe7>
 86abd1c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86abd1f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86abd22:	89 54 24 08          	mov    %edx,0x8(%esp)
 86abd26:	8d 55 d8             	lea    -0x28(%ebp),%edx
 86abd29:	89 54 24 04          	mov    %edx,0x4(%esp)
 86abd2d:	89 04 24             	mov    %eax,(%esp)
 86abd30:	e8 d3 ab a6 ff       	call   8116908 <_ZN18InterfacePacketBuf9put_shortERii>
 86abd35:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86abd38:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 86abd3f:	00 
 86abd40:	89 04 24             	mov    %eax,(%esp)
 86abd43:	e8 10 fc a1 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 86abd48:	eb 1b                	jmp    86abd65 <_ZNK9UserQuest14get_quest_infoEPc+0x1bd>
 86abd4a:	89 d3                	mov    %edx,%ebx
 86abd4c:	89 c6                	mov    %eax,%esi
 86abd4e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86abd51:	89 04 24             	mov    %eax,(%esp)
 86abd54:	e8 8f f0 b7 ff       	call   822ade8 <_ZNSt4listIiSaIiEED1Ev>
 86abd59:	89 f0                	mov    %esi,%eax
 86abd5b:	89 da                	mov    %ebx,%edx
 86abd5d:	89 04 24             	mov    %eax,(%esp)
 86abd60:	e8 eb 79 43 00       	call   8ae3750 <_Unwind_Resume>
 86abd65:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86abd68:	89 04 24             	mov    %eax,(%esp)
 86abd6b:	e8 78 f0 b7 ff       	call   822ade8 <_ZNSt4listIiSaIiEED1Ev>
 86abd70:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86abd73:	83 c4 00             	add    $0x0,%esp
 86abd76:	5b                   	pop    %ebx
 86abd77:	5e                   	pop    %esi
 86abd78:	5d                   	pop    %ebp
 86abd79:	c3                   	ret

```

```c
// UserQuest::get_quest_info @ 0x86abba8

/* UserQuest::get_quest_info(char*) const */

void __thiscall UserQuest::get_quest_info(UserQuest *this,char *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  stSelectQuestParam local_58 [36];
  int local_34;
  _List_iterator<int> local_30 [4];
  int local_2c;
  list<int,std::allocator<int>> local_28 [8];
  _List_iterator local_20 [4];
  _List_iterator<int> local_1c [4];
  InterfacePacketBuf *local_18;
  int local_14;
  int local_10;
  
  stSelectQuestParam::stSelectQuestParam(local_58,*(CUser **)this);
  local_18 = (InterfacePacketBuf *)param_1;
  InterfacePacketBuf::put_header((InterfacePacketBuf *)param_1,0,0x15);
  std::list<int,std::allocator<int>>::list(local_28);
                    /* try { // try from 086abbf6 to 086abd47 has its CatchHandler @ 086abd4a */
  iVar2 = G_CDataManager();
  QuestList::select_quest
            (*(QuestList **)(iVar2 + 0x18),(list *)local_28,local_58,(CQuestClear *)(this + 4));
  if (local_34 != -1) {
    std::list<int,std::allocator<int>>::push_back(local_28,&local_34);
  }
  iVar2 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
  InterfacePacketBuf::put_byte(local_18,iVar2);
  local_2c = InterfacePacketBuf::get_index(local_18);
  local_14 = 0;
  InterfacePacketBuf::put_short(local_18,0);
  std::list<int,std::allocator<int>>::begin();
  while( true ) {
    std::list<int,std::allocator<int>>::end();
    cVar1 = std::_List_iterator<int>::operator!=(local_30,local_20);
    if (cVar1 == '\0') break;
    piVar3 = (int *)std::_List_iterator<int>::operator*(local_30);
    local_10 = *piVar3;
    cVar1 = CTimeGate::setBlindTimeGateStateQuest(GlobalData::s_timeGate_,local_10);
    if (cVar1 == '\0') {
      local_14 = local_14 + 1;
      InterfacePacketBuf::put_short(local_18,local_10);
    }
    std::_List_iterator<int>::operator++(local_1c,(int)local_30);
  }
  InterfacePacketBuf::put_short(local_18,&local_2c,local_14);
  InterfacePacketBuf::finalize(local_18,true);
  std::list<int,std::allocator<int>>::~list(local_28);
  return;
}

```

---

## get_rescue_questmap

```asm
// === 086aca16 UserQuest::get_rescue_questmap  [0x086aca16-0x86acacf] ===
 86aca16:	55                   	push   %ebp
 86aca17:	89 e5                	mov    %esp,%ebp
 86aca19:	53                   	push   %ebx
 86aca1a:	83 ec 24             	sub    $0x24,%esp
 86aca1d:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 86aca24:	e9 8d 00 00 00       	jmp    86acab6 <_ZNK9UserQuest19get_rescue_questmapEi+0xa0>
 86aca29:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86aca2c:	8b 45 08             	mov    0x8(%ebp),%eax
 86aca2f:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86aca35:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86aca39:	85 c0                	test   %eax,%eax
 86aca3b:	7e 75                	jle    86acab2 <_ZNK9UserQuest19get_rescue_questmapEi+0x9c>
 86aca3d:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86aca40:	8b 45 08             	mov    0x8(%ebp),%eax
 86aca43:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86aca49:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86aca4d:	85 c0                	test   %eax,%eax
 86aca4f:	74 60                	je     86acab1 <_ZNK9UserQuest19get_rescue_questmapEi+0x9b>
 86aca51:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86aca54:	8b 45 08             	mov    0x8(%ebp),%eax
 86aca57:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86aca5d:	8b 5c 90 08          	mov    0x8(%eax,%edx,4),%ebx
 86aca61:	e8 35 f7 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86aca66:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86aca6a:	89 04 24             	mov    %eax,(%esp)
 86aca6d:	e8 54 33 cb ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 86aca72:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86aca75:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86aca79:	75 07                	jne    86aca82 <_ZNK9UserQuest19get_rescue_questmapEi+0x6c>
 86aca7b:	b8 00 00 00 00       	mov    $0x0,%eax
 86aca80:	eb 48                	jmp    86acaca <_ZNK9UserQuest19get_rescue_questmapEi+0xb4>
 86aca82:	8b 45 08             	mov    0x8(%ebp),%eax
 86aca85:	0f b7 80 da 75 00 00 	movzwl 0x75da(%eax),%eax
 86aca8c:	98                   	cwtl
 86aca8d:	89 44 24 08          	mov    %eax,0x8(%esp)
 86aca91:	8b 45 0c             	mov    0xc(%ebp),%eax
 86aca94:	89 44 24 04          	mov    %eax,0x4(%esp)
 86aca98:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86aca9b:	89 04 24             	mov    %eax,(%esp)
 86aca9e:	e8 4f 6c ca ff       	call   83536f2 <_ZNK5Quest13get_appearmapEii>
 86acaa3:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86acaa6:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86acaaa:	7e 06                	jle    86acab2 <_ZNK9UserQuest19get_rescue_questmapEi+0x9c>
 86acaac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86acaaf:	eb 19                	jmp    86acaca <_ZNK9UserQuest19get_rescue_questmapEi+0xb4>
 86acab1:	90                   	nop
 86acab2:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 86acab6:	83 7d ec 13          	cmpl   $0x13,-0x14(%ebp)
 86acaba:	0f 9e c0             	setle  %al
 86acabd:	84 c0                	test   %al,%al
 86acabf:	0f 85 64 ff ff ff    	jne    86aca29 <_ZNK9UserQuest19get_rescue_questmapEi+0x13>
 86acac5:	b8 00 00 00 00       	mov    $0x0,%eax
 86acaca:	83 c4 24             	add    $0x24,%esp
 86acacd:	5b                   	pop    %ebx
 86acace:	5d                   	pop    %ebp
 86acacf:	c3                   	ret

```

```c
// UserQuest::get_rescue_questmap @ 0x86aca16

/* UserQuest::get_rescue_questmap(int) const */

int __thiscall UserQuest::get_rescue_questmap(UserQuest *this,int param_1)

{
  int iVar1;
  Quest *this_00;
  int local_18;
  
  local_18 = 0;
  do {
    if (0x13 < local_18) {
      return 0;
    }
    if ((0 < *(int *)(this + (local_18 + 0x1d4c) * 4 + 8)) &&
       (*(int *)(this + (local_18 + 0x1d60) * 4 + 8) != 0)) {
      iVar1 = G_CDataManager();
      this_00 = (Quest *)CDataManager::find_quest(iVar1);
      if (this_00 == (Quest *)0x0) {
        return 0;
      }
      iVar1 = Quest::get_appearmap(this_00,param_1,(int)*(short *)(this + 0x75da));
      if (0 < iVar1) {
        return iVar1;
      }
    }
    local_18 = local_18 + 1;
  } while( true );
}

```

---

## giveup_quest

```asm
// === 086ac532 UserQuest::giveup_quest  [0x086ac532-0x86ac6ab] ===
 86ac532:	55                   	push   %ebp
 86ac533:	89 e5                	mov    %esp,%ebp
 86ac535:	83 ec 28             	sub    $0x28,%esp
 86ac538:	c7 45 e8 00 00 00 00 	movl   $0x0,-0x18(%ebp)
 86ac53f:	e9 52 01 00 00       	jmp    86ac696 <_ZN9UserQuest12giveup_questEi+0x164>
 86ac544:	8b 55 e8             	mov    -0x18(%ebp),%edx
 86ac547:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac54a:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ac550:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ac554:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86ac557:	0f 85 35 01 00 00    	jne    86ac692 <_ZN9UserQuest12giveup_questEi+0x160>
 86ac55d:	e8 39 fc a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ac562:	8b 55 0c             	mov    0xc(%ebp),%edx
 86ac565:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ac569:	89 04 24             	mov    %eax,(%esp)
 86ac56c:	e8 55 38 cb ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 86ac571:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86ac574:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86ac578:	0f 84 e5 00 00 00    	je     86ac663 <_ZN9UserQuest12giveup_questEi+0x131>
 86ac57e:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86ac581:	0f b6 80 20 01 00 00 	movzbl 0x120(%eax),%eax
 86ac588:	3c 01                	cmp    $0x1,%al
 86ac58a:	74 0e                	je     86ac59a <_ZN9UserQuest12giveup_questEi+0x68>
 86ac58c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86ac58f:	0f b6 80 20 01 00 00 	movzbl 0x120(%eax),%eax
 86ac596:	3c 02                	cmp    $0x2,%al
 86ac598:	75 79                	jne    86ac613 <_ZN9UserQuest12giveup_questEi+0xe1>
 86ac59a:	8b 55 e8             	mov    -0x18(%ebp),%edx
 86ac59d:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac5a0:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86ac5a6:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ac5aa:	85 c0                	test   %eax,%eax
 86ac5ac:	75 0a                	jne    86ac5b8 <_ZN9UserQuest12giveup_questEi+0x86>
 86ac5ae:	b8 12 00 00 00       	mov    $0x12,%eax
 86ac5b3:	e9 f2 00 00 00       	jmp    86ac6aa <_ZN9UserQuest12giveup_questEi+0x178>
 86ac5b8:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac5bb:	8b 00                	mov    (%eax),%eax
 86ac5bd:	89 04 24             	mov    %eax,(%esp)
 86ac5c0:	e8 c7 dd a2 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 86ac5c5:	83 f8 05             	cmp    $0x5,%eax
 86ac5c8:	0f 94 c0             	sete   %al
 86ac5cb:	84 c0                	test   %al,%al
 86ac5cd:	74 44                	je     86ac613 <_ZN9UserQuest12giveup_questEi+0xe1>
 86ac5cf:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac5d2:	8b 00                	mov    (%eax),%eax
 86ac5d4:	89 04 24             	mov    %eax,(%esp)
 86ac5d7:	e8 70 8b fa ff       	call   865514c <_ZN5CUser8GetPartyEv>
 86ac5dc:	89 45 f0             	mov    %eax,-0x10(%ebp)
 86ac5df:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 86ac5e3:	74 2e                	je     86ac613 <_ZN9UserQuest12giveup_questEi+0xe1>
 86ac5e5:	8b 45 f0             	mov    -0x10(%ebp),%eax
 86ac5e8:	05 24 0b 00 00       	add    $0xb24,%eax
 86ac5ed:	89 04 24             	mov    %eax,(%esp)
 86ac5f0:	e8 5d 0a b8 ff       	call   822d052 <_ZN13CBattle_Field7getMazeEv>
 86ac5f5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86ac5f8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86ac5fc:	74 15                	je     86ac613 <_ZN9UserQuest12giveup_questEi+0xe1>
 86ac5fe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ac601:	8b 40 50             	mov    0x50(%eax),%eax
 86ac604:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86ac607:	75 0a                	jne    86ac613 <_ZN9UserQuest12giveup_questEi+0xe1>
 86ac609:	b8 14 00 00 00       	mov    $0x14,%eax
 86ac60e:	e9 97 00 00 00       	jmp    86ac6aa <_ZN9UserQuest12giveup_questEi+0x178>
 86ac613:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86ac616:	8b 40 08             	mov    0x8(%eax),%eax
 86ac619:	83 f8 08             	cmp    $0x8,%eax
 86ac61c:	75 45                	jne    86ac663 <_ZN9UserQuest12giveup_questEi+0x131>
 86ac61e:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac621:	8b 00                	mov    (%eax),%eax
 86ac623:	89 04 24             	mov    %eax,(%esp)
 86ac626:	e8 8d dc a2 ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 86ac62b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 86ac62e:	8b 52 24             	mov    0x24(%edx),%edx
 86ac631:	39 d0                	cmp    %edx,%eax
 86ac633:	0f 9f c0             	setg   %al
 86ac636:	84 c0                	test   %al,%al
 86ac638:	74 0d                	je     86ac647 <_ZN9UserQuest12giveup_questEi+0x115>
 86ac63a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac63d:	c7 80 f0 75 00 00 ff 	movl   $0xffffffff,0x75f0(%eax)
 86ac644:	ff ff ff 
 86ac647:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac64a:	89 04 24             	mov    %eax,(%esp)
 86ac64d:	e8 14 0c 00 00       	call   86ad266 <_ZN9UserQuest12hasEpicQuestEv>
 86ac652:	84 c0                	test   %al,%al
 86ac654:	74 0d                	je     86ac663 <_ZN9UserQuest12giveup_questEi+0x131>
 86ac656:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac659:	c7 80 f0 75 00 00 ff 	movl   $0xffffffff,0x75f0(%eax)
 86ac660:	ff ff ff 
 86ac663:	8b 55 e8             	mov    -0x18(%ebp),%edx
 86ac666:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac669:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ac66f:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 86ac676:	00 
 86ac677:	8b 55 e8             	mov    -0x18(%ebp),%edx
 86ac67a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac67d:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86ac683:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 86ac68a:	00 
 86ac68b:	b8 00 00 00 00       	mov    $0x0,%eax
 86ac690:	eb 18                	jmp    86ac6aa <_ZN9UserQuest12giveup_questEi+0x178>
 86ac692:	83 45 e8 01          	addl   $0x1,-0x18(%ebp)
 86ac696:	83 7d e8 13          	cmpl   $0x13,-0x18(%ebp)
 86ac69a:	0f 9e c0             	setle  %al
 86ac69d:	84 c0                	test   %al,%al
 86ac69f:	0f 85 9f fe ff ff    	jne    86ac544 <_ZN9UserQuest12giveup_questEi+0x12>
 86ac6a5:	b8 13 00 00 00       	mov    $0x13,%eax
 86ac6aa:	c9                   	leave
 86ac6ab:	c3                   	ret

```

```c
// UserQuest::giveup_quest @ 0x86ac532

/* UserQuest::giveup_quest(int) */

undefined4 __thiscall UserQuest::giveup_quest(UserQuest *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_1c;
  
  local_1c = 0;
  while( true ) {
    if (0x13 < local_1c) {
      return 0x13;
    }
    if (*(int *)(this + (local_1c + 0x1d4c) * 4 + 8) == param_1) break;
    local_1c = local_1c + 1;
  }
  iVar2 = G_CDataManager();
  iVar2 = CDataManager::find_quest(iVar2);
  if (iVar2 != 0) {
    if ((*(char *)(iVar2 + 0x120) == '\x01') || (*(char *)(iVar2 + 0x120) == '\x02')) {
      if (*(int *)(this + (local_1c + 0x1d60) * 4 + 8) == 0) {
        return 0x12;
      }
      iVar3 = CUser::get_state(*(CUser **)this);
      if ((((iVar3 == 5) && (iVar3 = CUser::GetParty(*(CUser **)this), iVar3 != 0)) &&
          (iVar3 = CBattle_Field::getMaze((CBattle_Field *)(iVar3 + 0xb24)), iVar3 != 0)) &&
         (*(int *)(iVar3 + 0x50) == param_1)) {
        return 0x14;
      }
    }
    if (*(int *)(iVar2 + 8) == 8) {
      iVar3 = CUserCharacInfo::get_charac_level(*(CUserCharacInfo **)this);
      if (*(int *)(iVar2 + 0x24) < iVar3) {
        *(undefined4 *)(this + 0x75f0) = 0xffffffff;
      }
      cVar1 = hasEpicQuest(this);
      if (cVar1 != '\0') {
        *(undefined4 *)(this + 0x75f0) = 0xffffffff;
      }
    }
  }
  *(undefined4 *)(this + (local_1c + 0x1d4c) * 4 + 8) = 0;
  *(undefined4 *)(this + (local_1c + 0x1d60) * 4 + 8) = 0;
  return 0;
}

```

---

## hasEpicQuest

```asm
// === 086ad266 UserQuest::hasEpicQuest  [0x086ad266-0x86ad489] ===
 86ad266:	55                   	push   %ebp
 86ad267:	89 e5                	mov    %esp,%ebp
 86ad269:	56                   	push   %esi
 86ad26a:	53                   	push   %ebx
 86ad26b:	81 ec a0 75 00 00    	sub    $0x75a0,%esp
 86ad271:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad274:	8b 00                	mov    (%eax),%eax
 86ad276:	85 c0                	test   %eax,%eax
 86ad278:	75 0a                	jne    86ad284 <_ZN9UserQuest12hasEpicQuestEv+0x1e>
 86ad27a:	bb 00 00 00 00       	mov    $0x0,%ebx
 86ad27f:	e9 f9 01 00 00       	jmp    86ad47d <_ZN9UserQuest12hasEpicQuestEv+0x217>
 86ad284:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86ad287:	89 04 24             	mov    %eax,(%esp)
 86ad28a:	e8 47 85 b8 ff       	call   82357d6 <_ZNSt4listIiSaIiEEC1Ev>
 86ad28f:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad292:	8b 00                	mov    (%eax),%eax
 86ad294:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ad298:	8d 45 b0             	lea    -0x50(%ebp),%eax
 86ad29b:	89 04 24             	mov    %eax,(%esp)
 86ad29e:	e8 11 ae c9 ff       	call   83480b4 <_ZN18stSelectQuestParamC1EP5CUser>
 86ad2a3:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad2a6:	8b 00                	mov    (%eax),%eax
 86ad2a8:	89 04 24             	mov    %eax,(%esp)
 86ad2ab:	e8 f6 d5 ae ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 86ad2b0:	89 c2                	mov    %eax,%edx
 86ad2b2:	8d 85 7f 8a ff ff    	lea    -0x7581(%ebp),%eax
 86ad2b8:	8d 4a 04             	lea    0x4(%edx),%ecx
 86ad2bb:	ba 31 75 00 00       	mov    $0x7531,%edx
 86ad2c0:	89 54 24 08          	mov    %edx,0x8(%esp)
 86ad2c4:	89 4c 24 04          	mov    %ecx,0x4(%esp)
 86ad2c8:	89 04 24             	mov    %eax,(%esp)
 86ad2cb:	e8 d0 05 9d ff       	call   807d8a0 <memcpy@plt>
 86ad2d0:	e8 c6 ee a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ad2d5:	8b 40 18             	mov    0x18(%eax),%eax
 86ad2d8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86ad2df:	00 
 86ad2e0:	89 04 24             	mov    %eax,(%esp)
 86ad2e3:	e8 f0 87 ca ff       	call   8355ad8 <_ZN9QuestList15getQuestNPCListE16ENUM_QUEST_GRADE>
 86ad2e8:	89 c3                	mov    %eax,%ebx
 86ad2ea:	e8 ac ee a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ad2ef:	8b 40 18             	mov    0x18(%eax),%eax
 86ad2f2:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 86ad2f9:	00 
 86ad2fa:	8d 95 7f 8a ff ff    	lea    -0x7581(%ebp),%edx
 86ad300:	89 54 24 10          	mov    %edx,0x10(%esp)
 86ad304:	8d 55 b0             	lea    -0x50(%ebp),%edx
 86ad307:	89 54 24 0c          	mov    %edx,0xc(%esp)
 86ad30b:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86ad30f:	8d 55 dc             	lea    -0x24(%ebp),%edx
 86ad312:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ad316:	89 04 24             	mov    %eax,(%esp)
 86ad319:	e8 4e 82 ca ff       	call   835556c <_ZN9QuestList26allowable_questlist_as_npcERSt4listIiSaIiEERKSt8multimapIiiSt4lessIiESaISt4pairIKiiEEER18stSelectQuestParamRKN8WongWork11CQuestClearEb>
 86ad31e:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86ad321:	89 04 24             	mov    %eax,(%esp)
 86ad324:	e8 8d a0 b8 ff       	call   82373b6 <_ZNKSt4listIiSaIiEE5emptyEv>
 86ad329:	83 f0 01             	xor    $0x1,%eax
 86ad32c:	84 c0                	test   %al,%al
 86ad32e:	0f 84 f4 00 00 00    	je     86ad428 <_ZN9UserQuest12hasEpicQuestEv+0x1c2>
 86ad334:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 86ad338:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86ad33b:	8d 55 dc             	lea    -0x24(%ebp),%edx
 86ad33e:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ad342:	89 04 24             	mov    %eax,(%esp)
 86ad345:	e8 7e a0 b8 ff       	call   82373c8 <_ZNSt4listIiSaIiEE5beginEv>
 86ad34a:	83 ec 04             	sub    $0x4,%esp
 86ad34d:	e9 a7 00 00 00       	jmp    86ad3f9 <_ZN9UserQuest12hasEpicQuestEv+0x193>
 86ad352:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86ad355:	89 04 24             	mov    %eax,(%esp)
 86ad358:	e8 cd a0 b8 ff       	call   823742a <_ZNKSt14_List_iteratorIiEdeEv>
 86ad35d:	8b 18                	mov    (%eax),%ebx
 86ad35f:	e8 37 ee a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ad364:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86ad368:	89 04 24             	mov    %eax,(%esp)
 86ad36b:	e8 56 2a cb ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 86ad370:	89 45 ec             	mov    %eax,-0x14(%ebp)
 86ad373:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 86ad377:	74 71                	je     86ad3ea <_ZN9UserQuest12hasEpicQuestEv+0x184>
 86ad379:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 86ad37d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86ad384:	eb 2d                	jmp    86ad3b3 <_ZN9UserQuest12hasEpicQuestEv+0x14d>
 86ad386:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86ad389:	8d 90 44 01 00 00    	lea    0x144(%eax),%edx
 86ad38f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ad392:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ad396:	89 14 24             	mov    %edx,(%esp)
 86ad399:	e8 5a 04 00 00       	call   86ad7f8 <_ZNKSt6vectorI25ENUM_QUEST_EXCEPTION_TYPESaIS0_EEixEj>
 86ad39e:	8b 00                	mov    (%eax),%eax
 86ad3a0:	85 c0                	test   %eax,%eax
 86ad3a2:	0f 94 c0             	sete   %al
 86ad3a5:	84 c0                	test   %al,%al
 86ad3a7:	74 06                	je     86ad3af <_ZN9UserQuest12hasEpicQuestEv+0x149>
 86ad3a9:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 86ad3ad:	eb 1e                	jmp    86ad3cd <_ZN9UserQuest12hasEpicQuestEv+0x167>
 86ad3af:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86ad3b3:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86ad3b6:	05 44 01 00 00       	add    $0x144,%eax
 86ad3bb:	89 04 24             	mov    %eax,(%esp)
 86ad3be:	e8 5b 01 d0 ff       	call   83ad51e <_ZNKSt6vectorI25ENUM_QUEST_EXCEPTION_TYPESaIS0_EE4sizeEv>
 86ad3c3:	3b 45 f4             	cmp    -0xc(%ebp),%eax
 86ad3c6:	0f 97 c0             	seta   %al
 86ad3c9:	84 c0                	test   %al,%al
 86ad3cb:	75 b9                	jne    86ad386 <_ZN9UserQuest12hasEpicQuestEv+0x120>
 86ad3cd:	80 7d f3 00          	cmpb   $0x0,-0xd(%ebp)
 86ad3d1:	75 1a                	jne    86ad3ed <_ZN9UserQuest12hasEpicQuestEv+0x187>
 86ad3d3:	8b 55 b0             	mov    -0x50(%ebp),%edx
 86ad3d6:	8b 45 ec             	mov    -0x14(%ebp),%eax
 86ad3d9:	8b 40 20             	mov    0x20(%eax),%eax
 86ad3dc:	83 c0 0c             	add    $0xc,%eax
 86ad3df:	39 c2                	cmp    %eax,%edx
 86ad3e1:	7d 0b                	jge    86ad3ee <_ZN9UserQuest12hasEpicQuestEv+0x188>
 86ad3e3:	bb 01 00 00 00       	mov    $0x1,%ebx
 86ad3e8:	eb 5d                	jmp    86ad447 <_ZN9UserQuest12hasEpicQuestEv+0x1e1>
 86ad3ea:	90                   	nop
 86ad3eb:	eb 01                	jmp    86ad3ee <_ZN9UserQuest12hasEpicQuestEv+0x188>
 86ad3ed:	90                   	nop
 86ad3ee:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86ad3f1:	89 04 24             	mov    %eax,(%esp)
 86ad3f4:	e8 e5 ff b8 ff       	call   823d3de <_ZNSt14_List_iteratorIiEppEv>
 86ad3f9:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ad3fc:	8d 55 dc             	lea    -0x24(%ebp),%edx
 86ad3ff:	89 54 24 04          	mov    %edx,0x4(%esp)
 86ad403:	89 04 24             	mov    %eax,(%esp)
 86ad406:	e8 33 f0 bb ff       	call   826c43e <_ZNSt4listIiSaIiEE3endEv>
 86ad40b:	83 ec 04             	sub    $0x4,%esp
 86ad40e:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ad411:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ad415:	8d 45 d8             	lea    -0x28(%ebp),%eax
 86ad418:	89 04 24             	mov    %eax,(%esp)
 86ad41b:	e8 42 f0 bb ff       	call   826c462 <_ZNKSt14_List_iteratorIiEneERKS0_>
 86ad420:	84 c0                	test   %al,%al
 86ad422:	0f 85 2a ff ff ff    	jne    86ad352 <_ZN9UserQuest12hasEpicQuestEv+0xec>
 86ad428:	bb 00 00 00 00       	mov    $0x0,%ebx
 86ad42d:	eb 18                	jmp    86ad447 <_ZN9UserQuest12hasEpicQuestEv+0x1e1>
 86ad42f:	89 d3                	mov    %edx,%ebx
 86ad431:	89 c6                	mov    %eax,%esi
 86ad433:	8d 85 7f 8a ff ff    	lea    -0x7581(%ebp),%eax
 86ad439:	89 04 24             	mov    %eax,(%esp)
 86ad43c:	e8 8b 10 b8 ff       	call   822e4cc <_ZN8WongWork11CQuestClearD1Ev>
 86ad441:	89 f0                	mov    %esi,%eax
 86ad443:	89 da                	mov    %ebx,%edx
 86ad445:	eb 1b                	jmp    86ad462 <_ZN9UserQuest12hasEpicQuestEv+0x1fc>
 86ad447:	8d 85 7f 8a ff ff    	lea    -0x7581(%ebp),%eax
 86ad44d:	89 04 24             	mov    %eax,(%esp)
 86ad450:	e8 77 10 b8 ff       	call   822e4cc <_ZN8WongWork11CQuestClearD1Ev>
 86ad455:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86ad458:	89 04 24             	mov    %eax,(%esp)
 86ad45b:	e8 88 d9 b7 ff       	call   822ade8 <_ZNSt4listIiSaIiEED1Ev>
 86ad460:	eb 1b                	jmp    86ad47d <_ZN9UserQuest12hasEpicQuestEv+0x217>
 86ad462:	89 d3                	mov    %edx,%ebx
 86ad464:	89 c6                	mov    %eax,%esi
 86ad466:	8d 45 dc             	lea    -0x24(%ebp),%eax
 86ad469:	89 04 24             	mov    %eax,(%esp)
 86ad46c:	e8 77 d9 b7 ff       	call   822ade8 <_ZNSt4listIiSaIiEED1Ev>
 86ad471:	89 f0                	mov    %esi,%eax
 86ad473:	89 da                	mov    %ebx,%edx
 86ad475:	89 04 24             	mov    %eax,(%esp)
 86ad478:	e8 d3 62 43 00       	call   8ae3750 <_Unwind_Resume>
 86ad47d:	89 d8                	mov    %ebx,%eax
 86ad47f:	8d 65 f8             	lea    -0x8(%ebp),%esp
 86ad482:	83 c4 00             	add    $0x0,%esp
 86ad485:	5b                   	pop    %ebx
 86ad486:	5e                   	pop    %esi
 86ad487:	5d                   	pop    %ebp
 86ad488:	c3                   	ret
 86ad489:	90                   	nop

```

```c
// UserQuest::hasEpicQuest @ 0x86ad266

/* UserQuest::hasEpicQuest() */

undefined4 __thiscall UserQuest::hasEpicQuest(UserQuest *this)

{
  char cVar1;
  int iVar2;
  multimap *pmVar3;
  int *piVar4;
  uint uVar5;
  undefined4 uVar6;
  CQuestClear local_7585 [30001];
  int local_54 [10];
  _List_iterator<int> local_2c [4];
  list<int,std::allocator<int>> local_28 [8];
  _List_iterator local_20 [7];
  undefined1 local_19;
  int local_18;
  char local_11;
  uint local_10;
  
  if (*(int *)this == 0) {
    uVar6 = 0;
  }
  else {
    std::list<int,std::allocator<int>>::list(local_28);
                    /* try { // try from 086ad29e to 086ad2a2 has its CatchHandler @ 086ad462 */
    stSelectQuestParam::stSelectQuestParam((stSelectQuestParam *)local_54,*(CUser **)this);
    iVar2 = CUser::getCurCharacQuestR(*(CUser **)this);
    memcpy(local_7585,(void *)(iVar2 + 4),0x7531);
                    /* try { // try from 086ad2d0 to 086ad40a has its CatchHandler @ 086ad42f */
    iVar2 = G_CDataManager();
    pmVar3 = (multimap *)QuestList::getQuestNPCList(*(QuestList **)(iVar2 + 0x18),0);
    iVar2 = G_CDataManager();
    QuestList::allowable_questlist_as_npc
              (*(QuestList **)(iVar2 + 0x18),(list *)local_28,pmVar3,(stSelectQuestParam *)local_54,
               local_7585,false);
    cVar1 = std::list<int,std::allocator<int>>::empty(local_28);
    if (cVar1 != '\x01') {
      local_19 = 0;
      std::list<int,std::allocator<int>>::begin();
      while( true ) {
        std::list<int,std::allocator<int>>::end();
        cVar1 = std::_List_iterator<int>::operator!=(local_2c,local_20);
        if (cVar1 == '\0') break;
        std::_List_iterator<int>::operator*(local_2c);
        iVar2 = G_CDataManager();
        local_18 = CDataManager::find_quest(iVar2);
        if (local_18 != 0) {
          local_11 = '\0';
          local_10 = 0;
          while (uVar5 = std::
                         vector<ENUM_QUEST_EXCEPTION_TYPE,std::allocator<ENUM_QUEST_EXCEPTION_TYPE>>
                         ::size((vector<ENUM_QUEST_EXCEPTION_TYPE,std::allocator<ENUM_QUEST_EXCEPTION_TYPE>>
                                 *)(local_18 + 0x144)), local_10 < uVar5) {
            piVar4 = (int *)std::
                            vector<ENUM_QUEST_EXCEPTION_TYPE,std::allocator<ENUM_QUEST_EXCEPTION_TYPE>>
                            ::operator[]((vector<ENUM_QUEST_EXCEPTION_TYPE,std::allocator<ENUM_QUEST_EXCEPTION_TYPE>>
                                          *)(local_18 + 0x144),local_10);
            if (*piVar4 == 0) {
              local_11 = '\x01';
              break;
            }
            local_10 = local_10 + 1;
          }
          if ((local_11 == '\0') && (local_54[0] < *(int *)(local_18 + 0x20) + 0xc)) {
            uVar6 = 1;
            goto LAB_086ad447;
          }
        }
        std::_List_iterator<int>::operator++(local_2c);
      }
    }
    uVar6 = 0;
LAB_086ad447:
    WongWork::CQuestClear::~CQuestClear(local_7585);
    std::list<int,std::allocator<int>>::~list(local_28);
  }
  return uVar6;
}

```

---

## isClearQuest

```asm
// === 086ab920 UserQuest::isClearQuest  [0x086ab920-0x86ab93d] ===
 86ab920:	55                   	push   %ebp
 86ab921:	89 e5                	mov    %esp,%ebp
 86ab923:	83 ec 18             	sub    $0x18,%esp
 86ab926:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ab929:	8b 55 08             	mov    0x8(%ebp),%edx
 86ab92c:	83 c2 04             	add    $0x4,%edx
 86ab92f:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ab933:	89 14 24             	mov    %edx,(%esp)
 86ab936:	e8 a5 01 9e ff       	call   808bae0 <_ZNK8WongWork11CQuestClear14isClearedQuestEj>
 86ab93b:	c9                   	leave
 86ab93c:	c3                   	ret
 86ab93d:	90                   	nop

```

```c
// UserQuest::isClearQuest @ 0x86ab920

/* UserQuest::isClearQuest(int) const */

void __thiscall UserQuest::isClearQuest(UserQuest *this,int param_1)

{
  WongWork::CQuestClear::isClearedQuest((CQuestClear *)(this + 4),param_1);
  return;
}

```

---

## isDoingJobChangeQuest

```asm
// === 086ad48a UserQuest::isDoingJobChangeQuest  [0x086ad48a-0x86ad50e] ===
 86ad48a:	55                   	push   %ebp
 86ad48b:	89 e5                	mov    %esp,%ebp
 86ad48d:	53                   	push   %ebx
 86ad48e:	83 ec 24             	sub    $0x24,%esp
 86ad491:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86ad498:	eb 5f                	jmp    86ad4f9 <_ZNK9UserQuest21isDoingJobChangeQuestEv+0x6f>
 86ad49a:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ad49d:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad4a0:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ad4a6:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ad4aa:	85 c0                	test   %eax,%eax
 86ad4ac:	74 47                	je     86ad4f5 <_ZNK9UserQuest21isDoingJobChangeQuestEv+0x6b>
 86ad4ae:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ad4b1:	8b 45 08             	mov    0x8(%ebp),%eax
 86ad4b4:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ad4ba:	8b 5c 90 08          	mov    0x8(%eax,%edx,4),%ebx
 86ad4be:	e8 d8 ec a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ad4c3:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86ad4c7:	89 04 24             	mov    %eax,(%esp)
 86ad4ca:	e8 f7 28 cb ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 86ad4cf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86ad4d2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86ad4d6:	74 1d                	je     86ad4f5 <_ZNK9UserQuest21isDoingJobChangeQuestEv+0x6b>
 86ad4d8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ad4db:	8b 40 1c             	mov    0x1c(%eax),%eax
 86ad4de:	83 f8 01             	cmp    $0x1,%eax
 86ad4e1:	74 0b                	je     86ad4ee <_ZNK9UserQuest21isDoingJobChangeQuestEv+0x64>
 86ad4e3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ad4e6:	8b 40 1c             	mov    0x1c(%eax),%eax
 86ad4e9:	83 f8 02             	cmp    $0x2,%eax
 86ad4ec:	75 07                	jne    86ad4f5 <_ZNK9UserQuest21isDoingJobChangeQuestEv+0x6b>
 86ad4ee:	b8 01 00 00 00       	mov    $0x1,%eax
 86ad4f3:	eb 14                	jmp    86ad509 <_ZNK9UserQuest21isDoingJobChangeQuestEv+0x7f>
 86ad4f5:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86ad4f9:	83 7d f0 13          	cmpl   $0x13,-0x10(%ebp)
 86ad4fd:	0f 9e c0             	setle  %al
 86ad500:	84 c0                	test   %al,%al
 86ad502:	75 96                	jne    86ad49a <_ZNK9UserQuest21isDoingJobChangeQuestEv+0x10>
 86ad504:	b8 00 00 00 00       	mov    $0x0,%eax
 86ad509:	83 c4 24             	add    $0x24,%esp
 86ad50c:	5b                   	pop    %ebx
 86ad50d:	5d                   	pop    %ebp
 86ad50e:	c3                   	ret

```

```c
// UserQuest::isDoingJobChangeQuest @ 0x86ad48a

/* UserQuest::isDoingJobChangeQuest() const */

undefined4 __thiscall UserQuest::isDoingJobChangeQuest(UserQuest *this)

{
  int iVar1;
  int local_14;
  
  local_14 = 0;
  do {
    if (0x13 < local_14) {
      return 0;
    }
    if (*(int *)(this + (local_14 + 0x1d4c) * 4 + 8) != 0) {
      iVar1 = G_CDataManager();
      iVar1 = CDataManager::find_quest(iVar1);
      if ((iVar1 != 0) && ((*(int *)(iVar1 + 0x1c) == 1 || (*(int *)(iVar1 + 0x1c) == 2)))) {
        return 1;
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## item_reward_quest

```asm
// === 086ac954 UserQuest::item_reward_quest  [0x086ac954-0x86aca15] ===
 86ac954:	55                   	push   %ebp
 86ac955:	89 e5                	mov    %esp,%ebp
 86ac957:	53                   	push   %ebx
 86ac958:	83 ec 24             	sub    $0x24,%esp
 86ac95b:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86ac962:	e9 95 00 00 00       	jmp    86ac9fc <_ZNK9UserQuest17item_reward_questEi+0xa8>
 86ac967:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ac96a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac96d:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ac973:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ac977:	85 c0                	test   %eax,%eax
 86ac979:	74 7d                	je     86ac9f8 <_ZNK9UserQuest17item_reward_questEi+0xa4>
 86ac97b:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ac97e:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac981:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86ac987:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ac98b:	85 c0                	test   %eax,%eax
 86ac98d:	74 68                	je     86ac9f7 <_ZNK9UserQuest17item_reward_questEi+0xa3>
 86ac98f:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ac992:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac995:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ac99b:	8b 5c 90 08          	mov    0x8(%eax,%edx,4),%ebx
 86ac99f:	e8 f7 f7 a1 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ac9a4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86ac9a8:	89 04 24             	mov    %eax,(%esp)
 86ac9ab:	e8 16 34 cb ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 86ac9b0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86ac9b3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86ac9b7:	75 07                	jne    86ac9c0 <_ZNK9UserQuest17item_reward_questEi+0x6c>
 86ac9b9:	b8 00 00 00 00       	mov    $0x0,%eax
 86ac9be:	eb 50                	jmp    86aca10 <_ZNK9UserQuest17item_reward_questEi+0xbc>
 86ac9c0:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac9c3:	0f b7 80 da 75 00 00 	movzwl 0x75da(%eax),%eax
 86ac9ca:	98                   	cwtl
 86ac9cb:	89 44 24 08          	mov    %eax,0x8(%esp)
 86ac9cf:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ac9d2:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ac9d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ac9d9:	89 04 24             	mov    %eax,(%esp)
 86ac9dc:	e8 61 69 ca ff       	call   8353342 <_ZNK5Quest16check_clear_itemEii>
 86ac9e1:	84 c0                	test   %al,%al
 86ac9e3:	74 13                	je     86ac9f8 <_ZNK9UserQuest17item_reward_questEi+0xa4>
 86ac9e5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ac9e8:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac9eb:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ac9f1:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ac9f5:	eb 19                	jmp    86aca10 <_ZNK9UserQuest17item_reward_questEi+0xbc>
 86ac9f7:	90                   	nop
 86ac9f8:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86ac9fc:	83 7d f0 13          	cmpl   $0x13,-0x10(%ebp)
 86aca00:	0f 9e c0             	setle  %al
 86aca03:	84 c0                	test   %al,%al
 86aca05:	0f 85 5c ff ff ff    	jne    86ac967 <_ZNK9UserQuest17item_reward_questEi+0x13>
 86aca0b:	b8 00 00 00 00       	mov    $0x0,%eax
 86aca10:	83 c4 24             	add    $0x24,%esp
 86aca13:	5b                   	pop    %ebx
 86aca14:	5d                   	pop    %ebp
 86aca15:	c3                   	ret

```

```c
// UserQuest::item_reward_quest @ 0x86ac954

/* UserQuest::item_reward_quest(int) const */

undefined4 __thiscall UserQuest::item_reward_quest(UserQuest *this,int param_1)

{
  char cVar1;
  int iVar2;
  Quest *this_00;
  int local_14;
  
  local_14 = 0;
  do {
    if (0x13 < local_14) {
      return 0;
    }
    if ((*(int *)(this + (local_14 + 0x1d4c) * 4 + 8) != 0) &&
       (*(int *)(this + (local_14 + 0x1d60) * 4 + 8) != 0)) {
      iVar2 = G_CDataManager();
      this_00 = (Quest *)CDataManager::find_quest(iVar2);
      if (this_00 == (Quest *)0x0) {
        return 0;
      }
      cVar1 = Quest::check_clear_item(this_00,param_1,(int)*(short *)(this + 0x75da));
      if (cVar1 != '\0') {
        return *(undefined4 *)(this + (local_14 + 0x1d4c) * 4 + 8);
      }
    }
    local_14 = local_14 + 1;
  } while( true );
}

```

---

## reset

```asm
// === 086ab894 UserQuest::reset  [0x086ab894-0x86ab91f] ===
 86ab894:	55                   	push   %ebp
 86ab895:	89 e5                	mov    %esp,%ebp
 86ab897:	83 ec 28             	sub    $0x28,%esp
 86ab89a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ab89d:	c7 00 00 00 00 00    	movl   $0x0,(%eax)
 86ab8a3:	8b 45 08             	mov    0x8(%ebp),%eax
 86ab8a6:	83 c0 04             	add    $0x4,%eax
 86ab8a9:	89 04 24             	mov    %eax,(%esp)
 86ab8ac:	e8 55 02 9e ff       	call   808bb06 <_ZN8WongWork11CQuestClear5clearEv>
 86ab8b1:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86ab8b8:	eb 2c                	jmp    86ab8e6 <_ZN9UserQuest5resetEv+0x52>
 86ab8ba:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86ab8bd:	8b 45 08             	mov    0x8(%ebp),%eax
 86ab8c0:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ab8c6:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 86ab8cd:	00 
 86ab8ce:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86ab8d1:	8b 45 08             	mov    0x8(%ebp),%eax
 86ab8d4:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86ab8da:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 86ab8e1:	00 
 86ab8e2:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86ab8e6:	83 7d f4 13          	cmpl   $0x13,-0xc(%ebp)
 86ab8ea:	0f 9e c0             	setle  %al
 86ab8ed:	84 c0                	test   %al,%al
 86ab8ef:	75 c9                	jne    86ab8ba <_ZN9UserQuest5resetEv+0x26>
 86ab8f1:	8b 45 08             	mov    0x8(%ebp),%eax
 86ab8f4:	c7 80 f0 75 00 00 ff 	movl   $0xffffffff,0x75f0(%eax)
 86ab8fb:	ff ff ff 
 86ab8fe:	8b 45 08             	mov    0x8(%ebp),%eax
 86ab901:	05 f4 75 00 00       	add    $0x75f4,%eax
 86ab906:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 86ab90d:	00 
 86ab90e:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86ab915:	00 
 86ab916:	89 04 24             	mov    %eax,(%esp)
 86ab919:	e8 a2 23 9d ff       	call   807dcc0 <memset@plt>
 86ab91e:	c9                   	leave
 86ab91f:	c3                   	ret

```

```c
// UserQuest::reset @ 0x86ab894

/* UserQuest::reset() */

void __thiscall UserQuest::reset(UserQuest *this)

{
  int local_10;
  
  *(undefined4 *)this = 0;
  WongWork::CQuestClear::clear((CQuestClear *)(this + 4));
  for (local_10 = 0; local_10 < 0x14; local_10 = local_10 + 1) {
    *(undefined4 *)(this + (local_10 + 0x1d4c) * 4 + 8) = 0;
    *(undefined4 *)(this + (local_10 + 0x1d60) * 4 + 8) = 0;
  }
  *(undefined4 *)(this + 0x75f0) = 0xffffffff;
  memset(this + 0x75f4,0,0x28);
  return;
}

```

---

## resetClearQuest

```asm
// === 086ab93e UserQuest::resetClearQuest  [0x086ab93e-0x86ab95b] ===
 86ab93e:	55                   	push   %ebp
 86ab93f:	89 e5                	mov    %esp,%ebp
 86ab941:	83 ec 18             	sub    $0x18,%esp
 86ab944:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ab947:	8b 55 08             	mov    0x8(%ebp),%edx
 86ab94a:	83 c2 04             	add    $0x4,%edx
 86ab94d:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ab951:	89 14 24             	mov    %edx,(%esp)
 86ab954:	e8 53 01 9e ff       	call   808baac <_ZN8WongWork11CQuestClear18resetClearedQuestsEj>
 86ab959:	c9                   	leave
 86ab95a:	c3                   	ret
 86ab95b:	90                   	nop

```

```c
// UserQuest::resetClearQuest @ 0x86ab93e

/* UserQuest::resetClearQuest(int) */

void __thiscall UserQuest::resetClearQuest(UserQuest *this,int param_1)

{
  WongWork::CQuestClear::resetClearedQuests((CQuestClear *)(this + 4),param_1);
  return;
}

```

---

## set_authen_data

```asm
// === 086abdb0 UserQuest::set_authen_data  [0x086abdb0-0x86abe30] ===
 86abdb0:	55                   	push   %ebp
 86abdb1:	89 e5                	mov    %esp,%ebp
 86abdb3:	8b 45 0c             	mov    0xc(%ebp),%eax
 86abdb6:	83 f8 05             	cmp    $0x5,%eax
 86abdb9:	77 74                	ja     86abe2f <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii+0x7f>
 86abdbb:	8b 04 85 fc 39 cf 08 	mov    0x8cf39fc(,%eax,4),%eax
 86abdc2:	ff e0                	jmp    *%eax
 86abdc4:	8b 45 10             	mov    0x10(%ebp),%eax
 86abdc7:	89 c2                	mov    %eax,%edx
 86abdc9:	8b 45 08             	mov    0x8(%ebp),%eax
 86abdcc:	66 89 90 d8 75 00 00 	mov    %dx,0x75d8(%eax)
 86abdd3:	8b 45 14             	mov    0x14(%ebp),%eax
 86abdd6:	89 c2                	mov    %eax,%edx
 86abdd8:	8b 45 08             	mov    0x8(%ebp),%eax
 86abddb:	66 89 90 da 75 00 00 	mov    %dx,0x75da(%eax)
 86abde2:	eb 4b                	jmp    86abe2f <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii+0x7f>
 86abde4:	8b 45 10             	mov    0x10(%ebp),%eax
 86abde7:	89 c2                	mov    %eax,%edx
 86abde9:	8b 45 08             	mov    0x8(%ebp),%eax
 86abdec:	66 89 90 dc 75 00 00 	mov    %dx,0x75dc(%eax)
 86abdf3:	eb 3a                	jmp    86abe2f <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii+0x7f>
 86abdf5:	8b 45 08             	mov    0x8(%ebp),%eax
 86abdf8:	8b 55 10             	mov    0x10(%ebp),%edx
 86abdfb:	89 90 e0 75 00 00    	mov    %edx,0x75e0(%eax)
 86abe01:	eb 2c                	jmp    86abe2f <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii+0x7f>
 86abe03:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 86abe07:	0f 95 c2             	setne  %dl
 86abe0a:	8b 45 08             	mov    0x8(%ebp),%eax
 86abe0d:	88 90 e4 75 00 00    	mov    %dl,0x75e4(%eax)
 86abe13:	eb 1a                	jmp    86abe2f <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii+0x7f>
 86abe15:	8b 45 08             	mov    0x8(%ebp),%eax
 86abe18:	8b 55 10             	mov    0x10(%ebp),%edx
 86abe1b:	89 90 e8 75 00 00    	mov    %edx,0x75e8(%eax)
 86abe21:	eb 0c                	jmp    86abe2f <_ZN9UserQuest15set_authen_dataE15QUEST_CONDITIONii+0x7f>
 86abe23:	8b 45 08             	mov    0x8(%ebp),%eax
 86abe26:	8b 55 10             	mov    0x10(%ebp),%edx
 86abe29:	89 90 ec 75 00 00    	mov    %edx,0x75ec(%eax)
 86abe2f:	5d                   	pop    %ebp
 86abe30:	c3                   	ret

```

```c
// UserQuest::set_authen_data @ 0x86abdb0

/* UserQuest::set_authen_data(QUEST_CONDITION, int, int) */

void __thiscall
UserQuest::set_authen_data(UserQuest *this,undefined4 param_2,int param_3,undefined2 param_4)

{
  switch(param_2) {
  case 0:
    *(short *)(this + 0x75d8) = (short)param_3;
    *(undefined2 *)(this + 0x75da) = param_4;
    break;
  case 1:
    *(short *)(this + 0x75dc) = (short)param_3;
    break;
  case 2:
    *(int *)(this + 0x75e0) = param_3;
    break;
  case 3:
    this[0x75e4] = (UserQuest)(param_3 != 0);
    break;
  case 4:
    *(int *)(this + 0x75e8) = param_3;
    break;
  case 5:
    *(int *)(this + 0x75ec) = param_3;
  }
  return;
}

```

---

## set_quest

```asm
// === 086ab95c UserQuest::set_quest  [0x086ab95c-0x86abad5] ===
 86ab95c:	55                   	push   %ebp
 86ab95d:	89 e5                	mov    %esp,%ebp
 86ab95f:	56                   	push   %esi
 86ab960:	53                   	push   %ebx
 86ab961:	83 ec 30             	sub    $0x30,%esp
 86ab964:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 86ab96b:	e9 f8 00 00 00       	jmp    86aba68 <_ZN9UserQuest9set_questEPK14SIG_LOAD_QUEST+0x10c>
 86ab970:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 86ab973:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ab976:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ab979:	8b 54 90 0c          	mov    0xc(%eax,%edx,4),%edx
 86ab97d:	8b 45 08             	mov    0x8(%ebp),%eax
 86ab980:	81 c1 4c 1d 00 00    	add    $0x1d4c,%ecx
 86ab986:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 86ab98a:	8b 4d f0             	mov    -0x10(%ebp),%ecx
 86ab98d:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ab990:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ab993:	83 c2 14             	add    $0x14,%edx
 86ab996:	8b 54 90 0c          	mov    0xc(%eax,%edx,4),%edx
 86ab99a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ab99d:	81 c1 60 1d 00 00    	add    $0x1d60,%ecx
 86ab9a3:	89 54 88 08          	mov    %edx,0x8(%eax,%ecx,4)
 86ab9a7:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ab9aa:	8b 45 08             	mov    0x8(%ebp),%eax
 86ab9ad:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ab9b3:	8b 5c 90 08          	mov    0x8(%eax,%edx,4),%ebx
 86ab9b7:	e8 df 07 a2 ff       	call   80cc19b <_Z14G_CDataManagerv>
 86ab9bc:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 86ab9c0:	89 04 24             	mov    %eax,(%esp)
 86ab9c3:	e8 fe 43 cb ff       	call   835fdc6 <_ZNK12CDataManager10find_questEi>
 86ab9c8:	89 45 f4             	mov    %eax,-0xc(%ebp)
 86ab9cb:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 86ab9cf:	0f 85 8f 00 00 00    	jne    86aba64 <_ZN9UserQuest9set_questEPK14SIG_LOAD_QUEST+0x108>
 86ab9d5:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ab9d8:	8b 45 08             	mov    0x8(%ebp),%eax
 86ab9db:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ab9e1:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ab9e5:	85 c0                	test   %eax,%eax
 86ab9e7:	74 7b                	je     86aba64 <_ZN9UserQuest9set_questEPK14SIG_LOAD_QUEST+0x108>
 86ab9e9:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ab9ec:	8b 30                	mov    (%eax),%esi
 86ab9ee:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86ab9f1:	8b 45 08             	mov    0x8(%ebp),%eax
 86ab9f4:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ab9fa:	8b 5c 90 08          	mov    0x8(%eax,%edx,4),%ebx
 86ab9fe:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 86aba05:	00 
 86aba06:	c7 44 24 08 42 00 00 	movl   $0x42,0x8(%esp)
 86aba0d:	00 
 86aba0e:	c7 44 24 04 e0 47 cf 	movl   $0x8cf47e0,0x4(%esp)
 86aba15:	08 
 86aba16:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86aba19:	89 04 24             	mov    %eax,(%esp)
 86aba1c:	e8 f7 3c ea ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 86aba21:	89 74 24 0c          	mov    %esi,0xc(%esp)
 86aba25:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86aba29:	c7 44 24 04 c0 39 cf 	movl   $0x8cf39c0,0x4(%esp)
 86aba30:	08 
 86aba31:	8d 45 e0             	lea    -0x20(%ebp),%eax
 86aba34:	89 04 24             	mov    %eax,(%esp)
 86aba37:	e8 4c 3d ea ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 86aba3c:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86aba3f:	8b 45 08             	mov    0x8(%ebp),%eax
 86aba42:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86aba48:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 86aba4f:	00 
 86aba50:	8b 55 f0             	mov    -0x10(%ebp),%edx
 86aba53:	8b 45 08             	mov    0x8(%ebp),%eax
 86aba56:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86aba5c:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 86aba63:	00 
 86aba64:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 86aba68:	83 7d f0 13          	cmpl   $0x13,-0x10(%ebp)
 86aba6c:	0f 9e c0             	setle  %al
 86aba6f:	84 c0                	test   %al,%al
 86aba71:	0f 85 f9 fe ff ff    	jne    86ab970 <_ZN9UserQuest9set_questEPK14SIG_LOAD_QUEST+0x14>
 86aba77:	8b 45 0c             	mov    0xc(%ebp),%eax
 86aba7a:	8d 90 b0 00 00 00    	lea    0xb0(%eax),%edx
 86aba80:	8b 45 08             	mov    0x8(%ebp),%eax
 86aba83:	83 c0 04             	add    $0x4,%eax
 86aba86:	89 54 24 04          	mov    %edx,0x4(%esp)
 86aba8a:	89 04 24             	mov    %eax,(%esp)
 86aba8d:	e8 cc 00 9e ff       	call   808bb5e <_ZN8WongWork11CQuestClear15setClearedQuestEPKNS_14STClearedQuestE>
 86aba92:	8b 45 0c             	mov    0xc(%ebp),%eax
 86aba95:	8b 90 ac 00 00 00    	mov    0xac(%eax),%edx
 86aba9b:	8b 45 08             	mov    0x8(%ebp),%eax
 86aba9e:	89 90 f0 75 00 00    	mov    %edx,0x75f0(%eax)
 86abaa4:	8b 45 0c             	mov    0xc(%ebp),%eax
 86abaa7:	8d 90 e0 75 00 00    	lea    0x75e0(%eax),%edx
 86abaad:	8b 45 08             	mov    0x8(%ebp),%eax
 86abab0:	05 f4 75 00 00       	add    $0x75f4,%eax
 86abab5:	c7 44 24 08 28 00 00 	movl   $0x28,0x8(%esp)
 86ababc:	00 
 86ababd:	89 54 24 04          	mov    %edx,0x4(%esp)
 86abac1:	89 04 24             	mov    %eax,(%esp)
 86abac4:	e8 d7 1d 9d ff       	call   807d8a0 <memcpy@plt>
 86abac9:	b8 01 00 00 00       	mov    $0x1,%eax
 86abace:	83 c4 30             	add    $0x30,%esp
 86abad1:	5b                   	pop    %ebx
 86abad2:	5e                   	pop    %esi
 86abad3:	5d                   	pop    %ebp
 86abad4:	c3                   	ret
 86abad5:	90                   	nop

```

```c
// UserQuest::set_quest @ 0x86ab95c

/* UserQuest::set_quest(SIG_LOAD_QUEST const*) */

undefined4 __thiscall UserQuest::set_quest(UserQuest *this,SIG_LOAD_QUEST *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  for (local_14 = 0; local_14 < 0x14; local_14 = local_14 + 1) {
    *(undefined4 *)(this + (local_14 + 0x1d4c) * 4 + 8) =
         *(undefined4 *)(param_1 + local_14 * 4 + 0xc);
    *(undefined4 *)(this + (local_14 + 0x1d60) * 4 + 8) =
         *(undefined4 *)(param_1 + (local_14 + 0x14) * 4 + 0xc);
    iVar3 = G_CDataManager();
    local_10 = CDataManager::find_quest(iVar3);
    if ((local_10 == 0) && (*(int *)(this + (local_14 + 0x1d4c) * 4 + 8) != 0)) {
      uVar1 = *(undefined4 *)param_1;
      uVar2 = *(undefined4 *)(this + (local_14 + 0x1d4c) * 4 + 8);
      cMyTrace::cMyTrace(local_24,"bool UserQuest::set_quest(const SIG_LOAD_QUEST*)",0x42,0);
      cMyTrace::operator()
                (local_24,"VERIFY_QUEST : ABNOMAL QUEST INDEX (%d) : CHARAC_NO (%u)",uVar2,uVar1);
      *(undefined4 *)(this + (local_14 + 0x1d4c) * 4 + 8) = 0;
      *(undefined4 *)(this + (local_14 + 0x1d60) * 4 + 8) = 0;
    }
  }
  WongWork::CQuestClear::setClearedQuest
            ((CQuestClear *)(this + 4),(STClearedQuest *)(param_1 + 0xb0));
  *(undefined4 *)(this + 0x75f0) = *(undefined4 *)(param_1 + 0xac);
  memcpy(this + 0x75f4,param_1 + 0x75e0,0x28);
  return 1;
}

```

---

## set_trigger

```asm
// === 086ac6ac UserQuest::set_trigger  [0x086ac6ac-0x86ac853] ===
 86ac6ac:	55                   	push   %ebp
 86ac6ad:	89 e5                	mov    %esp,%ebp
 86ac6af:	53                   	push   %ebx
 86ac6b0:	83 ec 44             	sub    $0x44,%esp
 86ac6b3:	8b 55 10             	mov    0x10(%ebp),%edx
 86ac6b6:	8b 45 14             	mov    0x14(%ebp),%eax
 86ac6b9:	88 55 d4             	mov    %dl,-0x2c(%ebp)
 86ac6bc:	88 45 d0             	mov    %al,-0x30(%ebp)
 86ac6bf:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 86ac6c6:	e9 6f 01 00 00       	jmp    86ac83a <_ZN9UserQuest11set_triggerEicb+0x18e>
 86ac6cb:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86ac6ce:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac6d1:	81 c2 4c 1d 00 00    	add    $0x1d4c,%edx
 86ac6d7:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ac6db:	3b 45 0c             	cmp    0xc(%ebp),%eax
 86ac6de:	0f 85 52 01 00 00    	jne    86ac836 <_ZN9UserQuest11set_triggerEicb+0x18a>
 86ac6e4:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac6e7:	8b 00                	mov    (%eax),%eax
 86ac6e9:	89 04 24             	mov    %eax,(%esp)
 86ac6ec:	e8 31 0e e6 ff       	call   850d522 <_ZN5CUser14getGmQuestFlagEv>
 86ac6f1:	84 c0                	test   %al,%al
 86ac6f3:	74 14                	je     86ac709 <_ZN9UserQuest11set_triggerEicb+0x5d>
 86ac6f5:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86ac6f8:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac6fb:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86ac701:	c7 44 90 08 00 00 00 	movl   $0x0,0x8(%eax,%edx,4)
 86ac708:	00 
 86ac709:	80 7d d4 01          	cmpb   $0x1,-0x2c(%ebp)
 86ac70d:	75 24                	jne    86ac733 <_ZN9UserQuest11set_triggerEicb+0x87>
 86ac70f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ac712:	8b 55 08             	mov    0x8(%ebp),%edx
 86ac715:	8d 88 60 1d 00 00    	lea    0x1d60(%eax),%ecx
 86ac71b:	8b 54 8a 08          	mov    0x8(%edx,%ecx,4),%edx
 86ac71f:	8d 4a 01             	lea    0x1(%edx),%ecx
 86ac722:	8b 55 08             	mov    0x8(%ebp),%edx
 86ac725:	05 60 1d 00 00       	add    $0x1d60,%eax
 86ac72a:	89 4c 82 08          	mov    %ecx,0x8(%edx,%eax,4)
 86ac72e:	e9 f1 00 00 00       	jmp    86ac824 <_ZN9UserQuest11set_triggerEicb+0x178>
 86ac733:	8b 45 0c             	mov    0xc(%ebp),%eax
 86ac736:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ac73a:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac73d:	89 04 24             	mov    %eax,(%esp)
 86ac740:	e8 45 08 00 00       	call   86acf8a <_ZN9UserQuest21check_quest_conditionEi>
 86ac745:	83 f0 01             	xor    $0x1,%eax
 86ac748:	84 c0                	test   %al,%al
 86ac74a:	74 0a                	je     86ac756 <_ZN9UserQuest11set_triggerEicb+0xaa>
 86ac74c:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86ac751:	e9 f8 00 00 00       	jmp    86ac84e <_ZN9UserQuest11set_triggerEicb+0x1a2>
 86ac756:	80 7d d0 00          	cmpb   $0x0,-0x30(%ebp)
 86ac75a:	74 5b                	je     86ac7b7 <_ZN9UserQuest11set_triggerEicb+0x10b>
 86ac75c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86ac75f:	89 04 24             	mov    %eax,(%esp)
 86ac762:	e8 45 16 cc ff       	call   836ddac <_ZN21stQuestTriggerState_tC1Ev>
 86ac767:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ac76a:	05 60 1d 00 00       	add    $0x1d60,%eax
 86ac76f:	c1 e0 02             	shl    $0x2,%eax
 86ac772:	03 45 08             	add    0x8(%ebp),%eax
 86ac775:	83 c0 08             	add    $0x8,%eax
 86ac778:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ac77c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86ac77f:	89 04 24             	mov    %eax,(%esp)
 86ac782:	e8 e5 0d 00 00       	call   86ad56c <_ZN21stQuestTriggerState_taSERKi>
 86ac787:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
 86ac78b:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ac78f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86ac792:	89 04 24             	mov    %eax,(%esp)
 86ac795:	e8 68 0e 00 00       	call   86ad602 <_ZN21stQuestTriggerState_t15incTirggerStateEc>
 86ac79a:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86ac79d:	8d 45 ec             	lea    -0x14(%ebp),%eax
 86ac7a0:	89 04 24             	mov    %eax,(%esp)
 86ac7a3:	e8 c0 15 cc ff       	call   836dd68 <_ZN21stQuestTriggerState_t10getTriggerEv>
 86ac7a8:	8b 55 08             	mov    0x8(%ebp),%edx
 86ac7ab:	8d 8b 60 1d 00 00    	lea    0x1d60(%ebx),%ecx
 86ac7b1:	89 44 8a 08          	mov    %eax,0x8(%edx,%ecx,4)
 86ac7b5:	eb 6d                	jmp    86ac824 <_ZN9UserQuest11set_triggerEicb+0x178>
 86ac7b7:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86ac7ba:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac7bd:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86ac7c3:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ac7c7:	85 c0                	test   %eax,%eax
 86ac7c9:	7e 59                	jle    86ac824 <_ZN9UserQuest11set_triggerEicb+0x178>
 86ac7cb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ac7ce:	89 04 24             	mov    %eax,(%esp)
 86ac7d1:	e8 d6 15 cc ff       	call   836ddac <_ZN21stQuestTriggerState_tC1Ev>
 86ac7d6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86ac7d9:	05 60 1d 00 00       	add    $0x1d60,%eax
 86ac7de:	c1 e0 02             	shl    $0x2,%eax
 86ac7e1:	03 45 08             	add    0x8(%ebp),%eax
 86ac7e4:	83 c0 08             	add    $0x8,%eax
 86ac7e7:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ac7eb:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ac7ee:	89 04 24             	mov    %eax,(%esp)
 86ac7f1:	e8 76 0d 00 00       	call   86ad56c <_ZN21stQuestTriggerState_taSERKi>
 86ac7f6:	0f be 45 d4          	movsbl -0x2c(%ebp),%eax
 86ac7fa:	89 44 24 04          	mov    %eax,0x4(%esp)
 86ac7fe:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ac801:	89 04 24             	mov    %eax,(%esp)
 86ac804:	e8 e1 0e 00 00       	call   86ad6ea <_ZN21stQuestTriggerState_t15subTriggerStateEc>
 86ac809:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 86ac80c:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 86ac80f:	89 04 24             	mov    %eax,(%esp)
 86ac812:	e8 51 15 cc ff       	call   836dd68 <_ZN21stQuestTriggerState_t10getTriggerEv>
 86ac817:	8b 55 08             	mov    0x8(%ebp),%edx
 86ac81a:	8d 8b 60 1d 00 00    	lea    0x1d60(%ebx),%ecx
 86ac820:	89 44 8a 08          	mov    %eax,0x8(%edx,%ecx,4)
 86ac824:	8b 55 f4             	mov    -0xc(%ebp),%edx
 86ac827:	8b 45 08             	mov    0x8(%ebp),%eax
 86ac82a:	81 c2 60 1d 00 00    	add    $0x1d60,%edx
 86ac830:	8b 44 90 08          	mov    0x8(%eax,%edx,4),%eax
 86ac834:	eb 18                	jmp    86ac84e <_ZN9UserQuest11set_triggerEicb+0x1a2>
 86ac836:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 86ac83a:	83 7d f4 13          	cmpl   $0x13,-0xc(%ebp)
 86ac83e:	0f 9e c0             	setle  %al
 86ac841:	84 c0                	test   %al,%al
 86ac843:	0f 85 82 fe ff ff    	jne    86ac6cb <_ZN9UserQuest11set_triggerEicb+0x1f>
 86ac849:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 86ac84e:	83 c4 44             	add    $0x44,%esp
 86ac851:	5b                   	pop    %ebx
 86ac852:	5d                   	pop    %ebp
 86ac853:	c3                   	ret

```

```c
// UserQuest::set_trigger @ 0x86ac6ac

/* UserQuest::set_trigger(int, char, bool) */

undefined4 __thiscall UserQuest::set_trigger(UserQuest *this,int param_1,char param_2,bool param_3)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  stQuestTriggerState_t local_20 [8];
  stQuestTriggerState_t local_18 [8];
  int local_10;
  
  local_10 = 0;
  while( true ) {
    if (0x13 < local_10) {
      return 0xffffffff;
    }
    if (*(int *)(this + (local_10 + 0x1d4c) * 4 + 8) == param_1) break;
    local_10 = local_10 + 1;
  }
  cVar2 = CUser::getGmQuestFlag(*(CUser **)this);
  if (cVar2 != '\0') {
    *(undefined4 *)(this + (local_10 + 0x1d60) * 4 + 8) = 0;
  }
  if (param_2 == '\x01') {
    *(int *)(this + (local_10 + 0x1d60) * 4 + 8) = *(int *)(this + (local_10 + 0x1d60) * 4 + 8) + 1;
  }
  else {
    cVar2 = check_quest_condition(this,param_1);
    if (cVar2 != '\x01') {
      return 0xffffffff;
    }
    if (param_3) {
      stQuestTriggerState_t::stQuestTriggerState_t(local_18);
      stQuestTriggerState_t::operator=(local_18,(int *)(this + (local_10 + 0x1d60) * 4 + 8));
      stQuestTriggerState_t::incTirggerState(local_18,param_2);
      iVar1 = local_10;
      uVar3 = stQuestTriggerState_t::getTrigger(local_18);
      *(undefined4 *)(this + (iVar1 + 0x1d60) * 4 + 8) = uVar3;
    }
    else if (0 < *(int *)(this + (local_10 + 0x1d60) * 4 + 8)) {
      stQuestTriggerState_t::stQuestTriggerState_t(local_20);
      stQuestTriggerState_t::operator=(local_20,(int *)(this + (local_10 + 0x1d60) * 4 + 8));
      stQuestTriggerState_t::subTriggerState(local_20,param_2);
      iVar1 = local_10;
      uVar3 = stQuestTriggerState_t::getTrigger(local_20);
      *(undefined4 *)(this + (iVar1 + 0x1d60) * 4 + 8) = uVar3;
    }
  }
  return *(undefined4 *)(this + (local_10 + 0x1d60) * 4 + 8);
}

```

