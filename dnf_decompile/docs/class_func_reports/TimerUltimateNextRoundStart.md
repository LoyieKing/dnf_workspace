# TimerUltimateNextRoundStart

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08638d2c TimerUltimateNextRoundStart::dispatch_sig  [0x08638d2c-0x8638e77] ===
 8638d2c:	55                   	push   %ebp
 8638d2d:	89 e5                	mov    %esp,%ebp
 8638d2f:	53                   	push   %ebx
 8638d30:	83 ec 24             	sub    $0x24,%esp
 8638d33:	e8 56 34 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8638d38:	8b 55 0c             	mov    0xc(%ebp),%edx
 8638d3b:	89 54 24 04          	mov    %edx,0x4(%esp)
 8638d3f:	89 04 24             	mov    %eax,(%esp)
 8638d42:	e8 eb c1 c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8638d47:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8638d4a:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8638d4e:	75 0a                	jne    8638d5a <_ZN27TimerUltimateNextRoundStart12dispatch_sigEiij+0x2e>
 8638d50:	b8 00 00 00 00       	mov    $0x0,%eax
 8638d55:	e9 17 01 00 00       	jmp    8638e71 <_ZN27TimerUltimateNextRoundStart12dispatch_sigEiij+0x145>
 8638d5a:	8b 45 10             	mov    0x10(%ebp),%eax
 8638d5d:	89 44 24 08          	mov    %eax,0x8(%esp)
 8638d61:	8b 45 14             	mov    0x14(%ebp),%eax
 8638d64:	89 44 24 04          	mov    %eax,0x4(%esp)
 8638d68:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8638d6b:	89 04 24             	mov    %eax,(%esp)
 8638d6e:	e8 31 21 f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 8638d73:	83 f0 01             	xor    $0x1,%eax
 8638d76:	84 c0                	test   %al,%al
 8638d78:	74 0a                	je     8638d84 <_ZN27TimerUltimateNextRoundStart12dispatch_sigEiij+0x58>
 8638d7a:	b8 00 00 00 00       	mov    $0x0,%eax
 8638d7f:	e9 ed 00 00 00       	jmp    8638e71 <_ZN27TimerUltimateNextRoundStart12dispatch_sigEiij+0x145>
 8638d84:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8638d87:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 8638d8d:	85 c0                	test   %eax,%eax
 8638d8f:	74 1e                	je     8638daf <_ZN27TimerUltimateNextRoundStart12dispatch_sigEiij+0x83>
 8638d91:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8638d94:	8b 80 ac 0c 00 00    	mov    0xcac(%eax),%eax
 8638d9a:	0f b6 80 9f 08 00 00 	movzbl 0x89f(%eax),%eax
 8638da1:	3c 02                	cmp    $0x2,%al
 8638da3:	74 0a                	je     8638daf <_ZN27TimerUltimateNextRoundStart12dispatch_sigEiij+0x83>
 8638da5:	b8 00 00 00 00       	mov    $0x0,%eax
 8638daa:	e9 c2 00 00 00       	jmp    8638e71 <_ZN27TimerUltimateNextRoundStart12dispatch_sigEiij+0x145>
 8638daf:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8638db2:	05 24 0b 00 00       	add    $0xb24,%eax
 8638db7:	89 04 24             	mov    %eax,(%esp)
 8638dba:	e8 6f 42 bf ff       	call   822d02e <_ZN13CBattle_Field21getUltimateDifficyltyEv>
 8638dbf:	84 c0                	test   %al,%al
 8638dc1:	0f 95 c0             	setne  %al
 8638dc4:	84 c0                	test   %al,%al
 8638dc6:	74 0a                	je     8638dd2 <_ZN27TimerUltimateNextRoundStart12dispatch_sigEiij+0xa6>
 8638dc8:	b8 00 00 00 00       	mov    $0x0,%eax
 8638dcd:	e9 9f 00 00 00       	jmp    8638e71 <_ZN27TimerUltimateNextRoundStart12dispatch_sigEiij+0x145>
 8638dd2:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8638dd5:	05 24 0b 00 00       	add    $0xb24,%eax
 8638dda:	89 04 24             	mov    %eax,(%esp)
 8638ddd:	e8 74 d3 cc ff       	call   8306156 <_ZN13CBattle_Field28getNextRoundRandomDifficultyEv>
 8638de2:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8638de5:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638de8:	0f be c0             	movsbl %al,%eax
 8638deb:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8638dee:	81 c2 24 0b 00 00    	add    $0xb24,%edx
 8638df4:	89 44 24 04          	mov    %eax,0x4(%esp)
 8638df8:	89 14 24             	mov    %edx,(%esp)
 8638dfb:	e8 12 42 bf ff       	call   822d012 <_ZN13CBattle_Field21setUltimateDifficultyEc>
 8638e00:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8638e03:	05 d0 0d 00 00       	add    $0xdd0,%eax
 8638e08:	89 04 24             	mov    %eax,(%esp)
 8638e0b:	e8 b2 5d cd ff       	call   830ebc2 <_ZN13CBattle_Field11CBloodRound18getBloodRoundOrderEv>
 8638e10:	0f bf d8             	movswl %ax,%ebx
 8638e13:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8638e16:	05 24 0b 00 00       	add    $0xb24,%eax
 8638e1b:	89 04 24             	mov    %eax,(%esp)
 8638e1e:	e8 ef 5d cd ff       	call   830ec12 <_ZN13CBattle_Field16getBloodMaxRoundEv>
 8638e23:	83 e8 01             	sub    $0x1,%eax
 8638e26:	39 c3                	cmp    %eax,%ebx
 8638e28:	0f 95 c0             	setne  %al
 8638e2b:	84 c0                	test   %al,%al
 8638e2d:	74 2d                	je     8638e5c <_ZN27TimerUltimateNextRoundStart12dispatch_sigEiij+0x130>
 8638e2f:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8638e32:	05 d0 0d 00 00       	add    $0xdd0,%eax
 8638e37:	89 04 24             	mov    %eax,(%esp)
 8638e3a:	e8 83 5d cd ff       	call   830ebc2 <_ZN13CBattle_Field11CBloodRound18getBloodRoundOrderEv>
 8638e3f:	98                   	cwtl
 8638e40:	8b 55 f0             	mov    -0x10(%ebp),%edx
 8638e43:	81 c2 24 0b 00 00    	add    $0xb24,%edx
 8638e49:	89 44 24 08          	mov    %eax,0x8(%esp)
 8638e4d:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8638e50:	89 44 24 04          	mov    %eax,0x4(%esp)
 8638e54:	89 14 24             	mov    %edx,(%esp)
 8638e57:	e8 da d5 cc ff       	call   8306436 <_ZN13CBattle_Field28sendUltimateRandomDifficultyEii>
 8638e5c:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8638e5f:	05 24 0b 00 00       	add    $0xb24,%eax
 8638e64:	89 04 24             	mov    %eax,(%esp)
 8638e67:	e8 72 d6 cc ff       	call   83064de <_ZN13CBattle_Field18startUltimateRoundEv>
 8638e6c:	b8 01 00 00 00       	mov    $0x1,%eax
 8638e71:	83 c4 24             	add    $0x24,%esp
 8638e74:	5b                   	pop    %ebx
 8638e75:	5d                   	pop    %ebp
 8638e76:	c3                   	ret
 8638e77:	90                   	nop

```

```c
// TimerUltimateNextRoundStart::dispatch_sig @ 0x8638d2c

/* TimerUltimateNextRoundStart::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerUltimateNextRoundStart::dispatch_sig
          (TimerUltimateNextRoundStart *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  short sVar2;
  int iVar3;
  CParty *pCVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar3 = G_CGameManager();
  pCVar4 = (CParty *)CGameManager::GetParty(iVar3);
  if (pCVar4 == (CParty *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(pCVar4,param_3,param_2);
    if (cVar1 == '\x01') {
      if ((*(int *)(pCVar4 + 0xcac) == 0) || (*(char *)(*(int *)(pCVar4 + 0xcac) + 0x89f) == '\x02')
         ) {
        cVar1 = CBattle_Field::getUltimateDifficylty((CBattle_Field *)(pCVar4 + 0xb24));
        if (cVar1 == '\0') {
          iVar3 = CBattle_Field::getNextRoundRandomDifficulty((CBattle_Field *)(pCVar4 + 0xb24));
          CBattle_Field::setUltimateDifficulty((CBattle_Field *)(pCVar4 + 0xb24),(char)iVar3);
          sVar2 = CBattle_Field::CBloodRound::getBloodRoundOrder((CBloodRound *)(pCVar4 + 0xdd0));
          iVar6 = CBattle_Field::getBloodMaxRound((CBattle_Field *)(pCVar4 + 0xb24));
          if ((int)sVar2 != iVar6 + -1) {
            sVar2 = CBattle_Field::CBloodRound::getBloodRoundOrder((CBloodRound *)(pCVar4 + 0xdd0));
            CBattle_Field::sendUltimateRandomDifficulty
                      ((CBattle_Field *)(pCVar4 + 0xb24),iVar3,(int)sVar2);
          }
          CBattle_Field::startUltimateRound((CBattle_Field *)(pCVar4 + 0xb24));
          uVar5 = 1;
        }
        else {
          uVar5 = 0;
        }
      }
      else {
        uVar5 = 0;
      }
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

```

