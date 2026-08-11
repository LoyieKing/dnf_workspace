# _Z22CPacketDecoderInstancev

`CPacketDecoderInstance()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| monitor | NEAR | `0x807c3c8` | `0x63` | `0x80685d6` | `0x63` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,25 +1,25 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x18,%esp
 mov    $&_ZGVZ22CPacketDecoderInstancevE8instance,%eax
 movzbl (%eax),%eax
 test   %al,%al
 jne    <T> <_Z22CPacketDecoderInstancev+0x5c>
 movl   $&_ZGVZ22CPacketDecoderInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_acquire>
 test   %eax,%eax
 setne  %al
 test   %al,%al
 je     <T> <_Z22CPacketDecoderInstancev+0x5c>
 movl   $&_ZZ22CPacketDecoderInstancevE8instance,(%esp)
 call   <T> <_ZN14CPacketDecoderC1Ev>
 movl   $&_ZGVZ22CPacketDecoderInstancevE8instance,(%esp)
 call   <T> <__cxa_guard_release>
 mov    $&_ZN14CPacketDecoderD2Ev,%eax
-movl   $&data#b8e3732b(.rodata),0x8(%esp)
+movl   $&data#0c4fb883(.data),0x8(%esp)
 movl   $&_ZZ22CPacketDecoderInstancevE8instance,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <__cxa_atexit>
 mov    $&_ZZ22CPacketDecoderInstancevE8instance,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CPacketDecoderInstance() */

undefined1 * CPacketDecoderInstance(void)

{
  int iVar1;
  
  if (CPacketDecoderInstance()::instance == '\0') {
    iVar1 = __cxa_guard_acquire(&CPacketDecoderInstance()::instance);
    if (iVar1 != 0) {
      CPacketDecoder::CPacketDecoder((CPacketDecoder *)CPacketDecoderInstance()::instance);
      __cxa_guard_release(&CPacketDecoderInstance()::instance);
      __cxa_atexit(CPacketDecoder::~CPacketDecoder,CPacketDecoderInstance()::instance,&__dso_handle)
      ;
    }
  }
  return CPacketDecoderInstance()::instance;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/COServer/DNFPacketDecoder.cpp](source/DNFServer/GameServer/COServer/DNFPacketDecoder.cpp)（约第 20 行）：

```cpp
CPacketDecoder* CPacketDecoderInstance()
{
    static CPacketDecoder instance;
    return &instance;
}
```
