# _ZN12CApplication4InitEiPPc

`CApplication::Init(int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| manager | NEAR | `0x805dda2` | `0x108` | `0x804dfd4` | `0x108` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,81 +1,81 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 call   <T> <_Z8ShowLogov>
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication9CheckArgvEiPPc>
 call   <T> <_Z25CSignalTranslatorInstancev>
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator4initEP12CApplication>
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15AttachAppInitorEPPc>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%ecx
-mov    0x8(%ebp),%eax
-mov    0xc(%eax),%eax
-mov    0x10(%ebp),%edx
-mov    %edx,0xc(%esp)
-mov    0xc(%ebp),%edx
-mov    %edx,0x8(%esp)
+mov    (%eax),%eax
 mov    0x8(%ebp),%edx
-mov    %edx,0x4(%esp)
-mov    %eax,(%esp)
-call   *%ecx
+mov    0xc(%edx),%edx
+mov    0x10(%ebp),%ecx
+mov    %ecx,0xc(%esp)
+mov    0xc(%ebp),%ecx
+mov    %ecx,0x8(%esp)
+mov    0x8(%ebp),%ecx
+mov    %ecx,0x4(%esp)
+mov    %edx,(%esp)
+call   *%eax
 movl   $"Application Init() Success!",(%esp)
 call   <T> <puts>
 jmp    <T> <_ZN12CApplication4InitEiPPc+0x101>
 cmp    $0x2,%edx
 jne    <T> <_ZN12CApplication4InitEiPPc+0xd3>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
+mov    (%eax),%eax
+mov    -0xc(%ebp),%edx
+mov    %edx,(%esp)
+call   *%eax
 mov    %eax,0x4(%esp)
 movl   $"CApplication::Init() Exception Break : %s\n",(%esp)
 call   <T> <printf>
 call   <T> <__cxa_rethrow>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"CApplication::Init() Exception Break",(%esp)
 call   <T> <puts>
 call   <T> <__cxa_rethrow>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
 add    $0x20,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::Init(int, char**) */

void __thiscall
CApplication::_ZN12CApplication4InitEiPPc(CApplication *this,int param_1,char **param_2)

{
  CSignalTranslator *this_00;
  
                    /* try { // try from 0805ddaa to 0805de26 has its CatchHandler @ 0805de29 */
  ShowLogo();
  CheckArgv((int)this,(char **)param_1);
  this_00 = (CSignalTranslator *)CSignalTranslatorInstance();
  CSignalTranslator::init(this_00,this);
  _ZN12CApplication15AttachAppInitorEPPc(this,param_2);
  (**(code **)(**(int **)(this + 0xc) + 8))(*(undefined4 *)(this + 0xc),this,param_1,param_2);
  puts("Application Init() Success!");
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFApplication.cpp](source/DNFServer/GameServer/COServer/DNFApplication.cpp)（约第 103 行）：

```cpp
void CApplication::Init(int argc, char** argv)
{
    try
    {
        ShowLogo();
        CheckArgv(argc, argv);
        CSignalTranslatorInstance()->init(this);
        AttachAppInitor(argv);
        m_appInit->Init(this, argc, argv);
        puts("Application Init() Success!");
    }
    catch (CDNFException& e)
    {
        printf("CApplication::Init() Exception Break : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CApplication::Init() Exception Break");
        throw;
    }
}
```
