# TradeEnd

`_ZN15cUserHistoryLog8TradeEndE15eTradeEndReasoniiii`

`cUserHistoryLog::TradeEnd(eTradeEndReason, int, int, int, int)`

| 类 | 地址 |
|---|---|
| `cUserHistoryLog` | `0x0868507c` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0868507c  _ZN15cUserHistoryLog8TradeEndE15eTradeEndReasoniiii
#           cUserHistoryLog::TradeEnd(eTradeEndReason, int, int, int, int)
# range [0x0868507c, 0x08685129]
0868507c +0x00:  push   %ebp
0868507d +0x01:  mov    %esp,%ebp
0868507f +0x03:  push   %esi
08685080 +0x04:  push   %ebx
08685081 +0x05:  sub    $0x30,%esp
08685084 +0x08:  mov    0x8(%ebp),%eax
08685087 +0x0b:  add    $0x22,%eax
0868508a +0x0e:  movzbl (%eax),%eax
0868508d +0x11:  test   %al,%al
0868508f +0x13:  je     08685123 <+0xa7>
08685095 +0x19:  mov    0x14(%ebp),%eax
08685098 +0x1c:  mov    0x10(%ebp),%edx
0868509b +0x1f:  lea    (%edx,%eax,1),%eax
0868509e +0x22:  mov    %eax,-0x14(%ebp)
086850a1 +0x25:  mov    0x1c(%ebp),%eax
086850a4 +0x28:  mov    0x18(%ebp),%edx
086850a7 +0x2b:  lea    (%edx,%eax,1),%eax
086850aa +0x2e:  mov    %eax,-0x10(%ebp)
086850ad +0x31:  movb   $0x0,-0x9(%ebp)
086850b1 +0x35:  mov    -0x14(%ebp),%edx
086850b4 +0x38:  mov    %edx,%eax
086850b6 +0x3a:  shl    $0x2,%eax
086850b9 +0x3d:  add    %edx,%eax
086850bb +0x3f:  add    %eax,%eax
086850bd +0x41:  cmp    -0x10(%ebp),%eax
086850c0 +0x44:  jge    086850c8 <+0x4c>
086850c2 +0x46:  movb   $0x1,-0x9(%ebp)
086850c6 +0x4a:  jmp    086850dd <+0x61>
086850c8 +0x4c:  mov    -0x10(%ebp),%edx
086850cb +0x4f:  mov    %edx,%eax
086850cd +0x51:  shl    $0x2,%eax
086850d0 +0x54:  add    %edx,%eax
086850d2 +0x56:  add    %eax,%eax
086850d4 +0x58:  cmp    -0x14(%ebp),%eax
086850d7 +0x5b:  jge    086850dd <+0x61>
086850d9 +0x5d:  movb   $0x2,-0x9(%ebp)
086850dd +0x61:  movsbl -0x9(%ebp),%ecx
086850e1 +0x65:  mov    0xc(%ebp),%edx
086850e4 +0x68:  mov    0x8(%ebp),%eax
086850e7 +0x6b:  lea    0x4(%eax),%esi
086850ea +0x6e:  mov    0x8(%ebp),%eax
086850ed +0x71:  lea    0x22(%eax),%ebx
086850f0 +0x74:  mov    0x8(%ebp),%eax
086850f3 +0x77:  mov    (%eax),%eax
086850f5 +0x79:  mov    %ecx,0x1c(%esp)
086850f9 +0x7d:  mov    -0x10(%ebp),%ecx
086850fc +0x80:  mov    %ecx,0x18(%esp)
08685100 +0x84:  mov    -0x14(%ebp),%ecx
08685103 +0x87:  mov    %ecx,0x14(%esp)
08685107 +0x8b:  mov    %edx,0x10(%esp)
0868510b +0x8f:  mov    %esi,0xc(%esp)
0868510f +0x93:  mov    %ebx,0x8(%esp)
08685113 +0x97:  movl   $"Trade-,\"%s\",\"%s\",%d, %d, %d, %d",0x4(%esp)
0868511b +0x9f:  mov    %eax,(%esp)
0868511e +0xa2:  call   0867c8fe <_ZN5CUser10LogHistoryEPKcz>  ; CUser::LogHistory(char const*, ...)
08685123 +0xa7:  add    $0x30,%esp
08685126 +0xaa:  pop    %ebx
08685127 +0xab:  pop    %esi
08685128 +0xac:  pop    %ebp
08685129 +0xad:  ret
```

## 反编译 C

```c
// cUserHistoryLog::TradeEnd @ 0x868507c

/* cUserHistoryLog::TradeEnd(eTradeEndReason, int, int, int, int) */

void __thiscall
cUserHistoryLog::TradeEnd
          (cUserHistoryLog *this,undefined4 param_2,int param_3,int param_4,int param_5,int param_6)

{
  char local_d;
  
  if (this[0x22] != (cUserHistoryLog)0x0) {
    param_3 = param_3 + param_4;
    param_5 = param_5 + param_6;
    local_d = '\0';
    if (param_3 * 10 < param_5) {
      local_d = '\x01';
    }
    else if (param_5 * 10 < param_3) {
      local_d = '\x02';
    }
    CUser::LogHistory(*(CUser **)this,"Trade-,\"%s\",\"%s\",%d, %d, %d, %d",this + 0x22,this + 4,
                      param_2,param_3,param_5,(int)local_d);
  }
  return;
}
```
