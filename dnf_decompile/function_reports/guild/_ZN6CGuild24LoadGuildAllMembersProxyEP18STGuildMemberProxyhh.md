# _ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh

`CGuild::LoadGuildAllMembersProxy(STGuildMemberProxy*, unsigned char, unsigned char)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809078a` | `0xc7` | `0x8056446` | `0xcc` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,62 +1,65 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+push   %ebx
+sub    $0x24,%esp
 mov    0x10(%ebp),%edx
 mov    0x14(%ebp),%eax
 mov    %dl,-0xc(%ebp)
 mov    %al,-0x10(%ebp)
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xc5>
+je     <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xc6>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x8,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xc5>
+je     <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xc6>
 cmpb   $0x0,-0xc(%ebp)
-jne    <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0x76>
+jne    <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0x77>
 movzbl -0x10(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
 mov    0x8(%ebp),%edx
 add    $0xdd,%edx
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 movzbl -0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x1e(%eax)
-jmp    <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xc5>
+jmp    <T> <_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh+0xc6>
 movzbl -0x10(%ebp),%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 lea    (%eax,%edx,1),%ecx
+mov    0x8(%ebp),%ebx
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 movzwl %ax,%edx
 mov    %edx,%eax
 shl    $0x6,%eax
 add    %edx,%eax
-add    $0xd0,%eax
-add    0x8(%ebp),%eax
-lea    0xd(%eax),%edx
+add    $0xdd,%eax
+lea    (%ebx,%eax,1),%edx
 mov    %ecx,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%edx
 movzbl -0x10(%ebp),%eax
 add    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x1e(%eax)
-leave
+add    $0x24,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::LoadGuildAllMembersProxy(STGuildMemberProxy*, unsigned char, unsigned char) */

void __thiscall
CGuild::_ZN6CGuild24LoadGuildAllMembersProxyEP18STGuildMemberProxyhh
          (CGuild *this,STGuildMemberProxy *param_1,uchar param_2,uchar param_3)

{
  if (((*(ushort *)(this + 0x1c) & 4) != 0) && ((*(ushort *)(this + 0x1c) & 8) != 0)) {
    if (param_2 == '\0') {
      memcpy(this + 0xdd,param_1,(uint)param_3 * 0x41);
      *(ushort *)(this + 0x1e) = (ushort)param_3;
    }
    else {
      memcpy(this + (uint)*(ushort *)(this + 0x1e) * 0x41 + 0xdd,param_1,(uint)param_3 * 0x41);
      *(ushort *)(this + 0x1e) = *(short *)(this + 0x1e) + (ushort)param_3;
    }
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFGuild.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 289 个文件*
