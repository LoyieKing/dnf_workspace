# _ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank

`CPowerWarCharacInfo::GetAllUserRankingInfo(unsigned int&, STUserRank*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a7b08` | `0x120` | `0x809d98a` | `0x12e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,85 +1,89 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 movl   $0x0,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 lea    -0x20(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank+0xc3>
+jmp    <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank+0xd1>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-je     <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank+0xb8>
-mov    -0x10(%ebp),%eax
-shl    $0x3,%eax
-add    0x10(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    (%edx),%edx
-mov    %edx,(%eax)
-mov    -0x10(%ebp),%eax
-shl    $0x3,%eax
-add    0x10(%ebp),%eax
-mov    -0xc(%ebp),%edx
-mov    0x4(%edx),%edx
-mov    %edx,0x4(%eax)
+je     <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank+0xc6>
+mov    0x10(%ebp),%eax
+mov    -0x10(%ebp),%edx
+shl    $0x3,%edx
+lea    (%eax,%edx,1),%edx
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%edx)
+mov    0x10(%ebp),%eax
+mov    -0x10(%ebp),%edx
+add    %edx,%edx
+add    $0x1,%edx
+shl    $0x2,%edx
+lea    (%eax,%edx,1),%edx
+mov    -0xc(%ebp),%eax
+mov    0x4(%eax),%eax
+mov    %eax,(%edx)
 addl   $0x1,-0x10(%ebp)
 mov    -0xc(%ebp),%eax
 mov    0x4(%eax),%esi
 mov    -0xc(%ebp),%eax
 mov    (%eax),%ebx
 movl   $0xcc,0x8(%esp)
 movl   $&_ZZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRankE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    -0x10(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"Rank:%7d, Charac No:%d, PowerWarPoint:%d",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 lea    -0x1c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE3endEv>
 sub    $0x4,%esp
 lea    -0x1c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 test   %al,%al
-je     <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank+0x101>
+je     <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank+0x10f>
 cmpl   $0x1f3,-0x10(%ebp)
-ja     <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank+0x101>
+ja     <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank+0x10f>
 mov    $0x1,%eax
-jmp    <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank+0x106>
+jmp    <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank+0x114>
 mov    $0x0,%eax
 test   %al,%al
 jne    <T> <_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank+0x2c>
 mov    0xc(%ebp),%eax
 mov    -0x10(%ebp),%edx
 mov    %edx,(%eax)
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarCharacInfo::GetAllUserRankingInfo(unsigned int&, STUserRank*) */

void __thiscall
CPowerWarCharacInfo::_ZN19CPowerWarCharacInfo21GetAllUserRankingInfoERjP10STUserRank
          (CPowerWarCharacInfo *this,uint *param_1,STUserRank *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int *piVar4;
  __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
  local_24 [4];
  __normal_iterator local_20 [4];
  CMyFileLog local_1c [8];
  uint local_14;
  undefined4 *local_10;
  
  local_14 = 0;
  std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::begin();
  while( true ) {
    std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::end();
    bVar3 = __gnu_cxx::operator!=(local_24,local_20);
    if ((bVar3) && (local_14 < 500)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) break;
    piVar4 = (int *)__gnu_cxx::
                    __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
                    ::operator*(local_24);
    local_10 = (undefined4 *)*piVar4;
    if (local_10 != (undefined4 *)0x0) {
      *(undefined4 *)(param_2 + local_14 * 8) = *local_10;
      *(undefined4 *)(param_2 + local_14 * 8 + 4) = local_10[1];
      local_14 = local_14 + 1;
      uVar1 = local_10[1];
      uVar2 = *local_10;
      CMyFileLog::CMyFileLog(local_1c,"GetAllUserRankingInfo",0xcc);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_1c,"./log/Power","Rank:%7d, Charac No:%d, PowerWarPoint:%d",local_14,uVar2,
                 uVar1);
    }
    __gnu_cxx::
    __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
    ::operator++(local_24);
  }
  *param_1 = local_14;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp)（约第 202 行）：

```cpp
void CPowerWarCharacInfo::GetAllUserRankingInfo(unsigned int& count, STUserRank* rank)
{
    unsigned int n = 0;
    for (std::vector<STPowerWarCharacInfo*>::iterator it = m_vec.begin();
         it != m_vec.end() && n < 500; ++it)
    {
        STPowerWarCharacInfo* info = *it;
        if (info != 0)
        {
            rank[n].m0 = info->m_field[0];
            rank[n].m4 = info->m_field[1];
            n++;
            DNF_LOG_SCOPE_LINE(0xcc, "./log/Power", "Rank:%7d, Charac No:%d, PowerWarPoint:%d", n,
                info->m_field[0], info->m_field[1]);
        }
    }
    count = n;
}
```
