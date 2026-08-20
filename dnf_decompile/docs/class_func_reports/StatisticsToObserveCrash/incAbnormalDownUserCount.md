# incAbnormalDownUserCount

`_ZN24StatisticsToObserveCrash24incAbnormalDownUserCountEv`

`StatisticsToObserveCrash::incAbnormalDownUserCount()`

| 类 | 地址 |
|---|---|
| `StatisticsToObserveCrash` | `0x0860bb52` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860bb52  _ZN24StatisticsToObserveCrash24incAbnormalDownUserCountEv
#           StatisticsToObserveCrash::incAbnormalDownUserCount()
# range [0x0860bb52, 0x0860bb87]
0860bb52 +0x00:  push   %ebp
0860bb53 +0x01:  mov    %esp,%ebp
0860bb55 +0x03:  sub    $0x28,%esp
0860bb58 +0x06:  mov    0x8(%ebp),%eax
0860bb5b +0x09:  add    $0x4,%eax
0860bb5e +0x0c:  mov    %eax,0x4(%esp)
0860bb62 +0x10:  lea    -0xc(%ebp),%eax
0860bb65 +0x13:  mov    %eax,(%esp)
0860bb68 +0x16:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860bb6d +0x1b:  mov    0x8(%ebp),%eax
0860bb70 +0x1e:  mov    (%eax),%eax
0860bb72 +0x20:  lea    0x1(%eax),%edx
0860bb75 +0x23:  mov    0x8(%ebp),%eax
0860bb78 +0x26:  mov    %edx,(%eax)
0860bb7a +0x28:  lea    -0xc(%ebp),%eax
0860bb7d +0x2b:  mov    %eax,(%esp)
0860bb80 +0x2e:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bb85 +0x33:  leave
0860bb86 +0x34:  ret
0860bb87 +0x35:  nop
```

## 反编译 C

```c
// StatisticsToObserveCrash::incAbnormalDownUserCount @ 0x860bb52

/* StatisticsToObserveCrash::incAbnormalDownUserCount() */

void __thiscall StatisticsToObserveCrash::incAbnormalDownUserCount(StatisticsToObserveCrash *this)

{
  Guard<Mutex> local_10 [12];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 4));
  *(int *)this = *(int *)this + 1;
  Guard<Mutex>::~Guard(local_10);
  return;
}
```
