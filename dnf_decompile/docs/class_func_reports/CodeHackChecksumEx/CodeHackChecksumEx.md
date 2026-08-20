# CodeHackChecksumEx

`_ZN18CodeHackChecksumExC1Ev`

`CodeHackChecksumEx::CodeHackChecksumEx()`

| 类 | 地址 |
|---|---|
| `CodeHackChecksumEx` | `0x0808a700` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a700  _ZN18CodeHackChecksumExC1Ev
#           CodeHackChecksumEx::CodeHackChecksumEx()
# range [0x0808a700, 0x0808a76b]
0808a700 +0x00:  push   %ebp
0808a701 +0x01:  mov    %esp,%ebp
0808a703 +0x03:  sub    $0x18,%esp
0808a706 +0x06:  mov    0x8(%ebp),%eax
0808a709 +0x09:  mov    %eax,(%esp)
0808a70c +0x0c:  call   0808ac84 <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0x1d>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0x1d
0808a711 +0x11:  mov    0x8(%ebp),%eax
0808a714 +0x14:  add    $0xc,%eax
0808a717 +0x17:  movl   $0x104,0x8(%esp)
0808a71f +0x1f:  movl   $0x0,0x4(%esp)
0808a727 +0x27:  mov    %eax,(%esp)
0808a72a +0x2a:  call   0807dcc0 <_init+0x5b8>
0808a72f +0x2f:  mov    0x8(%ebp),%eax
0808a732 +0x32:  add    $0x110,%eax
0808a737 +0x37:  movl   $0x8,0x8(%esp)
0808a73f +0x3f:  movl   $0x0,0x4(%esp)
0808a747 +0x47:  mov    %eax,(%esp)
0808a74a +0x4a:  call   0807dcc0 <_init+0x5b8>
0808a74f +0x4f:  mov    0x8(%ebp),%eax
0808a752 +0x52:  movl   $0x0,0x114(%eax)
0808a75c +0x5c:  mov    0x8(%ebp),%eax
0808a75f +0x5f:  movl   $0x0,0x110(%eax)
0808a769 +0x69:  leave
0808a76a +0x6a:  ret
0808a76b +0x6b:  nop
```

## 反编译 C

```c
// CodeHackChecksumEx::CodeHackChecksumEx @ 0x808a700

/* CodeHackChecksumEx::CodeHackChecksumEx() */

void __thiscall CodeHackChecksumEx::CodeHackChecksumEx(CodeHackChecksumEx *this)

{
  CodeHackChecksumData::CodeHackChecksumData((CodeHackChecksumData *)this);
  memset(this + 0xc,0,0x104);
  memset(this + 0x110,0,8);
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  return;
}
```
