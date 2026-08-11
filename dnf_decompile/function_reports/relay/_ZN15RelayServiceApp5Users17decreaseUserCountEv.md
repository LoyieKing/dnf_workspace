# _ZN15RelayServiceApp5Users17decreaseUserCountEv

`RelayServiceApp::Users::decreaseUserCount()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x80522e4` | `0x54` | `0x8051852` | `0x4f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,0x4(%esp)
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEEC1ERS2_>
 mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    -0x1(%eax),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,(%eax)
+mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-lea    -0x1(%eax),%ecx
-mov    0x8(%ebp),%eax
-mov    %ecx,(%eax)
-mov    0x8(%ebp),%eax
-mov    (%eax),%eax
 cmp    %eax,%edx
-setl   %al
-test   %al,%al
-je     <T> <_ZN15RelayServiceApp5Users17decreaseUserCountEv+0x47>
+jge    <T> <_ZN15RelayServiceApp5Users17decreaseUserCountEv+0x42>
 mov    0x8(%ebp),%eax
 mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x4(%eax)
 lea    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11TScopedLockI11TThreadLockI16ThreadLock_linuxEED1Ev>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::Users::decreaseUserCount() */

void __thiscall RelayServiceApp::Users::_ZN15RelayServiceApp5Users17decreaseUserCountEv(Users *this)

{
  TScopedLock<TThreadLock<ThreadLock_linux>> local_10 [12];
  
  TScopedLock<TThreadLock<ThreadLock_linux>>::TScopedLock(local_10,(TThreadLock *)(this + 0xc));
  *(int *)this = *(int *)this + -1;
  if (*(int *)(this + 4) < *(int *)this) {
    *(undefined4 *)(this + 4) = *(undefined4 *)this;
  }
  TScopedLock<TThreadLock<ThreadLock_linux>>::~TScopedLock(local_10);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/RelayService.cpp](source/DNFServer/GameServer/Relay/RelayService.cpp)（约第 119 行）：

```cpp
void Users::decreaseUserCount()
{
    TScopedLock<TThreadLock<ThreadLock_linux> > scoped(m_lock1);
    m_currentUserCount--;
    if (m_currentMaxUserCount < m_currentUserCount)
    {
        m_currentMaxUserCount = m_currentUserCount;
    }
}
```
