# _ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler

`FrameLagCollector::SaveUsedMemory(CServerHandler*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x806833a` | `0x17b` | `0x80616ac` | `0x16b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,105 +1,98 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x450,%esp
+sub    $0x458,%esp
 mov    0x8(%ebp),%eax
 mov    0x1e4(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1e4(%eax)
 mov    0x8(%ebp),%eax
-mov    0x1e4(%eax),%edx
+mov    0x88(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    0x88(%eax),%eax
+mov    0x1e4(%eax),%eax
 cmp    %eax,%edx
-jl     <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x16c>
+jg     <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x169>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1e4(%eax)
-lea    -0x41e(%ebp),%eax
+lea    -0x426(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN40Packet_Frame_Lag_Used_Memory_Write_QueryC1Ev>
-movl   $0x0,-0x14(%ebp)
-jmp    <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x15d>
-movl   $0x0,-0x10(%ebp)
-jmp    <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x12b>
-mov    -0x14(%ebp),%edx
-mov    -0x10(%ebp),%ebx
-mov    0x8(%ebp),%ecx
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x15a>
+movl   $0x0,-0x18(%ebp)
+jmp    <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x128>
+mov    -0x1c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
+shl    $0x4,%eax
+add    $0xc0,%eax
+add    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    %eax,%edx
+mov    -0x18(%ebp),%eax
 shl    $0x2,%eax
-add    %ebx,%eax
-add    $0x34,%eax
-mov    0xc(%ecx,%eax,4),%eax
-test   %eax,%eax
-je     <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x127>
-mov    -0x14(%ebp),%edx
-mov    -0x10(%ebp),%ebx
-mov    0x8(%ebp),%ecx
+lea    (%edx,%eax,1),%eax
+mov    (%eax),%eax
+mov    %eax,-0x14(%ebp)
+mov    -0x1c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
-shl    $0x2,%eax
-add    %ebx,%eax
-add    $0x34,%eax
-mov    0xc(%ecx,%eax,4),%ecx
+shl    $0x4,%eax
+add    $0xc0,%eax
+add    0x8(%ebp),%eax
+add    $0x4,%eax
+mov    -0x18(%ebp),%edx
+add    $0x6,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    (%eax),%eax
+mov    %eax,-0x10(%ebp)
+cmpl   $0x0,-0x14(%ebp)
+je     <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x124>
+mov    -0x10(%ebp),%eax
 mov    -0x14(%ebp),%edx
-mov    -0x10(%ebp),%esi
-mov    0x8(%ebp),%ebx
-mov    %edx,%eax
-add    %eax,%eax
-add    %edx,%eax
-shl    $0x2,%eax
-add    %esi,%eax
-add    $0x30,%eax
-mov    0x4(%ebx,%eax,4),%eax
-mov    %eax,-0x42c(%ebp)
-mov    %ecx,%eax
+mov    %edx,-0x42c(%ebp)
 mov    $0x0,%edx
 divl   -0x42c(%ebp)
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    %eax,0x14(%esp)
-mov    -0x10(%ebp),%eax
+mov    -0x18(%ebp),%eax
 mov    %eax,0x10(%esp)
-mov    -0x14(%ebp),%eax
+mov    -0x1c(%ebp),%eax
 mov    %eax,0xc(%esp)
 movl   $"inSert into used_memory (occ_time, minute_type, module, memory) values (now(),%d,%d,%d)",0x8(%esp)
 movl   $0x400,0x4(%esp)
-lea    -0x41e(%ebp),%eax
+lea    -0x426(%ebp),%eax
 add    $0xa,%eax
 mov    %eax,(%esp)
 call   <T> <snprintf>
-lea    -0x41e(%ebp),%eax
+lea    -0x426(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-addl   $0x1,-0x10(%ebp)
-cmpl   $0x5,-0x10(%ebp)
+addl   $0x1,-0x18(%ebp)
+cmpl   $0x5,-0x18(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x6d>
-mov    -0x14(%ebp),%edx
+jne    <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x6b>
+mov    -0x1c(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x4,%eax
 add    $0xc0,%eax
 add    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector16UsedMemoryStruct4initEv>
-addl   $0x1,-0x14(%ebp)
-cmpl   $0x5,-0x14(%ebp)
+addl   $0x1,-0x1c(%ebp)
+cmpl   $0x5,-0x1c(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x61>
-mov    $0x0,%eax
-add    $0x450,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+jne    <T> <_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler+0x5f>
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::SaveUsedMemory(CServerHandler*) */

undefined4 __thiscall
FrameLagCollector::_ZN17FrameLagCollector14SaveUsedMemoryEP14CServerHandler
          (FrameLagCollector *this,CServerHandler *param_1)

{
  Packet_Frame_Lag_Used_Memory_Write_Query local_422 [10];
  char acStack_418 [1024];
  int local_18;
  int local_14;
  uint local_10;
  
  *(int *)(this + 0x1e4) = *(int *)(this + 0x1e4) + 1;
  if (*(int *)(this + 0x88) <= *(int *)(this + 0x1e4)) {
    *(undefined4 *)(this + 0x1e4) = 0;
    Packet_Frame_Lag_Used_Memory_Write_Query::Packet_Frame_Lag_Used_Memory_Write_Query(local_422);
    for (local_18 = 0; local_18 < 6; local_18 = local_18 + 1) {
      for (local_14 = 0; local_14 < 6; local_14 = local_14 + 1) {
        if (*(int *)(this + (local_18 * 0xc + local_14 + 0x34) * 4 + 0xc) != 0) {
          local_10 = *(uint *)(this + (local_18 * 0xc + local_14 + 0x34) * 4 + 0xc) /
                     *(uint *)(this + (local_18 * 0xc + local_14 + 0x30) * 4 + 4);
          snprintf(acStack_418,0x400,
                   "inSert into used_memory (occ_time, minute_type, module, memory) values (now(),%d,%d,%d)"
                   ,local_18,local_14,local_10);
          CServerHandler::SendToDB(param_1,(PacketHeader *)local_422);
        }
      }
      UsedMemoryStruct::init((UsedMemoryStruct *)(this + local_18 * 0x30 + 0xc4));
    }
  }
  return 0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 546 行）：

```cpp
void FrameLagCollector::SaveUsedMemory(CServerHandler* handler)
{
    m_field1e4++;
    if (m_collectInterval <= m_field1e4)
    {
        m_field1e4 = 0;
        Packet_Frame_Lag_Used_Memory_Write_Query pkt;
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                int count = *(int*)((char*)&m_memory[i] + j * 4);
                int sum = *(int*)((char*)&m_memory[i] + (j + 4) * 4 + 8);
                if (count != 0)
                {
                    unsigned int avg = (unsigned int)sum / (unsigned int)count;
                    snprintf((char*)&pkt + 10, 0x400,
                             "inSert into used_memory (occ_time, minute_type, module, memory) values (now(),%d,%d,%d)",
                             i, j, avg);
                    handler->SendToDB((PacketHeader*)&pkt);
                }
            }
            m_memory[i].init();
        }
    }
}
```
