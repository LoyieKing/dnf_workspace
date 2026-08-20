# getStr

`_ZN14CompiledDNFLex6getStrEPci`

`CompiledDNFLex::getStr(char*, int)`

| 类 | 地址 |
|---|---|
| `CompiledDNFLex` | `0x08ad0190` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 08ad0190  _ZN14CompiledDNFLex6getStrEPci
#           CompiledDNFLex::getStr(char*, int)
# range [0x08ad0190, 0x08ad024f]
08ad0190 +0x00:  push   %ebp
08ad0191 +0x01:  mov    %esp,%ebp
08ad0193 +0x03:  sub    $0x28,%esp
08ad0196 +0x06:  mov    0x8(%ebp),%edx
08ad0199 +0x09:  mov    %ebx,-0xc(%ebp)
08ad019c +0x0c:  mov    0xc(%ebp),%ebx
08ad019f +0x0f:  mov    %esi,-0x8(%ebp)
08ad01a2 +0x12:  mov    0x10(%ebp),%esi
08ad01a5 +0x15:  mov    %edi,-0x4(%ebp)
08ad01a8 +0x18:  mov    0x8(%edx),%eax
08ad01ab +0x1b:  lea    -0x2(%eax),%ecx
08ad01ae +0x1e:  cmp    $0x1,%ecx
08ad01b1 +0x21:  jbe    08ad01b8 <+0x28>
08ad01b3 +0x23:  cmp    $0x9,%eax
08ad01b6 +0x26:  jne    08ad01c8 <+0x38>
08ad01b8 +0x28:  mov    -0xc(%ebp),%ebx
08ad01bb +0x2b:  xor    %eax,%eax
08ad01bd +0x2d:  mov    -0x8(%ebp),%esi
08ad01c0 +0x30:  mov    -0x4(%ebp),%edi
08ad01c3 +0x33:  mov    %ebp,%esp
08ad01c5 +0x35:  pop    %ebp
08ad01c6 +0x36:  ret
08ad01c7 +0x37:  nop
08ad01c8 +0x38:  cmp    $0x4,%eax
08ad01cb +0x3b:  je     08ad01b8 <+0x28>
08ad01cd +0x3d:  test   %eax,%eax
08ad01cf +0x3f:  je     08ad01b8 <+0x28>
08ad01d1 +0x41:  cmp    $0x1,%eax
08ad01d4 +0x44:  je     08ad01b8 <+0x28>
08ad01d6 +0x46:  mov    0x4(%edx),%ecx
08ad01d9 +0x49:  mov    (%ecx),%eax
08ad01db +0x4b:  add    $0x4,%ecx
08ad01de +0x4e:  mov    %ecx,0x4(%edx)
08ad01e1 +0x51:  mov    %eax,&_ZZ17readIntFromBufferRPcE9intBuffer
08ad01e6 +0x56:  mov    %eax,0x4(%esp)
08ad01ea +0x5a:  mov    0x10(%edx),%eax
08ad01ed +0x5d:  mov    %eax,(%esp)
08ad01f0 +0x60:  call   08acf1f0 <_ZNK19ScriptStringManager9getStringEi>  ; ScriptStringManager::getString(int) const
08ad01f5 +0x65:  mov    (%eax),%eax
08ad01f7 +0x67:  mov    -0xc(%eax),%edi
08ad01fa +0x6a:  cmp    %esi,%edi
08ad01fc +0x6c:  jg     08ad0228 <+0x98>
08ad01fe +0x6e:  mov    %edi,0x8(%esp)
08ad0202 +0x72:  mov    %ebx,(%esp)
08ad0205 +0x75:  mov    %eax,0x4(%esp)
08ad0209 +0x79:  call   0807d8a0 <_init+0x198>
08ad020e +0x7e:  mov    $0x1,%eax
08ad0213 +0x83:  movb   $0x0,(%ebx,%edi,1)
08ad0217 +0x87:  mov    -0xc(%ebp),%ebx
08ad021a +0x8a:  mov    -0x8(%ebp),%esi
08ad021d +0x8d:  mov    -0x4(%ebp),%edi
08ad0220 +0x90:  mov    %ebp,%esp
08ad0222 +0x92:  pop    %ebp
08ad0223 +0x93:  ret
08ad0224 +0x94:  lea    0x0(%esi,%eiz,1),%esi
08ad0228 +0x98:  sub    $0x1,%esi
08ad022b +0x9b:  mov    %esi,0x8(%esp)
08ad022f +0x9f:  mov    %ebx,(%esp)
08ad0232 +0xa2:  mov    %eax,0x4(%esp)
08ad0236 +0xa6:  call   0807d8a0 <_init+0x198>
08ad023b +0xab:  xor    %eax,%eax
08ad023d +0xad:  movb   $0x0,-0x1(%ebx,%edi,1)
08ad0242 +0xb2:  mov    -0xc(%ebp),%ebx
08ad0245 +0xb5:  mov    -0x8(%ebp),%esi
08ad0248 +0xb8:  mov    -0x4(%ebp),%edi
08ad024b +0xbb:  mov    %ebp,%esp
08ad024d +0xbd:  pop    %ebp
08ad024e +0xbe:  ret
08ad024f +0xbf:  nop
```

## 反编译 C

```c
// CompiledDNFLex::getStr @ 0x8ad0190

/* DWARF original prototype: bool getStr(CompiledDNFLex * this, char * buffer, int maxSize) */

bool __thiscall CompiledDNFLex::getStr(CompiledDNFLex *this,char *buffer,int maxSize)

{
  DNFLEX_TOKEN DVar1;
  char *__src;
  size_t __n;
  string *psVar2;
  
                    /* Unresolved local var: bool useStringTable@[???] */
  DVar1 = this->lastToken_;
  if ((((1 < DVar1 - DNF_TOK_DECIMAL) && (DVar1 != DNF_TOK_PAIR_INT)) && (DVar1 != DNF_TOK_FLOAT))
     && ((DVar1 != DNF_TOK_EOF && (DVar1 != DNF_TOK_ERROR)))) {
                    /* Unresolved local var: int index@[???]
                       Unresolved local var: string * r_string@[???]
                       Unresolved local var: int string_length@[???] */
    readIntFromBuffer::lexical_block_0::intBuffer = *(int *)this->offset_;
    this->offset_ = (char *)((int)this->offset_ + 4);
    psVar2 = ScriptStringManager::getString
                       (this->stringManager_,readIntFromBuffer::lexical_block_0::intBuffer);
    __src = (psVar2->_M_dataplus)._M_p;
    __n = *(size_t *)(__src + -0xc);
    if ((int)__n <= maxSize) {
      memcpy(buffer,__src,__n);
      buffer[__n] = '\0';
      return true;
    }
    memcpy(buffer,__src,maxSize - 1);
    buffer[__n - 1] = '\0';
    return false;
  }
  return false;
}
```
