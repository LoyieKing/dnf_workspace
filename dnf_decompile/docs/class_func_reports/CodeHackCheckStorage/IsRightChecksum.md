# IsRightChecksum

`_ZN20CodeHackCheckStorage15IsRightChecksumEPK16CodeHackChecksum`

`CodeHackCheckStorage::IsRightChecksum(CodeHackChecksum const*)`

| 类 | 地址 |
|---|---|
| `CodeHackCheckStorage` | `0x08575dc4` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575dc4  _ZN20CodeHackCheckStorage15IsRightChecksumEPK16CodeHackChecksum
#           CodeHackCheckStorage::IsRightChecksum(CodeHackChecksum const*)
# range [0x08575dc4, 0x08575dfb]
08575dc4 +0x00:  push   %ebp
08575dc5 +0x01:  mov    %esp,%ebp
08575dc7 +0x03:  sub    $0x18,%esp
08575dca +0x06:  mov    0x8(%ebp),%eax
08575dcd +0x09:  mov    %eax,(%esp)
08575dd0 +0x0c:  call   08575c9e <_ZN20CodeHackCheckStorage7IsEmptyEv>  ; CodeHackCheckStorage::IsEmpty()
08575dd5 +0x11:  test   %al,%al
08575dd7 +0x13:  je     08575de0 <+0x1c>
08575dd9 +0x15:  mov    $0x0,%eax
08575dde +0x1a:  jmp    08575dfa <+0x36>
08575de0 +0x1c:  mov    0x8(%ebp),%eax
08575de3 +0x1f:  mov    %eax,(%esp)
08575de6 +0x22:  call   08577038 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x11fc>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x11fc
08575deb +0x27:  mov    0xc(%ebp),%edx
08575dee +0x2a:  mov    %edx,0x4(%esp)
08575df2 +0x2e:  mov    %eax,(%esp)
08575df5 +0x31:  call   0808a8c8 <_ZN18CodeHackChecksumEx15IsRightChecksumEPK16CodeHackChecksum>  ; CodeHackChecksumEx::IsRightChecksum(CodeHackChecksum const*)
08575dfa +0x36:  leave
08575dfb +0x37:  ret
```

## 反编译 C

```c
// CodeHackCheckStorage::IsRightChecksum @ 0x8575dc4

/* CodeHackCheckStorage::IsRightChecksum(CodeHackChecksum const*) */

undefined4 __thiscall
CodeHackCheckStorage::IsRightChecksum(CodeHackCheckStorage *this,CodeHackChecksum *param_1)

{
  char cVar1;
  undefined4 uVar2;
  CodeHackChecksumEx *this_00;
  
  cVar1 = IsEmpty(this);
  if (cVar1 == '\0') {
    this_00 = (CodeHackChecksumEx *)
              std::
              queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
              ::front();
    uVar2 = CodeHackChecksumEx::IsRightChecksum(this_00,param_1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}
```
