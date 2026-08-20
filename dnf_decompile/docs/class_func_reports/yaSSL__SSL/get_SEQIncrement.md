# get_SEQIncrement

`_ZN5yaSSL3SSL16get_SEQIncrementEb`

`yaSSL::SSL::get_SEQIncrement(bool)`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874ed10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874ed10  _ZN5yaSSL3SSL16get_SEQIncrementEb
#           yaSSL::SSL::get_SEQIncrement(bool)
# range [0x0874ed10, 0x0874ed79]
0874ed10 +0x00:  push   %ebp
0874ed11 +0x01:  mov    %esp,%ebp
0874ed13 +0x03:  push   %ebx
0874ed14 +0x04:  sub    $0x14,%esp
0874ed17 +0x07:  mov    0x8(%ebp),%eax
0874ed1a +0x0a:  call   08722df8 <__i686.get_pc_thunk.bx>
0874ed1f +0x0f:  add    $0xc1de79,%ebx
0874ed25 +0x15:  cmpb   $0x0,0xc(%ebp)
0874ed29 +0x19:  jne    0874ed50 <+0x40>
0874ed2b +0x1b:  add    $0x68,%eax
0874ed2e +0x1e:  mov    %eax,(%esp)
0874ed31 +0x21:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874ed36 +0x26:  mov    %eax,%edx
0874ed38 +0x28:  mov    0x11c(%eax),%eax
0874ed3e +0x2e:  lea    0x1(%eax),%ecx
0874ed41 +0x31:  mov    %ecx,0x11c(%edx)
0874ed47 +0x37:  add    $0x14,%esp
0874ed4a +0x3a:  pop    %ebx
0874ed4b +0x3b:  pop    %ebp
0874ed4c +0x3c:  ret
0874ed4d +0x3d:  lea    0x0(%esi),%esi
0874ed50 +0x40:  add    $0x68,%eax
0874ed53 +0x43:  mov    %eax,(%esp)
0874ed56 +0x46:  call   0874ed00 <_ZN5yaSSL8Security14use_connectionEv>  ; yaSSL::Security::use_connection()
0874ed5b +0x4b:  mov    %eax,%edx
0874ed5d +0x4d:  mov    0x120(%eax),%eax
0874ed63 +0x53:  lea    0x1(%eax),%ecx
0874ed66 +0x56:  mov    %ecx,0x120(%edx)
0874ed6c +0x5c:  add    $0x14,%esp
0874ed6f +0x5f:  pop    %ebx
0874ed70 +0x60:  pop    %ebp
0874ed71 +0x61:  ret
0874ed72 +0x62:  lea    0x0(%esi,%eiz,1),%esi
0874ed79 +0x69:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::get_SEQIncrement @ 0x874ed10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::get_SEQIncrement(bool) */

void __thiscall yaSSL::SSL::get_SEQIncrement(SSL *this,bool param_1)

{
  int iVar1;
  
  if (!param_1) {
    iVar1 = Security::use_connection((Security *)(this + 0x68));
    *(int *)(iVar1 + 0x11c) = *(int *)(iVar1 + 0x11c) + 1;
    return;
  }
  iVar1 = Security::use_connection((Security *)(this + 0x68));
  *(int *)(iVar1 + 0x120) = *(int *)(iVar1 + 0x120) + 1;
  return;
}
```
