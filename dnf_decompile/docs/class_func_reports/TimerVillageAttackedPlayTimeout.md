# TimerVillageAttackedPlayTimeout

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863905c TimerVillageAttackedPlayTimeout::dispatch_sig  [0x0863905c-0x86390e9] ===
 863905c:	55                   	push   %ebp
 863905d:	89 e5                	mov    %esp,%ebp
 863905f:	83 ec 28             	sub    $0x28,%esp
 8639062:	e8 27 31 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8639067:	8b 55 0c             	mov    0xc(%ebp),%edx
 863906a:	89 54 24 04          	mov    %edx,0x4(%esp)
 863906e:	89 04 24             	mov    %eax,(%esp)
 8639071:	e8 bc be c5 ff       	call   8294f32 <_ZN12CGameManager8GetPartyEi>
 8639076:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8639079:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 863907d:	75 07                	jne    8639086 <_ZN31TimerVillageAttackedPlayTimeout12dispatch_sigEiij+0x2a>
 863907f:	b8 00 00 00 00       	mov    $0x0,%eax
 8639084:	eb 61                	jmp    86390e7 <_ZN31TimerVillageAttackedPlayTimeout12dispatch_sigEiij+0x8b>
 8639086:	8b 45 10             	mov    0x10(%ebp),%eax
 8639089:	89 44 24 08          	mov    %eax,0x8(%esp)
 863908d:	c7 44 24 04 27 00 00 	movl   $0x27,0x4(%esp)
 8639094:	00 
 8639095:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8639098:	89 04 24             	mov    %eax,(%esp)
 863909b:	e8 04 1e f6 ff       	call   859aea4 <_ZN6CParty15check_timer_keyE13TIMER_MESSAGEi>
 86390a0:	83 f0 01             	xor    $0x1,%eax
 86390a3:	84 c0                	test   %al,%al
 86390a5:	74 07                	je     86390ae <_ZN31TimerVillageAttackedPlayTimeout12dispatch_sigEiij+0x52>
 86390a7:	b8 00 00 00 00       	mov    $0x0,%eax
 86390ac:	eb 39                	jmp    86390e7 <_ZN31TimerVillageAttackedPlayTimeout12dispatch_sigEiij+0x8b>
 86390ae:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86390b1:	0f b7 80 4c 0c 00 00 	movzwl 0xc4c(%eax),%eax
 86390b8:	0f b7 c0             	movzwl %ax,%eax
 86390bb:	3b 45 14             	cmp    0x14(%ebp),%eax
 86390be:	74 07                	je     86390c7 <_ZN31TimerVillageAttackedPlayTimeout12dispatch_sigEiij+0x6b>
 86390c0:	b8 00 00 00 00       	mov    $0x0,%eax
 86390c5:	eb 20                	jmp    86390e7 <_ZN31TimerVillageAttackedPlayTimeout12dispatch_sigEiij+0x8b>
 86390c7:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 86390ce:	00 
 86390cf:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86390d6:	00 
 86390d7:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86390da:	89 04 24             	mov    %eax,(%esp)
 86390dd:	e8 ca 08 f8 ff       	call   85b99ac <_ZN6CParty30OnFinishVillageMonsterFightingEP5CUserb>
 86390e2:	b8 01 00 00 00       	mov    $0x1,%eax
 86390e7:	c9                   	leave
 86390e8:	c3                   	ret
 86390e9:	90                   	nop

```

```c
// TimerVillageAttackedPlayTimeout::dispatch_sig @ 0x863905c

/* TimerVillageAttackedPlayTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerVillageAttackedPlayTimeout::dispatch_sig
          (TimerVillageAttackedPlayTimeout *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CParty *this_00;
  undefined4 uVar3;
  
  iVar2 = G_CGameManager();
  this_00 = (CParty *)CGameManager::GetParty(iVar2);
  if (this_00 == (CParty *)0x0) {
    uVar3 = 0;
  }
  else {
    cVar1 = CParty::check_timer_key(this_00,0x27,param_2);
    if (cVar1 == '\x01') {
      if (*(ushort *)(this_00 + 0xc4c) == param_3) {
        CParty::OnFinishVillageMonsterFighting(this_00,(CUser *)0x0,true);
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  return uVar3;
}

```

