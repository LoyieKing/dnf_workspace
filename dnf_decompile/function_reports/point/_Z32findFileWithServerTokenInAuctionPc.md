# _Z32findFileWithServerTokenInAuctionPc

`findFileWithServerTokenInAuction(char*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| point | NEAR | `0x807cb52` | `0x24b` | `0x80804ab` | `0x24b` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,170 +1,170 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x30,%esp
 movl   $0x104,-0x10(%ebp)
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x19(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 jmp    <T> <_Z32findFileWithServerTokenInAuctionPc+0x50>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1Ev>
 movl   $0xffffffff,0x8(%esp)
 movl   $"/",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs12find_last_ofEPKcj>
 mov    %eax,-0xc(%ebp)
 cmpl   $0xffffffff,-0xc(%ebp)
 jne    <T> <_Z32findFileWithServerTokenInAuctionPc+0xa8>
 movl   $0xffffffff,0x8(%esp)
 movl   $"\\",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs12find_last_ofEPKcj>
 mov    %eax,-0xc(%ebp)
 cmpl   $0xffffffff,-0xc(%ebp)
 je     <T> <_Z32findFileWithServerTokenInAuctionPc+0x1f0>
 mov    -0xc(%ebp),%eax
 add    $0x1,%eax
 mov    %eax,%edx
 lea    -0x18(%ebp),%eax
 mov    %edx,0xc(%esp)
 movl   $0x0,0x8(%esp)
 lea    -0x20(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZNKSs6substrEjj>
 sub    $0x4,%esp
 lea    -0x18(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsaSERKSs>
 jmp    <T> <_Z32findFileWithServerTokenInAuctionPc+0x107>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_Z32findFileWithServerTokenInAuctionPc+0x1f7>
 lea    -0x18(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 movl   $"(R)",0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLEPKc>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs4sizeEv>
 mov    -0xc(%ebp),%edx
 add    $0x1,%edx
 mov    %edx,%ecx
 lea    -0x14(%ebp),%edx
 mov    %eax,0xc(%esp)
 mov    %ecx,0x8(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    %edx,(%esp)
 call   <T> <_ZNKSs6substrEjj>
 sub    $0x4,%esp
 lea    -0x14(%ebp),%eax
 mov    %eax,0x4(%esp)
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSspLERKSs>
 jmp    <T> <_Z32findFileWithServerTokenInAuctionPc+0x17e>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_Z32findFileWithServerTokenInAuctionPc+0x1f7>
 lea    -0x14(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0x8(%esp)
 movl   $0x104,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z9ss_strcpyPcjPKc>
 movl   $0x0,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <access>
 test   %eax,%eax
 sete   %al
 test   %al,%al
 je     <T> <_Z32findFileWithServerTokenInAuctionPc+0x1ce>
 mov    $0x1,%ebx
 jmp    <T> <_Z32findFileWithServerTokenInAuctionPc+0x20c>
-lea    -0x20(%ebp),%eax
+lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNKSs5c_strEv>
 mov    %eax,0x8(%esp)
 movl   $0x104,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_Z9ss_strcpyPcjPKc>
 mov    $0x0,%ebx
 jmp    <T> <_Z32findFileWithServerTokenInAuctionPc+0x20c>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 jmp    <T> <_Z32findFileWithServerTokenInAuctionPc+0x219>
 lea    -0x24(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 jmp    <T> <_Z32findFileWithServerTokenInAuctionPc+0x234>
 mov    %edx,%ebx
 mov    %eax,%esi
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
 mov    %ebx,%eax
 lea    -0x8(%ebp),%esp
 add    $0x0,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

bool findFileWithServerTokenInAuction(TCHAR *fullPath)

{
  char *pcVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  undefined1 local_28 [4];
  char local_24 [7];
  allocator<char> local_1d;
  string local_1c;
  string local_18;
  undefined4 local_14;
  int local_10;
  
  piVar4 = (int *)&stack0xffffffc4;
                    /* Unresolved local var: int MAX_PATH_@[???]
                       Unresolved local var: tstring fullPathStr@[???]
                       Unresolved local var: tstring newFullPathStr@[???]
                       Unresolved local var: int endIndex@[???] */
  local_14 = 0x104;
  std::allocator<char>::allocator();
                    /* try { // try from 0807cb80 to 0807cb84 has its CatchHandler @ 0807cb87 */
  std::string::string(local_24,fullPath,(allocator *)&local_1d);
  std::allocator<char>::~allocator(&local_1d);
                    /* try { // try from 0807cbb3 to 0807cbb7 has its CatchHandler @ 0807cd6b */
  std::string::string(local_28);
                    /* try { // try from 0807cbce to 0807cc29 has its CatchHandler @ 0807cd49 */
  local_10 = std::string::find_last_of(local_24,0x815acc0);
  if (local_10 == -1) {
    local_10 = std::string::find_last_of(local_24,0x815acc2);
  }
  if (local_10 != -1) {
    std::string::substr((uint)&local_1c,(uint)local_24);
                    /* try { // try from 0807cc3a to 0807cc3e has its CatchHandler @ 0807cc41 */
    std::string::operator=(local_28,&local_1c);
                    /* try { // try from 0807cc5f to 0807cca3 has its CatchHandler @ 0807cd49 */
    std::string::~string((string *)&local_1c);
    std::string::operator+=(local_28,"(R)");
    std::string::size();
    std::string::substr((uint)&local_18,(uint)local_24);
    piVar4 = (int *)&stack0xffffffbc;
                    /* try { // try from 0807ccb4 to 0807ccb8 has its CatchHandler @ 0807ccbb */
    std::string::operator+=(local_28,&local_18);
                    /* try { // try from 0807ccd6 to 0807cd41 has its CatchHandler @ 0807cd49 */
    std::string::~string((string *)&local_18);
    pcVar1 = (char *)std::string::c_str();
    ss_strcpy(fullPath,0x104,pcVar1);
    iVar2 = access(fullPath,0);
    if (iVar2 == 0) {
      bVar3 = true;
      piVar4 = (int *)&stack0xffffffbc;
      goto LAB_0807cd5e;
    }
    pcVar1 = (char *)std::string::c_str();
    ss_strcpy(fullPath,0x104,pcVar1);
  }
  bVar3 = false;
LAB_0807cd5e:
  *piVar4 = (int)local_28;
                    /* try { // try from 0807cd64 to 0807cd68 has its CatchHandler @ 0807cd6b */
  piVar4[-1] = 0x807cd69;
  std::string::~string((string *)*piVar4);
  *piVar4 = (int)local_24;
  piVar4[-1] = 0x807cd91;
  std::string::~string((string *)*piVar4);
  return bVar3;
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFShared/GameScript/RDARScriptItemInfo.cpp, source/ChannelOld/DNFChannelBridge/Authenticator.h, source/ChannelOld/DNFChannelBridge/ChannelService.h, source/ChannelOld/DNFChannelBridge/ChannelServiceApp.h, source/ChannelOld/DNFChannelBridge/CheckThread.h, source/ChannelOld/DNFChannelBridge/CommandLineParser.h, source/ChannelOld/DNFChannelBridge/DBMgr.h, source/ChannelOld/DNFChannelBridge/DebugLog.h 等 581 个文件*
