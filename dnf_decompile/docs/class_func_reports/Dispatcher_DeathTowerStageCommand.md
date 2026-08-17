# Dispatcher_DeathTowerStageCommand

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08208a9e Dispatcher_DeathTowerStageCommand::dispatch_sig  [0x08208a9e-0x8208d3f] ===
 8208a9e:	55                   	push   %ebp
 8208a9f:	89 e5                	mov    %esp,%ebp
 8208aa1:	56                   	push   %esi
 8208aa2:	53                   	push   %ebx
 8208aa3:	83 ec 50             	sub    $0x50,%esp
 8208aa6:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208aa9:	89 04 24             	mov    %eax,(%esp)
 8208aac:	e8 db 18 ed ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8208ab1:	83 f8 0a             	cmp    $0xa,%eax
 8208ab4:	0f 95 c0             	setne  %al
 8208ab7:	84 c0                	test   %al,%al
 8208ab9:	74 0a                	je     8208ac5 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x27>
 8208abb:	b8 00 00 00 00       	mov    $0x0,%eax
 8208ac0:	e9 73 02 00 00       	jmp    8208d38 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x29a>
 8208ac5:	8d 45 eb             	lea    -0x15(%ebp),%eax
 8208ac8:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208acc:	8b 45 10             	mov    0x10(%ebp),%eax
 8208acf:	89 04 24             	mov    %eax,(%esp)
 8208ad2:	e8 99 44 38 00       	call   858cf70 <_ZN9PacketBuf8get_byteERh>
 8208ad7:	83 f0 01             	xor    $0x1,%eax
 8208ada:	84 c0                	test   %al,%al
 8208adc:	74 29                	je     8208b07 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x69>
 8208ade:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208ae5:	00 
 8208ae6:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208aed:	00 
 8208aee:	c7 44 24 04 e0 e5 bc 	movl   $0x8bce5e0,0x4(%esp)
 8208af5:	08 
 8208af6:	c7 04 24 f2 a3 00 00 	movl   $0xa3f2,(%esp)
 8208afd:	e8 d5 7d 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208b02:	e9 31 02 00 00       	jmp    8208d38 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x29a>
 8208b07:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208b0a:	89 04 24             	mov    %eax,(%esp)
 8208b0d:	e8 92 c7 44 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 8208b12:	89 45 ec             	mov    %eax,-0x14(%ebp)
 8208b15:	83 7d ec 00          	cmpl   $0x0,-0x14(%ebp)
 8208b19:	0f 84 14 02 00 00    	je     8208d33 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x295>
 8208b1f:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8208b23:	0f b6 c0             	movzbl %al,%eax
 8208b26:	89 44 24 08          	mov    %eax,0x8(%esp)
 8208b2a:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208b2d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208b31:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8208b34:	89 04 24             	mov    %eax,(%esp)
 8208b37:	e8 14 d6 25 00       	call   8466150 <_ZN8WongWork11CDeathTower18handleStageCommandEP5CUserh>
 8208b3c:	83 f0 01             	xor    $0x1,%eax
 8208b3f:	84 c0                	test   %al,%al
 8208b41:	74 29                	je     8208b6c <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0xce>
 8208b43:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208b4a:	00 
 8208b4b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208b52:	00 
 8208b53:	c7 44 24 04 e0 e5 bc 	movl   $0x8bce5e0,0x4(%esp)
 8208b5a:	08 
 8208b5b:	c7 04 24 f9 a3 00 00 	movl   $0xa3f9,(%esp)
 8208b62:	e8 70 7d 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208b67:	e9 cc 01 00 00       	jmp    8208d38 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x29a>
 8208b6c:	8b 45 0c             	mov    0xc(%ebp),%eax
 8208b6f:	89 04 24             	mov    %eax,(%esp)
 8208b72:	e8 d5 c5 44 00       	call   865514c <_ZN5CUser8GetPartyEv>
 8208b77:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8208b7a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8208b7e:	0f 84 af 01 00 00    	je     8208d33 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x295>
 8208b84:	0f b6 45 eb          	movzbl -0x15(%ebp),%eax
 8208b88:	3c 02                	cmp    $0x2,%al
 8208b8a:	0f 85 a3 01 00 00    	jne    8208d33 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x295>
 8208b90:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8208b93:	89 04 24             	mov    %eax,(%esp)
 8208b96:	e8 83 ba 02 00       	call   823461e <_ZN8WongWork11CDeathTower9getCStageEv>
 8208b9b:	89 04 24             	mov    %eax,(%esp)
 8208b9e:	e8 9d 90 25 00       	call   8461c40 <_ZN8WongWork11CDeathTower6CStage13onFinishStageEv>
 8208ba3:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
 8208baa:	e9 75 01 00 00       	jmp    8208d24 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x286>
 8208baf:	8b 55 f4             	mov    -0xc(%ebp),%edx
 8208bb2:	8d 45 e2             	lea    -0x1e(%ebp),%eax
 8208bb5:	01 d2                	add    %edx,%edx
 8208bb7:	01 d0                	add    %edx,%eax
 8208bb9:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208bbd:	8b 45 10             	mov    0x10(%ebp),%eax
 8208bc0:	89 04 24             	mov    %eax,(%esp)
 8208bc3:	e8 e8 44 38 00       	call   858d0b0 <_ZN9PacketBuf9get_shortERt>
 8208bc8:	83 f0 01             	xor    $0x1,%eax
 8208bcb:	84 c0                	test   %al,%al
 8208bcd:	74 29                	je     8208bf8 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x15a>
 8208bcf:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208bd6:	00 
 8208bd7:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8208bde:	00 
 8208bdf:	c7 44 24 04 e0 e5 bc 	movl   $0x8bce5e0,0x4(%esp)
 8208be6:	08 
 8208be7:	c7 04 24 05 a4 00 00 	movl   $0xa405,(%esp)
 8208bee:	e8 e4 7c 38 00       	call   85908d7 <_Z8LineFunciPKcij>
 8208bf3:	e9 40 01 00 00       	jmp    8208d38 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x29a>
 8208bf8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8208bfb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208bff:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8208c02:	89 04 24             	mov    %eax,(%esp)
 8208c05:	e8 5e cc f3 ff       	call   8145868 <_ZN6CParty14checkValidUserEi>
 8208c0a:	84 c0                	test   %al,%al
 8208c0c:	0f 84 0e 01 00 00    	je     8208d20 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x282>
 8208c12:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8208c15:	0f b7 44 45 e2       	movzwl -0x1e(%ebp,%eax,2),%eax
 8208c1a:	66 85 c0             	test   %ax,%ax
 8208c1d:	75 16                	jne    8208c35 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x197>
 8208c1f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8208c22:	89 04 24             	mov    %eax,(%esp)
 8208c25:	e8 e8 4b 02 00       	call   822d812 <_ZN6CParty12IsSinglePlayEv>
 8208c2a:	84 c0                	test   %al,%al
 8208c2c:	74 07                	je     8208c35 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x197>
 8208c2e:	b8 01 00 00 00       	mov    $0x1,%eax
 8208c33:	eb 05                	jmp    8208c3a <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x19c>
 8208c35:	b8 00 00 00 00       	mov    $0x0,%eax
 8208c3a:	84 c0                	test   %al,%al
 8208c3c:	74 5a                	je     8208c98 <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x1fa>
 8208c3e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8208c41:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208c45:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8208c48:	89 04 24             	mov    %eax,(%esp)
 8208c4b:	e8 14 cb f3 ff       	call   8145764 <_ZN6CParty8get_userEi>
 8208c50:	89 c3                	mov    %eax,%ebx
 8208c52:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8208c55:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208c59:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8208c5c:	89 04 24             	mov    %eax,(%esp)
 8208c5f:	e8 00 cb f3 ff       	call   8145764 <_ZN6CParty8get_userEi>
 8208c64:	89 04 24             	mov    %eax,(%esp)
 8208c67:	e8 ee 0c ef ff       	call   80f995a <_ZN5CUser15getHackAnalyzerEv>
 8208c6c:	c7 44 24 14 00 00 00 	movl   $0x0,0x14(%esp)
 8208c73:	00 
 8208c74:	c7 44 24 10 00 00 00 	movl   $0x0,0x10(%esp)
 8208c7b:	00 
 8208c7c:	c7 44 24 0c 01 00 00 	movl   $0x1,0xc(%esp)
 8208c83:	00 
 8208c84:	c7 44 24 08 d5 00 00 	movl   $0xd5,0x8(%esp)
 8208c8b:	00 
 8208c8c:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8208c90:	89 04 24             	mov    %eax,(%esp)
 8208c93:	e8 e6 ff ee ff       	call   80f8c7e <_ZN8WongWork13CHackAnalyzer16addServerHackCntEP5CUserNS_13ENUM_HACKTYPEEjjj>
 8208c98:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8208c9b:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208c9f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8208ca2:	89 04 24             	mov    %eax,(%esp)
 8208ca5:	e8 ba ca f3 ff       	call   8145764 <_ZN6CParty8get_userEi>
 8208caa:	89 04 24             	mov    %eax,(%esp)
 8208cad:	e8 f2 c5 44 00       	call   86552a4 <_ZN5CUser13getDeathTowerEv>
 8208cb2:	05 58 0b 00 00       	add    $0xb58,%eax
 8208cb7:	89 04 24             	mov    %eax,(%esp)
 8208cba:	e8 6b b9 02 00       	call   823462a <_ZN8WongWork11CDeathTower25stMapMonsterKillChecker_t4initEv>
 8208cbf:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8208cc2:	89 04 24             	mov    %eax,(%esp)
 8208cc5:	e8 54 b9 02 00       	call   823461e <_ZN8WongWork11CDeathTower9getCStageEv>
 8208cca:	89 04 24             	mov    %eax,(%esp)
 8208ccd:	e8 28 b9 02 00       	call   82345fa <_ZN8WongWork11CDeathTower6CStage17getStageClearTimeEv>
 8208cd2:	89 45 d4             	mov    %eax,-0x2c(%ebp)
 8208cd5:	ba d3 4d 62 10       	mov    $0x10624dd3,%edx
 8208cda:	8b 45 d4             	mov    -0x2c(%ebp),%eax
 8208cdd:	f7 e2                	mul    %edx
 8208cdf:	89 d0                	mov    %edx,%eax
 8208ce1:	c1 e8 06             	shr    $0x6,%eax
 8208ce4:	89 c6                	mov    %eax,%esi
 8208ce6:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8208ce9:	0f b7 44 45 e2       	movzwl -0x1e(%ebp,%eax,2),%eax
 8208cee:	0f b7 d8             	movzwl %ax,%ebx
 8208cf1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8208cf4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8208cf8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8208cfb:	89 04 24             	mov    %eax,(%esp)
 8208cfe:	e8 61 ca f3 ff       	call   8145764 <_ZN6CParty8get_userEi>
 8208d03:	05 00 97 07 00       	add    $0x79700,%eax
 8208d08:	c7 44 24 0c 00 00 00 	movl   $0x0,0xc(%esp)
 8208d0f:	00 
 8208d10:	89 74 24 08          	mov    %esi,0x8(%esp)
 8208d14:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8208d18:	89 04 24             	mov    %eax,(%esp)
 8208d1b:	e8 02 be 47 00       	call   8684b22 <_ZN15cUserHistoryLog8MapClearEtii>
 8208d20:	83 45 f4 01          	addl   $0x1,-0xc(%ebp)
 8208d24:	83 7d f4 03          	cmpl   $0x3,-0xc(%ebp)
 8208d28:	0f 9e c0             	setle  %al
 8208d2b:	84 c0                	test   %al,%al
 8208d2d:	0f 85 7c fe ff ff    	jne    8208baf <_ZN33Dispatcher_DeathTowerStageCommand12dispatch_sigEP5CUserR9PacketBuf+0x111>
 8208d33:	b8 00 00 00 00       	mov    $0x0,%eax
 8208d38:	83 c4 50             	add    $0x50,%esp
 8208d3b:	5b                   	pop    %ebx
 8208d3c:	5e                   	pop    %esi
 8208d3d:	5d                   	pop    %ebp
 8208d3e:	c3                   	ret
 8208d3f:	90                   	nop

```

```c
// Dispatcher_DeathTowerStageCommand::dispatch_sig @ 0x8208a9e

/* Dispatcher_DeathTowerStageCommand::dispatch_sig(CUser*, PacketBuf&) */

undefined4 __thiscall
Dispatcher_DeathTowerStageCommand::dispatch_sig
          (Dispatcher_DeathTowerStageCommand *this,CUser *param_1,PacketBuf *param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  CStage *pCVar6;
  CUser *pCVar7;
  CHackAnalyzer *pCVar8;
  uint uVar9;
  ushort local_22 [4];
  uchar local_19;
  CDeathTower *local_18;
  CParty *local_14;
  int local_10;
  
  iVar4 = CUser::get_state(param_1);
  if (iVar4 == 10) {
    cVar3 = PacketBuf::get_byte(param_2,&local_19);
    if (cVar3 == '\x01') {
      local_18 = (CDeathTower *)CUser::getDeathTower(param_1);
      if (local_18 != (CDeathTower *)0x0) {
        cVar3 = WongWork::CDeathTower::handleStageCommand(local_18,param_1,local_19);
        if (cVar3 != '\x01') {
          uVar5 = LineFunc(0xa3f9,
                           "virtual int Dispatcher_DeathTowerStageCommand::dispatch_sig(CUser*, PacketBuf&)"
                           ,0,0);
          return uVar5;
        }
        local_14 = (CParty *)CUser::GetParty(param_1);
        if ((local_14 != (CParty *)0x0) && (local_19 == '\x02')) {
          pCVar6 = (CStage *)WongWork::CDeathTower::getCStage(local_18);
          WongWork::CDeathTower::CStage::onFinishStage(pCVar6);
          for (local_10 = 0; local_10 < 4; local_10 = local_10 + 1) {
            cVar3 = PacketBuf::get_short(param_2,local_22 + local_10);
            if (cVar3 != '\x01') {
              uVar5 = LineFunc(0xa405,
                               "virtual int Dispatcher_DeathTowerStageCommand::dispatch_sig(CUser*, PacketBuf&)"
                               ,0,0);
              return uVar5;
            }
            cVar3 = CParty::checkValidUser(local_14,local_10);
            if (cVar3 != '\0') {
              if ((local_22[local_10] == 0) &&
                 (cVar3 = CParty::IsSinglePlay(local_14), cVar3 != '\0')) {
                bVar2 = true;
              }
              else {
                bVar2 = false;
              }
              if (bVar2) {
                uVar5 = CParty::get_user(local_14,local_10);
                pCVar7 = (CUser *)CParty::get_user(local_14,local_10);
                pCVar8 = (CHackAnalyzer *)CUser::getHackAnalyzer(pCVar7);
                WongWork::CHackAnalyzer::addServerHackCnt(pCVar8,uVar5,0xd5,1,0,0);
              }
              pCVar7 = (CUser *)CParty::get_user(local_14,local_10);
              iVar4 = CUser::getDeathTower(pCVar7);
              WongWork::CDeathTower::stMapMonsterKillChecker_t::init
                        ((stMapMonsterKillChecker_t *)(iVar4 + 0xb58));
              pCVar6 = (CStage *)WongWork::CDeathTower::getCStage(local_18);
              uVar9 = WongWork::CDeathTower::CStage::getStageClearTime(pCVar6);
              uVar1 = local_22[local_10];
              iVar4 = CParty::get_user(local_14,local_10);
              cUserHistoryLog::MapClear((cUserHistoryLog *)(iVar4 + 0x79700),uVar1,uVar9 / 1000,0);
            }
          }
        }
      }
      uVar5 = 0;
    }
    else {
      uVar5 = LineFunc(0xa3f2,
                       "virtual int Dispatcher_DeathTowerStageCommand::dispatch_sig(CUser*, PacketBuf&)"
                       ,0,0);
    }
  }
  else {
    uVar5 = 0;
  }
  return uVar5;
}

```

