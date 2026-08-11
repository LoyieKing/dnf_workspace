# _ZN19CPowerWarCharacInfo9CalcBonusEv

`CPowerWarCharacInfo::CalcBonus()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80a7ee8` | `0xb3` | `0x809e3a6` | `0xc9` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,64 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x28,%esp
+push   %ebx
+sub    $0x34,%esp
 mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
-lea    -0x10(%ebp),%eax
+add    $0x1c,%eax
+mov    %eax,-0x10(%ebp)
+mov    0x8(%ebp),%eax
+add    $0x28,%eax
+mov    %eax,-0xc(%ebp)
+lea    -0x18(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE5beginEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN19CPowerWarCharacInfo9CalcBonusEv+0x7f>
-lea    -0x18(%ebp),%eax
+jmp    <T> <_ZN19CPowerWarCharacInfo9CalcBonusEv+0x95>
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN11STUserPointC1Ev>
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%ebx
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
 mov    (%eax),%eax
-mov    %eax,-0x18(%ebp)
-lea    -0x10(%ebp),%eax
+mov    %eax,(%ebx)
+lea    -0x20(%ebp),%eax
+lea    0x4(%eax),%ebx
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNK9__gnu_cxx17__normal_iteratorIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEdeEv>
 mov    (%eax),%eax
-mov    0x4(%eax),%eax
+add    $0x4,%eax
+mov    (%eax),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN19CPowerWarCharacInfo8GetBonusEi>
-mov    %eax,-0x14(%ebp)
-mov    0x8(%ebp),%eax
-lea    0x28(%eax),%edx
+mov    %eax,(%ebx)
+lea    -0x20(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt4listI11STUserPointSaIS0_EE9push_backERKS0_>
 lea    -0x18(%ebp),%eax
-mov    %eax,0x4(%esp)
-mov    %edx,(%esp)
-call   <T> <_ZNSt4listI11STUserPointSaIS0_EE9push_backERKS0_>
-lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxx17__normal_iteratorIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEppEv>
-mov    0x8(%ebp),%eax
-lea    0x1c(%eax),%edx
-lea    -0xc(%ebp),%eax
+lea    -0x14(%ebp),%eax
+mov    -0x10(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt6vectorIP20STPowerWarCharacInfoSaIS1_EE3endEv>
 sub    $0x4,%esp
-lea    -0xc(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9__gnu_cxxneIPP20STPowerWarCharacInfoSt6vectorIS2_SaIS2_EEEEbRKNS_17__normal_iteratorIT_T0_EESC_>
 test   %al,%al
-jne    <T> <_ZN19CPowerWarCharacInfo9CalcBonusEv+0x20>
+jne    <T> <_ZN19CPowerWarCharacInfo9CalcBonusEv+0x30>
+mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPowerWarCharacInfo::CalcBonus() */

void __thiscall CPowerWarCharacInfo::_ZN19CPowerWarCharacInfo9CalcBonusEv(CPowerWarCharacInfo *this)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 local_1c;
  undefined4 local_18;
  __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
  local_14 [4];
  __normal_iterator local_10 [12];
  
  std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::begin();
  while( true ) {
    std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>::end();
    bVar1 = __gnu_cxx::operator!=(local_14,local_10);
    if (!bVar1) break;
    STUserPoint::_ZN11STUserPointC2Ev((STUserPoint *)&local_1c);
    puVar2 = (undefined4 *)
             __gnu_cxx::
             __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
             ::operator*(local_14);
    local_1c = *(undefined4 *)*puVar2;
    piVar3 = (int *)__gnu_cxx::
                    __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
                    ::operator*(local_14);
    local_18 = GetBonus(this,*(int *)(*piVar3 + 4));
    std::list<STUserPoint,std::allocator<STUserPoint>>::push_back
              ((list<STUserPoint,std::allocator<STUserPoint>> *)(this + 0x28),
               (STUserPoint *)&local_1c);
    __gnu_cxx::
    __normal_iterator<STPowerWarCharacInfo**,std::vector<STPowerWarCharacInfo*,std::allocator<STPowerWarCharacInfo*>>>
    ::operator++(local_14);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp](source/DNFServer/GameServer/Guild/PowerWarCharacInfo.cpp)（约第 283 行）：

```cpp
void CPowerWarCharacInfo::CalcBonus()
{
    std::vector<STPowerWarCharacInfo*>* chars =
        (std::vector<STPowerWarCharacInfo*>*)((char*)this + 0x1c);
    std::list<STUserPoint>* points =
        (std::list<STUserPoint>*)((char*)this + 0x28);
    for (std::vector<STPowerWarCharacInfo*>::iterator it = chars->begin();
         it != chars->end(); ++it)
    {
        STUserPoint pt;
        *(unsigned int*)((char*)&pt + 0) = *(unsigned int*)(*it)->m_data;
        *(unsigned int*)((char*)&pt + 4) =
            (unsigned int)GetBonus(*(int*)((*it)->m_data + 4));
        points->push_back(pt);
    }
}
```
