# ServerHello

`_ZN5yaSSL11ServerHelloC1ENS_15ProtocolVersionEb`

`yaSSL::ServerHello::ServerHello(yaSSL::ProtocolVersion, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::ServerHello` | `0x08747ae0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08747ae0  _ZN5yaSSL11ServerHelloC1ENS_15ProtocolVersionEb
#           yaSSL::ServerHello::ServerHello(yaSSL::ProtocolVersion, bool)
# range [0x08747ae0, 0x08747b5c]
08747ae0 +0x00:  push   %ebp
08747ae1 +0x01:  mov    %esp,%ebp
08747ae3 +0x03:  push   %ebx
08747ae4 +0x04:  mov    0x8(%ebp),%eax
08747ae7 +0x07:  call   08722df8 <__i686.get_pc_thunk.bx>
08747aec +0x0c:  add    $0xc250ac,%ebx
08747af2 +0x12:  lea    0xc(%eax),%ecx
08747af5 +0x15:  mov    -0x5ac(%ebx),%edx
08747afb +0x1b:  add    $0x8,%edx
08747afe +0x1e:  mov    %edx,(%eax)
08747b00 +0x20:  movzwl 0xc(%ebp),%edx
08747b04 +0x24:  cmpb   $0x1,0x10(%ebp)
08747b08 +0x28:  movw   $0x0,0xa(%eax)
08747b0e +0x2e:  mov    %dx,0x8(%eax)
08747b12 +0x32:  sbb    %edx,%edx
08747b14 +0x34:  not    %edx
08747b16 +0x36:  and    $0xdd,%edx
08747b1c +0x3c:  mov    %edx,0x50(%eax)
08747b1f +0x3f:  xor    %edx,%edx
08747b21 +0x41:  movl   $0x0,(%ecx,%edx,1)
08747b28 +0x48:  add    $0x4,%edx
08747b2b +0x4b:  cmp    $0x1c,%edx
08747b2e +0x4e:  jb     08747b21 <+0x41>
08747b30 +0x50:  movw   $0x0,(%ecx,%edx,1)
08747b36 +0x56:  xor    %edx,%edx
08747b38 +0x58:  movb   $0x0,0x2b(%eax)
08747b3c +0x5c:  add    $0x2c,%eax
08747b3f +0x5f:  movl   $0x0,(%eax,%edx,1)
08747b46 +0x66:  add    $0x4,%edx
08747b49 +0x69:  cmp    $0x1c,%edx
08747b4c +0x6c:  jb     08747b3f <+0x5f>
08747b4e +0x6e:  add    %edx,%eax
08747b50 +0x70:  movw   $0x0,(%eax)
08747b55 +0x75:  movb   $0x0,0x2(%eax)
08747b59 +0x79:  pop    %ebx
08747b5a +0x7a:  pop    %ebp
08747b5b +0x7b:  ret
08747b5c +0x7c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::ServerHello::ServerHello @ 0x8747ae0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::ServerHello::ServerHello(yaSSL::ProtocolVersion, bool) */

void __thiscall yaSSL::ServerHello::ServerHello(ServerHello *this,undefined2 param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined **)this = PTR_vtable_0936c5ec + 8;
  *(undefined2 *)(this + 10) = 0;
  *(undefined2 *)(this + 8) = param_2;
  *(uint *)(this + 0x50) = ~-(uint)(param_3 == '\0') & 0xdd;
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
