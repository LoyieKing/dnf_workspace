# _ZN14CPacketDecoder9MsgDecodeEP12PacketHeader

`CPacketDecoder::MsgDecode(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | DIFF | `0x80635fa` | `0xda` | `0x8059cd8` | `0xbf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,63 +1,52 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x28,%esp
 cmpl   $0x0,0xc(%ebp)
-jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x17>
+jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x16>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xd4>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xbd>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
-cmp    $0x27ff,%ax
-ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x73>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-cmp    $0x3e7,%ax
-jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x73>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edx
-mov    0x8(%ebp),%eax
-add    $0x4,%edx
-mov    0x8(%eax,%edx,4),%eax
-test   %eax,%eax
-jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x50>
-mov    $0x0,%eax
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xd4>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%edx
-mov    0x8(%ebp),%eax
-add    $0x4,%edx
-mov    0x8(%eax,%edx,4),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-nop
-mov    $0x1,%eax
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xd4>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%eax
+mov    %ax,-0xe(%ebp)
+cmpw   $0x27ff,-0xe(%ebp)
+ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x30>
+cmpw   $0x3e7,-0xe(%ebp)
+ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x89>
+movzwl -0xe(%ebp),%eax
 mov    %eax,0x4(%esp)
-movl   $"Game Message with identifier %i has arrived.\n",(%esp)
+movl   $"Unknown Packet(%d)",(%esp)
 call   <T> <printf>
-mov    0xc(%ebp),%eax
-movzwl (%eax),%eax
-movzwl %ax,%ebx
 movl   $0x6c,0x8(%esp)
 movl   $"MsgDecode",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
-movl   $"CPacketDecoder::MsgDecode() Game Message with identifier %i has arrived.\n",0x8(%esp)
-movl   $"./log/Decoder.log",0x4(%esp)
-lea    -0x10(%ebp),%eax
+movzwl -0xe(%ebp),%eax
+mov    %eax,0xc(%esp)
+movl   $"Unknown Packet(%d)",0x8(%esp)
+movl   $"./log/PacketDecode",0x4(%esp)
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xbd>
+mov    0x8(%ebp),%eax
+movzwl -0xe(%ebp),%edx
+add    $0x6,%edx
+shl    $0x2,%edx
+add    %edx,%eax
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+test   %eax,%eax
+jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xab>
+mov    $0x0,%eax
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xbd>
+mov    -0xc(%ebp),%eax
+mov    (%eax),%eax
+mov    0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
+mov    $0x1,%eax
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketDecoder::MsgDecode(PacketHeader*) */

undefined4 __thiscall
CPacketDecoder::_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader
          (CPacketDecoder *this,PacketHeader *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  CMyFileLog local_14 [12];
  
  if (param_1 == (PacketHeader *)0x0) {
    uVar2 = 0;
  }
  else if ((*(ushort *)param_1 < 0x2800) && (999 < *(ushort *)param_1)) {
    if (*(int *)(this + (*(ushort *)param_1 + 4) * 4 + 8) == 0) {
      uVar2 = 0;
    }
    else {
      (**(code **)(this + (*(ushort *)param_1 + 4) * 4 + 8))(param_1);
      uVar2 = 1;
    }
  }
  else {
    printf("Game Message with identifier %i has arrived.\n",(uint)*(ushort *)param_1);
    uVar1 = *(ushort *)param_1;
    CMyFileLog::CMyFileLog(local_14,"MsgDecode",0x6c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Decoder.log",
               "CPacketDecoder::MsgDecode() Game Message with identifier %i has arrived.\n",
               (uint)uVar1);
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketDecoder.cpp](source/DNFServer/GameServer/COServer/DNFPacketDecoder.cpp)（约第 51 行）：

```cpp
int CPacketDecoder::MsgDecode(PacketHeader* pkt)
{
    if (pkt == 0)
    {
        return 0;
    }
    if (*(unsigned short*)pkt < 0x27fd && 999 < *(unsigned short*)pkt)
    {
        if (m_handlers[*(unsigned short*)pkt] == 0)
        {
            DNF_LOG_SCOPE_LINE(0x44, "./log/Decoder",
                "CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.\n",
                *(unsigned short*)pkt);
            return 0;
        }
        ((void (*)(PacketHeader*))m_handlers[*(unsigned short*)pkt])(pkt);
        return 1;
    }
    printf("Game Message with identifier %d has arrived.\n", *(unsigned short*)pkt);
    DNF_LOG_SCOPE_LINE(0x5a,"./log/Decoder",
        "CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.\n",
        *(unsigned short*)pkt);
    return 0;
}
```
