# _ZN17CPacketTranslater17OnResetTODAPCInfoEP12PacketHeader

`CPacketTranslater::OnResetTODAPCInfo(PacketHeader*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x808ec8c` | `0x8` | `0x807a34a` | `0x5` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,5 +1,4 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x20,%esp
-leave
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTranslater::OnResetTODAPCInfo(PacketHeader*) */

void CPacketTranslater::_ZN17CPacketTranslater17OnResetTODAPCInfoEP12PacketHeader
               (PacketHeader *param_1)

{
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp](source/DNFServer/GameServer/Monitor/DNFPacketTranslater.cpp)（约第 4720 行）：

```cpp
void CPacketTranslater::OnResetTODAPCInfo(PacketHeader* pkt) {}
```
