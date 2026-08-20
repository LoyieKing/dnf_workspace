# dispatch_sig

`_ZN33Inter_MonitorTowerReloadTopRanker12dispatch_sigEP5CUserPci`

`Inter_MonitorTowerReloadTopRanker::dispatch_sig(CUser*, char*, int)`

| 类 | 地址 |
|---|---|
| `Inter_MonitorTowerReloadTopRanker` | `0x084d334a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084d334a  _ZN33Inter_MonitorTowerReloadTopRanker12dispatch_sigEP5CUserPci
#           Inter_MonitorTowerReloadTopRanker::dispatch_sig(CUser*, char*, int)
# range [0x084d334a, 0x084d3363]
084d334a +0x00:  push   %ebp
084d334b +0x01:  mov    %esp,%ebp
084d334d +0x03:  sub    $0x18,%esp
084d3350 +0x06:  movl   $0x1,(%esp)
084d3357 +0x0d:  call   0842a910 <_ZN26DB_DeathTowerLoadTopRanker11makeRequestEb>  ; DB_DeathTowerLoadTopRanker::makeRequest(bool)
084d335c +0x12:  mov    $0x0,%eax
084d3361 +0x17:  leave
084d3362 +0x18:  ret
084d3363 +0x19:  nop
```

## 反编译 C

```c
// Inter_MonitorTowerReloadTopRanker::dispatch_sig @ 0x84d334a

/* Inter_MonitorTowerReloadTopRanker::dispatch_sig(CUser*, char*, int) */

undefined4 Inter_MonitorTowerReloadTopRanker::dispatch_sig(CUser *param_1,char *param_2,int param_3)

{
  DB_DeathTowerLoadTopRanker::makeRequest(true);
  return 0;
}
```
