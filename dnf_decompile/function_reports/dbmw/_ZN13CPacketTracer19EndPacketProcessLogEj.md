# _ZN13CPacketTracer19EndPacketProcessLogEj

`CPacketTracer::EndPacketProcessLog(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | NEAR | `0x80928f2` | `0xa6` | `0x80cee20` | `0xa6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,55 +1,55 @@
 push   %ebp
 mov    %esp,%ebp
 push   %ebx
 sub    $0x34,%esp
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%ecx
 lea    -0x10(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15stPacketProcessSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
 lea    -0xc(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15stPacketProcessSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 sub    $0x4,%esp
 lea    -0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15stPacketProcessEEneERKS4_>
 test   %al,%al
 je     <T> <_ZN13CPacketTracer19EndPacketProcessLogEj+0xa1>
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15stPacketProcessEEptEv>
 mov    0xc(%eax),%edx
 add    $0x1,%edx
 mov    %edx,0xc(%eax)
 lea    -0x10(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15stPacketProcessEEptEv>
 mov    %eax,%ebx
 fldl   0x4(%ebx)
 fstpl  -0x20(%ebp)
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    (%eax),%eax
 add    $0x4,%eax
-mov    (%eax),%edx
-mov    0x8(%ebp),%eax
-mov    0x8(%eax),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    0x8(%ebp),%edx
+mov    0x8(%edx),%edx
+mov    %edx,(%esp)
+call   *%eax
 fldl   &data#a2821b98(.rodata)
 fmulp  %st,%st(1)
 faddl  -0x20(%ebp)
 fstpl  0x4(%ebx)
 mov    -0x4(%ebp),%ebx
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CPacketTracer::EndPacketProcessLog(unsigned int) */

void CPacketTracer::_ZN13CPacketTracer19EndPacketProcessLogEj(uint param_1)

{
  double dVar1;
  char cVar2;
  int iVar3;
  longdouble lVar4;
  _Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>> local_14 [4];
  map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
  local_10 [8];
  
  std::
  map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
  ::find((uint *)local_14);
  std::
  map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
  ::end(local_10);
  cVar2 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>>::operator!=
                    (local_14,(_Rb_tree_iterator *)local_10);
  if (cVar2 != '\0') {
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>>::operator->
                      (local_14);
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
    iVar3 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>>::operator->
                      (local_14);
    dVar1 = *(double *)(iVar3 + 4);
    lVar4 = (longdouble)(**(code **)(**(int **)(param_1 + 8) + 4))(*(undefined4 *)(param_1 + 8));
    *(double *)(iVar3 + 4) = (double)((longdouble)_DAT_081be3f8 * lVar4 + (longdouble)dVar1);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTracer.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTracer.cpp)（约第 75 行）：

```cpp
void CPacketTracer::EndPacketProcessLog(unsigned int id)
{
    std::map<unsigned int, stPacketProcess>::iterator it =
        m_processMap.find(id);
    if (it != m_processMap.end())
    {
        it->second.m_count += 1;
        it->second.m_accTime += 1000.0 * m_timer->GetTimeInterval();
    }
}
```
