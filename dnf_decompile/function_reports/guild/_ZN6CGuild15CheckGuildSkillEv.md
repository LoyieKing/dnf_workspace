# _ZN6CGuild15CheckGuildSkillEv

`CGuild::CheckGuildSkill()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8091296` | `0x8f` | `0x8056e48` | `0x8e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,44 +1,45 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 mov    0x8(%ebp),%eax
-add    $0x20,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-movzbl 0x1b(%eax),%eax
+add    $0x3b,%eax
+movzbl (%eax),%eax
 test   %al,%al
-je     <T> <_ZN6CGuild15CheckGuildSkillEv+0x88>
-mov    -0xc(%ebp),%eax
-movzwl 0x42(%eax),%eax
+je     <T> <_ZN6CGuild15CheckGuildSkillEv+0x87>
+mov    0x8(%ebp),%eax
+add    $0x62,%eax
+movzwl (%eax),%eax
 test   %ax,%ax
-jne    <T> <_ZN6CGuild15CheckGuildSkillEv+0x88>
-mov    -0xc(%ebp),%eax
-movzbl 0x44(%eax),%eax
+jne    <T> <_ZN6CGuild15CheckGuildSkillEv+0x87>
+mov    0x8(%ebp),%eax
+add    $0x64,%eax
+movzbl (%eax),%eax
 test   %al,%al
-jne    <T> <_ZN6CGuild15CheckGuildSkillEv+0x88>
-mov    -0xc(%ebp),%eax
-movzbl 0x1b(%eax),%eax
+jne    <T> <_ZN6CGuild15CheckGuildSkillEv+0x87>
+mov    0x8(%ebp),%eax
+add    $0x3b,%eax
+movzbl (%eax),%eax
 movzbl %al,%esi
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild11GetGuildKeyEv>
 mov    %eax,%ebx
 movl   $0x85c,0x8(%esp)
 movl   $&_ZZN6CGuild15CheckGuildSkillEvE12__FUNCTION__,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"Err : key(%d), lev(%d), gsp(0), cnt(0)",0x8(%esp)
 movl   $"./log/GuildSkill",0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 add    $0x30,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuild::CheckGuildSkill() */

void __thiscall CGuild::_ZN6CGuild15CheckGuildSkillEv(CGuild *this)

{
  CGuild CVar1;
  undefined4 uVar2;
  CMyFileLog local_18 [8];
  CGuild *local_10;
  
  local_10 = this + 0x20;
  if (((this[0x3b] != (CGuild)0x0) && (*(short *)(this + 0x62) == 0)) && (this[100] == (CGuild)0x0))
  {
    CVar1 = this[0x3b];
    uVar2 = GetGuildKey(this);
    CMyFileLog::CMyFileLog(local_18,"CheckGuildSkill",0x85c);
    CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
              (local_18,"./log/GuildSkill","Err : key(%d), lev(%d), gsp(0), cnt(0)",uVar2,
               (uint)(byte)CVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuild.cpp](source/DNFServer/GameServer/Guild/DNFGuild.cpp)（约第 1798 行）：

```cpp
void CGuild::CheckGuildSkill()
{
    if (*(unsigned char*)((char*)this + 0x3b) != 0 &&
        *(short*)((char*)this + 0x62) == 0 && *(char*)((char*)this + 100) == 0)
    {
        DNF_LOG_SCOPE_LINE(0x85c,"./log/GuildSkill", "Err : key(%d), lev(%d), gsp(0), cnt(0)",
            GetGuildKey(), (unsigned int)*(unsigned char*)((char*)this + 0x3b));
    }
}
```
