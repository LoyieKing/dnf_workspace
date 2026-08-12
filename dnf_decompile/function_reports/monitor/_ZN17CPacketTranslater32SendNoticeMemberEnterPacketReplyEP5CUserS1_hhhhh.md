# _ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh

`CPacketTranslater::SendNoticeMemberEnterPacketReply(CUser*, CUser*, unsigned char, unsigned char, unsigned char, unsigned char, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80806fc` | `0xdd` | `0x80694c2` | `0xd7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,70 +1,68 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 add    $0xffffff80,%esp
 mov    0x10(%ebp),%esi
 mov    0x14(%ebp),%ebx
 mov    0x18(%ebp),%ecx
 mov    0x1c(%ebp),%edx
 mov    0x20(%ebp),%eax
 mov    %eax,-0x6c(%ebp)
 mov    %esi,%eax
 mov    %al,-0x4c(%ebp)
 mov    %bl,-0x50(%ebp)
 mov    %cl,-0x54(%ebp)
 mov    %dl,-0x58(%ebp)
 movzbl -0x6c(%ebp),%eax
 mov    %al,-0x5c(%ebp)
 lea    -0x41(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN45Packet_Monitor_Member_Enter_Reply_ToResponserC1Ev>
 cmpb   $0x2,-0x4c(%ebp)
-jne    <T> <_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh+0x4c>
-movzbl -0x4c(%ebp),%eax
-add    $0x1,%eax
-mov    %al,-0x36(%ebp)
-jmp    <T> <_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh+0x53>
+jne    <T> <_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh+0x46>
+movb   $0x3,-0x36(%ebp)
+jmp    <T> <_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh+0x4d>
 movzbl -0x50(%ebp),%eax
 mov    %al,-0x36(%ebp)
 movzbl -0x4c(%ebp),%eax
 mov    %al,-0x37(%ebp)
 movzbl -0x54(%ebp),%eax
 mov    %al,-0x35(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x34(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x30(%ebp)
 movzbl -0x58(%ebp),%eax
 mov    %al,-0x2c(%ebp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser11GetCharNameEv>
 movl   $0x1d,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x41(%ebp),%eax
 add    $0x16,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 movzbl -0x5c(%ebp),%eax
 mov    %al,-0xd(%ebp)
 cmpb   $0x1,-0x50(%ebp)
-jne    <T> <_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh+0xc4>
+jne    <T> <_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh+0xbe>
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0xc(%ebp)
 lea    -0x41(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
 sub    $0xffffff80,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::SendNoticeMemberEnterPacketReply(CUser*, CUser*, unsigned char, unsigned char,
   unsigned char, unsigned char, unsigned char) */

void CPacketTranslater::_ZN17CPacketTranslater32SendNoticeMemberEnterPacketReplyEP5CUserS1_hhhhh
               (CUser *param_1,CUser *param_2,uchar param_3,uchar param_4,uchar param_5,
               uchar param_6,uchar param_7)

{
  void *__src;
  Packet_Monitor_Member_Enter_Reply_ToResponser local_45 [10];
  uchar local_3b;
  uchar local_3a;
  uchar local_39;
  undefined4 local_38;
  undefined4 local_34;
  uchar local_30;
  undefined1 auStack_2f [30];
  uchar local_11;
  undefined4 local_10;
  
  Packet_Monitor_Member_Enter_Reply_ToResponser::Packet_Monitor_Member_Enter_Reply_ToResponser
            (local_45);
  if (param_3 == '\x02') {
    local_3a = '\x03';
  }
  else {
    local_3a = param_4;
  }
  local_3b = param_3;
  local_39 = param_5;
  local_38 = CUser::GetIdByChannel(param_1);
  local_34 = CUser::GetUniqCharNo(param_1);
  local_30 = param_6;
  __src = (void *)CUser::GetCharName(param_2);
  memcpy(auStack_2f,__src,0x1d);
  local_11 = param_7;
  if (param_4 == '\x01') {
    local_10 = CUser::GetUniqCharNo(param_2);
  }
  CUser::SendTcpGameserver(param_1,(PacketHeader *)local_45);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/DNFAppConfig.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFBuddy.h 等 299 个文件*
