# PushData

`_ZN20CodeHackCheckStorage8PushDataEPK18CodeHackChecksumEx`

`CodeHackCheckStorage::PushData(CodeHackChecksumEx const*)`

| 类 | 地址 |
|---|---|
| `CodeHackCheckStorage` | `0x08575cd0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575cd0  _ZN20CodeHackCheckStorage8PushDataEPK18CodeHackChecksumEx
#           CodeHackCheckStorage::PushData(CodeHackChecksumEx const*)
# range [0x08575cd0, 0x08575d05]
08575cd0 +0x00:  push   %ebp
08575cd1 +0x01:  mov    %esp,%ebp
08575cd3 +0x03:  sub    $0x18,%esp
08575cd6 +0x06:  mov    0x8(%ebp),%eax
08575cd9 +0x09:  mov    %eax,(%esp)
08575cdc +0x0c:  call   08575cb6 <_ZN20CodeHackCheckStorage6IsFullEv>  ; CodeHackCheckStorage::IsFull()
08575ce1 +0x11:  test   %al,%al
08575ce3 +0x13:  je     08575cec <+0x1c>
08575ce5 +0x15:  mov    $0x0,%eax
08575cea +0x1a:  jmp    08575d03 <+0x33>
08575cec +0x1c:  mov    0x8(%ebp),%eax
08575cef +0x1f:  mov    0xc(%ebp),%edx
08575cf2 +0x22:  mov    %edx,0x4(%esp)
08575cf6 +0x26:  mov    %eax,(%esp)
08575cf9 +0x29:  call   0857701e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x11e2>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x11e2
08575cfe +0x2e:  mov    $0x1,%eax
08575d03 +0x33:  leave
08575d04 +0x34:  ret
08575d05 +0x35:  nop
```

## 反编译 C

```c
// CodeHackCheckStorage::PushData @ 0x8575cd0

/* CodeHackCheckStorage::PushData(CodeHackChecksumEx const*) */

bool __thiscall
CodeHackCheckStorage::PushData(CodeHackCheckStorage *this,CodeHackChecksumEx *param_1)

{
  char cVar1;
  
  cVar1 = IsFull(this);
  if (cVar1 == '\0') {
    std::queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
    ::push((queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
            *)this,param_1);
  }
  return cVar1 == '\0';
}
```
