# _ZN7MemPoolI5CPeerED1Ev

`MemPool<CPeer>::~MemPool()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x805b62c` | `0xcf` | `0x8077c3a` | `0xa8` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,68 +1,57 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNKSt6vectorIPvSaIS0_EE5emptyEv>
-xor    $0x1,%eax
-test   %al,%al
-je     <T> <_ZN7MemPoolI5CPeerED1Ev+0xb7>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIPvSaIS0_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN7MemPoolI5CPeerED1Ev+0x5b>
+jmp    <T> <_ZN7MemPoolI5CPeerED1Ev+0x42>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPPvSt6vectorIS1_SaIS1_EEEdeEv>
 mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPPvSt6vectorIS1_SaIS1_EEEppEv>
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIPvSaIS0_EE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPPvSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 test   %al,%al
-jne    <T> <_ZN7MemPoolI5CPeerED1Ev+0x3b>
-mov    0x8(%ebp),%eax
-add    $0x8,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt6vectorIPvSaIS0_EE5clearEv>
-jmp    <T> <_ZN7MemPoolI5CPeerED1Ev+0xb7>
+jne    <T> <_ZN7MemPoolI5CPeerED1Ev+0x22>
+jmp    <T> <_ZN7MemPoolI5CPeerED1Ev+0x90>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIPvSaIS0_EED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIPvSaIS0_EED1Ev>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* MemPool<CPeer>::~MemPool() */

void __thiscall MemPool<CPeer>::_ZN7MemPoolI5CPeerED1Ev(MemPool<CPeer> *this)

{
  char cVar1;
  bool bVar2;
  undefined4 *puVar3;
  __normal_iterator<void**,std::vector<void*,std::allocator<void*>>> local_14 [4];
  __normal_iterator local_10 [4];
  
                    /* try { // try from 0805b63d to 0805b6c2 has its CatchHandler @ 0805b6c5 */
  cVar1 = std::vector<void*,std::allocator<void*>>::empty();
  if (cVar1 != '\x01') {
    std::vector<void*,std::allocator<void*>>::begin();
    while( true ) {
      std::vector<void*,std::allocator<void*>>::end();
      bVar2 = __gnu_cxx::operator!=(local_14,local_10);
      if (!bVar2) break;
      puVar3 = (undefined4 *)
               __gnu_cxx::__normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::
               operator*(local_14);
      operator_delete((void *)*puVar3);
      __gnu_cxx::__normal_iterator<void**,std::vector<void*,std::allocator<void*>>>::operator++
                (local_14);
    }
    std::vector<void*,std::allocator<void*>>::clear
              ((vector<void*,std::allocator<void*>> *)(this + 8));
  }
  std::vector<void*,std::allocator<void*>>::~vector
            ((vector<void*,std::allocator<void*>> *)(this + 8));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketBuffer.cpp](source/DNFServer/GameServer/DBMW/DNFPacketBuffer.cpp)（约第 34 行）：

```cpp
MemPool<T>::~MemPool()
{
    for (std::vector<void*>::iterator it = m_blocks.begin(); it != m_blocks.end(); ++it)
        ::operator delete(*it);
}
```
