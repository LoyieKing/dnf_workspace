# _ZN14CKillUSRConfig11Clear_TableEv

`CKillUSRConfig::Clear_Table()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8060d9a` | `0xa4` | `0x805c342` | `0xbe` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,50 +1,59 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP16ST_KillUSRConfigSaIS1_EE5emptyEv>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_ZN14CKillUSRConfig11Clear_TableEv+0xa2>
-mov    0x8(%ebp),%eax
-lea    0x4(%eax),%edx
-lea    -0x14(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIP16ST_KillUSRConfigSaIS1_EE5beginEv>
-sub    $0x4,%esp
-jmp    <T> <_ZN14CKillUSRConfig11Clear_TableEv+0x66>
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
-mov    (%eax),%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZdlPv>
-movl   $0x0,-0xc(%ebp)
-lea    -0x14(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEppEv>
+je     <T> <_ZN14CKillUSRConfig11Clear_TableEv+0xbc>
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
+call   <T> <_ZNSt6vectorIP16ST_KillUSRConfigSaIS1_EE5beginEv>
+sub    $0x4,%esp
+jmp    <T> <_ZN14CKillUSRConfig11Clear_TableEv+0x80>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+test   %eax,%eax
+setne  %al
+test   %al,%al
+je     <T> <_ZN14CKillUSRConfig11Clear_TableEv+0x75>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+mov    (%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_ZdlPv>
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEdeEv>
+movl   $0x0,(%eax)
+lea    -0x10(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEppEv>
+mov    0x8(%ebp),%eax
+lea    0x4(%eax),%edx
+lea    -0xc(%ebp),%eax
+mov    %edx,0x4(%esp)
+mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP16ST_KillUSRConfigSaIS1_EE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPP16ST_KillUSRConfigSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 test   %al,%al
 jne    <T> <_ZN14CKillUSRConfig11Clear_TableEv+0x39>
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP16ST_KillUSRConfigSaIS1_EE5clearEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CKillUSRConfig::Clear_Table() */

void __thiscall CKillUSRConfig::_ZN14CKillUSRConfig11Clear_TableEv(CKillUSRConfig *this)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  __normal_iterator<ST_KillUSRConfig**,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
  local_18 [4];
  __normal_iterator local_14 [4];
  void *local_10;
  
  cVar1 = std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::empty();
  if (cVar1 != '\x01') {
    std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::begin();
    while( true ) {
      std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::end();
      bVar2 = __gnu_cxx::operator!=(local_18,local_14);
      if (!bVar2) break;
      puVar3 = (undefined4 *)
               __gnu_cxx::
               __normal_iterator<ST_KillUSRConfig**,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
               ::operator*(local_18);
      local_10 = (void *)*puVar3;
      ::operator_delete(local_10);
      local_10 = (void *)0x0;
      __gnu_cxx::
      __normal_iterator<ST_KillUSRConfig**,std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>>
      ::operator++(local_18);
    }
    std::vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>>::clear
              ((vector<ST_KillUSRConfig*,std::allocator<ST_KillUSRConfig*>> *)(this + 4));
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFKillUserConfig.cpp](source/DNFServer/GameServer/Monitor/DNFKillUserConfig.cpp)（约第 65 行）：

```cpp
void CKillUSRConfig::Clear_Table()
{
    if (!m_vec.empty())
    {
        for (std::vector<ST_KillUSRConfig*>::iterator it = m_vec.begin();
             it != m_vec.end(); ++it)
        {
            if (*it != 0)
            {
                ::operator delete(*it);
                *it = 0;
            }
        }
        m_vec.clear();
    }
}
```
