# TimerAssaultSuperPowerState

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863414e TimerAssaultSuperPowerState::dispatch_sig  [0x0863414e-0x86341d1] ===
 863414e:	55                   	push   %ebp
 863414f:	89 e5                	mov    %esp,%ebp
 8634151:	83 ec 28             	sub    $0x28,%esp
 8634154:	e8 35 80 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634159:	c7 44 24 08 03 00 00 	movl   $0x3,0x8(%esp)
 8634160:	00 
 8634161:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634164:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634168:	89 04 24             	mov    %eax,(%esp)
 863416b:	e8 34 06 c6 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8634170:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634173:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634177:	75 07                	jne    8634180 <_ZN27TimerAssaultSuperPowerState12dispatch_sigEiij+0x32>
 8634179:	b8 00 00 00 00       	mov    $0x0,%eax
 863417e:	eb 50                	jmp    86341d0 <_ZN27TimerAssaultSuperPowerState12dispatch_sigEiij+0x82>
 8634180:	83 7d 14 00          	cmpl   $0x0,0x14(%ebp)
 8634184:	74 17                	je     863419d <_ZN27TimerAssaultSuperPowerState12dispatch_sigEiij+0x4f>
 8634186:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634189:	89 04 24             	mov    %eax,(%esp)
 863418c:	e8 bd 7a a9 ff       	call   80cbc4e <_ZNK15CUserCharacInfo14getCurCharacNoEv>
 8634191:	3b 45 14             	cmp    0x14(%ebp),%eax
 8634194:	74 07                	je     863419d <_ZN27TimerAssaultSuperPowerState12dispatch_sigEiij+0x4f>
 8634196:	b8 01 00 00 00       	mov    $0x1,%eax
 863419b:	eb 05                	jmp    86341a2 <_ZN27TimerAssaultSuperPowerState12dispatch_sigEiij+0x54>
 863419d:	b8 00 00 00 00       	mov    $0x0,%eax
 86341a2:	84 c0                	test   %al,%al
 86341a4:	74 07                	je     86341ad <_ZN27TimerAssaultSuperPowerState12dispatch_sigEiij+0x5f>
 86341a6:	b8 00 00 00 00       	mov    $0x0,%eax
 86341ab:	eb 23                	jmp    86341d0 <_ZN27TimerAssaultSuperPowerState12dispatch_sigEiij+0x82>
 86341ad:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86341b0:	c7 44 24 04 00 00 00 	movl   $0x0,0x4(%esp)
 86341b7:	00 
 86341b8:	89 04 24             	mov    %eax,(%esp)
 86341bb:	e8 a0 c9 cb ff       	call   82f0b60 <_ZN15CUserCharacInfo22SetCurCharacSuperStateEb>
 86341c0:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86341c3:	89 04 24             	mov    %eax,(%esp)
 86341c6:	e8 f9 41 cb ff       	call   82e83c4 <_ZN11pvp_assault13CAssaultPlace13SendUserStateEP5CUser>
 86341cb:	b8 01 00 00 00       	mov    $0x1,%eax
 86341d0:	c9                   	leave
 86341d1:	c3                   	ret

```

```c
// TimerAssaultSuperPowerState::dispatch_sig @ 0x863414e

/* TimerAssaultSuperPowerState::dispatch_sig(int, int, unsigned int) */

bool __thiscall
TimerAssaultSuperPowerState::dispatch_sig
          (TimerAssaultSuperPowerState *this,int param_1,int param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  CUserCharacInfo *this_00;
  uint uVar3;
  
  iVar2 = G_CGameManager();
  this_00 = (CUserCharacInfo *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUserCharacInfo *)0x0) {
    return false;
  }
  if ((param_3 == 0) || (uVar3 = CUserCharacInfo::getCurCharacNo(this_00), uVar3 == param_3)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (!bVar1) {
    CUserCharacInfo::SetCurCharacSuperState(this_00,false);
    pvp_assault::CAssaultPlace::SendUserState((CUser *)this_00);
  }
  return !bVar1;
}

```

