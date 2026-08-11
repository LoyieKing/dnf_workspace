# _ZN7MemPoolI5CUserE4freeEPvj

`MemPool<CUser>::free(void*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8067ae8` | `0x45` | `0x80957d8` | `0x43` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+sub    $0x18,%esp
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN7MemPoolI5CUserE4freeEPvj+0x42>
+je     <T> <_ZN7MemPoolI5CUserE4freeEPvj+0x41>
+mov    0x8(%ebp),%eax
+mov    (%eax),%edx
+mov    0x10(%ebp),%eax
+cmp    %eax,%edx
+jne    <T> <_ZN7MemPoolI5CUserE4freeEPvj+0x36>
+mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
-cmp    0x10(%ebp),%eax
-je     <T> <_ZN7MemPoolI5CUserE4freeEPvj+0x23>
+sub    $0x4,%eax
+add    %eax,%edx
+mov    &_ZN7MemPoolI5CUserE15headOfFreeList_E,%eax
+mov    %eax,(%edx)
+mov    0xc(%ebp),%eax
+mov    %eax,&_ZN7MemPoolI5CUserE15headOfFreeList_E
+jmp    <T> <_ZN7MemPoolI5CUserE4freeEPvj+0x41>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdlPv>
-jmp    <T> <_ZN7MemPoolI5CUserE4freeEPvj+0x43>
-mov    0xc(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    &_ZN7MemPoolI5CUserE15headOfFreeList_E,%edx
-mov    -0xc(%ebp),%eax
-mov    %edx,0x88(%eax)
-mov    -0xc(%ebp),%eax
-mov    %eax,&_ZN7MemPoolI5CUserE15headOfFreeList_E
-jmp    <T> <_ZN7MemPoolI5CUserE4freeEPvj+0x43>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* MemPool<CUser>::free(void*, unsigned int) */

void __thiscall
MemPool<CUser>::_ZN7MemPoolI5CUserE4freeEPvj(MemPool<CUser> *this,void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    if (*(uint *)this == param_2) {
      *(void **)((int)param_1 + 0x88) = headOfFreeList_;
      headOfFreeList_ = param_1;
    }
    else {
      ::operator_delete(param_1);
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/MemPool.cpp](source/DNFServer/GameServer/Guild/MemPool.cpp)（约第 141 行）：

```cpp
void MemPool<T>::free(void* p, unsigned int size)
{
    if (p != 0)
    {
        if (m_classSize == (int)size)
        {
            *(void**)((char*)p + (m_classSize - 4)) = headOfFreeList_;
            headOfFreeList_ = p;
        }
        else
        {
            ::operator delete(p);
        }
    }
}
```
