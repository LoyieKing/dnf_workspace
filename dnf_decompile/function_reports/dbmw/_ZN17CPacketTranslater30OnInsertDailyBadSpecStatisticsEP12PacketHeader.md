# _ZN17CPacketTranslater30OnInsertDailyBadSpecStatisticsEP12PacketHeader

`CPacketTranslater::OnInsertDailyBadSpecStatistics(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809932a` | `0x1a` | `0x80dcade` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,12 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x20,%esp
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-test   %eax,%eax
-je     <T> <_ZN17CPacketTranslater30OnInsertDailyBadSpecStatisticsEP12PacketHeader+0x17>
-mov    0x8(%ebp),%eax
-mov    %eax,-0x4(%ebp)
-jmp    <T> <_ZN17CPacketTranslater30OnInsertDailyBadSpecStatisticsEP12PacketHeader+0x18>
-nop
-leave
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnInsertDailyBadSpecStatistics(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater30OnInsertDailyBadSpecStatisticsEP12PacketHeader
               (PacketHeader *param_1)

{
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTranslater.cpp)（约第 3044 行）：

```cpp
void CPacketTranslater::OnInsertDailyBadSpecStatistics(PacketHeader* header)
{
}
```
