# Create

`_ZN15message_counter13CTimeInterval6CreateEv`

`message_counter::CTimeInterval::Create()`

| 类 | 地址 |
|---|---|
| `message_counter::CTimeInterval` | `0x0856f974` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856f974  _ZN15message_counter13CTimeInterval6CreateEv
#           message_counter::CTimeInterval::Create()
# range [0x0856f974, 0x0856f9af]
0856f974 +0x00:  push   %ebp
0856f975 +0x01:  mov    %esp,%ebp
0856f977 +0x03:  push   %ebx
0856f978 +0x04:  sub    $0x14,%esp
0856f97b +0x07:  movl   $0xc,(%esp)
0856f982 +0x0e:  call   08724450 <_Znwj>  ; operator new(unsigned int)
0856f987 +0x13:  mov    %eax,%ebx
0856f989 +0x15:  mov    %ebx,%eax
0856f98b +0x17:  movl   $0x0,(%eax)
0856f991 +0x1d:  movl   $0x0,0x4(%eax)
0856f998 +0x24:  movl   $0x0,0x8(%eax)
0856f99f +0x2b:  mov    %eax,(%esp)
0856f9a2 +0x2e:  call   085702d4 <_GLOBAL__I__ZN15message_counter13CTimeInterval6CreateEv+0x175>  ; global constructors keyed to message_counter::CTimeInterval::Create()+0x175
0856f9a7 +0x33:  mov    %ebx,%eax
0856f9a9 +0x35:  add    $0x14,%esp
0856f9ac +0x38:  pop    %ebx
0856f9ad +0x39:  pop    %ebp
0856f9ae +0x3a:  ret
0856f9af +0x3b:  nop
```

## 反编译 C

```c
// message_counter::CTimeInterval::Create @ 0x856f974

/* message_counter::CTimeInterval::Create() */

CUnixTimeInterval * message_counter::CTimeInterval::Create(void)

{
  CUnixTimeInterval *this;
  
  this = operator_new(0xc);
  *(undefined4 *)this = 0;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  CUnixTimeInterval::CUnixTimeInterval(this);
  return this;
}
```
