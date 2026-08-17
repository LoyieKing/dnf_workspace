# CCirculationStatistic

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## AddCirculationStatistic

```asm
// === 0860daaa CCirculationStatistic::AddCirculationStatistic  [0x0860daaa-0x860dccb] ===
 860daaa:	55                   	push   %ebp
 860daab:	89 e5                	mov    %esp,%ebp
 860daad:	57                   	push   %edi
 860daae:	56                   	push   %esi
 860daaf:	53                   	push   %ebx
 860dab0:	81 ec 1c a0 00 00    	sub    $0xa01c,%esp
 860dab6:	8b 45 0c             	mov    0xc(%ebp),%eax
 860dab9:	85 c0                	test   %eax,%eax
 860dabb:	78 27                	js     860dae4 <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj+0x3a>
 860dabd:	8b 45 0c             	mov    0xc(%ebp),%eax
 860dac0:	83 f8 2f             	cmp    $0x2f,%eax
 860dac3:	7f 1f                	jg     860dae4 <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj+0x3a>
 860dac5:	8b 45 10             	mov    0x10(%ebp),%eax
 860dac8:	89 04 24             	mov    %eax,(%esp)
 860dacb:	e8 e8 c7 ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860dad0:	85 c0                	test   %eax,%eax
 860dad2:	7e 10                	jle    860dae4 <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj+0x3a>
 860dad4:	8b 45 10             	mov    0x10(%ebp),%eax
 860dad7:	89 04 24             	mov    %eax,(%esp)
 860dada:	e8 d9 c7 ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860dadf:	83 f8 46             	cmp    $0x46,%eax
 860dae2:	7e 07                	jle    860daeb <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj+0x41>
 860dae4:	b8 01 00 00 00       	mov    $0x1,%eax
 860dae9:	eb 05                	jmp    860daf0 <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj+0x46>
 860daeb:	b8 00 00 00 00       	mov    $0x0,%eax
 860daf0:	84 c0                	test   %al,%al
 860daf2:	74 5e                	je     860db52 <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj+0xa8>
 860daf4:	8b 45 10             	mov    0x10(%ebp),%eax
 860daf7:	89 04 24             	mov    %eax,(%esp)
 860dafa:	e8 b9 c7 ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860daff:	89 c3                	mov    %eax,%ebx
 860db01:	8b 75 0c             	mov    0xc(%ebp),%esi
 860db04:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 860db0b:	00 
 860db0c:	c7 44 24 08 9b 03 00 	movl   $0x39b,0x8(%esp)
 860db13:	00 
 860db14:	c7 44 24 04 00 12 ce 	movl   $0x8ce1200,0x4(%esp)
 860db1b:	08 
 860db1c:	8d 85 38 95 ff ff    	lea    -0x6ac8(%ebp),%eax
 860db22:	89 04 24             	mov    %eax,(%esp)
 860db25:	e8 ee 1b f4 ff       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 860db2a:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 860db2e:	89 74 24 08          	mov    %esi,0x8(%esp)
 860db32:	c7 44 24 04 00 03 ce 	movl   $0x8ce0300,0x4(%esp)
 860db39:	08 
 860db3a:	8d 85 38 95 ff ff    	lea    -0x6ac8(%ebp),%eax
 860db40:	89 04 24             	mov    %eax,(%esp)
 860db43:	e8 40 1c f4 ff       	call   854f788 <_ZN8cMyTraceclEPKcz>
 860db48:	b8 00 00 00 00       	mov    $0x0,%eax
 860db4d:	e9 6f 01 00 00       	jmp    860dcc1 <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj+0x217>
 860db52:	8b 45 10             	mov    0x10(%ebp),%eax
 860db55:	89 04 24             	mov    %eax,(%esp)
 860db58:	e8 33 e1 ab ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 860db5d:	89 85 48 95 ff ff    	mov    %eax,-0x6ab8(%ebp)
 860db63:	8b 55 08             	mov    0x8(%ebp),%edx
 860db66:	8d 85 34 95 ff ff    	lea    -0x6acc(%ebp),%eax
 860db6c:	8d 8d 48 95 ff ff    	lea    -0x6ab8(%ebp),%ecx
 860db72:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860db76:	89 54 24 04          	mov    %edx,0x4(%esp)
 860db7a:	89 04 24             	mov    %eax,(%esp)
 860db7d:	e8 92 38 00 00       	call   8611414 <_ZNSt3mapI17ENUM_SERVER_GROUPN21CCirculationStatistic22stCirculationStatisticESt4lessIS0_ESaISt4pairIKS0_S2_EEE4findERS6_>
 860db82:	83 ec 04             	sub    $0x4,%esp
 860db85:	8b 55 08             	mov    0x8(%ebp),%edx
 860db88:	8d 85 4c 95 ff ff    	lea    -0x6ab4(%ebp),%eax
 860db8e:	89 54 24 04          	mov    %edx,0x4(%esp)
 860db92:	89 04 24             	mov    %eax,(%esp)
 860db95:	e8 a6 38 00 00       	call   8611440 <_ZNSt3mapI17ENUM_SERVER_GROUPN21CCirculationStatistic22stCirculationStatisticESt4lessIS0_ESaISt4pairIKS0_S2_EEE3endEv>
 860db9a:	83 ec 04             	sub    $0x4,%esp
 860db9d:	8d 85 4c 95 ff ff    	lea    -0x6ab4(%ebp),%eax
 860dba3:	89 44 24 04          	mov    %eax,0x4(%esp)
 860dba7:	8d 85 34 95 ff ff    	lea    -0x6acc(%ebp),%eax
 860dbad:	89 04 24             	mov    %eax,(%esp)
 860dbb0:	e8 b1 38 00 00       	call   8611466 <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPN21CCirculationStatistic22stCirculationStatisticEEEneERKS6_>
 860dbb5:	84 c0                	test   %al,%al
 860dbb7:	74 55                	je     860dc0e <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj+0x164>
 860dbb9:	8d 85 34 95 ff ff    	lea    -0x6acc(%ebp),%eax
 860dbbf:	89 04 24             	mov    %eax,(%esp)
 860dbc2:	e8 b3 38 00 00       	call   861147a <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPN21CCirculationStatistic22stCirculationStatisticEEEptEv>
 860dbc7:	83 c0 04             	add    $0x4,%eax
 860dbca:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 860dbcd:	8b 45 10             	mov    0x10(%ebp),%eax
 860dbd0:	89 04 24             	mov    %eax,(%esp)
 860dbd3:	e8 e0 c6 ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860dbd8:	89 c2                	mov    %eax,%edx
 860dbda:	8b 75 0c             	mov    0xc(%ebp),%esi
 860dbdd:	89 c1                	mov    %eax,%ecx
 860dbdf:	8b 7d 0c             	mov    0xc(%ebp),%edi
 860dbe2:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
 860dbe5:	89 c8                	mov    %ecx,%eax
 860dbe7:	01 c0                	add    %eax,%eax
 860dbe9:	01 c8                	add    %ecx,%eax
 860dbeb:	c1 e0 04             	shl    $0x4,%eax
 860dbee:	01 f8                	add    %edi,%eax
 860dbf0:	8b 04 83             	mov    (%ebx,%eax,4),%eax
 860dbf3:	89 c3                	mov    %eax,%ebx
 860dbf5:	03 5d 14             	add    0x14(%ebp),%ebx
 860dbf8:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
 860dbfb:	89 d0                	mov    %edx,%eax
 860dbfd:	01 c0                	add    %eax,%eax
 860dbff:	01 d0                	add    %edx,%eax
 860dc01:	c1 e0 04             	shl    $0x4,%eax
 860dc04:	01 f0                	add    %esi,%eax
 860dc06:	89 1c 81             	mov    %ebx,(%ecx,%eax,4)
 860dc09:	e9 ae 00 00 00       	jmp    860dcbc <_ZN21CCirculationStatistic23AddCirculationStatisticE27CIRCULATION_STATISTIC_FIELDP5CUserj+0x212>
 860dc0e:	c7 44 24 08 40 35 00 	movl   $0x3540,0x8(%esp)
 860dc15:	00 
 860dc16:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 860dc1d:	00 
 860dc1e:	8d 85 f4 5f ff ff    	lea    -0xa00c(%ebp),%eax
 860dc24:	89 04 24             	mov    %eax,(%esp)
 860dc27:	e8 94 00 a7 ff       	call   807dcc0 <memset@plt>
 860dc2c:	8b 45 10             	mov    0x10(%ebp),%eax
 860dc2f:	89 04 24             	mov    %eax,(%esp)
 860dc32:	e8 81 c6 ac ff       	call   80da2b8 <_ZNK15CUserCharacInfo16get_charac_levelEv>
 860dc37:	89 c2                	mov    %eax,%edx
 860dc39:	8b 4d 0c             	mov    0xc(%ebp),%ecx
 860dc3c:	89 d0                	mov    %edx,%eax
 860dc3e:	01 c0                	add    %eax,%eax
 860dc40:	01 d0                	add    %edx,%eax
 860dc42:	c1 e0 04             	shl    $0x4,%eax
 860dc45:	8d 14 08             	lea    (%eax,%ecx,1),%edx
 860dc48:	8b 45 14             	mov    0x14(%ebp),%eax
 860dc4b:	89 84 95 f4 5f ff ff 	mov    %eax,-0xa00c(%ebp,%edx,4)
 860dc52:	8b 45 10             	mov    0x10(%ebp),%eax
 860dc55:	89 04 24             	mov    %eax,(%esp)
 860dc58:	e8 33 e0 ab ff       	call   80cbc90 <_ZNK5CUser14GetServerGroupEv>
 860dc5d:	89 45 e0             	mov    %eax,-0x20(%ebp)
 860dc60:	8d 85 9c ca ff ff    	lea    -0x3564(%ebp),%eax
 860dc66:	8d 95 f4 5f ff ff    	lea    -0xa00c(%ebp),%edx
 860dc6c:	89 54 24 08          	mov    %edx,0x8(%esp)
 860dc70:	8d 55 e0             	lea    -0x20(%ebp),%edx
 860dc73:	89 54 24 04          	mov    %edx,0x4(%esp)
 860dc77:	89 04 24             	mov    %eax,(%esp)
 860dc7a:	e8 08 38 00 00       	call   8611487 <_ZSt9make_pairI17ENUM_SERVER_GROUPRN21CCirculationStatistic22stCirculationStatisticEESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 860dc7f:	83 ec 04             	sub    $0x4,%esp
 860dc82:	8d 85 9c ca ff ff    	lea    -0x3564(%ebp),%eax
 860dc88:	89 44 24 04          	mov    %eax,0x4(%esp)
 860dc8c:	8d 85 58 95 ff ff    	lea    -0x6aa8(%ebp),%eax
 860dc92:	89 04 24             	mov    %eax,(%esp)
 860dc95:	e8 34 38 00 00       	call   86114ce <_ZNSt4pairIK17ENUM_SERVER_GROUPN21CCirculationStatistic22stCirculationStatisticEEC1IS0_S3_EEOS_IT_T0_E>
 860dc9a:	8b 55 08             	mov    0x8(%ebp),%edx
 860dc9d:	8d 85 50 95 ff ff    	lea    -0x6ab0(%ebp),%eax
 860dca3:	8d 8d 58 95 ff ff    	lea    -0x6aa8(%ebp),%ecx
 860dca9:	89 4c 24 08          	mov    %ecx,0x8(%esp)
 860dcad:	89 54 24 04          	mov    %edx,0x4(%esp)
 860dcb1:	89 04 24             	mov    %eax,(%esp)
 860dcb4:	e8 59 38 00 00       	call   8611512 <_ZNSt3mapI17ENUM_SERVER_GROUPN21CCirculationStatistic22stCirculationStatisticESt4lessIS0_ESaISt4pairIKS0_S2_EEE6insertERKS7_>
 860dcb9:	83 ec 04             	sub    $0x4,%esp
 860dcbc:	b8 01 00 00 00       	mov    $0x1,%eax
 860dcc1:	8d 65 f4             	lea    -0xc(%ebp),%esp
 860dcc4:	83 c4 00             	add    $0x0,%esp
 860dcc7:	5b                   	pop    %ebx
 860dcc8:	5e                   	pop    %esi
 860dcc9:	5f                   	pop    %edi
 860dcca:	5d                   	pop    %ebp
 860dccb:	c3                   	ret

```

```c
// CCirculationStatistic::AddCirculationStatistic @ 0x860daaa

/* CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)
    */

undefined4 __thiscall
CCirculationStatistic::AddCirculationStatistic
          (undefined4 this,int param_2,CUserCharacInfo *param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int local_a010 [3408];
  _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
  local_6ad0 [4];
  cMyTrace local_6acc [16];
  undefined4 local_6abc;
  map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
  local_6ab8 [4];
  pair local_6ab4 [8];
  pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic> local_6aac [13636];
  ENUM_SERVER_GROUP local_3568 [13636];
  undefined4 local_24;
  int local_20;
  
  if ((-1 < param_2) && (param_2 < 0x30)) {
    iVar3 = CUserCharacInfo::get_charac_level(param_3);
    if (0 < iVar3) {
      iVar3 = CUserCharacInfo::get_charac_level(param_3);
      if (iVar3 < 0x47) {
        bVar1 = false;
        goto LAB_0860daf0;
      }
    }
  }
  bVar1 = true;
LAB_0860daf0:
  if (bVar1) {
    uVar4 = CUserCharacInfo::get_charac_level(param_3);
    cMyTrace::cMyTrace(local_6acc,
                       "bool CCirculationStatistic::AddCirculationStatistic(CIRCULATION_STATISTIC_FIELD, CUser*, unsigned int)"
                       ,0x39b,0);
    cMyTrace::operator()(local_6acc,"CIRCULATION_STATISTIC wrong index (%d,%d)",param_2,uVar4);
    uVar4 = 0;
  }
  else {
    local_6abc = CUser::GetServerGroup((CUser *)param_3);
    std::
    map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
    ::find(local_6ad0);
    std::
    map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
    ::end(local_6ab8);
    cVar2 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
            ::operator!=(local_6ad0,(_Rb_tree_iterator *)local_6ab8);
    if (cVar2 == '\0') {
      memset(local_a010,0,0x3540);
      iVar3 = CUserCharacInfo::get_charac_level(param_3);
      local_a010[iVar3 * 0x30 + param_2] = param_4;
      local_24 = CUser::GetServerGroup((CUser *)param_3);
      std::make_pair<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic&>
                (local_3568,(stCirculationStatistic *)&local_24);
      std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>::
      pair<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic>(local_6aac,local_3568);
      std::
      map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
      ::insert(local_6ab4);
    }
    else {
      local_20 = std::
                 _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
                 ::operator->(local_6ad0);
      local_20 = local_20 + 4;
      iVar3 = CUserCharacInfo::get_charac_level(param_3);
      *(int *)(local_20 + (iVar3 * 0x30 + param_2) * 4) =
           *(int *)(local_20 + (iVar3 * 0x30 + param_2) * 4) + param_4;
    }
    uVar4 = 1;
  }
  return uVar4;
}

```

---

## InsertCirculationStatistic

```asm
// === 0860dccc CCirculationStatistic::InsertCirculationStatistic  [0x0860dccc-0x860de4f] ===
 860dccc:	55                   	push   %ebp
 860dccd:	89 e5                	mov    %esp,%ebp
 860dccf:	53                   	push   %ebx
 860dcd0:	81 ec 04 01 00 00    	sub    $0x104,%esp
 860dcd6:	8b 55 08             	mov    0x8(%ebp),%edx
 860dcd9:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860dcdc:	89 54 24 04          	mov    %edx,0x4(%esp)
 860dce0:	89 04 24             	mov    %eax,(%esp)
 860dce3:	e8 56 38 00 00       	call   861153e <_ZNSt3mapI17ENUM_SERVER_GROUPN21CCirculationStatistic22stCirculationStatisticESt4lessIS0_ESaISt4pairIKS0_S2_EEE5beginEv>
 860dce8:	83 ec 04             	sub    $0x4,%esp
 860dceb:	e9 27 01 00 00       	jmp    860de17 <_ZN21CCirculationStatistic26InsertCirculationStatisticEv+0x14b>
 860dcf0:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860dcf3:	89 04 24             	mov    %eax,(%esp)
 860dcf6:	e8 7f 37 00 00       	call   861147a <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPN21CCirculationStatistic22stCirculationStatisticEEEptEv>
 860dcfb:	8b 00                	mov    (%eax),%eax
 860dcfd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 860dd00:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860dd03:	89 04 24             	mov    %eax,(%esp)
 860dd06:	e8 6f 37 00 00       	call   861147a <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPN21CCirculationStatistic22stCirculationStatisticEEEptEv>
 860dd0b:	83 c0 04             	add    $0x4,%eax
 860dd0e:	89 45 e8             	mov    %eax,-0x18(%ebp)
 860dd11:	c7 45 ec 01 00 00 00 	movl   $0x1,-0x14(%ebp)
 860dd18:	e9 d5 00 00 00       	jmp    860ddf2 <_ZN21CCirculationStatistic26InsertCirculationStatisticEv+0x126>
 860dd1d:	c6 45 f3 00          	movb   $0x0,-0xd(%ebp)
 860dd21:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 860dd28:	eb 25                	jmp    860dd4f <_ZN21CCirculationStatistic26InsertCirculationStatisticEv+0x83>
 860dd2a:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860dd2d:	8b 5d f4             	mov    -0xc(%ebp),%ebx
 860dd30:	8b 4d e8             	mov    -0x18(%ebp),%ecx
 860dd33:	89 d0                	mov    %edx,%eax
 860dd35:	01 c0                	add    %eax,%eax
 860dd37:	01 d0                	add    %edx,%eax
 860dd39:	c1 e0 04             	shl    $0x4,%eax
 860dd3c:	01 d8                	add    %ebx,%eax
 860dd3e:	8b 04 81             	mov    (%ecx,%eax,4),%eax
 860dd41:	85 c0                	test   %eax,%eax
 860dd43:	74 06                	je     860dd4b <_ZN21CCirculationStatistic26InsertCirculationStatisticEv+0x7f>
 860dd45:	c6 45 f3 01          	movb   $0x1,-0xd(%ebp)
 860dd49:	eb 0f                	jmp    860dd5a <_ZN21CCirculationStatistic26InsertCirculationStatisticEv+0x8e>
 860dd4b:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 860dd4f:	83 7d f4 2f          	cmpl   $0x2f,-0xc(%ebp)
 860dd53:	0f 9e c0             	setle  %al
 860dd56:	84 c0                	test   %al,%al
 860dd58:	75 d0                	jne    860dd2a <_ZN21CCirculationStatistic26InsertCirculationStatisticEv+0x5e>
 860dd5a:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 860dd5e:	83 f0 01             	xor    $0x1,%eax
 860dd61:	84 c0                	test   %al,%al
 860dd63:	0f 85 84 00 00 00    	jne    860dded <_ZN21CCirculationStatistic26InsertCirculationStatisticEv+0x121>
 860dd69:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 860dd6f:	89 04 24             	mov    %eax,(%esp)
 860dd72:	e8 81 23 00 00       	call   86100f8 <_ZN28Packet_Circulation_StatisticC1Ev>
 860dd77:	e8 05 e4 ab ff       	call   80cc181 <_Z14G_CEnvironmentv>
 860dd7c:	89 04 24             	mov    %eax,(%esp)
 860dd7f:	e8 46 cd b3 ff       	call   814aaca <_ZN12CEnvironment14get_channel_noEv>
 860dd84:	66 89 45 da          	mov    %ax,-0x26(%ebp)
 860dd88:	8b 45 ec             	mov    -0x14(%ebp),%eax
 860dd8b:	89 85 16 ff ff ff    	mov    %eax,-0xea(%ebp)
 860dd91:	8b 55 ec             	mov    -0x14(%ebp),%edx
 860dd94:	89 d0                	mov    %edx,%eax
 860dd96:	01 c0                	add    %eax,%eax
 860dd98:	01 d0                	add    %edx,%eax
 860dd9a:	c1 e0 06             	shl    $0x6,%eax
 860dd9d:	03 45 e8             	add    -0x18(%ebp),%eax
 860dda0:	c7 44 24 08 c0 00 00 	movl   $0xc0,0x8(%esp)
 860dda7:	00 
 860dda8:	89 44 24 04          	mov    %eax,0x4(%esp)
 860ddac:	8d 85 0c ff ff ff    	lea    -0xf4(%ebp),%eax
 860ddb2:	83 c0 0e             	add    $0xe,%eax
 860ddb5:	89 04 24             	mov    %eax,(%esp)
 860ddb8:	e8 e3 fa a6 ff       	call   807d8a0 <memcpy@plt>
 860ddbd:	8d 9d 0c ff ff ff    	lea    -0xf4(%ebp),%ebx
 860ddc3:	a1 30 be 40 09       	mov    0x940be30,%eax
 860ddc8:	8b 55 e4             	mov    -0x1c(%ebp),%edx
 860ddcb:	89 54 24 04          	mov    %edx,0x4(%esp)
 860ddcf:	89 04 24             	mov    %eax,(%esp)
 860ddd2:	e8 21 3f b0 ff       	call   8111cf8 <_ZN15CServerProxyMgrI21CStatisticServerProxyE14GetServerProxyE17ENUM_SERVER_GROUP>
 860ddd7:	c7 44 24 08 d0 00 00 	movl   $0xd0,0x8(%esp)
 860ddde:	00 
 860dddf:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 860dde3:	89 04 24             	mov    %eax,(%esp)
 860dde6:	e8 59 42 e6 ff       	call   8472044 <_ZN21CStatisticServerProxy10SendPacketEPci>
 860ddeb:	eb 01                	jmp    860ddee <_ZN21CCirculationStatistic26InsertCirculationStatisticEv+0x122>
 860dded:	90                   	nop
 860ddee:	83 45 ec 01          	addl   $0x1,-0x14(%ebp)
 860ddf2:	83 7d ec 46          	cmpl   $0x46,-0x14(%ebp)
 860ddf6:	0f 9e c0             	setle  %al
 860ddf9:	84 c0                	test   %al,%al
 860ddfb:	0f 85 1c ff ff ff    	jne    860dd1d <_ZN21CCirculationStatistic26InsertCirculationStatisticEv+0x51>
 860de01:	8b 45 e8             	mov    -0x18(%ebp),%eax
 860de04:	89 04 24             	mov    %eax,(%esp)
 860de07:	e8 60 25 00 00       	call   861036c <_ZN21CCirculationStatistic22stCirculationStatistic5resetEv>
 860de0c:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860de0f:	89 04 24             	mov    %eax,(%esp)
 860de12:	e8 4d 37 00 00       	call   8611564 <_ZNSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPN21CCirculationStatistic22stCirculationStatisticEEEppEv>
 860de17:	8b 55 08             	mov    0x8(%ebp),%edx
 860de1a:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860de1d:	89 54 24 04          	mov    %edx,0x4(%esp)
 860de21:	89 04 24             	mov    %eax,(%esp)
 860de24:	e8 17 36 00 00       	call   8611440 <_ZNSt3mapI17ENUM_SERVER_GROUPN21CCirculationStatistic22stCirculationStatisticESt4lessIS0_ESaISt4pairIKS0_S2_EEE3endEv>
 860de29:	83 ec 04             	sub    $0x4,%esp
 860de2c:	8d 45 e0             	lea    -0x20(%ebp),%eax
 860de2f:	89 44 24 04          	mov    %eax,0x4(%esp)
 860de33:	8d 45 dc             	lea    -0x24(%ebp),%eax
 860de36:	89 04 24             	mov    %eax,(%esp)
 860de39:	e8 28 36 00 00       	call   8611466 <_ZNKSt17_Rb_tree_iteratorISt4pairIK17ENUM_SERVER_GROUPN21CCirculationStatistic22stCirculationStatisticEEEneERKS6_>
 860de3e:	84 c0                	test   %al,%al
 860de40:	0f 85 aa fe ff ff    	jne    860dcf0 <_ZN21CCirculationStatistic26InsertCirculationStatisticEv+0x24>
 860de46:	b8 01 00 00 00       	mov    $0x1,%eax
 860de4b:	8b 5d fc             	mov    -0x4(%ebp),%ebx
 860de4e:	c9                   	leave
 860de4f:	c3                   	ret

```

```c
// CCirculationStatistic::InsertCirculationStatistic @ 0x860dccc

/* CCirculationStatistic::InsertCirculationStatistic() */

undefined4 CCirculationStatistic::InsertCirculationStatistic(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  CEnvironment *this;
  CStatisticServerProxy *this_00;
  Packet_Circulation_Statistic local_f8 [10];
  int local_ee;
  undefined1 auStack_ea [192];
  undefined2 local_2a;
  map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
  local_28 [4];
  map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
  local_24 [4];
  undefined4 local_20;
  stCirculationStatistic *local_1c;
  int local_18;
  char local_11;
  int local_10;
  
  std::
  map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
  ::begin(local_28);
  do {
    std::
    map<ENUM_SERVER_GROUP,CCirculationStatistic::stCirculationStatistic,std::less<ENUM_SERVER_GROUP>,std::allocator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>>
    ::end(local_24);
    cVar1 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
            ::operator!=((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
                          *)local_28,(_Rb_tree_iterator *)local_24);
    if (cVar1 == '\0') {
      return 1;
    }
    puVar2 = (undefined4 *)
             std::
             _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
             ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
                           *)local_28);
    local_20 = *puVar2;
    iVar3 = std::
            _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
            ::operator->((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
                          *)local_28);
    local_1c = (stCirculationStatistic *)(iVar3 + 4);
    for (local_18 = 1; local_18 < 0x47; local_18 = local_18 + 1) {
      local_11 = '\0';
      for (local_10 = 0; local_10 < 0x30; local_10 = local_10 + 1) {
        if (*(int *)(local_1c + (local_18 * 0x30 + local_10) * 4) != 0) {
          local_11 = '\x01';
          break;
        }
      }
      if (local_11 == '\x01') {
        Packet_Circulation_Statistic::Packet_Circulation_Statistic(local_f8);
        this = (CEnvironment *)G_CEnvironment();
        local_2a = CEnvironment::get_channel_no(this);
        local_ee = local_18;
        memcpy(auStack_ea,local_1c + local_18 * 0xc0,0xc0);
        this_00 = (CStatisticServerProxy *)
                  CServerProxyMgr<CStatisticServerProxy>::GetServerProxy
                            (GlobalData::s_statistic_proxy_mgr,local_20);
        CStatisticServerProxy::SendPacket(this_00,(char *)local_f8,0xd0);
      }
    }
    stCirculationStatistic::reset(local_1c);
    std::
    _Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
    ::operator++((_Rb_tree_iterator<std::pair<ENUM_SERVER_GROUP_const,CCirculationStatistic::stCirculationStatistic>>
                  *)local_28);
  } while( true );
}

```

