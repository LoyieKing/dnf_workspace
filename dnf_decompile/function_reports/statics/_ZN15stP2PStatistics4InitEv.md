# _ZN15stP2PStatistics4InitEv

`stP2PStatistics::Init()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x8076d92` | `0x35` | `0x80661a4` | `0x39` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
+mov    0x8(%ebp),%eax
 movl   $0x48,0x8(%esp)
 movl   $0x0,0x4(%esp)
-mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
-movw   $0x7fff,0xa(%eax)
+add    $0xa,%eax
+movw   $0x7fff,(%eax)
 mov    0x8(%ebp),%eax
-movw   $0x7fff,0x28(%eax)
+add    $0x28,%eax
+movw   $0x7fff,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* stP2PStatistics::Init() */

void __thiscall stP2PStatistics::_ZN15stP2PStatistics4InitEv(stP2PStatistics *this)

{
  memset(this,0,0x48);
  *(undefined2 *)(this + 10) = 0x7fff;
  *(undefined2 *)(this + 0x28) = 0x7fff;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/GMAccounts.cpp](source/DNFServer/GameServer/Statics/GMAccounts.cpp)（约第 517 行）：

```cpp
void stP2PStatistics::Init()
{
    memset(m_data, 0, 0x48);
    *(unsigned short*)(m_data + 10) = 0x7fff;
    *(unsigned short*)(m_data + 0x28) = 0x7fff;
}
```
