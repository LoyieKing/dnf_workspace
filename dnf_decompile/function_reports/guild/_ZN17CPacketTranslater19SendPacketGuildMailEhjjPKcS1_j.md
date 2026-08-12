# _ZN17CPacketTranslater19SendPacketGuildMailEhjjPKcS1_j

`CPacketTranslater::SendPacketGuildMail(unsigned char, unsigned int, unsigned int, char const*, char const*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x8079dc4` | `0x112` | `0x80703a0` | `0x112` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,68 +1,68 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x168,%esp
+sub    $0x158,%esp
 mov    0x8(%ebp),%eax
-mov    %al,-0x14c(%ebp)
-lea    -0x139(%ebp),%eax
+mov    %al,-0x13c(%ebp)
+lea    -0x138(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN27Packet_DBMW_Send_Guild_MailC1Ev>
-movzbl -0x14c(%ebp),%eax
-mov    %al,-0x12b(%ebp)
+movzbl -0x13c(%ebp),%eax
+mov    %al,-0x12a(%ebp)
 mov    0xc(%ebp),%eax
-mov    %eax,-0x12f(%ebp)
+mov    %eax,-0x12e(%ebp)
 mov    0x10(%ebp),%eax
-mov    %eax,-0x12a(%ebp)
+mov    %eax,-0x129(%ebp)
 mov    0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0x10(%ebp)
 cmpl   $0xff,-0x10(%ebp)
 jg     <T> <_ZN17CPacketTranslater19SendPacketGuildMailEhjjPKcS1_j+0x77>
 mov    -0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x139(%ebp),%eax
+lea    -0x138(%ebp),%eax
 add    $0x13,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 jmp    <T> <_ZN17CPacketTranslater19SendPacketGuildMailEhjjPKcS1_j+0x97>
 movl   $0xff,0x8(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x139(%ebp),%eax
+lea    -0x138(%ebp),%eax
 add    $0x13,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <strlen>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x10,-0xc(%ebp)
 jg     <T> <_ZN17CPacketTranslater19SendPacketGuildMailEhjjPKcS1_j+0xce>
 mov    -0xc(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x139(%ebp),%eax
+lea    -0x138(%ebp),%eax
 add    $0x113,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 jmp    <T> <_ZN17CPacketTranslater19SendPacketGuildMailEhjjPKcS1_j+0xf0>
 movl   $0x10,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x139(%ebp),%eax
+lea    -0x138(%ebp),%eax
 add    $0x113,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 mov    0x1c(%ebp),%eax
-mov    %eax,-0x15(%ebp)
+mov    %eax,-0x14(%ebp)
 mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
 mov    0x68(%eax),%eax
-lea    -0x139(%ebp),%edx
+lea    -0x138(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::SendPacketGuildMail(unsigned char, unsigned int, unsigned int, char const*,
   char const*, unsigned int) */

void CPacketTranslater::_ZN17CPacketTranslater19SendPacketGuildMailEhjjPKcS1_j
               (uchar param_1,uint param_2,uint param_3,char *param_4,char *param_5,uint param_6)

{
  Packet_DBMW_Send_Guild_Mail local_13d [10];
  uint local_133;
  uchar local_12f;
  uint local_12e;
  undefined1 auStack_12a [256];
  undefined1 auStack_2a [17];
  uint local_19;
  size_t local_14;
  size_t local_10;
  
  Packet_DBMW_Send_Guild_Mail::Packet_DBMW_Send_Guild_Mail(local_13d);
  local_133 = param_2;
  local_12e = param_3;
  local_12f = param_1;
  local_14 = strlen(param_5);
  if ((int)local_14 < 0x100) {
    memcpy(auStack_12a,param_5,local_14);
  }
  else {
    memcpy(auStack_12a,param_5,0xff);
  }
  local_10 = strlen(param_4);
  if ((int)local_10 < 0x11) {
    memcpy(auStack_2a,param_4,local_10);
  }
  else {
    memcpy(auStack_2a,param_4,0x10);
  }
  local_19 = param_6;
  CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader
            (*(CServerHandler **)(m_pclApp + 0x68),(PacketHeader *)local_13d);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFPacketTranslater.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 286 个文件*
