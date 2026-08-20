# PopData

`_ZN20CodeHackCheckStorage7PopDataEv`

`CodeHackCheckStorage::PopData()`

| 类 | 地址 |
|---|---|
| `CodeHackCheckStorage` | `0x08575dac` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575dac  _ZN20CodeHackCheckStorage7PopDataEv
#           CodeHackCheckStorage::PopData()
# range [0x08575dac, 0x08575dc3]
08575dac +0x00:  push   %ebp
08575dad +0x01:  mov    %esp,%ebp
08575daf +0x03:  sub    $0x18,%esp
08575db2 +0x06:  mov    0x8(%ebp),%eax
08575db5 +0x09:  mov    %eax,(%esp)
08575db8 +0x0c:  call   08575f7e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x142>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x142
08575dbd +0x11:  mov    $0x1,%eax
08575dc2 +0x16:  leave
08575dc3 +0x17:  ret
```

## 反编译 C

```c
// CodeHackCheckStorage::PopData @ 0x8575dac

/* CodeHackCheckStorage::PopData() */

undefined4 __thiscall CodeHackCheckStorage::PopData(CodeHackCheckStorage *this)

{
  std::queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>::
  pop((queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>> *
      )this);
  return 1;
}
```
