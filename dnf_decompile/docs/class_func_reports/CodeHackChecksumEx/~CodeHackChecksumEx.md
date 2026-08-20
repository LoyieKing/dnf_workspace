# ~CodeHackChecksumEx

`_ZN18CodeHackChecksumExD1Ev`

`CodeHackChecksumEx::~CodeHackChecksumEx()`

| 类 | 地址 |
|---|---|
| `CodeHackChecksumEx` | `0x0808a76c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a76c  _ZN18CodeHackChecksumExD1Ev
#           CodeHackChecksumEx::~CodeHackChecksumEx()
# range [0x0808a76c, 0x0808a7ad]
0808a76c +0x00:  push   %ebp
0808a76d +0x01:  mov    %esp,%ebp
0808a76f +0x03:  push   %esi
0808a770 +0x04:  push   %ebx
0808a771 +0x05:  sub    $0x10,%esp
0808a774 +0x08:  mov    0x8(%ebp),%eax
0808a777 +0x0b:  mov    %eax,(%esp)
0808a77a +0x0e:  call   0808ad4c <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0xe5>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0xe5
0808a77f +0x13:  jmp    0808a79c <+0x30>
0808a781 +0x15:  mov    %edx,%ebx
0808a783 +0x17:  mov    %eax,%esi
0808a785 +0x19:  mov    0x8(%ebp),%eax
0808a788 +0x1c:  mov    %eax,(%esp)
0808a78b +0x1f:  call   0808ac98 <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0x31>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0x31
0808a790 +0x24:  mov    %esi,%eax
0808a792 +0x26:  mov    %ebx,%edx
0808a794 +0x28:  mov    %eax,(%esp)
0808a797 +0x2b:  call   08ae3750 <_Unwind_Resume>
0808a79c +0x30:  mov    0x8(%ebp),%eax
0808a79f +0x33:  mov    %eax,(%esp)
0808a7a2 +0x36:  call   0808ac98 <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0x31>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0x31
0808a7a7 +0x3b:  add    $0x10,%esp
0808a7aa +0x3e:  pop    %ebx
0808a7ab +0x3f:  pop    %esi
0808a7ac +0x40:  pop    %ebp
0808a7ad +0x41:  ret
```

## 反编译 C

```c
// CodeHackChecksumEx::~CodeHackChecksumEx @ 0x808a76c

/* CodeHackChecksumEx::~CodeHackChecksumEx() */

void __thiscall CodeHackChecksumEx::~CodeHackChecksumEx(CodeHackChecksumEx *this)

{
                    /* try { // try from 0808a77a to 0808a77e has its CatchHandler @ 0808a781 */
  std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>::clear
            ((vector<CodeHackChecksum,std::allocator<CodeHackChecksum>> *)this);
  CodeHackChecksumData::~CodeHackChecksumData((CodeHackChecksumData *)this);
  return;
}
```
