# _ZN7DNFFLib4SwapI14STGuildWarInfoEEvPT_S3_

`void DNFFLib::Swap<STGuildWarInfo>(STGuildWarInfo*, STGuildWarInfo*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x809b622` | `0xc6` | `0x8062b3a` | `0xb2` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,67 +1,63 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x30,%esp
-cmpl   $0x0,0x8(%ebp)
-je     <T> <_ZN7DNFFLib4SwapI14STGuildWarInfoEEvPT_S3_+0xc4>
-cmpl   $0x0,0xc(%ebp)
-je     <T> <_ZN7DNFFLib4SwapI14STGuildWarInfoEEvPT_S3_+0xc4>
 mov    0x8(%ebp),%eax
 mov    (%eax),%edx
 mov    %edx,-0x24(%ebp)
 mov    0x4(%eax),%edx
 mov    %edx,-0x20(%ebp)
 mov    0x8(%eax),%edx
 mov    %edx,-0x1c(%ebp)
 mov    0xc(%eax),%edx
 mov    %edx,-0x18(%ebp)
 mov    0x10(%eax),%edx
 mov    %edx,-0x14(%ebp)
 mov    0x14(%eax),%edx
 mov    %edx,-0x10(%ebp)
 mov    0x18(%eax),%edx
 mov    %edx,-0xc(%ebp)
 mov    0x1c(%eax),%edx
 mov    %edx,-0x8(%ebp)
 mov    0x20(%eax),%eax
 mov    %eax,-0x4(%ebp)
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    (%edx),%ecx
 mov    %ecx,(%eax)
 mov    0x4(%edx),%ecx
 mov    %ecx,0x4(%eax)
 mov    0x8(%edx),%ecx
 mov    %ecx,0x8(%eax)
 mov    0xc(%edx),%ecx
 mov    %ecx,0xc(%eax)
 mov    0x10(%edx),%ecx
 mov    %ecx,0x10(%eax)
 mov    0x14(%edx),%ecx
 mov    %ecx,0x14(%eax)
 mov    0x18(%edx),%ecx
 mov    %ecx,0x18(%eax)
 mov    0x1c(%edx),%ecx
 mov    %ecx,0x1c(%eax)
 mov    0x20(%edx),%edx
 mov    %edx,0x20(%eax)
 mov    0xc(%ebp),%eax
 mov    -0x24(%ebp),%edx
 mov    %edx,(%eax)
 mov    -0x20(%ebp),%edx
 mov    %edx,0x4(%eax)
 mov    -0x1c(%ebp),%edx
 mov    %edx,0x8(%eax)
 mov    -0x18(%ebp),%edx
 mov    %edx,0xc(%eax)
 mov    -0x14(%ebp),%edx
 mov    %edx,0x10(%eax)
 mov    -0x10(%ebp),%edx
 mov    %edx,0x14(%eax)
 mov    -0xc(%ebp),%edx
 mov    %edx,0x18(%eax)
 mov    -0x8(%ebp),%edx
 mov    %edx,0x1c(%eax)
 mov    -0x4(%ebp),%edx
 mov    %edx,0x20(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* void DNFFLib::Swap<STGuildWarInfo>(STGuildWarInfo*, STGuildWarInfo*) */

void DNFFLib::_ZN7DNFFLib4SwapI14STGuildWarInfoEEvPT_S3_
               (STGuildWarInfo *param_1,STGuildWarInfo *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  if ((param_1 != (STGuildWarInfo *)0x0) && (param_2 != (STGuildWarInfo *)0x0)) {
    uVar1 = *(undefined4 *)param_1;
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar3 = *(undefined4 *)(param_1 + 8);
    uVar4 = *(undefined4 *)(param_1 + 0xc);
    uVar5 = *(undefined4 *)(param_1 + 0x10);
    uVar6 = *(undefined4 *)(param_1 + 0x14);
    uVar7 = *(undefined4 *)(param_1 + 0x18);
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    uVar9 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)param_1 = *(undefined4 *)param_2;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
    *(undefined4 *)param_2 = uVar1;
    *(undefined4 *)(param_2 + 4) = uVar2;
    *(undefined4 *)(param_2 + 8) = uVar3;
    *(undefined4 *)(param_2 + 0xc) = uVar4;
    *(undefined4 *)(param_2 + 0x10) = uVar5;
    *(undefined4 *)(param_2 + 0x14) = uVar6;
    *(undefined4 *)(param_2 + 0x18) = uVar7;
    *(undefined4 *)(param_2 + 0x1c) = uVar8;
    *(undefined4 *)(param_2 + 0x20) = uVar9;
  }
  return;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFGuildWar.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 619 个文件*
