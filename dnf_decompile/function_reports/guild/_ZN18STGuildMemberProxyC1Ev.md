# _ZN18STGuildMemberProxyC1Ev

`STGuildMemberProxy::STGuildMemberProxy()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80897b2` | `0x7c` | `0x8052928` | `0x80` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x22(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x23(%eax)
 mov    0x8(%ebp),%eax
-movw   $0xffff,0x24(%eax)
+add    $0x24,%eax
+movw   $0xffff,(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x26(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x27(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x0,0x28(%eax)
+add    $0x28,%eax
+movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x2c,%eax
 movl   $0x15,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* STGuildMemberProxy::STGuildMemberProxy() */

void __thiscall STGuildMemberProxy::_ZN18STGuildMemberProxyC1Ev(STGuildMemberProxy *this)

{
  *(undefined4 *)this = 0;
  this[0x22] = (STGuildMemberProxy)0xff;
  this[0x23] = (STGuildMemberProxy)0xff;
  *(undefined2 *)(this + 0x24) = 0xffff;
  this[0x26] = (STGuildMemberProxy)0x0;
  this[0x27] = (STGuildMemberProxy)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  memset(this + 4,0,0x1e);
  memset(this + 0x2c,0,0x15);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 189 行）：

```cpp
STGuildMemberProxy::STGuildMemberProxy()
{
    *(unsigned int*)m_data = 0;
    m_data[0x22] = 0xff;
    m_data[0x23] = 0xff;
    *(unsigned short*)(m_data + 0x24) = 0xffff;
    m_data[0x26] = 0;
    m_data[0x27] = 0;
    *(unsigned int*)(m_data + 0x28) = 0;
    memset(m_data + 4, 0, 0x1e);
    memset(m_data + 0x2c, 0, 0x15);
}
```
