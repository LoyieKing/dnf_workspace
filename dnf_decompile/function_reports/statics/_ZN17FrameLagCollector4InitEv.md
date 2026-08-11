# _ZN17FrameLagCollector4InitEv

`FrameLagCollector::Init()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80666c6` | `0x50` | `0x805f9fc` | `0x54` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movzbl (%eax),%eax
+mov    %al,-0xd(%ebp)
+mov    0x8(%ebp),%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN17FrameLagCollector4InitEv+0x17>
-mov    $0x1,%eax
-jmp    <T> <_ZN17FrameLagCollector4InitEv+0x4e>
+jne    <T> <_ZN17FrameLagCollector4InitEv+0x4b>
 mov    0x8(%ebp),%eax
 movb   $0x1,(%eax)
 movl   $0x0,(%esp)
 call   <T> <time>
-mov    %eax,-0x10(%ebp)
-lea    -0x10(%ebp),%eax
+mov    %eax,-0x14(%ebp)
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <localtime>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    0xc(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x98(%eax)
-mov    $0x0,%eax
+cmpb   $0x0,-0xd(%ebp)
+setne  %al
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::Init() */

bool __thiscall FrameLagCollector::_ZN17FrameLagCollector4InitEv(FrameLagCollector *this)

{
  FrameLagCollector FVar1;
  tm *ptVar2;
  time_t local_14 [4];
  
  FVar1 = *this;
  if (FVar1 == (FrameLagCollector)0x0) {
    *this = (FrameLagCollector)0x1;
    local_14[0] = time((time_t *)0x0);
    ptVar2 = localtime(local_14);
    *(int *)(this + 0x98) = ptVar2->tm_mday;
  }
  return FVar1 != (FrameLagCollector)0x0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 57 行）：

```cpp
bool FrameLagCollector::Init()
{
    char ret = m_field0;
    if (m_field0 == 0)
    {
        m_field0 = 1;
        time_t now = time(0);
        tm* pt = localtime(&now);
        m_today = pt->tm_mday;
    }
    return ret != 0;
}
```
