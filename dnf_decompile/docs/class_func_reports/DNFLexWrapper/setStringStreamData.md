# setStringStreamData

`_ZN13DNFLexWrapper19setStringStreamDataEPN6DNFLex13stream_data_tEPcj`

`DNFLexWrapper::setStringStreamData(DNFLex::stream_data_t*, char*, unsigned int)`

| 类 | 地址 |
|---|---|
| `DNFLexWrapper` | `0x08ace9b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ace9b0  _ZN13DNFLexWrapper19setStringStreamDataEPN6DNFLex13stream_data_tEPcj
#           DNFLexWrapper::setStringStreamData(DNFLex::stream_data_t*, char*, unsigned int)
# range [0x08ace9b0, 0x08acea6a]
08ace9b0 +0x00:  push   %ebp
08ace9b1 +0x01:  mov    %esp,%ebp
08ace9b3 +0x03:  sub    $0x28,%esp
08ace9b6 +0x06:  mov    %esi,-0x8(%ebp)
08ace9b9 +0x09:  mov    0x14(%ebp),%esi
08ace9bc +0x0c:  mov    %ebx,-0xc(%ebp)
08ace9bf +0x0f:  mov    0xc(%ebp),%ebx
08ace9c2 +0x12:  mov    %edi,-0x4(%ebp)
08ace9c5 +0x15:  test   %esi,%esi
08ace9c7 +0x17:  je     08acea08 <+0x58>
08ace9c9 +0x19:  movl   $0xbc,(%esp)
08ace9d0 +0x20:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08ace9d5 +0x25:  mov    %esi,0x8(%esp)
08ace9d9 +0x29:  mov    %eax,%edi
08ace9db +0x2b:  mov    0x10(%ebp),%eax
08ace9de +0x2e:  mov    %edi,(%esp)
08ace9e1 +0x31:  mov    %eax,0x4(%esp)
08ace9e5 +0x35:  call   086debe0 <_ZNSt10istrstreamC1EPci>  ; std::istrstream::istrstream(char*, int)
08ace9ea +0x3a:  mov    0x10(%ebp),%eax
08ace9ed +0x3d:  mov    %edi,(%ebx)
08ace9ef +0x3f:  mov    %esi,0x4(%ebx)
08ace9f2 +0x42:  mov    %eax,0x8(%ebx)
08ace9f5 +0x45:  mov    -0xc(%ebp),%ebx
08ace9f8 +0x48:  mov    $0x1,%eax
08ace9fd +0x4d:  mov    -0x8(%ebp),%esi
08acea00 +0x50:  mov    -0x4(%ebp),%edi
08acea03 +0x53:  mov    %ebp,%esp
08acea05 +0x55:  pop    %ebp
08acea06 +0x56:  ret
08acea07 +0x57:  nop
08acea08 +0x58:  mov    0x10(%ebp),%eax
08acea0b +0x5b:  mov    %eax,(%esp)
08acea0e +0x5e:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08acea13 +0x63:  movl   $0xbc,(%esp)
08acea1a +0x6a:  call   08724450 <_Znwj>  ; operator new(unsigned int)
08acea1f +0x6f:  movl   $0x1,0x8(%esp)
08acea27 +0x77:  mov    %eax,%esi
08acea29 +0x79:  mov    &_ZZN13DNFLexWrapper19setStringStreamDataEPN6DNFLex13stream_data_tEPcjE9kEmptyBuf,%eax
08acea2e +0x7e:  mov    %esi,(%esp)
08acea31 +0x81:  mov    %eax,0x4(%esp)
08acea35 +0x85:  call   086de8f0 <_ZNSt10istrstreamC1EPKci>  ; std::istrstream::istrstream(char const*, int)
08acea3a +0x8a:  mov    %esi,(%ebx)
08acea3c +0x8c:  movl   $0x1,0x4(%ebx)
08acea43 +0x93:  jmp    08ace9f5 <+0x45>
08acea45 +0x95:  mov    %eax,%ebx
08acea47 +0x97:  mov    %edi,(%esp)
08acea4a +0x9a:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08acea4f +0x9f:  mov    %ebx,(%esp)
08acea52 +0xa2:  call   08ae3750 <_Unwind_Resume>
08acea57 +0xa7:  mov    %eax,%ebx
08acea59 +0xa9:  mov    %esi,(%esp)
08acea5c +0xac:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
08acea61 +0xb1:  mov    %ebx,(%esp)
08acea64 +0xb4:  call   08ae3750 <_Unwind_Resume>
08acea69 +0xb9:  nop
08acea6a +0xba:  lea    0x0(%esi),%esi
```

## 反编译 C

```c
// DNFLexWrapper::setStringStreamData @ 0x8ace9b0

/* DWARF original prototype: bool setStringStreamData(DNFLexWrapper * this, stream_data_t * s, char
   * buffer, uint32 bufferSize) */

bool __thiscall
DNFLexWrapper::setStringStreamData
          (DNFLexWrapper *this,stream_data_t *s,char *buffer,uint32 bufferSize)

{
  istrstream *piVar1;
  
  if (bufferSize == 0) {
    operator_delete(buffer);
    piVar1 = operator_new(0xbc);
                    /* try { // try from 08acea35 to 08acea39 has its CatchHandler @ 08acea57 */
    std::istrstream::istrstream(piVar1,setStringStreamData::lexical_block_0::kEmptyBuf,1);
    s->stream = (istream *)piVar1;
    s->size = 1;
  }
  else {
    piVar1 = operator_new(0xbc);
                    /* try { // try from 08ace9e5 to 08ace9e9 has its CatchHandler @ 08acea45 */
    std::istrstream::istrstream(piVar1,buffer,bufferSize);
    s->stream = (istream *)piVar1;
    s->size = bufferSize;
    s->buffer = buffer;
  }
  return true;
}
```
