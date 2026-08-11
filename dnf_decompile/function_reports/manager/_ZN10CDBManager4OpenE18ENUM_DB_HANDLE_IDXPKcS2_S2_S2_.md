# _ZN10CDBManager4OpenE18ENUM_DB_HANDLE_IDXPKcS2_S2_S2_

`CDBManager::Open(ENUM_DB_HANDLE_IDX, char const*, char const*, char const*, char const*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x80611c2` | `0x42` | `0x804c2bc` | `0x42` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,24 +1,24 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    (%eax,%edx,4),%eax
 mov    (%eax),%eax
 add    $0xc,%eax
-mov    (%eax),%ecx
-mov    0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
-mov    (%eax,%edx,4),%eax
-mov    0x1c(%ebp),%edx
-mov    %edx,0x10(%esp)
-mov    0x18(%ebp),%edx
-mov    %edx,0xc(%esp)
-mov    0x14(%ebp),%edx
-mov    %edx,0x8(%esp)
-mov    0x10(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   *%ecx
+mov    (%eax),%eax
+mov    0xc(%ebp),%ecx
+mov    0x8(%ebp),%edx
+mov    (%edx,%ecx,4),%edx
+mov    0x1c(%ebp),%ecx
+mov    %ecx,0x10(%esp)
+mov    0x18(%ebp),%ecx
+mov    %ecx,0xc(%esp)
+mov    0x14(%ebp),%ecx
+mov    %ecx,0x8(%esp)
+mov    0x10(%ebp),%ecx
+mov    %ecx,0x4(%esp)
+mov    %edx,(%esp)
+call   *%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CDBManager::Open(ENUM_DB_HANDLE_IDX, char const*, char const*, char const*, char const*) */

void __thiscall
CDBManager::_ZN10CDBManager4OpenE18ENUM_DB_HANDLE_IDXPKcS2_S2_S2_
          (CDBManager *this,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
          undefined4 param_6)

{
  (**(code **)(**(int **)(this + param_2 * 4) + 0xc))
            (*(undefined4 *)(this + param_2 * 4),param_3,param_4,param_5,param_6);
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/DBMW/DBManager.cpp, source/DNFServer/GameServer/Manager/DBManager.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h 等 638 个文件*
