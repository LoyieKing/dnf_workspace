# _ZN17CSignalTranslator4initEP12CApplication

`CSignalTranslator::init(CApplication*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804b37a` | `0xa8` | `0x8083d2a` | `0xa6` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,54 +1,53 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x20,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator11init_signalEv>
 mov    0xc(%ebp),%eax
 mov    %eax,0x4(%esp)
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17CSignalTranslator12init_handlerEP12CApplication>
-jmp    <T> <_ZN17CSignalTranslator4initEP12CApplication+0xa1>
+add    $0x20,%esp
+pop    %ebx
+pop    %esi
+pop    %ebp
+ret
 cmp    $0x2,%edx
-jne    <T> <_ZN17CSignalTranslator4initEP12CApplication+0x73>
+jne    <T> <_ZN17CSignalTranslator4initEP12CApplication+0x78>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 mov    %eax,-0xc(%ebp)
 mov    -0xc(%ebp),%eax
 mov    (%eax),%eax
 add    $0x8,%eax
 mov    (%eax),%edx
 mov    -0xc(%ebp),%eax
 mov    %eax,(%esp)
 call   *%edx
 mov    %eax,0x4(%esp)
 movl   $"CSignalTranslator Exception Break : %s\n",(%esp)
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
 movl   $"CSignalTranslator Exception Break",(%esp)
 call   <T> <puts>
 call   <T> <__cxa_rethrow>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-add    $0x20,%esp
-pop    %ebx
-pop    %esi
-pop    %ebp
-ret
```
## 2. Ghidra 反编译 C

```c

/* CSignalTranslator::init(CApplication*) */

void __thiscall
CSignalTranslator::_ZN17CSignalTranslator4initEP12CApplication
          (CSignalTranslator *this,CApplication *param_1)

{
                    /* try { // try from 0804b388 to 0804b39e has its CatchHandler @ 0804b3a1 */
  _ZN17CSignalTranslator11init_signalEv(this);
  _ZN17CSignalTranslator12init_handlerEP12CApplication(this,param_1);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFSignalTranslator.cpp](source/DNFServer/GameServer/Guild/DNFSignalTranslator.cpp)（约第 114 行）：

```cpp
int CSignalTranslator::init(CApplication* app)
{
    try
    {
        init_signal();
        return init_handler(app);
    }
    catch (CDNFException& e)
    {
        printf("CSignalTranslator Exception Break : %s\n", e.what());
        throw;
    }
    catch (...)
    {
        puts("CSignalTranslator Exception Break");
        throw;
    }
}
```
