# _ZN19CEventActionManager7destroyEv

`CEventActionManager::destroy()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x80a400c` | `0x5b` | `0x8092de2` | `0x5b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN19CEventActionManager7destroyEv+0x4b>
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%eax
 test   %eax,%eax
 je     <T> <_ZN19CEventActionManager7destroyEv+0x47>
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%eax
 test   %eax,%eax
 je     <T> <_ZN19CEventActionManager7destroyEv+0x47>
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
-mov    (%eax),%ecx
-mov    -0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
-mov    (%eax,%edx,4),%eax
-mov    %eax,(%esp)
-call   *%ecx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%ecx
+mov    0x8(%ebp),%edx
+mov    (%edx,%ecx,4),%edx
+mov    %edx,(%esp)
+call   *%eax
 addl   $0x1,-0xc(%ebp)
 cmpl   $0xa5,-0xc(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN19CEventActionManager7destroyEv+0xf>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CEventActionManager::destroy() */

void __thiscall CEventActionManager::_ZN19CEventActionManager7destroyEv(CEventActionManager *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0xa6; local_10 = local_10 + 1) {
    if ((*(int *)(this + local_10 * 4) != 0) && (*(int *)(this + local_10 * 4) != 0)) {
      (**(code **)(**(int **)(this + local_10 * 4) + 4))(*(undefined4 *)(this + local_10 * 4));
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/EventActionManager.cpp](source/DNFServer/GameServer/Monitor/EventActionManager.cpp)（约第 136 行）：

```cpp
void CEventActionManager::destroy()
{
    for (int i = 0; i < 0xa6; i++)
    {
        if (m_actions[i] != 0)
        {
            delete m_actions[i];
        }
    }
}
```
