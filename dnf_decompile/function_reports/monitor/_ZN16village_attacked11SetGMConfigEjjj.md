# _ZN16village_attacked11SetGMConfigEjjj

`village_attacked::SetGMConfig(unsigned int, unsigned int, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a81ef` | `0x12d` | `0x80a6b57` | `0x12b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,88 +1,81 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x88,%esp
 cmpl   $0x0,0x8(%ebp)
 jne    <T> <_ZN16village_attacked11SetGMConfigEjjj+0x18>
 movl   $0x258,0x8(%ebp)
 jmp    <T> <_ZN16village_attacked11SetGMConfigEjjj+0x2c>
 mov    0x8(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%edx
 shl    $0x4,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,0x8(%ebp)
 cmpl   $0x0,0xc(%ebp)
-jne    <T> <_ZN16village_attacked11SetGMConfigEjjj+0x3c>
-mov    &_ZN16village_attackedL9tGMConfigE+0x8,%eax
-mov    %eax,0xc(%ebp)
-jmp    <T> <_ZN16village_attacked11SetGMConfigEjjj+0x50>
+jne    <T> <_ZN16village_attacked11SetGMConfigEjjj+0x3b>
+movl   $0x258,0xc(%ebp)
+jmp    <T> <_ZN16village_attacked11SetGMConfigEjjj+0x4f>
 mov    0xc(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%edx
 shl    $0x4,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,0xc(%ebp)
 cmpl   $0x0,0x10(%ebp)
-jne    <T> <_ZN16village_attacked11SetGMConfigEjjj+0x60>
-mov    &_ZN16village_attackedL9tGMConfigE+0xc,%eax
-mov    %eax,0x10(%ebp)
-jmp    <T> <_ZN16village_attacked11SetGMConfigEjjj+0x74>
+jne    <T> <_ZN16village_attacked11SetGMConfigEjjj+0x5e>
+movl   $0x258,0x10(%ebp)
+jmp    <T> <_ZN16village_attacked11SetGMConfigEjjj+0x72>
 mov    0x10(%ebp),%eax
 shl    $0x2,%eax
 mov    %eax,%edx
 shl    $0x4,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,0x10(%ebp)
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 add    $0x3c,%eax
 mov    %eax,-0x10(%ebp)
 mov    -0x10(%ebp),%eax
 add    0x8(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 lea    -0x40(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime_r>
 lea    -0x6c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime_r>
 mov    -0x28(%ebp),%eax
 mov    %eax,&_ZN16village_attacked26village_attacked_schedulerE+0x30
 mov    -0x38(%ebp),%eax
 mov    %eax,&_ZN16village_attacked26village_attacked_schedulerE+0x34
 mov    -0x3c(%ebp),%eax
 mov    %eax,&_ZN16village_attacked26village_attacked_schedulerE+0x38
 mov    -0x54(%ebp),%eax
 mov    %eax,&_ZN16village_attacked26village_attacked_schedulerE+0x3c
 mov    -0x64(%ebp),%eax
 mov    %eax,&_ZN16village_attacked26village_attacked_schedulerE+0x40
 mov    -0x68(%ebp),%eax
 mov    %eax,&_ZN16village_attacked26village_attacked_schedulerE+0x44
-mov    &_ZN16village_attackedL9tGMConfigE,%eax
-mov    %eax,&_ZN16village_attacked19MAX_SCHEDULER_COUNTE
-mov    &_ZN16village_attackedL9tGMConfigE+0x4,%eax
-mov    %eax,&_ZN16village_attacked26HUNTING_POINT_WEIGTH_CONSTE
+movl   $0x1,&_ZN16village_attacked19MAX_SCHEDULER_COUNTE
+movl   $0x1,&_ZN16village_attacked26HUNTING_POINT_WEIGTH_CONSTE
 mov    0xc(%ebp),%eax
 mov    %eax,&_ZN16village_attacked16REWARD_BUFF_TIMEE
 mov    0x10(%ebp),%eax
 mov    %eax,&_ZN16village_attacked19REWARD_PENALTY_TIMEE
-mov    &_ZN16village_attackedL9tGMConfigE+0x10,%eax
-mov    %eax,&_ZN16village_attacked20COUNTDOWN_FIRST_TIMEE
-mov    &_ZN16village_attackedL9tGMConfigE+0x14,%eax
-mov    %eax,&_ZN16village_attacked21COUNTDOWN_SECOND_TIMEE
-mov    &_ZN16village_attackedL9tGMConfigE+0x18,%eax
-mov    %eax,&_ZN16village_attacked20COUNTDOWN_THIRD_TIMEE
+movl   $0x1e,&_ZN16village_attacked20COUNTDOWN_FIRST_TIMEE
+movl   $0x14,&_ZN16village_attacked21COUNTDOWN_SECOND_TIMEE
+movl   $0xa,&_ZN16village_attacked20COUNTDOWN_THIRD_TIMEE
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* village_attacked::SetGMConfig(unsigned int, unsigned int, unsigned int) */

void village_attacked::_ZN16village_attacked11SetGMConfigEjjj
               (uint param_1,uint param_2,uint param_3)

{
  tm local_70;
  tm local_44;
  int local_18;
  int local_14;
  time_t local_10;
  
  if (param_1 == 0) {
    param_1 = 600;
  }
  else {
    param_1 = param_1 * 0x3c;
  }
  if (param_2 == 0) {
    param_2 = DAT_0813a994;
  }
  else {
    param_2 = param_2 * 0x3c;
  }
  if (param_3 == 0) {
    param_3 = DAT_0813a998;
  }
  else {
    param_3 = param_3 * 0x3c;
  }
  local_10 = time((time_t *)0x0);
  local_14 = local_10 + 0x3c;
  local_18 = local_14 + param_1;
  localtime_r(&local_14,&local_44);
  localtime_r(&local_18,&local_70);
  _DAT_081bae50 = local_44.tm_wday;
  _DAT_081bae54 = local_44.tm_hour;
  _DAT_081bae58 = local_44.tm_min;
  _DAT_081bae5c = local_70.tm_wday;
  _DAT_081bae60 = local_70.tm_hour;
  _DAT_081bae64 = local_70.tm_min;
  MAX_SCHEDULER_COUNT = tGMConfig;
  HUNTING_POINT_WEIGTH_CONST = DAT_0813a990;
  REWARD_BUFF_TIME = param_2;
  REWARD_PENALTY_TIME = param_3;
  COUNTDOWN_FIRST_TIME = DAT_0813a99c;
  COUNTDOWN_SECOND_TIME = DAT_0813a9a0;
  COUNTDOWN_THIRD_TIME = DAT_0813a9a4;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 105 行）：

```cpp
void SetGMConfig(unsigned int a, unsigned int b, unsigned int c)
{
    if (a == 0)
    {
        a = 600;
    }
    else
    {
        a = a * 0x3c;
    }
    if (b == 0)
    {
        b = 600;
    }
    else
    {
        b = b * 0x3c;
    }
    if (c == 0)
    {
        c = 600;
    }
    else
    {
        c = c * 0x3c;
    }
    time_t now = time(0);
    time_t start = now + 0x3c;
    time_t end = start + a;
    tm t1;
    tm t2;
    localtime_r(&start, &t1);
    localtime_r(&end, &t2);
    village_attacked_scheduler[12] = t1.tm_wday;
    village_attacked_scheduler[13] = t1.tm_hour;
    village_attacked_scheduler[14] = t1.tm_min;
    village_attacked_scheduler[15] = t2.tm_wday;
    village_attacked_scheduler[16] = t2.tm_hour;
    village_attacked_scheduler[17] = t2.tm_min;
    MAX_SCHEDULER_COUNT = 1;
    HUNTING_POINT_WEIGTH_CONST = 1;
    REWARD_BUFF_TIME = b;
    REWARD_PENALTY_TIME = c;
    COUNTDOWN_FIRST_TIME = 30;
    COUNTDOWN_SECOND_TIME = 20;
    COUNTDOWN_THIRD_TIME = 10;
}
```
