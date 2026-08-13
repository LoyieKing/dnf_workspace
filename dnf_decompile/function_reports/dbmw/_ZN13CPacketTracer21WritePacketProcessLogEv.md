# _ZN13CPacketTracer21WritePacketProcessLogEv

`CPacketTracer::WritePacketProcessLog()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8092998` | `0x164` | `0x80ce9cc` | `0x162` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,105 +1,104 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x60,%esp
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%eax
 lea    -0x1(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x24(%eax)
 mov    0x8(%ebp),%eax
 mov    0x24(%eax),%eax
 test   %eax,%eax
 setg   %al
 test   %al,%al
-jne    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x159>
+jne    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x157>
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15stPacketProcessSt4lessIjESaISt4pairIKjS0_EEE5beginEv>
 sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 lea    0xc(%eax),%edx
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15stPacketProcessSt4lessIjESaISt4pairIKjS0_EEE3endEv>
 sub    $0x4,%esp
-jmp    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x132>
-lea    -0x14(%ebp),%eax
+jmp    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x130>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15stPacketProcessEEptEv>
 mov    0xc(%eax),%eax
 test   %eax,%eax
 setne  %al
 test   %al,%al
-je     <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x127>
-lea    -0x14(%ebp),%eax
+je     <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x125>
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15stPacketProcessEEptEv>
 fldl   0x4(%eax)
 fstpl  -0x38(%ebp)
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15stPacketProcessEEptEv>
 mov    0xc(%eax),%eax
 mov    $0x0,%edx
-mov    %eax,-0x20(%ebp)
-mov    %edx,-0x1c(%ebp)
-fildll -0x20(%ebp)
-fldl   -0x38(%ebp)
-fdivp  %st,%st(1)
-fstpl  -0x30(%ebp)
-lea    -0x14(%ebp),%eax
+mov    %eax,-0x30(%ebp)
+mov    %edx,-0x2c(%ebp)
+fildll -0x30(%ebp)
+fdivrl -0x38(%ebp)
+fstpl  -0x18(%ebp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15stPacketProcessEEptEv>
 fldl   0x4(%eax)
-fstpl  -0x28(%ebp)
-lea    -0x14(%ebp),%eax
+fstpl  -0x10(%ebp)
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15stPacketProcessEEptEv>
 mov    0xc(%eax),%esi
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15stPacketProcessEEptEv>
 mov    (%eax),%ebx
 movl   $0x6f,0x8(%esp)
 movl   $&_ZZN13CPacketTracer21WritePacketProcessLogEvE12__FUNCTION__,0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogC1EPKci>
-fldl   -0x30(%ebp)
+fldl   -0x18(%ebp)
 fstpl  0x1c(%esp)
-fldl   -0x28(%ebp)
+fldl   -0x10(%ebp)
 fstpl  0x14(%esp)
 mov    %esi,0x10(%esp)
 mov    %ebx,0xc(%esp)
 movl   $"id(%d), acc count(%d), acc time(%.4f ms), average time(%4.4f ms)",0x8(%esp)
 movl   $"./log/PacketProcess",0x4(%esp)
-lea    -0x10(%ebp),%eax
+lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CMyFileLogclEPKcS1_z>
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt17_Rb_tree_iteratorISt4pairIKj15stPacketProcessEEppEv>
-lea    -0x18(%ebp),%eax
+lea    -0x28(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x14(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSt17_Rb_tree_iteratorISt4pairIKj15stPacketProcessEEneERKS4_>
 test   %al,%al
 jne    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x5f>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPacketTracer21ResetPacketProcessLogEv>
-jmp    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x15a>
+jmp    <T> <_ZN13CPacketTracer21WritePacketProcessLogEv+0x158>
 nop
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTracer::WritePacketProcessLog() */

void __thiscall CPacketTracer::_ZN13CPacketTracer21WritePacketProcessLogEv(CPacketTracer *this)

{
  double dVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
  local_1c [4];
  map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
  local_18 [4];
  CMyFileLog local_14 [8];
  
  *(int *)(this + 0x24) = *(int *)(this + 0x24) + -1;
  if (*(int *)(this + 0x24) < 1) {
    std::
    map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
    ::begin(local_18);
    std::
    map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
    ::end(local_1c);
    while( true ) {
      cVar6 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>>::operator!=
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>> *)
                         local_18,(_Rb_tree_iterator *)local_1c);
      if (cVar6 == '\0') break;
      iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>>::operator->
                        ((_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>> *)
                         local_18);
      if (*(int *)(iVar7 + 0xc) != 0) {
        iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>> *)
                           local_18);
        dVar1 = *(double *)(iVar7 + 4);
        iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>> *)
                           local_18);
        uVar3 = *(uint *)(iVar7 + 0xc);
        iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>> *)
                           local_18);
        uVar2 = *(undefined8 *)(iVar7 + 4);
        iVar7 = std::_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>>::operator->
                          ((_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>> *)
                           local_18);
        uVar4 = *(undefined4 *)(iVar7 + 0xc);
        puVar8 = (undefined4 *)
                 std::_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>>::operator->
                           ((_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>> *)
                            local_18);
        uVar5 = *puVar8;
        CMyFileLog::CMyFileLog(local_14,"WritePacketProcessLog",0x6f);
        CMyFileLog::_ZN10CMyFileLogclEPKcS1_z
                  (local_14,"./log/PacketProcess",
                   "id(%d), acc count(%d), acc time(%.4f ms), average time(%4.4f ms)",uVar5,uVar4,
                   uVar2,dVar1 / (double)uVar3);
      }
      std::_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>>::operator++
                ((_Rb_tree_iterator<std::pair<unsigned_int_const,stPacketProcess>> *)local_18);
    }
    ResetPacketProcessLog(this);
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/DBMW/DNFPacketTracer.cpp](source/DNFServer/GameServer/DBMW/DNFPacketTracer.cpp)（约第 85 行）：

```cpp
void CPacketTracer::WritePacketProcessLog()
{
    m_processCount -= 1;
    for (; m_processCount > 0;)
        return;
    std::map<unsigned int, stPacketProcess>::iterator it =
        m_processMap.begin();
    std::map<unsigned int, stPacketProcess>::iterator end =
        m_processMap.end();
    for (; it != end; ++it)
    {
        if (it->second.m_count != 0)
        {
            double avg =
                it->second.m_accTime / (double)it->second.m_count;
            double acc = it->second.m_accTime;
            register unsigned int cnt = it->second.m_count;
            register unsigned int id = it->first;
            CMyFileLog(__FUNCTION__, 0x6f).operator()(
                "./log/PacketProcess",
                "id(%d), acc count(%d), acc time(%.4f ms), average time(%4.4f ms)",
                id, cnt, acc, avg);
        }
    }
    ResetPacketProcessLog();
}
```
