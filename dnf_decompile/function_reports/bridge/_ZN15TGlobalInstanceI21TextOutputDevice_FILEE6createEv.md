# _ZN15TGlobalInstanceI21TextOutputDevice_FILEE6createEv

`TGlobalInstance<TextOutputDevice_FILE>::create()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| bridge | DIFF | `0x80573ec` | `0x8e` | `0x805829c` | `0x8d` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,52 +1,51 @@
 push   %ebp
 mov    %esp,%ebp
 push   %edi
 push   %esi
 push   %ebx
 sub    $0x1c,%esp
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
 jne    <T> <_ZN15TGlobalInstanceI21TextOutputDevice_FILEE6createEv+0x85>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 test   %eax,%eax
-jne    <T> <_ZN15TGlobalInstanceI21TextOutputDevice_FILEE6createEv+0x86>
+jne    <T> <_ZN15TGlobalInstanceI21TextOutputDevice_FILEE6createEv+0x85>
 movl   $0x193e0,(%esp)
 call   <T> <_Znwj>
 mov    %eax,%ebx
 mov    %ebx,%eax
 mov    %eax,(%esp)
 call   <T> <_ZN21TextOutputDevice_FILEC1Ev>
 jmp    <T> <_ZN15TGlobalInstanceI21TextOutputDevice_FILEE6createEv+0x47>
 mov    %edx,%esi
 mov    %eax,%edi
 mov    %ebx,(%esp)
 call   <T> <_ZdlPv>
 mov    %edi,%eax
 mov    %esi,%edx
 jmp    <T> <_ZN15TGlobalInstanceI21TextOutputDevice_FILEE6createEv+0x50>
 mov    %ebx,%edx
 mov    0x8(%ebp),%eax
 mov    %edx,(%eax)
-jmp    <T> <_ZN15TGlobalInstanceI21TextOutputDevice_FILEE6createEv+0x86>
+jmp    <T> <_ZN15TGlobalInstanceI21TextOutputDevice_FILEE6createEv+0x85>
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
 add    $0x1c,%esp
 pop    %ebx
 pop    %esi
 pop    %edi
 pop    %ebp
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void create(TGlobalInstance<TextOutputDevice_FILE> * this) */

void __thiscall
TGlobalInstance<TextOutputDevice_FILE>::_ZN15TGlobalInstanceI21TextOutputDevice_FILEE6createEv
          (TGlobalInstance<TextOutputDevice_FILE> *this)

{
  TextOutputDevice_FILE *this_00;
  
  if ((this->m_p == (TextOutputDevice_FILE *)0x0) && (this->m_p == (TextOutputDevice_FILE *)0x0)) {
                    /* try { // try from 0805740e to 08057412 has its CatchHandler @ 0805743c */
    this_00 = operator_new(0x193e0);
                    /* try { // try from 0805741a to 0805741e has its CatchHandler @ 08057421 */
    TextOutputDevice_FILE::TextOutputDevice_FILE(this_00);
    this->m_p = this_00;
  }
  return;
}
```

## 3. 我们的源码函数

定义于 [source/ChannelOld/DNFChannelBridge/ChannelService.cpp](source/ChannelOld/DNFChannelBridge/ChannelService.cpp)（约第 332 行）：

```cpp
void TGlobalInstance<TextOutputDevice_FILE>::create()
{
    if (m_p == 0 && m_p == 0)
    {
        try
        {
            m_p = new TextOutputDevice_FILE;
        }
        catch (...)
        {
            printf("cannot allocate memory in TGlobalInstance.! cannot continue");
            exit(-1);
        }
    }
}
```
