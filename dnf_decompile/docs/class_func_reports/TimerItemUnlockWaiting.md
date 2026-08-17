# TimerItemUnlockWaiting

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 086390ea TimerItemUnlockWaiting::dispatch_sig  [0x086390ea-0x8639173] ===
 86390ea:	55                   	push   %ebp
 86390eb:	89 e5                	mov    %esp,%ebp
 86390ed:	83 ec 28             	sub    $0x28,%esp
 86390f0:	e8 99 30 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 86390f5:	c7 44 24 08 02 00 00 	movl   $0x2,0x8(%esp)
 86390fc:	00 
 86390fd:	8b 55 0c             	mov    0xc(%ebp),%edx
 8639100:	89 54 24 04          	mov    %edx,0x4(%esp)
 8639104:	89 04 24             	mov    %eax,(%esp)
 8639107:	e8 98 b6 c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 863910c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863910f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8639113:	75 07                	jne    863911c <_ZN22TimerItemUnlockWaiting12dispatch_sigEiij+0x32>
 8639115:	b8 00 00 00 00       	mov    $0x0,%eax
 863911a:	eb 55                	jmp    8639171 <_ZN22TimerItemUnlockWaiting12dispatch_sigEiij+0x87>
 863911c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863911f:	89 04 24             	mov    %eax,(%esp)
 8639122:	e8 0b 73 ae ff       	call   8120432 <_ZNK15CUserCharacInfo13getCurCharacREv>
 8639127:	85 c0                	test   %eax,%eax
 8639129:	0f 94 c0             	sete   %al
 863912c:	84 c0                	test   %al,%al
 863912e:	74 07                	je     8639137 <_ZN22TimerItemUnlockWaiting12dispatch_sigEiij+0x4d>
 8639130:	b8 00 00 00 00       	mov    $0x0,%eax
 8639135:	eb 3a                	jmp    8639171 <_ZN22TimerItemUnlockWaiting12dispatch_sigEiij+0x87>
 8639137:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863913a:	89 04 24             	mov    %eax,(%esp)
 863913d:	e8 0c 2b a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8639142:	3b 45 14             	cmp    0x14(%ebp),%eax
 8639145:	0f 95 c0             	setne  %al
 8639148:	84 c0                	test   %al,%al
 863914a:	74 07                	je     8639153 <_ZN22TimerItemUnlockWaiting12dispatch_sigEiij+0x69>
 863914c:	b8 00 00 00 00       	mov    $0x0,%eax
 8639151:	eb 1e                	jmp    8639171 <_ZN22TimerItemUnlockWaiting12dispatch_sigEiij+0x87>
 8639153:	8b 45 14             	mov    0x14(%ebp),%eax
 8639156:	89 44 24 08          	mov    %eax,0x8(%esp)
 863915a:	8b 45 10             	mov    0x10(%ebp),%eax
 863915d:	89 44 24 04          	mov    %eax,0x4(%esp)
 8639161:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8639164:	89 04 24             	mov    %eax,(%esp)
 8639167:	e8 a6 d7 00 00       	call   8646912 <_ZN5CUser23OnItemUnlockWaitTimeoutEii>
 863916c:	b8 01 00 00 00       	mov    $0x1,%eax
 8639171:	c9                   	leave
 8639172:	c3                   	ret
 8639173:	90                   	nop

```

```c
// TimerItemUnlockWaiting::dispatch_sig @ 0x86390ea

/* TimerItemUnlockWaiting::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerItemUnlockWaiting::dispatch_sig
          (TimerItemUnlockWaiting *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  CUserCharacInfo *this_00;
  undefined4 uVar2;
  uint uVar3;
  
  iVar1 = G_CGameManager();
  this_00 = (CUserCharacInfo *)CGameManager::getUser(iVar1,param_1);
  if (this_00 == (CUserCharacInfo *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = CUserCharacInfo::getCurCharacR(this_00);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar3 = CUserCharacInfo::getCurCharacNo(this_00);
      if (uVar3 == param_3) {
        CUser::OnItemUnlockWaitTimeout((int)this_00,param_2);
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

```

