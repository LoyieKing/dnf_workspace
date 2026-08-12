# _ZL16allocStackBufferjPPhPi

`allocStackBuffer(unsigned int, unsigned char**, int*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x818c4c0` | `0x272` | `0x80f13fd` | `0x272` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,164 +1,164 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    %gs:0xfffffffc,%eax
 test   %eax,%eax
 jne    <T> <_ZL16allocStackBufferjPPhPi+0xc1>
 movl   $0x20,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN18StackBufferContextC1Ev>
 jmp    <T> <_ZL16allocStackBufferjPPhPi+0x49>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
 mov    %eax,%gs:0xfffffffc
 mov    %gs:0xfffffffc,%eax
 movl   $0x20,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIN18StackBufferContext6BufferESaIS1_EE7reserveEj>
 mov    %gs:0xfffffffc,%eax
 add    $0xc,%eax
 movl   $0x8,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIPhSaIS0_EE7reserveEj>
 movl   $0x4000,(%esp)
 call   <T> <_Znaj>
 mov    %eax,-0x30(%ebp)
 mov    %gs:0xfffffffc,%eax
 lea    0xc(%eax),%edx
 lea    -0x30(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt6vectorIPhSaIS0_EE9push_backEOS0_>
 mov    %gs:0xfffffffc,%eax
 movl   $0x0,0x18(%eax)
 mov    %gs:0xfffffffc,%eax
 movl   $0x0,0x1c(%eax)
 movl   $0x0,-0x2c(%ebp)
 movl   $0x0,-0x28(%ebp)
 movl   $0x0,-0x24(%ebp)
 mov    %gs:0xfffffffc,%eax
 lea    -0x2c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIN18StackBufferContext6BufferESaIS1_EE9push_backEOS1_>
 mov    %gs:0xfffffffc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIN18StackBufferContext6BufferESaIS1_EE4backEv>
 mov    %eax,-0x1c(%ebp)
 mov    -0x1c(%ebp),%eax
 movl   $0x0,(%eax)
 mov    -0x1c(%ebp),%eax
 movl   $0x0,0x4(%eax)
+mov    0x8(%ebp),%edx
 mov    -0x1c(%ebp),%eax
-mov    0x8(%ebp),%edx
 mov    %edx,0x8(%eax)
 cmpl   $0x4000,0x8(%ebp)
 jbe    <T> <_ZL16allocStackBufferjPPhPi+0x14b>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Znaj>
 mov    %eax,%edx
 mov    0xc(%ebp),%eax
 mov    %edx,(%eax)
 mov    0x10(%ebp),%eax
 movl   $0xffffffff,(%eax)
 mov    0xc(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 setne  %al
 jmp    <T> <_ZL16allocStackBufferjPPhPi+0x26a>
 mov    %gs:0xfffffffc,%eax
 mov    0x1c(%eax),%eax
 add    0x8(%ebp),%eax
 cmp    $0x4000,%eax
 jbe    <T> <_ZL16allocStackBufferjPPhPi+0x1f0>
 mov    %gs:0xfffffffc,%eax
 mov    0x18(%eax),%eax
 add    $0x1,%eax
 mov    %eax,%ebx
 mov    %gs:0xfffffffc,%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIPhSaIS0_EE4sizeEv>
 cmp    %eax,%ebx
 sete   %al
 test   %al,%al
 je     <T> <_ZL16allocStackBufferjPPhPi+0x1b1>
 movl   $0x4000,(%esp)
 call   <T> <_Znaj>
 mov    %eax,-0x20(%ebp)
 mov    %gs:0xfffffffc,%eax
 lea    0xc(%eax),%edx
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt6vectorIPhSaIS0_EE9push_backEOS0_>
 mov    %gs:0xfffffffc,%eax
 mov    0x18(%eax),%eax
 lea    0x1(%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %edx,(%eax)
 mov    -0x1c(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    %gs:0xfffffffc,%eax
 mov    %gs:0xfffffffc,%edx
 mov    0x18(%edx),%edx
 add    $0x1,%edx
 mov    %edx,0x18(%eax)
 mov    %gs:0xfffffffc,%eax
 mov    0x8(%ebp),%edx
 mov    %edx,0x1c(%eax)
 jmp    <T> <_ZL16allocStackBufferjPPhPi+0x223>
 mov    %gs:0xfffffffc,%eax
 mov    0x18(%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %edx,(%eax)
 mov    %gs:0xfffffffc,%eax
 mov    0x1c(%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    %edx,0x4(%eax)
 mov    %gs:0xfffffffc,%eax
 mov    %gs:0xfffffffc,%edx
 mov    0x1c(%edx),%edx
 add    0x8(%ebp),%edx
 mov    %edx,0x1c(%eax)
 mov    -0x1c(%ebp),%eax
 mov    (%eax),%eax
 mov    %gs:0xfffffffc,%edx
 add    $0xc,%edx
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt6vectorIPhSaIS0_EEixEj>
 mov    (%eax),%edx
 mov    -0x1c(%ebp),%eax
 mov    0x4(%eax),%eax
 add    %eax,%edx
 mov    0xc(%ebp),%eax
 mov    %edx,(%eax)
 mov    %gs:0xfffffffc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIN18StackBufferContext6BufferESaIS1_EE4sizeEv>
 sub    $0x1,%eax
 mov    %eax,%edx
 mov    0x10(%ebp),%eax
 mov    %edx,(%eax)
 mov    $0x1,%eax
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

bool allocStackBuffer(size_t size,byte **buffer,int32 *bufferIdx)

{
  int iVar1;
  StackBufferContext *this;
  byte *pbVar2;
  size_t sVar3;
  byte **ppbVar4;
  int in_GS_OFFSET;
  bool bVar5;
  byte *local_34;
  Buffer local_30;
  byte *local_24;
  Buffer *local_20;
  
                    /* Unresolved local var: Buffer * b@[???] */
  if (*(int *)(in_GS_OFFSET + -4) == 0) {
    this = operator_new(0x20);
                    /* try { // try from 0818c4ea to 0818c4ee has its CatchHandler @ 0818c4f1 */
    StackBufferContext::StackBufferContext(this);
    *(StackBufferContext **)(in_GS_OFFSET + -4) = this;
    std::vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>::reserve
              (*(vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_> **)
                (in_GS_OFFSET + -4),0x20);
    std::vector<byte*,_std::allocator<byte*>_>::reserve
              ((vector<byte*,_std::allocator<byte*>_> *)(*(int *)(in_GS_OFFSET + -4) + 0xc),8);
    local_34 = operator_new__(0x4000);
    std::vector<byte*,_std::allocator<byte*>_>::push_back
              ((vector<byte*,_std::allocator<byte*>_> *)(*(int *)(in_GS_OFFSET + -4) + 0xc),
               &local_34);
    *(undefined4 *)(*(int *)(in_GS_OFFSET + -4) + 0x18) = 0;
    *(undefined4 *)(*(int *)(in_GS_OFFSET + -4) + 0x1c) = 0;
  }
  local_30.chunkIdx = 0;
  local_30.chunkOffset = 0;
  local_30.size = 0;
  std::vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>::push_back
            (*(vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_> **)
              (in_GS_OFFSET + -4),&local_30);
  local_20 = std::vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>::
             back(*(vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>
                    **)(in_GS_OFFSET + -4));
  local_20->chunkIdx = 0;
  local_20->chunkOffset = 0;
  local_20->size = size;
  if (size < 0x4001) {
    if (*(int *)(*(int *)(in_GS_OFFSET + -4) + 0x1c) + size < 0x4001) {
      local_20->chunkIdx = *(int32 *)(*(int *)(in_GS_OFFSET + -4) + 0x18);
      local_20->chunkOffset = *(int32 *)(*(int *)(in_GS_OFFSET + -4) + 0x1c);
      *(size_t *)(*(int *)(in_GS_OFFSET + -4) + 0x1c) =
           *(int *)(*(int *)(in_GS_OFFSET + -4) + 0x1c) + size;
    }
    else {
      iVar1 = *(int *)(*(int *)(in_GS_OFFSET + -4) + 0x18);
      sVar3 = std::vector<byte*,_std::allocator<byte*>_>::size
                        ((vector<byte*,_std::allocator<byte*>_> *)
                         (*(int *)(in_GS_OFFSET + -4) + 0xc));
      if (iVar1 + 1U == sVar3) {
        local_24 = operator_new__(0x4000);
        std::vector<byte*,_std::allocator<byte*>_>::push_back
                  ((vector<byte*,_std::allocator<byte*>_> *)(*(int *)(in_GS_OFFSET + -4) + 0xc),
                   &local_24);
      }
      local_20->chunkIdx = *(int *)(*(int *)(in_GS_OFFSET + -4) + 0x18) + 1;
      local_20->chunkOffset = 0;
      *(int *)(*(int *)(in_GS_OFFSET + -4) + 0x18) =
           *(int *)(*(int *)(in_GS_OFFSET + -4) + 0x18) + 1;
      *(size_t *)(*(int *)(in_GS_OFFSET + -4) + 0x1c) = size;
    }
    ppbVar4 = std::vector<byte*,_std::allocator<byte*>_>::operator[]
                        ((vector<byte*,_std::allocator<byte*>_> *)
                         (*(int *)(in_GS_OFFSET + -4) + 0xc),local_20->chunkIdx);
    *buffer = *ppbVar4 + local_20->chunkOffset;
    sVar3 = std::vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>::
            size(*(vector<StackBufferContext::Buffer,_std::allocator<StackBufferContext::Buffer>_>
                   **)(in_GS_OFFSET + -4));
    *bufferIdx = sVar3 - 1;
    bVar5 = true;
  }
  else {
    pbVar2 = operator_new__(size);
    *buffer = pbVar2;
    *bufferIdx = -1;
    bVar5 = *buffer != (byte *)0x0;
  }
  return bVar5;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/StackBuffer.cpp](source/DNFServer/GameServer/DBMW/StackBuffer.cpp)（约第 35 行）：

```cpp
static bool allocStackBuffer(unsigned int size, unsigned char** buf, int* end)
{
    if (!g_stackBufferContext)
    {
        g_stackBufferContext = new StackBufferContext;
        g_stackBufferContext->m_buffers.reserve(0x20);
        g_stackBufferContext->m_blocks.reserve(8);
        g_stackBufferContext->m_blocks.push_back(
            new unsigned char[0x4000]);
        g_stackBufferContext->m_blockIndex = 0;
        g_stackBufferContext->m_offset = 0;
    }
    g_stackBufferContext->m_buffers.push_back(
        StackBufferContext::Buffer());
    StackBufferContext::Buffer* cur = &g_stackBufferContext->m_buffers.back();
    cur->m_blockIndex = 0;
    cur->m_offset = 0;
    cur->m_size = size;
    if (size > 0x4000)
    {
        *buf = new unsigned char[size];
        *end = -1;
        return *buf != 0;
    }
    if (g_stackBufferContext->m_offset + size > 0x4000)
    {
        if (g_stackBufferContext->m_blockIndex + 1 ==
            (unsigned int)g_stackBufferContext->m_blocks.size())
        {
            g_stackBufferContext->m_blocks.push_back(
                new unsigned char[0x4000]);
        }
        cur->m_blockIndex = g_stackBufferContext->m_blockIndex + 1;
        cur->m_offset = 0;
        g_stackBufferContext->m_blockIndex =
            g_stackBufferContext->m_blockIndex + 1;
        g_stackBufferContext->m_offset = size;
    }
    else
    {
        cur->m_blockIndex = g_stackBufferContext->m_blockIndex;
        cur->m_offset = g_stackBufferContext->m_offset;
        g_stackBufferContext->m_offset += size;
    }
    *buf = g_stackBufferContext->m_blocks[cur->m_blockIndex] + cur->m_offset;
    *end = g_stackBufferContext->m_buffers.size() - 1;
    return 1;
}
```
