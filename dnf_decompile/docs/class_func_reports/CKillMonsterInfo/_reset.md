# _reset

`_ZN16CKillMonsterInfo6_resetEv`

`CKillMonsterInfo::_reset()`

| 类 | 地址 |
|---|---|
| `CKillMonsterInfo` | `0x0854d0b8` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0854d0b8  _ZN16CKillMonsterInfo6_resetEv
#           CKillMonsterInfo::_reset()
# range [0x0854d0b8, 0x0854d0e9]
0854d0b8 +0x00:  push   %ebp
0854d0b9 +0x01:  mov    %esp,%ebp
0854d0bb +0x03:  sub    $0x18,%esp
0854d0be +0x06:  mov    0x8(%ebp),%eax
0854d0c1 +0x09:  add    $0x8,%eax
0854d0c4 +0x0c:  mov    %eax,(%esp)
0854d0c7 +0x0f:  call   0854d6a0 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x19a>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x19a
0854d0cc +0x14:  mov    0x8(%ebp),%eax
0854d0cf +0x17:  add    $0x20,%eax
0854d0d2 +0x1a:  mov    %eax,(%esp)
0854d0d5 +0x1d:  call   0854d6a0 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x19a>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x19a
0854d0da +0x22:  mov    0x8(%ebp),%eax
0854d0dd +0x25:  add    $0x38,%eax
0854d0e0 +0x28:  mov    %eax,(%esp)
0854d0e3 +0x2b:  call   0854d6a0 <_GLOBAL__I__ZN16CKillMonsterInfoC2Ev+0x19a>  ; global constructors keyed to CKillMonsterInfo::CKillMonsterInfo()+0x19a
0854d0e8 +0x30:  leave
0854d0e9 +0x31:  ret
```

## 反编译 C

```c
// CKillMonsterInfo::_reset @ 0x854d0b8

/* CKillMonsterInfo::_reset() */

void __thiscall CKillMonsterInfo::_reset(CKillMonsterInfo *this)

{
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::clear((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
           *)(this + 8));
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::clear((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
           *)(this + 0x20));
  std::
  map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
  ::clear((map<unsigned_int,unsigned_char,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,unsigned_char>>>
           *)(this + 0x38));
  return;
}
```
