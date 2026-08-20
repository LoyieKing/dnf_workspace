# Init

`_ZN15CmmChannelProxy4InitEv`

`CmmChannelProxy::Init()`

| 类 | 地址 |
|---|---|
| `CmmChannelProxy` | `0x0810614a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810614a  _ZN15CmmChannelProxy4InitEv
#           CmmChannelProxy::Init()
# range [0x0810614a, 0x0810619d]
0810614a +0x00:  push   %ebp
0810614b +0x01:  mov    %esp,%ebp
0810614d +0x03:  sub    $0x18,%esp
08106150 +0x06:  mov    0x8(%ebp),%eax
08106153 +0x09:  add    $0x10,%eax
08106156 +0x0c:  mov    %eax,(%esp)
08106159 +0x0f:  call   0848369a <_ZN11CUdpHandler16InitClientSocketEv>  ; CUdpHandler::InitClientSocket()
0810615e +0x14:  cmp    $0xffffffff,%eax
08106161 +0x17:  sete   %al
08106164 +0x1a:  test   %al,%al
08106166 +0x1c:  je     0810616f <+0x25>
08106168 +0x1e:  mov    $0x0,%eax
0810616d +0x23:  jmp    0810619c <+0x52>
0810616f +0x25:  mov    0x8(%ebp),%eax
08106172 +0x28:  movl   $0x0,0x1c(%eax)
08106179 +0x2f:  mov    0x8(%ebp),%eax
0810617c +0x32:  add    $0x20,%eax
0810617f +0x35:  movl   $0x80000,0x8(%esp)
08106187 +0x3d:  movl   $0x0,0x4(%esp)
0810618f +0x45:  mov    %eax,(%esp)
08106192 +0x48:  call   0807dcc0 <_init+0x5b8>
08106197 +0x4d:  mov    $0x1,%eax
0810619c +0x52:  leave
0810619d +0x53:  ret
```

## 反编译 C

```c
// CmmChannelProxy::Init @ 0x810614a

/* CmmChannelProxy::Init() */

bool __thiscall CmmChannelProxy::Init(CmmChannelProxy *this)

{
  int iVar1;
  
  iVar1 = CUdpHandler::InitClientSocket((CUdpHandler *)(this + 0x10));
  if (iVar1 != -1) {
    *(undefined4 *)(this + 0x1c) = 0;
    memset(this + 0x20,0,0x80000);
  }
  return iVar1 != -1;
}
```
