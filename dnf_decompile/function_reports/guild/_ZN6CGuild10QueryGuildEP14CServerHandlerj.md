# _ZN6CGuild10QueryGuildEP14CServerHandlerj

`CGuild::QueryGuild(CServerHandler*, unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x808d1d8` | `0x90` | `0x805321e` | `0x88` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,43 +1,38 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x24,%esp
+sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 movzwl %ax,%eax
 and    $0x4,%eax
 test   %eax,%eax
-jne    <T> <_ZN6CGuild10QueryGuildEP14CServerHandlerj+0x89>
+jne    <T> <_ZN6CGuild10QueryGuildEP14CServerHandlerj+0x86>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CServerHandler10QueryGuildEjj>
-mov    0x8(%ebp),%eax
-mov    0x18(%eax),%ebx
 movl   $0xf5,0x8(%esp)
 movl   $"QueryGuild",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-mov    %ebx,0xc(%esp)
+mov    0x8(%ebp),%eax
+mov    0x18(%eax),%eax
+mov    %eax,0xc(%esp)
 movl   $"[QUERY]  Guild Key : %d\n",0x8(%esp)
 movl   $"./log/Guild",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 movzwl 0x1c(%eax),%eax
 mov    %eax,%edx
 or     $0x2,%edx
 mov    0x8(%ebp),%eax
 mov    %dx,0x1c(%eax)
-jmp    <T> <_ZN6CGuild10QueryGuildEP14CServerHandlerj+0x8a>
-nop
-add    $0x24,%esp
-pop    %ebx
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::QueryGuild(CServerHandler*, unsigned int) */

void __thiscall
CGuild::_ZN6CGuild10QueryGuildEP14CServerHandlerj(CGuild *this,CServerHandler *param_1,uint param_2)

{
  undefined4 uVar1;
  CMyFileLog local_14 [12];
  
  if ((*(ushort *)(this + 0x1c) & 4) == 0) {
    CServerHandler::_ZN14CServerHandler10QueryGuildEjj(param_1,*(uint *)(this + 0x18),param_2);
    uVar1 = *(undefined4 *)(this + 0x18);
    CMyFileLog::CMyFileLog(local_14,"QueryGuild",0xf5);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z(local_14,"./log/Guild","[QUERY]  Guild Key : %d\n",uVar1);
    *(ushort *)(this + 0x1c) = *(ushort *)(this + 0x1c) | 2;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 440 行）：

```cpp
void CGuild::QueryGuild(CServerHandler* handler, unsigned int charNo)
{
    if ((m_field1c & 4) == 0)
    {
        handler->QueryGuild(m_guildKey, charNo);
        DNF_LOG_SCOPE_LINE(0xf5, "./log/Guild", "[QUERY]  Guild Key : %d\n", m_guildKey);
        m_field1c |= 2;
    }
}
```
