# _ZN9TCPSocket19setOptResizeSendBufEi

`TCPSocket::setOptResizeSendBuf(int)`

| 服务 | 状态 | ORIG 地址 | ORIG 大小 | 重建地址 | 重建大小 |
|---|---|---|---|---|---|
| guild | DIFF | `0x804fec8` | `0x65` | `0x8086ffe` | `0x47` |

## 1. 汇编 diff（完整函数，伪代码化）

归一化口径：直接跳转/调用目标地址归一化为 `<T>`；字符串/全局变量地址替换为其内容或 `&符号名`（地址不同但指向相同内容视为等价，2026-08-11 用户口径）。

```diff
--- ORIG（伪代码化）
+++ OURS（伪代码化）
@@ -1,27 +1,21 @@
 push   %ebp
 mov    %esp,%ebp
-sub    $0x38,%esp
+sub    $0x28,%esp
 mov    0xc(%ebp),%eax
 test   %eax,%eax
 jg     <T> <_ZN9TCPSocket19setOptResizeSendBufEi+0x14>
 mov    $0x0,%eax
-jmp    <T> <_ZN9TCPSocket19setOptResizeSendBufEi+0x63>
-movl   $0x0,-0x10(%ebp)
-movl   $0x4,-0x14(%ebp)
+jmp    <T> <_ZN9TCPSocket19setOptResizeSendBufEi+0x45>
 mov    0x8(%ebp),%eax
 mov    (%eax),%eax
 movl   $0x4,0x10(%esp)
 lea    0xc(%ebp),%edx
 mov    %edx,0xc(%esp)
 movl   $0x7,0x8(%esp)
 movl   $0x1,0x4(%esp)
 mov    %eax,(%esp)
 call   <T> <setsockopt>
-mov    %eax,-0xc(%ebp)
-cmpl   $0x0,-0xc(%ebp)
-jns    <T> <_ZN9TCPSocket19setOptResizeSendBufEi+0x5e>
-mov    $0x0,%eax
-jmp    <T> <_ZN9TCPSocket19setOptResizeSendBufEi+0x63>
-mov    $0x1,%eax
+not    %eax
+shr    $0x1f,%eax
 leave
 ret
```
## 2. Ghidra 反编译 C

```c

/* TCPSocket::setOptResizeSendBuf(int) */

undefined4 __thiscall TCPSocket::_ZN9TCPSocket19setOptResizeSendBufEi(TCPSocket *this,int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 < 1) {
    uVar1 = 0;
  }
  else {
    iVar2 = setsockopt(*(int *)this,1,7,&param_1,4);
    if (iVar2 < 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 1;
    }
  }
  return uVar1;
}
```

## 3. 我们的源码函数

定义于 [source/DNFServer/GameServer/Guild/DNFTcpSocket.cpp](source/DNFServer/GameServer/Guild/DNFTcpSocket.cpp)（约第 409 行）：

```cpp
int TCPSocket::setOptResizeSendBuf(int size)
{
    if (size < 1)
    {
        return 0;
    }
    return setsockopt(m_sock, 1, 7, &size, 4) < 0 ? 0 : 1;
}
```
