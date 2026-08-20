# dispatch_sig

`_ZN26TimerGlobalEffectItemBegin12dispatch_sigEiij`

`TimerGlobalEffectItemBegin::dispatch_sig(int, int, unsigned int)`

| 类 | 地址 |
|---|---|
| `TimerGlobalEffectItemBegin` | `0x08637e56` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08637e56  _ZN26TimerGlobalEffectItemBegin12dispatch_sigEiij
#           TimerGlobalEffectItemBegin::dispatch_sig(int, int, unsigned int)
# range [0x08637e56, 0x08637e77]
08637e56 +0x00:  push   %ebp
08637e57 +0x01:  mov    %esp,%ebp
08637e59 +0x03:  sub    $0x18,%esp
08637e5c +0x06:  mov    0x10(%ebp),%edx
08637e5f +0x09:  mov    &_ZN10GlobalData22s_globalEffectManager_E,%eax
08637e64 +0x0e:  mov    %edx,0x4(%esp)
08637e68 +0x12:  mov    %eax,(%esp)
08637e6b +0x15:  call   084b7c50 <_ZN20CGlobalEffectManager19beginReservedEffectEj>  ; CGlobalEffectManager::beginReservedEffect(unsigned int)
08637e70 +0x1a:  mov    $0x1,%eax
08637e75 +0x1f:  leave
08637e76 +0x20:  ret
08637e77 +0x21:  nop
```

## 反编译 C

```c
// TimerGlobalEffectItemBegin::dispatch_sig @ 0x8637e56

/* TimerGlobalEffectItemBegin::dispatch_sig(int, int, unsigned int) */

undefined4 TimerGlobalEffectItemBegin::dispatch_sig(int param_1,int param_2,uint param_3)

{
  CGlobalEffectManager::beginReservedEffect(GlobalData::s_globalEffectManager_,param_3);
  return 1;
}
```
