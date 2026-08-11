# _ZN10CDBManager5CloseEv

`CDBManager::Close()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x8071230` | `0x4b` | `0x8057cfe` | `0x4b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,28 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN10CDBManager5CloseEv+0x3e>
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%eax
 test   %eax,%eax
 je     <T> <_ZN10CDBManager5CloseEv+0x3a>
 mov    -0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%eax
 mov    (%eax),%eax
 add    $0x14,%eax
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
 cmpl   $0x10,-0xc(%ebp)
 setle  %al
 test   %al,%al
 jne    <T> <_ZN10CDBManager5CloseEv+0xf>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::Close() */

void __thiscall CDBManager::_ZN10CDBManager5CloseEv(CDBManager *this)

{
  int local_10;
  
  for (local_10 = 0; local_10 < 0x11; local_10 = local_10 + 1) {
    if (*(int *)(this + local_10 * 4) != 0) {
      (**(code **)(**(int **)(this + local_10 * 4) + 0x14))(*(undefined4 *)(this + local_10 * 4));
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DBManager.cpp](source/DNFServer/GameServer/DBMW/DBManager.cpp)（约第 2971 行）：

```cpp
void CDBManager::Close()
{
    for (int i = 0; i <= 0x10; i++)
    {
        if (m_handles[i])
            m_handles[i]->close();
    }
}
```
