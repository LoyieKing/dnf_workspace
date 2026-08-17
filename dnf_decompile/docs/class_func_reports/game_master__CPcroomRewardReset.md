# game_master__CPcroomRewardReset

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 2

---

## execute

```asm
// === 084b3d20 game_master::CPcroomRewardReset::execute  [0x084b3d20-0x84b3db1] ===
 84b3d20:	55                   	push   %ebp
 84b3d21:	89 e5                	mov    %esp,%ebp
 84b3d23:	53                   	push   %ebx
 84b3d24:	83 ec 34             	sub    $0x34,%esp
 84b3d27:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3d2a:	89 04 24             	mov    %eax,(%esp)
 84b3d2d:	e8 88 02 00 00       	call   84b3fba <_ZN11game_master8CCommand7GetUserEv>
 84b3d32:	89 45 f4             	mov    %eax,-0xc(%ebp)
 84b3d35:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b3d38:	c6 80 32 ec 08 00 04 	movb   $0x4,0x8ec32(%eax)
 84b3d3f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b3d42:	89 04 24             	mov    %eax,(%esp)
 84b3d45:	e8 bc 91 ca ff       	call   815cf06 <_ZN25DBUpdatePcroomDailyReward11makeRequestEP5CUser>
 84b3d4a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b3d4d:	89 04 24             	mov    %eax,(%esp)
 84b3d50:	e8 51 db ca ff       	call   81618a6 <_ZN28InterSelectPcroomDailyReward10SendPacketEP5CUser>
 84b3d55:	8b 45 f4             	mov    -0xc(%ebp),%eax
 84b3d58:	89 04 24             	mov    %eax,(%esp)
 84b3d5b:	e8 0e 66 c2 ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 84b3d60:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 84b3d67:	00 
 84b3d68:	89 04 24             	mov    %eax,(%esp)
 84b3d6b:	e8 db 52 c5 ff       	call   810904b <_Z14NumberToStringji>
 84b3d70:	89 c3                	mov    %eax,%ebx
 84b3d72:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 84b3d79:	00 
 84b3d7a:	c7 44 24 08 52 18 00 	movl   $0x1852,0x8(%esp)
 84b3d81:	00 
 84b3d82:	c7 44 24 04 c0 11 c8 	movl   $0x8c811c0,0x4(%esp)
 84b3d89:	08 
 84b3d8a:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b3d8d:	89 04 24             	mov    %eax,(%esp)
 84b3d90:	e8 83 b9 09 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 84b3d95:	89 5c 24 08          	mov    %ebx,0x8(%esp)
 84b3d99:	c7 44 24 04 b8 04 c8 	movl   $0x8c804b8,0x4(%esp)
 84b3da0:	08 
 84b3da1:	8d 45 e4             	lea    -0x1c(%ebp),%eax
 84b3da4:	89 04 24             	mov    %eax,(%esp)
 84b3da7:	e8 dc b9 09 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 84b3dac:	83 c4 34             	add    $0x34,%esp
 84b3daf:	5b                   	pop    %ebx
 84b3db0:	5d                   	pop    %ebp
 84b3db1:	c3                   	ret

```

```c
// game_master::CPcroomRewardReset::execute @ 0x84b3d20

/* game_master::CPcroomRewardReset::execute() */

void __thiscall game_master::CPcroomRewardReset::execute(CPcroomRewardReset *this)

{
  uint uVar1;
  undefined4 uVar2;
  cMyTrace local_20 [16];
  CUser *local_10;
  
  local_10 = (CUser *)CCommand::GetUser((CCommand *)this);
  local_10[0x8ec32] = (CUser)0x4;
  DBUpdatePcroomDailyReward::makeRequest(local_10);
  InterSelectPcroomDailyReward::SendPacket(local_10);
  uVar1 = CUser::get_acc_id(local_10);
  uVar2 = NumberToString(uVar1,0);
  cMyTrace::cMyTrace(local_20,"virtual void game_master::CPcroomRewardReset::execute()",0x1852,0);
  cMyTrace::operator()(local_20,"[GMCommand] Pcroom daily reward reset m_id:%s",uVar2);
  return;
}

```

---

## parse

```asm
// === 084b3d12 game_master::CPcroomRewardReset::parse  [0x084b3d12-0x84b3d1f] ===
 84b3d12:	55                   	push   %ebp
 84b3d13:	89 e5                	mov    %esp,%ebp
 84b3d15:	8b 45 08             	mov    0x8(%ebp),%eax
 84b3d18:	8b 40 04             	mov    0x4(%eax),%eax
 84b3d1b:	85 c0                	test   %eax,%eax
 84b3d1d:	5d                   	pop    %ebp
 84b3d1e:	c3                   	ret
 84b3d1f:	90                   	nop

```

```c
// game_master::CPcroomRewardReset::parse @ 0x84b3d12

/* game_master::CPcroomRewardReset::parse() */

undefined4 __thiscall game_master::CPcroomRewardReset::parse(CPcroomRewardReset *this)

{
  return *(undefined4 *)(this + 4);
}

```

