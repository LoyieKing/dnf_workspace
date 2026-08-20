# dispatch_sig

`_ZN30Inter_LoadPowerWarStatueRanker12dispatch_sigEP5CUserPci`

`Inter_LoadPowerWarStatueRanker::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_LoadPowerWarStatueRanker` | `0x084da394` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084da394  _ZN30Inter_LoadPowerWarStatueRanker12dispatch_sigEP5CUserPci
#           Inter_LoadPowerWarStatueRanker::dispatch_sig(CUser*, char*, int)
# range [0x084da394, 0x084da3bd]
084da394 +0x00:  push   %ebp
084da395 +0x01:  mov    %esp,%ebp
084da397 +0x03:  sub    $0x28,%esp
084da39a +0x06:  mov    0x10(%ebp),%eax
084da39d +0x09:  mov    %eax,-0xc(%ebp)
084da3a0 +0x0c:  mov    -0xc(%ebp),%eax
084da3a3 +0x0f:  mov    %eax,%edx
084da3a5 +0x11:  mov    &_ZN10GlobalData15s_power_managerE,%eax
084da3aa +0x16:  mov    %edx,0x4(%esp)
084da3ae +0x1a:  mov    %eax,(%esp)
084da3b1 +0x1d:  call   0847ebec <_ZN13CPowerManager26SetPowerWarUserRankingInfoEPj>  ; CPowerManager::SetPowerWarUserRankingInfo(unsigned int*)
084da3b6 +0x22:  mov    $0x0,%eax
084da3bb +0x27:  leave
084da3bc +0x28:  ret
084da3bd +0x29:  nop
```

## 反编译 C

```c
// Inter_LoadPowerWarStatueRanker::dispatch_sig @ 0x84da394

/* Inter_LoadPowerWarStatueRanker::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_LoadPowerWarStatueRanker::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  CPowerManager::SetPowerWarUserRankingInfo(GlobalData::s_power_manager,(uint *)param_3);
  return 0;
}
```
