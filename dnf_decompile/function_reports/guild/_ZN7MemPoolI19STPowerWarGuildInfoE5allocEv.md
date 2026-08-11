# _ZN7MemPoolI19STPowerWarGuildInfoE5allocEv

`MemPool<STPowerWarGuildInfo>::alloc()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80aa92c` | `0x151` | `0x8094d50` | `0x191` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,103 +1,126 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x40,%esp
+sub    $0x44,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0x14,%eax
-je     <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x23>
-movl   $0x14,(%esp)
-call   <T> <_Znwj>
-jmp    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x14a>
+jne    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x178>
 mov    &_ZN7MemPoolI19STPowerWarGuildInfoE15headOfFreeList_E,%eax
-mov    %eax,-0x14(%ebp)
-cmpl   $0x0,-0x14(%ebp)
-je     <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x41>
-mov    -0x14(%ebp),%eax
-mov    0x10(%eax),%eax
-mov    %eax,&_ZN7MemPoolI19STPowerWarGuildInfoE15headOfFreeList_E
-jmp    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x147>
-mov    0x8(%ebp),%eax
-mov    0x4(%eax),%edx
+test   %eax,%eax
+jne    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x155>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0x4(%eax),%eax
 imul   %edx,%eax
 mov    %eax,(%esp)
 call   <T> <_Znwj>
-mov    %eax,-0x10(%ebp)
+mov    %eax,-0x18(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x8f>
-mov    -0xc(%ebp),%edx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x2,%eax
+jmp    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x7d>
+mov    -0x18(%ebp),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
 mov    %eax,%ecx
-add    -0x10(%ebp),%ecx
+imul   -0xc(%ebp),%ecx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    (%ecx,%eax,1),%eax
+sub    $0x4,%eax
+add    %eax,%edx
 mov    -0xc(%ebp),%eax
-lea    0x1(%eax),%edx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    -0x10(%ebp),%eax
-mov    %eax,0x10(%ecx)
+lea    0x1(%eax),%ecx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+imul   %eax,%ecx
+mov    -0x18(%ebp),%eax
+lea    (%ecx,%eax,1),%eax
+mov    %eax,(%edx)
 addl   $0x1,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 sub    $0x1,%eax
 cmp    -0xc(%ebp),%eax
 seta   %al
 test   %al,%al
-jne    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x63>
+jne    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x46>
+mov    -0x18(%ebp),%eax
+mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
-lea    -0x1(%eax),%edx
-mov    %edx,%eax
-shl    $0x2,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    -0x10(%ebp),%eax
-movl   $0x0,0x10(%eax)
-mov    -0x10(%ebp),%eax
+lea    -0x1(%eax),%ecx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+imul   %eax,%ecx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    (%ecx,%eax,1),%eax
+sub    $0x4,%eax
+lea    (%edx,%eax,1),%eax
+movl   $0x0,(%eax)
+mov    -0x18(%ebp),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+lea    (%edx,%eax,1),%eax
+mov    %eax,&_ZN7MemPoolI19STPowerWarGuildInfoE15headOfFreeList_E
+mov    -0x18(%ebp),%eax
+mov    %eax,-0x10(%ebp)
+lea    -0x18(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZSt4moveIRPvEONSt16remove_referenceIT_E4typeEOS3_>
+mov    (%eax),%eax
 mov    %eax,-0x14(%ebp)
-mov    -0x10(%ebp),%eax
-add    $0x14,%eax
-mov    %eax,&_ZN7MemPoolI19STPowerWarGuildInfoE15headOfFreeList_E
-mov    -0x10(%ebp),%eax
-mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
-lea    -0x20(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt6vectorIPvSaIS0_EE9push_backEOS0_>
+movl   $0x7d,0x8(%esp)
+movl   $"alloc",0x4(%esp)
+lea    -0x20(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIPvSaIS0_EE4sizeEv>
-mov    %ebx,%esi
-imul   %eax,%esi
+mov    %ebx,%edx
+imul   %eax,%edx
 mov    0x8(%ebp),%eax
-mov    (%eax),%ebx
-movl   $0x7d,0x8(%esp)
-movl   $"alloc",0x4(%esp)
-lea    -0x1c(%ebp),%eax
-mov    %eax,(%esp)
-call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    (%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"class size(%d) cnt(%d)",0x8(%esp)
 movl   $"./log/Mempool",0x4(%esp)
-lea    -0x1c(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-mov    -0x14(%ebp),%eax
-add    $0x40,%esp
+jmp    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x188>
+mov    &_ZN7MemPoolI19STPowerWarGuildInfoE15headOfFreeList_E,%eax
+mov    %eax,-0x10(%ebp)
+mov    &_ZN7MemPoolI19STPowerWarGuildInfoE15headOfFreeList_E,%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+sub    $0x4,%eax
+lea    (%edx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,&_ZN7MemPoolI19STPowerWarGuildInfoE15headOfFreeList_E
+jmp    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x188>
+mov    0x8(%ebp),%eax
+mov    (%eax),%eax
+mov    %eax,(%esp)
+call   <T> <_Znwj>
+mov    %eax,-0x10(%ebp)
+mov    -0x10(%ebp),%eax
+add    $0x44,%esp
 pop    %ebx
-pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* MemPool<STPowerWarGuildInfo>::alloc() */

void * __thiscall
MemPool<STPowerWarGuildInfo>::_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv
          (MemPool<STPowerWarGuildInfo> *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_24;
  CMyFileLog local_20 [8];
  void *local_18;
  void *local_14;
  uint local_10;
  
  if (*(int *)this == 0x14) {
    local_18 = headOfFreeList_;
    if (headOfFreeList_ == (void *)0x0) {
      local_24 = operator_new(*(int *)this * *(int *)(this + 4));
      for (local_10 = 0; local_10 < *(int *)(this + 4) - 1U; local_10 = local_10 + 1) {
        *(void **)((int)local_24 + local_10 * 0x14 + 0x10) =
             (void *)((local_10 + 1) * 0x14 + (int)local_24);
      }
      *(undefined4 *)((int)local_24 + (*(int *)(this + 4) + -1) * 0x14 + 0x10) = 0;
      headOfFreeList_ = (void *)((int)local_24 + 0x14);
      local_18 = local_24;
      local_14 = local_24;
      std::vector<void*,std::allocator<void*>>::push_back
                ((vector<void*,std::allocator<void*>> *)(this + 8),&local_24);
      iVar1 = *(int *)(this + 4);
      iVar3 = std::vector<void*,std::allocator<void*>>::size
                        ((vector<void*,std::allocator<void*>> *)(this + 8));
      uVar2 = *(undefined4 *)this;
      CMyFileLog::CMyFileLog(local_20,"alloc",0x7d);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_20,"./log/Mempool","class size(%d) cnt(%d)",uVar2,iVar1 * iVar3);
    }
    else {
      headOfFreeList_ = *(void **)((int)headOfFreeList_ + 0x10);
    }
  }
  else {
    local_18 = operator_new(0x14);
  }
  return local_18;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/MemPool.cpp](source/DNFServer/GameServer/Guild/MemPool.cpp)（约第 97 行）：

```cpp
void* MemPool<T>::alloc()
{
    void* result;
    if (m_classSize == (int)sizeof(T))
    {
        if (headOfFreeList_ == 0)
        {
            void* block = ::operator new(m_classSize * m_count);
            for (unsigned int i = 0; i < m_count - 1U; i++)
            {
                *(void**)((char*)block + i * m_classSize + (m_classSize - 4)) =
                    (void*)((i + 1) * m_classSize + (int)block);
            }
            *(void**)((char*)block + (m_count - 1) * m_classSize + (m_classSize - 4)) = 0;
            headOfFreeList_ = (void*)((char*)block + m_classSize);
            result = block;
            m_chunks.push_back(std::move(block));
            DNF_LOG_SCOPE_LINE(0x7d, "./log/Mempool", "class size(%d) cnt(%d)", m_classSize,
                m_count * (int)m_chunks.size());
        }
        else
        {
            result = headOfFreeList_;
            headOfFreeList_ = *(void**)((char*)headOfFreeList_ + (m_classSize - 4));
        }
    }
    else
    {
        result = ::operator new(m_classSize);
    }
    return result;
}
```
