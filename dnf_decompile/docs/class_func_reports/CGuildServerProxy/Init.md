# Init

`_ZN17CGuildServerProxy4InitEv`

`CGuildServerProxy::Init()`

| 类 | 地址 |
|---|---|
| `CGuildServerProxy` | `0x0846d8c2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0846d8c2  _ZN17CGuildServerProxy4InitEv
#           CGuildServerProxy::Init()
# range [0x0846d8c2, 0x0846d911]
0846d8c2 +0x00:  push   %ebp
0846d8c3 +0x01:  mov    %esp,%ebp
0846d8c5 +0x03:  sub    $0x18,%esp
0846d8c8 +0x06:  mov    0x8(%ebp),%eax
0846d8cb +0x09:  mov    0x4(%eax),%eax
0846d8ce +0x0c:  test   %eax,%eax
0846d8d0 +0x0e:  jne    0846d8d9 <+0x17>
0846d8d2 +0x10:  mov    $0x1,%eax
0846d8d7 +0x15:  jmp    0846d910 <+0x4e>
0846d8d9 +0x17:  mov    0x8(%ebp),%eax
0846d8dc +0x1a:  mov    %eax,(%esp)
0846d8df +0x1d:  call   0846d912 <_ZN17CGuildServerProxy7InitUdpEv>  ; CGuildServerProxy::InitUdp()
0846d8e4 +0x22:  xor    $0x1,%eax
0846d8e7 +0x25:  test   %al,%al
0846d8e9 +0x27:  je     0846d8f2 <+0x30>
0846d8eb +0x29:  mov    $0x0,%eax
0846d8f0 +0x2e:  jmp    0846d910 <+0x4e>
0846d8f2 +0x30:  mov    0x8(%ebp),%eax
0846d8f5 +0x33:  mov    %eax,(%esp)
0846d8f8 +0x36:  call   0846d96c <_ZN17CGuildServerProxy7InitTcpEv>  ; CGuildServerProxy::InitTcp()
0846d8fd +0x3b:  xor    $0x1,%eax
0846d900 +0x3e:  test   %al,%al
0846d902 +0x40:  je     0846d90b <+0x49>
0846d904 +0x42:  mov    $0x0,%eax
0846d909 +0x47:  jmp    0846d910 <+0x4e>
0846d90b +0x49:  mov    $0x1,%eax
0846d910 +0x4e:  leave
0846d911 +0x4f:  ret
```

## 反编译 C

```c
// CGuildServerProxy::Init @ 0x846d8c2

/* CGuildServerProxy::Init() */

undefined4 __thiscall CGuildServerProxy::Init(CGuildServerProxy *this)

{
  char cVar1;
  undefined4 uVar2;
  
  if (*(int *)(this + 4) == 0) {
    uVar2 = 1;
  }
  else {
    cVar1 = InitUdp(this);
    if (cVar1 == '\x01') {
      cVar1 = InitTcp(this);
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
  return uVar2;
}
```
