# _ZN5CUserD2Ev

`CUser::~CUser()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80667c2` | `0x9e` | `0x808892e` | `0xac` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,40 +1,49 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %esi
+push   %ebx
+sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0xffffffff,0x14(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser10ResetGuildEv>
 mov    0x8(%ebp),%eax
 movb   $0xff,0x36(%eax)
 mov    0x8(%ebp),%eax
 movb   $0xff,0x37(%eax)
 mov    0x8(%ebp),%eax
 movw   $0xffff,0x38(%eax)
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 movl   $0x1e,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
-movb   $0x0,0x10(%eax)
-mov    0x8(%ebp),%eax
-movw   $0x0,0x7c(%eax)
-mov    0x8(%ebp),%eax
-movb   $0x1,0x3a(%eax)
+add    $0x64,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
+add    $0x10,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
+ret
+mov    %edx,%ebx
+mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x64,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP10CBlackUserSt4lessIjESaISt4pairIKjS1_EEED1Ev>
-leave
-ret
+mov    %esi,%eax
+mov    %ebx,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
```
## 2. Ghidra 反编译 C

```c

/* CUser::~CUser() */

void __thiscall CUser::_ZN5CUserD2Ev(CUser *this)

{
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  ResetGuild(this);
  this[0x36] = (CUser)0xff;
  this[0x37] = (CUser)0xff;
  *(undefined2 *)(this + 0x38) = 0xffff;
  memset(this + 0x18,0,0x1e);
  this[0x10] = (CUser)0x0;
  *(undefined2 *)(this + 0x7c) = 0;
  this[0x3a] = (CUser)0x1;
  std::
  map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
  ::~map((map<unsigned_int,CBlackUser*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CBlackUser*>>>
          *)(this + 100));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFUser.cpp](source/DNFServer/GameServer/Guild/DNFUser.cpp)（约第 140 行）：

```cpp
CUser::~CUser()
{
    m_gameServer = 0;
    m_tcpGameServer = 0;
    m_dbid = 0;
    m_charNo = 0;
    m_channel = -1;
    ResetGuild();
    m_job = 0xff;
    m_growthType = 0xff;
    m_guildMemFlag = 0xffff;
    memset(m_charInfo, 0, sizeof(m_charInfo));
}
```
