# _ZN7MemPoolI6CBuddyE4freeEPv

`MemPool<CBuddy>::free(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x809e35e` | `0x2b` | `0x8066144` | `0x2b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x10,%esp
 cmpl   $0x0,0xc(%ebp)
 je     <T> <_ZN7MemPoolI6CBuddyE4freeEPv+0x28>
 mov    0xc(%ebp),%eax
 mov    %eax,-0x4(%ebp)
+mov    -0x4(%ebp),%eax
 mov    &_ZN7MemPoolI6CBuddyE15headOfFreeList_E,%edx
-mov    -0x4(%ebp),%eax
 mov    %edx,0x28(%eax)
 mov    -0x4(%ebp),%eax
 mov    %eax,&_ZN7MemPoolI6CBuddyE15headOfFreeList_E
 jmp    <T> <_ZN7MemPoolI6CBuddyE4freeEPv+0x29>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* MemPool<CBuddy>::free(void*) */

void __thiscall MemPool<CBuddy>::_ZN7MemPoolI6CBuddyE4freeEPv(MemPool<CBuddy> *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    *(void **)((int)param_1 + 0x28) = headOfFreeList_;
    headOfFreeList_ = param_1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketBuffer.cpp](source/DNFServer/GameServer/DBMW/DNFPacketBuffer.cpp)（约第 91 行）：

```cpp
void MemPool<T>::free(void* ptr)
{
    if (ptr != 0)
    {
        *(void**)((char*)ptr + m_size - 4) = headOfFreeList_;
        headOfFreeList_ = ptr;
    }
}
```
