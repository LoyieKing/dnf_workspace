# dispatch

`_ZN12advancealtar7DB_Load8dispatchEiiP6Stream`

`advancealtar::DB_Load::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Load` | `0x0813ddb2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813ddb2  _ZN12advancealtar7DB_Load8dispatchEiiP6Stream
#           advancealtar::DB_Load::dispatch(int, int, Stream*)
# range [0x0813ddb2, 0x0813de3f]
0813ddb2 +0x00:  push   %ebp
0813ddb3 +0x01:  mov    %esp,%ebp
0813ddb5 +0x03:  sub    $0x38,%esp
0813ddb8 +0x06:  mov    0x8(%ebp),%eax
0813ddbb +0x09:  mov    0x14(%ebp),%edx
0813ddbe +0x0c:  mov    %edx,0xc(%esp)
0813ddc2 +0x10:  mov    0x10(%ebp),%edx
0813ddc5 +0x13:  mov    %edx,0x8(%esp)
0813ddc9 +0x17:  mov    0xc(%ebp),%edx
0813ddcc +0x1a:  mov    %edx,0x4(%esp)
0813ddd0 +0x1e:  mov    %eax,(%esp)
0813ddd3 +0x21:  call   083fbf7c <_ZN12DBDispatcher8dispatchEiiP6Stream>  ; DBDispatcher::dispatch(int, int, Stream*)
0813ddd8 +0x26:  xor    $0x1,%eax
0813dddb +0x29:  test   %al,%al
0813dddd +0x2b:  je     0813dde6 <+0x34>
0813dddf +0x2d:  mov    $0x0,%eax
0813dde4 +0x32:  jmp    0813de3e <+0x8c>
0813dde6 +0x34:  mov    0x14(%ebp),%eax
0813dde9 +0x37:  mov    %eax,(%esp)
0813ddec +0x3a:  call   0814278c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xae0>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xae0
0813ddf1 +0x3f:  mov    %eax,-0x10(%ebp)
0813ddf4 +0x42:  cmpl   $0x0,-0x10(%ebp)
0813ddf8 +0x46:  jne    0813de01 <+0x4f>
0813ddfa +0x48:  mov    $0x0,%eax
0813ddff +0x4d:  jmp    0813de3e <+0x8c>
0813de01 +0x4f:  mov    -0x10(%ebp),%eax
0813de04 +0x52:  mov    %eax,0x4(%esp)
0813de08 +0x56:  mov    0x8(%ebp),%eax
0813de0b +0x59:  mov    %eax,(%esp)
0813de0e +0x5c:  call   0813de40 <_ZN12advancealtar7DB_Load6SelectERNS_25_CharacAdvanceAltarDbDataE>  ; advancealtar::DB_Load::Select(advancealtar::_CharacAdvanceAltarDbData&)
0813de13 +0x61:  mov    %al,-0x9(%ebp)
0813de16 +0x64:  movzbl -0x9(%ebp),%eax
0813de1a +0x68:  mov    %eax,0x10(%esp)
0813de1e +0x6c:  mov    -0x10(%ebp),%eax
0813de21 +0x6f:  mov    %eax,0xc(%esp)
0813de25 +0x73:  mov    0x10(%ebp),%eax
0813de28 +0x76:  mov    %eax,0x8(%esp)
0813de2c +0x7a:  mov    0xc(%ebp),%eax
0813de2f +0x7d:  mov    %eax,0x4(%esp)
0813de33 +0x81:  mov    0x8(%ebp),%eax
0813de36 +0x84:  mov    %eax,(%esp)
0813de39 +0x87:  call   0813ea46 <_ZN12advancealtar7DB_Load10SendResultEiiRNS_25_CharacAdvanceAltarDbDataEb>  ; advancealtar::DB_Load::SendResult(int, int, advancealtar::_CharacAdvanceAltarDbData&, bool)
0813de3e +0x8c:  leave
0813de3f +0x8d:  ret
```

## 反编译 C

```c
// advancealtar::DB_Load::dispatch @ 0x813ddb2

/* advancealtar::DB_Load::dispatch(int, int, Stream*) */

undefined4 __thiscall
advancealtar::DB_Load::dispatch(DB_Load *this,int param_1,int param_2,Stream *param_3)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  _CharacAdvanceAltarDbData *p_Var4;
  
  cVar1 = DBDispatcher::dispatch((int)this,param_1,(Stream *)param_2);
  if (cVar1 == '\x01') {
    p_Var4 = Stream::GetOutBuffer<advancealtar::_CharacAdvanceAltarDbData>(param_3);
    if (p_Var4 == (_CharacAdvanceAltarDbData *)0x0) {
      uVar3 = 0;
    }
    else {
      bVar2 = (bool)Select(this,p_Var4);
      uVar3 = SendResult(this,param_1,param_2,p_Var4,bVar2);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}
```
