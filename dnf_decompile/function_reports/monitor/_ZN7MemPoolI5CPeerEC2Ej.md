# _ZN7MemPoolI5CPeerEC2Ej

`MemPool<CPeer>::MemPool(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x8051fda` | `0x28` | `0x8066466` | `0x28` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,14 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-movl   $0x97840,(%eax)
+movl   $0x9783c,(%eax)
+mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
 mov    %edx,0x4(%eax)
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIPvSaIS0_EEC1Ev>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* MemPool<CPeer>::MemPool(unsigned int) */

void __thiscall MemPool<CPeer>::_ZN7MemPoolI5CPeerEC2Ej(MemPool<CPeer> *this,uint param_1)

{
  *(undefined4 *)this = 0x97840;
  *(uint *)(this + 4) = param_1;
  std::vector<void*,std::allocator<void*>>::vector
            ((vector<void*,std::allocator<void*>> *)(this + 8));
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketBuffer.cpp](source/DNFServer/GameServer/DBMW/DNFPacketBuffer.cpp)（约第 32 行）：

```cpp
MemPool<T>::MemPool(unsigned int count) : m_size((int)sizeof(T)), m_count((int)count) {}
```
