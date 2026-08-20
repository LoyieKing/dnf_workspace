# LogCubeStatistic

`_ZN10secretshop8IBuyRule16LogCubeStatisticEP5CUserRSt4pairIiiE`

`secretshop::IBuyRule::LogCubeStatistic(CUser*, std::pair<int, int>&)`

| 类 | 地址 |
|---|---|
| `secretshop::IBuyRule` | `0x085fb8b2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 085fb8b2  _ZN10secretshop8IBuyRule16LogCubeStatisticEP5CUserRSt4pairIiiE
#           secretshop::IBuyRule::LogCubeStatistic(CUser*, std::pair<int, int>&)
# range [0x085fb8b2, 0x085fb8ef]
085fb8b2 +0x00:  push   %ebp
085fb8b3 +0x01:  mov    %esp,%ebp
085fb8b5 +0x03:  push   %esi
085fb8b6 +0x04:  push   %ebx
085fb8b7 +0x05:  sub    $0x20,%esp
085fb8ba +0x08:  mov    0x10(%ebp),%eax
085fb8bd +0x0b:  mov    0x4(%eax),%esi
085fb8c0 +0x0e:  mov    0x10(%ebp),%eax
085fb8c3 +0x11:  mov    (%eax),%ebx
085fb8c5 +0x13:  call   0860de50 <_Z24GetInstanceCubeStatisticv>  ; GetInstanceCubeStatistic()
085fb8ca +0x18:  movl   $0x6a,0x10(%esp)
085fb8d2 +0x20:  mov    0xc(%ebp),%edx
085fb8d5 +0x23:  mov    %edx,0xc(%esp)
085fb8d9 +0x27:  mov    %esi,0x8(%esp)
085fb8dd +0x2b:  mov    %ebx,0x4(%esp)
085fb8e1 +0x2f:  mov    %eax,(%esp)
085fb8e4 +0x32:  call   0860dfb8 <_ZN14CCubeStatistic21collectCubeStatisticsEiiP5CUser20CUBE_STATISTIC_FIELD>  ; CCubeStatistic::collectCubeStatistics(int, int, CUser*, CUBE_STATISTIC_FIELD)
085fb8e9 +0x37:  add    $0x20,%esp
085fb8ec +0x3a:  pop    %ebx
085fb8ed +0x3b:  pop    %esi
085fb8ee +0x3c:  pop    %ebp
085fb8ef +0x3d:  ret
```

## 反编译 C

```c
// secretshop::IBuyRule::LogCubeStatistic @ 0x85fb8b2

/* secretshop::IBuyRule::LogCubeStatistic(CUser*, std::pair<int, int>&) */

void __thiscall secretshop::IBuyRule::LogCubeStatistic(IBuyRule *this,CUser *param_1,pair *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  CCubeStatistic *pCVar3;
  
  uVar1 = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)param_2;
  pCVar3 = (CCubeStatistic *)GetInstanceCubeStatistic();
  CCubeStatistic::collectCubeStatistics(pCVar3,uVar2,uVar1,param_1,0x6a);
  return;
}
```
