# _ZL15freeStackBufferPhi

`freeStackBuffer(unsigned char*, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x818c732` | `0xeb` | `0x80f1586` | `0xe9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,66 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 cmp    $0xffffffff,%eax
 jne    <T> <_ZL15freeStackBufferPhi+0x28>
 cmpl   $0x0,0x8(%ebp)
-je     <T> <_ZL15freeStackBufferPhi+0xe8>
+je     <T> <_ZL15freeStackBufferPhi+0xe6>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZdaPv>
-jmp    <T> <_ZL15freeStackBufferPhi+0xe9>
+jmp    <T> <_ZL15freeStackBufferPhi+0xe7>
 mov    %gs:0xfffffffc,%eax
 mov    %eax,%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIN18StackBufferContext6BufferESaIS1_EE5beginEv>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPN18StackBufferContext6BufferESt6vectorIS2_SaIS2_EEEplERKi>
 sub    $0x4,%esp
 mov    %gs:0xfffffffc,%eax
 mov    %eax,%edx
 lea    -0x18(%ebp),%eax
 mov    -0x14(%ebp),%ecx
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIN18StackBufferContext6BufferESaIS1_EE5eraseEN9__gnu_cxx17__normal_iteratorIPS1_S3_EE>
 sub    $0x4,%esp
 mov    %gs:0xfffffffc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIN18StackBufferContext6BufferESaIS1_EE5emptyEv>
 test   %al,%al
 je     <T> <_ZL15freeStackBufferPhi+0xad>
 mov    %gs:0xfffffffc,%eax
 movl   $0x0,0x18(%eax)
 mov    %gs:0xfffffffc,%eax
 movl   $0x0,0x1c(%eax)
-jmp    <T> <_ZL15freeStackBufferPhi+0xe9>
+jmp    <T> <_ZL15freeStackBufferPhi+0xe7>
 mov    %gs:0xfffffffc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIN18StackBufferContext6BufferESaIS1_EE4backEv>
 mov    %eax,-0xc(%ebp)
 mov    %gs:0xfffffffc,%eax
 mov    -0xc(%ebp),%edx
 mov    (%edx),%edx
 mov    %edx,0x18(%eax)
 mov    %gs:0xfffffffc,%eax
 mov    -0xc(%ebp),%edx
-mov    0x4(%edx),%edx
-mov    %edx,%ecx
+mov    0x4(%edx),%ecx
 mov    -0xc(%ebp),%edx
 mov    0x8(%edx),%edx
 lea    (%ecx,%edx,1),%edx
 mov    %edx,0x1c(%eax)
-jmp    <T> <_ZL15freeStackBufferPhi+0xe9>
+jmp    <T> <_ZL15freeStackBufferPhi+0xe7>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

void freeStackBuffer(byte *buffer,int32 bufferIdx)

{
  bool bVar1;
  Buffer *pBVar2;
  int in_GS_OFFSET;
  undefined1 local_1c [24];
  
  if (bufferIdx == -1) {
    if (buffer != (byte *)0x0) {
      operator_delete__(buffer);
    }
  }
  else {
    std::vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>::begin
              ((vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_> *)
               (local_1c + 8));
    __gnu_cxx::
    __normal_iterator<StackBufferContext::Buffer*,_std::vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>_>
    ::operator+((__normal_iterator<StackBufferContext::Buffer*,_std::vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>_>
                 *)(local_1c + 4),(ptrdiff_t *)(local_1c + 8));
    std::vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>::erase
              ((vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_> *)
               local_1c,*(Buffer **)(in_GS_OFFSET + -4));
    bVar1 = std::vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>::
            empty(*(vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>
                    **)(in_GS_OFFSET + -4));
    if (bVar1) {
      *(undefined4 *)(*(int *)(in_GS_OFFSET + -4) + 0x18) = 0;
      *(undefined4 *)(*(int *)(in_GS_OFFSET + -4) + 0x1c) = 0;
    }
    else {
                    /* Unresolved local var: Buffer * b@[???] */
      pBVar2 = std::vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>
               ::back(*(vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>
                        **)(in_GS_OFFSET + -4));
      *(int32 *)(*(int *)(in_GS_OFFSET + -4) + 0x18) = pBVar2->chunkIdx;
      *(size_t *)(*(int *)(in_GS_OFFSET + -4) + 0x1c) = pBVar2->chunkOffset + pBVar2->size;
    }
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/StackBuffer.cpp](source/DNFServer/GameServer/DBMW/StackBuffer.cpp)（约第 81 行）：

```cpp
static void freeStackBuffer(unsigned char* buf, int end)
{
    if (end == -1)
    {
        delete[] buf;
        return;
    }
    g_stackBufferContext->m_buffers.erase(
        g_stackBufferContext->m_buffers.begin() + end);
    if (g_stackBufferContext->m_buffers.empty())
    {
        g_stackBufferContext->m_blockIndex = 0;
        g_stackBufferContext->m_offset = 0;
    }
    else
    {
        StackBufferContext::Buffer& b =
            g_stackBufferContext->m_buffers.back();
        g_stackBufferContext->m_blockIndex = b.m_blockIndex;
        g_stackBufferContext->m_offset = b.m_offset + b.m_size;
    }
}
```
