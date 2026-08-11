# _ZL6_evlogPKc

`_evlog(char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | NEAR | `0x804c52d` | `0x13` | `0x804f00c` | `0x13` |

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
 call   <T> <puts>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* _evlog(char const*) */

void _evlog(char *param_1)

{
  puts(param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/LinuxService.cpp](source/DNFServer/GameServer/Relay/LinuxService.cpp)（约第 15 行）：

```cpp
static void __attribute__((regparm(0))) _evlog(const char* sz)
{
    puts(sz);
}
```
