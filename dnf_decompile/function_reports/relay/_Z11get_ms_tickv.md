# _Z11get_ms_tickv

`get_ms_tick()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804bae6` | `0x72` | `0x804e896` | `0x75` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,43 +1,43 @@
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
 mov    %eax,-0x20(%ebp)
 mov    %eax,%edx
 sar    $0x1f,%edx
 mov    %edx,-0x1c(%ebp)
-imul   $0x3e8,-0x1c(%ebp),%esi
-imul   $0x0,-0x20(%ebp),%ecx
-add    %ecx,%esi
-mov    $0x3e8,%ecx
+imul   $0x3e8,-0x1c(%ebp),%ecx
+imul   $0x0,-0x20(%ebp),%ebx
+add    %ebx,%ecx
+mov    $0x3e8,%ebx
 mov    -0x20(%ebp),%eax
-mul    %ecx
-mov    %eax,%ecx
-mov    %edx,%ebx
-add    %ebx,%esi
-mov    %esi,%ebx
-mov    -0xc(%ebp),%esi
-mov    $0x10624dd3,%edx
-mov    %esi,%eax
-imul   %edx
+mul    %ebx
+mov    %eax,%ebx
+mov    %edx,%esi
+add    %esi,%ecx
+mov    %ecx,%esi
+mov    -0xc(%ebp),%ecx
+movl   $0x10624dd3,-0x20(%ebp)
+mov    -0x20(%ebp),%eax
+imul   %ecx
 sar    $0x6,%edx
-mov    %esi,%eax
+mov    %ecx,%eax
 sar    $0x1f,%eax
-mov    %edx,%esi
-sub    %eax,%esi
-mov    %esi,%eax
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
 mov    %eax,%edx
 sar    $0x1f,%edx
-add    %ecx,%eax
-adc    %ebx,%edx
-add    $0x30,%esp
+add    %ebx,%eax
+adc    %esi,%edx
+add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* get_ms_tick() */

undefined8 get_ms_tick(void)

{
  uint uVar1;
  uint uVar2;
  timeval local_14;
  
  gettimeofday(&local_14,(__timezone_ptr_t)0x0);
  uVar2 = (uint)((ulonglong)(uint)local_14.tv_sec * 1000);
  uVar1 = local_14.tv_usec / 1000;
  return CONCAT44(((int)uVar1 >> 0x1f) +
                  (local_14.tv_sec >> 0x1f) * 1000 +
                  (int)((ulonglong)(uint)local_14.tv_sec * 1000 >> 0x20) + (uint)CARRY4(uVar1,uVar2)
                  ,uVar1 + uVar2);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/Helper.cpp](source/DNFServer/GameServer/Relay/Helper.cpp)（约第 84 行）：

```cpp
long long get_ms_tick()
{
    struct timeval tv;
    gettimeofday(&tv, 0);
    return (long long)tv.tv_sec * 1000 + tv.tv_usec / 1000;
}
```
