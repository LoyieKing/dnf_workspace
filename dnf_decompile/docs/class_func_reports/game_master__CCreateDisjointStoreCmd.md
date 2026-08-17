# game_master__CCreateDisjointStoreCmd

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## execute

```asm
// === 084a9720 game_master::CCreateDisjointStoreCmd::execute  [0x084a9720-0x84a97bf] ===
 84a9720:	55                   	push   %ebp
 84a9721:	89 e5                	mov    %esp,%ebp
 84a9723:	56                   	push   %esi
 84a9724:	53                   	push   %ebx
 84a9725:	83 ec 30             	sub    $0x30,%esp
 84a9728:	a1 68 f7 41 09       	mov    0x941f768,%eax
 84a972d:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 84a9734:	00 
 84a9735:	89 04 24             	mov    %eax,(%esp)
 84a9738:	e8 9f 4a ff ff       	call   849e1dc <_ZN10expert_job13CExpertJobMgr16AcquireExpertJobE20ENUM_EXPERT_JOB_TYPE>
 84a973d:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84a9740:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 84a9743:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9746:	89 04 24             	mov    %eax,(%esp)
 84a9749:	e8 6c a8 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a974e:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 84a9752:	89 04 24             	mov    %eax,(%esp)
 84a9755:	e8 5c 61 d8 ff       	call   822f8b6 <_ZN15CUserCharacInfo21SetCurCharacExpertJobEPN10expert_job10CExpertJobE>
 84a975a:	8b 45 08             	mov    0x8(%ebp),%eax
 84a975d:	89 04 24             	mov    %eax,(%esp)
 84a9760:	e8 55 a8 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9765:	89 04 24             	mov    %eax,(%esp)
 84a9768:	e8 cf b1 c8 ff       	call   813493c <_ZN5CUser8get_posYEv>
 84a976d:	0f b7 f0             	movzwl %ax,%esi
 84a9770:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9773:	89 04 24             	mov    %eax,(%esp)
 84a9776:	e8 3f a8 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a977b:	89 04 24             	mov    %eax,(%esp)
 84a977e:	e8 a9 b1 c8 ff       	call   813492c <_ZN5CUser8get_posXEv>
 84a9783:	0f b7 d8             	movzwl %ax,%ebx
 84a9786:	8b 45 08             	mov    0x8(%ebp),%eax
 84a9789:	89 04 24             	mov    %eax,(%esp)
 84a978c:	e8 29 a8 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84a9791:	89 74 24 14          	mov    %esi,0x14(%esp)
 84a9795:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84a9799:	c7 44 24 0c f4 01 00 	movl   $0x1f4,0xc(%esp)
 84a97a0:	00 
 84a97a1:	c7 44 24 08 db fa c7 	movl   $0x8c7fadb,0x8(%esp)
 84a97a8:	08 
 84a97a9:	89 44 24 04          	mov    %eax,0x4(%esp)
 84a97ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84a97b0:	89 04 24             	mov    %eax,(%esp)
 84a97b3:	e8 50 95 12 00       	call   85d2d08 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii>
 84a97b8:	83 c4 30             	add    $0x30,%esp
 84a97bb:	5b                   	pop    %ebx
 84a97bc:	5e                   	pop    %esi
 84a97bd:	5d                   	pop    %ebp
 84a97be:	c3                   	ret
 84a97bf:	90                   	nop

```

```c
// game_master::CCreateDisjointStoreCmd::execute @ 0x84a9720

/* game_master::CCreateDisjointStoreCmd::execute() */

void __thiscall game_master::CCreateDisjointStoreCmd::execute(CCreateDisjointStoreCmd *this)

{
  CDisjointer *this_00;
  CUserCharacInfo *this_01;
  CUser *pCVar1;
  uint uVar2;
  uint uVar3;
  
  this_00 = (CDisjointer *)expert_job::CExpertJobMgr::AcquireExpertJob(GlobalData::s_ExpertJobMgr,3)
  ;
  this_01 = (CUserCharacInfo *)CCommand::GetUser((CCommand *)this);
  CUserCharacInfo::SetCurCharacExpertJob(this_01,(CExpertJob *)this_00);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  uVar2 = CUser::get_posY(pCVar1);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  uVar3 = CUser::get_posX(pCVar1);
  pCVar1 = (CUser *)CCommand::GetUser((CCommand *)this);
  expert_job::CDisjointer::OnCreateDisjointStore
            (this_00,pCVar1,"test",500,uVar3 & 0xffff,uVar2 & 0xffff);
  return;
}

```

