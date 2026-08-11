# _ZN13CPowerManager21SetPowerWarRewardInfoEiiii

`CPowerManager::SetPowerWarRewardInfo(int, int, int, int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a4d00` | `0x35` | `0x809b008` | `0x3d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,20 @@
 push   %ebp
 mov    %esp,%ebp
 mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x18c(%eax)
+lea    0x18c(%eax),%edx
+mov    0xc(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    0x10(%ebp),%edx
-mov    %edx,0x190(%eax)
+lea    0x190(%eax),%edx
+mov    0x10(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    0x14(%ebp),%edx
-mov    %edx,0x194(%eax)
+lea    0x194(%eax),%edx
+mov    0x14(%ebp),%eax
+mov    %eax,(%edx)
 mov    0x8(%ebp),%eax
-mov    0x18(%ebp),%edx
-mov    %edx,0x198(%eax)
+lea    0x198(%eax),%edx
+mov    0x18(%ebp),%eax
+mov    %eax,(%edx)
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerManager::SetPowerWarRewardInfo(int, int, int, int) */

void __thiscall
CPowerManager::_ZN13CPowerManager21SetPowerWarRewardInfoEiiii
          (CPowerManager *this,int param_1,int param_2,int param_3,int param_4)

{
  *(int *)(this + 0x18c) = param_1;
  *(int *)(this + 400) = param_2;
  *(int *)(this + 0x194) = param_3;
  *(int *)(this + 0x198) = param_4;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerManager.cpp](source/DNFServer/GameServer/Guild/PowerManager.cpp)（约第 506 行）：

```cpp
void CPowerManager::SetPowerWarRewardInfo(int a, int b, int c, int d)
{
    *(int*)((char*)this + 0x18c) = a;
    *(int*)((char*)this + 0x190) = b;
    *(int*)((char*)this + 0x194) = c;
    *(int*)((char*)this + 0x198) = d;
}
```
