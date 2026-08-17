# Inter_LoadQuest

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 084c5054 Inter_LoadQuest::dispatch_sig  [0x084c5054-0x84c5151] ===
 84c5054:	55                   	push   %ebp
 84c5055:	89 e5                	mov    %esp,%ebp
 84c5057:	53                   	push   %ebx
 84c5058:	83 ec 24             	sub    $0x24,%esp
 84c505b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c505e:	89 04 24             	mov    %eax,(%esp)
 84c5061:	e8 26 53 c1 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 84c5066:	85 c0                	test   %eax,%eax
 84c5068:	0f 94 c0             	sete   %al
 84c506b:	84 c0                	test   %al,%al
 84c506d:	74 0a                	je     84c5079 <_ZN15Inter_LoadQuest12dispatch_sigEP5CUserPci+0x25>
 84c506f:	b8 13 1a 00 00       	mov    $0x1a13,%eax
 84c5074:	e9 d2 00 00 00       	jmp    84c514b <_ZN15Inter_LoadQuest12dispatch_sigEP5CUserPci+0xf7>
 84c5079:	8b 45 10             	mov    0x10(%ebp),%eax
 84c507c:	89 45 f0             	mov    %eax,-0x10(%ebp)
 84c507f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c5082:	8b 40 04             	mov    0x4(%eax),%eax
 84c5085:	83 f8 01             	cmp    $0x1,%eax
 84c5088:	75 0a                	jne    84c5094 <_ZN15Inter_LoadQuest12dispatch_sigEP5CUserPci+0x40>
 84c508a:	b8 1a 1a 00 00       	mov    $0x1a1a,%eax
 84c508f:	e9 b7 00 00 00       	jmp    84c514b <_ZN15Inter_LoadQuest12dispatch_sigEP5CUserPci+0xf7>
 84c5094:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c5097:	89 04 24             	mov    %eax,(%esp)
 84c509a:	e8 93 b3 c5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 84c509f:	85 c0                	test   %eax,%eax
 84c50a1:	0f 94 c0             	sete   %al
 84c50a4:	84 c0                	test   %al,%al
 84c50a6:	74 0a                	je     84c50b2 <_ZN15Inter_LoadQuest12dispatch_sigEP5CUserPci+0x5e>
 84c50a8:	b8 1d 1a 00 00       	mov    $0x1a1d,%eax
 84c50ad:	e9 99 00 00 00       	jmp    84c514b <_ZN15Inter_LoadQuest12dispatch_sigEP5CUserPci+0xf7>
 84c50b2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c50b5:	89 04 24             	mov    %eax,(%esp)
 84c50b8:	e8 e9 57 cd ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 84c50bd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84c50c0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84c50c3:	89 44 24 04          	mov    %eax,0x4(%esp)
 84c50c7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84c50ca:	89 04 24             	mov    %eax,(%esp)
 84c50cd:	e8 8a 68 1e 00       	call   86ab95c <_ZN9UserQuest9set_questEPK14SIG_LOAD_QUEST>
 84c50d2:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 84c50d7:	89 04 24             	mov    %eax,(%esp)
 84c50da:	e8 3d fd d6 ff       	call   8234e1c <_ZNK9CTimeGate6isOpenEv>
 84c50df:	84 c0                	test   %al,%al
 84c50e1:	74 50                	je     84c5133 <_ZN15Inter_LoadQuest12dispatch_sigEP5CUserPci+0xdf>
 84c50e3:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 84c50e8:	89 04 24             	mov    %eax,(%esp)
 84c50eb:	e8 3e fd d6 ff       	call   8234e2e <_ZNK9CTimeGate13getQuestIndexEv>
 84c50f0:	89 c3                	mov    %eax,%ebx
 84c50f2:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c50f5:	89 04 24             	mov    %eax,(%esp)
 84c50f8:	e8 a9 57 cd ff       	call   819a8a6 <_ZNK5CUser18getCurCharacQuestREv>
 84c50fd:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c5101:	89 04 24             	mov    %eax,(%esp)
 84c5104:	e8 f5 7e 1e 00       	call   86acffe <_ZNK9UserQuest12IsDoingQuestEi>
 84c5109:	84 c0                	test   %al,%al
 84c510b:	74 26                	je     84c5133 <_ZN15Inter_LoadQuest12dispatch_sigEP5CUserPci+0xdf>
 84c510d:	a1 f4 f7 41 09       	mov    0x941f7f4,%eax
 84c5112:	89 04 24             	mov    %eax,(%esp)
 84c5115:	e8 14 fd d6 ff       	call   8234e2e <_ZNK9CTimeGate13getQuestIndexEv>
 84c511a:	89 c3                	mov    %eax,%ebx
 84c511c:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c511f:	89 04 24             	mov    %eax,(%esp)
 84c5122:	e8 37 59 c8 ff       	call   814aa5e <_ZN5CUser18getCurCharacQuestWEv>
 84c5127:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84c512b:	89 04 24             	mov    %eax,(%esp)
 84c512e:	e8 ff 73 1e 00       	call   86ac532 <_ZN9UserQuest12giveup_questEi>
 84c5133:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84c513a:	00 
 84c513b:	8b 45 0c             	mov    0xc(%ebp),%eax
 84c513e:	89 04 24             	mov    %eax,(%esp)
 84c5141:	e8 ae 02 c6 ff       	call   81253f4 <_ZN5CUser16EnableCharacInfoE13CACHE_SECTION>
 84c5146:	b8 00 00 00 00       	mov    $0x0,%eax
 84c514b:	83 c4 24             	add    $0x24,%esp
 84c514e:	5b                   	pop    %ebx
 84c514f:	5d                   	pop    %ebp
 84c5150:	c3                   	ret
 84c5151:	90                   	nop

```

```c
// Inter_LoadQuest::dispatch_sig @ 0x84c5054

/* Inter_LoadQuest::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadQuest::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  UserQuest *pUVar4;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (iVar2 == 0) {
    uVar3 = 0x1a13;
  }
  else if (*(int *)(param_3 + 4) == 1) {
    uVar3 = 0x1a1a;
  }
  else {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 == 0) {
      uVar3 = 0x1a1d;
    }
    else {
      pUVar4 = (UserQuest *)CUser::getCurCharacQuestR((CUser *)param_2);
      UserQuest::set_quest(pUVar4,(SIG_LOAD_QUEST *)param_3);
      cVar1 = CTimeGate::isOpen(GlobalData::s_timeGate_);
      if (cVar1 != '\0') {
        iVar2 = CTimeGate::getQuestIndex(GlobalData::s_timeGate_);
        pUVar4 = (UserQuest *)CUser::getCurCharacQuestR((CUser *)param_2);
        cVar1 = UserQuest::IsDoingQuest(pUVar4,iVar2);
        if (cVar1 != '\0') {
          iVar2 = CTimeGate::getQuestIndex(GlobalData::s_timeGate_);
          pUVar4 = (UserQuest *)CUser::getCurCharacQuestW((CUser *)param_2);
          UserQuest::giveup_quest(pUVar4,iVar2);
        }
      }
      CUser::EnableCharacInfo((CUser *)param_2,3);
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

