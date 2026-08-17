# TimerStartVillageAttacked

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08639042 TimerStartVillageAttacked::dispatch_sig  [0x08639042-0x863905b] ===
 8639042:	55                   	push   %ebp
 8639043:	89 e5                	mov    %esp,%ebp
 8639045:	83 ec 18             	sub    $0x18,%esp
 8639048:	a1 7c f7 41 09       	mov    0x941f77c,%eax
 863904d:	89 04 24             	mov    %eax,(%esp)
 8639050:	e8 cb b9 07 00       	call   86b4a20 <_ZN16village_attacked18CVillageMonsterMgr22OnStartVillageAttackedEv>
 8639055:	b8 01 00 00 00       	mov    $0x1,%eax
 863905a:	c9                   	leave
 863905b:	c3                   	ret

```

```c
// TimerStartVillageAttacked::dispatch_sig @ 0x8639042

/* TimerStartVillageAttacked::dispatch_sig(int, int, unsigned int) */

undefined4 TimerStartVillageAttacked::dispatch_sig(int param_1,int param_2,uint param_3)

{
  village_attacked::CVillageMonsterMgr::OnStartVillageAttacked(GlobalData::s_villageMonsterMgr);
  return 1;
}

```

