# _Z17Neof_setCoreLimitv

`Neof_setCoreLimit()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | NEAR | `0x804ca27` | `0x3b` | `0x8057ba6` | `0x3b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
-lea    -0x14(%ebp),%eax
+sub    $0x18,%esp
+lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $0x4,(%esp)
 call   <T> <getrlimit>
-mov    %eax,-0xc(%ebp)
-movl   $0xffffffff,-0x14(%ebp)
-lea    -0x14(%ebp),%eax
+mov    %eax,-0x4(%ebp)
+movl   $0xffffffff,-0xc(%ebp)
+lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $0x4,(%esp)
 call   <T> <setrlimit>
-mov    %eax,-0xc(%ebp)
+mov    %eax,-0x4(%ebp)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* WARNING: Enum "__rlimit_resource": Some values do not have unique names */
/* Neof_setCoreLimit() */

void Neof_setCoreLimit(void)

{
  rlimit local_18;
  int local_10;
  
  local_10 = getrlimit(RLIMIT_CORE,&local_18);
  local_18.rlim_cur = 0xffffffff;
  setrlimit(RLIMIT_CORE,&local_18);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/SignalHandler.cpp](source/DNFServer/GameServer/Relay/SignalHandler.cpp)（约第 123 行）：

```cpp
void Neof_setCoreLimit()
{
    struct rlimit rl;
    int r = getrlimit(RLIMIT_CORE, &rl);
    rl.rlim_cur = 0xffffffff;
    r = setrlimit(RLIMIT_CORE, &rl);
}
```
