# dispatch_sig

`_ZN33Timer_UpdateOnlinePreliminaryTeam12dispatch_sigEiij`

`Timer_UpdateOnlinePreliminaryTeam::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `Timer_UpdateOnlinePreliminaryTeam` | `0x08639722` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08639722  _ZN33Timer_UpdateOnlinePreliminaryTeam12dispatch_sigEiij
#           Timer_UpdateOnlinePreliminaryTeam::dispatch_sig(int, int, unsigned int)
# range [0x08639722, 0x0863977d]
08639722 +0x00:  push   %ebp
08639723 +0x01:  mov    %esp,%ebp
08639725 +0x03:  sub    $0x28,%esp
08639728 +0x06:  mov    &_ZN10GlobalData26s_onlinePreliminaryTeamMgrE,%eax
0863972d +0x0b:  mov    0x10(%ebp),%edx
08639730 +0x0e:  mov    %edx,0x4(%esp)
08639734 +0x12:  mov    %eax,(%esp)
08639737 +0x15:  call   0858875e <_ZN18online_preliminary25COnlinePreliminaryTeamMgr8FindTeamEi>  ; online_preliminary::COnlinePreliminaryTeamMgr::FindTeam(int)
0863973c +0x1a:  mov    %eax,-0x10(%ebp)
0863973f +0x1d:  cmpl   $0x0,-0x10(%ebp)
08639743 +0x21:  je     08639770 <+0x4e>
08639745 +0x23:  mov    -0x10(%ebp),%eax
08639748 +0x26:  mov    %eax,(%esp)
0863974b +0x29:  call   08588d60 <_GLOBAL__I__ZN18online_preliminary22COnlinePreliminaryTeamC2Ev+0x53>  ; global constructors keyed to online_preliminary::COnlinePreliminaryTeam::COnlinePreliminaryTeam()+0x53
08639750 +0x2e:  mov    0x10(%ebp),%eax
08639753 +0x31:  mov    %eax,(%esp)
08639756 +0x34:  call   0863977e <_ZN33Timer_UpdateOnlinePreliminaryTeam15RegistNextTimerEi>  ; Timer_UpdateOnlinePreliminaryTeam::RegistNextTimer(int)
0863975b +0x39:  mov    %al,-0x9(%ebp)
0863975e +0x3c:  movzbl -0x9(%ebp),%eax
08639762 +0x40:  xor    $0x1,%eax
08639765 +0x43:  test   %al,%al
08639767 +0x45:  je     08639777 <+0x55>
08639769 +0x47:  mov    $0x0,%eax
0863976e +0x4c:  jmp    0863977c <+0x5a>
08639770 +0x4e:  mov    $0x0,%eax
08639775 +0x53:  jmp    0863977c <+0x5a>
08639777 +0x55:  mov    $0x1,%eax
0863977c +0x5a:  leave
0863977d +0x5b:  ret
```

## 反编译 C

```c
// Timer_UpdateOnlinePreliminaryTeam::dispatch_sig @ 0x8639722

/* Timer_UpdateOnlinePreliminaryTeam::dispatch_sig(int, int, unsigned int) */

undefined4 Timer_UpdateOnlinePreliminaryTeam::dispatch_sig(int param_1,int param_2,uint param_3)

{
  char cVar1;
  COnlinePreliminaryTeam *this;
  undefined4 uVar2;
  
  this = (COnlinePreliminaryTeam *)
         online_preliminary::COnlinePreliminaryTeamMgr::FindTeam
                   (GlobalData::s_onlinePreliminaryTeamMgr);
  if (this == (COnlinePreliminaryTeam *)0x0) {
    uVar2 = 0;
  }
  else {
    online_preliminary::COnlinePreliminaryTeam::saveData(this);
    cVar1 = RegistNextTimer(param_3);
    if (cVar1 == '\x01') {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}
```
