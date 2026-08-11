# _ZN5CUser41send_other_channel_chat_result_hyper_linkEP44Packet_Monitor_Other_Channel_Chat_Hyper_Link18ENUM_MONITOR_ERROR

`CUser::send_other_channel_chat_result_hyper_link(Packet_Monitor_Other_Channel_Chat_Hyper_Link*, ENUM_MONITOR_ERROR)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| community | DIFF | `0x80541a2` | `0x134` | `0x8054682` | `0x134` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,78 +1,78 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x298,%esp
 lea    -0x27c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN51Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_LinkC1Ev>
 mov    0xc(%ebp),%eax
 mov    0xa(%eax),%eax
 mov    %eax,-0x272(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x9(%eax),%eax
 mov    %eax,-0x26d(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xe(%eax),%eax
 mov    %eax,-0x269(%ebp)
 mov    0x10(%ebp),%eax
 mov    %al,-0x247(%ebp)
 mov    0xc(%ebp),%eax
 add    $0x1c,%eax
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x27c(%ebp),%eax
 add    $0x17,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0xc(%ebp),%eax
 movzbl 0x173(%eax),%eax
 mov    %al,-0x10d(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x173(%eax),%eax
 movzbl %al,%eax
 mov    0xc(%ebp),%edx
 add    $0x174,%edx
 mov    %eax,0x8(%esp)
 mov    %edx,0x4(%esp)
 lea    -0x27c(%ebp),%eax
 add    $0x170,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0xc(%ebp),%eax
 movzbl 0x3a(%eax),%eax
 mov    %al,-0x246(%ebp)
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN5CUser41send_other_channel_chat_result_hyper_linkEP44Packet_Monitor_Other_Channel_Chat_Hyper_Link18ENUM_MONITOR_ERROR+0xf9>
 mov    -0xc(%ebp),%eax
 imul   $0x68,%eax,%eax
 add    $0x30,%eax
 add    0xc(%ebp),%eax
 lea    0xb(%eax),%edx
-mov    -0xc(%ebp),%ecx
+mov    -0xc(%ebp),%eax
+imul   $0x68,%eax,%ecx
 lea    -0x27c(%ebp),%eax
-imul   $0x68,%ecx,%ecx
 add    $0x30,%ecx
 add    %ecx,%eax
 add    $0x7,%eax
 movl   $0x68,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memcpy>
 addl   $0x1,-0xc(%ebp)
 mov    0xc(%ebp),%eax
 movzbl 0x3a(%eax),%eax
 movzbl %al,%eax
 cmp    -0xc(%ebp),%eax
 setg   %al
 test   %al,%al
 jne    <T> <_ZN5CUser41send_other_channel_chat_result_hyper_linkEP44Packet_Monitor_Other_Channel_Chat_Hyper_Link18ENUM_MONITOR_ERROR+0xbe>
 movzwl -0x27a(%ebp),%eax
 movzwl %ax,%ecx
 lea    -0x27c(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 mov    %ecx,0x8(%esp)
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN15CNetworkSession4SendEPKci>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::send_other_channel_chat_result_hyper_link(Packet_Monitor_Other_Channel_Chat_Hyper_Link*,
   ENUM_MONITOR_ERROR) */

void __thiscall
CUser::
_ZN5CUser41send_other_channel_chat_result_hyper_linkEP44Packet_Monitor_Other_Channel_Chat_Hyper_Link18ENUM_MONITOR_ERROR
          (CUser *this,int param_1,undefined1 param_3)

{
  Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link local_280 [2];
  ushort local_27e;
  undefined4 local_276;
  undefined4 local_271;
  undefined4 local_26d;
  undefined1 auStack_269 [30];
  undefined1 local_24b;
  undefined1 local_24a;
  undefined1 auStack_249 [312];
  undefined1 local_111;
  undefined1 auStack_110 [256];
  int local_10;
  
  Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link::
  _ZN51Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_LinkC2Ev(local_280);
  local_276 = *(undefined4 *)(param_1 + 10);
  local_271 = *(undefined4 *)(this + 9);
  local_26d = *(undefined4 *)(this + 0xe);
  local_24b = param_3;
  memcpy(auStack_269,(void *)(param_1 + 0x1c),0x1d);
  local_111 = *(undefined1 *)(param_1 + 0x173);
  memcpy(auStack_110,(void *)(param_1 + 0x174),(uint)*(byte *)(param_1 + 0x173));
  local_24a = *(undefined1 *)(param_1 + 0x3a);
  for (local_10 = 0; local_10 < (int)(uint)*(byte *)(param_1 + 0x3a); local_10 = local_10 + 1) {
    memcpy(auStack_249 + local_10 * 0x68,(void *)(local_10 * 0x68 + param_1 + 0x3b),0x68);
  }
  CNetworkSession::_ZN15CNetworkSession4SendEPKci
            (*(CNetworkSession **)this,(char *)local_280,(uint)local_27e);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/Community/User.cpp](source/Community/User.cpp)（约第 299 行）：

```cpp
void CUser::send_other_channel_chat_result_hyper_link(Packet_Monitor_Other_Channel_Chat_Hyper_Link *chat, ENUM_MONITOR_ERROR error) {
    Packet_Monitor_Other_Channel_Chat_ToUser_Hyper_Link packet;
    packet.what_0x0a = chat->what_0x0a;
    packet.what_0x0f = stGameUserInfo.what_0x5;
    packet.what_0x13 = stGameUserInfo.charac_no;
    packet.what_0x35 = error;
    // 原始：buddy id 来自聊天包（param_1+0x1c）
    memcpy(packet.what_0x17, chat->buddy_n_user_id_what, 0x1d);
    packet.what_0x16f = chat->what_0x173;
    memcpy(packet.what_0x170, chat->what_0x174, chat->what_0x173);
    packet.what_0x36 = chat->what_0x3a;
    // 原始：同 send_other_channel_chat_hyper_link 的直接成员访问形态
    for (int i = 0; i < chat->what_0x3a; i++) {
        memcpy(&packet.what_0x37[i * 0x68], &chat->what_0x3b[i * 0x68], 0x68);
    }
    networkSession->Send((char *)&packet, packet.packetSize);
}
```
