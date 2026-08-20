# `APSystem::CActionPointEtcParameter::IsValidActionGroupIndex` 指令形态与 TU/函数对比报告

## 选取与原始证据

选择完整函数报告 `docs/class_func_reports/APSystem__CActionPointEtcParameter/IsValidActionGroupIndex.md`，原始地址 `0x08894956`，符号：

`_ZN8APSystem24CActionPointEtcParameter23IsValidActionGroupIndexENS_17_ActionGroupIndexE`

原始函数只有 32 字节有效指令：

```asm
push %ebp; mov %esp,%ebp
mov 0x8(%ebp),%eax; test %eax,%eax; jle invalid
mov 0x8(%ebp),%eax; cmp $0x2d,%eax; jg invalid
mov $0x1,%eax; jmp done
mov $0x0,%eax
pop %ebp; ret
```

## 修正

`CDataManager.h` 已声明：

```cpp
static bool IsValidActionGroupIndex(int index);
```

`GameStubs_remaining.cpp` 中已有相同静态接口定义：

```cpp
bool APSystem::CActionPointEtcParameter::IsValidActionGroupIndex(int index)
{
    return index >= 1 && index <= 0x2d;
}
```

静态成员函数保证唯一参数位于 `ebp+0x08`；若是普通成员函数，`this` 会占据该槽位，与原始指令不符。

## 函数级对比

| 项目 | 原始 | 重建 | 结论 |
|---|---|---|---|
| `this` 参数 | 无 | 无（`static`） | ABI 一致 |
| 输入槽位 | `ebp+0x08` | `ebp+0x08` | 一致 |
| 下界 | `index > 0` | `index >= 1` | 语义一致 |
| 上界 | `index <= 0x2d` | `index <= 0x2d` | 一致 |
| 返回 | `eax=1/0` | `bool` 返回 `1/0` | 一致 |
| 收尾 | `pop ebp; ret` | 相同形态 | 一致 |

结论：栈槽、比较常量、分支方向和返回路径均一致；局部跳转地址因目标文件布局不同，不作为差异。

## TU check

执行：

```sh
./source/toolchain/check_tu_game_orig.sh \
  source/DNFServer/GameServer/Game/GameStubs_remaining.cpp
```

实测结果：TU 检查未通过，原因是当前工作树该大型桩文件存在既有不完整类型/未声明符号错误（如 `CWorldMap`、`G_TimerQueue`、`g_dnfLexWrapperInstance` 等），并非本函数重定义或语法错误。首次运行还暴露了本函数重复定义，已移除新增重复定义并保留文件原有定义。

因此本次可确认的是函数级指令/ABI 对比；TU 编译统计暂不可取得，不能将编译失败写成 `COMPILE OK`。
