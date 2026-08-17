# TimerCheckRecvPvpEndResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863703a TimerCheckRecvPvpEndResult::dispatch_sig  [0x0863703a-0x8637139] ===
 863703a:	55                   	push   %ebp
 863703b:	89 e5                	mov    %esp,%ebp
 863703d:	56                   	push   %esi
 863703e:	53                   	push   %ebx
 863703f:	83 ec 20             	sub    $0x20,%esp
 8637042:	e8 47 51 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8637047:	c7 44 24 0c 3d 00 00 	movl   $0x3d,0xc(%esp)
 863704e:	00 
 863704f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8637056:	00 
 8637057:	8b 55 0c             	mov    0xc(%ebp),%edx
 863705a:	89 54 24 04          	mov    %edx,0x4(%esp)
 863705e:	89 04 24             	mov    %eax,(%esp)
 8637061:	e8 a0 e1 c5 ff       	call   8295206 <_ZN12CGameManager6GetPvpEiP5CUseri>
 8637066:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8637069:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863706d:	75 0a                	jne    8637079 <_ZN26TimerCheckRecvPvpEndResult12dispatch_sigEiij+0x3f>
 863706f:	b8 00 00 00 00       	mov    $0x0,%eax
 8637074:	e9 ba 00 00 00       	jmp    8637133 <_ZN26TimerCheckRecvPvpEndResult12dispatch_sigEiij+0xf9>
 8637079:	c7 44 24 04 3d 00 00 	movl   $0x3d,0x4(%esp)
 8637080:	00 
 8637081:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8637084:	89 04 24             	mov    %eax,(%esp)
 8637087:	e8 28 4c 00 00       	call   863bcb4 <_ZN8PvP_Room13get_timer_keyE13TIMER_MESSAGE>
 863708c:	3b 45 10             	cmp    0x10(%ebp),%eax
 863708f:	0f 95 c0             	setne  %al
 8637092:	84 c0                	test   %al,%al
 8637094:	74 0a                	je     86370a0 <_ZN26TimerCheckRecvPvpEndResult12dispatch_sigEiij+0x66>
 8637096:	b8 00 00 00 00       	mov    $0x0,%eax
 863709b:	e9 93 00 00 00       	jmp    8637133 <_ZN26TimerCheckRecvPvpEndResult12dispatch_sigEiij+0xf9>
 86370a0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86370a3:	89 04 24             	mov    %eax,(%esp)
 86370a6:	e8 1d 51 fa ff       	call   85dc1c8 <_ZNK8PvP_Room29get_recv_pvp_end_result_countEv>
 86370ab:	85 c0                	test   %eax,%eax
 86370ad:	0f 95 c0             	setne  %al
 86370b0:	84 c0                	test   %al,%al
 86370b2:	74 7a                	je     863712e <_ZN26TimerCheckRecvPvpEndResult12dispatch_sigEiij+0xf4>
 86370b4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86370b7:	89 04 24             	mov    %eax,(%esp)
 86370ba:	e8 89 59 fa ff       	call   85dca48 <_ZN8PvP_Room14end_pvp_resultEv>
 86370bf:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86370c2:	89 04 24             	mov    %eax,(%esp)
 86370c5:	e8 82 6c f5 ff       	call   858dd4c <_ZN11PacketGuardC1Ev>
 86370ca:	8d 45 e8             	lea    -0x18(%ebp),%eax
 86370cd:	89 44 24 04          	mov    %eax,0x4(%esp)
 86370d1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86370d4:	89 04 24             	mov    %eax,(%esp)
 86370d7:	e8 5e 4c fa ff       	call   85dbd3a <_ZN8PvP_Room15make_state_infoEPc>
 86370dc:	e8 c6 32 aa ff       	call   80da3a7 <_Z11G_GameWorldv>
 86370e1:	8d 55 e8             	lea    -0x18(%ebp),%edx
 86370e4:	89 54 24 04          	mov    %edx,0x4(%esp)
 86370e8:	89 04 24             	mov    %eax,(%esp)
 86370eb:	e8 24 1b 09 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 86370f0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86370f3:	89 04 24             	mov    %eax,(%esp)
 86370f6:	e8 01 22 fa ff       	call   85d92fc <_ZN8PvP_Room7end_pvpEv>
 86370fb:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86370fe:	89 04 24             	mov    %eax,(%esp)
 8637101:	e8 2a f3 f9 ff       	call   85d6430 <_ZN8PvP_Room12battle_resetEv>
 8637106:	eb 1b                	jmp    8637123 <_ZN26TimerCheckRecvPvpEndResult12dispatch_sigEiij+0xe9>
 8637108:	89 d3                	mov    %edx,%ebx
 863710a:	89 c6                	mov    %eax,%esi
 863710c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 863710f:	89 04 24             	mov    %eax,(%esp)
 8637112:	e8 69 6d f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 8637117:	89 f0                	mov    %esi,%eax
 8637119:	89 da                	mov    %ebx,%edx
 863711b:	89 04 24             	mov    %eax,(%esp)
 863711e:	e8 2d c6 4a 00       	call   8ae3750 <_Unwind_Resume>
 8637123:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8637126:	89 04 24             	mov    %eax,(%esp)
 8637129:	e8 52 6d f5 ff       	call   858de80 <_ZN11PacketGuardD1Ev>
 863712e:	b8 01 00 00 00       	mov    $0x1,%eax
 8637133:	83 c4 20             	add    $0x20,%esp
 8637136:	5b                   	pop    %ebx
 8637137:	5e                   	pop    %esi
 8637138:	5d                   	pop    %ebp
 8637139:	c3                   	ret

```

```c
// TimerCheckRecvPvpEndResult::dispatch_sig @ 0x863703a

/* TimerCheckRecvPvpEndResult::dispatch_sig(int, int, unsigned int) */

undefined4 TimerCheckRecvPvpEndResult::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGameManager *this;
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  GameWorld *this_00;
  PacketGuard local_1c [12];
  PvP_Room *local_10;
  
  this = (CGameManager *)G_CGameManager();
  local_10 = (PvP_Room *)CGameManager::GetPvp(this,param_2,(CUser *)0x0,0x3d);
  if (local_10 == (PvP_Room *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar2 = PvP_Room::get_timer_key(local_10,0x3d);
    if (uVar2 == param_3) {
      iVar3 = PvP_Room::get_recv_pvp_end_result_count(local_10);
      if (iVar3 != 0) {
        PvP_Room::end_pvp_result(local_10);
        PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 086370d7 to 08637105 has its CatchHandler @ 08637108 */
        PvP_Room::make_state_info(local_10,(char *)local_1c);
        this_00 = (GameWorld *)G_GameWorld();
        GameWorld::send_all(this_00,local_1c);
        PvP_Room::end_pvp(local_10);
        PvP_Room::battle_reset(local_10);
        PacketGuard::~PacketGuard(local_1c);
      }
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}

```

