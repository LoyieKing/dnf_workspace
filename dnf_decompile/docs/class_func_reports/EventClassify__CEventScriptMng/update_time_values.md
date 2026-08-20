# update_time_values

`_ZN13EventClassify15CEventScriptMng18update_time_valuesEi`

`EventClassify::CEventScriptMng::update_time_values(int)`

| 类 | 地址 |
|---|---|
| `EventClassify::CEventScriptMng` | `0x0810c5d2` |

> 生成自 df_game_r（elf32-i386），汇编=objdump -d（已去机器码，地址=绝对+函数内偏移），C=Ghidra 反编译。数据地址按 function_reports/report_resolve 规则翻译为 `&符号` / `"字符串"`。

## 汇编

```asm
# 0810c5d2  _ZN13EventClassify15CEventScriptMng18update_time_valuesEi
#           EventClassify::CEventScriptMng::update_time_values(int)
# range [0x0810c5d2, 0x0810c6c9]
0810c5d2 +0x00:  push   %ebp
0810c5d3 +0x01:  mov    %esp,%ebp
0810c5d5 +0x03:  sub    $0x88,%esp
0810c5db +0x09:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0810c5e2 +0x10:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0810c5e7 +0x15:  mov    %eax,-0x18(%ebp)
0810c5ea +0x18:  movl   $&_ZN10GlobalData13s_systemTime_E,(%esp)
0810c5f1 +0x1f:  call   080cbc9e <_GLOBAL__I__ZN10BingoEventC2Ev+0xaeb>  ; global constructors keyed to BingoEvent::BingoEvent()+0xaeb
0810c5f6 +0x24:  sub    $&_ZL14gUnicodeBuffer+0xac54,%eax
0810c5fb +0x29:  mov    %eax,-0x1c(%ebp)
0810c5fe +0x2c:  lea    -0x48(%ebp),%eax
0810c601 +0x2f:  mov    %eax,0x4(%esp)
0810c605 +0x33:  lea    -0x18(%ebp),%eax
0810c608 +0x36:  mov    %eax,(%esp)
0810c60b +0x39:  call   0807e360 <_init+0xc58>
0810c610 +0x3e:  mov    %eax,-0x14(%ebp)
0810c613 +0x41:  lea    -0x74(%ebp),%eax
0810c616 +0x44:  mov    %eax,0x4(%esp)
0810c61a +0x48:  lea    -0x1c(%ebp),%eax
0810c61d +0x4b:  mov    %eax,(%esp)
0810c620 +0x4e:  call   0807e360 <_init+0xc58>
0810c625 +0x53:  mov    %eax,-0x10(%ebp)
0810c628 +0x56:  movl   $0x0,-0xc(%ebp)
0810c62f +0x5d:  mov    -0x14(%ebp),%eax
0810c632 +0x60:  mov    0x8(%eax),%eax
0810c635 +0x63:  test   %eax,%eax
0810c637 +0x65:  js     0810c687 <+0xb5>
0810c639 +0x67:  mov    -0x14(%ebp),%eax
0810c63c +0x6a:  mov    0x8(%eax),%eax
0810c63f +0x6d:  cmp    0xc(%ebp),%eax
0810c642 +0x70:  jge    0810c687 <+0xb5>
0810c644 +0x72:  mov    -0x10(%ebp),%eax
0810c647 +0x75:  mov    0xc(%eax),%eax
0810c64a +0x78:  mov    %eax,%edx
0810c64c +0x7a:  mov    0x8(%ebp),%eax
0810c64f +0x7d:  mov    %dl,0x4c(%eax)
0810c652 +0x80:  mov    -0x10(%ebp),%eax
0810c655 +0x83:  mov    0x14(%eax),%eax
0810c658 +0x86:  imul   $0x2710,%eax,%edx
0810c65e +0x8c:  mov    -0x10(%ebp),%eax
0810c661 +0x8f:  mov    0x10(%eax),%eax
0810c664 +0x92:  add    $0x1,%eax
0810c667 +0x95:  imul   $0x64,%eax,%eax
0810c66a +0x98:  lea    (%edx,%eax,1),%eax
0810c66d +0x9b:  lea    0x121eac0(%eax),%edx
0810c673 +0xa1:  mov    0x8(%ebp),%eax
0810c676 +0xa4:  movzbl 0x4c(%eax),%eax
0810c67a +0xa8:  movzbl %al,%eax
0810c67d +0xab:  add    %eax,%edx
0810c67f +0xad:  mov    0x8(%ebp),%eax
0810c682 +0xb0:  mov    %edx,0x48(%eax)
0810c685 +0xb3:  jmp    0810c6c8 <+0xf6>
0810c687 +0xb5:  mov    -0x14(%ebp),%eax
0810c68a +0xb8:  mov    0xc(%eax),%eax
0810c68d +0xbb:  mov    %eax,%edx
0810c68f +0xbd:  mov    0x8(%ebp),%eax
0810c692 +0xc0:  mov    %dl,0x4c(%eax)
0810c695 +0xc3:  mov    -0x14(%ebp),%eax
0810c698 +0xc6:  mov    0x14(%eax),%eax
0810c69b +0xc9:  imul   $0x2710,%eax,%edx
0810c6a1 +0xcf:  mov    -0x14(%ebp),%eax
0810c6a4 +0xd2:  mov    0x10(%eax),%eax
0810c6a7 +0xd5:  add    $0x1,%eax
0810c6aa +0xd8:  imul   $0x64,%eax,%eax
0810c6ad +0xdb:  lea    (%edx,%eax,1),%eax
0810c6b0 +0xde:  lea    0x121eac0(%eax),%edx
0810c6b6 +0xe4:  mov    0x8(%ebp),%eax
0810c6b9 +0xe7:  movzbl 0x4c(%eax),%eax
0810c6bd +0xeb:  movzbl %al,%eax
0810c6c0 +0xee:  add    %eax,%edx
0810c6c2 +0xf0:  mov    0x8(%ebp),%eax
0810c6c5 +0xf3:  mov    %edx,0x48(%eax)
0810c6c8 +0xf6:  leave
0810c6c9 +0xf7:  ret
```

## 反编译 C

```c
// EventClassify::CEventScriptMng::update_time_values @ 0x810c5d2

/* EventClassify::CEventScriptMng::update_time_values(int) */

void __thiscall
EventClassify::CEventScriptMng::update_time_values(CEventScriptMng *this,int param_1)

{
  tm *ptVar1;
  tm local_78;
  tm local_4c;
  int local_20;
  time_t local_1c;
  tm *local_18;
  
  local_1c = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_20 = CSystemTime::getCurSec((CSystemTime *)GlobalData::s_systemTime_);
  local_20 = local_20 + -0x15180;
  local_18 = localtime_r(&local_1c,&local_4c);
  ptVar1 = localtime_r(&local_20,&local_78);
  if ((local_18->tm_hour < 0) || (param_1 <= local_18->tm_hour)) {
    this[0x4c] = SUB41(local_18->tm_mday,0);
    *(uint *)(this + 0x48) =
         local_18->tm_year * 10000 + (local_18->tm_mon + 1) * 100 + 19000000 +
         (uint)(byte)this[0x4c];
  }
  else {
    this[0x4c] = SUB41(ptVar1->tm_mday,0);
    *(uint *)(this + 0x48) =
         ptVar1->tm_year * 10000 + (ptVar1->tm_mon + 1) * 100 + 19000000 + (uint)(byte)this[0x4c];
  }
  return;
}
```
