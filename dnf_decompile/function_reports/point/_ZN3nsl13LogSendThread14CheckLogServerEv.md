# _ZN3nsl13LogSendThread14CheckLogServerEv

`nsl::LogSendThread::CheckLogServer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x80b9d46` | `0x2a` | `0x807c744` | `0x2a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,8 +1,8 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
-movl   $"void nsl::LogSendThread::CheckLogServer()",0xc(%esp)
+movl   $"bool nsl::LogSendThread::CheckLogServer()",0xc(%esp)
 movl $L,0x8(%esp)
-movl   $"LogSendThread.cpp",0x4(%esp)
+movl   $"/mnt/d/Docs/my_sources/dnf_workspace/dnf_decompile/source/DNFServer/GameServer/ServerLab/ServerLib/common_source/LogSendThread.cpp",0x4(%esp)
 movl   $"false",(%esp)
 call   <T> <__assert_fail>
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void CheckLogServer(LogSendThread * this) */

void __thiscall nsl::LogSendThread::_ZN3nsl13LogSendThread14CheckLogServerEv(LogSendThread *this)

{
                    /* WARNING: Subroutine does not return */
  __assert_fail("false","LogSendThread.cpp",0x26,"void nsl::LogSendThread::CheckLogServer()");
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/LogSendThread.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/LogSendThread.cpp)（约第 66 行）：

```cpp
bool LogSendThread::CheckLogServer()
{
    assert(false);
    return false;
}
```
