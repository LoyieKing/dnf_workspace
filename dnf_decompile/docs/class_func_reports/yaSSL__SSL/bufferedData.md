# bufferedData

`_ZN5yaSSL3SSL12bufferedDataEv`

`yaSSL::SSL::bufferedData()`

| 类 | 地址 |
|---|---|
| `yaSSL::SSL` | `0x0874fa10` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874fa10  _ZN5yaSSL3SSL12bufferedDataEv
#           yaSSL::SSL::bufferedData()
# range [0x0874fa10, 0x0874fa69]
0874fa10 +0x00:  push   %ebp
0874fa11 +0x01:  mov    %esp,%ebp
0874fa13 +0x03:  push   %edi
0874fa14 +0x04:  xor    %edi,%edi
0874fa16 +0x06:  push   %esi
0874fa17 +0x07:  push   %ebx
0874fa18 +0x08:  call   08722df8 <__i686.get_pc_thunk.bx>
0874fa1d +0x0d:  add    $0xc1d17b,%ebx
0874fa23 +0x13:  sub    $0x1c,%esp
0874fa26 +0x16:  mov    0x8(%ebp),%esi
0874fa29 +0x19:  add    $0x9c0,%esi
0874fa2f +0x1f:  mov    %esi,(%esp)
0874fa32 +0x22:  call   0874e920 <_ZNK5yaSSL7Buffers7getDataEv>  ; yaSSL::Buffers::getData() const
0874fa37 +0x27:  mov    %esi,(%esp)
0874fa3a +0x2a:  call   0874e920 <_ZNK5yaSSL7Buffers7getDataEv>  ; yaSSL::Buffers::getData() const
0874fa3f +0x2f:  mov    (%eax),%esi
0874fa41 +0x31:  test   %esi,%esi
0874fa43 +0x33:  je     0874fa5c <+0x4c>
0874fa45 +0x35:  lea    0x0(%esi),%esi
0874fa48 +0x38:  mov    0x8(%esi),%eax
0874fa4b +0x3b:  mov    %eax,(%esp)
0874fa4e +0x3e:  call   08796dc0 <_ZNK5yaSSL12input_buffer13get_remainingEv>  ; yaSSL::input_buffer::get_remaining() const
0874fa53 +0x43:  mov    0x4(%esi),%esi
0874fa56 +0x46:  add    %eax,%edi
0874fa58 +0x48:  test   %esi,%esi
0874fa5a +0x4a:  jne    0874fa48 <+0x38>
0874fa5c +0x4c:  add    $0x1c,%esp
0874fa5f +0x4f:  mov    %edi,%eax
0874fa61 +0x51:  pop    %ebx
0874fa62 +0x52:  pop    %esi
0874fa63 +0x53:  pop    %edi
0874fa64 +0x54:  pop    %ebp
0874fa65 +0x55:  ret
0874fa66 +0x56:  lea    0x0(%esi),%esi
0874fa69 +0x59:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::SSL::bufferedData @ 0x874fa10

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::SSL::bufferedData() */

int __thiscall yaSSL::SSL::bufferedData(SSL *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  Buffers::getData((Buffers *)(this + 0x9c0));
  piVar2 = (int *)Buffers::getData((Buffers *)(this + 0x9c0));
  for (iVar1 = *piVar2; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
    iVar3 = input_buffer::get_remaining(*(input_buffer **)(iVar1 + 8));
    iVar4 = iVar4 + iVar3;
  }
  return iVar4;
}
```
