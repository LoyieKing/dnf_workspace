# _ZN15RelayServiceApp12RelayService7setModeENS0_4ModeE

`RelayServiceApp::RelayService::setMode(RelayServiceApp::RelayService::Mode)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | NEAR | `0x8049f86` | `0x11` | `0x804dfa6` | `0x11` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,7 +1,7 @@
 push   %ebp
 mov    %esp,%ebp
+mov    0xc(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
 mov    %edx,0x1c4(%eax)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* RelayServiceApp::RelayService::setMode(RelayServiceApp::RelayService::Mode) */

void __thiscall
RelayServiceApp::RelayService::_ZN15RelayServiceApp12RelayService7setModeENS0_4ModeE
          (RelayService *this,undefined4 param_2)

{
  *(undefined4 *)(this + 0x1c4) = param_2;
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Relay/DNFRelayServer.cpp, source/DNFServer/GameServer/Relay/DNFRelayServer.h, source/DNFServer/GameServer/Relay/Exception.h, source/DNFServer/GameServer/Relay/Globals.h, source/DNFServer/GameServer/Relay/Helper.h, source/DNFServer/GameServer/Relay/LinuxService.h, source/DNFServer/GameServer/Relay/PIDHelper.h, source/DNFServer/GameServer/Relay/Reactor.h 等 244 个文件*
