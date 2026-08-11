# _ZN14CPacketDecoder9MsgDecodeEP12PacketHeader

`CPacketDecoder::MsgDecode(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| coserver | DIFF | `0x8056d8e` | `0x11f` | `0x8052914` | `0x120` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,75 +1,75 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x24,%esp
 cmpl   $0x0,0xc(%ebp)
 jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x17>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x119>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x11a>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x27fc,%ax
-ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xb8>
+ja     <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xb9>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 cmp    $0x3e7,%ax
-jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xb8>
+jbe    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0xb9>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
 mov    0x4(%eax,%edx,4),%eax
 test   %eax,%eax
 jne    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x98>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
 movl   $0x44,0x8(%esp)
 movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.\n",0x8(%esp)
 movl   $"./log/Decoder",0x4(%esp)
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x119>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x11a>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%edx
 mov    0x8(%ebp),%eax
-mov    0x4(%eax,%edx,4),%edx
+mov    0x4(%eax,%edx,4),%eax
+mov    %eax,%edx
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
-nop
 mov    $0x1,%eax
-jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x119>
+jmp    <T> <_ZN14CPacketDecoder9MsgDecodeEP12PacketHeader+0x11a>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%eax
 mov    %eax,0x4(%esp)
 movl   $"Game Message with identifier %d has arrived.\n",(%esp)
 call   <T> <printf>
 mov    0xc(%ebp),%eax
 movzwl (%eax),%eax
 movzwl %ax,%ebx
 movl   $0x5a,0x8(%esp)
 movl   $&_ZZN14CPacketDecoder9MsgDecodeEP12PacketHeaderE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %ebx,0xc(%esp)
 movl   $"CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.\n",0x8(%esp)
 movl   $"./log/Decoder",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    $0x0,%eax
 add    $0x24,%esp
 pop    %ebx
 pop    %ebp
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
  CMyFileLog local_1c [8];
  CMyFileLog local_14 [12];
  
  if (param_1 == (PacketHeader *)0x0) {
    uVar2 = 0;
  }
  else if ((*(ushort *)param_1 < 0x27fd) && (999 < *(ushort *)param_1)) {
    if (*(int *)(this + (uint)*(ushort *)param_1 * 4 + 4) == 0) {
      uVar1 = *(ushort *)param_1;
      CMyFileLog::CMyFileLog(local_1c,"MsgDecode",0x44);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_1c,"./log/Decoder",
                 "CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.\n",
                 (uint)uVar1);
      uVar2 = 0;
    }
    else {
      (**(code **)(this + (uint)*(ushort *)param_1 * 4 + 4))(param_1);
      uVar2 = 1;
    }
  }
  else {
    printf("Game Message with identifier %d has arrived.\n",(uint)*(ushort *)param_1);
    uVar1 = *(ushort *)param_1;
    CMyFileLog::CMyFileLog(local_14,"MsgDecode",0x5a);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_14,"./log/Decoder",
               "CPacketDecoder::MsgDecode() Game Message with identifier %d has arrived.\n",
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
