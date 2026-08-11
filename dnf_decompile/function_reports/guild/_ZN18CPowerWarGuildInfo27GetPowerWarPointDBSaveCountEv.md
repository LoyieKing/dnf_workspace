# _ZN18CPowerWarGuildInfo27GetPowerWarPointDBSaveCountEv

`CPowerWarGuildInfo::GetPowerWarPointDBSaveCount()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80aa636` | `0x16` | `0x80a0860` | `0x19` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,9 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-add    $0x28,%eax
+add    $0x4,%eax
+add    $0x24,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt6vectorIP21STDBSavePowerWarPointSaIS1_EE4sizeEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarGuildInfo::GetPowerWarPointDBSaveCount() */

void __thiscall
CPowerWarGuildInfo::_ZN18CPowerWarGuildInfo27GetPowerWarPointDBSaveCountEv(CPowerWarGuildInfo *this)

{
  std::vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>>::size
            ((vector<STDBSavePowerWarPoint*,std::allocator<STDBSavePowerWarPoint*>> *)(this + 0x28))
  ;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarGuildInfo.cpp)（约第 334 行）：

```cpp
int CPowerWarGuildInfo::GetPowerWarPointDBSaveCount()
{
    return (int)((std::vector<STDBSavePowerWarPoint*>*)(m_data + 0x24))->size();
}
```
