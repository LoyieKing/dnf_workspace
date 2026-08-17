# TimerStamina

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08633cbc TimerStamina::dispatch_sig  [0x08633cbc-0x8633e13] ===
 8633cbc:	55                   	push   %ebp
 8633cbd:	89 e5                	mov    %esp,%ebp
 8633cbf:	57                   	push   %edi
 8633cc0:	56                   	push   %esi
 8633cc1:	53                   	push   %ebx
 8633cc2:	83 ec 3c             	sub    $0x3c,%esp
 8633cc5:	e8 c4 84 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8633cca:	c7 44 24 08 04 00 00 	movl   $0x4,0x8(%esp)
 8633cd1:	00 
 8633cd2:	8b 55 0c             	mov    0xc(%ebp),%edx
 8633cd5:	89 54 24 04          	mov    %edx,0x4(%esp)
 8633cd9:	89 04 24             	mov    %eax,(%esp)
 8633cdc:	e8 c3 0a c6 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8633ce1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8633ce4:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
 8633ce8:	75 0a                	jne    8633cf4 <_ZN12TimerStamina12dispatch_sigEiij+0x38>
 8633cea:	b8 00 00 00 00       	mov    $0x0,%eax
 8633cef:	e9 18 01 00 00       	jmp    8633e0c <_ZN12TimerStamina12dispatch_sigEiij+0x150>
 8633cf4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8633cf7:	89 04 24             	mov    %eax,(%esp)
 8633cfa:	e8 93 b9 bf ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8633cff:	3b 45 10             	cmp    0x10(%ebp),%eax
 8633d02:	0f 95 c0             	setne  %al
 8633d05:	84 c0                	test   %al,%al
 8633d07:	74 0a                	je     8633d13 <_ZN12TimerStamina12dispatch_sigEiij+0x57>
 8633d09:	b8 00 00 00 00       	mov    $0x0,%eax
 8633d0e:	e9 f9 00 00 00       	jmp    8633e0c <_ZN12TimerStamina12dispatch_sigEiij+0x150>
 8633d13:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8633d17:	74 1f                	je     8633d38 <_ZN12TimerStamina12dispatch_sigEiij+0x7c>
 8633d19:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8633d20:	ff 
 8633d21:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8633d24:	89 04 24             	mov    %eax,(%esp)
 8633d27:	e8 74 a2 01 00       	call   864dfa0 <_ZN5CUser13get_charac_noEi>
 8633d2c:	3b 45 14             	cmp    0x14(%ebp),%eax
 8633d2f:	74 07                	je     8633d38 <_ZN12TimerStamina12dispatch_sigEiij+0x7c>
 8633d31:	b8 01 00 00 00       	mov    $0x1,%eax
 8633d36:	eb 05                	jmp    8633d3d <_ZN12TimerStamina12dispatch_sigEiij+0x81>
 8633d38:	b8 00 00 00 00       	mov    $0x0,%eax
 8633d3d:	84 c0                	test   %al,%al
 8633d3f:	74 0a                	je     8633d4b <_ZN12TimerStamina12dispatch_sigEiij+0x8f>
 8633d41:	b8 00 00 00 00       	mov    $0x0,%eax
 8633d46:	e9 c1 00 00 00       	jmp    8633e0c <_ZN12TimerStamina12dispatch_sigEiij+0x150>
 8633d4b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8633d4e:	89 04 24             	mov    %eax,(%esp)
 8633d51:	e8 f8 3a 02 00       	call   865784e <_ZN5CUser15recover_staminaEv>
 8633d56:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8633d59:	89 04 24             	mov    %eax,(%esp)
 8633d5c:	e8 91 80 00 00       	call   863bdf2 <_ZN15CUserCharacInfo36IncCurCharacLuckPointUpdateTimeCountEv>
 8633d61:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8633d64:	89 04 24             	mov    %eax,(%esp)
 8633d67:	e8 64 80 00 00       	call   863bdd0 <_ZN15CUserCharacInfo36GetCurCharacLuckPointUpdateTimeCountEv>
 8633d6c:	89 c3                	mov    %eax,%ebx
 8633d6e:	e8 28 84 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8633d73:	8b 80 ec 00 00 00    	mov    0xec(%eax),%eax
 8633d79:	39 c3                	cmp    %eax,%ebx
 8633d7b:	0f 9d c0             	setge  %al
 8633d7e:	84 c0                	test   %al,%al
 8633d80:	74 2d                	je     8633daf <_ZN12TimerStamina12dispatch_sigEiij+0xf3>
 8633d82:	e8 14 84 a9 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8633d87:	8b 90 e8 00 00 00    	mov    0xe8(%eax),%edx
 8633d8d:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8633d90:	89 54 24 04          	mov    %edx,0x4(%esp)
 8633d94:	89 04 24             	mov    %eax,(%esp)
 8633d97:	e8 ae ba bf ff       	call   822f84a <_ZN15CUserCharacInfo21IncCurCharacLuckPointEi>
 8633d9c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8633d9f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8633da6:	00 
 8633da7:	89 04 24             	mov    %eax,(%esp)
 8633daa:	e8 5d 85 eb ff       	call   84ec30c <_ZN15CUserCharacInfo36SetCurCharacLuckPointUpdateTimeCountEi>
 8633daf:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8633db2:	89 04 24             	mov    %eax,(%esp)
 8633db5:	e8 94 7e a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8633dba:	89 c7                	mov    %eax,%edi
 8633dbc:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8633dbf:	89 04 24             	mov    %eax,(%esp)
 8633dc2:	e8 cb b8 bf ff       	call   822f692 <_ZN15CUserCharacInfo12GetLoginTickEv>
 8633dc7:	89 c6                	mov    %eax,%esi
 8633dc9:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8633dcc:	89 04 24             	mov    %eax,(%esp)
 8633dcf:	e8 c2 4e a9 ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 8633dd4:	89 c3                	mov    %eax,%ebx
 8633dd6:	e8 a1 26 ac ff       	call   80f647c <_Z12G_TimerQueuev>
 8633ddb:	89 7c 24 18          	mov    %edi,0x18(%esp)
 8633ddf:	89 74 24 14          	mov    %esi,0x14(%esp)
 8633de3:	c7 44 24 10 3c 00 00 	movl   $0x3c,0x10(%esp)
 8633dea:	00 
 8633deb:	c7 44 24 0c 02 00 00 	movl   $0x2,0xc(%esp)
 8633df2:	00 
 8633df3:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 8633df7:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8633dfe:	00 
 8633dff:	89 04 24             	mov    %eax,(%esp)
 8633e02:	e8 0f d0 ff ff       	call   8630e16 <_ZN10TimerQueue11InsertTimerEN10TimerEntry8OBJ_TYPEEi13TIMER_MESSAGEiij>
 8633e07:	b8 01 00 00 00       	mov    $0x1,%eax
 8633e0c:	83 c4 3c             	add    $0x3c,%esp
 8633e0f:	5b                   	pop    %ebx
 8633e10:	5e                   	pop    %esi
 8633e11:	5f                   	pop    %edi
 8633e12:	5d                   	pop    %ebp
 8633e13:	c3                   	ret

```

```c
// TimerStamina::dispatch_sig @ 0x8633cbc

/* TimerStamina::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerStamina::dispatch_sig(TimerStamina *this,int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  CUserCharacInfo *this_00;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  TimerQueue *pTVar8;
  
  iVar2 = G_CGameManager();
  this_00 = (CUserCharacInfo *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUserCharacInfo *)0x0) {
    return 0;
  }
  iVar2 = CUserCharacInfo::GetLoginTick(this_00);
  if (iVar2 == param_2) {
    if ((param_3 == 0) || (uVar3 = CUser::get_charac_no((CUser *)this_00,-1), uVar3 == param_3)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else {
      CUser::recover_stamina((CUser *)this_00);
      CUserCharacInfo::IncCurCharacLuckPointUpdateTimeCount(this_00);
      iVar2 = CUserCharacInfo::GetCurCharacLuckPointUpdateTimeCount(this_00);
      iVar5 = G_CDataManager();
      if (*(int *)(iVar5 + 0xec) <= iVar2) {
        iVar2 = G_CDataManager();
        CUserCharacInfo::IncCurCharacLuckPoint(this_00,*(int *)(iVar2 + 0xe8));
        CUserCharacInfo::SetCurCharacLuckPointUpdateTimeCount(this_00,0);
      }
      uVar4 = CUserCharacInfo::getCurCharacNo(this_00);
      uVar6 = CUserCharacInfo::GetLoginTick(this_00);
      uVar7 = CUser::GetUID((CUser *)this_00);
      pTVar8 = (TimerQueue *)G_TimerQueue();
      TimerQueue::InsertTimer(pTVar8,0,uVar7,2,0x3c,uVar6,uVar4);
      uVar4 = 1;
    }
    return uVar4;
  }
  return 0;
}

```

