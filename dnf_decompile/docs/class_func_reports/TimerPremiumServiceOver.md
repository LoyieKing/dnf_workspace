# TimerPremiumServiceOver

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 0863485a TimerPremiumServiceOver::dispatch_sig  [0x0863485a-0x86348d3] ===
 863485a:	55                   	push   %ebp
 863485b:	89 e5                	mov    %esp,%ebp
 863485d:	83 ec 28             	sub    $0x28,%esp
 8634860:	e8 29 79 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634865:	c7 44 24 08 05 00 00 	movl   $0x5,0x8(%esp)
 863486c:	00 
 863486d:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634870:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634874:	89 04 24             	mov    %eax,(%esp)
 8634877:	e8 28 ff c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 863487c:	89 45 f4             	mov    %eax,-0xc(%ebp)
 863487f:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
 8634883:	75 07                	jne    863488c <_ZN23TimerPremiumServiceOver12dispatch_sigEiij+0x32>
 8634885:	b8 00 00 00 00       	mov    $0x0,%eax
 863488a:	eb 45                	jmp    86348d1 <_ZN23TimerPremiumServiceOver12dispatch_sigEiij+0x77>
 863488c:	8b 45 f4             	mov    -0xc(%ebp),%eax
 863488f:	89 04 24             	mov    %eax,(%esp)
 8634892:	e8 d7 5a aa ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8634897:	3b 45 14             	cmp    0x14(%ebp),%eax
 863489a:	0f 95 c0             	setne  %al
 863489d:	84 c0                	test   %al,%al
 863489f:	74 07                	je     86348a8 <_ZN23TimerPremiumServiceOver12dispatch_sigEiij+0x4e>
 86348a1:	b8 00 00 00 00       	mov    $0x0,%eax
 86348a6:	eb 29                	jmp    86348d1 <_ZN23TimerPremiumServiceOver12dispatch_sigEiij+0x77>
 86348a8:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86348ab:	89 04 24             	mov    %eax,(%esp)
 86348ae:	e8 ef 75 00 00       	call   863bea2 <_ZNK5CUser13IsPremiumUserEv>
 86348b3:	83 f0 01             	xor    $0x1,%eax
 86348b6:	84 c0                	test   %al,%al
 86348b8:	74 07                	je     86348c1 <_ZN23TimerPremiumServiceOver12dispatch_sigEiij+0x67>
 86348ba:	b8 00 00 00 00       	mov    $0x0,%eax
 86348bf:	eb 10                	jmp    86348d1 <_ZN23TimerPremiumServiceOver12dispatch_sigEiij+0x77>
 86348c1:	8b 45 f4             	mov    -0xc(%ebp),%eax
 86348c4:	89 04 24             	mov    %eax,(%esp)
 86348c7:	e8 b0 b1 07 00       	call   86afa7c <_ZN8WongWork14CHandlePremium20handlePremiumTimeoutEP5CUser>
 86348cc:	b8 01 00 00 00       	mov    $0x1,%eax
 86348d1:	c9                   	leave
 86348d2:	c3                   	ret
 86348d3:	90                   	nop

```

```c
// TimerPremiumServiceOver::dispatch_sig @ 0x863485a

/* TimerPremiumServiceOver::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerPremiumServiceOver::dispatch_sig
          (TimerPremiumServiceOver *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CUser *this_00;
  undefined4 uVar3;
  uint uVar4;
  
  iVar2 = G_CGameManager();
  this_00 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_acc_id(this_00);
    if (uVar4 == param_3) {
      cVar1 = CUser::IsPremiumUser(this_00);
      if (cVar1 == '\x01') {
        WongWork::CHandlePremium::handlePremiumTimeout(this_00);
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

