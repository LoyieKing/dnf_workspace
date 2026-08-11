# _ZN16CThreadInterface5beginEv

`CThreadInterface::begin()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x805d960` | `0x4e` | `0x8062cfa` | `0x4e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,21 +1,21 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %eax,0xc(%esp)
-movl   $&_ZN16CThreadInterface14dispatch_proxyEPv,0x8(%esp)
+movl   $&_ZL12thread_proxyPv,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <pthread_create>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
 jns    <T> <_ZN16CThreadInterface5beginEv+0x47>
 movl   $"[ThreadInterface::begin] Can't begin thread",(%esp)
 call   <T> <puts>
 mov    $0x0,%eax
 jmp    <T> <_ZN16CThreadInterface5beginEv+0x4c>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CThreadInterface::begin() */

bool __thiscall CThreadInterface::_ZN16CThreadInterface5beginEv(CThreadInterface *this)

{
  int iVar1;
  
  iVar1 = pthread_create((pthread_t *)(this + 4),(pthread_attr_t *)0x0,
                         _ZN16CThreadInterface14dispatch_proxyEPv,this);
  if (-1 >= iVar1) {
    puts("[ThreadInterface::begin] Can\'t begin thread");
  }
  return -1 < iVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFThreadInterface.cpp](source/DNFServer/GameServer/COServer/DNFThreadInterface.cpp)（约第 27 行）：

```cpp
bool CThreadInterface::begin()
{
    int r = pthread_create(&m_handle, 0, dispatch_proxy, this);
    if (r < 0)
    {
        puts("[ThreadInterface::begin] Can't begin thread");
        return false;
    }
    return true;
}
```
