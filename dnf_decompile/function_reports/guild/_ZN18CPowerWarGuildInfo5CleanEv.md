# _ZN18CPowerWarGuildInfo5CleanEv

`CPowerWarGuildInfo::Clean()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a9da4` | `0x8c` | `0x809ff8a` | `0x8c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,44 @@
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
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN18CPowerWarGuildInfo5CleanEv+0x40>
-lea    -0x10(%ebp),%eax
+jmp    <T> <_ZN18CPowerWarGuildInfo5CleanEv+0x46>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19STPowerWarGuildInfodlEPv>
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEppEv>
-mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
+mov    -0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE3endEv>
 sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPP19STPowerWarGuildInfoSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 test   %al,%al
-jne    <T> <_ZN18CPowerWarGuildInfo5CleanEv+0x20>
-mov    0x8(%ebp),%eax
-add    $0x1c,%eax
+jne    <T> <_ZN18CPowerWarGuildInfo5CleanEv+0x26>
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP19STPowerWarGuildInfoSaIS1_EE5clearEv>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjP19STPowerWarGuildInfoSt4lessIjESaISt4pairIKjS1_EEE5clearEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::Clean() */

void __thiscall CPowerWarGuildInfo::_ZN18CPowerWarGuildInfo5CleanEv(CPowerWarGuildInfo *this)

{
  bool bVar1;
  undefined4 *puVar2;
  __normal_iterator *p_Var3;
  __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
  local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::begin();
  while( true ) {
    std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::end();
    p_Var3 = local_10;
    bVar1 = __gnu_cxx::operator!=(local_14,p_Var3);
    if (!bVar1) break;
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
             ::operator*(local_14);
    STPowerWarGuildInfo::operator_delete((STPowerWarGuildInfo *)*puVar2,p_Var3);
    __gnu_cxx::
    __normal_iterator<STPowerWarGuildInfo**,std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>>
    ::operator++(local_14);
  }
  std::vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>>::clear
            ((vector<STPowerWarGuildInfo*,std::allocator<STPowerWarGuildInfo*>> *)(this + 0x1c));
  std::
  map<unsigned_int,STPowerWarGuildInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarGuildInfo*>>>
  ::clear((map<unsigned_int,STPowerWarGuildInfo*,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,STPowerWarGuildInfo*>>>
           *)(this + 4));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 114 行）：

```cpp
void CPowerWarGuildInfo::Clean()
{
    std::vector<STPowerWarGuildInfo*>* guilds =
        (std::vector<STPowerWarGuildInfo*>*)((char*)this + 0x1c);
    for (std::vector<STPowerWarGuildInfo*>::iterator it = guilds->begin();
         it != guilds->end(); ++it)
    {
        delete *it;
    }
    guilds->clear();
    ((std::map<unsigned int, STPowerWarGuildInfo*>*)m_data)->clear();
}
```
