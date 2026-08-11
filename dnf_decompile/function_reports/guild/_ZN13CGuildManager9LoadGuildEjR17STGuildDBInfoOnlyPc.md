# _ZN13CGuildManager9LoadGuildEjR17STGuildDBInfoOnlyPc

`CGuildManager::LoadGuild(unsigned int, STGuildDBInfoOnly&, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x8095d6c` | `0x58` | `0x805c2ce` | `0x53` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,26 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CGuildManager9FindGuildEj>
 mov    %eax,-0xc(%ebp)
 cmpl   $0x0,-0xc(%ebp)
-sete   %al
-test   %al,%al
-je     <T> <_ZN13CGuildManager9LoadGuildEjR17STGuildDBInfoOnlyPc+0x2d>
+jne    <T> <_ZN13CGuildManager9LoadGuildEjR17STGuildDBInfoOnlyPc+0x28>
 mov    $0x0,%eax
-jmp    <T> <_ZN13CGuildManager9LoadGuildEjR17STGuildDBInfoOnlyPc+0x56>
+jmp    <T> <_ZN13CGuildManager9LoadGuildEjR17STGuildDBInfoOnlyPc+0x51>
 mov    0x14(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild9LoadGuildER17STGuildDBInfoOnlyPc>
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN6CGuild15CheckGuildSkillEv>
 mov    $0x1,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildManager::LoadGuild(unsigned int, STGuildDBInfoOnly&, char*) */

bool __thiscall
CGuildManager::_ZN13CGuildManager9LoadGuildEjR17STGuildDBInfoOnlyPc
          (CGuildManager *this,uint param_1,STGuildDBInfoOnly *param_2,char *param_3)

{
  CGuild *this_00;
  
  this_00 = (CGuild *)_ZN13CGuildManager9FindGuildEj((uint)this);
  if (this_00 != (CGuild *)0x0) {
    CGuild::LoadGuild(this_00,param_2,param_3);
    CGuild::CheckGuildSkill(this_00);
  }
  return this_00 != (CGuild *)0x0;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFGuildManager.cpp](source/DNFServer/GameServer/Guild/DNFGuildManager.cpp)（约第 319 行）：

```cpp
int CGuildManager::LoadGuild(unsigned int guildKey, STGuildDBInfoOnly& info, char* name)
{
    CGuild* guild = FindGuild(guildKey);
    if (guild == 0)
    {
        return 0;
    }
    guild->LoadGuild(info, name);
    guild->CheckGuildSkill();
    return 1;
}
```
