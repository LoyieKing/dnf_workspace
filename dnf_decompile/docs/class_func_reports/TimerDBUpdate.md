# TimerDBUpdate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08632f5a TimerDBUpdate::dispatch_sig  [0x08632f5a-0x8633107] ===
 8632f5a:	55                   	push   %ebp
 8632f5b:	89 e5                	mov    %esp,%ebp
 8632f5d:	57                   	push   %edi
 8632f5e:	56                   	push   %esi
 8632f5f:	53                   	push   %ebx
 8632f60:	83 ec 4c             	sub    $0x4c,%esp
 8632f63:	e8 26 92 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8632f68:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8632f6f:	00 
 8632f70:	8b 55 0c             	mov    0xc(%ebp),%edx
 8632f73:	89 54 24 04          	mov    %edx,0x4(%esp)
 8632f77:	89 04 24             	mov    %eax,(%esp)
 8632f7a:	e8 25 18 c6 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8632f7f:	89 45 d8             	mov    %eax,-0x28(%ebp)
 8632f82:	83 7d d8 00          	cmpl   $0x0,-0x28(%ebp)
 8632f86:	75 0a                	jne    8632f92 <_ZN13TimerDBUpdate12dispatch_sigEiij+0x38>
 8632f88:	b8 00 00 00 00       	mov    $0x0,%eax
 8632f8d:	e9 6d 01 00 00       	jmp    86330ff <_ZN13TimerDBUpdate12dispatch_sigEiij+0x1a5>
 8632f92:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8632f95:	89 04 24             	mov    %eax,(%esp)
 8632f98:	e8 f5 c6 bf ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8632f9d:	89 45 dc             	mov    %eax,-0x24(%ebp)
 8632fa0:	c7 04 24 14 f7 41 09 	movl   $0x941f714,(%esp)
 8632fa7:	e8 f2 8c a9 ff       	call   80cbc9e <_ZN11CSystemTime9getCurSecEv>
 8632fac:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8632faf:	8b 45 dc             	mov    -0x24(%ebp),%eax
 8632fb2:	8b 55 e0             	mov    -0x20(%ebp),%edx
 8632fb5:	89 d1                	mov    %edx,%ecx
 8632fb7:	29 c1                	sub    %eax,%ecx
 8632fb9:	ba c5 b3 a2 91       	mov    $0x91a2b3c5,%edx
 8632fbe:	89 c8                	mov    %ecx,%eax
 8632fc0:	f7 ea                	imul   %edx
 8632fc2:	8d 04 0a             	lea    (%edx,%ecx,1),%eax
 8632fc5:	89 c2                	mov    %eax,%edx
 8632fc7:	c1 fa 0b             	sar    $0xb,%edx
 8632fca:	89 c8                	mov    %ecx,%eax
 8632fcc:	c1 f8 1f             	sar    $0x1f,%eax
 8632fcf:	89 d1                	mov    %edx,%ecx
 8632fd1:	29 c1                	sub    %eax,%ecx
 8632fd3:	89 c8                	mov    %ecx,%eax
 8632fd5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8632fd8:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8632fdc:	7e 2b                	jle    8633009 <_ZN13TimerDBUpdate12dispatch_sigEiij+0xaf>
 8632fde:	83 7d e4 01          	cmpl   $0x1,-0x1c(%ebp)
 8632fe2:	7f 25                	jg     8633009 <_ZN13TimerDBUpdate12dispatch_sigEiij+0xaf>
 8632fe4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8632feb:	00 
 8632fec:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8632ff3:	00 
 8632ff4:	c7 44 24 04 23 00 00 	movl   $0x23,0x4(%esp)
 8632ffb:	00 
 8632ffc:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8632fff:	89 04 24             	mov    %eax,(%esp)
 8633002:	e8 89 f3 ae ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 8633007:	eb 2f                	jmp    8633038 <_ZN13TimerDBUpdate12dispatch_sigEiij+0xde>
 8633009:	83 7d e4 0b          	cmpl   $0xb,-0x1c(%ebp)
 863300d:	7e 29                	jle    8633038 <_ZN13TimerDBUpdate12dispatch_sigEiij+0xde>
 863300f:	83 7d e4 0c          	cmpl   $0xc,-0x1c(%ebp)
 8633013:	7f 23                	jg     8633038 <_ZN13TimerDBUpdate12dispatch_sigEiij+0xde>
 8633015:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 863301c:	00 
 863301d:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8633024:	00 
 8633025:	c7 44 24 04 24 00 00 	movl   $0x24,0x4(%esp)
 863302c:	00 
 863302d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8633030:	89 04 24             	mov    %eax,(%esp)
 8633033:	e8 58 f3 ae ff       	call   8122390 <_ZN8APSystem9CUserProc24ClearActionAndSendtoUserEP5CUserNS_17_ActionGroupIndexEi16ENUM_PACKETCLASS>
 8633038:	8b 45 d8             	mov    -0x28(%ebp),%eax
 863303b:	89 04 24             	mov    %eax,(%esp)
 863303e:	e8 4f c6 bf ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8633043:	3b 45 10             	cmp    0x10(%ebp),%eax
 8633046:	0f 95 c0             	setne  %al
 8633049:	84 c0                	test   %al,%al
 863304b:	74 0a                	je     8633057 <_ZN13TimerDBUpdate12dispatch_sigEiij+0xfd>
 863304d:	b8 00 00 00 00       	mov    $0x0,%eax
 8633052:	e9 a8 00 00 00       	jmp    86330ff <_ZN13TimerDBUpdate12dispatch_sigEiij+0x1a5>
 8633057:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 863305b:	74 17                	je     8633074 <_ZN13TimerDBUpdate12dispatch_sigEiij+0x11a>
 863305d:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8633060:	89 04 24             	mov    %eax,(%esp)
 8633063:	e8 e6 8b a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8633068:	3b 45 14             	cmp    0x14(%ebp),%eax
 863306b:	74 07                	je     8633074 <_ZN13TimerDBUpdate12dispatch_sigEiij+0x11a>
 863306d:	b8 01 00 00 00       	mov    $0x1,%eax
 8633072:	eb 05                	jmp    8633079 <_ZN13TimerDBUpdate12dispatch_sigEiij+0x11f>
 8633074:	b8 00 00 00 00       	mov    $0x0,%eax
 8633079:	84 c0                	test   %al,%al
 863307b:	74 07                	je     8633084 <_ZN13TimerDBUpdate12dispatch_sigEiij+0x12a>
 863307d:	b8 00 00 00 00       	mov    $0x0,%eax
 8633082:	eb 7b                	jmp    86330ff <_ZN13TimerDBUpdate12dispatch_sigEiij+0x1a5>
 8633084:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8633087:	89 04 24             	mov    %eax,(%esp)
 863308a:	e8 e1 01 02 00       	call   8653270 <_ZN5CUser10UpdateDataEv>
 863308f:	8b 45 d8             	mov    -0x28(%ebp),%eax
 8633092:	89 04 24             	mov    %eax,(%esp)
 8633095:	e8 b4 8b a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 863309a:	89 c7                	mov    %eax,%edi
 863309c:	8b 45 d8             	mov    -0x28(%ebp),%eax
 863309f:	89 04 24             	mov    %eax,(%esp)
 86330a2:	e8 eb c5 bf ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 86330a7:	89 c6                	mov    %eax,%esi
 86330a9:	c7 04 24 2c 01 00 00 	movl   $0x12c,(%esp)
 86330b0:	e8 d2 ea 07 00       	call   86b1b87 <_Z12get_rand_inti>
 86330b5:	05 58 02 00 00       	add    $0x258,%eax
 86330ba:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 86330bd:	8b 45 d8             	mov    -0x28(%ebp),%eax
 86330c0:	89 04 24             	mov    %eax,(%esp)
 86330c3:	e8 ce 5b a9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 86330c8:	89 c3                	mov    %eax,%ebx
 86330ca:	e8 ad 33 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 86330cf:	89 7c 24 18          	mov    %edi,0x18(%esp)
 86330d3:	89 74 24 14          	mov    %esi,0x14(%esp)
 86330d7:	8b 55 d4             	mov    -0x2c(%ebp),%edx
 86330da:	89 54 24 10          	mov    %edx,0x10(%esp)
 86330de:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 86330e5:	00 
 86330e6:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 86330ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86330f1:	00 
 86330f2:	89 04 24             	mov    %eax,(%esp)
 86330f5:	e8 1c dd ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 86330fa:	b8 01 00 00 00       	mov    $0x1,%eax
 86330ff:	83 c4 4c             	add    $0x4c,%esp
 8633102:	5b                   	pop    %ebx
 8633103:	5e                   	pop    %esi
 8633104:	5f                   	pop    %edi
 8633105:	5d                   	pop    %ebp
 8633106:	c3                   	ret
 8633107:	90                   	nop

```

```c
// TimerDBUpdate::dispatch_sig @ 0x8632f5a

/* TimerDBUpdate::dispatch_sig(int, int, unsigned int) */

bool __thiscall
TimerDBUpdate::dispatch_sig(TimerDBUpdate *this,int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  CUserCharacInfo *this_00;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TimerQueue *pTVar8;
  
  iVar2 = G_CGameManager();
  this_00 = (CUserCharacInfo *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUserCharacInfo *)0x0) {
    return false;
  }
  iVar2 = CUserCharacInfo::GetLoginTick(this_00);
  iVar3 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  iVar2 = (iVar3 - iVar2) / 0xe10;
  if ((iVar2 < 1) || (1 < iVar2)) {
    if ((0xb < iVar2) && (iVar2 < 0xd)) {
      APSystem::CUserProc::ClearActionAndSendtoUser(this_00,0x24,0,0);
    }
  }
  else {
    APSystem::CUserProc::ClearActionAndSendtoUser(this_00,0x23,0,0);
  }
  iVar2 = CUserCharacInfo::GetLoginTick(this_00);
  if (iVar2 != param_2) {
    return false;
  }
  if ((param_3 == 0) || (uVar4 = CUserCharacInfo::getCurCharacNo(this_00), uVar4 == param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    CUser::UpdateData((CUser *)this_00);
    uVar5 = CUserCharacInfo::getCurCharacNo(this_00);
    uVar6 = CUserCharacInfo::GetLoginTick(this_00);
    iVar2 = get_rand_int(300);
    uVar7 = CUser::GetUID((CUser *)this_00);
    pTVar8 = (TimerQueue *)G_TimerQueue();
    TimerQueue::InsertTimer(pTVar8,0,uVar7,1,iVar2 + 600,uVar6,uVar5);
  }
  return !bVar1;
}

```

