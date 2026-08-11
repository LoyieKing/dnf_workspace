# _ZN13CTerminateSig6handleEi

`CTerminateSig::handle(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x80521d4` | `0x2c` | `0x8062c48` | `0x2c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,15 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
-movl   $"Recv SIGTERM signal",(%esp)
+movl   $"CTerminateSig",(%esp)
 call   <T> <puts>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN13CTerminateSig6handleEi+0x2a>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication8App_StopEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTerminateSig::handle(int) */

void CTerminateSig::_ZN13CTerminateSig6handleEi(int param_1)

{
  puts("Recv SIGTERM signal");
  if (*(int *)(param_1 + 4) != 0) {
    CApplication::App_Stop(*(CApplication **)(param_1 + 4));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFTerminateSig.cpp](source/DNFServer/GameServer/DBMW/DNFTerminateSig.cpp)（约第 31 行）：

```cpp
void CTerminateSig::handle(int sig)
{
    puts("CTerminateSig");
    if (m_app)
        m_app->App_Stop();
}
```
