# GetBefore

`_ZN5yaSSL4X5099GetBeforeEv`

`yaSSL::X509::GetBefore()`

| 类 | 地址 |
|---|---|
| `yaSSL::X509` | `0x0874f060` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874f060  _ZN5yaSSL4X5099GetBeforeEv
#           yaSSL::X509::GetBefore()
# range [0x0874f060, 0x0874f089]
0874f060 +0x00:  push   %ebp
0874f061 +0x01:  mov    %esp,%ebp
0874f063 +0x03:  push   %ebx
0874f064 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874f069 +0x09:  add    $0xc1db2f,%ebx
0874f06f +0x0f:  sub    $0x14,%esp
0874f072 +0x12:  mov    0x8(%ebp),%eax
0874f075 +0x15:  add    $0x28,%eax
0874f078 +0x18:  mov    %eax,(%esp)
0874f07b +0x1b:  call   0874f020 <_ZN5yaSSL12StringHolder9GetStringEv>  ; yaSSL::StringHolder::GetString()
0874f080 +0x20:  add    $0x14,%esp
0874f083 +0x23:  pop    %ebx
0874f084 +0x24:  pop    %ebp
0874f085 +0x25:  ret
0874f086 +0x26:  lea    0x0(%esi),%esi
0874f089 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::X509::GetBefore @ 0x874f060

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::X509::GetBefore() */

void __thiscall yaSSL::X509::GetBefore(X509 *this)

{
  StringHolder::GetString((StringHolder *)(this + 0x28));
  return;
}
```
