# PopData

`_ZN20CodeHackCheckStorage7PopDataEPc`

`CodeHackCheckStorage::PopData(char*)`

| 类 | 地址 |
|---|---|
| `CodeHackCheckStorage` | `0x08575d06` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08575d06  _ZN20CodeHackCheckStorage7PopDataEPc
#           CodeHackCheckStorage::PopData(char*)
# range [0x08575d06, 0x08575dab]
08575d06 +0x00:  push   %ebp
08575d07 +0x01:  mov    %esp,%ebp
08575d09 +0x03:  push   %esi
08575d0a +0x04:  push   %ebx
08575d0b +0x05:  sub    $0x130,%esp
08575d11 +0x0b:  mov    0x8(%ebp),%eax
08575d14 +0x0e:  mov    %eax,(%esp)
08575d17 +0x11:  call   08575c9e <_ZN20CodeHackCheckStorage7IsEmptyEv>  ; CodeHackCheckStorage::IsEmpty()
08575d1c +0x16:  test   %al,%al
08575d1e +0x18:  je     08575d27 <+0x21>
08575d20 +0x1a:  mov    $0x0,%ebx
08575d25 +0x1f:  jmp    08575d9f <+0x99>
08575d27 +0x21:  mov    0x8(%ebp),%eax
08575d2a +0x24:  mov    %eax,(%esp)
08575d2d +0x27:  call   08577038 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x11fc>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x11fc
08575d32 +0x2c:  mov    %eax,0x4(%esp)
08575d36 +0x30:  lea    -0x120(%ebp),%eax
08575d3c +0x36:  mov    %eax,(%esp)
08575d3f +0x39:  call   08575f10 <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0xd4>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0xd4
08575d44 +0x3e:  mov    0x8(%ebp),%eax
08575d47 +0x41:  mov    %eax,(%esp)
08575d4a +0x44:  call   08575f7e <_GLOBAL__I__Z14LoadClientFilePmPPvPKc+0x142>  ; global constructors keyed to LoadClientFile(unsigned long*, void**, char const*)+0x142
08575d4f +0x49:  lea    -0x120(%ebp),%eax
08575d55 +0x4f:  mov    %eax,(%esp)
08575d58 +0x52:  call   0808a7cc <_ZN18CodeHackChecksumEx11GetFileNameEv>  ; CodeHackChecksumEx::GetFileName()
08575d5d +0x57:  mov    %eax,0x4(%esp)
08575d61 +0x5b:  mov    0xc(%ebp),%eax
08575d64 +0x5e:  mov    %eax,(%esp)
08575d67 +0x61:  call   0807def0 <_init+0x7e8>
08575d6c +0x66:  mov    $0x1,%ebx
08575d71 +0x6b:  lea    -0x120(%ebp),%eax
08575d77 +0x71:  mov    %eax,(%esp)
08575d7a +0x74:  call   0808a76c <_ZN18CodeHackChecksumExD1Ev>  ; CodeHackChecksumEx::~CodeHackChecksumEx()
08575d7f +0x79:  jmp    08575d9f <+0x99>
08575d81 +0x7b:  mov    %edx,%ebx
08575d83 +0x7d:  mov    %eax,%esi
08575d85 +0x7f:  lea    -0x120(%ebp),%eax
08575d8b +0x85:  mov    %eax,(%esp)
08575d8e +0x88:  call   0808a76c <_ZN18CodeHackChecksumExD1Ev>  ; CodeHackChecksumEx::~CodeHackChecksumEx()
08575d93 +0x8d:  mov    %esi,%eax
08575d95 +0x8f:  mov    %ebx,%edx
08575d97 +0x91:  mov    %eax,(%esp)
08575d9a +0x94:  call   08ae3750 <_Unwind_Resume>
08575d9f +0x99:  mov    %ebx,%eax
08575da1 +0x9b:  add    $0x130,%esp
08575da7 +0xa1:  pop    %ebx
08575da8 +0xa2:  pop    %esi
08575da9 +0xa3:  pop    %ebp
08575daa +0xa4:  ret
08575dab +0xa5:  nop
```

## 反编译 C

```c
// CodeHackCheckStorage::PopData @ 0x8575d06

/* CodeHackCheckStorage::PopData(char*) */

bool __thiscall CodeHackCheckStorage::PopData(CodeHackCheckStorage *this,char *param_1)

{
  char cVar1;
  CodeHackChecksumEx *pCVar2;
  char *__src;
  CodeHackChecksumEx local_124 [280];
  
  cVar1 = IsEmpty(this);
  if (cVar1 == '\0') {
    pCVar2 = (CodeHackChecksumEx *)
             std::
             queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
             ::front();
    CodeHackChecksumEx::CodeHackChecksumEx(local_124,pCVar2);
                    /* try { // try from 08575d4a to 08575d5c has its CatchHandler @ 08575d81 */
    std::queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
    ::pop((queue<CodeHackChecksumEx,std::deque<CodeHackChecksumEx,std::allocator<CodeHackChecksumEx>>>
           *)this);
    __src = (char *)CodeHackChecksumEx::GetFileName(local_124);
    strcpy(param_1,__src);
    CodeHackChecksumEx::~CodeHackChecksumEx(local_124);
  }
  return cVar1 == '\0';
}
```
