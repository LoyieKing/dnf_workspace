# switchChannelInputStream

`_ZN13DNFLexWrapper24switchChannelInputStreamEPKcPN6DNFLex13stream_data_tE`

`DNFLexWrapper::switchChannelInputStream(char const*, DNFLex::stream_data_t*)`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08acf060` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08acf060  _ZN13DNFLexWrapper24switchChannelInputStreamEPKcPN6DNFLex13stream_data_tE
#           DNFLexWrapper::switchChannelInputStream(char const*, DNFLex::stream_data_t*)
# range [0x08acf060, 0x08acf10f]
08acf060 +0x00:  push   %ebp
08acf061 +0x01:  mov    %esp,%ebp
08acf063 +0x03:  sub    $0x38,%esp
08acf066 +0x06:  mov    %edi,-0x4(%ebp)
08acf069 +0x09:  mov    0x10(%ebp),%edi
08acf06c +0x0c:  mov    %ebx,-0xc(%ebp)
08acf06f +0x0f:  mov    0x8(%ebp),%ebx
08acf072 +0x12:  mov    %esi,-0x8(%ebp)
08acf075 +0x15:  mov    0xc(%ebp),%esi
08acf078 +0x18:  test   %edi,%edi
08acf07a +0x1a:  je     08acf0b0 <+0x50>
08acf07c +0x1c:  movl   $0x0,0x14(%ebx)
08acf083 +0x23:  add    $0x18,%ebx
08acf086 +0x26:  mov    %edi,0xc(%esp)
08acf08a +0x2a:  mov    %esi,0x8(%esp)
08acf08e +0x2e:  movl   $&data#2fb52a47(.rodata),0x4(%esp)
08acf096 +0x36:  mov    %ebx,(%esp)
08acf099 +0x39:  call   08acda50 <_ZN6DNFLex17SwitchInputStreamEPKcS1_PNS_13stream_data_tE>  ; DNFLex::SwitchInputStream(char const*, char const*, DNFLex::stream_data_t*)
08acf09e +0x3e:  mov    -0xc(%ebp),%ebx
08acf0a1 +0x41:  mov    -0x8(%ebp),%esi
08acf0a4 +0x44:  mov    -0x4(%ebp),%edi
08acf0a7 +0x47:  mov    %ebp,%esp
08acf0a9 +0x49:  pop    %ebp
08acf0aa +0x4a:  ret
08acf0ab +0x4b:  nop
08acf0ac +0x4c:  lea    0x0(%esi,%eiz,1),%esi
08acf0b0 +0x50:  lea    -0x24(%ebp),%edi
08acf0b3 +0x53:  mov    %edi,(%esp)
08acf0b6 +0x56:  call   08acd140 <_ZN6DNFLex13stream_data_t5clearEv>  ; DNFLex::stream_data_t::clear()
08acf0bb +0x5b:  mov    %esi,0x8(%esp)
08acf0bf +0x5f:  mov    %edi,0x4(%esp)
08acf0c3 +0x63:  mov    %ebx,(%esp)
08acf0c6 +0x66:  call   08acede0 <_ZN13DNFLexWrapper17setFileStreamDataEPN6DNFLex13stream_data_tEPKc>  ; DNFLexWrapper::setFileStreamData(DNFLex::stream_data_t*, char const*)
08acf0cb +0x6b:  mov    %eax,%edx
08acf0cd +0x6d:  xor    %eax,%eax
08acf0cf +0x6f:  test   %dl,%dl
08acf0d1 +0x71:  jne    08acf07c <+0x1c>
08acf0d3 +0x73:  jmp    08acf09e <+0x3e>
08acf0d5 +0x75:  nop
08acf0d6 +0x76:  nop
08acf0d7 +0x77:  nop
08acf0d8 +0x78:  nop
08acf0d9 +0x79:  nop
08acf0da +0x7a:  nop
08acf0db +0x7b:  nop
08acf0dc +0x7c:  nop
08acf0dd +0x7d:  nop
08acf0de +0x7e:  nop
08acf0df +0x7f:  nop
08acf0e0 +0x80:  push   %ebp
08acf0e1 +0x81:  mov    %esp,%ebp
08acf0e3 +0x83:  sub    $0x18,%esp
08acf0e6 +0x86:  lea    0x10(%ebp),%eax
08acf0e9 +0x89:  mov    %eax,0xc(%esp)
08acf0ed +0x8d:  mov    0xc(%ebp),%eax
08acf0f0 +0x90:  movl   $0x400,0x4(%esp)
08acf0f8 +0x98:  mov    %eax,0x8(%esp)
08acf0fc +0x9c:  mov    0x8(%ebp),%eax
08acf0ff +0x9f:  mov    %eax,(%esp)
08acf102 +0xa2:  call   08ad457c <_Z11ss_vsprintfPcjPKcS_>  ; ss_vsprintf(char*, unsigned int, char const*, char*)
08acf107 +0xa7:  leave
08acf108 +0xa8:  ret
08acf109 +0xa9:  nop
08acf10a +0xaa:  nop
08acf10b +0xab:  nop
08acf10c +0xac:  nop
08acf10d +0xad:  nop
08acf10e +0xae:  nop
08acf10f +0xaf:  nop
```

## 反编译 C

```c
// DNFLexWrapper::switchChannelInputStream @ 0x8acf060

/* DWARF original prototype: bool switchChannelInputStream(DNFLexWrapper * this, TCHAR * filename,
   stream_data_t * s) */

bool __thiscall
DNFLexWrapper::switchChannelInputStream(DNFLexWrapper *this,TCHAR *filename,stream_data_t *s)

{
  bool bVar1;
  stream_data_t local_28 [2];
  
                    /* Unresolved local var: stream_data_t s_created@[???] */
  if (s == (stream_data_t *)0x0) {
    s = local_28;
    DNFLex::stream_data_t::clear(s);
    bVar1 = setFileStreamData(this,s,filename);
    if (!bVar1) {
      return false;
    }
  }
  this->lexType_ = LEX_TYPE_NORMAL;
  bVar1 = DNFLex::SwitchInputStream(&this->dnfLex_,"",filename,s);
  return bVar1;
}
```
