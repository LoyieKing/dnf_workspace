# ClientHello

`_ZN5yaSSL11ClientHelloC1ENS_15ProtocolVersionEb`

`yaSSL::ClientHello::ClientHello(yaSSL::ProtocolVersion, bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::ClientHello` | `0x087479d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 087479d0  _ZN5yaSSL11ClientHelloC1ENS_15ProtocolVersionEb
#           yaSSL::ClientHello::ClientHello(yaSSL::ProtocolVersion, bool)
# range [0x087479d0, 0x08747a2a]
087479d0 +0x00:  call   087245c4 <__i686.get_pc_thunk.cx>
087479d5 +0x05:  add    $0xc251c3,%ecx
087479db +0x0b:  push   %ebp
087479dc +0x0c:  mov    %esp,%ebp
087479de +0x0e:  mov    0x8(%ebp),%eax
087479e1 +0x11:  mov    -0x2c0(%ecx),%edx
087479e7 +0x17:  add    $0x8,%edx
087479ea +0x1a:  mov    %edx,(%eax)
087479ec +0x1c:  movzwl 0xc(%ebp),%edx
087479f0 +0x20:  cmpb   $0x1,0x10(%ebp)
087479f4 +0x24:  movw   $0x0,0xa(%eax)
087479fa +0x2a:  mov    %dx,0x8(%eax)
087479fe +0x2e:  sbb    %edx,%edx
08747a00 +0x30:  not    %edx
08747a02 +0x32:  and    $0xdd,%edx
08747a08 +0x38:  mov    %edx,0xd0(%eax)
08747a0e +0x3e:  add    $0xc,%eax
08747a11 +0x41:  xor    %edx,%edx
08747a13 +0x43:  movl   $0x0,(%eax,%edx,1)
08747a1a +0x4a:  add    $0x4,%edx
08747a1d +0x4d:  cmp    $0x1c,%edx
08747a20 +0x50:  jb     08747a13 <+0x43>
08747a22 +0x52:  movw   $0x0,(%eax,%edx,1)
08747a28 +0x58:  pop    %ebp
08747a29 +0x59:  ret
08747a2a +0x5a:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// yaSSL::ClientHello::ClientHello @ 0x87479d0

/* WARNING: Function: __i686.get_pc_thunk.cx replaced with injection: get_pc_thunk_cx */
/* yaSSL::ClientHello::ClientHello(yaSSL::ProtocolVersion, bool) */

void __thiscall yaSSL::ClientHello::ClientHello(ClientHello *this,undefined2 param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined **)this = PTR_vtable_0936c8d8 + 8;
  *(undefined2 *)(this + 10) = 0;
  *(undefined2 *)(this + 8) = param_2;
  *(uint *)(this + 0xd0) = ~-(uint)(param_3 == '\0') & 0xdd;
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
