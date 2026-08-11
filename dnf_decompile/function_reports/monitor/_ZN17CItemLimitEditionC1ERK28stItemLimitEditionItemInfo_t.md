# _ZN17CItemLimitEditionC1ERK28stItemLimitEditionItemInfo_t

`CItemLimitEdition::CItemLimitEdition(stItemLimitEditionItemInfo_t const&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x8093430` | `0x2c` | `0x809430a` | `0x87` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,22 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-mov    0x8(%ebp),%edx
-mov    0xc(%ebp),%eax
-mov    %eax,%ebx
-mov    $0x12,%eax
-mov    %edx,%edi
+mov    0x8(%ebp),%eax
+mov    0xc(%ebp),%edx
+mov    $0x4c,%ebx
+mov    %eax,%ecx
+and    $0x1,%ecx
+test   %ecx,%ecx
+je     <T> <_ZN17CItemLimitEditionC1ERK28stItemLimitEditionItemInfo_t+0x28>
+movzbl (%edx),%ecx
+mov    %cl,(%eax)
+add    $0x1,%eax
+add    $0x1,%edx
+sub    $0x1,%ebx
+mov    %eax,%ecx
+and    $0x2,%ecx
+test   %ecx,%ecx
+je     <T> <_ZN17CItemLimitEditionC1ERK28stItemLimitEditionItemInfo_t+0x40>
+movzwl (%edx),%ecx
+mov    %cx,(%eax)
+add    $0x2,%eax
+add    $0x2,%edx
+sub    $0x2,%ebx
+mov    %ebx,%ecx
+shr    $0x2,%ecx
+mov    %eax,%edi
+mov    %edx,%esi
+rep movsl %ds:(%esi),%es:(%edi)
+mov    %esi,%edx
+mov    %edi,%eax
+mov    $0x0,%ecx
 mov    %ebx,%esi
-mov    %eax,%ecx
-rep movsl %ds:(%esi),%es:(%edi)
+and    $0x2,%esi
+test   %esi,%esi
+je     <T> <_ZN17CItemLimitEditionC1ERK28stItemLimitEditionItemInfo_t+0x68>
+movzwl (%edx,%ecx,1),%esi
+mov    %si,(%eax,%ecx,1)
+add    $0x2,%ecx
+and    $0x1,%ebx
+test   %ebx,%ebx
+je     <T> <_ZN17CItemLimitEditionC1ERK28stItemLimitEditionItemInfo_t+0x76>
+movzbl (%edx,%ecx,1),%edx
+mov    %dl,(%eax,%ecx,1)
 mov    0xc(%ebp),%eax
 mov    0x18(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x48(%eax)
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
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

定义于 [source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp](source/DNFServer/GameServer/Monitor/ItemLimitEditionManager.cpp)（约第 195 行）：

```cpp
CItemLimitEdition::CItemLimitEdition(const stItemLimitEditionItemInfo_t& info)
{
    *((stItemLimitEditionItemInfo_t*)this) = info;
    m_sellNum = ((RA_UINT<24>*)&info)->v;
}
```
