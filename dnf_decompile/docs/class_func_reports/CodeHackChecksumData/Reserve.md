# Reserve

`_ZN20CodeHackChecksumData7ReserveEl`

`CodeHackChecksumData::Reserve(long)`

| 类 | 地址 |
|---|---|
| `CodeHackChecksumData` | `0x0808a62e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0808a62e  _ZN20CodeHackChecksumData7ReserveEl
#           CodeHackChecksumData::Reserve(long)
# range [0x0808a62e, 0x0808a647]
0808a62e +0x00:  push   %ebp
0808a62f +0x01:  mov    %esp,%ebp
0808a631 +0x03:  sub    $0x18,%esp
0808a634 +0x06:  mov    0xc(%ebp),%edx
0808a637 +0x09:  mov    0x8(%ebp),%eax
0808a63a +0x0c:  mov    %edx,0x4(%esp)
0808a63e +0x10:  mov    %eax,(%esp)
0808a641 +0x13:  call   0808ad68 <_GLOBAL__I__Z18ZeroMemoryChecksumP16CodeHackChecksum+0x101>  ; global constructors keyed to ZeroMemoryChecksum(CodeHackChecksum*)+0x101
0808a646 +0x18:  leave
0808a647 +0x19:  ret
```

## 反编译 C

```c
// CodeHackChecksumData::Reserve @ 0x808a62e

/* CodeHackChecksumData::Reserve(long) */

void __thiscall CodeHackChecksumData::Reserve(CodeHackChecksumData *this,long param_1)

{
  std::vector<CodeHackChecksum,std::allocator<CodeHackChecksum>>::reserve
            ((vector<CodeHackChecksum,std::allocator<CodeHackChecksum>> *)this,param_1);
  return;
}
```
