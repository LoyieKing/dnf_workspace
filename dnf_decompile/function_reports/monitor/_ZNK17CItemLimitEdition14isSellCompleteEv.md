# _ZNK17CItemLimitEdition14isSellCompleteEv

`CItemLimitEdition::isSellComplete() const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80933e8` | `0x32` | `0x80943b4` | `0x35` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,19 +1,21 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+push   %ebx
+sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 mov    0x1c(%eax),%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZNK17CItemLimitEdition14isSellCompleteEv+0x18>
+jne    <T> <_ZNK17CItemLimitEdition14isSellCompleteEv+0x19>
 mov    $0x0,%eax
-jmp    <T> <_ZNK17CItemLimitEdition14isSellCompleteEv+0x30>
+jmp    <T> <_ZNK17CItemLimitEdition14isSellCompleteEv+0x2f>
+mov    0x8(%ebp),%eax
+mov    0x1c(%eax),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition10getSellNumEv>
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    0x1c(%eax),%eax
-cmp    %eax,%edx
-setge  %al
-leave
+cmp    %eax,%ebx
+setle  %al
+add    $0x4,%esp
+pop    %ebx
+pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CItemLimitEdition::isSellComplete() const */

undefined4 __thiscall
CItemLimitEdition::_ZNK17CItemLimitEdition14isSellCompleteEv(CItemLimitEdition *this)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(this + 0x1c) == -1) {
    uVar1 = 0;
  }
  else {
    iVar2 = getSellNum(this);
    uVar1 = CONCAT31((int3)((uint)*(int *)(this + 0x1c) >> 8),*(int *)(this + 0x1c) <= iVar2);
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp](source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp)（约第 207 行）：

```cpp
char CItemLimitEdition::isSellComplete() const
{
    if (m_sellLimit == -1)
    {
        return 0;
    }
    return (char)(m_sellLimit <= (int)getSellNum());
}
```
