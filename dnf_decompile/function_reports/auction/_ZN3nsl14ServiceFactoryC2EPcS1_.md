# _ZN3nsl14ServiceFactoryC2EPcS1_

`nsl::ServiceFactory::ServiceFactory(char*, char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| auction | DIFF | `0x80a957e` | `0x2c4` | `0x809cf5e` | `0x2ca` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,195 +1,197 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
-sub    $0x20,%esp
+sub    $0x30,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl8PortInfoC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11DispatchersC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x18,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7ThreadsC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x5c,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9DataPoolsC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x74,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7ReactorC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xb4,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl11EncyptToolsC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xb8,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl17IActiveConManagerC1Ev>
 mov    0x8(%ebp),%eax
 add    $0xbc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9IHandlersC1Ev>
 mov    0x8(%ebp),%eax
 add    $0x134,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13DBConnectionsC1Ev>
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl14ServiceFactory7setTickEv>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"_ServiceFactoryName-%s\n",(%esp)
 call   <T> <printf>
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 movl   $"_ServiceConfigName-%s\n",(%esp)
 call   <T> <printf>
-lea    -0x11(%ebp),%eax
+lea    -0x15(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
-lea    -0x11(%ebp),%eax
+lea    -0x15(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0xfa>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x11(%ebp),%eax
+lea    -0x15(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x268>
-lea    -0x11(%ebp),%eax
+jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x26e>
+lea    -0x15(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $0xffffffff,0x8(%esp)
-movl   $".",0x4(%esp)
-lea    -0x18(%ebp),%eax
+movl   $"\\",0x4(%esp)
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs12find_last_ofEPKcj>
-mov    %eax,%ebx
+mov    %eax,-0x10(%ebp)
 movl   $0xffffffff,0x8(%esp)
 movl   $"/",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs12find_last_ofEPKcj>
-mov    %ebx,%edx
-sub    %eax,%edx
-mov    %edx,%eax
+mov    -0x10(%ebp),%edx
+mov    %edx,%ecx
+sub    %eax,%ecx
+mov    %ecx,%eax
 sub    $0x1,%eax
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%ebx
 movl   $0xffffffff,0x8(%esp)
 movl   $"/",0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs12find_last_ofEPKcj>
-lea    0x1(%eax),%edx
-lea    -0x10(%ebp),%eax
+add    $0x1,%eax
+mov    %eax,%edx
+lea    -0x14(%ebp),%eax
 mov    %ebx,0xc(%esp)
 mov    %edx,0x8(%esp)
-lea    -0x18(%ebp),%edx
+lea    -0x1c(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSs6substrEjj>
 sub    $0x4,%esp
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsaSERKSs>
-jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x1b3>
+jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x1b9>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x10(%ebp),%eax
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x253>
-lea    -0x10(%ebp),%eax
+jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x259>
+lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    0x8(%ebp),%eax
 add    $0x154,%eax
 movl   $0x15,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 add    $0x169,%eax
 movl   $0x51,0x8(%esp)
 movl   $0x0,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <memset>
 mov    0x8(%ebp),%eax
 lea    0x154(%eax),%edx
 movl   $0x14,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    0x8(%ebp),%edx
 add    $0x169,%edx
 movl   $0x50,0x8(%esp)
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <strncpy>
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x2ba>
+jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x2c0>
 mov    %edx,%ebx
 mov    %eax,%esi
-lea    -0x18(%ebp),%eax
+lea    -0x1c(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x268>
+jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x26e>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x134,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl13DBConnectionsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x282>
+jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x288>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0xbc,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl9IHandlersD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
-jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x29c>
+jmp    <T> <_ZN3nsl14ServiceFactoryC1EPcS1_+0x2a2>
 mov    %edx,%ebx
 mov    %eax,%esi
 mov    0x8(%ebp),%eax
 add    $0x74,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN3nsl7ReactorD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Struct "ITimeEntity": ignoring overlapping field "bTerminated" */
/* DWARF original prototype: void ServiceFactory(ServiceFactory * this, char * _ServiceFactoryName,
   char * _ServiceConfigName) */

void __thiscall
nsl::ServiceFactory::_ZN3nsl14ServiceFactoryC2EPcS1_
          (ServiceFactory *this,char *_ServiceFactoryName,char *_ServiceConfigName)

{
  int iVar1;
  int iVar2;
  char *__src;
  string local_1c [7];
  allocator<char> local_15;
  string local_14;
  int local_10;
  
  PortInfo::PortInfo(&this->super_PortInfo);
  Dispatchers::Dispatchers(&this->super_Dispatchers);
  Threads::Threads(&this->super_Threads);
  DataPools::DataPools(&this->super_DataPools);
  Reactor::Reactor(&this->super_Reactor);
                    /* try { // try from 080a95d4 to 080a95f8 has its CatchHandler @ 080a981a */
  EncyptTools::_ZN3nsl11EncyptToolsC2Ev(&this->super_EncyptTools);
  IActiveConManager::IActiveConManager(&this->super_IActiveConManager);
  IHandlers::IHandlers(&this->super_IHandlers);
                    /* try { // try from 080a9604 to 080a9608 has its CatchHandler @ 080a9800 */
  DBConnections::DBConnections(&this->super_DBConnections);
                    /* Unresolved local var: string serviceConfigName@[???]
                       Unresolved local var: int size@[???] */
                    /* try { // try from 080a960f to 080a9639 has its CatchHandler @ 080a97e6 */
  setTick(this);
  printf("_ServiceFactoryName-%s\n",_ServiceFactoryName);
  printf("_ServiceConfigName-%s\n",_ServiceConfigName);
  std::allocator<char>::allocator();
                    /* try { // try from 080a9659 to 080a965d has its CatchHandler @ 080a9660 */
  std::string::string(local_1c,_ServiceConfigName,(allocator *)&local_15);
  std::allocator<char>::~allocator(&local_15);
                    /* try { // try from 080a9699 to 080a9701 has its CatchHandler @ 080a97d1 */
  iVar1 = std::string::find_last_of((char *)local_1c,0x815fec8);
  iVar2 = std::string::find_last_of((char *)local_1c,0x815feca);
  local_10 = (iVar1 - iVar2) + -1;
  std::string::find_last_of((char *)local_1c,0x815feca);
  std::string::substr((uint)&local_14,(uint)local_1c);
                    /* try { // try from 080a9712 to 080a9716 has its CatchHandler @ 080a9719 */
  std::string::operator=(local_1c,&local_14);
                    /* try { // try from 080a9737 to 080a97a6 has its CatchHandler @ 080a97d1 */
  std::string::~string((string *)&local_14);
  memset(this->ServiceFactoryName,0,0x15);
  memset(this->ServiceConfigName,0,0x51);
  strncpy(this->ServiceFactoryName,_ServiceFactoryName,0x14);
  __src = (char *)std::string::c_str();
  strncpy(this->ServiceConfigName,__src,0x50);
                    /* try { // try from 080a97ca to 080a97ce has its CatchHandler @ 080a97e6 */
  std::string::~string(local_1c);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/ServerLab/ServerLib/common_source/ServiceFactory.cpp](source/DNFServer/GameServer/ServerLab/ServerLib/common_source/ServiceFactory.cpp)（约第 131 行）：

```cpp
ServiceFactory::ServiceFactory(char* _ServiceFactoryName, char* _ServiceConfigName)
{
    setTick();
    printf("_ServiceFactoryName-%s\n", _ServiceFactoryName);
    printf("_ServiceConfigName-%s\n", _ServiceConfigName);
    std::string serviceConfigName(_ServiceConfigName);
    int iVar1 = (int)serviceConfigName.find_last_of("\\");
    int size = (iVar1 - (int)serviceConfigName.find_last_of("/")) + -1;
    serviceConfigName =
        serviceConfigName.substr((int)serviceConfigName.find_last_of("/") + 1, size);
    memset(ServiceFactoryName, 0, 0x15);
    memset(ServiceConfigName, 0, 0x51);
    strncpy(ServiceFactoryName, _ServiceFactoryName, 0x14);
    strncpy(ServiceConfigName, serviceConfigName.c_str(), 0x50);
}
```
