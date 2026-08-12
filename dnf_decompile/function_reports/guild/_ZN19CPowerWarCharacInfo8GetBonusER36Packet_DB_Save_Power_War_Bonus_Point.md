# _ZN19CPowerWarCharacInfo8GetBonusER36Packet_DB_Save_Power_War_Bonus_Point

`CPowerWarCharacInfo::GetBonus(Packet_DB_Save_Power_War_Bonus_Point&)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a7f9c` | `0xda` | `0x809de12` | `0xde` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,67 +1,67 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
 lea    -0x14(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listI11STUserPointSaIS0_EE5beginEv>
 sub    $0x4,%esp
 movl   $0x0,-0xc(%ebp)
 jmp    <T> <_ZN19CPowerWarCharacInfo8GetBonusER36Packet_DB_Save_Power_War_Bonus_Point+0x80>
 mov    -0xc(%ebp),%ebx
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt14_List_iteratorI11STUserPointEdeEv>
+call   <T> <_ZNKSt14_List_iteratorI11STUserPointEptEv>
 mov    (%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %edx,0xe(%eax,%ebx,8)
 mov    -0xc(%ebp),%ebx
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
-call   <T> <_ZNKSt14_List_iteratorI11STUserPointEdeEv>
+call   <T> <_ZNKSt14_List_iteratorI11STUserPointEptEv>
 mov    0x4(%eax),%edx
 mov    0xc(%ebp),%eax
 mov    %edx,0x12(%eax,%ebx,8)
 addl   $0x1,-0xc(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%ecx
 lea    -0x1c(%ebp),%eax
 mov    -0x14(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listI11STUserPointSaIS0_EE5eraseESt14_List_iteratorIS0_E>
 sub    $0x4,%esp
 mov    -0x1c(%ebp),%eax
 mov    %eax,-0x14(%ebp)
 mov    0x8(%ebp),%eax
 lea    0x28(%eax),%edx
 lea    -0x10(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt4listI11STUserPointSaIS0_EE3endEv>
 sub    $0x4,%esp
 lea    -0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt14_List_iteratorI11STUserPointEneERKS1_>
 test   %al,%al
-je     <T> <_ZN19CPowerWarCharacInfo8GetBonusER36Packet_DB_Save_Power_War_Bonus_Point+0xbf>
-mov    -0xc(%ebp),%eax
-cmp    $0xf9,%eax
-ja     <T> <_ZN19CPowerWarCharacInfo8GetBonusER36Packet_DB_Save_Power_War_Bonus_Point+0xbf>
+je     <T> <_ZN19CPowerWarCharacInfo8GetBonusER36Packet_DB_Save_Power_War_Bonus_Point+0xbe>
+cmpl   $0xf9,-0xc(%ebp)
+jg     <T> <_ZN19CPowerWarCharacInfo8GetBonusER36Packet_DB_Save_Power_War_Bonus_Point+0xbe>
 mov    $0x1,%eax
-jmp    <T> <_ZN19CPowerWarCharacInfo8GetBonusER36Packet_DB_Save_Power_War_Bonus_Point+0xc4>
+jmp    <T> <_ZN19CPowerWarCharacInfo8GetBonusER36Packet_DB_Save_Power_War_Bonus_Point+0xc3>
 mov    $0x0,%eax
 test   %al,%al
 jne    <T> <_ZN19CPowerWarCharacInfo8GetBonusER36Packet_DB_Save_Power_War_Bonus_Point+0x28>
 mov    0xc(%ebp),%eax
 mov    -0xc(%ebp),%edx
 mov    %edx,0xa(%eax)
+mov    $0x0,%eax
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarCharacInfo::GetBonus(Packet_DB_Save_Power_War_Bonus_Point&) */

void __thiscall
CPowerWarCharacInfo::_ZN19CPowerWarCharacInfo8GetBonusER36Packet_DB_Save_Power_War_Bonus_Point
          (CPowerWarCharacInfo *this,Packet_DB_Save_Power_War_Bonus_Point *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 local_20 [2];
  undefined4 local_18;
  _List_iterator local_14 [4];
  uint local_10;
  
  std::list<STUserPoint,std::allocator<STUserPoint>>::begin();
  local_10 = 0;
  while( true ) {
    std::list<STUserPoint,std::allocator<STUserPoint>>::end();
    cVar4 = std::_List_iterator<STUserPoint>::operator!=
                      ((_List_iterator<STUserPoint> *)&local_18,local_14);
    uVar3 = local_10;
    if ((cVar4 == '\0') || (0xf9 < local_10)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (!bVar1) break;
    puVar5 = (undefined4 *)
             std::_List_iterator<STUserPoint>::operator*((_List_iterator<STUserPoint> *)&local_18);
    uVar2 = local_10;
    *(undefined4 *)(param_1 + uVar3 * 8 + 0xe) = *puVar5;
    iVar6 = std::_List_iterator<STUserPoint>::operator*((_List_iterator<STUserPoint> *)&local_18);
    *(undefined4 *)(param_1 + uVar2 * 8 + 0x12) = *(undefined4 *)(iVar6 + 4);
    local_10 = local_10 + 1;
    std::list<STUserPoint,std::allocator<STUserPoint>>::erase(local_20,this + 0x28,local_18);
    local_18 = local_20[0];
  }
  *(uint *)(param_1 + 10) = local_10;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp)（约第 280 行）：

```cpp
void CPowerWarCharacInfo::GetBonus(Packet_DB_Save_Power_War_Bonus_Point& pkt)
{
    std::list<STUserPoint>::iterator it = m_list.begin();
    int i = 0;
    for (; it != m_list.end() && i <= 0xf9U; )
    {
        pkt.m_points[i].m0 = (*it).m0;
        pkt.m_points[i].m4 = (*it).m4;
        i++;
        it = m_list.erase(it);
    }
    pkt.m_bonus = i;
}
```
