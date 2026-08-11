# _ZN19CPowerWarCharacInfo14PrintDebugInfoEv

`CPowerWarCharacInfo::PrintDebugInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a7d10` | `0x176` | `0x809e1da` | `0x174` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,91 +1,88 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x50,%esp
+sub    $0x68,%esp
 movl   $0xee,0x8(%esp)
 movl   $"PrintDebugInfo",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"------ POWER WAR CHARAC DEBUG INFO START --------------------------------------------------------",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x34(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0xef,0x8(%esp)
 movl   $"PrintDebugInfo",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"------ ALL USER RANKING -------------------------------------------------------------------------",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x2c(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x1,-0x14(%ebp)
 mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
-lea    -0x38(%ebp),%eax
+add    $0x4,%eax
+add    $0x18,%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x34(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE5beginEv>
 sub    $0x4,%esp
-movl   $0x1,-0x10(%ebp)
-jmp    <T> <_ZN19CPowerWarCharacInfo14PrintDebugInfoEv+0x104>
-lea    -0x38(%ebp),%eax
+jmp    <T> <_ZN19CPowerWarCharacInfo14PrintDebugInfoEv+0x10d>
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    0x4(%eax),%esi
-mov    -0xc(%ebp),%eax
-mov    (%eax),%ebx
 movl   $0xf9,0x8(%esp)
 movl   $"PrintDebugInfo",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x14(%esp)
-mov    %ebx,0x10(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%eax
+add    $0x4,%eax
+mov    (%eax),%edx
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+mov    %edx,0x14(%esp)
+mov    %eax,0x10(%esp)
+mov    -0x14(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"RANK:%d, USER:%d, POWER WAR POINT:%d",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x20(%ebp),%eax
+lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-addl   $0x1,-0x10(%ebp)
-lea    -0x38(%ebp),%eax
+addl   $0x1,-0x14(%ebp)
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEppEv>
-mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
-lea    -0x24(%ebp),%eax
+lea    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE3endEv>
 sub    $0x4,%esp
-lea    -0x24(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x38(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 test   %al,%al
-jne    <T> <_ZN19CPowerWarCharacInfo14PrintDebugInfoEv+0x95>
+jne    <T> <_ZN19CPowerWarCharacInfo14PrintDebugInfoEv+0x9c>
 movl   $0x100,0x8(%esp)
 movl   $"PrintDebugInfo",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"------ POWER WAR CHARAC DEBUG INFO END   --------------------------------------------------------",0x8(%esp)
 movl   $"./log/PowerResult",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x30(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x8(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarCharacInfo::PrintDebugInfo() */

void CPowerWarCharacInfo::_ZN19CPowerWarCharacInfo14PrintDebugInfoEv(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int *piVar4;
  __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
  local_3c [4];
  CMyFileLog local_38 [8];
  CMyFileLog local_30 [8];
  __normal_iterator local_28 [4];
  CMyFileLog local_24 [8];
  CMyFileLog local_1c [8];
  int local_14;
  undefined4 *local_10;
  
  CMyFileLog::CMyFileLog(local_38,"PrintDebugInfo",0xee);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_38,"./log/PowerResult",
             "------ POWER WAR CHARAC DEBUG INFO START --------------------------------------------------------"
            );
  CMyFileLog::CMyFileLog(local_30,"PrintDebugInfo",0xef);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_30,"./log/PowerResult",
             "------ ALL USER RANKING -------------------------------------------------------------------------"
            );
  std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::begin();
  local_14 = 1;
  while( true ) {
    std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::end();
    bVar3 = __gnu_cxx::operator!=(local_3c,local_28);
    if (!bVar3) break;
    piVar4 = (int *)__gnu_cxx::
                    __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
                    ::operator*(local_3c);
    local_10 = (undefined4 *)*piVar4;
    uVar1 = local_10[1];
    uVar2 = *local_10;
    CMyFileLog::CMyFileLog(local_24,"PrintDebugInfo",0xf9);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_24,"./log/PowerResult","RANK:%d, USER:%d, POWER WAR POINT:%d",local_14,uVar2,
               uVar1);
    local_14 = local_14 + 1;
    __gnu_cxx::
    __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
    ::operator++(local_3c);
  }
  CMyFileLog::CMyFileLog(local_1c,"PrintDebugInfo",0x100);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_1c,"./log/PowerResult",
             "------ POWER WAR CHARAC DEBUG INFO END   --------------------------------------------------------"
            );
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp)（约第 252 行）：

```cpp
void CPowerWarCharacInfo::PrintDebugInfo()
{
    CMyFileLog log1("PrintDebugInfo", 0xee);
    log1("./log/PowerResult",
         "------ POWER WAR CHARAC DEBUG INFO START --------------------------------------------------------");
    CMyFileLog log2("PrintDebugInfo", 0xef);
    log2("./log/PowerResult",
         "------ ALL USER RANKING -------------------------------------------------------------------------");
    int rank = 1;
    std::vector<STPowerWarCharacInfo*>* vec =
        (std::vector<STPowerWarCharacInfo*>*)(m_data + 0x18);
    for (std::vector<STPowerWarCharacInfo*>::iterator it = vec->begin(); it != vec->end(); ++it)
    {
        STPowerWarCharacInfo* info = *it;
        DNF_LOG_SCOPE_LINE(0xf9,"./log/PowerResult", "RANK:%d, USER:%d, POWER WAR POINT:%d", rank,
            *(unsigned int*)info->m_data, *(unsigned int*)(info->m_data + 4));
        rank++;
    }
    CMyFileLog log3("PrintDebugInfo", 0x100);
    log3("./log/PowerResult",
         "------ POWER WAR CHARAC DEBUG INFO END   --------------------------------------------------------");
}
```
