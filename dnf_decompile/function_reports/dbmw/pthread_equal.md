# pthread_equal

`pthread_equal`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a5cb0` | `0x11` | `0x80a4f18` | `0x11` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,8 @@
 push   %ebp
 mov    %esp,%ebp
-mov    0xc(%ebp),%eax
-cmp    %eax,0x8(%ebp)
-pop    %ebp
+mov    0x8(%ebp),%eax
+cmp    0xc(%ebp),%eax
 sete   %al
 movzbl %al,%eax
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

int pthread_equal(pthread_t __thread1,pthread_t __thread2)

{
  return (uint)(__thread1 == __thread2);
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/ServerCommon/Thread.cpp](source/DNFServer/ServerCommon/Thread.cpp)（约第 6 行）：

```cpp
extern "C" int pthread_equal(pthread_t t1, pthread_t t2) {
    return t1 == t2;
}
```
