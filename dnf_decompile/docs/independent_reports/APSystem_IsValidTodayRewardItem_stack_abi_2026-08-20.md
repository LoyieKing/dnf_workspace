# `APSystem::CActionPointEtcParameter::IsValidTodayRewardItem` 栈帧/参数 ABI 修复报告

## 选取与原始证据

选择完整函数报告 `docs/class_func_reports/APSystem__CActionPointEtcParameter/IsValidTodayRewardItem.md`，原始地址 `0x08894976`，符号：

`_ZN8APSystem24CActionPointEtcParameter22IsValidTodayRewardItemENS_22_SIG_LOAD_ACTION_POINT16_TodayRewardItemE`

原始汇编为：

```asm
push   %ebp
mov    %esp,%ebp
mov    0x8(%ebp),%eax
test   %eax,%eax
js     ...
mov    0x8(%ebp),%eax
cmp    $0x3,%eax
jg     ...
mov    $0x1,%eax
jmp    ...
mov    $0x0,%eax
pop    %ebp
ret
```

## ABI/语义结论

该函数没有 `this` 参数：唯一参数读取自 `ebp+0x08`，因此必须是静态成员函数。参数是 `_SIG_LOAD_ACTION_POINT::_TodayRewardItem`，底层按 32 位整数传递；返回值通过 `eax` 返回布尔值。语义为 `item >= 0 && item <= 3`，边界外返回 0，范围内返回 1。

## 修复内容

在 `CDataManager.h` 中补齐 `_SIG_LOAD_ACTION_POINT::_TodayRewardItem` 的最小类型声明，并声明：

```cpp
static bool IsValidTodayRewardItem(_SIG_LOAD_ACTION_POINT::_TodayRewardItem item);
```

在 `GameStubs_remaining.cpp` 中实现相同静态接口和边界判断。这样生成的符号经 `nm -C` 确认为：

`APSystem::CActionPointEtcParameter::IsValidTodayRewardItem(APSystem::_SIG_LOAD_ACTION_POINT::_TodayRewardItem)`

参数槽、返回形态和原始 mangled 类型一致。

## TU check

执行：

```sh
./source/toolchain/check_tu_game_orig.sh source/DNFServer/GameServer/Game/GameStubs_remaining.cpp
```

结果：

- `COMPILE OK -> /tmp/tu_GameStubs_remaining.o`
- `identical=642 ae=2379 near=57 diff=478 missing_in_game=2324`
- 相比修复前本 TU `identical=641`、`diff=479`，函数级对比改善 1 项。
- 其余差异属于 TU 内其他函数，不将 TU 编译成功误判为整体 identical。
