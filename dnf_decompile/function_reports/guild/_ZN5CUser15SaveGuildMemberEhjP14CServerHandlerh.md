# _ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh

`CUser::SaveGuildMember(unsigned char, unsigned int, CServerHandler*, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8066a3c` | `0xc4` | `0x808906e` | `0xe1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,57 +1,68 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x58,%esp
+push   %ebx
+sub    $0x54,%esp
 mov    0xc(%ebp),%edx
 mov    0x18(%ebp),%eax
 mov    %dl,-0x3c(%ebp)
 mov    %al,-0x40(%ebp)
 movl   $0x10,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17IsSetGuildMemFlagEt>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh+0xbe>
+jne    <T> <_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh+0xd7>
 movl   $0x4,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17IsSetGuildMemFlagEt>
 xor    $0x1,%eax
 test   %al,%al
-jne    <T> <_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh+0xc1>
+jne    <T> <_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh+0xda>
 lea    -0x36(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN32Packet_Monitor_SAVE_Guild_MemberC1Ev>
+lea    -0x36(%ebp),%eax
+lea    0xa(%eax),%edx
 movzbl -0x3c(%ebp),%eax
-mov    %al,-0x2c(%ebp)
+mov    %al,(%edx)
+lea    -0x36(%ebp),%eax
+lea    0xb(%eax),%edx
 mov    0x10(%ebp),%eax
-mov    %eax,-0x2b(%ebp)
+mov    %eax,(%edx)
+lea    -0x36(%ebp),%eax
+lea    0xf(%eax),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x27(%ebp)
+mov    %eax,(%ebx)
 mov    0x8(%ebp),%eax
 add    $0x4a,%eax
 movl   $0x1a,0x8(%esp)
 mov    %eax,0x4(%esp)
 lea    -0x36(%ebp),%eax
 add    $0x13,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
+lea    -0x36(%ebp),%eax
+lea    0x2d(%eax),%edx
 movzbl -0x40(%ebp),%eax
-mov    %al,-0x9(%ebp)
+mov    %al,(%edx)
 lea    -0x36(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 movl   $0x10,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17ResetGuildMemFlagEt>
-jmp    <T> <_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh+0xc2>
+jmp    <T> <_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh+0xdb>
 nop
-jmp    <T> <_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh+0xc2>
+jmp    <T> <_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh+0xdb>
 nop
-leave
+add    $0x54,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SaveGuildMember(unsigned char, unsigned int, CServerHandler*, unsigned char) */

void __thiscall
CUser::_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh
          (CUser *this,uchar param_1,uint param_2,CServerHandler *param_3,uchar param_4)

{
  char cVar1;
  Packet_Monitor_SAVE_Guild_Member local_3a [10];
  uchar local_30;
  uint local_2f;
  undefined4 local_2b;
  undefined1 auStack_27 [26];
  uchar local_d;
  
  cVar1 = IsSetGuildMemFlag(this,0x10);
  if ((cVar1 == '\x01') && (cVar1 = IsSetGuildMemFlag(this,4), cVar1 == '\x01')) {
    Packet_Monitor_SAVE_Guild_Member::_ZN32Packet_Monitor_SAVE_Guild_MemberC2Ev(local_3a);
    local_2f = param_2;
    local_30 = param_1;
    local_2b = GetUniqCharNo(this);
    memcpy(auStack_27,this + 0x4a,0x1a);
    local_d = param_4;
    CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(param_3,(PacketHeader *)local_3a);
    ResetGuildMemFlag(this,0x10);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/COServer/DNFUser.cpp, source/DNFServer/GameServer/Guild/DNFUser.cpp, source/DNFServer/GameServer/Monitor/DNFUser.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h 等 621 个文件*
