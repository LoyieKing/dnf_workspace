# _ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank

`CPowerWarGuildInfo::GetAllGuildRankingInfo(int&, STGuildRank*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80aa12a` | `0xc0` | `0x80a0330` | `0xcf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,61 +1,67 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
-movl   $0x0,-0x10(%ebp)
+sub    $0x38,%esp
+movl   $0x0,-0x14(%ebp)
 mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
-lea    -0x18(%ebp),%eax
+add    $0x4,%eax
+add    $0x18,%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x1c(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank+0x6e>
-lea    -0x18(%ebp),%eax
+jmp    <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank+0x80>
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank+0x63>
-mov    -0x10(%ebp),%eax
-shl    $0x3,%eax
+je     <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank+0x75>
+mov    0x10(%ebp),%eax
+mov    -0x14(%ebp),%edx
+shl    $0x6,%edx
+lea    (%eax,%edx,1),%edx
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    -0x14(%ebp),%eax
+add    %eax,%eax
+add    $0x1,%eax
+shl    $0x5,%eax
 add    0x10(%ebp),%eax
 mov    -0xc(%ebp),%edx
+add    $0xc,%edx
 mov    (%edx),%edx
 mov    %edx,(%eax)
-mov    -0x10(%ebp),%eax
-shl    $0x3,%eax
-add    0x10(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    0xc(%edx),%edx
-mov    %edx,0x4(%eax)
-addl   $0x1,-0x10(%ebp)
-lea    -0x18(%ebp),%eax
+addl   $0x1,-0x14(%ebp)
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEppEv>
-mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE3endEv>
 sub    $0x4,%esp
-lea    -0x14(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 test   %al,%al
-je     <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank+0xa9>
-cmpl   $0x63,-0x10(%ebp)
-ja     <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank+0xa9>
+je     <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank+0xb8>
+cmpl   $0x63,-0x14(%ebp)
+ja     <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank+0xb8>
 mov    $0x1,%eax
-jmp    <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank+0xae>
+jmp    <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank+0xbd>
 mov    $0x0,%eax
 test   %al,%al
-jne    <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank+0x27>
-mov    -0x10(%ebp),%edx
+jne    <T> <_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank+0x30>
+mov    -0x14(%ebp),%edx
 mov    0xc(%ebp),%eax
 mov    %edx,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::GetAllGuildRankingInfo(int&, STGuildRank*) */

void __thiscall
CPowerWarGuildInfo::_ZN18CPowerWarGuildInfo22GetAllGuildRankingInfoERiP11STGuildRank
          (CPowerWarGuildInfo *this,int *param_1,STGuildRank *param_2)

{
  bool bVar1;
  int *piVar2;
  __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
  local_1c [4];
  __normal_iterator local_18 [4];
  uint local_14;
  undefined4 *local_10;
  
  local_14 = 0;
  std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::begin();
  while( true ) {
    std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_1c,local_18);
    if ((bVar1) && (local_14 < 100)) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (!bVar1) break;
    piVar2 = (int *)__gnu_cxx::
                    __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
                    ::operator*(local_1c);
    local_10 = (undefined4 *)*piVar2;
    if (local_10 != (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + local_14 * 8) = *local_10;
      *(undefined4 *)(param_2 + local_14 * 8 + 4) = local_10[3];
      local_14 = local_14 + 1;
    }
    __gnu_cxx::
    __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
    ::operator++(local_1c);
  }
  *param_1 = local_14;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 215 行）：

```cpp
void CPowerWarGuildInfo::GetAllGuildRankingInfo(int& count, STGuildRank* rank)
{
    unsigned int n = 0;
    std::vector<STPowerWarGuildInfo*>* vec =
        (std::vector<STPowerWarGuildInfo*>*)(m_data + 0x18);
    for (std::vector<STPowerWarGuildInfo*>::iterator it = vec->begin();
         it != vec->end() && n < 100; ++it)
    {
        STPowerWarGuildInfo* info = *it;
        if (info != 0)
        {
            *(unsigned int*)(rank + n * 8) = *(unsigned int*)info->m_data;
            *(unsigned int*)(rank + n * 8 + 4) = *(unsigned int*)(info->m_data + 0xc);
            n++;
        }
    }
    count = (int)n;
}
```
