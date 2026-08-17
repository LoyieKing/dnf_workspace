# TimerVillageMonsterRegen

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863901a TimerVillageMonsterRegen::dispatch_sig  [0x0863901a-0x8639041] ===
 863901a:	55                   	push   %ebp
 863901b:	89 e5                	mov    %esp,%ebp
 863901d:	83 ec 18             	sub    $0x18,%esp
 8639020:	8b 55 14             	mov    0x14(%ebp),%edx
 8639023:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 8639028:	89 54 24 08          	mov    %edx,0x8(%esp)
 863902c:	8b 55 10             	mov    0x10(%ebp),%edx
 863902f:	89 54 24 04          	mov    %edx,0x4(%esp)
 8639033:	89 04 24             	mov    %eax,(%esp)
 8639036:	e8 fd b2 07 00       	call   86b4338 <_ZN16village_attacked18CVillageMonsterMgr21OnRegenVillageMonsterEii>
 863903b:	b8 01 00 00 00       	mov    $0x1,%eax
 8639040:	c9                   	leave
 8639041:	c3                   	ret

```

```c
// TimerVillageMonsterRegen::dispatch_sig @ 0x863901a

/* TimerVillageMonsterRegen::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerVillageMonsterRegen::dispatch_sig
          (TimerVillageMonsterRegen *this,int param_1,int param_2,uint param_3)

{
  village_attacked::CVillageMonsterMgr::OnRegenVillageMonster
            (GlobalData::s_villageMonsterMgr,param_2,param_3);
  return 1;
}

```

