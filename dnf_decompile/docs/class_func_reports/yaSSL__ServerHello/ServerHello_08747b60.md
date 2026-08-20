# ServerHello

`_ZN5yaSSL11ServerHelloC1Ev`

`yaSSL::ServerHello::ServerHello()`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerHello` | `0x08747b60` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747b60  _ZN5yaSSL11ServerHelloC1Ev
#           yaSSL::ServerHello::ServerHello()
# range [0x08747b60, 0x08747bed]
08747b60 +0x00:  push   %ebp
08747b61 +0x01:  mov    %esp,%ebp
08747b63 +0x03:  sub    $0x18,%esp
08747b66 +0x06:  mov    %ebx,-0x8(%ebp)
08747b69 +0x09:  call   08722df8 <__i686.get_pc_thunk.bx>
08747b6e +0x0e:  add    $0xc2502a,%ebx
08747b74 +0x14:  mov    %esi,-0x4(%ebp)
08747b77 +0x17:  mov    0x8(%ebp),%esi
08747b7a +0x1a:  mov    -0x5ac(%ebx),%eax
08747b80 +0x20:  add    $0x8,%eax
08747b83 +0x23:  mov    %eax,(%esi)
08747b85 +0x25:  lea    0x8(%esi),%eax
08747b88 +0x28:  mov    %eax,(%esp)
08747b8b +0x2b:  movl   $0x0,0x8(%esp)
08747b93 +0x33:  movl   $0x3,0x4(%esp)
08747b9b +0x3b:  call   08746950 <_ZN5yaSSL15ProtocolVersionC1Ehh>  ; yaSSL::ProtocolVersion::ProtocolVersion(unsigned char, unsigned char)
08747ba0 +0x40:  lea    0xc(%esi),%edx
08747ba3 +0x43:  xor    %eax,%eax
08747ba5 +0x45:  movw   $0x0,0xa(%esi)
08747bab +0x4b:  movl   $0x0,(%edx,%eax,1)
08747bb2 +0x52:  add    $0x4,%eax
08747bb5 +0x55:  cmp    $0x1c,%eax
08747bb8 +0x58:  jb     08747bab <+0x4b>
08747bba +0x5a:  movw   $0x0,(%edx,%eax,1)
08747bc0 +0x60:  xor    %eax,%eax
08747bc2 +0x62:  movb   $0x0,0x2b(%esi)
08747bc6 +0x66:  add    $0x2c,%esi
08747bc9 +0x69:  movl   $0x0,(%esi,%eax,1)
08747bd0 +0x70:  add    $0x4,%eax
08747bd3 +0x73:  cmp    $0x1c,%eax
08747bd6 +0x76:  jb     08747bc9 <+0x69>
08747bd8 +0x78:  add    %eax,%esi
08747bda +0x7a:  movw   $0x0,(%esi)
08747bdf +0x7f:  movb   $0x0,0x2(%esi)
08747be3 +0x83:  mov    -0x8(%ebp),%ebx
08747be6 +0x86:  mov    -0x4(%ebp),%esi
08747be9 +0x89:  mov    %ebp,%esp
08747beb +0x8b:  pop    %ebp
08747bec +0x8c:  ret
08747bed +0x8d:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ServerHello::ServerHello @ 0x8747b60

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHello::ServerHello() */

void __thiscall yaSSL::ServerHello::ServerHello(ServerHello *this)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined **)this = PTR_vtable_0936c5ec + 8;
  ProtocolVersion::ProtocolVersion((ProtocolVersion *)(this + 8),'\x03','\0');
  *(undefined2 *)(this + 10) = 0;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    *(undefined4 *)(this + uVar2 + 0xc) = 0;
    uVar1 = uVar2 + 4;
  } while (uVar2 + 4 < 0x1c);
  *(undefined2 *)(this + uVar2 + 0x10) = 0;
  this[0x2b] = (ServerHello)0x0;
  uVar1 = 0;
  do {
    uVar2 = uVar1;
    *(undefined4 *)(this + uVar2 + 0x2c) = 0;
    uVar1 = uVar2 + 4;
  } while (uVar2 + 4 < 0x1c);
  *(undefined2 *)(this + uVar2 + 0x30) = 0;
  (this + uVar2 + 0x30)[2] = (ServerHello)0x0;
  return;
}
```
