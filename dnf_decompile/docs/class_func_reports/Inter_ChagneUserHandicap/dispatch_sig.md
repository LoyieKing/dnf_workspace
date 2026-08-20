# dispatch_sig

`_ZN24Inter_ChagneUserHandicap12dispatch_sigEP5CUserPci`

`Inter_ChagneUserHandicap::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_ChagneUserHandicap` | `0x084d271e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d271e  _ZN24Inter_ChagneUserHandicap12dispatch_sigEP5CUserPci
#           Inter_ChagneUserHandicap::dispatch_sig(CUser*, char*, int)
# range [0x084d271e, 0x084d279d]
084d271e +0x00:  push   %ebp
084d271f +0x01:  mov    %esp,%ebp
084d2721 +0x03:  push   %ebx
084d2722 +0x04:  sub    $0x24,%esp
084d2725 +0x07:  mov    0x10(%ebp),%eax
084d2728 +0x0a:  mov    %eax,-0x10(%ebp)
084d272b +0x0d:  mov    -0x10(%ebp),%eax
084d272e +0x10:  mov    0xa(%eax),%ebx
084d2731 +0x13:  call   080cc18e <_GLOBAL__I__ZN10BingoEventC2Ev+0xfdb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfdb
084d2736 +0x18:  mov    %ebx,0x4(%esp)
084d273a +0x1c:  mov    %eax,(%esp)
084d273d +0x1f:  call   082948c6 <_ZN12CGameManager14GetUserByAccIdEj>  ; CGameManager::GetUserByAccId(unsigned int)
084d2742 +0x24:  mov    %eax,-0xc(%ebp)
084d2745 +0x27:  cmpl   $0x0,-0xc(%ebp)
084d2749 +0x2b:  je     084d275b <+0x3d>
084d274b +0x2d:  mov    -0xc(%ebp),%eax
084d274e +0x30:  mov    %eax,(%esp)
084d2751 +0x33:  call   080da38c <_GLOBAL__I__ZN18BlueMarbleUserInfoC2Ev+0x529>  ; global constructors keyed to BlueMarbleUserInfo::BlueMarbleUserInfo()+0x529
084d2756 +0x38:  cmp    $0x1,%eax
084d2759 +0x3b:  jg     084d2762 <+0x44>
084d275b +0x3d:  mov    $0x1,%eax
084d2760 +0x42:  jmp    084d2767 <+0x49>
084d2762 +0x44:  mov    $0x0,%eax
084d2767 +0x49:  test   %al,%al
084d2769 +0x4b:  je     084d2772 <+0x54>
084d276b +0x4d:  mov    $0x0,%eax
084d2770 +0x52:  jmp    084d2797 <+0x79>
084d2772 +0x54:  mov    -0x10(%ebp),%eax
084d2775 +0x57:  mov    0xe(%eax),%eax
084d2778 +0x5a:  cmp    $0x1,%eax
084d277b +0x5d:  jne    084d2792 <+0x74>
084d277d +0x5f:  mov    -0x10(%ebp),%eax
084d2780 +0x62:  mov    0x12(%eax),%eax
084d2783 +0x65:  mov    %eax,0x4(%esp)
084d2787 +0x69:  mov    -0xc(%ebp),%eax
084d278a +0x6c:  mov    %eax,(%esp)
084d278d +0x6f:  call   0828715c <_GLOBAL__I__ZN16Secu_DataControl14SetControlDataEP5CUserhtt+0x9a>  ; global constructors keyed to Secu_DataControl::SetControlData(CUser*, unsigned char, unsigned short, unsigned short)+0x9a
084d2792 +0x74:  mov    $0x0,%eax
084d2797 +0x79:  add    $0x24,%esp
084d279a +0x7c:  pop    %ebx
084d279b +0x7d:  pop    %ebp
084d279c +0x7e:  ret
084d279d +0x7f:  nop
```

## 反编译 C

```c
// Inter_ChagneUserHandicap::dispatch_sig @ 0x84d271e

/* Inter_ChagneUserHandicap::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_ChagneUserHandicap::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  CGameManager *this;
  CUser *this_00;
  int iVar3;
  
  uVar1 = *(uint *)(param_3 + 10);
  this = (CGameManager *)G_CGameManager();
  this_00 = (CUser *)CGameManager::GetUserByAccId(this,uVar1);
  if ((this_00 == (CUser *)0x0) || (iVar3 = CUser::get_state(this_00), iVar3 < 2)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if ((!bVar2) && (*(int *)(param_3 + 0xe) == 1)) {
    CUser::setStdDropRate(this_00,*(int *)(param_3 + 0x12));
  }
  return 0;
}
```
