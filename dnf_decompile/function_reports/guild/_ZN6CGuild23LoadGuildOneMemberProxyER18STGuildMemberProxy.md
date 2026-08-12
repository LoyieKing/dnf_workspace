# _ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy

`CGuild::LoadGuildOneMemberProxy(STGuildMemberProxy&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8090852` | `0x115` | `0x8056632` | `0x106` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,79 +1,73 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x30,%esp
+sub    $0x38,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x109>
+je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x28>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x10,%eax
 test   %eax,%eax
-je     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x109>
+jne    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x32>
+mov    $0x0,%eax
+jmp    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x104>
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 cmp    $0x12b,%ax
-ja     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x83>
+ja     <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x7e>
+mov    0x8(%ebp),%edx
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
-movzwl %ax,%edx
-mov    %edx,%eax
+movzwl %ax,%eax
 shl    $0x6,%eax
-add    %edx,%eax
-add    $0xd0,%eax
-add    0x8(%ebp),%eax
-lea    0xd(%eax),%edx
+add    $0xdd,%eax
+add    %eax,%edx
 movl   $0x41,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <memcpy>
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 lea    0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x1e(%eax)
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 cmp    $0x12b,%ax
-jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0xf4>
-mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%eax
-movzwl %ax,%esi
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%ebx
+jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0xef>
 movl   $0x719,0x8(%esp)
 movl   $&_ZZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxyE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %esi,0x10(%esp)
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+movzwl 0x1e(%eax),%eax
+movzwl %ax,%edx
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %edx,0x10(%esp)
+mov    %eax,0xc(%esp)
 movl   $"Guild Member Cnt Full Or Over : G Key(%d), Cnt(%d)",0x8(%esp)
 movl   $"./log/GuildErr",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 movzwl 0x1e(%eax),%eax
 cmp    $0x12c,%ax
-jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0xf4>
+jbe    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0xef>
 mov    0x8(%ebp),%eax
 movw   $0x12c,0x1e(%eax)
 mov    0x8(%ebp),%eax
-movzwl 0x1e(%eax),%edx
+lea    0x42(%eax),%edx
 mov    0x8(%ebp),%eax
-mov    %dx,0x42(%eax)
+movzwl 0x1e(%eax),%eax
+mov    %ax,(%edx)
 mov    $0x1,%eax
-jmp    <T> <_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy+0x10e>
-mov    $0x0,%eax
-add    $0x30,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::LoadGuildOneMemberProxy(STGuildMemberProxy&) */

undefined4 __thiscall
CGuild::_ZN6CGuild23LoadGuildOneMemberProxyER18STGuildMemberProxy
          (CGuild *this,STGuildMemberProxy *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  CMyFileLog local_14 [8];
  
  if (((*(ushort *)(this + 0x1c) & 4) == 0) || ((*(ushort *)(this + 0x1c) & 0x10) == 0)) {
    uVar2 = 0;
  }
  else {
    if (*(ushort *)(this + 0x1e) < 300) {
      memcpy(this + (uint)*(ushort *)(this + 0x1e) * 0x41 + 0xdd,param_1,0x41);
      *(short *)(this + 0x1e) = *(short *)(this + 0x1e) + 1;
    }
    if (299 < *(ushort *)(this + 0x1e)) {
      uVar1 = *(ushort *)(this + 0x1e);
      uVar2 = *(undefined4 *)(this + 0x18);
      CMyFileLog::CMyFileLog(local_14,"LoadGuildOneMemberProxy",0x719);
      CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                (local_14,"./log/GuildErr","Guild Member Cnt Full Or Over : G Key(%d), Cnt(%d)",
                 uVar2,(uint)uVar1);
      if (300 < *(ushort *)(this + 0x1e)) {
        *(undefined2 *)(this + 0x1e) = 300;
      }
    }
    *(undefined2 *)(this + 0x42) = *(undefined2 *)(this + 0x1e);
    uVar2 = 1;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1608 行）：

```cpp
int CGuild::LoadGuildOneMemberProxy(STGuildMemberProxy& proxy)
{
    if ((m_field1c & 4) == 0 || (m_field1c & 0x10) == 0)
    {
        return 0;
    }
    if (m_field1e <= 0x12b)
    {
        memcpy((char*)this + (unsigned int)m_field1e * 0x40 + 0xdd, &proxy, 0x41);
        m_field1e++;
    }
    if (m_field1e > 0x12b)
    {
        CMyFileLog log(__FUNCTION__, 0x719);
        log("./log/GuildErr", "Guild Member Cnt Full Or Over : G Key(%d), Cnt(%d)", m_guildKey,
            (unsigned int)m_field1e);
        if (m_field1e > 0x12c)
        {
            m_field1e = 0x12c;
        }
    }
    *(unsigned short*)((char*)this + 0x42) = m_field1e;
    return 1;
}
```
