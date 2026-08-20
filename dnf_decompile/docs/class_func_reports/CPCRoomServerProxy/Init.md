# Init

`_ZN18CPCRoomServerProxy4InitEv`

`CPCRoomServerProxy::Init()`

| 类 | 地址 |
|---|---|
| `CPCRoomServerProxy` | `0x084718bc` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 084718bc  _ZN18CPCRoomServerProxy4InitEv
#           CPCRoomServerProxy::Init()
# range [0x084718bc, 0x084718e1]
084718bc +0x00:  push   %ebp
084718bd +0x01:  mov    %esp,%ebp
084718bf +0x03:  sub    $0x18,%esp
084718c2 +0x06:  mov    0x8(%ebp),%eax
084718c5 +0x09:  mov    %eax,(%esp)
084718c8 +0x0c:  call   084718e2 <_ZN18CPCRoomServerProxy7InitTcpEv>  ; CPCRoomServerProxy::InitTcp()
084718cd +0x11:  xor    $0x1,%eax
084718d0 +0x14:  test   %al,%al
084718d2 +0x16:  je     084718db <+0x1f>
084718d4 +0x18:  mov    $0x0,%eax
084718d9 +0x1d:  jmp    084718e0 <+0x24>
084718db +0x1f:  mov    $0x1,%eax
084718e0 +0x24:  leave
084718e1 +0x25:  ret
```

## 反编译 C

```c
// CPCRoomServerProxy::Init @ 0x84718bc

/* CPCRoomServerProxy::Init() */

bool __thiscall CPCRoomServerProxy::Init(CPCRoomServerProxy *this)

{
  char cVar1;
  
  cVar1 = InitTcp(this);
  return cVar1 == '\x01';
}
```
