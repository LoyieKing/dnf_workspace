# AddCodeHackChecksum

`_ZN20CodeHackChecksumData19AddCodeHackChecksumERK16CodeHackChecksum`

`CodeHackChecksumData::AddCodeHackChecksum(CodeHackChecksum const&)`

| 类 | 地址 |
|---|---|
| `CodeHackChecksumData` | `0x0808a648` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a648  _ZN20CodeHackChecksumData19AddCodeHackChecksumERK16CodeHackChecksum
#           CodeHackChecksumData::AddCodeHackChecksum(CodeHackChecksum const&)
# range [0x0808a648, 0x0808a661]
0808a648 +0x00:  push   %ebp
0808a649 +0x01:  mov    %esp,%ebp
0808a64b +0x03:  sub    $0x18,%esp
0808a64e +0x06:  mov    0x8(%ebp),%eax
0808a651 +0x09:  mov    0xc(%ebp),%edx
0808a654 +0x0c:  mov    %edx,0x4(%esp)
0808a658 +0x10:  mov    %eax,(%esp)
0808a65b +0x13:  call   0808ae8c <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0x225>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0x225
0808a660 +0x18:  leave
0808a661 +0x19:  ret
```

## 反编译 C

```c
// CodeHackChecksumData::AddCodeHackChecksum @ 0x808a648

/* CodeHackChecksumData::AddCodeHackChecksum(CodeHackChecksum const&) */

void __thiscall
CodeHackChecksumData::AddCodeHackChecksum(CodeHackChecksumData *this,CodeHackChecksum *param_1)

{
  std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>::push_back
            ((vector<CodeHackChecksum,std::allocator<CodeHackChecksum>> *)this,param_1);
  return;
}
```
