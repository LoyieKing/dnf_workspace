# _ZL19freeAllStackBuffersv

`freeAllStackBuffers()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x818c81d` | `0x106` | `0x80f16a8` | `0xd5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,76 +1,61 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
-sub    $0x34,%esp
+sub    $0x24,%esp
 mov    %gs:0xfffffffc,%eax
 test   %eax,%eax
-je     <T> <_ZL19freeAllStackBuffersv+0x100>
-movb   $0x0,-0xd(%ebp)
-cmpb   $0x0,-0xd(%ebp)
-jne    <T> <_ZL19freeAllStackBuffersv+0xd8>
+je     <T> <_ZL19freeAllStackBuffersv+0xcf>
 mov    %gs:0xfffffffc,%eax
 lea    0xc(%eax),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIPhSaIS0_EE5beginEv>
 sub    $0x4,%esp
 mov    %gs:0xfffffffc,%eax
 lea    0xc(%eax),%edx
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIPhSaIS0_EE3endEv>
 sub    $0x4,%esp
-jmp    <T> <_ZL19freeAllStackBuffersv+0xa8>
-lea    -0x18(%ebp),%eax
+jmp    <T> <_ZL19freeAllStackBuffersv+0x91>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPPhSt6vectorIS1_SaIS1_EEEdeEv>
+mov    (%eax),%eax
 mov    %eax,-0xc(%ebp)
-jmp    <T> <_ZL19freeAllStackBuffersv+0x85>
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZL19freeAllStackBuffersv+0x74>
+cmpl   $0x0,-0xc(%ebp)
+je     <T> <_ZL19freeAllStackBuffersv+0x74>
 mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-test   %eax,%eax
-je     <T> <_ZL19freeAllStackBuffersv+0x81>
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdaPv>
-movb   $0x0,-0xd(%ebp)
-cmpb   $0x0,-0xd(%ebp)
-jne    <T> <_ZL19freeAllStackBuffersv+0x6b>
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 movl   $0x0,0x8(%esp)
-lea    -0x18(%ebp),%edx
+lea    -0x14(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPPhSt6vectorIS1_SaIS1_EEEppEi>
 sub    $0x4,%esp
-lea    -0x1c(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPPhSt6vectorIS1_SaIS1_EEEEbRKNS_17__normal_iteratorIT_T0_EESB_>
 test   %al,%al
-je     <T> <_ZL19freeAllStackBuffersv+0xcf>
-xorb   $0x1,-0xd(%ebp)
-cmpb   $0x0,-0xd(%ebp)
-je     <T> <_ZL19freeAllStackBuffersv+0xcf>
-mov    $0x1,%eax
-jmp    <T> <_ZL19freeAllStackBuffersv+0xd4>
-mov    $0x0,%eax
-test   %al,%al
-jne    <T> <_ZL19freeAllStackBuffersv+0x5b>
+jne    <T> <_ZL19freeAllStackBuffersv+0x4d>
 mov    %gs:0xfffffffc,%ebx
 test   %ebx,%ebx
-je     <T> <_ZL19freeAllStackBuffersv+0xf3>
+je     <T> <_ZL19freeAllStackBuffersv+0xc2>
 mov    %ebx,(%esp)
 call   <T> <_ZN18StackBufferContextD1Ev>
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 movl   $0x0,%gs:0xfffffffc
-jmp    <T> <_ZL19freeAllStackBuffersv+0x101>
+jmp    <T> <_ZL19freeAllStackBuffersv+0xd0>
 nop
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void freeAllStackBuffers(void)

{
  StackBufferContext *this;
  bool bVar1;
  int in_GS_OFFSET;
  __normal_iterator<byte**,_std::vector<byte*,_std::allocator<byte*>_>_> *__rhs;
  undefined1 local_20 [8];
  __normal_iterator<byte**,_std::vector<byte*,_std::allocator<byte*>_>_> local_18;
  byte local_11;
  byte **local_10;
  
  if (*(int *)(in_GS_OFFSET + -4) != 0) {
                    /* Unresolved local var: bool c_runOnce@[???] */
    local_11 = 0;
                    /* Unresolved local var:
                       __normal_iterator<byte**,_std::vector<byte*,_std::allocator<byte*>_>_>
                       c_iterator@[???]
                       Unresolved local var:
                       __normal_iterator<byte**,_std::vector<byte*,_std::allocator<byte*>_>_>
                       c_iteratorEnd@[???] */
    std::vector<byte*,_std::allocator<byte*>_>::begin
              ((vector<byte*,_std::allocator<byte*>_> *)(local_20 + 4));
    std::vector<byte*,_std::allocator<byte*>_>::end
              ((vector<byte*,_std::allocator<byte*>_> *)local_20);
    while( true ) {
      __rhs = (__normal_iterator<byte**,_std::vector<byte*,_std::allocator<byte*>_>_> *)local_20;
      bVar1 = __gnu_cxx::operator!=<byte**,_std::vector<byte*,_std::allocator<byte*>_>_>
                        ((__normal_iterator<byte**,_std::vector<byte*,_std::allocator<byte*>_>_> *)
                         (local_20 + 4),__rhs);
      if ((bVar1) && (local_11 = local_11 ^ 1, local_11 != 0)) {
        bVar1 = true;
      }
      else {
        bVar1 = false;
      }
      if (!bVar1) break;
                    /* Unresolved local var: byte * * c@[???] */
      local_10 = __gnu_cxx::__normal_iterator<byte**,_std::vector<byte*,_std::allocator<byte*>_>_>::
                 operator*((__normal_iterator<byte**,_std::vector<byte*,_std::allocator<byte*>_>_> *
                           )(local_20 + 4));
      while (local_11 != 0) {
        if (*local_10 != (byte *)0x0) {
          operator_delete__(*local_10);
        }
        local_11 = 0;
      }
      __gnu_cxx::__normal_iterator<byte**,_std::vector<byte*,_std::allocator<byte*>_>_>::operator++
                (&local_18,(int)(local_20 + 4));
    }
    this = *(StackBufferContext **)(in_GS_OFFSET + -4);
    if (this != (StackBufferContext *)0x0) {
      StackBufferContext::~StackBufferContext(this,(int)__rhs);
      operator_delete(this);
    }
    *(undefined4 *)(in_GS_OFFSET + -4) = 0;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/StackBuffer.cpp](source/DNFServer/GameServer/DBMW/StackBuffer.cpp)（约第 106 行）：

```cpp
static void freeAllStackBuffers()
{
    if (!g_stackBufferContext)
        return;
    std::vector<unsigned char*>::iterator it =
        g_stackBufferContext->m_blocks.begin();
    std::vector<unsigned char*>::iterator e =
        g_stackBufferContext->m_blocks.end();
    for (; it != e; it++)
    {
        unsigned char* p = *it;
        if (p)
            delete[] p;
    }
    delete g_stackBufferContext;
    g_stackBufferContext = 0;
}
```
