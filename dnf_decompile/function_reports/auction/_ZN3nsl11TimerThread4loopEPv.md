# _ZN3nsl11TimerThread4loopEPv

`nsl::TimerThread::loop(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80b422e` | `0x11c` | `0x80b2e0e` | `0x11b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,80 +1,79 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,%edx
 sar    $0x1f,%edx
 mov    %eax,-0x20(%ebp)
 mov    %edx,-0x1c(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TimerThread15PopTimeReqEventEv>
 mov    0x8(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11TimeManager6onTimeEv>
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,%edx
 sar    $0x1f,%edx
 mov    %eax,-0x18(%ebp)
 mov    %edx,-0x14(%ebp)
+mov    -0x18(%ebp),%eax
+mov    -0x14(%ebp),%edx
 mov    -0x20(%ebp),%ecx
 mov    -0x1c(%ebp),%ebx
-mov    -0x18(%ebp),%eax
-mov    -0x14(%ebp),%edx
 sub    %ecx,%eax
 sbb    %ebx,%edx
 mov    %eax,-0x10(%ebp)
 mov    %edx,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-jb     <T> <_ZN3nsl11TimerThread4loopEPv+0xc0>
+jb     <T> <_ZN3nsl11TimerThread4loopEPv+0xbf>
 cmpl   $0x0,-0xc(%ebp)
 ja     <T> <_ZN3nsl11TimerThread4loopEPv+0x76>
 cmpl   $0x14,-0x10(%ebp)
-jbe    <T> <_ZN3nsl11TimerThread4loopEPv+0xc0>
+jbe    <T> <_ZN3nsl11TimerThread4loopEPv+0xbf>
 movl   $"TimerThread spent more time than NEXT_CHECK_TIME",(%esp)
 call   <T> <puts>
 mov    -0x10(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    %eax,0x4(%esp)
 mov    %edx,0x8(%esp)
 movl   $"Elapsed Time: %lld\n",(%esp)
 call   <T> <printf>
 mov    0x8(%ebp),%eax
 add    $0x20,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl6RBTreeIiPNS_11ITimeEntityELi1024EE4SizeEv>
 mov    %eax,0x4(%esp)
 movl   $"Map size: %d\n",(%esp)
 call   <T> <printf>
-nop
 jmp    <T> <_ZN3nsl11TimerThread4loopEPv+0x7>
 mov    -0x10(%ebp),%eax
 mov    $0x14,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 test   %eax,%eax
-jns    <T> <_ZN3nsl11TimerThread4loopEPv+0x101>
+jns    <T> <_ZN3nsl11TimerThread4loopEPv+0x100>
 movl   $0x0,(%esp)
 call   <T> <_ZN3nsl7TSystemINS_11LinuxSystemEE5sleepEi>
 mov    -0x10(%ebp),%eax
 mov    $0x14,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,0x4(%esp)
-movl   $&data#b9d4887c(.rodata),(%esp)
+movl   $&data#420c7be9(.rodata),(%esp)
 call   <T> <printf>
 jmp    <T> <_ZN3nsl11TimerThread4loopEPv+0x7>
 mov    -0x10(%ebp),%eax
 mov    $0x14,%edx
 mov    %edx,%ecx
 sub    %eax,%ecx
 mov    %ecx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7TSystemINS_11LinuxSystemEE5sleepEi>
 jmp    <T> <_ZN3nsl11TimerThread4loopEPv+0x7>
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void loop(TimerThread * this, void * temp) */

void __thiscall nsl::TimerThread::_ZN3nsl11TimerThread4loopEPv(TimerThread *this,void *temp)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  do {
    while( true ) {
                    /* Unresolved local var: __int64 startTime@[???]
                       Unresolved local var: __int64 endTime@[???]
                       Unresolved local var: __int64 elapsedTime@[???] */
      uVar1 = time((time_t *)0x0);
      _ZN3nsl11TimerThread15PopTimeReqEventEv(this);
      TimeManager::_ZN3nsl11TimeManager6onTimeEv(&this->super_TimeManager);
      uVar2 = time((time_t *)0x0);
      uVar3 = uVar2 - uVar1;
      iVar4 = (((int)uVar2 >> 0x1f) - ((int)uVar1 >> 0x1f)) - (uint)(uVar2 < uVar1);
      if ((iVar4 != 0) || (0x14 < uVar3)) break;
      if ((int)(0x14 - uVar3) < 0) {
        TSystem<nsl::LinuxSystem>::sleep(0);
        printf(&DAT_08161623,0x14 - uVar3);
      }
      else {
        TSystem<nsl::LinuxSystem>::sleep(0x14 - uVar3);
      }
    }
    puts("TimerThread spent more time than NEXT_CHECK_TIME");
    printf("Elapsed Time: %lld\n",uVar3,iVar4);
    uVar1 = RBTree<int,_nsl::ITimeEntity*,_1024>::Size(&(this->super_TimeManager).timePeriodMap);
    printf("Map size: %d\n",uVar1);
  } while( true );
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TimerThread.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/TimerThread.cpp)（约第 52 行）：

```cpp
void TimerThread::loop(void* temp)
{
    // ORIG: sign-extend time() to 64-bit via sar, sub/sbb into locals, cmpl mem for unsigned >
    do
    {
        long long startTime = (long long)time(NULL);
        PopTimeReqEvent();
        super_TimeManager.onTime();
        long long endTime = (long long)time(NULL);
        unsigned long long elapsedTime = (unsigned long long)endTime - (unsigned long long)startTime;
        if (elapsedTime > (unsigned long long)0x14)
        {
            puts("TimerThread spent more time than NEXT_CHECK_TIME");
            printf("Elapsed Time: %lld\n", (long long)elapsedTime);
            printf("Map size: %d\n", super_TimeManager.timePeriodMap.Size());
        }
        else
        {
            if (0x14 - (int)elapsedTime < 0)
            {
                TSystem<LinuxSystem>::sleep(0);
                printf("\xBD\xBD\xB8\xB3 \xC5\xB8\xC0\xD3 : %d\n", 0x14 - (int)elapsedTime);
            }
            else
            {
                TSystem<LinuxSystem>::sleep(0x14 - (int)elapsedTime);
            }
        }
    } while (true);
}
```
