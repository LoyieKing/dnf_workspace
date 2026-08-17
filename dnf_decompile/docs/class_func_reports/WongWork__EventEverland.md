# WongWork__EventEverland

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ArrangeEverlandEventItem

```asm
// === 083fad60 WongWork::EventEverland::ArrangeEverlandEventItem  [0x083fad60-0x83fb046] ===
 83fad60:	55                   	push   %ebp
 83fad61:	89 e5                	mov    %esp,%ebp
 83fad63:	53                   	push   %ebx
 83fad64:	81 ec f4 00 00 00    	sub    $0xf4,%esp
 83fad6a:	c7 45 e4 0a 00 00 00 	movl   $0xa,-0x1c(%ebp)
 83fad71:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fad76:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fad7d:	00 
 83fad7e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fad85:	00 
 83fad86:	89 04 24             	mov    %eax,(%esp)
 83fad89:	e8 b0 a4 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fad8e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 83fad91:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fad98:	00 
 83fad99:	8b 45 08             	mov    0x8(%ebp),%eax
 83fad9c:	89 04 24             	mov    %eax,(%esp)
 83fad9f:	e8 a7 e2 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fada4:	c7 44 24 0c 0a 00 00 	movl   $0xa,0xc(%esp)
 83fadab:	00 
 83fadac:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fadb0:	c7 44 24 04 f4 62 c3 	movl   $0x8c362f4,0x4(%esp)
 83fadb7:	08 
 83fadb8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fadbb:	89 04 24             	mov    %eax,(%esp)
 83fadbe:	e8 fd 93 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fadc3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fadca:	00 
 83fadcb:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fadce:	89 04 24             	mov    %eax,(%esp)
 83fadd1:	e8 50 95 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fadd6:	83 f0 01             	xor    $0x1,%eax
 83fadd9:	84 c0                	test   %al,%al
 83faddb:	74 5c                	je     83fae39 <_ZN8WongWork13EventEverland24ArrangeEverlandEventItemEjj+0xd9>
 83faddd:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fade4:	00 
 83fade5:	8b 45 08             	mov    0x8(%ebp),%eax
 83fade8:	89 04 24             	mov    %eax,(%esp)
 83fadeb:	e8 5b e2 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fadf0:	89 c3                	mov    %eax,%ebx
 83fadf2:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83fadf9:	00 
 83fadfa:	c7 44 24 08 82 01 00 	movl   $0x182,0x8(%esp)
 83fae01:	00 
 83fae02:	c7 44 24 04 80 dc c5 	movl   $0x8c5dc80,0x4(%esp)
 83fae09:	08 
 83fae0a:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83fae0d:	89 04 24             	mov    %eax,(%esp)
 83fae10:	e8 03 49 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83fae15:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 83fae19:	c7 44 24 08 80 dc c5 	movl   $0x8c5dc80,0x8(%esp)
 83fae20:	08 
 83fae21:	c7 44 24 04 9d 60 c3 	movl   $0x8c3609d,0x4(%esp)
 83fae28:	08 
 83fae29:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83fae2c:	89 04 24             	mov    %eax,(%esp)
 83fae2f:	e8 54 49 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83fae34:	e9 05 02 00 00       	jmp    83fb03e <_ZN8WongWork13EventEverland24ArrangeEverlandEventItemEjj+0x2de>
 83fae39:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 83fae40:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83fae47:	e9 2e 01 00 00       	jmp    83faf7a <_ZN8WongWork13EventEverland24ArrangeEverlandEventItemEjj+0x21a>
 83fae4c:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fae4f:	89 04 24             	mov    %eax,(%esp)
 83fae52:	e8 65 96 ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 83fae57:	83 f0 01             	xor    $0x1,%eax
 83fae5a:	84 c0                	test   %al,%al
 83fae5c:	0f 85 33 01 00 00    	jne    83faf95 <_ZN8WongWork13EventEverland24ArrangeEverlandEventItemEjj+0x235>
 83fae62:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 83fae69:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 83fae70:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 83fae77:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 83fae7e:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 83fae85:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83fae88:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fae8c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fae93:	00 
 83fae94:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fae97:	89 04 24             	mov    %eax,(%esp)
 83fae9a:	e8 0f 74 ce ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 83fae9f:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83faea2:	89 44 24 08          	mov    %eax,0x8(%esp)
 83faea6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83faead:	00 
 83faeae:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83faeb1:	89 04 24             	mov    %eax,(%esp)
 83faeb4:	e8 73 ba d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83faeb9:	8d 45 c8             	lea    -0x38(%ebp),%eax
 83faebc:	89 44 24 08          	mov    %eax,0x8(%esp)
 83faec0:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 83faec7:	00 
 83faec8:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83faecb:	89 04 24             	mov    %eax,(%esp)
 83faece:	e8 59 ba d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83faed3:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83faed6:	89 44 24 08          	mov    %eax,0x8(%esp)
 83faeda:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 83faee1:	00 
 83faee2:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83faee5:	89 04 24             	mov    %eax,(%esp)
 83faee8:	e8 3f ba d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83faeed:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83faef0:	89 44 24 08          	mov    %eax,0x8(%esp)
 83faef4:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 83faefb:	00 
 83faefc:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83faeff:	89 04 24             	mov    %eax,(%esp)
 83faf02:	e8 25 ba d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83faf07:	8b 45 c0             	mov    -0x40(%ebp),%eax
 83faf0a:	85 c0                	test   %eax,%eax
 83faf0c:	75 68                	jne    83faf76 <_ZN8WongWork13EventEverland24ArrangeEverlandEventItemEjj+0x216>
 83faf0e:	8b 45 cc             	mov    -0x34(%ebp),%eax
 83faf11:	3b 45 0c             	cmp    0xc(%ebp),%eax
 83faf14:	75 60                	jne    83faf76 <_ZN8WongWork13EventEverland24ArrangeEverlandEventItemEjj+0x216>
 83faf16:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83faf19:	8b 45 d0             	mov    -0x30(%ebp),%eax
 83faf1c:	c1 e2 04             	shl    $0x4,%edx
 83faf1f:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83faf22:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83faf25:	81 ea d8 00 00 00    	sub    $0xd8,%edx
 83faf2b:	89 02                	mov    %eax,(%edx)
 83faf2d:	8b 45 ec             	mov    -0x14(%ebp),%eax
 83faf30:	c1 e0 04             	shl    $0x4,%eax
 83faf33:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83faf36:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83faf39:	2d d0 00 00 00       	sub    $0xd0,%eax
 83faf3e:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
 83faf44:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83faf47:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83faf4a:	c1 e2 04             	shl    $0x4,%edx
 83faf4d:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83faf50:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83faf53:	81 ea cc 00 00 00    	sub    $0xcc,%edx
 83faf59:	89 02                	mov    %eax,(%edx)
 83faf5b:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83faf5e:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83faf61:	c1 e2 04             	shl    $0x4,%edx
 83faf64:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83faf67:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83faf6a:	81 ea d4 00 00 00    	sub    $0xd4,%edx
 83faf70:	89 02                	mov    %eax,(%edx)
 83faf72:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 83faf76:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 83faf7a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83faf7d:	89 04 24             	mov    %eax,(%esp)
 83faf80:	e8 e7 73 ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 83faf85:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 83faf88:	0f 97 c0             	seta   %al
 83faf8b:	84 c0                	test   %al,%al
 83faf8d:	0f 85 b9 fe ff ff    	jne    83fae4c <_ZN8WongWork13EventEverland24ArrangeEverlandEventItemEjj+0xec>
 83faf93:	eb 01                	jmp    83faf96 <_ZN8WongWork13EventEverland24ArrangeEverlandEventItemEjj+0x236>
 83faf95:	90                   	nop
 83faf96:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83faf9d:	e9 8b 00 00 00       	jmp    83fb02d <_ZN8WongWork13EventEverland24ArrangeEverlandEventItemEjj+0x2cd>
 83fafa2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fafa5:	c1 e0 04             	shl    $0x4,%eax
 83fafa8:	8d 55 f8             	lea    -0x8(%ebp),%edx
 83fafab:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83fafae:	2d d0 00 00 00       	sub    $0xd0,%eax
 83fafb3:	8b 10                	mov    (%eax),%edx
 83fafb5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fafb8:	c1 e0 04             	shl    $0x4,%eax
 83fafbb:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fafbe:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 83fafc1:	2d d8 00 00 00       	sub    $0xd8,%eax
 83fafc6:	8b 00                	mov    (%eax),%eax
 83fafc8:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fafcc:	89 04 24             	mov    %eax,(%esp)
 83fafcf:	e8 0f fd ff ff       	call   83face3 <_ZN8WongWork13EventEverland23UpdateEventEverlandInfoEji>
 83fafd4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fafd7:	c1 e0 04             	shl    $0x4,%eax
 83fafda:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fafdd:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fafe0:	2d cc 00 00 00       	sub    $0xcc,%eax
 83fafe5:	8b 00                	mov    (%eax),%eax
 83fafe7:	89 c1                	mov    %eax,%ecx
 83fafe9:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fafec:	c1 e0 04             	shl    $0x4,%eax
 83fafef:	8d 55 f8             	lea    -0x8(%ebp),%edx
 83faff2:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83faff5:	2d d0 00 00 00       	sub    $0xd0,%eax
 83faffa:	8b 00                	mov    (%eax),%eax
 83faffc:	89 c2                	mov    %eax,%edx
 83faffe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb001:	c1 e0 04             	shl    $0x4,%eax
 83fb004:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fb007:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fb00a:	2d d4 00 00 00       	sub    $0xd4,%eax
 83fb00f:	8b 00                	mov    (%eax),%eax
 83fb011:	c7 44 24 0c 03 00 00 	movl   $0x3,0xc(%esp)
 83fb018:	00 
 83fb019:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83fb01d:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fb021:	89 04 24             	mov    %eax,(%esp)
 83fb024:	e8 2b eb ff ff       	call   83f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>
 83fb029:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83fb02d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb030:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 83fb033:	0f 9c c0             	setl   %al
 83fb036:	84 c0                	test   %al,%al
 83fb038:	0f 85 64 ff ff ff    	jne    83fafa2 <_ZN8WongWork13EventEverland24ArrangeEverlandEventItemEjj+0x242>
 83fb03e:	81 c4 f4 00 00 00    	add    $0xf4,%esp
 83fb044:	5b                   	pop    %ebx
 83fb045:	5d                   	pop    %ebp
 83fb046:	c3                   	ret

```

```c
// WongWork::EventEverland::ArrangeEverlandEventItem @ 0x83fad60

/* WongWork::EventEverland::ArrangeEverlandEventItem(unsigned int, unsigned int) */

void WongWork::EventEverland::ArrangeEverlandEventItem(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint auStack_e4 [40];
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  cMyTrace local_30 [16];
  undefined4 local_20;
  MySQL *local_1c;
  int local_18;
  uint local_14;
  int local_10;
  
  local_20 = 10;
  local_1c = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_1c,
                   "seLect id,server_id,charac_no,coin,coin_check from event_everland_info where m_id=%s and occ_check!=0 limit %d"
                   ,uVar2,10);
  cVar1 = MySQL::exec(local_1c,true);
  if (cVar1 == '\x01') {
    local_18 = 0;
    local_14 = 0;
    while ((uVar3 = MySQL::get_n_rows(local_1c), local_14 < uVar3 &&
           (cVar1 = MySQL::fetch(local_1c), cVar1 == '\x01'))) {
      local_34 = 0;
      local_38 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      MySQL::get_int(local_1c,0,&local_34);
      MySQL::get_int(local_1c,1,(int *)&local_38);
      MySQL::get_int(local_1c,2,(int *)&local_3c);
      MySQL::get_int(local_1c,3,(int *)&local_40);
      MySQL::get_int(local_1c,4,&local_44);
      if ((local_44 == 0) && (local_38 == param_2)) {
        auStack_e4[local_18 * 4] = local_34;
        auStack_e4[local_18 * 4 + 2] = 1;
        auStack_e4[local_18 * 4 + 3] = local_40;
        auStack_e4[local_18 * 4 + 1] = local_3c;
        local_18 = local_18 + 1;
      }
      local_14 = local_14 + 1;
    }
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      UpdateEventEverlandInfo(auStack_e4[local_10 * 4],auStack_e4[local_10 * 4 + 2]);
      EventCommon::InsertEventItem2EventTable
                (auStack_e4[local_10 * 4 + 1],auStack_e4[local_10 * 4 + 2],
                 auStack_e4[local_10 * 4 + 3],3);
    }
  }
  else {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_30,
                       "void WongWork::EventEverland::ArrangeEverlandEventItem(memberIdentificationNumber_t, unsigned int)"
                       ,0x182,5);
    cMyTrace::operator()
              (local_30,"%s, exec ERROR m_id=%s",
               "void WongWork::EventEverland::ArrangeEverlandEventItem(memberIdentificationNumber_t, unsigned int)"
               ,uVar2);
  }
  return;
}

```

---

## CheckAlreadyGetEverlandItem

```asm
// === 083fac0d WongWork::EventEverland::CheckAlreadyGetEverlandItem  [0x083fac0d-0x83face2] ===
 83fac0d:	55                   	push   %ebp
 83fac0e:	89 e5                	mov    %esp,%ebp
 83fac10:	83 ec 28             	sub    $0x28,%esp
 83fac13:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83fac18:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83fac1f:	00 
 83fac20:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fac27:	00 
 83fac28:	89 04 24             	mov    %eax,(%esp)
 83fac2b:	e8 0e a6 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fac30:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83fac33:	8b 45 0c             	mov    0xc(%ebp),%eax
 83fac36:	89 44 24 04          	mov    %eax,0x4(%esp)
 83fac3a:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fac41:	e8 74 6e 2c 00       	call   86c1aba <_ZN8WongWork9CWebEvent11GetItemTypeEii>
 83fac46:	83 f8 01             	cmp    $0x1,%eax
 83fac49:	75 2a                	jne    83fac75 <_ZN8WongWork13EventEverland27CheckAlreadyGetEverlandItemEji+0x68>
 83fac4b:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fac52:	00 
 83fac53:	8b 45 08             	mov    0x8(%ebp),%eax
 83fac56:	89 04 24             	mov    %eax,(%esp)
 83fac59:	e8 ed e3 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fac5e:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fac62:	c7 44 24 04 70 62 c3 	movl   $0x8c36270,0x4(%esp)
 83fac69:	08 
 83fac6a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fac6d:	89 04 24             	mov    %eax,(%esp)
 83fac70:	e8 4b 95 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fac75:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fac7c:	00 
 83fac7d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fac80:	89 04 24             	mov    %eax,(%esp)
 83fac83:	e8 9e 96 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fac88:	83 f0 01             	xor    $0x1,%eax
 83fac8b:	84 c0                	test   %al,%al
 83fac8d:	74 07                	je     83fac96 <_ZN8WongWork13EventEverland27CheckAlreadyGetEverlandItemEji+0x89>
 83fac8f:	b8 00 00 00 00       	mov    $0x0,%eax
 83fac94:	eb 4b                	jmp    83face1 <_ZN8WongWork13EventEverland27CheckAlreadyGetEverlandItemEji+0xd4>
 83fac96:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83fac9d:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83faca0:	89 44 24 08          	mov    %eax,0x8(%esp)
 83faca4:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83facab:	00 
 83facac:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83facaf:	89 04 24             	mov    %eax,(%esp)
 83facb2:	e8 75 bc d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83facb7:	83 f0 01             	xor    $0x1,%eax
 83facba:	84 c0                	test   %al,%al
 83facbc:	75 07                	jne    83facc5 <_ZN8WongWork13EventEverland27CheckAlreadyGetEverlandItemEji+0xb8>
 83facbe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83facc1:	85 c0                	test   %eax,%eax
 83facc3:	75 07                	jne    83faccc <_ZN8WongWork13EventEverland27CheckAlreadyGetEverlandItemEji+0xbf>
 83facc5:	b8 01 00 00 00       	mov    $0x1,%eax
 83facca:	eb 05                	jmp    83facd1 <_ZN8WongWork13EventEverland27CheckAlreadyGetEverlandItemEji+0xc4>
 83faccc:	b8 00 00 00 00       	mov    $0x0,%eax
 83facd1:	84 c0                	test   %al,%al
 83facd3:	74 07                	je     83facdc <_ZN8WongWork13EventEverland27CheckAlreadyGetEverlandItemEji+0xcf>
 83facd5:	b8 00 00 00 00       	mov    $0x0,%eax
 83facda:	eb 05                	jmp    83face1 <_ZN8WongWork13EventEverland27CheckAlreadyGetEverlandItemEji+0xd4>
 83facdc:	b8 01 00 00 00       	mov    $0x1,%eax
 83face1:	c9                   	leave
 83face2:	c3                   	ret

```

```c
// WongWork::EventEverland::CheckAlreadyGetEverlandItem @ 0x83fac0d

/* WongWork::EventEverland::CheckAlreadyGetEverlandItem(unsigned int, int) */

undefined4 WongWork::EventEverland::CheckAlreadyGetEverlandItem(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar3 = CWebEvent::GetItemType(4,param_2);
  if (iVar3 == 1) {
    uVar4 = NumberToString(param_1,0);
    MySQL::set_query(local_10,"seLect coin_check from event_everland_info where id=%s",uVar4);
  }
  cVar2 = MySQL::exec(local_10,true);
  if (cVar2 == '\x01') {
    local_14 = 0;
    cVar2 = MySQL::get_int(local_10,0,&local_14);
    if ((cVar2 == '\x01') && (local_14 != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}

```

---

## UpdateEventEverlandInfo

```asm
// === 083face3 WongWork::EventEverland::UpdateEventEverlandInfo  [0x083face3-0x83fad5f] ===
 83face3:	55                   	push   %ebp
 83face4:	89 e5                	mov    %esp,%ebp
 83face6:	83 ec 28             	sub    $0x28,%esp
 83face9:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 83facee:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 83facf5:	00 
 83facf6:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83facfd:	00 
 83facfe:	89 04 24             	mov    %eax,(%esp)
 83fad01:	e8 38 a5 ff ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 83fad06:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83fad09:	8b 45 0c             	mov    0xc(%ebp),%eax
 83fad0c:	89 44 24 04          	mov    %eax,0x4(%esp)
 83fad10:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
 83fad17:	e8 9e 6d 2c 00       	call   86c1aba <_ZN8WongWork9CWebEvent11GetItemTypeEii>
 83fad1c:	83 f8 01             	cmp    $0x1,%eax
 83fad1f:	75 2a                	jne    83fad4b <_ZN8WongWork13EventEverland23UpdateEventEverlandInfoEji+0x68>
 83fad21:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fad28:	00 
 83fad29:	8b 45 08             	mov    0x8(%ebp),%eax
 83fad2c:	89 04 24             	mov    %eax,(%esp)
 83fad2f:	e8 17 e3 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fad34:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fad38:	c7 44 24 04 a8 62 c3 	movl   $0x8c362a8,0x4(%esp)
 83fad3f:	08 
 83fad40:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fad43:	89 04 24             	mov    %eax,(%esp)
 83fad46:	e8 75 94 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fad4b:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fad52:	00 
 83fad53:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fad56:	89 04 24             	mov    %eax,(%esp)
 83fad59:	e8 c8 95 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fad5e:	c9                   	leave
 83fad5f:	c3                   	ret

```

```c
// WongWork::EventEverland::UpdateEventEverlandInfo @ 0x83face3

/* WongWork::EventEverland::UpdateEventEverlandInfo(unsigned int, int) */

void WongWork::EventEverland::UpdateEventEverlandInfo(uint param_1,int param_2)

{
  MySQL *this;
  int iVar1;
  undefined4 uVar2;
  
  this = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,1,0);
  iVar1 = CWebEvent::GetItemType(4,param_2);
  if (iVar1 == 1) {
    uVar2 = NumberToString(param_1,0);
    MySQL::set_query(this,
                     "upDate event_everland_info set coin_check=unix_timestamp(now()) where id=%s",
                     uVar2);
  }
  MySQL::exec(this,true);
  return;
}

```

