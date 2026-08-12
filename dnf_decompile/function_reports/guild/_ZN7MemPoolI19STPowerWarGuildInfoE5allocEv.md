# _ZN7MemPoolI19STPowerWarGuildInfoE5allocEv

`MemPool<STPowerWarGuildInfo>::alloc()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80aa92c` | `0x151` | `0x8094b7a` | `0x160` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,103 +1,109 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0x14,%eax
 je     <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x23>
 movl   $0x14,(%esp)
 call   <T> <_Znwj>
-jmp    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x14a>
+jmp    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x159>
 mov    &_ZN7MemPoolI19STPowerWarGuildInfoE15headOfFreeList_E,%eax
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 je     <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x41>
 mov    -0x14(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    %eax,&_ZN7MemPoolI19STPowerWarGuildInfoE15headOfFreeList_E
-jmp    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x147>
+jmp    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x156>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 imul   %edx,%eax
 mov    %eax,(%esp)
 call   <T> <_Znwj>
 mov    %eax,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x8f>
+jmp    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x99>
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
+mov    %eax,%edx
+mov    -0x10(%ebp),%eax
+lea    (%edx,%eax,1),%eax
 mov    %eax,%ecx
-add    -0x10(%ebp),%ecx
 mov    -0xc(%ebp),%eax
 lea    0x1(%eax),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-add    -0x10(%ebp),%eax
+mov    %eax,%edx
+mov    -0x10(%ebp),%eax
+lea    (%edx,%eax,1),%eax
 mov    %eax,0x10(%ecx)
 addl   $0x1,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 sub    $0x1,%eax
 cmp    -0xc(%ebp),%eax
 seta   %al
 test   %al,%al
 jne    <T> <_ZN7MemPoolI19STPowerWarGuildInfoE5allocEv+0x63>
 mov    0x8(%ebp),%eax
-mov    0x4(%eax),%eax
-lea    -0x1(%eax),%edx
+mov    0x4(%eax),%edx
 mov    %edx,%eax
 shl    $0x2,%eax
 add    %edx,%eax
 shl    $0x2,%eax
-add    -0x10(%ebp),%eax
+mov    %eax,%edx
+mov    -0x10(%ebp),%eax
+lea    (%edx,%eax,1),%eax
+sub    $0x14,%eax
 movl   $0x0,0x10(%eax)
 mov    -0x10(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    -0x10(%ebp),%eax
 add    $0x14,%eax
 mov    %eax,&_ZN7MemPoolI19STPowerWarGuildInfoE15headOfFreeList_E
 mov    -0x10(%ebp),%eax
 mov    %eax,-0x20(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x8(%eax),%edx
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt6vectorIPvSaIS0_EE9push_backEOS0_>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%ebx
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIPvSaIS0_EE4sizeEv>
 mov    %ebx,%esi
 imul   %eax,%esi
 mov    0x8(%ebp),%eax
 mov    (%eax),%ebx
 movl   $0x7d,0x8(%esp)
 movl   $&_ZZN7MemPoolI19STPowerWarGuildInfoE5allocEvE12__FUNCTION__,0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"class size(%d) cnt(%d)",0x8(%esp)
 movl   $"./log/Mempool",0x4(%esp)
 lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    -0x14(%ebp),%eax
 add    $0x40,%esp
 pop    %ebx
 pop    %esi
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

定义于 [source/DNFServer/GameServer/Guild/MemPool.cpp](source/DNFServer/GameServer/Guild/MemPool.cpp)（约第 100 行）：

```cpp
void* MemPool<T>::alloc()
{
    if (m_classSize != (int)sizeof(T))
    {
        return ::operator new(sizeof(T));
    }
    void* result = headOfFreeList_;
    if (result != 0)
    {
        headOfFreeList_ = ((MemPoolFreeLink<T>*)result)->next;
    }
    else
    {
        void* block = ::operator new(m_count * m_classSize);
        for (unsigned int i = 0; i < m_count - 1U; i++)
        {
            ((MemPoolFreeLink<T>*)((i * sizeof(T)) + (unsigned int)block))->next =
                (void*)(((i + 1) * sizeof(T)) + (unsigned int)block);
        }
        ((MemPoolFreeLink<T>*)(sizeof(T) * ((unsigned int)m_count - 1) +
            (unsigned int)block))->next = 0;
        result = block;
        headOfFreeList_ = (void*)((char*)block + sizeof(T));
        m_chunks.push_back((void*)block);
        DNF_LOG_SCOPE_LINE(0x7d, "./log/Mempool", "class size(%d) cnt(%d)", m_classSize,
            m_count * (int)m_chunks.size());
    }
    return result;
}
```
