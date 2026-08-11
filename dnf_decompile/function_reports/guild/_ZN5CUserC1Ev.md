# _ZN5CUserC1Ev

`CUser::CUser()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80666ce` | `0xf3` | `0x808881c` | `0x111` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,57 +1,63 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
+mov    0x8(%ebp),%eax
+add    $0x4a,%eax
+mov    %eax,(%esp)
+call   <T> <_ZN18STGuildMemerDBInfoC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x64,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x10(%eax)
 mov    0x8(%ebp),%eax
 movl   $0xffffffff,0x14(%eax)
 mov    0x8(%ebp),%eax
+add    $0x18,%eax
+movl   $0x1e,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memset>
+mov    0x8(%ebp),%eax
 movb   $0xff,0x36(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x37(%eax)
 mov    0x8(%ebp),%eax
 movw   $0xffff,0x38(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x1,0x3a(%eax)
 mov    0x8(%ebp),%eax
+add    $0x3b,%eax
+movl   $0x7,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %eax,(%esp)
+call   <T> <memset>
+mov    0x8(%ebp),%eax
 movl   $0x0,0x44(%eax)
 mov    0x8(%ebp),%eax
 movw   $0x0,0x48(%eax)
 mov    0x8(%ebp),%eax
 add    $0x4a,%eax
+movl   $0x1a,0x8(%esp)
+movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZN18STGuildMemerDBInfoC1Ev>
-mov    0x8(%ebp),%eax
-add    $0x64,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEEC1Ev>
+call   <T> <memset>
 mov    0x8(%ebp),%eax
 movw   $0x0,0x7c(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x7f,0x7e(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x80(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x84(%eax)
-mov    0x8(%ebp),%eax
-add    $0x18,%eax
-movl   $0x1e,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memset>
-mov    0x8(%ebp),%eax
-add    $0x3b,%eax
-movl   $0x7,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memset>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::CUser() */

void __thiscall CUser::_ZN5CUserC1Ev(CUser *this)

{
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  this[0x10] = (CUser)0x0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  this[0x36] = (CUser)0xff;
  this[0x37] = (CUser)0xff;
  *(undefined2 *)(this + 0x38) = 0xffff;
  this[0x3a] = (CUser)0x1;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined2 *)(this + 0x48) = 0;
  STGuildMemerDBInfo::_ZN18STGuildMemerDBInfoC2Ev((STGuildMemerDBInfo *)(this + 0x4a));
  std::
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  ::map((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
         *)(this + 100));
  *(undefined2 *)(this + 0x7c) = 0;
  this[0x7e] = (CUser)0x7f;
  *(undefined4 *)(this + 0x80) = 0;
  *(undefined4 *)(this + 0x84) = 0;
  memset(this + 0x18,0,0x1e);
  memset(this + 0x3b,0,7);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 117 行）：

```cpp
CUser::CUser()
{
    m_dbid = 0;
    m_charNo = 0;
    m_gameServer = 0;
    m_tcpGameServer = 0;
    m_posState = 0;
    m_channel = -1;
    memset(m_charInfo, 0, sizeof(m_charInfo));
    m_job = 0xff;
    m_growthType = 0xff;
    m_guildMemFlag = 0xffff;
    m_field3a = 1;
    memset(m_field3b, 0, sizeof(m_field3b));
    m_guild = 0;
    m_field48 = 0;
    memset((void*)&m_guildDBInfo, 0, sizeof(m_guildDBInfo));
    m_field7c = 0;
    m_field7e = 0x7f;
    m_field80 = 0;
    m_field84 = 0;
}
```
