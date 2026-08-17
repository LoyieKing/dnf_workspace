# TimerVillageMonsterUpdateRate

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08639000 TimerVillageMonsterUpdateRate::dispatch_sig  [0x08639000-0x8639019] ===
 8639000:	55                   	push   %ebp
 8639001:	89 e5                	mov    %esp,%ebp
 8639003:	83 ec 18             	sub    $0x18,%esp
 8639006:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 863900b:	89 04 24             	mov    %eax,(%esp)
 863900e:	e8 e9 b4 07 00       	call   86b44fc <_ZN16village_attacked18CVillageMonsterMgr19OnRunVillageMonsterEv>
 8639013:	b8 01 00 00 00       	mov    $0x1,%eax
 8639018:	c9                   	leave
 8639019:	c3                   	ret

```

```c
// TimerVillageMonsterUpdateRate::dispatch_sig @ 0x8639000

/* TimerVillageMonsterUpdateRate::dispatch_sig(int, int, unsigned int) */

undefined4 TimerVillageMonsterUpdateRate::dispatch_sig(int param_1,int param_2,uint param_3)

{
  village_attacked::CVillageMonsterMgr::OnRunVillageMonster(GlobalData::s_villageMonsterMgr);
  return 1;
}

```

