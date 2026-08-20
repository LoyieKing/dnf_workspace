# `APSystem::CActionPointEtcParameter::IsValidActionGroupIndex` 逐指令栈帧/ABI 复原报告

## 1. 选取依据

本函数取自完整类报告 [`class_func_reports/APSystem__CActionPointEtcParameter/IsValidActionGroupIndex.md`](../class_func_reports/APSystem__CActionPointEtcParameter/IsValidActionGroupIndex.md)。它只有 32 字节有效指令，适合逐指令核对；原始地址为 `0x08894956`，函数签名符号为：

`_ZN8APSystem24CActionPointEtcParameter23IsValidActionGroupIndexENS_17_ActionGroupIndexE`

当前重建实现位于 `source/DNFServer/GameServer/Game/GameStubs_remaining.cpp`，声明位于 `CDataManager.h`。

## 2. 原始逐指令与栈帧

原始函数：

```asm
08894956 +0x00: push   %ebp
08894957 +0x01: mov    %esp,%ebp
08894959 +0x03: mov    0x8(%ebp),%eax
0889495c +0x06: test   %eax,%eax
0889495e +0x08: jle    0889496f <+0x19>
08894960 +0x0a: mov    0x8(%ebp),%eax
08894963 +0x0d: cmp    $0x2d,%eax
08894966 +0x10: jg     0889496f <+0x19>
08894968 +0x12: mov    $0x1,%eax
0889496d +0x17: jmp    08894974 <+0x1e>
0889496f +0x19: mov    $0x0,%eax
08894974 +0x1e: pop    %ebp
08894975 +0x1f: ret
```

栈帧结论：

| 位置 | 内容 | 依据 |
|---|---|---|
| `ebp+0x00` | 保存的调用者 `ebp` | `push ebp; mov esp,ebp` |
| `ebp+0x04` | 返回地址 | 32 位 `call` 栈布局 |
| `ebp+0x08` | 唯一输入 `_ActionGroupIndex` 的整数值 | 两次读取均为 `0x8(%ebp)` |
| `ebp-...` | 无局部变量 | 没有 `sub $imm,%esp` |
| `eax` | 返回布尔值/整数值 | `1` 或 `0` 后直接 `ret` |

因此该函数没有 `this` 参数。若按普通非静态成员函数编译，`this` 会占用 `ebp+8`，显式 `index` 应在 `ebp+0xc`，与原始指令不符。原始 ABI 只能由静态成员函数（或等价的无 `this` 函数）解释。

## 3. 语义复原

条件分支等价于：

```cpp
return index >= 1 && index <= 0x2d;
```

边界：`0` 和负数返回假，`1..45` 返回真，`46` 及以上返回假。`jle`/`jg` 是有符号比较，因此输入按 `int` 解释，不是无符号值。

## 4. 重建接口修正

原重建声明曾为：

```cpp
bool IsValidActionGroupIndex(int index) const;
```

这会生成对 `ebp+0xc` 的访问。根据原始栈帧，已修正为：

```cpp
static bool IsValidActionGroupIndex(int index);
```

定义同步去掉 `const`。修正后重建目标的关键指令为：

```asm
push   %ebp
mov    %esp,%ebp
cmpl   $0x0,0x8(%ebp)
jle    ...
cmpl   $0x2d,0x8(%ebp)
jg     ...
mov    $0x1,%eax
jmp    ...
mov    $0x0,%eax
pop    %ebp
ret
```

与原始相比，分支目标的本地地址不同是目标文件布局差异；指令顺序、操作数栈槽、常量和返回路径一致。

## 5. TU check

执行：

```sh
./source/toolchain/check_tu_game_orig.sh \
  source/DNFServer/GameServer/Game/GameStubs_remaining.cpp
```

结果：

- `COMPILE OK -> /tmp/tu_GameStubs_remaining.o`
- TU 总体统计：`identical=641 ae=2378 near=57 diff=479 missing_in_game=2324`
- 编译器只有既有弃用头文件和不完全类型删除警告，无错误。

TU 总体仍有大量其他函数 `DIFF`，所以不能把 TU 成功等同于整个 TU identical；本报告只对选定函数作逐函数结论。

## 6. 函数对比结论

| 项目 | 原始 | 重建修正后 | 结论 |
|---|---|---|---|
| 栈帧建立 | `push ebp; mov esp,ebp` | 相同 | 一致 |
| 栈空间 | 不分配 | 不分配 | 一致 |
| 输入槽位 | `ebp+8` | `ebp+8` | ABI 一致 |
| 下界 | `index > 0` | `index >= 1` | 语义一致 |
| 上界 | `index <= 0x2d` | `index <= 0x2d` | 一致 |
| 返回值 | `eax=1/0` | `eax=1/0` | 一致 |
| 收尾 | `pop ebp; ret` | 相同 | 一致 |

结论：该函数的原始 ABI 为无 `this` 的静态接口；修正声明后，重建函数在栈帧、参数槽位、逐指令控制流和边界语义上均与完整报告中的原始函数相符。