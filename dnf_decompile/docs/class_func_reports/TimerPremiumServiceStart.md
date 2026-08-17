# TimerPremiumServiceStart

> 生成自 df_game_r（elf32-i386），汇编=objdump -d，C=Ghidra 反编译。

函数数（含汇编）: 1

---

## dispatch_sig

```asm
// === 08634a30 TimerPremiumServiceStart::dispatch_sig  [0x08634a30-0x8634b5f] ===
 8634a30:	55                   	push   %ebp
 8634a31:	89 e5                	mov    %esp,%ebp
 8634a33:	83 ec 28             	sub    $0x28,%esp
 8634a36:	e8 53 77 a9 ff       	call   80cc18e <_Z14G_CGameManagerv>
 8634a3b:	c7 44 24 08 06 00 00 	movl   $0x6,0x8(%esp)
 8634a42:	00 
 8634a43:	8b 55 0c             	mov    0xc(%ebp),%edx
 8634a46:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634a4a:	89 04 24             	mov    %eax,(%esp)
 8634a4d:	e8 52 fd c5 ff       	call   82947a4 <_ZN12CGameManager7getUserEii>
 8634a52:	89 45 f0             	mov    %eax,-0x10(%ebp)
 8634a55:	83 7d f0 00          	cmpl   $0x0,-0x10(%ebp)
 8634a59:	75 0a                	jne    8634a65 <_ZN24TimerPremiumServiceStart12dispatch_sigEiij+0x35>
 8634a5b:	b8 00 00 00 00       	mov    $0x0,%eax
 8634a60:	e9 f8 00 00 00       	jmp    8634b5d <_ZN24TimerPremiumServiceStart12dispatch_sigEiij+0x12d>
 8634a65:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634a68:	89 04 24             	mov    %eax,(%esp)
 8634a6b:	e8 fe 58 aa ff       	call   80da36e <_ZNK5CUser10get_acc_idEv>
 8634a70:	3b 45 14             	cmp    0x14(%ebp),%eax
 8634a73:	0f 95 c0             	setne  %al
 8634a76:	84 c0                	test   %al,%al
 8634a78:	74 0a                	je     8634a84 <_ZN24TimerPremiumServiceStart12dispatch_sigEiij+0x54>
 8634a7a:	b8 00 00 00 00       	mov    $0x0,%eax
 8634a7f:	e9 d9 00 00 00       	jmp    8634b5d <_ZN24TimerPremiumServiceStart12dispatch_sigEiij+0x12d>
 8634a84:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634a87:	89 04 24             	mov    %eax,(%esp)
 8634a8a:	e8 05 74 00 00       	call   863be94 <_ZN5CUser15GetPremiumInfoWEv>
 8634a8f:	c7 44 24 08 00 00 00 	movl   $0x0,0x8(%esp)
 8634a96:	00 
 8634a97:	8b 55 10             	mov    0x10(%ebp),%edx
 8634a9a:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634a9e:	89 04 24             	mov    %eax,(%esp)
 8634aa1:	e8 c4 91 07 00       	call   86adc6a <_ZN8WongWork12CUserPremium12startPremiumEib>
 8634aa6:	83 f0 01             	xor    $0x1,%eax
 8634aa9:	84 c0                	test   %al,%al
 8634aab:	74 0a                	je     8634ab7 <_ZN24TimerPremiumServiceStart12dispatch_sigEiij+0x87>
 8634aad:	b8 00 00 00 00       	mov    $0x0,%eax
 8634ab2:	e9 a6 00 00 00       	jmp    8634b5d <_ZN24TimerPremiumServiceStart12dispatch_sigEiij+0x12d>
 8634ab7:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634aba:	89 04 24             	mov    %eax,(%esp)
 8634abd:	e8 ca 58 aa ff       	call   80da38c <_ZN5CUser9get_stateEv>
 8634ac2:	83 f8 02             	cmp    $0x2,%eax
 8634ac5:	0f 9f c0             	setg   %al
 8634ac8:	84 c0                	test   %al,%al
 8634aca:	0f 84 88 00 00 00    	je     8634b58 <_ZN24TimerPremiumServiceStart12dispatch_sigEiij+0x128>
 8634ad0:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634ad3:	89 04 24             	mov    %eax,(%esp)
 8634ad6:	e8 4d 83 af ff       	call   812ce28 <_ZNK5CUser14GetPremiumInfoEv>
 8634adb:	8b 55 10             	mov    0x10(%ebp),%edx
 8634ade:	89 54 24 04          	mov    %edx,0x4(%esp)
 8634ae2:	89 04 24             	mov    %eax,(%esp)
 8634ae5:	e8 68 94 07 00       	call   86adf52 <_ZNK8WongWork12CUserPremium14GetPremiumInfoEi>
 8634aea:	89 45 f4             	mov    %eax,-0xc(%ebp)
 8634aed:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634af0:	8b 00                	mov    (%eax),%eax
 8634af2:	85 c0                	test   %eax,%eax
 8634af4:	75 07                	jne    8634afd <_ZN24TimerPremiumServiceStart12dispatch_sigEiij+0xcd>
 8634af6:	b8 01 00 00 00       	mov    $0x1,%eax
 8634afb:	eb 60                	jmp    8634b5d <_ZN24TimerPremiumServiceStart12dispatch_sigEiij+0x12d>
 8634afd:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634b00:	8b 50 08             	mov    0x8(%eax),%edx
 8634b03:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634b06:	8b 40 04             	mov    0x4(%eax),%eax
 8634b09:	29 c2                	sub    %eax,%edx
 8634b0b:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634b0e:	8b 00                	mov    (%eax),%eax
 8634b10:	89 54 24 08          	mov    %edx,0x8(%esp)
 8634b14:	89 44 24 04          	mov    %eax,0x4(%esp)
 8634b18:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634b1b:	89 04 24             	mov    %eax,(%esp)
 8634b1e:	e8 91 ad 07 00       	call   86af8b4 <_ZN8WongWork14CHandlePremium23handleNotifyPremiumInfoEP5CUserii>
 8634b23:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634b26:	8b 10                	mov    (%eax),%edx
 8634b28:	89 d0                	mov    %edx,%eax
 8634b2a:	c1 e0 03             	shl    $0x3,%eax
 8634b2d:	01 d0                	add    %edx,%eax
 8634b2f:	c1 e0 05             	shl    $0x5,%eax
 8634b32:	8b 80 40 3a 48 09    	mov    0x9483a40(%eax),%eax
 8634b38:	83 f8 02             	cmp    $0x2,%eax
 8634b3b:	75 07                	jne    8634b44 <_ZN24TimerPremiumServiceStart12dispatch_sigEiij+0x114>
 8634b3d:	b8 01 00 00 00       	mov    $0x1,%eax
 8634b42:	eb 19                	jmp    8634b5d <_ZN24TimerPremiumServiceStart12dispatch_sigEiij+0x12d>
 8634b44:	8b 45 f4             	mov    -0xc(%ebp),%eax
 8634b47:	8b 00                	mov    (%eax),%eax
 8634b49:	89 44 24 04          	mov    %eax,0x4(%esp)
 8634b4d:	8b 45 f0             	mov    -0x10(%ebp),%eax
 8634b50:	89 04 24             	mov    %eax,(%esp)
 8634b53:	e8 da b0 07 00       	call   86afc32 <_ZN8WongWork14CHandlePremium19handlePremiumEffectEP5CUser17ENUM_PREMIUM_TYPE>
 8634b58:	b8 01 00 00 00       	mov    $0x1,%eax
 8634b5d:	c9                   	leave
 8634b5e:	c3                   	ret
 8634b5f:	90                   	nop

```

```c
// TimerPremiumServiceStart::dispatch_sig @ 0x8634a30

/* TimerPremiumServiceStart::dispatch_sig(int, int, unsigned int) */

undefined4 __thiscall
TimerPremiumServiceStart::dispatch_sig
          (TimerPremiumServiceStart *this,int param_1,int param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  CUser *this_00;
  undefined4 uVar3;
  uint uVar4;
  CUserPremium *pCVar5;
  int *piVar6;
  
  iVar2 = G_CGameManager();
  this_00 = (CUser *)CGameManager::getUser(iVar2,param_1);
  if (this_00 == (CUser *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar4 = CUser::get_acc_id(this_00);
    if (uVar4 == param_3) {
      pCVar5 = (CUserPremium *)CUser::GetPremiumInfoW(this_00);
      cVar1 = WongWork::CUserPremium::startPremium(pCVar5,param_2,false);
      if (cVar1 == '\x01') {
        iVar2 = CUser::get_state(this_00);
        if (2 < iVar2) {
          pCVar5 = (CUserPremium *)CUser::GetPremiumInfo(this_00);
          piVar6 = (int *)WongWork::CUserPremium::GetPremiumInfo(pCVar5,param_2);
          if (*piVar6 == 0) {
            return 1;
          }
          WongWork::CHandlePremium::handleNotifyPremiumInfo(this_00,*piVar6,piVar6[2] - piVar6[1]);
          if (*(int *)(g_SPremiumInfo + *piVar6 * 0x120) == 2) {
            return 1;
          }
          WongWork::CHandlePremium::handlePremiumEffect(this_00,*piVar6);
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

