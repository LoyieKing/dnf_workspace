# TimerCreature

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08635e96 TimerCreature::dispatch_sig  [0x08635e96-0x8635f4f] ===
 8635e96:	55                   	push   %ebp
 8635e97:	89 e5                	mov    %esp,%ebp
 8635e99:	83 ec 28             	sub    $0x28,%esp
 8635e9c:	e8 ed 62 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8635ea1:	c7 44 24 08 01 00 00 	movl   $0x1,0x8(%esp)
 8635ea8:	00 
 8635ea9:	8b 55 0c             	mov    0xc(%ebp),%edx
 8635eac:	89 54 24 04          	mov    %edx,0x4(%esp)
 8635eb0:	89 04 24             	mov    %eax,(%esp)
 8635eb3:	e8 ec e8 c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8635eb8:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8635ebb:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8635ebf:	75 0a                	jne    8635ecb <_ZN13TimerCreature12dispatch_sigEiij+0x35>
 8635ec1:	b8 00 00 00 00       	mov    $0x0,%eax
 8635ec6:	e9 82 00 00 00       	jmp    8635f4d <_ZN13TimerCreature12dispatch_sigEiij+0xb7>
 8635ecb:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8635ece:	89 04 24             	mov    %eax,(%esp)
 8635ed1:	e8 a6 44 aa ff       	call   80da37c <_ZNK5CUser13get_unique_idEv>
 8635ed6:	0f b7 c0             	movzwl %ax,%eax
 8635ed9:	3b 45 10             	cmp    0x10(%ebp),%eax
 8635edc:	0f 95 c0             	setne  %al
 8635edf:	84 c0                	test   %al,%al
 8635ee1:	74 07                	je     8635eea <_ZN13TimerCreature12dispatch_sigEiij+0x54>
 8635ee3:	b8 00 00 00 00       	mov    $0x0,%eax
 8635ee8:	eb 63                	jmp    8635f4d <_ZN13TimerCreature12dispatch_sigEiij+0xb7>
 8635eea:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8635eed:	89 04 24             	mov    %eax,(%esp)
 8635ef0:	e8 59 5d a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8635ef5:	3b 45 14             	cmp    0x14(%ebp),%eax
 8635ef8:	0f 95 c0             	setne  %al
 8635efb:	84 c0                	test   %al,%al
 8635efd:	74 07                	je     8635f06 <_ZN13TimerCreature12dispatch_sigEiij+0x70>
 8635eff:	b8 00 00 00 00       	mov    $0x0,%eax
 8635f04:	eb 47                	jmp    8635f4d <_ZN13TimerCreature12dispatch_sigEiij+0xb7>
 8635f06:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8635f09:	89 04 24             	mov    %eax,(%esp)
 8635f0c:	e8 b3 5e 00 00       	call   863bdc4 <_ZN15CUserCharacInfo11isSaveInvenEv>
 8635f11:	88 45 f7             	mov    %al,-0x9(%ebp)
 8635f14:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8635f17:	89 04 24             	mov    %eax,(%esp)
 8635f1a:	e8 6f 43 aa ff       	call   80da28e <_ZN15CUserCharacInfo18getCurCharacInvenWEv>
 8635f1f:	89 04 24             	mov    %eax,(%esp)
 8635f22:	e8 41 76 aa ff       	call   80dd568 <_ZN10CInventory15GetCreatureMgrWEv>
 8635f27:	89 04 24             	mov    %eax,(%esp)
 8635f2a:	e8 9d 3b d0 ff       	call   8339acc <_ZN13user_creature12CCreatureMgr17CheckDiedCreatureEv>
 8635f2f:	88 45 ef             	mov    %al,-0x11(%ebp)
 8635f32:	0f b6 45 f7          	movzbl -0x9(%ebp),%eax
 8635f36:	83 f0 01             	xor    $0x1,%eax
 8635f39:	84 c0                	test   %al,%al
 8635f3b:	74 0b                	je     8635f48 <_ZN13TimerCreature12dispatch_sigEiij+0xb2>
 8635f3d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8635f40:	89 04 24             	mov    %eax,(%esp)
 8635f43:	e8 d0 5f eb ff       	call   84ebf18 <_ZN15CUserCharacInfo16disableSaveInvenEv>
 8635f48:	b8 01 00 00 00       	mov    $0x1,%eax
 8635f4d:	c9                   	leave
 8635f4e:	c3                   	ret
 8635f4f:	90                   	nop

```

```c
// TimerCreature::dispatch_sig @ 0x8635e96

/* TimerCreature::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerCreature::dispatch_sig(TimerCreature *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CUser *this_00;
  undefined4 uVar3;
  uint uVar4;
  CInventory *this_01;
  CCreatureMgr *this_02;
  
  iVar2 = G_CGameManager();
  this_00 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_unique_id(this_00);
    if ((uVar4 & 0xffff) == param_2) {
      uVar4 = CUserCharacInfo::getCurCharacNo((CUserCharacInfo *)this_00);
      if (uVar4 == param_3) {
        cVar1 = CUserCharacInfo::isSaveInven((CUserCharacInfo *)this_00);
        this_01 = (CInventory *)CUserCharacInfo::getCurCharacInvenW((CUserCharacInfo *)this_00);
        this_02 = (CCreatureMgr *)CInventory::GetCreatureMgrW(this_01);
        user_creature::CCreatureMgr::CheckDiedCreature(this_02);
        if (cVar1 != '\x01') {
          CUserCharacInfo::disableSaveInven((CUserCharacInfo *)this_00);
        }
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

