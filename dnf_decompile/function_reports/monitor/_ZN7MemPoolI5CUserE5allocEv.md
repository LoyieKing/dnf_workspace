# _ZN7MemPoolI5CUserE5allocEv

`MemPool<CUser>::alloc()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806e72a` | `0x150` | `0x8065a90` | `0x15b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,93 +1,96 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x40,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 cmp    $0xbc,%eax
 je     <T> <_ZN7MemPoolI5CUserE5allocEv+0x25>
 movl   $0xbc,(%esp)
 call   <T> <_Znwj>
-jmp    <T> <_ZN7MemPoolI5CUserE5allocEv+0x149>
+jmp    <T> <_ZN7MemPoolI5CUserE5allocEv+0x154>
 mov    &_ZN7MemPoolI5CUserE15headOfFreeList_E,%eax
 mov    %eax,-0x14(%ebp)
 cmpl   $0x0,-0x14(%ebp)
 je     <T> <_ZN7MemPoolI5CUserE5allocEv+0x46>
 mov    -0x14(%ebp),%eax
 mov    0xb8(%eax),%eax
 mov    %eax,&_ZN7MemPoolI5CUserE15headOfFreeList_E
-jmp    <T> <_ZN7MemPoolI5CUserE5allocEv+0x146>
+jmp    <T> <_ZN7MemPoolI5CUserE5allocEv+0x151>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 imul   %edx,%eax
 mov    %eax,(%esp)
 call   <T> <_Znwj>
 mov    %eax,-0x10(%ebp)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN7MemPoolI5CUserE5allocEv+0x8d>
+jmp    <T> <_ZN7MemPoolI5CUserE5allocEv+0x93>
 mov    -0xc(%ebp),%eax
-imul   $0xbc,%eax,%eax
-add    -0x10(%ebp),%eax
+imul   $0xbc,%eax,%edx
+mov    -0x10(%ebp),%eax
+lea    (%edx,%eax,1),%eax
 mov    -0xc(%ebp),%edx
 add    $0x1,%edx
-imul   $0xbc,%edx,%edx
-add    -0x10(%ebp),%edx
+imul   $0xbc,%edx,%ecx
+mov    -0x10(%ebp),%edx
+lea    (%ecx,%edx,1),%edx
 mov    %edx,0xb8(%eax)
 addl   $0x1,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
 sub    $0x1,%eax
 cmp    -0xc(%ebp),%eax
 seta   %al
 test   %al,%al
 jne    <T> <_ZN7MemPoolI5CUserE5allocEv+0x68>
 mov    0x8(%ebp),%eax
 mov    0x4(%eax),%eax
-sub    $0x1,%eax
-imul   $0xbc,%eax,%eax
-add    -0x10(%ebp),%eax
+imul   $0xbc,%eax,%edx
+mov    -0x10(%ebp),%eax
+lea    (%edx,%eax,1),%eax
+sub    $0xbc,%eax
 movl   $0x0,0xb8(%eax)
 mov    -0x10(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    -0x10(%ebp),%eax
 add    $0xbc,%eax
 mov    %eax,&_ZN7MemPoolI5CUserE15headOfFreeList_E
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
 movl   $&_ZZN7MemPoolI5CUserE5allocEvE12__FUNCTION__,0x4(%esp)
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

/* MemPool<CUser>::alloc() */

void * __thiscall MemPool<CUser>::_ZN7MemPoolI5CUserE5allocEv(MemPool<CUser> *this)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  void *local_24;
  CMyFileLog local_20 [8];
  void *local_18;
  void *local_14;
  uint local_10;
  
  if (*(int *)this == 0xbc) {
    local_18 = headOfFreeList_;
    if (headOfFreeList_ == (void *)0x0) {
      local_24 = operator_new(*(int *)this * *(int *)(this + 4));
      for (local_10 = 0; local_10 < *(int *)(this + 4) - 1U; local_10 = local_10 + 1) {
        *(void **)((int)local_24 + local_10 * 0xbc + 0xb8) =
             (void *)((local_10 + 1) * 0xbc + (int)local_24);
      }
      *(undefined4 *)((int)local_24 + (*(int *)(this + 4) + -1) * 0xbc + 0xb8) = 0;
      headOfFreeList_ = (void *)((int)local_24 + 0xbc);
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
      headOfFreeList_ = *(void **)((int)headOfFreeList_ + 0xb8);
    }
  }
  else {
    local_18 = operator_new(0xbc);
  }
  return local_18;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketBuffer.cpp](source/DNFServer/GameServer/Monitor/DNFPacketBuffer.cpp)（约第 64 行）：

```cpp
void* MemPool<T>::alloc()
{
    if (m_size != (int)sizeof(T))
    {
        return ::operator new(sizeof(T));
    }
    void* head = headOfFreeList_;
    if (head != 0)
    {
        headOfFreeList_ = ((MemPoolSlot<T>*)head)->next;
    }
    else
    {
        void* block = ::operator new((unsigned int)m_count * (unsigned int)m_size);
        for (unsigned int i = 0; i < (unsigned int)m_count - 1; i++)
        {
            ((MemPoolSlot<T>*)(i * sizeof(T) + (unsigned int)block))->next =
                (void*)((i + 1) * sizeof(T) + (unsigned int)block);
        }
        ((MemPoolSlot<T>*)(((unsigned int)m_count - 1) * sizeof(T) + (unsigned int)block))->next = 0;
        head = block;
        headOfFreeList_ = (void*)((char*)block + sizeof(T));
        m_blocks.push_back((void*)block);
        DNF_LOG_SCOPE_LINE(0x7d, "./log/Mempool", "class size(%d) cnt(%d)", m_size,
            m_count * (int)m_blocks.size());
    }
    return head;
}
```
