# CEventStayTime

`_ZN14CEventStayTimeC1Ev`

`CEventStayTime::CEventStayTime()`

| 类 | 地址 |
|---|---|
| `CEventStayTime` | `0x0816c066` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0816c066  _ZN14CEventStayTimeC1Ev
#           CEventStayTime::CEventStayTime()
# range [0x0816c066, 0x0816c089]
0816c066 +0x00:  push   %ebp
0816c067 +0x01:  mov    %esp,%ebp
0816c069 +0x03:  sub    $0x18,%esp
0816c06c +0x06:  mov    0x8(%ebp),%eax
0816c06f +0x09:  mov    %eax,(%esp)
0816c072 +0x0c:  call   0810ae2c <_ZN10CEventBaseC1Ev>  ; CEventBase::CEventBase()
0816c077 +0x11:  mov    0x8(%ebp),%eax
0816c07a +0x14:  movl   $&_ZTV14CEventStayTime+0x8,(%eax)
0816c080 +0x1a:  mov    0x8(%ebp),%eax
0816c083 +0x1d:  movb   $0x1,0x9(%eax)
0816c087 +0x21:  leave
0816c088 +0x22:  ret
0816c089 +0x23:  nop
```

## 反编译 C

```c
// CEventStayTime::CEventStayTime @ 0x816c066

/* CEventStayTime::CEventStayTime() */

void __thiscall CEventStayTime::CEventStayTime(CEventStayTime *this)

{
  CEventBase::CEventBase((CEventBase *)this);
  *(undefined ***)this = &PTR__CEventStayTime_08b80dc8;
  this[9] = (CEventStayTime)0x1;
  return;
}
```
