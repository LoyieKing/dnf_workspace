# _ZN16village_attacked23CVillageAttackedManager5ResetEv

`village_attacked::CVillageAttackedManager::Reset()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a8530` | `0x4e` | `0x80a7986` | `0x4c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,23 +1,22 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjN16village_attacked14stHuntingPointESt4lessIjESaISt4pairIKjS1_EEE5clearEv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0x1c(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x20(%eax)
+mov    0x8(%ebp),%edx
+mov    %eax,0x20(%edx)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x24(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x28(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x2c(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::Reset() */

void __thiscall
village_attacked::CVillageAttackedManager::_ZN16village_attacked23CVillageAttackedManager5ResetEv
          (CVillageAttackedManager *this)

{
  undefined4 uVar1;
  
  std::
  map<unsigned_int,village_attacked::stHuntingPoint,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>>
  ::clear((map<unsigned_int,village_attacked::stHuntingPoint,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>>
           *)(this + 4));
  *(undefined4 *)(this + 0x1c) = 0;
  uVar1 = _ZN16village_attacked23CVillageAttackedManager18GetMaxHuntingPointEv(this);
  *(undefined4 *)(this + 0x20) = uVar1;
  this[0x24] = (CVillageAttackedManager)0x0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 332 行）：

```cpp
void CVillageAttackedManager::Reset()
{
    m_huntingPoints.clear();
    m_field1c = 0;
    m_field20 = GetMaxHuntingPoint();
    m_state24 = 0;
    m_field28 = 0;
    m_field2c = 0;
}
```
