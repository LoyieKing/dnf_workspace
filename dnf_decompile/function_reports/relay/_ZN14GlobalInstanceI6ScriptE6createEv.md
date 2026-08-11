# _ZN14GlobalInstanceI6ScriptE6createEv

`GlobalInstance<Script>::create()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804a2f3` | `0x77` | `0x804e9b8` | `0x7f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,41 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
 push   %ebx
-sub    $0x1c,%esp
+sub    $0x24,%esp
 mov    &_ZN14GlobalInstanceI6ScriptE3m_pE,%eax
 test   %eax,%eax
-jne    <T> <_ZN14GlobalInstanceI6ScriptE6createEv+0x6e>
-movl   $&_ZN14GlobalInstanceI6ScriptE4syncE,(%esp)
+jne    <T> <_ZN14GlobalInstanceI6ScriptE6createEv+0x74>
+movl   $&_ZN14GlobalInstanceI6ScriptE6m_lockE,(%esp)
 call   <T> <_ZN5Mutex4lockEv>
 mov    &_ZN14GlobalInstanceI6ScriptE3m_pE,%eax
 test   %eax,%eax
-jne    <T> <_ZN14GlobalInstanceI6ScriptE6createEv+0x60>
+jne    <T> <_ZN14GlobalInstanceI6ScriptE6createEv+0x68>
 movl   $0x544,(%esp)
 call   <T> <_Znwj>
-mov    %eax,%ebx
-mov    %ebx,%eax
+mov    %eax,-0x8(%ebp)
+mov    -0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6ScriptC1Ev>
-jmp    <T> <_ZN14GlobalInstanceI6ScriptE6createEv+0x59>
-mov    %edx,%esi
-mov    %eax,%edi
-mov    %ebx,(%esp)
+mov    -0x8(%ebp),%eax
+mov    %eax,&_ZN14GlobalInstanceI6ScriptE3m_pE
+jmp    <T> <_ZN14GlobalInstanceI6ScriptE6createEv+0x68>
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%ebx
+mov    -0x8(%ebp),%eax
+mov    %eax,(%esp)
 call   <T> <_ZdlPv>
-mov    %edi,%eax
-mov    %esi,%edx
+mov    %ebx,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-mov    %ebx,%eax
-mov    %eax,&_ZN14GlobalInstanceI6ScriptE3m_pE
-movl   $&_ZN14GlobalInstanceI6ScriptE4syncE,(%esp)
+movl   $&_ZN14GlobalInstanceI6ScriptE6m_lockE,(%esp)
 call   <T> <_ZN5Mutex6unlockEv>
-jmp    <T> <_ZN14GlobalInstanceI6ScriptE6createEv+0x6f>
-nop
-add    $0x1c,%esp
+mov    &_ZN14GlobalInstanceI6ScriptE3m_pE,%eax
+add    $0x24,%esp
 pop    %ebx
-pop    %esi
-pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* GlobalInstance<Script>::create() */

void GlobalInstance<Script>::_ZN14GlobalInstanceI6ScriptE6createEv(void)

{
  Script *this;
  
  if (m_p == (Script *)0x0) {
    Mutex::lock((Mutex *)sync);
    if (m_p == (Script *)0x0) {
      this = operator_new(0x544);
                    /* try { // try from 0804a32d to 0804a331 has its CatchHandler @ 0804a334 */
      Script::Script(this);
      m_p = this;
    }
    Mutex::unlock((Mutex *)sync);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/Helper.cpp](source/DNFServer/GameServer/Relay/Helper.cpp)（约第 40 行）：

```cpp
template <> Script* GlobalInstance<Script>::create()
{
    if (m_p == 0)
    {
        m_lock.lock();
        if (m_p == 0)
        {
            m_p = new Script;
        }
        m_lock.unlock();
    }
    return m_p;
}
```
