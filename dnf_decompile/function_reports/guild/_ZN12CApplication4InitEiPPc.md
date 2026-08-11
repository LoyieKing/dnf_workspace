# _ZN12CApplication4InitEiPPc

`CApplication::Init(int, char**)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x80621f8` | `0x114` | `0x804dcda` | `0xa1` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,83 +1,48 @@
 push   %ebp
 mov    %esp,%ebp
-push   %esi
-push   %ebx
-sub    $0x20,%esp
+sub    $0x28,%esp
 call   <T> <_Z8ShowLogov>
 movl   $&g_ServerString_,(%esp)
 call   <T> <_ZN13np_server_xml10CServerXml10StrLoadingEv>
 mov    0x10(%ebp),%eax
 mov    %eax,0x8(%esp)
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication9CheckArgvEiPPc>
 call   <T> <_Z25CSignalTranslatorInstancev>
-mov    0x8(%ebp),%edx
-mov    %edx,0x4(%esp)
+mov    %eax,-0xc(%ebp)
+mov    0x8(%ebp),%eax
+mov    %eax,0x4(%esp)
+mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator4initEP12CApplication>
 mov    0x10(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN12CApplication15AttachAppInitorEPPc>
+mov    0x8(%ebp),%eax
+mov    0xc(%eax),%eax
+test   %eax,%eax
+je     <T> <_ZN12CApplication4InitEiPPc+0x93>
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    0xc(%eax),%eax
 mov    0x10(%ebp),%edx
 mov    %edx,0xc(%esp)
 mov    0xc(%ebp),%edx
 mov    %edx,0x8(%esp)
 mov    0x8(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   *%ecx
 movl   $"Application Init() Success!",(%esp)
 call   <T> <puts>
-jmp    <T> <_ZN12CApplication4InitEiPPc+0x10d>
-cmp    $0x2,%edx
-jne    <T> <_ZN12CApplication4InitEiPPc+0xdf>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-mov    %eax,-0xc(%ebp)
-mov    -0xc(%ebp),%eax
-mov    (%eax),%eax
-add    $0x8,%eax
-mov    (%eax),%edx
-mov    -0xc(%ebp),%eax
-mov    %eax,(%esp)
-call   *%edx
-mov    %eax,0x4(%esp)
-movl   $"CApplication::Init() Exception Break : %s\n",(%esp)
-call   <T> <printf>
-call   <T> <__cxa_rethrow>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-mov    %eax,(%esp)
-call   <T> <__cxa_begin_catch>
-movl   $"CApplication::Init() Exception Break",(%esp)
-call   <T> <puts>
-call   <T> <__cxa_rethrow>
-mov    %edx,%ebx
-mov    %eax,%esi
-call   <T> <__cxa_end_catch>
-mov    %esi,%eax
-mov    %ebx,%edx
-mov    %eax,(%esp)
-call   <T> <_Unwind_Resume>
-add    $0x20,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
+leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* CApplication::Init(int, char**) */

void __thiscall
CApplication::_ZN12CApplication4InitEiPPc(CApplication *this,int param_1,char **param_2)

{
  CSignalTranslator *this_00;
  
                    /* try { // try from 08062200 to 08062288 has its CatchHandler @ 0806228b */
  ShowLogo();
  np_server_xml::CServerXml::StrLoading((CServerXml *)g_ServerString_);
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

定义于 [source/DNFServer/GameServer/Guild/DNFApplication.cpp](source/DNFServer/GameServer/Guild/DNFApplication.cpp)（约第 128 行）：

```cpp
void CApplication::Init(int argc, char** argv)
{
    ShowLogo();
    g_ServerString_.StrLoading();
    CheckArgv(argc, argv);
    CSignalTranslator* st = CSignalTranslatorInstance();
    st->init(this);
    AttachAppInitor(argv);
    if (m_appInit != 0)
    {
        m_appInit->Init(this, argc, argv);
    }
    puts("Application Init() Success!");
}
```
