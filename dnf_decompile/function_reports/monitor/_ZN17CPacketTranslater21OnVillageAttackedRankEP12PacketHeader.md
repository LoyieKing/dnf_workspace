# _ZN17CPacketTranslater21OnVillageAttackedRankEP12PacketHeader

`CPacketTranslater::OnVillageAttackedRank(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808ca26` | `0x20` | `0x8078086` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,11 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x20,%esp
-mov    0x8(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    &_ZN17CPacketTranslater8m_pclAppE,%eax
-add    $0x10,%eax
-mov    %eax,-0x8(%ebp)
-movl   $0x0,-0x4(%ebp)
-leave
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnVillageAttackedRank(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater21OnVillageAttackedRankEP12PacketHeader
               (PacketHeader *param_1)

{
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4125 行）：

```cpp
void CPacketTranslater::OnVillageAttackedRank(PacketHeader* pkt) {}
```
