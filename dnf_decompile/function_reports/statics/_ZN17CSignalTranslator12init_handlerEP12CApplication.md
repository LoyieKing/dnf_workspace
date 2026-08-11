# _ZN17CSignalTranslator12init_handlerEP12CApplication

`CSignalTranslator::init_handler(CApplication*)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| statics | DIFF | `0x804be5e` | `0x1b3` | `0x805cc34` | `0x23e` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,136 +1,186 @@
 push   %ebp
 mov    %esp,%ebp
+push   %edi
+push   %esi
 push   %ebx
-sub    $0x24,%esp
+sub    $0x2c,%esp
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN13CTerminateSigC1Ev>
+jmp    <T> <_ZN17CSignalTranslator12init_handlerEP12CApplication+0x3b>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x3c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7CSignal9attachAppEP12CApplication>
-movl   $0x0,-0xc(%ebp)
-jmp    <T> <_ZN17CSignalTranslator12init_handlerEP12CApplication+0x5a>
-mov    -0xc(%ebp),%edx
+movl   $0x0,-0x1c(%ebp)
+jmp    <T> <_ZN17CSignalTranslator12init_handlerEP12CApplication+0x76>
+mov    -0x1c(%ebp),%edx
 mov    0x8(%ebp),%eax
 mov    0x3c(%eax),%ecx
 mov    0x8(%ebp),%eax
 mov    %ecx,(%eax,%edx,4)
-addl   $0x1,-0xc(%ebp)
-cmpl   $0x19,-0xc(%ebp)
+addl   $0x1,-0x1c(%ebp)
+cmpl   $0x19,-0x1c(%ebp)
 setle  %al
 test   %al,%al
-jne    <T> <_ZN17CSignalTranslator12init_handlerEP12CApplication+0x47>
+jne    <T> <_ZN17CSignalTranslator12init_handlerEP12CApplication+0x63>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21CSegmentationFaultSigC1Ev>
+jmp    <T> <_ZN17CSignalTranslator12init_handlerEP12CApplication+0xb3>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x18(%eax)
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7CSignal9attachAppEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x2c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x20(%eax)
 mov    0x8(%ebp),%eax
 mov    0x18(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x8(%eax)
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CUser1SigC1Ev>
+jmp    <T> <_ZN17CSignalTranslator12init_handlerEP12CApplication+0x128>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x28(%eax)
 mov    0x8(%ebp),%eax
 mov    0x28(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7CSignal9attachAppEP12CApplication>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN9CUser2SigC1Ev>
+jmp    <T> <_ZN17CSignalTranslator12init_handlerEP12CApplication+0x179>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x30(%eax)
 mov    0x8(%ebp),%eax
 mov    0x30(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7CSignal9attachAppEP12CApplication>
 movl   $0x8,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN14CSystemFailSigC1Ev>
+jmp    <T> <_ZN17CSignalTranslator12init_handlerEP12CApplication+0x1ca>
+mov    %edx,%esi
+mov    %eax,%edi
+mov    %ebx,(%esp)
+call   <T> <_ZdlPv>
+mov    %edi,%eax
+mov    %esi,%edx
+mov    %eax,(%esp)
+call   <T> <_Unwind_Resume>
 mov    %ebx,%eax
 mov    %eax,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x10(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%eax
 mov    0xc(%ebp),%edx
 mov    %edx,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <_ZN7CSignal9attachAppEP12CApplication>
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x1c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x5c(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x40(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x60(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x64(%eax)
 mov    0x8(%ebp),%eax
 mov    0x10(%eax),%edx
 mov    0x8(%ebp),%eax
 mov    %edx,0x7c(%eax)
-add    $0x24,%esp
+mov    $0x0,%eax
+add    $0x2c,%esp
 pop    %ebx
+pop    %esi
+pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* CSignalTranslator::init_handler(CApplication*) */

void __thiscall
CSignalTranslator::_ZN17CSignalTranslator12init_handlerEP12CApplication
          (CSignalTranslator *this,CApplication *param_1)

{
  CTerminateSig *this_00;
  CSegmentationFaultSig *this_01;
  CUser1Sig *this_02;
  CUser2Sig *this_03;
  CSystemFailSig *this_04;
  int local_10;
  
  this_00 = operator_new(8);
  CTerminateSig::_ZN13CTerminateSigC2Ev(this_00);
  *(CTerminateSig **)(this + 0x3c) = this_00;
  CSignal::attachApp(*(CSignal **)(this + 0x3c),param_1);
  for (local_10 = 0; local_10 < 0x1a; local_10 = local_10 + 1) {
    *(undefined4 *)(this + local_10 * 4) = *(undefined4 *)(this + 0x3c);
  }
  this_01 = operator_new(8);
  CSegmentationFaultSig::CSegmentationFaultSig(this_01);
  *(CSegmentationFaultSig **)(this + 0x18) = this_01;
  CSignal::attachApp(*(CSignal **)(this + 0x18),param_1);
  *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x18);
  *(undefined4 *)(this + 8) = *(undefined4 *)(this + 0x18);
  this_02 = operator_new(8);
  CUser1Sig::CUser1Sig(this_02);
  *(CUser1Sig **)(this + 0x28) = this_02;
  CSignal::attachApp(*(CSignal **)(this + 0x28),param_1);
  this_03 = operator_new(8);
  CUser2Sig::CUser2Sig(this_03);
  *(CUser2Sig **)(this + 0x30) = this_03;
  CSignal::attachApp(*(CSignal **)(this + 0x30),param_1);
  this_04 = operator_new(8);
  CSystemFailSig::_ZN14CSystemFailSigC2Ev(this_04);
  *(CSystemFailSig **)(this + 0x10) = this_04;
  CSignal::attachApp(*(CSignal **)(this + 0x10),param_1);
  *(undefined4 *)(this + 0x1c) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x5c) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x40) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 100) = *(undefined4 *)(this + 0x10);
  *(undefined4 *)(this + 0x7c) = *(undefined4 *)(this + 0x10);
  return;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Statics/DNFSignalTranslator.cpp](source/DNFServer/GameServer/Statics/DNFSignalTranslator.cpp)（约第 131 行）：

```cpp
int CSignalTranslator::init_handler(CApplication* app)
{
    m_handlers[0x3c / 4] = new CTerminateSig;
    m_handlers[0x3c / 4]->attachApp(app);
    for (int i = 0; i < 0x1a; i++)
    {
        m_handlers[i] = m_handlers[0x3c / 4];
    }
    m_handlers[0x18 / 4] = new CSegmentationFaultSig;
    m_handlers[0x18 / 4]->attachApp(app);
    m_handlers[0x2c / 4] = m_handlers[0x18 / 4];
    m_handlers[0x20 / 4] = m_handlers[0x18 / 4];
    m_handlers[2] = m_handlers[0x18 / 4];
    m_handlers[0x28 / 4] = new CUser1Sig;
    m_handlers[0x28 / 4]->attachApp(app);
    m_handlers[0x30 / 4] = new CUser2Sig;
    m_handlers[0x30 / 4]->attachApp(app);
    m_handlers[0x10 / 4] = new CSystemFailSig;
    m_handlers[0x10 / 4]->attachApp(app);
    m_handlers[0x1c / 4] = m_handlers[0x10 / 4];
    m_handlers[0x5c / 4] = m_handlers[0x10 / 4];
    m_handlers[0x40 / 4] = m_handlers[0x10 / 4];
    m_handlers[0x60 / 4] = m_handlers[0x10 / 4];
    m_handlers[100 / 4] = m_handlers[0x10 / 4];
    m_handlers[0x7c / 4] = m_handlers[0x10 / 4];
    return 0;
}
```
