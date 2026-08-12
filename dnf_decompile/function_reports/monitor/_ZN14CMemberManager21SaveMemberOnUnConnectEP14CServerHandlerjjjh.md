# _ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh

`CMemberManager::SaveMemberOnUnConnect(CServerHandler*, unsigned int, unsigned int, unsigned int, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x809a148` | `0xb8` | `0x806284e` | `0xa2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,52 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 mov    0x1c(%ebp),%eax
 mov    %al,-0x2c(%ebp)
 cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xb5>
+je     <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xa0>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN26Packet_Monitor_SAVE_MemberC1Ev>
 movzbl -0x2c(%ebp),%eax
 mov    %al,-0x1a(%ebp)
 cmpl   $0x1,0x18(%ebp)
-jne    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x37>
-movzbl &_ZL12MEMBER_LOWER,%eax
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x3e>
-movzbl &_ZL12MEMBER_UPPER,%eax
-mov    %al,-0x11(%ebp)
-cmpl   $0x1,0x18(%ebp)
-jne    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x55>
+jne    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x40>
 mov    0x14(%ebp),%eax
 mov    %eax,-0x19(%ebp)
 mov    0x10(%ebp),%eax
 mov    %eax,-0x15(%ebp)
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xa1>
+movb   $0x1,-0x11(%ebp)
+jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x8e>
+movb   $0x2,-0x11(%ebp)
 cmpl   $0x2,0x18(%ebp)
-jne    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x69>
-mov    0x10(%ebp),%eax
-mov    %eax,-0x19(%ebp)
-mov    0x14(%ebp),%eax
-mov    %eax,-0x15(%ebp)
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xa1>
+je     <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0x82>
 movl   $0x137,0x8(%esp)
 movl   $&_ZZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjhE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 movl   $"CMemberManager::SaveMemberOnUnConnect , isSecederUpperOrLower == 0",0x8(%esp)
 movl   $"./log/Member",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xb6>
+jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xa0>
+mov    0x10(%ebp),%eax
+mov    %eax,-0x19(%ebp)
+mov    0x14(%ebp),%eax
+mov    %eax,-0x15(%ebp)
 lea    -0x24(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
-jmp    <T> <_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh+0xb6>
-nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CMemberManager::SaveMemberOnUnConnect(CServerHandler*, unsigned int, unsigned int, unsigned int,
   unsigned char) */

void __thiscall
CMemberManager::_ZN14CMemberManager21SaveMemberOnUnConnectEP14CServerHandlerjjjh
          (CMemberManager *this,CServerHandler *param_1,uint param_2,uint param_3,uint param_4,
          uchar param_5)

{
  Packet_Monitor_SAVE_Member local_28 [10];
  uchar local_1e;
  uint local_1d;
  uint local_19;
  undefined1 local_15;
  CMyFileLog local_14 [16];
  
  if (param_1 != (CServerHandler *)0x0) {
    Packet_Monitor_SAVE_Member::Packet_Monitor_SAVE_Member(local_28);
    local_1e = param_5;
    if (param_4 == 1) {
      local_1d = param_3;
      local_19 = param_2;
      local_15 = ::MEMBER_LOWER;
    }
    else {
      local_15 = ::MEMBER_UPPER;
      if (param_4 != 2) {
        CMyFileLog::CMyFileLog(local_14,"SaveMemberOnUnConnect",0x137);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_14,"./log/Member",
                   "CMemberManager::SaveMemberOnUnConnect , isSecederUpperOrLower == 0");
        return;
      }
      local_1d = param_2;
      local_19 = param_3;
    }
    CServerHandler::SendToDB(param_1,(PacketHeader *)local_28);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFMemberManager.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFBuddyHandle.h, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFManagerServer.h 等 299 个文件*
