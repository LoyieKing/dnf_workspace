# _ZN23TextOutputDevice_stdoutC2Ev

`TextOutputDevice_stdout::TextOutputDevice_stdout()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| channel | NEAR | `0x8052766` | `0x1c` | `0x8062c9e` | `0x1c` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,10 +1,10 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x18,%esp
+sub    $0x4,%esp
 mov    0x8(%ebp),%eax
 mov    %eax,(%esp)
 call   <T> <_ZN17ITextOutputDeviceC1Ev>
 mov    0x8(%ebp),%eax
 movl   $&_ZTV23TextOutputDevice_stdout+0x8,(%eax)
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* DWARF original prototype: void TextOutputDevice_stdout(TextOutputDevice_stdout * this) */

void __thiscall
TextOutputDevice_stdout::_ZN23TextOutputDevice_stdoutC2Ev(TextOutputDevice_stdout *this)

{
  ITextOutputDevice::_ZN17ITextOutputDeviceC2Ev(&this->super_ITextOutputDevice);
  (this->super_ITextOutputDevice)._vptr_ITextOutputDevice =
       (_func_int_varargs **)&PTR__ZN23TextOutputDevice_stdout9serializeEPc_0806d880;
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
