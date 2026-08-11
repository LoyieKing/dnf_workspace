# _ZN9CPowerWar23setPowerWarEndKillPointEt

`CPowerWar::setPowerWarEndKillPoint(unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a6e74` | `0x27` | `0x809d236` | `0x1c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,11 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x4,%esp
 mov    0xc(%ebp),%eax
 mov    %ax,-0x4(%ebp)
 mov    0x8(%ebp),%eax
-movzwl 0xc(%eax),%eax
-cmp    $0xffff,%ax
-jne    <T> <_ZN9CPowerWar23setPowerWarEndKillPointEt+0x25>
-mov    0x8(%ebp),%eax
-movzwl -0x4(%ebp),%edx
-mov    %dx,0xc(%eax)
+lea    0xc(%eax),%edx
+movzwl -0x4(%ebp),%eax
+mov    %ax,(%edx)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWar::setPowerWarEndKillPoint(unsigned short) */

void __thiscall CPowerWar::_ZN9CPowerWar23setPowerWarEndKillPointEt(CPowerWar *this,ushort param_1)

{
  if (*(short *)(this + 0xc) == -1) {
    *(ushort *)(this + 0xc) = param_1;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWar.cpp](source/DNFServer/GameServer/Guild/PowerWar.cpp)（约第 150 行）：

```cpp
void CPowerWar::setPowerWarEndKillPoint(unsigned short point)
{
    *(unsigned short*)((char*)this + 0xc) = point;
}
```
