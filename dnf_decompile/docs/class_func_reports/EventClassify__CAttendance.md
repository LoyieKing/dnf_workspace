# EventClassify__CAttendance

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 9

---

## get_db_table_name

```asm
// === 0810e7cc EventClassify::CAttendance::get_db_table_name  [0x0810e7cc-0x810e7d9] ===
 810e7cc:	55                   	push   %ebp
 810e7cd:	89 e5                	mov    %esp,%ebp
 810e7cf:	8b 45 08             	mov    0x8(%ebp),%eax
 810e7d2:	8b 40 1c             	mov    0x1c(%eax),%eax
 810e7d5:	83 c0 08             	add    $0x8,%eax
 810e7d8:	5d                   	pop    %ebp
 810e7d9:	c3                   	ret

```

```c
// EventClassify::CAttendance::get_db_table_name @ 0x810e7cc

/* EventClassify::CAttendance::get_db_table_name() */

int __thiscall EventClassify::CAttendance::get_db_table_name(CAttendance *this)

{
  return *(int *)(this + 0x1c) + 8;
}

```

---

## get_fatigue_condition

```asm
// === 0810e7e8 EventClassify::CAttendance::get_fatigue_condition  [0x0810e7e8-0x810e7f5] ===
 810e7e8:	55                   	push   %ebp
 810e7e9:	89 e5                	mov    %esp,%ebp
 810e7eb:	8b 45 08             	mov    0x8(%ebp),%eax
 810e7ee:	8b 40 1c             	mov    0x1c(%eax),%eax
 810e7f1:	8b 40 0c             	mov    0xc(%eax),%eax
 810e7f4:	5d                   	pop    %ebp
 810e7f5:	c3                   	ret

```

```c
// EventClassify::CAttendance::get_fatigue_condition @ 0x810e7e8

/* EventClassify::CAttendance::get_fatigue_condition() */

undefined4 __thiscall EventClassify::CAttendance::get_fatigue_condition(CAttendance *this)

{
  return *(undefined4 *)(*(int *)(this + 0x1c) + 0xc);
}

```

---

## get_final_day_condition

```asm
// === 0810e7f6 EventClassify::CAttendance::get_final_day_condition  [0x0810e7f6-0x810e803] ===
 810e7f6:	55                   	push   %ebp
 810e7f7:	89 e5                	mov    %esp,%ebp
 810e7f9:	8b 45 08             	mov    0x8(%ebp),%eax
 810e7fc:	8b 40 1c             	mov    0x1c(%eax),%eax
 810e7ff:	8b 40 24             	mov    0x24(%eax),%eax
 810e802:	5d                   	pop    %ebp
 810e803:	c3                   	ret

```

```c
// EventClassify::CAttendance::get_final_day_condition @ 0x810e7f6

/* EventClassify::CAttendance::get_final_day_condition() */

undefined4 __thiscall EventClassify::CAttendance::get_final_day_condition(CAttendance *this)

{
  return *(undefined4 *)(*(int *)(this + 0x1c) + 0x24);
}

```

---

## get_mail_data

```asm
// === 0810e7da EventClassify::CAttendance::get_mail_data  [0x0810e7da-0x810e7e7] ===
 810e7da:	55                   	push   %ebp
 810e7db:	89 e5                	mov    %esp,%ebp
 810e7dd:	8b 45 08             	mov    0x8(%ebp),%eax
 810e7e0:	8b 40 1c             	mov    0x1c(%eax),%eax
 810e7e3:	83 c0 2c             	add    $0x2c,%eax
 810e7e6:	5d                   	pop    %ebp
 810e7e7:	c3                   	ret

```

```c
// EventClassify::CAttendance::get_mail_data @ 0x810e7da

/* EventClassify::CAttendance::get_mail_data() */

int __thiscall EventClassify::CAttendance::get_mail_data(CAttendance *this)

{
  return *(int *)(this + 0x1c) + 0x2c;
}

```

---

## is_eventing

```asm
// === 0810e75c EventClassify::CAttendance::is_eventing  [0x0810e75c-0x810e7cb] ===
 810e75c:	55                   	push   %ebp
 810e75d:	89 e5                	mov    %esp,%ebp
 810e75f:	83 ec 28             	sub    $0x28,%esp
 810e762:	8b 45 08             	mov    0x8(%ebp),%eax
 810e765:	89 04 24             	mov    %eax,(%esp)
 810e768:	e8 a9 c8 ff ff       	call   810b016 <_ZN13EventClassify12CEventEntity11is_eventingEv>
 810e76d:	84 c0                	test   %al,%al
 810e76f:	74 53                	je     810e7c4 <_ZN13EventClassify11CAttendance11is_eventingEv+0x68>
 810e771:	a1 30 f7 41 09       	mov    0x941f730,%eax
 810e776:	c7 44 24 04 56 00 00 	movl   $0x56,0x4(%esp)
 810e77d:	00 
 810e77e:	89 04 24             	mov    %eax,(%esp)
 810e781:	e8 12 72 00 00       	call   8115998 <_ZN13CEventManager14GetRepeatEventEi>
 810e786:	89 45 f4             	mov    %eax,-0xc(%ebp)
 810e789:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 810e78d:	74 25                	je     810e7b4 <_ZN13EventClassify11CAttendance11is_eventingEv+0x58>
 810e78f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810e792:	8b 00                	mov    (%eax),%eax
 810e794:	83 c0 34             	add    $0x34,%eax
 810e797:	8b 10                	mov    (%eax),%edx
 810e799:	8b 45 f4             	mov    -0xc(%ebp),%eax
 810e79c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810e7a3:	00 
 810e7a4:	89 04 24             	mov    %eax,(%esp)
 810e7a7:	ff d2                	call   *%edx
 810e7a9:	84 c0                	test   %al,%al
 810e7ab:	74 07                	je     810e7b4 <_ZN13EventClassify11CAttendance11is_eventingEv+0x58>
 810e7ad:	b8 01 00 00 00       	mov    $0x1,%eax
 810e7b2:	eb 05                	jmp    810e7b9 <_ZN13EventClassify11CAttendance11is_eventingEv+0x5d>
 810e7b4:	b8 00 00 00 00       	mov    $0x0,%eax
 810e7b9:	84 c0                	test   %al,%al
 810e7bb:	74 07                	je     810e7c4 <_ZN13EventClassify11CAttendance11is_eventingEv+0x68>
 810e7bd:	b8 01 00 00 00       	mov    $0x1,%eax
 810e7c2:	eb 05                	jmp    810e7c9 <_ZN13EventClassify11CAttendance11is_eventingEv+0x6d>
 810e7c4:	b8 00 00 00 00       	mov    $0x0,%eax
 810e7c9:	c9                   	leave
 810e7ca:	c3                   	ret
 810e7cb:	90                   	nop

```

```c
// EventClassify::CAttendance::is_eventing @ 0x810e75c

/* EventClassify::CAttendance::is_eventing() */

undefined4 __thiscall EventClassify::CAttendance::is_eventing(CAttendance *this)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = CEventEntity::is_eventing((CEventEntity *)this);
  if (cVar2 != '\0') {
    piVar3 = (int *)CEventManager::GetRepeatEvent(GlobalData::s_event_manager,0x56);
    if ((piVar3 == (int *)0x0) || (cVar2 = (**(code **)(*piVar3 + 0x34))(piVar3,0), cVar2 == '\0'))
    {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}

```

---

## send_attend_final_rward_item

```asm
// === 0810e9c0 EventClassify::CAttendance::send_attend_final_rward_item  [0x0810e9c0-0x810eadb] ===
 810e9c0:	55                   	push   %ebp
 810e9c1:	89 e5                	mov    %esp,%ebp
 810e9c3:	53                   	push   %ebx
 810e9c4:	83 ec 44             	sub    $0x44,%esp
 810e9c7:	8b 45 0c             	mov    0xc(%ebp),%eax
 810e9ca:	89 04 24             	mov    %eax,(%esp)
 810e9cd:	e8 9c b9 fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 810e9d2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810e9d9:	00 
 810e9da:	89 04 24             	mov    %eax,(%esp)
 810e9dd:	e8 69 a6 ff ff       	call   810904b <_Z14NumberToStringji>
 810e9e2:	89 c3                	mov    %eax,%ebx
 810e9e4:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810e9eb:	00 
 810e9ec:	c7 44 24 08 ba 05 00 	movl   $0x5ba,0x8(%esp)
 810e9f3:	00 
 810e9f4:	c7 44 24 04 80 d4 b4 	movl   $0x8b4d480,0x4(%esp)
 810e9fb:	08 
 810e9fc:	8d 45 e0             	lea    -0x20(%ebp),%eax
 810e9ff:	89 04 24             	mov    %eax,(%esp)
 810ea02:	e8 11 0d 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810ea07:	8b 45 10             	mov    0x10(%ebp),%eax
 810ea0a:	89 44 24 10          	mov    %eax,0x10(%esp)
 810ea0e:	8b 45 14             	mov    0x14(%ebp),%eax
 810ea11:	89 44 24 0c          	mov    %eax,0xc(%esp)
 810ea15:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810ea19:	c7 44 24 04 2c c2 b4 	movl   $0x8b4c22c,0x4(%esp)
 810ea20:	08 
 810ea21:	8d 45 e0             	lea    -0x20(%ebp),%eax
 810ea24:	89 04 24             	mov    %eax,(%esp)
 810ea27:	e8 5c 0d 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810ea2c:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 810ea33:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 810ea3a:	eb 1e                	jmp    810ea5a <_ZN13EventClassify11CAttendance28send_attend_final_rward_itemEP5CUserii+0x9a>
 810ea3c:	8b 45 10             	mov    0x10(%ebp),%eax
 810ea3f:	8b 55 f4             	mov    -0xc(%ebp),%edx
 810ea42:	89 54 24 04          	mov    %edx,0x4(%esp)
 810ea46:	89 04 24             	mov    %eax,(%esp)
 810ea49:	e8 e0 38 78 00       	call   889232e <_Z13isSetBit_Uintji>
 810ea4e:	84 c0                	test   %al,%al
 810ea50:	74 04                	je     810ea56 <_ZN13EventClassify11CAttendance28send_attend_final_rward_itemEP5CUserii+0x96>
 810ea52:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 810ea56:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 810ea5a:	83 7d f4 1f          	cmpl   $0x1f,-0xc(%ebp)
 810ea5e:	0f 9e c0             	setle  %al
 810ea61:	84 c0                	test   %al,%al
 810ea63:	75 d7                	jne    810ea3c <_ZN13EventClassify11CAttendance28send_attend_final_rward_itemEP5CUserii+0x7c>
 810ea65:	8b 45 14             	mov    0x14(%ebp),%eax
 810ea68:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 810ea6b:	75 69                	jne    810ead6 <_ZN13EventClassify11CAttendance28send_attend_final_rward_itemEP5CUserii+0x116>
 810ea6d:	8b 45 08             	mov    0x8(%ebp),%eax
 810ea70:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ea73:	8b 55 08             	mov    0x8(%ebp),%edx
 810ea76:	8b 52 1c             	mov    0x1c(%edx),%edx
 810ea79:	8b 52 1c             	mov    0x1c(%edx),%edx
 810ea7c:	89 50 4c             	mov    %edx,0x4c(%eax)
 810ea7f:	8b 45 08             	mov    0x8(%ebp),%eax
 810ea82:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ea85:	8b 55 08             	mov    0x8(%ebp),%edx
 810ea88:	8b 52 1c             	mov    0x1c(%edx),%edx
 810ea8b:	8b 52 20             	mov    0x20(%edx),%edx
 810ea8e:	89 50 50             	mov    %edx,0x50(%eax)
 810ea91:	8b 45 08             	mov    0x8(%ebp),%eax
 810ea94:	8b 40 1c             	mov    0x1c(%eax),%eax
 810ea97:	8d 50 74             	lea    0x74(%eax),%edx
 810ea9a:	8b 45 08             	mov    0x8(%ebp),%eax
 810ea9d:	8b 40 1c             	mov    0x1c(%eax),%eax
 810eaa0:	83 c0 60             	add    $0x60,%eax
 810eaa3:	89 54 24 04          	mov    %edx,0x4(%esp)
 810eaa7:	89 04 24             	mov    %eax,(%esp)
 810eaaa:	e8 51 92 5f 00       	call   8707d00 <_ZNSsaSERKSs>
 810eaaf:	8b 45 08             	mov    0x8(%ebp),%eax
 810eab2:	8b 40 1c             	mov    0x1c(%eax),%eax
 810eab5:	83 c0 2c             	add    $0x2c,%eax
 810eab8:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 810eabf:	00 
 810eac0:	89 44 24 08          	mov    %eax,0x8(%esp)
 810eac4:	8b 45 0c             	mov    0xc(%ebp),%eax
 810eac7:	89 44 24 04          	mov    %eax,0x4(%esp)
 810eacb:	8d 45 df             	lea    -0x21(%ebp),%eax
 810eace:	89 04 24             	mov    %eax,(%esp)
 810ead1:	e8 5c e4 ff ff       	call   810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>
 810ead6:	83 c4 44             	add    $0x44,%esp
 810ead9:	5b                   	pop    %ebx
 810eada:	5d                   	pop    %ebp
 810eadb:	c3                   	ret

```

```c
// EventClassify::CAttendance::send_attend_final_rward_item @ 0x810e9c0

/* EventClassify::CAttendance::send_attend_final_rward_item(CUser*, int, int) */

void __thiscall
EventClassify::CAttendance::send_attend_final_rward_item
          (CAttendance *this,CUser *param_1,int param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  CEventActionMng local_25;
  cMyTrace local_24 [16];
  int local_14;
  int local_10;
  
  uVar2 = CUser::get_acc_id(param_1);
  uVar3 = NumberToString(uVar2,0);
  cMyTrace::cMyTrace(local_24,
                     "void EventClassify::CAttendance::send_attend_final_rward_item(CUser*, int, int)"
                     ,0x5ba,0);
  cMyTrace::operator()
            (local_24,"send_attend_final_rward_item m_id:%s day:%d record:%u",uVar3,param_3,param_2)
  ;
  local_14 = 0;
  for (local_10 = 0; local_10 < 0x20; local_10 = local_10 + 1) {
    cVar1 = isSetBit_Uint(param_2,local_10);
    if (cVar1 != '\0') {
      local_14 = local_14 + 1;
    }
  }
  if (param_3 == local_14) {
    *(undefined4 *)(*(int *)(this + 0x1c) + 0x4c) = *(undefined4 *)(*(int *)(this + 0x1c) + 0x1c);
    *(undefined4 *)(*(int *)(this + 0x1c) + 0x50) = *(undefined4 *)(*(int *)(this + 0x1c) + 0x20);
    std::string::operator=
              ((string *)(*(int *)(this + 0x1c) + 0x60),(string *)(*(int *)(this + 0x1c) + 0x74));
    CEventActionMng::process_action_send_mail
              (&local_25,param_1,(Action_SendMail *)(*(int *)(this + 0x1c) + 0x2c),true);
  }
  return;
}

```

---

## send_attend_reward_item

```asm
// === 0810e878 EventClassify::CAttendance::send_attend_reward_item  [0x0810e878-0x810e9bf] ===
 810e878:	55                   	push   %ebp
 810e879:	89 e5                	mov    %esp,%ebp
 810e87b:	53                   	push   %ebx
 810e87c:	83 ec 34             	sub    $0x34,%esp
 810e87f:	8b 45 08             	mov    0x8(%ebp),%eax
 810e882:	8b 40 1c             	mov    0x1c(%eax),%eax
 810e885:	83 c0 10             	add    $0x10,%eax
 810e888:	89 04 24             	mov    %eax,(%esp)
 810e88b:	e8 84 ef fc ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 810e890:	85 c0                	test   %eax,%eax
 810e892:	0f 94 c0             	sete   %al
 810e895:	84 c0                	test   %al,%al
 810e897:	0f 85 15 01 00 00    	jne    810e9b2 <_ZN13EventClassify11CAttendance23send_attend_reward_itemEP5CUseri+0x13a>
 810e89d:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
 810e8a1:	0f 88 0e 01 00 00    	js     810e9b5 <_ZN13EventClassify11CAttendance23send_attend_reward_itemEP5CUseri+0x13d>
 810e8a7:	8b 45 08             	mov    0x8(%ebp),%eax
 810e8aa:	8b 40 1c             	mov    0x1c(%eax),%eax
 810e8ad:	83 c0 10             	add    $0x10,%eax
 810e8b0:	89 04 24             	mov    %eax,(%esp)
 810e8b3:	e8 5c ef fc ff       	call   80dd814 <_ZNKSt6vectorISt4pairIiiESaIS1_EE4sizeEv>
 810e8b8:	3b 45 10             	cmp    0x10(%ebp),%eax
 810e8bb:	0f 9e c0             	setle  %al
 810e8be:	84 c0                	test   %al,%al
 810e8c0:	0f 85 f2 00 00 00    	jne    810e9b8 <_ZN13EventClassify11CAttendance23send_attend_reward_itemEP5CUseri+0x140>
 810e8c6:	8b 45 0c             	mov    0xc(%ebp),%eax
 810e8c9:	89 04 24             	mov    %eax,(%esp)
 810e8cc:	e8 9d ba fc ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 810e8d1:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 810e8d8:	00 
 810e8d9:	89 04 24             	mov    %eax,(%esp)
 810e8dc:	e8 6a a7 ff ff       	call   810904b <_Z14NumberToStringji>
 810e8e1:	89 c3                	mov    %eax,%ebx
 810e8e3:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 810e8ea:	00 
 810e8eb:	c7 44 24 08 ad 05 00 	movl   $0x5ad,0x8(%esp)
 810e8f2:	00 
 810e8f3:	c7 44 24 04 e0 d4 b4 	movl   $0x8b4d4e0,0x4(%esp)
 810e8fa:	08 
 810e8fb:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810e8fe:	89 04 24             	mov    %eax,(%esp)
 810e901:	e8 12 0e 44 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 810e906:	8b 45 10             	mov    0x10(%ebp),%eax
 810e909:	89 44 24 0c          	mov    %eax,0xc(%esp)
 810e90d:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 810e911:	c7 44 24 04 04 c2 b4 	movl   $0x8b4c204,0x4(%esp)
 810e918:	08 
 810e919:	8d 45 e8             	lea    -0x18(%ebp),%eax
 810e91c:	89 04 24             	mov    %eax,(%esp)
 810e91f:	e8 64 0e 44 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 810e924:	8b 45 08             	mov    0x8(%ebp),%eax
 810e927:	8b 58 1c             	mov    0x1c(%eax),%ebx
 810e92a:	8b 45 10             	mov    0x10(%ebp),%eax
 810e92d:	8b 55 08             	mov    0x8(%ebp),%edx
 810e930:	8b 52 1c             	mov    0x1c(%edx),%edx
 810e933:	83 c2 10             	add    $0x10,%edx
 810e936:	89 44 24 04          	mov    %eax,0x4(%esp)
 810e93a:	89 14 24             	mov    %edx,(%esp)
 810e93d:	e8 62 bf fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810e942:	8b 00                	mov    (%eax),%eax
 810e944:	89 43 4c             	mov    %eax,0x4c(%ebx)
 810e947:	8b 45 08             	mov    0x8(%ebp),%eax
 810e94a:	8b 58 1c             	mov    0x1c(%eax),%ebx
 810e94d:	8b 45 10             	mov    0x10(%ebp),%eax
 810e950:	8b 55 08             	mov    0x8(%ebp),%edx
 810e953:	8b 52 1c             	mov    0x1c(%edx),%edx
 810e956:	83 c2 10             	add    $0x10,%edx
 810e959:	89 44 24 04          	mov    %eax,0x4(%esp)
 810e95d:	89 14 24             	mov    %edx,(%esp)
 810e960:	e8 3f bf fd ff       	call   80ea8a4 <_ZNSt6vectorISt4pairIiiESaIS1_EEixEj>
 810e965:	8b 40 04             	mov    0x4(%eax),%eax
 810e968:	89 43 50             	mov    %eax,0x50(%ebx)
 810e96b:	8b 45 08             	mov    0x8(%ebp),%eax
 810e96e:	8b 40 1c             	mov    0x1c(%eax),%eax
 810e971:	8d 50 70             	lea    0x70(%eax),%edx
 810e974:	8b 45 08             	mov    0x8(%ebp),%eax
 810e977:	8b 40 1c             	mov    0x1c(%eax),%eax
 810e97a:	83 c0 60             	add    $0x60,%eax
 810e97d:	89 54 24 04          	mov    %edx,0x4(%esp)
 810e981:	89 04 24             	mov    %eax,(%esp)
 810e984:	e8 77 93 5f 00       	call   8707d00 <_ZNSsaSERKSs>
 810e989:	8b 45 08             	mov    0x8(%ebp),%eax
 810e98c:	8b 40 1c             	mov    0x1c(%eax),%eax
 810e98f:	83 c0 2c             	add    $0x2c,%eax
 810e992:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 810e999:	00 
 810e99a:	89 44 24 08          	mov    %eax,0x8(%esp)
 810e99e:	8b 45 0c             	mov    0xc(%ebp),%eax
 810e9a1:	89 44 24 04          	mov    %eax,0x4(%esp)
 810e9a5:	8d 45 e7             	lea    -0x19(%ebp),%eax
 810e9a8:	89 04 24             	mov    %eax,(%esp)
 810e9ab:	e8 82 e5 ff ff       	call   810cf32 <_ZN13EventClassify15CEventActionMng24process_action_send_mailEP5CUserR15Action_SendMailb>
 810e9b0:	eb 07                	jmp    810e9b9 <_ZN13EventClassify11CAttendance23send_attend_reward_itemEP5CUseri+0x141>
 810e9b2:	90                   	nop
 810e9b3:	eb 04                	jmp    810e9b9 <_ZN13EventClassify11CAttendance23send_attend_reward_itemEP5CUseri+0x141>
 810e9b5:	90                   	nop
 810e9b6:	eb 01                	jmp    810e9b9 <_ZN13EventClassify11CAttendance23send_attend_reward_itemEP5CUseri+0x141>
 810e9b8:	90                   	nop
 810e9b9:	83 c4 34             	add    $0x34,%esp
 810e9bc:	5b                   	pop    %ebx
 810e9bd:	5d                   	pop    %ebp
 810e9be:	c3                   	ret
 810e9bf:	90                   	nop

```

```c
// EventClassify::CAttendance::send_attend_reward_item @ 0x810e878

/* EventClassify::CAttendance::send_attend_reward_item(CUser*, int) */

void __thiscall
EventClassify::CAttendance::send_attend_reward_item(CAttendance *this,CUser *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  CEventActionMng local_1d;
  cMyTrace local_1c [20];
  
  iVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                    ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                     (*(int *)(this + 0x1c) + 0x10));
  if (((iVar1 != 0) && (-1 < param_2)) &&
     (iVar1 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::size
                        ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                         (*(int *)(this + 0x1c) + 0x10)), param_2 < iVar1)) {
    uVar2 = CUser::get_acc_id(param_1);
    uVar3 = NumberToString(uVar2,0);
    cMyTrace::cMyTrace(local_1c,
                       "void EventClassify::CAttendance::send_attend_reward_item(CUser*, int)",0x5ad
                       ,0);
    cMyTrace::operator()(local_1c,"send_attend_reward_item m_id:%s day:%d",uVar3,param_2);
    iVar1 = *(int *)(this + 0x1c);
    puVar4 = (undefined4 *)
             std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                       ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                        (*(int *)(this + 0x1c) + 0x10),param_2);
    *(undefined4 *)(iVar1 + 0x4c) = *puVar4;
    iVar1 = *(int *)(this + 0x1c);
    iVar5 = std::vector<std::pair<int,int>,std::allocator<std::pair<int,int>>>::operator[]
                      ((vector<std::pair<int,int>,std::allocator<std::pair<int,int>>> *)
                       (*(int *)(this + 0x1c) + 0x10),param_2);
    *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar5 + 4);
    std::string::operator=
              ((string *)(*(int *)(this + 0x1c) + 0x60),(string *)(*(int *)(this + 0x1c) + 0x70));
    CEventActionMng::process_action_send_mail
              (&local_1d,param_1,(Action_SendMail *)(*(int *)(this + 0x1c) + 0x2c),true);
  }
  return;
}

```

---

## send_init_data

```asm
// === 0810e804 EventClassify::CAttendance::send_init_data  [0x0810e804-0x810e877] ===
 810e804:	55                   	push   %ebp
 810e805:	89 e5                	mov    %esp,%ebp
 810e807:	53                   	push   %ebx
 810e808:	83 ec 24             	sub    $0x24,%esp
 810e80b:	8b 4d 14             	mov    0x14(%ebp),%ecx
 810e80e:	8b 55 18             	mov    0x18(%ebp),%edx
 810e811:	8b 45 1c             	mov    0x1c(%ebp),%eax
 810e814:	66 89 4d f4          	mov    %cx,-0xc(%ebp)
 810e818:	88 55 f0             	mov    %dl,-0x10(%ebp)
 810e81b:	88 45 ec             	mov    %al,-0x14(%ebp)
 810e81e:	0f bf 55 f4          	movswl -0xc(%ebp),%edx
 810e822:	8b 45 10             	mov    0x10(%ebp),%eax
 810e825:	89 54 24 04          	mov    %edx,0x4(%esp)
 810e829:	89 04 24             	mov    %eax,(%esp)
 810e82c:	e8 73 b6 fc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 810e831:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 810e835:	89 44 24 04          	mov    %eax,0x4(%esp)
 810e839:	8b 45 0c             	mov    0xc(%ebp),%eax
 810e83c:	89 04 24             	mov    %eax,(%esp)
 810e83f:	e8 ba eb 57 00       	call   868d3fe <_ZN5CUser24get_server_fatigue_countEh>
 810e844:	0f bf d8             	movswl %ax,%ebx
 810e847:	0f b6 45 f0          	movzbl -0x10(%ebp),%eax
 810e84b:	89 44 24 04          	mov    %eax,0x4(%esp)
 810e84f:	8b 45 0c             	mov    0xc(%ebp),%eax
 810e852:	89 04 24             	mov    %eax,(%esp)
 810e855:	e8 6a ec 57 00       	call   868d4c4 <_ZN5CUser20get_fatigue_count_dbEi>
 810e85a:	8d 14 03             	lea    (%ebx,%eax,1),%edx
 810e85d:	8b 45 10             	mov    0x10(%ebp),%eax
 810e860:	89 54 24 04          	mov    %edx,0x4(%esp)
 810e864:	89 04 24             	mov    %eax,(%esp)
 810e867:	e8 38 b6 fc ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 810e86c:	b8 01 00 00 00       	mov    $0x1,%eax
 810e871:	83 c4 24             	add    $0x24,%esp
 810e874:	5b                   	pop    %ebx
 810e875:	5d                   	pop    %ebp
 810e876:	c3                   	ret
 810e877:	90                   	nop

```

```c
// EventClassify::CAttendance::send_init_data @ 0x810e804

/* EventClassify::CAttendance::send_init_data(CUser*, PacketGuard&, short, unsigned char, bool) */

undefined4
EventClassify::CAttendance::send_init_data
          (CUser *param_1,PacketGuard *param_2,short param_3,uchar param_4,bool param_5)

{
  short sVar1;
  int iVar2;
  undefined2 in_stack_0000000e;
  undefined3 in_stack_00000011;
  
  InterfacePacketBuf::put_short(_param_3,(int)(short)_param_4);
  sVar1 = CUser::get_server_fatigue_count((uchar)param_2);
  iVar2 = CUser::get_fatigue_count_db((CUser *)param_2,(uint)param_5);
  InterfacePacketBuf::put_short(_param_3,sVar1 + iVar2);
  return 1;
}

```

---

## set_event_data

```asm
// === 0810eadc EventClassify::CAttendance::set_event_data  [0x0810eadc-0x810eb05] ===
 810eadc:	55                   	push   %ebp
 810eadd:	89 e5                	mov    %esp,%ebp
 810eadf:	83 ec 18             	sub    $0x18,%esp
 810eae2:	8b 45 08             	mov    0x8(%ebp),%eax
 810eae5:	8b 00                	mov    (%eax),%eax
 810eae7:	83 c0 18             	add    $0x18,%eax
 810eaea:	8b 08                	mov    (%eax),%ecx
 810eaec:	8b 45 08             	mov    0x8(%ebp),%eax
 810eaef:	8b 55 0c             	mov    0xc(%ebp),%edx
 810eaf2:	89 54 24 04          	mov    %edx,0x4(%esp)
 810eaf6:	89 04 24             	mov    %eax,(%esp)
 810eaf9:	ff d1                	call   *%ecx
 810eafb:	8b 55 10             	mov    0x10(%ebp),%edx
 810eafe:	8b 45 08             	mov    0x8(%ebp),%eax
 810eb01:	89 50 1c             	mov    %edx,0x1c(%eax)
 810eb04:	c9                   	leave
 810eb05:	c3                   	ret

```

```c
// EventClassify::CAttendance::set_event_data @ 0x810eadc

/* EventClassify::CAttendance::set_event_data(int, InGameEventScript*) */

void __thiscall
EventClassify::CAttendance::set_event_data(CAttendance *this,int param_1,InGameEventScript *param_2)

{
  (**(code **)(*(int *)this + 0x18))(this,param_1);
  *(InGameEventScript **)(this + 0x1c) = param_2;
  return;
}

```

