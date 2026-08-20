# dispatch

`_ZN12advancealtar9DB_Update8dispatchEiiP6Stream`

`advancealtar::DB_Update::dispatch(int, int, Stream*)`

| 类 | 地址 |
|---|---|
| `advancealtar::DB_Update` | `0x0813ec24` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0813ec24  _ZN12advancealtar9DB_Update8dispatchEiiP6Stream
#           advancealtar::DB_Update::dispatch(int, int, Stream*)
# range [0x0813ec24, 0x0813ec5d]
0813ec24 +0x00:  push   %ebp
0813ec25 +0x01:  mov    %esp,%ebp
0813ec27 +0x03:  sub    $0x28,%esp
0813ec2a +0x06:  mov    0x14(%ebp),%eax
0813ec2d +0x09:  mov    %eax,(%esp)
0813ec30 +0x0c:  call   0814278c <_GLOBAL__I__ZN12advancealtar18convertZipToStringEP5MySQLiPcjS2_j+0xae0>  ; global constructors keyed to advancealtar::convertZipToString(MySQL*, int, char*, unsigned int, char*, unsigned int)+0xae0
0813ec35 +0x11:  mov    %eax,-0xc(%ebp)
0813ec38 +0x14:  cmpl   $0x0,-0xc(%ebp)
0813ec3c +0x18:  jne    0813ec45 <+0x21>
0813ec3e +0x1a:  mov    $0x0,%eax
0813ec43 +0x1f:  jmp    0813ec5c <+0x38>
0813ec45 +0x21:  mov    -0xc(%ebp),%eax
0813ec48 +0x24:  mov    %eax,0x4(%esp)
0813ec4c +0x28:  mov    0x8(%ebp),%eax
0813ec4f +0x2b:  mov    %eax,(%esp)
0813ec52 +0x2e:  call   0813ec5e <_ZN12advancealtar9DB_Update6updateERKNS_25_CharacAdvanceAltarDbDataE>  ; advancealtar::DB_Update::update(advancealtar::_CharacAdvanceAltarDbData const&)
0813ec57 +0x33:  mov    $0x1,%eax
0813ec5c +0x38:  leave
0813ec5d +0x39:  ret
```

## 反编译 C

```c
// advancealtar::DB_Update::dispatch @ 0x813ec24

/* advancealtar::DB_Update::dispatch(int, int, Stream*) */

bool __thiscall
advancealtar::DB_Update::dispatch(DB_Update *this,int param_1,int param_2,Stream *param_3)

{
  _CharacAdvanceAltarDbData *p_Var1;
  
  p_Var1 = Stream::GetOutBuffer<advancealtar::_CharacAdvanceAltarDbData>(param_3);
  if (p_Var1 != (_CharacAdvanceAltarDbData *)0x0) {
    update(this,p_Var1);
  }
  return p_Var1 != (_CharacAdvanceAltarDbData *)0x0;
}
```
