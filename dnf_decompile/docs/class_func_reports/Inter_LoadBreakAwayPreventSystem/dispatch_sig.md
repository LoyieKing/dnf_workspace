# dispatch_sig

`_ZN32Inter_LoadBreakAwayPreventSystem12dispatch_sigEP5CUserPci`

`Inter_LoadBreakAwayPreventSystem::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadBreakAwayPreventSystem` | `0x084d928c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d928c  _ZN32Inter_LoadBreakAwayPreventSystem12dispatch_sigEP5CUserPci
#           Inter_LoadBreakAwayPreventSystem::dispatch_sig(CUser*, char*, int)
# range [0x084d928c, 0x084d92b3]
084d928c +0x00:  push   %ebp
084d928d +0x01:  mov    %esp,%ebp
084d928f +0x03:  sub    $0x28,%esp
084d9292 +0x06:  mov    0x10(%ebp),%eax
084d9295 +0x09:  mov    %eax,-0xc(%ebp)
084d9298 +0x0c:  mov    &_ZN10GlobalData14s_BreakAwaySysE,%eax
084d929d +0x11:  mov    -0xc(%ebp),%edx
084d92a0 +0x14:  mov    %edx,0x4(%esp)
084d92a4 +0x18:  mov    %eax,(%esp)
084d92a7 +0x1b:  call   0831c49e <_ZN18break_away_prevent23CBreakAwayPreventSystem10loadDbDataEP37SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER>  ; break_away_prevent::CBreakAwayPreventSystem::loadDbData(SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER*)
084d92ac +0x20:  mov    $0x0,%eax
084d92b1 +0x25:  leave
084d92b2 +0x26:  ret
084d92b3 +0x27:  nop
```

## 反编译 C

```c
// Inter_LoadBreakAwayPreventSystem::dispatch_sig @ 0x84d928c

/* Inter_LoadBreakAwayPreventSystem::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadBreakAwayPreventSystem::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  break_away_prevent::CBreakAwayPreventSystem::loadDbData
            (GlobalData::s_BreakAwaySys,(SIG_BREAK_AWAY_PREVENT_SYSTEM_MANAGER *)param_3);
  return 0;
}
```
