# _ZN7MemPoolI10CBlackUserE4freeEPv

`MemPool<CBlackUser>::free(void*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x806656a` | `0x2b` | `0x809402a` | `0x20` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,12 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x10,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN7MemPoolI10CBlackUserE4freeEPv+0x28>
+je     <T> <_ZN7MemPoolI10CBlackUserE4freeEPv+0x1e>
 mov    0xc(%ebp),%eax
-mov    %eax,-0x4(%ebp)
-mov    &_ZN7MemPoolI10CBlackUserE15headOfFreeList_E,%edx
-mov    -0x4(%ebp),%eax
-mov    %edx,0x24(%eax)
-mov    -0x4(%ebp),%eax
+lea    0x24(%eax),%edx
+mov    &_ZN7MemPoolI10CBlackUserE15headOfFreeList_E,%eax
+mov    %eax,(%edx)
+mov    0xc(%ebp),%eax
 mov    %eax,&_ZN7MemPoolI10CBlackUserE15headOfFreeList_E
-jmp    <T> <_ZN7MemPoolI10CBlackUserE4freeEPv+0x29>
-nop
-leave
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* MemPool<CBlackUser>::free(void*) */

void __thiscall
MemPool<CBlackUser>::_ZN7MemPoolI10CBlackUserE4freeEPv(MemPool<CBlackUser> *this,void *param_1)

{
  if (param_1 != (void *)0x0) {
    *(void **)((int)param_1 + 0x24) = headOfFreeList_;
    headOfFreeList_ = param_1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/MemPool.cpp](source/DNFServer/GameServer/Guild/MemPool.cpp)（约第 131 行）：

```cpp
void MemPool<T>::free(void* p)
{
    if (p != 0)
    {
        *(void**)((char*)p + (sizeof(T) - 4)) = headOfFreeList_;
        headOfFreeList_ = p;
    }
}
```
