# _ZN17CItemLimitEditionC1ERK28stItemLimitEditionItemInfo_t

`CItemLimitEdition::CItemLimitEdition(stItemLimitEditionItemInfo_t const&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8093430` | `0x2c` | `0x809423e` | `0x30` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,16 @@
 push   %ebp
 mov    %esp,%ebp
-push   %edi
-push   %esi
-push   %ebx
-mov    0x8(%ebp),%edx
+sub    $0x18,%esp
+movl   $0x48,0x8(%esp)
 mov    0xc(%ebp),%eax
-mov    %eax,%ebx
-mov    $0x12,%eax
-mov    %edx,%edi
-mov    %ebx,%esi
-mov    %eax,%ecx
-rep movsl %ds:(%esi),%es:(%edi)
+mov    %eax,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memcpy>
 mov    0xc(%ebp),%eax
-mov    0x18(%eax),%edx
+add    $0x18,%eax
+mov    (%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x48(%eax)
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CItemLimitEdition::CItemLimitEdition(stItemLimitEditionItemInfo_t const&) */

void __thiscall
CItemLimitEdition::_ZN17CItemLimitEditionC1ERK28stItemLimitEditionItemInfo_t
          (CItemLimitEdition *this,stItemLimitEditionItemInfo_t *param_1)

{
  int iVar1;
  stItemLimitEditionItemInfo_t *psVar2;
  CItemLimitEdition *pCVar3;
  
  psVar2 = param_1;
  pCVar3 = this;
  for (iVar1 = 0x12; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(undefined4 *)pCVar3 = *(undefined4 *)psVar2;
    psVar2 = psVar2 + 4;
    pCVar3 = pCVar3 + 4;
  }
  *(undefined4 *)(this + 0x48) = *(undefined4 *)(param_1 + 0x18);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp](source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp)（约第 194 行）：

```cpp
CItemLimitEdition::CItemLimitEdition(const stItemLimitEditionItemInfo_t& info)
{
    memcpy(this, &info, 0x48);
    m_sellNum = *(unsigned int*)((char*)&info + 0x18);
}
```
