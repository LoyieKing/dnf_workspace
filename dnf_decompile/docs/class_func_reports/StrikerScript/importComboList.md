# importComboList

`_ZN13StrikerScript15importComboListEv`

`StrikerScript::importComboList()`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9e79c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9e79c  _ZN13StrikerScript15importComboListEv
#           StrikerScript::importComboList()
# range [0x08a9e79c, 0x08a9e7df]
08a9e79c +0x00:  push   %ebp
08a9e79d +0x01:  mov    %esp,%ebp
08a9e79f +0x03:  sub    $0x18,%esp
08a9e7a2 +0x06:  mov    0x8(%ebp),%eax
08a9e7a5 +0x09:  mov    0x90(%eax),%eax
08a9e7ab +0x0f:  movl   $0x0,0xc(%esp)
08a9e7b3 +0x17:  movl   $"etc/LinkSystem/strikercombo.lst",0x8(%esp)
08a9e7bb +0x1f:  movl   $"",0x4(%esp)
08a9e7c3 +0x27:  mov    %eax,(%esp)
08a9e7c6 +0x2a:  call   088bbd77 <_Z22loadRDARScriptListFileP16STScriptFileListPKcS2_PSt3mapIiiSt4lessIiESaISt4pairIKiiEEE>  ; loadRDARScriptListFile(STScriptFileList*, char const*, char const*, std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >*)
08a9e7cb +0x2f:  xor    $0x1,%eax
08a9e7ce +0x32:  test   %al,%al
08a9e7d0 +0x34:  je     08a9e7d9 <+0x3d>
08a9e7d2 +0x36:  mov    $0x0,%eax
08a9e7d7 +0x3b:  jmp    08a9e7de <+0x42>
08a9e7d9 +0x3d:  mov    $0x1,%eax
08a9e7de +0x42:  leave
08a9e7df +0x43:  ret
```

## 反编译 C

```c
// StrikerScript::importComboList @ 0x8a9e79c

/* StrikerScript::importComboList() */

bool __thiscall StrikerScript::importComboList(StrikerScript *this)

{
  char cVar1;
  
  cVar1 = loadRDARScriptListFile
                    (*(STScriptFileList **)(this + 0x90),"","etc/LinkSystem/strikercombo.lst",
                     (map *)0x0);
  return cVar1 == '\x01';
}
```
