# _ZN18CPowerWarGuildInfo10InitializeEv

`CPowerWarGuildInfo::Initialize()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a9d72` | `0x32` | `0x809ff52` | `0x38` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,17 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP19STPowerWarGuildInfoSt4lessIjESaISt4pairIKjS1_EEE5clearEv>
 mov    0x8(%ebp),%eax
-add    $0x1c,%eax
+add    $0x4,%eax
+add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE5clearEv>
 mov    0x8(%ebp),%eax
-add    $0x28,%eax
+add    $0x4,%eax
+add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP21STDBSavePowerWarPointSaIS1_EE5clearEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::Initialize() */

void __thiscall CPowerWarGuildInfo::_ZN18CPowerWarGuildInfo10InitializeEv(CPowerWarGuildInfo *this)

{
  std::
  map<unsigned_int,STPowerWarGuildInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarGuildInfo*>>>
  ::clear((map<unsigned_int,STPowerWarGuildInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarGuildInfo*>>>
           *)(this + 4));
  std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::clear
            ((vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>> *)(this + 0x1c));
  std::vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>>::clear
            ((vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>> *)(this + 0x28))
  ;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 107 行）：

```cpp
void CPowerWarGuildInfo::Initialize()
{
    ((std::map<unsigned int, STPowerWarGuildInfo*>*)m_data)->clear();
    ((std::vector<STPowerWarGuildInfo*>*)(m_data + 0x18))->clear();
    ((std::vector<STDBSavePowerWarPoint*>*)(m_data + 0x24))->clear();
}
```
