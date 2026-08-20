# switchInputStream

`_ZN13DNFLexWrapper17switchInputStreamEPKcS1_PN6DNFLex13stream_data_tE`

`DNFLexWrapper::switchInputStream(char const*, char const*, DNFLex::stream_data_t*)`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08aceaa0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08aceaa0  _ZN13DNFLexWrapper17switchInputStreamEPKcS1_PN6DNFLex13stream_data_tE
#           DNFLexWrapper::switchInputStream(char const*, char const*, DNFLex::stream_data_t*)
# range [0x08aceaa0, 0x08acec79]
08aceaa0 +0x000:  push   %ebp
08aceaa1 +0x001:  mov    %esp,%ebp
08aceaa3 +0x003:  sub    $0x458,%esp
08aceaa9 +0x009:  mov    %ebx,-0xc(%ebp)
08aceaac +0x00c:  mov    0x14(%ebp),%ebx
08aceaaf +0x00f:  mov    %esi,-0x8(%ebp)
08aceab2 +0x012:  mov    0x8(%ebp),%esi
08aceab5 +0x015:  mov    %edi,-0x4(%ebp)
08aceab8 +0x018:  mov    0xc(%ebp),%edi
08aceabb +0x01b:  test   %ebx,%ebx
08aceabd +0x01d:  je     08aceba0 <+0x100>
08aceac3 +0x023:  cmpl   $0x1,0x4(%ebx)
08aceac7 +0x027:  jbe    08aceb0c <+0x6c>
08aceac9 +0x029:  lea    -0x1a(%ebp),%eax
08aceacc +0x02c:  movl   $0x2,0x8(%esp)
08acead4 +0x034:  mov    %eax,0x4(%esp)
08acead8 +0x038:  mov    (%ebx),%eax
08aceada +0x03a:  mov    %eax,(%esp)
08aceadd +0x03d:  call   086e5bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5b50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5b50
08aceae2 +0x042:  movl   $0x1,0xc(%esp)
08aceaea +0x04a:  movl   $0xfffffffe,0x4(%esp)
08aceaf2 +0x052:  movl   $0xffffffff,0x8(%esp)
08aceafa +0x05a:  mov    (%ebx),%eax
08aceafc +0x05c:  mov    %eax,(%esp)
08aceaff +0x05f:  call   086e29d0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x2930>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x2930
08aceb04 +0x064:  cmpw   $0xd0b0,-0x1a(%ebp)
08aceb0a +0x06a:  je     08aceb40 <+0xa0>
08aceb0c +0x06c:  mov    0x10(%ebp),%eax
08aceb0f +0x06f:  movl   $0x0,0x14(%esi)
08aceb16 +0x076:  add    $0x18,%esi
08aceb19 +0x079:  mov    %ebx,0xc(%esp)
08aceb1d +0x07d:  mov    %edi,0x4(%esp)
08aceb21 +0x081:  mov    %eax,0x8(%esp)
08aceb25 +0x085:  mov    %esi,(%esp)
08aceb28 +0x088:  call   08acda50 <_ZN6DNFLex17SwitchInputStreamEPKcS1_PNS_13stream_data_tE>  ; DNFLex::SwitchInputStream(char const*, char const*, DNFLex::stream_data_t*)
08aceb2d +0x08d:  mov    -0xc(%ebp),%ebx
08aceb30 +0x090:  mov    -0x8(%ebp),%esi
08aceb33 +0x093:  mov    -0x4(%ebp),%edi
08aceb36 +0x096:  mov    %ebp,%esp
08aceb38 +0x098:  pop    %ebp
08aceb39 +0x099:  ret
08aceb3a +0x09a:  lea    0x0(%esi),%esi
08aceb40 +0x0a0:  mov    0x8(%ebx),%eax
08aceb43 +0x0a3:  movl   $0x1,0x14(%esi)
08aceb4a +0x0aa:  test   %eax,%eax
08aceb4c +0x0ac:  je     08acec20 <+0x180>
08aceb52 +0x0b2:  mov    0x4(%ebx),%edx
08aceb55 +0x0b5:  add    $0x40bc,%esi
08aceb5b +0x0bb:  mov    %eax,0xc(%esp)
08aceb5f +0x0bf:  mov    0x10(%ebp),%eax
08aceb62 +0x0c2:  mov    %edi,0x4(%esp)
08aceb66 +0x0c6:  mov    %esi,(%esp)
08aceb69 +0x0c9:  mov    %edx,0x10(%esp)
08aceb6d +0x0cd:  mov    %eax,0x8(%esp)
08aceb71 +0x0d1:  call   08ad0f40 <_ZN14CompiledDNFLex17SwitchInputStreamEPKcS1_Pcj>  ; CompiledDNFLex::SwitchInputStream(char const*, char const*, char*, unsigned int)
08aceb76 +0x0d6:  mov    (%ebx),%edx
08aceb78 +0x0d8:  test   %edx,%edx
08aceb7a +0x0da:  je     08aceb2d <+0x8d>
08aceb7c +0x0dc:  mov    (%edx),%ecx
08aceb7e +0x0de:  mov    %al,-0x42c(%ebp)
08aceb84 +0x0e4:  mov    %edx,(%esp)
08aceb87 +0x0e7:  call   *0x4(%ecx)
08aceb8a +0x0ea:  movzbl -0x42c(%ebp),%eax
08aceb91 +0x0f1:  mov    -0xc(%ebp),%ebx
08aceb94 +0x0f4:  mov    -0x8(%ebp),%esi
08aceb97 +0x0f7:  mov    -0x4(%ebp),%edi
08aceb9a +0x0fa:  mov    %ebp,%esp
08aceb9c +0x0fc:  pop    %ebp
08aceb9d +0x0fd:  ret
08aceb9e +0x0fe:  xchg   %ax,%ax
08aceba0 +0x100:  lea    -0x28(%ebp),%ebx
08aceba3 +0x103:  mov    %ebx,(%esp)
08aceba6 +0x106:  call   08acd140 <_ZN6DNFLex13stream_data_t5clearEv>  ; DNFLex::stream_data_t::clear()
08acebab +0x10b:  mov    0x10(%ebp),%eax
08acebae +0x10e:  mov    %ebx,0xc(%esp)
08acebb2 +0x112:  mov    %edi,0x4(%esp)
08acebb6 +0x116:  mov    %esi,(%esp)
08acebb9 +0x119:  mov    %eax,0x8(%esp)
08acebbd +0x11d:  call   08ace2b0 <_ZN13DNFLexWrapper10LoadStreamEPKcS1_PN6DNFLex13stream_data_tE>  ; DNFLexWrapper::LoadStream(char const*, char const*, DNFLex::stream_data_t*)
08acebc2 +0x122:  test   %al,%al
08acebc4 +0x124:  jne    08aceac3 <+0x23>
08acebca +0x12a:  mov    0x6108(%esi),%ebx
08acebd0 +0x130:  test   %ebx,%ebx
08acebd2 +0x132:  je     08aceb2d <+0x8d>
08acebd8 +0x138:  mov    0x10(%ebp),%eax
08acebdb +0x13b:  mov    %eax,(%esp)
08acebde +0x13e:  call   08adee98 <_Z6toMbcsPKc>  ; toMbcs(char const*)
08acebe3 +0x143:  mov    %edi,(%esp)
08acebe6 +0x146:  mov    %eax,%ebx
08acebe8 +0x148:  call   08adee98 <_Z6toMbcsPKc>  ; toMbcs(char const*)
08acebed +0x14d:  mov    %ebx,0xc(%esp)
08acebf1 +0x151:  lea    -0x428(%ebp),%ebx
08acebf7 +0x157:  movl   $"%s/%s Read failed!",0x4(%esp)
08acebff +0x15f:  mov    %ebx,(%esp)
08acec02 +0x162:  mov    %eax,0x8(%esp)
08acec06 +0x166:  call   08acf0e0 <_ZN13DNFLexWrapper24switchChannelInputStreamEPKcPN6DNFLex13stream_data_tE+0x80>  ; DNFLexWrapper::switchChannelInputStream(char const*, DNFLex::stream_data_t*)+0x80
08acec0b +0x16b:  mov    %ebx,(%esp)
08acec0e +0x16e:  call   *0x6108(%esi)
08acec14 +0x174:  xor    %eax,%eax
08acec16 +0x176:  jmp    08aceb2d <+0x8d>
08acec1b +0x17b:  nop
08acec1c +0x17c:  lea    0x0(%esi,%eiz,1),%esi
08acec20 +0x180:  mov    0x4(%ebx),%eax
08acec23 +0x183:  add    $0x40bc,%esi
08acec29 +0x189:  mov    %eax,(%esp)
08acec2c +0x18c:  call   08722dc0 <_Znaj>  ; operator new[](unsigned int)
08acec31 +0x191:  mov    %eax,%edx
08acec33 +0x193:  mov    0x4(%ebx),%eax
08acec36 +0x196:  mov    %edx,0x4(%esp)
08acec3a +0x19a:  mov    %edx,-0x42c(%ebp)
08acec40 +0x1a0:  mov    %eax,0x8(%esp)
08acec44 +0x1a4:  mov    (%ebx),%eax
08acec46 +0x1a6:  mov    %eax,(%esp)
08acec49 +0x1a9:  call   086e5bf0 <_ZSt20_Rb_tree_black_countPKSt18_Rb_tree_node_baseS1_+0x5b50>  ; std::_Rb_tree_black_count(std::_Rb_tree_node_base const*, std::_Rb_tree_node_base const*)+0x5b50
08acec4e +0x1ae:  mov    0x4(%ebx),%eax
08acec51 +0x1b1:  mov    -0x42c(%ebp),%edx
08acec57 +0x1b7:  mov    %edi,0x4(%esp)
08acec5b +0x1bb:  mov    %esi,(%esp)
08acec5e +0x1be:  mov    %eax,0x10(%esp)
08acec62 +0x1c2:  mov    0x10(%ebp),%eax
08acec65 +0x1c5:  mov    %edx,0xc(%esp)
08acec69 +0x1c9:  mov    %eax,0x8(%esp)
08acec6d +0x1cd:  call   08ad0f40 <_ZN14CompiledDNFLex17SwitchInputStreamEPKcS1_Pcj>  ; CompiledDNFLex::SwitchInputStream(char const*, char const*, char*, unsigned int)
08acec72 +0x1d2:  jmp    08aceb2d <+0x8d>
08acec77 +0x1d7:  nop
08acec78 +0x1d8:  nop
08acec79 +0x1d9:  lea    0x0(%esi,%eiz,1),%esi
```

## 反编译 C

```c
// DNFLexWrapper::switchInputStream @ 0x8aceaa0

/* DWARF original prototype: bool switchInputStream(DNFLexWrapper * this, TCHAR * dir, TCHAR *
   filename, stream_data_t * s) */

bool __thiscall
DNFLexWrapper::switchInputStream(DNFLexWrapper *this,TCHAR *dir,TCHAR *filename,stream_data_t *s)

{
  istream *piVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char local_42c [1024];
  stream_data_t local_2c;
  short local_1e [7];
  
                    /* Unresolved local var: stream_data_t s_created@[???] */
  if (s == (stream_data_t *)0x0) {
    s = &local_2c;
    DNFLex::stream_data_t::clear(s);
    bVar2 = LoadStream(this,dir,filename,s);
    if (!bVar2) {
      if (this->LexerError_ == (TLexerError)0x0) {
        return bVar2;
      }
                    /* Unresolved local var: char[1024] buf@[???] */
      pcVar4 = toMbcs(filename);
      pcVar3 = toMbcs(dir);
      ss_sprintf<1024u>(&local_42c,"%s/%s Read failed!",pcVar3,pcVar4);
      (*this->LexerError_)(local_42c);
      return false;
    }
  }
  if (1 < s->size) {
                    /* Unresolved local var: uint16 compiled_script_magic@[???] */
    std::istream::read((istream *)s->stream,(char *)local_1e,2);
    std::istream::seekg(CONCAT44(0xfffffffe,s->stream),~_S_beg);
    if (local_1e[0] == -0x2f50) {
      pcVar4 = s->buffer;
      this->lexType_ = LEX_TYPE_COMPILED;
      if (pcVar4 == (char *)0x0) {
                    /* Unresolved local var: char * buf@[???] */
        pcVar4 = operator_new__(s->size);
        std::istream::read((istream *)s->stream,pcVar4,s->size);
        bVar2 = CompiledDNFLex::SwitchInputStream
                          (&this->compiledDnfLex_,dir,filename,pcVar4,s->size);
        return bVar2;
      }
                    /* Unresolved local var: bool ret@[???] */
      bVar2 = CompiledDNFLex::SwitchInputStream(&this->compiledDnfLex_,dir,filename,pcVar4,s->size);
      piVar1 = s->stream;
      if (piVar1 == (istream *)0x0) {
        return bVar2;
      }
      (**(code **)(*(int *)piVar1 + 4))(piVar1);
      return bVar2;
    }
  }
  this->lexType_ = LEX_TYPE_NORMAL;
  bVar2 = DNFLex::SwitchInputStream(&this->dnfLex_,dir,filename,s);
  return bVar2;
}
```
