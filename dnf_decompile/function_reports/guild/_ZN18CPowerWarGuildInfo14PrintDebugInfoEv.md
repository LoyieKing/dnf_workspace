# _ZN18CPowerWarGuildInfo14PrintDebugInfoEv

`CPowerWarGuildInfo::PrintDebugInfo()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80aa64c` | `0x195` | `0x80a05a0` | `0x195` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,101 +1,101 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x6c,%esp
 movl   $0x187,0x8(%esp)
 movl   $&_ZZN18CPowerWarGuildInfo14PrintDebugInfoEvE12__FUNCTION__,0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"------ POWER WAR GUILD DEBUG INFO START ----------------------------------------------------------",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x44(%ebp),%eax
+lea    -0x34(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 movl   $0x188,0x8(%esp)
 movl   $&_ZZN18CPowerWarGuildInfo14PrintDebugInfoEvE12__FUNCTION__,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"------ ALL GUILD RANKING -------------------------------------------------------------------------",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
+movl   $0x1,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
 lea    -0x48(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE5beginEv>
 sub    $0x4,%esp
-movl   $0x1,-0x20(%ebp)
 jmp    <T> <_ZN18CPowerWarGuildInfo14PrintDebugInfoEv+0x122>
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    %eax,-0x4c(%ebp)
 mov    -0x1c(%ebp),%eax
 mov    0xc(%eax),%edi
 mov    -0x1c(%ebp),%eax
 mov    0x4(%eax),%esi
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%ebx
 movl   $0x192,0x8(%esp)
 movl   $&_ZZN18CPowerWarGuildInfo14PrintDebugInfoEvE12__FUNCTION__,0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    -0x4c(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    %edi,0x18(%esp)
 mov    %esi,0x14(%esp)
 mov    %ebx,0x10(%esp)
 mov    -0x20(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"RANK:%d, GUILD:%d, POINT:%d, TOTOAL:%d, BONUS:%d",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x30(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 addl   $0x1,-0x20(%ebp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x1c(%eax),%edx
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE3endEv>
 sub    $0x4,%esp
-lea    -0x34(%ebp),%eax
+lea    -0x2c(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x48(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 test   %al,%al
 jne    <T> <_ZN18CPowerWarGuildInfo14PrintDebugInfoEv+0x99>
 movl   $0x199,0x8(%esp)
 movl   $&_ZZN18CPowerWarGuildInfo14PrintDebugInfoEvE12__FUNCTION__,0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"------ POWER WAR GUILD DEBUG INFO END   ----------------------------------------------------------",0x8(%esp)
 movl   $"./log/Power",0x4(%esp)
-lea    -0x28(%ebp),%eax
+lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 lea    -0xc(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::PrintDebugInfo() */

void CPowerWarGuildInfo::_ZN18CPowerWarGuildInfo14PrintDebugInfoEv(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  bool bVar5;
  int *piVar6;
  __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
  local_4c [4];
  CMyFileLog local_48 [8];
  CMyFileLog local_40 [8];
  __normal_iterator local_38 [4];
  CMyFileLog local_34 [8];
  CMyFileLog local_2c [8];
  int local_24;
  undefined4 *local_20;
  
  CMyFileLog::CMyFileLog(local_48,"PrintDebugInfo",0x187);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_48,"./log/Power",
             "------ POWER WAR GUILD DEBUG INFO START ----------------------------------------------------------"
            );
  CMyFileLog::CMyFileLog(local_40,"PrintDebugInfo",0x188);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_40,"./log/Power",
             "------ ALL GUILD RANKING -------------------------------------------------------------------------"
            );
  std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::begin();
  local_24 = 1;
  while( true ) {
    std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::end();
    bVar5 = __gnu_cxx::operator!=(local_4c,local_38);
    if (!bVar5) break;
    piVar6 = (int *)__gnu_cxx::
                    __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
                    ::operator*(local_4c);
    local_20 = (undefined4 *)*piVar6;
    uVar1 = local_20[2];
    uVar2 = local_20[3];
    uVar3 = local_20[1];
    uVar4 = *local_20;
    CMyFileLog::CMyFileLog(local_34,"PrintDebugInfo",0x192);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_34,"./log/Power","RANK:%d, GUILD:%d, POINT:%d, TOTOAL:%d, BONUS:%d",local_24,
               uVar4,uVar3,uVar2,uVar1);
    local_24 = local_24 + 1;
    __gnu_cxx::
    __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
    ::operator++(local_4c);
  }
  CMyFileLog::CMyFileLog(local_2c,"PrintDebugInfo",0x199);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_2c,"./log/Power",
             "------ POWER WAR GUILD DEBUG INFO END   ----------------------------------------------------------"
            );
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 325 行）：

```cpp
void CPowerWarGuildInfo::PrintDebugInfo()
{
    CMyFileLog log1(__FUNCTION__, 0x187);
    log1("./log/Power",
         "------ POWER WAR GUILD DEBUG INFO START ----------------------------------------------------------");
    CMyFileLog log2(__FUNCTION__, 0x188);
    log2("./log/Power",
         "------ ALL GUILD RANKING -------------------------------------------------------------------------");
    int rank = 1;
    for (std::vector<STPowerWarGuildInfo*>::iterator it = m_vec.begin(); it != m_vec.end(); ++it)
    {
        STPowerWarGuildInfo* info = *it;
        DNF_LOG_SCOPE_LINE(0x192,"./log/Power", "RANK:%d, GUILD:%d, POINT:%d, TOTOAL:%d, BONUS:%d", rank,
            info->m_field[0], info->m_field[1],
            info->m_field[3], info->m_field[2]);
        rank++;
    }
    CMyFileLog log3(__FUNCTION__, 0x199);
    log3("./log/Power",
         "------ POWER WAR GUILD DEBUG INFO END   ----------------------------------------------------------");
}
```
