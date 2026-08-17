# WongWork__EventFCCombo

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## ArrangeFCComboEventItem

```asm
// === 083fb976 WongWork::EventFCCombo::ArrangeFCComboEventItem  [0x083fb976-0x83fbc65] ===
 83fb976:	55                   	push   %ebp
 83fb977:	89 e5                	mov    %esp,%ebp
 83fb979:	53                   	push   %ebx
 83fb97a:	81 ec f4 00 00 00    	sub    $0xf4,%esp
 83fb980:	c7 45 e4 0a 00 00 00 	movl   $0xa,-0x1c(%ebp)
 83fb987:	e8 f0 22 05 00       	call   844dc7c <_ZN8WongWork12EventFCCombo11GetDBHandleEv>
 83fb98c:	89 45 e8             	mov    %eax,-0x18(%ebp)
 83fb98f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb996:	00 
 83fb997:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb99a:	89 04 24             	mov    %eax,(%esp)
 83fb99d:	e8 a9 d6 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fb9a2:	c7 44 24 0c 0a 00 00 	movl   $0xa,0xc(%esp)
 83fb9a9:	00 
 83fb9aa:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb9ae:	c7 44 24 04 ec 65 c3 	movl   $0x8c365ec,0x4(%esp)
 83fb9b5:	08 
 83fb9b6:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb9b9:	89 04 24             	mov    %eax,(%esp)
 83fb9bc:	e8 ff 87 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fb9c1:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb9c8:	00 
 83fb9c9:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fb9cc:	89 04 24             	mov    %eax,(%esp)
 83fb9cf:	e8 52 89 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fb9d4:	83 f0 01             	xor    $0x1,%eax
 83fb9d7:	84 c0                	test   %al,%al
 83fb9d9:	74 5c                	je     83fba37 <_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj+0xc1>
 83fb9db:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb9e2:	00 
 83fb9e3:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb9e6:	89 04 24             	mov    %eax,(%esp)
 83fb9e9:	e8 5d d6 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fb9ee:	89 c3                	mov    %eax,%ebx
 83fb9f0:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 83fb9f7:	00 
 83fb9f8:	c7 44 24 08 7a 02 00 	movl   $0x27a,0x8(%esp)
 83fb9ff:	00 
 83fba00:	c7 44 24 04 40 db c5 	movl   $0x8c5db40,0x4(%esp)
 83fba07:	08 
 83fba08:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83fba0b:	89 04 24             	mov    %eax,(%esp)
 83fba0e:	e8 05 3d 15 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 83fba13:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 83fba17:	c7 44 24 08 40 db c5 	movl   $0x8c5db40,0x8(%esp)
 83fba1e:	08 
 83fba1f:	c7 44 24 04 9d 60 c3 	movl   $0x8c3609d,0x4(%esp)
 83fba26:	08 
 83fba27:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 83fba2a:	89 04 24             	mov    %eax,(%esp)
 83fba2d:	e8 56 3d 15 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 83fba32:	e9 26 02 00 00       	jmp    83fbc5d <_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj+0x2e7>
 83fba37:	c7 45 ec 00 00 00 00 	movl   $0x0,-0x14(%ebp)
 83fba3e:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83fba45:	e9 4f 01 00 00       	jmp    83fbb99 <_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj+0x223>
 83fba4a:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fba4d:	89 04 24             	mov    %eax,(%esp)
 83fba50:	e8 67 8a ff ff       	call   83f44bc <_ZN5MySQL5fetchEv>
 83fba55:	83 f0 01             	xor    $0x1,%eax
 83fba58:	84 c0                	test   %al,%al
 83fba5a:	0f 85 54 01 00 00    	jne    83fbbb4 <_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj+0x23e>
 83fba60:	c7 45 d0 00 00 00 00 	movl   $0x0,-0x30(%ebp)
 83fba67:	c7 45 cc 00 00 00 00 	movl   $0x0,-0x34(%ebp)
 83fba6e:	c7 45 c8 00 00 00 00 	movl   $0x0,-0x38(%ebp)
 83fba75:	c7 45 c4 00 00 00 00 	movl   $0x0,-0x3c(%ebp)
 83fba7c:	c7 45 c0 00 00 00 00 	movl   $0x0,-0x40(%ebp)
 83fba83:	c7 45 bc 00 00 00 00 	movl   $0x0,-0x44(%ebp)
 83fba8a:	8d 45 d0             	lea    -0x30(%ebp),%eax
 83fba8d:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fba91:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fba98:	00 
 83fba99:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fba9c:	89 04 24             	mov    %eax,(%esp)
 83fba9f:	e8 0a 68 ce ff       	call   80e22ae <_ZN5MySQL7get_intEiRj>
 83fbaa4:	8d 45 cc             	lea    -0x34(%ebp),%eax
 83fbaa7:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fbaab:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fbab2:	00 
 83fbab3:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fbab6:	89 04 24             	mov    %eax,(%esp)
 83fbab9:	e8 6e ae d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fbabe:	8d 45 c8             	lea    -0x38(%ebp),%eax
 83fbac1:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fbac5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 83fbacc:	00 
 83fbacd:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fbad0:	89 04 24             	mov    %eax,(%esp)
 83fbad3:	e8 54 ae d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fbad8:	8d 45 c4             	lea    -0x3c(%ebp),%eax
 83fbadb:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fbadf:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 83fbae6:	00 
 83fbae7:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fbaea:	89 04 24             	mov    %eax,(%esp)
 83fbaed:	e8 3a ae d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fbaf2:	8d 45 c0             	lea    -0x40(%ebp),%eax
 83fbaf5:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fbaf9:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 83fbb00:	00 
 83fbb01:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fbb04:	89 04 24             	mov    %eax,(%esp)
 83fbb07:	e8 20 ae d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fbb0c:	8d 45 bc             	lea    -0x44(%ebp),%eax
 83fbb0f:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fbb13:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 83fbb1a:	00 
 83fbb1b:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fbb1e:	89 04 24             	mov    %eax,(%esp)
 83fbb21:	e8 06 ae d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fbb26:	8b 45 c0             	mov    -0x40(%ebp),%eax
 83fbb29:	85 c0                	test   %eax,%eax
 83fbb2b:	75 68                	jne    83fbb95 <_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj+0x21f>
 83fbb2d:	8b 45 cc             	mov    -0x34(%ebp),%eax
 83fbb30:	3b 45 0c             	cmp    0xc(%ebp),%eax
 83fbb33:	75 60                	jne    83fbb95 <_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj+0x21f>
 83fbb35:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fbb38:	8b 45 d0             	mov    -0x30(%ebp),%eax
 83fbb3b:	c1 e2 04             	shl    $0x4,%edx
 83fbb3e:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fbb41:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fbb44:	81 ea dc 00 00 00    	sub    $0xdc,%edx
 83fbb4a:	89 02                	mov    %eax,(%edx)
 83fbb4c:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fbb4f:	8b 45 c4             	mov    -0x3c(%ebp),%eax
 83fbb52:	c1 e2 04             	shl    $0x4,%edx
 83fbb55:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fbb58:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83fbb5b:	81 ea d4 00 00 00    	sub    $0xd4,%edx
 83fbb61:	89 02                	mov    %eax,(%edx)
 83fbb63:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fbb66:	8b 45 bc             	mov    -0x44(%ebp),%eax
 83fbb69:	c1 e2 04             	shl    $0x4,%edx
 83fbb6c:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fbb6f:	8d 14 11             	lea    (%ecx,%edx,1),%edx
 83fbb72:	81 ea d0 00 00 00    	sub    $0xd0,%edx
 83fbb78:	89 02                	mov    %eax,(%edx)
 83fbb7a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 83fbb7d:	8b 45 c8             	mov    -0x38(%ebp),%eax
 83fbb80:	c1 e2 04             	shl    $0x4,%edx
 83fbb83:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fbb86:	8d 14 13             	lea    (%ebx,%edx,1),%edx
 83fbb89:	81 ea d8 00 00 00    	sub    $0xd8,%edx
 83fbb8f:	89 02                	mov    %eax,(%edx)
 83fbb91:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 83fbb95:	83 45 f0 01          	addl   $0x1,-0x10(%ebp)
 83fbb99:	8b 45 e8             	mov    -0x18(%ebp),%eax
 83fbb9c:	89 04 24             	mov    %eax,(%esp)
 83fbb9f:	e8 c8 67 ce ff       	call   80e236c <_ZN5MySQL10get_n_rowsEv>
 83fbba4:	3b 45 f0             	cmp    -0x10(%ebp),%eax
 83fbba7:	0f 97 c0             	seta   %al
 83fbbaa:	84 c0                	test   %al,%al
 83fbbac:	0f 85 98 fe ff ff    	jne    83fba4a <_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj+0xd4>
 83fbbb2:	eb 01                	jmp    83fbbb5 <_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj+0x23f>
 83fbbb4:	90                   	nop
 83fbbb5:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 83fbbbc:	e9 8b 00 00 00       	jmp    83fbc4c <_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj+0x2d6>
 83fbbc1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fbbc4:	c1 e0 04             	shl    $0x4,%eax
 83fbbc7:	8d 55 f8             	lea    -0x8(%ebp),%edx
 83fbbca:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83fbbcd:	2d d4 00 00 00       	sub    $0xd4,%eax
 83fbbd2:	8b 10                	mov    (%eax),%edx
 83fbbd4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fbbd7:	c1 e0 04             	shl    $0x4,%eax
 83fbbda:	8d 4d f8             	lea    -0x8(%ebp),%ecx
 83fbbdd:	8d 04 01             	lea    (%ecx,%eax,1),%eax
 83fbbe0:	2d dc 00 00 00       	sub    $0xdc,%eax
 83fbbe5:	8b 00                	mov    (%eax),%eax
 83fbbe7:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fbbeb:	89 04 24             	mov    %eax,(%esp)
 83fbbee:	e8 36 fd ff ff       	call   83fb929 <_ZN8WongWork12EventFCCombo22UpdateFCComboEventInfoEji>
 83fbbf3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fbbf6:	c1 e0 04             	shl    $0x4,%eax
 83fbbf9:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fbbfc:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fbbff:	2d d0 00 00 00       	sub    $0xd0,%eax
 83fbc04:	8b 00                	mov    (%eax),%eax
 83fbc06:	89 c1                	mov    %eax,%ecx
 83fbc08:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fbc0b:	c1 e0 04             	shl    $0x4,%eax
 83fbc0e:	8d 55 f8             	lea    -0x8(%ebp),%edx
 83fbc11:	8d 04 02             	lea    (%edx,%eax,1),%eax
 83fbc14:	2d d4 00 00 00       	sub    $0xd4,%eax
 83fbc19:	8b 00                	mov    (%eax),%eax
 83fbc1b:	89 c2                	mov    %eax,%edx
 83fbc1d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fbc20:	c1 e0 04             	shl    $0x4,%eax
 83fbc23:	8d 5d f8             	lea    -0x8(%ebp),%ebx
 83fbc26:	8d 04 03             	lea    (%ebx,%eax,1),%eax
 83fbc29:	2d d8 00 00 00       	sub    $0xd8,%eax
 83fbc2e:	8b 00                	mov    (%eax),%eax
 83fbc30:	c7 44 24 0c 07 00 00 	movl   $0x7,0xc(%esp)
 83fbc37:	00 
 83fbc38:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 83fbc3c:	89 54 24 04          	mov    %edx,0x4(%esp)
 83fbc40:	89 04 24             	mov    %eax,(%esp)
 83fbc43:	e8 0c df ff ff       	call   83f9b54 <_ZN8WongWork11EventCommon26InsertEventItem2EventTableEjjjj>
 83fbc48:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 83fbc4c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fbc4f:	3b 45 ec             	cmp    -0x14(%ebp),%eax
 83fbc52:	0f 9c c0             	setl   %al
 83fbc55:	84 c0                	test   %al,%al
 83fbc57:	0f 85 64 ff ff ff    	jne    83fbbc1 <_ZN8WongWork12EventFCCombo23ArrangeFCComboEventItemEjj+0x24b>
 83fbc5d:	81 c4 f4 00 00 00    	add    $0xf4,%esp
 83fbc63:	5b                   	pop    %ebx
 83fbc64:	5d                   	pop    %ebp
 83fbc65:	c3                   	ret

```

```c
// WongWork::EventFCCombo::ArrangeFCComboEventItem @ 0x83fb976

/* WongWork::EventFCCombo::ArrangeFCComboEventItem(unsigned int, unsigned int) */

void WongWork::EventFCCombo::ArrangeFCComboEventItem(uint param_1,uint param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  uint auStack_e8 [40];
  uint local_48;
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
  local_1c = (MySQL *)GetDBHandle();
  uVar2 = NumberToString(param_1,0);
  MySQL::set_query(local_1c,
                   "seLect id,item_server_id,item_charac_no,item_no,item_check,item_cnt from event_combo_entry where m_id=%s and occ_check!=0 limit %d"
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
      local_48 = 0;
      MySQL::get_int(local_1c,0,&local_34);
      MySQL::get_int(local_1c,1,(int *)&local_38);
      MySQL::get_int(local_1c,2,(int *)&local_3c);
      MySQL::get_int(local_1c,3,(int *)&local_40);
      MySQL::get_int(local_1c,4,&local_44);
      MySQL::get_int(local_1c,5,(int *)&local_48);
      if ((local_44 == 0) && (local_38 == param_2)) {
        auStack_e8[local_18 * 4] = local_34;
        auStack_e8[local_18 * 4 + 2] = local_40;
        auStack_e8[local_18 * 4 + 3] = local_48;
        auStack_e8[local_18 * 4 + 1] = local_3c;
        local_18 = local_18 + 1;
      }
      local_14 = local_14 + 1;
    }
    for (local_10 = 0; local_10 < local_18; local_10 = local_10 + 1) {
      UpdateFCComboEventInfo(auStack_e8[local_10 * 4],auStack_e8[local_10 * 4 + 2]);
      EventCommon::InsertEventItem2EventTable
                (auStack_e8[local_10 * 4 + 1],auStack_e8[local_10 * 4 + 2],
                 auStack_e8[local_10 * 4 + 3],7);
    }
  }
  else {
    uVar2 = NumberToString(param_1,0);
    cMyTrace::cMyTrace(local_30,
                       "void WongWork::EventFCCombo::ArrangeFCComboEventItem(memberIdentificationNumber_t, unsigned int)"
                       ,0x27a,5);
    cMyTrace::operator()
              (local_30,"%s, exec ERROR m_id=%s",
               "void WongWork::EventFCCombo::ArrangeFCComboEventItem(memberIdentificationNumber_t, unsigned int)"
               ,uVar2);
  }
  return;
}

```

---

## CheckAlreadyFCComboEventItem

```asm
// === 083fb883 WongWork::EventFCCombo::CheckAlreadyFCComboEventItem  [0x083fb883-0x83fb928] ===
 83fb883:	55                   	push   %ebp
 83fb884:	89 e5                	mov    %esp,%ebp
 83fb886:	83 ec 28             	sub    $0x28,%esp
 83fb889:	e8 ee 23 05 00       	call   844dc7c <_ZN8WongWork12EventFCCombo11GetDBHandleEv>
 83fb88e:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83fb891:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb898:	00 
 83fb899:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb89c:	89 04 24             	mov    %eax,(%esp)
 83fb89f:	e8 a7 d7 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fb8a4:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb8a8:	c7 44 24 04 68 65 c3 	movl   $0x8c36568,0x4(%esp)
 83fb8af:	08 
 83fb8b0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb8b3:	89 04 24             	mov    %eax,(%esp)
 83fb8b6:	e8 05 89 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fb8bb:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb8c2:	00 
 83fb8c3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb8c6:	89 04 24             	mov    %eax,(%esp)
 83fb8c9:	e8 58 8a ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fb8ce:	83 f0 01             	xor    $0x1,%eax
 83fb8d1:	84 c0                	test   %al,%al
 83fb8d3:	74 07                	je     83fb8dc <_ZN8WongWork12EventFCCombo28CheckAlreadyFCComboEventItemEji+0x59>
 83fb8d5:	b8 00 00 00 00       	mov    $0x0,%eax
 83fb8da:	eb 4b                	jmp    83fb927 <_ZN8WongWork12EventFCCombo28CheckAlreadyFCComboEventItemEji+0xa4>
 83fb8dc:	c7 45 f0 00 00 00 00 	movl   $0x0,-0x10(%ebp)
 83fb8e3:	8d 45 f0             	lea    -0x10(%ebp),%eax
 83fb8e6:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb8ea:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb8f1:	00 
 83fb8f2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb8f5:	89 04 24             	mov    %eax,(%esp)
 83fb8f8:	e8 2f b0 d1 ff       	call   811692c <_ZN5MySQL7get_intEiRi>
 83fb8fd:	83 f0 01             	xor    $0x1,%eax
 83fb900:	84 c0                	test   %al,%al
 83fb902:	75 07                	jne    83fb90b <_ZN8WongWork12EventFCCombo28CheckAlreadyFCComboEventItemEji+0x88>
 83fb904:	8b 45 f0             	mov    -0x10(%ebp),%eax
 83fb907:	85 c0                	test   %eax,%eax
 83fb909:	75 07                	jne    83fb912 <_ZN8WongWork12EventFCCombo28CheckAlreadyFCComboEventItemEji+0x8f>
 83fb90b:	b8 01 00 00 00       	mov    $0x1,%eax
 83fb910:	eb 05                	jmp    83fb917 <_ZN8WongWork12EventFCCombo28CheckAlreadyFCComboEventItemEji+0x94>
 83fb912:	b8 00 00 00 00       	mov    $0x0,%eax
 83fb917:	84 c0                	test   %al,%al
 83fb919:	74 07                	je     83fb922 <_ZN8WongWork12EventFCCombo28CheckAlreadyFCComboEventItemEji+0x9f>
 83fb91b:	b8 00 00 00 00       	mov    $0x0,%eax
 83fb920:	eb 05                	jmp    83fb927 <_ZN8WongWork12EventFCCombo28CheckAlreadyFCComboEventItemEji+0xa4>
 83fb922:	b8 01 00 00 00       	mov    $0x1,%eax
 83fb927:	c9                   	leave
 83fb928:	c3                   	ret

```

```c
// WongWork::EventFCCombo::CheckAlreadyFCComboEventItem @ 0x83fb883

/* WongWork::EventFCCombo::CheckAlreadyFCComboEventItem(unsigned int, int) */

undefined4 WongWork::EventFCCombo::CheckAlreadyFCComboEventItem(uint param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  int local_14;
  MySQL *local_10;
  
  local_10 = (MySQL *)GetDBHandle();
  uVar3 = NumberToString(param_1,0);
  MySQL::set_query(local_10,"seLect item_check from event_combo_entry where id=%s",uVar3);
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
      uVar3 = 0;
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

```

---

## UpdateFCComboEventInfo

```asm
// === 083fb929 WongWork::EventFCCombo::UpdateFCComboEventInfo  [0x083fb929-0x83fb975] ===
 83fb929:	55                   	push   %ebp
 83fb92a:	89 e5                	mov    %esp,%ebp
 83fb92c:	83 ec 28             	sub    $0x28,%esp
 83fb92f:	e8 48 23 05 00       	call   844dc7c <_ZN8WongWork12EventFCCombo11GetDBHandleEv>
 83fb934:	89 45 f4             	mov    %eax,-0xc(%ebp)
 83fb937:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 83fb93e:	00 
 83fb93f:	8b 45 08             	mov    0x8(%ebp),%eax
 83fb942:	89 04 24             	mov    %eax,(%esp)
 83fb945:	e8 01 d7 d0 ff       	call   810904b <_Z14NumberToStringji>
 83fb94a:	89 44 24 08          	mov    %eax,0x8(%esp)
 83fb94e:	c7 44 24 04 a0 65 c3 	movl   $0x8c365a0,0x4(%esp)
 83fb955:	08 
 83fb956:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb959:	89 04 24             	mov    %eax,(%esp)
 83fb95c:	e8 5f 88 ff ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 83fb961:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 83fb968:	00 
 83fb969:	8b 45 f4             	mov    -0xc(%ebp),%eax
 83fb96c:	89 04 24             	mov    %eax,(%esp)
 83fb96f:	e8 b2 89 ff ff       	call   83f4326 <_ZN5MySQL4execEb>
 83fb974:	c9                   	leave
 83fb975:	c3                   	ret

```

```c
// WongWork::EventFCCombo::UpdateFCComboEventInfo @ 0x83fb929

/* WongWork::EventFCCombo::UpdateFCComboEventInfo(unsigned int, int) */

void WongWork::EventFCCombo::UpdateFCComboEventInfo(uint param_1,int param_2)

{
  MySQL *this;
  undefined4 uVar1;
  
  this = (MySQL *)GetDBHandle();
  uVar1 = NumberToString(param_1,0);
  MySQL::set_query(this,"upDate event_combo_entry set item_check=unix_timestamp(now()) where id=%s",
                   uVar1);
  MySQL::exec(this,true);
  return;
}

```

