# APSystem__DB_UpdateRewardMedal

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 3

---

## Update

```asm
// === 08124cb2 APSystem::DB_UpdateRewardMedal::Update  [0x08124cb2-0x8124d29] ===
 8124cb2:	55                   	push   %ebp
 8124cb3:	89 e5                	mov    %esp,%ebp
 8124cb5:	83 ec 38             	sub    $0x38,%esp
 8124cb8:	a1 ac bd 40 09       	mov    0x940bdac,%eax
 8124cbd:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8124cc4:	00 
 8124cc5:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8124ccc:	00 
 8124ccd:	89 04 24             	mov    %eax,(%esp)
 8124cd0:	e8 69 05 2d 00       	call   83f523e <_ZN5DBMgr11GetDBHandleE18ENUM_DB_HANDLE_IDX17ENUM_SERVER_GROUP>
 8124cd5:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8124cd8:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124cdb:	8d 50 04             	lea    0x4(%eax),%edx
 8124cde:	8b 45 0c             	mov    0xc(%ebp),%eax
 8124ce1:	8b 00                	mov    (%eax),%eax
 8124ce3:	89 54 24 14          	mov    %edx,0x14(%esp)
 8124ce7:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8124cee:	00 
 8124cef:	89 44 24 0c          	mov    %eax,0xc(%esp)
 8124cf3:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8124cfa:	00 
 8124cfb:	c7 44 24 04 d8 e5 b5 	movl   $0x8b5e5d8,0x4(%esp)
 8124d02:	08 
 8124d03:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8124d06:	89 04 24             	mov    %eax,(%esp)
 8124d09:	e8 b2 f4 2c 00       	call   83f41c0 <_ZN5MySQL9set_queryEPKcz>
 8124d0e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8124d15:	00 
 8124d16:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8124d19:	89 04 24             	mov    %eax,(%esp)
 8124d1c:	e8 05 f6 2c 00       	call   83f4326 <_ZN5MySQL4execEb>
 8124d21:	88 45 f7             	mov    %al,-0x9(%ebp)
 8124d24:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8124d28:	c9                   	leave
 8124d29:	c3                   	ret

```

```c
// APSystem::DB_UpdateRewardMedal::Update @ 0x8124cb2

/* APSystem::DB_UpdateRewardMedal::Update(APSystem::_SIG_UPDATE_REWARD_MEDAL&) */

undefined1 __thiscall
APSystem::DB_UpdateRewardMedal::Update(DB_UpdateRewardMedal *this,_SIG_UPDATE_REWARD_MEDAL *param_1)

{
  undefined1 uVar1;
  MySQL *this_00;
  
  this_00 = (MySQL *)DBMgr::GetDBHandle(GlobalData::s_db_mgr,2,0);
  MySQL::set_query(this_00,
                   "update charac_action_point set is_reward_medal=%u \t\t\t\t\twhere charac_no = %u\t\t\t\t\t\tand is_reward_medal = %u \t\t\t\t\tand occ_date = \'%s\'"
                   ,1,*(undefined4 *)param_1,0,param_1 + 4);
  uVar1 = MySQL::exec(this_00,true);
  return uVar1;
}

```

---

## dispatch

```asm
// === 08124c78 APSystem::DB_UpdateRewardMedal::dispatch  [0x08124c78-0x8124cb1] ===
 8124c78:	55                   	push   %ebp
 8124c79:	89 e5                	mov    %esp,%ebp
 8124c7b:	83 ec 28             	sub    $0x28,%esp
 8124c7e:	8b 45 14             	mov    0x14(%ebp),%eax
 8124c81:	89 04 24             	mov    %eax,(%esp)
 8124c84:	e8 3d 0b 00 00       	call   81257c6 <_ZN6Stream12GetOutBufferIN8APSystem24_SIG_UPDATE_REWARD_MEDALEEEPT_v>
 8124c89:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8124c8c:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8124c90:	75 07                	jne    8124c99 <_ZN8APSystem20DB_UpdateRewardMedal8dispatchEiiP6Stream+0x21>
 8124c92:	b8 00 00 00 00       	mov    $0x0,%eax
 8124c97:	eb 17                	jmp    8124cb0 <_ZN8APSystem20DB_UpdateRewardMedal8dispatchEiiP6Stream+0x38>
 8124c99:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8124c9c:	89 44 24 04          	mov    %eax,0x4(%esp)
 8124ca0:	8b 45 08             	mov    0x8(%ebp),%eax
 8124ca3:	89 04 24             	mov    %eax,(%esp)
 8124ca6:	e8 07 00 00 00       	call   8124cb2 <_ZN8APSystem20DB_UpdateRewardMedal6UpdateERNS_24_SIG_UPDATE_REWARD_MEDALE>
 8124cab:	b8 01 00 00 00       	mov    $0x1,%eax
 8124cb0:	c9                   	leave
 8124cb1:	c3                   	ret

```

```c
// APSystem::DB_UpdateRewardMedal::dispatch @ 0x8124c78

/* APSystem::DB_UpdateRewardMedal::dispatch(int, int, Stream*) */

bool __thiscall
APSystem::DB_UpdateRewardMedal::dispatch
          (DB_UpdateRewardMedal *this,int param_1,int param_2,Stream *param_3)

{
  _SIG_UPDATE_REWARD_MEDAL *p_Var1;
  
  p_Var1 = Stream::GetOutBuffer<APSystem::_SIG_UPDATE_REWARD_MEDAL>(param_3);
  if (p_Var1 != (_SIG_UPDATE_REWARD_MEDAL *)0x0) {
    Update(this,p_Var1);
  }
  return p_Var1 != (_SIG_UPDATE_REWARD_MEDAL *)0x0;
}

```

---

## makeRequest

```asm
// === 08124c70 APSystem::DB_UpdateRewardMedal::makeRequest  [0x08124c70-0x8124c77] ===
 8124c70:	55                   	push   %ebp
 8124c71:	89 e5                	mov    %esp,%ebp
 8124c73:	83 ec 10             	sub    $0x10,%esp
 8124c76:	c9                   	leave
 8124c77:	c3                   	ret

```

```c
// APSystem::DB_UpdateRewardMedal::makeRequest @ 0x8124c70

/* APSystem::DB_UpdateRewardMedal::makeRequest(int, APSystem::_SIG_LOAD_REWARD_MEDAL const&) */

void APSystem::DB_UpdateRewardMedal::makeRequest(int param_1,_SIG_LOAD_REWARD_MEDAL *param_2)

{
  return;
}

```

