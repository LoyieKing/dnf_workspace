# _ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt

`CFrameCountHandler::InitFrameCountInfo(CApplication*, unsigned int, unsigned short)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804c96a` | `0x13c` | `0x808771a` | `0x149` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,100 +1,103 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
-sub    $0x3c,%esp
+sub    $0x4c,%esp
 mov    0x14(%ebp),%eax
 mov    %ax,-0x2c(%ebp)
-cmpl   $0x0,0x10(%ebp)
-je     <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x60>
-mov    0x8(%ebp),%eax
-mov    0xc(%ebp),%edx
-mov    %edx,0x2c(%eax)
-mov    0x8(%ebp),%eax
-movl   $0x28,0x8(%esp)
-movl   $0x0,0x4(%esp)
-mov    %eax,(%esp)
-call   <T> <memset>
-mov    0x8(%ebp),%eax
-mov    0x10(%ebp),%edx
-mov    %edx,0x4(%eax)
-mov    $0x64,%eax
-mov    $0x0,%edx
-divl   0x10(%ebp)
-mov    %eax,%edx
-mov    0x8(%ebp),%eax
-mov    %edx,0x8(%eax)
-add    $0x3c,%esp
-pop    %ebx
-pop    %esi
-pop    %edi
-pop    %ebp
-ret
+cmpw   $0x0,-0x2c(%ebp)
+jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xf7>
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
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x9a>
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
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x94>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xfe>
+jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xb9>
 call   <T> <_ZSt9terminatev>
 mov    %esi,%ecx
 mov    %ebx,%eax
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xfe>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xb9>
 lea    -0x20(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZNSsD1Ev>
-jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0x119>
+jmp    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xd4>
 mov    %eax,%ecx
 mov    %edx,%eax
 cmp    $0xffffffff,%eax
-jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xfe>
+jne    <T> <_ZN18CFrameCountHandler18InitFrameCountInfoEP12CApplicationjt+0xb9>
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
+mov    0x10(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x2c(%eax)
+movl   $0x28,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    0x8(%ebp),%eax
+mov    %eax,(%esp)
+call   <T> <memset>
+movzwl -0x2c(%ebp),%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x4(%eax)
+movzwl -0x2c(%ebp),%eax
+mov    %eax,-0x3c(%ebp)
+mov    $0x64,%eax
+mov    %eax,%edx
+sar    $0x1f,%edx
+idivl  -0x3c(%ebp)
+mov    %eax,%edx
+mov    0x8(%ebp),%eax
+mov    %edx,0x8(%eax)
+add    $0x4c,%esp
+pop    %ebx
+pop    %esi
+pop    %edi
+pop    %ebp
+ret
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
                    /* try { // try from 0804c9ea to 0804c9ee has its CatchHandler @ 0804ca64 */
  std::string::string(local_24,"CFrameCountHandler::InitFrameCountInfo() Exception Break!",local_1d)
  ;
  this = (CDNFException *)__cxa_allocate_exception(8);
                    /* try { // try from 0804ca09 to 0804ca0d has its CatchHandler @ 0804ca10 */
  CDNFException::CDNFException(this,local_24);
                    /* try { // try from 0804ca4f to 0804ca53 has its CatchHandler @ 0804ca56 */
  std::string::~string(local_24);
  std::allocator<char>::~allocator((allocator<char> *)local_1d);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&CDNFException::typeinfo,CDNFException::_ZN13CDNFExceptionD2Ev);
}
```

## 3. 我们的源码函数

*未能在以下候选源文件中定位定义：source/DNFServer/GameServer/Guild/DNFTickHandler.cpp, source/DNFServer/GameServer/Guild/BlackUser.h, source/DNFServer/GameServer/Guild/CashObject.h, source/DNFServer/GameServer/Guild/DNFAppConfig.h, source/DNFServer/GameServer/Guild/DNFAppStartInit.h, source/DNFServer/GameServer/Guild/DNFAppStopInit.h, source/DNFServer/GameServer/Guild/DNFApplication.h, source/DNFServer/GameServer/Guild/DNFDBServer.h 等 285 个文件*
