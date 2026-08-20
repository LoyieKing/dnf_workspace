# `APSystem::CActionPointEtcParameter::ClearData` 栈帧/返回 ABI 修复报告

## 选取与原始证据

选择完整函数报告 `docs/class_func_reports/APSystem__CActionPointEtcParameter/ClearData.md`，原始地址 `0x088948fc`，符号：

`_ZN8APSystem24CActionPointEtcParameter9ClearDataEv`

原始函数以 `push ebp; mov esp,ebp; sub $0x18,esp` 建立普通 32 位成员函数栈帧，从 `ebp+0x08` 读取 `this`，最后 `leave; ret`，无显式返回值。

## 修复内容

在 `CDataManager.h` 为 `CActionPointEtcParameter` 补充非静态声明：

```cpp
void ClearData();
```

在 `GameStubs_remaining.cpp` 增加同名定义，保持 `void` 返回和隐含 `this` 参数的成员函数 ABI；按原始对象布局补回 6 个容器成员（3 个 map、2 个 vector 及对应消息/引用字段），`ClearData()` 逐一调用容器 `clear()`，避免对非平凡 STL 对象使用 `memset`。

## TU check

执行：

```sh
./source/toolchain/check_tu_game_orig.sh source/DNFServer/GameServer/Game/GameStubs_remaining.cpp
```

结果：

- `COMPILE OK -> /tmp/tu_GameStubs_remaining.o`
- TU 统计：`identical=642 ae=2379 near=57 diff=479 missing_in_game=2324`
- `nm -C` 确认符号为 `APSystem::CActionPointEtcParameter::ClearData()`。

TU 中其余差异属于同一 TU 的其他函数；本项以编译通过、返回类型、成员函数调用约定和 `this` 栈槽形态为验收依据。
