# DB_UpdateUserGiftFatigueQuantity

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 08441d1c DB_UpdateUserGiftFatigueQuantity::dispatch  [0x08441d1c-0x8441fdd] ===
 8441d1c:	55                   	push   %ebp
 8441d1d:	89 e5                	mov    %esp,%ebp
 8441d1f:	56                   	push   %esi
 8441d20:	53                   	push   %ebx
 8441d21:	83 ec 40             	sub    $0x40,%esp
 8441d24:	e8 72 a4 c8 ff       	call   80cc19b <_Z14G_CDataManagerv>
 8441d29:	89 04 24             	mov    %eax,(%esp)
 8441d2c:	e8 31 ee cc ff       	call   8110b62 <_ZN12CDataManager20get_event_script_mngEv>
 8441d31:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8441d34:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8441d38:	75 0a                	jne    8441d44 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x28>
 8441d3a:	bb 00 00 00 00       	mov    $0x0,%ebx
 8441d3f:	e9 90 02 00 00       	jmp    8441fd4 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x2b8>
 8441d44:	c7 44 24 04 65 00 00 	movl   $0x65,0x4(%esp)
 8441d4b:	00 
 8441d4c:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8441d4f:	89 04 24             	mov    %eax,(%esp)
 8441d52:	e8 13 9c cc ff       	call   810b96a <_ZN13EventClassify15CEventScriptMng16get_event_entityEi>
 8441d57:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8441d5a:	c6 45 eb 00          	movb   $0x0,-0x15(%ebp)
 8441d5e:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8441d62:	74 19                	je     8441d7d <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x61>
 8441d64:	8d 45 eb             	lea    -0x15(%ebp),%eax
 8441d67:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441d6b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8441d6e:	89 04 24             	mov    %eax,(%esp)
 8441d71:	e8 74 ea cc ff       	call   81107ea <_ZNK13EventClassify20CUsedFatigueGiveItem16getIsCharacEventERb>
 8441d76:	83 f0 01             	xor    $0x1,%eax
 8441d79:	84 c0                	test   %al,%al
 8441d7b:	74 07                	je     8441d84 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x68>
 8441d7d:	b8 01 00 00 00       	mov    $0x1,%eax
 8441d82:	eb 05                	jmp    8441d89 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x6d>
 8441d84:	b8 00 00 00 00       	mov    $0x0,%eax
 8441d89:	84 c0                	test   %al,%al
 8441d8b:	74 0a                	je     8441d97 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x7b>
 8441d8d:	bb 00 00 00 00       	mov    $0x0,%ebx
 8441d92:	e9 3d 02 00 00       	jmp    8441fd4 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x2b8>
 8441d97:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 8441d9e:	c7 45 e0 00 00 00 00 	movl   $0x0,-0x20(%ebp)
 8441da5:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 8441dac:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 8441daf:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441db3:	8b 45 14             	mov    0x14(%ebp),%eax
 8441db6:	89 04 24             	mov    %eax,(%esp)
 8441db9:	e8 d8 a9 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8441dbe:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8441dc1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441dc5:	8b 45 14             	mov    0x14(%ebp),%eax
 8441dc8:	89 04 24             	mov    %eax,(%esp)
 8441dcb:	e8 c6 a9 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8441dd0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8441dd3:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441dd7:	8b 45 14             	mov    0x14(%ebp),%eax
 8441dda:	89 04 24             	mov    %eax,(%esp)
 8441ddd:	e8 b4 a9 1d 00       	call   861c796 <_ZN6StreamrsERj>
 8441de2:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8441de9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8441dec:	8b 00                	mov    (%eax),%eax
 8441dee:	83 c0 20             	add    $0x20,%eax
 8441df1:	8b 10                	mov    (%eax),%edx
 8441df3:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8441df6:	89 04 24             	mov    %eax,(%esp)
 8441df9:	ff d2                	call   *%edx
 8441dfb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8441dff:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8441e02:	89 04 24             	mov    %eax,(%esp)
 8441e05:	e8 a6 5b 2c 00       	call   87079b0 <_ZNSsC1ERKSs>
 8441e0a:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8441e0e:	83 f0 01             	xor    $0x1,%eax
 8441e11:	84 c0                	test   %al,%al
 8441e13:	74 64                	je     8441e79 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x15d>
 8441e15:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8441e1a:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8441e21:	00 
 8441e22:	c7 44 24 04 09 00 00 	movl   $0x9,0x4(%esp)
 8441e29:	00 
 8441e2a:	89 04 24             	mov    %eax,(%esp)
 8441e2d:	e8 0c 34 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8441e32:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8441e35:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8441e38:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8441e3f:	00 
 8441e40:	89 04 24             	mov    %eax,(%esp)
 8441e43:	e8 03 72 cc ff       	call   810904b <_Z14NumberToStringji>
 8441e48:	89 c3                	mov    %eax,%ebx
 8441e4a:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8441e4d:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8441e50:	89 04 24             	mov    %eax,(%esp)
 8441e53:	e8 58 cc 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8441e58:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 8441e5c:	89 74 24 0c          	mov    %esi,0xc(%esp)
 8441e60:	89 44 24 08          	mov    %eax,0x8(%esp)
 8441e64:	c7 44 24 04 f8 67 c5 	movl   $0x8c567f8,0x4(%esp)
 8441e6b:	08 
 8441e6c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441e6f:	89 04 24             	mov    %eax,(%esp)
 8441e72:	e8 49 23 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8441e77:	eb 50                	jmp    8441ec9 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x1ad>
 8441e79:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8441e7e:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8441e85:	00 
 8441e86:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8441e8d:	00 
 8441e8e:	89 04 24             	mov    %eax,(%esp)
 8441e91:	e8 a8 33 fb ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8441e96:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8441e99:	8b 75 e0             	mov    -0x20(%ebp),%esi
 8441e9c:	8b 5d dc             	mov    -0x24(%ebp),%ebx
 8441e9f:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8441ea2:	89 04 24             	mov    %eax,(%esp)
 8441ea5:	e8 06 cc 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8441eaa:	89 74 24 10          	mov    %esi,0x10(%esp)
 8441eae:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8441eb2:	89 44 24 08          	mov    %eax,0x8(%esp)
 8441eb6:	c7 44 24 04 28 68 c5 	movl   $0x8c56828,0x4(%esp)
 8441ebd:	08 
 8441ebe:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441ec1:	89 04 24             	mov    %eax,(%esp)
 8441ec4:	e8 f7 22 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8441ec9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8441ed0:	00 
 8441ed1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441ed4:	89 04 24             	mov    %eax,(%esp)
 8441ed7:	e8 4a 24 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8441edc:	83 f0 01             	xor    $0x1,%eax
 8441edf:	84 c0                	test   %al,%al
 8441ee1:	74 0a                	je     8441eed <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x1d1>
 8441ee3:	bb 00 00 00 00       	mov    $0x0,%ebx
 8441ee8:	e9 dc 00 00 00       	jmp    8441fc9 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x2ad>
 8441eed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441ef0:	89 04 24             	mov    %eax,(%esp)
 8441ef3:	e8 18 24 fb ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 8441ef8:	09 d0                	or     %edx,%eax
 8441efa:	85 c0                	test   %eax,%eax
 8441efc:	0f 94 c0             	sete   %al
 8441eff:	84 c0                	test   %al,%al
 8441f01:	0f 84 a0 00 00 00    	je     8441fa7 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x28b>
 8441f07:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8441f0b:	83 f0 01             	xor    $0x1,%eax
 8441f0e:	84 c0                	test   %al,%al
 8441f10:	74 44                	je     8441f56 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x23a>
 8441f12:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8441f15:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 8441f18:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8441f1f:	00 
 8441f20:	89 04 24             	mov    %eax,(%esp)
 8441f23:	e8 23 71 cc ff       	call   810904b <_Z14NumberToStringji>
 8441f28:	89 c3                	mov    %eax,%ebx
 8441f2a:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8441f2d:	89 04 24             	mov    %eax,(%esp)
 8441f30:	e8 7b cb 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8441f35:	89 74 24 10          	mov    %esi,0x10(%esp)
 8441f39:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8441f3d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8441f41:	c7 44 24 04 60 68 c5 	movl   $0x8c56860,0x4(%esp)
 8441f48:	08 
 8441f49:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441f4c:	89 04 24             	mov    %eax,(%esp)
 8441f4f:	e8 6c 22 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8441f54:	eb 30                	jmp    8441f86 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x26a>
 8441f56:	8b 75 dc             	mov    -0x24(%ebp),%esi
 8441f59:	8b 5d e0             	mov    -0x20(%ebp),%ebx
 8441f5c:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8441f5f:	89 04 24             	mov    %eax,(%esp)
 8441f62:	e8 49 cb 69 00       	call   8adeab0 <_Z9toTStringRKSs>
 8441f67:	89 74 24 10          	mov    %esi,0x10(%esp)
 8441f6b:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 8441f6f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8441f73:	c7 44 24 04 98 68 c5 	movl   $0x8c56898,0x4(%esp)
 8441f7a:	08 
 8441f7b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441f7e:	89 04 24             	mov    %eax,(%esp)
 8441f81:	e8 3a 22 fb ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8441f86:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8441f8d:	00 
 8441f8e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8441f91:	89 04 24             	mov    %eax,(%esp)
 8441f94:	e8 8d 23 fb ff       	call   83f4326 <_ZN5MySQL4execEb>
 8441f99:	83 f0 01             	xor    $0x1,%eax
 8441f9c:	84 c0                	test   %al,%al
 8441f9e:	74 07                	je     8441fa7 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x28b>
 8441fa0:	bb 00 00 00 00       	mov    $0x0,%ebx
 8441fa5:	eb 22                	jmp    8441fc9 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x2ad>
 8441fa7:	bb 01 00 00 00       	mov    $0x1,%ebx
 8441fac:	eb 1b                	jmp    8441fc9 <_ZN32DB_UpdateUserGiftFatigueQuantity8dispatchEiiP6Stream+0x2ad>
 8441fae:	89 d3                	mov    %edx,%ebx
 8441fb0:	89 c6                	mov    %eax,%esi
 8441fb2:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8441fb5:	89 04 24             	mov    %eax,(%esp)
 8441fb8:	e8 23 5c 2c 00       	call   8707be0 <_ZNSsD1Ev>
 8441fbd:	89 f0                	mov    %esi,%eax
 8441fbf:	89 da                	mov    %ebx,%edx
 8441fc1:	89 04 24             	mov    %eax,(%esp)
 8441fc4:	e8 87 17 6a 00       	call   8ae3750 <_Unwind_Resume>
 8441fc9:	8d 45 d8             	lea    -0x28(%ebp),%eax
 8441fcc:	89 04 24             	mov    %eax,(%esp)
 8441fcf:	e8 0c 5c 2c 00       	call   8707be0 <_ZNSsD1Ev>
 8441fd4:	89 d8                	mov    %ebx,%eax
 8441fd6:	83 c4 40             	add    $0x40,%esp
 8441fd9:	5b                   	pop    %ebx
 8441fda:	5e                   	pop    %esi
 8441fdb:	5d                   	pop    %ebp
 8441fdc:	c3                   	ret
 8441fdd:	90                   	nop

```

```c
// DB_UpdateUserGiftFatigueQuantity::dispatch @ 0x8441d1c

/* DB_UpdateUserGiftFatigueQuantity::dispatch(int, int, Stream*) */

undefined4 DB_UpdateUserGiftFatigueQuantity::dispatch(int param_1,int param_2,Stream *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  CDataManager *this;
  string *psVar5;
  undefined4 uVar6;
  TCHAR *pTVar7;
  longlong lVar8;
  Stream *in_stack_00000010;
  string local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  bool local_19;
  int local_18;
  CUsedFatigueGiveItem *local_14;
  MySQL *local_10;
  
  this = (CDataManager *)G_CDataManager();
  local_18 = CDataManager::get_event_script_mng(this);
  if (local_18 == 0) {
    return 0;
  }
  local_14 = (CUsedFatigueGiveItem *)EventClassify::CEventScriptMng::get_event_entity(local_18);
  local_19 = false;
  if ((local_14 == (CUsedFatigueGiveItem *)0x0) ||
     (cVar4 = EventClassify::CUsedFatigueGiveItem::getIsCharacEvent(local_14,&local_19),
     cVar4 != '\x01')) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    return 0;
  }
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  Stream::operator>>(in_stack_00000010,&local_20);
  Stream::operator>>(in_stack_00000010,&local_24);
  Stream::operator>>(in_stack_00000010,&local_28);
  local_10 = (MySQL *)0x0;
  psVar5 = (string *)(**(code **)(*(int *)local_14 + 0x20))(local_14);
  std::string::string((string *)&local_2c,psVar5);
  if (local_19 == true) {
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
    uVar3 = local_24;
    uVar2 = local_28;
    pTVar7 = toTString(&local_2c);
    MySQL::set_query(local_10,"upDate %s set fatigue_quantity=%u where charac_no=%u",pTVar7,uVar2,
                     uVar3);
  }
  else {
                    /* try { // try from 08441e2d to 08441f98 has its CatchHandler @ 08441fae */
    local_10 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,9,0);
    uVar6 = NumberToString(local_20,0);
    uVar2 = local_28;
    pTVar7 = toTString(&local_2c);
    MySQL::set_query(local_10,"upDate %s set fatigue_quantity=%u where m_id=%s",pTVar7,uVar2,uVar6);
  }
  cVar4 = MySQL::exec(local_10,true);
  if (cVar4 == '\x01') {
    lVar8 = MySQL::getAffectedRowCount(local_10);
    uVar3 = local_24;
    uVar2 = local_28;
    if (lVar8 == 0) {
      if (local_19 == true) {
        pTVar7 = toTString(&local_2c);
        MySQL::set_query(local_10,"inSert into %s(charac_no, fatigue_quantity) values(%u, %u)",
                         pTVar7,uVar3,uVar2);
      }
      else {
        uVar6 = NumberToString(local_20,0);
        pTVar7 = toTString(&local_2c);
        MySQL::set_query(local_10,"inSert into %s(m_id, fatigue_quantity) values(%s, %u)",pTVar7,
                         uVar6,uVar2);
      }
      cVar4 = MySQL::exec(local_10,true);
      if (cVar4 != '\x01') {
        uVar6 = 0;
        goto LAB_08441fc9;
      }
    }
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
LAB_08441fc9:
  std::string::~string((string *)&local_2c);
  return uVar6;
}

```

---

## makeRequest

```asm
// === 08441fde DB_UpdateUserGiftFatigueQuantity::makeRequest  [0x08441fde-0x84420e9] ===
 8441fde:	55                   	push   %ebp
 8441fdf:	89 e5                	mov    %esp,%ebp
 8441fe1:	56                   	push   %esi
 8441fe2:	53                   	push   %ebx
 8441fe3:	83 ec 20             	sub    $0x20,%esp
 8441fe6:	a1 6c bd 40 09       	mov    0x940bd6c,%eax
 8441feb:	c7 44 24 08 b1 a1 00 	movl   $0xa1b1,0x8(%esp)
 8441ff2:	00 
 8441ff3:	c7 44 24 04 14 67 c3 	movl   $0x8c36714,0x4(%esp)
 8441ffa:	08 
 8441ffb:	89 04 24             	mov    %eax,(%esp)
 8441ffe:	e8 83 da e4 ff       	call   828fa86 <_ZN10StreamPool7AcquireEPKci>
 8442003:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 844200a:	00 
 844200b:	89 44 24 04          	mov    %eax,0x4(%esp)
 844200f:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442012:	89 04 24             	mov    %eax,(%esp)
 8442015:	e8 0c 6c c8 ff       	call   80c8c26 <_ZN12CStreamGuardC1EP6Streamb>
 844201a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844201d:	89 04 24             	mov    %eax,(%esp)
 8442020:	e8 21 6c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442025:	c7 44 24 04 88 02 00 	movl   $0x288,0x4(%esp)
 844202c:	00 
 844202d:	89 04 24             	mov    %eax,(%esp)
 8442030:	e8 21 6c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8442035:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442038:	89 04 24             	mov    %eax,(%esp)
 844203b:	e8 06 6c c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442040:	c7 44 24 04 ff ff ff 	movl   $0xffffffff,0x4(%esp)
 8442047:	ff 
 8442048:	89 04 24             	mov    %eax,(%esp)
 844204b:	e8 06 6c c8 ff       	call   80c8c56 <_ZN12CStreamGuardlsEi>
 8442050:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442053:	89 04 24             	mov    %eax,(%esp)
 8442056:	e8 eb 6b c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844205b:	8b 55 08             	mov    0x8(%ebp),%edx
 844205e:	89 54 24 04          	mov    %edx,0x4(%esp)
 8442062:	89 04 24             	mov    %eax,(%esp)
 8442065:	e8 28 02 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 844206a:	8d 45 f0             	lea    -0x10(%ebp),%eax
 844206d:	89 04 24             	mov    %eax,(%esp)
 8442070:	e8 d1 6b c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 8442075:	8b 55 0c             	mov    0xc(%ebp),%edx
 8442078:	89 54 24 04          	mov    %edx,0x4(%esp)
 844207c:	89 04 24             	mov    %eax,(%esp)
 844207f:	e8 0e 02 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 8442084:	8d 45 f0             	lea    -0x10(%ebp),%eax
 8442087:	89 04 24             	mov    %eax,(%esp)
 844208a:	e8 b7 6b c8 ff       	call   80c8c46 <_ZN12CStreamGuarddeEv>
 844208f:	8b 55 10             	mov    0x10(%ebp),%edx
 8442092:	89 54 24 04          	mov    %edx,0x4(%esp)
 8442096:	89 04 24             	mov    %eax,(%esp)
 8442099:	e8 f4 01 ca ff       	call   80e2292 <_ZN12CStreamGuardlsEj>
 844209e:	a1 68 bd 40 09       	mov    0x940bd68,%eax
 84420a3:	8d 55 f0             	lea    -0x10(%ebp),%edx
 84420a6:	89 54 24 08          	mov    %edx,0x8(%esp)
 84420aa:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 84420b1:	00 
 84420b2:	89 04 24             	mov    %eax,(%esp)
 84420b5:	e8 24 ef 12 00       	call   8570fde <_ZN11MsgQueueMgr3putENS_9QUEUE_IDXER12CStreamGuard>
 84420ba:	eb 1b                	jmp    84420d7 <_ZN32DB_UpdateUserGiftFatigueQuantity11makeRequestEjjj+0xf9>
 84420bc:	89 d3                	mov    %edx,%ebx
 84420be:	89 c6                	mov    %eax,%esi
 84420c0:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84420c3:	89 04 24             	mov    %eax,(%esp)
 84420c6:	e8 07 a8 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84420cb:	89 f0                	mov    %esi,%eax
 84420cd:	89 da                	mov    %ebx,%edx
 84420cf:	89 04 24             	mov    %eax,(%esp)
 84420d2:	e8 79 16 6a 00       	call   8ae3750 <_Unwind_Resume>
 84420d7:	8d 45 f0             	lea    -0x10(%ebp),%eax
 84420da:	89 04 24             	mov    %eax,(%esp)
 84420dd:	e8 f0 a7 1d 00       	call   861c8d2 <_ZN12CStreamGuardD1Ev>
 84420e2:	83 c4 20             	add    $0x20,%esp
 84420e5:	5b                   	pop    %ebx
 84420e6:	5e                   	pop    %esi
 84420e7:	5d                   	pop    %ebp
 84420e8:	c3                   	ret
 84420e9:	90                   	nop

```

```c
// DB_UpdateUserGiftFatigueQuantity::makeRequest @ 0x8441fde

/* DB_UpdateUserGiftFatigueQuantity::makeRequest(unsigned int, unsigned int, unsigned int) */

void DB_UpdateUserGiftFatigueQuantity::makeRequest(uint param_1,uint param_2,uint param_3)

{
  Stream *pSVar1;
  CStreamGuard *pCVar2;
  CStreamGuard local_14 [8];
  
  pSVar1 = (Stream *)StreamPool::Acquire(GlobalData::s_stream_pool,"DBThread.cpp",0xa1b1);
  CStreamGuard::CStreamGuard(local_14,pSVar1,true);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
                    /* try { // try from 08442030 to 084420b9 has its CatchHandler @ 084420bc */
  CStreamGuard::operator<<(pCVar2,0x288);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,-1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_1);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_2);
  pCVar2 = (CStreamGuard *)CStreamGuard::operator*(local_14);
  CStreamGuard::operator<<(pCVar2,param_3);
  MsgQueueMgr::put(GlobalData::s_msgq_mgr,2,local_14);
  CStreamGuard::~CStreamGuard(local_14);
  return;
}

```

