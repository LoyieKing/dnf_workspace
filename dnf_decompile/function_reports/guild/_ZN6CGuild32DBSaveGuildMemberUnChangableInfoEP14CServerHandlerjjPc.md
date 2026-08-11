# _ZN6CGuild32DBSaveGuildMemberUnChangableInfoEP14CServerHandlerjjPc

`CGuild::DBSaveGuildMemberUnChangableInfo(CServerHandler*, unsigned int, unsigned int, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809196c` | `0x65` | `0x805772a` | `0x6f` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,30 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x48,%esp
 movl   $0x4,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild16IsSetGuildDBFlagEt>
 test   %al,%al
-je     <T> <_ZN6CGuild32DBSaveGuildMemberUnChangableInfoEP14CServerHandlerjjPc+0x63>
+je     <T> <_ZN6CGuild32DBSaveGuildMemberUnChangableInfoEP14CServerHandlerjjPc+0x6d>
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN33Packet_UnChangable_GuildInfo_SaveC1Ev>
+lea    -0x38(%ebp),%eax
+lea    0xa(%eax),%edx
 mov    0x10(%ebp),%eax
-mov    %eax,-0x2e(%ebp)
+mov    %eax,(%edx)
+lea    -0x38(%ebp),%eax
+lea    0xe(%eax),%edx
 mov    0x14(%ebp),%eax
-mov    %eax,-0x2a(%ebp)
+mov    %eax,(%edx)
 movl   $0x1d,0x8(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x38(%ebp),%eax
 add    $0x12,%eax
 mov    %eax,(%esp)
 call   <T> <memcpy>
 lea    -0x38(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler8SendToDBEP12PacketHeader>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::DBSaveGuildMemberUnChangableInfo(CServerHandler*, unsigned int, unsigned int, char*) */

void __thiscall
CGuild::_ZN6CGuild32DBSaveGuildMemberUnChangableInfoEP14CServerHandlerjjPc
          (CGuild *this,CServerHandler *param_1,uint param_2,uint param_3,char *param_4)

{
  char cVar1;
  Packet_UnChangable_GuildInfo_Save local_3c [10];
  uint local_32;
  uint local_2e;
  undefined1 auStack_2a [38];
  
  cVar1 = _ZN6CGuild16IsSetGuildDBFlagEt(this,4);
  if (cVar1 != '\0') {
    Packet_UnChangable_GuildInfo_Save::_ZN33Packet_UnChangable_GuildInfo_SaveC2Ev(local_3c);
    local_32 = param_2;
    local_2e = param_3;
    memcpy(auStack_2a,param_4,0x1d);
    CServerHandler::_ZN14CServerHandler8SendToDBEP12PacketHeader(param_1,(PacketHeader *)local_3c);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFGuild.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*
