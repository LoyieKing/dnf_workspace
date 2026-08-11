# _ZN13CPacketTracer21StartPacketProcessLogEj

`CPacketTracer::StartPacketProcessLog(unsigned int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x809282e` | `0xc3` | `0x807b0c2` | `0xc3` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,61 +1,61 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x58,%esp
 mov    0x8(%ebp),%eax
 mov    0x8(%eax),%eax
 mov    (%eax),%eax
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
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%ecx
 lea    -0x38(%ebp),%eax
 lea    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15stPacketProcessSt4lessIjESaISt4pairIKjS0_EEE4findERS4_>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
 lea    -0x34(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15stPacketProcessSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 sub    $0x4,%esp
 lea    -0x34(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x38(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15stPacketProcessEEeqERKS4_>
 test   %al,%al
 je     <T> <_ZN13CPacketTracer21StartPacketProcessLogEj+0xc1>
-movl   $0x0,-0x40(%ebp)
 fldz
 fstpl  -0x48(%ebp)
+movl   $0x0,-0x40(%ebp)
 lea    -0x18(%ebp),%eax
 lea    -0x48(%ebp),%edx
 mov    %edx,0x8(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZSt9make_pairIRjR15stPacketProcessESt4pairINSt17__decay_and_stripIT_E6__typeENS4_IT0_E6__typeEEOS5_OS8_>
 sub    $0x4,%esp
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x28(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt4pairIKj15stPacketProcessEC1IjS1_EEOS_IT_T0_E>
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%ecx
 lea    -0x30(%ebp),%eax
 lea    -0x28(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    %ecx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15stPacketProcessSt4lessIjESaISt4pairIKjS0_EEE6insertERKS5_>
 sub    $0x4,%esp
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTracer::StartPacketProcessLog(unsigned int) */

void CPacketTracer::_ZN13CPacketTracer21StartPacketProcessLogEj(uint param_1)

{
  char cVar1;
  _Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>> local_3c [4];
  map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
  local_38 [4];
  pair local_34 [8];
  pair<unsigned_int_const,stPacketProcess> local_2c [16];
  uint local_1c [6];
  
  (**(code **)**(undefined4 **)(param_1 + 8))(*(undefined4 *)(param_1 + 8));
  std::
  map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
  ::find((uint *)local_3c);
  std::
  map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
  ::end(local_38);
  cVar1 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>>::operator==
                    (local_3c,(_Rb_tree_iterator *)local_38);
  if (cVar1 != '\0') {
    std::make_pair<unsigned_int&,stPacketProcess&>(local_1c,(stPacketProcess *)&stack0x00000008);
    std::pair<unsigned_int_const,stPacketProcess>::pair<unsigned_int,stPacketProcess>
              (local_2c,(pair *)local_1c);
    std::
    map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
    ::insert(local_34);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTracer.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTracer.cpp)（约第 62 行）：

```cpp
void CPacketTracer::StartPacketProcessLog(unsigned int id)
{
    m_timer->SetLastTime();
    std::map<unsigned int, stPacketProcess>::iterator it =
        m_processMap.find(id);
    if (it == m_processMap.end())
    {
        stPacketProcess p;
        p.m_accTime = 0.0;
        p.m_count = 0;
        m_processMap.insert(std::make_pair(id, p));
    }
}
```
