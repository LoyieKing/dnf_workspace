# DB_UpdateComboSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## dispatch

```asm
// === 0844a8ea DB_UpdateComboSkill::dispatch  [0x0844a8ea-0x844aa4b] ===
 844a8ea:	55                   	push   %ebp
 844a8eb:	89 e5                	mov    %esp,%ebp
 844a8ed:	53                   	push   %ebx
 844a8ee:	83 ec 54             	sub    $0x54,%esp
 844a8f1:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 844a8f6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 844a8fd:	00 
 844a8fe:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 844a905:	00 
 844a906:	89 04 24             	mov    %eax,(%esp)
 844a909:	e8 30 a9 fa ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 844a90e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 844a911:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 844a915:	75 0a                	jne    844a921 <_ZN19DB_UpdateComboSkill8dispatchEiiP6Stream+0x37>
 844a917:	b8 00 00 00 00       	mov    $0x0,%eax
 844a91c:	e9 25 01 00 00       	jmp    844aa46 <_ZN19DB_UpdateComboSkill8dispatchEiiP6Stream+0x15c>
 844a921:	8b 45 14             	mov    0x14(%ebp),%eax
 844a924:	89 04 24             	mov    %eax,(%esp)
 844a927:	e8 22 9e 00 00       	call   845474e <_ZN6Stream12GetOutBufferI15SIG_COMBO_SKILLEEPT_v>
 844a92c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 844a92f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 844a933:	75 0a                	jne    844a93f <_ZN19DB_UpdateComboSkill8dispatchEiiP6Stream+0x55>
 844a935:	b8 00 00 00 00       	mov    $0x0,%eax
 844a93a:	e9 07 01 00 00       	jmp    844aa46 <_ZN19DB_UpdateComboSkill8dispatchEiiP6Stream+0x15c>
 844a93f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a942:	8d 48 0a             	lea    0xa(%eax),%ecx
 844a945:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a948:	0f b6 40 04          	movzbl 0x4(%eax),%eax
 844a94c:	0f b6 d0             	movzbl %al,%edx
 844a94f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a952:	8b 00                	mov    (%eax),%eax
 844a954:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 844a95b:	00 
 844a95c:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 844a960:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844a964:	89 44 24 08          	mov    %eax,0x8(%esp)
 844a968:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844a96b:	89 44 24 04          	mov    %eax,0x4(%esp)
 844a96f:	8b 45 08             	mov    0x8(%ebp),%eax
 844a972:	89 04 24             	mov    %eax,(%esp)
 844a975:	e8 d2 00 00 00       	call   844aa4c <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND>
 844a97a:	83 f0 01             	xor    $0x1,%eax
 844a97d:	84 c0                	test   %al,%al
 844a97f:	74 3f                	je     844a9c0 <_ZN19DB_UpdateComboSkill8dispatchEiiP6Stream+0xd6>
 844a981:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a984:	8b 18                	mov    (%eax),%ebx
 844a986:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844a98d:	00 
 844a98e:	c7 44 24 08 2c bb 00 	movl   $0xbb2c,0x8(%esp)
 844a995:	00 
 844a996:	c7 44 24 04 80 ad c5 	movl   $0x8c5ad80,0x4(%esp)
 844a99d:	08 
 844a99e:	8d 45 d0             	lea    -0x30(%ebp),%eax
 844a9a1:	89 04 24             	mov    %eax,(%esp)
 844a9a4:	e8 6f 4d 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844a9a9:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 844a9ad:	c7 44 24 04 d4 91 c5 	movl   $0x8c591d4,0x4(%esp)
 844a9b4:	08 
 844a9b5:	8d 45 d0             	lea    -0x30(%ebp),%eax
 844a9b8:	89 04 24             	mov    %eax,(%esp)
 844a9bb:	e8 c8 4d 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844a9c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a9c3:	8d 48 5e             	lea    0x5e(%eax),%ecx
 844a9c6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a9c9:	0f b6 40 05          	movzbl 0x5(%eax),%eax
 844a9cd:	0f b6 d0             	movzbl %al,%edx
 844a9d0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844a9d3:	8b 00                	mov    (%eax),%eax
 844a9d5:	c7 44 24 14 01 00 00 	movl   $0x1,0x14(%esp)
 844a9dc:	00 
 844a9dd:	89 4c 24 10          	mov    %ecx,0x10(%esp)
 844a9e1:	89 54 24 0c          	mov    %edx,0xc(%esp)
 844a9e5:	89 44 24 08          	mov    %eax,0x8(%esp)
 844a9e9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 844a9ec:	89 44 24 04          	mov    %eax,0x4(%esp)
 844a9f0:	8b 45 08             	mov    0x8(%ebp),%eax
 844a9f3:	89 04 24             	mov    %eax,(%esp)
 844a9f6:	e8 51 00 00 00       	call   844aa4c <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND>
 844a9fb:	83 f0 01             	xor    $0x1,%eax
 844a9fe:	84 c0                	test   %al,%al
 844aa00:	74 3f                	je     844aa41 <_ZN19DB_UpdateComboSkill8dispatchEiiP6Stream+0x157>
 844aa02:	8b 45 f4             	mov    -0xc(%ebp),%eax
 844aa05:	8b 18                	mov    (%eax),%ebx
 844aa07:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844aa0e:	00 
 844aa0f:	c7 44 24 08 33 bb 00 	movl   $0xbb33,0x8(%esp)
 844aa16:	00 
 844aa17:	c7 44 24 04 80 ad c5 	movl   $0x8c5ad80,0x4(%esp)
 844aa1e:	08 
 844aa1f:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844aa22:	89 04 24             	mov    %eax,(%esp)
 844aa25:	e8 ee 4c 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844aa2a:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 844aa2e:	c7 44 24 04 d4 91 c5 	movl   $0x8c591d4,0x4(%esp)
 844aa35:	08 
 844aa36:	8d 45 e0             	lea    -0x20(%ebp),%eax
 844aa39:	89 04 24             	mov    %eax,(%esp)
 844aa3c:	e8 47 4d 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844aa41:	b8 01 00 00 00       	mov    $0x1,%eax
 844aa46:	83 c4 54             	add    $0x54,%esp
 844aa49:	5b                   	pop    %ebx
 844aa4a:	5d                   	pop    %ebp
 844aa4b:	c3                   	ret

```

```c
// DB_UpdateComboSkill::dispatch @ 0x844a8ea

/* DB_UpdateComboSkill::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_UpdateComboSkill::dispatch(DB_UpdateComboSkill *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  undefined4 uVar2;
  cMyTrace local_34 [16];
  cMyTrace local_24 [16];
  int local_14;
  SIG_COMBO_SKILL *local_10;
  
  local_14 = DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  if (local_14 == 0) {
    uVar2 = 0;
  }
  else {
    local_10 = Stream::GetOutBuffer<SIG_COMBO_SKILL>(param_3);
    if (local_10 == (SIG_COMBO_SKILL *)0x0) {
      uVar2 = 0;
    }
    else {
      cVar1 = setComboSkill(this,local_14,*(undefined4 *)local_10,local_10[4],local_10 + 10,0);
      if (cVar1 != '\x01') {
        uVar2 = *(undefined4 *)local_10;
        cMyTrace::cMyTrace(local_34,"virtual bool DB_UpdateComboSkill::dispatch(int, int, Stream*)",
                           0xbb2c,5);
        cMyTrace::operator()
                  (local_34,"DB_UpdateComboSkill::dispatch, setComboSkill ERROR charac_no=%u",uVar2)
        ;
      }
      cVar1 = setComboSkill(this,local_14,*(undefined4 *)local_10,local_10[5],local_10 + 0x5e,1);
      if (cVar1 != '\x01') {
        uVar2 = *(undefined4 *)local_10;
        cMyTrace::cMyTrace(local_24,"virtual bool DB_UpdateComboSkill::dispatch(int, int, Stream*)",
                           0xbb33,5);
        cMyTrace::operator()
                  (local_24,"DB_UpdateComboSkill::dispatch, setComboSkill ERROR charac_no=%u",uVar2)
        ;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

```

---

## setComboSkill

```asm
// === 0844aa4c DB_UpdateComboSkill::setComboSkill  [0x0844aa4c-0x844adbf] ===
 844aa4c:	55                   	push   %ebp
 844aa4d:	89 e5                	mov    %esp,%ebp
 844aa4f:	57                   	push   %edi
 844aa50:	56                   	push   %esi
 844aa51:	53                   	push   %ebx
 844aa52:	81 ec 8c 00 00 00    	sub    $0x8c,%esp
 844aa58:	8b 45 14             	mov    0x14(%ebp),%eax
 844aa5b:	88 45 c4             	mov    %al,-0x3c(%ebp)
 844aa5e:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 844aa62:	74 06                	je     844aa6a <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x1e>
 844aa64:	83 7d 18 00          	cmpl   $0x0,0x18(%ebp)
 844aa68:	75 0a                	jne    844aa74 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x28>
 844aa6a:	b8 00 00 00 00       	mov    $0x0,%eax
 844aa6f:	e9 40 03 00 00       	jmp    844adb4 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x368>
 844aa74:	8b 45 1c             	mov    0x1c(%ebp),%eax
 844aa77:	85 c0                	test   %eax,%eax
 844aa79:	74 56                	je     844aad1 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x85>
 844aa7b:	8b 45 1c             	mov    0x1c(%ebp),%eax
 844aa7e:	83 f8 01             	cmp    $0x1,%eax
 844aa81:	74 4e                	je     844aad1 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x85>
 844aa83:	8b 5d 1c             	mov    0x1c(%ebp),%ebx
 844aa86:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 844aa8d:	00 
 844aa8e:	c7 44 24 08 42 bb 00 	movl   $0xbb42,0x8(%esp)
 844aa95:	00 
 844aa96:	c7 44 24 04 00 ad c5 	movl   $0x8c5ad00,0x4(%esp)
 844aa9d:	08 
 844aa9e:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844aaa1:	89 04 24             	mov    %eax,(%esp)
 844aaa4:	e8 6f 4c 10 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 844aaa9:	8b 45 10             	mov    0x10(%ebp),%eax
 844aaac:	89 44 24 0c          	mov    %eax,0xc(%esp)
 844aab0:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 844aab4:	c7 44 24 04 14 92 c5 	movl   $0x8c59214,0x4(%esp)
 844aabb:	08 
 844aabc:	8d 45 d4             	lea    -0x2c(%ebp),%eax
 844aabf:	89 04 24             	mov    %eax,(%esp)
 844aac2:	e8 c1 4c 10 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 844aac7:	b8 00 00 00 00       	mov    $0x0,%eax
 844aacc:	e9 e3 02 00 00       	jmp    844adb4 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x368>
 844aad1:	c7 45 e4 00 00 00 00 	movl   $0x0,-0x1c(%ebp)
 844aad8:	e9 af 02 00 00       	jmp    844ad8c <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x340>
 844aadd:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844aae0:	01 c0                	add    %eax,%eax
 844aae2:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844aae9:	89 d1                	mov    %edx,%ecx
 844aaeb:	29 c1                	sub    %eax,%ecx
 844aaed:	89 c8                	mov    %ecx,%eax
 844aaef:	03 45 18             	add    0x18(%ebp),%eax
 844aaf2:	0f b7 00             	movzwl (%eax),%eax
 844aaf5:	0f bf f0             	movswl %ax,%esi
 844aaf8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844aafb:	01 c0                	add    %eax,%eax
 844aafd:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844ab04:	89 d1                	mov    %edx,%ecx
 844ab06:	29 c1                	sub    %eax,%ecx
 844ab08:	89 c8                	mov    %ecx,%eax
 844ab0a:	03 45 18             	add    0x18(%ebp),%eax
 844ab0d:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 844ab11:	98                   	cwtl
 844ab12:	89 45 a4             	mov    %eax,-0x5c(%ebp)
 844ab15:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844ab18:	01 c0                	add    %eax,%eax
 844ab1a:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844ab21:	89 d1                	mov    %edx,%ecx
 844ab23:	29 c1                	sub    %eax,%ecx
 844ab25:	89 c8                	mov    %ecx,%eax
 844ab27:	03 45 18             	add    0x18(%ebp),%eax
 844ab2a:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 844ab2e:	98                   	cwtl
 844ab2f:	89 45 a8             	mov    %eax,-0x58(%ebp)
 844ab32:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844ab35:	01 c0                	add    %eax,%eax
 844ab37:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844ab3e:	89 d1                	mov    %edx,%ecx
 844ab40:	29 c1                	sub    %eax,%ecx
 844ab42:	89 c8                	mov    %ecx,%eax
 844ab44:	03 45 18             	add    0x18(%ebp),%eax
 844ab47:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 844ab4b:	98                   	cwtl
 844ab4c:	89 45 ac             	mov    %eax,-0x54(%ebp)
 844ab4f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844ab52:	01 c0                	add    %eax,%eax
 844ab54:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844ab5b:	89 d1                	mov    %edx,%ecx
 844ab5d:	29 c1                	sub    %eax,%ecx
 844ab5f:	89 c8                	mov    %ecx,%eax
 844ab61:	03 45 18             	add    0x18(%ebp),%eax
 844ab64:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 844ab68:	98                   	cwtl
 844ab69:	89 45 b0             	mov    %eax,-0x50(%ebp)
 844ab6c:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844ab6f:	01 c0                	add    %eax,%eax
 844ab71:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844ab78:	89 d1                	mov    %edx,%ecx
 844ab7a:	29 c1                	sub    %eax,%ecx
 844ab7c:	89 c8                	mov    %ecx,%eax
 844ab7e:	03 45 18             	add    0x18(%ebp),%eax
 844ab81:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 844ab85:	0f bf f8             	movswl %ax,%edi
 844ab88:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844ab8b:	01 c0                	add    %eax,%eax
 844ab8d:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844ab94:	89 d1                	mov    %edx,%ecx
 844ab96:	29 c1                	sub    %eax,%ecx
 844ab98:	89 c8                	mov    %ecx,%eax
 844ab9a:	03 45 18             	add    0x18(%ebp),%eax
 844ab9d:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 844aba1:	0f bf d8             	movswl %ax,%ebx
 844aba4:	8b 45 1c             	mov    0x1c(%ebp),%eax
 844aba7:	89 04 24             	mov    %eax,(%esp)
 844abaa:	e8 dc f7 ff ff       	call   844a38b <_Z22getComboSkillTableName20ENUM_SKILL_TREE_KIND>
 844abaf:	89 c2                	mov    %eax,%edx
 844abb1:	89 74 24 28          	mov    %esi,0x28(%esp)
 844abb5:	8b 45 10             	mov    0x10(%ebp),%eax
 844abb8:	89 44 24 24          	mov    %eax,0x24(%esp)
 844abbc:	8b 45 a4             	mov    -0x5c(%ebp),%eax
 844abbf:	89 44 24 20          	mov    %eax,0x20(%esp)
 844abc3:	8b 4d a8             	mov    -0x58(%ebp),%ecx
 844abc6:	89 4c 24 1c          	mov    %ecx,0x1c(%esp)
 844abca:	8b 45 ac             	mov    -0x54(%ebp),%eax
 844abcd:	89 44 24 18          	mov    %eax,0x18(%esp)
 844abd1:	8b 4d b0             	mov    -0x50(%ebp),%ecx
 844abd4:	89 4c 24 14          	mov    %ecx,0x14(%esp)
 844abd8:	89 7c 24 10          	mov    %edi,0x10(%esp)
 844abdc:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 844abe0:	89 54 24 08          	mov    %edx,0x8(%esp)
 844abe4:	c7 44 24 04 54 92 c5 	movl   $0x8c59254,0x4(%esp)
 844abeb:	08 
 844abec:	8b 45 0c             	mov    0xc(%ebp),%eax
 844abef:	89 04 24             	mov    %eax,(%esp)
 844abf2:	e8 c9 95 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844abf7:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844abfe:	00 
 844abff:	8b 45 0c             	mov    0xc(%ebp),%eax
 844ac02:	89 04 24             	mov    %eax,(%esp)
 844ac05:	e8 1c 97 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844ac0a:	83 f0 01             	xor    $0x1,%eax
 844ac0d:	84 c0                	test   %al,%al
 844ac0f:	74 0a                	je     844ac1b <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x1cf>
 844ac11:	b8 00 00 00 00       	mov    $0x0,%eax
 844ac16:	e9 99 01 00 00       	jmp    844adb4 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x368>
 844ac1b:	8b 45 0c             	mov    0xc(%ebp),%eax
 844ac1e:	89 04 24             	mov    %eax,(%esp)
 844ac21:	e8 ea 96 fa ff       	call   83f4310 <_ZN5MySQL19getAffectedRowCountEv>
 844ac26:	09 d0                	or     %edx,%eax
 844ac28:	85 c0                	test   %eax,%eax
 844ac2a:	0f 94 c0             	sete   %al
 844ac2d:	84 c0                	test   %al,%al
 844ac2f:	0f 84 53 01 00 00    	je     844ad88 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x33c>
 844ac35:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844ac38:	01 c0                	add    %eax,%eax
 844ac3a:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844ac41:	89 d1                	mov    %edx,%ecx
 844ac43:	29 c1                	sub    %eax,%ecx
 844ac45:	89 c8                	mov    %ecx,%eax
 844ac47:	03 45 18             	add    0x18(%ebp),%eax
 844ac4a:	0f b7 40 0c          	movzwl 0xc(%eax),%eax
 844ac4e:	0f bf f8             	movswl %ax,%edi
 844ac51:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844ac54:	01 c0                	add    %eax,%eax
 844ac56:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844ac5d:	89 d1                	mov    %edx,%ecx
 844ac5f:	29 c1                	sub    %eax,%ecx
 844ac61:	89 c8                	mov    %ecx,%eax
 844ac63:	03 45 18             	add    0x18(%ebp),%eax
 844ac66:	0f b7 40 0a          	movzwl 0xa(%eax),%eax
 844ac6a:	98                   	cwtl
 844ac6b:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 844ac6e:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844ac71:	01 c0                	add    %eax,%eax
 844ac73:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844ac7a:	89 d1                	mov    %edx,%ecx
 844ac7c:	29 c1                	sub    %eax,%ecx
 844ac7e:	89 c8                	mov    %ecx,%eax
 844ac80:	03 45 18             	add    0x18(%ebp),%eax
 844ac83:	0f b7 40 08          	movzwl 0x8(%eax),%eax
 844ac87:	98                   	cwtl
 844ac88:	89 45 b8             	mov    %eax,-0x48(%ebp)
 844ac8b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844ac8e:	01 c0                	add    %eax,%eax
 844ac90:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844ac97:	89 d1                	mov    %edx,%ecx
 844ac99:	29 c1                	sub    %eax,%ecx
 844ac9b:	89 c8                	mov    %ecx,%eax
 844ac9d:	03 45 18             	add    0x18(%ebp),%eax
 844aca0:	0f b7 40 06          	movzwl 0x6(%eax),%eax
 844aca4:	98                   	cwtl
 844aca5:	89 45 bc             	mov    %eax,-0x44(%ebp)
 844aca8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844acab:	01 c0                	add    %eax,%eax
 844acad:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844acb4:	89 d1                	mov    %edx,%ecx
 844acb6:	29 c1                	sub    %eax,%ecx
 844acb8:	89 c8                	mov    %ecx,%eax
 844acba:	03 45 18             	add    0x18(%ebp),%eax
 844acbd:	0f b7 40 04          	movzwl 0x4(%eax),%eax
 844acc1:	98                   	cwtl
 844acc2:	89 45 c0             	mov    %eax,-0x40(%ebp)
 844acc5:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844acc8:	01 c0                	add    %eax,%eax
 844acca:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844acd1:	89 d1                	mov    %edx,%ecx
 844acd3:	29 c1                	sub    %eax,%ecx
 844acd5:	89 c8                	mov    %ecx,%eax
 844acd7:	03 45 18             	add    0x18(%ebp),%eax
 844acda:	0f b7 40 02          	movzwl 0x2(%eax),%eax
 844acde:	0f bf f0             	movswl %ax,%esi
 844ace1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 844ace4:	01 c0                	add    %eax,%eax
 844ace6:	8d 14 c5 00 00 00 00 	lea    0x0(,%eax,8),%edx
 844aced:	89 d1                	mov    %edx,%ecx
 844acef:	29 c1                	sub    %eax,%ecx
 844acf1:	89 c8                	mov    %ecx,%eax
 844acf3:	03 45 18             	add    0x18(%ebp),%eax
 844acf6:	0f b7 00             	movzwl (%eax),%eax
 844acf9:	0f bf d8             	movswl %ax,%ebx
 844acfc:	8b 45 1c             	mov    0x1c(%ebp),%eax
 844acff:	89 04 24             	mov    %eax,(%esp)
 844ad02:	e8 84 f6 ff ff       	call   844a38b <_Z22getComboSkillTableName20ENUM_SKILL_TREE_KIND>
 844ad07:	89 c2                	mov    %eax,%edx
 844ad09:	89 7c 24 28          	mov    %edi,0x28(%esp)
 844ad0d:	8b 45 b4             	mov    -0x4c(%ebp),%eax
 844ad10:	89 44 24 24          	mov    %eax,0x24(%esp)
 844ad14:	8b 4d b8             	mov    -0x48(%ebp),%ecx
 844ad17:	89 4c 24 20          	mov    %ecx,0x20(%esp)
 844ad1b:	8b 45 bc             	mov    -0x44(%ebp),%eax
 844ad1e:	89 44 24 1c          	mov    %eax,0x1c(%esp)
 844ad22:	8b 4d c0             	mov    -0x40(%ebp),%ecx
 844ad25:	89 4c 24 18          	mov    %ecx,0x18(%esp)
 844ad29:	89 74 24 14          	mov    %esi,0x14(%esp)
 844ad2d:	89 5c 24 10          	mov    %ebx,0x10(%esp)
 844ad31:	8b 45 10             	mov    0x10(%ebp),%eax
 844ad34:	89 44 24 0c          	mov    %eax,0xc(%esp)
 844ad38:	89 54 24 08          	mov    %edx,0x8(%esp)
 844ad3c:	c7 44 24 04 d8 92 c5 	movl   $0x8c592d8,0x4(%esp)
 844ad43:	08 
 844ad44:	8b 45 0c             	mov    0xc(%ebp),%eax
 844ad47:	89 04 24             	mov    %eax,(%esp)
 844ad4a:	e8 71 94 fa ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 844ad4f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 844ad56:	00 
 844ad57:	8b 45 0c             	mov    0xc(%ebp),%eax
 844ad5a:	89 04 24             	mov    %eax,(%esp)
 844ad5d:	e8 c4 95 fa ff       	call   83f4326 <_ZN5MySQL4execEb>
 844ad62:	83 f0 01             	xor    $0x1,%eax
 844ad65:	84 c0                	test   %al,%al
 844ad67:	74 1f                	je     844ad88 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x33c>
 844ad69:	8b 45 0c             	mov    0xc(%ebp),%eax
 844ad6c:	89 04 24             	mov    %eax,(%esp)
 844ad6f:	e8 06 0c cd ff       	call   811b97a <_ZN5MySQL10getDBErrorEv>
 844ad74:	3d 26 04 00 00       	cmp    $0x426,%eax
 844ad79:	0f 94 c0             	sete   %al
 844ad7c:	84 c0                	test   %al,%al
 844ad7e:	75 07                	jne    844ad87 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x33b>
 844ad80:	b8 00 00 00 00       	mov    $0x0,%eax
 844ad85:	eb 2d                	jmp    844adb4 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x368>
 844ad87:	90                   	nop
 844ad88:	83 45 e4 01          	addl   $0x1,-0x1c(%ebp)
 844ad8c:	0f b6 45 c4          	movzbl -0x3c(%ebp),%eax
 844ad90:	3b 45 e4             	cmp    -0x1c(%ebp),%eax
 844ad93:	7e 0d                	jle    844ada2 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x356>
 844ad95:	83 7d e4 05          	cmpl   $0x5,-0x1c(%ebp)
 844ad99:	7f 07                	jg     844ada2 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x356>
 844ad9b:	b8 01 00 00 00       	mov    $0x1,%eax
 844ada0:	eb 05                	jmp    844ada7 <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x35b>
 844ada2:	b8 00 00 00 00       	mov    $0x0,%eax
 844ada7:	84 c0                	test   %al,%al
 844ada9:	0f 85 2e fd ff ff    	jne    844aadd <_ZN19DB_UpdateComboSkill13setComboSkillEP5MySQLjhP15comoboSkillData20ENUM_SKILL_TREE_KIND+0x91>
 844adaf:	b8 01 00 00 00       	mov    $0x1,%eax
 844adb4:	81 c4 8c 00 00 00    	add    $0x8c,%esp
 844adba:	5b                   	pop    %ebx
 844adbb:	5e                   	pop    %esi
 844adbc:	5f                   	pop    %edi
 844adbd:	5d                   	pop    %ebp
 844adbe:	c3                   	ret
 844adbf:	90                   	nop

```

```c
// DB_UpdateComboSkill::setComboSkill @ 0x844aa4c

/* DB_UpdateComboSkill::setComboSkill(MySQL*, unsigned int, unsigned char, comoboSkillData*,
   ENUM_SKILL_TREE_KIND) */

undefined4 __thiscall
DB_UpdateComboSkill::setComboSkill
          (undefined4 this,MySQL *param_1,undefined4 param_2,uint param_3,int param_4,int param_6)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  bool bVar8;
  char cVar9;
  undefined4 uVar10;
  int iVar11;
  longlong lVar12;
  cMyTrace local_30 [16];
  int local_20;
  
  if ((param_1 != (MySQL *)0x0) && (param_4 != 0)) {
    if ((param_6 == 0) || (param_6 == 1)) {
      local_20 = 0;
      while( true ) {
        if ((local_20 < (int)(param_3 & 0xff)) && (local_20 < 6)) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if (!bVar8) break;
        sVar1 = *(short *)(local_20 * 0xe + param_4);
        sVar2 = *(short *)(local_20 * 0xe + param_4 + 0xc);
        sVar3 = *(short *)(local_20 * 0xe + param_4 + 10);
        sVar4 = *(short *)(local_20 * 0xe + param_4 + 8);
        sVar5 = *(short *)(local_20 * 0xe + param_4 + 6);
        sVar6 = *(short *)(local_20 * 0xe + param_4 + 4);
        sVar7 = *(short *)(local_20 * 0xe + param_4 + 2);
        uVar10 = getComboSkillTableName(param_6);
        MySQL::set_query(param_1,
                         "upDate %s set value1 = %d, value2 = %d, value3 = %d, value4 = %d, value5 = %d, value6 = %d where charac_no = %u and combo_idx = %d"
                         ,uVar10,(int)sVar7,(int)sVar6,(int)sVar5,(int)sVar4,(int)sVar3,(int)sVar2,
                         param_2,(int)sVar1);
        cVar9 = MySQL::exec(param_1,true);
        if (cVar9 != '\x01') {
          return 0;
        }
        lVar12 = MySQL::getAffectedRowCount(param_1);
        if (lVar12 == 0) {
          sVar1 = *(short *)(local_20 * 0xe + param_4 + 0xc);
          sVar2 = *(short *)(local_20 * 0xe + param_4 + 10);
          sVar3 = *(short *)(local_20 * 0xe + param_4 + 8);
          sVar4 = *(short *)(local_20 * 0xe + param_4 + 6);
          sVar5 = *(short *)(local_20 * 0xe + param_4 + 4);
          sVar6 = *(short *)(local_20 * 0xe + param_4 + 2);
          sVar7 = *(short *)(local_20 * 0xe + param_4);
          uVar10 = getComboSkillTableName(param_6);
          MySQL::set_query(param_1,
                           "inSert into %s(charac_no, combo_idx, value1, value2, value3, value4, value5, value6) values(%u, %d, %d, %d, %d, %d, %d, %d)"
                           ,uVar10,param_2,(int)sVar7,(int)sVar6,(int)sVar5,(int)sVar4,(int)sVar3,
                           (int)sVar2,(int)sVar1);
          cVar9 = MySQL::exec(param_1,true);
          if ((cVar9 != '\x01') && (iVar11 = MySQL::getDBError(param_1), iVar11 != 0x426)) {
            return 0;
          }
        }
        local_20 = local_20 + 1;
      }
      return 1;
    }
    cMyTrace::cMyTrace(local_30,
                       "bool DB_UpdateComboSkill::setComboSkill(MySQL*, unsigned int, unsigned char, comoboSkillData*, ENUM_SKILL_TREE_KIND)"
                       ,0xbb42,5);
    cMyTrace::operator()
              (local_30,"DB_UpdateComboSkill::setComboSkill kind(%d) error characNo(%u)",param_6,
               param_2);
  }
  return 0;
}

```

