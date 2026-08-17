# DB_SaveConditionEventInfo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 08437930 DB_SaveConditionEventInfo::dispatch  [0x08437930-0x8437a31] ===
 8437930:	55                   	push   %ebp
 8437931:	89 e5                	mov    %esp,%ebp
 8437933:	83 ec 38             	sub    $0x38,%esp
 8437936:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 843793b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8437942:	00 
 8437943:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 843794a:	00 
 843794b:	89 04 24             	mov    %eax,(%esp)
 843794e:	e8 eb d8 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8437953:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8437956:	8b 45 14             	mov    0x14(%ebp),%eax
 8437959:	89 04 24             	mov    %eax,(%esp)
 843795c:	e8 87 bc 01 00       	call   84535e8 <_ZN6Stream12GetOutBufferI24SIG_SAVE_CONDITION_EVENTEEPT_v>
 8437961:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8437964:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8437967:	8b 08                	mov    (%eax),%ecx
 8437969:	8b 45 f4             	mov    -0xc(%ebp),%eax
 843796c:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 8437970:	0f bf d0             	movswl %ax,%edx
 8437973:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8437976:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 843797a:	98                   	cwtl
 843797b:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 843797f:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8437983:	89 44 24 08          	mov    %eax,0x8(%esp)
 8437987:	c7 44 24 04 d0 3e c5 	movl   $0x8c53ed0,0x4(%esp)
 843798e:	08 
 843798f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8437992:	89 04 24             	mov    %eax,(%esp)
 8437995:	e8 26 c8 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 843799a:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84379a1:	00 
 84379a2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84379a5:	89 04 24             	mov    %eax,(%esp)
 84379a8:	e8 79 c9 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 84379ad:	83 f0 01             	xor    $0x1,%eax
 84379b0:	84 c0                	test   %al,%al
 84379b2:	74 07                	je     84379bb <_ZN25DB_SaveConditionEventInfo8dispatchEiiP6Stream+0x8b>
 84379b4:	b8 00 00 00 00       	mov    $0x0,%eax
 84379b9:	eb 74                	jmp    8437a2f <_ZN25DB_SaveConditionEventInfo8dispatchEiiP6Stream+0xff>
 84379bb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 84379be:	89 04 24             	mov    %eax,(%esp)
 84379c1:	e8 4a c9 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 84379c6:	09 d0                	or     %edx,%eax
 84379c8:	85 c0                	test   %eax,%eax
 84379ca:	0f 94 c0             	sete   %al
 84379cd:	84 c0                	test   %al,%al
 84379cf:	74 59                	je     8437a2a <_ZN25DB_SaveConditionEventInfo8dispatchEiiP6Stream+0xfa>
 84379d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84379d4:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 84379d8:	0f bf c8             	movswl %ax,%ecx
 84379db:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84379de:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 84379e2:	0f bf d0             	movswl %ax,%edx
 84379e5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84379e8:	8b 00                	mov    (%eax),%eax
 84379ea:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 84379ee:	89 54 24 0c          	mov    %edx,0xc(%esp)
 84379f2:	89 44 24 08          	mov    %eax,0x8(%esp)
 84379f6:	c7 44 24 04 3c 3f c5 	movl   $0x8c53f3c,0x4(%esp)
 84379fd:	08 
 84379fe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8437a01:	89 04 24             	mov    %eax,(%esp)
 8437a04:	e8 b7 c7 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8437a09:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8437a10:	00 
 8437a11:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8437a14:	89 04 24             	mov    %eax,(%esp)
 8437a17:	e8 0a c9 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8437a1c:	83 f0 01             	xor    $0x1,%eax
 8437a1f:	84 c0                	test   %al,%al
 8437a21:	74 07                	je     8437a2a <_ZN25DB_SaveConditionEventInfo8dispatchEiiP6Stream+0xfa>
 8437a23:	b8 00 00 00 00       	mov    $0x0,%eax
 8437a28:	eb 05                	jmp    8437a2f <_ZN25DB_SaveConditionEventInfo8dispatchEiiP6Stream+0xff>
 8437a2a:	b8 01 00 00 00       	mov    $0x1,%eax
 8437a2f:	c9                   	leave
 8437a30:	c3                   	ret
 8437a31:	90                   	nop

```

```c
// DB_SaveConditionEventInfo::dispatch @ 0x8437930

/* DB_SaveConditionEventInfo::dispatch(int, int, Stream*) */

undefined4 DB_SaveConditionEventInfo::dispatch(int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  MySQL *this;
  SIG_SAVE_CONDITION_EVENT *pSVar2;
  undefined4 uVar3;
  longlong lVar4;
  Stream *in_stack_00000010;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  pSVar2 = Stream::GetOutBuffer<SIG_SAVE_CONDITION_EVENT>(in_stack_00000010);
  MySQL::set_query(this,
                   "upDate event_conditionable_info set current_step=%d, reward_step=%d, update_time=now() where charac_no=%u"
                   ,(int)*(short *)(pSVar2 + 4),(int)*(short *)(pSVar2 + 6),*(undefined4 *)pSVar2);
  cVar1 = MySQL::exec(this,true);
  if (cVar1 == '\x01') {
    lVar4 = MySQL::getAffectedRowCount(this);
    if (lVar4 == 0) {
      MySQL::set_query(this,
                       "inSert into event_conditionable_info(charac_no, current_step, reward_step, update_time) values(%u, %d, %d, now())"
                       ,*(undefined4 *)pSVar2,(int)*(short *)(pSVar2 + 4),
                       (int)*(short *)(pSVar2 + 6));
      cVar1 = MySQL::exec(this,true);
      if (cVar1 != '\x01') {
        return 0;
      }
    }
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

