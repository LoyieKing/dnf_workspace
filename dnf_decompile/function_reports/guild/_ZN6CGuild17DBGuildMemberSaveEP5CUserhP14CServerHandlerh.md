# _ZN6CGuild17DBGuildMemberSaveEP5CUserhP14CServerHandlerh

`CGuild::DBGuildMemberSave(CUser*, unsigned char, CServerHandler*, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808d864` | `0x64` | `0x80538a2` | `0x67` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,31 +1,33 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x38,%esp
 mov    0x10(%ebp),%edx
 mov    0x18(%ebp),%eax
 mov    %dl,-0xc(%ebp)
 mov    %al,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild17DBGuildMemberSaveEP5CUserhP14CServerHandlerh+0x62>
+je     <T> <_ZN6CGuild17DBGuildMemberSaveEP5CUserhP14CServerHandlerh+0x64>
 movl   $0x10,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15SetGuildMemFlagEt>
 movzbl -0x10(%ebp),%ecx
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%edx
 movzbl -0xc(%ebp),%eax
 mov    %ecx,0x10(%esp)
 mov    0x14(%ebp),%ecx
 mov    %ecx,0xc(%esp)
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh>
+jmp    <T> <_ZN6CGuild17DBGuildMemberSaveEP5CUserhP14CServerHandlerh+0x65>
+nop
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::DBGuildMemberSave(CUser*, unsigned char, CServerHandler*, unsigned char) */

void __thiscall
CGuild::_ZN6CGuild17DBGuildMemberSaveEP5CUserhP14CServerHandlerh
          (CGuild *this,CUser *param_1,uchar param_2,CServerHandler *param_3,uchar param_4)

{
  if ((*(ushort *)(this + 0x1c) & 4) != 0) {
    CUser::_ZN5CUser15SetGuildMemFlagEt(param_1,0x10);
    CUser::_ZN5CUser15SaveGuildMemberEhjP14CServerHandlerh
              (param_1,param_2,*(uint *)(this + 0x18),param_3,param_4);
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFGuild.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 619 个文件*
