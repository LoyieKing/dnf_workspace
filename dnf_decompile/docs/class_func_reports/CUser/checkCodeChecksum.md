# checkCodeChecksum

`_ZN5CUser17checkCodeChecksumERK16CodeHackChecksumPc`

`CUser::checkCodeChecksum(CodeHackChecksum const&, char*)`

| 类 | 地址 |
|---|---|
| `CUser` | `0x0867ebba` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0867ebba  _ZN5CUser17checkCodeChecksumERK16CodeHackChecksumPc
#           CUser::checkCodeChecksum(CodeHackChecksum const&, char*)
# range [0x0867ebba, 0x0867ec11]
0867ebba +0x00:  push   %ebp
0867ebbb +0x01:  mov    %esp,%ebp
0867ebbd +0x03:  sub    $0x18,%esp
0867ebc0 +0x06:  mov    0x8(%ebp),%eax
0867ebc3 +0x09:  lea    0x795fc(%eax),%edx
0867ebc9 +0x0f:  mov    0xc(%ebp),%eax
0867ebcc +0x12:  mov    %eax,0x4(%esp)
0867ebd0 +0x16:  mov    %edx,(%esp)
0867ebd3 +0x19:  call   08575dc4 <_ZN20CodeHackCheckStorage15IsRightChecksumEPK16CodeHackChecksum>  ; CodeHackCheckStorage::IsRightChecksum(CodeHackChecksum const*)
0867ebd8 +0x1e:  test   %al,%al
0867ebda +0x20:  je     0867ebf3 <+0x39>
0867ebdc +0x22:  mov    0x8(%ebp),%eax
0867ebdf +0x25:  add    $0x795fc,%eax
0867ebe4 +0x2a:  mov    %eax,(%esp)
0867ebe7 +0x2d:  call   08575dac <_ZN20CodeHackCheckStorage7PopDataEv>  ; CodeHackCheckStorage::PopData()
0867ebec +0x32:  mov    $0x1,%eax
0867ebf1 +0x37:  jmp    0867ec10 <+0x56>
0867ebf3 +0x39:  mov    0x8(%ebp),%eax
0867ebf6 +0x3c:  lea    0x795fc(%eax),%edx
0867ebfc +0x42:  mov    0x10(%ebp),%eax
0867ebff +0x45:  mov    %eax,0x4(%esp)
0867ec03 +0x49:  mov    %edx,(%esp)
0867ec06 +0x4c:  call   08575d06 <_ZN20CodeHackCheckStorage7PopDataEPc>  ; CodeHackCheckStorage::PopData(char*)
0867ec0b +0x51:  mov    $0x0,%eax
0867ec10 +0x56:  leave
0867ec11 +0x57:  ret
```

## 反编译 C

```c
// CUser::checkCodeChecksum @ 0x867ebba

/* CUser::checkCodeChecksum(CodeHackChecksum const&, char*) */

bool __thiscall CUser::checkCodeChecksum(CUser *this,CodeHackChecksum *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = CodeHackCheckStorage::IsRightChecksum((CodeHackCheckStorage *)(this + 0x795fc),param_1);
  if (cVar1 == '\0') {
    CodeHackCheckStorage::PopData((CodeHackCheckStorage *)(this + 0x795fc),param_2);
  }
  else {
    CodeHackCheckStorage::PopData((CodeHackCheckStorage *)(this + 0x795fc));
  }
  return cVar1 != '\0';
}
```
