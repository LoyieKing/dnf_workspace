# create

`_ZN14CompiledDNFLex6createEb`

`CompiledDNFLex::create(bool)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad03d0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad03d0  _ZN14CompiledDNFLex6createEb
#           CompiledDNFLex::create(bool)
# range [0x08ad03d0, 0x08ad0459]
08ad03d0 +0x00:  push   %ebp
08ad03d1 +0x01:  mov    %esp,%ebp
08ad03d3 +0x03:  sub    $0x18,%esp
08ad03d6 +0x06:  cmpb   $0x0,0xc(%ebp)
08ad03da +0x0a:  mov    %ebx,-0x8(%ebp)
08ad03dd +0x0d:  mov    0x8(%ebp),%ebx
08ad03e0 +0x10:  mov    %esi,-0x4(%ebp)
08ad03e3 +0x13:  je     08ad03f0 <+0x20>
08ad03e5 +0x15:  mov    0x10(%ebx),%edx
08ad03e8 +0x18:  test   %edx,%edx
08ad03ea +0x1a:  je     08ad0428 <+0x58>
08ad03ec +0x1c:  movb   $0x1,0xc(%ebx)
08ad03f0 +0x20:  mov    0x14(%ebx),%eax
08ad03f3 +0x23:  test   %eax,%eax
08ad03f5 +0x25:  je     08ad0408 <+0x38>
08ad03f7 +0x27:  mov    -0x8(%ebp),%ebx
08ad03fa +0x2a:  mov    -0x4(%ebp),%esi
08ad03fd +0x2d:  mov    %ebp,%esp
08ad03ff +0x2f:  pop    %ebp
08ad0400 +0x30:  ret
08ad0401 +0x31:  lea    0x0(%esi,%eiz,1),%esi
08ad0408 +0x38:  movl   $0x400,(%esp)
08ad040f +0x3f:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08ad0414 +0x44:  mov    %eax,0x14(%ebx)
08ad0417 +0x47:  mov    -0x8(%ebp),%ebx
08ad041a +0x4a:  mov    -0x4(%ebp),%esi
08ad041d +0x4d:  mov    %ebp,%esp
08ad041f +0x4f:  pop    %ebp
08ad0420 +0x50:  ret
08ad0421 +0x51:  lea    0x0(%esi,%eiz,1),%esi
08ad0428 +0x58:  movl   $0x28,(%esp)
08ad042f +0x5f:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ad0434 +0x64:  mov    %eax,%esi
08ad0436 +0x66:  mov    %eax,(%esp)
08ad0439 +0x69:  call   08acf110 <_ZN19ScriptStringManagerC1Ev>  ; ScriptStringManager::ScriptStringManager()
08ad043e +0x6e:  mov    %esi,0x10(%ebx)
08ad0441 +0x71:  jmp    08ad03ec <+0x1c>
08ad0443 +0x73:  mov    %eax,%ebx
08ad0445 +0x75:  mov    %esi,(%esp)
08ad0448 +0x78:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08ad044d +0x7d:  mov    %ebx,(%esp)
08ad0450 +0x80:  call   08ae3750 <_Unwind_Resume>
08ad0455 +0x85:  lea    0x0(%esi,%eiz,1),%esi
08ad0459 +0x89:  lea    0x0(%edi,%eiz,1),%edi
```

## 反编译 C

```c
// CompiledDNFLex::create @ 0x8ad03d0

/* DWARF original prototype: void create(CompiledDNFLex * this, bool createStringTable) */

void __thiscall CompiledDNFLex::create(CompiledDNFLex *this,bool createStringTable)

{
  char *pcVar1;
  ScriptStringManager *this_00;
  
  if (createStringTable) {
    if (this->stringManager_ == (ScriptStringManager *)0x0) {
      this_00 = operator_new(0x28);
                    /* try { // try from 08ad0439 to 08ad043d has its CatchHandler @ 08ad0443 */
      ScriptStringManager::ScriptStringManager(this_00);
      this->stringManager_ = this_00;
    }
    this->stringManagerDelete_ = true;
  }
  if (this->stringBuffer_ != (char *)0x0) {
    return;
  }
  pcVar1 = operator_new__(0x400);
  this->stringBuffer_ = pcVar1;
  return;
}
```
