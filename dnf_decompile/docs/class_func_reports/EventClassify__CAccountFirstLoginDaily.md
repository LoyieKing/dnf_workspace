# EventClassify__CAccountFirstLoginDaily

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## do_action

```asm
// === 0810dfe8 EventClassify::CAccountFirstLoginDaily::do_action  [0x0810dfe8-0x810e063] ===
 810dfe8:	55                   	push   %ebp
 810dfe9:	89 e5                	mov    %esp,%ebp
 810dfeb:	56                   	push   %esi
 810dfec:	53                   	push   %ebx
 810dfed:	83 ec 20             	sub    $0x20,%esp
 810dff0:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 810dff4:	74 65                	je     810e05b <_ZN13EventClassify23CAccountFirstLoginDaily9do_actionEiP5CUserSt6bitsetILj32EE+0x73>
 810dff6:	8b 45 08             	mov    0x8(%ebp),%eax
 810dff9:	8b 40 1c             	mov    0x1c(%eax),%eax
 810dffc:	83 c0 0c             	add    $0xc,%eax
 810dfff:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 810e006:	00 
 810e007:	89 44 24 08          	mov    %eax,0x8(%esp)
 810e00b:	8b 45 10             	mov    0x10(%ebp),%eax
 810e00e:	89 44 24 04          	mov    %eax,0x4(%esp)
 810e012:	8d 45 f7             	lea    -0x9(%ebp),%eax
 810e015:	89 04 24             	mov    %eax,(%esp)
 810e018:	e8 15 ef ff ff       	call   810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>
 810e01d:	8b 45 10             	mov    0x10(%ebp),%eax
 810e020:	89 04 24             	mov    %eax,(%esp)
 810e023:	e8 26 dc fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 810e028:	89 c6                	mov    %eax,%esi
 810e02a:	8b 45 10             	mov    0x10(%ebp),%eax
 810e02d:	89 04 24             	mov    %eax,(%esp)
 810e030:	e8 39 c3 fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 810e035:	89 c3                	mov    %eax,%ebx
 810e037:	8b 45 10             	mov    0x10(%ebp),%eax
 810e03a:	89 04 24             	mov    %eax,(%esp)
 810e03d:	e8 54 ac fb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 810e042:	8b 55 0c             	mov    0xc(%ebp),%edx
 810e045:	89 54 24 0c          	mov    %edx,0xc(%esp)
 810e049:	89 74 24 08          	mov    %esi,0x8(%esp)
 810e04d:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810e051:	89 04 24             	mov    %eax,(%esp)
 810e054:	e8 0b 0a 33 00       	call   843ea64 <_ZN35DB_InsertAccountFirstLoginDailyFlag11makeRequestEijji>
 810e059:	eb 01                	jmp    810e05c <_ZN13EventClassify23CAccountFirstLoginDaily9do_actionEiP5CUserSt6bitsetILj32EE+0x74>
 810e05b:	90                   	nop
 810e05c:	83 c4 20             	add    $0x20,%esp
 810e05f:	5b                   	pop    %ebx
 810e060:	5e                   	pop    %esi
 810e061:	5d                   	pop    %ebp
 810e062:	c3                   	ret
 810e063:	90                   	nop

```

```c
// EventClassify::CAccountFirstLoginDaily::do_action @ 0x810dfe8

/* EventClassify::CAccountFirstLoginDaily::do_action(int, CUser*, std::bitset<32u>) */

void EventClassify::CAccountFirstLoginDaily::do_action
               (int param_1,int param_2,CUserCharacInfo *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CEventActionMng local_d;
  
  if (param_3 != (CUserCharacInfo *)0x0) {
    CEventActionMng::process_action_send_mail
              (&local_d,(CUser *)param_3,(Action_SendMail *)(*(int *)(param_1 + 0x1c) + 0xc),true);
    uVar1 = CUserCharacInfo::getCurCharacNo(param_3);
    uVar2 = CUser::get_acc_id((CUser *)param_3);
    iVar3 = CUser::GetUID((CUser *)param_3);
    DB_InsertAccountFirstLoginDailyFlag::makeRequest(iVar3,uVar2,uVar1,param_2);
  }
  return;
}

```

---

## set_event_data

```asm
// === 0810dfc6 EventClassify::CAccountFirstLoginDaily::set_event_data  [0x0810dfc6-0x810dfe7] ===
 810dfc6:	55                   	push   %ebp
 810dfc7:	89 e5                	mov    %esp,%ebp
 810dfc9:	83 ec 18             	sub    $0x18,%esp
 810dfcc:	8b 45 08             	mov    0x8(%ebp),%eax
 810dfcf:	8b 55 10             	mov    0x10(%ebp),%edx
 810dfd2:	89 54 24 08          	mov    %edx,0x8(%esp)
 810dfd6:	8b 55 0c             	mov    0xc(%ebp),%edx
 810dfd9:	89 54 24 04          	mov    %edx,0x4(%esp)
 810dfdd:	89 04 24             	mov    %eax,(%esp)
 810dfe0:	e8 f5 fe ff ff       	call   810deda <_ZN13EventClassify18CAccountFirstLogin14set_event_dataEiP17InGameEventScript>
 810dfe5:	c9                   	leave
 810dfe6:	c3                   	ret
 810dfe7:	90                   	nop

```

```c
// EventClassify::CAccountFirstLoginDaily::set_event_data @ 0x810dfc6

/* EventClassify::CAccountFirstLoginDaily::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CAccountFirstLoginDaily::set_event_data
          (CAccountFirstLoginDaily *this,int param_1,InGameEventScript *param_2)

{
  CAccountFirstLogin::set_event_data((CAccountFirstLogin *)this,param_1,param_2);
  return;
}

```

