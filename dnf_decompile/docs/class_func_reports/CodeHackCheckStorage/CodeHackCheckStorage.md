# CodeHackCheckStorage

`_ZN20CodeHackCheckStorageC1Ev`

`CodeHackCheckStorage::CodeHackCheckStorage()`

| 类 | 地址 |
|---|---|
| `CodeHackCheckStorage` | `0x08575c22` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575c22  _ZN20CodeHackCheckStorageC1Ev
#           CodeHackCheckStorage::CodeHackCheckStorage()
# range [0x08575c22, 0x08575c9d]
08575c22 +0x00:  push   %ebp
08575c23 +0x01:  mov    %esp,%ebp
08575c25 +0x03:  push   %esi
08575c26 +0x04:  push   %ebx
08575c27 +0x05:  sub    $0x40,%esp
08575c2a +0x08:  lea    -0x30(%ebp),%eax
08575c2d +0x0b:  mov    %eax,(%esp)
08575c30 +0x0e:  call   08576f46 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x110a>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x110a
08575c35 +0x13:  mov    0x8(%ebp),%eax
08575c38 +0x16:  lea    -0x30(%ebp),%edx
08575c3b +0x19:  mov    %edx,0x4(%esp)
08575c3f +0x1d:  mov    %eax,(%esp)
08575c42 +0x20:  call   08576fe8 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x11ac>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x11ac
08575c47 +0x25:  jmp    08575c64 <+0x42>
08575c49 +0x27:  mov    %edx,%ebx
08575c4b +0x29:  mov    %eax,%esi
08575c4d +0x2b:  lea    -0x30(%ebp),%eax
08575c50 +0x2e:  mov    %eax,(%esp)
08575c53 +0x31:  call   08576f5a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x111e>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x111e
08575c58 +0x36:  mov    %esi,%eax
08575c5a +0x38:  mov    %ebx,%edx
08575c5c +0x3a:  mov    %eax,(%esp)
08575c5f +0x3d:  call   08ae3750 <_Unwind_Resume>
08575c64 +0x42:  lea    -0x30(%ebp),%eax
08575c67 +0x45:  mov    %eax,(%esp)
08575c6a +0x48:  call   08576f5a <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x111e>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x111e
08575c6f +0x4d:  mov    0x8(%ebp),%eax
08575c72 +0x50:  mov    %eax,(%esp)
08575c75 +0x53:  call   08575e74 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x38>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x38
08575c7a +0x58:  jmp    08575c97 <+0x75>
08575c7c +0x5a:  mov    %edx,%ebx
08575c7e +0x5c:  mov    %eax,%esi
08575c80 +0x5e:  mov    0x8(%ebp),%eax
08575c83 +0x61:  mov    %eax,(%esp)
08575c86 +0x64:  call   08575ee2 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xa6>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xa6
08575c8b +0x69:  mov    %esi,%eax
08575c8d +0x6b:  mov    %ebx,%edx
08575c8f +0x6d:  mov    %eax,(%esp)
08575c92 +0x70:  call   08ae3750 <_Unwind_Resume>
08575c97 +0x75:  add    $0x40,%esp
08575c9a +0x78:  pop    %ebx
08575c9b +0x79:  pop    %esi
08575c9c +0x7a:  pop    %ebp
08575c9d +0x7b:  ret
```

## 反编译 C

```c
// CodeHackCheckStorage::CodeHackCheckStorage @ 0x8575c22

/* CodeHackCheckStorage::CodeHackCheckStorage() */

void __thiscall CodeHackCheckStorage::CodeHackCheckStorage(CodeHackCheckStorage *this)

{
  deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>> local_34 [40];
  
  std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>::deque(local_34);
                    /* try { // try from 08575c42 to 08575c46 has its CatchHandler @ 08575c49 */
  std::queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>::
  queue((queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
         *)this,(deque *)local_34);
  std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>::~deque(local_34);
                    /* try { // try from 08575c75 to 08575c79 has its CatchHandler @ 08575c7c */
  reset(this);
  return;
}
```
