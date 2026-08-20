# IsFull

`_ZN20CodeHackCheckStorage6IsFullEv`

`CodeHackCheckStorage::IsFull()`

| 类 | 地址 |
|---|---|
| `CodeHackCheckStorage` | `0x08575cb6` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575cb6  _ZN20CodeHackCheckStorage6IsFullEv
#           CodeHackCheckStorage::IsFull()
# range [0x08575cb6, 0x08575ccf]
08575cb6 +0x00:  push   %ebp
08575cb7 +0x01:  mov    %esp,%ebp
08575cb9 +0x03:  sub    $0x18,%esp
08575cbc +0x06:  mov    0x8(%ebp),%eax
08575cbf +0x09:  mov    %eax,(%esp)
08575cc2 +0x0c:  call   0857700a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x11ce>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x11ce
08575cc7 +0x11:  cmp    $0x30,%eax
08575cca +0x14:  sete   %al
08575ccd +0x17:  leave
08575cce +0x18:  ret
08575ccf +0x19:  nop
```

## 反编译 C

```c
// CodeHackCheckStorage::IsFull @ 0x8575cb6

/* CodeHackCheckStorage::IsFull() */

bool __thiscall CodeHackCheckStorage::IsFull(CodeHackCheckStorage *this)

{
  int iVar1;
  
  iVar1 = std::
          queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
          ::size((queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
                  *)this);
  return iVar1 == 0x30;
}
```
