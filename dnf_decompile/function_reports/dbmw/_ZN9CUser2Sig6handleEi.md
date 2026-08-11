# _ZN9CUser2Sig6handleEi

`CUser2Sig::handle(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8055d96` | `0x56` | `0x8092cce` | `0x56` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,23 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0x20,0x8(%esp)
-movl   $"handle",0x4(%esp)
+movl   $"CUser2Sig",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-movl   $"CUser2Sig::handle( int sig )",0x8(%esp)
-movl   $"./log/Signal",0x4(%esp)
+movl   $"SIGUSR2",0x8(%esp)
+movl   $"USER2",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 test   %eax,%eax
 je     <T> <_ZN9CUser2Sig6handleEi+0x54>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15TranslateSignalEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser2Sig::handle(int) */

void CUser2Sig::_ZN9CUser2Sig6handleEi(int param_1)

{
  CMyFileLog local_14 [16];
  
  CMyFileLog::CMyFileLog(local_14,"handle",0x20);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/Signal","CUser2Sig::handle( int sig )");
  if (*(int *)(param_1 + 4) != 0) {
    CApplication::_ZN12CApplication15TranslateSignalEv(*(CApplication **)(param_1 + 4));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFUser1Sig.cpp](source/DNFServer/GameServer/COServer/DNFUser1Sig.cpp)（约第 33 行）：

```cpp
void CUser2Sig::handle(int sig)
{
    DNF_LOG_SCOPE_LINE(0x20, "./log/Signal", "CUser2Sig::handle( int sig )");
    if (m_app != 0)
    {
        m_app->TranslateSignal();
    }
}
```
