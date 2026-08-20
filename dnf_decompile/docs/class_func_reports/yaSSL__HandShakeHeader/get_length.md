# get_length

`_ZNK5yaSSL15HandShakeHeader10get_lengthEv`

`yaSSL::HandShakeHeader::get_length() const`

| 类 | 地址 |
|---|---|
| `yaSSL::HandShakeHeader` | `0x0874a170` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0874a170  _ZNK5yaSSL15HandShakeHeader10get_lengthEv
#           yaSSL::HandShakeHeader::get_length() const
# range [0x0874a170, 0x0874a199]
0874a170 +0x00:  push   %ebp
0874a171 +0x01:  mov    %esp,%ebp
0874a173 +0x03:  push   %ebx
0874a174 +0x04:  call   08722df8 <__i686.get_pc_thunk.bx>
0874a179 +0x09:  add    $0xc22a1f,%ebx
0874a17f +0x0f:  sub    $0x14,%esp
0874a182 +0x12:  mov    0x8(%ebp),%eax
0874a185 +0x15:  add    $0x8,%eax
0874a188 +0x18:  mov    %eax,(%esp)
0874a18b +0x1b:  call   0874dd60 <_ZN5yaSSL7c24to32EPKh>  ; yaSSL::c24to32(unsigned char const*)
0874a190 +0x20:  add    $0x14,%esp
0874a193 +0x23:  pop    %ebx
0874a194 +0x24:  pop    %ebp
0874a195 +0x25:  ret
0874a196 +0x26:  lea    0x0(%esi),%esi
0874a199 +0x29:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// yaSSL::HandShakeHeader::get_length @ 0x874a170

/* WARNING: Function: __i686.get_pc_thunk.bx replaced with injection: get_pc_thunk_bx */
/* yaSSL::HandShakeHeader::get_length() const */

void __thiscall yaSSL::HandShakeHeader::get_length(HandShakeHeader *this)

{
  c24to32((uchar *)(this + 8));
  return;
}
```
