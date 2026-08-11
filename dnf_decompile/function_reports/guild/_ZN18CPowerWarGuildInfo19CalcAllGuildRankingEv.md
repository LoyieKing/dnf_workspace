# _ZN18CPowerWarGuildInfo19CalcAllGuildRankingEv

`CPowerWarGuildInfo::CalcAllGuildRanking()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a9fe4` | `0x52` | `0x809fe1a` | `0x55` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
-lea    -0x10(%ebp),%eax
+add    $0x1c,%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x14(%ebp),%eax
+mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE3endEv>
 sub    $0x4,%esp
-mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE5beginEv>
 sub    $0x4,%esp
 movl   $&_ZN19STPowerWarGuildInfo7CompareEPKS_S1_,0x8(%esp)
+mov    -0x14(%ebp),%eax
+mov    %eax,0x4(%esp)
 mov    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZSt4sortIN9__gnu_cxx17__normal_iteratorIPP19STPowerWarGuildInfoSt6vectorIS3_SaIS3_EEEEPFbPKS2_SA_EEvT_SD_T0_>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::CalcAllGuildRanking() */

void CPowerWarGuildInfo::_ZN18CPowerWarGuildInfo19CalcAllGuildRankingEv(void)

{
  undefined4 local_14;
  undefined4 local_10;
  
  std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::end();
  std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::begin();
  std::
  sort<__gnu_cxx::__normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>,bool(*)(STPowerWarGuildInfo_const*,STPowerWarGuildInfo_const*)>
            (local_10,local_14,STPowerWarGuildInfo::Compare);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 172 行）：

```cpp
void CPowerWarGuildInfo::CalcAllGuildRanking()
{
    std::vector<STPowerWarGuildInfo*>* vec = &m_vec;
    std::sort(vec->begin(), vec->end(), STPowerWarGuildInfo::Compare);
}
```
