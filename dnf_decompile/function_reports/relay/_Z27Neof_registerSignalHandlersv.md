# _Z27Neof_registerSignalHandlersv

`Neof_registerSignalHandlers()`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| relay | DIFF | `0x804c318` | `0x20a` | `0x8057c8e` | `0x227` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,123 +1,124 @@
 push   %ebp
 mov    %esp,%ebp
 sub    $0x28,%esp
-movb   $0x0,-0x9(%ebp)
+movb   $0x0,-0x1(%ebp)
 movl   $&_Z18Neof_SignalHandleri,0x4(%esp)
 movl   $0xf,(%esp)
 call   <T> <_Z26Neof_registerSignalHandleriPFviE>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z27Neof_registerSignalHandlersv+0x2f>
-mov    $0x0,%eax
-jmp    <T> <_Z27Neof_registerSignalHandlersv+0x208>
+je     <T> <_Z27Neof_registerSignalHandlersv+0x31>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_Z27Neof_registerSignalHandlersv+0x222>
 movl   $&_Z18Neof_SignalHandleri,0x4(%esp)
 movl   $0xa,(%esp)
 call   <T> <_Z26Neof_registerSignalHandleriPFviE>
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z27Neof_registerSignalHandlersv+0x54>
-mov    $0x0,%eax
-jmp    <T> <_Z27Neof_registerSignalHandlersv+0x208>
+je     <T> <_Z27Neof_registerSignalHandlersv+0x58>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_Z27Neof_registerSignalHandlersv+0x222>
 movl   $0x1,0x4(%esp)
 movl   $0xd,(%esp)
 call   <T> <_Z26Neof_registerSignalHandleriPFviE>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
+mov    %al,-0x1(%ebp)
+movzbl -0x1(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z27Neof_registerSignalHandlersv+0x80>
-mov    $0x0,%eax
-jmp    <T> <_Z27Neof_registerSignalHandlersv+0x208>
+je     <T> <_Z27Neof_registerSignalHandlersv+0x86>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_Z27Neof_registerSignalHandlersv+0x222>
 movl   $&_Z18Neof_SignalHandleri,0x4(%esp)
 movl   $0xb,(%esp)
 call   <T> <_Z26Neof_registerSignalHandleriPFviE>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
+mov    %al,-0x1(%ebp)
+movzbl -0x1(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z27Neof_registerSignalHandlersv+0xac>
-mov    $0x0,%eax
-jmp    <T> <_Z27Neof_registerSignalHandlersv+0x208>
+je     <T> <_Z27Neof_registerSignalHandlersv+0xb4>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_Z27Neof_registerSignalHandlersv+0x222>
 movl   $&_Z18Neof_SignalHandleri,0x4(%esp)
 movl   $0x8,(%esp)
 call   <T> <_Z26Neof_registerSignalHandleriPFviE>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
+mov    %al,-0x1(%ebp)
+movzbl -0x1(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z27Neof_registerSignalHandlersv+0xd8>
-mov    $0x0,%eax
-jmp    <T> <_Z27Neof_registerSignalHandlersv+0x208>
+je     <T> <_Z27Neof_registerSignalHandlersv+0xe2>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_Z27Neof_registerSignalHandlersv+0x222>
 movl   $&_Z18Neof_SignalHandleri,0x4(%esp)
 movl   $0x4,(%esp)
 call   <T> <_Z26Neof_registerSignalHandleriPFviE>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
+mov    %al,-0x1(%ebp)
+movzbl -0x1(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z27Neof_registerSignalHandlersv+0x104>
-mov    $0x0,%eax
-jmp    <T> <_Z27Neof_registerSignalHandlersv+0x208>
+je     <T> <_Z27Neof_registerSignalHandlersv+0x110>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_Z27Neof_registerSignalHandlersv+0x222>
 movl   $&_Z18Neof_SignalHandleri,0x4(%esp)
 movl   $0x7,(%esp)
 call   <T> <_Z26Neof_registerSignalHandleriPFviE>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
+mov    %al,-0x1(%ebp)
+movzbl -0x1(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z27Neof_registerSignalHandlersv+0x130>
-mov    $0x0,%eax
-jmp    <T> <_Z27Neof_registerSignalHandlersv+0x208>
+je     <T> <_Z27Neof_registerSignalHandlersv+0x13e>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_Z27Neof_registerSignalHandlersv+0x222>
 movl   $&_Z18Neof_SignalHandleri,0x4(%esp)
 movl   $0x10,(%esp)
 call   <T> <_Z26Neof_registerSignalHandleriPFviE>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
+mov    %al,-0x1(%ebp)
+movzbl -0x1(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z27Neof_registerSignalHandlersv+0x15c>
-mov    $0x0,%eax
-jmp    <T> <_Z27Neof_registerSignalHandlersv+0x208>
+je     <T> <_Z27Neof_registerSignalHandlersv+0x16c>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_Z27Neof_registerSignalHandlersv+0x222>
 movl   $&_Z18Neof_SignalHandleri,0x4(%esp)
 movl   $0x17,(%esp)
 call   <T> <_Z26Neof_registerSignalHandleriPFviE>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
+mov    %al,-0x1(%ebp)
+movzbl -0x1(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z27Neof_registerSignalHandlersv+0x188>
-mov    $0x0,%eax
-jmp    <T> <_Z27Neof_registerSignalHandlersv+0x208>
+je     <T> <_Z27Neof_registerSignalHandlersv+0x19a>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_Z27Neof_registerSignalHandlersv+0x222>
 movl   $&_Z18Neof_SignalHandleri,0x4(%esp)
 movl   $0x18,(%esp)
 call   <T> <_Z26Neof_registerSignalHandleriPFviE>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
+mov    %al,-0x1(%ebp)
+movzbl -0x1(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z27Neof_registerSignalHandlersv+0x1b1>
-mov    $0x0,%eax
-jmp    <T> <_Z27Neof_registerSignalHandlersv+0x208>
+je     <T> <_Z27Neof_registerSignalHandlersv+0x1c5>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_Z27Neof_registerSignalHandlersv+0x222>
 movl   $&_Z18Neof_SignalHandleri,0x4(%esp)
 movl   $0x19,(%esp)
 call   <T> <_Z26Neof_registerSignalHandleriPFviE>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
+mov    %al,-0x1(%ebp)
+movzbl -0x1(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z27Neof_registerSignalHandlersv+0x1da>
-mov    $0x0,%eax
-jmp    <T> <_Z27Neof_registerSignalHandlersv+0x208>
+je     <T> <_Z27Neof_registerSignalHandlersv+0x1f0>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_Z27Neof_registerSignalHandlersv+0x222>
 movl   $&_Z18Neof_SignalHandleri,0x4(%esp)
 movl   $0x1f,(%esp)
 call   <T> <_Z26Neof_registerSignalHandleriPFviE>
-mov    %al,-0x9(%ebp)
-movzbl -0x9(%ebp),%eax
+mov    %al,-0x1(%ebp)
+movzbl -0x1(%ebp),%eax
 xor    $0x1,%eax
 test   %al,%al
-je     <T> <_Z27Neof_registerSignalHandlersv+0x203>
-mov    $0x0,%eax
-jmp    <T> <_Z27Neof_registerSignalHandlersv+0x208>
-mov    $0x1,%eax
+je     <T> <_Z27Neof_registerSignalHandlersv+0x21b>
+movl   $0x0,-0x14(%ebp)
+jmp    <T> <_Z27Neof_registerSignalHandlersv+0x222>
+movl   $0x1,-0x14(%ebp)
+mov    -0x14(%ebp),%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Neof_registerSignalHandlers() */

undefined4 Neof_registerSignalHandlers(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = Neof_registerSignalHandler(0xf,Neof_SignalHandler);
  if (cVar1 == '\x01') {
    cVar1 = Neof_registerSignalHandler(10,Neof_SignalHandler);
    if (cVar1 == '\x01') {
      cVar1 = Neof_registerSignalHandler(0xd,(_func_void_int *)0x1);
      if (cVar1 == '\x01') {
        cVar1 = Neof_registerSignalHandler(0xb,Neof_SignalHandler);
        if (cVar1 == '\x01') {
          cVar1 = Neof_registerSignalHandler(8,Neof_SignalHandler);
          if (cVar1 == '\x01') {
            cVar1 = Neof_registerSignalHandler(4,Neof_SignalHandler);
            if (cVar1 == '\x01') {
              cVar1 = Neof_registerSignalHandler(7,Neof_SignalHandler);
              if (cVar1 == '\x01') {
                cVar1 = Neof_registerSignalHandler(0x10,Neof_SignalHandler);
                if (cVar1 == '\x01') {
                  cVar1 = Neof_registerSignalHandler(0x17,Neof_SignalHandler);
                  if (cVar1 == '\x01') {
                    cVar1 = Neof_registerSignalHandler(0x18,Neof_SignalHandler);
                    if (cVar1 == '\x01') {
                      cVar1 = Neof_registerSignalHandler(0x19,Neof_SignalHandler);
                      if (cVar1 == '\x01') {
                        cVar1 = Neof_registerSignalHandler(0x1f,Neof_SignalHandler);
                        if (cVar1 == '\x01') {
                          uVar2 = 1;
                        }
                        else {
                          uVar2 = 0;
                        }
                      }
                      else {
                        uVar2 = 0;
                      }
                    }
                    else {
                      uVar2 = 0;
                    }
                  }
                  else {
                    uVar2 = 0;
                  }
                }
                else {
                  uVar2 = 0;
                }
              }
              else {
                uVar2 = 0;
              }
            }
            else {
              uVar2 = 0;
            }
          }
          else {
            uVar2 = 0;
          }
        }
        else {
          uVar2 = 0;
        }
      }
      else {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Relay/SignalHandler.cpp](source/DNFServer/GameServer/Relay/SignalHandler.cpp)（约第 95 行）：

```cpp
bool Neof_registerSignalHandlers()
{
    bool ret = false;
    if (!Neof_registerSignalHandler(0xf, Neof_SignalHandler)) return false;
    if (!Neof_registerSignalHandler(10, Neof_SignalHandler)) return false;
    ret = Neof_registerSignalHandler(0xd, (void (*)(int))1);
    if (!ret) return false;
    ret = Neof_registerSignalHandler(0xb, Neof_SignalHandler);
    if (!ret) return false;
    ret = Neof_registerSignalHandler(8, Neof_SignalHandler);
    if (!ret) return false;
    ret = Neof_registerSignalHandler(4, Neof_SignalHandler);
    if (!ret) return false;
    ret = Neof_registerSignalHandler(7, Neof_SignalHandler);
    if (!ret) return false;
    ret = Neof_registerSignalHandler(0x10, Neof_SignalHandler);
    if (!ret) return false;
    ret = Neof_registerSignalHandler(0x17, Neof_SignalHandler);
    if (!ret) return false;
    ret = Neof_registerSignalHandler(0x18, Neof_SignalHandler);
    if (!ret) return false;
    ret = Neof_registerSignalHandler(0x19, Neof_SignalHandler);
    if (!ret) return false;
    ret = Neof_registerSignalHandler(0x1f, Neof_SignalHandler);
    if (!ret) return false;
    return true;
}
```
