# create

`_ZN13StrikerScript6createEv`

`StrikerScript::create()`

| 类 | 地址 |
|---|---|
| `StrikerScript` | `0x08a9dc70` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08a9dc70  _ZN13StrikerScript6createEv
#           StrikerScript::create()
# range [0x08a9dc70, 0x08a9dcbd]
08a9dc70 +0x00:  push   %ebp
08a9dc71 +0x01:  mov    %esp,%ebp
08a9dc73 +0x03:  push   %edi
08a9dc74 +0x04:  push   %esi
08a9dc75 +0x05:  push   %ebx
08a9dc76 +0x06:  sub    $0x1c,%esp
08a9dc79 +0x09:  movl   $0x18,(%esp)
08a9dc80 +0x10:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08a9dc85 +0x15:  mov    %eax,%ebx
08a9dc87 +0x17:  mov    %ebx,%eax
08a9dc89 +0x19:  mov    %eax,(%esp)
08a9dc8c +0x1c:  call   088bacf8 <_ZN16STScriptFileListC1Ev>  ; STScriptFileList::STScriptFileList()
08a9dc91 +0x21:  jmp    08a9dcab <+0x3b>
08a9dc93 +0x23:  mov    %edx,%esi
08a9dc95 +0x25:  mov    %eax,%edi
08a9dc97 +0x27:  mov    %ebx,(%esp)
08a9dc9a +0x2a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08a9dc9f +0x2f:  mov    %edi,%eax
08a9dca1 +0x31:  mov    %esi,%edx
08a9dca3 +0x33:  mov    %eax,(%esp)
08a9dca6 +0x36:  call   08ae3750 <_Unwind_Resume>
08a9dcab +0x3b:  mov    %ebx,%edx
08a9dcad +0x3d:  mov    0x8(%ebp),%eax
08a9dcb0 +0x40:  mov    %edx,0x90(%eax)
08a9dcb6 +0x46:  add    $0x1c,%esp
08a9dcb9 +0x49:  pop    %ebx
08a9dcba +0x4a:  pop    %esi
08a9dcbb +0x4b:  pop    %edi
08a9dcbc +0x4c:  pop    %ebp
08a9dcbd +0x4d:  ret
```

## 反编译 C

```c
// StrikerScript::create @ 0x8a9dc70

/* StrikerScript::create() */

void __thiscall StrikerScript::create(StrikerScript *this)

{
  STScriptFileList *this_00;
  
  this_00 = operator_new(0x18);
                    /* try { // try from 08a9dc8c to 08a9dc90 has its CatchHandler @ 08a9dc93 */
  STScriptFileList::STScriptFileList(this_00);
  *(STScriptFileList **)(this + 0x90) = this_00;
  return;
}
```
