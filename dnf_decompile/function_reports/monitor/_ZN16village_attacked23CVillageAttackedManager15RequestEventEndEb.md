# _ZN16village_attacked23CVillageAttackedManager15RequestEventEndEb

`village_attacked::CVillageAttackedManager::RequestEventEnd(bool)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a9b4c` | `0x4c` | `0x80a76f2` | `0x4e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,28 +1,29 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 mov    %al,-0xc(%ebp)
 cmpb   $0x0,-0xc(%ebp)
 je     <T> <_ZN16village_attacked23CVillageAttackedManager15RequestEventEndEb+0x20>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1c(%eax)
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager15RequestEventEndEb+0x3f>
-mov    0x8(%ebp),%eax
-mov    0x1c(%eax),%edx
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager15RequestEventEndEb+0x41>
 mov    0x8(%ebp),%eax
 mov    0x20(%eax),%eax
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    0x1c(%eax),%eax
 cmp    %eax,%edx
-jb     <T> <_ZN16village_attacked23CVillageAttackedManager15RequestEventEndEb+0x3f>
+ja     <T> <_ZN16village_attacked23CVillageAttackedManager15RequestEventEndEb+0x41>
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1c(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager20OnEndVillageAttackedEv>
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::RequestEventEnd(bool) */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager15RequestEventEndEb
          (CVillageAttackedManager *this,bool param_1)

{
  if (param_1) {
    *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x20);
  }
  else if (*(uint *)(this + 0x20) <= *(uint *)(this + 0x1c)) {
    *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + -1;
  }
  OnEndVillageAttacked(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 240 行）：

```cpp
void CVillageAttackedManager::RequestEventEnd(bool flag)
{
    if (flag)
    {
        m_field1c = m_field20;
    }
    else if ((unsigned int)m_field20 <= (unsigned int)m_field1c)
    {
        m_field1c = m_field1c - 1;
    }
    OnEndVillageAttacked();
}
```
