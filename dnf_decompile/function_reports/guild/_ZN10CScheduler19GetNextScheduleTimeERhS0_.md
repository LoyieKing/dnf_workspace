# _ZN10CScheduler19GetNextScheduleTimeERhS0_

`CScheduler::GetNextScheduleTime(unsigned char&, unsigned char&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x805d476` | `0x1a7` | `0x80a3f12` | `0x1f7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,137 +1,173 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x68,%esp
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
+push   %ebx
+sub    $0x64,%esp
+movl   $0x0,(%esp)
 call   <T> <time>
-lea    -0x20(%ebp),%eax
+mov    %eax,-0x24(%ebp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-mov    (%eax),%edx
-mov    %edx,-0x50(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0x4c(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0x48(%ebp)
-mov    0xc(%eax),%edx
-mov    %edx,-0x44(%ebp)
-mov    0x10(%eax),%edx
-mov    %edx,-0x40(%ebp)
-mov    0x14(%eax),%edx
-mov    %edx,-0x3c(%ebp)
-mov    0x18(%eax),%edx
-mov    %edx,-0x38(%ebp)
-mov    0x1c(%eax),%edx
-mov    %edx,-0x34(%ebp)
-mov    0x20(%eax),%edx
-mov    %edx,-0x30(%ebp)
-mov    0x24(%eax),%edx
-mov    %edx,-0x2c(%ebp)
+mov    %eax,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,-0x54(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,-0x50(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0x8(%eax),%eax
+mov    %eax,-0x4c(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0xc(%eax),%eax
+mov    %eax,-0x48(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0x10(%eax),%eax
+mov    %eax,-0x44(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0x14(%eax),%eax
+mov    %eax,-0x40(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,-0x3c(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0x1c(%eax),%eax
+mov    %eax,-0x38(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0x20(%eax),%eax
+mov    %eax,-0x34(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0x24(%eax),%eax
+mov    %eax,-0x30(%ebp)
+mov    -0x20(%ebp),%eax
 mov    0x28(%eax),%eax
-mov    %eax,-0x28(%ebp)
-mov    -0x38(%ebp),%edx
+mov    %eax,-0x2c(%ebp)
+mov    -0x20(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
-movzbl 0x8(%eax,%edx,4),%eax
+mov    -0x1c(%ebp),%edx
+add    $0x2,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0xb5>
-mov    -0x48(%ebp),%ecx
-mov    -0x38(%ebp),%edx
+je     <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0xc6>
 mov    0x8(%ebp),%eax
-movzbl 0x9(%eax,%edx,4),%eax
-movsbl %al,%eax
-cmp    %eax,%ecx
-jg     <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0xb5>
-mov    -0x38(%ebp),%edx
+mov    -0x1c(%ebp),%edx
+shl    $0x2,%edx
+add    $0x9,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
+movsbl %al,%edx
+mov    -0x20(%ebp),%eax
+mov    0x8(%eax),%eax
+cmp    %eax,%edx
+jge    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x1b6>
+movl   $0xffffffff,-0x18(%ebp)
+mov    -0x1c(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+addl   $0x1,-0x14(%ebp)
+cmpl   $0x6,-0x14(%ebp)
+jg     <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0xf9>
 mov    0x8(%ebp),%eax
-movzbl 0x9(%eax,%edx,4),%eax
-mov    %eax,%edx
-mov    0xc(%ebp),%eax
-mov    %dl,(%eax)
-mov    -0x38(%ebp),%edx
+mov    -0x14(%ebp),%edx
+add    $0x2,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
+test   %al,%al
+sete   %al
+test   %al,%al
+jne    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0xd3>
+jmp    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0xfa>
+nop
+cmpl   $0x6,-0x14(%ebp)
+jg     <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x108>
+mov    -0x14(%ebp),%eax
+mov    %eax,-0x18(%ebp)
+jmp    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x13d>
+movl   $0x0,-0xc(%ebp)
+jmp    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x132>
 mov    0x8(%ebp),%eax
-movzbl 0xa(%eax,%edx,4),%eax
-mov    %eax,%edx
-mov    0x10(%ebp),%eax
-mov    %dl,(%eax)
-lea    -0x20(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <localtime>
-jmp    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x1a5>
-movb   $0x0,-0x19(%ebp)
-movl   $0x0,-0x18(%ebp)
-movl   $0x0,-0x14(%ebp)
-mov    -0x38(%ebp),%eax
-add    $0x1,%eax
-mov    %eax,-0x10(%ebp)
-jmp    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0xf1>
-mov    -0x10(%ebp),%edx
-mov    0x8(%ebp),%eax
-movzbl 0x8(%eax,%edx,4),%eax
+mov    -0xc(%ebp),%edx
+add    $0x2,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0xed>
-movb   $0x1,-0x19(%ebp)
-mov    -0x10(%ebp),%eax
+je     <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x12e>
+mov    -0xc(%ebp),%eax
 mov    %eax,-0x18(%ebp)
-jmp    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0xfc>
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x6,-0x10(%ebp)
+jmp    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x13d>
+addl   $0x1,-0xc(%ebp)
+cmpl   $0x6,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0xd2>
-cmpb   $0x0,-0x19(%ebp)
-je     <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x113>
-mov    -0x38(%ebp),%eax
+jne    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x111>
+cmpl   $0x6,-0x14(%ebp)
+jg     <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x151>
+mov    -0x1c(%ebp),%eax
 mov    -0x18(%ebp),%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
-mov    %eax,-0x14(%ebp)
-jmp    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x156>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x137>
-mov    -0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
-movzbl 0x8(%eax,%edx,4),%eax
-test   %al,%al
-je     <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x133>
-mov    -0xc(%ebp),%eax
-mov    %eax,-0x18(%ebp)
-jmp    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x142>
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x6,-0xc(%ebp)
-setle  %al
-test   %al,%al
-jne    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x11c>
-mov    -0x38(%ebp),%eax
-mov    $0x7,%edx
-mov    %edx,%ecx
-sub    %eax,%ecx
-mov    %ecx,%eax
+jmp    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x15c>
+mov    $0x7,%eax
+sub    -0x1c(%ebp),%eax
 add    -0x18(%ebp),%eax
-mov    %eax,-0x14(%ebp)
-lea    -0x50(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+imul   $0x15180,%eax,%ebx
+lea    -0x54(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <mktime>
-mov    %eax,-0x24(%ebp)
-mov    -0x14(%ebp),%eax
-imul   $0x15180,%eax,%edx
-mov    -0x24(%ebp),%eax
-lea    (%edx,%eax,1),%eax
-mov    %eax,-0x24(%ebp)
+lea    (%ebx,%eax,1),%eax
+mov    %eax,-0x28(%ebp)
+mov    0x8(%ebp),%eax
 mov    -0x18(%ebp),%edx
-mov    0x8(%ebp),%eax
-movzbl 0x9(%eax,%edx,4),%eax
+shl    $0x2,%edx
+add    $0x9,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
 mov    %eax,%edx
 mov    0xc(%ebp),%eax
 mov    %dl,(%eax)
+mov    0x8(%ebp),%eax
 mov    -0x18(%ebp),%edx
+shl    $0x2,%edx
+add    $0xa,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
+mov    %eax,%edx
+mov    0x10(%ebp),%eax
+mov    %dl,(%eax)
+lea    -0x28(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <localtime>
+jmp    <T> <_ZN10CScheduler19GetNextScheduleTimeERhS0_+0x1f1>
 mov    0x8(%ebp),%eax
-movzbl 0xa(%eax,%edx,4),%eax
+mov    -0x1c(%ebp),%edx
+shl    $0x2,%edx
+add    $0x9,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
+mov    %eax,%edx
+mov    0xc(%ebp),%eax
+mov    %dl,(%eax)
+mov    0x8(%ebp),%eax
+mov    -0x1c(%ebp),%edx
+shl    $0x2,%edx
+add    $0xa,%edx
+add    %edx,%eax
+movzbl (%eax),%eax
 mov    %eax,%edx
 mov    0x10(%ebp),%eax
 mov    %dl,(%eax)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
-leave
+add    $0x64,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CScheduler::GetNextScheduleTime(unsigned char&, unsigned char&) */

void __thiscall
CScheduler::_ZN10CScheduler19GetNextScheduleTimeERhS0_
          (CScheduler *this,uchar *param_1,uchar *param_2)

{
  tm *ptVar1;
  time_t tVar2;
  tm local_54;
  int local_28;
  time_t local_24;
  char local_1d;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  time(&local_24);
  ptVar1 = localtime(&local_24);
  local_54.tm_sec = ptVar1->tm_sec;
  local_54.tm_min = ptVar1->tm_min;
  local_54.tm_hour = ptVar1->tm_hour;
  local_54.tm_mday = ptVar1->tm_mday;
  local_54.tm_mon = ptVar1->tm_mon;
  local_54.tm_year = ptVar1->tm_year;
  local_54.tm_wday = ptVar1->tm_wday;
  local_54.tm_yday = ptVar1->tm_yday;
  local_54.tm_isdst = ptVar1->tm_isdst;
  local_54.tm_gmtoff = ptVar1->tm_gmtoff;
  local_54.tm_zone = ptVar1->tm_zone;
  if ((this[local_54.tm_wday * 4 + 8] == (CScheduler)0x0) ||
     ((char)this[local_54.tm_wday * 4 + 9] < local_54.tm_hour)) {
    local_1d = '\0';
    local_1c = 0;
    local_14 = local_54.tm_wday;
    do {
      local_14 = local_14 + 1;
      if (6 < local_14) goto LAB_0805d572;
    } while (this[local_14 * 4 + 8] == (CScheduler)0x0);
    local_1d = '\x01';
    local_1c = local_14;
LAB_0805d572:
    if (local_1d == '\0') {
      for (local_10 = 0; local_10 < 7; local_10 = local_10 + 1) {
        if (this[local_10 * 4 + 8] != (CScheduler)0x0) {
          local_1c = local_10;
          break;
        }
      }
      local_18 = (7 - local_54.tm_wday) + local_1c;
    }
    else {
      local_18 = local_1c - local_54.tm_wday;
    }
    tVar2 = mktime(&local_54);
    local_28 = local_18 * 0x15180 + tVar2;
    *param_1 = (uchar)this[local_1c * 4 + 9];
    *param_2 = (uchar)this[local_1c * 4 + 10];
    localtime(&local_28);
  }
  else {
    *param_1 = (uchar)this[local_54.tm_wday * 4 + 9];
    *param_2 = (uchar)this[local_54.tm_wday * 4 + 10];
    localtime(&local_24);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/Scheduler.cpp, source/DNFServer/GameServer/Monitor/Scheduler.cpp, source/DNFServer/GameServer/Statics/Scheduler.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h 等 621 个文件*
