# _ZN17FrameLagCollector10RenewTodayEv

`FrameLagCollector::RenewToday()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8066716` | `0x67` | `0x805fa50` | `0x64` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,29 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0xa0(%eax)
 mov    0x8(%ebp),%eax
 mov    0xa0(%eax),%eax
 cmp    $0x9,%eax
-jle    <T> <_ZN17FrameLagCollector10RenewTodayEv+0x64>
+jle    <T> <_ZN17FrameLagCollector10RenewTodayEv+0x62>
 mov    0x8(%ebp),%eax
 movl   $0x0,0xa0(%eax)
 movl   $0x0,(%esp)
 call   <T> <time>
 mov    %eax,-0x10(%ebp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    0xc(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x98(%eax)
-jmp    <T> <_ZN17FrameLagCollector10RenewTodayEv+0x65>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::RenewToday() */

void __thiscall FrameLagCollector::_ZN17FrameLagCollector10RenewTodayEv(FrameLagCollector *this)

{
  tm *ptVar1;
  time_t local_14 [4];
  
  *(int *)(this + 0xa0) = *(int *)(this + 0xa0) + 1;
  if (9 < *(int *)(this + 0xa0)) {
    *(undefined4 *)(this + 0xa0) = 0;
    local_14[0] = time((time_t *)0x0);
    ptVar1 = localtime(local_14);
    *(int *)(this + 0x98) = ptVar1->tm_mday;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 69 行）：

```cpp
void FrameLagCollector::RenewToday()
{
    m_renewCnt++;
    if (9 < m_renewCnt)
    {
        m_renewCnt = 0;
        time_t now = time(0);
        tm* pt = localtime(&now);
        m_today = pt->tm_mday;
    }
}
```
