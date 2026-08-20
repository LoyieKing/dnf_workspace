# SSL_SESSION

`_ZN5yaSSL11SSL_SESSIONC1ERNS_10RandomPoolE`

`yaSSL::SSL_SESSION::SSL_SESSION(yaSSL::RandomPool&)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL_SESSION` | `0x0874f7d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f7d0  _ZN5yaSSL11SSL_SESSIONC1ERNS_10RandomPoolE
#           yaSSL::SSL_SESSION::SSL_SESSION(yaSSL::RandomPool&)
# range [0x0874f7d0, 0x0874f82c]
0874f7d0 +0x00:  push   %ebp
0874f7d1 +0x01:  mov    %esp,%ebp
0874f7d3 +0x03:  sub    $0x8,%esp
0874f7d6 +0x06:  mov    0x8(%ebp),%edx
0874f7d9 +0x09:  mov    0xc(%ebp),%eax
0874f7dc +0x0c:  mov    %esi,(%esp)
0874f7df +0x0f:  mov    %edi,0x4(%esp)
0874f7e3 +0x13:  movl   $0x0,0x54(%edx)
0874f7ea +0x1a:  mov    %eax,0x5c(%edx)
0874f7ed +0x1d:  xor    %eax,%eax
0874f7ef +0x1f:  movl   $0x0,0x58(%edx)
0874f7f6 +0x26:  movl   $0x0,0x60(%edx)
0874f7fd +0x2d:  movl   $0x0,(%edx,%eax,1)
0874f804 +0x34:  add    $0x4,%eax
0874f807 +0x37:  cmp    $0x20,%eax
0874f80a +0x3a:  jb     0874f7fd <+0x2d>
0874f80c +0x3c:  lea    0x20(%edx),%esi
0874f80f +0x3f:  mov    $0xc,%ecx
0874f814 +0x44:  mov    %esi,%edi
0874f816 +0x46:  xor    %eax,%eax
0874f818 +0x48:  rep stos %eax,%es:(%edi)
0874f81a +0x4a:  movw   $0x0,0x50(%edx)
0874f820 +0x50:  mov    (%esp),%esi
0874f823 +0x53:  mov    0x4(%esp),%edi
0874f827 +0x57:  mov    %ebp,%esp
0874f829 +0x59:  pop    %ebp
0874f82a +0x5a:  ret
0874f82b +0x5b:  nop
0874f82c +0x5c:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// yaSSL::SSL_SESSION::SSL_SESSION @ 0x874f7d0

/* yaSSL::SSL_SESSION::SSL_SESSION(yaSSL::RandomPool&) */

void __thiscall yaSSL::SSL_SESSION::SSL_SESSION(SSL_SESSION *this,RandomPool *param_1)

{
  uint uVar1;
  int iVar2;
  SSL_SESSION *pSVar3;
  
  *(undefined4 *)(this + 0x54) = 0;
  *(RandomPool **)(this + 0x5c) = param_1;
  uVar1 = 0;
  *(undefined4 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x60) = 0;
  do {
    *(undefined4 *)(this + uVar1) = 0;
    uVar1 = uVar1 + 4;
  } while (uVar1 < 0x20);
  pSVar3 = this + 0x20;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pSVar3 = 0;
    pSVar3 = pSVar3 + 4;
  }
  *(undefined2 *)(this + 0x50) = 0;
  return;
}
```
