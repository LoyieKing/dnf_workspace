# advancealtar__Manager

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 11

---

## Manager

```asm
// === 08130902 advancealtar::Manager::Manager  [0x08130902-0x8130907] ===
 8130902:	55                   	push   %ebp
 8130903:	89 e5                	mov    %esp,%ebp
 8130905:	5d                   	pop    %ebp
 8130906:	c3                   	ret
 8130907:	90                   	nop

```

```c
// advancealtar::Manager::Manager @ 0x8130902

/* advancealtar::Manager::Manager() */

void __thiscall advancealtar::Manager::Manager(Manager *this)

{
  return;
}

```

---

## dieCharac

```asm
// === 08130ab2 advancealtar::Manager::dieCharac  [0x08130ab2-0x8130bb7] ===
 8130ab2:	55                   	push   %ebp
 8130ab3:	89 e5                	mov    %esp,%ebp
 8130ab5:	83 ec 28             	sub    $0x28,%esp
 8130ab8:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8130abc:	0f 84 f0 00 00 00    	je     8130bb2 <_ZN12advancealtar7Manager9dieCharacEP5CUser+0x100>
 8130ac2:	8b 45 08             	mov    0x8(%ebp),%eax
 8130ac5:	89 04 24             	mov    %eax,(%esp)
 8130ac8:	e8 95 47 52 00       	call   8655262 <_ZN5CUser15getAdvanceAltarEv>
 8130acd:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8130ad0:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8130ad4:	0f 84 dc 00 00 00    	je     8130bb6 <_ZN12advancealtar7Manager9dieCharacEP5CUser+0x104>
 8130ada:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8130add:	89 04 24             	mov    %eax,(%esp)
 8130ae0:	e8 c9 3d 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130ae5:	89 04 24             	mov    %eax,(%esp)
 8130ae8:	e8 83 ec ff ff       	call   812f770 <_ZNK12advancealtar9ProcStage13isRewardStateEv>
 8130aed:	83 f0 01             	xor    $0x1,%eax
 8130af0:	84 c0                	test   %al,%al
 8130af2:	0f 85 bd 00 00 00    	jne    8130bb5 <_ZN12advancealtar7Manager9dieCharacEP5CUser+0x103>
 8130af8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8130afb:	89 04 24             	mov    %eax,(%esp)
 8130afe:	e8 ab 3d 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130b03:	89 04 24             	mov    %eax,(%esp)
 8130b06:	e8 f9 df ff ff       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 8130b0b:	83 f8 01             	cmp    $0x1,%eax
 8130b0e:	0f 94 c0             	sete   %al
 8130b11:	84 c0                	test   %al,%al
 8130b13:	74 4b                	je     8130b60 <_ZN12advancealtar7Manager9dieCharacEP5CUser+0xae>
 8130b15:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8130b18:	89 04 24             	mov    %eax,(%esp)
 8130b1b:	e8 8e 3d 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130b20:	89 04 24             	mov    %eax,(%esp)
 8130b23:	e8 ce d8 ff ff       	call   812e3f6 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv>
 8130b28:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8130b2b:	89 04 24             	mov    %eax,(%esp)
 8130b2e:	e8 7b 3d 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130b33:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8130b3a:	00 
 8130b3b:	89 04 24             	mov    %eax,(%esp)
 8130b3e:	e8 01 3d 00 00       	call   8134844 <_ZN12advancealtar9ProcStage8setStateENS0_5State1TE>
 8130b43:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8130b46:	89 04 24             	mov    %eax,(%esp)
 8130b49:	e8 6c 3d 00 00       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 8130b4e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8130b55:	00 
 8130b56:	89 04 24             	mov    %eax,(%esp)
 8130b59:	e8 3e ed ff ff       	call   812f89c <_ZN12advancealtar18Timer_StageControl22RegistTimerClearRewardEiNS_12StageEndType1TE>
 8130b5e:	eb 56                	jmp    8130bb6 <_ZN12advancealtar7Manager9dieCharacEP5CUser+0x104>
 8130b60:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8130b63:	89 04 24             	mov    %eax,(%esp)
 8130b66:	e8 43 3d 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130b6b:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8130b72:	00 
 8130b73:	89 04 24             	mov    %eax,(%esp)
 8130b76:	e8 c9 3c 00 00       	call   8134844 <_ZN12advancealtar9ProcStage8setStateENS0_5State1TE>
 8130b7b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8130b7e:	89 04 24             	mov    %eax,(%esp)
 8130b81:	e8 34 3d 00 00       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 8130b86:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8130b8d:	00 
 8130b8e:	89 04 24             	mov    %eax,(%esp)
 8130b91:	e8 56 ed ff ff       	call   812f8ec <_ZN12advancealtar18Timer_StageControl15RegistTimerEPLPEiNS_12StageEndType1TE>
 8130b96:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8130b9d:	00 
 8130b9e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8130ba1:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130ba5:	8b 45 08             	mov    0x8(%ebp),%eax
 8130ba8:	89 04 24             	mov    %eax,(%esp)
 8130bab:	e8 24 30 00 00       	call   8133bd4 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb>
 8130bb0:	eb 04                	jmp    8130bb6 <_ZN12advancealtar7Manager9dieCharacEP5CUser+0x104>
 8130bb2:	90                   	nop
 8130bb3:	eb 01                	jmp    8130bb6 <_ZN12advancealtar7Manager9dieCharacEP5CUser+0x104>
 8130bb5:	90                   	nop
 8130bb6:	c9                   	leave
 8130bb7:	c3                   	ret

```

```c
// advancealtar::Manager::dieCharac @ 0x8130ab2

/* advancealtar::Manager::dieCharac(CUser*) */

void advancealtar::Manager::dieCharac(CUser *param_1)

{
  char cVar1;
  StageControl *this;
  ProcStage *pPVar2;
  int iVar3;
  undefined4 uVar4;
  
  if ((param_1 != (CUser *)0x0) &&
     (this = (StageControl *)CUser::getAdvanceAltar(param_1), this != (StageControl *)0x0)) {
    pPVar2 = (ProcStage *)StageControl::getProcStage(this);
    cVar1 = ProcStage::isRewardState(pPVar2);
    if (cVar1 == '\x01') {
      pPVar2 = (ProcStage *)StageControl::getProcStage(this);
      iVar3 = ProcStage::getStageType(pPVar2);
      if (iVar3 == 1) {
        pPVar2 = (ProcStage *)StageControl::getProcStage(this);
        ProcStage::clearStageAndReward(pPVar2);
        pPVar2 = (ProcStage *)StageControl::getProcStage(this);
        ProcStage::setState(pPVar2,5);
        uVar4 = StageControl::getIndex(this);
        Timer_StageControl::RegistTimerClearReward(uVar4,1);
      }
      else {
        pPVar2 = (ProcStage *)StageControl::getProcStage(this);
        ProcStage::setState(pPVar2,6);
        uVar4 = StageControl::getIndex(this);
        Timer_StageControl::RegistTimerEPLP(uVar4,1);
        HistoryLog::dungeonClearInfo(param_1,this,false);
      }
    }
  }
  return;
}

```

---

## dieMob

```asm
// === 08130bb8 advancealtar::Manager::dieMob  [0x08130bb8-0x8130eb1] ===
 8130bb8:	55                   	push   %ebp
 8130bb9:	89 e5                	mov    %esp,%ebp
 8130bbb:	56                   	push   %esi
 8130bbc:	53                   	push   %ebx
 8130bbd:	83 ec 40             	sub    $0x40,%esp
 8130bc0:	8b 55 0c             	mov    0xc(%ebp),%edx
 8130bc3:	8b 45 10             	mov    0x10(%ebp),%eax
 8130bc6:	66 89 55 d4          	mov    %dx,-0x2c(%ebp)
 8130bca:	66 89 45 d0          	mov    %ax,-0x30(%ebp)
 8130bce:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8130bd2:	75 0a                	jne    8130bde <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x26>
 8130bd4:	b8 00 00 00 00       	mov    $0x0,%eax
 8130bd9:	e9 cc 02 00 00       	jmp    8130eaa <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x2f2>
 8130bde:	8b 45 08             	mov    0x8(%ebp),%eax
 8130be1:	89 04 24             	mov    %eax,(%esp)
 8130be4:	e8 79 46 52 00       	call   8655262 <_ZN5CUser15getAdvanceAltarEv>
 8130be9:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8130bec:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8130bf0:	0f 84 af 02 00 00    	je     8130ea5 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x2ed>
 8130bf6:	0f b7 75 d0          	movzwl -0x30(%ebp),%esi
 8130bfa:	0f b7 5d d4          	movzwl -0x2c(%ebp),%ebx
 8130bfe:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130c01:	89 04 24             	mov    %eax,(%esp)
 8130c04:	e8 a5 3c 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130c09:	8b 55 14             	mov    0x14(%ebp),%edx
 8130c0c:	89 54 24 0c          	mov    %edx,0xc(%esp)
 8130c10:	89 74 24 08          	mov    %esi,0x8(%esp)
 8130c14:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8130c18:	89 04 24             	mov    %eax,(%esp)
 8130c1b:	e8 be d5 ff ff       	call   812e1de <_ZN12advancealtar9ProcStage6dieMobEttRK15MSG_MONSTER_DIE>
 8130c20:	88 45 f6             	mov    %al,-0xa(%ebp)
 8130c23:	80 7d f6 00          	cmpb   $0x0,-0xa(%ebp)
 8130c27:	0f 84 e5 00 00 00    	je     8130d12 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x15a>
 8130c2d:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130c30:	89 04 24             	mov    %eax,(%esp)
 8130c33:	e8 14 d1 45 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8130c38:	c7 44 24 08 26 00 00 	movl   $0x26,0x8(%esp)
 8130c3f:	00 
 8130c40:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8130c47:	00 
 8130c48:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130c4b:	89 04 24             	mov    %eax,(%esp)
 8130c4e:	e8 a9 ac f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8130c53:	0f b7 45 d4          	movzwl -0x2c(%ebp),%eax
 8130c57:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130c5b:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130c5e:	89 04 24             	mov    %eax,(%esp)
 8130c61:	e8 3e 92 fa ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8130c66:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8130c6d:	00 
 8130c6e:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130c71:	89 04 24             	mov    %eax,(%esp)
 8130c74:	e8 a7 ac f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8130c79:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8130c80:	00 
 8130c81:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130c84:	89 04 24             	mov    %eax,(%esp)
 8130c87:	e8 94 ac f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8130c8c:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8130c93:	00 
 8130c94:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130c97:	89 04 24             	mov    %eax,(%esp)
 8130c9a:	e8 81 ac f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8130c9f:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8130ca6:	00 
 8130ca7:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130caa:	89 04 24             	mov    %eax,(%esp)
 8130cad:	e8 6e ac f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8130cb2:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8130cb9:	00 
 8130cba:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130cbd:	89 04 24             	mov    %eax,(%esp)
 8130cc0:	e8 5b ac f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8130cc5:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8130ccc:	00 
 8130ccd:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130cd0:	89 04 24             	mov    %eax,(%esp)
 8130cd3:	e8 80 ac f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8130cd8:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130cdb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130cdf:	8b 45 08             	mov    0x8(%ebp),%eax
 8130ce2:	89 04 24             	mov    %eax,(%esp)
 8130ce5:	e8 d0 78 51 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8130cea:	eb 1b                	jmp    8130d07 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x14f>
 8130cec:	89 d3                	mov    %edx,%ebx
 8130cee:	89 c6                	mov    %eax,%esi
 8130cf0:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130cf3:	89 04 24             	mov    %eax,(%esp)
 8130cf6:	e8 85 d1 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8130cfb:	89 f0                	mov    %esi,%eax
 8130cfd:	89 da                	mov    %ebx,%edx
 8130cff:	89 04 24             	mov    %eax,(%esp)
 8130d02:	e8 49 2a 9b 00       	call   8ae3750 <_Unwind_Resume>
 8130d07:	8d 45 e0             	lea    -0x20(%ebp),%eax
 8130d0a:	89 04 24             	mov    %eax,(%esp)
 8130d0d:	e8 6e d1 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8130d12:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130d15:	89 04 24             	mov    %eax,(%esp)
 8130d18:	e8 91 3b 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130d1d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8130d20:	89 54 24 04          	mov    %edx,0x4(%esp)
 8130d24:	89 04 24             	mov    %eax,(%esp)
 8130d27:	e8 9a d5 ff ff       	call   812e2c6 <_ZNK12advancealtar9ProcStage10isEndStageERNS_12StageEndType1TE>
 8130d2c:	88 45 f7             	mov    %al,-0x9(%ebp)
 8130d2f:	80 7d f7 00          	cmpb   $0x0,-0x9(%ebp)
 8130d33:	74 1e                	je     8130d53 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x19b>
 8130d35:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130d38:	89 04 24             	mov    %eax,(%esp)
 8130d3b:	e8 6e 3b 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130d40:	89 04 24             	mov    %eax,(%esp)
 8130d43:	e8 28 ea ff ff       	call   812f770 <_ZNK12advancealtar9ProcStage13isRewardStateEv>
 8130d48:	84 c0                	test   %al,%al
 8130d4a:	74 07                	je     8130d53 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x19b>
 8130d4c:	b8 01 00 00 00       	mov    $0x1,%eax
 8130d51:	eb 05                	jmp    8130d58 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x1a0>
 8130d53:	b8 00 00 00 00       	mov    $0x0,%eax
 8130d58:	84 c0                	test   %al,%al
 8130d5a:	0f 84 45 01 00 00    	je     8130ea5 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x2ed>
 8130d60:	8b 45 ec             	mov    -0x14(%ebp),%eax
 8130d63:	85 c0                	test   %eax,%eax
 8130d65:	0f 84 84 00 00 00    	je     8130def <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x237>
 8130d6b:	83 f8 03             	cmp    $0x3,%eax
 8130d6e:	0f 85 31 01 00 00    	jne    8130ea5 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x2ed>
 8130d74:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130d77:	89 04 24             	mov    %eax,(%esp)
 8130d7a:	e8 2f 3b 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130d7f:	89 04 24             	mov    %eax,(%esp)
 8130d82:	e8 79 dc ff ff       	call   812ea00 <_ZN12advancealtar9ProcStage21endProcAllKillMonsterEv>
 8130d87:	84 c0                	test   %al,%al
 8130d89:	74 54                	je     8130ddf <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x227>
 8130d8b:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130d8e:	89 04 24             	mov    %eax,(%esp)
 8130d91:	e8 18 3b 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130d96:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8130d9d:	00 
 8130d9e:	89 04 24             	mov    %eax,(%esp)
 8130da1:	e8 9e 3a 00 00       	call   8134844 <_ZN12advancealtar9ProcStage8setStateENS0_5State1TE>
 8130da6:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8130da9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130dac:	89 04 24             	mov    %eax,(%esp)
 8130daf:	e8 06 3b 00 00       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 8130db4:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8130db8:	89 04 24             	mov    %eax,(%esp)
 8130dbb:	e8 dc ea ff ff       	call   812f89c <_ZN12advancealtar18Timer_StageControl22RegistTimerClearRewardEiNS_12StageEndType1TE>
 8130dc0:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8130dc7:	00 
 8130dc8:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130dcb:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130dcf:	8b 45 08             	mov    0x8(%ebp),%eax
 8130dd2:	89 04 24             	mov    %eax,(%esp)
 8130dd5:	e8 fa 2d 00 00       	call   8133bd4 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb>
 8130dda:	e9 c6 00 00 00       	jmp    8130ea5 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x2ed>
 8130ddf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130de2:	89 04 24             	mov    %eax,(%esp)
 8130de5:	e8 f6 f3 ff ff       	call   81301e0 <_ZN12advancealtar12StageControl11sendMapInfoEv>
 8130dea:	e9 b6 00 00 00       	jmp    8130ea5 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x2ed>
 8130def:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130df2:	89 04 24             	mov    %eax,(%esp)
 8130df5:	e8 b4 3a 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130dfa:	89 04 24             	mov    %eax,(%esp)
 8130dfd:	e8 02 dd ff ff       	call   812eb04 <_ZNK12advancealtar9ProcStage12getStageTypeEv>
 8130e02:	83 f8 01             	cmp    $0x1,%eax
 8130e05:	0f 94 c0             	sete   %al
 8130e08:	84 c0                	test   %al,%al
 8130e0a:	74 4a                	je     8130e56 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x29e>
 8130e0c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130e0f:	89 04 24             	mov    %eax,(%esp)
 8130e12:	e8 97 3a 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130e17:	c7 44 24 04 05 00 00 	movl   $0x5,0x4(%esp)
 8130e1e:	00 
 8130e1f:	89 04 24             	mov    %eax,(%esp)
 8130e22:	e8 1d 3a 00 00       	call   8134844 <_ZN12advancealtar9ProcStage8setStateENS0_5State1TE>
 8130e27:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130e2a:	89 04 24             	mov    %eax,(%esp)
 8130e2d:	e8 7c 3a 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130e32:	89 04 24             	mov    %eax,(%esp)
 8130e35:	e8 bc d5 ff ff       	call   812e3f6 <_ZN12advancealtar9ProcStage19clearStageAndRewardEv>
 8130e3a:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8130e3d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130e40:	89 04 24             	mov    %eax,(%esp)
 8130e43:	e8 72 3a 00 00       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 8130e48:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8130e4c:	89 04 24             	mov    %eax,(%esp)
 8130e4f:	e8 48 ea ff ff       	call   812f89c <_ZN12advancealtar18Timer_StageControl22RegistTimerClearRewardEiNS_12StageEndType1TE>
 8130e54:	eb 4f                	jmp    8130ea5 <_ZN12advancealtar7Manager6dieMobEP5CUserttRK15MSG_MONSTER_DIE+0x2ed>
 8130e56:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130e59:	89 04 24             	mov    %eax,(%esp)
 8130e5c:	e8 4d 3a 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130e61:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8130e68:	00 
 8130e69:	89 04 24             	mov    %eax,(%esp)
 8130e6c:	e8 d3 39 00 00       	call   8134844 <_ZN12advancealtar9ProcStage8setStateENS0_5State1TE>
 8130e71:	8b 5d ec             	mov    -0x14(%ebp),%ebx
 8130e74:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130e77:	89 04 24             	mov    %eax,(%esp)
 8130e7a:	e8 3b 3a 00 00       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 8130e7f:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 8130e83:	89 04 24             	mov    %eax,(%esp)
 8130e86:	e8 61 ea ff ff       	call   812f8ec <_ZN12advancealtar18Timer_StageControl15RegistTimerEPLPEiNS_12StageEndType1TE>
 8130e8b:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8130e92:	00 
 8130e93:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8130e96:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130e9a:	8b 45 08             	mov    0x8(%ebp),%eax
 8130e9d:	89 04 24             	mov    %eax,(%esp)
 8130ea0:	e8 2f 2d 00 00       	call   8133bd4 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb>
 8130ea5:	b8 01 00 00 00       	mov    $0x1,%eax
 8130eaa:	83 c4 40             	add    $0x40,%esp
 8130ead:	5b                   	pop    %ebx
 8130eae:	5e                   	pop    %esi
 8130eaf:	5d                   	pop    %ebp
 8130eb0:	c3                   	ret
 8130eb1:	90                   	nop

```

```c
// advancealtar::Manager::dieMob @ 0x8130bb8

/* advancealtar::Manager::dieMob(CUser*, unsigned short, unsigned short, MSG_MONSTER_DIE const&) */

undefined4
advancealtar::Manager::dieMob(CUser *param_1,ushort param_2,ushort param_3,MSG_MONSTER_DIE *param_4)

{
  bool bVar1;
  char cVar2;
  ProcStage *pPVar3;
  undefined4 uVar4;
  int iVar5;
  PacketGuard local_24 [12];
  int local_18;
  StageControl *local_14;
  char local_e;
  char local_d;
  
  if (param_1 == (CUser *)0x0) {
    return 0;
  }
  local_14 = (StageControl *)CUser::getAdvanceAltar(param_1);
  if (local_14 == (StageControl *)0x0) {
    return 1;
  }
  pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
  local_e = ProcStage::dieMob(pPVar3,param_2,param_3,param_4);
  if (local_e != '\0') {
    PacketGuard::PacketGuard(local_24);
                    /* try { // try from 08130c4e to 08130ce9 has its CatchHandler @ 08130cec */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_24,0,0x26);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_24,(uint)param_2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_24,0);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_24,true);
    CUser::Send(param_1,local_24);
    PacketGuard::~PacketGuard(local_24);
  }
  pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
  local_d = ProcStage::isEndStage(pPVar3,(T *)&local_18);
  if (local_d != '\0') {
    pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
    cVar2 = ProcStage::isRewardState(pPVar3);
    if (cVar2 != '\0') {
      bVar1 = true;
      goto LAB_08130d58;
    }
  }
  bVar1 = false;
LAB_08130d58:
  if (bVar1) {
    if (local_18 == 0) {
      pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
      iVar5 = ProcStage::getStageType(pPVar3);
      if (iVar5 == 1) {
        pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
        ProcStage::setState(pPVar3,5);
        pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
        ProcStage::clearStageAndReward(pPVar3);
        uVar4 = StageControl::getIndex(local_14);
        Timer_StageControl::RegistTimerClearReward(uVar4,local_18);
      }
      else {
        pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
        ProcStage::setState(pPVar3,6);
        uVar4 = StageControl::getIndex(local_14);
        Timer_StageControl::RegistTimerEPLP(uVar4,local_18);
        HistoryLog::dungeonClearInfo(param_1,local_14,false);
      }
    }
    else if (local_18 == 3) {
      pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
      cVar2 = ProcStage::endProcAllKillMonster(pPVar3);
      if (cVar2 == '\0') {
        StageControl::sendMapInfo(local_14);
      }
      else {
        pPVar3 = (ProcStage *)StageControl::getProcStage(local_14);
        ProcStage::setState(pPVar3,5);
        uVar4 = StageControl::getIndex(local_14);
        Timer_StageControl::RegistTimerClearReward(uVar4,local_18);
        HistoryLog::dungeonClearInfo(param_1,local_14,true);
      }
    }
  }
  return 1;
}

```

---

## eplp

```asm
// === 0813101e advancealtar::Manager::eplp  [0x0813101e-0x813105b] ===
 813101e:	55                   	push   %ebp
 813101f:	89 e5                	mov    %esp,%ebp
 8131021:	83 ec 28             	sub    $0x28,%esp
 8131024:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8131028:	74 2c                	je     8131056 <_ZN12advancealtar7Manager4eplpEP5CUserNS_8EplpType1TE+0x38>
 813102a:	8b 45 08             	mov    0x8(%ebp),%eax
 813102d:	89 04 24             	mov    %eax,(%esp)
 8131030:	e8 2d 42 52 00       	call   8655262 <_ZN5CUser15getAdvanceAltarEv>
 8131035:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8131038:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 813103c:	74 1b                	je     8131059 <_ZN12advancealtar7Manager4eplpEP5CUserNS_8EplpType1TE+0x3b>
 813103e:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131041:	83 c0 00             	add    $0x0,%eax
 8131044:	83 f8 02             	cmp    $0x2,%eax
 8131047:	77 11                	ja     813105a <_ZN12advancealtar7Manager4eplpEP5CUserNS_8EplpType1TE+0x3c>
 8131049:	8b 45 f4             	mov    -0xc(%ebp),%eax
 813104c:	89 04 24             	mov    %eax,(%esp)
 813104f:	e8 fa eb ff ff       	call   812fc4e <_ZN12advancealtar12StageControl9leaveUserEv>
 8131054:	eb 04                	jmp    813105a <_ZN12advancealtar7Manager4eplpEP5CUserNS_8EplpType1TE+0x3c>
 8131056:	90                   	nop
 8131057:	eb 01                	jmp    813105a <_ZN12advancealtar7Manager4eplpEP5CUserNS_8EplpType1TE+0x3c>
 8131059:	90                   	nop
 813105a:	c9                   	leave
 813105b:	c3                   	ret

```

```c
// advancealtar::Manager::eplp @ 0x813101e

/* advancealtar::Manager::eplp(CUser*, advancealtar::EplpType::T) */

void advancealtar::Manager::eplp(CUser *param_1,uint param_2)

{
  StageControl *this;
  
  if (((param_1 != (CUser *)0x0) &&
      (this = (StageControl *)CUser::getAdvanceAltar(param_1), this != (StageControl *)0x0)) &&
     (param_2 < 3)) {
    StageControl::leaveUser(this);
  }
  return;
}

```

---

## finishLoad

```asm
// === 08130eb2 advancealtar::Manager::finishLoad  [0x08130eb2-0x8130fa7] ===
 8130eb2:	55                   	push   %ebp
 8130eb3:	89 e5                	mov    %esp,%ebp
 8130eb5:	56                   	push   %esi
 8130eb6:	53                   	push   %ebx
 8130eb7:	83 ec 20             	sub    $0x20,%esp
 8130eba:	8b 45 08             	mov    0x8(%ebp),%eax
 8130ebd:	89 04 24             	mov    %eax,(%esp)
 8130ec0:	e8 9d 43 52 00       	call   8655262 <_ZN5CUser15getAdvanceAltarEv>
 8130ec5:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8130ec8:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8130ecc:	0f 84 c7 00 00 00    	je     8130f99 <_ZN12advancealtar7Manager10finishLoadEP5CUser+0xe7>
 8130ed2:	8b 45 08             	mov    0x8(%ebp),%eax
 8130ed5:	05 60 df 08 00       	add    $0x8df60,%eax
 8130eda:	89 04 24             	mov    %eax,(%esp)
 8130edd:	e8 0a 04 00 00       	call   81312ec <_ZNK12advancealtar25CharacAdvanceAltarManager17isAvailableTciketEv>
 8130ee2:	83 f0 01             	xor    $0x1,%eax
 8130ee5:	84 c0                	test   %al,%al
 8130ee7:	74 0a                	je     8130ef3 <_ZN12advancealtar7Manager10finishLoadEP5CUser+0x41>
 8130ee9:	bb 01 00 00 00       	mov    $0x1,%ebx
 8130eee:	e9 ab 00 00 00       	jmp    8130f9e <_ZN12advancealtar7Manager10finishLoadEP5CUser+0xec>
 8130ef3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8130ef6:	89 04 24             	mov    %eax,(%esp)
 8130ef9:	e8 b0 39 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130efe:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8130f05:	00 
 8130f06:	89 04 24             	mov    %eax,(%esp)
 8130f09:	e8 36 39 00 00       	call   8134844 <_ZN12advancealtar9ProcStage8setStateENS0_5State1TE>
 8130f0e:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8130f11:	89 04 24             	mov    %eax,(%esp)
 8130f14:	e8 33 ce 45 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8130f19:	c7 44 24 08 1e 00 00 	movl   $0x1e,0x8(%esp)
 8130f20:	00 
 8130f21:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8130f28:	00 
 8130f29:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8130f2c:	89 04 24             	mov    %eax,(%esp)
 8130f2f:	e8 c8 a9 f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8130f34:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8130f3b:	00 
 8130f3c:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8130f3f:	89 04 24             	mov    %eax,(%esp)
 8130f42:	e8 f5 a9 f9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8130f47:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8130f4e:	00 
 8130f4f:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8130f52:	89 04 24             	mov    %eax,(%esp)
 8130f55:	e8 fe a9 f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8130f5a:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8130f5d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130f61:	8b 45 08             	mov    0x8(%ebp),%eax
 8130f64:	89 04 24             	mov    %eax,(%esp)
 8130f67:	e8 4e 76 51 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8130f6c:	bb 01 00 00 00       	mov    $0x1,%ebx
 8130f71:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8130f74:	89 04 24             	mov    %eax,(%esp)
 8130f77:	e8 04 cf 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8130f7c:	eb 20                	jmp    8130f9e <_ZN12advancealtar7Manager10finishLoadEP5CUser+0xec>
 8130f7e:	89 d3                	mov    %edx,%ebx
 8130f80:	89 c6                	mov    %eax,%esi
 8130f82:	8d 45 e8             	lea    -0x18(%ebp),%eax
 8130f85:	89 04 24             	mov    %eax,(%esp)
 8130f88:	e8 f3 ce 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8130f8d:	89 f0                	mov    %esi,%eax
 8130f8f:	89 da                	mov    %ebx,%edx
 8130f91:	89 04 24             	mov    %eax,(%esp)
 8130f94:	e8 b7 27 9b 00       	call   8ae3750 <_Unwind_Resume>
 8130f99:	bb 00 00 00 00       	mov    $0x0,%ebx
 8130f9e:	89 d8                	mov    %ebx,%eax
 8130fa0:	83 c4 20             	add    $0x20,%esp
 8130fa3:	5b                   	pop    %ebx
 8130fa4:	5e                   	pop    %esi
 8130fa5:	5d                   	pop    %ebp
 8130fa6:	c3                   	ret
 8130fa7:	90                   	nop

```

```c
// advancealtar::Manager::finishLoad @ 0x8130eb2

/* advancealtar::Manager::finishLoad(CUser*) */

undefined4 advancealtar::Manager::finishLoad(CUser *param_1)

{
  char cVar1;
  ProcStage *pPVar2;
  undefined4 uVar3;
  PacketGuard local_1c [12];
  StageControl *local_10;
  
  local_10 = (StageControl *)CUser::getAdvanceAltar(param_1);
  if (local_10 == (StageControl *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CharacAdvanceAltarManager::isAvailableTciket
                      ((CharacAdvanceAltarManager *)(param_1 + 0x8df60));
    if (cVar1 == '\x01') {
      pPVar2 = (ProcStage *)StageControl::getProcStage(local_10);
      ProcStage::setState(pPVar2,1);
      PacketGuard::PacketGuard(local_1c);
                    /* try { // try from 08130f2f to 08130f6b has its CatchHandler @ 08130f7e */
      InterfacePacketBuf::put_header((InterfacePacketBuf *)local_1c,0,0x1e);
      InterfacePacketBuf::put_int((InterfacePacketBuf *)local_1c,0);
      InterfacePacketBuf::finalize((InterfacePacketBuf *)local_1c,true);
      CUser::Send(param_1,local_1c);
      uVar3 = 1;
      PacketGuard::~PacketGuard(local_1c);
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}

```

---

## giveUpGame

```asm
// === 08130fa8 advancealtar::Manager::giveUpGame  [0x08130fa8-0x813101d] ===
 8130fa8:	55                   	push   %ebp
 8130fa9:	89 e5                	mov    %esp,%ebp
 8130fab:	83 ec 28             	sub    $0x28,%esp
 8130fae:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8130fb2:	74 66                	je     813101a <_ZN12advancealtar7Manager10giveUpGameEP5CUser+0x72>
 8130fb4:	8b 45 08             	mov    0x8(%ebp),%eax
 8130fb7:	89 04 24             	mov    %eax,(%esp)
 8130fba:	e8 a3 42 52 00       	call   8655262 <_ZN5CUser15getAdvanceAltarEv>
 8130fbf:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8130fc2:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8130fc6:	74 53                	je     813101b <_ZN12advancealtar7Manager10giveUpGameEP5CUser+0x73>
 8130fc8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8130fcb:	89 04 24             	mov    %eax,(%esp)
 8130fce:	e8 db 38 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8130fd3:	c7 44 24 04 06 00 00 	movl   $0x6,0x4(%esp)
 8130fda:	00 
 8130fdb:	89 04 24             	mov    %eax,(%esp)
 8130fde:	e8 61 38 00 00       	call   8134844 <_ZN12advancealtar9ProcStage8setStateENS0_5State1TE>
 8130fe3:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8130fe6:	89 04 24             	mov    %eax,(%esp)
 8130fe9:	e8 cc 38 00 00       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 8130fee:	c7 44 24 04 02 00 00 	movl   $0x2,0x4(%esp)
 8130ff5:	00 
 8130ff6:	89 04 24             	mov    %eax,(%esp)
 8130ff9:	e8 ee e8 ff ff       	call   812f8ec <_ZN12advancealtar18Timer_StageControl15RegistTimerEPLPEiNS_12StageEndType1TE>
 8130ffe:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8131005:	00 
 8131006:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131009:	89 44 24 04          	mov    %eax,0x4(%esp)
 813100d:	8b 45 08             	mov    0x8(%ebp),%eax
 8131010:	89 04 24             	mov    %eax,(%esp)
 8131013:	e8 bc 2b 00 00       	call   8133bd4 <_ZN12advancealtar10HistoryLog16dungeonClearInfoER5CUserRNS_12StageControlEb>
 8131018:	eb 01                	jmp    813101b <_ZN12advancealtar7Manager10giveUpGameEP5CUser+0x73>
 813101a:	90                   	nop
 813101b:	c9                   	leave
 813101c:	c3                   	ret
 813101d:	90                   	nop

```

```c
// advancealtar::Manager::giveUpGame @ 0x8130fa8

/* advancealtar::Manager::giveUpGame(CUser*) */

void advancealtar::Manager::giveUpGame(CUser *param_1)

{
  StageControl *this;
  ProcStage *pPVar1;
  undefined4 uVar2;
  
  if (param_1 != (CUser *)0x0) {
    this = (StageControl *)CUser::getAdvanceAltar(param_1);
    if (this != (StageControl *)0x0) {
      pPVar1 = (ProcStage *)StageControl::getProcStage(this);
      ProcStage::setState(pPVar1,6);
      uVar2 = StageControl::getIndex(this);
      Timer_StageControl::RegistTimerEPLP(uVar2,2);
      HistoryLog::dungeonClearInfo(param_1,this,false);
    }
  }
  return;
}

```

---

## leaveUser

```asm
// === 081310b2 advancealtar::Manager::leaveUser  [0x081310b2-0x813119d] ===
 81310b2:	55                   	push   %ebp
 81310b3:	89 e5                	mov    %esp,%ebp
 81310b5:	56                   	push   %esi
 81310b6:	53                   	push   %ebx
 81310b7:	83 ec 20             	sub    $0x20,%esp
 81310ba:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 81310be:	0f 84 d2 00 00 00    	je     8131196 <_ZN12advancealtar7Manager9leaveUserEP5CUser+0xe4>
 81310c4:	e8 de 92 fa ff       	call   80da3a7 <_Z11G_GameWorldv>
 81310c9:	8b 55 08             	mov    0x8(%ebp),%edx
 81310cc:	89 54 24 04          	mov    %edx,0x4(%esp)
 81310d0:	89 04 24             	mov    %eax,(%esp)
 81310d3:	e8 3e 59 59 00       	call   86c6a16 <_ZN9GameWorld16out_from_dungeonEP5CUser>
 81310d8:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81310db:	89 04 24             	mov    %eax,(%esp)
 81310de:	e8 69 cc 45 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 81310e3:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 81310ea:	00 
 81310eb:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 81310f2:	00 
 81310f3:	8d 45 ec             	lea    -0x14(%ebp),%eax
 81310f6:	89 04 24             	mov    %eax,(%esp)
 81310f9:	e8 fe a7 f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 81310fe:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8131105:	00 
 8131106:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8131109:	89 04 24             	mov    %eax,(%esp)
 813110c:	e8 0f a8 f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8131111:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8131118:	00 
 8131119:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813111c:	89 04 24             	mov    %eax,(%esp)
 813111f:	e8 80 8d fa ff       	call   80d9ea4 <_ZN18InterfacePacketBuf9put_shortEi>
 8131124:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8131127:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 813112e:	00 
 813112f:	89 44 24 04          	mov    %eax,0x4(%esp)
 8131133:	8b 45 08             	mov    0x8(%ebp),%eax
 8131136:	89 04 24             	mov    %eax,(%esp)
 8131139:	e8 10 93 52 00       	call   865a44e <_ZN5CUser15make_basic_infoEPcc>
 813113e:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8131145:	00 
 8131146:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8131149:	89 04 24             	mov    %eax,(%esp)
 813114c:	e8 07 a8 f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8131151:	e8 51 92 fa ff       	call   80da3a7 <_Z11G_GameWorldv>
 8131156:	8b 55 08             	mov    0x8(%ebp),%edx
 8131159:	89 54 24 08          	mov    %edx,0x8(%esp)
 813115d:	8d 55 ec             	lea    -0x14(%ebp),%edx
 8131160:	89 54 24 04          	mov    %edx,0x4(%esp)
 8131164:	89 04 24             	mov    %eax,(%esp)
 8131167:	e8 f0 37 00 00       	call   813495c <_ZN9GameWorld8send_allER11PacketGuardP5CUser>
 813116c:	eb 1b                	jmp    8131189 <_ZN12advancealtar7Manager9leaveUserEP5CUser+0xd7>
 813116e:	89 d3                	mov    %edx,%ebx
 8131170:	89 c6                	mov    %eax,%esi
 8131172:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8131175:	89 04 24             	mov    %eax,(%esp)
 8131178:	e8 03 cd 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 813117d:	89 f0                	mov    %esi,%eax
 813117f:	89 da                	mov    %ebx,%edx
 8131181:	89 04 24             	mov    %eax,(%esp)
 8131184:	e8 c7 25 9b 00       	call   8ae3750 <_Unwind_Resume>
 8131189:	8d 45 ec             	lea    -0x14(%ebp),%eax
 813118c:	89 04 24             	mov    %eax,(%esp)
 813118f:	e8 ec cc 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8131194:	eb 01                	jmp    8131197 <_ZN12advancealtar7Manager9leaveUserEP5CUser+0xe5>
 8131196:	90                   	nop
 8131197:	83 c4 20             	add    $0x20,%esp
 813119a:	5b                   	pop    %ebx
 813119b:	5e                   	pop    %esi
 813119c:	5d                   	pop    %ebp
 813119d:	c3                   	ret

```

```c
// advancealtar::Manager::leaveUser @ 0x81310b2

/* advancealtar::Manager::leaveUser(CUser*) */

void advancealtar::Manager::leaveUser(CUser *param_1)

{
  GameWorld *pGVar1;
  PacketGuard local_18 [12];
  
  if (param_1 != (CUser *)0x0) {
    pGVar1 = (GameWorld *)G_GameWorld();
    GameWorld::out_from_dungeon(pGVar1,param_1);
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 081310f9 to 0813116b has its CatchHandler @ 0813116e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,0,2);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_short((InterfacePacketBuf *)local_18,1);
    CUser::make_basic_info(param_1,(char *)local_18,'\0');
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    pGVar1 = (GameWorld *)G_GameWorld();
    GameWorld::send_all(pGVar1,local_18,param_1);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}

```

---

## pause

```asm
// === 0813105c advancealtar::Manager::pause  [0x0813105c-0x81310b1] ===
 813105c:	55                   	push   %ebp
 813105d:	89 e5                	mov    %esp,%ebp
 813105f:	53                   	push   %ebx
 8131060:	83 ec 34             	sub    $0x34,%esp
 8131063:	8b 45 0c             	mov    0xc(%ebp),%eax
 8131066:	88 45 e4             	mov    %al,-0x1c(%ebp)
 8131069:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 813106d:	75 07                	jne    8131076 <_ZN12advancealtar7Manager5pauseEP5CUserb+0x1a>
 813106f:	b8 00 00 00 00       	mov    $0x0,%eax
 8131074:	eb 36                	jmp    81310ac <_ZN12advancealtar7Manager5pauseEP5CUserb+0x50>
 8131076:	8b 45 08             	mov    0x8(%ebp),%eax
 8131079:	89 04 24             	mov    %eax,(%esp)
 813107c:	e8 e1 41 52 00       	call   8655262 <_ZN5CUser15getAdvanceAltarEv>
 8131081:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8131084:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8131088:	74 1d                	je     81310a7 <_ZN12advancealtar7Manager5pauseEP5CUserb+0x4b>
 813108a:	0f b6 5d e4          	movzbl -0x1c(%ebp),%ebx
 813108e:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8131091:	89 04 24             	mov    %eax,(%esp)
 8131094:	e8 15 38 00 00       	call   81348ae <_ZN12advancealtar12StageControl12getProcStageEv>
 8131099:	89 5c 24 04          	mov    %ebx,0x4(%esp)
 813109d:	89 04 24             	mov    %eax,(%esp)
 81310a0:	e8 01 da ff ff       	call   812eaa6 <_ZN12advancealtar9ProcStage5pauseEb>
 81310a5:	eb 05                	jmp    81310ac <_ZN12advancealtar7Manager5pauseEP5CUserb+0x50>
 81310a7:	b8 00 00 00 00       	mov    $0x0,%eax
 81310ac:	83 c4 34             	add    $0x34,%esp
 81310af:	5b                   	pop    %ebx
 81310b0:	5d                   	pop    %ebp
 81310b1:	c3                   	ret

```

```c
// advancealtar::Manager::pause @ 0x813105c

/* advancealtar::Manager::pause(CUser*, bool) */

undefined4 advancealtar::Manager::pause(CUser *param_1,bool param_2)

{
  undefined4 uVar1;
  StageControl *this;
  ProcStage *this_00;
  
  if (param_1 == (CUser *)0x0) {
    uVar1 = 0;
  }
  else {
    this = (StageControl *)CUser::getAdvanceAltar(param_1);
    if (this == (StageControl *)0x0) {
      uVar1 = 0;
    }
    else {
      this_00 = (ProcStage *)StageControl::getProcStage(this);
      uVar1 = ProcStage::pause(this_00,param_2);
    }
  }
  return uVar1;
}

```

---

## procErrorSelectStage

```asm
// === 081309f0 advancealtar::Manager::procErrorSelectStage  [0x081309f0-0x8130ab1] ===
 81309f0:	55                   	push   %ebp
 81309f1:	89 e5                	mov    %esp,%ebp
 81309f3:	56                   	push   %esi
 81309f4:	53                   	push   %ebx
 81309f5:	83 ec 20             	sub    $0x20,%esp
 81309f8:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 81309fc:	0f 84 a4 00 00 00    	je     8130aa6 <_ZN12advancealtar7Manager20procErrorSelectStageEP5CUser10ENUM_ERROR+0xb6>
 8130a02:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
 8130a06:	0f 84 9d 00 00 00    	je     8130aa9 <_ZN12advancealtar7Manager20procErrorSelectStageEP5CUser10ENUM_ERROR+0xb9>
 8130a0c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8130a0f:	89 04 24             	mov    %eax,(%esp)
 8130a12:	e8 35 d3 45 00       	call   858dd4c <_ZN11PacketGuardC1Ev>
 8130a17:	c7 44 24 08 10 00 00 	movl   $0x10,0x8(%esp)
 8130a1e:	00 
 8130a1f:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8130a26:	00 
 8130a27:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8130a2a:	89 04 24             	mov    %eax,(%esp)
 8130a2d:	e8 ca ae f9 ff       	call   80cb8fc <_ZN18InterfacePacketBuf10put_headerEii>
 8130a32:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 8130a39:	00 
 8130a3a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8130a3d:	89 04 24             	mov    %eax,(%esp)
 8130a40:	e8 db ae f9 ff       	call   80cb920 <_ZN18InterfacePacketBuf8put_byteEi>
 8130a45:	8b 45 0c             	mov    0xc(%ebp),%eax
 8130a48:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130a4c:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8130a4f:	89 04 24             	mov    %eax,(%esp)
 8130a52:	e8 e5 ae f9 ff       	call   80cb93c <_ZN18InterfacePacketBuf7put_intEi>
 8130a57:	c7 44 24 04 01 00 00 	movl   $0x1,0x4(%esp)
 8130a5e:	00 
 8130a5f:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8130a62:	89 04 24             	mov    %eax,(%esp)
 8130a65:	e8 ee ae f9 ff       	call   80cb958 <_ZN18InterfacePacketBuf8finalizeEb>
 8130a6a:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8130a6d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8130a71:	8b 45 08             	mov    0x8(%ebp),%eax
 8130a74:	89 04 24             	mov    %eax,(%esp)
 8130a77:	e8 3e 7b 51 00       	call   86485ba <_ZN5CUser4SendER11PacketGuard>
 8130a7c:	eb 1b                	jmp    8130a99 <_ZN12advancealtar7Manager20procErrorSelectStageEP5CUser10ENUM_ERROR+0xa9>
 8130a7e:	89 d3                	mov    %edx,%ebx
 8130a80:	89 c6                	mov    %eax,%esi
 8130a82:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8130a85:	89 04 24             	mov    %eax,(%esp)
 8130a88:	e8 f3 d3 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8130a8d:	89 f0                	mov    %esi,%eax
 8130a8f:	89 da                	mov    %ebx,%edx
 8130a91:	89 04 24             	mov    %eax,(%esp)
 8130a94:	e8 b7 2c 9b 00       	call   8ae3750 <_Unwind_Resume>
 8130a99:	8d 45 ec             	lea    -0x14(%ebp),%eax
 8130a9c:	89 04 24             	mov    %eax,(%esp)
 8130a9f:	e8 dc d3 45 00       	call   858de80 <_ZN11PacketGuardD1Ev>
 8130aa4:	eb 04                	jmp    8130aaa <_ZN12advancealtar7Manager20procErrorSelectStageEP5CUser10ENUM_ERROR+0xba>
 8130aa6:	90                   	nop
 8130aa7:	eb 01                	jmp    8130aaa <_ZN12advancealtar7Manager20procErrorSelectStageEP5CUser10ENUM_ERROR+0xba>
 8130aa9:	90                   	nop
 8130aaa:	83 c4 20             	add    $0x20,%esp
 8130aad:	5b                   	pop    %ebx
 8130aae:	5e                   	pop    %esi
 8130aaf:	5d                   	pop    %ebp
 8130ab0:	c3                   	ret
 8130ab1:	90                   	nop

```

```c
// advancealtar::Manager::procErrorSelectStage @ 0x81309f0

/* advancealtar::Manager::procErrorSelectStage(CUser*, ENUM_ERROR) */

void advancealtar::Manager::procErrorSelectStage(CUser *param_1,int param_2)

{
  PacketGuard local_18 [12];
  
  if ((param_1 != (CUser *)0x0) && (param_2 != 0)) {
    PacketGuard::PacketGuard(local_18);
                    /* try { // try from 08130a2d to 08130a7b has its CatchHandler @ 08130a7e */
    InterfacePacketBuf::put_header((InterfacePacketBuf *)local_18,1,0x10);
    InterfacePacketBuf::put_byte((InterfacePacketBuf *)local_18,0);
    InterfacePacketBuf::put_int((InterfacePacketBuf *)local_18,param_2);
    InterfacePacketBuf::finalize((InterfacePacketBuf *)local_18,true);
    CUser::Send(param_1,local_18);
    PacketGuard::~PacketGuard(local_18);
  }
  return;
}

```

---

## selectStage

```asm
// === 0813090e advancealtar::Manager::selectStage  [0x0813090e-0x81309ef] ===
 813090e:	55                   	push   %ebp
 813090f:	89 e5                	mov    %esp,%ebp
 8130911:	83 ec 38             	sub    $0x38,%esp
 8130914:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
 8130918:	75 0a                	jne    8130924 <_ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE+0x16>
 813091a:	b8 03 00 00 00       	mov    $0x3,%eax
 813091f:	e9 c9 00 00 00       	jmp    81309ed <_ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE+0xdf>
 8130924:	8b 45 10             	mov    0x10(%ebp),%eax
 8130927:	85 c0                	test   %eax,%eax
 8130929:	78 08                	js     8130933 <_ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE+0x25>
 813092b:	8b 45 10             	mov    0x10(%ebp),%eax
 813092e:	83 f8 02             	cmp    $0x2,%eax
 8130931:	7e 0a                	jle    813093d <_ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE+0x2f>
 8130933:	b8 08 00 00 00       	mov    $0x8,%eax
 8130938:	e9 b0 00 00 00       	jmp    81309ed <_ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE+0xdf>
 813093d:	c6 45 ef 00          	movb   $0x0,-0x11(%ebp)
 8130941:	e8 48 b8 f9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8130946:	89 04 24             	mov    %eax,(%esp)
 8130949:	e8 f6 51 16 00       	call   8295b44 <_ZN12CGameManager15getAdvanceAltarEv>
 813094e:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8130951:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8130955:	75 3d                	jne    8130994 <_ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE+0x86>
 8130957:	c7 44 24 0c 05 00 00 	movl   $0x5,0xc(%esp)
 813095e:	00 
 813095f:	c7 44 24 08 ab 06 00 	movl   $0x6ab,0x8(%esp)
 8130966:	00 
 8130967:	c7 44 24 04 20 d5 b6 	movl   $0x8b6d520,0x4(%esp)
 813096e:	08 
 813096f:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8130972:	89 04 24             	mov    %eax,(%esp)
 8130975:	e8 9e ed 41 00       	call   854f718 <_ZN8cMyTraceC1EPKcii>
 813097a:	c7 44 24 04 3c c7 b6 	movl   $0x8b6c73c,0x4(%esp)
 8130981:	08 
 8130982:	8d 45 dc             	lea    -0x24(%ebp),%eax
 8130985:	89 04 24             	mov    %eax,(%esp)
 8130988:	e8 fb ed 41 00       	call   854f788 <_ZN8cMyTraceclEPKcz>
 813098d:	b8 03 00 00 00       	mov    $0x3,%eax
 8130992:	eb 59                	jmp    81309ed <_ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE+0xdf>
 8130994:	8b 45 10             	mov    0x10(%ebp),%eax
 8130997:	89 44 24 0c          	mov    %eax,0xc(%esp)
 813099b:	8b 45 0c             	mov    0xc(%ebp),%eax
 813099e:	89 44 24 08          	mov    %eax,0x8(%esp)
 81309a2:	8b 45 08             	mov    0x8(%ebp),%eax
 81309a5:	89 44 24 04          	mov    %eax,0x4(%esp)
 81309a9:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81309ac:	89 04 24             	mov    %eax,(%esp)
 81309af:	e8 c6 f0 ff ff       	call   812fa7a <_ZN12advancealtar12StageControl11selectStageEP5CUseriNS_15StageDifficulty1TE>
 81309b4:	89 45 f4             	mov    %eax,-0xc(%ebp)
 81309b7:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 81309bb:	74 10                	je     81309cd <_ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE+0xbf>
 81309bd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81309c0:	89 04 24             	mov    %eax,(%esp)
 81309c3:	e8 06 f7 ff ff       	call   81300ce <_ZN12advancealtar12StageControl7destroyEv>
 81309c8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 81309cb:	eb 20                	jmp    81309ed <_ZN12advancealtar7Manager11selectStageEP5CUseriNS_15StageDifficulty1TE+0xdf>
 81309cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
 81309d0:	89 04 24             	mov    %eax,(%esp)
 81309d3:	e8 e2 3e 00 00       	call   81348ba <_ZNK12advancealtar12StageControl8getIndexEv>
 81309d8:	98                   	cwtl
 81309d9:	89 44 24 04          	mov    %eax,0x4(%esp)
 81309dd:	8b 45 08             	mov    0x8(%ebp),%eax
 81309e0:	89 04 24             	mov    %eax,(%esp)
 81309e3:	e8 26 3f 00 00       	call   813490e <_ZN5CUser20setAdvanceAltarIndexEs>
 81309e8:	b8 00 00 00 00       	mov    $0x0,%eax
 81309ed:	c9                   	leave
 81309ee:	c3                   	ret
 81309ef:	90                   	nop

```

```c
// advancealtar::Manager::selectStage @ 0x813090e

/* advancealtar::Manager::selectStage(CUser*, int, advancealtar::StageDifficulty::T) */

int advancealtar::Manager::selectStage(CUser *param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  CGameManager *this;
  cMyTrace local_28 [19];
  undefined1 local_15;
  StageControl *local_14;
  int local_10;
  
  if (param_1 == (CUser *)0x0) {
    local_10 = 3;
  }
  else if ((param_3 < 0) || (2 < param_3)) {
    local_10 = 8;
  }
  else {
    local_15 = 0;
    this = (CGameManager *)G_CGameManager();
    local_14 = (StageControl *)CGameManager::getAdvanceAltar(this);
    if (local_14 == (StageControl *)0x0) {
      cMyTrace::cMyTrace(local_28,
                         "static ENUM_ERROR advancealtar::Manager::selectStage(CUser*, int, advancealtar::StageDifficulty::T)"
                         ,0x6ab,5);
      cMyTrace::operator()(local_28,"StaticPool Defence DungeonNULL");
      local_10 = 3;
    }
    else {
      local_10 = StageControl::selectStage(local_14,param_1,param_2,param_3);
      if (local_10 == 0) {
        sVar1 = StageControl::getIndex(local_14);
        CUser::setAdvanceAltarIndex(param_1,sVar1);
        local_10 = 0;
      }
      else {
        StageControl::destroy(local_14);
      }
    }
  }
  return local_10;
}

```

---

## ~Manager

```asm
// === 08130908 advancealtar::Manager::~Manager  [0x08130908-0x813090d] ===
 8130908:	55                   	push   %ebp
 8130909:	89 e5                	mov    %esp,%ebp
 813090b:	5d                   	pop    %ebp
 813090c:	c3                   	ret
 813090d:	90                   	nop

```

```c
// advancealtar::Manager::~Manager @ 0x8130908

/* advancealtar::Manager::~Manager() */

void __thiscall advancealtar::Manager::~Manager(Manager *this)

{
  return;
}

```

