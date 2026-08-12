# _ZN16village_attacked23CVillageAttackedManager15GetHuntingPointEj

`village_attacked::CVillageAttackedManager::GetHuntingPoint(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x80a97e8` | `0x70` | `0x80a8126` | `0x6a` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,36 +1,34 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%ecx
-lea    -0x14(%ebp),%eax
+lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjN16village_attacked14stHuntingPointESt4lessIjESaISt4pairIKjS1_EEE4findERS5_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0x4(%eax),%edx
-lea    -0x10(%ebp),%eax
+lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIjN16village_attacked14stHuntingPointESt4lessIjESaISt4pairIKjS1_EEE3endEv>
 sub    $0x4,%esp
+lea    -0xc(%ebp),%eax
+mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
-mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjN16village_attacked14stHuntingPointEEEneERKS5_>
 test   %al,%al
-je     <T> <_ZN16village_attacked23CVillageAttackedManager15GetHuntingPointEj+0x69>
-lea    -0x14(%ebp),%eax
+je     <T> <_ZN16village_attacked23CVillageAttackedManager15GetHuntingPointEj+0x63>
+lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKjN16village_attacked14stHuntingPointEEEptEv>
 add    $0x4,%eax
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-jmp    <T> <_ZN16village_attacked23CVillageAttackedManager15GetHuntingPointEj+0x6e>
+jmp    <T> <_ZN16village_attacked23CVillageAttackedManager15GetHuntingPointEj+0x68>
 mov    $0x0,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* village_attacked::CVillageAttackedManager::GetHuntingPoint(unsigned int) */

int village_attacked::CVillageAttackedManager::
    _ZN16village_attacked23CVillageAttackedManager15GetHuntingPointEj(uint param_1)

{
  char cVar1;
  int iVar2;
  _Rb_tree_iterator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>> local_18 [4];
  map<unsigned_int,village_attacked::stHuntingPoint,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>>
  local_14 [16];
  
  std::
  map<unsigned_int,village_attacked::stHuntingPoint,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>>
  ::find((uint *)local_18);
  std::
  map<unsigned_int,village_attacked::stHuntingPoint,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>>
  ::end(local_14);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>::
          operator!=(local_18,(_Rb_tree_iterator *)local_14);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,village_attacked::stHuntingPoint>>::
            operator->(local_18);
    iVar2 = iVar2 + 4;
  }
  return iVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp](source/DNFServer/GameServer/Monitor/VillageAttackedManager.cpp)（约第 453 行）：

```cpp
int* CVillageAttackedManager::GetHuntingPoint(unsigned int charNo)
{
    std::map<unsigned int, stHuntingPoint>::iterator it = m_huntingPoints.find(charNo);
    if (it != m_huntingPoints.end())
    {
        return (int*)&it->second;
    }
    return 0;
}
```
