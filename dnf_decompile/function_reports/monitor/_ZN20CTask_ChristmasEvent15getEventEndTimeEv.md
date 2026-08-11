# _ZN20CTask_ChristmasEvent15getEventEndTimeEv

`CTask_ChristmasEvent::getEventEndTime()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8066577` | `0xa` | `0x809fb36` | `0xf` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,5 +1,6 @@
 push   %ebp
 mov    %esp,%ebp
 mov    $0x47726c70,%eax
+mov    $0x0,%edx
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CTask_ChristmasEvent::getEventEndTime() */

undefined4 CTask_ChristmasEvent::_ZN20CTask_ChristmasEvent15getEventEndTimeEv(void)

{
  return 0x47726c70;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/TaskImpl.cpp](source/DNFServer/GameServer/Monitor/TaskImpl.cpp)（约第 58 行）：

```cpp
long long CTask_ChristmasEvent::getEventEndTime() { return 0x47726c70; }
```
