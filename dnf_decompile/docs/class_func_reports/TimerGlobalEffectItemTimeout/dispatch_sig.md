# dispatch_sig

`_ZN28TimerGlobalEffectItemTimeout12dispatch_sigEiij`

`TimerGlobalEffectItemTimeout::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerGlobalEffectItemTimeout` | `0x08637ec2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637ec2  _ZN28TimerGlobalEffectItemTimeout12dispatch_sigEiij
#           TimerGlobalEffectItemTimeout::dispatch_sig(int, int, unsigned int)
# range [0x08637ec2, 0x08637ef5]
08637ec2 +0x00:  push   %ebp
08637ec3 +0x01:  mov    %esp,%ebp
08637ec5 +0x03:  sub    $0x18,%esp
08637ec8 +0x06:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
08637ecf +0x0d:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
08637ed4 +0x12:  mov    %eax,%ecx
08637ed6 +0x14:  mov    0x10(%ebp),%edx
08637ed9 +0x17:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
08637ede +0x1c:  mov    %ecx,0x8(%esp)
08637ee2 +0x20:  mov    %edx,0x4(%esp)
08637ee6 +0x24:  mov    %eax,(%esp)
08637ee9 +0x27:  call   084b7a94 <_ZN20CGlobalEffectManager12checkTimeoutEjj>  ; CGlobalEffectManager::checkTimeout(unsigned int, unsigned int)
08637eee +0x2c:  mov    $0x1,%eax
08637ef3 +0x31:  leave
08637ef4 +0x32:  ret
08637ef5 +0x33:  nop
```

## 反编译 C

```c
// TimerGlobalEffectItemTimeout::dispatch_sig @ 0x8637ec2

/* TimerGlobalEffectItemTimeout::dispatch_sig(int, int, unsigned int) */

undefined4 TimerGlobalEffectItemTimeout::dispatch_sig(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  CGlobalEffectManager::checkTimeout(GlobalData::s_globalEffectManager_,param_3,uVar1);
  return 1;
}
```
