# _ZN13CPacketTracerC1Ev

`CPacketTracer::CPacketTracer()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| dbmw | DIFF | `0x8092594` | `0xad` | `0x807ad9c` | `0xc1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,57 +1,66 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
 push   %esi
 push   %ebx
-sub    $0x10,%esp
-mov    0x8(%ebp),%eax
-movl   $0x0,(%eax)
+sub    $0x1c,%esp
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x8(%eax)
-mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15stPacketProcessSt4lessIjESaISt4pairIKjS0_EEEC1Ev>
+mov    0x8(%ebp),%eax
+movl   $0x0,(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x24(%eax)
 movl   $0xc,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN10CUnixTimerC1Ev>
-mov    %ebx,%eax
-mov    %eax,%edx
+jmp    <T> <_ZN13CPacketTracerC1Ev+0x6e>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+jmp    <T> <_ZN13CPacketTracerC1Ev+0x83>
+mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x8(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CPacketTracer21ResetPacketProcessLogEv>
-jmp    <T> <_ZN13CPacketTracerC1Ev+0xa6>
+jmp    <T> <_ZN13CPacketTracerC1Ev+0xb9>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIj15stPacketProcessSt4lessIjESaISt4pairIKjS0_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN13CPacketTracerC1Ev+0x88>
+jmp    <T> <_ZN13CPacketTracerC1Ev+0x9b>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-add    $0x10,%esp
+add    $0x1c,%esp
 pop    %ebx
 pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CPacketTracer::CPacketTracer() */

void __thiscall CPacketTracer::_ZN13CPacketTracerC1Ev(CPacketTracer *this)

{
  CUnixTimer *this_00;
  
  *(undefined4 *)this = 0;
  std::string::string((string *)(this + 4));
  *(undefined4 *)(this + 8) = 0;
                    /* try { // try from 080925c6 to 080925ca has its CatchHandler @ 0809261c */
  std::
  map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
  ::map((map<unsigned_int,stPacketProcess,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,stPacketProcess>>>
         *)(this + 0xc));
  *(undefined4 *)(this + 0x24) = 0;
                    /* try { // try from 080925dc to 08092601 has its CatchHandler @ 08092604 */
  this_00 = operator_new(0xc);
  CUnixTimer::_ZN10CUnixTimerC2Ev(this_00);
  *(CUnixTimer **)(this + 8) = this_00;
  ResetPacketProcessLog(this);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketTracer.cpp](source/DNFServer/GameServer/COServer/DNFPacketTracer.cpp)（约第 14 行）：

```cpp
CPacketTracer::CPacketTracer()
    : m_count(0)
{
}
```
