# _ZN17CPacketTranslater29SendRequestMemberDeleteResultEP5CUserhPKc

`CPacketTranslater::SendRequestMemberDeleteResult(CUser*, unsigned char, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80807da` | `0x6b` | `0x8069502` | `0x79` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,32 +1,38 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x68,%esp
+push   %ebx
+sub    $0x34,%esp
 mov    0xc(%ebp),%eax
-mov    %al,-0x4c(%ebp)
-lea    -0x39(%ebp),%eax
+mov    %al,-0x1c(%ebp)
+lea    -0x12(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN28Packet_Monitor_Member_SecedeC1Ev>
+lea    -0x12(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
-mov    %eax,-0x2f(%ebp)
+mov    %eax,0xa(%ebx)
+lea    -0x12(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetUniqCharNoEv>
-mov    %eax,-0x2b(%ebp)
-movzbl -0x4c(%ebp),%eax
-mov    %al,-0x27(%ebp)
+mov    %eax,0xe(%ebx)
+lea    -0x12(%ebp),%eax
+movzbl -0x1c(%ebp),%edx
+mov    %dl,0x12(%eax)
+lea    -0x12(%ebp),%eax
+lea    0x13(%eax),%edx
 movl   $0x1d,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x39(%ebp),%eax
-add    $0x13,%eax
-mov    %eax,(%esp)
+mov    %edx,(%esp)
 call   <T> <memcpy>
-lea    -0x39(%ebp),%eax
+lea    -0x12(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser17SendTcpGameserverEP12PacketHeader>
-leave
+add    $0x34,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::SendRequestMemberDeleteResult(CUser*, unsigned char, char const*) */

void CPacketTranslater::_ZN17CPacketTranslater29SendRequestMemberDeleteResultEP5CUserhPKc
               (CUser *param_1,uchar param_2,char *param_3)

{
  Packet_Monitor_Member_Secede local_3d [10];
  undefined4 local_33;
  undefined4 local_2f;
  uchar local_2b;
  undefined1 auStack_2a [38];
  
  Packet_Monitor_Member_Secede::Packet_Monitor_Member_Secede(local_3d);
  local_33 = CUser::GetIdByChannel(param_1);
  local_2f = CUser::GetUniqCharNo(param_1);
  local_2b = param_2;
  memcpy(auStack_2a,param_3,0x1d);
  CUser::SendTcpGameserver(param_1,(PacketHeader *)local_3d);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/Arad_MomijiEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/DNFAppConfig.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFBuddy.h 等 299 个文件*
