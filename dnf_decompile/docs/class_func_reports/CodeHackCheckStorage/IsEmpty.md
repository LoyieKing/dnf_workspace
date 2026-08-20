# IsEmpty

`_ZN20CodeHackCheckStorage7IsEmptyEv`

`CodeHackCheckStorage::IsEmpty()`

| 类 | 地址 |
|---|---|
| `CodeHackCheckStorage` | `0x08575c9e` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575c9e  _ZN20CodeHackCheckStorage7IsEmptyEv
#           CodeHackCheckStorage::IsEmpty()
# range [0x08575c9e, 0x08575cb5]
08575c9e +0x00:  push   %ebp
08575c9f +0x01:  mov    %esp,%ebp
08575ca1 +0x03:  sub    $0x18,%esp
08575ca4 +0x06:  mov    0x8(%ebp),%eax
08575ca7 +0x09:  mov    %eax,(%esp)
08575caa +0x0c:  call   0857700a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x11ce>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x11ce
08575caf +0x11:  test   %eax,%eax
08575cb1 +0x13:  sete   %al
08575cb4 +0x16:  leave
08575cb5 +0x17:  ret
```

## 反编译 C

```c
// CodeHackCheckStorage::IsEmpty @ 0x8575c9e

/* CodeHackCheckStorage::IsEmpty() */

bool __thiscall CodeHackCheckStorage::IsEmpty(CodeHackCheckStorage *this)

{
  int iVar1;
  
  iVar1 = std::
          queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
          ::size((queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
                  *)this);
  return iVar1 == 0;
}
```
