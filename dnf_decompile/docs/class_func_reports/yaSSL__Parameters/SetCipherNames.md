# SetCipherNames

`_ZN5yaSSL10Parameters14SetCipherNamesEv`

`yaSSL::Parameters::SetCipherNames()`

| 类 | 地址 |
|---|---|
| `yaSSL::Parameters` | `0x0874a1a0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874a1a0  _ZN5yaSSL10Parameters14SetCipherNamesEv
#           yaSSL::Parameters::SetCipherNames()
# range [0x0874a1a0, 0x0874a22e]
0874a1a0 +0x00:  push   %ebp
0874a1a1 +0x01:  mov    %esp,%ebp
0874a1a3 +0x03:  push   %edi
0874a1a4 +0x04:  push   %esi
0874a1a5 +0x05:  push   %ebx
0874a1a6 +0x06:  sub    $0x2c,%esp
0874a1a9 +0x09:  mov    0x8(%ebp),%edx
0874a1ac +0x0c:  call   08722df8 <__i686.get_pc_thunk.bx>
0874a1b1 +0x11:  add    $0xc229e7,%ebx
0874a1b7 +0x17:  movzbl 0x2e(%edx),%eax
0874a1bb +0x1b:  shr    %al
0874a1bd +0x1d:  movzbl %al,%eax
0874a1c0 +0x20:  test   %eax,%eax
0874a1c2 +0x22:  mov    %eax,-0x1c(%ebp)
0874a1c5 +0x25:  je     0874a215 <+0x75>
0874a1c7 +0x27:  xor    %esi,%esi
0874a1c9 +0x29:  lea    0x0(%esi,%eiz,1),%esi
0874a1d0 +0x30:  mov    0x8(%ebp),%ecx
0874a1d3 +0x33:  movzbl 0x30(%ecx,%esi,2),%eax
0874a1d8 +0x38:  mov    -0x2c98(%ebx,%eax,4),%edi
0874a1df +0x3f:  mov    %edi,(%esp)
0874a1e2 +0x42:  call   0807e3b0 <_init+0xca8>
0874a1e7 +0x47:  mov    0x8(%ebp),%ecx
0874a1ea +0x4a:  lea    (%esi,%esi,2),%edx
0874a1ed +0x4d:  shl    $0x4,%edx
0874a1f0 +0x50:  add    $0x1,%esi
0874a1f3 +0x53:  mov    %edi,0x4(%esp)
0874a1f7 +0x57:  lea    0xdf(%ecx,%edx,1),%edx
0874a1fe +0x5e:  mov    %edx,(%esp)
0874a201 +0x61:  add    $0x1,%eax
0874a204 +0x64:  mov    %eax,0x8(%esp)
0874a208 +0x68:  call   0807d8d0 <_init+0x1c8>
0874a20d +0x6d:  cmp    %esi,-0x1c(%ebp)
0874a210 +0x70:  jg     0874a1d0 <+0x30>
0874a212 +0x72:  mov    -0x1c(%ebp),%eax
0874a215 +0x75:  mov    0x8(%ebp),%edx
0874a218 +0x78:  lea    (%eax,%eax,2),%eax
0874a21b +0x7b:  shl    $0x4,%eax
0874a21e +0x7e:  movb   $0x0,0xdf(%edx,%eax,1)
0874a226 +0x86:  add    $0x2c,%esp
0874a229 +0x89:  pop    %ebx
0874a22a +0x8a:  pop    %esi
0874a22b +0x8b:  pop    %edi
0874a22c +0x8c:  pop    %ebp
0874a22d +0x8d:  ret
0874a22e +0x8e:  xchg   %ax,%ax
```

## 反编译 C

```c
// yaSSL::Parameters::SetCipherNames @ 0x874a1a0

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::Parameters::SetCipherNames() */

void __thiscall yaSSL::Parameters::SetCipherNames(Parameters *this)

{
  char *__s;
  uint uVar1;
  size_t sVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = (uint)((byte)this[0x2e] >> 1);
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      __s = *(char **)(cipher_names + (uint)(byte)this[iVar4 * 2 + 0x30] * 4);
      sVar2 = strlen(__s);
      iVar3 = iVar4 * 0x30;
      iVar4 = iVar4 + 1;
      strncpy((char *)(this + iVar3 + 0xdf),__s,sVar2 + 1);
    } while (iVar4 < (int)uVar1);
  }
  this[uVar1 * 0x30 + 0xdf] = (Parameters)0x0;
  return;
}
```
