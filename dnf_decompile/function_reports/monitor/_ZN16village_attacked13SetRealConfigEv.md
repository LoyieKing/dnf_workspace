# _ZN16village_attacked13SetRealConfigEv

`village_attacked::SetRealConfig()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a80f0` | `0xff` | `0x80a6a58` | `0xff` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,36 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
 movl   $0x2,&_ZN16village_attacked26village_attacked_schedulerE
 movl   $0x15,&_ZN16village_attacked26village_attacked_schedulerE+0x4
 movl   $0x1e,&_ZN16village_attacked26village_attacked_schedulerE+0x8
 movl   $0x2,&_ZN16village_attacked26village_attacked_schedulerE+0xc
 movl   $0x16,&_ZN16village_attacked26village_attacked_schedulerE+0x10
 movl   $0x1e,&_ZN16village_attacked26village_attacked_schedulerE+0x14
 movl   $0x6,&_ZN16village_attacked26village_attacked_schedulerE+0x18
 movl   $0x15,&_ZN16village_attacked26village_attacked_schedulerE+0x1c
 movl   $0x1e,&_ZN16village_attacked26village_attacked_schedulerE+0x20
 movl   $0x6,&_ZN16village_attacked26village_attacked_schedulerE+0x24
 movl   $0x16,&_ZN16village_attacked26village_attacked_schedulerE+0x28
 movl   $0x1e,&_ZN16village_attacked26village_attacked_schedulerE+0x2c
 movl   $0xffffffff,&_ZN16village_attacked26village_attacked_schedulerE+0x30
 movl   $0xffffffff,&_ZN16village_attacked26village_attacked_schedulerE+0x34
 movl   $0xffffffff,&_ZN16village_attacked26village_attacked_schedulerE+0x38
 movl   $0xffffffff,&_ZN16village_attacked26village_attacked_schedulerE+0x3c
 movl   $0xffffffff,&_ZN16village_attacked26village_attacked_schedulerE+0x40
 movl   $0xffffffff,&_ZN16village_attacked26village_attacked_schedulerE+0x44
-mov    &_ZN16village_attackedL11tRealConfigE,%eax
-mov    %eax,&_ZN16village_attacked19MAX_SCHEDULER_COUNTE
-mov    &_ZN16village_attackedL11tRealConfigE+0x4,%eax
-mov    %eax,&_ZN16village_attacked26HUNTING_POINT_WEIGTH_CONSTE
-mov    &_ZN16village_attackedL11tRealConfigE+0x8,%eax
-mov    %eax,&_ZN16village_attacked16REWARD_BUFF_TIMEE
-mov    &_ZN16village_attackedL11tRealConfigE+0xc,%eax
-mov    %eax,&_ZN16village_attacked19REWARD_PENALTY_TIMEE
-mov    &_ZN16village_attackedL11tRealConfigE+0x10,%eax
-mov    %eax,&_ZN16village_attacked20COUNTDOWN_FIRST_TIMEE
-mov    &_ZN16village_attackedL11tRealConfigE+0x14,%eax
-mov    %eax,&_ZN16village_attacked21COUNTDOWN_SECOND_TIMEE
-mov    "<",%eax
-mov    %eax,&_ZN16village_attacked20COUNTDOWN_THIRD_TIMEE
+movl   $0x2,&_ZN16village_attacked19MAX_SCHEDULER_COUNTE
+movl   $0x4,&_ZN16village_attacked26HUNTING_POINT_WEIGTH_CONSTE
+movl   $0xe10,&_ZN16village_attacked16REWARD_BUFF_TIMEE
+movl   $0x258,&_ZN16village_attacked19REWARD_PENALTY_TIMEE
+movl   $0x258,&_ZN16village_attacked20COUNTDOWN_FIRST_TIMEE
+movl   $0x12c,&_ZN16village_attacked21COUNTDOWN_SECOND_TIMEE
+movl   $0x3c,&_ZN16village_attacked20COUNTDOWN_THIRD_TIMEE
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* village_attacked::SetRealConfig() */

void village_attacked::_ZN16village_attacked13SetRealConfigEv(void)

{
  village_attacked_scheduler = 2;
  _DAT_081bae24 = 0x15;
  _DAT_081bae28 = 0x1e;
  _DAT_081bae2c = 2;
  _DAT_081bae30 = 0x16;
  _DAT_081bae34 = 0x1e;
  DAT_081bae38 = 6;
  DAT_081bae3c = 0x15;
  DAT_081bae40 = 0x1e;
  _DAT_081bae44 = 6;
  DAT_081bae48 = 0x16;
  DAT_081bae4c = 0x1e;
  _DAT_081bae50 = 0xffffffff;
  _DAT_081bae54 = 0xffffffff;
  _DAT_081bae58 = 0xffffffff;
  _DAT_081bae5c = 0xffffffff;
  _DAT_081bae60 = 0xffffffff;
  _DAT_081bae64 = 0xffffffff;
  MAX_SCHEDULER_COUNT = tRealConfig;
  HUNTING_POINT_WEIGTH_CONST = DAT_0813a974;
  REWARD_BUFF_TIME = DAT_0813a978;
  REWARD_PENALTY_TIME = DAT_0813a97c;
  COUNTDOWN_FIRST_TIME = DAT_0813a980;
  COUNTDOWN_SECOND_TIME = DAT_0813a984;
  COUNTDOWN_THIRD_TIME = DAT_0813a988;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 76 行）：

```cpp
void SetRealConfig()
{
    village_attacked_scheduler[0] = 2;
    village_attacked_scheduler[1] = 0x15;
    village_attacked_scheduler[2] = 0x1e;
    village_attacked_scheduler[3] = 2;
    village_attacked_scheduler[4] = 0x16;
    village_attacked_scheduler[5] = 0x1e;
    village_attacked_scheduler[6] = 6;
    village_attacked_scheduler[7] = 0x15;
    village_attacked_scheduler[8] = 0x1e;
    village_attacked_scheduler[9] = 6;
    village_attacked_scheduler[10] = 0x16;
    village_attacked_scheduler[11] = 0x1e;
    village_attacked_scheduler[12] = -1;
    village_attacked_scheduler[13] = -1;
    village_attacked_scheduler[14] = -1;
    village_attacked_scheduler[15] = -1;
    village_attacked_scheduler[16] = -1;
    village_attacked_scheduler[17] = -1;
    MAX_SCHEDULER_COUNT = 2;
    HUNTING_POINT_WEIGTH_CONST = 4;
    REWARD_BUFF_TIME = 3600;
    REWARD_PENALTY_TIME = 600;
    COUNTDOWN_FIRST_TIME = 600;
    COUNTDOWN_SECOND_TIME = 300;
    COUNTDOWN_THIRD_TIME = 60;
}
```
