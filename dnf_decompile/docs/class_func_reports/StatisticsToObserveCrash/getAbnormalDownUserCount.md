# getAbnormalDownUserCount

`_ZN24StatisticsToObserveCrash24getAbnormalDownUserCountEv`

`StatisticsToObserveCrash::getAbnormalDownUserCount()`

| 类 | 地址 |
|---|---|
| `StatisticsToObserveCrash` | `0x0860baee` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0860baee  _ZN24StatisticsToObserveCrash24getAbnormalDownUserCountEv
#           StatisticsToObserveCrash::getAbnormalDownUserCount()
# range [0x0860baee, 0x0860bb21]
0860baee +0x00:  push   %ebp
0860baef +0x01:  mov    %esp,%ebp
0860baf1 +0x03:  push   %ebx
0860baf2 +0x04:  sub    $0x24,%esp
0860baf5 +0x07:  mov    0x8(%ebp),%eax
0860baf8 +0x0a:  add    $0x4,%eax
0860bafb +0x0d:  mov    %eax,0x4(%esp)
0860baff +0x11:  lea    -0xc(%ebp),%eax
0860bb02 +0x14:  mov    %eax,(%esp)
0860bb05 +0x17:  call   0810544c <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xcb>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xcb
0860bb0a +0x1c:  mov    0x8(%ebp),%eax
0860bb0d +0x1f:  mov    (%eax),%ebx
0860bb0f +0x21:  lea    -0xc(%ebp),%eax
0860bb12 +0x24:  mov    %eax,(%esp)
0860bb15 +0x27:  call   08105468 <_GLOBAL__I__ZN8WongWork3IPG7CIPGMgr10CIPGWorker11CIPGNetwork9ConnectToEPKct+0xe7>  ; global constructors keyed to WongWork::IPG::CIPGMgr::CIPGWorker::CIPGNetwork::ConnectTo(char const*, unsigned short)+0xe7
0860bb1a +0x2c:  mov    %ebx,%eax
0860bb1c +0x2e:  add    $0x24,%esp
0860bb1f +0x31:  pop    %ebx
0860bb20 +0x32:  pop    %ebp
0860bb21 +0x33:  ret
```

## 反编译 C

```c
// StatisticsToObserveCrash::getAbnormalDownUserCount @ 0x860baee

/* StatisticsToObserveCrash::getAbnormalDownUserCount() */

undefined4 __thiscall
StatisticsToObserveCrash::getAbnormalDownUserCount(StatisticsToObserveCrash *this)

{
  undefined4 uVar1;
  Guard<Mutex> local_10 [8];
  
  Guard<Mutex>::Guard(local_10,(Mutex *)(this + 4));
  uVar1 = *(undefined4 *)this;
  Guard<Mutex>::~Guard(local_10);
  return uVar1;
}
```
