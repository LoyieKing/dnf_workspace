# Clear

`_ZN20CodeHackChecksumData5ClearEv`

`CodeHackChecksumData::Clear()`

| 类 | 地址 |
|---|---|
| `CodeHackChecksumData` | `0x0808a61a` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a61a  _ZN20CodeHackChecksumData5ClearEv
#           CodeHackChecksumData::Clear()
# range [0x0808a61a, 0x0808a62d]
0808a61a +0x00:  push   %ebp
0808a61b +0x01:  mov    %esp,%ebp
0808a61d +0x03:  sub    $0x18,%esp
0808a620 +0x06:  mov    0x8(%ebp),%eax
0808a623 +0x09:  mov    %eax,(%esp)
0808a626 +0x0c:  call   0808ad4c <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0xe5>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0xe5
0808a62b +0x11:  leave
0808a62c +0x12:  ret
0808a62d +0x13:  nop
```

## 反编译 C

```c
// CodeHackChecksumData::Clear @ 0x808a61a

/* CodeHackChecksumData::Clear() */

void __thiscall CodeHackChecksumData::Clear(CodeHackChecksumData *this)

{
  std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>::clear
            ((vector<CodeHackChecksum,std::allocator<CodeHackChecksum>> *)this);
  return;
}
```
