# _ZN3nsl11get_ms_tickEv

`nsl::get_ms_tick()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80adab2` | `0x77` | `0x80a9df4` | `0x6c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,39 +1,36 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x30,%esp
+sub    $0x20,%esp
 movl   $0x0,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <gettimeofday>
 mov    -0x10(%ebp),%eax
-mov    %eax,-0x20(%ebp)
 mov    %eax,%edx
 sar    $0x1f,%edx
-mov    %edx,-0x1c(%ebp)
-imul   $0x3e8,-0x1c(%ebp),%ecx
-imul   $0x0,-0x20(%ebp),%ebx
+imul   $0x3e8,%edx,%ecx
+imul   $0x0,%eax,%ebx
 add    %ebx,%ecx
 mov    $0x3e8,%ebx
-mov    -0x20(%ebp),%eax
 mul    %ebx
+add    %edx,%ecx
+mov    %ecx,%edx
 mov    %eax,%ebx
 mov    %edx,%esi
-add    %esi,%ecx
-mov    %ecx,%esi
 mov    -0xc(%ebp),%eax
 mov    %eax,%edx
 sar    $0x1f,%edx
 movl   $0x3e8,0x8(%esp)
 movl   $0x0,0xc(%esp)
 mov    %eax,(%esp)
 mov    %edx,0x4(%esp)
 call   <T> <__udivdi3>
 add    %ebx,%eax
 adc    %esi,%edx
-add    $0x30,%esp
+add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

__int64 nsl::_ZN3nsl11get_ms_tickEv(void)

{
  longlong lVar1;
  timeval local_14;
  
                    /* Unresolved local var: timeval tv@[???] */
  gettimeofday(&local_14,(__timezone_ptr_t)0x0);
  lVar1 = __udivdi3(local_14.tv_usec,local_14.tv_usec >> 0x1f,1000,0);
  return lVar1 + CONCAT44((local_14.tv_sec >> 0x1f) * 1000 +
                          (int)((ulonglong)(uint)local_14.tv_sec * 1000 >> 0x20),
                          (int)((ulonglong)(uint)local_14.tv_sec * 1000));
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/System.cpp](source/ChannelOld/DNFChannelBridge/System.cpp)（约第 21 行）：

```cpp
__int64 get_ms_tick()
{
    timeval tv;
    gettimeofday(&tv, NULL);
    return (__int64)tv.tv_sec * 1000 + tv.tv_usec / 1000;
}
```
