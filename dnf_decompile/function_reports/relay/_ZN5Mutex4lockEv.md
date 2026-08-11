# _ZN5Mutex4lockEv

`Mutex::lock()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | NEAR | `0x8049f28` | `0x13` | `0x804ee10` | `0x13` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,8 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x8,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <pthread_mutex_lock>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* Mutex::lock() */

void __thiscall Mutex::_ZN5Mutex4lockEv(Mutex *this)

{
  pthread_mutex_lock((pthread_mutex_t *)this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/Helper.h](source/DNFServer/GameServer/Relay/Helper.h)（约第 17 行）：

```cpp
    void lock()
    {
        pthread_mutex_lock(&m);
    }
```
