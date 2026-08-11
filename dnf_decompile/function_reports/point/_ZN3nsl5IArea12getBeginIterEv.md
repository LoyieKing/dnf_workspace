# _ZN3nsl5IArea12getBeginIterEv

`nsl::IArea::getBeginIter()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | DIFF | `0x80a28f0` | `0x42` | `0x8078f8c` | `0x28` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,26 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
 push   %ebx
-sub    $0x20,%esp
+sub    $0x14,%esp
 mov    0x8(%ebp),%ebx
 mov    0xc(%ebp),%eax
-lea    0x4(%eax),%edx
-mov    0xc(%ebp),%esi
-lea    -0xc(%ebp),%eax
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
+add    $0x4,%eax
+mov    %eax,0x4(%esp)
+mov    %ebx,(%esp)
 call   <T> <_ZNSt3mapIjPN3nsl8ISessionESt4lessIjESaISt4pairIKjS2_EEE5beginEv>
 sub    $0x4,%esp
-mov    -0xc(%ebp),%eax
-mov    %eax,0x1c(%esi)
-mov    0xc(%ebp),%eax
-mov    0x1c(%eax),%eax
-mov    %eax,(%ebx)
 mov    %ebx,%eax
-lea    -0x8(%ebp),%esp
-add    $0x0,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+mov    -0x4(%ebp),%ebx
+leave
 ret    $0x4
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: MAP_OBJECTS_ITER getBeginIter(IArea * this) */

MAP_OBJECTS_ITER __thiscall nsl::IArea::_ZN3nsl5IArea12getBeginIterEv(IArea *this)

{
  int in_stack_00000008;
  undefined4 local_10;
  
  std::
  map<unsigned_int,_nsl::ISession*,_std::less<unsigned_int>,_std::allocator<std::pair<const_unsigned_int,_nsl::ISession*>_>_>
  ::begin((map<unsigned_int,_nsl::ISession*,_std::less<unsigned_int>,_std::allocator<std::pair<const_unsigned_int,_nsl::ISession*>_>_>
           *)&stack0xfffffff0);
  *(undefined4 *)(in_stack_00000008 + 0x1c) = local_10;
  this->_vptr_IArea = *(_func_int_varargs ***)(in_stack_00000008 + 0x1c);
  return (MAP_OBJECTS_ITER)(_Base_ptr)this;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/IArea.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/IArea.cpp)（约第 60 行）：

```cpp
MAP_OBJECTS_ITER IArea::getBeginIter()
{
    return mMapObj.begin();
}
```
