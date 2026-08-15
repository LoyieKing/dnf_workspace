# _ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption

`CGuildCargo::InsertHistory(ENUM_GUILD_CARGO_BEHAVIOR, int, char const*, int, int, RandomOption const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | NEAR | `0x80a0140` | `0x11a` | `0x809390e` | `0x11a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,80 +1,80 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 lea    -0x44(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN15STGuildCargoLogC1Ev>
 movl   $0x14,0x8(%esp)
 mov    0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x44(%ebp),%eax
 add    $0x5,%eax
 mov    %eax,(%esp)
 call   <T> <strncpy>
 mov    0x18(%ebp),%eax
 mov    %eax,-0x2a(%ebp)
 mov    0xc(%ebp),%eax
 mov    %al,-0x40(%ebp)
 mov    0x1c(%ebp),%eax
 mov    %eax,-0x26(%ebp)
-mov    0x20(%ebp),%eax
-mov    (%eax),%edx
-mov    %edx,-0x22(%ebp)
-mov    0x4(%eax),%edx
-mov    %edx,-0x1e(%ebp)
-mov    0x8(%eax),%edx
-mov    %edx,-0x1a(%ebp)
-movzwl 0xc(%eax),%eax
+mov    0x20(%ebp),%ebx
+mov    (%ebx),%eax
+mov    %eax,-0x22(%ebp)
+mov    0x4(%ebx),%eax
+mov    %eax,-0x1e(%ebp)
+mov    0x8(%ebx),%eax
+mov    %eax,-0x1a(%ebp)
+movzwl 0xc(%ebx),%eax
 mov    %ax,-0x16(%ebp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <time>
 mov    -0x14(%ebp),%eax
 mov    %eax,-0x44(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x18e8(%eax),%edx
 lea    -0x44(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNSt5dequeI15STGuildCargoLogSaIS0_EE9push_backERKS0_>
 mov    0xc(%ebp),%eax
 movsbl %al,%esi
 mov    0x8(%ebp),%eax
 mov    0x18e0(%eax),%ebx
 movl   $0x202,0x8(%esp)
 movl   $&_ZZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOptionE12__FUNCTION__,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
 mov    0x1c(%ebp),%eax
 mov    %eax,0x1c(%esp)
 mov    %esi,0x18(%esp)
 mov    0x18(%ebp),%eax
 mov    %eax,0x14(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"InsertLog - GUILD:%d, CHARAC:%d, ITEM:%d, BEHAVIOR:%d, ETC:%d",0x8(%esp)
 movl   $"./log/GuildCargo",0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
 mov    0x8(%ebp),%eax
 add    $0x18e8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt5dequeI15STGuildCargoLogSaIS0_EE4sizeEv>
 cmp    $0x32,%eax
 seta   %al
 test   %al,%al
 je     <T> <_ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption+0x113>
 mov    0x8(%ebp),%eax
 add    $0x18e8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt5dequeI15STGuildCargoLogSaIS0_EE9pop_frontEv>
 add    $0x60,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CGuildCargo::InsertHistory(ENUM_GUILD_CARGO_BEHAVIOR, int, char const*, int, int, RandomOption
   const*) */

void __thiscall
CGuildCargo::_ZN11CGuildCargo13InsertHistoryE25ENUM_GUILD_CARGO_BEHAVIORiPKciiPK12RandomOption
          (CGuildCargo *this,char param_2,undefined4 param_3,char *param_4,undefined4 param_5,
          undefined4 param_6,undefined4 *param_7)

{
  undefined4 uVar1;
  uint uVar2;
  time_t local_48;
  char local_44;
  char acStack_43 [21];
  undefined4 local_2e;
  undefined4 local_2a;
  undefined4 local_26;
  undefined4 local_22;
  undefined4 local_1e;
  undefined2 local_1a;
  time_t local_18;
  CMyFileLog local_14 [8];
  
  STGuildCargoLog::STGuildCargoLog((STGuildCargoLog *)&local_48);
  strncpy(acStack_43,param_4,0x14);
  local_2e = param_5;
  local_44 = param_2;
  local_2a = param_6;
  local_26 = *param_7;
  local_22 = param_7[1];
  local_1e = param_7[2];
  local_1a = *(undefined2 *)(param_7 + 3);
  time(&local_18);
  local_48 = local_18;
  std::deque<STGuildCargoLog,std::allocator<STGuildCargoLog>>::push_back
            ((deque<STGuildCargoLog,std::allocator<STGuildCargoLog>> *)(this + 0x18e8),
             (STGuildCargoLog *)&local_48);
  uVar1 = *(undefined4 *)(this + 0x18e0);
  CMyFileLog::CMyFileLog(local_14,"InsertHistory",0x202);
  CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
            (local_14,"./log/GuildCargo",
             "InsertLog - GUILD:%d, CHARAC:%d, ITEM:%d, BEHAVIOR:%d, ETC:%d",uVar1,param_3,param_5,
             (int)param_2,param_6);
  uVar2 = std::deque<STGuildCargoLog,std::allocator<STGuildCargoLog>>::size
                    ((deque<STGuildCargoLog,std::allocator<STGuildCargoLog>> *)(this + 0x18e8));
  if (0x32 < uVar2) {
    std::deque<STGuildCargoLog,std::allocator<STGuildCargoLog>>::pop_front
              ((deque<STGuildCargoLog,std::allocator<STGuildCargoLog>> *)(this + 0x18e8));
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/GuildCargo.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 280 个文件*
