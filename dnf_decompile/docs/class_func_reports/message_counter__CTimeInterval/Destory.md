# Destory

`_ZN15message_counter13CTimeInterval7DestoryEPS0_`

`message_counter::CTimeInterval::Destory(message_counter::CTimeInterval*)`

| 类 | 地址 |
|---|---|
| `message_counter::CTimeInterval` | `0x0856f9b0` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0856f9b0  _ZN15message_counter13CTimeInterval7DestoryEPS0_
#           message_counter::CTimeInterval::Destory(message_counter::CTimeInterval*)
# range [0x0856f9b0, 0x0856f9c3]
0856f9b0 +0x00:  push   %ebp
0856f9b1 +0x01:  mov    %esp,%ebp
0856f9b3 +0x03:  sub    $0x18,%esp
0856f9b6 +0x06:  mov    0x8(%ebp),%eax
0856f9b9 +0x09:  mov    %eax,(%esp)
0856f9bc +0x0c:  call   087244f0 <_ZdlPv>  ; operator delete(void*)
0856f9c1 +0x11:  leave
0856f9c2 +0x12:  ret
0856f9c3 +0x13:  nop
```

## 反编译 C

```c
// message_counter::CTimeInterval::Destory @ 0x856f9b0

/* message_counter::CTimeInterval::Destory(message_counter::CTimeInterval*) */

void message_counter::CTimeInterval::Destory(CTimeInterval *param_1)

{
  operator_delete(param_1);
  return;
}
```
