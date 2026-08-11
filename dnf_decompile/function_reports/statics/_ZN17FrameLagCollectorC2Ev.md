# _ZN17FrameLagCollectorC2Ev

`FrameLagCollector::FrameLagCollector()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x80663dc` | `0x1fb` | `0x805f638` | `0x1fd` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,141 +1,142 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
+mov    0x8(%ebp),%eax
+add    $0x1c,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEEC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x34,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEEC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x54,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
+mov    0x8(%ebp),%eax
+add    $0x70,%eax
+mov    %eax,(%esp)
+call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
 mov    0x8(%ebp),%eax
 movb   $0x0,(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x4(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x8(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0xc(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x10(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x14(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x18(%eax)
 mov    0x8(%ebp),%eax
 movb   $0x0,0x19(%eax)
 mov    0x8(%ebp),%eax
-add    $0x1c,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEEC1Ev>
-mov    0x8(%ebp),%eax
-add    $0x34,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEEC1Ev>
-mov    0x8(%ebp),%eax
 movl   $0x0,0x4c(%eax)
 mov    0x8(%ebp),%eax
 movl   $0x0,0x50(%eax)
 mov    0x8(%ebp),%eax
-add    $0x54,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
-mov    0x8(%ebp),%eax
 movl   $0x0,0x6c(%eax)
 mov    0x8(%ebp),%eax
-add    $0x70,%eax
-mov    %eax,(%esp)
-call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEEC1Ev>
+movl   $0x1e,0x88(%eax)
 mov    0x8(%ebp),%eax
-movl   $0x1e,0x88(%eax)
+movl   $0x0,0x8c(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x90(%eax)
+mov    0x8(%ebp),%eax
+movl   $0x0,0x94(%eax)
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEE5clearEv>
 mov    0x8(%ebp),%eax
 add    $0x34,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEE5clearEv>
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 mov    0x8(%ebp),%eax
 add    $0x70,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEE5clearEv>
 mov    0x8(%ebp),%eax
-movl   $0x0,0x8c(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x90(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x0,0x94(%eax)
+movl   $0x0,0x1e4(%eax)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector4InitEv>
 mov    0x8(%ebp),%eax
 add    $0xa4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector20DirectxVersionStruct4initEv>
 mov    0x8(%ebp),%eax
 movl   $0x0,0xa0(%eax)
 mov    0x8(%ebp),%eax
 mov    0x98(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x9c(%eax)
 movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN17FrameLagCollectorC1Ev+0x176>
+jmp    <T> <_ZN17FrameLagCollectorC1Ev+0x183>
 mov    -0xc(%ebp),%edx
 mov    %edx,%eax
 add    %eax,%eax
 add    %edx,%eax
 shl    $0x4,%eax
 add    $0xc0,%eax
 add    0x8(%ebp),%eax
 add    $0x4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17FrameLagCollector16UsedMemoryStruct4initEv>
 addl   $0x1,-0xc(%ebp)
 cmpl   $0x5,-0xc(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17FrameLagCollectorC1Ev+0x153>
-mov    0x8(%ebp),%eax
-movl   $0x0,0x1e4(%eax)
-add    $0x20,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
+jne    <T> <_ZN17FrameLagCollectorC1Ev+0x160>
+jmp    <T> <_ZN17FrameLagCollectorC1Ev+0x1f6>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x70,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18FrameLagDataStructESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17FrameLagCollectorC1Ev+0x1ad>
+jmp    <T> <_ZN17FrameLagCollectorC1Ev+0x1a8>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x54,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIiN17FrameLagCollector18MonitoringSpecCaseESt4lessIiESaISt4pairIKiS1_EEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17FrameLagCollectorC1Ev+0x1c5>
+jmp    <T> <_ZN17FrameLagCollectorC1Ev+0x1c0>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x34,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN17FrameLagCollectorC1Ev+0x1dd>
+jmp    <T> <_ZN17FrameLagCollectorC1Ev+0x1d8>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x1c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSt3mapIicSt4lessIiESaISt4pairIKicEEED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
+add    $0x20,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
+ret
```
## 2. Ghidra 反编译 C

```c

/* FrameLagCollector::FrameLagCollector() */

void __thiscall FrameLagCollector::_ZN17FrameLagCollectorC2Ev(FrameLagCollector *this)

{
  int local_10;
  
  *this = (FrameLagCollector)0x0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  this[0x18] = (FrameLagCollector)0x0;
  this[0x19] = (FrameLagCollector)0x0;
  std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::map
            ((map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>> *)(this + 0x1c)
            );
                    /* try { // try from 08066441 to 08066445 has its CatchHandler @ 080665b9 */
  std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::map
            ((map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>> *)(this + 0x34)
            );
  *(undefined4 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 0x50) = 0;
                    /* try { // try from 08066463 to 08066467 has its CatchHandler @ 080665a1 */
  std::
  map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
  ::map((map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
         *)(this + 0x54));
  *(undefined4 *)(this + 0x6c) = 0;
                    /* try { // try from 0806647b to 0806647f has its CatchHandler @ 08066589 */
  std::
  map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
  ::map((map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
         *)(this + 0x70));
  *(undefined4 *)(this + 0x88) = 0x1e;
                    /* try { // try from 08066496 to 080664c4 has its CatchHandler @ 08066571 */
  std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::clear
            ((map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>> *)(this + 0x1c)
            );
  std::map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>>::clear
            ((map<int,char,std::less<int>,std::allocator<std::pair<int_const,char>>> *)(this + 0x34)
            );
  std::
  map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
  ::clear((map<int,FrameLagCollector::MonitoringSpecCase,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::MonitoringSpecCase>>>
           *)(this + 0x54));
  std::
  map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
  ::clear((map<int,FrameLagCollector::FrameLagDataStruct,std::less<int>,std::allocator<std::pair<int_const,FrameLagCollector::FrameLagDataStruct>>>
           *)(this + 0x70));
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined4 *)(this + 0x90) = 0;
  *(undefined4 *)(this + 0x94) = 0;
  _ZN17FrameLagCollector4InitEv(this);
  DirectxVersionStruct::init((DirectxVersionStruct *)(this + 0xa4));
  *(undefined4 *)(this + 0xa0) = 0;
  *(undefined4 *)(this + 0x9c) = *(undefined4 *)(this + 0x98);
  for (local_10 = 0; local_10 < 6; local_10 = local_10 + 1) {
    UsedMemoryStruct::init((UsedMemoryStruct *)(this + local_10 * 0x30 + 0xc4));
  }
  *(undefined4 *)(this + 0x1e4) = 0;
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/FrameLagCollector.cpp](source/DNFServer/GameServer/Statics/FrameLagCollector.cpp)（约第 19 行）：

```cpp
FrameLagCollector::FrameLagCollector()
{
    m_field0 = 0;
    m_field4 = 0;
    m_field8 = 0;
    m_fieldc = 0;
    m_field10 = 0;
    m_field14 = 0;
    m_field18 = 0;
    m_field19 = 0;
    m_field4c = 0;
    m_field50 = 0;
    m_field6c = 0;
    m_collectInterval = 0x1e;
    m_field8c = 0;
    m_field90 = 0;
    m_field94 = 0;
    m_map1c.clear();
    m_map34.clear();
    m_monitor.clear();
    m_data.clear();
    m_field1e4 = 0;
    Init();
    m_directx.init();
    m_renewCnt = 0;
    m_field9c = m_today;
    for (int i = 0; i < 6; i++)
    {
        m_memory[i].init();
    }
}
```
