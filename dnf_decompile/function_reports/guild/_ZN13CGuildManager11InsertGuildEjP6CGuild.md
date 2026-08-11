# _ZN13CGuildManager11InsertGuildEjP6CGuild

`CGuildManager::InsertGuild(unsigned int, CGuild*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8095134` | `0x67` | `0x805b71e` | `0x68` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x10(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN13CGuildManager11InsertGuildEjP6CGuild+0x60>
+jne    <T> <_ZN13CGuildManager11InsertGuildEjP6CGuild+0x14>
+mov    $0x0,%eax
+jmp    <T> <_ZN13CGuildManager11InsertGuildEjP6CGuild+0x66>
 lea    -0x10(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjRP6CGuildESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjP6CGuildEC1IjS2_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
 lea    -0x20(%ebp),%eax
 lea    -0x18(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP6CGuildSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
-movzbl -0x1c(%ebp),%eax
-jmp    <T> <_ZN13CGuildManager11InsertGuildEjP6CGuild+0x65>
-mov    $0x0,%eax
+mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::InsertGuild(unsigned int, CGuild*) */

undefined1 __thiscall
CGuildManager::_ZN13CGuildManager11InsertGuildEjP6CGuild
          (CGuildManager *this,uint param_1,CGuild *param_2)

{
  pair local_24 [4];
  undefined1 local_20;
  pair<unsigned_int_const,CGuild*> local_1c [8];
  uint local_14 [4];
  
  if (param_2 == (CGuild *)0x0) {
    local_20 = 0;
  }
  else {
    std::make_pair<unsigned_int&,CGuild*&>(local_14,(CGuild **)&param_1);
    std::pair<unsigned_int_const,CGuild*>::pair<unsigned_int,CGuild*>(local_1c,(pair *)local_14);
    std::
    map<unsigned_int,CGuild*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,CGuild*>>>
    ::insert(local_24);
  }
  return local_20;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 155 行）：

```cpp
int CGuildManager::InsertGuild(unsigned int guildKey, CGuild* guild)
{
    if (guild == 0)
    {
        return 0;
    }
    m_guilds.insert(std::make_pair(guildKey, guild));
    return 1;
}
```
