# DB_SaveCharacSlotExtend

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch

```asm
// === 084420ea DB_SaveCharacSlotExtend::dispatch  [0x084420ea-0x8442225] ===
 84420ea:	55                   	push   %ebp
 84420eb:	89 e5                	mov    %esp,%ebp
 84420ed:	57                   	push   %edi
 84420ee:	56                   	push   %esi
 84420ef:	53                   	push   %ebx
 84420f0:	83 ec 4c             	sub    $0x4c,%esp
 84420f3:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 84420f8:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 84420ff:	00 
 8442100:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8442107:	00 
 8442108:	89 04 24             	mov    %eax,(%esp)
 844210b:	e8 2e 31 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8442110:	89 45 e0             	mov    %eax,-0x20(%ebp)
 8442113:	8b 45 14             	mov    0x14(%ebp),%eax
 8442116:	89 04 24             	mov    %eax,(%esp)
 8442119:	e8 ac 1c 01 00       	call   8453dca <_ZN6Stream12GetOutBufferI22SIG_EXTEND_CHARAC_SLOTEEPT_v>
 844211e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8442121:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8442124:	8b 00                	mov    (%eax),%eax
 8442126:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 844212d:	00 
 844212e:	89 04 24             	mov    %eax,(%esp)
 8442131:	e8 15 6f cc ff       	call   810904b <_Z14NumberToStringji>
 8442136:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8442139:	0f b6 52 05          	movzbl 0x5(%edx),%edx
 844213d:	0f b6 ca             	movzbl %dl,%ecx
 8442140:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 8442143:	0f b6 52 04          	movzbl 0x4(%edx),%edx
 8442147:	0f b6 d2             	movzbl %dl,%edx
 844214a:	89 44 24 10          	mov    %eax,0x10(%esp)
 844214e:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
 8442152:	89 54 24 08          	mov    %edx,0x8(%esp)
 8442156:	c7 44 24 04 d4 68 c5 	movl   $0x8c568d4,0x4(%esp)
 844215d:	08 
 844215e:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8442161:	89 04 24             	mov    %eax,(%esp)
 8442164:	e8 57 20 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8442169:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8442170:	00 
 8442171:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8442174:	89 04 24             	mov    %eax,(%esp)
 8442177:	e8 aa 21 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 844217c:	83 f0 01             	xor    $0x1,%eax
 844217f:	84 c0                	test   %al,%al
 8442181:	75 11                	jne    8442194 <_ZN23DB_SaveCharacSlotExtend8dispatchEiiP6Stream+0xaa>
 8442183:	8b 45 e0             	mov    -0x20(%ebp),%eax
 8442186:	89 04 24             	mov    %eax,(%esp)
 8442189:	e8 82 21 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 844218e:	09 d0                	or     %edx,%eax
 8442190:	85 c0                	test   %eax,%eax
 8442192:	75 07                	jne    844219b <_ZN23DB_SaveCharacSlotExtend8dispatchEiiP6Stream+0xb1>
 8442194:	b8 01 00 00 00       	mov    $0x1,%eax
 8442199:	eb 05                	jmp    84421a0 <_ZN23DB_SaveCharacSlotExtend8dispatchEiiP6Stream+0xb6>
 844219b:	b8 00 00 00 00       	mov    $0x0,%eax
 84421a0:	84 c0                	test   %al,%al
 84421a2:	74 74                	je     8442218 <_ZN23DB_SaveCharacSlotExtend8dispatchEiiP6Stream+0x12e>
 84421a4:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84421a7:	8b 00                	mov    (%eax),%eax
 84421a9:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84421b0:	00 
 84421b1:	89 04 24             	mov    %eax,(%esp)
 84421b4:	e8 92 6e cc ff       	call   810904b <_Z14NumberToStringji>
 84421b9:	89 c3                	mov    %eax,%ebx
 84421bb:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84421be:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 84421c2:	0f b6 f8             	movzbl %al,%edi
 84421c5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84421c8:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 84421cc:	0f b6 f0             	movzbl %al,%esi
 84421cf:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 84421d6:	00 
 84421d7:	c7 44 24 08 f5 a1 00 	movl   $0xa1f5,0x8(%esp)
 84421de:	00 
 84421df:	c7 44 24 04 80 b7 c5 	movl   $0x8c5b780,0x4(%esp)
 84421e6:	08 
 84421e7:	8d 45 d0             	lea    -0x30(%ebp),%eax
 84421ea:	89 04 24             	mov    %eax,(%esp)
 84421ed:	e8 26 d5 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84421f2:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 84421f6:	89 7c 24 0c          	mov    %edi,0xc(%esp)
 84421fa:	89 74 24 08          	mov    %esi,0x8(%esp)
 84421fe:	c7 44 24 04 24 69 c5 	movl   $0x8c56924,0x4(%esp)
 8442205:	08 
 8442206:	8d 45 d0             	lea    -0x30(%ebp),%eax
 8442209:	89 04 24             	mov    %eax,(%esp)
 844220c:	e8 77 d5 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 8442211:	b8 00 00 00 00       	mov    $0x0,%eax
 8442216:	eb 05                	jmp    844221d <_ZN23DB_SaveCharacSlotExtend8dispatchEiiP6Stream+0x133>
 8442218:	b8 01 00 00 00       	mov    $0x1,%eax
 844221d:	83 c4 4c             	add    $0x4c,%esp
 8442220:	5b                   	pop    %ebx
 8442221:	5e                   	pop    %esi
 8442222:	5f                   	pop    %edi
 8442223:	5d                   	pop    %ebp
 8442224:	c3                   	ret
 8442225:	90                   	nop

```

```c
// DB_SaveCharacSlotExtend::dispatch @ 0x84420ea

/* DB_SaveCharacSlotExtend::dispatch(int, int, Stream*) */

bool DB_SaveCharacSlotExtend::dispatch(int param_1,int param_2,Stream *param_3)

{
  SIG_EXTEND_CHARAC_SLOT SVar1;
  SIG_EXTEND_CHARAC_SLOT SVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  longlong lVar6;
  Stream *in_stack_00000010;
  cMyTrace local_34 [16];
  MySQL *local_24;
  SIG_EXTEND_CHARAC_SLOT *local_20;
  
  local_24 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  local_20 = Stream::GetOutBuffer<SIG_EXTEND_CHARAC_SLOT>(in_stack_00000010);
  uVar5 = NumberToString(*(uint *)local_20,0);
  MySQL::set_query(local_24,
                   "upDate charac_view set slot_effect_count=%u, charac_slot_limit=%u where m_id=%s"
                   ,(uint)(byte)local_20[4],(uint)(byte)local_20[5],uVar5);
  cVar4 = MySQL::exec(local_24,true);
  if ((cVar4 == '\x01') && (lVar6 = MySQL::getAffectedRowCount(local_24), lVar6 != 0)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  if (bVar3) {
    uVar5 = NumberToString(*(uint *)local_20,0);
    SVar1 = local_20[5];
    SVar2 = local_20[4];
    cMyTrace::cMyTrace(local_34,"virtual bool DB_SaveCharacSlotExtend::dispatch(int, int, Stream*)",
                       0xa1f5,5);
    cMyTrace::operator()
              (local_34,
               "upDate charac_view set slot_effect_count(%u), charac_slot_limit(%u) failed at m_id(%u)"
               ,(uint)(byte)SVar2,(uint)(byte)SVar1,uVar5);
  }
  return !bVar3;
}

```

