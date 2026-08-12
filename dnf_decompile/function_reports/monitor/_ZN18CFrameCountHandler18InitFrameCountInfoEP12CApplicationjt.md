# _ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt

`CFrameCountHandler::InitFrameCountInfo(CApplication*, unsigned int, unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | DIFF | `0x804cb16` | `0x13c` | `0x8086366` | `0x13d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,100 +1,101 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x3c,%esp
 mov    0x14(%ebp),%eax
 mov    %ax,-0x2c(%ebp)
 cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x60>
+je     <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x61>
 mov    0x8(%ebp),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x2c(%eax)
-mov    0x8(%ebp),%eax
 movl   $0x28,0x8(%esp)
 movl   $0x0,0x4(%esp)
+mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <memset>
+mov    0x10(%ebp),%edx
 mov    0x8(%ebp),%eax
-mov    0x10(%ebp),%edx
 mov    %edx,0x4(%eax)
 mov    $0x64,%eax
 mov    $0x0,%edx
 divl   0x10(%ebp)
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x8(%eax)
+nop
 add    $0x3c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcEC1Ev>
 lea    -0x19(%ebp),%eax
 mov    %eax,0x8(%esp)
 movl   $"CFrameCountHandler::InitFrameCountInfo() Exception Break!",0x4(%esp)
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsC1EPKcRKSaIcE>
 lea    -0x20(%ebp),%esi
 movl   $0x8,(%esp)
 call   <T> <__cxa_allocate_exception>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %esi,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN13CDNFExceptionC1ERKSs>
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xdf>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xe0>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%esi
 mov    %ecx,%edi
 mov    %ebx,(%esp)
 call   <T> <__cxa_free_exception>
 mov    %edi,%ecx
 mov    %esi,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xd9>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xda>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xfe>
+jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xff>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xfe>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xff>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x119>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x11a>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xfe>
+jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xff>
 call   <T> <_ZSt9terminatev>
 mov    %eax,%ecx
 mov    %edx,%eax
 mov    %eax,%ebx
 mov    %ecx,%esi
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 mov    %esi,%ecx
 mov    %ebx,%eax
 mov    %ecx,(%esp)
 call   <T> <_Unwind_Resume>
 lea    -0x19(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSaIcED1Ev>
 movl   $&_ZN13CDNFExceptionD1Ev,0x8(%esp)
 movl   $&_ZTI13CDNFException,0x4(%esp)
 mov    %ebx,(%esp)
 call   <T> <__cxa_throw>
```
## 2. Ghidra 反编译 C

```c

/* CFrameCountHandler::InitFrameCountInfo(CApplication*, unsigned int, unsigned short) */

void CFrameCountHandler::_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt
               (CApplication *param_1,uint param_2,ushort param_3)

{
  CDNFException *this;
  undefined2 in_stack_0000000e;
  string local_24 [7];
  allocator local_1d [13];
  
  if (_param_3 != 0) {
    *(uint *)(param_1 + 0x2c) = param_2;
    memset(param_1,0,0x28);
    *(uint *)(param_1 + 4) = _param_3;
    *(uint *)(param_1 + 8) = 100 / _param_3;
    return;
  }
  std::allocator<char>::allocator();
                    /* try { // try from 0804cb96 to 0804cb9a has its CatchHandler @ 0804cc10 */
  std::string::string(local_24,"CFrameCountHandler::InitFrameCountInfo() Exception Break!",local_1d)
  ;
  this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804cbb5 to 0804cbb9 has its CatchHandler @ 0804cbbc */
  CDNFException::CDNFException(this,local_24);
                    /* try { // try from 0804cbfb to 0804cbff has its CatchHandler @ 0804cc02 */
  std::string::~string(local_24);
  std::allocator<char>::~allocator((allocator<char> *)local_1d);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Monitor/DNFTickHandler.cpp, source/DNFServer/GameServer/Monitor/BuddyRegisterManager.h, source/DNFServer/GameServer/Monitor/DNFApplication.h, source/DNFServer/GameServer/Monitor/DNFMemberManager.h, source/DNFServer/GameServer/Monitor/DNFPacketBuffer.h, source/DNFServer/GameServer/Monitor/DNFTableBase.h, source/DNFServer/GameServer/Monitor/DNFTickHandler.cpp, source/DNFServer/GameServer/Monitor/DNFTickHandler.h 等 299 个文件*
