# DisPatcher_EndPvPResult

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 081f88ae DisPatcher_EndPvPResult::dispatch_sig  [0x081f88ae-0x81f8a7b] ===
 81f88ae:	55                   	push   %ebp
 81f88af:	89 e5                	mov    %esp,%ebp
 81f88b1:	56                   	push   %esi
 81f88b2:	53                   	push   %ebx
 81f88b3:	83 ec 30             	sub    $0x30,%esp
 81f88b6:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f88b9:	89 04 24             	mov    %eax,(%esp)
 81f88bc:	e8 cb 1a ee ff       	call   80da38c <_ZN5CUser9get_stateEv>
 81f88c1:	83 f8 07             	cmp    $0x7,%eax
 81f88c4:	0f 95 c0             	setne  %al
 81f88c7:	84 c0                	test   %al,%al
 81f88c9:	74 0a                	je     81f88d5 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x27>
 81f88cb:	b8 00 00 00 00       	mov    $0x0,%eax
 81f88d0:	e9 a0 01 00 00       	jmp    81f8a75 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x1c7>
 81f88d5:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f88d8:	89 04 24             	mov    %eax,(%esp)
 81f88db:	e8 ae c8 45 00       	call   865518e <_ZN5CUser10GetPVPRoomEv>
 81f88e0:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81f88e3:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81f88e7:	75 29                	jne    81f8912 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x64>
 81f88e9:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 81f88f0:	00 
 81f88f1:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 81f88f8:	00 
 81f88f9:	c7 44 24 04 a0 fd bc 	movl   $0x8bcfda0,0x4(%esp)
 81f8900:	08 
 81f8901:	c7 04 24 81 86 00 00 	movl   $0x8681,(%esp)
 81f8908:	e8 ca 7f 39 00       	call   85908d7 <_Z8LineFunciPKcij>
 81f890d:	e9 63 01 00 00       	jmp    81f8a75 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x1c7>
 81f8912:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f8915:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8919:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f891c:	89 04 24             	mov    %eax,(%esp)
 81f891f:	e8 c8 36 3e 00       	call   85dbfec <_ZN8PvP_Room28set_recv_pvp_end_result_flagEP5CUser>
 81f8924:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f8927:	89 04 24             	mov    %eax,(%esp)
 81f892a:	e8 4f 37 3e 00       	call   85dc07e <_ZNK8PvP_Room23recv_pvp_end_result_allEv>
 81f892f:	84 c0                	test   %al,%al
 81f8931:	74 7f                	je     81f89b2 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x104>
 81f8933:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f8936:	89 04 24             	mov    %eax,(%esp)
 81f8939:	e8 0a 41 3e 00       	call   85dca48 <_ZN8PvP_Room14end_pvp_resultEv>
 81f893e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81f8941:	89 04 24             	mov    %eax,(%esp)
 81f8944:	e8 03 54 39 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81f8949:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81f894c:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f8950:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f8953:	89 04 24             	mov    %eax,(%esp)
 81f8956:	e8 df 33 3e 00       	call   85dbd3a <_ZN8PvP_Room15make_state_infoEPc>
 81f895b:	e8 47 1a ee ff       	call   80da3a7 <_Z11G_GameWorldv>
 81f8960:	8d 55 e8             	lea    -0x18(%ebp),%edx
 81f8963:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f8967:	89 04 24             	mov    %eax,(%esp)
 81f896a:	e8 a5 02 4d 00       	call   86c8c14 <_ZN9GameWorld8send_allER11PacketGuard>
 81f896f:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f8972:	89 04 24             	mov    %eax,(%esp)
 81f8975:	e8 82 09 3e 00       	call   85d92fc <_ZN8PvP_Room7end_pvpEv>
 81f897a:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f897d:	89 04 24             	mov    %eax,(%esp)
 81f8980:	e8 ab da 3d 00       	call   85d6430 <_ZN8PvP_Room12battle_resetEv>
 81f8985:	eb 1b                	jmp    81f89a2 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0xf4>
 81f8987:	89 d3                	mov    %edx,%ebx
 81f8989:	89 c6                	mov    %eax,%esi
 81f898b:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81f898e:	89 04 24             	mov    %eax,(%esp)
 81f8991:	e8 ea 54 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f8996:	89 f0                	mov    %esi,%eax
 81f8998:	89 da                	mov    %ebx,%edx
 81f899a:	89 04 24             	mov    %eax,(%esp)
 81f899d:	e8 ae ad 8e 00       	call   8ae3750 <_Unwind_Resume>
 81f89a2:	8d 45 e8             	lea    -0x18(%ebp),%eax
 81f89a5:	89 04 24             	mov    %eax,(%esp)
 81f89a8:	e8 d3 54 39 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 81f89ad:	e9 be 00 00 00       	jmp    81f8a70 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x1c2>
 81f89b2:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f89b5:	89 04 24             	mov    %eax,(%esp)
 81f89b8:	e8 c7 4f 03 00       	call   822d984 <_ZNK8PvP_Room13isRematchableEv>
 81f89bd:	84 c0                	test   %al,%al
 81f89bf:	74 1d                	je     81f89de <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x130>
 81f89c1:	8b 45 0c             	mov    0xc(%ebp),%eax
 81f89c4:	89 44 24 04          	mov    %eax,0x4(%esp)
 81f89c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f89cb:	89 04 24             	mov    %eax,(%esp)
 81f89ce:	e8 1d 37 3e 00       	call   85dc0f0 <_ZNK8PvP_Room24recv_pvp_end_result_teamEP5CUser>
 81f89d3:	84 c0                	test   %al,%al
 81f89d5:	74 07                	je     81f89de <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x130>
 81f89d7:	b8 01 00 00 00       	mov    $0x1,%eax
 81f89dc:	eb 05                	jmp    81f89e3 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x135>
 81f89de:	b8 00 00 00 00       	mov    $0x0,%eax
 81f89e3:	84 c0                	test   %al,%al
 81f89e5:	74 69                	je     81f8a50 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x1a2>
 81f89e7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f89ea:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 81f89f0:	85 c0                	test   %eax,%eax
 81f89f2:	74 2e                	je     81f8a22 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x174>
 81f89f4:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f89f7:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 81f89fd:	8b 00                	mov    (%eax),%eax
 81f89ff:	83 e8 80             	sub    $0xffffff80,%eax
 81f8a02:	8b 08                	mov    (%eax),%ecx
 81f8a04:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f8a07:	8b 80 e4 06 00 00    	mov    0x6e4(%eax),%eax
 81f8a0d:	8b 55 0c             	mov    0xc(%ebp),%edx
 81f8a10:	89 54 24 08          	mov    %edx,0x8(%esp)
 81f8a14:	8b 55 f4             	mov    -0xc(%ebp),%edx
 81f8a17:	89 54 24 04          	mov    %edx,0x4(%esp)
 81f8a1b:	89 04 24             	mov    %eax,(%esp)
 81f8a1e:	ff d1                	call   *%ecx
 81f8a20:	eb 4e                	jmp    81f8a70 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x1c2>
 81f8a22:	c7 44 24 10 ee 22 bc 	movl   $0x8bc22ee,0x10(%esp)
 81f8a29:	08 
 81f8a2a:	c7 44 24 0c b6 86 00 	movl   $0x86b6,0xc(%esp)
 81f8a31:	00 
 81f8a32:	c7 44 24 08 a0 fd bc 	movl   $0x8bcfda0,0x8(%esp)
 81f8a39:	08 
 81f8a3a:	c7 44 24 04 64 14 bc 	movl   $0x8bc1464,0x4(%esp)
 81f8a41:	08 
 81f8a42:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
 81f8a49:	e8 bc b1 8d 00       	call   8ad3c0a <_ZN10LogManager9logFormatEiPKcS1_iS1_z>
 81f8a4e:	eb 20                	jmp    81f8a70 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x1c2>
 81f8a50:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f8a53:	89 04 24             	mov    %eax,(%esp)
 81f8a56:	e8 6d 37 3e 00       	call   85dc1c8 <_ZNK8PvP_Room29get_recv_pvp_end_result_countEv>
 81f8a5b:	83 f8 01             	cmp    $0x1,%eax
 81f8a5e:	0f 94 c0             	sete   %al
 81f8a61:	84 c0                	test   %al,%al
 81f8a63:	74 0b                	je     81f8a70 <_ZN23DisPatcher_EndPvPResult12dispatch_sigEP5CUserR9PacketBuf+0x1c2>
 81f8a65:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81f8a68:	89 04 24             	mov    %eax,(%esp)
 81f8a6b:	e8 cc 37 3e 00       	call   85dc23c <_ZN8PvP_Room32insert_timer_recv_pvp_end_resultEv>
 81f8a70:	b8 00 00 00 00       	mov    $0x0,%eax
 81f8a75:	83 c4 30             	add    $0x30,%esp
 81f8a78:	5b                   	pop    %ebx
 81f8a79:	5e                   	pop    %esi
 81f8a7a:	5d                   	pop    %ebp
 81f8a7b:	c3                   	ret

```

```c
// DisPatcher_EndPvPResult::dispatch_sig @ 0x81f88ae

/* DisPatcher_EndPvPResult::dispatch_sig(CUser*, PacketBuf&) */

undefined4 DisPatcher_EndPvPResult::dispatch_sig(CUser *param_1,PacketBuf *param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  GameWorld *this;
  PacketGuard local_1c [12];
  PvP_Room *local_10;
  
  iVar3 = CUser::get_state((CUser *)param_2);
  if (iVar3 != 7) {
    return 0;
  }
  local_10 = (PvP_Room *)CUser::GetPVPRoom((CUser *)param_2);
  if (local_10 != (PvP_Room *)0x0) {
    PvP_Room::set_recv_pvp_end_result_flag(local_10,(CUser *)param_2);
    cVar2 = PvP_Room::recv_pvp_end_result_all(local_10);
    if (cVar2 == '\0') {
      cVar2 = PvP_Room::isRematchable(local_10);
      if ((cVar2 == '\0') ||
         (cVar2 = PvP_Room::recv_pvp_end_result_team(local_10,(CUser *)param_2), cVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        if (*(int *)(local_10 + 0x6e4) == 0) {
          LogManager::logFormat
                    (1,"PacketDispatcher_Impl_1.cpp",
                     "virtual int DisPatcher_EndPvPResult::dispatch_sig(CUser*, PacketBuf&)",0x86b6,
                     "error end pvp result team");
        }
        else {
          (**(code **)(**(int **)(local_10 + 0x6e4) + 0x80))
                    (*(undefined4 *)(local_10 + 0x6e4),local_10,param_2);
        }
      }
      else {
        iVar3 = PvP_Room::get_recv_pvp_end_result_count(local_10);
        if (iVar3 == 1) {
          PvP_Room::insert_timer_recv_pvp_end_result(local_10);
        }
      }
    }
    else {
      PvP_Room::end_pvp_result(local_10);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 081f8956 to 081f8984 has its CatchHandler @ 081f8987 */
      PvP_Room::make_state_info(local_10,(char *)local_1c);
      this = (GameWorld *)G_GameWorld();
      GameWorld::send_all(this,local_1c);
      PvP_Room::end_pvp(local_10);
      PvP_Room::battle_reset(local_10);
      PacketGuard::~PacketGuard(local_1c);
    }
    return 0;
  }
  uVar4 = LineFunc(0x8681,"virtual int DisPatcher_EndPvPResult::dispatch_sig(CUser*, PacketBuf&)",0,
                   0);
  return uVar4;
}

```

