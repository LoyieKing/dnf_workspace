# _ZN15TGlobalInstanceI23TextOutputDevice_stdoutE6createEv

`TGlobalInstance<TextOutputDevice_stdout>::create()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| bridge | DIFF | `0x80574b8` | `0x93` | `0x80581ee` | `0xad` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,48 +1,51 @@
 push   %ebp
 mov    %esp,%ebp
 push   %esi
 push   %ebx
 sub    $0x10,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN15TGlobalInstanceI23TextOutputDevice_stdoutE6createEv+0x8b>
+jne    <T> <_ZN15TGlobalInstanceI23TextOutputDevice_stdoutE6createEv+0xa6>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN15TGlobalInstanceI23TextOutputDevice_stdoutE6createEv+0x8c>
+jne    <T> <_ZN15TGlobalInstanceI23TextOutputDevice_stdoutE6createEv+0xa6>
 movl   $0x1902c,(%esp)
 call   <T> <_Znwj>
-mov    %eax,%esi
-mov    %esi,%ebx
+mov    %eax,%ebx
+movl   $0x1902c,0x8(%esp)
+movl   $0x0,0x4(%esp)
+mov    %ebx,(%esp)
+call   <T> <memset>
 mov    %ebx,%eax
-mov    $0x1902c,%edx
-mov    %edx,0x8(%esp)
-movl   $0x0,0x4(%esp)
+mov    %eax,0x4(%esp)
+movl   $0x1902c,(%esp)
+call   <T> <_ZnwjPv>
+mov    %eax,%edx
+test   %edx,%edx
+je     <T> <_ZN15TGlobalInstanceI23TextOutputDevice_stdoutE6createEv+0x68>
 mov    %eax,(%esp)
-call   <T> <memset>
-mov    %ebx,(%esp)
 call   <T> <_ZN23TextOutputDevice_stdoutC1Ev>
-mov    %esi,%edx
+mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,(%eax)
-jmp    <T> <_ZN15TGlobalInstanceI23TextOutputDevice_stdoutE6createEv+0x8c>
+jmp    <T> <_ZN15TGlobalInstanceI23TextOutputDevice_stdoutE6createEv+0xa6>
 mov    %eax,(%esp)
 call   <T> <__cxa_begin_catch>
 movl   $"cannot allocate memory in TGlobalInstance.! cannot continue",(%esp)
 call   <T> <printf>
 movl   $0xffffffff,(%esp)
 call   <T> <exit>
 mov    %edx,%ebx
 mov    %eax,%esi
 call   <T> <__cxa_end_catch>
 mov    %esi,%eax
 mov    %ebx,%edx
 mov    %eax,(%esp)
 call   <T> <_Unwind_Resume>
-nop
 add    $0x10,%esp
 pop    %ebx
 pop    %esi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void create(TGlobalInstance<TextOutputDevice_stdout> * this) */

void __thiscall
TGlobalInstance<TextOutputDevice_stdout>::_ZN15TGlobalInstanceI23TextOutputDevice_stdoutE6createEv
          (TGlobalInstance<TextOutputDevice_stdout> *this)

{
  TextOutputDevice_stdout *this_00;
  
  if ((this->m_p == (TextOutputDevice_stdout *)0x0) && (this->m_p == (TextOutputDevice_stdout *)0x0)
     ) {
                    /* try { // try from 080574d9 to 080574dd has its CatchHandler @ 0805750e */
    this_00 = operator_new(0x1902c);
    memset(this_00,0,0x1902c);
    TextOutputDevice_stdout::TextOutputDevice_stdout(this_00);
    this->m_p = this_00;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/ChannelService.cpp](source/ChannelOld/DNFChannelBridge/ChannelService.cpp)（约第 312 行）：

```cpp
void TGlobalInstance<TextOutputDevice_stdout>::create()
{
    if (m_p == 0 && m_p == 0)
    {
        try
        {
            register void* pvMem = operator new(sizeof(TextOutputDevice_stdout));
            memset(pvMem, 0, sizeof(TextOutputDevice_stdout));
            new (pvMem) TextOutputDevice_stdout();
            m_p = (TextOutputDevice_stdout*)pvMem;
        }
        catch (...)
        {
            printf("cannot allocate memory in TGlobalInstance.! cannot continue");
            exit(-1);
        }
    }
}
```
