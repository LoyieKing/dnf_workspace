# _ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h

`CMemberManager::SaveMemberOnConnect(CServerHandler*, CUser*, CUser*, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809a078` | `0xd0` | `0x8062438` | `0xc7` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,64 +1,58 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0x18(%ebp),%eax
 mov    %al,-0x2c(%ebp)
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc4>
+je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc5>
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc7>
+je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc5>
 cmpl   $0x0,0x14(%ebp)
-je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xca>
+je     <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc5>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26Packet_Monitor_SAVE_MemberC1Ev>
 movzbl -0x2c(%ebp),%eax
 mov    %al,-0x16(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
 mov    %ax,-0xc(%ebp)
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser8GetLevelEv>
 mov    %ax,-0xa(%ebp)
-movzwl -0xc(%ebp),%eax
-cmp    -0xa(%ebp),%ax
-jle    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0x86>
+movzwl -0xa(%ebp),%eax
+cmp    -0xc(%ebp),%ax
+jge    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0x86>
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x15(%ebp)
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x11(%ebp)
 movb   $0x1,-0xd(%ebp)
 jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xb0>
-movzwl -0xc(%ebp),%eax
-cmp    -0xa(%ebp),%ax
-jge    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xcd>
+movzwl -0xa(%ebp),%eax
+cmp    -0xc(%ebp),%ax
+jle    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc4>
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x15(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
 mov    %eax,-0x11(%ebp)
 movb   $0x2,-0xd(%ebp)
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xce>
-nop
-jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xce>
-nop
-jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xce>
-nop
-jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xce>
+jmp    <T> <_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h+0xc5>
 nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::SaveMemberOnConnect(CServerHandler*, CUser*, CUser*, unsigned char) */

void __thiscall
CMemberManager::_ZN14CMemberManager19SaveMemberOnConnectEP14CServerHandlerP5CUserS3_h
          (CMemberManager *this,CServerHandler *param_1,CUser *param_2,CUser *param_3,uchar param_4)

{
  Packet_Monitor_SAVE_Member local_24 [10];
  uchar local_1a;
  undefined4 local_19;
  undefined4 local_15;
  undefined1 local_11;
  short local_10;
  short local_e;
  
  if (((param_1 != (CServerHandler *)0x0) && (param_2 != (CUser *)0x0)) && (param_3 != (CUser *)0x0)
     ) {
    Packet_Monitor_SAVE_Member::Packet_Monitor_SAVE_Member(local_24);
    local_1a = param_4;
    local_10 = CUser::GetLevel(param_2);
    local_e = CUser::GetLevel(param_3);
    if (local_e < local_10) {
      local_19 = CUser::GetUniqCharNo(param_2);
      local_15 = CUser::GetUniqCharNo(param_3);
      local_11 = 1;
    }
    else {
      if (local_e <= local_10) {
        return;
      }
      local_19 = CUser::GetUniqCharNo(param_3);
      local_15 = CUser::GetUniqCharNo(param_2);
      local_11 = 2;
    }
    CServerHandler::SendToDB(param_1,(PacketHeader *)local_24);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 638 个文件*
