# _ZN18CPowerWarGuildInfo19InsertPowerwarGuildEjP19STPowerWarGuildInfo

`CPowerWarGuildInfo::InsertPowerwarGuild(unsigned int, STPowerWarGuildInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a9f02` | `0x6a` | `0x80a00e4` | `0x78` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,33 +1,37 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
-lea    -0x10(%ebp),%eax
+mov    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x14(%ebp),%eax
 lea    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjRP19STPowerWarGuildInfoESt4pairINSt17__decay_and_stripIT_E6__typeENS5_IT0_E6__typeEEOS6_OS9_>
 sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKjP19STPowerWarGuildInfoEC1IjS2_EEOS_IT_T0_E>
-mov    0x8(%ebp),%eax
-lea    0x4(%eax),%ecx
-lea    -0x20(%ebp),%eax
-lea    -0x18(%ebp),%edx
+lea    -0x24(%ebp),%eax
+lea    -0x1c(%ebp),%edx
 mov    %edx,0x8(%esp)
-mov    %ecx,0x4(%esp)
+mov    -0xc(%ebp),%edx
+mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP19STPowerWarGuildInfoSt4lessIjESaISt4pairIKjS1_EEE6insertERKS6_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
+add    $0x4,%eax
+lea    0x18(%eax),%edx
 lea    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE9push_backERKS1_>
+mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::InsertPowerwarGuild(unsigned int, STPowerWarGuildInfo*) */

void CPowerWarGuildInfo::_ZN18CPowerWarGuildInfo19InsertPowerwarGuildEjP19STPowerWarGuildInfo
               (uint param_1,STPowerWarGuildInfo *param_2)

{
  pair local_24 [8];
  pair<unsigned_int_const,STPowerWarGuildInfo*> local_1c [8];
  uint local_14 [4];
  
  std::make_pair<unsigned_int&,STPowerWarGuildInfo*&>(local_14,&param_2);
  std::pair<unsigned_int_const,STPowerWarGuildInfo*>::pair<unsigned_int,STPowerWarGuildInfo*>
            (local_1c,(pair *)local_14);
  std::
  map<unsigned_int,STPowerWarGuildInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarGuildInfo*>>>
  ::insert(local_24);
  std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::push_back
            ((vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>> *)(param_1 + 0x1c),
             (STPowerWarGuildInfo **)&stack0x0000000c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 154 行）：

```cpp
int CPowerWarGuildInfo::InsertPowerwarGuild(unsigned int guildKey, STPowerWarGuildInfo* info)
{
    std::map<unsigned int, STPowerWarGuildInfo*>* map =
        (std::map<unsigned int, STPowerWarGuildInfo*>*)(m_data + 0);
    map->insert(std::make_pair(guildKey, info));
    ((std::vector<STPowerWarGuildInfo*>*)(m_data + 0x18))->push_back(info);
    return 0;
}
```
