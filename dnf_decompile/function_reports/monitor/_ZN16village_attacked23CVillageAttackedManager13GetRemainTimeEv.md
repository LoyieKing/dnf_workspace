# _ZN16village_attacked23CVillageAttackedManager13GetRemainTimeEv

`village_attacked::CVillageAttackedManager::GetRemainTime()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a97b4` | `0x1e` | `0x80a79ce` | `0x25` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,14 +1,15 @@
 push   %ebp
 mov    %esp,%ebp
-push   %ebx
-sub    $0x4,%esp
+sub    $0x18,%esp
 mov    0x8(%ebp),%eax
-mov    0x28(%eax),%ebx
+mov    0x28(%eax),%eax
+mov    %eax,-0x10(%ebp)
 call   <T> <_Z10GetNowTimev>
-mov    %ebx,%edx
-sub    %eax,%edx
-mov    %edx,%eax
-add    $0x4,%esp
-pop    %ebx
-pop    %ebp
+mov    %eax,-0xc(%ebp)
+mov    -0xc(%ebp),%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::GetRemainTime() */

int __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager13GetRemainTimeEv(CVillageAttackedManager *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x28);
  iVar2 = GetNowTime();
  return iVar1 - iVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 393 行）：

```cpp
int CVillageAttackedManager::GetRemainTime()
{
    int end = m_field28;
    int now = (int)GetNowTime();
    return end - now;
}
```
