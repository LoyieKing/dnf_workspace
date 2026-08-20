# GetAfter

`_ZN5yaSSL4X5098GetAfterEv`

`yaSSL::X509::GetAfter()`

| 类 | 地址 |
|---|---|
| `yaSSL::X509` | `0x0874f030` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f030  _ZN5yaSSL4X5098GetAfterEv
#           yaSSL::X509::GetAfter()
# range [0x0874f030, 0x0874f059]
0874f030 +0x00:  push   %ebp
0874f031 +0x01:  mov    %esp,%ebp
0874f033 +0x03:  push   %ebx
0874f034 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f039 +0x09:  add    $0xc1db5f,%ebx
0874f03f +0x0f:  sub    $0x14,%esp
0874f042 +0x12:  mov    0x8(%ebp),%eax
0874f045 +0x15:  add    $0x34,%eax
0874f048 +0x18:  mov    %eax,(%esp)
0874f04b +0x1b:  call   0874f020 <_ZN5yaSSL12StringHolder9GetStringEv>  ; yaSSL::StringHolder::GetString()
0874f050 +0x20:  add    $0x14,%esp
0874f053 +0x23:  pop    %ebx
0874f054 +0x24:  pop    %ebp
0874f055 +0x25:  ret
0874f056 +0x26:  lea    0x0(%esi),%esi
0874f059 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::X509::GetAfter @ 0x874f030

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::X509::GetAfter() */

void __thiscall yaSSL::X509::GetAfter(X509 *this)

{
  StringHolder::GetString((StringHolder *)(this + 0x34));
  return;
}
```
