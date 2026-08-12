# _ZN5CUser20SendNoticeBuddyInOutEhjPchhc

`CUser::SendNoticeBuddyInOut(unsigned char, unsigned int, char*, unsigned char, unsigned char, char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x806e136` | `0xb8` | `0x808961a` | `0xbf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,59 +1,60 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    0xc(%ebp),%ebx
 mov    0x18(%ebp),%ecx
 mov    0x1c(%ebp),%edx
 mov    0x20(%ebp),%eax
 mov    %bl,-0x4c(%ebp)
 mov    %cl,-0x50(%ebp)
 mov    %dl,-0x54(%ebp)
 mov    %al,-0x58(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN5CUser20SendNoticeBuddyInOutEhjPchhc+0xb1>
+je     <T> <_ZN5CUser20SendNoticeBuddyInOutEhjPchhc+0xb8>
 lea    -0x3c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN34Packet_Monitor_Notice_Buddy_In_OutC1Ev>
 mov    0x10(%ebp),%eax
 mov    %eax,-0x32(%ebp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser14GetIdByChannelEv>
 mov    %eax,-0x2e(%ebp)
 movzbl -0x4c(%ebp),%eax
 mov    %al,-0x2a(%ebp)
 movzbl -0x50(%ebp),%eax
 mov    %al,-0x29(%ebp)
 movzbl -0x54(%ebp),%eax
 mov    %al,-0x28(%ebp)
 movl   $0x1d,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x3c(%ebp),%eax
 add    $0x15,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 movzbl -0x58(%ebp),%eax
 mov    %al,-0x9(%ebp)
-movzwl -0x3a(%ebp),%eax
+lea    -0x3c(%ebp),%eax
+movzwl 0x2(%eax),%eax
 movzwl %ax,%esi
 lea    -0x3c(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser13GetGameServerEv>
 mov    %esi,0x8(%esp)
 mov    %ebx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN16CServerInterface12SendToServerEPci>
 add    $0x60,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CUser::SendNoticeBuddyInOut(unsigned char, unsigned int, char*, unsigned char, unsigned char,
   char) */

void __thiscall
CUser::_ZN5CUser20SendNoticeBuddyInOutEhjPchhc
          (CUser *this,uchar param_1,uint param_2,char *param_3,uchar param_4,uchar param_5,
          char param_6)

{
  int iVar1;
  CServerInterface *this_00;
  Packet_Monitor_Notice_Buddy_In_Out local_40 [2];
  ushort local_3e;
  uint local_36;
  undefined4 local_32;
  uchar local_2e;
  uchar local_2d;
  uchar local_2c;
  undefined1 auStack_2b [30];
  char local_d;
  
  iVar1 = _ZN5CUser13GetGameServerEv(this);
  if (iVar1 != 0) {
    Packet_Monitor_Notice_Buddy_In_Out::Packet_Monitor_Notice_Buddy_In_Out(local_40);
    local_36 = param_2;
    local_32 = _ZN5CUser14GetIdByChannelEv(this);
    local_2e = param_1;
    local_2d = param_4;
    local_2c = param_5;
    memcpy(auStack_2b,param_3,0x1d);
    local_d = param_6;
    this_00 = (CServerInterface *)_ZN5CUser13GetGameServerEv(this);
    CServerInterface::_ZN16CServerInterface12SendToServerEPci
              (this_00,(char *)local_40,(uint)local_3e);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFUser.cpp, source/DNFServer/GameServer/Monitor/Arad_BirthdayEvent.h, source/DNFServer/GameServer/Monitor/BlackUser.h, source/DNFServer/GameServer/Monitor/DNFBuddy.h, source/DNFServer/GameServer/Monitor/DNFBuddyHandle.h, source/DNFServer/GameServer/Monitor/DNFChannelWaitingUser.h, source/DNFServer/GameServer/Monitor/DNFDBServer.h, source/DNFServer/GameServer/Monitor/DNFGameServer.h 等 299 个文件*
