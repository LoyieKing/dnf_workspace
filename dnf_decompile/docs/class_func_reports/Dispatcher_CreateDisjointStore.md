# Dispatcher_CreateDisjointStore

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## check_error

```asm
// === 081cf8d4 Dispatcher_CreateDisjointStore::check_error  [0x081cf8d4-0x81cf985] ===
 81cf8d4:	55                   	push   %ebp
 81cf8d5:	89 e5                	mov    %esp,%ebp
 81cf8d7:	83 ec 18             	sub    $0x18,%esp
 81cf8da:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf8dd:	89 04 24             	mov    %eax,(%esp)
 81cf8e0:	e8 a7 aa f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cf8e5:	83 f8 02             	cmp    $0x2,%eax
 81cf8e8:	7e 0f                	jle    81cf8f9 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x25>
 81cf8ea:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf8ed:	89 04 24             	mov    %eax,(%esp)
 81cf8f0:	e8 3d 0b f5 ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 81cf8f5:	85 c0                	test   %eax,%eax
 81cf8f7:	75 07                	jne    81cf900 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x2c>
 81cf8f9:	b8 01 00 00 00       	mov    $0x1,%eax
 81cf8fe:	eb 05                	jmp    81cf905 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x31>
 81cf900:	b8 00 00 00 00       	mov    $0x0,%eax
 81cf905:	84 c0                	test   %al,%al
 81cf907:	74 07                	je     81cf910 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x3c>
 81cf909:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
 81cf90e:	eb 73                	jmp    81cf983 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xaf>
 81cf910:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf913:	89 04 24             	mov    %eax,(%esp)
 81cf916:	e8 79 ff 05 00       	call   822f894 <_ZNK15CUserCharacInfo25GetCurCharacExpertJobTypeEv>
 81cf91b:	83 f8 03             	cmp    $0x3,%eax
 81cf91e:	0f 95 c0             	setne  %al
 81cf921:	84 c0                	test   %al,%al
 81cf923:	74 07                	je     81cf92c <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x58>
 81cf925:	b8 fe ff ff ff       	mov    $0xfffffffe,%eax
 81cf92a:	eb 57                	jmp    81cf983 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xaf>
 81cf92c:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf92f:	89 04 24             	mov    %eax,(%esp)
 81cf932:	e8 55 aa f0 ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81cf937:	83 f8 03             	cmp    $0x3,%eax
 81cf93a:	0f 95 c0             	setne  %al
 81cf93d:	84 c0                	test   %al,%al
 81cf93f:	74 07                	je     81cf948 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x74>
 81cf941:	b8 13 00 00 00       	mov    $0x13,%eax
 81cf946:	eb 3b                	jmp    81cf983 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xaf>
 81cf948:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf94b:	89 04 24             	mov    %eax,(%esp)
 81cf94e:	e8 81 ff 05 00       	call   822f8d4 <_ZNK15CUserCharacInfo21GetCurCharacExpertJobEv>
 81cf953:	85 c0                	test   %eax,%eax
 81cf955:	0f 95 c0             	setne  %al
 81cf958:	84 c0                	test   %al,%al
 81cf95a:	74 07                	je     81cf963 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0x8f>
 81cf95c:	b8 13 00 00 00       	mov    $0x13,%eax
 81cf961:	eb 20                	jmp    81cf983 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xaf>
 81cf963:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf966:	89 04 24             	mov    %eax,(%esp)
 81cf969:	e8 de 57 48 00       	call   865514c <_ZN5CUser8GetPartyEv>
 81cf96e:	85 c0                	test   %eax,%eax
 81cf970:	0f 95 c0             	setne  %al
 81cf973:	84 c0                	test   %al,%al
 81cf975:	74 07                	je     81cf97e <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xaa>
 81cf977:	b8 13 00 00 00       	mov    $0x13,%eax
 81cf97c:	eb 05                	jmp    81cf983 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase+0xaf>
 81cf97e:	b8 00 00 00 00       	mov    $0x0,%eax
 81cf983:	c9                   	leave
 81cf984:	c3                   	ret
 81cf985:	90                   	nop

```

```c
// Dispatcher_CreateDisjointStore::check_error @ 0x81cf8d4

/* Dispatcher_CreateDisjointStore::check_error(CUser*, MSG_BASE&, ParamBase&) */

undefined4
Dispatcher_CreateDisjointStore::check_error(CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = CUser::get_state((CUser *)param_2);
  if (2 < iVar2) {
    iVar2 = CUserCharacInfo::getCurCharacR((CUserCharacInfo *)param_2);
    if (iVar2 != 0) {
      bVar1 = false;
      goto LAB_081cf905;
    }
  }
  bVar1 = true;
LAB_081cf905:
  if (bVar1) {
    uVar3 = 0xffffffff;
  }
  else {
    iVar2 = CUserCharacInfo::GetCurCharacExpertJobType((CUserCharacInfo *)param_2);
    if (iVar2 == 3) {
      iVar2 = CUser::get_state((CUser *)param_2);
      if (iVar2 == 3) {
        iVar2 = CUserCharacInfo::GetCurCharacExpertJob((CUserCharacInfo *)param_2);
        if (iVar2 == 0) {
          iVar2 = CUser::GetParty((CUser *)param_2);
          if (iVar2 == 0) {
            uVar3 = 0;
          }
          else {
            uVar3 = 0x13;
          }
        }
        else {
          uVar3 = 0x13;
        }
      }
      else {
        uVar3 = 0x13;
      }
    }
    else {
      uVar3 = 0xfffffffe;
    }
  }
  return uVar3;
}

```

---

## process

```asm
// === 081cf986 Dispatcher_CreateDisjointStore::process  [0x081cf986-0x81cfaef] ===
 81cf986:	55                   	push   %ebp
 81cf987:	89 e5                	mov    %esp,%ebp
 81cf989:	53                   	push   %ebx
 81cf98a:	83 ec 34             	sub    $0x34,%esp
 81cf98d:	8b 45 14             	mov    0x14(%ebp),%eax
 81cf990:	89 45 e8             	mov    %eax,-0x18(%ebp)
 81cf993:	8b 45 14             	mov    0x14(%ebp),%eax
 81cf996:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cf99a:	8b 45 10             	mov    0x10(%ebp),%eax
 81cf99d:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cf9a1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf9a4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf9a8:	8b 45 08             	mov    0x8(%ebp),%eax
 81cf9ab:	89 04 24             	mov    %eax,(%esp)
 81cf9ae:	e8 21 ff ff ff       	call   81cf8d4 <_ZN30Dispatcher_CreateDisjointStore11check_errorEP5CUserR8MSG_BASER9ParamBase>
 81cf9b3:	89 c2                	mov    %eax,%edx
 81cf9b5:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81cf9b8:	89 50 04             	mov    %edx,0x4(%eax)
 81cf9bb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81cf9be:	8b 40 04             	mov    0x4(%eax),%eax
 81cf9c1:	85 c0                	test   %eax,%eax
 81cf9c3:	7e 0a                	jle    81cf9cf <_ZN30Dispatcher_CreateDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0x49>
 81cf9c5:	b8 00 00 00 00       	mov    $0x0,%eax
 81cf9ca:	e9 1b 01 00 00       	jmp    81cfaea <_ZN30Dispatcher_CreateDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0x164>
 81cf9cf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81cf9d2:	8b 40 04             	mov    0x4(%eax),%eax
 81cf9d5:	85 c0                	test   %eax,%eax
 81cf9d7:	79 32                	jns    81cfa0b <_ZN30Dispatcher_CreateDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0x85>
 81cf9d9:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf9dc:	89 04 24             	mov    %eax,(%esp)
 81cf9df:	e8 8a a9 f0 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 81cf9e4:	8b 55 e8             	mov    -0x18(%ebp),%edx
 81cf9e7:	8b 52 04             	mov    0x4(%edx),%edx
 81cf9ea:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cf9ee:	89 54 24 08          	mov    %edx,0x8(%esp)
 81cf9f2:	c7 44 24 04 60 40 bd 	movl   $0x8bd4060,0x4(%esp)
 81cf9f9:	08 
 81cf9fa:	c7 04 24 c4 29 00 00 	movl   $0x29c4,(%esp)
 81cfa01:	e8 d1 0e 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cfa06:	e9 df 00 00 00       	jmp    81cfaea <_ZN30Dispatcher_CreateDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0x164>
 81cfa0b:	a1 68 f7 41 09       	mov    0x941f768,%eax
 81cfa10:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 81cfa17:	00 
 81cfa18:	89 04 24             	mov    %eax,(%esp)
 81cfa1b:	e8 bc e7 2c 00       	call   849e1dc <_ZN10expert_job13CExpertJobMgr16AcquireExpertJobE20ENUM_EXPERT_JOB_TYPE>
 81cfa20:	89 45 ec             	mov    %eax,-0x14(%ebp)
 81cfa23:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 81cfa27:	75 14                	jne    81cfa3d <_ZN30Dispatcher_CreateDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0xb7>
 81cfa29:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81cfa2c:	c7 40 04 15 00 00 00 	movl   $0x15,0x4(%eax)
 81cfa33:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfa38:	e9 ad 00 00 00       	jmp    81cfaea <_ZN30Dispatcher_CreateDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0x164>
 81cfa3d:	8b 45 10             	mov    0x10(%ebp),%eax
 81cfa40:	89 45 f0             	mov    %eax,-0x10(%ebp)
 81cfa43:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81cfa46:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfa49:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cfa4d:	89 04 24             	mov    %eax,(%esp)
 81cfa50:	e8 61 fe 05 00       	call   822f8b6 <_ZN15CUserCharacInfo21SetCurCharacExpertJobEPN10expert_job10CExpertJobE>
 81cfa55:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 81cfa5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cfa5f:	0f b7 80 1a 01 00 00 	movzwl 0x11a(%eax),%eax
 81cfa66:	0f bf c8             	movswl %ax,%ecx
 81cfa69:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cfa6c:	0f b7 80 18 01 00 00 	movzwl 0x118(%eax),%eax
 81cfa73:	0f bf d0             	movswl %ax,%edx
 81cfa76:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81cfa79:	8b 80 14 01 00 00    	mov    0x114(%eax),%eax
 81cfa7f:	8b 5d f0             	mov    -0x10(%ebp),%ebx
 81cfa82:	83 c3 0d             	add    $0xd,%ebx
 81cfa85:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 81cfa89:	89 54 24 10          	mov    %edx,0x10(%esp)
 81cfa8d:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cfa91:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 81cfa95:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfa98:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cfa9c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 81cfa9f:	89 04 24             	mov    %eax,(%esp)
 81cfaa2:	e8 61 32 40 00       	call   85d2d08 <_ZN10expert_job11CDisjointer21OnCreateDisjointStoreEP5CUserPKciii>
 81cfaa7:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cfaaa:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81cfaae:	0f 95 c0             	setne  %al
 81cfab1:	84 c0                	test   %al,%al
 81cfab3:	74 30                	je     81cfae5 <_ZN30Dispatcher_CreateDisjointStore7processEP5CUserR8MSG_BASER9ParamBase+0x15f>
 81cfab5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfab8:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81cfabf:	00 
 81cfac0:	89 04 24             	mov    %eax,(%esp)
 81cfac3:	e8 ee fd 05 00       	call   822f8b6 <_ZN15CUserCharacInfo21SetCurCharacExpertJobEPN10expert_job10CExpertJobE>
 81cfac8:	8b 55 ec             	mov    -0x14(%ebp),%edx
 81cfacb:	a1 68 f7 41 09       	mov    0x941f768,%eax
 81cfad0:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cfad4:	89 04 24             	mov    %eax,(%esp)
 81cfad7:	e8 1c e7 2c 00       	call   849e1f8 <_ZN10expert_job13CExpertJobMgr13FreeExpertJobEPNS_10CExpertJobE>
 81cfadc:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cfadf:	8b 45 e8             	mov    -0x18(%ebp),%eax
 81cfae2:	89 50 04             	mov    %edx,0x4(%eax)
 81cfae5:	b8 00 00 00 00       	mov    $0x0,%eax
 81cfaea:	83 c4 34             	add    $0x34,%esp
 81cfaed:	5b                   	pop    %ebx
 81cfaee:	5d                   	pop    %ebp
 81cfaef:	c3                   	ret

```

```c
// Dispatcher_CreateDisjointStore::process @ 0x81cf986

/* Dispatcher_CreateDisjointStore::process(CUser*, MSG_BASE&, ParamBase&) */

undefined4 __thiscall
Dispatcher_CreateDisjointStore::process
          (Dispatcher_CreateDisjointStore *this,CUser *param_1,MSG_BASE *param_2,ParamBase *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  CDisjointer *this_00;
  int iVar3;
  MSG_BASE *pMVar4;
  ParamBase *pPVar5;
  
  pMVar4 = param_2;
  pPVar5 = param_3;
  uVar1 = check_error((CUser *)this,(MSG_BASE *)param_1,(ParamBase *)param_2);
  *(undefined4 *)(param_3 + 4) = uVar1;
  if (*(int *)(param_3 + 4) < 1) {
    if (*(int *)(param_3 + 4) < 0) {
      uVar2 = CUser::get_acc_id(param_1);
      uVar1 = LineFunc(0x29c4,
                       "virtual int Dispatcher_CreateDisjointStore::process(CUser*, MSG_BASE&, ParamBase&)"
                       ,*(int *)(param_3 + 4),uVar2);
    }
    else {
      this_00 = (CDisjointer *)
                expert_job::CExpertJobMgr::AcquireExpertJob
                          (GlobalData::s_ExpertJobMgr,3,pMVar4,pPVar5);
      if (this_00 == (CDisjointer *)0x0) {
        *(undefined4 *)(param_3 + 4) = 0x15;
        uVar1 = 0;
      }
      else {
        CUserCharacInfo::SetCurCharacExpertJob((CUserCharacInfo *)param_1,(CExpertJob *)this_00);
        iVar3 = expert_job::CDisjointer::OnCreateDisjointStore
                          (this_00,param_1,(char *)(param_2 + 0xd),*(int *)(param_2 + 0x114),
                           (int)*(short *)(param_2 + 0x118),(int)*(short *)(param_2 + 0x11a));
        if (iVar3 != 0) {
          CUserCharacInfo::SetCurCharacExpertJob((CUserCharacInfo *)param_1,(CExpertJob *)0x0);
          expert_job::CExpertJobMgr::FreeExpertJob(GlobalData::s_ExpertJobMgr,(CExpertJob *)this_00)
          ;
          *(int *)(param_3 + 4) = iVar3;
        }
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

```

---

## read

```asm
// === 081cf750 Dispatcher_CreateDisjointStore::read  [0x081cf750-0x81cf8d3] ===
 81cf750:	55                   	push   %ebp
 81cf751:	89 e5                	mov    %esp,%ebp
 81cf753:	83 ec 28             	sub    $0x28,%esp
 81cf756:	8b 45 10             	mov    0x10(%ebp),%eax
 81cf759:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cf75c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cf75f:	05 10 01 00 00       	add    $0x110,%eax
 81cf764:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf768:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf76b:	89 04 24             	mov    %eax,(%esp)
 81cf76e:	e8 7d d9 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cf773:	83 f0 01             	xor    $0x1,%eax
 81cf776:	84 c0                	test   %al,%al
 81cf778:	74 29                	je     81cf7a3 <_ZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASE+0x53>
 81cf77a:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf781:	00 
 81cf782:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf789:	00 
 81cf78a:	c7 44 24 04 c0 40 bd 	movl   $0x8bd40c0,0x4(%esp)
 81cf791:	08 
 81cf792:	c7 04 24 76 29 00 00 	movl   $0x2976,(%esp)
 81cf799:	e8 39 11 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf79e:	e9 2e 01 00 00       	jmp    81cf8d1 <_ZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASE+0x181>
 81cf7a3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cf7a6:	8b 80 10 01 00 00    	mov    0x110(%eax),%eax
 81cf7ac:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81cf7af:	83 c2 0d             	add    $0xd,%edx
 81cf7b2:	89 44 24 0c          	mov    %eax,0xc(%esp)
 81cf7b6:	c7 44 24 08 00 01 00 	movl   $0x100,0x8(%esp)
 81cf7bd:	00 
 81cf7be:	89 54 24 04          	mov    %edx,0x4(%esp)
 81cf7c2:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf7c5:	89 04 24             	mov    %eax,(%esp)
 81cf7c8:	e8 ef da 3b 00       	call   858d2bc <_ZN9PacketBuf7get_strEPcii>
 81cf7cd:	83 f0 01             	xor    $0x1,%eax
 81cf7d0:	84 c0                	test   %al,%al
 81cf7d2:	74 29                	je     81cf7fd <_ZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASE+0xad>
 81cf7d4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf7db:	00 
 81cf7dc:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf7e3:	00 
 81cf7e4:	c7 44 24 04 c0 40 bd 	movl   $0x8bd40c0,0x4(%esp)
 81cf7eb:	08 
 81cf7ec:	c7 04 24 79 29 00 00 	movl   $0x2979,(%esp)
 81cf7f3:	e8 df 10 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf7f8:	e9 d4 00 00 00       	jmp    81cf8d1 <_ZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASE+0x181>
 81cf7fd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cf800:	05 14 01 00 00       	add    $0x114,%eax
 81cf805:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf809:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf80c:	89 04 24             	mov    %eax,(%esp)
 81cf80f:	e8 dc d8 3b 00       	call   858d0f0 <_ZN9PacketBuf7get_intERi>
 81cf814:	83 f0 01             	xor    $0x1,%eax
 81cf817:	84 c0                	test   %al,%al
 81cf819:	74 29                	je     81cf844 <_ZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASE+0xf4>
 81cf81b:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf822:	00 
 81cf823:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf82a:	00 
 81cf82b:	c7 44 24 04 c0 40 bd 	movl   $0x8bd40c0,0x4(%esp)
 81cf832:	08 
 81cf833:	c7 04 24 7c 29 00 00 	movl   $0x297c,(%esp)
 81cf83a:	e8 98 10 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf83f:	e9 8d 00 00 00       	jmp    81cf8d1 <_ZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASE+0x181>
 81cf844:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cf847:	05 18 01 00 00       	add    $0x118,%eax
 81cf84c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf850:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf853:	89 04 24             	mov    %eax,(%esp)
 81cf856:	e8 65 d7 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81cf85b:	83 f0 01             	xor    $0x1,%eax
 81cf85e:	84 c0                	test   %al,%al
 81cf860:	74 26                	je     81cf888 <_ZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASE+0x138>
 81cf862:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf869:	00 
 81cf86a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf871:	00 
 81cf872:	c7 44 24 04 c0 40 bd 	movl   $0x8bd40c0,0x4(%esp)
 81cf879:	08 
 81cf87a:	c7 04 24 7f 29 00 00 	movl   $0x297f,(%esp)
 81cf881:	e8 51 10 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf886:	eb 49                	jmp    81cf8d1 <_ZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASE+0x181>
 81cf888:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cf88b:	05 1a 01 00 00       	add    $0x11a,%eax
 81cf890:	89 44 24 04          	mov    %eax,0x4(%esp)
 81cf894:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cf897:	89 04 24             	mov    %eax,(%esp)
 81cf89a:	e8 21 d7 3b 00       	call   858cfc0 <_ZN9PacketBuf9get_shortERs>
 81cf89f:	83 f0 01             	xor    $0x1,%eax
 81cf8a2:	84 c0                	test   %al,%al
 81cf8a4:	74 26                	je     81cf8cc <_ZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASE+0x17c>
 81cf8a6:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81cf8ad:	00 
 81cf8ae:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81cf8b5:	00 
 81cf8b6:	c7 44 24 04 c0 40 bd 	movl   $0x8bd40c0,0x4(%esp)
 81cf8bd:	08 
 81cf8be:	c7 04 24 82 29 00 00 	movl   $0x2982,(%esp)
 81cf8c5:	e8 0d 10 3c 00       	call   85908d7 <_Z8LineFunciPKcij>
 81cf8ca:	eb 05                	jmp    81cf8d1 <_ZN30Dispatcher_CreateDisjointStore4readER9PacketBufR8MSG_BASE+0x181>
 81cf8cc:	b8 00 00 00 00       	mov    $0x0,%eax
 81cf8d1:	c9                   	leave
 81cf8d2:	c3                   	ret
 81cf8d3:	90                   	nop

```

```c
// Dispatcher_CreateDisjointStore::read @ 0x81cf750

/* Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&) */

undefined4 __thiscall
Dispatcher_CreateDisjointStore::read
          (Dispatcher_CreateDisjointStore *this,PacketBuf *param_1,MSG_BASE *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x110));
  if (cVar1 == '\x01') {
    cVar1 = PacketBuf::get_str(param_1,(char *)(param_2 + 0xd),0x100,*(int *)(param_2 + 0x110));
    if (cVar1 == '\x01') {
      cVar1 = PacketBuf::get_int(param_1,(int *)(param_2 + 0x114));
      if (cVar1 == '\x01') {
        cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x118));
        if (cVar1 == '\x01') {
          cVar1 = PacketBuf::get_short(param_1,(short *)(param_2 + 0x11a));
          if (cVar1 == '\x01') {
            uVar2 = 0;
          }
          else {
            uVar2 = LineFunc(0x2982,
                             "virtual int Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&)"
                             ,0,0);
          }
        }
        else {
          uVar2 = LineFunc(0x297f,
                           "virtual int Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&)"
                           ,0,0);
        }
      }
      else {
        uVar2 = LineFunc(0x297c,
                         "virtual int Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&)",0
                         ,0);
      }
    }
    else {
      uVar2 = LineFunc(0x2979,
                       "virtual int Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&)",0,0
                      );
    }
  }
  else {
    uVar2 = LineFunc(0x2976,
                     "virtual int Dispatcher_CreateDisjointStore::read(PacketBuf&, MSG_BASE&)",0,0);
  }
  return uVar2;
}

```

---

## send

```asm
// === 081cfaf0 Dispatcher_CreateDisjointStore::send  [0x081cfaf0-0x81cfb27] ===
 81cfaf0:	55                   	push   %ebp
 81cfaf1:	89 e5                	mov    %esp,%ebp
 81cfaf3:	83 ec 28             	sub    $0x28,%esp
 81cfaf6:	8b 45 10             	mov    0x10(%ebp),%eax
 81cfaf9:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81cfafc:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cfaff:	8b 40 04             	mov    0x4(%eax),%eax
 81cfb02:	85 c0                	test   %eax,%eax
 81cfb04:	74 20                	je     81cfb26 <_ZN30Dispatcher_CreateDisjointStore4sendEP5CUserR9ParamBase+0x36>
 81cfb06:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81cfb09:	8b 40 04             	mov    0x4(%eax),%eax
 81cfb0c:	0f b6 c0             	movzbl %al,%eax
 81cfb0f:	89 44 24 08          	mov    %eax,0x8(%esp)
 81cfb13:	c7 44 24 04 ee 00 00 	movl   $0xee,0x4(%esp)
 81cfb1a:	00 
 81cfb1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 81cfb1e:	89 04 24             	mov    %eax,(%esp)
 81cfb21:	e8 1c c4 4a 00       	call   867bf42 <_ZN5CUser18SendCmdErrorPacketE14ENUM_CMDPACKETh>
 81cfb26:	c9                   	leave
 81cfb27:	c3                   	ret

```

```c
// Dispatcher_CreateDisjointStore::send @ 0x81cfaf0

/* Dispatcher_CreateDisjointStore::send(CUser*, ParamBase&) */

void __thiscall
Dispatcher_CreateDisjointStore::send
          (Dispatcher_CreateDisjointStore *this,CUser *param_1,ParamBase *param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
    CUser::SendCmdErrorPacket(param_1,0xee,*(uint *)(param_2 + 4) & 0xff);
  }
  return;
}

```

