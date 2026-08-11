# _ZN13CGuildManager6insertEP15STGuildRankInfo

`CGuildManager::insert(STGuildRankInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x80a31cc` | `0x40` | `0x8095708` | `0x52` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,27 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 test   %eax,%eax
-je     <T> <_ZN13CGuildManager6insertEP15STGuildRankInfo+0x3e>
+je     <T> <_ZN13CGuildManager6insertEP15STGuildRankInfo+0x50>
 mov    0xc(%ebp),%eax
 lea    0x4(%eax),%ecx
 lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
-call   <T> <_ZSt9make_pairIRjRP15STGuildRankInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
+call   <T> <_ZSt9make_pairIRiRP15STGuildRankInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
+lea    -0x10(%ebp),%eax
+mov    %eax,0x4(%esp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4pairIjP15STGuildRankInfoEC1IiS1_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
-lea    -0x10(%ebp),%edx
+lea    -0x18(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorISt4pairIjP15STGuildRankInfoESaIS3_EE9push_backEOS3_>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::insert(STGuildRankInfo*) */

void __thiscall
CGuildManager::_ZN13CGuildManager6insertEP15STGuildRankInfo
          (CGuildManager *this,STGuildRankInfo *param_1)

{
  uint local_14 [4];
  
  if (param_1 != (STGuildRankInfo *)0x0) {
    std::make_pair<unsigned_int&,STGuildRankInfo*&>(local_14,(STGuildRankInfo **)(param_1 + 4));
    std::
    vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>
    ::push_back((vector<std::pair<unsigned_int,STGuildRankInfo*>,std::allocator<std::pair<unsigned_int,STGuildRankInfo*>>>
                 *)this,(pair *)local_14);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/GuildManager.cpp](source/DNFServer/GameServer/DBMW/GuildManager.cpp)（约第 168 行）：

```cpp
void CGuildManager::insert(STGuildRankInfo* info)
{
    if (info)
        m_rankList.push_back(std::make_pair(info->m_field4, info));
}
```
