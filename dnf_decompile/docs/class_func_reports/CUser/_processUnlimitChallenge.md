# _processUnlimitChallenge

`_ZN5CUser24_processUnlimitChallengeEjc`

`CUser::_processUnlimitChallenge(unsigned int, char)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0864a5aa` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0864a5aa  _ZN5CUser24_processUnlimitChallengeEjc
#           CUser::_processUnlimitChallenge(unsigned int, char)
# range [0x0864a5aa, 0x0864a639]
0864a5aa +0x00:  push   %ebp
0864a5ab +0x01:  mov    %esp,%ebp
0864a5ad +0x03:  sub    $0x38,%esp
0864a5b0 +0x06:  mov    0x10(%ebp),%eax
0864a5b3 +0x09:  mov    %al,-0x1c(%ebp)
0864a5b6 +0x0c:  call   0837505b <_GLOBAL__I__ZN12CServerEvent10m_nExpRateE+0xf027>  ; global constructors keyed to CServerEvent::m_nExpRate+0xf027
0864a5bb +0x11:  mov    %eax,-0xc(%ebp)
0864a5be +0x14:  cmpl   $0x0,-0xc(%ebp)
0864a5c2 +0x18:  je     0864a62d <+0x83>
0864a5c4 +0x1a:  mov    -0xc(%ebp),%eax
0864a5c7 +0x1d:  mov    %eax,(%esp)
0864a5ca +0x20:  call   08697792 <_GLOBAL__I__ZN15CPacketVerifier13m_nVaridCountE+0x3fe7>  ; global constructors keyed to CPacketVerifier::m_nVaridCount+0x3fe7
0864a5cf +0x25:  xor    $0x1,%eax
0864a5d2 +0x28:  test   %al,%al
0864a5d4 +0x2a:  jne    0864a630 <+0x86>
0864a5d6 +0x2c:  call   080cc181 <_GLOBAL__I__ZN10BingoEventC2Ev+0xfce>  ; global constructors keyed to BingoEvent::BingoEvent()+0xfce
0864a5db +0x31:  mov    0x378(%eax),%eax
0864a5e1 +0x37:  mov    %eax,0x4(%esp)
0864a5e5 +0x3b:  mov    -0xc(%ebp),%eax
0864a5e8 +0x3e:  mov    %eax,(%esp)
0864a5eb +0x41:  call   08687d6c <_ZN20CLevelRewardTableMgr10IsOnServerEi>  ; CLevelRewardTableMgr::IsOnServer(int)
0864a5f0 +0x46:  xor    $0x1,%eax
0864a5f3 +0x49:  test   %al,%al
0864a5f5 +0x4b:  jne    0864a633 <+0x89>
0864a5f7 +0x4d:  mov    -0xc(%ebp),%eax
0864a5fa +0x50:  mov    %eax,(%esp)
0864a5fd +0x53:  call   08687d18 <_ZN20CLevelRewardTableMgr22IsHaveStartLevelRewardEv>  ; CLevelRewardTableMgr::IsHaveStartLevelReward()
0864a602 +0x58:  xor    $0x1,%eax
0864a605 +0x5b:  test   %al,%al
0864a607 +0x5d:  jne    0864a636 <+0x8c>
0864a609 +0x5f:  movsbl -0x1c(%ebp),%eax
0864a60d +0x63:  mov    %eax,0xc(%esp)
0864a611 +0x67:  mov    0xc(%ebp),%eax
0864a614 +0x6a:  mov    %eax,0x8(%esp)
0864a618 +0x6e:  movl   $0x1,0x4(%esp)
0864a620 +0x76:  mov    0x8(%ebp),%eax
0864a623 +0x79:  mov    %eax,(%esp)
0864a626 +0x7c:  call   0868745e <_ZN5CUser19_processLevelRewardEjjc>  ; CUser::_processLevelReward(unsigned int, unsigned int, char)
0864a62b +0x81:  jmp    0864a637 <+0x8d>
0864a62d +0x83:  nop
0864a62e +0x84:  jmp    0864a637 <+0x8d>
0864a630 +0x86:  nop
0864a631 +0x87:  jmp    0864a637 <+0x8d>
0864a633 +0x89:  nop
0864a634 +0x8a:  jmp    0864a637 <+0x8d>
0864a636 +0x8c:  nop
0864a637 +0x8d:  leave
0864a638 +0x8e:  ret
0864a639 +0x8f:  nop
```

## 反编译 C

```c
// CUser::_processUnlimitChallenge @ 0x864a5aa

/* CUser::_processUnlimitChallenge(unsigned int, char) */

void __thiscall CUser::_processUnlimitChallenge(CUser *this,uint param_1,char param_2)

{
  char cVar1;
  CLevelRewardTableMgr *this_00;
  int iVar2;
  
  this_00 = (CLevelRewardTableMgr *)CLevelRewardTableMgr::GetInstance();
  if ((this_00 != (CLevelRewardTableMgr *)0x0) &&
     (cVar1 = CLevelRewardTableMgr::IsOn(this_00), cVar1 == '\x01')) {
    iVar2 = G_CEnvironment();
    cVar1 = CLevelRewardTableMgr::IsOnServer(this_00,*(int *)(iVar2 + 0x378));
    if ((cVar1 == '\x01') &&
       (cVar1 = CLevelRewardTableMgr::IsHaveStartLevelReward(this_00), cVar1 == '\x01')) {
      _processLevelReward(this,1,param_1,param_2);
    }
  }
  return;
}
```
