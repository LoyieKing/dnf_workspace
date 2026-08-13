# _ZNK17CItemLimitEdition12makeItemInfoER28stItemLimitEditionItemInfo_t

`CItemLimitEdition::makeItemInfo(stItemLimitEditionItemInfo_t&) const`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a5c70` | `0x37` | `0x8094992` | `0x37` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1c,%esp
+mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
-mov    0x8(%ebp),%eax
 mov    %eax,%ebx
 mov    $0x12,%eax
 mov    %edx,%edi
 mov    %ebx,%esi
 mov    %eax,%ecx
 rep movsl %ds:(%esi),%es:(%edi)
+mov    0xc(%ebp),%ebx
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK17CItemLimitEdition10getSellNumEv>
-mov    0xc(%ebp),%edx
-mov    %eax,0x18(%edx)
+mov    %eax,0x18(%ebx)
 add    $0x1c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CItemLimitEdition::makeItemInfo(stItemLimitEditionItemInfo_t&) const */

void __thiscall
CItemLimitEdition::_ZNK17CItemLimitEdition12makeItemInfoER28stItemLimitEditionItemInfo_t
          (CItemLimitEdition *this,stItemLimitEditionItemInfo_t *param_1)

{
  undefined4 uVar1;
  int iVar2;
  CItemLimitEdition *pCVar3;
  stItemLimitEditionItemInfo_t *psVar4;
  
  pCVar3 = this;
  psVar4 = param_1;
  for (iVar2 = 0x12; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)psVar4 = *(undefined4 *)pCVar3;
    pCVar3 = pCVar3 + 4;
    psVar4 = psVar4 + 4;
  }
  uVar1 = getSellNum(this);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp](source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp)（约第 208 行）：

```cpp
void CItemLimitEdition::makeItemInfo(stItemLimitEditionItemInfo_t& info) const
{
    info = *((const stItemLimitEditionItemInfo_t*)this);
    ((RA_UINT<24>*)&info)->v = getSellNum();
}
```
