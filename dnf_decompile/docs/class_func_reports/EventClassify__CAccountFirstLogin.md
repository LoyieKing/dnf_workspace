# EventClassify__CAccountFirstLogin

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 4

---

## do_action

```asm
// === 0810df04 EventClassify::CAccountFirstLogin::do_action  [0x0810df04-0x810dfc5] ===
 810df04:	55                   	push   %ebp
 810df05:	89 e5                	mov    %esp,%ebp
 810df07:	56                   	push   %esi
 810df08:	53                   	push   %ebx
 810df09:	83 ec 30             	sub    $0x30,%esp
 810df0c:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 810df10:	0f 84 a8 00 00 00    	je     810dfbe <_ZN13EventClassify18CAccountFirstLogin9do_actionEiP5CUserSt6bitsetILj32EE+0xba>
 810df16:	8b 45 08             	mov    0x8(%ebp),%eax
 810df19:	8b 40 1c             	mov    0x1c(%eax),%eax
 810df1c:	83 c0 0c             	add    $0xc,%eax
 810df1f:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 810df26:	00 
 810df27:	89 44 24 08          	mov    %eax,0x8(%esp)
 810df2b:	8b 45 10             	mov    0x10(%ebp),%eax
 810df2e:	89 44 24 04          	mov    %eax,0x4(%esp)
 810df32:	8d 45 f3             	lea    -0xd(%ebp),%eax
 810df35:	89 04 24             	mov    %eax,(%esp)
 810df38:	e8 f5 ef ff ff       	call   810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>
 810df3d:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810df44:	e8 5e c4 fc ff       	call   80da3a7 <_Z11G_GameWorldv>
 810df49:	89 04 24             	mov    %eax,(%esp)
 810df4c:	e8 cd 33 fe ff       	call   80f131e <_ZNK9GameWorld26IsIntegratedPvPBaseChannelEv>
 810df51:	84 c0                	test   %al,%al
 810df53:	74 13                	je     810df68 <_ZN13EventClassify18CAccountFirstLogin9do_actionEiP5CUserSt6bitsetILj32EE+0x64>
 810df55:	8b 45 10             	mov    0x10(%ebp),%eax
 810df58:	89 04 24             	mov    %eax,(%esp)
 810df5b:	e8 30 dd fb ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 810df60:	0f b6 c0             	movzbl %al,%eax
 810df63:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810df66:	eb 11                	jmp    810df79 <_ZN13EventClassify18CAccountFirstLogin9do_actionEiP5CUserSt6bitsetILj32EE+0x75>
 810df68:	e8 14 e2 fb ff       	call   80cc181 <_Z14G_CEnvironmentv>
 810df6d:	8b 80 78 03 00 00    	mov    0x378(%eax),%eax
 810df73:	0f b6 c0             	movzbl %al,%eax
 810df76:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810df79:	8b 45 10             	mov    0x10(%ebp),%eax
 810df7c:	89 04 24             	mov    %eax,(%esp)
 810df7f:	e8 ca dc fb ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 810df84:	89 c6                	mov    %eax,%esi
 810df86:	8b 45 10             	mov    0x10(%ebp),%eax
 810df89:	89 04 24             	mov    %eax,(%esp)
 810df8c:	e8 dd c3 fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 810df91:	89 c3                	mov    %eax,%ebx
 810df93:	8b 45 10             	mov    0x10(%ebp),%eax
 810df96:	89 04 24             	mov    %eax,(%esp)
 810df99:	e8 f8 ac fb ff       	call   80c8c96 <_ZNK5CUser6GetUIDEv>
 810df9e:	8b 55 0c             	mov    0xc(%ebp),%edx
 810dfa1:	89 54 24 10          	mov    %edx,0x10(%esp)
 810dfa5:	89 74 24 0c          	mov    %esi,0xc(%esp)
 810dfa9:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810dfac:	89 54 24 08          	mov    %edx,0x8(%esp)
 810dfb0:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 810dfb4:	89 04 24             	mov    %eax,(%esp)
 810dfb7:	e8 de 07 33 00       	call   843e79a <_ZN30DB_InsertAccountFirstLoginFlag11makeRequestEijiji>
 810dfbc:	eb 01                	jmp    810dfbf <_ZN13EventClassify18CAccountFirstLogin9do_actionEiP5CUserSt6bitsetILj32EE+0xbb>
 810dfbe:	90                   	nop
 810dfbf:	83 c4 30             	add    $0x30,%esp
 810dfc2:	5b                   	pop    %ebx
 810dfc3:	5e                   	pop    %esi
 810dfc4:	5d                   	pop    %ebp
 810dfc5:	c3                   	ret

```

```c
// EventClassify::CAccountFirstLogin::do_action @ 0x810df04

/* EventClassify::CAccountFirstLogin::do_action(int, CUser*, std::bitset<32u>) */

void EventClassify::CAccountFirstLogin::do_action(int param_1,int param_2,CUser *param_3)

{
  char cVar1;
  GameWorld *this;
  uint uVar2;
  uint uVar3;
  int iVar4;
  CEventActionMng local_11;
  uint local_10;
  
  if (param_3 != (CUser *)0x0) {
    CEventActionMng::process_action_send_mail
              (&local_11,param_3,(Action_SendMail *)(*(int *)(param_1 + 0x1c) + 0xc),true);
    local_10 = 0;
    this = (GameWorld *)G_GameWorld();
    cVar1 = GameWorld::IsIntegratedPvPBaseChannel(this);
    if (cVar1 == '\0') {
      iVar4 = G_CEnvironment();
      local_10 = *(uint *)(iVar4 + 0x378);
    }
    else {
      local_10 = CUser::GetServerGroup(param_3);
    }
    local_10 = local_10 & 0xff;
    uVar2 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)param_3);
    uVar3 = CUser::get_acc_id(param_3);
    iVar4 = CUser::GetUID(param_3);
    DB_InsertAccountFirstLoginFlag::makeRequest(iVar4,uVar3,local_10,uVar2,param_2);
  }
  return;
}

```

---

## get_db_table_name

```asm
// === 0810debe EventClassify::CAccountFirstLogin::get_db_table_name  [0x0810debe-0x810decb] ===
 810debe:	55                   	push   %ebp
 810debf:	89 e5                	mov    %esp,%ebp
 810dec1:	8b 45 08             	mov    0x8(%ebp),%eax
 810dec4:	8b 40 1c             	mov    0x1c(%eax),%eax
 810dec7:	83 c0 08             	add    $0x8,%eax
 810deca:	5d                   	pop    %ebp
 810decb:	c3                   	ret

```

```c
// EventClassify::CAccountFirstLogin::get_db_table_name @ 0x810debe

/* EventClassify::CAccountFirstLogin::get_db_table_name() */

int __thiscall EventClassify::CAccountFirstLogin::get_db_table_name(CAccountFirstLogin *this)

{
  return *(int *)(this + 0x1c) + 8;
}

```

---

## get_mail_data

```asm
// === 0810decc EventClassify::CAccountFirstLogin::get_mail_data  [0x0810decc-0x810ded9] ===
 810decc:	55                   	push   %ebp
 810decd:	89 e5                	mov    %esp,%ebp
 810decf:	8b 45 08             	mov    0x8(%ebp),%eax
 810ded2:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ded5:	83 c0 0c             	add    $0xc,%eax
 810ded8:	5d                   	pop    %ebp
 810ded9:	c3                   	ret

```

```c
// EventClassify::CAccountFirstLogin::get_mail_data @ 0x810decc

/* EventClassify::CAccountFirstLogin::get_mail_data() */

int __thiscall EventClassify::CAccountFirstLogin::get_mail_data(CAccountFirstLogin *this)

{
  return *(int *)(this + 0x1c) + 0xc;
}

```

---

## set_event_data

```asm
// === 0810deda EventClassify::CAccountFirstLogin::set_event_data  [0x0810deda-0x810df03] ===
 810deda:	55                   	push   %ebp
 810dedb:	89 e5                	mov    %esp,%ebp
 810dedd:	83 ec 18             	sub    $0x18,%esp
 810dee0:	8b 45 08             	mov    0x8(%ebp),%eax
 810dee3:	8b 00                	mov    (%eax),%eax
 810dee5:	83 c0 18             	add    $0x18,%eax
 810dee8:	8b 08                	mov    (%eax),%ecx
 810deea:	8b 45 08             	mov    0x8(%ebp),%eax
 810deed:	8b 55 0c             	mov    0xc(%ebp),%edx
 810def0:	89 54 24 04          	mov    %edx,0x4(%esp)
 810def4:	89 04 24             	mov    %eax,(%esp)
 810def7:	ff d1                	call   *%ecx
 810def9:	8b 55 10             	mov    0x10(%ebp),%edx
 810defc:	8b 45 08             	mov    0x8(%ebp),%eax
 810deff:	89 50 1c             	mov    %edx,0x1c(%eax)
 810df02:	c9                   	leave
 810df03:	c3                   	ret

```

```c
// EventClassify::CAccountFirstLogin::set_event_data @ 0x810deda

/* EventClassify::CAccountFirstLogin::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CAccountFirstLogin::set_event_data
          (CAccountFirstLogin *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}

```

