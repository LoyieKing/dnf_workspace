# setAbnormalDownUserCount

`_ZN24StatisticsToObserveCrash24setAbnormalDownUserCountEi`

`StatisticsToObserveCrash::setAbnormalDownUserCount(int)`

| 类 | 地址 |
|---|---|
| `StatisticsToObserveCrash` | `0x0860bb22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860bb22  _ZN24StatisticsToObserveCrash24setAbnormalDownUserCountEi
#           StatisticsToObserveCrash::setAbnormalDownUserCount(int)
# range [0x0860bb22, 0x0860bb51]
0860bb22 +0x00:  push   %ebp
0860bb23 +0x01:  mov    %esp,%ebp
0860bb25 +0x03:  sub    $0x28,%esp
0860bb28 +0x06:  mov    0x8(%ebp),%eax
0860bb2b +0x09:  add    $0x4,%eax
0860bb2e +0x0c:  mov    %eax,0x4(%esp)
0860bb32 +0x10:  lea    -0xc(%ebp),%eax
0860bb35 +0x13:  mov    %eax,(%esp)
0860bb38 +0x16:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860bb3d +0x1b:  mov    0x8(%ebp),%eax
0860bb40 +0x1e:  mov    0xc(%ebp),%edx
0860bb43 +0x21:  mov    %edx,(%eax)
0860bb45 +0x23:  lea    -0xc(%ebp),%eax
0860bb48 +0x26:  mov    %eax,(%esp)
0860bb4b +0x29:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bb50 +0x2e:  leave
0860bb51 +0x2f:  ret
```

## 反编译 C

```c
// StatisticsToObserveCrash::setAbnormalDownUserCount @ 0x860bb22

/* StatisticsToObserveCrash::setAbnormalDownUserCount(int) */

void __thiscall
StatisticsToObserveCrash::setAbnormalDownUserCount(StatisticsToObserveCrash *this,int param_1)

{
  Guard<Mutex> local_10 [12];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 4));
  *(int *)this = param_1;
  Guard<Mutex>::~Guard(local_10);
  return;
}
```
