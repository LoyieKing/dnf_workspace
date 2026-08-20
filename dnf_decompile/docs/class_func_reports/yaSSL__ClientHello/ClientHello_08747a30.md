# ClientHello

`_ZN5yaSSL11ClientHelloC1Ev`

`yaSSL::ClientHello::ClientHello()`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientHello` | `0x08747a30` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747a30  _ZN5yaSSL11ClientHelloC1Ev
#           yaSSL::ClientHello::ClientHello()
# range [0x08747a30, 0x08747a9a]
08747a30 +0x00:  push   %ebp
08747a31 +0x01:  mov    %esp,%ebp
08747a33 +0x03:  sub    $0x18,%esp
08747a36 +0x06:  mov    %ebx,-0x8(%ebp)
08747a39 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08747a3e +0x0e:  add    $0xc2515a,%ebx
08747a44 +0x14:  mov    %esi,-0x4(%ebp)
08747a47 +0x17:  mov    0x8(%ebp),%esi
08747a4a +0x1a:  mov    -0x2c0(%ebx),%eax
08747a50 +0x20:  add    $0x8,%eax
08747a53 +0x23:  mov    %eax,(%esi)
08747a55 +0x25:  lea    0x8(%esi),%eax
08747a58 +0x28:  mov    %eax,(%esp)
08747a5b +0x2b:  movl   $0x0,0x8(%esp)
08747a63 +0x33:  movl   $0x3,0x4(%esp)
08747a6b +0x3b:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
08747a70 +0x40:  xor    %eax,%eax
08747a72 +0x42:  movw   $0x0,0xa(%esi)
08747a78 +0x48:  add    $0xc,%esi
08747a7b +0x4b:  movl   $0x0,(%esi,%eax,1)
08747a82 +0x52:  add    $0x4,%eax
08747a85 +0x55:  cmp    $0x1c,%eax
08747a88 +0x58:  jb     08747a7b <+0x4b>
08747a8a +0x5a:  movw   $0x0,(%esi,%eax,1)
08747a90 +0x60:  mov    -0x8(%ebp),%ebx
08747a93 +0x63:  mov    -0x4(%ebp),%esi
08747a96 +0x66:  mov    %ebp,%esp
08747a98 +0x68:  pop    %ebp
08747a99 +0x69:  ret
08747a9a +0x6a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ClientHello::ClientHello @ 0x8747a30

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ClientHello::ClientHello() */

void __thiscall yaSSL::ClientHello::ClientHello(ClientHello *this)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined **)this = PTR_vtable_0936c8d8 + 8;
  ProtocolVersion::ProtocolVersion((ProtocolVersion *)(this + 8),'\x03','\0');
  *(undefined2 *)(this + 10) = 0;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    *(undefined4 *)(this + uVar2 + 0xc) = 0;
    uVar1 = uVar2 + 4;
  } while (uVar2 + 4 < 0x1c);
  *(undefined2 *)(this + uVar2 + 0x10) = 0;
  return;
}
```
