# _ZN16village_attacked23CVillageAttackedManager25SendRequestRevengeDungeonEPc

`village_attacked::CVillageAttackedManager::SendRequestRevengeDungeon(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a9142` | `0x2b` | `0x80a8a54` | `0x30` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,16 +1,19 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+push   %ebx
+sub    $0x14,%esp
 mov    0xc(%ebp),%eax
-mov    %eax,-0xc(%ebp)
-mov    0x8(%ebp),%eax
-mov    0x30(%eax),%edx
-mov    -0xc(%ebp),%eax
+mov    %eax,-0x8(%ebp)
+mov    -0x8(%ebp),%eax
+mov    0x8(%ebp),%edx
+mov    0x30(%edx),%edx
 mov    %edx,0xa(%eax)
+mov    -0x8(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN16village_attacked23CVillageAttackedManager20GetDungeonRemainTimeEv>
-mov    -0xc(%ebp),%edx
-mov    %eax,0xe(%edx)
-leave
+mov    %eax,0xe(%ebx)
+add    $0x14,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::SendRequestRevengeDungeon(char*) */

void __thiscall
village_attacked::CVillageAttackedManager::
_ZN16village_attacked23CVillageAttackedManager25SendRequestRevengeDungeonEPc
          (CVillageAttackedManager *this,char *param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(this + 0x30);
  uVar1 = _ZN16village_attacked23CVillageAttackedManager20GetDungeonRemainTimeEv(this);
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 713 行）：

```cpp
void CVillageAttackedManager::SendRequestRevengeDungeon(char* pkt)
{
    char* p = pkt;
    ((RA_UINT<10>*)p)->v = m_field30;
    ((RA_UINT<14>*)p)->v = GetDungeonRemainTime();
}
```
