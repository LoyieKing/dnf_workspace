# DB_SaveSkill

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 6

---

## DB_SaveSkill

```asm
// === 08417770 DB_SaveSkill::DB_SaveSkill  [0x08417770-0x841778b] ===
 8417770:	55                   	push   %ebp
 8417771:	89 e5                	mov    %esp,%ebp
 8417773:	83 ec 18             	sub    $0x18,%esp
 8417776:	8b 45 08             	mov    0x8(%ebp),%eax
 8417779:	89 04 24             	mov    %eax,(%esp)
 841777c:	e8 25 60 03 00       	call   844d7a6 <_ZN12DBDispatcherC1Ev>
 8417781:	8b 45 08             	mov    0x8(%ebp),%eax
 8417784:	c7 00 98 fa c5 08    	movl   $0x8c5fa98,(%eax)
 841778a:	c9                   	leave
 841778b:	c3                   	ret

```

```c
// DB_SaveSkill::DB_SaveSkill @ 0x8417770

/* DB_SaveSkill::DB_SaveSkill() */

void __thiscall DB_SaveSkill::DB_SaveSkill(DB_SaveSkill *this)

{
  DBDispatcher::DBDispatcher((DBDispatcher *)this);
  *(undefined ***)this = &PTR_dispatch_08c5fa98;
  return;
}

```

---

## SaveSkill

```asm
// === 0841782a DB_SaveSkill::SaveSkill  [0x0841782a-0x8417a07] ===
 841782a:	55                   	push   %ebp
 841782b:	89 e5                	mov    %esp,%ebp
 841782d:	57                   	push   %edi
 841782e:	56                   	push   %esi
 841782f:	53                   	push   %ebx
 8417830:	83 ec 7c             	sub    $0x7c,%esp
 8417833:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8417838:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 841783f:	00 
 8417840:	c7 44 24 04 03 00 00 	movl   $0x3,0x4(%esp)
 8417847:	00 
 8417848:	89 04 24             	mov    %eax,(%esp)
 841784b:	e8 ee d9 fd ff       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8417850:	89 45 e4             	mov    %eax,-0x1c(%ebp)
 8417853:	c7 45 dc 00 00 00 00 	movl   $0x0,-0x24(%ebp)
 841785a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841785d:	83 c0 0c             	add    $0xc,%eax
 8417860:	8d 55 dc             	lea    -0x24(%ebp),%edx
 8417863:	89 54 24 10          	mov    %edx,0x10(%esp)
 8417867:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 841786e:	00 
 841786f:	89 44 24 08          	mov    %eax,0x8(%esp)
 8417873:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 841787a:	00 
 841787b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841787e:	89 04 24             	mov    %eax,(%esp)
 8417881:	e8 80 44 fe ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 8417886:	83 f0 01             	xor    $0x1,%eax
 8417889:	84 c0                	test   %al,%al
 841788b:	74 0a                	je     8417897 <_ZN12DB_SaveSkill9SaveSkillEP14SIG_LOAD_SKILL+0x6d>
 841788d:	b8 00 00 00 00       	mov    $0x0,%eax
 8417892:	e9 69 01 00 00       	jmp    8417a00 <_ZN12DB_SaveSkill9SaveSkillEP14SIG_LOAD_SKILL+0x1d6>
 8417897:	c7 45 d8 00 00 00 00 	movl   $0x0,-0x28(%ebp)
 841789e:	8b 45 0c             	mov    0xc(%ebp),%eax
 84178a1:	05 a8 01 00 00       	add    $0x1a8,%eax
 84178a6:	8d 55 d8             	lea    -0x28(%ebp),%edx
 84178a9:	89 54 24 10          	mov    %edx,0x10(%esp)
 84178ad:	c7 44 24 0c 98 01 00 	movl   $0x198,0xc(%esp)
 84178b4:	00 
 84178b5:	89 44 24 08          	mov    %eax,0x8(%esp)
 84178b9:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84178c0:	00 
 84178c1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84178c4:	89 04 24             	mov    %eax,(%esp)
 84178c7:	e8 3a 44 fe ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 84178cc:	83 f0 01             	xor    $0x1,%eax
 84178cf:	84 c0                	test   %al,%al
 84178d1:	74 0a                	je     84178dd <_ZN12DB_SaveSkill9SaveSkillEP14SIG_LOAD_SKILL+0xb3>
 84178d3:	b8 00 00 00 00       	mov    $0x0,%eax
 84178d8:	e9 23 01 00 00       	jmp    8417a00 <_ZN12DB_SaveSkill9SaveSkillEP14SIG_LOAD_SKILL+0x1d6>
 84178dd:	c7 45 d4 00 00 00 00 	movl   $0x0,-0x2c(%ebp)
 84178e4:	8b 45 0c             	mov    0xc(%ebp),%eax
 84178e7:	05 48 03 00 00       	add    $0x348,%eax
 84178ec:	8d 55 d4             	lea    -0x2c(%ebp),%edx
 84178ef:	89 54 24 10          	mov    %edx,0x10(%esp)
 84178f3:	c7 44 24 0c c8 00 00 	movl   $0xc8,0xc(%esp)
 84178fa:	00 
 84178fb:	89 44 24 08          	mov    %eax,0x8(%esp)
 84178ff:	c7 44 24 04 04 00 00 	movl   $0x4,0x4(%esp)
 8417906:	00 
 8417907:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 841790a:	89 04 24             	mov    %eax,(%esp)
 841790d:	e8 f4 43 fe ff       	call   83fbd06 <_Z24put_compressed_blob_dataP5MySQLiPciPS1_>
 8417912:	83 f0 01             	xor    $0x1,%eax
 8417915:	84 c0                	test   %al,%al
 8417917:	74 0a                	je     8417923 <_ZN12DB_SaveSkill9SaveSkillEP14SIG_LOAD_SKILL+0xf9>
 8417919:	b8 00 00 00 00       	mov    $0x0,%eax
 841791e:	e9 dd 00 00 00       	jmp    8417a00 <_ZN12DB_SaveSkill9SaveSkillEP14SIG_LOAD_SKILL+0x1d6>
 8417923:	8b 45 0c             	mov    0xc(%ebp),%eax
 8417926:	8b 30                	mov    (%eax),%esi
 8417928:	8b 45 0c             	mov    0xc(%ebp),%eax
 841792b:	0f b6 80 11 04 00 00 	movzbl 0x411(%eax),%eax
 8417932:	0f b6 c0             	movzbl %al,%eax
 8417935:	89 45 b0             	mov    %eax,-0x50(%ebp)
 8417938:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 841793b:	89 45 b4             	mov    %eax,-0x4c(%ebp)
 841793e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8417941:	8b 80 44 03 00 00    	mov    0x344(%eax),%eax
 8417947:	89 45 b8             	mov    %eax,-0x48(%ebp)
 841794a:	8b 45 0c             	mov    0xc(%ebp),%eax
 841794d:	8b 80 40 03 00 00    	mov    0x340(%eax),%eax
 8417953:	89 45 bc             	mov    %eax,-0x44(%ebp)
 8417956:	8b 55 d8             	mov    -0x28(%ebp),%edx
 8417959:	89 55 c0             	mov    %edx,-0x40(%ebp)
 841795c:	8b 45 0c             	mov    0xc(%ebp),%eax
 841795f:	8b 80 a4 01 00 00    	mov    0x1a4(%eax),%eax
 8417965:	89 45 c4             	mov    %eax,-0x3c(%ebp)
 8417968:	8b 7d dc             	mov    -0x24(%ebp),%edi
 841796b:	8b 45 0c             	mov    0xc(%ebp),%eax
 841796e:	8b 58 08             	mov    0x8(%eax),%ebx
 8417971:	8b 45 0c             	mov    0xc(%ebp),%eax
 8417974:	0f b6 80 10 04 00 00 	movzbl 0x410(%eax),%eax
 841797b:	0f b6 c0             	movzbl %al,%eax
 841797e:	89 04 24             	mov    %eax,(%esp)
 8417981:	e8 40 44 fe ff       	call   83fbdc6 <_Z20get_skill_table_nameb>
 8417986:	89 74 24 2c          	mov    %esi,0x2c(%esp)
 841798a:	8b 55 b0             	mov    -0x50(%ebp),%edx
 841798d:	89 54 24 28          	mov    %edx,0x28(%esp)
 8417991:	8b 55 b4             	mov    -0x4c(%ebp),%edx
 8417994:	89 54 24 24          	mov    %edx,0x24(%esp)
 8417998:	8b 55 b8             	mov    -0x48(%ebp),%edx
 841799b:	89 54 24 20          	mov    %edx,0x20(%esp)
 841799f:	8b 55 bc             	mov    -0x44(%ebp),%edx
 84179a2:	89 54 24 1c          	mov    %edx,0x1c(%esp)
 84179a6:	8b 55 c0             	mov    -0x40(%ebp),%edx
 84179a9:	89 54 24 18          	mov    %edx,0x18(%esp)
 84179ad:	8b 55 c4             	mov    -0x3c(%ebp),%edx
 84179b0:	89 54 24 14          	mov    %edx,0x14(%esp)
 84179b4:	89 7c 24 10          	mov    %edi,0x10(%esp)
 84179b8:	89 5c 24 0c          	mov    %ebx,0xc(%esp)
 84179bc:	89 44 24 08          	mov    %eax,0x8(%esp)
 84179c0:	c7 44 24 04 7c 9a c4 	movl   $0x8c49a7c,0x4(%esp)
 84179c7:	08 
 84179c8:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84179cb:	89 04 24             	mov    %eax,(%esp)
 84179ce:	e8 ed c7 fd ff       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 84179d3:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 84179da:	00 
 84179db:	8b 45 e4             	mov    -0x1c(%ebp),%eax
 84179de:	89 04 24             	mov    %eax,(%esp)
 84179e1:	e8 40 c9 fd ff       	call   83f4326 <_ZN5MySQL4execEb>
 84179e6:	88 45 e3             	mov    %al,-0x1d(%ebp)
 84179e9:	0f b6 45 e3          	movzbl -0x1d(%ebp),%eax
 84179ed:	83 f0 01             	xor    $0x1,%eax
 84179f0:	84 c0                	test   %al,%al
 84179f2:	74 07                	je     84179fb <_ZN12DB_SaveSkill9SaveSkillEP14SIG_LOAD_SKILL+0x1d1>
 84179f4:	b8 00 00 00 00       	mov    $0x0,%eax
 84179f9:	eb 05                	jmp    8417a00 <_ZN12DB_SaveSkill9SaveSkillEP14SIG_LOAD_SKILL+0x1d6>
 84179fb:	b8 01 00 00 00       	mov    $0x1,%eax
 8417a00:	83 c4 7c             	add    $0x7c,%esp
 8417a03:	5b                   	pop    %ebx
 8417a04:	5e                   	pop    %esi
 8417a05:	5f                   	pop    %edi
 8417a06:	5d                   	pop    %ebp
 8417a07:	c3                   	ret

```

```c
// DB_SaveSkill::SaveSkill @ 0x841782a

/* DB_SaveSkill::SaveSkill(SIG_LOAD_SKILL*) */

undefined4 __thiscall DB_SaveSkill::SaveSkill(DB_SaveSkill *this,SIG_LOAD_SKILL *param_1)

{
  SIG_LOAD_SKILL SVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  char *local_30;
  char *local_2c;
  char *local_28 [2];
  MySQL *local_20;
  
  local_20 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,3,0);
  local_28[0] = (char *)0x0;
  cVar9 = put_compressed_blob_data(local_20,0,(char *)(param_1 + 0xc),0x198,local_28);
  if (cVar9 == '\x01') {
    local_2c = (char *)0x0;
    cVar9 = put_compressed_blob_data(local_20,1,(char *)(param_1 + 0x1a8),0x198,&local_2c);
    if (cVar9 == '\x01') {
      local_30 = (char *)0x0;
      cVar9 = put_compressed_blob_data(local_20,4,(char *)(param_1 + 0x348),200,&local_30);
      pcVar8 = local_28[0];
      pcVar7 = local_2c;
      pcVar6 = local_30;
      if (cVar9 == '\x01') {
        uVar10 = *(undefined4 *)param_1;
        SVar1 = param_1[0x411];
        uVar2 = *(undefined4 *)(param_1 + 0x344);
        uVar3 = *(undefined4 *)(param_1 + 0x340);
        uVar4 = *(undefined4 *)(param_1 + 0x1a4);
        uVar5 = *(undefined4 *)(param_1 + 8);
        uVar11 = get_skill_table_name((bool)param_1[0x410]);
        MySQL::set_query(local_20,
                         "upDate %s set remain_sp=%u,skill_slot=\'%s\',remain_sp_2nd=%u, skill_slot_2nd=\'%s\', remain_sfp_1st=%u, remain_sfp_2nd=%u, skill_command =\'%s\',script_version=%d where charac_no=%u"
                         ,uVar11,uVar5,pcVar8,uVar4,pcVar7,uVar3,uVar2,pcVar6,(uint)(byte)SVar1,
                         uVar10);
        cVar9 = MySQL::exec(local_20,true);
        if (cVar9 == '\x01') {
          uVar10 = 1;
        }
        else {
          uVar10 = 0;
        }
      }
      else {
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 0;
    }
  }
  else {
    uVar10 = 0;
  }
  return uVar10;
}

```

---

## SendResult

```asm
// === 08417a08 DB_SaveSkill::SendResult  [0x08417a08-0x8417a11] ===
 8417a08:	55                   	push   %ebp
 8417a09:	89 e5                	mov    %esp,%ebp
 8417a0b:	b8 01 00 00 00       	mov    $0x1,%eax
 8417a10:	5d                   	pop    %ebp
 8417a11:	c3                   	ret

```

```c
// DB_SaveSkill::SendResult @ 0x8417a08

/* DB_SaveSkill::SendResult(int, int, SIG_LOAD_SKILL*) */

undefined4 DB_SaveSkill::SendResult(int param_1,int param_2,SIG_LOAD_SKILL *param_3)

{
  return 1;
}

```

---

## dispatch

```asm
// === 084177da DB_SaveSkill::dispatch  [0x084177da-0x8417829] ===
 84177da:	55                   	push   %ebp
 84177db:	89 e5                	mov    %esp,%ebp
 84177dd:	83 ec 28             	sub    $0x28,%esp
 84177e0:	8b 45 14             	mov    0x14(%ebp),%eax
 84177e3:	89 04 24             	mov    %eax,(%esp)
 84177e6:	e8 99 93 03 00       	call   8450b84 <_ZN6Stream12GetOutBufferI14SIG_LOAD_SKILLEEPT_v>
 84177eb:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84177ee:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 84177f2:	75 07                	jne    84177fb <_ZN12DB_SaveSkill8dispatchEiiP6Stream+0x21>
 84177f4:	b8 00 00 00 00       	mov    $0x0,%eax
 84177f9:	eb 2c                	jmp    8417827 <_ZN12DB_SaveSkill8dispatchEiiP6Stream+0x4d>
 84177fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84177fe:	89 44 24 04          	mov    %eax,0x4(%esp)
 8417802:	8b 45 08             	mov    0x8(%ebp),%eax
 8417805:	89 04 24             	mov    %eax,(%esp)
 8417808:	e8 1d 00 00 00       	call   841782a <_ZN12DB_SaveSkill9SaveSkillEP14SIG_LOAD_SKILL>
 841780d:	88 45 f3             	mov    %al,-0xd(%ebp)
 8417810:	0f b6 45 f3          	movzbl -0xd(%ebp),%eax
 8417814:	83 f0 01             	xor    $0x1,%eax
 8417817:	84 c0                	test   %al,%al
 8417819:	74 07                	je     8417822 <_ZN12DB_SaveSkill8dispatchEiiP6Stream+0x48>
 841781b:	b8 00 00 00 00       	mov    $0x0,%eax
 8417820:	eb 05                	jmp    8417827 <_ZN12DB_SaveSkill8dispatchEiiP6Stream+0x4d>
 8417822:	b8 01 00 00 00       	mov    $0x1,%eax
 8417827:	c9                   	leave
 8417828:	c3                   	ret
 8417829:	90                   	nop

```

```c
// DB_SaveSkill::dispatch @ 0x84177da

/* DB_SaveSkill::dispatch(int, int, Stream*) */

undefined4 __thiscall
DB_SaveSkill::dispatch(DB_SaveSkill *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  SIG_LOAD_SKILL *pSVar2;
  undefined4 uVar3;
  
  pSVar2 = Stream::GetOutBuffer<SIG_LOAD_SKILL>(param_3);
  if (pSVar2 == (SIG_LOAD_SKILL *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = SaveSkill(this,pSVar2);
    if (cVar1 == '\x01') {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

---

## ~DB_SaveSkill

```asm
// === 0841778c DB_SaveSkill::~DB_SaveSkill  [0x0841778c-0x84177bb] ===
 841778c:	55                   	push   %ebp
 841778d:	89 e5                	mov    %esp,%ebp
 841778f:	83 ec 18             	sub    $0x18,%esp
 8417792:	8b 45 08             	mov    0x8(%ebp),%eax
 8417795:	c7 00 98 fa c5 08    	movl   $0x8c5fa98,(%eax)
 841779b:	8b 45 08             	mov    0x8(%ebp),%eax
 841779e:	89 04 24             	mov    %eax,(%esp)
 84177a1:	e8 d2 ab cc ff       	call   80e2378 <_ZN12DBDispatcherD1Ev>
 84177a6:	b8 00 00 00 00       	mov    $0x0,%eax
 84177ab:	84 c0                	test   %al,%al
 84177ad:	74 0b                	je     84177ba <_ZN12DB_SaveSkillD1Ev+0x2e>
 84177af:	8b 45 08             	mov    0x8(%ebp),%eax
 84177b2:	89 04 24             	mov    %eax,(%esp)
 84177b5:	e8 36 cd 30 00       	call   87244f0 <_ZdlPv>
 84177ba:	c9                   	leave
 84177bb:	c3                   	ret

```

```c
// DB_SaveSkill::~DB_SaveSkill @ 0x841778c

/* WARNING: Removing unreachable block (ram,0x084177af) */
/* DB_SaveSkill::~DB_SaveSkill() */

void __thiscall DB_SaveSkill::~DB_SaveSkill(DB_SaveSkill *this)

{
  *(undefined ***)this = &PTR_dispatch_08c5fa98;
  DBDispatcher::~DBDispatcher((DBDispatcher *)this);
  return;
}

```

---

## ~DB_SaveSkill_084177bc

```asm
// === 084177bc DB_SaveSkill::~DB_SaveSkill  [0x084177bc-0x84177d9] ===
 84177bc:	55                   	push   %ebp
 84177bd:	89 e5                	mov    %esp,%ebp
 84177bf:	83 ec 18             	sub    $0x18,%esp
 84177c2:	8b 45 08             	mov    0x8(%ebp),%eax
 84177c5:	89 04 24             	mov    %eax,(%esp)
 84177c8:	e8 bf ff ff ff       	call   841778c <_ZN12DB_SaveSkillD1Ev>
 84177cd:	8b 45 08             	mov    0x8(%ebp),%eax
 84177d0:	89 04 24             	mov    %eax,(%esp)
 84177d3:	e8 18 cd 30 00       	call   87244f0 <_ZdlPv>
 84177d8:	c9                   	leave
 84177d9:	c3                   	ret

```

```c
// DB_SaveSkill::~DB_SaveSkill @ 0x84177bc

/* DB_SaveSkill::~DB_SaveSkill() */

void __thiscall DB_SaveSkill::~DB_SaveSkill(DB_SaveSkill *this)

{
  ~DB_SaveSkill(this);
  operator_delete(this);
  return;
}

```

